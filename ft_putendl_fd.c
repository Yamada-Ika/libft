#include <unistd.h>

void	ft_putendl_fd(char const *s, int fd)
{
	while (*s != '\n')
	{
		write(fd, (const void *)s, sizeof(char));
		s++;
	}
}

// -- test code --
// int main(void){
// 	ft_putendl_fd("hello, \nworld!", 1);
// }
