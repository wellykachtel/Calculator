/* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/

#ifndef _CS507_NUM_H_
#define _CS507_NUM_H_

#include "Expr_Command.h"

/******************************************
* This class contains the methods for     *
* handling number instances. Every Number *
* gets pushed onto the reference stack.   *
* There is no precedence.                 * 
*******************************************/

class Num_Command : public Expr_Command
{
public:

	Num_Command(Stack<int> & s, int n);
	~Num_Command();
	void execute(void);
	int getPrecedence(void);

private:
	int n_;
};
#endif
