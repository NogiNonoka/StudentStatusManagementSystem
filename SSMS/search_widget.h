#ifndef SEARCH_WIDGET_H
#define SEARCH_WIDGET_H

#include <QWidget>
#include <QMessageBox>
#include <QFile>
#include <QDebug>

namespace Ui {
class SearchWidget;
}

class SearchWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SearchWidget(QWidget *parent = nullptr);
    ~SearchWidget();

private:
    Ui::SearchWidget *ui;

private slots:
    void on_returnButton_clicked();
    void on_searchButton_clicked();
    void on_deleteButton_clicked();

    void on_modifyButton_clicked();

signals:
    void display(int number);
};

#endif // SEARCH_WIDGET_H
