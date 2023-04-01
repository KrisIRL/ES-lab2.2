#include "mbed.h"

Serial pc(USBTX, USBRX);
int fibonacci(int term)
{
    if (term <= 1)
    {
        return term;
    }
    else
    {
        return fibonacci(term - 1) + fibonacci(term - 2);
    }
}
int main()
{
    int term;
    pc.printf("Enter the number of terms you want to print: ");
    pc.scanf("%d", &term);
    
    pc.printf("Fibonacci Series: ");
    
    for (int i = 0; i < term; i++)
    {
        pc.printf("%d ", fibonacci(i));
    }
    
    return 0;
}
