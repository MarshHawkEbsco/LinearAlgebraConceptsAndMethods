// Tester.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <Eigen/Dense>
#include "Chapter3.h"

int DemoConsoleOutput();
int MatrixMultiplication();
int TransposeProperties();
int MultiplyingTransposedVectors();
int MatrixTransposedVectorMultiplication();
int InnerProduct();

int main()
{
	std::cout << "Linear Algebra: Concepts and Methods with Eigen" << std::endl;
	//MatrixMultiplication();
	//TransposeProperties();
	//MultiplyingTransposedVectors();
	//MatrixTransposedVectorMultiplication();
	//InnerProduct();
	Chapter3 chapter3;
	chapter3.IntroduceSelf();
	return 0;
}

int MatrixMultiplication()
{
	std::cout << "1.10: Matrix Multiplication" << std::endl;
	Eigen::MatrixXd matrix1(4, 3);
	matrix1(0, 0) = 1;
	matrix1(1, 0) = 2;
	matrix1(2, 0) = 1;
	matrix1(3, 0) = 2;

	matrix1(0, 1) = 1;
	matrix1(1, 1) = 0;
	matrix1(2, 1) = 2;
	matrix1(3, 1) = 2;

	matrix1(0, 2) = 1;
	matrix1(1, 2) = 1;
	matrix1(2, 2) = 4;
	matrix1(3, 2) = -1;

	std::cout << "Matrix 1:" << std::endl;
	std::cout << matrix1 << std::endl;

	Eigen::MatrixXd matrix2(3, 2);
	matrix2(0, 0) = 3;
	matrix2(1, 0) = 1;
	matrix2(2, 0) = -1;

	matrix2(0, 1) = 0;
	matrix2(1, 1) = 1;
	matrix2(2, 1) = 3;

	std::cout << "Matrix 2:" << std::endl;
	std::cout << matrix2 << std::endl;

	std::cout << "Matrix 1 * Matrix 2:" << std::endl;
	std::cout << matrix1 * matrix2 << std::endl;

	return 0;
}

int TransposeProperties()
{
	std::cout << "1.29: Transpose Properties" << std::endl;

	Eigen::Matrix2f matrix1;
	matrix1 << 1, 2, 6, 8;
	Eigen::Matrix2f matrix2;
	matrix2 << 3, 4, 10, 12;
	std::cout << "matrix1*matrix2 transpose" << std::endl;
	std::cout << (matrix1 * matrix2).transpose() << std::endl;
	std::cout << "should equal matrix2 transpose *matrix1 transpose" << std::endl;
	std::cout << matrix2.transpose() * matrix1.transpose() << std::endl;
	std::cout << "and should not equal matrix1 transpose * matrix2 transpose" << std::endl;
	std::cout << matrix1.transpose() * matrix2.transpose() << std::endl;

	return 0;
}

int MultiplyingTransposedVectors()
{
	std::cout << "1.33: Calculate aTb and abT" << std::endl;

	Eigen::Vector3d vectorA(1,2,3);
	Eigen::Vector3d vectorB(4, -2, 1);
	std::cout << "a transpose" << std::endl;
	std::cout << vectorA.transpose() << std::endl;
	std::cout << "times b" << std::endl;
	std::cout << vectorA.transpose() * vectorB<< std::endl;
	std::cout << "and b transpose * a" << std::endl;
	std::cout << vectorA * vectorB.transpose() << std::endl;

	return 0;
}

int MatrixTransposedVectorMultiplication()
{
	std::cout << "1.38: Vectors and matrices" << std::endl;

	Eigen::Vector3d vectorA(1, 2, 3);
	Eigen::Matrix3d matrixA;
	matrixA << 1, 1, 1, 
		2, 2, 2, 
		3, 3, 3;
	std::cout << "a transpose" << std::endl;
	std::cout << vectorA.transpose() << std::endl;
	std::cout << "times matrixA" << std::endl;
	std::cout << matrixA << std::endl;
	std::cout << "equals" << std::endl;
	std::cout << vectorA.transpose() * matrixA << std::endl;

	return 0;
}

int InnerProduct()
{
	std::cout << "1.92: Inner Product" << std::endl;

	Eigen::Vector2d a(1, 2);
	Eigen::Vector2d b(3, 1);
	auto t = a.transpose().dot(b.transpose());
	auto l_of_a = sqrt(a.transpose().dot(a.transpose()));
	auto l_of_b = sqrt(b.transpose().dot(b.transpose()));
	auto lp = l_of_a * l_of_b;
	auto ct = t / lp;

	std::cout << "law of cosines states the inner product off the transposes of (1,2) and (3,1) " << std::endl;
	std::cout << t << std::endl;
	std::cout << "divided by the product of the lengths of said matrices" << std::endl;
	std::cout << lp << std::endl;
	std::cout << ct << std::endl;
	std::cout << "is equal to the product of the square root of the inner product of each of said matrixes with themselves times cosine theta" << std::endl;
	std::cout << lp * ct << std::endl;

	return 0;
}

int DemoConsoleOutput()
{
	Eigen::MatrixXd matrix1(2, 2);
	matrix1(0, 0) = 3;
	matrix1(1, 0) = 2.5;
	matrix1(0, 1) = -1;
	matrix1(1, 1) = matrix1(1, 0) + matrix1(0, 1);
	std::cout << matrix1 << std::endl;

	std::cout << "This is a simple string literal" << std::endl;

	std::cout << "Pi when approximated is 22 / 7 = " << 22 / 7 << std::endl;

	std::cout << "Pi actually is 22 / 7 = " << 22.0 / 7 << std::endl;

	return 0;	
}
