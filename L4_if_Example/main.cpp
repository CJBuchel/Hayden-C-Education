#include <iostream>
#include <windows.h>
#include "password.h" //includes our own header folder

using namespace std;

int main(){

    cout << "Please Input Your Password: ";
    cin >> input;

    if(input == password){                     // "if this then do that" is often used in many programs to control a 2 point method. either it does this... or it doesn't.
        cout << "Correct Password entered";
        cout << endl;
        system("pause");
    }


    else{   //else is used as a fallback statement. so if the the password enters is incorrect the if statement can't be used. so instead an else is put here, that way it can output 
    // something if it's incorrect, or else it would just end the program
        cout << "Passowrd Inncorect";
        cout << endl;
        system("pause");
    }
    return 0;
}