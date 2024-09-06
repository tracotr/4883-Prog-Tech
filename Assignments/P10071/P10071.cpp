    /**
 * Jaxon King
 * 4883
 * 10071 Back to High School Physics
 * NOTE: the formula is ez: (velocity * time) * 2
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

    int A, B;

    while(cin >> A >> B){
        cout << (A * B) * 2 << endl;
    }

    //i.close();
    //o.close();
    return 0;
}
