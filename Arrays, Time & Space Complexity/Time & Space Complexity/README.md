## 📈 Time & Space Complexity — Notes

### ⏳ **What is Time Complexity?**

Time complexity tells us **how the running time of an algorithm increases** with the **size of the input (n)**.
It helps compare algorithms based on **efficiency** rather than machine speed or language.

---

### 📌 **Common Time Complexities**

| Time Complexity | Name         | Example                                   |
| --------------- | ------------ | ----------------------------------------- |
| **O(1)**        | Constant     | Accessing array element, pushing to stack |
| **O(log n)**    | Logarithmic  | Binary Search                             |
| **O(n)**        | Linear       | Traversing an array / loop                |
| **O(n log n)**  | Linearithmic | Merge Sort, Quick Sort average            |
| **O(n²)**       | Quadratic    | Nested loops, Bubble Sort, Insertion Sort |
| **O(2ⁿ)**       | Exponential  | Recursion with 2 calls (Fibonacci)        |
| **O(n!)**       | Factorial    | Permutations / Backtracking (N-Queens)    |

---

### 🧠 **Big-O Notation Rules**

| Rule                   | Meaning                                  |
| ---------------------- | ---------------------------------------- |
| **Drop constants**     | `O(2n) → O(n)`                           |
| **Drop lower terms**   | `O(n² + n) → O(n²)`                      |
| **Worst case matters** | Big-O represents worst performance       |
| **Focus on growth**    | Operation count increases as input grows |

Example:

```cpp
for(int i=0; i<n; i++){         // O(n)
   for(int j=0; j<n; j++){       // O(n)
      cout << "*";              // O(1)
   }
}
```

Total = `O(n * n)` = **O(n²)**

---

## 💾 Space Complexity

### 📌 **What is Space Complexity?**

Space complexity measures **how much extra memory an algorithm uses** with respect to input size.

| Space Complexity | Example                                               |
| ---------------- | ----------------------------------------------------- |
| **O(1)**         | Variables, pointers, constant memory                  |
| **O(n)**         | Arrays, vectors, recursion depth for linear recursion |
| **O(n²)**        | 2D matrix, DP table                                   |

---

### 🧮 Examples

#### Example 1: Linear space

```cpp
int arr[n];   // uses O(n) extra space
```

#### Example 2: Recursion space

```cpp
int fact(int n){
    if(n==0) return 1;
    return n * fact(n-1);
}
```

Depth = n → **O(n) space**

---

## 🥊 Time vs Space Trade-off

Many problems balance between:

| More Time      | Less Space                        |
| -------------- | --------------------------------- |
| More loops     | No extra memory                   |
| Faster runtime | Extra memory such as hash map, DP |

---

## 🎯 Why Complexity Matters?

* Optimizes code for **competitive programming & interviews**
* Helps **select the best algorithm**
* Crucial for **scalable system design**
* Required by **FAANG level interviews**

---

## 🔥 Quick Complexity Cheat Sheet

```
Best  → O(1)
Good  → O(log n)
Medium → O(n)
Slow → O(n log n)
Bad → O(n²)
Worst → O(2ⁿ), O(n!)
```

---

## ✨ Conclusion

Time & Space complexity helps us:

* Write **efficient algorithms**
* **Predict performance**
* Perform better in **DSA & interviews**

```
Optimization is not about writing complex code,
it's about writing code that runs efficiently.
```
