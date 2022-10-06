#include <iostream>
#include <string>
#include "bernulli.hpp"
#include "dialog.hpp"

using namespace std;

int main(){
    double A;
    cout << "Введите значение параметра вашей кривой:" << endl;
    do{
        if(!cin)
        {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Повторите ввод.\n";
        }
        cin >> A;
    }while(!cin);
    lemniscata_bernulli lember;
    lember.set_a(A);
    int flag = 0;
    do{
        int var = menu();
        switch(var){
            case 1:
                flag = 1;
                break;
            case 2:
                lember.return_distance();
                break;
            case 3:
                lember.radius();
                break;
            case 4:
                lember.sector_area();
                break;
            case 5:
                lember.square();
                break;
            default:
                break;
        }
    }while(flag != 1);
    return 0;
}