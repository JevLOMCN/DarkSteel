// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 60

// bad_alloc @ 14f8fe510

/* public: __cdecl std::bad_alloc::bad_alloc(void) __ptr64 */

bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  *(char **)&this->field_0x8 = "bad allocation";
  *(undefined ***)this = vftable;
  return this;
}

// bad_function_call @ 14f8fe540

/* public: __cdecl std::bad_function_call::bad_function_call(class std::bad_function_call const &
   __ptr64) __ptr64 */

bad_function_call * __thiscall
std::bad_function_call::bad_function_call(bad_function_call *this,bad_function_call *param_1)

{
  *(undefined ***)this = exception::vftable;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)(this + 1) = 0;
  __std_exception_copy(&param_1->field_0x8);
  *(undefined ***)this = vftable;
  return this;
}

// bad_function_call @ 14f8fe590

/* public: __cdecl std::bad_function_call::bad_function_call(void) __ptr64 */

bad_function_call * __thiscall std::bad_function_call::bad_function_call(bad_function_call *this)

{
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)(this + 1) = 0;
  *(undefined ***)this = vftable;
  return this;
}

// domain_error @ 14f8fe5b0

/* public: __cdecl std::domain_error::domain_error(class std::domain_error const & __ptr64) __ptr64
    */

domain_error * __thiscall std::domain_error::domain_error(domain_error *this,domain_error *param_1)

{
  *(undefined ***)this = exception::vftable;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)(this + 1) = 0;
  __std_exception_copy(&param_1->field_0x8);
  *(undefined ***)this = vftable;
  return this;
}

// domain_error @ 14f8fe600

/* public: __cdecl std::domain_error::domain_error(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64) __ptr64 */

domain_error * __thiscall
std::domain_error::domain_error
          (domain_error *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_18;
  undefined1 local_10;
  
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  *(undefined ***)this = exception::vftable;
  local_10 = 1;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)(this + 1) = 0;
  local_18 = param_1;
  __std_exception_copy(&local_18);
  *(undefined ***)this = vftable;
  return this;
}

// domain_error @ 14f8fe660

/* public: __cdecl std::domain_error::domain_error(char const * __ptr64) __ptr64 */

domain_error * __thiscall std::domain_error::domain_error(domain_error *this,char *param_1)

{
  char *local_18;
  undefined1 local_10;
  
  local_10 = 1;
  *(undefined ***)this = exception::vftable;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)(this + 1) = 0;
  local_18 = param_1;
  __std_exception_copy(&local_18);
  *(undefined ***)this = vftable;
  return this;
}

// exception @ 14f8fe6b0

/* public: __cdecl std::exception::exception(char const * __ptr64 const) __ptr64 */

exception * __thiscall std::exception::exception(exception *this,char *param_1)

{
  char *local_18;
  undefined1 local_10;
  
  local_10 = 1;
  this->_padding_ = (longlong)vftable;
  (this->_Data)._What = (char *)0x0;
  *(undefined8 *)&(this->_Data)._DoFree = 0;
  local_18 = param_1;
  __std_exception_copy(&local_18);
  return this;
}

// invalid_argument @ 14f8fe700

/* public: __cdecl std::invalid_argument::invalid_argument(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64) __ptr64 */

invalid_argument * __thiscall
std::invalid_argument::invalid_argument
          (invalid_argument *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_18;
  undefined1 local_10;
  
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  *(undefined ***)this = exception::vftable;
  local_10 = 1;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)(this + 1) = 0;
  local_18 = param_1;
  __std_exception_copy(&local_18);
  *(undefined ***)this = vftable;
  return this;
}

// length_error @ 14f8fe760

/* public: __cdecl std::length_error::length_error(class std::length_error const & __ptr64) __ptr64
    */

length_error * __thiscall std::length_error::length_error(length_error *this,length_error *param_1)

{
  *(undefined ***)this = exception::vftable;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)(this + 1) = 0;
  __std_exception_copy(&param_1->field_0x8);
  *(undefined ***)this = vftable;
  return this;
}

// length_error @ 14f8fe7b0

/* public: __cdecl std::length_error::length_error(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64) __ptr64 */

length_error * __thiscall
std::length_error::length_error
          (length_error *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_18;
  undefined1 local_10;
  
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  *(undefined ***)this = exception::vftable;
  local_10 = 1;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)(this + 1) = 0;
  local_18 = param_1;
  __std_exception_copy(&local_18);
  *(undefined ***)this = vftable;
  return this;
}

// length_error @ 14f8fe810

/* public: __cdecl std::length_error::length_error(char const * __ptr64) __ptr64 */

length_error * __thiscall std::length_error::length_error(length_error *this,char *param_1)

{
  char *local_18;
  undefined1 local_10;
  
  local_10 = 1;
  *(undefined ***)this = exception::vftable;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)(this + 1) = 0;
  local_18 = param_1;
  __std_exception_copy(&local_18);
  *(undefined ***)this = vftable;
  return this;
}

// logic_error @ 14f8fe860

/* public: __cdecl std::logic_error::logic_error(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64) __ptr64 */

logic_error * __thiscall
std::logic_error::logic_error
          (logic_error *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_18;
  undefined1 local_10;
  
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  *(undefined ***)this = exception::vftable;
  local_10 = 1;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)(this + 1) = 0;
  local_18 = param_1;
  __std_exception_copy(&local_18);
  *(undefined ***)this = vftable;
  return this;
}

// logic_error @ 14f8fe8c0

/* public: __cdecl std::logic_error::logic_error(char const * __ptr64) __ptr64 */

logic_error * __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
  char *local_18;
  undefined1 local_10;
  
  local_10 = 1;
  *(undefined ***)this = exception::vftable;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)(this + 1) = 0;
  local_18 = param_1;
  __std_exception_copy(&local_18);
  *(undefined ***)this = vftable;
  return this;
}

// out_of_range @ 14f8fe910

/* public: __cdecl std::out_of_range::out_of_range(class std::out_of_range const & __ptr64) __ptr64
    */

out_of_range * __thiscall std::out_of_range::out_of_range(out_of_range *this,out_of_range *param_1)

{
  *(undefined ***)this = exception::vftable;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)(this + 1) = 0;
  __std_exception_copy(&param_1->field_0x8);
  *(undefined ***)this = vftable;
  return this;
}

// out_of_range @ 14f8fe960

/* public: __cdecl std::out_of_range::out_of_range(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64) __ptr64 */

out_of_range * __thiscall
std::out_of_range::out_of_range
          (out_of_range *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_18;
  undefined1 local_10;
  
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  *(undefined ***)this = exception::vftable;
  local_10 = 1;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)(this + 1) = 0;
  local_18 = param_1;
  __std_exception_copy(&local_18);
  *(undefined ***)this = vftable;
  return this;
}

// out_of_range @ 14f8fe9c0

/* public: __cdecl std::out_of_range::out_of_range(char const * __ptr64) __ptr64 */

out_of_range * __thiscall std::out_of_range::out_of_range(out_of_range *this,char *param_1)

{
  char *local_18;
  undefined1 local_10;
  
  local_10 = 1;
  *(undefined ***)this = exception::vftable;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)(this + 1) = 0;
  local_18 = param_1;
  __std_exception_copy(&local_18);
  *(undefined ***)this = vftable;
  return this;
}

// overflow_error @ 14f8fea10

/* public: __cdecl std::overflow_error::overflow_error(class std::overflow_error const & __ptr64)
   __ptr64 */

overflow_error * __thiscall
std::overflow_error::overflow_error(overflow_error *this,overflow_error *param_1)

{
  *(undefined ***)this = exception::vftable;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)(this + 1) = 0;
  __std_exception_copy(&param_1->field_0x8);
  *(undefined ***)this = vftable;
  return this;
}

// overflow_error @ 14f8fea60

/* public: __cdecl std::overflow_error::overflow_error(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64) __ptr64 */

overflow_error * __thiscall
std::overflow_error::overflow_error
          (overflow_error *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_18;
  undefined1 local_10;
  
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  *(undefined ***)this = exception::vftable;
  local_10 = 1;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)(this + 1) = 0;
  local_18 = param_1;
  __std_exception_copy(&local_18);
  *(undefined ***)this = vftable;
  return this;
}

// overflow_error @ 14f8feac0

/* public: __cdecl std::overflow_error::overflow_error(char const * __ptr64) __ptr64 */

overflow_error * __thiscall std::overflow_error::overflow_error(overflow_error *this,char *param_1)

{
  char *local_18;
  undefined1 local_10;
  
  local_10 = 1;
  *(undefined ***)this = exception::vftable;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)(this + 1) = 0;
  local_18 = param_1;
  __std_exception_copy(&local_18);
  *(undefined ***)this = vftable;
  return this;
}

// range_error @ 14f8feb10

/* public: __cdecl std::range_error::range_error(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64) __ptr64 */

range_error * __thiscall
std::range_error::range_error
          (range_error *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_18;
  undefined1 local_10;
  
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  *(undefined ***)this = exception::vftable;
  local_10 = 1;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  local_18 = param_1;
  __std_exception_copy(&local_18);
  *(undefined ***)this = vftable;
  return this;
}

// runtime_error @ 14f8feb70

/* public: __cdecl std::runtime_error::runtime_error(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64) __ptr64 */

runtime_error * __thiscall
std::runtime_error::runtime_error
          (runtime_error *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_18;
  undefined1 local_10;
  
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  *(undefined ***)this = exception::vftable;
  local_10 = 1;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)(this + 1) = 0;
  local_18 = param_1;
  __std_exception_copy(&local_18);
  *(undefined ***)this = vftable;
  return this;
}

// runtime_error @ 14f8febd0

/* public: __cdecl std::runtime_error::runtime_error(char const * __ptr64) __ptr64 */

runtime_error * __thiscall std::runtime_error::runtime_error(runtime_error *this,char *param_1)

{
  char *local_18;
  undefined1 local_10;
  
  local_10 = 1;
  *(undefined ***)this = exception::vftable;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)(this + 1) = 0;
  local_18 = param_1;
  __std_exception_copy(&local_18);
  *(undefined ***)this = vftable;
  return this;
}

// underflow_error @ 14f8fec20

/* public: __cdecl std::underflow_error::underflow_error(class std::underflow_error const & __ptr64)
   __ptr64 */

underflow_error * __thiscall
std::underflow_error::underflow_error(underflow_error *this,underflow_error *param_1)

{
  *(undefined ***)this = exception::vftable;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)(this + 1) = 0;
  __std_exception_copy(&param_1->field_0x8);
  *(undefined ***)this = vftable;
  return this;
}

// underflow_error @ 14f8fec70

/* public: __cdecl std::underflow_error::underflow_error(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64) __ptr64 */

underflow_error * __thiscall
std::underflow_error::underflow_error
          (underflow_error *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_18;
  undefined1 local_10;
  
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  *(undefined ***)this = exception::vftable;
  local_10 = 1;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)(this + 1) = 0;
  local_18 = param_1;
  __std_exception_copy(&local_18);
  *(undefined ***)this = vftable;
  return this;
}

// underflow_error @ 14f8fecd0

/* public: __cdecl std::underflow_error::underflow_error(char const * __ptr64) __ptr64 */

underflow_error * __thiscall
std::underflow_error::underflow_error(underflow_error *this,char *param_1)

{
  char *local_18;
  undefined1 local_10;
  
  local_10 = 1;
  *(undefined ***)this = exception::vftable;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)(this + 1) = 0;
  local_18 = param_1;
  __std_exception_copy(&local_18);
  *(undefined ***)this = vftable;
  return this;
}

// ~bad_function_call @ 14f8fed20

/* public: virtual __cdecl std::bad_function_call::~bad_function_call(void) __ptr64 */

void __thiscall std::bad_function_call::~bad_function_call(bad_function_call *this)

{
  *(undefined ***)this = exception::vftable;
  __std_exception_destroy(&this->field_0x8);
  return;
}

// ~domain_error @ 14f8fed40

/* public: virtual __cdecl std::domain_error::~domain_error(void) __ptr64 */

void __thiscall std::domain_error::~domain_error(domain_error *this)

{
  *(undefined ***)this = exception::vftable;
  __std_exception_destroy(&this->field_0x8);
  return;
}

// ~length_error @ 14f8fed60

/* public: virtual __cdecl std::length_error::~length_error(void) __ptr64 */

void __thiscall std::length_error::~length_error(length_error *this)

{
  *(undefined ***)this = exception::vftable;
  __std_exception_destroy(&this->field_0x8);
  return;
}

// ~logic_error @ 14f8fed80

/* public: virtual __cdecl std::logic_error::~logic_error(void) __ptr64 */

void __thiscall std::logic_error::~logic_error(logic_error *this)

{
  *(undefined ***)this = exception::vftable;
  __std_exception_destroy(&this->field_0x8);
  return;
}

// ~out_of_range @ 14f8feda0

/* public: virtual __cdecl std::out_of_range::~out_of_range(void) __ptr64 */

void __thiscall std::out_of_range::~out_of_range(out_of_range *this)

{
  *(undefined ***)this = exception::vftable;
  __std_exception_destroy(&this->field_0x8);
  return;
}

// ~overflow_error @ 14f8fedc0

/* public: virtual __cdecl std::overflow_error::~overflow_error(void) __ptr64 */

void __thiscall std::overflow_error::~overflow_error(overflow_error *this)

{
  *(undefined ***)this = exception::vftable;
  __std_exception_destroy(&this->field_0x8);
  return;
}

// ~runtime_error @ 14f8fede0

/* public: virtual __cdecl std::runtime_error::~runtime_error(void) __ptr64 */

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
  *(undefined ***)this = exception::vftable;
  __std_exception_destroy(&this->field_0x8);
  return;
}

// ~underflow_error @ 14f8fee00

/* public: virtual __cdecl std::underflow_error::~underflow_error(void) __ptr64 */

void __thiscall std::underflow_error::~underflow_error(underflow_error *this)

{
  *(undefined ***)this = exception::vftable;
  __std_exception_destroy(&this->field_0x8);
  return;
}

// `scalar_deleting_destructor' @ 14f8fee20

/* public: virtual void * __ptr64 __cdecl std::bad_function_call::`scalar deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
std::bad_function_call::_scalar_deleting_destructor_(bad_function_call *this,uint param_1)

{
  *(undefined ***)this = exception::vftable;
  __std_exception_destroy(&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `vector_deleting_destructor' @ 14f8fee70

/* public: virtual void * __ptr64 __cdecl std::domain_error::`vector deleting destructor'(unsigned
   int) __ptr64 */

void * __thiscall std::domain_error::_vector_deleting_destructor_(domain_error *this,uint param_1)

{
  *(undefined ***)this = exception::vftable;
  __std_exception_destroy(&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f8feec0

/* public: virtual void * __ptr64 __cdecl std::length_error::`scalar deleting destructor'(unsigned
   int) __ptr64 */

void * __thiscall std::length_error::_scalar_deleting_destructor_(length_error *this,uint param_1)

{
  *(undefined ***)this = exception::vftable;
  __std_exception_destroy(&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `vector_deleting_destructor' @ 14f8fef10

/* public: virtual void * __ptr64 __cdecl std::overflow_error::`vector deleting destructor'(unsigned
   int) __ptr64 */

void * __thiscall
std::overflow_error::_vector_deleting_destructor_(overflow_error *this,uint param_1)

{
  *(undefined ***)this = exception::vftable;
  __std_exception_destroy(&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f8fef60

/* public: virtual void * __ptr64 __cdecl std::underflow_error::`scalar deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
std::underflow_error::_scalar_deleting_destructor_(underflow_error *this,uint param_1)

{
  *(undefined ***)this = exception::vftable;
  __std_exception_destroy(&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// ThrowStdBadAlloc @ 14f8fefb0

/* void __cdecl absl::lts_20240722::base_internal::ThrowStdBadAlloc(void) */

void __cdecl absl::lts_20240722::base_internal::ThrowStdBadAlloc(void)

{
  bad_alloc local_28;
  
  std::bad_alloc::bad_alloc(&local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_28,(ThrowInfo *)&_TI2_AVbad_alloc_std__);
}

// ThrowStdBadFunctionCall @ 14f8fefe0

/* void __cdecl absl::lts_20240722::base_internal::ThrowStdBadFunctionCall(void) */

void __cdecl absl::lts_20240722::base_internal::ThrowStdBadFunctionCall(void)

{
  bad_function_call local_28 [2];
  
  std::bad_function_call::bad_function_call(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&_TI2_AVbad_function_call_std__);
}

// ThrowStdDomainError @ 14f8ff010

/* void __cdecl absl::lts_20240722::base_internal::ThrowStdDomainError(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) */

void __cdecl
absl::lts_20240722::base_internal::ThrowStdDomainError
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  domain_error local_28 [2];
  
  std::domain_error::domain_error(local_28,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&_TI3_AVdomain_error_std__);
}

// ThrowStdDomainError @ 14f8ff040

/* void __cdecl absl::lts_20240722::base_internal::ThrowStdDomainError(char const * __ptr64) */

void __cdecl absl::lts_20240722::base_internal::ThrowStdDomainError(char *param_1)

{
  domain_error local_28 [2];
  
  std::domain_error::domain_error(local_28,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&_TI3_AVdomain_error_std__);
}

// ThrowStdInvalidArgument @ 14f8ff070

/* void __cdecl absl::lts_20240722::base_internal::ThrowStdInvalidArgument(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) */

void __cdecl
absl::lts_20240722::base_internal::ThrowStdInvalidArgument
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  invalid_argument local_28 [2];
  
  std::invalid_argument::invalid_argument(local_28,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&_TI3_AVinvalid_argument_std__);
}

// ThrowStdInvalidArgument @ 14f8ff0a0

/* void __cdecl absl::lts_20240722::base_internal::ThrowStdInvalidArgument(char const * __ptr64) */

void __cdecl absl::lts_20240722::base_internal::ThrowStdInvalidArgument(char *param_1)

{
  invalid_argument local_28 [2];
  
  std::invalid_argument::invalid_argument(local_28,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&_TI3_AVinvalid_argument_std__);
}

// ThrowStdLengthError @ 14f8ff0d0

/* void __cdecl absl::lts_20240722::base_internal::ThrowStdLengthError(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) */

void __cdecl
absl::lts_20240722::base_internal::ThrowStdLengthError
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  length_error local_28 [2];
  
  std::length_error::length_error(local_28,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&_TI3_AVlength_error_std__);
}

// ThrowStdLengthError @ 14f8ff100

/* void __cdecl absl::lts_20240722::base_internal::ThrowStdLengthError(char const * __ptr64) */

void __cdecl absl::lts_20240722::base_internal::ThrowStdLengthError(char *param_1)

{
  length_error local_28 [2];
  
  std::length_error::length_error(local_28,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&_TI3_AVlength_error_std__);
}

// ThrowStdLogicError @ 14f8ff130

/* void __cdecl absl::lts_20240722::base_internal::ThrowStdLogicError(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) */

void __cdecl
absl::lts_20240722::base_internal::ThrowStdLogicError
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  logic_error local_28 [2];
  
  std::logic_error::logic_error(local_28,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&_TI2_AVlogic_error_std__);
}

// ThrowStdLogicError @ 14f8ff160

/* void __cdecl absl::lts_20240722::base_internal::ThrowStdLogicError(char const * __ptr64) */

void __cdecl absl::lts_20240722::base_internal::ThrowStdLogicError(char *param_1)

{
  logic_error local_28 [2];
  
  std::logic_error::logic_error(local_28,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&_TI2_AVlogic_error_std__);
}

// ThrowStdOutOfRange @ 14f8ff190

/* void __cdecl absl::lts_20240722::base_internal::ThrowStdOutOfRange(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) */

void __cdecl
absl::lts_20240722::base_internal::ThrowStdOutOfRange
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  out_of_range local_28 [2];
  
  std::out_of_range::out_of_range(local_28,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&_TI3_AVout_of_range_std__);
}

// ThrowStdOutOfRange @ 14f8ff1c0

/* void __cdecl absl::lts_20240722::base_internal::ThrowStdOutOfRange(char const * __ptr64) */

void __cdecl absl::lts_20240722::base_internal::ThrowStdOutOfRange(char *param_1)

{
  out_of_range local_28 [2];
  
  std::out_of_range::out_of_range(local_28,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&_TI3_AVout_of_range_std__);
}

// ThrowStdOverflowError @ 14f8ff1f0

/* void __cdecl absl::lts_20240722::base_internal::ThrowStdOverflowError(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) */

void __cdecl
absl::lts_20240722::base_internal::ThrowStdOverflowError
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  overflow_error local_28 [2];
  
  std::overflow_error::overflow_error(local_28,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&_TI3_AVoverflow_error_std__);
}

// ThrowStdOverflowError @ 14f8ff220

/* void __cdecl absl::lts_20240722::base_internal::ThrowStdOverflowError(char const * __ptr64) */

void __cdecl absl::lts_20240722::base_internal::ThrowStdOverflowError(char *param_1)

{
  overflow_error local_28 [2];
  
  std::overflow_error::overflow_error(local_28,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&_TI3_AVoverflow_error_std__);
}

// ThrowStdRangeError @ 14f8ff250

/* void __cdecl absl::lts_20240722::base_internal::ThrowStdRangeError(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) */

void __cdecl
absl::lts_20240722::base_internal::ThrowStdRangeError
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  range_error local_28;
  
  std::range_error::range_error(&local_28,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_28,(ThrowInfo *)&_TI3_AVrange_error_std__);
}

// ThrowStdRangeError @ 14f8ff280

/* void __cdecl absl::lts_20240722::base_internal::ThrowStdRangeError(char const * __ptr64) */

void __cdecl absl::lts_20240722::base_internal::ThrowStdRangeError(char *param_1)

{
  range_error local_28;
  
  std::range_error::range_error(&local_28,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_28,(ThrowInfo *)&_TI3_AVrange_error_std__);
}

// ThrowStdRuntimeError @ 14f8ff2b0

/* void __cdecl absl::lts_20240722::base_internal::ThrowStdRuntimeError(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) */

void __cdecl
absl::lts_20240722::base_internal::ThrowStdRuntimeError
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  runtime_error local_28 [2];
  
  std::runtime_error::runtime_error(local_28,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&_TI2_AVruntime_error_std__);
}

// ThrowStdRuntimeError @ 14f8ff2e0

/* void __cdecl absl::lts_20240722::base_internal::ThrowStdRuntimeError(char const * __ptr64) */

void __cdecl absl::lts_20240722::base_internal::ThrowStdRuntimeError(char *param_1)

{
  runtime_error local_28 [2];
  
  std::runtime_error::runtime_error(local_28,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&_TI2_AVruntime_error_std__);
}

// ThrowStdUnderflowError @ 14f8ff310

/* void __cdecl absl::lts_20240722::base_internal::ThrowStdUnderflowError(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) */

void __cdecl
absl::lts_20240722::base_internal::ThrowStdUnderflowError
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  underflow_error local_28 [2];
  
  std::underflow_error::underflow_error(local_28,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&_TI3_AVunderflow_error_std__);
}

// ThrowStdUnderflowError @ 14f8ff340

/* void __cdecl absl::lts_20240722::base_internal::ThrowStdUnderflowError(char const * __ptr64) */

void __cdecl absl::lts_20240722::base_internal::ThrowStdUnderflowError(char *param_1)

{
  underflow_error local_28 [2];
  
  std::underflow_error::underflow_error(local_28,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&_TI3_AVunderflow_error_std__);
}

// c_str @ 14f8ff370

/* public: char const * __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::c_str(void)const __ptr64 */

char * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this)

{
  if (0xf < (this->_Mypair)._Myval2._Myres) {
    return (this->_Mypair)._Myval2._Bx._Ptr;
  }
  return (char *)this;
}

// what @ 14f8ff390

/* public: virtual char const * __ptr64 __cdecl std::bad_function_call::what(void)const __ptr64 */

char * __thiscall std::bad_function_call::what(bad_function_call *this)

{
  return "bad function call";
}

