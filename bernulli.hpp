#include <iostream>
#include <string>
#include <cmath>
#include <cassert>


using namespace std;

class lemniscata_bernulli {
    public:
        lemniscata_bernulli(double A = 10){
            assert(a != 10);
            a = A;
        }
        void set_a(double A){
            a = A;
        }
        double return_distance(double f){
            double p;
            p = sqrt(2 * pow(a, 2) * cos(2 * f));
            cout << "Расстояние до центра: " << p << endl;
            return p;
        }
        double radius(double f){
            double r;
            double p;
            p = return_distance(f);
            r = 2 * pow(a, 2) / 3. * p;
            cout << "Радиус леминискаты: " << r << endl;
            return r;
        }
        double sector_area(double f){
            double s;
            s = (pow(a, 2) / 2.) / sin(2 * f);
            cout << "Площадь вашего сектора: " << s << endl;
            return s;
        }
        double square(){
            double s;
            s = pow(a, 2) / 2.;
            cout << "Площадь леминискаты: " << s << endl;
            return s;
        }
    private:
        double a;
};