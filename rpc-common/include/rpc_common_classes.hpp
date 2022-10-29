#include <memory>

#define POINTER_DECLARED(BASE)          \
class BASE;                             \
using BASE##Ptr = std::shared_ptr<BASE>;