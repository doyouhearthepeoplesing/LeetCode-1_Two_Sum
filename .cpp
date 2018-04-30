class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> target_series;
        int len = nums.size();
        for(int i=0;i<len;i++){
            for(int j=i+1;j<len;j++){
                if(nums[i] + nums[j] == target){
                    target_series.push_back(i);
                    target_series.push_back(j);
                    return target_series;
                }
            }
        }
    }
};
