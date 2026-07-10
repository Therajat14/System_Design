#ifndef MONGO_DB_H
#define MONGO_DB_H

#include "storage.h"

class mongo_db : public storage
{

public:
    void save(ShoppingCart *cart) override;
};

#endif