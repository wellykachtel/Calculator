/* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/

#include "Binary_Op_Command.h"



Binary_Op_Command::Binary_Op_Command(Stack<int> & s)
	:Expr_Command(s)
{

}
Binary_Op_Command::~Binary_Op_Command()
{

}
void Binary_Op_Command::execute(void)
{
	int n2 = this->command_stack.pop(), n1 = this->command_stack.pop();
	int result = this->evaluate(n1, n2);
	this->command_stack.push(result);
}