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
    cout << "�������: d - q_calculation; f - s_calculation; q - task3_1; h - task3_2; j - task3_3." << endl;
    do{
        cout << "\n������� �������: ";
        cin >> ch;
        if((ch == 'd')||(ch == 'f'))
        {
            cout << "������ x, y, z: ";
            cin >> x >> y >> z;
            if(ch == 'd')
            {
                cout << "���������: " << q_calculation(x, y, z) << endl;
            }else{
                cout << "���������: " << s_calculation(x, y, z) << endl;
            }
            tof = true;
        }
        if(ch == 'q')
        {
            cout << "������ ������� ������� �� ����� �����������㳿 (���.): ";
            cin >> energy;
            cout <<  "������� ���� �����������㳿 (���.): " << task3_1(energy) << endl;
            tof = true;
        }
        if(ch == 'h')
        {
            cout << "������ 6 ��������� �������� ���������� ����: ";
            cin >> mas[0] >> mas[1] >> mas[2] >> mas[3] >> mas[4] >> mas[5];
            cout << "��� �������: " << task3_2(mas) << endl;
            tof = true;
        }
        if(ch == 'j')
        {
            cout << "������ ����� �� 0 �� 500700: ";
            cin >> N;
            cout << "���������: " << task3_3(N) << endl;
            tof = true;
        }
        if(tof == false)
        {
            cout << "\a";
        }else{
            tof = false;
        }
        cout << "��� ������ ������ \"�\" � �������� Enter: ";
        cin >> ch;
    }while((ch != 'k')&&(ch != 'K')&&(ch != '�')&&(ch != '�'));
    return 0;
}
