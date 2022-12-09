class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indicies;
        for(int i = 0; i < nums.size() - 1; i++) {
            for (int j = i; j < nums.size(); j++){
                if (i != j) {
                    if (nums[i] + nums[j] == target){
                        indicies.push_back(i);
                        indicies.push_back(j);
                        break;
                    }
                }
            }
        }
        return indicies;
    }
};
