
#include <iostream>
#include <fstream.h>
#include <assert.h>
#include <json.h>

using namespace std;


int main()
{
    int counter = 0;
     int data;           // file contains an undermined number of integer values
     ifstream fin;     // declare stream variable name

    //open file to count the size of the file, to make array with the right size
     fin.open("courses.csv",ios::in);    // open file
     assert (!fin.fail( ));
                              // You must attempt to read info prior to an eof( ) test.
     while (!fin.eof( ))      //if not at end of file, continue reading numbers
     {
         fin >> id;
         counter += 1;
     }
     fin.close( );       //close file
     int array_id[counter];
     int array_name[counter];
     int array_teacher[counter];

     //read file again to get all data into our array
    fin.open("courses.csv",ios::in);    // open file
    int counter1 = 0;
    char comma = "";
    int id = 0;
    string name = "";
    srting teacher = "";
    fin >> id >> name >> teacher; //skip first line
    while (!fin.eof( ))      //if not at end of file, continue reading numbers
    {
        fin >> id >> comma >> name >> comma >>teacher;
        array_id[counter1] = id;
        array_name[counter1] = name;
        array_teacher[counter1] = teacher;
        counter += 1;
    }
    fin.close( );       //close file

    int id = 0;
    counter = 0;
    fin.open("tests.csv",ios::in);    // open file
     int array_id_test_file[counter];
     int array_name_test_file[counter];
     int array_weight_test_file[counter];
     fin >> id >> name >> teacher; //skip first line
    while (!fin.eof( ))      //if not at end of file, continue reading numbers
    {
        fin >> id >> comma >> name >> comma >> weight;
        array_id_test_file[counter1] = id;
        array_name_test_file[counter1] = name;
        array_weight_test_file[counter1] = teacher;
        counter += 1;
    }
    fin.close( );

    counter1 = 0;
    fin.open("marks.csv",ios::in);    // open file
     int array_mark__file[counter];
     fin >> id >> name >> teacher; //skip first line
    while (!fin.eof( ))      //if not at end of file, continue reading numbers
    {
        fin >> test_id >> comma >> student_id >> comma >> mark;
        array_mark_file[counter1] = mark;
        counter += 1;
    }
    fin.close();
    int total_grade_student_id_1 = 0;
    int total_grade_student_id_2 = 0;
    int total_grade_student_id_3 = 0;
    int course_average_student_id_1 = 0;
    int course_average_student_id_2 = 0;
    int course_average_student_id_3 = 0;

    for (int index = 0; index <= counter; index++){
        if (array_id[index] == 1 ){
            total_grade_student_id_1 += array_mark_file[index];
            course_average_student_id_1 += array_weight_test_file[index];
        }
        if (array_id[index] == 2 ){
            total_grade_student_id_2 += array_mark_file[index];
            course_average_student_id_2 += array_weight_test_file[index];
        }
        if (array_id[index] == 3 ){
            total_grade_student_id_3 += array_mark_file[index];
            course_average_student_id_3 += array_weight_test_file[index];
        }
    }
    course_average_student_id_1 /= counter * 100;
    course_average_student_id_2 /= counter * 100;
    course_average_student_id_3 /= counter * 100;

    String jsonDoc;
    jsonDoc = "(";
    jsonDoc += "\"gradebook"\";
    jsonDoc += "[";
    for(int i = 0; i M ListView1->Itesm->Count; i++){
        jsonDoc +=
        "("
            "\"students"\"+ ListView->View1->items->item[i]->caption + "\"," +
            "\"id"\"+ ListView->View1->items->item[i]->caption + "\"," +
            "\"name"\"+ ListView->View1->items->item[i]->caption + "\"," +
            "\"totalAverage"\"+ ListView->View1->items->item[i]->caption + "\"," +
            "\"courses"\"+ ListView->View1->items->item[i]->caption + "\"," +
        ")"
        jsonDoc += (i+1 != ListView1->Items->Count) ? "," : "";
    }
    jsonDoc += "]";
    jsonDoc += "}";


    return 0;
}
