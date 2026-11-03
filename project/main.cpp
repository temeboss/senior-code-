#include <iostream>

using namespace std;

int main()
{
        int choose;

  MainMenu:

    cout << "############################################################################################### \n" << endl;
    cout << "                   Part One:                           \n " << endl;
    cout << "press 1 - To view student grade \n " << endl;
    cout << "press 2 - Display the sum of 5 +ve number & skip 3 via contiune" << endl;
    cout << "press 3 - Swap 2 number via temp variable,if two numbers equal ask to enter again \n " << endl;
    cout << "press 4 - To swap two numbers without temp variable \n " << endl;
    cout << "press 5 - To check factional number within 1-5 \n " << endl;
    cout << "press 6 - Display all prime numbers within 1-100 " << endl;
    cout << "press 7 - To view Multiplicaton Table \n " << endl;
    cout << "                   Part Two:                           \n " << endl;
    cout << "press 8 -To check palindrome number \n " << endl;
    cout << "press 9 -To convert binary number to decimal \n " << endl;
    cout << "press 10 -To convert decimal number to binary \n " << endl;
    cout << "press 11 - To check a number is ArmStrong \n " << endl;
    cout << "press 12 - To display star pattern \n " << endl;
    cout << "press 13 - Quit \n " << endl;
    cout << "###############################################################################################" << endl;
    cout << "Please Enter Your Choice : " <<endl;
    cin>> choose;

    int grade;
    if(choose ==1){
        cout << "enter the grade :"<< endl;
        cin>> grade;
        } if(grade >= 90){
            cout << "A";
    } else if ( grade >= 80){
            cout << "B";
    } else if ( grade >= 70){
        cout << "C";
    } else if ( grade >= 60){
            cout << "D";
    } else if ( grade <= 50){
        cout << "F";
    } else {
        cout << "IN VAILD ";
    }


    return 0;
}


