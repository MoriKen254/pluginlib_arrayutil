#include <pluginlib_arrayutil/arrayutil_base.h>

namespace arrayutil_plugins 
{
  class Sum : public arrayutil_base::ArrayUtil
  {
    public:
      Sum();
      double operate();
  };
}
