/* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/

#include "Sub_Command.h"

// Kelly, use the base member initialization section to initialize all base members in all the classes.

//What does that even mean?
Sub_Command::Sub_Command(Stack<int> & s_)
	:Binary_Op_Command(s_)
{
	this->precedence_flag = 0;
}
Sub_Command::~Sub_Command()
{

}
int Sub_Command::getPrecedence(void)
{
	return this->precedence_flag;
}
int Sub_Command::evaluate(int n1, int n2) const
{
	return n1 - n2;
}