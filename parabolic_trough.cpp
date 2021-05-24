#include <stdio.h>
#include <iostream>
#include <math.h>


int main()
{

float p,f,q,s,h,w,y, spower,a, s_calc;
char cha;
char m_ok = 'y';
puts("This utility calcs specs of your parabolic trough");
puts("Enter focal length, cm");
puts("It describes how far from the surface is light concentrated");

std::cin >> f;
puts("Enter p - distance from the rim of parabolic trough to its axis of symmetry, cm");
std::cin >> p;
puts("Enter width, cm");
std::cin >> w;

float check_data();
{
  if( f <= 0 || p <= 0 || w <=0 )
   puts("Zeroes in the input.");
  else
    {
        h=p/2;
        q=sqrt(f*f+h*h);
        s=h*q/f + f*log((h+q)/f);

        spower = w*2*p/10;
        a = 1/(4*f);
        s_calc = (1/(4*a))*(2*a*p*sqrt(4*a*a*p*p +1)+ asinh(2*a*p));

        std::cout << "2p = ";
        std::cout << 2*p << "cm" <<"\n";
        std::cout << "f = ";
        std::cout << f << "cm" << "\n";
        std::cout << "s = ";
        std::cout << s << "cm" << "\n";
        std::cout << "s_calc = ";
        std::cout << s_calc << "cm" << "\n";
        puts("Power reaching trough");
        std::cout << spower << " Watts" << "\n";

    }
}

int points_calc();
    {
        puts("Do you need points? y/n");
        std::cin >> cha;
        if(cha == m_ok)
        {

        std::cout <<"\n";
            for(int i=0; i<p+1; i++ )
            {
                y = (1/(4*f))*i*i;
                std::cout << "x = "<< i << "y = " << y <<"\n";
            }
        }


    }

return 0;
}
