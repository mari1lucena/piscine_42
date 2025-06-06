#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    char letter = 'z';

    while (letter<='z'&letter>='a'){
    write(1,&letter,1);
    letter=letter-1;
    }
}

int main()
{
    ft_print_reverse_alphabet();
    return 0;
}
