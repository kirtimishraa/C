Memory visualization of C Memory Layout:

+----------------------+
|        Heap          | ← Used for dynamic memory (malloc, calloc, etc.)
|                      |
|       (grows up)     |
+----------------------+
|        Stack         | ← Local variables, function calls
|                      |    auto, local variables
|      (grows down)    |
+----------------------+
| Initialized Data     | ← Global/static variables with values
| Segment              |
|  (e.g., static int i = 5;) |
+----------------------+
| Uninitialized Data   | ← Global/static variables without values
| Segment (BSS)        |
|  (e.g., static int i;)     |
+----------------------+
|     Code Segment     | ← Actual compiled code/instructions
|   (Text Segment)     |
+----------------------+


- Static Memory:
    memory that Once provided/allocated throughout the program it can not grow/shrink

- Dynamic Memory allocation: Flexible to change or shrink

    function to create/free memory allocation:
    1. malloc()
    2. calloc()
    3. realloc()
    4. free() 

- sizeof(Data_Type) operator/keyword            //it gives the size of data type

- malloc():
    Syntax:    (void*)malloc(size_t size)

    return type (void*): When memory allocation happen malloc retun the address of that particular memory which need to be stored in pointer 
    void pointer; it will hold the address of char, int array, structure array any type

    argument to malloc: size_t means unsigned int 
    We provides size in bytes; How many bytes memory we want, When we're provinding the memory to programmer then we share the address of that memory to programmer, that's where we use pointer; We may/maynot use typecasting with void pointer

    - we can use: malloc(N*sizeof(int));
    as 
    void main()
    {
        int *p;
        int N;
        pf("enter the number of elements");
        sf("%d", &N);
        p = (int*)malloc(N*sizeof(int));            //did typecasting with void pointer
        p = malloc(N*sizeof(int));      //didn't used typecasting
    }

    - if memory is not available malloc() will return NULL/Invalid address

    - Taking input/ Printing output

    P=malloc(N*sizeof(int))     //N*4(int_value)=4N bytes of contegious data whose return address has been hold by pointer P, if p is corrently pointing to starting address of memory i.e 100

    scanf("%d", p);         //1st input will be stored at 100
    scanf("%d", p+1);       //2nd i/p will be stored at 100+1*4=104 
    scanf("%d", p+2);       //3rd i/p will be stored at 108 so on

    so we can say 
    for(i=0; i<N; i++)
        scanf("%d", p+i);

    for(i=0; i<N; i++)
    pf("%d", *(p+i)); or ("%d", p[i])           // Used * to get the value

- Calloc: Contiguous Allocation
    Syntax: (void*)calloc(No_elements, element_size)

    - Malloc is not reliable; Because it malloc allocates; it provide garbage bit/value, so it takes less time and its cheaper 

    - calloc is reliable; Because when it finds the memory first it initialize bits 0, then provide the address

- realloc: 
    Relocate the same memory that was used before 
    When we allocated memory of N bytes but now want memory to grow from 2N but now we don't have contigeous memory, in this case we would have to find another consecutive memory of 2N bytes; 
    in new block we will copy the used N bytes of memory

    int *P;     //Declared pointer
    P = malloc(sizeof(int)*5);  //allocated memory of 5*4=20 bytes

    for(i=0; i<5; i++)
        scanf("%d", P+i);       //Get the 5 input in consecutive blocks

    P = realloc(P, 10*sizeof(int));     //rellocate the memory to the same pointer but with different size

- Free():
    We need to free the memory to avoid memroy leakage problem/Exhousted problem
    Syntax: free(pointer_name)  //pointer name to that we had allocated the memory
    free(p);
    Memory leakage: Memory is there but we can't access
    Dangling pointer: Memory is not there but trying to access

- use realloc as malloc and free
    1. realloc as malloc
        we will make ptr=NULL;
        realloc(ptr, New_size)  //realloc
        ptr = realloc(ptr, N*sizeof(int));

    2. realloc to free:
       ptr = realloc(ptr, 0);


