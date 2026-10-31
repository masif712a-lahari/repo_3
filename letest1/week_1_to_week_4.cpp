#include <iostream>
#define RED "\033[32m"
using namespace std;
int main()
{

    cout << RED << "\t===================================================\n";
    cout << "\t\t STUDENT RESULT & MANAGEMENT SYSTEM \n";
    cout << "\t===================================================\n";

    string stop;
 do{
     int rool_number;
     string name;
     float mark1, mark2, mark3, mark4, mark5;
     double total_marks, percentage_marks;
     cout << "Enter rool number : ";
     cin >> rool_number;
     cout << "Enter your Name : ";
     cin.ignore();
     getline(cin, name);
     cout << "Enter mark 1 : ";
     cin >> mark1;
     cout << "Enter mark 2 : ";
     cin >> mark2;
     cout << "Enter mark 3 : ";
     cin >> mark3;
     cout << "Enter mark 4 : ";
     cin >> mark4;
     cout << "Enter mark 5 : ";
     cin >> mark5;
     total_marks = mark1 + mark2 + mark3 + mark4 + mark5;
     percentage_marks = (total_marks / 500) * 100;
     cout << "Name : " << name << endl;
     cout << "Roll Number : " << rool_number << endl;
    //  cout << "marks 1 : " << mark1 << endl;
    //  cout << "marks 2 : " << mark2 << endl;
    //  cout << "marks 3 : " << mark3 << endl;
    //  cout << "marks 4 : " << mark4 << endl;
    //  cout << "marks 5 : " << mark5 << endl;
     cout << "Total marks : " << static_cast<int>(total_marks) << endl;
     cout << "Percentage marks : " << static_cast<int>(percentage_marks) << "%" << endl<<"Grade : ";
     if (percentage_marks >= 0 && percentage_marks <= 100)
     {
         if (percentage_marks >= 92)
         {
             cout << "\033[35m" << "A" << endl;
         }
         else if (percentage_marks >= 80)
         {
             cout << "\033[35m" << "B" << endl;
         }
         else if (percentage_marks >= 65)
         {
             cout << "\033[35m" << "C" << endl;
         }
         else if (percentage_marks >= 50)
         {
             cout << "\033[35m" << "D" << endl;
         }
         else if (percentage_marks < 50)
         {
             cout << "\033[35m" << "F" << endl;
         }
         else
         {
             cout << "dead code";
         }
    }
    else
    {
        cout << "\nInvalid percentage! \n";
    }

    if (percentage_marks >= 50 && mark1 >= 40 && mark2 >= 40 && mark3 >= 40 && mark4 >= 40 && mark5)
    {
        cout << "\033[34m" << "PASS CONGERTULATION " << endl;
    }
    else
    {
        cout << "\033[31m" << "Fail!" << endl;
    }

    cout<< "Are you have other student (yes|no) : ";
    cin.ignore();
    getline(cin, stop);
}while(stop=="Yes"||stop=="YES"||stop=="yes");

    // fabonachi
    // 0 1 1 2 3 5 8 13 21
    //     cout << "enter n : ";
    //     int n;
    //     cin >> n;
    //     int n1 = 0, n2 = 1, sum = 0;
    //    // cout << "0 1";
    //     for (int i = 1; i <= n; i++)
    //     {
    //         sum = n1 + n2;
    //         cout << " " << sum;
    //         n1 = n2;
    //         n2 = sum;
    //     }
    // prime

    // int n;
    // cout << "Enter a positive number  : ";
    // cin >> n;
    // bool prime = true;
    // for (int i = 1; i <= n; i++)
    // {
    //     long count = 0;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if (i % j == 0)
    //         {
    //             count++;
    //         }
    //     }
    //     if(count==2)
    //         cout << " " << i;
    // }
    // plaindrome

    // int orignal, number, reverse;
    // cout << "Enter number : ";
    // cin >> number;
    // orignal = number;
    // reverse = 0;
    // while(number!=0)
    // {
    //     reverse = reverse * 10 + number % 10;
    //     number /= 10;
    // }
    // if(reverse==orignal){
    //     cout << "PLAINDROME";

    // }else{
    //     cout << "NOT";
    // }
    // cout << orignal << endl
    //      << reverse;
    // prime through bool
    //    int n;
    //    cout << "enter : ";
    //    cin >> n;
    //    for (int i = 2; i < n;i++)
    //    {
    //        bool p = 1;
    //        for (int j = 2; j * j < i;j++)
    //        {
    //         if(i%j==0)
    //         {
    //             p = 0;
    //             break;
    //         }
    //        }
    //        if(p==1){
    //            cout << i << " ";
    //        }
    //    }
    //        int n;
    //        cout<< "Enter a positiv hihihe number: ";
    //        cin>> n;
    //
    //        cout << "Prime numbers up to " << n << ":";

    //        // Loop through every number from 2 up to n
    //        for (int i = 2; i <= n; i++)
    //        {
    //            bool isPrime = true;

    //            // Check if i has any factors other than 1 and itself
    //            // Optimization: You only need to check up to the square root of i (j * j <= i)
    //            for (int j = 2; j * j <= i; j++)
    //            {
    //                if (i % j == 0)
    //                {
    //                    isPrime = false;
    //                    break; // Stop checking further if a factor is found
    //                }
    //            }

    //            // If no factors were found, the number is prime
    //            if (isPrime)
    //            {
    //                cout << " " << i;
    //            }
    //        }

    // cout << endl;

    return 0;
}