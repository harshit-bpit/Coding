#include <iostream>
using namespace std;

int main() {

   int choice;
   cout<<" Press : 1 for -Addition, 2 for -subtraction, 3 for -multiplication, 4 for -division"<<endl;

   cout<<"Enter the Choice - ";

   cin>>choice;

   int Num1,Num2;

   cout<<"Enter 1st number:"<<endl;
   cin>>Num1;
  
   cout<<"Enter 2nd number:"<<endl;
   cin>>Num2;
   
   switch(choice){
       case 1: 
            cout<<Num1+Num2;
            break;
       case 2: 
            cout<<Num1-Num2;
            break;
       case 3: 
            cout<<Num1*Num2;
            break;
       case 4: 
            cout<<Num1/Num2;
            break;
       default: 
            cout<< "Invalid Input " << endl;
   }
   
   return 0;
}