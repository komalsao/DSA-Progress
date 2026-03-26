/*283. Move zeroes

Approach:
- Used two-pointer technique
- Moved all non-zero elements forward
- Filled remaining positions with zeroes

Time Complexity: O(n)
Space Complexity: O(1)*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int j=0;
    for (int i=0;i<nums.size();i++){
      if (nums[i]!= 0){
       nums[j]=nums[i];
       j++;
      }
    }
    while (j<nums.size()){
        nums[j]=0;
        j++;
       }
    }
};