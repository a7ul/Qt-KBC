#ifndef FILEHANDLE_H
#define FILEHANDLE_H
#include <fstream>
#include<code/question.h>
class filehandle
{
public:
    std::ifstream fin;
    std::ofstream fout;
    filehandle();
    void writetofile(question qobj);
    question readfromfile(int pos);
    QString getinfooffile();
};

#endif // FILEHANDLE_H
