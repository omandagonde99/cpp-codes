The Problem
You have two sorted arrays. You need to merge them into a single sorted array that contains all elements from both arrays in sorted order.
Examples:

Input: Array1 = 1 3 5, Array2 = 2 4 6 → Output: 1 2 3 4 5 6
Input: Array1 = 1 2 3, Array2 = 4 5 6 → Output: 1 2 3 4 5 6
Input: Array1 = 1 5 9, Array2 = 2 3 8 → Output: 1 2 3 5 8 9


The Logic (Two-Pointer Technique)
Use three pointers:

i → tracks current position in Array1
j → tracks current position in Array2
k → tracks where to place the next element in the merged array

Algorithm:

Create a new array merged[] of size n1 + n2 (total elements from both arrays).
Start with i = 0, j = 0, k = 0.
Compare and place the smaller element:

If arr1[i] <= arr2[j], place arr1[i] in merged[k] and increment i and k.
Else, place arr2[j] in merged[k] and increment j and k.


When one array runs out:

Copy all remaining elements from the other array to merged[].


The result is a sorted merged array.


