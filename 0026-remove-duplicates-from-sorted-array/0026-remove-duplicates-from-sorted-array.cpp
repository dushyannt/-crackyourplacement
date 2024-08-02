class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        vector<int> ans ; 
        int i=0 ,j=1 ;
        int temp = nums[nums.size()-1] ;
        while( j < nums.size() )
        {
            if(nums[i]!=nums[j])
            {
                ans.push_back(nums[i]) ;
                i++;
                j++;
            }
            else
            {
                i++;
                j++;
            }
        }
        ans.push_back(nums[i]);
        
        for(int x = 0 ; x < ans.size(); x++)
        {
            nums[x]=ans[x] ;
        }
       return ans.size();
        
    }
};