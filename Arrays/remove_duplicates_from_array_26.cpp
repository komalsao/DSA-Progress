class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       if (nums.empty())
       return(0);
       vector<int> arr;
       arr.push_back(nums[0]);  
       int counter = 1; 

       for (int i=1;i<nums.size();i++) {
        if (nums[i]!=nums[i-1]){
          arr.push_back(nums[i]);
          counter++;
          }
         
        }
    
       nums=arr;
       return(counter);
    }
};