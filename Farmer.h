#ifndef UNTITLED27_FARMER_H
#define UNTITLED27_FARMER_H
#include "AgricultureTools.h"

class Farmer {
    char *name ;
    char *lastName ;
    int age ;
    AgricultureTools agricultureTools;
public:
    const char *getName() const;

    const char *getLastName() const;

    Farmer(char *name, char *lastName, int age, const AgricultureTools &agricultureTools);

    int getAge() const;

    void setAge(int age);

    const AgricultureTools &getAgricultureTools() const;

    void setAgricultureTools(const AgricultureTools &agricultureTools);
};


#endif //UNTITLED27_FARMER_H
