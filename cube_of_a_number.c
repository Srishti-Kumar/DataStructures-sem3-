#include <stdio.h>

int main()
{
    int number;
    int Cube;
    printf("enter number of which Cube is to be found out\n");
    scanf("%d",&number);
    Cube = number*number*number;
    printf("The Cube is : %d",Cube);
    return 0;
}
