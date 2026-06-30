Check Sorted Array — Proper Explanation
The Problem
Check if an array is sorted in ascending order. If it is, print "Yes" or 1. If it's not, print "No" or 0.
Examples:

Input: 1 2 3 4 5 → Output: Yes (sorted ✅)
Input: 1 3 2 4 5 → Output: No (not sorted ❌)
Input: 5 5 5 5 → Output: Yes (all equal is sorted ✅)


The Logic
Simple idea: For an array to be sorted, each element must be less than or equal to the next element.
Algorithm:

Loop through the array from index 0 to n-2 (not the last element).
For each element arr[i], check if arr[i] > arr[i+1].
If any element is greater than the next, the array is NOT sorted — return/print "No" immediately.
If the loop completes without finding any violation, the array IS sorted — print "Yes".
