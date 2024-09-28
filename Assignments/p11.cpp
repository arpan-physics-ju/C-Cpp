/*************************MAIN-PROGRAM**********************************

Name:           ARPAN PURKAIT           Class Roll No.: 002320701045
Exam Roll No.:  UPHYS242053
Reg No.:        1661658 of 2023-24      Session:        2024

************************************************************************

PROBLEM STATEMENT:

    Design an abstract data type for a matrix with integer elements in C++,
including operations for addition, subtraction, and matrix multiplication.

************************************************************************/

# include <iostream>


class Matrix {
    private:
        int m, n;
        int mat[3][3];
    public:
        void initialization() {
            int value = 0;
            for (m = 0; m < 3; m++){
                for (n = 0; n < 3; n++){
                    std::cout << "Value at " << m << "," << n << ":";
                    std::cin >> value ;
                    mat[m][n] = value;
                } 
            }
        }
        void see() {
            int value;
            std::cout << "Matrix is: " << std::endl;
            for (m = 0; m < 3; m++){
                for (n = 0; n < 3; n++){
                    value = mat[m][n];
                    std::cout << value << " " ;
                } 
            std::cout << " " << std::endl;
            }
        }
        Matrix add(const Matrix& other) {
            Matrix result;
            for (m = 0; m < 3; m++) {
                for (n = 0; n < 3; n++) {
                    result.mat[m][n] = this->mat[m][n] + other.mat[m][n];
                }
            }
            return result;
        }
        Matrix subs(const Matrix& other) {
            Matrix result;
            for (m = 0; m < 3; m++) {
                for (n = 0; n < 3; n++) {
                    result.mat[m][n] = this->mat[m][n] - other.mat[m][n];
                }
            }
            return result;
        }
        Matrix multiply(const Matrix& other) {
        Matrix result;
        for (int m = 0; m < 3; m++) {
            for (int n = 0; n < 3; n++) {
                result.mat[m][n] = 0;   
                for (int k = 0; k < 3; k++) {
                    result.mat[m][n] += this->mat[m][k] * other.mat[k][n];
                }
            }
        }
        return result;
    }
};

int main(){
    Matrix A;
    Matrix B;
    Matrix C;
    Matrix D;
    Matrix E;
    std::cout << "Initialize Matrix A: " << std::endl;
    A.initialization();
    std::cout << "Initialize Matrix B: " << std::endl;
    B.initialization();
    A.see();
    B.see();
    C = A.add(B);
    std::cout << "Sum of Matrix A and Matrix B: " << std::endl;
    C.see();
    D = A.subs(B);
    std::cout << "Subtraction of Matrix A and Matrix B: " << std::endl;
    D.see();
    E = A.multiply(B);
    std::cout << "Matrix multiplication of Matrix A and Matrix B: " << std::endl;
    E.see();
    return 0;
}
