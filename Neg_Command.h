/* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/

#ifndef NEG_H
#define NEG_H

#include "Binary_Op_Command.h"

/****************************************
* This header file contains the methods *
* for the NEGATIVE command.                  *
* NEGATIVE has precedence 1                  *
*****************************************/

class Neg_Command : public Binary_Op_Command
{
public:
	Neg_Command(Stack<int> &s);
	~Neg_Command();
	int getPrecedence(void);
	int evaluate(int n1, int n2) const;

};



#endif