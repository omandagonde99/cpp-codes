Remove Duplicates from Sorted Array — Proper Explanation
The Problem
You have a sorted array with duplicate elements. You need to remove duplicates in-place so each unique value appears only once. Return the new size of the array with unique elements.
Examples:

Input: 1 1 2 2 2 3 → Output: 1 2 3 (new size = 3)
Input: 0 0 1 1 1 2 2 → Output: 0 1 2 (new size = 3)
Input: 5 5 5 5 → Output: 5 (new size = 1)


The Logic (Two-Pointer Technique)
Use two pointers:

i → reads through the array starting from index 1 (to compare with previous element)
insertPos → tracks where the next unique element should be placed

Algorithm:

Start with insertPos = 1 (the first element is always unique, so it stays at position 0).
Loop from i = 1 to n-1:

If arr[i] != arr[i-1] (current element is different from previous, so it's unique):

Place arr[i] at position insertPos.
Increment insertPos.


If arr[i] == arr[i-1] (current element is same as previous, so it's a duplicate):

Skip it (don't place it).




After the loop, insertPos is the new size — it represents the count of unique elements.


