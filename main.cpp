#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    string FIO;
    int age;
    string group;

    // Конструктор с параметрами
    Student(string f, int a, string g) {
        FIO = f;
        age = a;
        group = g;
    }

    void runs() {
        cout << FIO << ", " << age << " лет, " << "из группы " << group << " бегает" << endl;
    }

    void jumping() {
        cout << FIO << ", " << age << " лет, " << "из группы " << group << " прыгает" << endl;
    }

    // метод (wernikeyd)
    void pullUP() {
        cout << FIO << ", " << age << " лет, " << "из группы " << group << " подтягивается" <<endl;
    }
   // РјРµС‚РѕРґ (Chusovv)
    void crouches() {
        cout << FIO << ", " << age << " Р»РµС‚, " << "РёР· РіСЂСѓРїРїС‹ " << group << " РїСЂРёСЃРµРґР°РµС‚" << endl;
 }
};

int main() {

    system("chcp 1251<nul");

    // Создание объекта
    Student student1("Егорова Алиса", 19, "21318");

    // Вызов методов
    student1.runs();
    student1.jumping();

    // Создние объекта 2 (wernikeyd)
    Student student2 ("Слюзов Данила", 20,"21318");
    // Вызов методов для объекта 2 (wernikeyd)
    student2.runs();
    student2.jumping();

    // РЎРѕР·РґР°РЅРёРµ РѕР±СЉРµРєС‚Р° 3 (Chusovv)
    Student student3("Р§СѓСЃРѕРІ РЎРµСЂРіРµР№ " 20, "21318");
    student3.runs();
    student3.crouches();
    student3.jumping()


    return 0;


