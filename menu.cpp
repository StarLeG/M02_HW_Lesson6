#include "menu.h"
#include "qglobal.h"


int menu(QVector<Task> tasks)
{
    qDebug() << "\n\tМеню:";
    qDebug() << "______________________";
    qDebug() << "1. Добавить задачу";
    qDebug() << "2. Просмотреть задачи";
    qDebug() << "3. Удалить задачу";
    qDebug() << "4. Редактировать задачу";
    qDebug() << "5. Поиск задач";
    qDebug() << "6. Выйти";
    qDebug() << "______________________";
    qDebug() << "Выберите действие:";

    int choice;
    QTextStream(stdin) >> choice;

    switch (choice) {
    case Menu::AddTask:{ // Добавление задачи
        Task newTask;
        qDebug() << "Введите название задачи:";
       // QTextStream(stdin).readLine();  // Очистка буфера
        newTask.title = QTextStream(stdin).readLine().trimmed();

        qDebug() << "Введите дату выполнения (ДД.ММ.ГГГГ):";
        newTask.date = inputDate();

        qDebug() << "Введите приоритет (1-3):";
        newTask.priority = inputPriority();


        tasks.append(newTask);
        qDebug() << "Задача добавлена!";
        break;
    }
    case Menu::ViewTasks:

        break;
    case Menu::DeleteTask:

        break;
    case Menu::EditTask:

        break;
    case Menu::SearchTasks:

        break;
    case Menu::LogOut:{  // Выход из программы
        qDebug() << "Выход из программы.";
        return 1;
    }
    default:
        qDebug() << "Неверный выбор. Попробуйте снова.";
        break;
    }
    return 0;
}
