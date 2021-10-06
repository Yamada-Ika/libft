#include <unistd.h>

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count] != '\0')
		count++;
	return (count);
}

void	ft_putstr_fd(char const *c, int fd)
{
	write(fd, (const void *)c, ft_strlen(c));
}

// -- test code --
// int main(void){
// 	ft_putstr_fd("hello, world!", 1);
// }
