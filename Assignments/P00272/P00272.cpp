/**
 * Jaxon King
 * 4883
 * 00272 Tex quotes
 */
#include <iostream>
#include <string>
//#include <fstream>

#define endl "\n"

using namespace std;

int main()
{
    // Open the input file and output file so it can know what to use lol
    //ifstream i("uDebugInput.txt");
    //ofstream o("uDebugOutput.txt");

    string A = "";
    bool firstQuote = true;

    // I kinda stole this bc my original solution wasn't working with uva but
    // worked with whatever I inputted and printed to a file.
    // to keep in mind: faster to just print, than replace whatever im on
    // cout << A[i] faster than A[i] = whatever
    // and then print
    while(getline(cin, A)){
        for(string::iterator it = A.begin(); it != A.end(); ++it){ // auto iterator for loop
            if(*it == '"'){ // if iterator is on a quote
                if(firstQuote){ // and first quote
                    cout << "``"; // print open quote
                } else{
                    cout << "''"; // else print close quote
                }

                firstQuote = !firstQuote; // flip the bool because next one is going to be opposite
            }
            else{
                cout << *it;
            }
        }

        cout << endl;
    }

    //i.close();
    //o.close();
    return 0;
}
