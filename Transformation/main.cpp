#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>

int main(){
    // // Basic Example of cpp
    // std::cout << "Example of cpp \n";
    // float a = 1.0, b = 2.0;
    // std::cout << a << std::endl;
    // std::cout << a/b << std::endl;
    // std::cout << std::sqrt(b) << std::endl;
    // std::cout << std::acos(-1) << std::endl;
    // std::cout << std::sin(30.0/180.0*acos(-1)) << std::endl;

    // Example of vector
    std::cout << "Example of vector \n";
    // vector definition
    Eigen::Vector3f v(1.0f,2.0f,3.0f);
    Eigen::Vector3f w(1.0f,0.0f,0.0f);
    // // vector output
    // std::cout << "Example of output \n";
    // std::cout << v << std::endl;
    // // vector add
    // std::cout << "Example of add \n";
    // std::cout << v + w << std::endl;
    // // vector scalar multiply
    // std::cout << "Example of scalar multiply \n";
    // std::cout << v * 3.0f << std::endl;
    // std::cout << 2.0f * v << std::endl;

    // Example of matrix
    std::cout << "Example of matrix \n";
    // matrix definition
    Eigen::Matrix3f i,j;
    i << 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0;
    j << 2.0, 3.0, 1.0, 4.0, 6.0, 5.0, 9.0, 7.0, 8.0;
    // // matrix output
    // std::cout << "Example of output \n";
    // std::cout << i << std::endl;
    // matrix add i + j
    // std::cout << "Practise: add matrix\n";
    // std::cout << i+j << std::endl;
    // // matrix scalar multiply i * 2.0
    // std::cout << "Practise: scalar multiply of matrix\n";
    // std::cout << 2.0f*i << std::endl;
    // // matrix multiply i * j
    // std::cout << "matrix multiply\n";
    // std::cout << i*j << std::endl;
    // // matrix multiply vector i * v
    // std::cout << "matrix multiply vector\n";
    // std::cout << i*v<< std::endl;

    // given point p(2,1),rotate around origin
    Eigen::Vector3f p(2.0f,1.0f,1.0f);
    Eigen::Matrix3f transformation;
    transformation << std::sin(45.0/180.0*acos(-1)), (-1)*std::cos(45.0/180.0*acos(-1)), 1, std::sin(45.0/180.0*acos(-1)), std::cos(45.0/180.0*acos(-1)) , 2, 0 ,0 , 1;
    Eigen::Vector3f res = transformation*p;
    std::cout << "This is the result point\n";
    std::cout << res << std::endl;
    return 0;
}