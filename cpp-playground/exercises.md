Project 1: The 3D Vector (Vector3)
Focus: Basics of classes, operator overloading, and stack vs. heap allocation.The Goal: Build a lightweight, 3D mathematical vector (x, y, z) commonly used in physics engine pipelines.C++ Concepts to Master:Rule of Zero: Keep variables on the stack without explicit pointers so you don't manually manage memory.Operator Overloading: Implement +, -, * (dot product), and ^ (cross product) using const & to avoid copying objects.Stream Insertion: Overload the << operator to print your vector cleanly (std::cout << v;).Code Organization:Vector3.hpp: Clean class definitions with inline mathematical operations.main.cpp: Unit tests evaluating coordinate transformations.

Project 2: The Dynamic Vector (NDVector)Focus: Manual dynamic memory allocation and the Rule of 5.The Goal: Transition from fixed 3D space to an N-dimensional vector where size is determined at runtime. Do not use std::vector; use raw pointers to understand raw memory mechanics.C++ Concepts to Master:Rule of 5: Explicitly implement the Destructor, Copy Constructor, Copy Assignment, Move Constructor, and Move Assignment.Resource Acquisition Is Initialization (RAII): Bind your heap allocated data strictly to the object lifecycle.Move Semantics: Use std::move and noexcept to transfer pointer ownership between vectors without duplicating data arrays.Code Organization:Separate interface declarations (.hpp) from concrete loop implementations (.cpp).

Project 3: The Templated Matrix (Matrix<T>)Focus: C++ Templates, row-major storage layouts, and cache locality.The Goal: Build a 2D Matrix class where the internal data is flattened into a single continuous 1D block of heap memory.C++ Concepts to Master:Class Templates: Make the data type generic (Matrix<float>, Matrix<double>, Matrix<int>).Index Mapping: Convert 2D coordinates (row, col) into a 1D offset index: index = row * width + col.Cache Friendliness: Organize your matrix multiplication loop (i, k, j order instead of i, j, k) to maximize memory cache hits.Code Organization:Because of template compilation rules, put both definitions and implementations into a unified header file (Matrix.hpp) or use a .tpp file extension.

Project 4: The Shared Storage Block (Storage & TensorView)Focus: Smart pointers, separation of concerns, and zero-copy slicing.The Goal: Separate the mathematical shape from the raw data block so multiple matrix components can look at the same memory pool.C++ Concepts to Master:std::shared_ptr: Use shared ownership arrays to track memory blocks via reference counting.Strides and Offsets: Implement real slicing. A \(2 \times 2\) view of a larger \(4 \times 4\) matrix shouldn't copy elements; it should use altered strides.Code Organization:Storage.hpp: Raw data pointer and memory management layer.TensorView.hpp: Shape, stride, offset metadata, and pointer view mapping.

Project 5: The N-Dimensional Tensor LibraryFocus: Variadic templates, dimension broadcasting, and professional architecture.The Goal: Combine your structural components into a production-style tensor library supporting any number of dimensions (\(N\)-dimensions).C++ Concepts to Master:Variadic Templates: Accept dynamic initialization styles like Tensor t({2, 3, 4, 5});.Broadcasting Logic: Automatically stretch and align dimensions of mismatched tensor dimensions during element-wise mathematical calculations.Namespaces: Wrap your complete codebase inside a distinct, safe namespace (e.g., namespace MyTensor) to prevent naming conflicts with external modules.

Code Organization:textmytensor/
├── include/
│   └── mytensor/
│       ├── tensor.hpp       # Core Tensor class interface
│       ├── storage.hpp      # Memory allocation layer
│       └── ops.hpp          # Math operations (Add, Mul, MatMul)
├── src/
│   └── ops.cpp              # SIMD optimizations & Loop implementations
└── tests/
    └── test_tensor.cpp      # Performance testing suite