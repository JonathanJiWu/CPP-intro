#include<iostream>//input/output stream, for pre-processer, before compile


void functionOne()//function identifier (name)
{

}

double multiply(double x, double y)//function declaration(can out in .h)
{
	return x * y;//function definition(can put in .cpp)
}


int main()//return type, function name
//main() is call when the program is run
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

	int slice;

	std::cout << "say something";
	std::cin >> slice;// console in
	std::cout << "you just said" << slice;

	//intro to functions
	//declaration, definition, calling
	double pow1 = pow(10, 2);//two arguments

	double pow2 = pow(22, 2) * 2;

	functionOne();//calling
	multiply(2, 5);//calling

	return 0;//return value
}