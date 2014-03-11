#ifndef STARTSCREEN_H
#define STARTSCREEN_H

#include <QDialog>

namespace Ui {
class startscreen;
}

class startscreen : public QDialog
{
    Q_OBJECT
    
public:
    explicit startscreen(QWidget *parent = 0);
    ~startscreen();
    
private slots:
    void on_qbutton_clicked();

    void on_kbcbutton_clicked();

private:
    Ui::startscreen *ui;
};

#endif // STARTSCREEN_H
