/* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/

#ifndef _CS507_STACK_EXPR_COMM_FAC_H_
#define _CS507_STACK_EXPR_COMM_FAC_H_

#include "Expr_Command_Factory.h"

/****************************************
* This class handles returning the
* command objects
*
*****************************************/

class Stack_Expr_Command_Factory : public Expr_Command_Factory
{
public:
	Stack_Expr_Command_Factory(Stack <int> & st);
	virtual ~Stack_Expr_Command_Factory(void);
	virtual Num_Command * create_number_command(int num);
	virtual Add_Command * create_add_command(void);
	virtual Sub_Command * create_sub_command(void);
	virtual Mult_Command * create_mult_command(void);
	virtual Div_Command * create_div_command(void);
	virtual Mod_Command * create_mod_command(void);
	virtual Paren_Command * create_paren_command(void);
	virtual Neg_Command * create_neg_command(void);
private:
  // Kelly, the stack should be a member of the Command, since the factory doesn't use it for anything else other than passing it to the commands, 
  // it should not a member of the factory. 
  // If you were using flyweight pattern, and the command did not have it, then it would have been fine to be here.

	//I am unsure of the issue here because the command needs to be passed a stack. I am going to leave it for now
	//until I can come in and talk to you about it in office hours.
	Stack<int> & factory_stack;

};
#endif
