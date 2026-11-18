// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 2

// InvalidID @ 146fb92c0

FAINamedID<FAISenseCounter> * __cdecl
FAINamedID<FAISenseCounter>::InvalidID(FAINamedID<FAISenseCounter> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
      ::__l2::InvalidIDInstance = (FAINamedID<struct_FAISenseCounter>)0xff;
      ::FName::FName(&DAT_1551c48a4,L"Invalid");
      _Init_thread_footer(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  __return_storage_ptr__->Index =
       (uchar)`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
              ::__l2::InvalidIDInstance;
  __return_storage_ptr__->Name = DAT_1551c48a4;
  return __return_storage_ptr__;
}

// IsValid @ 146fba210

bool __thiscall FAINamedID<FAISenseCounter>::IsValid(FAINamedID<FAISenseCounter> *this)

{
  FAINamedID<struct_FAISenseCounter> FVar1;
  
  FVar1 = (FAINamedID<struct_FAISenseCounter>)this->Index;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
      ::__l2::InvalidIDInstance = (FAINamedID<struct_FAISenseCounter>)0xff;
      ::FName::FName((FName *)&DAT_1551c48a4,L"Invalid");
      _Init_thread_footer(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return FVar1 != `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                  ::__l2::InvalidIDInstance;
}

