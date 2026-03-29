/*27. Remove Element
Approach:
	•	Use a two-pointer (or overwrite) technique.
	•	Traverse the array using a range-based loop.
	•	Maintain an index i to place the next valid (non-val) element.
	•	For every element X:
	•	If X != val, assign it to nums[i] and increment i.
	•	This effectively shifts all valid elements to the front of the array.
	•	Return i, which represents the new length of the array after removal.

Time Complexity: O(n)
Space Complexity:O(1)*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        
        for (int X : nums)
         if (X!=val){
            nums[i]=X;
            i++;
         }
         
         return i;
    }
};