#include<stdio.h>
main()
{
    auto int i=6;
        {
           auto int i=8;
            {
              auto int i=7;
              printf("%d",i);                   
            }
           printf("%d",i);
        }
     printf("%d",i);
}
