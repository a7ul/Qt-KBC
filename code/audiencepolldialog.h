#ifndef AUDIENCEPOLLDIALOG_H
#define AUDIENCEPOLLDIALOG_H

#include <QDialog>

namespace Ui {
class audiencepolldialog;
}

class audiencepolldialog : public QDialog
{
    Q_OBJECT
    
public:
    void setvalues();
    void randomhistogramvalues(int correctoption);
    explicit audiencepolldialog(QWidget *parent = 0, int answer=1);
    ~audiencepolldialog();
    void paintEvent(QPaintEvent *event);
    void drawhistograms(QPainter *qp);
    
private:

    int option[4];
    Ui::audiencepolldialog *ui;
};

#endif // AUDIENCEPOLLDIALOG_H
