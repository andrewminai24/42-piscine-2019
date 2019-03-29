#include <unistd.h>

int ft_putchar(char c)
{
	write(1,&c,1);
	return(0);
}
int ft_print_alphabet()
{
	char c;
	c = 'a';
	while(c <= 'z')
{
	ft_putchar(c);
	c++;
}
	ft_putchar('\n');
	return(0);
}
int main(void)
{
	ft_print_alphabet();
	return(0);
}
