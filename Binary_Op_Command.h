/* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/

#ifndef _CS507_BINARY_COMM_H_
#define _CS507_BINARY_COMM_H_

#include "Expr_Command.h"

/******************************************************
* This class inherits from the Expr_Command class     *
* It handles all expression commands that have binary *
* operations such as add, subtract, multiply,         *
* and modulus. It does not contain its own precedence *
*******************************************************/

class Binary_Op_Command : public Expr_Command
{
public:
	Binary_Op_Command(Stack<int> & s);
	virtual ~Binary_Op_Command();

	virtual int getPrecedence(void) = 0;
	void execute(void);
	virtual int evaluate(int n1, int n2) const = 0;
};

#endif