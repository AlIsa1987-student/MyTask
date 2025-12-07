#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    string FIO;
    int age;
    string group;

    // Êîíñòðóêòîð ñ ïàðàìåòðàìè
    Student(string f, int a, string g) {
        FIO = f;
        age = a;
        group = g;
    }

    void runs() {
        cout << FIO << ", " << age << " ëåò, " << "èç ãðóïïû " << group << " áåãàåò" << endl;
    }

    void jumping() {
        cout << FIO << ", " << age << " ëåò, " << "èç ãðóïïû " << group << " ïðûãàåò" << endl;
    }

    // ìåòîä (wernikeyd)
    void pullUP() {
        cout << FIO << ", " << age << " ëåò, " << "èç ãðóïïû " << group << " ïîäòÿãèâàåòñÿ" <<endl;
    }
    //ÐœÐµÑ‚Ð¾Ð´ (Efremov)
    void pushUP() {
    cout << FIO << " ," << age << " Ð»ÐµÑ‚ " << "Ð¸Ð· Ð³Ñ€ÑƒÐ¿Ð¿Ñ‹ " << group << " Ð¾Ñ‚Ð¶Ð¸Ð¼Ð°ÐµÑ‚ÑÑ" << endl;
    }
   // Ð¼ÐµÑ‚Ð¾Ð´ (Chusovv)
    void crouches() {
        cout << FIO << ", " << age << " Ð»ÐµÑ‚, " << "Ð¸Ð· Ð³Ñ€ÑƒÐ¿Ð¿Ñ‹ " << group << " Ð¿Ñ€Ð¸ÑÐµÐ´Ð°ÐµÑ‚" << endl;
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
       cout << FIO << ", " << age << " лет, " << "из группы " << group << " гибкость" << endl;
   }
   // метод (SevaSob)
   void sambo() {
       cout << FIO << ", " << age << " лет, " << "из группы " << group << " самбуется" << endl;
   }

   // метод (YoGoSee)
   void throwstheball() {
       cout << FIO << ", " << age << " лет, " << "из группы " << group << " Кидает мяч" << endl;

   }
 }
};

int main() {

    system("chcp 1251<nul");

    // Ñîçäàíèå îáúåêòà
    Student student1("Åãîðîâà Àëèñà", 19, "21318");

    // Âûçîâ ìåòîäîâ
    student1.runs();
    student1.jumping();

    // Ñîçäíèå îáúåêòà 2 (wernikeyd)
    Student student2 ("Ñëþçîâ Äàíèëà", 20,"21318");
    // Âûçîâ ìåòîäîâ äëÿ îáúåêòà 2 (wernikeyd)
    student2.runs();
    student2.jumping();

    //Ð¡Ð¾Ð·Ð´Ð°Ð½Ð¸Ðµ Ð¾Ð±ÑŠÐµÐºÑ‚Ð° 4 (Efremov)
    Student student4 ("Ð•Ñ„Ñ€ÐµÐ¼Ð¾Ð² ÐÐ¸ÐºÐ¸Ñ‚Ð°" , 20 , "21318");

    // Ð’Ñ‹Ð·Ð¾Ð² Ð¼ÐµÑ‚Ð¾Ð´Ð¾Ð² Ð´Ð»Ñ Ð¾Ð±ÑŠÐµÐºÑ‚Ð° 4
    student4.pullUP();
    student4.pushUP();
    student4.runs();
    // Ð¡Ð¾Ð·Ð´Ð°Ð½Ð¸Ðµ Ð¾Ð±ÑŠÐµÐºÑ‚Ð° 3 (Chusovv)
    Student student3("Ð§ÑƒÑÐ¾Ð² Ð¡ÐµÑ€Ð³ÐµÐ¹ ", 20, "21318");
    student3.runs();
    student3.crouches();
    student3.jumping();
    // Создание объекта 5 (Zverev)
    Student student5("Зверев Никита", 20, "21318");
    student5.runs();
    student5.swims();
    student5.jumping();


    // Создание объекта 7 - Yashkin
    Student student7("Яшкин Роман", 20, "21318");
    student7.dances();
    student7.sings();

    // Создание объекта 7 (Ohtioma51)
    Student student7("Хамицевич Артем", 20, "21318");
    student7.runs();
    stident7.flexibility();
    // OBJ 7 - SevaSob
    Student student6("Всеволод Соболев", 25, "21318");
    student6.sambo();
    student6.dances();
    // Создание объекта 8 (YoGoSe)
    Student student8("Корытов Кирилл", 20, "21318");
    student8.runs();
    stident8.throwstheball();

    return 0;
}


