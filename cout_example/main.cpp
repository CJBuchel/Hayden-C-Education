#include <iostream> //This gives you premade code that allows you to input and output to your computer and/or devices
// for instance iostream allows you to use functions like cout and endl

#include <windows.h> //this allows you to use windows functions that can only be accesed on your computer.
// for instance now we can use system commands, like system("pause");


using namespace std; // this means to use all standards in writing.
// namespace std, just makes it faster to write. or else you would have to write std::cout or std:: something 
// for every namespace.
main(){ // main is where the main code is placed between the two curly brackets {}
    cout << "Hello Hayden"; // cout (c-out) means to output to the nearest consol aplication. in this case it's
    // outputing a sentence.
    cout << endl; // this outputs to the consol and end's the line, like pressing enter in a document

    system("pause"); //This pauses the consol/ application, or else as soon as it has finished the
    // above commands and functions it would just close the application.
}