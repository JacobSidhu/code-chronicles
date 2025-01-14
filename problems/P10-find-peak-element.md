# Problem: Find Peak Element

## Problem Statement
A peak element in an array is an element that is strictly greater than its neighbors. Given an integer array `nums`, find a peak element and return its index. If the array contains multiple peaks, return the index of any one of them. You may assume `nums[-1] = nums[n] = -∞`.

### Example Input/Output

#### Example 1:
**Input**: `nums = [1, 2, 3, 1]`  
**Output**: `2`  
**Explanation**: `nums[2] = 3` is a peak element because it is greater than its neighbors `nums[1] = 2` and `nums[3] = 1`.

#### Example 2:
**Input**: `nums = [1, 2, 1, 3, 5, 6, 4]`  
**Output**: `1` or `5`  
**Explanation**: `nums[1] = 2` is a peak element as it is greater than its neighbors `nums[0] = 1` and `nums[2] = 1`. Similarly, `nums[5] = 6` is also a peak.

---

## Constraints
1. 1 \leq \text{nums.length} \leq 1000
2. -2^{31} \leq \text{nums[i]} \leq 2^{31} - 1
3. `nums[i] != nums[i + 1]` (all adjacent elements are distinct).
