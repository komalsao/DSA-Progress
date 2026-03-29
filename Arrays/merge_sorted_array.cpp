/*88. Merge Sorted Array

Approach:
	•	Use a merge technique similar to Merge Sort.
	•	Initialize two pointers i (for nums1) and j (for nums2).
	•	Compare elements from both arrays and push the smaller one into a temporary array temp.
	•	Once one array is exhausted:
	•	Append remaining elements from nums1 (only up to m)
	•	Append remaining elements from nums2 (up to n)
	•	Finally, copy all elements from temp back into nums1.

Time Complexity: O(m + n) 
Space Complexity: O(m + n) 
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        vector<int> temp;
        while (i<m && j<n){
            if (nums1[i]<nums2[j]){
              temp.push_back(nums1[i]);
              i++;
            }
            else{
              temp.push_back(nums2[j]);
              j++;
            }
        }  

        while (i<m){
            temp.push_back(nums1[i]);
            i++;
        }

        while (j<n){
              temp.push_back(nums2[j]);
              j++;
        }

        for (int k = 0; k < m + n; k++) {
            nums1[k] = temp[k];
        }
   }
};