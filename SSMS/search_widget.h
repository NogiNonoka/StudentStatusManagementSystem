#ifndef SEARCH_WIDGET_H
#define SEARCH_WIDGET_H

#include <QWidget>

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
};

#endif // SEARCH_WIDGET_H
