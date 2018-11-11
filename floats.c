//floating-point arithmetic

#include <cs50.h>
#include <stdio.h>

 int main(void)
 {
     // prompt user for xmake
     float x = get_float("x: ");

     // prompt user for y
     float y = get_float("y: ");

     // perform devision
     printf ("%F divided by %F is %F/n" , x, y, x /  y );

     return 0;
 }
