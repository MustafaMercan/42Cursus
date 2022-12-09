int ft_toupper(int c)
{
    unsigned char tmp;

    tmp = c;

    if(tmp >= 'a' && tmp<='z')
    {
        tmp-=32;
    }
    
    return tmp;


}