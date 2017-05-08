/* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/

#include "Stack_Calculator.h"
#include <iostream>
#include <sstream>
#include <string>

Stack_Calculator::Stack_Calculator(void)
{

}

Stack_Calculator::~Stack_Calculator()
{

}

// Kelly, You have a memory leak. You need to make sure you
// delete each command after evaluating the expression.

//To fix this, I implemented a delete in Expr_Command. But I am confused, because my Valgrind did not report anything
void Stack_Calculator::evaluate_postfix(Array<Expr_Command*> & postfix)
{
	for (size_t i = 0; i < postfix.size(); i++)
		postfix[i]->execute();
}

// Kelly, you can further modularize this method by having smaller methods.

//To fix this i added the methods string_to_int and get_result

//I am not sure what other methods I could create, it would all result in the same amount, if not more 
//conditional statements.

bool Stack_Calculator::infix_to_postfix(const std::string & infix, Stack_Expr_Command_Factory & factory, Array<Expr_Command*> & postfix)
{
	std::istringstream input(infix);
	std::string token;
	Expr_Command * cmd = 0;
	Stack <Expr_Command *> temp;
	while (!input.eof())
	{
		input >> token;
		if (token == "(")
		{
			//if the token is an open paren, a paren command is pushed onto the expression stack
			cmd = factory.create_paren_command();
			temp.push(cmd);
		}
		else if (token == ")")
		{
			//When a closed paren is found, the expressions on the stack are popped until an open parentheses
			//is found, AKA when precedence is 2
			
			while (temp[temp.top() - 1]->getPrecedence() < 2)
				postfix.add(temp.pop());		

		}
		else if (token == "+")
		{	
			cmd = factory.create_add_command();
			//if expression stack is empty, there is not worry abnout precedence, so the command is pushed
			if (temp.is_empty())
				temp.push(cmd);
			else //if the stack is NOT empty, need to worry about precedence
			{
				while (!temp.is_empty())
				{
					
					//if the precedence of the expression at the top of the stack is 1 (AKA *,/,or %) then pop
					//and put that command in the postfix array.
					//this continues until a + or - is reached.
					if (temp[temp.top() - 1]->getPrecedence() == 1)
						postfix.add(temp.pop());
					else
						break;
				}
				//once a place is reached that is OK to add the + command, push it to the stack
				temp.push(cmd);

			}
		}
		else if (token == "-")
		{
			if (postfix.size() == 0)
			{
				//if this is the first token, that means we are dealing with a negative number
				cmd = factory.create_number_command(0);
				//so we push a 0 and an add command
				postfix.add(cmd);
				//and then a negative command
				cmd = factory.create_neg_command();
				temp.push(cmd);
				continue;
				//these steps are important because a negative requires a higher precedence
			}

			cmd = factory.create_sub_command();
			//if expression stack is empty, there is not worry abnout precedence, so the command is pushed
			if (temp.is_empty())
				temp.push(cmd);
			else
			{
				while (!temp.is_empty())
				{
					//if the precedence of the expression at the top of the stack is 1 (AKA *,/,or %) then pop
					//and put that command in the postfix array.
					//this continues until a + or - is reached.
					if (temp[temp.top() - 1]->getPrecedence() == 1)
						postfix.add(temp.pop());
					else
						break;
				}
				//once a place is reached that is OK to add the - command, push it to the stack
				temp.push(cmd);

			}
		}
		//The following commands are always pushed because they have the highest precedence
		else if (token == "*")
		{
			cmd = factory.create_mult_command();
			temp.push(cmd);
		}
		else if (token == "/")
		{
			cmd = factory.create_div_command();
			temp.push(cmd);
		}
		else if (token == "%")
		{
			cmd = factory.create_mod_command();
			temp.push(cmd);
		}
		else if (token >= "0" || token <= "9")
		{
			int stringToInt = string_to_int(token);
		    cmd = factory.create_number_command(stringToInt);
			postfix.add(cmd);

		}
		

	}

	//Once we are at the end of the string, add all commands in the stack to the postfix array
	while (!temp.is_empty())
	{   
		postfix.add(temp.pop());
	}

	return true;
}


int Stack_Calculator::get_result(Stack<int> result)
{
	int res;
	return res = result.pop();

}

int Stack_Calculator::string_to_int(std::string input)
{
	int stringToInt;
	std::istringstream(input) >> stringToInt;
	return stringToInt;
}

