#ifndef SQL_DB_H
#define SQL_DB_H

#include "storage.h"

class sql_db : public storage
{

public:
    void save(ShoppingCart *cart) override;
};

#endif