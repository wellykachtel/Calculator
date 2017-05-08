/* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/

#include "Stack.h"
#include "Stack_Expr_Command_Factory.h"
#include "Array.h"
#include "Stack_Calculator.h"
#include <iostream>
#include <sstream>

// Kelly, please write enough comments in all your classes to explain breifly what your code does.
//to fix this, I added more comments to my code
int main()
{

	std::string infix;

	//using a while loop so the user can input multiple expressions
	while (infix != "QUIT")
	{
		std::cout << "Enter an expression: " << std::endl;
		//getline gets all the characters entered by the user
		std::getline(std::cin, infix);
		if (infix == "QUIT")
			break;

		//create a stack to hold the end result
		Stack<int> result;
		Stack_Calculator newCalc; 
		Stack_Expr_Command_Factory factory(result);
		Array<Expr_Command*> postfix;

		//use the newCalc to perform the main methods of calculation
		newCalc.infix_to_postfix(infix, factory, postfix);
		newCalc.evaluate_postfix(postfix);

		//the answer is stored at the top of the result stack
		int res = newCalc.get_result(result);
		std::cout << res << std::endl;
	}

	std::cout << "Goodbye" << std::endl;


	return 0;
}

