#include "editTask.h"


void editTask(Task &task) {
    qDebug() << "Текущее название (" << task.title << "). Новое название (Enter - оставить):";
    QString newTitle = QTextStream(stdin).readLine().trimmed();
    if (!newTitle.isEmpty()) {
        task.title = newTitle;
    }

    qDebug() << "Текущая дата (" << task.date.toString("dd.MM.yyyy") << "). Новая дата (Enter - оставить):";
    QString dateStr = QTextStream(stdin).readLine().trimmed();
    if (!dateStr.isEmpty()) {
        task.date = QDate::fromString(dateStr, "dd.MM.yyyy");
    }

    qDebug() << "Текущий приоритет (" << task.priority << "). Новый приоритет (Enter - оставить):";
    QString priorityStr = QTextStream(stdin).readLine().trimmed();
    if (!priorityStr.isEmpty()) {
        task.priority = inputPriority();
    }
}
