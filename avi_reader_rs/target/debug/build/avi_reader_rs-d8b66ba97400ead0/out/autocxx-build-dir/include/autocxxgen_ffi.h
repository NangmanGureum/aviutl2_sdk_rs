// Generated using autocxx - do not edit directly.
// @generated.


#ifndef __AUTOCXXGEN_H__
#define __AUTOCXXGEN_H__

#include <memory>
#include <string>
#include "cxx.h"
#include <stddef.h>
#ifndef AUTOCXX_NEW_AND_DELETE_PRELUDE
#define AUTOCXX_NEW_AND_DELETE_PRELUDE
// Mechanics to call custom operator new and delete
template <typename T>
auto delete_imp(T *ptr, int) -> decltype((void)T::operator delete(ptr)) {
  T::operator delete(ptr);
}
template <typename T> void delete_imp(T *ptr, long) { ::operator delete(ptr); }
template <typename T> void delete_appropriately(T *obj) {
  // 0 is a better match for the first 'delete_imp' so will match
  // preferentially.
  delete_imp(obj, 0);
}
template <typename T>
auto new_imp(size_t count, int) -> decltype(T::operator new(count)) {
  return T::operator new(count);
}
template <typename T> void *new_imp(size_t count, long) {
  return ::operator new(count);
}
template <typename T> T *new_appropriately() {
  // 0 is a better match for the first 'delete_imp' so will match
  // preferentially.
  return static_cast<T *>(new_imp<T>(sizeof(T), 0));
}
#endif // AUTOCXX_NEW_AND_DELETE_PRELUDE
#include "windows.h"
#include "input2.h"

typedef void c_void;

inline std::unique_ptr<std::string> autocxx_make_string_0x41de0a58dea699b5(::rust::Str str) { return std::make_unique<std::string>(std::string(str)); }
inline INPUT_INFO* INPUT_INFO_autocxx_alloc_autocxx_wrapper_0x41de0a58dea699b5()  { return new_appropriately<INPUT_INFO>();; }
inline void INPUT_INFO_autocxx_free_autocxx_wrapper_0x41de0a58dea699b5(INPUT_INFO* arg0)  { delete_appropriately<INPUT_INFO>(arg0);; }
inline INPUT_PLUGIN_TABLE* INPUT_PLUGIN_TABLE_autocxx_alloc_autocxx_wrapper_0x41de0a58dea699b5()  { return new_appropriately<INPUT_PLUGIN_TABLE>();; }
inline void INPUT_PLUGIN_TABLE_autocxx_free_autocxx_wrapper_0x41de0a58dea699b5(INPUT_PLUGIN_TABLE* arg0)  { delete_appropriately<INPUT_PLUGIN_TABLE>(arg0);; }
inline void INPUT_INFO_new_synthetic_move_ctor_0x41de0a58dea699b5_autocxx_wrapper_0x41de0a58dea699b5(INPUT_INFO* autocxx_gen_this, INPUT_INFO* arg1)  { new (autocxx_gen_this) INPUT_INFO(std::move(*arg1)); }
inline void INPUT_INFO_new_synthetic_const_copy_ctor_0x41de0a58dea699b5_autocxx_wrapper_0x41de0a58dea699b5(INPUT_INFO* autocxx_gen_this, const INPUT_INFO& arg1)  { new (autocxx_gen_this) INPUT_INFO(arg1); }
inline void INPUT_INFO_synthetic_destructor_0x41de0a58dea699b5_autocxx_wrapper_0x41de0a58dea699b5(INPUT_INFO* arg0)  { arg0->INPUT_INFO::~INPUT_INFO(); }
inline void INPUT_PLUGIN_TABLE_new_synthetic_move_ctor_0x41de0a58dea699b5_autocxx_wrapper_0x41de0a58dea699b5(INPUT_PLUGIN_TABLE* autocxx_gen_this, INPUT_PLUGIN_TABLE* arg1)  { new (autocxx_gen_this) INPUT_PLUGIN_TABLE(std::move(*arg1)); }
inline void INPUT_PLUGIN_TABLE_new_synthetic_const_copy_ctor_0x41de0a58dea699b5_autocxx_wrapper_0x41de0a58dea699b5(INPUT_PLUGIN_TABLE* autocxx_gen_this, const INPUT_PLUGIN_TABLE& arg1)  { new (autocxx_gen_this) INPUT_PLUGIN_TABLE(arg1); }
inline void INPUT_PLUGIN_TABLE_synthetic_destructor_0x41de0a58dea699b5_autocxx_wrapper_0x41de0a58dea699b5(INPUT_PLUGIN_TABLE* arg0)  { arg0->INPUT_PLUGIN_TABLE::~INPUT_PLUGIN_TABLE(); }
#endif // __AUTOCXXGEN_H__
