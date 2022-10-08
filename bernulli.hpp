#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class lemniscata_bernulli {
    public:
        void set_a(double A){
            a = A;
        }
        double return_distance(double f){
            double p;
            p = sqrt(2 * pow(a, 2) * cos(2 * f));
            cout << "Расстояние до центра: " << p << endl;
            return p;
        }
        void radius(double f){
            double r;
            double p;
            p = return_distance(f);
            r = 2 * pow(a, 2) / 3. * p;
            cout << "Радиус леминискаты: " << r << endl;
        }
        void sector_area(double f){
            double s;
            s = (pow(a, 2) / 2.) / sin(2 * f);
            cout << "Площадь вашего сектора: " << s << endl;
        }
        void square(){
            double s;
            s = pow(a, 2) / 2.;
            cout << "Площадь леминискаты: " << s << endl;
        }
    private:
        double a;
};