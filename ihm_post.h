#ifndef IHM_POST_H
#define IHM_POST_H

#include <QWidget>

namespace Ui {
class ihm_post;
}

class ihm_post : public QWidget
{
    Q_OBJECT

public:
    explicit ihm_post(QWidget *parent = nullptr);
    ~ihm_post();

private:
    Ui::ihm_post *ui;
};

#endif // IHM_POST_H
