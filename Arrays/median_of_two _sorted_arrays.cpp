/* 4. Median of Two Sorted Arrays

Approach:
	•	Use a merge process similar to Merge Sort.
	•	Initialize two pointers i and j for nums1 and nums2.
	•	Compare elements from both arrays and push the smaller one into a new array mergedArr.
	•	After one array is exhausted, append the remaining elements of the other array.
	•	Once merged:
	•	If the total size is odd, return the middle element.
	•	If the total size is even, return the average of the two middle elements.

Time Complexity:O(n + m) 
Space Complexity: O(n + m) 
*/
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        double median;
        vector<int> mergedArr;
        while (i<nums1.size() && j<nums2.size()){
           if (nums1[i]<nums2[j]){
              mergedArr.push_back(nums1[i]);
              i++;
           }
           else{
              mergedArr.push_back(nums2[j]);
              j++;
           }
        }
        
        while (i<nums1.size()){
           mergedArr.push_back(nums1[i]);
            i++;
        }

        while (j<nums2.size()){
           mergedArr.push_back(nums2[j]);
            j++;
        }
       int k=mergedArr.size()/2;
       
        if (mergedArr.size()%2!=0){
           median=mergedArr[k];
           return median;
        }
        else{ 
           median=(mergedArr[k]+mergedArr[k-1])/2.0;
           return median;
        }
    }
};