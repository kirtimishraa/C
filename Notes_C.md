Naming conventions:

- Variable: small_snake_case
- Const varible: CAPITAL_SNAKE_CASE
- Function name: camelCase
- Class: CapitalizeCase
- Object: camelCase

Operators:
+,-,*,/
%: Modulus: Reminder of the division between two operands.

++	: Increment
--	: Decrement
==	: Two operands are equal
> 	: The greater than 
< Less than
>= 	: Greater than or Exual to 
<= 	: Less than or Equal to

Logical:
&& 	: Logocal AND
|| 	: Logical OR
!  	: Logical Not

Bitwise operator: 
&	: Bitwise AND operator
| 	: Bitwise OR
^	: Bitwise XOR
~	: Bitwise NOT
<<	: Binary Left shift; shift bits from the left operands to the by the number of positions provided by the right operand. ex. a<<2
>>	: Binary right shift; Shift the left operand's bits to the right by the number of positions given by the right operand

Assignment operators those which assign the values to the left operator after the operation:
=, +=, -=, *=, /=, %=, <<=, >>=, &=, |=, ^=, 


Format specifier: Holds the space for specific Type
%d or %i: to print the signed integer
%u		: unsigned
%o		: Octal unsigned integer
%x		: To print Hexadecimal unsigned integer
%X		: To prints alphabetical characters in uppercae
%f		: To print decimal floating point
%e or %G: To print decimal floating And uses the fixed precision, i.e Value after decimal in input would be same as output
%p		: To print memory address in a hexadecimal form
%c		: To print signed character
%s		: To print the strings
%ld		: To print long signed integer
%%		: To print % character itself
%llu	: To print large unsigned integer

Storage Classes in C: Storage classes in C are used to determine the lifetime, visiblity, memory location, and initial value of variable, 

1. external; extern
Storage Place "Ram"; Default value: 0; Scope: Global; Lifetime: Till end of the main program, May be declared anywhere in the program

2. Automatoc; auto
Storage Place "Ram"; Default value: Garbage; Scope: Local; Lifetime: Within function;

3. Static; static
Storage Place "Ram"; Default value: 0; Scope: Local; Lifetime: Till end of the main program, Retains value between multiple function call

4. Register; register
Automatoc; auto
Storage Place "Register"; Default value: Garbage; Scope: Local; Lifetime: Within function;
Faster, but We can not access the address of register variable ofcourse registers don't have memory addresses


constant:
To define Syntax: When constant has vaalue it can not be changed, unlike variable
	1.	const keyword
	2.	#define preprocessor	

Static: Static keyword gives the scope to the variable/function throught the program

Literals	: Its a contant values assigned to the constant variable
Four Types of literals: Integer Lit, Float lit, Character lit, String lit

C Boolean: Represent two types of values either True or false; 1 and 0 basically
Syntax: bool variable_name = conition
We need "<stdbool.h>" headerfile to compile the code


Type Casting: Type casting allow us to convert one Data type into another
(type)value;


Complex Declarations: 
Priority 
[]			|  These two are 1st priority, left to right
()			|
identifier  | These two are the 2nd priority. Right to left
*			|
data type (3rd priority)


C Switch Statement: Alternate to the if-else-if ladder statement; Swich allows us to execute multiple operations.
Syntax:

switch(expression){
case Value1:
	//code to be executed
break;	//optional

case value 2:
	//code to be executed
break; //optional
.
.
.
default:
code to be executed if all xase are not matched;
}


goto Statement: Loop is used in only condition when we need to break multiple loop using single statement at the same time. 


LOOP:
1. do-while Loop
do{

}while(condition);

2. While loop
while(condition){
	//code to be executed
}

3. For loop
for(expression1; expression2; expression3){}
for(initialization; condition; increment/decrement){}

Nested Loop:
For each loop cycle all the condition would be executed for subloop

for(i=1; i<=n; i++)
	{ 
		for(j=1; j<=n; j++)
			{
				printf("Hello");
					
	}
			}

Hello will be printed for n*n times



Ex. for(i=1; i<=3; i++)
	{ 
		for(j=1; j<=4; j++)
			{
				printf("%d",j);
					
	}
			}

For i=1, j would run entirely 
j=1,2,3,4 so on for 2 and 3

Final Output would be:
123412341234

Break:
Break is used in Loop and Switch it is used to terminate the iterations of current loop
Ex.
For(i=1;i<=4;i++)
{
	if(i%2==0)
		break;
	printf("%d", i);
}
Here break is connected with If condition and printf() is else 

Continue:
Make ignore all next statement and continue with increase the iteration

for(i=1; i<=4; i++)
{
	if(i%2==0)
	   continue;
	printf("%d", i);
}

Here if the i is divided by 2 then it'll continue to increasing next iteration i.e i++
and if false printf() will be executed and i would be printed 

=> Ponters And Array:
Address is simple location of any value
"&" Gives the Address of any variable(Value)
"*" Bypass the address and Directly gives the value
Ex. int a=10;
printf("%d", *&*&a)
Both * will clear the address and get the value of a
O/p 10
Read as: 
int(*p)[4]: p is a pointer to array of 4 integer
int*(*p)[5]: p is a pointer to array of 5 pointer to integer
int(*p)(): p is a pointer to function that takes no arguments and it returns an integer

Every value has two addresses 
Abslute address: Own location's address 
Relative Address: Address get by refernce by neougher etc
That's where Array came in picture


=> Array(it's also called Internal pointer Variable):

for homo data type 
DT Name[Size];
1. Array Alway's size can be only signed number and Greater than 0

2. Array's name always contain the address of its First element If a[6] has declared with 6 element using a would be address a[0] EXCEPT for & and sizeOf operator, 
   using &a=a[6] means calling whole array


3. Working with arrays Static Memory Allocation will happen


=> 2-D Array: in 2-Dimension array, Array is collection Row and Columns 
 Syntax: DataType Identifier_Name[Row][column]={Value}

Ex. a[2][3]={1,2,3,4,5,6}; #it has 2-Rows and 3columns, That means each row has 3 columns
2-Rows: a[0], a[1];
	  	a[0]'th Row	 	 a[0][0] [0][1] [0][2]
		a[1]th Row		 a[1][0] [1][1] [1][2]	  

#considering addres is starting from 100, and each element has 4byte size

a[0] --> 12 byte, 2Row * 3Columns of 
a[1] --> 12 byte
 a   --> 24 byte

printf("%u", a); 
100
printf("%u", a+1);
112
How? a+1 => a[0]+1 => &a[0]+1*12 # a=a[0], Because 12 is the size of 0th Row; 4Byte*3element
   	 => 112 

4. Any call Array's Dimensiom is < Declared Dimension, Then we are working on Addresses, Only if we are using same number of dimention in program that we have declared then we are working on Elements
Ex.
int a[2][3]={1,2,3,4}; #2D array declaration of 2-Rows and 3-Columns
	a--> Address 
	a[0]--> Address
	a[0][0]--> Element

5. Value + Value   = Value 
   Value + Address = Address #a+1
	To get Address+Value:

	1. Whether a is address or value
	2. Identify the address of Object
	3. Get the size of address

	int a[4]={1,2,3,4}
	Considering 4byte size of element
		a+1 = &a[0]+1
		=> &a[0]+1*4
		=>100+4 (Considering a's first address starting from address 100)
		=> 104 (It's 104 address that it's pointing)
		we can say
		a+1 = &a[1] => 104 
		a+2 = &a[2] => 108 
		BUT
		&a+1 = 100+1*16 = 116 # Considering array has 4 blocks and last (4th) element would be printed (Refer point number 4)

		To get the Value from address 
		*(a+1)=> a[1] => We'll get the value of second element
		
6. a[i] = *(a+i) = *(i+a) = i[a] # i is Number of address of Array like a[0], a[1] etc


7. *(a[i]+j) = a[i][j]

 int x[4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};
 printf{"%u, %u, %u", x+3,*(x+3)};


=> 3-D Array: 3D array is like cube, A group of 2-D Arrays stacked together
Layering of many Rows and columns 

Syntax: DataType Identifier_Name[Layer][Row][Column] = {Value}
Ex: Int arr[2][3][4];
Here Here table would be created of 2 Layers of 3-Row and 4-Columns, (Two table combined back) "Remeber that's why its 3D"

2-Layes: arr[0] and arr[1] Then,
Layer1 i.e arr[0]'s Table : 
arr[0][0][0]  arr[0][0][1]  arr[0][0][2]  arr[0][0][3]
arr[0][1][0]  arr[0][1][1]  arr[0][1][2]  arr[0][1][3]
arr[0][2][0]  arr[0][2][1]  arr[0][2][2]  arr[0][2][3]

Layer 2; arr[1]
arr[1][0][0]  arr[1][0][1]  arr[1][0][2]  arr[1][0][3]
arr[1][1][0]  arr[1][1][1]  arr[1][1][2]  arr[1][1][3]
arr[1][2][0]  arr[1][2][1]  arr[1][2][2]  arr[1][2][3]


=> Pointers: Pointer is a special variable that holds the address of other variable, Declaration(Type) decide whichh address will be in pointer
Syntax: DataType *variable
Ex. 	int *p # Here p is pointer, which has addres of integer

Poiter Arithmetic:
ptr++
ptr--
p+1. p+2
We can't perform any arithmetic between two pointers except Subtraction 
for subtraction: (p2-p1)/size of data


Types of Pointer:

1. Wild *pointer: Ininitialized pointer, if we're using Ininitialized pointer it might take the same address of other variable which will cause proble 
Ex int x=100;
   int *p;
   *p=10;
	if x has its value at addresss 1000 and int *p creates garbage value which also resrved the address 1000 and the value 10 will be wipe the value 100 of x

2. Dangling *pointer:
	When pointer is no longer pointing to valid memory location
	Ex. 
		void main()
			{
				int *p;
					{
						int x=10;
						p=&x;
					}
			}

But after the close bracket, scope of x get finished and now pointer is pointing to a a location is no more exist 

**To make the variable throughout the memory use static, 
			static {int x=10;
			P=&x;}

3. void *pointer:
 void pointer can point to any data type we declare the pointer with void and later, use it by adding typecasting front of pointer for the specific statement
 void *ptr
 Typecasting Syntax: *(datatype)ptr #its explicit typecasting
 Use: printf("format", *(data type*)ptr)

 Ex:
 void *ptr;
 int x=10;
 char y='A';
 ptr=&x;
 printf("%d",*(int*)ptr);

 ptr = &y;
 printf("%c", *(char*)ptr);

4. Null *pointer(0 value):
Null pointer is specially disigned pointer to diffrenciate btween all valid with some invalid pointer
int *ptr = NULL;
or
int *ptr=0;


String:
String is sequence of character terminated by NULL "\0" character

1. initialization using character array
	1. chara[] = "Hello";
	2. char b[]={'H','e','l','l',''};


Invalid:
	1. If we made string using character array then we can't initialize them again
	ex char a[] = "Hello";
	a = "Hi"
	That's completely invalid

	2. We can't change the address of array's (1. point) but we can change its value so
	char a[]="Hello";
	char *ptr ="Hi";

	a[1]='u' #Its completely valid
	ptr[]='s' #Inalid because we can't change the value of pointer

	3. Name of an array can't on LHS of any assignment #LHS = RHS
		Ex:
		char*p = "Arm";
		char name[]= "Nav";
		name = p; # Completely invalid
		p = name # valid

	4. We can't do these arithmetic using array name
 	arr++;
 	arr--;
 	++arr;
 	--arr;

2. Second way using pointer
ex: 
char*p = "Hello";
char*q= "Hi";
char*t;
t=p;
p=q;
printf(p);  #o/p: Hi
printf(q);	#o/p: Hi
printf(t);	#o/p: Hello

char*p = "Ram";
char*q = "Sita";
char*t;
q=p;     #q get the address of p and not p and q both are pointing to Ram
t=p;	# t get the address of q since q have already started poiting Ram so t will also point to Ram

3. 

Using Array[]:

Char name[20] = "Pankaj";
char name2[20] = "VishwasRaoSwami";
char name3[20] = "Balguruswami ji";

char name[3][17]={"Pankaj", "VishwasRaoSwami", "Balguruswami ji"};
 
 Table will create of 3 Rows and 17 column because here the biggest atring character is 16+1 for NULL character

 But in this Method the memory location would be wasted because first two rows have less character 

 Using pointer:

  char *p = "Pankaj";
  char*q= "Ram";
  char*t="sita";

  char*p[3]: {"Pankaj", "Ram", "Gurupal"};

  p[0]-> R a m \0;
  p[1]-> S i t a \0;
  p[2]-> G u r u p a l \0;

  Here memory will be used only the size of pointer
  to print

  printf("%s", *p); OR printf("%s", p[0]) #o/p Ram
  printf("%s", *(p+1)); OR printf("%s", p[1]) 



Function():
May or may not contain argument And may and may not Return valye
Declaration: Compliler: 
1. Name 2. Parameter List 3. return type

Syntax: return_Dtype Name_of_func(parameter_list);

1. By default return type is "int"
2. Parameter list Dtype and No. of arguments
3. 

Return Type fucntion:

#include<stdio.h>
int Add(int, int);  #forward declaration
void main()
{
	int a = 30;, b = 40, result;

	result = Add(a,b); #Calling the function and storing the result in "result" var, with Actual argument

	printf("%d", result);

}

int Add(int x, int y); #Fucntion implementation x and ya will catch the value and rpocess the operations after they will retrn the sum, Formal argument
{
	int sum;
	sum=x+y;
	return sum;
}

Function without return type:
we use void as reurn type because we're not function defination is not returning anything to the main function it's printing value itself 

void Add(int, int);
void main()
{
	int a, b;
	scanf("%d%d", &a&b);
	Add(a,b);
}

Void Add(int x, int y)
{
	int sum;
	sum=x+y;
	printf("%d", sum);
}

Arguments are evaluate
Pascal: Left to Right
C: Right to left

Parameter Paasing:
1. Call by Value: Values are passes as argument; 
->In call by value, different memory is allocated for actual and formal parameters 
-> It doesn't affect on actual code because it sends the copy of value not actual value 
IT can return at most 1 value

2. Call by Reference/Address: Here arguements are passed as address of variable &
We can return any value because changing in the defination of function is directly affecting to actual values

Forward Declaration: void swap(int*, int*);
Function call: Fun_Name(&arg1, &args2)
function def: DT Fun_Name(DT*args1, DT*args2)

=>Pointer to function:

Not calling function() directly calling function using pointer because its much efficient 

Ex:
int Add(int, int);
void main()
{
	int x;
	int (*p)(int, int);   # p is a pointer to function that takes 2 integer argument and return an integer

	p=Add; or &Add				#p is now poining to Address of Add
	x=P(30,40);	or (*p)(30,40)		# because p is pointing to add that mean it'll call add function

	pf("%d", x); 
} 
int Add(int x, int y);
{
	return(x+y)
}


-> int(*p[2])(); # p is an array of 2 pointer to function that takes no argument and return int
p[0] = fun1; #address of fun1
p[1] = fun2;
p[1]();     	# calling fun2
return0;  


Passing array as argument:
Passing array means passing address because array is always an address, 
so in Function defination always interbally its pointer even we're passing formal argument as an array

Ex:
void main()
{
	inta[3] = {10, 20, 30};
	fun(a);
}
In Defination we can write 

fun(int*p) or
fun(int p[]) or
fun(intp[3])  		#Any of them would be fine but internally it will be internal pointer





- Reverse of integer
- Prime number of size n
- Count lower chars in given string and return its total count
- dec to bin
- Swap without 3rd var
- palindrome string without looping complete string
- count digits of number 
- armstrong number
- factor of number
- sort array with min loop













