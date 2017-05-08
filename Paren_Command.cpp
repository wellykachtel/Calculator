/* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/

#include "Paren_Command.h"

// Kelly, since parenthesis are not executed, find a better solution that does not require implement parenthesis as command objects.

//The first parentheses needs to be pushed on to the stack in order to keep track of the following expressions
//in order to be able to do that, it needs to be of type Expr_Command
//Yes, it does not get executed, but is is still an expression that holds precedence and meaning
Paren_Command::Paren_Command(Stack<int> s)
	:Expr_Command(s)
{
	this->precedence_flag = 2;
}
Paren_Command::~Paren_Command()
{

}

int Paren_Command::getPrecedence(void)
{
	return this->precedence_flag;
}
void Paren_Command::execute(void)
{

}