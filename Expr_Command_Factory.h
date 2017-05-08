/* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/

#ifndef _CS507_EXPR_COMM_FAC_H_
#define _CS507_EXPR_COMM_FAC_H_

#include "Add_Command.h"
#include "Num_Command.h"
#include "Sub_Command.h"
#include "Mult_Command.h"
#include "Div_Command.h"
#include "Mod_Command.h"
#include "Paren_Command.h"
#include "Neg_Command.h"

/****************************************
* This pure abstract class contains the *
* methods for creating command objects  *
*                                       *
*****************************************/

class Expr_Command_Factory
{
public:
	Expr_Command_Factory(void){}
	virtual ~Expr_Command_Factory(void){}
	virtual Num_Command * create_number_command(int num) = 0;
	virtual Add_Command * create_add_command(void) = 0;
	virtual Sub_Command * create_sub_command(void) = 0;
	virtual Mult_Command * create_mult_command(void) = 0;
	virtual Div_Command * create_div_command(void) = 0;
	virtual Mod_Command * create_mod_command(void) = 0;
	virtual Paren_Command * create_paren_command(void) = 0;
	virtual Neg_Command * create_neg_command(void) = 0;

private:
	Expr_Command_Factory(const Expr_Command_Factory &);
	const Expr_Command_Factory & operator = (const Expr_Command_Factory &);
};

#endif
