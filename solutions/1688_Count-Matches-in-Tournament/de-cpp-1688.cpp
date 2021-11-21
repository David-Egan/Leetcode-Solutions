class Solution {
public:
    int numberOfMatches(int n) {
        // each match eliminates one team. one team must remain.
        // so we need a match for each team but one
        return n - 1;
    }
};