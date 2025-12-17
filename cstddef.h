#ifndef MY_STL_CSTDDEF_H
#define MY_STL_CSTDDEF_H

namespace mystd {

using size_t = __SIZE_TYPE__;
using ptrdiff_t = __PTRDIFF_TYPE__;
using nullptr_t = decltype(nullptr);

enum class byte : unsigned char {};

template <class Int>
constexpr Int to_integer(byte b) noexcept {
    // Ensure Int is an integral type at compile time
    static_assert(__is_integral(Int), "to_integer<Int>: Int must be an integral type");
    return static_cast<Int>(b);
}

using max_align_t = long double;

} // namespace mystd

#define my_offsetof(type, member) __builtin_offsetof(type, member)

#endif
