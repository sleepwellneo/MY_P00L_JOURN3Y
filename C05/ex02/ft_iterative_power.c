int ft_iterative_power(int nb, int power)
{
    int r;
    if (power < 0)
        return 0;
    r = 1;
    while (power >= 1)
    {
        r *= nb;
        power--;
    }
    return r;
}