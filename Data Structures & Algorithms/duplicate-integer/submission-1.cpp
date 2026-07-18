class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> uni;
        for (int i=0;i<nums.size();i++)
        {   
            uni.insert(nums[i]);
        }
        if(uni.size()==nums.size())
            return false;
        else
            return true;
        
    }
    
};