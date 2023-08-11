#include <stdio.h>

int main(void)
{
    printf("hello, world \n ");
}



// this is incrementing
int counter = 0;
counter = counter + 1; 
// can also do counter += 1;
// can simplify it even more with counter++;


// Conditional; it has a boolean expression that we were asking a question of
if (x < y)
{
    printf("x is less than y\n");
}
else if (x > y)
{
    printf("x is greater than y\n");
}
else if (x == y)
{
    printf("x is equal to y\n");
}

// while loops
while(true)
{
    printf("hello, world\n");
}

// for loops
for (int i = 0; i < 50; i++)
{
    printf("hello, world\n");
}

// user imput
answer = get_string("What's your name?\n");
printf("%s\n", answer); 