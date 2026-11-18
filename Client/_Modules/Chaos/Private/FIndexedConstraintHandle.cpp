// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// StaticType @ 1437b15b0

FConstraintHandleTypeID * __cdecl Chaos::FIndexedConstraintHandle::StaticType(void)

{
  int *piVar1;
  FName local_res8;
  FName local_res10 [3];
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIndexedConstraintHandle::StaticType(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIndexedConstraintHandle::StaticType(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIndexedConstraintHandle::StaticType(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      if (*piVar1 < `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          ::FName::FName(&local_res8,L"FConstraintHandle");
          `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
          ::__l2::STypeID.TypeName = local_res8;
          `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
          ::__l2::STypeID.BaseType = (FConstraintHandleTypeID *)0x0;
          _Init_thread_footer(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      ::FName::FName(local_res10,L"FIndexedConstraintHandle");
      `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIndexedConstraintHandle::StaticType(void)'
      ::__l2::STypeID.TypeName = local_res10[0];
      `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIndexedConstraintHandle::StaticType(void)'
      ::__l2::STypeID.BaseType =
           &`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
            ::__l2::STypeID;
      _Init_thread_footer(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIndexedConstraintHandle::StaticType(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIndexedConstraintHandle::StaticType(void)'
          ::__l2::STypeID;
}

// ~FIndexedConstraintHandle @ 143c452e0

void __thiscall
Chaos::FIndexedConstraintHandle::~FIndexedConstraintHandle(FIndexedConstraintHandle *this)

{
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ = (longlong)&___7FConstraintHandle_Chaos__6B_;
  if (this->_padding_ != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GraphEdge == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConstraintHandle.h"
                       ,0x79,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// IsValid @ 143c6b8e0

bool __thiscall Chaos::FIndexedConstraintHandle::IsValid(FIndexedConstraintHandle *this)

{
  if ((this->ConstraintIndex != -1) && (this->_padding_ != 0)) {
    return true;
  }
  return false;
}

