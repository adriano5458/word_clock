<?php
  if($_SERVER['HTTP_X_REQUESTED_WITH'] == 'XMLHttpRequest' && $_SERVER["REQUEST_METHOD"] == "POST") {
      // Start session
      session_start();

      // Controllo i token
      if($_POST['token'] == $_SESSION['token']) {
          // Controllo l'azione
          if (isset($_POST['action']) && $_POST['action'] != NULL) {
              // Converto e "metto in sicurezza" il post
              $action = stripslashes(strip_tags(trim(htmlspecialchars($_POST['action']))));
              // Prendo l'ID del pc
              $pcID = $_SESSION['PC_ID'];
              // Prendo l'ID dell'utente
              $userID = $_SESSION['user_id'];
              // $action = "getTimeUpdate";
              // $pcID = 1;
              // $userID = 1;


              $newPCN = stripslashes(strip_tags(trim(htmlspecialchars($_POST['cpcn']))));

              /**
               * Connect to DB
               */
              function connect_db(){
                  try {
                      // Mi collego al db
                      $db = new PDO('mysql:host=localhost;dbname=nextwar;charset=utf8', 'root', 'root');
                      $db->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
                      $db->setAttribute(PDO::ATTR_EMULATE_PREPARES, false);
                      // return
                      return $db;
                  } catch (PDOException $pe) {
                      die("Error connecting to database!");
                  }
              }


              /*                                    *\
               * ----- Selecting action to do ----- *
              \*                                    */

              // Svuotare la RAM
              if($action == 'empty_RAM'){
                  // calling function
                  $data = addVirusProd($pcID, $data_v);
                  // return the success of the function
                  print json_encode($data);
              // Set tour to finished
              } else if ($action == 'setTourFinished'){
                  // calling function
                  $data = setTourFinished($pcID);
                  // return the success of the function
                  print json_encode($data);
              // Se uno prova a inserire una funzione non esistente
              } else {
                // return error
                echo 'error';
              }
            } else {
              echo 'error';
              header('Location: /');
          }
      } else {
        echo 'error';
        header('Location: /');
      }
  } else {
    echo 'error';
    header('Location: /');
  }
?>
