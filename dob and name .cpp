#include<iostream>
#include<string>
using namespace std;

int main()
{
   string name;
   string date_of_birth;


   cout<< "enter name"<<endl;
   getline(cin, name);

   cout <<"enter date_of_birth"<<endl;
   getline (cin, date_of_birth);

   cout <<" name is " <<name<<endl;
   cout <<"date of birth is "<< date_of_birth<<endl;
   return 0;

}
