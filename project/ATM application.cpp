#include <iostream>
#include <string>
using namespace std;

int rate,exchange,currency;
float dollar,pound,euro,yen,dirham;
string answer;
string answer2;
string answer3;
string answer4;
string answer5;



 int pin;
  int password ;
  int count = 0;
  bool isTrue = true;
  int entry;
  double deposit = 0.0;
  double balance  = 0.0;
  double withdraw = 0.0;

void balanceF(float);
void depositF(float);
void withdrawF(float);
void exit();
int main()
{


  system ("Color 4E");
  do {
  cout<<"Enter your new pin"<<endl;
  cin >> pin;
  cout<<"Enter your new pin again "<<endl;
  cin >> password;

    if (pin == password)
    {
       do {
        cout << "*******Welcome to Habesha bank******** \n";
        choice:
        cout << " press 1- To deposit "<< endl;
        cout << " press 2- To withdraw "<< endl;
        cout << " press 3 - To see your balance "<< endl;
        cout << " press 4- To exchage currency "<< endl;
        cout << " press 5 - To exit "<< endl;
        cout << " choose your option: "<< endl;
        cin >> entry;

        switch(entry)
        {
        case 1:
            cout << "Deposit amount: "<< endl;
            cin >> deposit;
            depositF(deposit);
            break;
        case 2:
                if (balance <= 0)
                {
                    cout << "Please deposit some funds."<< endl;
                }
                else {
                        cout << "Withdraw  amount: "<< endl;
                        cin >> withdraw;
                        withdrawF(withdraw);
                    }
            break;
            case 3:
           balanceF(balance);
            break;
            case 4:

            cout <<"press -1 dollar"<<endl;
            cout <<"press -2 pound"<<endl;
            cout <<"press -3 euro"<<endl;
            cout <<"press -4 yen"<<endl;
            cout <<"press -5 dirham"<<endl;
            cin >> rate;

            switch(rate){
            case 1:
            cout <<"1 dollar = 46.26 birr  press(yes/no) if you agree to exchange currency? "<< endl;
            cin >>answer;
            if (answer=="yes")
            {
                cout<<"Enter the amount of Dollar: ";
                cin>>dollar;
                float *dollarPointer;
                dollarPointer=&dollar; // pointer
                *dollarPointer=*dollarPointer*46.26;
            }else{
            goto choice;
            }

            cout << "your amount is: " << dollar << " birr"<< endl;

                break;
            case 2:
            cout <<"1 pound = 63.84 birr  press(yes/no) if you agree to exchange currency "<< endl;
            cin >>answer2;
            if (answer2=="yes")
            {
                cout<<"Enter the amount of pound: ";
                cin>>pound;
                float *poundPointer;
                poundPointer=&pound; // pointer
                *poundPointer=*poundPointer*63.84;
            }else{
            goto choice;
            }

            cout << "your amount is: " << pound << " birr"<< endl;


            break;
            case 3:
            cout <<"1 euro = 54.51 birr  press(yes/no) if you agree to exchange currency "<< endl;
            cin >>answer3;
            if (answer3=="yes")
            {
                cout<<"Enter the amount of euro: ";
                cin>>euro;
                float *euroPointer;
                euroPointer=&euro; // pointer
                *euroPointer=*euroPointer*54.51;
            }else{
            goto choice;
            }

            cout << "your amount is: " << euro << " birr"<< endl;

            break;
            case 4:
            cout <<"1 yen = 0.42 birr  press(yes/no) if you agree to exchange currency "<< endl;
            cin >>answer4;
            if (answer4=="yes")
            {
                cout<<"Enter the amount of yen: ";
                cin>>yen;
                float *yenPointer;
                yenPointer=&yen; // pointer
                *yenPointer=*yenPointer*0.42;
            }else{
            goto choice;
            }

            cout << "your amount is: " << yen << " birr"<< endl;

            break;
            case 5:
            cout <<"1 dirham = 12.60 birr  press(yes/no) if you agree to exchange currency "<< endl;
             cin >>answer5;
            if (answer5=="yes")
            {
                cout<<"Enter the amount of dirham: ";
                cin>>dirham;
                float *dirhamPointer;
                dirhamPointer=&dirham; // pointer
                *dirhamPointer=*dirhamPointer*12.60;
            }else{
            goto choice;
            }

            cout << "your amount is: " << dirham << " birr"<< endl;
           break;
            cout << "exchange currency " << currency << "BIRR" << endl;
            break;
            }

            case 5:
            exit();
            break;
        }

       }while (entry==1 || entry==2 || entry==3 || entry==4);

    }
    else
    {
        count ++;
        if ( count == 3)
            isTrue = false;
        else
            cout << "Wrong pin! " << endl;
    }

  } while (isTrue != false || entry==1 || entry==2 || entry==3 || entry==4);


  return 0;



}
void exit(){
    cout << "Have a nice day! "<< endl;

}
void balanceF(float balance){
     cout << "Current balance $" << balance << endl;
}
void withdrawF(float withdraw){
balance = balance - withdraw;
}
void depositF( float deposit){
    balance = balance + deposit;
  }

