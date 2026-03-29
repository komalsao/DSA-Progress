/*485. Max Consecutive Ones

Approach:
- Traverse the array once while maintaining a counter c to track the current streak of consecutive 1s.
- If the current element is 1, increment c and update the maximum m if needed.
- If the element is 0, reset c to 0 (since the streak breaks).
- Finally, return m, which stores the maximum consecutive 1s found 

Time Complexity:O(n)
Space Complexity:O(1)  */

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0,m=0;
        for (int i=0; i<nums.size(); i++){
            if (nums[i]==1){
               c++;
               if (m<c)
                m=c;
            }else{
               c=0;
            }

        }
        return m;
    }
};