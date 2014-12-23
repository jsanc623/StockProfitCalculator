#include <iostream>
#include <string.h>
#include <fstream>
#include "quandl.h"

char *build_url(char const* ticker){
    size_t urlsz = sizeof(QUANDL_URL) + sizeof(QUANDL_AUTH_TOKEN);

    char* url = new char[urlsz];
    strcat(url, QUANDL_URL);
    strcat(url, QUANDL_AUTH_TOKEN);

    return url;
}