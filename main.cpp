#include<iostream>//input/output stream, for pre-processer, before compile
#include<cmath>
#include<climits>
#define XXX 10//another way to declare const variables

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

	//int type
	short a;
	int b;
	long c;
	long long d;
	unsigned short aa;
	unsigned int bb;
	unsigned long cc;
	unsigned long long dd;
	std::cout << LLONG_MAX << std::endl;

	char x = 'a';
	char y = 130; //will over flow
	unsigned char x = 130; //will not over flow
	cout << (int)x << std::endl;//casting

	//string, escape sequences
	
	//boolean
	bool pizzaIsGood = true;
	bool calzoneIsGood = 0; // 0 == false, everything else is false

	//float
	float a1 10.0 / 3;//put .0 in at lease one num so it doesn't do int division
	double b1 = 77000.0; //or 7.7E4 => 7.7 * 10 powof 4
	long double c1;
	a1 = a1 * 100000000000;

	cout << std::fixed << a1 << std::endl;//fixed => no science notation
	//float is not really trust worthy, just use double

	//const
	int xx = 6; // 6 is literal 
	const int xxx = 6; //read only variable, compile error if trying to change it

	//numeric functions
	std::cout << sqrt(-25) << std::endl;
	std::cout << pow(9, 9999999925) << std::endl;//prints INF
	std::cout << remainder(10, 3) << std::endl;
	std::cout << 10 % 3 << std::endl;//can only work with ints
	std::cout << fmax(10, 22) << std::endl;//find biggest num
	//ceil() always goes up, floor always goes down, 
	//trunc alway crop out anything behind the decimal point
	//round() goes to the closest int

	//strings, string class(string class is superior
		//C++, string class
	std::string greeting = "Hi";
	std::string allGreeting = greeting + " Jon.";
	greeting[0]; //'H'
	std::string space = ''; // this is space, no space needed inbetween
	allGreeting.length(); //method attached to the object

		//Cstring == array of chars
	char name[] = "Jonathan";

	//get line for string
	  //cin only grub the first word
	//use getline() to get the whole line

	//string methods
	allGreeting.size();
	allGreeting.erase();//
	allGreeting.pop_back();//
	allGreeting.replace(0, 4, "sds");//

	//string operation methods
	allGreeting.find();//
	allGreeting.substr(5, 2);//
	allGreeting.find_first_of("d");//npos == -1
	allGreeting.compare("dsada");// true if returns 0

	//literals
	auto adf = 5U;// U=> unsigned
	auto asdsa = 5L;// 
	auto asdss = 5.0f;//

	//hex and octal
	int nom = 30;
		int hexNum = 0x30;// 16 * 3 => fourty eight
		int octNum = 030;//twenty four
	//std::hex
		//std::oct

		//operators
		// +
		//=
		//*, /, %, 

		//operator precedence
		int yy;
		int xxa;
		yy = 10;
		yy = xxa = 100;//yy = 100; xxa = 100
		//equals to yy = (xxa = 100); => assign operator is right to left not like others

		//control flow
			//branching
			if() //T/F, T=> execute{}
			{}

			switch (age)
			{
			case 17:
				//code
				break;//or return 0;
			case 18:
				//code
				break;
			default:
				//code
				break;
			}
			//few options for a variable

			//&&, ||, !, ==, =<, >=

			//enum
			enum Season{summer, spring, fall, winter};
			Season now = winter;
			switch (now)
			{
			case Season::winter:
					//code
				break;
			case Season::spring:
				//code
				break;
			case Season::summer:
				//code
				break;
			case Season::fall:
				//code
				break;
			}

			//looping
			//IOU, initialize, condition, update
			int i = 0;
			while (i < 10)
			{

				//code
				i++;//while loop's increment happen's at the end
			}

			for (int i = 0; i < 10; i++)//when you know how much time it'll run
			{
				//code
			}
		                                      






}

//all variables goes into memories
//bits => 1 and 0s => 1010110010101010101010101 (16bits) => adds 1 bit the total possible value doubles
 
//16bits => 2 pow 16 => 65,536 (64 K) 
//32bits => 2 pow 32 => 4,294,967,296 (4 G)

//negative&positive => negative number use the first bit as sign bit => possible values is cut in half (comparing to possitive ones)

