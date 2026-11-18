// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 17

// As<Chaos::FPBDCollisionConstraintHandle> @ 14370b090

FPBDCollisionConstraintHandle * __thiscall
Chaos::FConstraintHandle::As<Chaos::FPBDCollisionConstraintHandle>(FConstraintHandle *this)

{
  FPBDConstraintContainer *pFVar1;
  FConstraintHandleTypeID *this_00;
  bool bVar2;
  FConstraintHandleTypeID *pFVar3;
  
  pFVar1 = this->ConstraintContainer;
  if (pFVar1 != (FPBDConstraintContainer *)0x0) {
    pFVar3 = FPBDCollisionConstraintHandle::StaticType();
    if (pFVar3->TypeName == (pFVar1->ConstraintHandleType).TypeName) {
      return (FPBDCollisionConstraintHandle *)this;
    }
    this_00 = (pFVar1->ConstraintHandleType).BaseType;
    if ((this_00 != (FConstraintHandleTypeID *)0x0) &&
       (bVar2 = FConstraintHandleTypeID::IsA(this_00,pFVar3), bVar2)) {
      return (FPBDCollisionConstraintHandle *)this;
    }
  }
  return (FPBDCollisionConstraintHandle *)0x0;
}

// As<Chaos::FCharacterGroundConstraintHandle> @ 1437d5b30

FCharacterGroundConstraintHandle * __thiscall
Chaos::FConstraintHandle::As<Chaos::FCharacterGroundConstraintHandle>(FConstraintHandle *this)

{
  FPBDConstraintContainer *pFVar1;
  FConstraintHandleTypeID *this_00;
  bool bVar2;
  FConstraintHandleTypeID *pFVar3;
  
  pFVar1 = this->ConstraintContainer;
  if (pFVar1 != (FPBDConstraintContainer *)0x0) {
    pFVar3 = FCharacterGroundConstraintHandle::StaticType();
    if (pFVar3->TypeName == (pFVar1->ConstraintHandleType).TypeName) {
      return (FCharacterGroundConstraintHandle *)this;
    }
    this_00 = (pFVar1->ConstraintHandleType).BaseType;
    if ((this_00 != (FConstraintHandleTypeID *)0x0) &&
       (bVar2 = FConstraintHandleTypeID::IsA(this_00,pFVar3), bVar2)) {
      return (FCharacterGroundConstraintHandle *)this;
    }
  }
  return (FCharacterGroundConstraintHandle *)0x0;
}

// ~FConstraintHandle @ 14388cac0

void __thiscall Chaos::FConstraintHandle::~FConstraintHandle(FConstraintHandle *this)

{
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ = (longlong)&___7FConstraintHandle_Chaos__6B_;
  if (this->GraphEdge != (FPBDIslandConstraint *)0x0) {
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

// GetNetLinearImpulse @ 1438bb290

TVector<float,3> * __thiscall
Chaos::FConstraintHandle::GetNetLinearImpulse
          (FConstraintHandle *this,TVector<float,3> *__return_storage_ptr__)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// IsProbe @ 1438c39a0

bool __thiscall Chaos::FConstraintHandle::IsProbe(FConstraintHandle *this)

{
  return false;
}

// IsSleeping @ 1438c3a00

bool __thiscall Chaos::FConstraintHandle::IsSleeping(FConstraintHandle *this)

{
  return false;
}

// IsValid @ 1438c3c30

bool __thiscall Chaos::FConstraintHandle::IsValid(FConstraintHandle *this)

{
  return this->ConstraintContainer != (FPBDConstraintContainer *)0x0;
}

// SetIsSleeping @ 1438d2d00

void __thiscall Chaos::FConstraintHandle::SetIsSleeping(FConstraintHandle *this,bool param_1)

{
  return;
}

// SetWasAwakened @ 1438d49e0

void __thiscall Chaos::FConstraintHandle::SetWasAwakened(FConstraintHandle *this,bool param_1)

{
  return;
}

// SupportsPartialIslandSleeping @ 1438d89f0

bool __thiscall Chaos::FConstraintHandle::SupportsPartialIslandSleeping(FConstraintHandle *this)

{
  return false;
}

// SupportsSleeping @ 1438d8a00

bool __thiscall Chaos::FConstraintHandle::SupportsSleeping(FConstraintHandle *this)

{
  return false;
}

// WasAwakened @ 1438dc6a0

bool __thiscall Chaos::FConstraintHandle::WasAwakened(FConstraintHandle *this)

{
  return false;
}

// As<Chaos::FPBDCollisionConstraintHandle> @ 1439e9640

FPBDCollisionConstraintHandle * __thiscall
Chaos::FConstraintHandle::As<Chaos::FPBDCollisionConstraintHandle>(FConstraintHandle *this)

{
  FPBDConstraintContainer *pFVar1;
  FConstraintHandleTypeID *this_00;
  bool bVar2;
  int *piVar3;
  FName local_res8;
  FName local_res10;
  FName local_res18 [2];
  
  pFVar1 = this->ConstraintContainer;
  if (pFVar1 != (FPBDConstraintContainer *)0x0) {
    piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c);
    if ((*piVar3 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if ((*piVar3 < `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIntrusiveConstraintHandle::StaticType(void)'
                     ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIntrusiveConstraintHandle::StaticType(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIntrusiveConstraintHandle::StaticType(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        if ((*piVar3 < `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
                       ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          ::FName::FName(&local_res8,L"FConstraintHandle");
          `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
          ::__l2::STypeID.TypeName = local_res8;
          `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
          ::__l2::STypeID.BaseType = (FConstraintHandleTypeID *)0x0;
          _Init_thread_footer(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        ::FName::FName(&local_res10,L"FIntrusiveConstraintHandle");
        `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIntrusiveConstraintHandle::StaticType(void)'
        ::__l2::STypeID.TypeName = local_res10;
        `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIntrusiveConstraintHandle::StaticType(void)'
        ::__l2::STypeID.BaseType =
             &`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
              ::__l2::STypeID;
        _Init_thread_footer(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIntrusiveConstraintHandle::StaticType(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      ::FName::FName(local_res18,L"FCollisionConstraintHandle");
      STypeID.TypeName = local_res18[0];
      STypeID.BaseType =
           &`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIntrusiveConstraintHandle::StaticType(void)'
            ::__l2::STypeID;
      _Init_thread_footer(&::_TSS0);
    }
    if (STypeID.TypeName == (pFVar1->ConstraintHandleType).TypeName) {
      return (FPBDCollisionConstraintHandle *)this;
    }
    this_00 = (pFVar1->ConstraintHandleType).BaseType;
    if ((this_00 != (FConstraintHandleTypeID *)0x0) &&
       (bVar2 = FConstraintHandleTypeID::IsA(this_00,&STypeID), bVar2)) {
      return (FPBDCollisionConstraintHandle *)this;
    }
  }
  return (FPBDCollisionConstraintHandle *)0x0;
}

// As<Chaos::FPBDJointConstraintHandle> @ 143b82730

FPBDJointConstraintHandle * __thiscall
Chaos::FConstraintHandle::As<Chaos::FPBDJointConstraintHandle>(FConstraintHandle *this)

{
  FPBDConstraintContainer *pFVar1;
  FConstraintHandleTypeID *this_00;
  bool bVar2;
  int *piVar3;
  FName local_res8;
  FName local_res10;
  FName local_res18 [2];
  
  pFVar1 = this->ConstraintContainer;
  if (pFVar1 != (FPBDConstraintContainer *)0x0) {
    piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c);
    if ((*piVar3 < `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
                   ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      if ((*piVar3 < `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIndexedConstraintHandle::StaticType(void)'
                     ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIndexedConstraintHandle::StaticType(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIndexedConstraintHandle::StaticType(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        if ((*piVar3 < `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
                       ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          ::FName::FName(&local_res8,L"FConstraintHandle");
          `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
          ::__l2::STypeID.TypeName = local_res8;
          `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
          ::__l2::STypeID.BaseType = (FConstraintHandleTypeID *)0x0;
          _Init_thread_footer(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        ::FName::FName(&local_res10,L"FIndexedConstraintHandle");
        `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIndexedConstraintHandle::StaticType(void)'
        ::__l2::STypeID.TypeName = local_res10;
        `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIndexedConstraintHandle::StaticType(void)'
        ::__l2::STypeID.BaseType =
             &`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
              ::__l2::STypeID;
        _Init_thread_footer(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIndexedConstraintHandle::StaticType(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      ::FName::FName(local_res18,L"FJointConstraintHandle");
      `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
      ::__l2::STypeID.TypeName = local_res18[0];
      `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
      ::__l2::STypeID.BaseType =
           &`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIndexedConstraintHandle::StaticType(void)'
            ::__l2::STypeID;
      _Init_thread_footer(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    if (`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
        ::__l2::STypeID.TypeName == (pFVar1->ConstraintHandleType).TypeName) {
      return (FPBDJointConstraintHandle *)this;
    }
    this_00 = (pFVar1->ConstraintHandleType).BaseType;
    if ((this_00 != (FConstraintHandleTypeID *)0x0) &&
       (bVar2 = FConstraintHandleTypeID::IsA
                          (this_00,&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
                                    ::__l2::STypeID), bVar2)) {
      return (FPBDJointConstraintHandle *)this;
    }
  }
  return (FPBDJointConstraintHandle *)0x0;
}

// As<Chaos::FIndexedConstraintHandle> @ 143c803c0

FIndexedConstraintHandle * __thiscall
Chaos::FConstraintHandle::As<Chaos::FIndexedConstraintHandle>(FConstraintHandle *this)

{
  FPBDConstraintContainer *pFVar1;
  FConstraintHandleTypeID *this_00;
  bool bVar2;
  FConstraintHandleTypeID *pFVar3;
  
  pFVar1 = this->ConstraintContainer;
  if (pFVar1 != (FPBDConstraintContainer *)0x0) {
    pFVar3 = FIndexedConstraintHandle::StaticType();
    if (pFVar3->TypeName == (pFVar1->ConstraintHandleType).TypeName) {
      return (FIndexedConstraintHandle *)this;
    }
    this_00 = (pFVar1->ConstraintHandleType).BaseType;
    if ((this_00 != (FConstraintHandleTypeID *)0x0) &&
       (bVar2 = FConstraintHandleTypeID::IsA(this_00,pFVar3), bVar2)) {
      return (FIndexedConstraintHandle *)this;
    }
  }
  return (FIndexedConstraintHandle *)0x0;
}

// As<Chaos::FPBDSuspensionConstraintHandle> @ 143cbb070

FPBDSuspensionConstraintHandle * __thiscall
Chaos::FConstraintHandle::As<Chaos::FPBDSuspensionConstraintHandle>(FConstraintHandle *this)

{
  FPBDConstraintContainer *pFVar1;
  FConstraintHandleTypeID *this_00;
  bool bVar2;
  FConstraintHandleTypeID *pFVar3;
  
  pFVar1 = this->ConstraintContainer;
  if (pFVar1 != (FPBDConstraintContainer *)0x0) {
    pFVar3 = FPBDSuspensionConstraintHandle::StaticType();
    if (pFVar3->TypeName == (pFVar1->ConstraintHandleType).TypeName) {
      return (FPBDSuspensionConstraintHandle *)this;
    }
    this_00 = (pFVar1->ConstraintHandleType).BaseType;
    if ((this_00 != (FConstraintHandleTypeID *)0x0) &&
       (bVar2 = FConstraintHandleTypeID::IsA(this_00,pFVar3), bVar2)) {
      return (FPBDSuspensionConstraintHandle *)this;
    }
  }
  return (FPBDSuspensionConstraintHandle *)0x0;
}

// GetType @ 143e2cb80

FConstraintHandleTypeID * __thiscall Chaos::FConstraintHandle::GetType(FConstraintHandle *this)

{
  FName local_res8 [4];
  
  if (this->ConstraintContainer != (FPBDConstraintContainer *)0x0) {
    return &this->ConstraintContainer->ConstraintHandleType;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::InvalidType(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::InvalidType(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::InvalidType(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"InvalidConstraintHandle");
      `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::InvalidType(void)'
      ::__l2::STypeID.TypeName = local_res8[0];
      `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::InvalidType(void)'
      ::__l2::STypeID.BaseType = (FConstraintHandleTypeID *)0x0;
      _Init_thread_footer(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::InvalidType(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::InvalidType(void)'
          ::__l2::STypeID;
}

