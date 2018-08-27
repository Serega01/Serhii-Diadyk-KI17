
#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846 //Pi
using namespace std;
 //lab2----------------------------
float q_calculation(float x, float y, float z)
{
    float q;
    if(z<=0)
        q = 0;
    else
    q = x*M_PI-(pow(sqrt(pow(y,z)),abs(x)-(y)-(z)));
    return q;
}

float s_calculation(float x, float y, float z)
{
   float s;
    if(x<=0 || z<=0)
        s = 0;
    else
        s = log(abs(sin(z)))+(((1/2*pow(x,2))-(sqrt(abs(pow((y+z),2)-pow(x,5)))))/10*M_PI*pow(z,4));
    return s;
}

//lab3-----------------------------

float task3_1 (float energy)
    {

            if (energy < 150)
            {
                return energy*30.84;
            }
        else
            {
            if (energy < 800)
            {
                return energy*41.94;
            }
        else
            {
                return energy*134.04;
            }
        }
    }

int task3_2(float mas[])
{
    float min = mas[0];
    for(int i = 1; i < 6; i++)
    {
        if(min > mas[i])
        {
            min = mas[i];
        }
    }
    if(min < 0.3)
    {
        return 0;
    }else
    {
        if(min <= 1.5)
        {
            return 1;
        }else
        {
        if(min <= 3.4)
        {
            return 2;
        }else
        {
        if(min <= 5.4)
        {
            return 3;
        }else
        {
        if(min <= 7.9)
        {
            return 4;
        }else
        {
        if(min <= 10.7)
        {
            return 5;
        }else
        {
        if(min <= 13.8)
        {
            return 6;
        }else
        {
        if(min <= 17.1)
        {
            return 7;
        }else
        {
        if(min <= 20.7)
        {
            return 8;
        }else
        {
        if(min <= 24.4)
        {
            return 9;
        }else
        {
        if(min <= 28.4)
        {
            return 10;
        }else
        {
        if(min <= 32.6)
        {
            return 11;
        }else
        {
        if(min >= 32.7)
        {
            return 12;
}}}}}}}}}}}}}
}

int task3_3(long N)
{
    if(N > 500700)
    {
        return 0;
    }
    string D = "";
    short int x0 = 0, x1 = 0;
    while(N > 0)
    {
        if (N % 2 == 0)
        {
            x0++;
            D = D + '0';
        }
        else
        {
            x1++;
            D = D + '1';
        }
        N /= 2;
    }
    if(D[9] == '1')
    {
        return x0;
    }else
    {
        return x1;
    }
}
