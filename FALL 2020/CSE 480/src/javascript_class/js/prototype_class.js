function protoDemo() {
    var divToChange = $$("li");
    var index = divToChange.length - 1;
    var intervalID = setInterval(hideList, 100);

    function hideList() {
        // var divToChange = $$("li");
        if (index == -1) {
            clearInterval(intervalID);
        }
        else {
            divToChange[index].hide();
            index--;
        }
    }
}

function createElementDemo() {
    var createdH2 = document.createElement("h2");
    createdH2.innerHTML = "This header has been created.";
    console.log(createdH2);

    var divToInsertBefore = $$(".change-div")[0];
    var bgclr = divToInsertBefore.getStyle("background-color");

    var divWithH3 = $("div-with-h3");
    divWithH3.addClassName("exceptional-div");
    divWithH3.style.backgroundColor = bgclr;

    var bodyOfDoc = $$("body")[0];
    // bodyOfDoc.insertBefore(createdH2, divToInsertBefore);

}