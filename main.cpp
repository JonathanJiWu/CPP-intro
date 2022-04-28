#include<iostream>//input/output stream, for pre-processer, before compile
#include<cmath>
#include<climits>
#include<vector>
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
		                                      
			//do while loop for doing something at least once
			//it'll keep do, untill while is true
			do {} while (true);

			//break, continue(skip this round of the loop)

			int printOut = guess == answer ? printf("lol") : printf("haha");
			//it's a question, is guess == answer? if yes, print lol, if no print haha, assigned to printOut

			//array, vector and templatized array
			int nums[5]; //statically sized
			int moreNums[] = { 11, 344, 43, 55 };
			int oneNum = moreNums[2];

			//vector are dynamically sized
			 

			//# Inline fucntion
			// When the program executes the function call instruction the CPU stores the memory address of the instruction following the function call, 
			// copies the arguments of the function on the stack and finally transfers control to the specified function. 
			// The CPU then executes the function code, stores the function return value in a predefined memory location/register and returns control to the calling function. 
			// This can become overhead if the execution time of function is less than the switching time from the caller function to called function (callee). 
			// For functions that are large and/or perform complex tasks, the overhead of the function call is usually insignificant compared to the amount of time the function takes to run. 
			// However, for small, commonly-used functions, the time needed to make the function call is often a lot more than the time needed to actually execute the function�s code. 
			// This overhead occurs for small functions because execution time of small function is less than the switching time.
			// 
			//reduce the function call overhead, only a request to the compiler
			// 
			// Only when you want the function to be defined in a header
			//if you define a function in a header you will need to declare it inline. Otherwise you will get linker errors about multiple definitions of the function.

			//# const function
			//The idea of const functions is not to allow them to modify the object on which they are called. or call any non-const member functions (as they may modify the object).
			//When a function is declared as const, it can be called on any type of object. Non-const functions can only be called by non-const objects. 
			//const class objects can only explicitly call const member functions
			//append the const keyword to the function prototype, after the parameter list, but before the function body:
			int getValue() const { return m_value; } // note addition of const keyword after parameter list, but before function body
			//Best practice: Make any member function that does not modify the state of the class object const, so that it can be called by const objects.

			//# Pass by lvalue reference: passing a class argument by value causes a copy of the class to be made (which is slow) -- most of the time, we don�t need a copy, 
			//a reference to the original argument works just fine, and is more performant because it avoids the needless copy. 
			//We typically make the reference const in order to ensure the function does not inadvertently change the argument, and to allow the function to work with R-values (e.g. literals), 
			//which can be passed as const references, but not non-const references.
			void printValue(std::string& y) // type changed to std::string&
			{
				std::cout << y << '\n';
			} // y is destroyed here

			int main()
			{
				std::string x{ "Hello, world!" };

				printValue(x); // x is now passed by reference into reference parameter y (inexpensive)

				return 0;
			}
			//the type of parameter y has been changed from std::string to std::string& (an lvalue reference).
			//Now, when printValue(x) is called, lvalue reference parameter y is bound to argument x.
			//Binding a reference is always inexpensive, and no copy of x needs to be made.
			//Because a reference acts as an alias for the object being referenced, when printValue() uses reference y, it�s accessing the actual argument x(rather than a copy of x).

			//# List initialization
			void fun(double val, int val2) {

				int x2 = val;    // if val == 7.9, x2 becomes 7 (bad)

				char c2 = val2;  // if val2 == 1025, c2 becomes 1 (bad)

				int x3{ val };    // error: possible truncation (good)

				char c3{ val2 };  // error: possible narrowing (good)

				char c4{ 24 };    // OK: 24 can be represented exactly as a char (good)

				char c5{ 264 };   // error (assuming 8-bit chars): 264 cannot be 
								 // represented as a char (good)

				int x4{ 2.0 };    // error: no double to int value conversion (good)

				//# trailing return type, C++ 11
				//these two declarations are compatible :
				int foo();
				auto foo() -> int;

			}


			//static member function
			class Something
			{
			private:
				static int s_value;
			public:
				static int getValue() { return s_value; } // static member function
			};

			int Something::s_value{ 1 }; // initializer

			int main()
			{
				std::cout << Something::getValue() << '\n';
			}
			//static member functions are not attached to a particular object, they can be called directly by using the class name and the scope resolution operator

			//# source code => code

			//# instruction set == machine language => 10101010 01001010
			//0 and 1s are binary digit, or bit
			//x32 => CPU can only process 32 bit long instruction
			//x86 CPU has instructions can be variable length

			//# assembly language
			//in AL each instruction is identified by a short abbreviation, names, number => mov al, 061h
			//assembler translate AL into machine language
			//fast but still hard to read

			//# highlevel language
			//C++ => a = 97
			//compiling or interpreting to translate high-level language into machine code
			//compiler read source code and produce standalone executable program that can be run, need once
			//programs can be compiled for many different systems, no need to change the program, just compile for the system
			
			//# language standard
			//C++20 => new standard released in 2020

			//# C++ philosophy => trust the programmer
			
			//# compiler goes through each .cpp and does two things:
			//1. check syntax error
			//2. translate source code into machine language file called an object file(name.o or name.obj)
			//each .cpp file will produce a .obj file

			//# linking object files and libraries
			//linker kicks in after compiler created obj file(s)
			//1. combine all obj files into one single executable program
			//2. link library files, iostream library is a part of C++ standard library(std)
			//3. makes sure cross file dependencies are resolved properly

			//# project is a container holds all of the source code files
			//# solution is a container holds one or more related projects
			//( if you were writing a game and wanted to have a separate executable for single player and multiplayer, you�d need to create two projects.)

			//# VS, F7 to compile, F5 debug
			//when code file is compiled by VS, it cache the resulting .obj file,That way, if the program is compiled again in the future, any code file that hasn�t been modified doesn�t need to be recompiled -- the cached object file from last time can be reused. 
			//Clean: removes all cached obj
			// 
			//build configuration(build target): collection of project settings that determines how your IDE will build your project
			//debug configuration turns off all optimizations
			//release configuration, optimized for size and performance

			//# statement => type of instruction that causes the program to perform some action

			//# ~constructor-name(); => destructor\
			//A destructor function is called automatically when the object goes out of scope

			// If you ever write code that is so complex that needs a comment to explain what a statement is doing, you probably need to rewrite your statement, not comment it.

			//Instantiation is a fancy word that means the object will be created and assigned a memory address.
			//type of a variable must be known at compile-time (when the program is compiled), and that type can not be changed without recompiling the program. 

			//use variables to access memory. Variables have an identifier, a type, and a value

			//# Brace initialization has the added benefit of disallowing �narrowing� conversions. This means that if you try to use brace initialization to initialize a variable with a value it can not safely hold, the compiler will throw a warning or an error.

			//cout stands for �character output�.
			// insertion operator (<<) shows the direction that data is moving
			//endl stands for �end line�. cause the cursor to move to the next line of the console,  �flushes� the output (makes sure that it shows up on the screen immediately). 
			//std::cout often flushes output anyway
			// �\n� character moves the cursor to the next line, preferred 
			//std::cin (�character input�) reads input from keyboard using the extraction operator (>>). shows the direction that data is moving
			//The input must be stored in a variable to be used.
			//possible to input more than one value on a single line:
			std::cout << "Enter two numbers separated by a space: ";

			int x{ }; // define variable x to hold user input (and zero-initialize it)
			int y{ }; // define variable y to hold user input (and zero-initialize it)
			std::cin >> x >> y; // get two numbers and store in variable x and y respectively

			std::cout << "You entered " << x << " and " << y << '\n';

			//# uninitialized variables
			//C++ does not initialize most variables to a given value automatically
			//Thus when a variable is assigned a memory location by the compiler, 
			//the default value of that variable is whatever (garbage) value happens to already be in that memory location
			//uninitialized variable == garbage value, always initialize

			//# undefined behavior, can be anything, caused by uninitialized variables

			//# keywords, 92 words, special meanings
			//name of a variable (or function, type, or other kind of item) is called an identifier

			//# operators
			//Parenthesis first, then Exponents, then Multiplication & Division, then Addition & Subtraction. This ordering is sometimes abbreviated PEMDAS,

			//# expression
			int x{ 2 + 3 };
			//type identifier { expression }; => in whole, it's a statement
			//Statement is like a command to the computer. 
			//Expression is like a calculation. 

			//# function
			//nested function is not allowed
			//functions cannot be defined inside other functions in C++

			//# vector
			//functions cannot be defined inside other functions.
			//do not need to include the array length at compile time.
			//because std::vector will dynamically allocate memory for its contents as requested.
			//When a vector variable goes out of scope, 
			//it automatically deallocates the memory it controls (if necessary). 
			//This is not only handy (as you don�t have to do it yourself), 
			//it also helps prevent memory leaks. 

			//resizing a vector is computationally expensive

			//# <> template, templatized class (generic in C#)
			std::vector<int> data = { 1, 2, 3 };

			data.push_back(12);

			std::cout << data[3] << std::endl;
			std::cout << data[data.size() - 1] << std::endl;

			std::vector<int> values = { 1, 3, 5 };
			//# range based for loop
			for (int value : values)//no i needed
			{
				std::cout << value << std::endl;
			}
			std::vecotr<int>::iterator it = values.begin();


			//range based for loop can be used on vector is because vector has iterator built-in

			//# function, parameters and arguments
			//function called => parameters of the function are created as variables => values of each of the arguments is copied into the matching parameter
			//that process is called [pass by value]
			//the argument is essentially just an initializer for the parameter, and initializers can be any valid expression

			//# local parameters
			//function parameters & variables defined inside a function body are called local variables

			//# lifetime, a runtime property, between creation and destruction
			//objects must be created and initialized no later than the point of definition, 
			//and destroyed no earlier than the end of the set of the curly braces in which they are defined 
			//(or, for function parameters, at the end of the function).

			//Most often, local variables are created when the function is entered, and destroyed in the opposite order of creation 
			//when the function is exited

			// When an identifier can be accessed, we say it is in scope, can not be accessed => out of scope
			//Scope is a compile-time property => compiler error

			//A local variable�s scope begins at the point of variable definition, 
			//and stops at the end of the set of curly braces in which they are defined
			//function parameters => end of the function

			//# forward declaration, tell the compiler about the existence of an identifier before defining the identifier.
			//In the case of functions, this allows us to tell the compiler about the existence of a function before we define the function�s body.

			//function prototype, return type, name, parameters, no function body, terminated with a semicolon.

			//forget define function: can compile, linker error

			//# multiple files, the compiler compiles each file individually. does not know about the contents of other code files, 
			//or remember anything it has seen from previously compiled code files. that's why we are using forward declaration

			//# naming collision
			//namespace
			//Explicit namespace qualifier std::
			//:: => scope resolution operator,  If no identifier to the left of the :: symbol is provided, the global namespace is assumed.
			//don't use using namespace blahblah; violate the reason why namespaces were added in the first place.

			//translation => compilation => linking
			//phase 4 of translation == preprocessor{manipulates the text in each code file}
			//Preprocessor directives (often just called directives) == instructions that start with a # symbol 
			//and end with a newline (!= semicolon).
			//all text changes made by the preprocessor happen temporarily in-memory each time the code file is compiled.
			
			//When you #include a file, the preprocessor replaces the #include directive with the contents of the included file.
			//The included contents are then preprocessed(along with the rest of the file), and then compiled.

			//#define directive can be used to create a macro. a macro is a rule that defines how 
			//input text is converted into replacement output text.

			//avoid Object-like macros(#define MY_NAME "Alex") use const instead

			//Conditional compilation
			#include <iostream>

			#define PRINT_JOE

						int main()
						{
						#ifdef PRINT_JOE
										std::cout << "Joe\n"; // will be compiled since PRINT_JOE is defined
						#endif

						#ifdef PRINT_BOB
										std::cout << "Bob\n"; // will be ignored since PRINT_BOB is not defined
						#endif

							return 0;
						}


			//Conditional compilation
			#include <iostream>

			#define PRINT_JOE

			int main()
				{
			#ifdef PRINT_JOE
				std::cout << "Joe\n"; // will be compiled since PRINT_JOE is defined
			#endif

			#ifdef PRINT_BOB
				std::cout << "Bob\n"; // will be ignored since PRINT_BOB is not defined
			#endif

				return 0;
				}

			//Because PRINT_JOE has been #defined, the line std::cout << "Joe\n" will be compiled. Because PRINT_BOB has not been #defined, the line std::cout << "Bob\n" will be ignored.

			//Source files should #include their paired header file

			//Use double quotes to include header files that you�ve written or are expected to be found in the current directory. Use angled brackets to include headers that come with your compiler, OS, or third-party libraries you�ve installed elsewhere on your system.

			//To maximize the chance that missing includes will be flagged by compiler, order your #includes as follows:

			//1. The paired header file
			//2. 	Other headers from your project
			//3. 	3rd party library headers
			//4. 	Standard library headers
			//The headers for each grouping should be sorted alphabetically.

			//header guards(include guards)
			//#pragma once

			//1: Define your goal
			//2: Define requirements(budget, time, MVP)
			//3: Define tools, targets, and backup plan
			//4: Break hard problems down into easy problems(top down method of problem solving)
			//5: Figure out the sequence of events

			//# debug
			//error types: syntax errors, and semantic errors (logic errors).

			//All bugs stem from a simple premise: Something that you thought was correct, isn�t.

			//# Once a problem has been identified, debugging the problem generally consists of five steps :
			//	Find the root cause of the problem(usually the line of code that�s not working)
			//	Ensure you understand why the issue is occurring
			//	Determine how you�ll fix the issue
			//	Repair the issue causing the problem
			//	Retest to ensure the problem has been fixed and no new problems have emerged

			//# debugging tactic
			//1. Commenting out your code
			//2. Validating your code flow:
				//=> program is calling a function too many or too few times (including not at all).
			//#3: Printing values


			//#use std::cerr instead of std::cout 
			// std::cout may be buffered, which means there may be a pause between when you ask std::cout 
			// to output information and when it actually does. If you output using std::cout and then 
			// your program crashes immediately afterward, std::cout may or may not have actually output yet. 
			
			// To "flush" is to flush (or empty) the stream's buffer (character cache).
			//cout.flush() you are only flushing std::cout's stream buffer.

			//std::cerr is unbuffered, which means anything you send to it will output immediately





}

//all variables goes into memories
//bits => 1 and 0s => 1010110010101010101010101 (16bits) => adds 1 bit the total possible value doubles
 
//16bits => 2 pow 16 => 65,536 (64 K) 
//32bits => 2 pow 32 => 4,294,967,296 (4 G)

//negative&positive => negative number use the first bit as sign bit => possible values is cut in half (comparing to possitive ones)

