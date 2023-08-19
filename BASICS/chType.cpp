#include <iostream>
using namespace std;

int main() {
   char x;
   cout << "Enter :"<<endl;
   cin>>x;

    if((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')){
        cout << x << " is an Alphabet";
    }

    else if(x >= '0' && x <= '9'){
        cout << x << " is a Digit";
    }

    else{
        cout << x << " is a Special Character";
    }
}