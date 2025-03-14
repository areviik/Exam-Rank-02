unsigned char	reverse_bits(unsigned char octet)
{
    int i = 8;
    unsigned char reversed = 0;

    while (i--)
    {
        reversed = (reversed << 1) | (octet & 1); 
        octet >>= 1; 
    }
    return (reversed);
}
