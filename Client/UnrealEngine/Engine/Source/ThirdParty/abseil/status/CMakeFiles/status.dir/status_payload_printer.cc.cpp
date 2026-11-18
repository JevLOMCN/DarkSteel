// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 7

// DummyFunction @ 14f8efa30

/* private: static class std::optional<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > > __cdecl
   absl::lts_20240722::base_internal::AtomicHook<class std::optional<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >
   (__cdecl*)(class std::basic_string_view<char,struct std::char_traits<char> >,class
   absl::lts_20240722::Cord const & __ptr64)>::DummyFunction(class
   std::basic_string_view<char,struct std::char_traits<char> >,class absl::lts_20240722::Cord const
   & __ptr64) */

optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> * __cdecl
absl::lts_20240722::base_internal::
AtomicHook<class_std::optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_(__cdecl*)(std::basic_string_view<char,std::char_traits<char>_>,absl::lts_20240722::Cord_const&___ptr64)>
::DummyFunction(optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                *__return_storage_ptr__,basic_string_view<char,std::char_traits<char>_> *param_1,
               Cord *param_2)

{
  __return_storage_ptr__->field_0x20 = 0;
  return __return_storage_ptr__;
}

// DoLoad @ 14f8efa50

/* private: class std::optional<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > > (__cdecl*__cdecl absl::lts_20240722::base_internal::AtomicHook<class
   std::optional<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > > (__cdecl*)(class std::basic_string_view<char,struct
   std::char_traits<char> >,class absl::lts_20240722::Cord const & __ptr64)>::DoLoad(void)const
   __ptr64)(class std::basic_string_view<char,struct std::char_traits<char> >,class
   absl::lts_20240722::Cord const & __ptr64) */

_func_optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_basic_string_view<char,std::char_traits<char>_>_Cord_ptr
* __thiscall
absl::lts_20240722::base_internal::
AtomicHook<class_std::optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_(__cdecl*)(std::basic_string_view<char,std::char_traits<char>_>,absl::lts_20240722::Cord_const&___ptr64)>
::DoLoad(AtomicHook<class_std::optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_(__cdecl*)(std::basic_string_view<char,std::char_traits<char>_>,absl::lts_20240722::Cord_const&___ptr64)>
         *this)

{
  _func_optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_basic_string_view<char,std::char_traits<char>_>_Cord_ptr
  *p_Var1;
  
  p_Var1 = *(_func_optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_basic_string_view<char,std::char_traits<char>_>_Cord_ptr
             **)this;
  if (p_Var1 == (_func_optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_basic_string_view<char,std::char_traits<char>_>_Cord_ptr
                 *)0x0) {
    p_Var1 = *(_func_optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_basic_string_view<char,std::char_traits<char>_>_Cord_ptr
               **)(this + 8);
  }
  return p_Var1;
}

// DoStore @ 14f8efa70

/* private: bool __cdecl absl::lts_20240722::base_internal::AtomicHook<class std::optional<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >
   (__cdecl*)(class std::basic_string_view<char,struct std::char_traits<char> >,class
   absl::lts_20240722::Cord const & __ptr64)>::DoStore(class std::optional<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >
   (__cdecl*)(class std::basic_string_view<char,struct std::char_traits<char> >,class
   absl::lts_20240722::Cord const & __ptr64)) __ptr64 */

bool __thiscall
absl::lts_20240722::base_internal::
AtomicHook<class_std::optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_(__cdecl*)(std::basic_string_view<char,std::char_traits<char>_>,absl::lts_20240722::Cord_const&___ptr64)>
::DoStore(AtomicHook<class_std::optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_(__cdecl*)(std::basic_string_view<char,std::char_traits<char>_>,absl::lts_20240722::Cord_const&___ptr64)>
          *this,_func_optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_basic_string_view<char,std::char_traits<char>_>_Cord_ptr
                *param_1)

{
  _func_optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_basic_string_view<char,std::char_traits<char>_>_Cord_ptr
  *p_Var1;
  bool bVar2;
  
  LOCK();
  p_Var1 = *(_func_optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_basic_string_view<char,std::char_traits<char>_>_Cord_ptr
             **)this;
  bVar2 = p_Var1 == (_func_optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_basic_string_view<char,std::char_traits<char>_>_Cord_ptr
                     *)0x0;
  if (bVar2) {
    *(_func_optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_basic_string_view<char,std::char_traits<char>_>_Cord_ptr
      **)this = param_1;
    p_Var1 = (_func_optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_basic_string_view<char,std::char_traits<char>_>_Cord_ptr
              *)0x0;
  }
  UNLOCK();
  if ((!bVar2) && (p_Var1 != param_1)) {
    return false;
  }
  return true;
}

// GetStatusPayloadPrinter @ 14f8efa90

/* class std::optional<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > > (__cdecl*__cdecl
   absl::lts_20240722::status_internal::GetStatusPayloadPrinter(void))(class
   std::basic_string_view<char,struct std::char_traits<char> >,class absl::lts_20240722::Cord const
   & __ptr64) */

_func_optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_basic_string_view<char,std::char_traits<char>_>_Cord_ptr
* __cdecl absl::lts_20240722::status_internal::GetStatusPayloadPrinter(void)

{
  _func_optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_basic_string_view<char,std::char_traits<char>_>_Cord_ptr
  *p_Var1;
  
  p_Var1 = DAT_154e16830;
  if (DAT_154e16830 ==
      (_func_optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_basic_string_view<char,std::char_traits<char>_>_Cord_ptr
       *)0x0) {
    p_Var1 = (_func_optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_basic_string_view<char,std::char_traits<char>_>_Cord_ptr
              *)PTR_DummyFunction_154e16838;
  }
  if (p_Var1 == base_internal::
                AtomicHook<class_std::optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_(__cdecl*)(std::basic_string_view<char,std::char_traits<char>_>,absl::lts_20240722::Cord_const&___ptr64)>
                ::DummyFunction) {
    p_Var1 = (_func_optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_basic_string_view<char,std::char_traits<char>_>_Cord_ptr
              *)0x0;
  }
  return p_Var1;
}

// Load @ 14f8efac0

/* public: class std::optional<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > > (__cdecl*__cdecl absl::lts_20240722::base_internal::AtomicHook<class
   std::optional<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > > (__cdecl*)(class std::basic_string_view<char,struct
   std::char_traits<char> >,class absl::lts_20240722::Cord const & __ptr64)>::Load(void)const
   __ptr64)(class std::basic_string_view<char,struct std::char_traits<char> >,class
   absl::lts_20240722::Cord const & __ptr64) */

_func_optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_basic_string_view<char,std::char_traits<char>_>_Cord_ptr
* __thiscall
absl::lts_20240722::base_internal::
AtomicHook<class_std::optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_(__cdecl*)(std::basic_string_view<char,std::char_traits<char>_>,absl::lts_20240722::Cord_const&___ptr64)>
::Load(AtomicHook<class_std::optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_(__cdecl*)(std::basic_string_view<char,std::char_traits<char>_>,absl::lts_20240722::Cord_const&___ptr64)>
       *this)

{
  _func_optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_basic_string_view<char,std::char_traits<char>_>_Cord_ptr
  *p_Var1;
  
  p_Var1 = *(_func_optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_basic_string_view<char,std::char_traits<char>_>_Cord_ptr
             **)this;
  if (p_Var1 == (_func_optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_basic_string_view<char,std::char_traits<char>_>_Cord_ptr
                 *)0x0) {
    p_Var1 = *(_func_optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_basic_string_view<char,std::char_traits<char>_>_Cord_ptr
               **)(this + 8);
  }
  if (p_Var1 == DummyFunction) {
    p_Var1 = (_func_optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_basic_string_view<char,std::char_traits<char>_>_Cord_ptr
              *)0x0;
  }
  return p_Var1;
}

// SetStatusPayloadPrinter @ 14f8efaf0

/* void __cdecl absl::lts_20240722::status_internal::SetStatusPayloadPrinter(class
   std::optional<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > > (__cdecl*)(class std::basic_string_view<char,struct
   std::char_traits<char> >,class absl::lts_20240722::Cord const & __ptr64)) */

void __cdecl
absl::lts_20240722::status_internal::SetStatusPayloadPrinter
          (_func_optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_basic_string_view<char,std::char_traits<char>_>_Cord_ptr
           *param_1)

{
  _func_optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_basic_string_view<char,std::char_traits<char>_>_Cord_ptr
  *p_Var1;
  
  LOCK();
  p_Var1 = param_1;
  if (DAT_154e16830 !=
      (_func_optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_basic_string_view<char,std::char_traits<char>_>_Cord_ptr
       *)0x0) {
    p_Var1 = DAT_154e16830;
  }
  DAT_154e16830 = p_Var1;
  UNLOCK();
  return;
}

// Store @ 14f8efb10

/* public: void __cdecl absl::lts_20240722::base_internal::AtomicHook<class std::optional<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >
   (__cdecl*)(class std::basic_string_view<char,struct std::char_traits<char> >,class
   absl::lts_20240722::Cord const & __ptr64)>::Store(class std::optional<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >
   (__cdecl*)(class std::basic_string_view<char,struct std::char_traits<char> >,class
   absl::lts_20240722::Cord const & __ptr64)) __ptr64 */

void __thiscall
absl::lts_20240722::base_internal::
AtomicHook<class_std::optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_(__cdecl*)(std::basic_string_view<char,std::char_traits<char>_>,absl::lts_20240722::Cord_const&___ptr64)>
::Store(AtomicHook<class_std::optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_(__cdecl*)(std::basic_string_view<char,std::char_traits<char>_>,absl::lts_20240722::Cord_const&___ptr64)>
        *this,_func_optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_basic_string_view<char,std::char_traits<char>_>_Cord_ptr
              *param_1)

{
  LOCK();
  if (*(longlong *)this == 0) {
    *(_func_optional<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_basic_string_view<char,std::char_traits<char>_>_Cord_ptr
      **)this = param_1;
  }
  UNLOCK();
  return;
}

