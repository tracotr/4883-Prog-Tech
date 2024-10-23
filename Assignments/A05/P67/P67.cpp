#include <string>
class Solution {
public:
    string addBinary(string a, string b) {
        int A = a.length() - 1;
        int B = b.length() - 1;

        string result = "";
        int carry = 0;

        while (A >= 0 && B >= 0) {
            int bit1 = a[A] - '0';
            int bit2 = b[B] - '0';

            result.insert(0, binaryResult(bit1, bit2, carry));

            A--;
            B--;
        }

        while (A >= 0) {
            int bit1 = a[A] - '0';
            result.insert(0, binaryResult(bit1, 0, carry));
            A--;
        }

        while (B >= 0) {
            int bit1 = b[B] - '0';
            result.insert(0, binaryResult(bit1, 0, carry));
            B--;
        }

        if (binaryResult(0, 0, carry) == "1")
            result.insert(0, "1");

        return result;
    }

    string binaryResult(int b1, int b2, int& c) {
        int add = b1 + b2 + c;

        if (add >= 2)
            c = 1;
        else
            c = 0;

        if (add % 2 == 0)
            return "0";
        else
            return "1";
    }
};#include <string>
class Solution {
public:
    string addBinary(string a, string b) {
        int A = a.length() - 1;
        int B = b.length() - 1;

        string result = "";
        int carry = 0;

        while (A >= 0 && B >= 0) {
            int bit1 = a[A] - '0';
            int bit2 = b[B] - '0';

            result.insert(0, binaryResult(bit1, bit2, carry));

            A--;
            B--;
        }

        while (A >= 0) {
            int bit1 = a[A] - '0';
            result.insert(0, binaryResult(bit1, 0, carry));
            A--;
        }

        while (B >= 0) {
            int bit1 = b[B] - '0';
            result.insert(0, binaryResult(bit1, 0, carry));
            B--;
        }

        if (binaryResult(0, 0, carry) == "1")
            result.insert(0, "1");

        return result;
    }

    string binaryResult(int b1, int b2, int& c) {
        int add = b1 + b2 + c;

        if (add >= 2)
            c = 1;
        else
            c = 0;

        if (add % 2 == 0)
            return "0";
        else
            return "1";
    }
};