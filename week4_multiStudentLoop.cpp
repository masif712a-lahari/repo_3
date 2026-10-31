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
    int NoStudent,count;
    cout<<"\tEnter number of student : ";
    cin>>NoStudent;
    float OverAll_Percentage=0.00f,OverAll_Total=0.00f;
    for(count =1; count<=NoStudent; count++)
    {

        int RoolNo;
        string Name;
        float mark1,mark2,mark3,mark4,mark5;
        cout<<"\tEnter your Name : ";
        cin.ignore();
        getline(cin,Name);
        cout<<"\tEnter your Rool Number : ";
        cin>>RoolNo;
        cout<<"\tEnter Marks of Subject_1 : ";
        cin>>mark1;
        cout<<"\tEnter Marks of Subject_2 : ";
        cin>>mark2;
        cout<<"\tEnter Marks of Subject_3 : ";
        cin>>mark3;
        cout<<"\tEnter Marks of Subject_4 : ";
        cin>>mark4;
        cout<<"\tEnter Marks of Subject_5 : ";
        cin>>mark5;
        float Total=mark1+mark2+mark3+mark4+mark5;
        float Percentage=(Total/(5*100.00))*100.00;
        OverAll_Total+=Total;
        cout<<"\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout<<"\t   Your Name : "<<Name<<endl;
        cout<<"\t   Your Roll No : "<<RoolNo<<endl;
        cout<<"\t   Your Percentage is : "<<static_cast<int>(Percentage)<<"%"<<endl;
        bool pass=false;
        pass=((Percentage>=50)&&(mark1>=40)&&(mark2>=40)&&(mark3>=40)&&(mark4>=40)&&(mark5>=40));
        if(Percentage>=80)
        {
            cout<<"\t   Your Grade is : A\n";
        }
        else if(Percentage>=70)
        {
            cout<<"\t   Your Grade is : B\n";
        }
        else if(Percentage>=60)
        {
            cout<<"\t   Your Grade is : C\n";
        }
        else if(Percentage>=50)
        {
            cout<<"\t   Your Grade is : D\n";
        }
        else if(Percentage<50)
        {
            cout<<"\t   Your Grade is : F\n";
        }

        cout<<"\t\t\t\t---------------------\n";
        if(pass)
            cout<<"\t\t\t\t\tPASS\n";
        else
            cout<<"\t\t\t\t\tFAIL\n";
        cout<< "\t\t\t\t---------------------\n";
        cout<<"\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout<<"\t==================================================\n";
        if(count==NoStudent)
        {
            cout<<"\tClass Result"<<endl;
            cout<<"\tNumber of Student : "<<NoStudent<<endl;
            OverAll_Percentage=((OverAll_Total/500.00f)*100.00f);
            cout<<"\tOverall Total : "<<static_cast<int>(OverAll_Total)<<endl;
            cout<<"\tOverall Average : "<<static_cast<int>(OverAll_Total)/NoStudent<<endl;
            cout<<"\tOverall Percentage : "<<static_cast<int>(OverAll_Percentage/NoStudent)<<"%"<<endl;
            
        }
        cout<<"\t==================================================\n";

    }
    return 0;
}
