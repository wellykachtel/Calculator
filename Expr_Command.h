
/* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
#ifndef _CS507_EXPR_COMM_H_
#define _CS507_EXPR_COMM_H_

#include "Stack.h"

/******************************************************
* This pure virtual class contains all the methods    *
* for any expression, including number, binary,       *
* parentheses, and unary. Precedence gets set         *
* to -1 here. When precedece is -1, it is not ever    *
* taken into account.                                 *   
*                                                     *
* As the value of PRECEDENCE increases, so does the   *
* order of importance. For example, parentheses carry *
* the highest priority, so they contain the highest   *
* precedence, 2                                       *
*******************************************************/

class Expr_Command
{
public:
	Expr_Command(Stack<int> & s);
	virtual ~Expr_Command();
  
  // Kelly, The precedence method on the base object is not a good design
  // choice since it implies that numbers must have a precedence. Unfortunately,
  // this is not the case. You should improve your hierarchy to overcome a potential
  // LSP problem.

	//I feel that every command should have precedence. The negative and parentheses commands
	//are not Binary_Op_Commands, so I cannot move precedence to there. When more commands get added,
	//such as trigonometric functions, they will also take precedence. 
	virtual int getPrecedence(void) = 0;
	virtual void execute(void) = 0;
protected:
	Stack<int> &command_stack;
	int precedence_flag;
};

#endif
