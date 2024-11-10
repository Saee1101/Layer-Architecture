#ifndef BUSINESSLOGIC_H
#define BUSINESSLOGIC_H
#include "BusinessLogic_global.h"
#include "../Entities/Repository.h"
#include "../Entities/Entities.h"
#include "../Entities/setting_db.h"


class BUSINESSLOGIC_EXPORT BusinessLogic
{

public:

    BusinessLogic();

    Repository<setting_db>* dbtools;

private:



};
#endif // BUSINESSLOGIC_H
