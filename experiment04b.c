#include <stdio.h>

int main()
{
    int frame1[30], frame2[30];
    int i, j = 0, n, counter = 0;

    printf("Enter the size of stuffed frame: ");
    scanf("%d", &n);

    printf("Enter the bits of stuffed frame: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &frame2[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(frame2[i] == 1)
        {
            counter++;
            frame1[j] = frame2[i];
            j++;
        }
        else
        {
            if(counter == 5)
            {
                // This 0 was inserted during stuffing
                counter = 0;
            }
            else
            {
                frame1[j] = frame2[i];
                j++;
                counter = 0;
            }
        }
    }

    printf("\nStuffed Frame: ");
    for(i = 0; i < n; i++)
    {
        printf("%d", frame2[i]);
    }

    printf("\nDestuffed Frame: ");
    for(i = 0; i < j; i++)
    {
        printf("%d", frame1[i]);
    }

    return 0;
}
