#include<iostream>//input/output stream, for pre-processer, before compile

int main()//return type, function name
{
	int value = 5;// = is assign operator
	double newValue;//declaration
	newValue = 10.0;//initialization(literal, just a value)

	double newvalueExpression = 22.5 + 77.1;//declaration and initialization(and is an expression: sequence of operators and operands that specifies a computation)

	int valueToAdd = 99;

	value = valueToAdd;//value's 


	std::cout << "hole wornd"<< std::endl;//statement, std=> namespace =>a group of codes =>pervent naming conflects, cout => object
	//endl is a Manipulator
	printf("%i/n", value);// from C, (type, target), old stuff

	return 0;//return value
}