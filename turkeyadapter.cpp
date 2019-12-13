#include "turkeyadapter.h"

TurkeyAdapter::TurkeyAdapter(Turkey *turkey)
{
    this->turkey = turkey;
}


void TurkeyAdapter::quack()
{
    turkey->gobble();
}

void TurkeyAdapter::fly()
{
    turkey->go();
}
