#ifndef _QUANDL_H
#define _QUANDL_H

#define QUANDL_AUTH_TOKEN "DBmTp5HxGehBkpSJAnwV"
#define QUANDL_URL "https://www.quandl.com/api/v1/datasets/WIKI/{TKR}.json?auth_token="

char *build_url(char const* ticker);

#endif