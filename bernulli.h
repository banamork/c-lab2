#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class lemniscata_bernulli {
    public:
        double return_distance(double a){
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
            cout << p;
            return p;
        }
        void radius(double a){
            double r;
            double p;
            p = return_distance(a);
            r = 2 * pow(a, 2) / 3. * p;
        }
        void sector_area(double a){
            double s;
            double f;
            cout << "Введите значение угла" << endl;
            s = (pow(a, 2) / 2.) / sin(2 * f);
            cout << s;
        }
        void square(double a){
            double s;
            s = pow(a, 2) / 2.;
            cout << s;
        }
    private:
        double a;
};