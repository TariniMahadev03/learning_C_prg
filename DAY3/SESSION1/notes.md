#Pointers in C 
-A variable that stores the address of another variable.
-ptr->0X11
-*ptr->10
-dptr->0X12
-*dptr->0X11
-**dptr->10

#Applications 
1. In Structures
2. In arrays
3. In functions
4. In DMA
5. In Pointer Arithmatic

#Main Types of Pointers
1. Integer pointer(int *)
2. Char pointer(char *)
3. Float pointer(float *)
4. Double pointer(Double *)
5. Null pointer
6. Pointer to Pointer (**)
7. Pointer as array
8. Array of pointers

#DYNAMIC MEMORY ALLOCATION
-it is a part of <stdlib.h> which allocates memory dynamically.

#DMA FUNCTIONS
1.malloc()-stores garbage values
2.calloc()-contig allocation
          -number of elements and size are parameters
          -stores zero init
3.realloc()-resize allocation
           -Existing pointer and size is the parameter
4.free()-frees the existing memory