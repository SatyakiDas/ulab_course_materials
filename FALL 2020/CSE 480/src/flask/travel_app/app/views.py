from flask import render_template, request
from app import t_app

@t_app.route("/")
@t_app.route("/index")
def index():
    return render_template("index.html")

@t_app.route("/show_form")
def show_form():
    return render_template("form_demo.html")

@t_app.route("/form_demo", methods=["GET", "POST"])
def form_demo():
    studentID = request.args.get("student-id", "181011001", type=str)
    print(studentID)

    return "Thank You"
