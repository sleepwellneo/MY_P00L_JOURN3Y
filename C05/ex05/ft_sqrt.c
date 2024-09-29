
int ft_sqrt(int nb)
{
    int m = 1;
    if (nb < 0)
    return 0;
        while (m * m <= nb)
        {
            if (m * m == nb)
            return m;
            m++;
        }
        return 0;
}
