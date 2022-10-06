#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class lemniscata_bernulli {
    public:
        void set_a(double A){
            a = A;
        }
        double return_distance(){
            double x, y;
            double p;
            double f;
            cout << "Введите значение угла" << endl;
            cin >> f;
            cout << "Введите значение координаты x" << endl;
            cin >> x;
            cout << "Введите значение координаты y" << endl;
            cin >> y;
            p = sqrt(2 * pow(a, 2) * cos(2 * f));
            cout << "Расстояние до центра: " << p << endl;
            return p;
        }
        void radius(){
            double r;
            double p;
            p = return_distance();
            r = 2 * pow(a, 2) / 3. * p;
            cout << "Радиус леминискаты: " << r << endl;
        }
        void sector_area(){
            double s;
            double f;
            cout << "Введите значение угла" << endl;
            cin >> f;
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