📌 Time & Space Complexity — DSA Notes

Understanding time and space complexity is essential for estimating the performance of algorithms and writing optimal code. It tells how efficient an algorithm is in terms of execution time and memory usage.

🕒 Time Complexity

Time complexity represents how the running time of an algorithm grows with input size n.

Common Time Complexities (Best → Worst)
Complexity	Name	Example
O(1)	Constant	Accessing array element, Hash lookup
O(log n)	Logarithmic	Binary Search
O(n)	Linear	Traversing an array
O(n log n)	Log-linear	Merge Sort, Quick Sort avg case
O(n²)	Quadratic	Nested loops (Bubble Sort, Selection Sort)
O(n³)	Cubic	3 nested loops
O(2ⁿ)	Exponential	Fibonacci (recursive)
O(n!)	Factorial	Permutation/Travelling Salesman
🧠 How to Identify Time Complexity

Single loop → O(n)

Nested loops → Multiply → O(n²), O(n³)

Binary search / divide-and-conquer → O(log n) or O(n log n)

Ignoring constants and small terms

O(2n + 3) = O(n)
O(n² + n) = O(n²)

💾 Space Complexity

Space complexity represents how much extra memory an algorithm uses.

Components of Space
Type	Description
Input Space	Memory used to store input
Auxiliary Space	Extra temporary memory used
Total Space = Input + Auxiliary	
Common Space Complexities
Complexity	Description
O(1)	Constant space (no extra storage)
O(n)	Linear space (using arrays, vectors)
O(n²)	2D matrix, DP table
⚔ Time vs Space Trade-off

Sometimes we choose between speed and memory:

Faster algorithm uses more space (DP vs Recursion)

Less memory may run slower (Brute force)

✨ Examples
Example 1
for(int i=0; i<n; i++){
    cout << i;
}


🔹 Time → O(n)
🔹 Space → O(1)

Example 2
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cout << i << " " << j;
    }
}


🔹 Time → O(n²)
🔹 Space → O(1)

Example 3
int arr[n];


🔹 Space → O(n) because array takes n memory units
