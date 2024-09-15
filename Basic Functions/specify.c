/*
When to use size_t:

    ==>     When you want to ensure your code can handle large amounts of memory on both 32-bit and 64-bit systems.
    ==>     When you are working with memory sizes, array sizes, or loop indexes that are tied to the size of memory or objects.
*/

/*
the reason we use void *b is because the function is designed to work with any type of data.
*/

/*
Using <<<unsigned>>> allows larger positive values compared to signed types.
unsigned char specifically can hold values from 0 to 255, making it ideal for byte manipulation and binary data.
*/

/*
// unsigned char *: You are converting the (void * )pointer b to a pointer to unsigned char.
This tells the compiler that b should now be treated as a pointer to a series of bytes (unsigned char),
allowing you to manipulate the memory at the byte level.
*/