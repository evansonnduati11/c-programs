#include<iostream>
using namespace std;

int main(){
int bookId;
int dueDate;
int returnDate;
int daysOverdue;
int fineRate;
int fineAmount;

cout<<"enter book id"<<endl;
cin>> bookId;
cout<<"enter due date in yyyymmdd"<<endl;
cin>>dueDate;
cout<<"enter return date in yyyymmdd"<<endl;
cin>>returnDate;

daysOverdue = returnDate-dueDate;

if(daysOverdue<=7){
   fineRate= 20;
}
else if(daysOverdue>=8&& daysOverdue<=14){
   fineRate= 50;
}
else{
    fineRate=100;
}
fineAmount = daysOverdue*fineRate;

cout<<"book id = "<<bookId<<endl;
cout<<"due date = "<<dueDate<<endl;
cout<<"return date = "<<returnDate<<endl;
cout<<"days overdue = "<<daysOverdue<<endl;
cout<<"fine rate= "<<fineRate<<endl;
cout<<"fine amount = "<<fineAmount<<endl;

 return 0;
}
