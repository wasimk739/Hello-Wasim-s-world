#include <iostream>
#include <vector>
#include<list>
#include<iomanip>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;



template <typename T>
void showlist(list <T> g)
{
    typename list <T> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

void menuOptions();


int main()
{
    list <string> loginIDList, passwordList, accountHolderName;
    list <int> accountNumber;
    list <double> balance;
    loginIDList.push_back("one");
    loginIDList.push_back("two");
    loginIDList.push_back("three");
    loginIDList.push_back("four");
    loginIDList.push_back("five");
    passwordList.push_back("1111");
    passwordList.push_back("2222");
    passwordList.push_back("3333");
    passwordList.push_back("4444");
    passwordList.push_back("5555");
    accountHolderName.push_back("wasim");
    accountHolderName.push_back("umaiz");
    accountHolderName.push_back("azim");
    accountHolderName.push_back("fazal");
    accountHolderName.push_back("sam");
    accountNumber.push_back(123);
    accountNumber.push_back(456);
    accountNumber.push_back(789);
    accountNumber.push_back(101);
    accountNumber.push_back(121);
    balance.push_back(20000.0);
    balance.push_back(30000.0);
    balance.push_back(40000.0);
    balance.push_back(50000.0);
    balance.push_back(60000.0);
    string loginID;
    string password;
    bool flag=false,accountFlag=false;
    int i=0,remainderValue;
    int accountTransfer1, accountTransfer2;
    int option=0;
    string cust_name;
    double amount=0.0;
    int position=0;
    char userChoice;
    double cust_balance;
    int act_number;
    int pswd;
    string nn;
    cout<<"\n  ****** Welcome to my new ATM Machine project ********\n*****:"<<endl;
    
    // for(i=0;i<5;i++){
        
    //     if(find(begin(loginIDList), end(loginIDList), loginID) != end(loginIDList) && find(begin(passwordList), end(passwordList), password) != end(passwordList)){
    //         flag=true;
    //         position=i;
    //         break;
    //     }
    // }
    //  if(flag==false){
    //     cout<<"\nSorry! wrong login id & password"<<endl;
    
        list<double>::iterator balanceInfo = balance.begin();
                    advance(balanceInfo, i);
        list<int>::iterator accountNumberInfo = accountNumber.begin();
                    advance(accountNumberInfo, i);
        list<string>::iterator accountHolderInfo = accountHolderName.begin();
                    advance(accountHolderInfo, i);
        while(option!=6){
            menuOptions();
            cout<<"\nEnter your choice:"<<endl;
            cin>>option;
            switch(option){

                case 1: cout<<"enter your login id and password"<<endl;
                cout<<"\nEnter User id:"<<endl;
                cin>>loginID;
                cout<<"\nEnter Password:"<<endl;
                cin>>password;
                
    for(i=0;i<5;i++){
        
        if(find(begin(loginIDList), end(loginIDList), loginID) != end(loginIDList) && find(begin(passwordList), end(passwordList), password) != end(passwordList)){
            flag=true;
            cout<<"Enter the amount you want to withdraw:"<<endl;
                       cin>>amount;
                    if(*balanceInfo<amount){
                        cout<<"\nYou do not have sufficient balance to perform this transaction"<<endl;
                    }else{
                        *balanceInfo=*balanceInfo-amount;
                        cout<<"\nCash successfully withdrawn!!";
                        cout<<"\nDo you want print the receipt(y/n)?";
                        cin>>userChoice;
                        if(userChoice=='y'){
                            cout<<"\nAccount: #"<<*accountNumberInfo<<endl;
                            cout<<"\nWithdrawn:"<<amount<<endl;
                            cout<<"\ncurrent Balance:"<<*balanceInfo<<endl;
                        }
                    }
                    break;
            
        }
    }
     if(flag==false){
        cout<<"\nSorry! wrong login id & password"<<endl;


                case 2: cout<<"enter your login id and password"<<endl;
                cout<<"\nEnter User id:"<<endl;
                cin>>loginID;
                cout<<"\nEnter Password:"<<endl;
                cin>>password;
                
    for(i=0;i<5;i++){
        
        if(find(begin(loginIDList), end(loginIDList), loginID) != end(loginIDList) && find(begin(passwordList), end(passwordList), password) != end(passwordList)){
            flag=true;
                
                cout<<"Enter the amount you want to deposit:"<<endl;
                    cin>>amount;
                    *balanceInfo=*balanceInfo+amount;
                    cout<<"\nCash successfully deposited!!";
                    cout<<"\nDo you want print the receipt(y/n)?";
                    cin>>userChoice;
                    if(userChoice=='y'){
                        cout<<"\nAccount: #"<<*accountNumberInfo<<endl;
                        cout<<"\nDeposited:"<<amount<<endl;
                        cout<<"\n current Balance:"<<*balanceInfo<<endl;
                    }
                    break;
        }
    }
    if(flag==false){
        cout<<"\nSorry! wrong login id & password"<<endl;
                break;    

                
                case 3:cout<<"enter your login id and password"<<endl;
                cout<<"\nEnter User id:"<<endl;
                cin>>loginID;
                cout<<"\nEnter Password:"<<endl;
                cin>>password;
                
    for(i=0;i<5;i++){
        
        if(find(begin(loginIDList), end(loginIDList), loginID) != end(loginIDList) && find(begin(passwordList), end(passwordList), password) != end(passwordList)){
            flag=true;
                    
                    cout<<"\nEnter the amount in multiples of 100"<<endl;
                    cin>>amount;
                    remainderValue=(int)amount % 100;
                    while(remainderValue!=0){
                        cout<<"Sorry! Please enter the amount in multiples of 100 only"<<endl;
                        cin>>amount;
                        remainderValue=(int)amount % 100;
                    }
                    cout<<"\nEnter the account number for the cash transfer:"<<endl;
                    cin>>accountTransfer1;
                    accountFlag=false;
                    for(i=0;i<5;i++){
                        if(accountTransfer1==*accountNumberInfo){
                            cout<<"\nAccount Holder's name is : "<<*accountHolderInfo<<endl;
                            cout<<"\nConfirm account number:"<<endl;
                            cin>>accountTransfer2;
                            if(accountTransfer1==accountTransfer2){
                                *balanceInfo=*balanceInfo+amount;
                                *balanceInfo=*balanceInfo-amount;
                                cout<<"\nCash transferred successfully"<<endl;
                                cout<<"\ncurrent Balance:"<<*balanceInfo<<endl;
                            }else{
                                cout<<"\nBoth account numbers do not match"<<endl;
                            }
                                accountFlag=true;
                            break;
                        }
                    }
                    if(accountFlag==false){
                        cout<<"\n Given account number didn't found in database"<<endl;
                    }
                    break;
        }
    }
                    if(flag==false){
        cout<<"\nSorry! wrong login id & password"<<endl;
                    
                break;  
                    
                case 4: cout<<"\nAccount: #"<<*accountNumberInfo<<endl;
                    cout<<"\ncurrent Balance:"<<*balanceInfo<<endl;
                    break;
                case 5: cout<<"\nEnter your name: #"<<endl;
                        cin>>cust_name;
                        cout<<"\nEnter your account number"<<endl;
                        cin>>act_number;
                        cout<<"\nEnter the password"<<endl;
                        cin>>pswd;
                        cout<<"\nEnter your current Balance"<<endl;
                        cin>>cust_balance;
                        for(auto x = accountHolderName.begin( ); x != accountHolderName.end( ); ++x)
                        {
                            cout<< *x <<" "<<endl;
                            accountHolderName.insert(x, (accountHolderName.size()+1), cust_name);
                        }
                        for(auto y = accountNumber.begin( ); y != accountNumber.end( ); ++y)
                        {
                            cout<< *y <<" "<<endl;
                            accountNumber.insert(y, (accountNumber.size()+1), act_number);
                        }
                        break;
                        
                case 6:cout<<"Done! Thanks for using the bank services"<<endl;
                    break;
            }
        }
        
    }
}
}
}
void menuOptions(){
    cout<<"\n----**** main screen ****----"<<endl;
    cout<<"\n1---Withdraw Cash"<<endl;
    cout<<"\n2---Deposit Cash"<<endl;
    cout<<"\n3---Cash Transfer"<<endl;
    cout<<"\n4---Balance Inquiry"<<endl;
    cout<<"\n5---New User"<<endl;
    cout<<"\n6---Exit"<<endl;
}