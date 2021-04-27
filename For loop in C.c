#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    // Complete the code.
    char numbers[11][6] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};
    int numbers_index;
      for (int i=a; i<=b; i++) {
        numbers_index = i <= 9 ? i - 1 : 9 + i % 2;
        printf("%s\n", numbers[numbers_index]);
    }

    return 0;
}

