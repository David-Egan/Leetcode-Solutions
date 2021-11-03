#include <vector>
#include <string>

int finalValueAfterOperations(vector<string>& operations) {
    int val = 0;

    for (string s : operations) {
        if (s == "--X" || s == "X--")
            val--;
        else if (s == "++X" || s == "X++")
            val++;
    }

    return val;
}
