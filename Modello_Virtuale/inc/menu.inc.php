<div class="float-menu">
  <div class="float-menu-icon">
    <i class="glyphicon glyphicon-menu-hamburger"></i>
  </div>
  <div class="float-menu-content">
    <h4>Lingua</h4><hr>
    <div class="row text-center">
      <?php if(strtolower($GLOBALS['current_page']) != "it"){ ?>
      <div class="col-md-6 col-lg-6 col-xs-6 col-sm-6">
        <a href="/it" class="btn btn-default">Italiano</a>
      </div>
      <?php } ?>
      <?php if(strtolower($GLOBALS['current_page']) != "de"){ ?>
      <div class="col-md-6 col-lg-6 col-xs-6 col-sm-6">
        <a href="/de" class="btn btn-default">Deutsch</a>
      </div>
      <?php } ?>
      <?php if(strtolower($GLOBALS['current_page']) != "fr"){ ?>
      <div class="col-md-6 col-lg-6 col-xs-6 col-sm-6">
        <a href="/fr" class="btn btn-default">Francais</a>
      </div>
      <?php } ?>
    </div>
    <hr>
    <h4>Temi</h4><hr>
    <div class="row">
      <div class="col-md-4 col-lg-4 col-xs-4 col-sm-4">
        <a class="btn btn-theme1" onclick="changeColorLED('#212121', '#ABABAB', '#FF0000');">Tema 1</a>
      </div>
      <div class="col-md-4 col-lg-4 col-xs-4 col-sm-4">
        <a class="btn btn-theme2" onclick="changeColorLED('#212121', '#FFC107', '#FF6F00');">Tema 2</a>
      </div>
      <div class="col-md-4 col-lg-4 col-xs-4 col-sm-4">
        <a class="btn btn-theme3" onclick="changeColorLED('#D2D2D2', '#8F8F8F', '#3600FF');">Tema 3</a>
      </div>
    </div>
    <hr>
    <h4 class="hidden-xs hidden-sm">Custom colors</h4><hr class="hidden-xs hidden-sm">
    <div class="row hidden-xs hidden-sm">
      <div class="col-md-4 col-lg-4">
        <label for="1">Colore Sfondo</label><br />
        <input class="jscolor" id="bgCol" class="form-control" value="212121">
      </div>
      <div class="col-md-4 col-lg-4">
        <label for="2">LED Spento</label><br />
        <input class="jscolor" id="ledCol" class="form-control" value="ABABAB">
      </div>
      <div class="col-md-4 col-lg-4">
        <label for="3">LED Acceso</label><br />
        <input class="jscolor" id="onLedCol" class="form-control" value="FF0000">
      </div>
    </div>
    <br>
    <div class="row hidden-xs hidden-sm">
      <div class="col-md-12 col-lg-12 text-right">
        <a class="btn btn-info" id="customCol">Salva</a>
      </div>
    </div>

    <?php if(isset($_SESSION['logged_in']) && $_SESSION['logged_in']){ ?>
    <hr>
    <h4>Manage LED</h4><hr>
    <div class="row">
      <div class="col-md-12 col-lg-12 text-center">
        <a class="btn btn-danger" onclick="manageLED();">Manage LEDs</a>
        <a class="btn btn-default" onclick="location.reload();"><i class="glyphicon glyphicon-refresh"></i></a>
      </div>
    </div><br>
    <?php } ?>
  </div>
</div>
