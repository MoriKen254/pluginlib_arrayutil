#include <pluginlib_arrayutil/arrayutil_base.h>

namespace arrayutil_plugins 
{
  class Min : public arrayutil_base::ArrayUtil
  {
    public:
      Min();
      void loadArray();
      double operate();
  };
}
