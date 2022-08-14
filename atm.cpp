#include <iostream>
#include<string>

using namespace std;

void mainMenu()
{
cout << "\n\n\n\n";
cout << "\t*****************************"<<endl;
cout <<endl;
cout << "\t******** MAIN MENU **********"<<endl;
cout<<endl;
cout << "\t\t1. Deposit money"<<endl;
cout << "\t\t2. Withdraw money"<<endl;
cout << "\t\t3. Check Balance"<<endl;
cout << "\t\t4. Exist"<<endl;
cout <<endl;
cout << "\t*****************************"<<endl;

}

int main()
{

int choice;
float balance = 2000.00;
float amount;




mainMenu();


do{
cout << "\n\n";
cout << "Please choose one of the following: ";
cin>>choice;

switch(choice){
case 1:

     cout << "Please enter your amount: ";
       cin>>amount;
       balance = balance + amount;

       system("clear");
        mainMenu();
    break;

case 2:
     cout << "Please enter to withdraw: ";
     cin>> amount;

     if (balance>=amount){

           balance = balance-amount;
           system("clear");
        mainMenu();
     }
     else{
      system("clear");
     cout << "Insuffecient amount!"<<endl;
     }

       //mainMenu();

     break;

case 3:
system("clear");
       cout << "Your balance is : "<<balance<<endl;

       mainMenu();

     break;

default:
     cout << "Invalid input"<<endl;

}
}
while(choice!=4);

system("clear");



    return 0;
}
