# C++ language project subset reference

- Everything should be const, constexpr or consteval if possible
- Every passed value should be const reference (pass-by-value only if necessary)
- Every initialization should use { initializer } 
- copy-initialization only if necessary
- () is reserved for function (or callable objects) calls and arithmetic operation
- Every constructor have to be explicit
- Every user defined conversion have to be explicit
- _using namespace_ is forbidden (only _using_ for single targets)
