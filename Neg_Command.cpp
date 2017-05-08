/* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/

#include "Neg_Command.h"

// Kelly, what is the difference between this class and the Sub_command? I don't think this class is required.

//This holds a different precedence, so it is only used when a negative is inputted first, but it is still necessary
Neg_Command::Neg_Command(Stack<int> &s)
	:Binary_Op_Command(s)
{
	this->precedence_flag = 1;
}
Neg_Command::~Neg_Command()
{

}
int Neg_Command::getPrecedence(void)
{
	return this->precedence_flag;
}
int Neg_Command::evaluate(int n1, int n2) const
{
	return n1 - n2;
}