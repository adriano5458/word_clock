```javascript  
function genWord(row, min, max, color) {
  // Prendo tutti gli elemnti della riga
  var els = document.getElementById(row).getElementsByTagName("td");
  for(var x = min+1; x <= max+1; x++){
    // Applico il colore alle lettere da accendere / spegnere
    els[x].style.color = color;
    if(color == on) els[x].style.textShadow = "0 3px 6px rgba(0,0,0,0.16), 0 3px 6px rgba(0,0,0,0.23)";
    if(color == off) els[x].style.textShadow = "";
  }
}
```
