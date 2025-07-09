#include "windows.h"
#include "input2.h"
#include "autocxxgen_ffi.h"
#include <array>
#include <cstddef>
#include <cstdint>
#include <memory>
#include <new>
#include <string>
#include <type_traits>
#include <utility>
#include <vector>
#if __cplusplus >= 201703L
#include <string_view>
#endif

namespace rust {
inline namespace cxxbridge1 {
// #include "rust/cxx.h"

namespace {
template <typename T>
class impl;
} // namespace

class String;

#ifndef CXXBRIDGE1_RUST_STR
#define CXXBRIDGE1_RUST_STR
class Str final {
public:
  Str() noexcept;
  Str(const String &) noexcept;
  Str(const std::string &);
  Str(const char *);
  Str(const char *, std::size_t);

  Str &operator=(const Str &) & noexcept = default;

  explicit operator std::string() const;
#if __cplusplus >= 201703L
  explicit operator std::string_view() const;
#endif

  const char *data() const noexcept;
  std::size_t size() const noexcept;
  std::size_t length() const noexcept;
  bool empty() const noexcept;

  Str(const Str &) noexcept = default;
  ~Str() noexcept = default;

  using iterator = const char *;
  using const_iterator = const char *;
  const_iterator begin() const noexcept;
  const_iterator end() const noexcept;
  const_iterator cbegin() const noexcept;
  const_iterator cend() const noexcept;

  bool operator==(const Str &) const noexcept;
  bool operator!=(const Str &) const noexcept;
  bool operator<(const Str &) const noexcept;
  bool operator<=(const Str &) const noexcept;
  bool operator>(const Str &) const noexcept;
  bool operator>=(const Str &) const noexcept;

  void swap(Str &) noexcept;

private:
  class uninit;
  Str(uninit) noexcept;
  friend impl<Str>;

  std::array<std::uintptr_t, 2> repr;
};
#endif // CXXBRIDGE1_RUST_STR

#ifndef CXXBRIDGE1_IS_COMPLETE
#define CXXBRIDGE1_IS_COMPLETE
namespace detail {
namespace {
template <typename T, typename = std::size_t>
struct is_complete : std::false_type {};
template <typename T>
struct is_complete<T, decltype(sizeof(T))> : std::true_type {};
} // namespace
} // namespace detail
#endif // CXXBRIDGE1_IS_COMPLETE

namespace detail {
template <typename T, typename = void *>
struct operator_new {
  void *operator()(::std::size_t sz) { return ::operator new(sz); }
};

template <typename T>
struct operator_new<T, decltype(T::operator new(sizeof(T)))> {
  void *operator()(::std::size_t sz) { return T::operator new(sz); }
};
} // namespace detail

template <typename T>
union MaybeUninit {
  T value;
  void *operator new(::std::size_t sz) { return detail::operator_new<T>{}(sz); }
  MaybeUninit() {}
  ~MaybeUninit() {}
};

namespace {
template <typename T>
void destroy(T *ptr) {
  ptr->~T();
}

template <bool> struct deleter_if {
  template <typename T> void operator()(T *) {}
};

template <> struct deleter_if<true> {
  template <typename T> void operator()(T *ptr) { ptr->~T(); }
};
} // namespace
} // namespace cxxbridge1
} // namespace rust

extern "C" {
::std::string *cxxbridge1$autocxx_make_string_0xbb8831896a18b3ba(::rust::Str str_) noexcept {
  ::std::unique_ptr<::std::string> (*autocxx_make_string_0xbb8831896a18b3ba$)(::rust::Str) = ::autocxx_make_string_0xbb8831896a18b3ba;
  return autocxx_make_string_0xbb8831896a18b3ba$(str_).release();
}

::INPUT_INFO *cxxbridge1$INPUT_INFO_autocxx_alloc_autocxx_wrapper_0xbb8831896a18b3ba() noexcept {
  ::INPUT_INFO *(*INPUT_INFO_autocxx_alloc_autocxx_wrapper_0xbb8831896a18b3ba$)() = ::INPUT_INFO_autocxx_alloc_autocxx_wrapper_0xbb8831896a18b3ba;
  return INPUT_INFO_autocxx_alloc_autocxx_wrapper_0xbb8831896a18b3ba$();
}

void cxxbridge1$INPUT_INFO_autocxx_free_autocxx_wrapper_0xbb8831896a18b3ba(::INPUT_INFO *arg0) noexcept {
  void (*INPUT_INFO_autocxx_free_autocxx_wrapper_0xbb8831896a18b3ba$)(::INPUT_INFO *) = ::INPUT_INFO_autocxx_free_autocxx_wrapper_0xbb8831896a18b3ba;
  INPUT_INFO_autocxx_free_autocxx_wrapper_0xbb8831896a18b3ba$(arg0);
}

::INPUT_PLUGIN_TABLE *cxxbridge1$INPUT_PLUGIN_TABLE_autocxx_alloc_autocxx_wrapper_0xbb8831896a18b3ba() noexcept {
  ::INPUT_PLUGIN_TABLE *(*INPUT_PLUGIN_TABLE_autocxx_alloc_autocxx_wrapper_0xbb8831896a18b3ba$)() = ::INPUT_PLUGIN_TABLE_autocxx_alloc_autocxx_wrapper_0xbb8831896a18b3ba;
  return INPUT_PLUGIN_TABLE_autocxx_alloc_autocxx_wrapper_0xbb8831896a18b3ba$();
}

void cxxbridge1$INPUT_PLUGIN_TABLE_autocxx_free_autocxx_wrapper_0xbb8831896a18b3ba(::INPUT_PLUGIN_TABLE *arg0) noexcept {
  void (*INPUT_PLUGIN_TABLE_autocxx_free_autocxx_wrapper_0xbb8831896a18b3ba$)(::INPUT_PLUGIN_TABLE *) = ::INPUT_PLUGIN_TABLE_autocxx_free_autocxx_wrapper_0xbb8831896a18b3ba;
  INPUT_PLUGIN_TABLE_autocxx_free_autocxx_wrapper_0xbb8831896a18b3ba$(arg0);
}

void cxxbridge1$INPUT_INFO_new_autocxx_autocxx_wrapper_0xbb8831896a18b3ba(::INPUT_INFO *autocxx_gen_this) noexcept {
  void (*INPUT_INFO_new_autocxx_autocxx_wrapper_0xbb8831896a18b3ba$)(::INPUT_INFO *) = ::INPUT_INFO_new_autocxx_autocxx_wrapper_0xbb8831896a18b3ba;
  INPUT_INFO_new_autocxx_autocxx_wrapper_0xbb8831896a18b3ba$(autocxx_gen_this);
}

void cxxbridge1$INPUT_INFO_new_synthetic_move_ctor_0xbb8831896a18b3ba_autocxx_wrapper_0xbb8831896a18b3ba(::INPUT_INFO *autocxx_gen_this, ::INPUT_INFO *other) noexcept {
  void (*INPUT_INFO_new_synthetic_move_ctor_0xbb8831896a18b3ba_autocxx_wrapper_0xbb8831896a18b3ba$)(::INPUT_INFO *, ::INPUT_INFO *) = ::INPUT_INFO_new_synthetic_move_ctor_0xbb8831896a18b3ba_autocxx_wrapper_0xbb8831896a18b3ba;
  INPUT_INFO_new_synthetic_move_ctor_0xbb8831896a18b3ba_autocxx_wrapper_0xbb8831896a18b3ba$(autocxx_gen_this, other);
}

void cxxbridge1$INPUT_INFO_new_synthetic_const_copy_ctor_0xbb8831896a18b3ba_autocxx_wrapper_0xbb8831896a18b3ba(::INPUT_INFO *autocxx_gen_this, ::INPUT_INFO const &other) noexcept {
  void (*INPUT_INFO_new_synthetic_const_copy_ctor_0xbb8831896a18b3ba_autocxx_wrapper_0xbb8831896a18b3ba$)(::INPUT_INFO *, ::INPUT_INFO const &) = ::INPUT_INFO_new_synthetic_const_copy_ctor_0xbb8831896a18b3ba_autocxx_wrapper_0xbb8831896a18b3ba;
  INPUT_INFO_new_synthetic_const_copy_ctor_0xbb8831896a18b3ba_autocxx_wrapper_0xbb8831896a18b3ba$(autocxx_gen_this, other);
}

void cxxbridge1$INPUT_INFO_synthetic_destructor_0xbb8831896a18b3ba_autocxx_wrapper_0xbb8831896a18b3ba(::INPUT_INFO *autocxx_gen_this) noexcept {
  void (*INPUT_INFO_synthetic_destructor_0xbb8831896a18b3ba_autocxx_wrapper_0xbb8831896a18b3ba$)(::INPUT_INFO *) = ::INPUT_INFO_synthetic_destructor_0xbb8831896a18b3ba_autocxx_wrapper_0xbb8831896a18b3ba;
  INPUT_INFO_synthetic_destructor_0xbb8831896a18b3ba_autocxx_wrapper_0xbb8831896a18b3ba$(autocxx_gen_this);
}

void cxxbridge1$INPUT_PLUGIN_TABLE_new_synthetic_move_ctor_0xbb8831896a18b3ba_autocxx_wrapper_0xbb8831896a18b3ba(::INPUT_PLUGIN_TABLE *autocxx_gen_this, ::INPUT_PLUGIN_TABLE *other) noexcept {
  void (*INPUT_PLUGIN_TABLE_new_synthetic_move_ctor_0xbb8831896a18b3ba_autocxx_wrapper_0xbb8831896a18b3ba$)(::INPUT_PLUGIN_TABLE *, ::INPUT_PLUGIN_TABLE *) = ::INPUT_PLUGIN_TABLE_new_synthetic_move_ctor_0xbb8831896a18b3ba_autocxx_wrapper_0xbb8831896a18b3ba;
  INPUT_PLUGIN_TABLE_new_synthetic_move_ctor_0xbb8831896a18b3ba_autocxx_wrapper_0xbb8831896a18b3ba$(autocxx_gen_this, other);
}

void cxxbridge1$INPUT_PLUGIN_TABLE_new_synthetic_const_copy_ctor_0xbb8831896a18b3ba_autocxx_wrapper_0xbb8831896a18b3ba(::INPUT_PLUGIN_TABLE *autocxx_gen_this, ::INPUT_PLUGIN_TABLE const &other) noexcept {
  void (*INPUT_PLUGIN_TABLE_new_synthetic_const_copy_ctor_0xbb8831896a18b3ba_autocxx_wrapper_0xbb8831896a18b3ba$)(::INPUT_PLUGIN_TABLE *, ::INPUT_PLUGIN_TABLE const &) = ::INPUT_PLUGIN_TABLE_new_synthetic_const_copy_ctor_0xbb8831896a18b3ba_autocxx_wrapper_0xbb8831896a18b3ba;
  INPUT_PLUGIN_TABLE_new_synthetic_const_copy_ctor_0xbb8831896a18b3ba_autocxx_wrapper_0xbb8831896a18b3ba$(autocxx_gen_this, other);
}

void cxxbridge1$INPUT_PLUGIN_TABLE_synthetic_destructor_0xbb8831896a18b3ba_autocxx_wrapper_0xbb8831896a18b3ba(::INPUT_PLUGIN_TABLE *autocxx_gen_this) noexcept {
  void (*INPUT_PLUGIN_TABLE_synthetic_destructor_0xbb8831896a18b3ba_autocxx_wrapper_0xbb8831896a18b3ba$)(::INPUT_PLUGIN_TABLE *) = ::INPUT_PLUGIN_TABLE_synthetic_destructor_0xbb8831896a18b3ba_autocxx_wrapper_0xbb8831896a18b3ba;
  INPUT_PLUGIN_TABLE_synthetic_destructor_0xbb8831896a18b3ba_autocxx_wrapper_0xbb8831896a18b3ba$(autocxx_gen_this);
}

static_assert(::rust::detail::is_complete<::INPUT_INFO>::value, "definition of INPUT_INFO is required");
static_assert(sizeof(::std::unique_ptr<::INPUT_INFO>) == sizeof(void *), "");
static_assert(alignof(::std::unique_ptr<::INPUT_INFO>) == alignof(void *), "");
void cxxbridge1$unique_ptr$INPUT_INFO$null(::std::unique_ptr<::INPUT_INFO> *ptr) noexcept {
  ::new (ptr) ::std::unique_ptr<::INPUT_INFO>();
}
::INPUT_INFO *cxxbridge1$unique_ptr$INPUT_INFO$uninit(::std::unique_ptr<::INPUT_INFO> *ptr) noexcept {
  ::INPUT_INFO *uninit = reinterpret_cast<::INPUT_INFO *>(new ::rust::MaybeUninit<::INPUT_INFO>);
  ::new (ptr) ::std::unique_ptr<::INPUT_INFO>(uninit);
  return uninit;
}
void cxxbridge1$unique_ptr$INPUT_INFO$raw(::std::unique_ptr<::INPUT_INFO> *ptr, ::INPUT_INFO *raw) noexcept {
  ::new (ptr) ::std::unique_ptr<::INPUT_INFO>(raw);
}
::INPUT_INFO const *cxxbridge1$unique_ptr$INPUT_INFO$get(::std::unique_ptr<::INPUT_INFO> const &ptr) noexcept {
  return ptr.get();
}
::INPUT_INFO *cxxbridge1$unique_ptr$INPUT_INFO$release(::std::unique_ptr<::INPUT_INFO> &ptr) noexcept {
  return ptr.release();
}
void cxxbridge1$unique_ptr$INPUT_INFO$drop(::std::unique_ptr<::INPUT_INFO> *ptr) noexcept {
  ::rust::deleter_if<::rust::detail::is_complete<::INPUT_INFO>::value>{}(ptr);
}

static_assert(sizeof(::std::shared_ptr<::INPUT_INFO>) == 2 * sizeof(void *), "");
static_assert(alignof(::std::shared_ptr<::INPUT_INFO>) == alignof(void *), "");
void cxxbridge1$shared_ptr$INPUT_INFO$null(::std::shared_ptr<::INPUT_INFO> *ptr) noexcept {
  ::new (ptr) ::std::shared_ptr<::INPUT_INFO>();
}
::INPUT_INFO *cxxbridge1$shared_ptr$INPUT_INFO$uninit(::std::shared_ptr<::INPUT_INFO> *ptr) noexcept {
  ::INPUT_INFO *uninit = reinterpret_cast<::INPUT_INFO *>(new ::rust::MaybeUninit<::INPUT_INFO>);
  ::new (ptr) ::std::shared_ptr<::INPUT_INFO>(uninit);
  return uninit;
}
void cxxbridge1$shared_ptr$INPUT_INFO$clone(::std::shared_ptr<::INPUT_INFO> const &self, ::std::shared_ptr<::INPUT_INFO> *ptr) noexcept {
  ::new (ptr) ::std::shared_ptr<::INPUT_INFO>(self);
}
::INPUT_INFO const *cxxbridge1$shared_ptr$INPUT_INFO$get(::std::shared_ptr<::INPUT_INFO> const &self) noexcept {
  return self.get();
}
void cxxbridge1$shared_ptr$INPUT_INFO$drop(::std::shared_ptr<::INPUT_INFO> *self) noexcept {
  self->~shared_ptr();
}

static_assert(sizeof(::std::weak_ptr<::INPUT_INFO>) == 2 * sizeof(void *), "");
static_assert(alignof(::std::weak_ptr<::INPUT_INFO>) == alignof(void *), "");
void cxxbridge1$weak_ptr$INPUT_INFO$null(::std::weak_ptr<::INPUT_INFO> *ptr) noexcept {
  ::new (ptr) ::std::weak_ptr<::INPUT_INFO>();
}
void cxxbridge1$weak_ptr$INPUT_INFO$clone(::std::weak_ptr<::INPUT_INFO> const &self, ::std::weak_ptr<::INPUT_INFO> *ptr) noexcept {
  ::new (ptr) ::std::weak_ptr<::INPUT_INFO>(self);
}
void cxxbridge1$weak_ptr$INPUT_INFO$downgrade(::std::shared_ptr<::INPUT_INFO> const &shared, ::std::weak_ptr<::INPUT_INFO> *weak) noexcept {
  ::new (weak) ::std::weak_ptr<::INPUT_INFO>(shared);
}
void cxxbridge1$weak_ptr$INPUT_INFO$upgrade(::std::weak_ptr<::INPUT_INFO> const &weak, ::std::shared_ptr<::INPUT_INFO> *shared) noexcept {
  ::new (shared) ::std::shared_ptr<::INPUT_INFO>(weak.lock());
}
void cxxbridge1$weak_ptr$INPUT_INFO$drop(::std::weak_ptr<::INPUT_INFO> *self) noexcept {
  self->~weak_ptr();
}

::std::vector<::INPUT_INFO> *cxxbridge1$std$vector$INPUT_INFO$new() noexcept {
  return new ::std::vector<::INPUT_INFO>();
}
::std::size_t cxxbridge1$std$vector$INPUT_INFO$size(::std::vector<::INPUT_INFO> const &s) noexcept {
  return s.size();
}
::INPUT_INFO *cxxbridge1$std$vector$INPUT_INFO$get_unchecked(::std::vector<::INPUT_INFO> *s, ::std::size_t pos) noexcept {
  return &(*s)[pos];
}
void cxxbridge1$std$vector$INPUT_INFO$push_back(::std::vector<::INPUT_INFO> *v, ::INPUT_INFO *value) noexcept {
  v->push_back(::std::move(*value));
  ::rust::destroy(value);
}
void cxxbridge1$std$vector$INPUT_INFO$pop_back(::std::vector<::INPUT_INFO> *v, ::INPUT_INFO *out) noexcept {
  ::new (out) ::INPUT_INFO(::std::move(v->back()));
  v->pop_back();
}
static_assert(sizeof(::std::unique_ptr<::std::vector<::INPUT_INFO>>) == sizeof(void *), "");
static_assert(alignof(::std::unique_ptr<::std::vector<::INPUT_INFO>>) == alignof(void *), "");
void cxxbridge1$unique_ptr$std$vector$INPUT_INFO$null(::std::unique_ptr<::std::vector<::INPUT_INFO>> *ptr) noexcept {
  ::new (ptr) ::std::unique_ptr<::std::vector<::INPUT_INFO>>();
}
void cxxbridge1$unique_ptr$std$vector$INPUT_INFO$raw(::std::unique_ptr<::std::vector<::INPUT_INFO>> *ptr, ::std::vector<::INPUT_INFO> *raw) noexcept {
  ::new (ptr) ::std::unique_ptr<::std::vector<::INPUT_INFO>>(raw);
}
::std::vector<::INPUT_INFO> const *cxxbridge1$unique_ptr$std$vector$INPUT_INFO$get(::std::unique_ptr<::std::vector<::INPUT_INFO>> const &ptr) noexcept {
  return ptr.get();
}
::std::vector<::INPUT_INFO> *cxxbridge1$unique_ptr$std$vector$INPUT_INFO$release(::std::unique_ptr<::std::vector<::INPUT_INFO>> &ptr) noexcept {
  return ptr.release();
}
void cxxbridge1$unique_ptr$std$vector$INPUT_INFO$drop(::std::unique_ptr<::std::vector<::INPUT_INFO>> *ptr) noexcept {
  ptr->~unique_ptr();
}

static_assert(::rust::detail::is_complete<::INPUT_PLUGIN_TABLE>::value, "definition of INPUT_PLUGIN_TABLE is required");
static_assert(sizeof(::std::unique_ptr<::INPUT_PLUGIN_TABLE>) == sizeof(void *), "");
static_assert(alignof(::std::unique_ptr<::INPUT_PLUGIN_TABLE>) == alignof(void *), "");
void cxxbridge1$unique_ptr$INPUT_PLUGIN_TABLE$null(::std::unique_ptr<::INPUT_PLUGIN_TABLE> *ptr) noexcept {
  ::new (ptr) ::std::unique_ptr<::INPUT_PLUGIN_TABLE>();
}
::INPUT_PLUGIN_TABLE *cxxbridge1$unique_ptr$INPUT_PLUGIN_TABLE$uninit(::std::unique_ptr<::INPUT_PLUGIN_TABLE> *ptr) noexcept {
  ::INPUT_PLUGIN_TABLE *uninit = reinterpret_cast<::INPUT_PLUGIN_TABLE *>(new ::rust::MaybeUninit<::INPUT_PLUGIN_TABLE>);
  ::new (ptr) ::std::unique_ptr<::INPUT_PLUGIN_TABLE>(uninit);
  return uninit;
}
void cxxbridge1$unique_ptr$INPUT_PLUGIN_TABLE$raw(::std::unique_ptr<::INPUT_PLUGIN_TABLE> *ptr, ::INPUT_PLUGIN_TABLE *raw) noexcept {
  ::new (ptr) ::std::unique_ptr<::INPUT_PLUGIN_TABLE>(raw);
}
::INPUT_PLUGIN_TABLE const *cxxbridge1$unique_ptr$INPUT_PLUGIN_TABLE$get(::std::unique_ptr<::INPUT_PLUGIN_TABLE> const &ptr) noexcept {
  return ptr.get();
}
::INPUT_PLUGIN_TABLE *cxxbridge1$unique_ptr$INPUT_PLUGIN_TABLE$release(::std::unique_ptr<::INPUT_PLUGIN_TABLE> &ptr) noexcept {
  return ptr.release();
}
void cxxbridge1$unique_ptr$INPUT_PLUGIN_TABLE$drop(::std::unique_ptr<::INPUT_PLUGIN_TABLE> *ptr) noexcept {
  ::rust::deleter_if<::rust::detail::is_complete<::INPUT_PLUGIN_TABLE>::value>{}(ptr);
}

static_assert(sizeof(::std::shared_ptr<::INPUT_PLUGIN_TABLE>) == 2 * sizeof(void *), "");
static_assert(alignof(::std::shared_ptr<::INPUT_PLUGIN_TABLE>) == alignof(void *), "");
void cxxbridge1$shared_ptr$INPUT_PLUGIN_TABLE$null(::std::shared_ptr<::INPUT_PLUGIN_TABLE> *ptr) noexcept {
  ::new (ptr) ::std::shared_ptr<::INPUT_PLUGIN_TABLE>();
}
::INPUT_PLUGIN_TABLE *cxxbridge1$shared_ptr$INPUT_PLUGIN_TABLE$uninit(::std::shared_ptr<::INPUT_PLUGIN_TABLE> *ptr) noexcept {
  ::INPUT_PLUGIN_TABLE *uninit = reinterpret_cast<::INPUT_PLUGIN_TABLE *>(new ::rust::MaybeUninit<::INPUT_PLUGIN_TABLE>);
  ::new (ptr) ::std::shared_ptr<::INPUT_PLUGIN_TABLE>(uninit);
  return uninit;
}
void cxxbridge1$shared_ptr$INPUT_PLUGIN_TABLE$clone(::std::shared_ptr<::INPUT_PLUGIN_TABLE> const &self, ::std::shared_ptr<::INPUT_PLUGIN_TABLE> *ptr) noexcept {
  ::new (ptr) ::std::shared_ptr<::INPUT_PLUGIN_TABLE>(self);
}
::INPUT_PLUGIN_TABLE const *cxxbridge1$shared_ptr$INPUT_PLUGIN_TABLE$get(::std::shared_ptr<::INPUT_PLUGIN_TABLE> const &self) noexcept {
  return self.get();
}
void cxxbridge1$shared_ptr$INPUT_PLUGIN_TABLE$drop(::std::shared_ptr<::INPUT_PLUGIN_TABLE> *self) noexcept {
  self->~shared_ptr();
}

static_assert(sizeof(::std::weak_ptr<::INPUT_PLUGIN_TABLE>) == 2 * sizeof(void *), "");
static_assert(alignof(::std::weak_ptr<::INPUT_PLUGIN_TABLE>) == alignof(void *), "");
void cxxbridge1$weak_ptr$INPUT_PLUGIN_TABLE$null(::std::weak_ptr<::INPUT_PLUGIN_TABLE> *ptr) noexcept {
  ::new (ptr) ::std::weak_ptr<::INPUT_PLUGIN_TABLE>();
}
void cxxbridge1$weak_ptr$INPUT_PLUGIN_TABLE$clone(::std::weak_ptr<::INPUT_PLUGIN_TABLE> const &self, ::std::weak_ptr<::INPUT_PLUGIN_TABLE> *ptr) noexcept {
  ::new (ptr) ::std::weak_ptr<::INPUT_PLUGIN_TABLE>(self);
}
void cxxbridge1$weak_ptr$INPUT_PLUGIN_TABLE$downgrade(::std::shared_ptr<::INPUT_PLUGIN_TABLE> const &shared, ::std::weak_ptr<::INPUT_PLUGIN_TABLE> *weak) noexcept {
  ::new (weak) ::std::weak_ptr<::INPUT_PLUGIN_TABLE>(shared);
}
void cxxbridge1$weak_ptr$INPUT_PLUGIN_TABLE$upgrade(::std::weak_ptr<::INPUT_PLUGIN_TABLE> const &weak, ::std::shared_ptr<::INPUT_PLUGIN_TABLE> *shared) noexcept {
  ::new (shared) ::std::shared_ptr<::INPUT_PLUGIN_TABLE>(weak.lock());
}
void cxxbridge1$weak_ptr$INPUT_PLUGIN_TABLE$drop(::std::weak_ptr<::INPUT_PLUGIN_TABLE> *self) noexcept {
  self->~weak_ptr();
}

::std::vector<::INPUT_PLUGIN_TABLE> *cxxbridge1$std$vector$INPUT_PLUGIN_TABLE$new() noexcept {
  return new ::std::vector<::INPUT_PLUGIN_TABLE>();
}
::std::size_t cxxbridge1$std$vector$INPUT_PLUGIN_TABLE$size(::std::vector<::INPUT_PLUGIN_TABLE> const &s) noexcept {
  return s.size();
}
::INPUT_PLUGIN_TABLE *cxxbridge1$std$vector$INPUT_PLUGIN_TABLE$get_unchecked(::std::vector<::INPUT_PLUGIN_TABLE> *s, ::std::size_t pos) noexcept {
  return &(*s)[pos];
}
void cxxbridge1$std$vector$INPUT_PLUGIN_TABLE$push_back(::std::vector<::INPUT_PLUGIN_TABLE> *v, ::INPUT_PLUGIN_TABLE *value) noexcept {
  v->push_back(::std::move(*value));
  ::rust::destroy(value);
}
void cxxbridge1$std$vector$INPUT_PLUGIN_TABLE$pop_back(::std::vector<::INPUT_PLUGIN_TABLE> *v, ::INPUT_PLUGIN_TABLE *out) noexcept {
  ::new (out) ::INPUT_PLUGIN_TABLE(::std::move(v->back()));
  v->pop_back();
}
static_assert(sizeof(::std::unique_ptr<::std::vector<::INPUT_PLUGIN_TABLE>>) == sizeof(void *), "");
static_assert(alignof(::std::unique_ptr<::std::vector<::INPUT_PLUGIN_TABLE>>) == alignof(void *), "");
void cxxbridge1$unique_ptr$std$vector$INPUT_PLUGIN_TABLE$null(::std::unique_ptr<::std::vector<::INPUT_PLUGIN_TABLE>> *ptr) noexcept {
  ::new (ptr) ::std::unique_ptr<::std::vector<::INPUT_PLUGIN_TABLE>>();
}
void cxxbridge1$unique_ptr$std$vector$INPUT_PLUGIN_TABLE$raw(::std::unique_ptr<::std::vector<::INPUT_PLUGIN_TABLE>> *ptr, ::std::vector<::INPUT_PLUGIN_TABLE> *raw) noexcept {
  ::new (ptr) ::std::unique_ptr<::std::vector<::INPUT_PLUGIN_TABLE>>(raw);
}
::std::vector<::INPUT_PLUGIN_TABLE> const *cxxbridge1$unique_ptr$std$vector$INPUT_PLUGIN_TABLE$get(::std::unique_ptr<::std::vector<::INPUT_PLUGIN_TABLE>> const &ptr) noexcept {
  return ptr.get();
}
::std::vector<::INPUT_PLUGIN_TABLE> *cxxbridge1$unique_ptr$std$vector$INPUT_PLUGIN_TABLE$release(::std::unique_ptr<::std::vector<::INPUT_PLUGIN_TABLE>> &ptr) noexcept {
  return ptr.release();
}
void cxxbridge1$unique_ptr$std$vector$INPUT_PLUGIN_TABLE$drop(::std::unique_ptr<::std::vector<::INPUT_PLUGIN_TABLE>> *ptr) noexcept {
  ptr->~unique_ptr();
}
} // extern "C"
