#ifndef MENU_H
#define MENU_H

#include "inputDate.h"
#include "main.h"
#include "inputPriority.h"
#include "printTasks.h"


enum Menu{
    AddTask = 1,
    ViewTasks,
    DeleteTask,
    EditTask,
    SearchTasks,
    LogOut
};

int menu(QVector<Task> &tasks);


#endif // MENU_H
