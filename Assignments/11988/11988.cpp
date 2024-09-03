/**
 * Jaxon King
 * 4883
 * 11988 Broken Keyboard (a.k.a. Beiju Text)
 */
#include <iostream>

#define endl "\n"

using namespace std;

int main()
{
    string A = "";

    while(cin >> A){
        bool addBack = true;
        string result = ""; // result string to print
        string prepend = ""; // prepend to store chars to add into front of result

        // this for loop super slow sooooo
        // to fix probably just read directly to next [], remove everything before it, 
        // sleepy so do later : )

        for(int i = 0; i < A.length(); i++){
            if(A[i] == '[' || A[i] == ']'){ // if home or end brackets
                addBack = (A[i] == ']') ? true : false; // if end add to back, if home add to front
                result = prepend + result; // add current prepend to front of result
                prepend = ""; // clear bc need to :)
                continue; // stop loop because we dont need to add to result
            }

            if(addBack) result.push_back(A[i]); // if we're adding to back, add straight to result
            else prepend.push_back(A[i]); // else add to prepend to prepare to put at start of result
        }
        
        result = prepend + result; // add held prepend to result just in case

        cout << result << endl;
    }

    return 0;
}
