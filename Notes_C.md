- Cloning new git repo:
git  clone  git@github.com:kirtimishraa/C.git


- Add changes to git staging (to commit):
git   add  file/folder-name


- Commit changes (saving changes but local only):
git  commit  -m  "cimmit_message"

- Uploading changes to github remote:
git  push

- Just to update already created Repo:
git add -A
git commit -m "Update"
git push

------------------------------------------

Naming conventions:

- Variable: small_snake_case
- Const varible: CAPITAL_SNAKE_CASE
- Function name: camelCase
- Class: CapitalizeCase
- Object: camelCase

-----------------------------------------

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


C Boolean: Represent two types of values either True or false; 1 and 0 basically
Syntax: bool variable_name = conition
We need "<stdbool.h>" headerfile to compile the code

-------------------------------------------------------------------------------------

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

------------------------------------------------------------------------------

Storage Classes in C: 
Used to determine the lifetime, visiblity, memory location, and initial value of variable

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

--------------------------------------

constant:
To define Syntax: When constant has vaalue it can not be changed, unlike variable
	1.	const keyword
	2.	#define preprocessor	

--------------------------------------

Literals	: Its a contant values assigned to the constant variable
Four Types of literals: Integer Lit, Float lit, Character lit, String lit

--------------------------------------

Type Casting: To convert one Data type into another
Syntax: (type)value;

-------------------------

Complex Declarations: 
Priority 
[]			|  These two are 1st priority, left to right
()			|
identifier  | These two are the 2nd priority. Right to left
*			|
data type (3rd priority)

--------------------------


C Switch Statement: Alternate to the if-else-if ladder statement; Swich allows us to execute multiple operations.
Syntax:

switch(expression)
{
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

---------------------------------------------------------

goto Statement: Loop is used in only condition when we need to break multiple loop using single statement at the same time. 

----------------------------------------------------------

LOOP:

1. do-while Loop
do{

}while(condition); 		// 	To use when its not fixed iterations, need we need multiple initialization etc


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

- Hello will be printed for n*n times


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

--------------------------------------------------------

- Break:
	Break is used in Loop and Switch it is used to terminate the iterations of current loop
	Ex.
	For(i=1;i<=4;i++)
	{
		if(i%2==0)
			break;
		printf("%d", i);
	}
	Here break is connected with If condition and printf() is else 


- Continue:
	Make ignore all next statement and continue with increase the iteration

	for(i=1; i<=4; i++)
	{
		if(i%2==0)
		continue;
		printf("%d", i);
	}

	Here if the i is divided by 2 then it'll continue to increasing next iteration i.e i++
	and if false printf() will be executed and i would be printed 

---------------------------------------------------------------------------------------------

Array (Also called Internal pointer Variable):

- Array size should be >0

- using Array Static Memory Allocation will happen

- DT Name[Size];
- It's recommended to use macros to specify length of the array, as we can access/edit it globally just changing at one
	Ex #define N 10
	int arr[N];

- int len = sizeof(arr_name)/sizeof(arr_name[0]);		//to get the size of an array 

- As array is collection of data so we can't take all the input at once, we need to use 

	loop{
		scanf("identifier",&Arr_Name); }

- We can't directly assign any value to array name (Arr++, arr=arr+1), we need to assign it to any pointer, and then we can change/increment it value
	Ex; 
	int arr[] = {5, 6, 7, 8};
	int *p = arr;			// assigning base address of array arr
	printf("%d", *(++p)); 	//++p pointer move to next location and using *operator we cam get its value.
	return 0;
	O/P: 6

- Array Name always contain address of its first element a[6], a means a[0], 
  when we pass array as in argument we don't pass whole array we just pass array name and use it as pointer

- Passing array as argument:
	Passing array as an argument means passing address because array is always an address, 
	so in Function defination always internally its pointer even we're passing formal argument as an array

Ex:
void main()
{
	int a[3] = {10, 20, 30};
	fun(a);
}
In Defination we can write 

fun(int*p) or
fun(int p[]) or
fun(int p[3])  		//Any of them would be fine but internally it will be internal pointer

--------------


-  2-D Array: in 2-Dimension array, Array is collection Row and Columns 
	Syntax: DataType Identifier_Name[Row][column]={Value}

	Ex. a[2][3]={1,2,3,4,5,6}; #it has 2-Rows and 3columns, That means each row has 3 columns
	2-Rows: a[0], a[1];
			a [0]'th Row	 	 a[0][0] [0][1] [0][2]
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

----------------

- 3-D Array: 3D array is like cube, A group of 2-D Arrays stacked together
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

-------------------------------------------------------------------------------------------


=> Pointers: A pointer is a variable that stores the memory address of another variable.

How Does a Pointer Work?
Pointers work by:
- Storing the address of a variable.
- Accessing or modifying the value stored at that address using the dereference operator (*).

Why is Pointer Used?
- Pointers are used in C for several important reasons:
- Efficiency: Accessing memory directly is faster.
- Dynamic memory: Using malloc, calloc, free (from <stdlib.h>).
- Function arguments: To allow functions to modify variables outside their local scope (pass-by-reference).
- Arrays and strings: Pointers simplify array manipulation.
- Data structures: Like linked lists, trees, graphs, where memory is allocated and connected dynamically.

Why Was Pointer Created in C?
- C was designed to be a low-level, high-performance language, close to hardware, and pointers provide:
- Direct memory access (like assembly).
- Control over memory management.
- Ability to write efficient systems code, like operating systems and device drivers.


- Syntax: 
	DataType *ptr_name	// DT is refers to the type of value that pointer will points to

- Poiter Arithmetic: ++, --, +, - we can use thee operators 

- We can't perform any arithmetic between two pointers except Subtraction for subtraction: (p2-p1)/size of data

- Changing the value using pointer
	`Ex. 
		int x=10;
		int *ptr = &x;	//ptr is pointing to address of x
		*ptr = 4;		//ptr has changed the value of x to the 4 (which was 1p earlier)

- Types of Pointer:

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
 Typecasting Syntax: *(datatype*)ptr #its explicit typecasting
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

------------------------------------------------------------------------------------

String:
String is sequence of character terminated by NULL "\0" character

Omttinhg the length:
char s[] = "Hello"; //Automatically it'll compile the 6 characters and 1 null character i.e size of 7 

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
 	arr++; arr--; ++arr; --arr;

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

---------------------------------------------------------------------------------


Function():
May or may not contain argument And may and may not Return valye
Declaration: Compliler: 
1. Name 2. Parameter List 3. return type

Syntax: return_Dtype func_name(parameter_list); 	//Function defination
		func_name(parameter_list);					//Fucntion call inside main(){}
		

1. By default return type is "int"
2. Parameter list Dtype and No. of arguments

- Return Type fucntion:

	#include<stdio.h>
	int Add(int, int);  #forward declaration
	void main()
	{
		int a = 30;, b = 40, result;

		result = Add(a,b); #Calling the function and storing the result in "result" var, with Actual argument

		printf("%d", result);

	}

	int Add(int x, int y); 
					   #Fucntion implementation args x,y will take the value; will do the opns and'll return sum
	{
		int sum;
		sum=x+y;
		return sum;
	}

- Function without return type: Have to use void as return type to not returning anything 

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

- Arguments are evaluate
	Pascal: Left to Right
	C: Right to left

Parameter Passing:
1. Call by Value: Values are passes as argument; 
->In call by value, different memory is allocated for actual and formal parameters 
-> It doesn't affect on actual code because it sends the copy of value not actual value 
IT can return at most 1 value

2. Call by Reference/Address: Here arguements are passed as address of variable &
We can return any value because changing in the defination of function is directly affecting to actual values

Forward Declaration: void swap(int*, int*);
Function call: Fun_Name(&arg1, &args2)
function def: DT Fun_Name(DT*args1, DT*args2)

-----------------

Function pointer:

Calling function using pointer as its much efficient because its directly work with addresses.

- Function defination: 
- Declaration: A pointer should be declared to the function
- Pointer will point to the func address		
- Calling the function using pointer

	
	int add(int a, int b){           //function defination
	return a+b; }

	int (*funcPtr)(int, int);		//Declaration: A pointer would be declared to this function funcPtr is the Pointer to a
								   	  function taking 2 ints, returning int

	funcPtr =  add; 				// Pointer will holds address of the function name add
	int result = funcPtr(3, 4);		//calling function "add(int, int)" using pointer "funcPtr" as ptr has the address of add func


- When we have multiple function: We need to list them to call And that list would be "Array of function pointer

	- Declaration of array of Funcion Pointers:
		int(*operations[4])(int, int); 		//operations is a pointer which have 4 element and Each element is a pointer to a
											  function taking (int, int) and returning int
	- To point/store the functions address
		operations[0]= add;
		operations[1]= sub;
		operations[2]= mul;
		operations[3]= div;

	int(*operations)[4](int, int) = {func1, func2, func3, func4}  
															// We can write this way as well; as pointer i.e operations with index [0] is holding the address of function name add, index[1] is holding address of sub... And so on.
		
	- Calling the functions from pointer array:
		for(int i=0; i<4; i++){
			printf("result is %d \n", operations[i](a, b));
		}

- Simple Ex:
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

--------------------------------------------

Recursion: Its a technique when function calls itself to solve a problem
	1. Divide the problem into into smaller sub problems
	2. Base condition to stop the recursion

	recr_func()
	{
		if(){
			.....		//Base Case
		}
		else{
			.....		//Recursive proceduref
		}
	}

--------------------------------------------

Structure:
user-defined data type, we store the collection of different data type

- Syntax

	struct structure_name	  //Struct is keyword to define structure of program; structure_name is also called as tag/structure tag
	{
		data_type member 1;
		data_type member2;
		.
		.
		data type memberN
	}var, var2;

- To access the Members of the Structure
	var.member			//accessing Member using dot operator
	pointer->member		//Structure pointer operator


	Ex:
	struct Person {
		char name[50];
		int age;
		float height;
	} p1, p2;

- Initialization Structure Variable
	1. using curly bracket:
		struct Person p1 = {"Alice", 25, 5.4};
	2. Using . operator
		struct Person p1;
		p1.age = 25;
		p1.height = 5.4;
		strcpy(p1.name, "Alice");  // for string


- Define Structure Type using typedef: to skip writing "struct" everytime

  typedef struct {
    Data_Type member1
    Data_Type member2
  } Variable;

  Variable new_name = {Value1, "Value 2"};

	- Ex:
		`typedef struct {
			int id;
			char name[30];
		} Student;
		Student s1 = {101, "Kirti"};

		struct Date{					//Nested structure
			int day, month, year;
		}
		main()
		struct Student{
			char name[50];
			int roll;
			struct Date dob;// Nested
		}

		To Access them:

		struct Student s = {"Aman", 101, {10, 7, 2000}};
		printf("DOB: %d-%d-%d", s.dob.day, s.dob.month, s.dob.year);


- Structure to function
  
	1. Defune the structure
			#include<stdio.h>
			struct Student{
				int id;
				char name[20];
		}

	2. Define the function

		void func(struct Student s){				//s holds the same values as stu1
			printf("ID is %d", s.id);
			printf("Name is: %s", s.name);
		}

	3. Call the function from main()

		int main(){
			struct Student stu1={101, "shipla"};	//Created a variable stu1 of type struct Student
			func(stu1);								//call function func and pass stu1 - which gets copied into s
			return 0;	
		}

- Array of structure:

	struct Student{
		int roll;
		char name[20];
		float marks;
	};
	strcut Student class[3];	//Array of 3 students

	Initialization:
	struct Student class[3] = {
		{1, "POolkit", 92.5},
		{2, "priti", 88.0},
		{3, "saumya", 76.4}
	};

	Accessing:
	for(int i=0; i<3; i++){
	printf("Roll: %d, Name: %s, Marks: %2f \n", class[i].roll, class[i].name, class[i].marks);
	}


- Pointer to structure:

	struct my_struct{
		int i;
		float j;
	}s1;				//variable
	void main()
	{
		struct my_struct *p;		//Declaration of pointer
		p=&s1;						//pointer is pointing yto variable s1 (Means whole structure)
		*p.i; 						//To access the memeber (Now pointer is pointing me,ber inside the structure)
	}


- Dynamic Memory in Structures: 
  When we don't know how many items will need in advance and we want flexibility and efficient memory usage.

	- Ex:

	#include <stdio.h>      
	#include <stdlib.h>     

	// Define a structure named 'Student'
	struct Student {
		int roll;          		 				  	  // to stire roll number
		char *name;        						 	 // Pointer to dynamically store name as a string
	};

	int main() {
		int n;  				 					// Variable to store the number of students

		printf("Enter number of students: ");
		scanf("%d", &n); 	 						// Read that number into variable 'n'
		
		struct Student *class = malloc(n * sizeof(struct Student));		//Dynamically allocate memory for 'n' Student structures

		for (int i = 0; i < n; i++) {			  // Loop to take input for each student
			class[i].name = malloc(50);		 // Dynamically allocate memory to store name of each student (max 49 characters + '\0')

			printf("Enter roll: ");
			scanf("%d", &class[i].roll);  			// Store input into the 'roll' field

			// Prompt for name
			printf("Enter name: ");
			scanf("%s", class[i].name);  			 // Store input into the dynamically allocated name field
		}

		for (int i = 0; i < n; i++) {										// Loop to print all the student data
			printf("Roll: %d, Name: %s\n", class[i].roll, class[i].name);	// Access each structure and print roll and name
		}

		for (int i = 0; i < n; i++) {
			free(class[i].name);  // Free memory for name (char*)		// Free the dynamically allocated memory for each student's name
		}

		free(class);													// Free the entire dynamically allocated array of structures


		return 0;
	}

	class is a pointer to an array of structures. Each element is a struct Student.
	class[0].name and class[1].name are pointers to char, each pointing to a separate memory block (for storing names).
	The strings "Alice" and "Bob" are stored in separate dynamically allocated memory.
	So you're doing two levels of dynamic memory:
		First for the array of structs (class)
		Then for each student's name	

- Self-Referential Structures:

	pointer has declared inside structure to its own type among its member which can holds the address of another variable(Each variable have all member defined in structure)
	Its useful when creating linked data structure like Linked Lists, trees, graphs

	struct Student
	{
		int Roll;
		struct student *ptr;		//Self-Referential pointer as ptr has declared of same type as main structure
	}s1,s2,s3 						//These variables can be as s[3]; Each variable will have two member inside 1. Roll, 2nd would be pointer which will be contaning the address of other variable 

	int main()
	s1.Roll=10;			//accessing its first member from variable s1; member Roll;
	s1.ptr=&s2;			// pointer of var s1 is contaning the address of 2nd var s2 
	s2.Roll=11;			// s2 var's 1st member contanined 11 
	s2.ptr=&s3;			//so on
	s3.Roll=12;
	s3.ptr=\0;
	Explanation:
	This as multiple variable are multiple Houses and each houses has 2/more rooms as their member so One room as value and second room has contained address of Next house; This is how each house are linked with each other (And that's Linked List)


- Union:
  User defined datat type like structure but unlike strcuture union members share same memory location
	- As union member share the same location, changes on one variable reflect on others
	- Size is takes according to the largest member of union
	- accessing members of union by (->) operator
		union abc{
			int a;
			char b;
		}
		int main()
		{
			union abc var;			variable we can create variable as in structure(where curly brackt of union has closed)
			var.a = 90;
			union abc *p = &var;
			printf("%d %c", p->a, p->b);
			return 0;
		}

		o/p: 90 Z

- Consider there is a shop who sells two things together books and shirt 

	#pragma pack(1)
	struct store {
		double price;           // 8 bytes

		union {
			struct {							//Book 
				char *title;    // 8 bytes
				char *author;   // 8 bytes
				int num_pages;  // 4 bytes
			} book;             // 			Total = 20 bytes

			struct {							//shirt
				int color;      // 4 bytes									
				int size;       // 4 bytes
				char *desing;   // 8 bytes
			} shirt;            //			 Total = 16 bytes
		} item;
	};

		And since 20>16; 20 bytes would be uses and 8+20=total 28bytes size And same program in structure would be around 44byte in size 




Code practice: Structure, Dynamic memory allocation


1. Check which Display manager you are using:
sudo cat/etc/systemd/display-manager.services

if its: Description=Light Display Manager

Then its lightdm 

2. COpy Wallpaper Imgage to Default location from current 
sudo cp /current image path/image.jpg/usr/share/backgrounds/			
 
In my case it looks like this:
 sudo cp /home/kirti/Downloads/Walls/Log.jpg  /usr/share/backgrounds/

3. Check which greeter is used
	cat /etc/lightdm/lightdm.conf | grep greeter-session
	If it apears:
	greeter-session=lightdm-slick-greeter
	It's slick greeter

4. Install Required packages of that greeter hete its slick-greeter
	sudo pacman -S slick-greeter lightdm lightdm-settings gtk3 gnome-themes-extra
	- If packages are missing, install yay to get them from AUR:
	
	sudo pacman -S git base-devel
    cd ~
    git clone https://aur.archlinux.org/yay.git
    cd yay
    makepkg -si

5. To install lightdom-setting
yay -S slick-greeter lightdm-settings

6. Check slick-greeter configure properly or not 
	 open: 
	 sudo nano /etc/lightdm/slick-greeter.conf 
		- Add: [Greeter]
background=/usr/share/backgrounds/Log.jpg

	- If file is empty create it and add: 

7. Now open lightdm from and add login BG from GUI: 
	sudo lightdm-settings  				# Make sure lightdm-setting should be installed image should appear in backgrounds
	Appearance<Background				# Login window will open in root so check
	Save and click okay 

8. To Apply changes Restart lightdm:
	sudo systemctl restart lightdm		#Logout and login it should appear







