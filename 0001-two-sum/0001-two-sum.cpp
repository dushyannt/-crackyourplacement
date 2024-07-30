class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> ans;
        vector<int> temp=nums;
        int i = 0, j = nums.size() - 1;
        int ans1=0 , ans2=0 ;
        sort(temp.begin(), temp.end());
        while (i < j) {
            if (temp[i] + temp[j] == target) {
                ans1=temp[i];
                ans2=temp[j];
                break;
            } else if (temp[i] + temp[j] > target) {
                j--;
            } else {
                i++;
            }
        }
        for(int k=0 ; k < nums.size() ; k++)
        {
            if(nums[k]==ans1 || nums[k]==ans2)
            {
                ans.push_back(k);
            }
        }
        return ans;
    }
};