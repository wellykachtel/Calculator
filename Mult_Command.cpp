/* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/

#include "Mult_Command.h"


Mult_Command::Mult_Command(Stack<int> & s_)
	:Binary_Op_Command(s_)
{
	this->precedence_flag = 1;
}
Mult_Command::~Mult_Command()
{

}
int Mult_Command::getPrecedence(void)
{
	return this->precedence_flag;
}
int Mult_Command::evaluate(int n1, int n2) const
{
	return n1 * n2;
}