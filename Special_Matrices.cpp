#include <iostream>
#include <C:\Users\Komsun\Documents\For Coding\Eigen Library\eigen-3.4.0\Eigen\Dense>

using namespace std;
using namespace Eigen;

int main()
{
    int rowNum = 2, colNum = 5;

    // ------Matrix of zeros-------
    MatrixXf mZeros;
    mZeros = MatrixXf::Zero(rowNum, colNum);
    cout << mZeros << endl;
    // another option
    MatrixXf mZeros1;
    mZeros1.setZero(rowNum, colNum);
    cout << endl << mZeros1 << endl;

    // -------Matrix of ones--------
    MatrixXf mOnes;
    mOnes = MatrixXf::Ones(rowNum, colNum);
    cout << endl << mOnes << endl;
    // another option
    MatrixXf mOnes1;
    mOnes1.setOnes(rowNum, colNum);
    cout << endl << mOnes1 << endl;

    // -------Matrix of constants----
    MatrixXf mConst;
    float value = 1.2;
    mConst = MatrixXf::Constant(rowNum, colNum, value);
    cout << endl << mConst << endl;
    // another option
    MatrixXf mConst1;
    mConst1.setConstant(rowNum, colNum, value);
    cout << endl << mConst1 << endl;

    // -------Identity Matrix-------
    MatrixXd mIdentity;
    mIdentity = MatrixXd::Identity(rowNum+1, rowNum+1);
    cout << endl << mIdentity << endl;
    // another option
    MatrixXd mIdentity1;
    mIdentity1.setIdentity(rowNum+1, rowNum+1);
    cout << endl << mIdentity1 << endl;

    return 0;
}