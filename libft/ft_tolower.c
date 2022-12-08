int ft_toupper(int c)
{
        unsigned char tmp;

    tmp = c;

    if(tmp >= 'A' && tmp<='Z')
    {
        tmp+=32;
    }
    
    return tmp;
}