#ifndef TRIANGULOS_H
#define TRIANGULOS_H


class Triangulos
{
    public:
        Triangulos();

        double GetladoA() { return ladoA; }
        void SetladoA(double val) { ladoA = val; }
        double GetladoB() { return ladoB; }
        void SetladoB(double val) { ladoB = val; }
        double GetladoC() { return ladoC; }
        void SetladoC(double val) { lados = val; }
        double Getlados() { return lados; }
        void Setlados(double val) { lados = val; }
        double Getladox() { return ladox; }
        void Setladox(double val) { ladox = val; }

        double Getladoy() { return ladoy; }
        void Setladoy(double val) { ladoy = val; }
        double Getladoz() { return ladoz; }
        void Setladoz(double val) { ladoz = val; }


        double area();
        double area(double a, double b);
        double area(double a, double b, double c);

    protected:

    private:
        double ladoA;
        double ladoB;
        double ladoC;
        double lados;

};

#endif // TRIANGULOS_H
