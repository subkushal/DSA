//Brute force solution

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;

        int n = rowIndex + 1;

        for(int col = 0; col < n; col++) {
            long long val = 1;

            for(int i = 0; i < col; i++) {
                val = val * (rowIndex - i) / (i + 1);
            }
            ans.push_back(val);
        }
        return ans;
    }
};
