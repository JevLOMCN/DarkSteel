// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 13

// ComputeCrc32c @ 150246560

/* class absl::lts_20240722::crc32c_t __cdecl absl::lts_20240722::ComputeCrc32c(class
   std::basic_string_view<char,struct std::char_traits<char> >) */

crc32c_t __cdecl
absl::lts_20240722::ComputeCrc32c(basic_string_view<char,std::char_traits<char>_> *param_1)

{
  longlong *plVar1;
  undefined8 *in_RDX;
  uint local_res8 [2];
  
  local_res8[0] = 0xffffffff;
  plVar1 = (longlong *)FUN_1502467b0();
  (**(code **)(*plVar1 + 8))(plVar1,local_res8,*in_RDX,in_RDX[1]);
  *(uint *)&param_1->_Mydata = ~local_res8[0];
  return (crc32c_t)(uint)param_1;
}

// ConcatCrc32c @ 1502465b0

/* class absl::lts_20240722::crc32c_t __cdecl absl::lts_20240722::ConcatCrc32c(class
   absl::lts_20240722::crc32c_t,class absl::lts_20240722::crc32c_t,unsigned __int64) */

crc32c_t __cdecl
absl::lts_20240722::ConcatCrc32c(crc32c_t param_1,crc32c_t param_2,__uint64 param_3)

{
  longlong *plVar1;
  undefined4 in_register_0000000c;
  uint local_res10 [2];
  
  local_res10[0] = param_2.crc_;
  plVar1 = (longlong *)FUN_1502467b0();
  (**(code **)(*plVar1 + 0x10))(plVar1,local_res10);
  *(uint *)CONCAT44(in_register_0000000c,param_1.crc_) = local_res10[0] ^ (uint)param_3;
  return (crc32c_t)param_1.crc_;
}

// Crc32CAndCopy @ 150246610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* class absl::lts_20240722::crc32c_t __cdecl absl::lts_20240722::crc_internal::Crc32CAndCopy(void *
   __ptr64 __restrict,void const * __ptr64 __restrict,unsigned __int64,class
   absl::lts_20240722::crc32c_t,bool) */

crc32c_t __cdecl
absl::lts_20240722::crc_internal::Crc32CAndCopy
          (void *param_1,void *param_2,__uint64 param_3,crc32c_t param_4,bool param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 in_register_0000008c;
  undefined3 in_stack_00000029;
  char in_stack_00000030;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_absl::lts_20240722::crc32c_t___cdecl_absl::lts_20240722::crc_internal::CrcMemcpy::CrcAndCopy(void*___ptr64___restrict,void_const*___ptr64___restrict,unsigned___int64,absl::lts_20240722::crc32c_t,bool)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_absl::lts_20240722::crc32c_t___cdecl_absl::lts_20240722::crc_internal::CrcMemcpy::CrcAndCopy(void*___ptr64___restrict,void_const*___ptr64___restrict,unsigned___int64,absl::lts_20240722::crc32c_t,bool)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_absl::lts_20240722::crc32c_t___cdecl_absl::lts_20240722::crc_internal::CrcMemcpy::CrcAndCopy(void*___ptr64___restrict,void_const*___ptr64___restrict,unsigned___int64,absl::lts_20240722::crc32c_t,bool)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      puVar1 = (undefined8 *)CrcMemcpy::GetArchSpecificEngines();
      _engines = (longlong *)*puVar1;
      DAT_155409ee8 = (longlong *)puVar1[1];
      _Init_thread_footer(&`public:_static_class_absl::lts_20240722::crc32c_t___cdecl_absl::lts_20240722::crc_internal::CrcMemcpy::CrcAndCopy(void*___ptr64___restrict,void_const*___ptr64___restrict,unsigned___int64,absl::lts_20240722::crc32c_t,bool)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  plVar2 = _engines;
  if (in_stack_00000030 != '\0') {
    plVar2 = DAT_155409ee8;
  }
  (**(code **)(*plVar2 + 8))
            (plVar2,param_1,param_2,param_3,CONCAT44(in_register_0000008c,param_4.crc_),_param_5);
  return (crc32c_t)(uint)param_1;
}

// CrcAndCopy @ 1502466e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class absl::lts_20240722::crc32c_t __cdecl
   absl::lts_20240722::crc_internal::CrcMemcpy::CrcAndCopy(void * __ptr64 __restrict,void const *
   __ptr64 __restrict,unsigned __int64,class absl::lts_20240722::crc32c_t,bool) */

crc32c_t __cdecl
absl::lts_20240722::crc_internal::CrcMemcpy::CrcAndCopy
          (void *param_1,void *param_2,__uint64 param_3,crc32c_t param_4,bool param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 in_register_0000008c;
  undefined3 in_stack_00000029;
  char in_stack_00000030;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_absl::lts_20240722::crc32c_t___cdecl_absl::lts_20240722::crc_internal::CrcMemcpy::CrcAndCopy(void*___ptr64___restrict,void_const*___ptr64___restrict,unsigned___int64,absl::lts_20240722::crc32c_t,bool)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_absl::lts_20240722::crc32c_t___cdecl_absl::lts_20240722::crc_internal::CrcMemcpy::CrcAndCopy(void*___ptr64___restrict,void_const*___ptr64___restrict,unsigned___int64,absl::lts_20240722::crc32c_t,bool)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_absl::lts_20240722::crc32c_t___cdecl_absl::lts_20240722::crc_internal::CrcMemcpy::CrcAndCopy(void*___ptr64___restrict,void_const*___ptr64___restrict,unsigned___int64,absl::lts_20240722::crc32c_t,bool)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      puVar1 = (undefined8 *)GetArchSpecificEngines();
      _engines = (longlong *)*puVar1;
      DAT_155409ee8 = (longlong *)puVar1[1];
      _Init_thread_footer(&`public:_static_class_absl::lts_20240722::crc32c_t___cdecl_absl::lts_20240722::crc_internal::CrcMemcpy::CrcAndCopy(void*___ptr64___restrict,void_const*___ptr64___restrict,unsigned___int64,absl::lts_20240722::crc32c_t,bool)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  plVar2 = _engines;
  if (in_stack_00000030 != '\0') {
    plVar2 = DAT_155409ee8;
  }
  (**(code **)(*plVar2 + 8))
            (plVar2,param_1,param_2,param_3,CONCAT44(in_register_0000008c,param_4.crc_),_param_5);
  return (crc32c_t)(uint)param_1;
}

// FUN_1502467b0 @ 1502467b0

CRC * FUN_1502467b0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < DAT_155409f00) {
    _Init_thread_header(&DAT_155409f00);
    if (DAT_155409f00 == -1) {
      DAT_155409ef8 = absl::lts_20240722::crc_internal::CRC::Crc32c();
      _Init_thread_footer(&DAT_155409f00);
      return DAT_155409ef8;
    }
  }
  return DAT_155409ef8;
}

// ExtendCrc32c @ 150246830

/* class absl::lts_20240722::crc32c_t __cdecl absl::lts_20240722::ExtendCrc32c(class
   absl::lts_20240722::crc32c_t,class std::basic_string_view<char,struct std::char_traits<char> >)
    */

crc32c_t __cdecl
absl::lts_20240722::ExtendCrc32c
          (crc32c_t param_1,basic_string_view<char,std::char_traits<char>_> *param_2)

{
  longlong *plVar1;
  undefined4 in_register_0000000c;
  undefined8 *in_R8;
  uint local_res18 [4];
  
  local_res18[0] = ~(uint)param_2;
  plVar1 = (longlong *)FUN_1502467b0();
  (**(code **)(*plVar1 + 8))(plVar1,local_res18,*in_R8,in_R8[1]);
  *(uint *)CONCAT44(in_register_0000000c,param_1.crc_) = ~local_res18[0];
  return (crc32c_t)param_1.crc_;
}

// ExtendCrc32cByZeroes @ 150246880

/* class absl::lts_20240722::crc32c_t __cdecl absl::lts_20240722::ExtendCrc32cByZeroes(class
   absl::lts_20240722::crc32c_t,unsigned __int64) */

crc32c_t __cdecl absl::lts_20240722::ExtendCrc32cByZeroes(crc32c_t param_1,__uint64 param_2)

{
  longlong *plVar1;
  undefined4 in_register_0000000c;
  uint local_res10 [6];
  
  local_res10[0] = ~(uint)param_2;
  plVar1 = (longlong *)FUN_1502467b0();
  (**(code **)(*plVar1 + 0x10))(plVar1,local_res10);
  *(uint *)CONCAT44(in_register_0000000c,param_1.crc_) = ~local_res10[0];
  return (crc32c_t)param_1.crc_;
}

// ExtendCrc32cInline @ 1502468d0

/* bool __cdecl absl::lts_20240722::crc_internal::ExtendCrc32cInline(unsigned int * __ptr64,char
   const * __ptr64,unsigned __int64) */

bool __cdecl
absl::lts_20240722::crc_internal::ExtendCrc32cInline(uint *param_1,char *param_2,__uint64 param_3)

{
  return false;
}

// ExtendCrc32cInternal @ 1502468e0

/* class absl::lts_20240722::crc32c_t __cdecl
   absl::lts_20240722::crc_internal::ExtendCrc32cInternal(class absl::lts_20240722::crc32c_t,class
   std::basic_string_view<char,struct std::char_traits<char> >) */

crc32c_t __cdecl
absl::lts_20240722::crc_internal::ExtendCrc32cInternal
          (crc32c_t param_1,basic_string_view<char,std::char_traits<char>_> *param_2)

{
  longlong *plVar1;
  undefined4 in_register_0000000c;
  undefined8 *in_R8;
  uint local_res10 [6];
  
  local_res10[0] = ~(uint)param_2;
  plVar1 = (longlong *)FUN_1502467b0();
  (**(code **)(*plVar1 + 8))(plVar1,local_res10,*in_R8,in_R8[1]);
  *(uint *)CONCAT44(in_register_0000000c,param_1.crc_) = ~local_res10[0];
  return (crc32c_t)param_1.crc_;
}

// MemcpyCrc32c @ 150246930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* class absl::lts_20240722::crc32c_t __cdecl absl::lts_20240722::MemcpyCrc32c(void * __ptr64,void
   const * __ptr64,unsigned __int64,class absl::lts_20240722::crc32c_t) */

crc32c_t __cdecl
absl::lts_20240722::MemcpyCrc32c(void *param_1,void *param_2,__uint64 param_3,crc32c_t param_4)

{
  undefined8 *puVar1;
  undefined4 in_register_0000008c;
  undefined4 in_stack_00000028;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_absl::lts_20240722::crc32c_t___cdecl_absl::lts_20240722::crc_internal::CrcMemcpy::CrcAndCopy(void*___ptr64___restrict,void_const*___ptr64___restrict,unsigned___int64,absl::lts_20240722::crc32c_t,bool)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_absl::lts_20240722::crc32c_t___cdecl_absl::lts_20240722::crc_internal::CrcMemcpy::CrcAndCopy(void*___ptr64___restrict,void_const*___ptr64___restrict,unsigned___int64,absl::lts_20240722::crc32c_t,bool)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_absl::lts_20240722::crc32c_t___cdecl_absl::lts_20240722::crc_internal::CrcMemcpy::CrcAndCopy(void*___ptr64___restrict,void_const*___ptr64___restrict,unsigned___int64,absl::lts_20240722::crc32c_t,bool)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      puVar1 = (undefined8 *)crc_internal::CrcMemcpy::GetArchSpecificEngines();
      _engines = (longlong *)*puVar1;
      DAT_155409ee8 = puVar1[1];
      _Init_thread_footer(&`public:_static_class_absl::lts_20240722::crc32c_t___cdecl_absl::lts_20240722::crc_internal::CrcMemcpy::CrcAndCopy(void*___ptr64___restrict,void_const*___ptr64___restrict,unsigned___int64,absl::lts_20240722::crc32c_t,bool)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (**(code **)(*_engines + 8))
            (_engines,param_1,param_2,param_3,CONCAT44(in_register_0000008c,param_4.crc_),
             in_stack_00000028);
  return (crc32c_t)(uint)param_1;
}

// RemoveCrc32cPrefix @ 1502469f0

/* class absl::lts_20240722::crc32c_t __cdecl absl::lts_20240722::RemoveCrc32cPrefix(class
   absl::lts_20240722::crc32c_t,class absl::lts_20240722::crc32c_t,unsigned __int64) */

crc32c_t __cdecl
absl::lts_20240722::RemoveCrc32cPrefix(crc32c_t param_1,crc32c_t param_2,__uint64 param_3)

{
  longlong *plVar1;
  undefined4 in_register_0000000c;
  uint local_res10 [2];
  
  local_res10[0] = param_2.crc_;
  plVar1 = (longlong *)FUN_1502467b0();
  (**(code **)(*plVar1 + 0x10))(plVar1,local_res10);
  *(uint *)CONCAT44(in_register_0000000c,param_1.crc_) = local_res10[0] ^ (uint)param_3;
  return (crc32c_t)param_1.crc_;
}

// RemoveCrc32cSuffix @ 150246a50

/* class absl::lts_20240722::crc32c_t __cdecl absl::lts_20240722::RemoveCrc32cSuffix(class
   absl::lts_20240722::crc32c_t,class absl::lts_20240722::crc32c_t,unsigned __int64) */

crc32c_t __cdecl
absl::lts_20240722::RemoveCrc32cSuffix(crc32c_t param_1,crc32c_t param_2,__uint64 param_3)

{
  longlong *plVar1;
  undefined4 in_register_0000000c;
  uint local_res10 [6];
  
  local_res10[0] = param_2.crc_ ^ (uint)param_3;
  plVar1 = (longlong *)FUN_1502467b0();
  (**(code **)(*plVar1 + 0x18))(plVar1,local_res10);
  *(uint *)CONCAT44(in_register_0000000c,param_1.crc_) = local_res10[0];
  return (crc32c_t)param_1.crc_;
}

// UnextendCrc32cByZeroes @ 150246aa0

/* class absl::lts_20240722::crc32c_t __cdecl
   absl::lts_20240722::crc_internal::UnextendCrc32cByZeroes(class
   absl::lts_20240722::crc32c_t,unsigned __int64) */

crc32c_t __cdecl
absl::lts_20240722::crc_internal::UnextendCrc32cByZeroes(crc32c_t param_1,__uint64 param_2)

{
  longlong *plVar1;
  undefined4 in_register_0000000c;
  uint local_res10 [6];
  
  local_res10[0] = ~(uint)param_2;
  plVar1 = (longlong *)FUN_1502467b0();
  (**(code **)(*plVar1 + 0x18))(plVar1,local_res10);
  *(uint *)CONCAT44(in_register_0000000c,param_1.crc_) = ~local_res10[0];
  return (crc32c_t)param_1.crc_;
}

