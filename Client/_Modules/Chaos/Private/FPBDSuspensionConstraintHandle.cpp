// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// StaticType @ 143d74610

FConstraintHandleTypeID * __cdecl Chaos::FPBDSuspensionConstraintHandle::StaticType(void)

{
  FConstraintHandleTypeID *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDSuspensionConstraintHandle::StaticType(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDSuspensionConstraintHandle::StaticType(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDSuspensionConstraintHandle::StaticType(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = FIndexedConstraintHandle::StaticType();
      ::FName::FName(local_res8,L"FSuspensionConstraintHandle");
      `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDSuspensionConstraintHandle::StaticType(void)'
      ::__l2::STypeID.TypeName = local_res8[0];
      `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDSuspensionConstraintHandle::StaticType(void)'
      ::__l2::STypeID.BaseType = pFVar1;
      _Init_thread_footer(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDSuspensionConstraintHandle::StaticType(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDSuspensionConstraintHandle::StaticType(void)'
          ::__l2::STypeID;
}

// FPBDSuspensionConstraintHandle @ 143d91bf0

FPBDSuspensionConstraintHandle * __thiscall
Chaos::FPBDSuspensionConstraintHandle::FPBDSuspensionConstraintHandle
          (FPBDSuspensionConstraintHandle *this,FPBDSuspensionConstraints *param_1,int param_2)

{
  *(FPBDSuspensionConstraints **)&this->field_0x8 = param_1;
  *(undefined ***)this = &___7FPBDSuspensionConstraintHandle_Chaos__6B_;
  *(undefined8 *)&this->field_0x10 = 0;
  *(int *)&this->field_0x18 = param_2;
  return this;
}

// GetConstrainedParticles @ 143dab4d0

TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> * __thiscall
Chaos::FPBDSuspensionConstraintHandle::GetConstrainedParticles
          (FPBDSuspensionConstraintHandle *this,
          TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *__return_storage_ptr__)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *pTVar6;
  undefined8 *puVar7;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar1 = *(uint *)&this->field_0x18;
  lVar2 = *(longlong *)&this->field_0x8;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x30)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *)(*pcVar3)();
      return pTVar6;
    }
  }
  puVar7 = &local_18;
  local_18 = *(undefined8 *)(*(longlong *)(lVar2 + 0x28) + (longlong)(int)uVar1 * 8);
  local_10 = 0;
  do {
    *(undefined8 *)(((longlong)__return_storage_ptr__ - (longlong)&local_18) + (longlong)puVar7) =
         *puVar7;
    puVar7 = puVar7 + 1;
  } while (puVar7 != (undefined8 *)&stack0xfffffffffffffff8);
  return __return_storage_ptr__;
}

// GetSettings @ 143dac750

FPBDSuspensionSettings * __thiscall
Chaos::FPBDSuspensionConstraintHandle::GetSettings(FPBDSuspensionConstraintHandle *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FPBDSuspensionSettings *pFVar6;
  
  uVar1 = *(uint *)&this->field_0x18;
  lVar2 = *(longlong *)&this->field_0x8;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x50)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FPBDSuspensionSettings *)(*pcVar3)();
      return pFVar6;
    }
  }
  return (FPBDSuspensionSettings *)((longlong)(int)uVar1 * 0x88 + *(longlong *)(lVar2 + 0x48));
}

// GetSettings @ 143dac7d0

FPBDSuspensionSettings * __thiscall
Chaos::FPBDSuspensionConstraintHandle::GetSettings(FPBDSuspensionConstraintHandle *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FPBDSuspensionSettings *pFVar6;
  
  uVar1 = *(uint *)&this->field_0x18;
  lVar2 = *(longlong *)&this->field_0x8;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x50)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FPBDSuspensionSettings *)(*pcVar3)();
      return pFVar6;
    }
  }
  return (FPBDSuspensionSettings *)((longlong)(int)uVar1 * 0x88 + *(longlong *)(lVar2 + 0x48));
}

// SetSettings @ 143db9570

void __thiscall
Chaos::FPBDSuspensionConstraintHandle::SetSettings
          (FPBDSuspensionConstraintHandle *this,FPBDSuspensionSettings *param_1)

{
  undefined4 *puVar1;
  double *pdVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  bool bVar26;
  uint uVar27;
  longlong lVar28;
  
  uVar5 = *(uint *)&this->field_0x18;
  uVar8 = *(undefined4 *)param_1;
  uVar9 = *(undefined4 *)&param_1->field_0x4;
  uVar10 = *(undefined4 *)&param_1->HardstopStiffness;
  uVar11 = *(undefined4 *)((longlong)&param_1->HardstopStiffness + 4);
  dVar12 = param_1->HardstopVelocityCompensation;
  dVar13 = param_1->SpringPreload;
  dVar14 = param_1->SpringStiffness;
  dVar15 = param_1->SpringDamping;
  dVar16 = param_1->MinLength;
  dVar17 = param_1->MaxLength;
  uVar18 = *(undefined8 *)&param_1->Axis;
  uVar19 = *(undefined8 *)&(param_1->Axis).field_0x8;
  uVar20 = *(undefined8 *)&(param_1->Axis).field_0x10;
  uVar21 = *(undefined8 *)&param_1->Target;
  uVar22 = *(undefined8 *)&(param_1->Target).field_0x8;
  uVar23 = *(undefined8 *)&(param_1->Target).field_0x10;
  uVar24 = *(undefined8 *)&param_1->Normal;
  uVar25 = *(undefined8 *)&(param_1->Normal).field_0x8;
  uVar4 = *(undefined8 *)&(param_1->Normal).field_0x10;
  lVar6 = *(longlong *)&this->field_0x8;
  uVar27 = 0;
  if ((int)uVar5 < *(int *)(lVar6 + 0x50)) {
    uVar27 = ~uVar5 >> 0x1f;
  }
  if ((uVar27 == 0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar26)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar6 = *(longlong *)(lVar6 + 0x48);
  lVar28 = (longlong)(int)uVar5 * 0x88;
  puVar1 = (undefined4 *)(lVar28 + lVar6);
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  puVar1[2] = uVar10;
  puVar1[3] = uVar11;
  pdVar2 = (double *)(lVar28 + 0x10 + lVar6);
  *pdVar2 = dVar12;
  pdVar2[1] = dVar13;
  pdVar2 = (double *)(lVar28 + 0x20 + lVar6);
  *pdVar2 = dVar14;
  pdVar2[1] = dVar15;
  pdVar2 = (double *)(lVar28 + 0x30 + lVar6);
  *pdVar2 = dVar16;
  pdVar2[1] = dVar17;
  puVar3 = (undefined8 *)(lVar28 + 0x40 + lVar6);
  *puVar3 = uVar18;
  puVar3[1] = uVar19;
  puVar3 = (undefined8 *)(lVar28 + 0x50 + lVar6);
  *puVar3 = uVar20;
  puVar3[1] = uVar21;
  puVar3 = (undefined8 *)(lVar28 + 0x60 + lVar6);
  *puVar3 = uVar22;
  puVar3[1] = uVar23;
  puVar3 = (undefined8 *)(lVar28 + 0x70 + lVar6);
  *puVar3 = uVar24;
  puVar3[1] = uVar25;
  *(undefined8 *)(lVar28 + 0x80 + lVar6) = uVar4;
  return;
}

