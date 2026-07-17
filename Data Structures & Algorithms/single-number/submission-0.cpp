class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a ,i;
		a=nums[0];
		for (i=1; i<nums.size();i++){
			a^=nums[i];
		}
	return a;
    }
};
