#include <unistd.h> // Include to use write function //

void ft_putchar(char c)
{
     write(1,&c,1);
}

int main()
{
    ft_putchar('c');
    return 0;
}
