
#include "mylibA.h"
#include "mylibC.h"

using namespace mylibC;
using namespace mylibA;

class ClassAImp: public ClassA
{
  private:
    ClassC *w;
  public:
    ClassAImp()
    {
      w=new ClassC();
    }
    virtual void Do() { w->Do(); }
    virtual ~ClassAImp() { delete w; }
};

ClassA* ClassA::create()
{
      return new ClassAImp();
}

