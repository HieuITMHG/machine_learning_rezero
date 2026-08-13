# Modern C++ Roadmap for Machine Learning (7 Days)

## Goal

Sau 7 ngày, bạn sẽ:

- Thành thạo Modern C++ (C++17/20)
- Sử dụng STL thành thạo
- Hiểu quản lý bộ nhớ
- Hiểu OOP và Template
- Đọc được source code của Eigen, OpenCV, LibTorch
- Sẵn sàng bắt đầu Machine Learning

---

# Day 1 — Modern C++ Basics

## Topics

- auto
- const
- constexpr
- pointer
- reference
- nullptr
- enum class
- namespace
- using
- structured binding
- range-based for

## Exercises

### Easy

- LeetCode 1480 - Running Sum of 1D Array
- LeetCode 1920 - Build Array from Permutation
- LeetCode 1470 - Shuffle the Array

**Requirements**

- Use `std::vector`
- Use `auto`
- Use reference (`&`)

---

### Medium

- LeetCode 26 - Remove Duplicates from Sorted Array
- LeetCode 27 - Remove Element
- LeetCode 283 - Move Zeroes

---

### Challenge

Rewrite the above solutions using:

- Index
- Iterator
- Range-based for loop

---

# Day 2 — STL

## Topics

Containers

- vector
- string
- deque
- queue
- stack
- unordered_map
- unordered_set
- map
- set
- pair
- tuple

Algorithms

- sort
- reverse
- rotate
- lower_bound
- upper_bound
- binary_search
- transform
- accumulate
- find
- count

Iterator

---

## Exercises

Easy

- LeetCode 1 - Two Sum
- LeetCode 217 - Contains Duplicate
- LeetCode 242 - Valid Anagram
- LeetCode 349 - Intersection of Two Arrays
- LeetCode 169 - Majority Element

Medium

- LeetCode 49 - Group Anagrams
- LeetCode 347 - Top K Frequent Elements

---

# Day 3 — Object-Oriented Programming

## Topics

- class
- constructor
- destructor
- copy constructor
- move constructor
- inheritance
- polymorphism
- virtual
- override
- operator overloading

---

## Exercises

### Project 1

Implement

- Vector2D

Features

- +
- -
- *
- norm()

---

### Project 2

Implement Matrix

Features

- +
- -
- *
- transpose()

---

### Project 3

Shape hierarchy

- Shape
- Circle
- Rectangle
- Triangle

Implement

```cpp
virtual double area() = 0;
```

---

### Project 4

Mini Neural Network

Classes

- Layer
- DenseLayer
- ConvLayer
- ActivationLayer

Implement

```cpp
forward()
```

---

# Day 4 — Memory Management

## Topics

- Stack vs Heap
- RAII
- Rule of Five
- unique_ptr
- shared_ptr
- weak_ptr
- Copy semantics
- Move semantics

---

## Exercises

### Project 1

Implement Dynamic Array

(No std::vector)

---

### Project 2

Implement String class

---

### Project 3

Implement Shared Pointer (simplified)

---

### LeetCode

- 206 Reverse Linked List
- 21 Merge Two Sorted Lists
- 141 Linked List Cycle

---

# Day 5 — Templates

## Topics

- Function Template
- Class Template
- typename
- template specialization

---

## Exercises

Implement

- Stack<T>
- Queue<T>
- Vector<T>
- Matrix<T>

Challenge

Implement

- Tensor<T>

Support

- 2D
- 3D
- 4D

---

# Day 6 — Modern C++

## Topics

- Lambda
- Capture
- std::function
- Functor
- std::optional
- std::variant
- std::any
- emplace_back
- Move semantics

---

## Exercises

LeetCode

- 88 Merge Sorted Array
- 56 Merge Intervals
- 57 Insert Interval

Project

Implement

- map()
- filter()
- reduce()

for `std::vector`

---

# Day 7 — Final Project

Implement a mini Linear Algebra Library

Classes

- Vector
- Matrix
- Tensor

Operations

- +
- -
- *
- dot()
- cross()
- transpose()
- reshape()
- slice()

Extras

- Identity Matrix
- Random Matrix
- Gaussian Elimination

Final Challenge

Implement

- Linear Regression
- Gradient Descent

without external libraries.

---

# Recommended LeetCode

## Arrays

- 1
- 26
- 27
- 88
- 121
- 169
- 189
- 238
- 283

## Hash Table

- 217
- 242
- 49
- 347

## Binary Search

- 35
- 704
- 34

## Linked List

- 21
- 141
- 160
- 206
- 234

## Stack

- 20
- 155
- 739

## Queue

- 933

## Heap

- 215
- 703

## Matrix

- 48
- 54
- 73
- 240

---

# Next Steps

1. Eigen
2. Linear Algebra
3. NumPy
4. Scikit-learn
5. PyTorch
6. LibTorch Source Code