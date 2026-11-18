// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 48

// AddBodies @ 143c8c380

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDNullConstraints>::AddBodies
          (TIndexedConstraintContainerSolver<Chaos::FPBDNullConstraints> *this,
          FSolverBodyContainer *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ConstraintIndices).ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// AddConstraints @ 143c8c940

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDNullConstraints>::AddConstraints
          (TIndexedConstraintContainerSolver<Chaos::FPBDNullConstraints> *this,
          TArrayView<Chaos::Private::FPBDIslandConstraint_*,int> *param_1)

{
  int *piVar1;
  FPBDIslandConstraint **ppFVar2;
  FConstraintHandle *pFVar3;
  FPBDConstraintContainer *pFVar4;
  FConstraintHandleTypeID *this_00;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  FConstraintHandleTypeID *pFVar10;
  FPBDIslandConstraint **ppFVar11;
  undefined4 local_18 [4];
  
  ppFVar11 = param_1->DataPtr;
  ppFVar2 = ppFVar11 + param_1->ArrayNum;
  do {
    if (ppFVar11 == ppFVar2) {
      return;
    }
    pFVar3 = (*ppFVar11)->Constraint;
    cVar7 = (**(code **)(pFVar3->_padding_ + 0x40))(pFVar3);
    if (cVar7 == '\0') {
      pFVar4 = pFVar3->ConstraintContainer;
      if (((pFVar4 == (FPBDConstraintContainer *)0x0) ||
          ((pFVar10 = FIndexedConstraintHandle::StaticType(),
           pFVar10->TypeName != (pFVar4->ConstraintHandleType).TypeName &&
           ((this_00 = (pFVar4->ConstraintHandleType).BaseType,
            this_00 == (FConstraintHandleTypeID *)0x0 ||
            (bVar8 = FConstraintHandleTypeID::IsA(this_00,pFVar10), !bVar8)))))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("As<T>() != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConstraintHandle.h"
                             ,0xbd,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_18[0] = (undefined4)pFVar3[1]._padding_;
      pFVar5 = (this->ConstraintIndices).AllocatorInstance.Data;
      if (((pFVar5 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar5 + (longlong)(this->ConstraintIndices).ArrayMax * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = (this->ConstraintIndices).ArrayNum;
      piVar1 = &(this->ConstraintIndices).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->ConstraintIndices).AllocatorInstance,piVar1);
      }
      (this->ConstraintIndices).ArrayNum = iVar9 + 1;
      *(undefined4 *)((this->ConstraintIndices).AllocatorInstance.Data + (longlong)iVar9 * 4) =
           local_18[0];
    }
    ppFVar11 = ppFVar11 + 1;
  } while( true );
}

// AddConstraints @ 143c8cab0

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDNullConstraints>::AddConstraints
          (TIndexedConstraintContainerSolver<Chaos::FPBDNullConstraints> *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1251355807069503641>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Evolution\\IndexedConstraintContainer.h"
                     ,0x99,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ApplyPositionConstraints @ 143c90970

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDNullConstraints>::ApplyPositionConstraints
          (TIndexedConstraintContainerSolver<Chaos::FPBDNullConstraints> *this,double param_1,
          int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ConstraintIndices).ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ApplyProjectionConstraints @ 143c90d80

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDNullConstraints>::ApplyProjectionConstraints
          (TIndexedConstraintContainerSolver<Chaos::FPBDNullConstraints> *this,double param_1,
          int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ConstraintIndices).ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ApplyVelocityConstraints @ 143c90f10

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDNullConstraints>::ApplyVelocityConstraints
          (TIndexedConstraintContainerSolver<Chaos::FPBDNullConstraints> *this,double param_1,
          int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ConstraintIndices).ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// GatherInput @ 143c9cea0

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDNullConstraints>::GatherInput
          (TIndexedConstraintContainerSolver<Chaos::FPBDNullConstraints> *this,double param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ConstraintIndices).ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// GatherInput @ 143c9cee0

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDNullConstraints>::GatherInput
          (TIndexedConstraintContainerSolver<Chaos::FPBDNullConstraints> *this,double param_1,
          int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BeginIndex >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Evolution\\IndexedConstraintContainer.h"
                       ,0xc0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->ConstraintIndices).ArrayNum < param_3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EndIndex <= GetNumConstraints()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Evolution\\IndexedConstraintContainer.h"
                       ,0xc1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (0 < param_3 - param_2) {
    uVar3 = 0;
    if (param_2 < (this->ConstraintIndices).ArrayNum) {
      uVar3 = (uint)~param_2 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// GetNumConstraints @ 143c9fe00

int __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDNullConstraints>::GetNumConstraints
          (TIndexedConstraintContainerSolver<Chaos::FPBDNullConstraints> *this)

{
  return (this->ConstraintIndices).ArrayNum;
}

// Reset @ 143ca9610

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDNullConstraints>::Reset
          (TIndexedConstraintContainerSolver<Chaos::FPBDNullConstraints> *this,int param_1)

{
  if (-1 < param_1) {
    (this->ConstraintIndices).ArrayNum = 0;
    if ((this->ConstraintIndices).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&(this->ConstraintIndices).AllocatorInstance,0,
                 &(this->ConstraintIndices).ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// ScatterOutput @ 143ca9df0

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDNullConstraints>::ScatterOutput
          (TIndexedConstraintContainerSolver<Chaos::FPBDNullConstraints> *this,double param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ConstraintIndices).ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ScatterOutput @ 143ca9e30

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDNullConstraints>::ScatterOutput
          (TIndexedConstraintContainerSolver<Chaos::FPBDNullConstraints> *this,double param_1,
          int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (0 < param_3 - param_2) {
    uVar3 = 0;
    if (param_2 < (this->ConstraintIndices).ArrayNum) {
      uVar3 = (uint)~param_2 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// AddBodies @ 143d394f0

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDRigidSpringConstraints>::AddBodies
          (TIndexedConstraintContainerSolver<Chaos::FPBDRigidSpringConstraints> *this,
          FSolverBodyContainer *param_1)

{
  int iVar1;
  FPBDRigidSpringConstraints *this_00;
  code *pcVar2;
  bool bVar3;
  TArrayView<int,int> local_18;
  
  local_18.DataPtr = (int *)(this->ConstraintIndices).AllocatorInstance.Data;
  iVar1 = (this->ConstraintIndices).ArrayNum;
  this_00 = this->ConstraintContainer;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.ArrayNum = iVar1;
  FPBDRigidSpringConstraints::AddBodies(this_00,&local_18,param_1);
  return;
}

// AddBodies @ 143d39570

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDSuspensionConstraints>::AddBodies
          (TIndexedConstraintContainerSolver<Chaos::FPBDSuspensionConstraints> *this,
          FSolverBodyContainer *param_1)

{
  int iVar1;
  FPBDSuspensionConstraints *this_00;
  code *pcVar2;
  bool bVar3;
  TArrayView<int,int> local_18;
  
  local_18.DataPtr = (int *)(this->ConstraintIndices).AllocatorInstance.Data;
  iVar1 = (this->ConstraintIndices).ArrayNum;
  this_00 = this->ConstraintContainer;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.ArrayNum = iVar1;
  FPBDSuspensionConstraints::AddBodies(this_00,&local_18,param_1);
  return;
}

// AddConstraints @ 143d3a4a0

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDRigidSpringConstraints>::AddConstraints
          (TIndexedConstraintContainerSolver<Chaos::FPBDRigidSpringConstraints> *this,
          TArrayView<Chaos::Private::FPBDIslandConstraint_*,int> *param_1)

{
  int *piVar1;
  FPBDIslandConstraint **ppFVar2;
  FConstraintHandle *pFVar3;
  FPBDConstraintContainer *pFVar4;
  FConstraintHandleTypeID *this_00;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  FConstraintHandleTypeID *pFVar10;
  FPBDIslandConstraint **ppFVar11;
  undefined4 local_18 [4];
  
  ppFVar11 = param_1->DataPtr;
  ppFVar2 = ppFVar11 + param_1->ArrayNum;
  do {
    if (ppFVar11 == ppFVar2) {
      return;
    }
    pFVar3 = (*ppFVar11)->Constraint;
    cVar7 = (**(code **)(pFVar3->_padding_ + 0x40))(pFVar3);
    if (cVar7 == '\0') {
      pFVar4 = pFVar3->ConstraintContainer;
      if (((pFVar4 == (FPBDConstraintContainer *)0x0) ||
          ((pFVar10 = FIndexedConstraintHandle::StaticType(),
           pFVar10->TypeName != (pFVar4->ConstraintHandleType).TypeName &&
           ((this_00 = (pFVar4->ConstraintHandleType).BaseType,
            this_00 == (FConstraintHandleTypeID *)0x0 ||
            (bVar8 = FConstraintHandleTypeID::IsA(this_00,pFVar10), !bVar8)))))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("As<T>() != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConstraintHandle.h"
                             ,0xbd,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_18[0] = (undefined4)pFVar3[1]._padding_;
      pFVar5 = (this->ConstraintIndices).AllocatorInstance.Data;
      if (((pFVar5 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar5 + (longlong)(this->ConstraintIndices).ArrayMax * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = (this->ConstraintIndices).ArrayNum;
      piVar1 = &(this->ConstraintIndices).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->ConstraintIndices).AllocatorInstance,piVar1);
      }
      (this->ConstraintIndices).ArrayNum = iVar9 + 1;
      *(undefined4 *)((this->ConstraintIndices).AllocatorInstance.Data + (longlong)iVar9 * 4) =
           local_18[0];
    }
    ppFVar11 = ppFVar11 + 1;
  } while( true );
}

// AddConstraints @ 143d3a610

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDRigidSpringConstraints>::AddConstraints
          (TIndexedConstraintContainerSolver<Chaos::FPBDRigidSpringConstraints> *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1251355807069503641>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Evolution\\IndexedConstraintContainer.h"
                     ,0x99,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// AddConstraints @ 143d3a650

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDSuspensionConstraints>::AddConstraints
          (TIndexedConstraintContainerSolver<Chaos::FPBDSuspensionConstraints> *this,
          TArrayView<Chaos::Private::FPBDIslandConstraint_*,int> *param_1)

{
  int *piVar1;
  FPBDIslandConstraint **ppFVar2;
  FConstraintHandle *pFVar3;
  FPBDConstraintContainer *pFVar4;
  FConstraintHandleTypeID *this_00;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  FConstraintHandleTypeID *pFVar10;
  FPBDIslandConstraint **ppFVar11;
  undefined4 local_18 [4];
  
  ppFVar11 = param_1->DataPtr;
  ppFVar2 = ppFVar11 + param_1->ArrayNum;
  do {
    if (ppFVar11 == ppFVar2) {
      return;
    }
    pFVar3 = (*ppFVar11)->Constraint;
    cVar7 = (**(code **)(pFVar3->_padding_ + 0x40))(pFVar3);
    if (cVar7 == '\0') {
      pFVar4 = pFVar3->ConstraintContainer;
      if (((pFVar4 == (FPBDConstraintContainer *)0x0) ||
          ((pFVar10 = FIndexedConstraintHandle::StaticType(),
           pFVar10->TypeName != (pFVar4->ConstraintHandleType).TypeName &&
           ((this_00 = (pFVar4->ConstraintHandleType).BaseType,
            this_00 == (FConstraintHandleTypeID *)0x0 ||
            (bVar8 = FConstraintHandleTypeID::IsA(this_00,pFVar10), !bVar8)))))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("As<T>() != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConstraintHandle.h"
                             ,0xbd,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_18[0] = (undefined4)pFVar3[1]._padding_;
      pFVar5 = (this->ConstraintIndices).AllocatorInstance.Data;
      if (((pFVar5 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar5 + (longlong)(this->ConstraintIndices).ArrayMax * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = (this->ConstraintIndices).ArrayNum;
      piVar1 = &(this->ConstraintIndices).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->ConstraintIndices).AllocatorInstance,piVar1);
      }
      (this->ConstraintIndices).ArrayNum = iVar9 + 1;
      *(undefined4 *)((this->ConstraintIndices).AllocatorInstance.Data + (longlong)iVar9 * 4) =
           local_18[0];
    }
    ppFVar11 = ppFVar11 + 1;
  } while( true );
}

// AddConstraints @ 143d3a7c0

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDSuspensionConstraints>::AddConstraints
          (TIndexedConstraintContainerSolver<Chaos::FPBDSuspensionConstraints> *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1251355807069503641>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Evolution\\IndexedConstraintContainer.h"
                     ,0x99,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ApplyPositionConstraints @ 143d43760

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDRigidSpringConstraints>::
ApplyPositionConstraints
          (TIndexedConstraintContainerSolver<Chaos::FPBDRigidSpringConstraints> *this,double param_1
          ,int param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FPBDRigidSpringConstraints *this_00;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  
  iVar2 = (this->ConstraintIndices).ArrayNum;
  this_00 = this->ConstraintContainer;
  pFVar5 = (this->ConstraintIndices).AllocatorInstance.Data;
  if ((iVar2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = pFVar5 + (longlong)iVar2 * 4;
  for (; pFVar5 != pFVar1; pFVar5 = pFVar5 + 4) {
    FPBDRigidSpringConstraints::ApplyPhase1Single(this_00,param_1,*(int *)pFVar5);
  }
  return;
}

// ApplyPositionConstraints @ 143d43800

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDSuspensionConstraints>::ApplyPositionConstraints
          (TIndexedConstraintContainerSolver<Chaos::FPBDSuspensionConstraints> *this,double param_1,
          int param_2,int param_3)

{
  int iVar1;
  FPBDSuspensionConstraints *this_00;
  code *pcVar2;
  bool bVar3;
  TArrayView<int,int> local_28 [2];
  
  local_28[0].DataPtr = (int *)(this->ConstraintIndices).AllocatorInstance.Data;
  iVar1 = (this->ConstraintIndices).ArrayNum;
  this_00 = this->ConstraintContainer;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_28[0].ArrayNum = iVar1;
  FPBDSuspensionConstraints::ApplyPositionConstraints(this_00,local_28,param_1,param_2,param_3);
  return;
}

// ApplyProjectionConstraints @ 143d43a80

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDRigidSpringConstraints>::
ApplyProjectionConstraints
          (TIndexedConstraintContainerSolver<Chaos::FPBDRigidSpringConstraints> *this,double param_1
          ,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ConstraintIndices).ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ApplyProjectionConstraints @ 143d43ac0

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDSuspensionConstraints>::
ApplyProjectionConstraints
          (TIndexedConstraintContainerSolver<Chaos::FPBDSuspensionConstraints> *this,double param_1,
          int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ConstraintIndices).ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ApplyVelocityConstraints @ 143d44a40

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDRigidSpringConstraints>::
ApplyVelocityConstraints
          (TIndexedConstraintContainerSolver<Chaos::FPBDRigidSpringConstraints> *this,double param_1
          ,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ConstraintIndices).ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ApplyVelocityConstraints @ 143d44a80

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDSuspensionConstraints>::ApplyVelocityConstraints
          (TIndexedConstraintContainerSolver<Chaos::FPBDSuspensionConstraints> *this,double param_1,
          int param_2,int param_3)

{
  int iVar1;
  FPBDSuspensionConstraints *this_00;
  code *pcVar2;
  bool bVar3;
  TArrayView<int,int> local_28 [2];
  
  local_28[0].DataPtr = (int *)(this->ConstraintIndices).AllocatorInstance.Data;
  iVar1 = (this->ConstraintIndices).ArrayNum;
  this_00 = this->ConstraintContainer;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_28[0].ArrayNum = iVar1;
  FPBDSuspensionConstraints::ApplyVelocityConstraints(this_00,local_28,param_1,param_2,param_3);
  return;
}

// GatherInput @ 143d53f60

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDRigidSpringConstraints>::GatherInput
          (TIndexedConstraintContainerSolver<Chaos::FPBDRigidSpringConstraints> *this,double param_1
          )

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ConstraintIndices).ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// GatherInput @ 143d53fa0

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDRigidSpringConstraints>::GatherInput
          (TIndexedConstraintContainerSolver<Chaos::FPBDRigidSpringConstraints> *this,double param_1
          ,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BeginIndex >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Evolution\\IndexedConstraintContainer.h"
                       ,0xc0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->ConstraintIndices).ArrayNum < param_3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EndIndex <= GetNumConstraints()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Evolution\\IndexedConstraintContainer.h"
                       ,0xc1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (0 < param_3 - param_2) {
    uVar3 = 0;
    if (param_2 < (this->ConstraintIndices).ArrayNum) {
      uVar3 = (uint)~param_2 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// GatherInput @ 143d54070

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDSuspensionConstraints>::GatherInput
          (TIndexedConstraintContainerSolver<Chaos::FPBDSuspensionConstraints> *this,double param_1)

{
  int iVar1;
  FPBDSuspensionConstraints *this_00;
  code *pcVar2;
  bool bVar3;
  TArrayView<int,int> local_28 [2];
  
  local_28[0].DataPtr = (int *)(this->ConstraintIndices).AllocatorInstance.Data;
  iVar1 = (this->ConstraintIndices).ArrayNum;
  this_00 = this->ConstraintContainer;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_28[0].ArrayNum = iVar1;
  FPBDSuspensionConstraints::GatherInput(this_00,local_28,param_1);
  return;
}

// GatherInput @ 143d540f0

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDSuspensionConstraints>::GatherInput
          (TIndexedConstraintContainerSolver<Chaos::FPBDSuspensionConstraints> *this,double param_1,
          int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArrayView<int,int> local_28 [2];
  
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BeginIndex >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Evolution\\IndexedConstraintContainer.h"
                       ,0xc0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->ConstraintIndices).ArrayNum < param_3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EndIndex <= GetNumConstraints()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Evolution\\IndexedConstraintContainer.h"
                       ,0xc1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (0 < param_3 - param_2) {
    uVar3 = 0;
    if (param_2 < (this->ConstraintIndices).ArrayNum) {
      uVar3 = (uint)~param_2 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_28[0].DataPtr =
         (int *)((this->ConstraintIndices).AllocatorInstance.Data + (longlong)param_2 * 4);
    local_28[0].ArrayNum = param_3 - param_2;
    FPBDSuspensionConstraints::GatherInput(this->ConstraintContainer,local_28,param_1);
  }
  return;
}

// GetNumConstraints @ 143d562b0

int __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDRigidSpringConstraints>::GetNumConstraints
          (TIndexedConstraintContainerSolver<Chaos::FPBDRigidSpringConstraints> *this)

{
  return (this->ConstraintIndices).ArrayNum;
}

// GetNumConstraints @ 143d562c0

int __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDSuspensionConstraints>::GetNumConstraints
          (TIndexedConstraintContainerSolver<Chaos::FPBDSuspensionConstraints> *this)

{
  return (this->ConstraintIndices).ArrayNum;
}

// Reset @ 143d67c30

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDRigidSpringConstraints>::Reset
          (TIndexedConstraintContainerSolver<Chaos::FPBDRigidSpringConstraints> *this,int param_1)

{
  if (-1 < param_1) {
    (this->ConstraintIndices).ArrayNum = 0;
    if ((this->ConstraintIndices).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&(this->ConstraintIndices).AllocatorInstance,0,
                 &(this->ConstraintIndices).ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Reset @ 143d67c80

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDSuspensionConstraints>::Reset
          (TIndexedConstraintContainerSolver<Chaos::FPBDSuspensionConstraints> *this,int param_1)

{
  if (-1 < param_1) {
    (this->ConstraintIndices).ArrayNum = 0;
    if ((this->ConstraintIndices).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&(this->ConstraintIndices).AllocatorInstance,0,
                 &(this->ConstraintIndices).ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// ScatterOutput @ 143d6b810

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDRigidSpringConstraints>::ScatterOutput
          (TIndexedConstraintContainerSolver<Chaos::FPBDRigidSpringConstraints> *this,double param_1
          )

{
  int iVar1;
  FPBDRigidSpringConstraints *this_00;
  code *pcVar2;
  bool bVar3;
  TArrayView<int,int> local_28 [2];
  
  local_28[0].DataPtr = (int *)(this->ConstraintIndices).AllocatorInstance.Data;
  iVar1 = (this->ConstraintIndices).ArrayNum;
  this_00 = this->ConstraintContainer;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_28[0].ArrayNum = iVar1;
  FPBDRigidSpringConstraints::ScatterOutput(this_00,local_28,param_1);
  return;
}

// ScatterOutput @ 143d6b890

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDRigidSpringConstraints>::ScatterOutput
          (TIndexedConstraintContainerSolver<Chaos::FPBDRigidSpringConstraints> *this,double param_1
          ,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArrayView<int,int> local_28 [2];
  
  if (0 < param_3 - param_2) {
    uVar3 = 0;
    if (param_2 < (this->ConstraintIndices).ArrayNum) {
      uVar3 = (uint)~param_2 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_28[0].DataPtr =
         (int *)((this->ConstraintIndices).AllocatorInstance.Data + (longlong)param_2 * 4);
    local_28[0].ArrayNum = param_3 - param_2;
    FPBDRigidSpringConstraints::ScatterOutput(this->ConstraintContainer,local_28,param_1);
  }
  return;
}

// ScatterOutput @ 143d6b940

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDSuspensionConstraints>::ScatterOutput
          (TIndexedConstraintContainerSolver<Chaos::FPBDSuspensionConstraints> *this,double param_1)

{
  int iVar1;
  FPBDSuspensionConstraints *this_00;
  code *pcVar2;
  bool bVar3;
  TArrayView<int,int> local_28 [2];
  
  local_28[0].DataPtr = (int *)(this->ConstraintIndices).AllocatorInstance.Data;
  iVar1 = (this->ConstraintIndices).ArrayNum;
  this_00 = this->ConstraintContainer;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_28[0].ArrayNum = iVar1;
  FPBDSuspensionConstraints::ScatterOutput(this_00,local_28,param_1);
  return;
}

// ScatterOutput @ 143d6b9c0

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDSuspensionConstraints>::ScatterOutput
          (TIndexedConstraintContainerSolver<Chaos::FPBDSuspensionConstraints> *this,double param_1,
          int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArrayView<int,int> local_28 [2];
  
  if (0 < param_3 - param_2) {
    uVar3 = 0;
    if (param_2 < (this->ConstraintIndices).ArrayNum) {
      uVar3 = (uint)~param_2 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_28[0].DataPtr =
         (int *)((this->ConstraintIndices).AllocatorInstance.Data + (longlong)param_2 * 4);
    local_28[0].ArrayNum = param_3 - param_2;
    FPBDSuspensionConstraints::ScatterOutput(this->ConstraintContainer,local_28,param_1);
  }
  return;
}

// AddBodies @ 1440755b0

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDPositionConstraints>::AddBodies
          (TIndexedConstraintContainerSolver<Chaos::FPBDPositionConstraints> *this,
          FSolverBodyContainer *param_1)

{
  int iVar1;
  FPBDPositionConstraints *this_00;
  code *pcVar2;
  bool bVar3;
  TArrayView<int,int> local_18;
  
  local_18.DataPtr = (int *)(this->ConstraintIndices).AllocatorInstance.Data;
  iVar1 = (this->ConstraintIndices).ArrayNum;
  this_00 = this->ConstraintContainer;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.ArrayNum = iVar1;
  FPBDPositionConstraints::AddBodies(this_00,&local_18,param_1);
  return;
}

// AddConstraints @ 144075640

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDPositionConstraints>::AddConstraints
          (TIndexedConstraintContainerSolver<Chaos::FPBDPositionConstraints> *this,
          TArrayView<Chaos::Private::FPBDIslandConstraint_*,int> *param_1)

{
  int *piVar1;
  FPBDIslandConstraint **ppFVar2;
  FConstraintHandle *pFVar3;
  FPBDConstraintContainer *pFVar4;
  FConstraintHandleTypeID *this_00;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  FConstraintHandleTypeID *pFVar10;
  FPBDIslandConstraint **ppFVar11;
  undefined4 local_18 [4];
  
  ppFVar11 = param_1->DataPtr;
  ppFVar2 = ppFVar11 + param_1->ArrayNum;
  do {
    if (ppFVar11 == ppFVar2) {
      return;
    }
    pFVar3 = (*ppFVar11)->Constraint;
    cVar7 = (**(code **)(pFVar3->_padding_ + 0x40))(pFVar3);
    if (cVar7 == '\0') {
      pFVar4 = pFVar3->ConstraintContainer;
      if (((pFVar4 == (FPBDConstraintContainer *)0x0) ||
          ((pFVar10 = FIndexedConstraintHandle::StaticType(),
           pFVar10->TypeName != (pFVar4->ConstraintHandleType).TypeName &&
           ((this_00 = (pFVar4->ConstraintHandleType).BaseType,
            this_00 == (FConstraintHandleTypeID *)0x0 ||
            (bVar8 = FConstraintHandleTypeID::IsA(this_00,pFVar10), !bVar8)))))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("As<T>() != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConstraintHandle.h"
                             ,0xbd,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_18[0] = (undefined4)pFVar3[1]._padding_;
      pFVar5 = (this->ConstraintIndices).AllocatorInstance.Data;
      if (((pFVar5 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar5 + (longlong)(this->ConstraintIndices).ArrayMax * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = (this->ConstraintIndices).ArrayNum;
      piVar1 = &(this->ConstraintIndices).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->ConstraintIndices).AllocatorInstance,piVar1);
      }
      (this->ConstraintIndices).ArrayNum = iVar9 + 1;
      *(undefined4 *)((this->ConstraintIndices).AllocatorInstance.Data + (longlong)iVar9 * 4) =
           local_18[0];
    }
    ppFVar11 = ppFVar11 + 1;
  } while( true );
}

// AddConstraints @ 1440757b0

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDPositionConstraints>::AddConstraints
          (TIndexedConstraintContainerSolver<Chaos::FPBDPositionConstraints> *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1251355807069503641>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Evolution\\IndexedConstraintContainer.h"
                     ,0x99,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ApplyPositionConstraints @ 14407b0a0

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDPositionConstraints>::ApplyPositionConstraints
          (TIndexedConstraintContainerSolver<Chaos::FPBDPositionConstraints> *this,double param_1,
          int param_2,int param_3)

{
  int iVar1;
  FPBDPositionConstraints *this_00;
  code *pcVar2;
  bool bVar3;
  TArrayView<int,int> local_28 [2];
  
  local_28[0].DataPtr = (int *)(this->ConstraintIndices).AllocatorInstance.Data;
  iVar1 = (this->ConstraintIndices).ArrayNum;
  this_00 = this->ConstraintContainer;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_28[0].ArrayNum = iVar1;
  FPBDPositionConstraints::ApplyPositionConstraints(this_00,local_28,param_1,param_2,param_3);
  return;
}

// ApplyProjectionConstraints @ 14407b150

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDPositionConstraints>::ApplyProjectionConstraints
          (TIndexedConstraintContainerSolver<Chaos::FPBDPositionConstraints> *this,double param_1,
          int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ConstraintIndices).ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ApplyVelocityConstraints @ 14407b220

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDPositionConstraints>::ApplyVelocityConstraints
          (TIndexedConstraintContainerSolver<Chaos::FPBDPositionConstraints> *this,double param_1,
          int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ConstraintIndices).ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// GatherInput @ 14408be70

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDPositionConstraints>::GatherInput
          (TIndexedConstraintContainerSolver<Chaos::FPBDPositionConstraints> *this,double param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ConstraintIndices).ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// GatherInput @ 14408beb0

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDPositionConstraints>::GatherInput
          (TIndexedConstraintContainerSolver<Chaos::FPBDPositionConstraints> *this,double param_1,
          int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BeginIndex >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Evolution\\IndexedConstraintContainer.h"
                       ,0xc0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->ConstraintIndices).ArrayNum < param_3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EndIndex <= GetNumConstraints()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Evolution\\IndexedConstraintContainer.h"
                       ,0xc1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (0 < param_3 - param_2) {
    uVar3 = 0;
    if (param_2 < (this->ConstraintIndices).ArrayNum) {
      uVar3 = (uint)~param_2 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// GetNumConstraints @ 14408cf60

int __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDPositionConstraints>::GetNumConstraints
          (TIndexedConstraintContainerSolver<Chaos::FPBDPositionConstraints> *this)

{
  return (this->ConstraintIndices).ArrayNum;
}

// Reset @ 1440aee00

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDPositionConstraints>::Reset
          (TIndexedConstraintContainerSolver<Chaos::FPBDPositionConstraints> *this,int param_1)

{
  if (-1 < param_1) {
    (this->ConstraintIndices).ArrayNum = 0;
    if ((this->ConstraintIndices).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&(this->ConstraintIndices).AllocatorInstance,0,
                 &(this->ConstraintIndices).ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// ScatterOutput @ 1440afd00

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDPositionConstraints>::ScatterOutput
          (TIndexedConstraintContainerSolver<Chaos::FPBDPositionConstraints> *this,double param_1)

{
  int iVar1;
  FPBDPositionConstraints *this_00;
  code *pcVar2;
  bool bVar3;
  TArrayView<int,int> local_28 [2];
  
  local_28[0].DataPtr = (int *)(this->ConstraintIndices).AllocatorInstance.Data;
  iVar1 = (this->ConstraintIndices).ArrayNum;
  this_00 = this->ConstraintContainer;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_28[0].ArrayNum = iVar1;
  FPBDPositionConstraints::ScatterOutput(this_00,local_28,param_1);
  return;
}

// ScatterOutput @ 1440afd80

void __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDPositionConstraints>::ScatterOutput
          (TIndexedConstraintContainerSolver<Chaos::FPBDPositionConstraints> *this,double param_1,
          int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArrayView<int,int> local_28 [2];
  
  if (0 < param_3 - param_2) {
    uVar3 = 0;
    if (param_2 < (this->ConstraintIndices).ArrayNum) {
      uVar3 = (uint)~param_2 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_28[0].DataPtr =
         (int *)((this->ConstraintIndices).AllocatorInstance.Data + (longlong)param_2 * 4);
    local_28[0].ArrayNum = param_3 - param_2;
    FPBDPositionConstraints::ScatterOutput(this->ConstraintContainer,local_28,param_1);
  }
  return;
}

