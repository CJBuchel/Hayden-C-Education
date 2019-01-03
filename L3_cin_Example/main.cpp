#include <iostream>
#include <windows.h>
#include <string> //String Allows us to use functions like getline and string commands, like cin >> AlphaIn

using namespace std;

int NumIn;
string AlphaIn; //Like an integer string can also be used to store values. Exept they can have numbers and letters. The issue with using this is you can't use math related 
// values, which we will talk about another day

int main(int argc, char const *argv[]) //The main here is a bit more excesive, before there were just two brackets (). But now there are a bunch of random stuff in there.
//You don't need to knoe much about it, it just allows us to use fancy coding. Also down the line we might talk about what these do
{
    cout << "Please Input A Number: "; //we have talked about cout before. this is just asking a user to input a value.
    cin >> NumIn; //cin (c-in) allows a program to have an input from an outside source, most of the time from a user. in this case is is storing whatever number the user enters
    // to an Integer named NumIn.

    cout << endl;

    cout << "Now Please Enter A Word: ";
    cin >> AlphaIn; //Now cin is trying to get a string of letters and numbers from the user and stores it as a string named AlphaIn.
    cout << endl;
    cout << endl;

    cout << "Your Number was: " << NumIn; // now the code is outputing the values the user has inputed from before.
    cout << endl;
    cout << "And Your Word was: " << AlphaIn;
    cout << endl;

    system("pause"); // and this pauses the program, same as before.

    return 0;
}
