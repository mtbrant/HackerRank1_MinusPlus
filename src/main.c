#include <stdio.h>

int main() {
 
    int integers[10]  = {1, -2, -6,4, -5, -9, 0, 1, 6};
    int numberOfZeros = 0, 
        numberOfPositives = 0, 
        numberOfNegatives = 0;

    for(int i = 0; i < 10; i++)
    {
        if(integers[i] == 0) 
            numberOfZeros++;
        else if(integers[i] > 0)
            numberOfPositives++;
        else 
            numberOfNegatives++;
    }
    
    printf("%n");
    printf("Positives: %d -> %.2f%\n", numberOfPositives, ((float)numberOfPositives/0.1));
    printf("Negatives: %d -> %.2f%\n", numberOfNegatives, (float)numberOfNegatives /0.1);
    printf("Zero: %d -> %.2f%\n", numberOfZeros, (float)numberOfZeros/0.1);

    return 0;
}
