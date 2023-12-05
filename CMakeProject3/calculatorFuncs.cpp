#include "calculatorFuncs.h"
#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846


double scitani(double a, double b)
{
	return a + b;
}

double odcitani(double a, double b)
{
	return a - b;
}
double nasobeni(double a, double b)
{
	return a * b;
}
double deleni(double a, double b)
{
	if (b != 0)
	{
		return a / b;
	}
	else
	{
		printf("Chyba: Nelze dìlit nulou.\n");
		return '\n';
	}

}
double modulo(double a, double b)
{
	return fmod(a, b);
}

double celsium(double a)
{
	return(a - 32) * 5 / 9;
}
double fahrenheit(double a)
{
	return(a * 9 / 5) + 32;
}
double uhel_stupne(double a)
{
	return (a * M_PI) / 180;

}
double uhel_radiany(double a)
{
	return (a * 180) / M_PI;
}

double sinus(double a)
{
	return sin(a);
}
double cosinus(double a)
{
	return cos(a);

}
double tangens(double a)
{
	return tan(a);

}
double faktorial(double a)
{
	double returnval = a;
	for (double i = 1; i < a; i++) {
		returnval *= i;
	}
	return returnval;
}
double logaritmus(double a, double b)
{
	return log10(a);

}
double logaritmusPrirozeny(double a) {
	return log(a);
}
double exponencial(double a)
{
	return exp(a);
}
double mocnina(double a, double b)
{
	return pow(a, b);
}
double komp_soucet(double a, double b, double a1, double b1, double i)
{
	return (a + b) + i*(a1 + b1);
}
double komp_rozdil(double a, double b, double a1, double b1, double i)
{
	return (a - b) + i * (a1 - b1);
}
double komp_soucin(double a, double b, double a1, double b1, double i)
{
	return (a * b - a1 * b1) + i * (a * b1 + a1 * b);
}
double komp_podil(double a, double b, double a1, double b1, double i)
{
	if (b && b1 != 0)
	{
		return ((a * b + a1 * b1) + i * (a1 * b - a * b)) / (b1 * b1) + (b * b);
	}
}
double komp_prevod(double a, double b, double i,double z)
{
	if(z >= 0)
	{
		return z * (cos((a) / (z)) + i * sin((b) / (z)));
	}
}
double komp_zpet(double a, double i, double z)
{
	return z * (cos(a) * i * sin(a));
}

	