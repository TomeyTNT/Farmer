#ifndef UNTITLED27_AGRICULTURETOOLS_H
#define UNTITLED27_AGRICULTURETOOLS_H


class AgricultureTools {

    char *tools;
     char *bazr ;

public:
    char *getTools() const;

    void setTools(char *tools);

    char *getBazr() const;

    void setBazr(char *bazr);

    AgricultureTools(char *tools, char *bazr);
};


#endif //UNTITLED27_AGRICULTURETOOLS_H
