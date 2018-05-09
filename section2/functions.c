#include <cs50.h>
#include <string.h>

int main (void)
{

// float twofloatin (float a, float b)
// {
//     return x * y;
// }

// int add_two_ints (int a, int b)
// {
//     int sum = a + b;
//     return sum;
// }


bool valid_triangle (float x, float y, float z);

    //check for positive sides
    if (x <= 0 || y <= 0 || z <= 0)
    {
        return false;
    }

    //check that sum of any two sides greater than third
    if ((x +y <=z) || (x + z <= y) || (y + z <= x))
    {
        return false;
    }

    //if we passed both tests, we 're good!
    return true;

}