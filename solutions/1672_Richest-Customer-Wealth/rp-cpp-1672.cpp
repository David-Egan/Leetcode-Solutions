#include <vector>

int maximumWealth(vector<vector<int>>& accounts) {

    int highest = 0;
    for (vector<int> v : accounts) {
        int sum = 0;
        for (int i : v) {
            sum += i;
        }
        if (highest < sum)
            highest = sum;
    }

    return highest;
}

int main() {

}