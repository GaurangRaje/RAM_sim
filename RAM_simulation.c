#include <stdio.h>
#include <math.h>

int convert(int n) {
    int dec = 0, i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}

int main()
{
    int data, i, read, addr, mem[16];
    
    while(1)
    {
        printf("Enter 1 for read and 0 for write: \n");
        scanf("%d", &read);
        printf("Enter memory address: \n");
        scanf("%d", &i);
        i = convert(i);
        addr = i-1;
        
        if(read)
        {
            printf("%d\n",mem[addr]);
            printf("\n");
        }
        else
        {
            printf("enter data: \n");
            scanf("%d", &data);
            mem[addr] = data;
        }
    }
    return 0;
}
