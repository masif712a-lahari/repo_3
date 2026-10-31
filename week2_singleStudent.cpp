#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout<<"\t==================================================\n";
    cout<<"\t\tSTUDENT RESULT & MANAGEMENT SYSTEM\n";
    cout<<"\t==================================================\n";
    /**
    NAME: MUZAMMIL-UL-QAMAR ASIF
    CMS_ID: 023-26-0096
    SECTION: D
    SUBJECT: Programming LAB
    DATE: 15-Sep-2026

    */
    int RoolNo;
    string Name;
    float mark1,mark2,mark3,mark4,mark5;
    cout<<"Enter your Name : ";
    getline(cin,Name);
    cout<<"Enter your Rool Number : ";
    cin>>RoolNo;
    cout<<"Enter Marks of Subject_1 : ";
    cin>>mark1;
    cout<<"Enter Marks of Subject_2 : ";
    cin>>mark2;
    cout<<"Enter Marks of Subject_3 : ";
    cin>>mark3;
    cout<<"Enter Marks of Subject_4 : ";
    cin>>mark4;
    cout<<"Enter Marks of Subject_5 : ";
    cin>>mark5;
    float Total=mark1+mark2+mark3+mark4+mark5;
    float Percentage=(Total/(5*100.00))*100.00;
    cout<<"\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"\t   Your Percentage is : "<<static_cast<int>(Percentage)<<"%"<<endl;
    cout<<"\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";


    return 0;
}
