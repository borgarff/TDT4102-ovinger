#include <iostream>
#include "Fibonacci.h"
#include "Matrix.h"
#include "Dummy.h"


int main() {
    /*
    int res[10];
    int length = 10;

    fillInFibonacciNumbers(res, length);
    printArray(res, length);
    */
    //createFibonacci();
    
    /*
    Matrix matrix = Matrix(10, 5);
    matrix.set(5, 3, 9.0);
    std::cout << matrix;
    */

    //dummyTest();

    Matrix matrixA = Matrix(2, 2);
    Matrix matrixB = Matrix(2, 2);
    Matrix matrixC = Matrix(2, 2);
    matrixA.set(0, 0, 1.0);
    matrixA.set(0, 1, 2.0);
    matrixA.set(1, 0, 3.0);
    matrixA.set(1, 1, 4.0);
    
    matrixB.set(0, 0, 4.0);
    matrixB.set(0, 1, 3.0);
    matrixB.set(1, 0, 2.0);
    matrixB.set(1, 1, 1.0);
    matrixC.set(0, 0, 1.0);
    matrixC.set(0, 1, 3.0);
    matrixC.set(1, 0, 1.5);
    matrixC.set(1, 1, 2.0);
    std::cout << matrixA;
    std::cout << std::endl;
    std::cout << matrixB;
    std::cout << std::endl;
    std::cout << matrixC;

    std::cout << std::endl;
    std::cout << std::endl;
    //Matrix matrixD = matrixB + matrixC;
    //std::cout << matrixD;
    
    matrixB += matrixC;
    std::cout << matrixB;
    
    return 0;
}
