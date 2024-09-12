/**
 * Jaxon King
 * 4883
 * 10346 Peter's Smokes
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

    int N, K;

    while(cin >> N >> K){
        int res = N; // initial amount of cigs
        int butts = 0; // keep track of butts for math :)

        while((N + butts) >= K){ // goes until there can be no more cigs made
            if(N > 0){ // if cigs arent 0, turns cigs into butts
                butts += N;
                N = 0;
            } else{ // turns butts into cigs
                N = butts / K;
                butts = butts % K;

                res += N;
            }
        } 


        cout << res << endl;
    }

    //i.close();
    //o.close();
    return 0;
}
