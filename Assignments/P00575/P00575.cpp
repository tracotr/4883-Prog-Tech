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

    int A;
    long long B = 0;
    int cur = 0;

    while(cin >> A){
        B = 0;
        int power = 0;

        while(A != 0){
            cur = A % 10;

            int add = cur * pow(2, power) - 1;
            B += add;

            power++;
            A /= 10;

            cout << cur << "*" << "2^" << power << "-1=" << add << "=" << B << endl;
        }

        cout << B << endl;
    }

    //i.close();
    //o.close();
    return 0;
}
