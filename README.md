# Off-by-One Error in Vector Iteration
This repository demonstrates a common off-by-one error in C++ when iterating over a vector using a for loop.  The error occurs because the loop condition `i <= vec.size()` attempts to access an element beyond the valid range of the vector, leading to undefined behavior.

## Bug Description
The bug lies in the loop condition `i <= vec.size()`.  Vectors are zero-indexed, meaning the valid indices range from 0 to `vec.size() - 1`.  By using `<=`, the code attempts to access `vec[vec.size()]`, which is one element past the end of the vector.

## Solution
The solution is to change the loop condition to `i < vec.size()`, ensuring that the loop only iterates up to, but not including, the size of the vector.