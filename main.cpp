#include <iostream>
#include <string>
#include <windows.h>

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
        cout << FIO << ", " << age << " лет, " << "из группы " << group << " подтягивается" << endl;
    }

    // метод (Efremov)
    void pushUP() {
        cout << FIO << ", " << age << " лет, " << "из группы " << group << " отжимается" << endl;
    }

    // метод (Chusovv)
    void crouches() {
        cout << FIO << ", " << age << " лет, " << "из группы " << group << " приседает" << endl;
    }

    // метод (Zverev)
    void swims() {
        cout << FIO << ", " << age << " лет, " << "из группы " << group << " плавает" << endl;
    }

    // метод (Vorsin)
    void dances() {
        cout << FIO << ", " << age << " лет, " << "из группы " << group << " танцует" << endl;
    }

    // метод (Yashkin)
    void sings() {
        cout << FIO << ", " << age << " лет, " << "из группы " << group << " поёт" << endl;
    }

    // метод (Ohtioma51)
    void flexibility() {
        cout << FIO << ", " << age << " лет, " << "из группы " << group << " выполняет упражнение на гибкость" << endl;
    }

    // метод (SevaSob)
    void sambo() {
        cout << FIO << ", " << age << " лет, " << "из группы " << group << " занимается самбо" << endl;
    }

    // метод (YoGoSee)
    void throwstheball() {
        cout << FIO << ", " << age << " лет, " << "из группы " << group << " кидает мяч" << endl;
    }
};

int main() {

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    // Создание объекта 1
    Student student1("Егорова Алиса", 19, "21318");
    student1.runs();
    student1.jumping();

    // Создание объекта 2 (wernikeyd)
    Student student2("Слюзов Данила", 20, "21318");
    student2.runs();
    student2.jumping();

    // Создание объекта 3 (Chusovv)
    Student student3("Чусов Сергей", 20, "21318");
    student3.runs();
    student3.crouches();
    student3.jumping();

    // Создание объекта 4 (Efremov)
    Student student4("Ефремов Никита", 20, "21318");
    student4.pullUP();
    student4.pushUP();
    student4.runs();

    // Создание объекта 5 (Zverev)
    Student student5("Зверев Никита", 20, "21318");
    student5.runs();
    student5.swims();
    student5.jumping();

    // Создание объекта 6 (SevaSob)
    Student student6("Всеволод Соболев", 25, "21318");
    student6.sambo();
    student6.dances();

    // Создание объекта 7 (Yashkin)
    Student student7("Яшкин Роман", 20, "21318");
    student7.dances();
    student7.sings();

    // Создание объекта 8 (Ohtioma51)
    Student student8("Хамицевич Артем", 20, "21318");
    student8.runs();
    student8.flexibility();

    // Создание объекта 9 (YoGoSe)
    Student student9("Корытов Кирилл", 20, "21318");
    student9.runs();
    student9.throwstheball();

    return 0;
}
