from flask_wtf import FlaskForm
from wtforms import StringField
from wtforms.validators import DataRequired

class CountrySearch(FlaskForm):
    countryName = StringField('countryName', validators=[DataRequired()])
