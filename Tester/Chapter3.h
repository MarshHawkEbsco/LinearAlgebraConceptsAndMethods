
#pragma once
#include <iostream>
#include <Eigen/Dense>

class Chapter3
{
	Eigen::Matrix3d matrixA;

public:
	Chapter3() : matrixA{ (Eigen::Matrix3d() << 1, 2, 3, 4, 5, 6, 7, 8, 9).finished()} {}

void IntroduceSelf() const
{

		std::cout << "Matrix A:" << std::endl;
		std::cout << matrixA << std::endl;
	}

};

