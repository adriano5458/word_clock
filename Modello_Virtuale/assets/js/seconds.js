/**
 *
 * Gestione Secondi nel WordClock in italiano
 */
var seconds;
var secInter;
$(document).ready(function() {
  $(function() {secStart();});

  window.secStart = function(){
    secInter = setInterval(secManager,100);
  }

 window.secManager = function() {
   seconds = new Date().getSeconds(); //Secondi attuali
   free();
   if(seconds >= 55){
     document.getElementById("s55").style.color = onLedColor;
   }
   if(seconds >= 50){
     document.getElementById("s50").style.color = onLedColor;
   }
   if(seconds >= 45){
     document.getElementById("s45").style.color = onLedColor;
   }
   if(seconds >= 40){
     document.getElementById("s40").style.color = onLedColor;
   }
   if(seconds >= 35){
     document.getElementById("s35").style.color = onLedColor;
   }
   if(seconds >= 30){
     document.getElementById("s30").style.color = onLedColor;
   }
   if(seconds >= 25){
     document.getElementById("s25").style.color = onLedColor;
   }
   if(seconds >= 20){
     document.getElementById("s20").style.color = onLedColor;
   }
   if(seconds >= 15){
     document.getElementById("s15").style.color = onLedColor;
   }
   if(seconds >= 10){
     document.getElementById("s10").style.color = onLedColor;
   }
   if(seconds >= 5){
     document.getElementById("s5").style.color = onLedColor;
   }
 }

 function free(){
   for(var i = 5; i < 60; i += 5){
     document.getElementById("s"+i).style.color = ledColor;
   }
 }
});

function stopS(){
 clearInterval(secInter);
 secInter = null;
}
