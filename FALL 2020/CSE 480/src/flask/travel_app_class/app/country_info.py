def get_country_info(countryName):
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

    return info[countryName]