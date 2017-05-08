/* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/

#include "Stack_Expr_Command_Factory.h"


/****************************************
* This Command Factory will return the  *
* a referece to the command that is     *
* being called.                         *
*****************************************/
Stack_Expr_Command_Factory::Stack_Expr_Command_Factory(Stack <int> & st)
	:factory_stack(st)
{

}
Stack_Expr_Command_Factory:: ~Stack_Expr_Command_Factory(void)
{
  // Kelly, I don't think you need this here.
	//To fix this, I got rid of it
}
 Num_Command * Stack_Expr_Command_Factory::create_number_command(int num)
{
	return new Num_Command(this->factory_stack, num);
}
Add_Command * Stack_Expr_Command_Factory::create_add_command(void)
{
	return new Add_Command(this->factory_stack);
}
Sub_Command * Stack_Expr_Command_Factory::create_sub_command(void)
{
	return new Sub_Command(this->factory_stack);
}
Mult_Command * Stack_Expr_Command_Factory::create_mult_command(void)
{
	return new Mult_Command(this->factory_stack);
}
Div_Command * Stack_Expr_Command_Factory::create_div_command(void)
{
	return new Div_Command(this->factory_stack);
}
Mod_Command * Stack_Expr_Command_Factory::create_mod_command(void)
{
	return new Mod_Command(this->factory_stack);
}
Paren_Command * Stack_Expr_Command_Factory::create_paren_command(void)
{
	return new Paren_Command(this->factory_stack);
}
Neg_Command * Stack_Expr_Command_Factory::create_neg_command(void)
{
	return new Neg_Command(this->factory_stack);
}
