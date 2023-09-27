#include <iostream>
#include <C:\Users\Komsun\Documents\For Coding\Eigen Library\eigen-3.4.0\Eigen\Dense>
using namespace std;

int main()
{
    Eigen::MatrixXd A1(2,2), B1(2,2);
    A1 << 1, 2,
          3, 4;
    B1 << 3, 4,
          5, 6;
    // Summation
    Eigen::MatrixXd C1 = A1 + B1;

    // Matrix multiplication
    Eigen::MatrixXd D1 = A1 * B1;

    // Multiplication by scalar
    int s1 = 2;
    Eigen::MatrixXd E1 = s1 * A1;

    // Matrix transpose
    Eigen::MatrixXd At = A1.transpose();

    // Matrix inverse
    Eigen::MatrixXd Ainv = A1.inverse();

    // Double check A^(-1)*A
    Eigen::MatrixXd ident = Ainv * A1;

    // Be careful, the operation .transpose()
    // might lead to unexpected results in this scenario:
    // A1 = A1.transpose();

    Eigen::MatrixXd mat = A1;
    cout << "\nmat: \n" << mat << endl;
    // Correct and safe way:
    mat.transposeInPlace();  // self-assigned the transposed version
    cout << "\nmat: \n" << mat << endl;
    mat.transposeInPlace();
    cout << "\nmat: \n" << mat << endl;

    cout << "\nA1: \n" << A1 << endl;
    cout << "\nB1: \n" << B1 << endl;
    cout << "\nA1 + B1: \n" << C1 << endl;
    cout << "\nA1*B1: \n" << D1 << endl;
    cout << "\n2*A: \n" << E1 << endl;
    cout << "\nA tranposed: \n" << At << endl;
    cout << "\nA inversed: \n" << Ainv << endl;
    cout << "\nDouble check A^(-1)*A: \n" << ident << endl;

    return 0;
}