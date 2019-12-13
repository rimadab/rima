#include "informations.h"

class informationsData : public QSharedData
{
public:


};

informations::informations() : data(new informationsData)
{

}

informations::informations(const informations &rhs) : data(rhs.data)
{

}

informations &informations::operator=(const informations &rhs)
{
    if (this != &rhs)
        data.operator=(rhs.data);
    return *this;
}

informations::~informations()
{

}

