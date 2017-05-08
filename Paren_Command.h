/* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/

#ifndef _CS507_PAREN_H_
#define _CS507_PAREN_H_


#include "Expr_Command.h"

/****************************************
* This header file contains the methods *
* for the PARENTHESES command.          *
* PARENTHESES has precedence 2          *
*****************************************/

// Kelly, since parenthesis are not executed, find a better solution that does not require implement parenthesis as command objects.

//The first parentheses needs to be pushed on to the stack in order to keep track of the following expressions
//in order to be able to do that, it needs to be of type Expr_Command
//Yes, it does not get executed, but is is still an expression that holds precedence and meaning
class Paren_Command : public Expr_Command
{
public:
	Paren_Command(Stack<int> s);
	~Paren_Command();

	int getPrecedence(void);
	virtual void execute(void);



};

#endif
