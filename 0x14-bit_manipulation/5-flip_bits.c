/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: starting
 * @m: target
 *
 * Return: number bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
         unsigned int bits = 0;
         unsigned long int xor_val;

         xor_val = n ^ m;

         while (xor_val)
         {  
                bits += xor_val & 1;
                xor_val >>= 1;
         } 

         return (bits);
}
