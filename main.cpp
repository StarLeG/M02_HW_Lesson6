#include "main.h"
#include "menu.h"

enum Priority{
    highPriority = 1,
    mediumPriority,
    lowPriority
};







int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Rus");
    QCoreApplication a(argc, argv);
    QVector<Task> tasks;  // Вектор для хранения задач

    while(true){
        int exit = menu(tasks);
        if(exit == 1) break;
    }


    return a.exec();
}
