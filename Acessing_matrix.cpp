#include <iostream>
#include <C:\Users\Komsun\Documents\For Coding\Eigen Library\eigen-3.4.0\Eigen\Dense>

using namespace std;
using namespace Eigen;

int main()
{
    // ----------------Accessing matrix blocks-----------------
    MatrixXd A(4,4);
    A << 101, 102, 103, 104,
         105, 106, 107, 108,
         109, 110, 111, 112,
         113, 114, 115, 116;
    cout << "A: \n" << A << endl;
    // access the matrix composed of 1:2 rows and 1:2 columns of A
    MatrixXd B = A.block(0,0,2,2);
    cout << "B: \n" << B << endl;

    MatrixXd C = A.block(1,1,2,2);
    cout << "C: \n" << C << endl;

    // ---------Accessing columns and rows of a matrix---------
    cout << endl << "Row 1 of A is \n" << A.row(0) << endl;
    cout << endl << "Column 2 of A is \n" << A.col(1) << endl;

    return 0;
}