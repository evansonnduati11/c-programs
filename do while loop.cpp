#include<iostream>
using namespace std;

int main()
{
 int i;
 do {
    cout<<"enter a non negative number"<<endl;
     cin>>i;
     if(i<0){
        cout<<"the integer you entered is negative"<<endl;
 }
} while (i<0);

return 0;
}


