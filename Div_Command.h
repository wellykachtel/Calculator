/* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/

#ifndef _CS507_DIV_H_
#define _CS507_DIV_H_

#include "Binary_Op_Command.h"
/****************************************
* This header file contains the methods *
* for the DIVIDE command.                  *
* DIVIDE has precedence 1                  *
*****************************************/

class Div_Command : public Binary_Op_Command
{
public:
	Div_Command(Stack<int> & s_);
	~Div_Command();
	int getPrecedence(void);
	int evaluate(int n1, int n2) const;
};

#endif