/**
* Main function AJAX/PHP
*/
function aj_p (act_ion) {
  var aj_data = {
    'action': act_ion,
    'token': '<?php echo $token_tmp; ?>', 
  };

  $.ajax({
    type: "POST",
    url: 'cgi-bin/aj.php',
    dataType: "json",
    cache: false,
    data: aj_data, success:
    function(data) {
      if(data[0] == "getData_RAM") {
        swal("<?php echo PPP_TOUR_TITLE; ?>", "<?php echo PPP_TOUR_TEXT; ?>", "success");
      } else if(data == "error") {
        console.log("Fatal error calling server or database!");
      } else {
        console.log("Undefined fatal error!");
      }
    }
  });
}
