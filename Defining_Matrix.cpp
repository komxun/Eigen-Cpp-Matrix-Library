#include <iostream>
#include <C:\Users\Komsun\Documents\For Coding\Eigen Library\eigen-3.4.0\Eigen\Dense>

using namespace std;
using namespace Eigen;

int main()
{
    // Defining 3x3 matrix and set its entries to zeros
    Matrix <float, 3, 3> matrixA;   // Method 1: Explicit declaration
    matrixA.setZero();
    cout << "matrixA: " << endl;
    cout << matrixA << endl;

    Matrix3f matrixA1;  // Method 2: typedef declaration (3:3x3 f:float)
    matrixA1.setZero();
    cout << endl << "matrixA1: " << endl;
    cout << matrixA1 << endl;

    // Defining a dynamic matrix
    Matrix <float, Dynamic, Dynamic> matrixB;  // Explicit declaration
    MatrixXf matrixB1;  // typedef declaration (X:unknown size f:float)
    MatrixXd matrixC(10,10); // constructor, allocate memory but do not initialize (d:double)

    // Assigning matrix entries (with constructor)
    MatrixXd matrixC1(2,2);
    matrixC1(0,0) = 1;
    matrixC1(0,1) = 2;
    matrixC1(1,0) = 3;
    matrixC1(1,1) = 4;
    cout << endl << "matrixC1: " << endl;
    cout << matrixC1 << endl;

    // Fill-in the matrix using comma separated values
    Matrix4f matrixD;
    matrixD << 1,2,3,4,
               5,6,7,8,
               9,10,11,12,
               13,14,15,16; 
    cout << endl << "matrixD: " << endl;
    cout << matrixD << endl;

    return 0;
}