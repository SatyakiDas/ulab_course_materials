function changeSecondParagraph() {
    // var pid = document.getElementById("myid");
    // pid.style.backgroundColor = "yellow";
    $(".myclass").css("background-color", "yellow");
}

// $(document).ready(changeSecondParagraph);
// $().ready(changeSecondParagraph);
// $(changeSecondParagraph);
// $(function changeFirstParagraph() {
//     $("p").css("background-color", "yellow");
// });
// jQuery(changeSecondParagraph);


function changeThirdParagraph() {
    // var testPara = $("#test-id");
    // var testPara = $("p")[2];
    // $("p:eq(2)").css("background-color", "green");
    var testPara = $("p:eq(2)");
    // console.log(testPara);
    testPara.css("background-color", "green");
    // testPara.style.backgroundColor = "green";
    // var thirdPara = $("p")[2];
    // thirdPara.css("background-color", "red");
}

$(document).ready(function() {
    var clicks = 0;

    $("#counter-btn").click(function () {
        clicks++;
        $("#counter-result").text(clicks);
    });


    $("button").bind("click", function(event) {
        if(event.target.innerText === "Each Demo") {
            $("p").each(function(index) {
                $(this).text((index+1));
            });
        }
    });
    $("#left").click(function(){ 
        $(".block").animate({left: "-=50px"}, "slow");
    });
    $("#right").click(function(){ 
        $(".block").animate({left: "+=50px"}, "slow");
    });
    // $("p").each(function(index) {
    //     $(this).text((index+1));
    // });
    // $("h4").dblclick(mouseOutFunc);
    // $("h4").hover(mouseOverFunc, mouseOutFunc);
    // $("h4").mouseover(mouseOverFunc);
    // $("h4").mouseout(mouseOutFunc);
    // $("p").bind("click", function (event) {
    //     console.log(this.tagName);
    //     // if (event.target.innerText === "This is a normal paragraph") {
    //     //     $("#set-content").text($(this).html());
    //     // }
    // });
    // $("#myid").click(function() {
    //     // console.log();
    //     $("#set-content").text($(this).html());
    // });

    // $("#chng-2nd").click(changeSecondParagraph);
    // $("#chng-3rd").click(changeThirdParagraph);
    // $(document).keyup(function(event) {
    //     console.log(event);
    // });
});



function mouseOutFunc() {
    $("ul").hide();
}

function mouseOverFunc() {
    $("ul").show();
}