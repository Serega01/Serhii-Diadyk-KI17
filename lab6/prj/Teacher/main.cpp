#include <iostream>
#include"ModulesDyadyk.h"
#include<string>
#include<stdlib.h>
#include<fstream>
#include<windows.h>
using namespace std;
int main()
{
    setlocale(LC_ALL,"ukr");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    float u1,u2,u3,p1,p2,p3;
    string y,y0;
    fstream f_n;
    short t = 0;
        short o,o1,o2;
        string s = "",s1 = "",s2 = "";
    y0 = "D:\\Универ\\Labs2\\Sergiy-Dyadyk-KI17\\lab6\\prj\\Teacher\\main.cpp";
    if(y0 != __FILE__)
    {
        for (int i =0; i<100; i++)
            cout<<'\a';
        f_n.open("TestResult.txt",ios_base::out );
        f_n<<"Встановлені вимоги порядку виконання лабораторної роботи порушено!"<<endl;
        f_n.close();
    }else{
    ClassLab6_Dyadyk myClass;
    u1 = myClass.check1();
    u2 = myClass.check2();
    u3 = myClass.check3();
    p1=4;
    p2=4;
    p3=4;
    f_n.open("TestResult.txt", ios_base::out);
    if(p1 == u1 && p2 == u2 && p3 == u3)
    {
        f_n<<"Test case Konstruktor#1 = passed"<<endl;
    }else f_n<<"Test case Konstruktor#1 = failed"<<endl;
    f_n.close();
    f_n.open("Konstruktor.txt", ios_base::in);
    while(!f_n.eof())
    {
        f_n>>y;
    }
    do{
      if (t = 1)
      {
          o = y.find('|');
          y[o] = ' ';
      }
      if (t = 2)
      {
         o1 = y.find('|');
         y[o1] = ' ';
       }
      t++;
    }while (t!=3);
    for (int i = 0; i<o;i++)
    {
        s = s+y[i];
    }
    for (int i = o+1; i<o1;i++)
    {
        s1 = s1+y[i];
    }
    for (int i = o1+1;i<y.length();i++)
    {
        s2 = s2+y[i];
    }
   u1 = atof(s.c_str());
   u2 = atof(s1.c_str());
   u3 = atof(s2.c_str());
   f_n.close();
    ClassLab6_Dyadyk myClass2(u1,u2,u3);
    p1 = myClass2.check1();
    p2 = myClass2.check2();
    p3 = myClass2.check3();
    f_n.open("TestResult.txt", ios_base::app);
    if(p1 == 9 && p2 == 9 && p3 == 9)
    {
        f_n<<"Test case Konstruktor#2 = passed"<<endl;
    }else f_n<<"Test case Konstruktor#2 = failed"<<endl;
    f_n.close();
    f_n.open("Check.txt", ios_base::in);
    while(!f_n.eof())
    {
        f_n>>y;
    }
    s = "";s1 = "";s2 = "";
    do{
      if (t = 1)
      {
          o = y.find('|');
          y[o] = ' ';
      }
      if (t = 2)
      {
         o1 = y.find('|');
         y[o1] = ' ';
       }
      t++;
    }while (t!=3);
    for (int i = 0; i<o;i++)
    {
        s = s+y[i];
    }
    for (int i = o+1; i<o1;i++)
    {
        s1 = s1+y[i];
    }
    for (int i = o1+1;i<y.length();i++)
    {
        s2 = s2+y[i];
    }
   u1 = atof(s.c_str());
   u2 = atof(s1.c_str());
   u3 = atof(s2.c_str());
   f_n.close();
   myClass.input(u1,u2,u3);
   p1 = myClass.check1();
    p2 = myClass.check2();
    p3 = myClass.check3();
    f_n.open("TestResult.txt", ios_base::app);
    if(p1 == 3 && p2 == 4 && p3 == 5)
    {
        f_n<<"Test case Change#1 = passed"<<endl;
    }else f_n<<"Test case Change#1 = failed"<<endl;
    f_n.close();
    myClass.input(4,4,4);
    float y1,y2,y3;
    y1 = myClass.perimetr1();
    y2 = myClass.perimetr2();
    y3 = myClass.perimetr3();
    p1 = 16;
    p2 = 16;
    p3 = 16;
    f_n.open("TestResult.txt", ios_base::app);
    if(p1 == y1 && p2 == y2 && p3 == y3)
    {
        f_n<<"Test case Perimetr#1 = passed"<<endl;
    }else f_n<<"Test case Perimetr#1 = failed"<<endl;
    f_n.close();
    myClass.input(u1,u2,u3);
    y1 = myClass.perimetr1();
    y2 = myClass.perimetr2();
    y3 = myClass.perimetr3();
    p1 = 16;
    p2 = 18;
    p3 = 14;
     f_n.open("TestResult.txt", ios_base::app);
    if(p1 == y1 && p2 == y2 && p3 == y3)
    {
        f_n<<"Test case Perimetr#2 = passed"<<endl;
    }else f_n<<"Test case Perimetr#2 = failed"<<endl;
    f_n.close();
    }
    return 0;
}
