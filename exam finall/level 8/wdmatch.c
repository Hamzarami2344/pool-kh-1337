#include <unistd.h>
int main(int ac ,char **av)
{
    int i = 0;
    int j = 0;
    if (ac == 3)
    {
        while (av[2][j])
        {
            if(av[1][i] == av[2][j])
            {
                i++;
            }
            j++;
        }
        j = 0;
        while (av[1][j])
        {
            j++;
        }
        if( i == j)
        {
            j = 0;
            while (av[1][j])
            {
                write(1,&av[1][j],1);
                j++;
            }
        }
    }
    write(1,"\n",1);
}