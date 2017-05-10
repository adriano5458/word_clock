/**
 * LED Manager
 */
var startedManagerLED = false;

/**
 * Gestione pannello di amministrazione sito - fisico
 */
function manageLED(){
  // Controllo se la gestione dei LED è gia stata attivata
  if(!startedManagerLED){
    // Passo tutti gli elementi nella griglia per aggiungerli l'elemento a
    for(var x = 0; x <= 120; x += 10){
      var els = document.getElementById(x).getElementsByTagName("td");
      for(var y = 0; y < 15; y++){
        var dum = els[y].innerHTML;
        els[y].innerHTML = "<a data-pos='"+((x/10)+1)+","+(y+1)+"'>" + dum + "</a>";
      }
    }

    // Setto a true la gestione dei LED attiva
    startedManagerLED = true;
  } else {
    console.log("Manager is started yet!");
  }
}

// Document ready "main"
$(document).ready(function() {
  console.log("Diocane");
  $("td").click(function() {
    // Prendo il valore della posizione
    var data = $(this).children().attr("data-pos");
    // For some browsers, `attr` is undefined; for others, `attr` is false. Check for both.
    if (typeof data !== typeof undefined && data !== false) {
      console.log("Tu non infami");
      // Splitto la stringa per capire la posizione
      var pos = data.split(",");

      stopS();
      console.log("a: "+pos[0]+" b: "+pos[1]);
      $(function() {genWord(pos[0]*10, pos[1], pos[1]+1, on);});
    } else {
      console.log("Diocane vaffanculo infame");
    }
  });
});
