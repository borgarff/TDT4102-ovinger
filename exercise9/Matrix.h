#include <ostream>

class Matrix {
    private:
    double **mtx;
    int rows;
    int columns;

    public:
    Matrix(int nRows, int nColumns);
    explicit Matrix(int nRows);
    Matrix(const Matrix & rhs);
    Matrix operator=(Matrix& matrix);
    Matrix operator +=(Matrix& matrix);
    friend Matrix operator +(Matrix& matrix1, Matrix& matrix2);
    ~Matrix();
    double get(int row, int col) const;
    void set(int row, int col, double value);
    int getRows() const;
    int getColumns() const;
    friend std::ostream& operator<<(std::ostream& os, const Matrix &matrix);

};

