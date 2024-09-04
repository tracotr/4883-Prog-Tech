/**
 * Jaxon King
 * 4883
 * 00272 Tex quotes
 */
#include <iostream>
#include <string>
#include <fstream>

#define endl "\n"

using namespace std;

int main()
{
    // Open the input file and output file so it can know what to use lol
    ifstream i("uDebugInput.txt");
    ofstream o("uDebugOutput.txt");

    string A = "";

    // if quote and firstQuote, change to ``
    // if quote and not firstQuote, change to ''
    while(i >> A){
        bool firstQuote = true;
        for(int i = 0; i < A.length(); i++){
            if(A[i] == '"'){
                A[i] == (firstQuote)? "``" : "''";
            }
        }

        cout << A << endl;
    }

    i.close();
    o.close();
    return 0;
}
