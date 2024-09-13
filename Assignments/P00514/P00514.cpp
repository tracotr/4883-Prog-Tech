/**
 * Jaxon King
 * 4883
 * 00514 rails
 */
#include <iostream>
#include <vector>
// #include <fstream>

#define endl "\n"

using namespace std;

int main()
{
    // Open the input file and output file so it can know what to use lol
    // ifstream i("uDebugInput.txt");
    // ofstream o("uDebugOutput.txt");

    int N = 1;

    while (N != 0)
    {
        cin >> N;

        vector<int> A(N);
        vector<int> S;
        vector<int> B;
        for (int i = 0; i < N; ++i){ A[i] = i + 1; } // {1, 2, 3, 4, 5}

        int b;
        do{
            for(int i = 0; i < N; ++i){
                B.push_back(b);
            }

            for(int i: B){
                cout << i;
            }
        }while(b != 0);
    }

    // i.close();
    // o.close();
    return 0;
}
