/* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/

#ifndef _CS507_SUB_H_
#define _CS507_SUB_H_

#include "Binary_Op_Command.h"

/****************************************
* This header file contains the methods *
* for the SUB command.                  *
* SUB has precedence 0                  *
*****************************************/

class Sub_Command : public Binary_Op_Command
{
public:
	Sub_Command(Stack<int> & s_);
	~Sub_Command();
	int getPrecedence(void);
	int evaluate(int n1, int n2) const;
};

#endif