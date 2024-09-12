    /**
 * Jaxon King
 * 4883
 * 10035 Primary Arithmetic
 */
#include <iostream>
//#include <fstream>

#define endl "\n"

using namespace std;

int main()
{
    // Open the input file and output file so it can know what to use lol
    //ifstream i("uDebugInput.txt");
    //ofstream o("uDebugOutput.txt");

    string A, B;

    while(cin >> A >> B){
        if(A == "0" && B == "0") break; // base case at end of input

        int aS = A.length() - 1;
        int bS = B.length() - 1;

        int carry = 0;
        int carries = 0;

        while(aS >= 0 && bS >= 0){ // go until looped through either
            if(((A[aS--] - '0') + (B[bS--] - '0')) + carry >= 10){
                carries++;
                carry = 1;
            } else{
                carry = 0;
            }
        }

        while(aS >= 0){ // go until looped through a
            if(((A[aS--] - '0') + carry) >= 10){
                carries++;
                carry = 1;
            } else {
                carry = 0;
            }
        }

        while(bS >= 0){ // go until looped through b
            if(((B[bS--] - '0') + carry) >= 10){
                carries++;
                carry = 1;
            } else {
                carry = 0;
            }
        }
        
        if(carries == 1) cout << "1 carry operation." << endl;
        else if(carries > 0) cout << carries << " carry operations." << endl;
        else cout << "No carry operation." << endl;
    }

    //i.close();
    //o.close();
    return 0;
}
