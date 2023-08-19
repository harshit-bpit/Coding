#include <iostream>
#include <math.h>
using namespace std;

int main() {
   int Binary;

   cout<<"Enter binary number to convert : "<< endl;
   cin>>Binary;

   int i=0;
   int Decimal=0;

   while(Binary!=0){
        int digit=Binary%10;

       if(digit==1){
           Decimal += pow(2,i);
       }
       
       i++;
       Binary=Binary/10;
   }
   cout<<"Decimal number is:"<<Decimal;
   
   return 0;
}