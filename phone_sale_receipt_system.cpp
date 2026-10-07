#include<iostream>
using namespace std;
#include<string>

int main ()
{
    string customer_name;
    string  phone_model;
    int quantity_bought;
    float price_per_phone;
    float total_sales_amount;

    cout<< "enter customer name";
    getline(cin,customer_name);
    cout<<"enter phone model";
    getline(cin,phone_model);
    cout<<"enter quantity bought";
    cin>> quantity_bought;
    cout<<"enter price per phone";
    cin>> price_per_phone;

    total_sales_amount= quantity_bought * price_per_phone;
    cout<<"customer name is "<<customer_name << endl;
    cout<<"phone model is "<<phone_model << endl;
    cout<<"price per phone = "<<price_per_phone<< endl;
    cout<<"quantity bought = "<<quantity_bought<< endl;
    cout<<"total sales amount "<<total_sales_amount << endl;
    return 0;
}
