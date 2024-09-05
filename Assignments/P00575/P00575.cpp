    /**
 * Jaxon King
 * 4883
 * 00272 Tex quotes
 */
#include <iostream>
#include <cmath>
//#include <fstream>

#define endl "\n"

using namespace std;

int main()
{
    // Open the input file and output file so it can know what to use lol
    //ifstream i("uDebugInput.txt");
    //ofstream o("uDebugOutput.txt");

    string A;

    while(cin >> A){
        if(A == "0") break; // if "0"  we dont wanna print anything

        int n = A.length(); // get the length of the number

        int B = 0;

        for(int i = 0; i < n; i++){
            B += (A[i] - '0') * (pow(2, n - i) - 1); // since we start at the furthest left digit, n - i is going to be largest exponent we need
        }

        cout << B << endl;
    }

    //i.close();
    //o.close();
    return 0;
}
