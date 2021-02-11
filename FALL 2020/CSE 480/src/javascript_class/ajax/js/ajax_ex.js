$(document).ready(function(){
    $("#username_submit").click(function(){
        $.get('https://www.w3schools.com/js/ajax_info.txt', {username: $("#username").val()}, function(data){ 
            $('#check_result').html(data);
        }); 
    });

    var response = eval({"success":true,"message":"User registered successfully","data":{"username":"01767284445"}});

    console.log(response["data"]);
});