#include <iostream>
#include "ModulesDyadyk.h"

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"ukr");
    char ch;
    int x, y, z;
    float mas[6], energy;
    long N;
    bool tof = false;
    cout << "Команди: d - q_calculation; f - s_calculation; q - task3_1; h - task3_2; j - task3_3." << endl;
    do{
        cout << "\nВиберіть команду: ";
        cin >> ch;
        if((ch == 'd')||(ch == 'f'))
        {
            cout << "Введіть x, y, z: ";
            cin >> x >> y >> z;
            if(ch == 'd')
            {
                cout << "Результат: " << q_calculation(x, y, z) << endl;
            }else{
                cout << "Результат: " << s_calculation(x, y, z) << endl;
            }
            tof = true;
        }
        if(ch == 'q')
        {
            cout << "Введіть кількість спожитої за місяць електроенергії (кВт.): ";
            cin >> energy;
            cout <<  "Вартість цієї електроенергії (грн.): " << task3_1(energy) << endl;
            tof = true;
        }
        if(ch == 'h')
        {
            cout << "Введіть 6 показників швидкості переміщення вітру: ";
            cin >> mas[0] >> mas[1] >> mas[2] >> mas[3] >> mas[4] >> mas[5];
            cout << "Бал Бофорта: " << task3_2(mas) << endl;
            tof = true;
        }
        if(ch == 'j')
        {
            cout << "Введіть число від 0 до 500700: ";
            cin >> N;
            cout << "Результат: " << task3_3(N) << endl;
            tof = true;
        }
        if(tof == false)
        {
            cout << "\a";
        }else{
            tof = false;
        }
        cout << "Для виходу введіть \"к\" і натисніть Enter: ";
        cin >> ch;
    }while((ch != 'k')&&(ch != 'K')&&(ch != 'К')&&(ch != 'к'));
    return 0;
}
