/**
 * Color global variables
 */
var bgColor, ledColor, onLedColor;

/**
 * Create a cookie
 * http://stackoverflow.com/a/24103596
 */
function createCookie(name,value,days) {
    var expires = "";
    if (days) {
        var date = new Date();
        date.setTime(date.getTime() + (days*24*60*60*1000));
        expires = "; expires=" + date.toUTCString();
    }
    document.cookie = name + "=" + value + expires + "; path=/";
}

/**
 * Read a cookie
 * http://stackoverflow.com/a/24103596
 */
function readCookie(name) {
    var nameEQ = name + "=";
    var ca = document.cookie.split(';');
    for(var i=0;i < ca.length;i++) {
        var c = ca[i];
        while (c.charAt(0)==' ') c = c.substring(1,c.length);
        if (c.indexOf(nameEQ) == 0) return c.substring(nameEQ.length,c.length);
    }
    return null;
}

/**
 * Erase a cookie
 * http://stackoverflow.com/a/24103596
 */
function eraseCookie(name) {
    createCookie(name,"",-1);
}

/**
 * Turns on or off the night mode
 */
function changeColorLED(bgCol = "#212121", ledCol = "#ABABAB", onLedCol = "#FF0000") {
    if(bgCol == null) bgCol = "#000";
    if(ledCol == null) ledCol = "#fff";
    if(onLedCol == null) onLedCol = "#f00";

    // If colors are the same, it's not allowed to use them
    if(bgCol == ledCol || ledCol == onLedCol || onLedCol == bgCol){
      return false;
    }

    // Setto il colore allo sfondo
    $(".container").css("backgroundColor", bgCol);

    // Definisco le variabili con i colori
    bgColor = bgCol;
    ledColor = ledCol;
    onLedColor = onLedCol;
}

// Document ready "main"
$(document).ready(function() {
  $(".float-menu-icon").click(function() {
    $(".float-menu-content").toggleClass("float-menu-content-opened");
    $(".float-menu-icon").toggleClass("float-menu-icon-opened");
    if($(".float-menu-content").hasClass("float-menu-content-opened")){
      $(".float-menu-icon > i").removeClass("glyphicon-menu-hamburger");
      $(".float-menu-icon > i").addClass("glyphicon-remove");
    } else {
      $(".float-menu-icon > i").removeClass("glyphicon-remove");
      $(".float-menu-icon > i").addClass("glyphicon-menu-hamburger");
    }
  });

  $("#customCol").click(function() {
    changeColorLED("#"+$('#bgCol').val(), "#"+$('#ledCol').val(), "#"+$('#onLedCol').val())
  });

  changeColorLED();
});
