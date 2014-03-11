#ifndef RESULTOFQUESTION_H
#define RESULTOFQUESTION_H

#include <QWidget>

namespace Ui {
class resultofquestion;
}

class resultofquestion : public QWidget
{
    Q_OBJECT
    
public:
    explicit resultofquestion(QWidget *parent = 0);
    void setcorrectanswer(QString amount);
    void setwronganswer(QString amount);
    void setquitgame(QString amount);
    void setwingame(QString amount);
    ~resultofquestion();
    
private slots:
    void on_pushButton_clicked();

private:
    int answerstatus;
    Ui::resultofquestion *ui;
};

#endif // RESULTOFQUESTION_H
