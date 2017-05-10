<?php
// Importing main CONFIG class
require 'Config.php';
// Importing main token class
require 'token-gen.php';

/**
 * Class that manage the word clock panel
 * @author Alessandro Narciso
 * @date 10.02.2017
 */
class Manager extends Config {

  public $errors = array();

  public function __construct (){
    $token_temp = generate_token();
    $_SESSION['ajax_token'] = $token_temp;
  }
}
