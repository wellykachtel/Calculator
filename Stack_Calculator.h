/* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/

#ifndef _CS507_STACK_CALC_H_
#define _CS507_STACK_CALC_H_
#include "Expr_Command.h"
#include "Stack.h"
#include "Stack_Expr_Command_Factory.h"

/**********************************************
* This class contains the methods required to *
* perform the calculator functionality.       *  
*                                             *
***********************************************/

class Stack_Calculator
{
public:
  // Kelly, implement all the methods in the source files.
	//To fix this, I implemented the methods in the source files
	Stack_Calculator(void);
	~Stack_Calculator();

	//this method will perform the calculations
	void evaluate_postfix(Array<Expr_Command*>& postfix);
	
	//this method converts infix notation to postfix
	bool infix_to_postfix(const std::string & infix, Stack_Expr_Command_Factory & factory, Array<Expr_Command*> & postfix);
	
	//this method will return the result of the stack calculator calculation
	int get_result(Stack<int> result);

	//this method converts a string to int for use in the number command
	int string_to_int(std::string input);


  // Kelly, you don't need this stack in the member variables of this class.
	//To fix this, I got rid of it
	
};





#endif
