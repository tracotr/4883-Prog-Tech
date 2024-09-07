/**
 * Jaxon King
 * 4883
 * 10370 Above Average
 */
#include <iostream>
#include <vector>
#include <iomanip>
//#include <fstream>

#define endl "\n"

using namespace std;

int main()
{
    // Open the input file and output file so it can know what to use lol
    //ifstream i("uDebugInput.txt");
    //ofstream o("uDebugOutput.txt");

    int C;
    cin >> C; // input number of cases;

    while(C-- > 0){ // input number of cases
        int N;
        cin >> N;

        int avg = 0;
        double percent = 0;

        vector<int> grades;
        while(N-- > 0){
            int curr;
            cin >> curr;

            grades.push_back(curr);

            avg += curr;
        }

        avg /= grades.size();

        for (auto &it : grades)
        {
            if (it > avg)
            {
                percent++;
            }
        }

        percent /= grades.size();
        percent *= 100;

        cout << fixed << setprecision(3) << percent << "%" << endl;
    }

    //i.close();
    //o.close();
    return 0;
}
