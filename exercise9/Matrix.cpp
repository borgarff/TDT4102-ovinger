#include <iostream>
#include <cassert>
#include <new>
#include <ostream>
#include <type_traits>
#include "Matrix.h"

// Use (void) to silent unused warnings.
#define assertm(exp, msg) assert(((void)msg, exp))

Matrix::Matrix(int nRows, int nColumns) {
    //assertm(nRows > 0 || nColumns > 0, "Kan ikke være et negativt tall");
    rows = nRows;
    columns = nColumns;
    mtx = new double*[rows];
    for (int i = 0; i < rows; i++) {
        mtx[i] = new double[columns];
        for (int j = 0; j < columns; j++) {
            mtx[i][j] = 0;
        }
    }
}

Matrix::Matrix(int nRows) {
    //assertm(nRows > 0, "Kan ikke være mindre enn 0");
    rows = nRows;
    columns = nRows;
    mtx = new double*[rows];

    for (int i = 0; i < rows; i++) {
        mtx[i] = new double[columns];
        for (int j = 0; j < columns; j++) {
            mtx[i][j] = 0;
        }
    }
}

Matrix::Matrix(const Matrix & rhs) : mtx{ nullptr } {
    rows = rhs.getRows();
    columns = rhs.getColumns();
    mtx = new double*[rows];
    for (int i = 0; i < rows; i++) {
        mtx[i] = new double[columns];
        for (int j = 0; j < columns; j++) {
            mtx[i][j] = rhs.get(i,j);
        }
    }
}

Matrix:: ~Matrix() {
    delete [] mtx;
}

double Matrix::get(int row, int col) const {
    return mtx[row][col];
}

void Matrix::set(int row, int col, double value) {
    mtx[row][col] = value;
}

int Matrix::getRows() const {
    return rows;
}

int Matrix::getColumns() const {
    return columns;
}

std::ostream& operator<<(std::ostream& os, const Matrix &matrix) {
    for (int i = 0; i < matrix.rows; i++) {
        for (int j = 0; j < matrix.columns; j++) {
            os << matrix.mtx[i][j] << "  ";
        }
        os << std::endl;
    }
    return os;
}

Matrix Matrix::operator=(Matrix &matrix) {
    std::swap(mtx, matrix.mtx);
    std::swap(rows, matrix.rows);
    std::swap(columns, matrix.columns);
    return *this;
}

Matrix Matrix::operator+=(Matrix &matrix) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            mtx[i][j] += matrix.mtx[i][j];
        }
    }
    return *this;
}

Matrix operator+(Matrix &matrix1, Matrix &matrix2) {
    matrix1 += matrix2;
    return matrix1;
}