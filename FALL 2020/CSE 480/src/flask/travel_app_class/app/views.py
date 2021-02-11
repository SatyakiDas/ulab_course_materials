from flask import render_template, jsonify, request
from app import t_app
from app.froms import CountrySearch
from app.country_info import get_country_info

@t_app.route("/")
@t_app.route("/index")
def index():
    return render_template("index.html")

@t_app.route("/europe")
def europe():
    return "ইউরোপ ভ্রমণে স্বাগতম।"


@t_app.route("/temp_index")
def t_ind():
        return render_template("base.html", bar = "This is a foo")


@t_app.route("/get_info")
def get_country_info():
    countryName = request.args.get("countryName", "USA", type=str)
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
        }
    }

    return jsonify(info[countryName])


@t_app.route("/search", methods=["GET", "POST"])
def search():
    # info = None
    # searchForm = CountrySearch()
    # if searchForm.validate_on_submit():
    #     country = searchForm.countryName.data
    #     info = get_country_info(country)
    #     print(info)
    # return render_template("search.html", title="Search for a country", form=searchForm, countryInfo=info)
    return render_template("search.html")