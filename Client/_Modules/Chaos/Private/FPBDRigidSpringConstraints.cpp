// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 19

// FPBDRigidSpringConstraints @ 143d01360

FPBDRigidSpringConstraints * __thiscall
Chaos::FPBDRigidSpringConstraints::FPBDRigidSpringConstraints(FPBDRigidSpringConstraints *this)

{
  FConstraintHandleTypeID *pFVar1;
  FName local_res8;
  FConstraintHandleTypeID local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDRigidSpringConstraintHandle::StaticType(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDRigidSpringConstraintHandle::StaticType(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDRigidSpringConstraintHandle::StaticType(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = FIndexedConstraintHandle::StaticType();
      ::FName::FName(&local_res8,L"FRigidSpringConstraintHandle");
      `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDRigidSpringConstraintHandle::StaticType(void)'
      ::__l2::STypeID.TypeName = local_res8;
      `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDRigidSpringConstraintHandle::StaticType(void)'
      ::__l2::STypeID.BaseType = pFVar1;
      _Init_thread_footer(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDRigidSpringConstraintHandle::StaticType(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_18.BaseType =
       `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDRigidSpringConstraintHandle::StaticType(void)'
       ::__l2::STypeID.BaseType;
  local_18.TypeName =
       `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDRigidSpringConstraintHandle::StaticType(void)'
       ::__l2::STypeID.TypeName;
  FPBDConstraintContainer::FPBDConstraintContainer((FPBDConstraintContainer *)this,&local_18);
  this->_padding_ = (longlong)&___7FPBDRigidSpringConstraints_Chaos__6B_;
  (this->Constraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Constraints).ArrayNum = 0;
  (this->Constraints).ArrayMax = 0;
  (this->Distances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Distances).ArrayNum = 0;
  (this->Distances).ArrayMax = 0;
  (this->SpringSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpringSettings).ArrayNum = 0;
  (this->SpringSettings).ArrayMax = 0;
  (this->ConstraintSolverBodies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintSolverBodies).ArrayNum = 0;
  (this->ConstraintSolverBodies).ArrayMax = 0;
  (this->Handles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Handles).ArrayNum = 0;
  (this->Handles).ArrayMax = 0;
  return this;
}

// ~FPBDRigidSpringConstraints @ 143d033e0

void __thiscall
Chaos::FPBDRigidSpringConstraints::~FPBDRigidSpringConstraints(FPBDRigidSpringConstraints *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FPBDRigidSpringConstraints_Chaos__6B_;
  pFVar1 = (this->Handles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstraintSolverBodies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SpringSettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Distances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Constraints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPBDConstraintContainer::~FPBDConstraintContainer((FPBDConstraintContainer *)this);
  return;
}

// AddBodies @ 143d39ad0

void __thiscall
Chaos::FPBDRigidSpringConstraints::AddBodies
          (FPBDRigidSpringConstraints *this,int param_1,FSolverBodyContainer *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FSolverBody *pFVar5;
  FSolverBody *pFVar6;
  longlong lVar7;
  uint uVar8;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar7 = (longlong)param_1;
  uVar8 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < (this->Constraints).ArrayNum) {
    uVar4 = uVar8;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar5 = FSolverBodyContainer::FindOrAdd
                     (param_2,(FGenericParticleHandleImp)
                              *(FGenericParticleHandleImp *)
                               &(this->Constraints).AllocatorInstance.Data[lVar7 * 0x10].field_0x0);
  uVar4 = 0;
  if (param_1 < (this->Constraints).ArrayNum) {
    uVar4 = uVar8;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar6 = FSolverBodyContainer::FindOrAdd
                     (param_2,(FGenericParticleHandleImp)
                              *(FGenericParticleHandleImp *)
                               &(this->Constraints).AllocatorInstance.Data[lVar7 * 0x10 + 8].
                                field_0x0);
  local_48 = SUB84(pFVar5,0);
  uStack_44 = (undefined4)((ulonglong)pFVar5 >> 0x20);
  uStack_40 = SUB84(pFVar6,0);
  uStack_3c = (undefined4)((ulonglong)pFVar6 >> 0x20);
  uVar4 = 0;
  if (param_1 < (this->ConstraintSolverBodies).ArrayNum) {
    uVar4 = uVar8;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->ConstraintSolverBodies).AllocatorInstance.Data + lVar7 * 0x10;
  *(undefined4 *)pFVar1 = local_48;
  *(undefined4 *)(pFVar1 + 4) = uStack_44;
  *(undefined4 *)(pFVar1 + 8) = uStack_40;
  *(undefined4 *)(pFVar1 + 0xc) = uStack_3c;
  return;
}

// AddBodies @ 143d39c40

void __thiscall
Chaos::FPBDRigidSpringConstraints::AddBodies
          (FPBDRigidSpringConstraints *this,FSolverBodyContainer *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FSolverBody *pFVar5;
  FSolverBody *pFVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar7 = 0;
  if (0 < (this->Constraints).ArrayNum) {
    lVar9 = 0;
    do {
      uVar8 = ~uVar7 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar7 < (this->Constraints).ArrayNum) {
        uVar4 = uVar8;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar5 = FSolverBodyContainer::FindOrAdd
                         (param_1,(FGenericParticleHandleImp)
                                  *(FGenericParticleHandleImp *)
                                   &(this->Constraints).AllocatorInstance.Data[lVar9].field_0x0);
      uVar4 = 0;
      if ((int)uVar7 < (this->Constraints).ArrayNum) {
        uVar4 = uVar8;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar6 = FSolverBodyContainer::FindOrAdd
                         (param_1,(FGenericParticleHandleImp)
                                  *(FGenericParticleHandleImp *)
                                   &(this->Constraints).AllocatorInstance.Data[lVar9 + 8].field_0x0)
      ;
      local_38 = SUB84(pFVar5,0);
      uStack_34 = (undefined4)((ulonglong)pFVar5 >> 0x20);
      uStack_30 = SUB84(pFVar6,0);
      uStack_2c = (undefined4)((ulonglong)pFVar6 >> 0x20);
      uVar4 = 0;
      if ((int)uVar7 < (this->ConstraintSolverBodies).ArrayNum) {
        uVar4 = uVar8;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = uVar7 + 1;
      pFVar1 = (this->ConstraintSolverBodies).AllocatorInstance.Data + lVar9;
      *(undefined4 *)pFVar1 = local_38;
      *(undefined4 *)(pFVar1 + 4) = uStack_34;
      *(undefined4 *)(pFVar1 + 8) = uStack_30;
      *(undefined4 *)(pFVar1 + 0xc) = uStack_2c;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar7 < (this->Constraints).ArrayNum);
  }
  return;
}

// AddBodies @ 143d39dc0

void __thiscall
Chaos::FPBDRigidSpringConstraints::AddBodies
          (FPBDRigidSpringConstraints *this,TArrayView<int,int> *param_1,
          FSolverBodyContainer *param_2)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FSolverBody *pFVar7;
  FSolverBody *pFVar8;
  uint uVar9;
  longlong lVar10;
  uint *puVar11;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  puVar11 = (uint *)param_1->DataPtr;
  puVar1 = puVar11 + param_1->ArrayNum;
  while( true ) {
    if (puVar11 == puVar1) {
      return;
    }
    uVar3 = *puVar11;
    lVar10 = (longlong)(int)uVar3;
    uVar9 = ~uVar3 >> 0x1f;
    uVar6 = 0;
    if ((int)uVar3 < (this->Constraints).ArrayNum) {
      uVar6 = uVar9;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar7 = FSolverBodyContainer::FindOrAdd
                       (param_2,(FGenericParticleHandleImp)
                                *(FGenericParticleHandleImp *)
                                 &(this->Constraints).AllocatorInstance.Data[lVar10 * 0x10].
                                  field_0x0);
    uVar6 = 0;
    if ((int)uVar3 < (this->Constraints).ArrayNum) {
      uVar6 = uVar9;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar8 = FSolverBodyContainer::FindOrAdd
                       (param_2,(FGenericParticleHandleImp)
                                *(FGenericParticleHandleImp *)
                                 &(this->Constraints).AllocatorInstance.Data[lVar10 * 0x10 + 8].
                                  field_0x0);
    local_58 = SUB84(pFVar7,0);
    uStack_54 = (undefined4)((ulonglong)pFVar7 >> 0x20);
    uStack_50 = SUB84(pFVar8,0);
    uStack_4c = (undefined4)((ulonglong)pFVar8 >> 0x20);
    uVar6 = 0;
    if ((int)uVar3 < (this->ConstraintSolverBodies).ArrayNum) {
      uVar6 = uVar9;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    puVar11 = puVar11 + 1;
    pFVar2 = (this->ConstraintSolverBodies).AllocatorInstance.Data + lVar10 * 0x10;
    *(undefined4 *)pFVar2 = local_58;
    *(undefined4 *)(pFVar2 + 4) = uStack_54;
    *(undefined4 *)(pFVar2 + 8) = uStack_50;
    *(undefined4 *)(pFVar2 + 0xc) = uStack_4c;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// AddConstraint @ 143d39f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPBDRigidSpringConstraintHandle * __thiscall
Chaos::FPBDRigidSpringConstraints::AddConstraint
          (FPBDRigidSpringConstraints *this,
          TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *param_1,
          TVector<Chaos::TVector<double,3>,2> *param_2,double param_3,double param_4,double param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  TGeometryParticleHandleImp<double,3,1> *pTVar7;
  FPBDRigidSpringConstraintHandle *pFVar8;
  uint uVar9;
  TGeometryParticleHandleImp<double,3,1> *pTVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auStack_e8 [32];
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined1 local_98 [8];
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> local_90;
  TGeometryParticleHandleImp<double,3,1> *local_80;
  undefined1 auStack_78 [8];
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_e8;
  iVar5 = (this->Handles).ArrayNum;
  pTVar7 = ::operator_new(0x20);
  pTVar10 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  local_98 = (undefined1  [8])pTVar10;
  if (pTVar7 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pTVar7->_padding_ = (longlong)this;
    pTVar7->_padding_ = (longlong)&___7FPBDRigidSpringConstraintHandle_Chaos__6B_;
    *(undefined8 *)&pTVar7->HandleIdx = 0;
    *(int *)&pTVar7[1]._padding_ = iVar5;
    local_98 = (undefined1  [8])pTVar7;
  }
  pFVar2 = (this->Handles).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_98) &&
     (lVar11 = (longlong)(this->Handles).ArrayMax,
     (FScriptContainerElement *)local_98 < pFVar2 + lVar11 * 8)) {
    local_b0 = (longlong)(this->Handles).ArrayNum;
    local_a8 = 8;
    local_c8 = (TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *)local_98;
    local_c0 = pFVar2;
    local_b8 = lVar11;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FPBDRigidSpringConstraintHandle *)(*pcVar3)();
      return pFVar8;
    }
  }
  iVar5 = (this->Handles).ArrayNum;
  piVar1 = &(this->Handles).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Handles).AllocatorInstance,piVar1);
  }
  (this->Handles).ArrayNum = iVar5 + 1;
  *(undefined1 (*) [8])((this->Handles).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_98;
  pFVar2 = (this->Constraints).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) &&
     (lVar11 = (longlong)(this->Constraints).ArrayMax, param_1 < pFVar2 + lVar11 * 0x10)) {
    local_b0 = (longlong)(this->Constraints).ArrayNum;
    local_a8 = 0x10;
    local_c8 = param_1;
    local_c0 = pFVar2;
    local_b8 = lVar11;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FPBDRigidSpringConstraintHandle *)(*pcVar3)();
      return pFVar8;
    }
  }
  iVar5 = (this->Constraints).ArrayNum;
  piVar1 = &(this->Constraints).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->Constraints).AllocatorInstance,piVar1);
  }
  (this->Constraints).ArrayNum = iVar5 + 1;
  piVar1 = &(this->SpringSettings).ArrayMax;
  pTVar7 = param_1->V[1];
  pFVar2 = (this->Constraints).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  *(TGeometryParticleHandleImp<double,3,1> **)pFVar2 = param_1->V[0];
  *(TGeometryParticleHandleImp<double,3,1> **)(pFVar2 + 8) = pTVar7;
  iVar6 = (this->SpringSettings).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->SpringSettings).AllocatorInstance,piVar1);
  }
  (this->SpringSettings).ArrayNum = iVar6 + 1;
  lVar11 = (longlong)iVar6;
  pFVar2 = (this->SpringSettings).AllocatorInstance.Data;
  *(double *)(pFVar2 + lVar11 * 0x18) = param_3;
  *(double *)(pFVar2 + lVar11 * 0x18 + 8) = param_4;
  *(double *)(pFVar2 + lVar11 * 0x18 + 0x10) = param_5;
  pFVar2 = (this->Distances).AllocatorInstance.Data;
  local_70.V[0] = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  local_70.V[1] = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  if ((pFVar2 <= (FScriptContainerElement *)&local_70) &&
     (lVar11 = (longlong)(this->Distances).ArrayMax,
     (FScriptContainerElement *)&local_70 < pFVar2 + lVar11 * 0x30)) {
    local_b0 = (longlong)(this->Distances).ArrayNum;
    local_a8 = 0x30;
    local_c8 = &local_70;
    local_c0 = pFVar2;
    local_b8 = lVar11;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FPBDRigidSpringConstraintHandle *)(*pcVar3)();
      return pFVar8;
    }
  }
  iVar6 = (this->Distances).ArrayNum;
  piVar1 = &(this->Distances).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&(this->Distances).AllocatorInstance,piVar1);
  }
  (this->Distances).ArrayNum = iVar6 + 1;
  lVar11 = (longlong)iVar6;
  pFVar2 = (this->Distances).AllocatorInstance.Data;
  *(TGeometryParticleHandleImp<double,3,1> **)(pFVar2 + lVar11 * 0x30) = local_70.V[0];
  *(TGeometryParticleHandleImp<double,3,1> **)(pFVar2 + lVar11 * 0x30 + 8) = local_70.V[1];
  *(undefined8 *)(pFVar2 + lVar11 * 0x30 + 0x10) = local_60;
  *(undefined8 *)(pFVar2 + lVar11 * 0x30 + 0x10 + 8) = uStack_58;
  *(undefined8 *)(pFVar2 + lVar11 * 0x30 + 0x20) = local_50;
  *(undefined8 *)(pFVar2 + lVar11 * 0x30 + 0x20 + 8) = uStack_48;
  InitDistance(this,iVar5,param_2->V,param_2->V + 1);
  local_80 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  auStack_78 = (undefined1  [8])0x0;
  do {
    *(undefined8 *)(&stack0x00000000 + (longlong)&pTVar10[-6]._padding_) =
         *(undefined8 *)((longlong)&local_80 + (longlong)pTVar10);
    pTVar10 = (TGeometryParticleHandleImp<double,3,1> *)&pTVar10->_padding_;
  } while ((TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *)
           ((longlong)&local_80 + (longlong)pTVar10) != &local_70);
  pFVar2 = (this->ConstraintSolverBodies).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)(local_98 + 8)) &&
     (lVar11 = (longlong)(this->ConstraintSolverBodies).ArrayMax,
     (FScriptContainerElement *)(local_98 + 8) < pFVar2 + lVar11 * 0x10)) {
    local_b0 = (longlong)(this->ConstraintSolverBodies).ArrayNum;
    local_a8 = 0x10;
    local_c8 = (TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *)(local_98 + 8);
    local_c0 = pFVar2;
    local_b8 = lVar11;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FPBDRigidSpringConstraintHandle *)(*pcVar3)();
      return pFVar8;
    }
  }
  iVar5 = (this->ConstraintSolverBodies).ArrayNum;
  piVar1 = &(this->ConstraintSolverBodies).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->ConstraintSolverBodies).AllocatorInstance,piVar1);
  }
  (this->ConstraintSolverBodies).ArrayNum = iVar5 + 1;
  pFVar2 = (this->ConstraintSolverBodies).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  *(TGeometryParticleHandleImp<double,3,1> **)pFVar2 = local_90.V[0];
  *(TGeometryParticleHandleImp<double,3,1> **)(pFVar2 + 8) = local_90.V[1];
  iVar5 = (this->Handles).ArrayNum;
  local_c0 = (FScriptContainerElement *)(longlong)iVar5;
  uVar9 = iVar5 - 1;
  uVar12 = 0;
  if ((int)uVar9 < iVar5) {
    uVar12 = ~uVar9 >> 0x1f;
  }
  if (uVar12 == 0) {
    local_c8 = (TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *)(longlong)(int)uVar9;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FPBDRigidSpringConstraintHandle *)(*pcVar3)();
      return pFVar8;
    }
  }
  return *(FPBDRigidSpringConstraintHandle **)
          ((this->Handles).AllocatorInstance.Data + (longlong)(this->Handles).ArrayNum * 8 + -8);
}

// AddConstraintsToGraph @ 143d3a970

void __thiscall
Chaos::FPBDRigidSpringConstraints::AddConstraintsToGraph
          (FPBDRigidSpringConstraints *this,FPBDIslandManager *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FConstraintHandle *pFVar3;
  FPBDIslandConstraint *pFVar4;
  longlong lVar5;
  char cVar6;
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *pTVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined1 local_38 [16];
  
  pFVar8 = (this->Handles).AllocatorInstance.Data;
  iVar2 = (this->Handles).ArrayNum;
  lVar5 = this->_padding_;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
LAB_143d3a9a2:
  do {
    if ((this->Handles).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FPBDRigidSpringConstraintHandle_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) {
      return;
    }
    pFVar3 = *(FConstraintHandle **)pFVar8;
    if (pFVar3 != (FConstraintHandle *)0x0) {
      pFVar4 = pFVar3->GraphEdge;
      cVar6 = (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3);
      if (cVar6 == '\0') {
        if (pFVar4 != (FPBDIslandConstraint *)0x0) {
          Chaos::Private::FPBDIslandManager::RemoveConstraint(param_1,pFVar3);
        }
      }
      else if (pFVar4 == (FPBDIslandConstraint *)0x0) {
        pTVar7 = (TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *)
                 (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,local_38);
        Chaos::Private::FPBDIslandManager::AddConstraint(param_1,(int)lVar5,pFVar3,pTVar7);
        pFVar8 = pFVar8 + 8;
        goto LAB_143d3a9a2;
      }
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// ApplyPhase1Single @ 143d42e60

void __thiscall
Chaos::FPBDRigidSpringConstraints::ApplyPhase1Single
          (FPBDRigidSpringConstraints *this,double param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  FSolverBody *this_00;
  FSolverBody *this_01;
  FScriptContainerElement *pFVar14;
  code *pcVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  bool bVar22;
  uint uVar23;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  double dVar32;
  double dVar33;
  float fVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_e8;
  
  lVar24 = (longlong)param_2;
  uVar23 = (uint)~param_2 >> 0x1f;
  uVar37 = 0;
  if (param_2 < (this->ConstraintSolverBodies).ArrayNum) {
    uVar37 = uVar23;
  }
  if ((uVar37 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  if ((*(longlong *)((this->ConstraintSolverBodies).AllocatorInstance.Data + lVar24 * 0x10) == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("ConstraintSolverBodies[ConstraintIndex][0] != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidSpringConstraints.cpp"
                          ,199,L""), bVar22)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  uVar35 = 0;
  uVar37 = uVar35;
  if (param_2 < (this->ConstraintSolverBodies).ArrayNum) {
    uVar37 = uVar23;
  }
  if ((uVar37 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  if ((*(longlong *)((this->ConstraintSolverBodies).AllocatorInstance.Data + lVar24 * 0x10 + 8) == 0
      ) && (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("ConstraintSolverBodies[ConstraintIndex][1] != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidSpringConstraints.cpp"
                                ,200,L""), bVar22)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  uVar37 = uVar35;
  if (param_2 < (this->ConstraintSolverBodies).ArrayNum) {
    uVar37 = uVar23;
  }
  if ((uVar37 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  this_00 = *(FSolverBody **)((this->ConstraintSolverBodies).AllocatorInstance.Data + lVar24 * 0x10)
  ;
  uVar37 = uVar35;
  if (param_2 < (this->ConstraintSolverBodies).ArrayNum) {
    uVar37 = uVar23;
  }
  if ((uVar37 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  this_01 = *(FSolverBody **)
             ((this->ConstraintSolverBodies).AllocatorInstance.Data + lVar24 * 0x10 + 8);
  dVar17 = (double)*(float *)&(this_00->State).DP.field_0x8 +
           *(double *)&(this_00->State).P.field_0x10;
  dVar32 = (double)*(float *)&(this_00->State).DP.field_0x4 +
           *(double *)&(this_00->State).P.field_0x8;
  dVar25 = (double)*(float *)&(this_00->State).DP + *(double *)&(this_00->State).P;
  local_180 = dVar17;
  local_178 = dVar32;
  FSolverBody::CorrectedQ(this_00,(TRotation<double,3> *)&local_138);
  dVar26 = (double)*(float *)&(this_01->State).DP.field_0x8 +
           *(double *)&(this_01->State).P.field_0x10;
  dVar27 = (double)*(float *)&(this_01->State).DP.field_0x4 +
           *(double *)&(this_01->State).P.field_0x8;
  dVar28 = (double)*(float *)&(this_01->State).DP + *(double *)&(this_01->State).P;
  FSolverBody::CorrectedQ(this_01,(TRotation<double,3> *)&local_118);
  fVar12 = __real_00800000;
  if ((__real_00800000 < (this_00->State).InvM) || (__real_00800000 < (this_01->State).InvM)) {
    if (param_2 < (this->Distances).ArrayNum) {
      uVar35 = uVar23;
    }
    if ((uVar35 == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    pFVar14 = (this->Distances).AllocatorInstance.Data;
    lVar24 = lVar24 * 0x30;
    pFVar1 = pFVar14 + lVar24;
    dVar20 = *(double *)pFVar1;
    dVar13 = *(double *)(pFVar1 + 8);
    local_e8 = *(double *)(pFVar14 + lVar24 + 0x10);
    uVar37 = 0;
    if (param_2 < (this->Distances).ArrayNum) {
      uVar37 = uVar23;
    }
    dVar16 = local_e8 * local_130 - dVar13 * local_128;
    dVar16 = dVar16 + dVar16;
    dVar18 = dVar20 * local_128 - local_e8 * local_138;
    dVar18 = dVar18 + dVar18;
    dVar33 = dVar13 * local_138 - dVar20 * local_130;
    dVar33 = dVar33 + dVar33;
    dVar20 = (dVar33 * local_130 - dVar18 * local_128) + dVar16 * local_120 + dVar20 + dVar25;
    dVar17 = (dVar18 * local_138 - dVar16 * local_130) + dVar33 * local_120 + local_e8 + dVar17;
    dVar32 = (dVar16 * local_128 - dVar33 * local_138) + dVar18 * local_120 + dVar13 + dVar32;
    local_198 = dVar20;
    local_190 = dVar32;
    local_188 = dVar17;
    if ((uVar37 == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    pFVar14 = (this->Distances).AllocatorInstance.Data;
    pFVar1 = pFVar14 + lVar24 + 0x18;
    dVar19 = *(double *)pFVar1;
    dVar21 = *(double *)(pFVar1 + 8);
    dVar13 = *(double *)(pFVar14 + lVar24 + 0x28);
    dVar16 = dVar13 * local_110 - dVar21 * local_108;
    dVar16 = dVar16 + dVar16;
    dVar18 = dVar19 * local_108 - dVar13 * local_118;
    dVar18 = dVar18 + dVar18;
    dVar33 = dVar21 * local_118 - dVar19 * local_110;
    dVar33 = dVar33 + dVar33;
    dVar19 = (dVar33 * local_110 - dVar18 * local_108) + dVar16 * local_100 + dVar19 + dVar28;
    dVar13 = (dVar18 * local_118 - dVar16 * local_110) + dVar33 * local_100 + dVar13 + dVar26;
    dVar33 = (dVar16 * local_108 - dVar33 * local_118) + dVar18 * local_100 + dVar21 + dVar27;
    local_170 = dVar19;
    local_168 = dVar33;
    local_160 = dVar13;
    GetDelta(this,(TVector<double,3> *)&local_158,param_2,(TVector<double,3> *)&local_198,
             (TVector<double,3> *)&local_170);
    fVar2 = (this_00->State).InvM;
    if (fVar12 < fVar2) {
      dVar20 = dVar20 - dVar25;
      dVar25 = (double)fVar2;
      fVar31 = (float)((dVar32 - local_178) * local_148 - (dVar17 - local_180) * local_150);
      fVar34 = (float)(local_158 * (dVar17 - local_180) - local_148 * dVar20);
      fVar2 = *(float *)&(this_00->State).InvI;
      fVar3 = *(float *)&(this_00->State).InvI.field_0x4;
      fVar4 = *(float *)&(this_00->State).InvI.field_0x14;
      fVar5 = *(float *)&(this_00->State).InvI.field_0x24;
      fVar29 = (float)(local_150 * dVar20 - local_158 * (dVar32 - local_178));
      fVar6 = *(float *)&(this_00->State).InvI.field_0x20;
      fVar7 = *(float *)&(this_00->State).InvI.field_0x10;
      fVar8 = *(float *)&(this_00->State).InvI.field_0x8;
      fVar9 = *(float *)&(this_00->State).InvI.field_0x18;
      fVar10 = *(float *)&(this_00->State).InvI.field_0x28;
      *(float *)&(this_00->State).DP = (float)(local_158 * dVar25) + *(float *)&(this_00->State).DP;
      *(float *)&(this_00->State).DP.field_0x4 =
           (float)(local_150 * dVar25) + *(float *)&(this_00->State).DP.field_0x4;
      *(float *)&(this_00->State).DP.field_0x8 =
           (float)(local_148 * dVar25) + *(float *)&(this_00->State).DP.field_0x8;
      fVar11 = *(float *)&(this_00->State).DQ.field_0x4;
      fVar30 = *(float *)&(this_00->State).DQ.field_0x8;
      *(float *)&(this_00->State).DQ =
           fVar34 * fVar3 + fVar31 * fVar2 + fVar29 * fVar8 + *(float *)&(this_00->State).DQ;
      *(float *)&(this_00->State).DQ.field_0x4 =
           fVar34 * fVar4 + fVar31 * fVar7 + fVar29 * fVar9 + fVar11;
      *(float *)&(this_00->State).DQ.field_0x8 =
           fVar34 * fVar5 + fVar31 * fVar6 + fVar29 * fVar10 + fVar30;
      FSolverBody::UpdateRotationDependentState(this_00);
    }
    fVar2 = (this_01->State).InvM;
    if (fVar12 < fVar2) {
      dVar13 = dVar13 - dVar26;
      uVar37 = (uint)__xmm_80000000000000008000000000000000;
      uVar38 = SUB84(local_158,0) ^ uVar37;
      uVar23 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      uVar39 = (uint)((ulonglong)local_158 >> 0x20) ^ uVar23;
      dVar19 = dVar19 - dVar28;
      uVar35 = SUB84(local_148,0) ^ uVar37;
      uVar36 = (uint)((ulonglong)local_148 >> 0x20) ^ uVar23;
      dVar33 = dVar33 - dVar27;
      uVar37 = SUB84(local_150,0) ^ uVar37;
      uVar23 = (uint)((ulonglong)local_150 >> 0x20) ^ uVar23;
      dVar17 = (double)fVar2;
      fVar29 = (float)(dVar33 * (double)CONCAT44(uVar36,uVar35) -
                      dVar13 * (double)CONCAT44(uVar23,uVar37));
      fVar12 = *(float *)&(this_01->State).InvI;
      fVar31 = (float)(dVar13 * (double)CONCAT44(uVar39,uVar38) -
                      dVar19 * (double)CONCAT44(uVar36,uVar35));
      fVar30 = (float)(dVar19 * (double)CONCAT44(uVar23,uVar37) -
                      dVar33 * (double)CONCAT44(uVar39,uVar38));
      fVar2 = *(float *)&(this_01->State).InvI.field_0x4;
      fVar3 = *(float *)&(this_01->State).InvI.field_0x8;
      fVar4 = *(float *)&(this_01->State).InvI.field_0x14;
      fVar5 = *(float *)&(this_01->State).InvI.field_0x24;
      fVar6 = *(float *)&(this_01->State).InvI.field_0x10;
      fVar7 = *(float *)&(this_01->State).InvI.field_0x20;
      fVar8 = *(float *)&(this_01->State).InvI.field_0x28;
      fVar9 = *(float *)&(this_01->State).InvI.field_0x18;
      *(float *)&(this_01->State).DP =
           (float)(dVar17 * (double)CONCAT44(uVar39,uVar38)) + *(float *)&(this_01->State).DP;
      fVar10 = *(float *)&(this_01->State).DP.field_0x8;
      *(float *)&(this_01->State).DP.field_0x4 =
           (float)(dVar17 * (double)CONCAT44(uVar23,uVar37)) +
           *(float *)&(this_01->State).DP.field_0x4;
      *(float *)&(this_01->State).DP.field_0x8 =
           (float)(dVar17 * (double)CONCAT44(uVar36,uVar35)) + fVar10;
      fVar10 = *(float *)&(this_01->State).DQ.field_0x4;
      fVar11 = *(float *)&(this_01->State).DQ.field_0x8;
      *(float *)&(this_01->State).DQ =
           fVar31 * fVar2 + fVar29 * fVar12 + fVar30 * fVar3 + *(float *)&(this_01->State).DQ;
      *(float *)&(this_01->State).DQ.field_0x4 =
           fVar31 * fVar4 + fVar29 * fVar6 + fVar30 * fVar9 + fVar10;
      *(float *)&(this_01->State).DQ.field_0x8 =
           fVar31 * fVar5 + fVar29 * fVar7 + fVar30 * fVar8 + fVar11;
      FSolverBody::UpdateRotationDependentState(this_01);
    }
  }
  return;
}

// ApplyPositionConstraints @ 143d439c0

void __thiscall
Chaos::FPBDRigidSpringConstraints::ApplyPositionConstraints
          (FPBDRigidSpringConstraints *this,TArrayView<int,int> *param_1,double param_2,int param_3,
          int param_4)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = param_1->DataPtr;
  piVar1 = piVar2 + param_1->ArrayNum;
  for (; piVar2 != piVar1; piVar2 = piVar2 + 1) {
    ApplyPhase1Single(this,param_2,*piVar2);
  }
  return;
}

// ApplyPositionConstraints @ 143d43a30

void __thiscall
Chaos::FPBDRigidSpringConstraints::ApplyPositionConstraints
          (FPBDRigidSpringConstraints *this,double param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < (this->Constraints).ArrayNum) {
    do {
      ApplyPhase1Single(this,param_1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (this->Constraints).ArrayNum);
  }
  return;
}

// GetDelta @ 143d55590

TVector<double,3> * __thiscall
Chaos::FPBDRigidSpringConstraints::GetDelta
          (FPBDRigidSpringConstraints *this,TVector<double,3> *__return_storage_ptr__,int param_1,
          TVector<double,3> *param_2,TVector<double,3> *param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  TVector<double,3> *pTVar11;
  uint uVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 unaff_XMM7 [16];
  undefined1 auVar18 [16];
  
  lVar13 = (longlong)param_1;
  uVar12 = (uint)~param_1 >> 0x1f;
  uVar10 = 0;
  if (param_1 < (this->ConstraintSolverBodies).ArrayNum) {
    uVar10 = uVar12;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TVector<double,3> *)(*pcVar6)();
    return pTVar11;
  }
  lVar4 = *(longlong *)((this->ConstraintSolverBodies).AllocatorInstance.Data + lVar13 * 0x10);
  uVar10 = 0;
  if (param_1 < (this->ConstraintSolverBodies).ArrayNum) {
    uVar10 = uVar12;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TVector<double,3> *)(*pcVar6)();
    return pTVar11;
  }
  dVar7 = __real_3ff0000000000000;
  lVar5 = *(longlong *)((this->ConstraintSolverBodies).AllocatorInstance.Data + lVar13 * 0x10 + 8);
  if ((__real_00800000 < *(float *)(lVar4 + 0x134)) || (__real_00800000 < *(float *)(lVar5 + 0x134))
     ) {
    dVar15 = *(double *)&param_3->field_0x8 - *(double *)&param_2->field_0x8;
    dVar16 = *(double *)param_3 - *(double *)param_2;
    dVar14 = *(double *)&param_3->field_0x10 - *(double *)&param_2->field_0x10;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = dVar16 * dVar16 + dVar15 * dVar15 + dVar14 * dVar14;
    auVar18 = sqrtpd(unaff_XMM7,auVar18);
    dVar17 = auVar18._0_8_;
    if (__real_3e7ad7f29abcaf48 <= dVar17) {
      uVar10 = 0;
      if (param_1 < (this->SpringSettings).ArrayNum) {
        uVar10 = uVar12;
      }
      dVar8 = __real_3ff0000000000000 / dVar17;
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TVector<double,3> *)(*pcVar6)();
        return pTVar11;
      }
      fVar1 = *(float *)(lVar5 + 0x134);
      dVar17 = dVar17 - *(double *)
                         ((this->SpringSettings).AllocatorInstance.Data + lVar13 * 0x18 + 0x10);
      fVar2 = *(float *)(lVar4 + 0x134);
      uVar10 = 0;
      if (param_1 < (this->SpringSettings).ArrayNum) {
        uVar10 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TVector<double,3> *)(*pcVar6)();
        return pTVar11;
      }
      dVar7 = dVar7 / (double)(fVar1 + fVar2);
      dVar3 = *(double *)((this->SpringSettings).AllocatorInstance.Data + lVar13 * 0x18);
      *(double *)__return_storage_ptr__ = dVar3 * dVar17 * dVar8 * dVar16 * dVar7;
      *(double *)&__return_storage_ptr__->field_0x8 = dVar3 * dVar17 * dVar8 * dVar15 * dVar7;
      *(double *)&__return_storage_ptr__->field_0x10 = dVar3 * dVar17 * dVar8 * dVar14 * dVar7;
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  return __return_storage_ptr__;
}

// GetNumConstraints @ 143d562f0

int __thiscall
Chaos::FPBDRigidSpringConstraints::GetNumConstraints(FPBDRigidSpringConstraints *this)

{
  return (this->Constraints).ArrayNum;
}

// InitDistance @ 143d58170

void __thiscall
Chaos::FPBDRigidSpringConstraints::InitDistance
          (FPBDRigidSpringConstraints *this,int param_1,TVector<double,3> *param_2,
          TVector<double,3> *param_3)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  TVector<double,3> *pTVar14;
  TVector<double> *pTVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  TQuat<double> local_c8;
  TQuat<double> local_a8;
  TVector<double> local_88;
  TVector<double> local_70 [2];
  
  lVar17 = (longlong)param_1;
  uVar18 = (uint)~param_1 >> 0x1f;
  uVar12 = 0;
  if (param_1 < (this->Constraints).ArrayNum) {
    uVar12 = uVar18;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar2 = (this->Constraints).AllocatorInstance.Data;
  plVar3 = *(longlong **)(pFVar2 + lVar17 * 0x10);
  plVar4 = *(longlong **)(pFVar2 + lVar17 * 0x10 + 8);
  lVar5 = *plVar3;
  uVar12 = *(uint *)(plVar3 + 1);
  lVar16 = (longlong)(int)uVar12;
  uVar13 = 0;
  if ((int)uVar12 < *(int *)(lVar5 + 0x50)) {
    uVar13 = ~uVar12 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar5 = *(longlong *)(lVar5 + 0x48);
  uVar1 = *(undefined8 *)(lVar5 + 8 + lVar16 * 0x10);
  local_c8.Z = (double)(float)uVar1 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  local_c8.W = (double)(float)((ulonglong)uVar1 >> 0x20) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  local_c8.X = (double)*(float *)(lVar5 + lVar16 * 0x10) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  local_c8.Y = (double)*(float *)(lVar5 + 4 + lVar16 * 0x10) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  pTVar14 = TParticles<double,3>::GetX((TParticles<double,3> *)*plVar3,(int)plVar3[1]);
  dVar8 = *(double *)&param_2->field_0x8 - *(double *)&pTVar14->field_0x8;
  local_108._s_0.Z = *(double *)&param_2->field_0x10 - *(double *)&pTVar14->field_0x10;
  local_108._8_4_ = SUB84(dVar8,0);
  local_108._0_8_ = *(double *)param_2 - *(double *)pTVar14;
  local_108._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  pTVar15 = UE::Math::TQuat<double>::RotateVector
                      (&local_c8,&local_88,(TVector<double> *)&local_108._s_0);
  dVar9 = (pTVar15->field0_0x0)._s_0.X;
  dVar10 = (pTVar15->field0_0x0)._s_0.Y;
  dVar8 = (pTVar15->field0_0x0)._s_0.Z;
  uVar12 = 0;
  if (param_1 < (this->Distances).ArrayNum) {
    uVar12 = uVar18;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar6 = (this->Distances).AllocatorInstance.Data;
  pFVar2 = pFVar6 + lVar17 * 0x30;
  *(double *)pFVar2 = dVar9;
  *(double *)(pFVar2 + 8) = dVar10;
  *(double *)(pFVar6 + lVar17 * 0x30 + 0x10) = dVar8;
  lVar5 = *plVar4;
  uVar12 = *(uint *)(plVar4 + 1);
  lVar16 = (longlong)(int)uVar12;
  uVar13 = 0;
  if ((int)uVar12 < *(int *)(lVar5 + 0x50)) {
    uVar13 = ~uVar12 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar5 = *(longlong *)(lVar5 + 0x48);
  uVar1 = *(undefined8 *)(lVar5 + 8 + lVar16 * 0x10);
  local_a8.Z = (double)(float)uVar1 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  local_a8.W = (double)(float)((ulonglong)uVar1 >> 0x20) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  local_a8.X = (double)*(float *)(lVar5 + lVar16 * 0x10) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  local_a8.Y = (double)*(float *)(lVar5 + 4 + lVar16 * 0x10) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  pTVar14 = TParticles<double,3>::GetX((TParticles<double,3> *)*plVar4,(int)plVar4[1]);
  dVar8 = *(double *)&param_3->field_0x8 - *(double *)&pTVar14->field_0x8;
  local_e8._s_0.Z = *(double *)&param_3->field_0x10 - *(double *)&pTVar14->field_0x10;
  local_e8._8_4_ = SUB84(dVar8,0);
  local_e8._0_8_ = *(double *)param_3 - *(double *)pTVar14;
  local_e8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  pTVar15 = UE::Math::TQuat<double>::RotateVector
                      (&local_a8,local_70,(TVector<double> *)&local_e8._s_0);
  dVar9 = (pTVar15->field0_0x0)._s_0.X;
  dVar10 = (pTVar15->field0_0x0)._s_0.Y;
  dVar8 = (pTVar15->field0_0x0)._s_0.Z;
  uVar12 = 0;
  if (param_1 < (this->Distances).ArrayNum) {
    uVar12 = uVar18;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar6 = (this->Distances).AllocatorInstance.Data;
  pFVar2 = pFVar6 + lVar17 * 0x30 + 0x18;
  *(double *)pFVar2 = dVar9;
  *(double *)(pFVar2 + 8) = dVar10;
  *(double *)(pFVar6 + lVar17 * 0x30 + 0x28) = dVar8;
  return;
}

// PrepareTick @ 143d5c370

void __thiscall Chaos::FPBDRigidSpringConstraints::PrepareTick(FPBDRigidSpringConstraints *this)

{
  return;
}

// RemoveConstraint @ 143d62dc0

void __thiscall
Chaos::FPBDRigidSpringConstraints::RemoveConstraint(FPBDRigidSpringConstraints *this,int param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  
  lVar11 = (longlong)param_1;
  uVar12 = ~param_1;
  uVar10 = uVar12 >> 0x1f;
  uVar7 = 0;
  if (param_1 < (this->Handles).ArrayNum) {
    uVar7 = uVar10;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  puVar3 = *(undefined8 **)((this->Handles).AllocatorInstance.Data + lVar11 * 8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7FConstraintHandle_Chaos__6B_;
    if (puVar3[2] != 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("GraphEdge == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConstraintHandle.h"
                         ,0x79,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    ::operator_delete(puVar3,0x20);
    uVar7 = 0;
    if (param_1 < (this->Handles).ArrayNum) {
      uVar7 = uVar10;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(undefined8 *)((this->Handles).AllocatorInstance.Data + lVar11 * 8) = 0;
  }
  uVar8 = 0;
  uVar7 = uVar8;
  if (param_1 < (this->Constraints).ArrayNum) {
    uVar7 = uVar10;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar2 = (this->Constraints).ArrayNum;
  pFVar4 = (this->Constraints).AllocatorInstance.Data;
  iVar9 = uVar12 + iVar2;
  if (1 < iVar9) {
    iVar9 = 1;
  }
  if (iVar9 != 0) {
    memmove(pFVar4 + lVar11 * 0x10,pFVar4 + (longlong)(iVar2 - iVar9) * 0x10,(longlong)iVar9 << 4);
  }
  piVar1 = &(this->Constraints).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,&(this->Constraints).AllocatorInstance,(this->Constraints).ArrayNum,
             &(this->Constraints).ArrayMax);
  uVar7 = uVar8;
  if (param_1 < (this->SpringSettings).ArrayNum) {
    uVar7 = uVar10;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar2 = (this->SpringSettings).ArrayNum;
  pFVar4 = (this->SpringSettings).AllocatorInstance.Data;
  iVar9 = uVar12 + iVar2;
  if (1 < iVar9) {
    iVar9 = 1;
  }
  if (iVar9 != 0) {
    memmove(pFVar4 + lVar11 * 0x18,pFVar4 + (longlong)(iVar2 - iVar9) * 0x18,(longlong)iVar9 * 0x18)
    ;
  }
  piVar1 = &(this->SpringSettings).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,&(this->SpringSettings).AllocatorInstance,(this->SpringSettings).ArrayNum,
             &(this->SpringSettings).ArrayMax);
  uVar7 = uVar8;
  if (param_1 < (this->Distances).ArrayNum) {
    uVar7 = uVar10;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar2 = (this->Distances).ArrayNum;
  pFVar4 = (this->Distances).AllocatorInstance.Data;
  iVar9 = uVar12 + iVar2;
  if (1 < iVar9) {
    iVar9 = 1;
  }
  if (iVar9 != 0) {
    memmove(pFVar4 + lVar11 * 0x30,pFVar4 + (longlong)(iVar2 - iVar9) * 0x30,(longlong)iVar9 * 0x30)
    ;
  }
  piVar1 = &(this->Distances).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,&(this->Distances).AllocatorInstance,(this->Distances).ArrayNum,
             &(this->Distances).ArrayMax);
  if (param_1 < (this->ConstraintSolverBodies).ArrayNum) {
    uVar8 = uVar10;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar2 = (this->ConstraintSolverBodies).ArrayNum;
  pFVar4 = (this->ConstraintSolverBodies).AllocatorInstance.Data;
  iVar9 = uVar12 + iVar2;
  if (1 < iVar9) {
    iVar9 = 1;
  }
  if (iVar9 != 0) {
    memmove(pFVar4 + lVar11 * 0x10,pFVar4 + (longlong)(iVar2 - iVar9) * 0x10,(longlong)iVar9 << 4);
  }
  piVar1 = &(this->ConstraintSolverBodies).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,&(this->ConstraintSolverBodies).AllocatorInstance,
             (this->ConstraintSolverBodies).ArrayNum,&(this->ConstraintSolverBodies).ArrayMax);
  uVar7 = 0;
  if (param_1 < (this->Handles).ArrayNum) {
    uVar7 = uVar10;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar2 = (this->Handles).ArrayNum;
  pFVar4 = (this->Handles).AllocatorInstance.Data;
  iVar9 = uVar12 + iVar2;
  if (1 < iVar9) {
    iVar9 = 1;
  }
  if (iVar9 != 0) {
    memmove(pFVar4 + lVar11 * 8,pFVar4 + (longlong)(iVar2 - iVar9) * 8,(longlong)iVar9 << 3);
  }
  piVar1 = &(this->Handles).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,&(this->Handles).AllocatorInstance,(this->Handles).ArrayNum,
             &(this->Handles).ArrayMax);
  if (param_1 < (this->Handles).ArrayNum) {
    if (param_1 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(int *)(*(longlong *)((this->Handles).AllocatorInstance.Data + lVar11 * 8) + 0x18) = param_1;
  }
  return;
}

// ResetConstraints @ 143d69130

void __thiscall
Chaos::FPBDRigidSpringConstraints::ResetConstraints(FPBDRigidSpringConstraints *this)

{
  return;
}

// ScatterOutput @ 143d6bd50

void __thiscall
Chaos::FPBDRigidSpringConstraints::ScatterOutput
          (FPBDRigidSpringConstraints *this,TArrayView<int,int> *param_1,double param_2)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  
  puVar7 = (uint *)param_1->DataPtr;
  puVar1 = puVar7 + param_1->ArrayNum;
  while( true ) {
    if (puVar7 == puVar1) {
      return;
    }
    uVar3 = *puVar7;
    uVar6 = 0;
    if ((int)uVar3 < (this->ConstraintSolverBodies).ArrayNum) {
      uVar6 = ~uVar3 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    puVar7 = puVar7 + 1;
    pFVar2 = (this->ConstraintSolverBodies).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x10;
    *(undefined8 *)pFVar2 = 0;
    *(undefined8 *)(pFVar2 + 8) = 0;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// ScatterOutput @ 143d6be20

void __thiscall
Chaos::FPBDRigidSpringConstraints::ScatterOutput(FPBDRigidSpringConstraints *this,double param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->Constraints).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->ConstraintSolverBodies).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = uVar5 + 1;
      pFVar1 = (this->ConstraintSolverBodies).AllocatorInstance.Data + lVar6;
      *(undefined8 *)pFVar1 = 0;
      *(undefined8 *)(pFVar1 + 8) = 0;
      lVar6 = lVar6 + 0x10;
    } while ((int)uVar5 < (this->Constraints).ArrayNum);
  }
  return;
}

// UnprepareTick @ 143d76eb0

void __thiscall Chaos::FPBDRigidSpringConstraints::UnprepareTick(FPBDRigidSpringConstraints *this)

{
  return;
}

