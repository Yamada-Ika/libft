#include <string.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	num_in_str;
	int	sign;

	sign = 1;
	num_in_str = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ('0' <= str[i] && str[i] <= '9')
		{
			num_in_str *= 10;
			num_in_str += str[i] - '0';
		}
		else if (str[i] == '-')
			sign *= -1;
		else if (str[i] == '+')
			;
		else
			break ;
		i++;
	}
	return (num_in_str * sign);
}

// -- test code --
// #include <stdio.h>
// #include <stdlib.h>

// int main(void){
// 	char str[] = "2147483649038";

// 	printf("atoi :    %d\n", atoi(str));
// 	printf("ft_atoi : %d\n", ft_atoi(str));
// }

//      #include <xlocale.h>

//      int
//      atoi_l(const char *str, locale_t loc);

// DESCRIPTION
//      The atoi() function converts the initial portion of the 
// 		string pointed to
//      by str to int representation.

//      It is equivalent to:

//            (int)strtol(str, (char **)NULL, 10);

//      While the atoi() function uses the current locale, the atoi_l() function
//      may be passed a locale directly. See xlocale(3) for more information.

// IMPLEMENTATION NOTES
//      The atoi() and atoi_l() functions are thread-safe and async-cancel-safe.

//      The strtol() and strtol_l() functions are recommended instead of atoi()
//      and atoi_l() functions, especially in new code.

// ERRORS
//      The function atoi() need not affect the value of errno on an error.

// SEE ALSO
//      atof(3), atol(3), strtod(3), strtol(3), strtoul(3), xlocale(3)

// STANDARDS
//      The atoi() function conforms to ISO/IEC 9945-1:1990 (``POSIX.1''),
//      ISO/IEC 9899:1990 (``ISO C90''), and ISO/IEC 9899:1999 (``ISO C99'').
// :
