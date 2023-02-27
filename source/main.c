# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

// ***************************************************************
// begin --> libft
// ---------------------------------------------------------------

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	*ft_memset(void *b, int c, size_t len)
{
	char	*dst;

	dst = b;
	while (len-- != 0)
		*dst++ = (char)c;
	return (b);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*buffer;

	buffer = malloc(nmemb * size);
	if (buffer == NULL)
		return (0);
	ft_bzero(buffer, nmemb * size);
	return (buffer);
}

// ---------------------------------------------------------------
// end --> libft
// ***************************************************************

/*
char *convert(unsigned int num, int base) 
{ 
    static char Representation[]= "0123456789ABCDEF";
    static char buffer[50]; 
    char *ptr; 

    ptr = &buffer[49]; 
    *ptr = '\0'; 

    do 
    { 
        *--ptr = Representation[num%base]; 
        num /= base; 
    }while(num != 0); 

    return(ptr); 
}
*/


int	ft_sizecharsOfnumber(num, base, isUnsigned)
{
	int	len;

	if (!num)
		return (0); // mirar mas adelante
	len = 1;
	while ((num /= base) != 0)
		len++;
	if ((isUnsigned == 0 || !isUnsigned) && (num < 0))
		len++;
	return (len);
}


char *ft_number2string(int num, int base, int isUnsigned)
{
    static char Representation[]= "0123456789ABCDEF";
    static char buffer[50]; 
    char *ptr;

    ptr = &buffer[49]; 
    *ptr = '\0'; 
    isUnsigned++;

	/*
	do 
    { 
        *--ptr = Representation[num%base]; 
        num /= base; 
    }while(num != 0); 
	*/
	
	while(num != 0)
	{
		*--ptr = Representation[num%base];
		num /= base;
	}
    return(ptr); 
}


/*
char *ft_number2string(int num, int base, int isUnsigned)
{
	// mirar liberar memoria despues
	static char digit[]= "0123456789ABCDEF";
    static char *buffer; 
	char	*ptr;
	int 	len;

	len = ft_sizecharsOfnumber(num, base, isUnsigned);
	buffer = ft_calloc(sizeof(char), len);
	if (buffer == NULL)
		return(0); // mirar mas adelante 
	ptr = &buffer[len-1];

    num /= base; 
	while (num != 0)
	{ 
        *--ptr = digit[num%base];
		write(1,ptr,1);
        num /= base; 
    }
	*--ptr = num;
	write(1,ptr,1);
	return (buffer);
}
*/

void print_char(char c)
{
	write(1,&c,1);
}

void print_string(char *str)
{
	size_t len;

	len = ft_strlen(str);
	write(1, str, len);
}

int parse(const char *str, va_list arg)
{
	int pos;
	char *ch;

	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] == '%' && str[pos+1] != ' ' && str[pos+1] != '\0')
		{
			pos++;
			if (str[pos] == '%')
				print_char('%');
			else if (str[pos] == 'c')
				print_char(va_arg(arg, int));
			else if (str[pos] == 's')
			{
				ch = va_arg(arg, char*);
				while(*ch!='\0')
                        print_char(*ch++);
			}
			else if (str[pos]=='i')
			{
				ch = ft_number2string(va_arg(arg, int), 16, 0);
				while(*ch!='\0')
                        print_char(*ch++);
			}	
			else
				pos--;
		}
		else
			write(1,&str[pos],1);
		pos++;
	}
	return (0);
}


int ft_printf(const char *format, ...)
{
	va_list arg;
	
	if (!format)
		return(-1);
	va_start(arg, format);
	parse(format, arg);
	va_end(arg);
	return(1);
}

int main()
{
	
	ft_printf("Ok %c %s %i ejemplo de cadema",'h',"perico",15);
	return(0);
}
