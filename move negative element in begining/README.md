Move All Negative Numbers to Beginning — Proper Explanation
The Problem
You have an array with positive and negative numbers mixed together. You need to move all negative numbers to the beginning while keeping the relative order of both negative and non-negative elements.
Example:

Input: 1 -2 3 -4 5
Output: -2 -4 1 3 5

The negative numbers (-2, -4) moved to the front and kept their original order, and the non-negative numbers (1, 3, 5) stayed in their original order.

The Logic (Two-Pointer Swap Approach)
Use two pointers:

left = 0 → marks "where the next negative number should go"

Loop through the array:

For each element arr[i]:

If arr[i] < 0 (negative): Swap arr[left] with arr[i], then increment left.
If arr[i] >= 0 (non-negative): Skip it.



After the loop, all negatives are packed at the front, and all non-negatives are naturally pushed to the back.


Key Points

left is the "partition point" — everything before left is negative, everything from left onwards is non-negative.
Swap instead of overwrite — when we find a negative, we swap it with the element at left, so we don't lose any data.
Both groups maintain order — negatives stay in their original relative order (-2 before -4), and non-negatives stay in theirs (1 before 3 before 5).
Time: O(n) — single pass through the array.
Space: O(1) — done in-place, no extra array needed.


