#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED



#endif // FUNCIONES_H_INCLUDED

int factorial(int n)
{
int resp;
if(n==1)
return 1;
resp=n* factorial(n-1);
return (resp);
}

int suma(int a, int b)
{
int total;
total=a+b;
return total;
}

int resta(int a, int b)
{
int total;
total=a-b;
return total;
}

int multiplica(int a, int b)
{
int total;
total=a*b;
return total;
}


int division(int a, int b)
{
int total;
total=a/b;
return total;
}

