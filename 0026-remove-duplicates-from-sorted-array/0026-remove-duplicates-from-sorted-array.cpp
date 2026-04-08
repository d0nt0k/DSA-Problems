class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int i =0 ; 
        // int j =1;
        // int length = 1;
        // while( j<nums.size()){
        //     if(nums[j]==nums[j-1]){
        //         j++;
        //     }
        //     else{
        //     nums[i+1]=nums[j];
        //     i++;
        //     j++;
        //     length++;
        //     }
        
        // }
        // return length;


        int i = 1;
        int j = 0;
        int n = nums.size();
        while(i<n){
            if(nums[i]==nums[j]){
                i++;
            }
            else if(nums[i]!=nums[j]){
                
                nums[j+1] = nums[i];
                i++;
                j++;
            }
        }

        return j+1;
        
    }
};