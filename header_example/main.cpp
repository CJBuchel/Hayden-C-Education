#include <iostream>
#include <windows.h>

#include "header.h" // this allows us to use the functions in out own custom made header.
// named header.h. and in that header is an value which we can call.

using namespace std;

main(){
    cout << num; // in this case the above mentioned value is num. which has a value of 10
    // so what this is actually saying is output to the consol the number 10
    cout << endl;

    system("pause");

    return 0; // return 0 is placed often in code, and states that if the code fails to build or work
    // it will sat the code has returned 1; which means it doesn't work properly
}