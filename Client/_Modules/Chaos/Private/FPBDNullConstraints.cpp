// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 9

// FPBDNullConstraints @ 143c88100

FPBDNullConstraints * __thiscall
Chaos::FPBDNullConstraints::FPBDNullConstraints(FPBDNullConstraints *this)

{
  FConstraintHandleTypeID *pFVar1;
  FName local_res8;
  FConstraintHandleTypeID local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDNullConstraintHandle::StaticType(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDNullConstraintHandle::StaticType(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDNullConstraintHandle::StaticType(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = FIndexedConstraintHandle::StaticType();
      ::FName::FName(&local_res8,L"FPBDNullConstraintHandle");
      `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDNullConstraintHandle::StaticType(void)'
      ::__l2::STypeID.TypeName = local_res8;
      `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDNullConstraintHandle::StaticType(void)'
      ::__l2::STypeID.BaseType = pFVar1;
      _Init_thread_footer(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDNullConstraintHandle::StaticType(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_18.BaseType =
       `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDNullConstraintHandle::StaticType(void)'
       ::__l2::STypeID.BaseType;
  local_18.TypeName =
       `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDNullConstraintHandle::StaticType(void)'
       ::__l2::STypeID.TypeName;
  FPBDConstraintContainer::FPBDConstraintContainer((FPBDConstraintContainer *)this,&local_18);
  this->_padding_ = (longlong)&___7FPBDNullConstraints_Chaos__6B_;
  (this->Constraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Constraints).ArrayNum = 0;
  (this->Constraints).ArrayMax = 0;
  (this->Handles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Handles).ArrayNum = 0;
  (this->Handles).ArrayMax = 0;
  return this;
}

// AddConstraint @ 143c8c6f0

FPBDNullConstraintHandle * __thiscall
Chaos::FPBDNullConstraints::AddConstraint
          (FPBDNullConstraints *this,
          TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  TGeometryParticleHandleImp<double,3,1> *pTVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  FPBDNullConstraintHandle *pFVar15;
  undefined8 *puVar16;
  undefined6 uStack_36;
  
  uVar6 = *(undefined4 *)param_1->V;
  uVar7 = *(undefined4 *)((longlong)param_1->V + 4);
  uVar8 = *(undefined4 *)(param_1->V + 1);
  uVar9 = *(undefined4 *)((longlong)param_1->V + 0xc);
  uVar11 = (this->Constraints).ArrayNum;
  piVar1 = &(this->Constraints).ArrayMax;
  if (uVar11 == *piVar1) {
    uVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&(this->Constraints).AllocatorInstance,piVar1);
  }
  (this->Constraints).ArrayNum = uVar11 + 1;
  pFVar3 = (this->Constraints).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)(int)uVar11 * 0x18;
  *(undefined4 *)pFVar2 = uVar6;
  *(undefined4 *)(pFVar2 + 4) = uVar7;
  *(undefined4 *)(pFVar2 + 8) = uVar8;
  *(undefined4 *)(pFVar2 + 0xc) = uVar9;
  *(ulonglong *)(pFVar3 + (longlong)(int)uVar11 * 0x18 + 0x10) = CONCAT62(uStack_36,1);
  puVar14 = ::operator_new(0x20);
  puVar16 = (undefined8 *)0x0;
  if (puVar14 != (undefined8 *)0x0) {
    puVar14[1] = this;
    puVar14[2] = 0;
    *(uint *)(puVar14 + 3) = uVar11;
    *puVar14 = &___7FPBDNullConstraintHandle_Chaos__6B_;
    puVar16 = puVar14;
  }
  uVar12 = (this->Handles).ArrayNum;
  piVar1 = &(this->Handles).ArrayMax;
  if (uVar12 == *piVar1) {
    uVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&(this->Handles).AllocatorInstance,piVar1);
  }
  (this->Handles).ArrayNum = uVar12 + 1;
  *(undefined8 **)((this->Handles).AllocatorInstance.Data + (longlong)(int)uVar12 * 8) = puVar16;
  if ((uVar11 != uVar12) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ConstraintIndex == HandleIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDNullConstraints.cpp"
                          ,0x11,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pFVar15 = (FPBDNullConstraintHandle *)(*pcVar5)();
    return pFVar15;
  }
  pTVar4 = param_1->V[0];
  uVar11 = 0;
  if (pTVar4 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    uVar13 = uVar11;
    if ((int)uVar12 < (this->Handles).ArrayNum) {
      uVar13 = ~uVar12 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      pFVar15 = (FPBDNullConstraintHandle *)(*pcVar5)();
      return pFVar15;
    }
    TGeometryParticlesImp<double,3,0>::AddConstraintHandle
              ((TGeometryParticlesImp<double,3,0> *)pTVar4->_padding_,(int *)&pTVar4->_padding_,
               *(FConstraintHandle **)
                ((this->Handles).AllocatorInstance.Data + (longlong)(int)uVar12 * 8));
  }
  pTVar4 = param_1->V[1];
  if (pTVar4 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    uVar13 = uVar11;
    if ((int)uVar12 < (this->Handles).ArrayNum) {
      uVar13 = ~uVar12 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      pFVar15 = (FPBDNullConstraintHandle *)(*pcVar5)();
      return pFVar15;
    }
    TGeometryParticlesImp<double,3,0>::AddConstraintHandle
              ((TGeometryParticlesImp<double,3,0> *)pTVar4->_padding_,(int *)&pTVar4->_padding_,
               *(FConstraintHandle **)
                ((this->Handles).AllocatorInstance.Data + (longlong)(int)uVar12 * 8));
  }
  if ((int)uVar12 < (this->Handles).ArrayNum) {
    uVar11 = ~uVar12 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    pFVar15 = (FPBDNullConstraintHandle *)(*pcVar5)();
    return pFVar15;
  }
  return *(FPBDNullConstraintHandle **)
          ((this->Handles).AllocatorInstance.Data + (longlong)(int)uVar12 * 8);
}

// AddConstraintsToGraph @ 143c8cb40

void __thiscall
Chaos::FPBDNullConstraints::AddConstraintsToGraph
          (FPBDNullConstraints *this,FPBDIslandManager *param_1)

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
LAB_143c8cb72:
  do {
    if ((this->Handles).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FPBDNullConstraintHandle_*,int,0>::operator!='::__l2::
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
        goto LAB_143c8cb72;
      }
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// GetConstraint @ 143c9e360

FPBDNullConstraint * __thiscall
Chaos::FPBDNullConstraints::GetConstraint(FPBDNullConstraints *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPBDNullConstraint *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Constraints).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPBDNullConstraint *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPBDNullConstraint *)
         ((this->Constraints).AllocatorInstance.Data + (longlong)param_1 * 0x18);
}

// GetConstraint @ 143c9e3e0

FPBDNullConstraint * __thiscall
Chaos::FPBDNullConstraints::GetConstraint(FPBDNullConstraints *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPBDNullConstraint *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Constraints).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPBDNullConstraint *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPBDNullConstraint *)
         ((this->Constraints).AllocatorInstance.Data + (longlong)param_1 * 0x18);
}

// GetNumConstraints @ 143c9fe20

int __thiscall Chaos::FPBDNullConstraints::GetNumConstraints(FPBDNullConstraints *this)

{
  return (this->Constraints).ArrayNum;
}

// PrepareTick @ 143ca3aa0

void __thiscall Chaos::FPBDNullConstraints::PrepareTick(FPBDNullConstraints *this)

{
  return;
}

// ResetConstraints @ 143ca9aa0

void __thiscall Chaos::FPBDNullConstraints::ResetConstraints(FPBDNullConstraints *this)

{
  return;
}

// UnprepareTick @ 143cac180

void __thiscall Chaos::FPBDNullConstraints::UnprepareTick(FPBDNullConstraints *this)

{
  return;
}

