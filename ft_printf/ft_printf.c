#include "ft_printf.h"

void checks(const char format, int *len, va_list arg)
{
    if (format == 'c')
    {
        ft_putchar((char)va_arg(arg, int), len);
    }
    else if (format == 's')
    {
        ft_putstr(va_arg(arg, char *), len);
    }
    else if (format == 'd')
    {
        ft_putnbr(va_arg(arg, int), len);
    }
}

// Fonction principale ft_printf
int ft_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    int len = 0;

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == 'c' || *format == 'd' || *format == 's')
                checks(*format, &len, args);
            else if (*format == '\0')
                break;
            else
            {
                ft_putchar('%', &len);
                ft_putchar(*format, &len);
            }
        }
        else
            ft_putchar(*format, &len);
        format++;
    }
    va_end(args);
    return len;
}

// Exemple de test
/*int main()
{
    ft_printf("ansass %s ooooo %d\n", "guendaoui", 45);
    ft_printf("Testing null string: %s\n", NULL);
    return 0;
}*/


