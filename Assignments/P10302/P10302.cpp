/**
 * Jaxon King
 * 4883
 * 10071 Back to High School Physics
 * NOTE: if x = 3, 3^3 + 2^3 + 1^3 = 36
 *  go all the way to 1 from whatever number, cubing it and adding
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

    long long A; // interestingly enough i couldnt get this to work without making this a long long, even though im storing the result in a long long itself.

    while(cin >> A){
        long long result = 0;
        for(A; A > 0; A--){ // from A to 1, cube and add
            result += (A * A * A) ; // multiplying like this faster than pow()
        }

        cout<< result << endl;
    }

    //i.close();
    //o.close();
    return 0;
}
