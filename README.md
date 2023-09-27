# Eigen-Cpp-Matrix-Library
My note from 

- https://aleksandarhaber.com/starting-with-eigen-c-matrix-library/
- https://www.youtube.com/watch?v=XmtNr1TuO-E&ab_channel=AleksandarHaber

[Eigen Matrix Library](http://eigen.tuxfamily.org/index.php?title=Main_Page) is a powerful c++ library to perform matrix computation and linear algebra operation

Table of contents
=================

<!--ts-->
  * [Installation](#installation)
  * [Defining Matrix](#defining-matrix)
      * [Static Matrix](#static-matrix)
      * [Dynamic Matrix](#dynamic-matrix)
  * [Special Matrices](#special-matrices)
      * [Zeros Matrix](#zeros-matrix)
      * [Ones Matrix](#ones-matrix)
      * [Identity Matrix](#identity-matrix)
      * [Matrix of Constant](#matrix-of-constant)
  * [Assigning Values to Matrix](#assigning-values-to-matrix)
  * [Accessing Values from Matrix](#accessing-values-from-matrix)
      * [Accessing Matrix Blocks](#accessing-matrix-blocks) 
      * [Accessing rows and columns of a matrix](#accessing-rows-and-columns-of-a-matrix)
  * [Basic Matrix Operations](#basic-matrix-operations)
      * [`transposeInPlace()`](#transposeinplace)  

<!--te-->

# Installation
- Just include the header source files
```cpp
#include <C:\Users\Komsun\Documents\For Coding\Eigen Library\eigen-3.4.0\Eigen\Dense>
using namepsace Eigen;  // Or you have to use Eigen:: 
```

# Defining Matrix
## Static Matrix
Method 1: Explicit declaration
```cpp
Eigen::Matrix <float, 3, 3> matrixA1;
```
Method 2: `typedef` declaration (f: float, d: double, etc)
```cpp
Eigen::Matrix3f matrixB1;
Eigen::Matrix3d matrixB2;
```
## Dynamic Matrix
```cpp
Eigen::Matrix <float, Dynamic, Dynamic> matrixD1;  // Explicit declaration
Eigen::MatrixXf matrixD2;                          // typedef declaration (X:unknown size, f:float)
Eigen::MatrixXd matrixD3(10,10);                   // constructor, allocate memory but don't initialize (d:double)
```


# Special Matrices
## Zeros Matrix
```cpp
int rowNum = 2, colNum = 5;
MatrixXf mZeros1, mZeros2;
// Method 1
mZeros1 = MatrixXf::Zero(rowNum, colNum)
// Method 2
mZeros2.setZero(rowNum, colNum);
```
## Ones Matrix
```cpp
MatrixXf mOnes1, mOnes2;
// Method 1
mOnes1 = MatrixXf::Ones(rowNum, colNum);
// Method 2
mOnes2.setOnes(rowNum, colNum);
```

## Identity Matrix
```cpp
MatrixXd mIdentity1, mIdentity2;
// Method 1
mIdentity1 = MatrixXd::Identity(rowNum, colNum);
// Method 2
mIdentity2.setIdentity(rowNum, colNum);
```

## Matrix of Constant
```cpp
MatrixXf mConst1, mConst2;
float value = 1.2;
// Method 1
mConst1 = mConst1::Constant(rowNum colNum, value);
// Method 2
mConst2.setConstant(rowNum, colNum, value);
```

# Assigning Values to Matrix
```cpp
Eigen::Matrix4f A;
A << 1, 2, 3, 4,
     5, 6, 7, 8,
     9, 10, 11, 12,
     13, 14, 15, 16;
```

# Accessing Values from Matrix
- Eigen uses **zero indexing**
- The indices of an NxN matrix start from (0,0) to (N-1, N-1)
## Accessing Matrix Blocks
https://eigen.tuxfamily.org/dox/group__TutorialBlockOperations.html
```cpp
Eigen::MatrixXd A(4,4);
A << 101, 102, 103, 104,
     105, 106, 107, 108,
     109, 110, 111, 112,
     113, 114, 115, 116;

Eigen::MatrixXd B = A.block(0,0,2,2)
```
## Accessing rows and columns of a matrix
```cpp
Eigen::MatrixXd rowOne = A.row(0); // Row 1 of A
Eigen::MatrixXd colThree = A.col(2); // Column 3 of A
```

# Basic Matrix Operations
```cpp
Eigen::MatrixXd A1(2,2), B1(2,2);
A1 << 1, 2,
      3, 4;
B1 << 3, 4,
      5, 6;
```
```cpp
// Summation
Eigen::MatrixXd C1 = A1 + B1;

// Matrix multiplication
Eigen::MatrixXd D1 = A1 * B1;

// Multiplication by scalar
Eigen::MatrixXd E1 = 2 * A1;

// Matrix transpose
Eigen::MatrixXd At = A1.transpose();

// Matrix inverse
Eigen::MatrixXd Ainv = A1.inverse();
```
## `transposeInPlace()`
Be careful! the operation `.transpose()` might lead to unexpected results when self-assigned
```cpp
A1 = A1.transpose(); // Might lead to Error!!!
```
The correct and safe way to self-assign the transposed matrix is to use `.transposeInPlace()`
```cpp
A1.transposeInPlace(); // self-assigned the transposed value
```

