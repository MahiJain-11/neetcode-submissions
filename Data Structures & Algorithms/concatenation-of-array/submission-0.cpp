class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int ans=nums[0]
        int n = nums.size();
        for(int i = 0 ; i<n ;i++){
            ans = ans+ nums[i]
        }
        return ans;
    }
};