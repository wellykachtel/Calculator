/* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/

#ifndef _CS507_MOD_H_
#define _CS507_MOD_H_

#include "Binary_Op_Command.h"

/****************************************
* This header file contains the methods *
* for the MODULUS command.              *
* MODULUS has precedence 1              *
*****************************************/

class Mod_Command : public Binary_Op_Command
{
public:
	Mod_Command(Stack<int> & s_);
	~Mod_Command();
	int getPrecedence(void);
	int evaluate(int n1, int n2)const;
};
#endif