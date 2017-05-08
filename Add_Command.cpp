/* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/

#include "Add_Command.h"

Add_Command::Add_Command(Stack<int> & s)
	:Binary_Op_Command(s)
{
	this->precedence_flag = 0;
}

Add_Command::~Add_Command()
{

}

int Add_Command::getPrecedence(void)
{
	return this->precedence_flag;
}
int Add_Command::evaluate(int n1, int n2) const
{
	return n1 + n2;
}