/* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/

#include "Mod_Command.h"


Mod_Command::Mod_Command(Stack<int> & s_)
	:Binary_Op_Command(s_)
{
	this->precedence_flag = 1;
}
Mod_Command::~Mod_Command()
{

}
int Mod_Command::getPrecedence(void)
{
	return this->precedence_flag;
}

// Kelly, Your code will crash if you have divide by 0.

//To fix this, I am throwing an exception
int Mod_Command::evaluate(int n1, int n2) const
{
	if (n2 == 0)
		throw std::out_of_range("index out of range");
	return n1 % n2;
}