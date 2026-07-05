#include <vector>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result_array;
        int current_sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            current_sum = current_sum += nums[i];
            result_array.push_back(current_sum);
        }

        return result_array;
    }
};