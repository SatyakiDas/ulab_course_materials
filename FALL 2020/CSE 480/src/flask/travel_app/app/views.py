from flask import render_template
from app import t_app

@t_app.route("/")
@t_app.route("/index")
def index():
    return render_template("index.html")
