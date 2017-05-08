/* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/

#include "Expr_Command.h"

Expr_Command::Expr_Command(Stack<int> & s)
	:command_stack(s),
	precedence_flag(-1)
{
}
Expr_Command:: ~Expr_Command()
{
	delete this;
}