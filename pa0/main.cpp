#include <eigen3/Eigen/Core>
#include <iostream>
#include <cmath>
int main() {
    std::cout << "vector P\n";
    Eigen::Vector3f v(2.0f,1.0f,1.0f);
    std::cout << v << std::endl;
    Eigen::Matrix3f R_45_mat;
    R_45_mat << 1,-1,0,1,1,0,0,0,1;

    Eigen::Matrix3f T_1_2_mat;
    T_1_2_mat << 1,0,1,0,1,2,0,0,1;

    Eigen::Vector3f v1 = T_1_2_mat * R_45_mat * v;
    
    std::cout << "output \n";
    std::cout << v1 << std::endl;
    return 0;
}