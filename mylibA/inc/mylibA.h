#pragma once

namespace mylibA
{

  class ClassA
  {
    public:
      static ClassA *create();
      virtual void Do()=0;
      virtual ~ClassA() {};
  };

};
