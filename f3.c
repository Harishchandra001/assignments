#include<stdio.h>
main()
{
inc();
inc();
inc();
inc();
inc();
inc();
inc();
inc();
inc();
inc();
inc();

}
inc()
{
static int i=10000;
printf("i=%d\n",i);
i++;
}
