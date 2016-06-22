####Algorithm to evaluate the postfix expression
Here we use only one stack called vstack(value stack).
```
1. Scan one character at a time from left to right of given postfix expression
	1.1 if scanned symbol is operand then
			read its corresponding value and push it into vstack 
	1.2 if scanned symbol is operator then
		– pop and place into op2 – op and place into op1
		– compute result according to given operator and push result into vstack 
2. pop and display which is required value of the given postfix expression
3. return
```

####Algorithm to convert infix to postfix notation
Let here two stacks opstack and poststack are used and otos & ptos represents the opstack top and poststack top respectively.

```
1. Scan one character at a time of an infix expression from left to right 
2. opstack=the empty stack
3. Repeat till there is data in infix expression
	3.1 if scanned character is ‘(‘ then push it to opstack
	3.2 if scanned character is operand then push it to poststack 
	3.3 if scanned character is operator then
	if(opstack!=-1)
		while(precedence (opstack[otos])>precedence(scan character)) then
			pop and push it into poststack 
		otherwise
			push into opstack
3.4 if scanned character is ‘)’ then
		pop and push into poststack until ‘(‘ is not found and ignore both symbols 
4. pop and push into poststack until opstack is not empty.

5. return
```