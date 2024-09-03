/**
 * Jaxon King
 * 4883
 * 11988 Broken Keyboard (a.k.a. Beiju Text)
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

    while(cin >> A){
        bool addBack = true;
        string result = ""; // result string to print
        string prepend = ""; // prepend to store chars to add into front of result


        for(int i = 0; i < A.length(); i++){
            if(A[i] == '[' || A[i] == ']'){ // if home or end brackets
                addBack = (A[i] == ']') ? true : false; // if end add to back, if home add to front
                result.insert(0, prepend); // add current prepend to front of result
                // learning moment:
                // result = result + prepend
                // is MUCH slower for some reason, rather than insert.
                // probably because optimizations in the library 
                prepend = ""; // clear bc need to :)
                continue; // stop loop because we dont need to add to result
            }

            if(addBack) result.push_back(A[i]); // if we're adding to back, add straight to result
            else prepend.push_back(A[i]); // else add to prepend to prepare to put at start of result
        }
        
        result = prepend + result; // add held prepend to result just in case

        cout << result << endl;
    }

    //i.close();
    //o.close();
    return 0;
}
