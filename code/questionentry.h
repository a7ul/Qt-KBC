#ifndef QUESTIONENTRY_H
#define QUESTIONENTRY_H
#include "filehandle.h"
#include "question.h"
#include <QDialog>

namespace Ui {
class questionentry;
}

class questionentry : public QDialog
{
    Q_OBJECT
    
public:
    explicit questionentry(QWidget *parent = 0);
    ~questionentry();
    question q;
    filehandle f;
    void writetodatafile();
private slots:



    void on_buttonBox_accepted();

private:
    Ui::questionentry *ui;
};

#endif // QUESTIONENTRY_H
