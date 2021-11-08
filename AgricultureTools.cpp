#include "AgricultureTools.h"


AgricultureTools::AgricultureTools(char *tools,char *bazr) : tools(tools), bazr(bazr) {}

char *AgricultureTools::getTools() const {
    return tools;
}

void AgricultureTools::setTools(char *tools) {
    AgricultureTools::tools = tools;
}

char *AgricultureTools::getBazr() const {
    return bazr;
}

void AgricultureTools::setBazr(char *bazr) {
    AgricultureTools::bazr = bazr;
}


