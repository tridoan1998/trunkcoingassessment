

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

import csv
file = open("file.csv")

type(file)

csvreader = csv.reader(file)

header = []
header = next(csvreader)
print(header)

rows = []
for row in csvreader:
    rows.append(row)

print(rows)
file.close()

