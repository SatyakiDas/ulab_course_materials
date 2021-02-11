from flask import render_template, request, jsonify
from app import taj_app

@taj_app.route('/')
@taj_app.route('/index')
def index():
    return render_template("base.html")

@taj_app.route('/search')
def search():
    return render_template("search.html")


@taj_app.route('/country_info')
def get_info():
    countryName = request.args.get("countryName", type=str)
    print(countryName)

    info = {
        "Bangladesh": {
            "capital": "Dhaka",
            "lang": "Bengali",
            "currency": "BDT"
        },
        "USA": {
            "capital": "Washington DC",
            "lang": "English",
            "currency": "USD"
        },
        "Canada": {
            "capital": "Ottawa",
            "lang": "English, French",
            "currency": "CAD"
        },
        "Australia": {
            "capital": "Canberra",
            "lang": "English",
            "currency": "AUD"
        }
    }

    return jsonify(info[countryName])
