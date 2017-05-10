<?php
// Importing main CONFIG class
require 'Config.php';

/**
 * Class that manage the configurations for the classes
 * @author Alessandro Narciso
 * @date 10.02.2017
 */
class Auth extends Config {

  public $errors = array();

  public function __construct (){
    // Controllo se è stata effettuata una richiesta in get
    if($_SERVER["REQUEST_METHOD"] == "GET" && isset($_GET)){
      // Eseguo la funzione di logout solo se è stata effettuata una richiesta di logout e l'utente è già loggato
      if(isset($_GET['logout']) && $_SESSION['logged_in'] == 1){
        $this->logoutSession();
      }
    }

    // Controllo se è stata effettuata una richiesta in post
    if($_SERVER["REQUEST_METHOD"] == "POST" && isset($_POST)){
      // Controllo se è stato effettuata una richiesta di login
      if(isset($_POST['auth_request'])){
        // Se è stato effettuato correttamente, allora mando i dati del POST alla funzione
        $this->loginPost($_POST['auth__username'], $_POST['auth__password']);
      }
    }
  }

  /**
   * Function that login with POST data
   */
  private function loginPost($username, $password){
    if (empty($username)) {
      $this->errors[] = "Il campo dell'username è vuoto.";
    } else if (empty($password)) {
      $this->errors[] = "Il campo della password è vuoto.";
    } else {
      $username = trim($username);
      $password = trim($password);

      if($this->databaseConnection()){
        // database query, getting all the info of the selected user
        $q_user = $this->db_connection->prepare('SELECT * FROM admin WHERE admin_username = :admin_username');
        $q_user->bindValue(':admin_username', $username, PDO::PARAM_STR);
        $q_user->execute();
        // get result row (as an object)
        $res = $q_user->fetchObject();
      }

      // if this user not exists
      if (!isset($res->admin_id)) {
        // was MESSAGE_USER_DOES_NOT_EXIST before, but has changed to MESSAGE_LOGIN_FAILED
        // to prevent potential attackers showing if the user exists
        $this->errors[] = "Login fallito.";
      } else {
        // write user data into PHP SESSION [a file on your server]
        $_SESSION['admin_id'] = $res->admin_id;
        $_SESSION['admin_username'] = $res->admin_username;
        $_SESSION['logged_in'] = true;
      }
    }
  }

  /**
   * Function that logout from the session
   */
  private function logoutSession(){
    $_SESSION = null;
    session_destroy();
    session_start();
  }
}
