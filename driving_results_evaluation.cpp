#include<iostream>
using namespace std;
#include <string>
int main()
{
    string student_name;
    float theory_test_marks;
    float practical_test_marks;
    float average_score;

    cout<<"enter student name";
    getline(cin,student_name);
    cout<<"enter theory test marks";
    cin>> theory_test_marks;
    cout<<"enter practical test marks";
    cin>> practical_test_marks;
    average_score = (theory_test_marks + practical_test_marks)/2;

    if(average_score>=50){
        cout<<"PASSED"<<endl;
    }
        else{
            cout<<"FAILED"<<endl;
        }

    cout<<"student name is"<<student_name<<endl;
    cout<<"theory test marks ="<<theory_test_marks<<endl;
    cout<<"practical test marks ="<<practical_test_marks<<endl;
    cout<<"average score ="<<average_score<<endl;
   return 0;
}


