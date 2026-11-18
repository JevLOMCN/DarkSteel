// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 5

// IsEnabled @ 143701850

bool __thiscall Chaos::FPBDCollisionConstraintHandle::IsEnabled(FPBDCollisionConstraintHandle *this)

{
  return (bool)(~((byte)this[0x24].field_0x14 >> 1) & 1);
}

// GetConstrainedParticles @ 14378fe70

TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> * __thiscall
Chaos::FPBDCollisionConstraintHandle::GetConstrainedParticles
          (FPBDCollisionConstraintHandle *this,
          TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  puVar1 = &local_18;
  local_18 = *(undefined8 *)&this[9].field_0x8;
  local_10 = *(undefined8 *)&this[9].field_0x10;
  do {
    *(undefined8 *)(((longlong)__return_storage_ptr__ - (longlong)&local_18) + (longlong)puVar1) =
         *puVar1;
    puVar1 = puVar1 + 1;
  } while (puVar1 != &local_8);
  return __return_storage_ptr__;
}

// IsProbe @ 143798370

bool __thiscall Chaos::FPBDCollisionConstraintHandle::IsProbe(FPBDCollisionConstraintHandle *this)

{
  return (bool)(this[0x24].field_0x15 & 1);
}

// SetEnabled @ 1439de590

void __thiscall
Chaos::FPBDCollisionConstraintHandle::SetEnabled(FPBDCollisionConstraintHandle *this,bool param_1)

{
  *(ushort *)&this[0x24].field_0x14 = *(ushort *)&this[0x24].field_0x14 & 0xfffd;
  *(ushort *)&this[0x24].field_0x14 = *(ushort *)&this[0x24].field_0x14 | (ushort)!param_1 * 2;
  return;
}

// StaticType @ 143a1bb20

FConstraintHandleTypeID * __cdecl Chaos::FPBDCollisionConstraintHandle::StaticType(void)

{
  int *piVar1;
  FName local_res8;
  FName local_res10;
  FName local_res18 [2];
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (*piVar1 < `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIntrusiveConstraintHandle::StaticType(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIntrusiveConstraintHandle::StaticType(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIntrusiveConstraintHandle::StaticType(void)'
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
      }
      ::FName::FName(local_res18,L"FCollisionConstraintHandle");
      STypeID.TypeName = local_res18[0];
      STypeID.BaseType =
           &`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIntrusiveConstraintHandle::StaticType(void)'
            ::__l2::STypeID;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &STypeID;
}

