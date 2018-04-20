#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int num = 1;

   for(int i = 0; i < num; i++ ){
    printf("%d\n", num);
   }
   return 0;

    printf("\n");
}


// 0! = 1, so you can go ahead and simply return 1 there.
// function factorialize(num) {
//   if (num === 0)
//  { return 1; }
//   return num * factorialize(num-1);
// }

// factorialize(5);