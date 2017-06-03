#include <pluginlib_arrayutil/arrayutil_base.h>

namespace arrayutil_plugins 
{
  class Max : public arrayutil_base::ArrayUtil
  {
    public:
      Max();
      void loadArray();
      double operate();
  };
}
