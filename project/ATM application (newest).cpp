#include <iostream>
#include <string>
using namespace std;

struct atm{
int rate,exchange,currency;
float dollar,pound,euro,yen,dirham;
int entry;
double deposit = 0.0;
double balance  = 0.0;
double withdraw = 0.0;
int pin;
int password ;
}menu;

string answer;
string answer2;
string answer3;
string answer4;
string answer5;

int count = 0;
bool isTrue = true;

void balanceF(float);
void depositF(float);
void withdrawF(float);
void exit();
int main()
{


  system ("Color 4E");
  do {
  cout<<"Enter your new pin"<<endl;
  cin >> menu.pin;
  cout<<"Enter your new pin again "<<endl;
  cin >> menu.password;
system("cls");
    if (menu.pin == menu.password)
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
        cin >> menu.entry;
system("cls");
        switch(menu.entry)
        {
        case 1:
            cout << "Deposit amount: "<< endl;
            cin >> menu.deposit;
            depositF(menu.deposit);
            break;
        case 2:
                if (menu.balance <= 0)
                {
                    cout << "Please deposit some funds."<< endl;
                }
                else {
                        cout << "Withdraw  amount: "<< endl;
                        cin >> menu.withdraw;
                        withdrawF(menu.withdraw);
                    }
            break;
            case 3:
           balanceF(menu.balance);
            break;
            case 4:

            cout <<"press -1 dollar"<<endl;
            cout <<"press -2 pound"<<endl;
            cout <<"press -3 euro"<<endl;
            cout <<"press -4 yen"<<endl;
            cout <<"press -5 dirham"<<endl;
            cin >> menu.rate;

            switch(menu.rate){
            case 1:
            cout <<"1 dollar = 46.26 birr  press(yes/no) if you agree to exchange currency? "<< endl;
            cin >> answer;
            if (answer=="yes")
            {
                cout<<"Enter the amount of Dollar: ";
                cin>>menu.dollar;
                float *dollarPointer;
                dollarPointer=&menu.dollar; // pointer
                *dollarPointer=*dollarPointer*46.26;
            }else{
            goto choice;
            }

            cout << "your amount is: " << menu.dollar << " birr"<< endl;

                break;
            case 2:
            cout <<"1 pound = 63.84 birr  press(yes/no) if you agree to exchange currency "<< endl;
            cin >>answer2;
            if (answer2=="yes")
            {
                cout<<"Enter the amount of pound: ";
                cin>>menu.pound;
                float *poundPointer;
                poundPointer=&menu.pound; // pointer
                *poundPointer=*poundPointer*63.84;
            }else{
            goto choice;
            }

            cout << "your amount is: " << menu.pound << " birr"<< endl;


            break;
            case 3:
            cout <<"1 euro = 54.51 birr  press(yes/no) if you agree to exchange currency "<< endl;
            cin >>answer3;
            if (answer3=="yes")
            {
                cout<<"Enter the amount of euro: ";
                cin>>menu.euro;
                float *euroPointer;
                euroPointer=&menu.euro; // pointer
                *euroPointer=*euroPointer*54.51;
            }else{
            goto choice;
            }

            cout << "your amount is: " << menu.euro << " birr"<< endl;

            break;
            case 4:
            cout <<"1 yen = 0.42 birr  press(yes/no) if you agree to exchange currency "<< endl;
            cin >>answer4;
            if (answer4=="yes")
            {
                cout<<"Enter the amount of yen: ";
                cin>>menu.yen;
                float *yenPointer;
                yenPointer=&menu.yen; // pointer
                *yenPointer=*yenPointer*0.42;
            }else{
            goto choice;
            }

            cout << "your amount is: " << menu.yen << " birr"<< endl;

            break;
            case 5:
            cout <<"1 dirham = 12.60 birr  press(yes/no) if you agree to exchange currency "<< endl;
             cin >>answer5;
            if (answer5=="yes")
            {
                cout<<"Enter the amount of dirham: ";
                cin>>menu.dirham;
                float *dirhamPointer;
                dirhamPointer=&menu.dirham; // pointer
                *dirhamPointer=*dirhamPointer*12.60;
            }else{
            goto choice;
            }

            cout << "your amount is: " << menu.dirham << " birr"<< endl;
           break;
            cout << "exchange currency " << menu.currency << "BIRR" << endl;
            break;
            }

            case 5:
            exit();
            break;
        }

       }while (menu.entry==1 || menu.entry==2 || menu.entry==3 || menu.entry==4);

    }
    else
    {
        count ++;
        if ( count == 3)
            isTrue = false;
        else
            cout << "Wrong pin! " << endl;
    }

  } while (isTrue != false || menu.entry==1 || menu.entry==2 || menu.entry==3 || menu.entry==4);


  return 0;



}
void exit(){
    cout << "Have a nice day! "<< endl;

}
void balanceF(float balance){
     cout << "Current balance $" << balance << endl;
}
void withdrawF(float withdraw){
menu.balance = menu.balance - menu.withdraw;
}
void depositF( float deposit){
    menu.balance = menu.balance + menu.deposit;
  }

