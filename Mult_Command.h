/* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/

#ifndef _CS507_MULT_H_
#define _CS507_MULT_H_

#include "Binary_Op_Command.h"

/****************************************
* This header file contains the methods *
* for the MULTIPLY command.             *
* MULTIPLY has precedence 1             *
*****************************************/


class Mult_Command : public Binary_Op_Command
{
public:
	Mult_Command(Stack<int> & s_);
	~Mult_Command();
	int getPrecedence(void);
	int evaluate(int n1, int n2) const;
};
#endif
