
"""
You’re a Jr. Dev working at a company that has just been granted a contract for building
a teacher’s admin tool for the local high school! Different teams have been assembled
to take on different parts of the app, your team will be working on the dashboard for the
school principal.
One specific feature your client wanted was to be able to quickly generate and visualize
report cards from .csv files containing the student courses and grades. The front-end
developers in your team are already working on displaying the reports, but they don’t
know how to parse .csv files and would rather be working with JSON data that is already
processed. This is where you come in.
Your manager needs you to build a tool that reads these .csv files, parses them,
calculates the students’ final grades and generates the report as a structured JSON file
that can easily be consumed by the front-end.

"""

import pandas as pd
import json


df = pd.read_csv('marks.csv')


# block 1 - simple stats

print(df['test_id'], df['student_id'], df['mark'])

mean1 = df['mark'].mean()

print(mean1)


data = {
  "students": [
    {
      "id": 1,
      "name": "A",
      "totalAverage": 72.03,
      "courses": [
        {
          "id": 1,
          "name": "Biology",
          "teacher": "Mr. D",
          "courseAverage": 90.1
        },
        {
          "id": 3,
          "name": "Math",
          "teacher": "Mrs. C",
          "courseAverage": 74.2
        },
        {
          "id": 2,
          "name": "History",
          "teacher": "Mrs. P",
          "courseAverage": 51.8
        }
      ]
    },
    {
      "id": 2,
      "name": "B",
      "totalAverage": 62.15,
      "courses": [
        {
          "id": 1,
          "name": "Biology",
          "teacher": "Mr. D",
          "courseAverage": 50.1
        },
        {
          "id": 3,
          "name": "Math",
          "teacher": "Mrs. C",
          "courseAverage": 74.2
        }
      ]
    },
    {
      "id": 3,
      "name": "C",
      "totalAverage": 72.03,
      "courses": [
        {
          "id": 1,
          "name": "Biology",
          "teacher": "Mr. D",
          "courseAverage": 90.1
        },
        {
          "id": 2,
          "name": "History",
          "teacher": "Mrs. P",
          "courseAverage": 51.8
        },
        {
          "id": 3,
          "name": "Math",
          "teacher": "Mrs. C",
          "courseAverage": 74.2
        }
      ]
    }
  ]
}

with open("output.json", "w") as write_file:
    json.dump(data, write_file)
