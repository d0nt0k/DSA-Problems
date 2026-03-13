class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> x;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            x[nums[i]] = i;
        }

        for(int i = 0; i < n; i++){

            int temp = nums[i];
            auto it = x.find(target - temp);

            if(it != x.end() && it->second != i){
                return {i, it->second};
            }
        }

        return {};
    }
};
