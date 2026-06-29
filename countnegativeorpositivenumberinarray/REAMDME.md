# Count Positive and Negative Numbers

## 📌 Problem Statement

Given an array of integers, count the number of **positive** and **negative** numbers present in the array.

> **Note:** `0` is neither positive nor negative.

---

## 📝 Input Format

- The first line contains an integer **N**, the size of the array.
- The second line contains **N** space-separated integers.

---

## 📤 Output Format

Print the count of positive and negative numbers in the following format:

```text
Positive = X
Negative = Y
```

Where:
- **X** = Number of positive integers
- **Y** = Number of negative integers

---

## 💡 Sample Input

```text
6
-2 5 -1 7 0 3
```

## ✅ Sample Output

```text
Positive = 3
Negative = 2
```

---

## 🔍 Explanation

Array: `[-2, 5, -1, 7, 0, 3]`

- Positive Numbers: `5, 7, 3` → **3**
- Negative Numbers: `-2, -1` → **2**
- `0` is ignored because it is neither positive nor negative.

---

## 🚀 Approach

1. Read the size of the array.
2. Initialize two counters:
   - `positive = 0`
   - `negative = 0`
3. Traverse the array:
   - If the element is greater than `0`, increment `positive`.
   - If the element is less than `0`, increment `negative`.
   - Ignore `0`.
4. Print both counts.

---

## ⏱️ Complexity Analysis

- **Time Complexity:** `O(N)`
- **Space Complexity:** `O(1)`

---



## 📚 Topics

- Arrays
- Loops
- Counting
- Conditional Statements
- C++

---
