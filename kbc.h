#ifndef KBC_H
#define KBC_H
#include <resultofquestion.h>
#include <QMainWindow>
#include "code/filehandle.h"
namespace Ui
{
class kbc;
}
using namespace std;
/*variables for random getquestion*/
question getquestion();

/*---------------------------------*/
QString convertqidtoamount(int qid);

class kbc : public QMainWindow
{
    Q_OBJECT
    
public:

    void updatescore();
    void evaluatechoice(int);
    void uidefaulter();
    explicit kbc(QWidget *parent = 0);

    ~kbc();
    
private slots:
    void on_Exit_clicked();

    void on_ll_fiftyfifty_clicked();

    void on_quitthegame_clicked();

    void on_ll_audiencepoll_clicked();

    void on_gamebeginbutton_clicked();

    void on_option1_clicked();

    void on_option2_clicked();

    void on_option3_clicked();

    void on_option4_clicked();

    void on_ll_flip_question_clicked();

    void on_pushButton_clicked();

private:
    resultofquestion rqwindow;

    Ui::kbc *ui;
    int questioncount;
    void gameover();

};
#endif // KBC_H
