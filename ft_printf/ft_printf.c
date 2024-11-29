#include <unistd.h>
#include <stdarg.h>

// Affiche un caractère et met à jour len
void ft_putchar(char c, int *len)
{
    write(1, &c, 1);
    (*len)++;
}

// Affiche une chaîne et met à jour len
void ft_putstr(char *str, int *len)
{
    if (!str)
    {
        ft_putstr("(null)", len);
        return;
    }
    while (*str)
    {
        ft_putchar(*str, len);
        str++;
    }
}

// Affiche un entier et met à jour len
void ft_putnbr(int n, int *len)
{
    if (n == -2147483648)
    {
        ft_putstr("-2147483648", len);
        return;
    }
    if (n < 0)
    {
        ft_putchar('-', len);
        n = -n;
    }
    if (n >= 10)
        ft_putnbr(n / 10, len);
    ft_putchar(n % 10 + '0', len);
}

// Gestion des différents spécificateurs
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
            {
                checks(*format, &len, args);
            }
            else if (*format == '\0')
                break;
            else
            {
                ft_putchar('%', &len);
                ft_putchar(*format, &len);
            }
        }
        else
        {
            ft_putchar(*format, &len);
        }
        format++;
    }

    va_end(args);
    return len;
}

// Exemple de test
int main()
{
    ft_printf("ansass %s ooooo %d\n", "guendaoui", 45);
    ft_printf("Testing null string: %s\n", NULL);
    return 0;
}


