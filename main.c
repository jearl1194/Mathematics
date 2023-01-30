#include <stdio.h>
#include <math.h>

float eval(float x);
void print_eval(float y, float x);
void limits(float x, float near_x[]);

int main(void)
{
    float near_x[] = {2, 1, 0.1, 0.01, 0.001, 0.0001};
    limits(5, near_x);
}

// Evaluate function
float eval(float x)
{
    // Enter function here:
    return sin(x);
}

// Print result of function
void print_eval(float x, float y)
{
    printf("% .4f\t\t% .8f\n", x, y);
}

// Solve limits
void limits(float x, float near_x[])
{
    // Enter the size of array:
    int n = 6;

    // Print the limits
    printf("x\t\tf(x)\n");
    // Print the left-hand side limits
    for (int i = 0; i < n; i++)
    {
        print_eval(x - near_x[i], eval(x - near_x[i]));
    }
    // Print the right-hand side limits
    printf("==============================\n");
    for (int i = n - 1; i >= 0; i--)
    {
        print_eval(x + near_x[i], eval(x + near_x[i]));
    }
}
