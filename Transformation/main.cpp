// Assignment0 of Games101
// author: Jiarui, Chen
// Task of this code file
// 给定一个点 P=(2,1), 将该点绕原点先逆时针旋转 45◦，再平移 (1,2), 计算出变换后点的坐标（要求用齐次坐标进行计算）

#include<iostream>
#include<cmath>
#include<eigen3/Eigen/Core>


int main(){
    // Given point P = (2,1)
    Eigen::Vector3f p(2.0f,1.0f,1.0f);
    Eigen::Matrix3f transformation;
    // acos(-1) = pi definition
    transformation << std::cos(45.0/180.0*acos(-1)), (-1)*std::sin(45.0/180.0*acos(-1)), 1,
                    std::sin(45.0/180.0*acos(-1)), std::cos(45.0/180.0*acos(-1)) , 2,
                    0 , 0 , 1;
    // Left multiply !!
    Eigen::Vector3f res = transformation*p;
    std::cout << "This is the result point\n";
    std::cout << res << std::endl;
    return 0;
}

// Question 1: Left hand coordinate / Right hand coordinate ? Difference?
// Question 2: What is the meaning of 3rd value of point p? And why we define a vector but not a point ?
// QUestion 3: How can know it is counterclockwise or clockwise ?