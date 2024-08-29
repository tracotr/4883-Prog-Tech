/**
* Jaxon King
* 4883
* Sept. 5th 2024
*/
#include <iostream>
//#include <fstream>


#define endl "\n"

using namespace std;

int main() {
    // Open the input file and output file so it can know what to use lol
    //ifstream i("uDebugInput.txt");
    //ofstream o("uDebugOutput.txt");
    
    long long B = 0, A = 0; // long long because test cases go past int_max

    while (cin >> A >> B) {
        // if A is greater than B, get the difference of a and b, difference of b and a otherwise
        long long r = (A > B)? A - B : B - A; 
        cout << r << endl;
    }

    //i.close();
    //o.close();
    return 0;
}