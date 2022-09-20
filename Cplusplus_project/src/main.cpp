// - preprocess the data - DONE
// - get strokerate -

// The main part of this file is a for-loop which gets new acceleration-data each time it loops.
// This, in the application, will happen each 0.1 seconds.
// The functions should together do each job above, they can only look at data that has already
// been shown to them. 
// Furthermore, the functions should be fast, and care should be taken to not run functions more
// often than needed. For example, some functions may need to be run each time new data comes in.
// other functions may need to be run e.g. only once every second.

//#include <iostream>
//#include <fstream>
using namespace std;

#include <iostream>
#include "TestLib.h"

int main(){ 
    int a = -100;
    std::cout << "a = " << a << endl;
    
    int b = absolutePlusFive(a);
    std::cout << "b = " << b << endl << endl;

    return 0;
}