#include <iostream>
#include<stdlib.h>
#include <math.h>
using namespace std;

bool check(char op)
{
switch(op)
{
case '+': return true;
case '-':return true;
case '*':return true;
case '/':return true;
case '^':return true;
default : return false;
}
return false;
}
/*
bool operand_check(char op)
{

}*/

int operation(char op, int a, int b)
{
int result;
switch(op)
{
case '+':result = a+b;
break;
case '-':result = a-b;
break;
case '*':result = a*b;
break;
case '/':result = a/b;
break;
case '^':result = pow(a,b);

}
return result;
}

main()
{
char operator_ ;
int operand_1,operand_2;
cout<<"Enter the operator (+ - * / ^)" ; // asks the user to enter the operation + - * / ^
cin>>operator_;
//check if operator is valid
if(!(check(operator_)))
cout<<"Invalid operator";
else
{
cout<<"Enter operand 1 \n";
cin>>operand_1;
cout<<"Enter operand 2\n";
cin>>operand_2;
int result;
result = operation(operator_,operand_1,operand_2);
cout<<"result\n"<<result<<"\n";

}

}
