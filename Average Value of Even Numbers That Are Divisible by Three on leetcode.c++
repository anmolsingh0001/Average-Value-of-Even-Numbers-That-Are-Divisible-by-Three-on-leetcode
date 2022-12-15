class Solution {
public:
    int averageValue(vector<int>& nums) {
        int result=0;
        int total=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2==0 && nums[i]%3==0){
                result+=nums[i];
                total++; 
            }
        }
        int res;
        if(result>0){
            res=result/total;
            return res;
        }
        else{
            return result;
        }

        return {};

        
    }
};