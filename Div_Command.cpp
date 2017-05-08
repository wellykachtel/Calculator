/* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/

#include "Div_Command.h"


Div_Command::Div_Command(Stack<int> & s_)
	:Binary_Op_Command(s_)
{
	this->precedence_flag = 1;
}
Div_Command::~Div_Command()
{

}
int Div_Command::getPrecedence(void)
{
	return this->precedence_flag;
}
int Div_Command::evaluate(int n1, int n2) const
{
	if(n2 == 0)
		throw std::out_of_range("index out of range");
	return n1 / n2;
}