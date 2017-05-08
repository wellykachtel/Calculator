/* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/

#include "Num_Command.h"

Num_Command::Num_Command(Stack<int> & s, int n)
	:Expr_Command(s),
	n_(n)
{
	this->precedence_flag = -1;
}
Num_Command::~Num_Command()
{

}
void Num_Command::execute(void)
{
	command_stack.push(this->n_);
}
int Num_Command::getPrecedence(void)
{
	return this->precedence_flag;
}