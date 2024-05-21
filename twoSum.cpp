class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sum;
        for(int i=0; i<nums.size()-1; i++)
        {
            sum.push_back(i);
            for(int j=i+1; j<nums.size(); j++)
            {
                if(nums[j] == target - nums[i])
                {
                    sum.push_back(j);
                    return sum;
                }
            }
            sum.pop_back();
        }
        return sum;
    }
};