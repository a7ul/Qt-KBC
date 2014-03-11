#ifndef QUESTION_H
#define QUESTION_H
#include <QString>
class question
{public:
    char questions[150];
    char answer1[40];
    char answer2[40];
    char answer3[40];
    char answer4[40];
    int rightanswer;
public:
    question();
    int getanswer();
    question *getdatafromuser();

};

#endif // QUESTION_H
