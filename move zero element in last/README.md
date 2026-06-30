The Problem
You have an array with zeros and non-zero numbers mixed together. You need to move all zeros to the end while keeping non-zero elements in their original order.
Example:

Input: 0 1 0 3 12
Output: 1 3 12 0 0

The zeros moved to the end, and 1, 3, 12 stayed in the same order they appeared.

The Logic (Two-Step Approach)
Step 1: Compact Non-Zero Elements to the Front
Use a pointer called insertPos that tracks "where should the next non-zero element go?"

Start with insertPos = 0.
Loop through each element in the array:

If the element is non-zero: Copy it to position insertPos, then increment insertPos.
If the element is zero: Do nothing, just skip it.



After this step, all non-zero elements are packed at the front (positions 0 to insertPos - 1), and they're in their original order.
Step 2: Fill Remaining Positions with Zeros
Now that insertPos points to the first "empty" position (where the non-zero data ends), fill everything from insertPos to the end of the array with 0.

Example Walkthrough
Array: 0 1 0 3 12 (size = 5)
Step 1: Compact non-zeros
iarr[i]Is non-zero?ActionCurrent ArrayinsertPos00NoSkip0 1 0 3 12011YesPut 1 at position 01 1 0 3 12120NoSkip1 1 0 3 12133YesPut 3 at position 11 3 0 3 122412YesPut 12 at position 21 3 12 3 123
After Step 1: Array is 1 3 12 3 12, and insertPos = 3 (this is where empty space starts)
Step 2: Fill rest with zeros
Fill from index 3 to 4 with 0:

arr[3] = 0
arr[4] = 0

Final Array: 1 3 12 0 0 ✅
