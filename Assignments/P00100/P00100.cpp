/**
 * Jaxon King
 * 4883
 * 00100 The 3n + 1 Problem
 * Dec. 6th 2024
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

    int B = 0, A = 0;

    while (cin >> A >> B) {
        // loop A -> B, keep track of highest score
        // i is start so it doesn't affect it when I try to print
        int start = (A < B)? A : B; // if a is less, a start, otherwise b end
        int end  = (A < B)? B : A; // if a is less, b end, otherwise a end

        int max_cycle = 1; // keeping track of the max cycle found
        
            for (start; start <= end; start++) { // until A == B pmuch
                int num = start;
                int cycles = 1;
                while (num != 1) { // until the number we're running is 1
                    num = (num % 2 == 0)? num / 2: num * 3 + 1; // divide by 2 if even, *3+1 if odd

                    cycles++;
                }

                if(cycles > max_cycle)
                    max_cycle = cycles;
            }

        cout << A << " " << B << " " << max_cycle << endl;
    }

    //i.close();
    //o.close();
    return 0;
}
