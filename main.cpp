#include <iostream>

using namespace std;

struct Punto
{
    double x, y;

    Punto(double a = 0.0, double b = 0.0);
    Punto(const Punto &otro);// <-- C.copia

    void imprime() const;
};


int main()
{
    Punto p(1.0, 2.3);
    Punto q(p);// q = p; Es ==
    p.imprime();
    q.imprime();

    return 0;
}

Punto::Punto(double a, double b)
{
    cout << "Normal" << endl;

    x = a;
    y = b;
}

Punto::Punto(const Punto &otro)
{
    cout << "Se copio" << endl;

    x = otro.x;
    y = otro.y;
}

void Punto::imprime() const
{
    cout << x << ", " << y << endl;
}
