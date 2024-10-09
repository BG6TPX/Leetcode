#include<stdio.h>

void main()
{   
    int count_xx1,count_x1x,count_1xx;
    printf("\n");
    for (count_xx1 = 0; count_xx1 < 5; count_xx1++)
    {
        for (count_x1x = 0; count_x1x < 5; count_x1x++)
        {
            for (count_1xx = 0; count_1xx < 5; count_1xx++)
            {
                if((count_1xx != count_x1x) | (count_x1x != count_xx1 ) |(count_xx1 != count_1xx) )
                {
                    printf("%d,%d,%d\n",count_1xx,count_x1x,count_xx1);
                }
            }
        }
    }
}