/*
When to use size_t:

    ==>     When you want to ensure your code can handle large amounts of memory on both 32-bit and 64-bit systems.
    ==>     When you are working with memory sizes, array sizes, or loop indexes that are tied to the size of memory or objects.
*/

/*
the reason we use void *b is because the function is designed to work with any type of data.
*/

/*
unsigned char *: You are converting the (void * )pointer b to a pointer to unsigned char.
This tells the compiler that b should now be treated as a pointer to a series of bytes (unsigned char),
allowing you to manipulate the memory at the byte level.
*/

/*
When you use (unsigned char *)b, you are converting the type of the pointer b from a void * (generic pointer) to an unsigned char * (pointer to an unsigned char).
*/
/*
 arrays in C are zero-indexed, meaning the valid indices are from 0 to len - 1. Accessing str[len] results in writing past the end of the memory block.
*/