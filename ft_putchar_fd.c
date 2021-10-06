#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, (const void *)&c, sizeof(c));
}

// -- test code --
// int main(void){
// 	ft_putchar_fd('o', 1);
// }
