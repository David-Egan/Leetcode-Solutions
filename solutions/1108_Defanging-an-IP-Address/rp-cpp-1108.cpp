#include <string>

string defangIPaddr(string address) {
    string outString = "";
    for (char const& c : address) {
        if (c == '.') {
            outString = outString + "[.]";
        }
        else {
            outString = outString + c;
        }
    }

    return outString;
}

int main() {

}