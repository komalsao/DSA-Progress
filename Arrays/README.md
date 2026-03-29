# Arrays Problems

---

## 1. Two Sum

**Approach:**
- Used brute-force approach
- Checked every pair of elements using nested loops
- Returned indices when the sum equals the target

**Time Complexity:** O(n<sup>2</sup>) 
**Space Complexity:** O(1)

---

## 26. Remove Duplicates from Array

**Approach:**
- Since the array is sorted, duplicates are adjacent
- Compared each element with the previous one
- Stored unique elements in a new array
- Copied back to original array

**Time Complexity:** O(n) 
**Space Complexity:** O(n)

---

## 283. Move zeroes

**Approach:**
- Used two-pointer technique
- Moved all non-zero elements forward
- Filled remaining positions with zeroes

**Time Complexity:** O(n)
**Space Complexity:** O(1)


---

## 485. Max Consecutive Ones

**Approach:**
- Traverse the array once while maintaining a counter c to track the current streak of consecutive 1s.
- If the current element is 1, increment c and update the maximum m if needed.
- If the element is 0, reset c to 0 (since the streak breaks).
- Finally, return m, which stores the maximum consecutive 1s found 

**Time Complexity:**O(n)
**Space Complexity:**O(1)  

---

## 27. Remove Element

**Approach:**
- Use a two-pointer (or overwrite) technique.
- Traverse the array using a range-based loop.
- Maintain an index i to place the next valid (non-val) element.
- For every element X:
- If X != val, assign it to nums[i] and increment i.
- This effectively shifts all valid elements to the front of the array.
- Return i, which represents the new length of the array after removal.

**Time Complexity:** O(n)
**Space Complexity:** O(1)

---

## 4. Median of Two Sorted Arrays

**Approach:**
- Use a merge process similar to Merge Sort.
- Initialize two pointers i and j for nums1 and nums2.
- Compare elements from both arrays and push the smaller one into a new array mergedArr.
- After one array is exhausted, append the remaining elements of the other array.
- Once merged:
- If the total size is odd, return the middle element.
- If the total size is even, return the average of the two middle elements.

**Time Complexity:** O(n + m) 
**Space Complexity:** O(n + m) 

---

## 88. Merge Sorted Array

**Approach:**
- Use a merge technique similar to Merge Sort.
- Initialize two pointers i (for nums1) and j (for nums2).
- Compare elements from both arrays and push the smaller one into a temporary array temp.
- Once one array is exhausted:
- Append remaining elements from nums1 (only up to m)
- Append remaining elements from nums2 (up to n)
- Finally, copy all elements from temp back into nums1.

**Time Complexity:** O(m + n) 
**Space Complexity:** O(m + n) 

---