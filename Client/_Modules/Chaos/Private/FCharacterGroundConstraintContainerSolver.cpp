// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 15

// FCharacterGroundConstraintContainerSolver @ 14388a490

FCharacterGroundConstraintContainerSolver * __thiscall
Chaos::Private::FCharacterGroundConstraintContainerSolver::FCharacterGroundConstraintContainerSolver
          (FCharacterGroundConstraintContainerSolver *this,
          FCharacterGroundConstraintContainer *param_1,int param_2)

{
  *(int *)&this->_padding_ = param_2;
  this->_padding_ = (longlong)&___7FCharacterGroundConstraintContainerSolver_Private_Chaos__6B_;
  (this->SolvedConstraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SolvedConstraints).ArrayNum = 0;
  (this->SolvedConstraints).ArrayMax = 0;
  (this->Solvers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Solvers).ArrayNum = 0;
  (this->Solvers).ArrayMax = 0;
  this->ConstraintContainer = param_1;
  return this;
}

// ~FCharacterGroundConstraintContainerSolver @ 14388c8d0

void __thiscall
Chaos::Private::FCharacterGroundConstraintContainerSolver::
~FCharacterGroundConstraintContainerSolver(FCharacterGroundConstraintContainerSolver *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FCharacterGroundConstraintContainerSolver_Private_Chaos__6B_;
  pFVar1 = (this->Solvers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SolvedConstraints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FConstraintContainerSolver_Chaos__6B_;
  return;
}

// AddBodies @ 143899c40

/* WARNING: Type propagation algorithm not settling */

void __thiscall
Chaos::Private::FCharacterGroundConstraintContainerSolver::AddBodies
          (FCharacterGroundConstraintContainerSolver *this,FSolverBodyContainer *param_1)

{
  longlong lVar1;
  FGenericParticleHandle FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  FSolverBody *pFVar8;
  FSolverBody *pFVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar7 = (longlong)(this->SolvedConstraints).ArrayNum;
  uVar10 = 0;
  if (0 < lVar7) {
    lVar13 = 0;
    lVar12 = 0;
    do {
      uVar11 = ~uVar10 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar10 < (this->SolvedConstraints).ArrayNum) {
        uVar6 = uVar11;
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
      lVar1 = *(longlong *)((this->SolvedConstraints).AllocatorInstance.Data + lVar13 * 8);
      FVar2.Imp.MHandle =
           (FGenericParticleHandleImp)((FGenericParticleHandleImp *)(lVar1 + 0x130))->MHandle;
      pFVar8 = FSolverBodyContainer::FindOrAdd
                         (param_1,(FGenericParticleHandle)
                                  ((FGenericParticleHandleImp *)(lVar1 + 0x128))->MHandle);
      if (FVar2.Imp.MHandle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        uVar6 = 0;
        if ((int)uVar10 < (this->Solvers).ArrayNum) {
          uVar6 = uVar11;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->Solvers).AllocatorInstance.Data;
        if ((pFVar8 == (FSolverBody *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCharacterBody != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Character\\CharacterGroundConstraintSolver.cpp"
                               ,0x1d,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(FSolverBody **)(pFVar3 + lVar12) = pFVar8;
      }
      else {
        pFVar9 = FSolverBodyContainer::FindOrAdd(param_1,FVar2);
        uVar6 = 0;
        if ((int)uVar10 < (this->Solvers).ArrayNum) {
          uVar6 = uVar11;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->Solvers).AllocatorInstance.Data;
        if ((pFVar8 == (FSolverBody *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCharacterBody != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Character\\CharacterGroundConstraintSolver.cpp"
                               ,0x1d,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(FSolverBody **)(pFVar3 + lVar12) = pFVar8;
        if (pFVar9 != (FSolverBody *)0x0) {
          *(FSolverBody **)(pFVar3 + lVar12 + 0x18) = pFVar9;
        }
      }
      uVar10 = uVar10 + 1;
      lVar13 = lVar13 + 1;
      lVar12 = lVar12 + 0x160;
    } while (lVar13 < lVar7);
  }
  return;
}

// AddConstraint @ 14389a090

void __thiscall
Chaos::Private::FCharacterGroundConstraintContainerSolver::AddConstraint
          (FCharacterGroundConstraintContainerSolver *this,FCharacterGroundConstraintHandle *param_1
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FCharacterGroundConstraintHandle *local_res10 [3];
  
  local_res10[0] = param_1;
  if ((this->SolvedConstraints).ArrayMax <= (this->SolvedConstraints).ArrayNum) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SolvedConstraints.Num() < SolvedConstraints.Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Character\\CharacterGroundConstraintContainerSolver.cpp"
                       ,0x3f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->SolvedConstraints).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar1 + (longlong)(this->SolvedConstraints).ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->SolvedConstraints).ArrayNum;
  if (iVar4 == (this->SolvedConstraints).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->SolvedConstraints).AllocatorInstance,
                       &(this->SolvedConstraints).ArrayMax);
  }
  (this->SolvedConstraints).ArrayNum = iVar4 + 1;
  *(FCharacterGroundConstraintHandle **)
   ((this->SolvedConstraints).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_res10[0];
  return;
}

// AddConstraints @ 14389a2f0

void __thiscall
Chaos::Private::FCharacterGroundConstraintContainerSolver::AddConstraints
          (FCharacterGroundConstraintContainerSolver *this,
          TArrayView<Chaos::Private::FPBDIslandConstraint_*,int> *param_1)

{
  FPBDIslandConstraint **ppFVar1;
  FCharacterGroundConstraintHandle *pFVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  FConstraintHandleTypeID *pFVar7;
  FPBDIslandConstraint **ppFVar8;
  
  ppFVar8 = param_1->DataPtr;
  ppFVar1 = ppFVar8 + param_1->ArrayNum;
  do {
    if (ppFVar8 == ppFVar1) {
      return;
    }
    pFVar2 = (FCharacterGroundConstraintHandle *)(*ppFVar8)->Constraint;
    cVar5 = (**(code **)(pFVar2->_padding_ + 0x40))(pFVar2);
    if (cVar5 == '\0') {
      lVar3 = pFVar2->_padding_;
      if (((lVar3 == 0) ||
          ((pFVar7 = FCharacterGroundConstraintHandle::StaticType(),
           pFVar7->TypeName != *(FName *)(lVar3 + 8) &&
           ((*(FConstraintHandleTypeID **)(lVar3 + 0x10) == (FConstraintHandleTypeID *)0x0 ||
            (bVar6 = FConstraintHandleTypeID::IsA
                               (*(FConstraintHandleTypeID **)(lVar3 + 0x10),pFVar7), !bVar6)))))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("As<T>() != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConstraintHandle.h"
                             ,0xbd,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      AddConstraint(this,pFVar2);
    }
    ppFVar8 = ppFVar8 + 1;
  } while( true );
}

// AddConstraints @ 14389a3c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Private::FCharacterGroundConstraintContainerSolver::AddConstraints
          (FCharacterGroundConstraintContainerSolver *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  
  uVar3 = (this->ConstraintContainer->Constraints).ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  (this->SolvedConstraints).ArrayNum = 0;
  if ((this->SolvedConstraints).ArrayMax < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&(this->SolvedConstraints).AllocatorInstance,0,
               &(this->SolvedConstraints).ArrayMax);
  }
  piVar1 = &(this->Solvers).ArrayMax;
  (this->Solvers).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x160,0x10,0,&(this->Solvers).AllocatorInstance,0,piVar1);
  }
  TArray<Chaos::Private::FCharacterGroundConstraintSolver,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Solvers,uVar3,Default);
  iVar4 = (this->ConstraintContainer->Constraints).ArrayNum;
  pFVar7 = (this->ConstraintContainer->Constraints).AllocatorInstance.Data;
  if ((iVar4 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar2 = pFVar7 + (longlong)iVar4 * 8;
  for (; pFVar7 != pFVar2; pFVar7 = pFVar7 + 8) {
    AddConstraint(this,*(FCharacterGroundConstraintHandle **)pFVar7);
  }
  return;
}

// ApplyPositionConstraints @ 14389e3a0

void __thiscall
Chaos::Private::FCharacterGroundConstraintContainerSolver::ApplyPositionConstraints
          (FCharacterGroundConstraintContainerSolver *this,double param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  
  uVar4 = 0;
  if (0 < (this->Solvers).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->Solvers).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar5 = (this->Solvers).AllocatorInstance.Data + lVar6;
      if ((*(float *)(pFVar5 + 0x118) <= 0.0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ConstraintData.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Character\\CharacterGroundConstraintSolver.h"
                             ,0xb3,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(pFVar5 + 0x158))(pFVar5 + 0x50,pFVar5,pFVar5 + 0x30);
      (**(code **)(pFVar5 + 0x150))(pFVar5 + 0x50,pFVar5,pFVar5 + 0x30);
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + 0x160;
    } while ((int)uVar4 < (this->Solvers).ArrayNum);
  }
  return;
}

// ApplyProjectionConstraints @ 14389e4d0

void __thiscall
Chaos::Private::FCharacterGroundConstraintContainerSolver::ApplyProjectionConstraints
          (FCharacterGroundConstraintContainerSolver *this,double param_1,int param_2,int param_3)

{
  return;
}

// ApplyVelocityConstraints @ 14389e4e0

void __thiscall
Chaos::Private::FCharacterGroundConstraintContainerSolver::ApplyVelocityConstraints
          (FCharacterGroundConstraintContainerSolver *this,double param_1,int param_2,int param_3)

{
  return;
}

// GatherInput @ 1438b75d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Private::FCharacterGroundConstraintContainerSolver::GatherInput
          (FCharacterGroundConstraintContainerSolver *this,double param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  iVar1 = (this->SolvedConstraints).ArrayNum;
  if (((this->Solvers).ArrayNum < iVar1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Solvers.Num() >= NumConstraints",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Character\\CharacterGroundConstraintContainerSolver.cpp"
                         ,100,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (iVar1 < (this->Solvers).ArrayNum) {
    TArray<Chaos::Private::FCharacterGroundConstraintSolver,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Solvers,(this->SolvedConstraints).ArrayNum,Default);
  }
  uVar6 = 0;
  if (0 < iVar1) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->SolvedConstraints).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)((this->SolvedConstraints).AllocatorInstance.Data + lVar7 * 8);
      uVar5 = 0;
      if ((int)uVar6 < (this->Solvers).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FCharacterGroundConstraintSolver::GatherInput
                ((FCharacterGroundConstraintSolver *)
                 ((this->Solvers).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x160),param_1,
                 (FCharacterGroundConstraintSettings *)(lVar2 + 0x20),
                 (FCharacterGroundConstraintDynamicData *)(lVar2 + 0x98));
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar1);
  }
  return;
}

// GatherInput @ 1438b7750

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Private::FCharacterGroundConstraintContainerSolver::GatherInput
          (FCharacterGroundConstraintContainerSolver *this,double param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar1 = (this->SolvedConstraints).ArrayNum;
  uVar7 = (ulonglong)param_2;
  if (((this->Solvers).ArrayNum < iVar1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Solvers.Num() >= NumConstraints",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Character\\CharacterGroundConstraintContainerSolver.cpp"
                         ,100,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (iVar1 < (this->Solvers).ArrayNum) {
    TArray<Chaos::Private::FCharacterGroundConstraintSolver,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Solvers,(this->SolvedConstraints).ArrayNum,Default);
  }
  if (param_2 < param_3) {
    lVar9 = uVar7 * 8;
    lVar8 = uVar7 * 0x160;
    do {
      uVar6 = (uint)uVar7;
      uVar5 = 0;
      if ((int)uVar6 < (this->SolvedConstraints).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)((this->SolvedConstraints).AllocatorInstance.Data + lVar9);
      uVar5 = 0;
      if ((int)uVar6 < (this->Solvers).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FCharacterGroundConstraintSolver::GatherInput
                ((FCharacterGroundConstraintSolver *)
                 ((this->Solvers).AllocatorInstance.Data + lVar8),param_1,
                 (FCharacterGroundConstraintSettings *)(lVar2 + 0x20),
                 (FCharacterGroundConstraintDynamicData *)(lVar2 + 0x98));
      uVar7 = (ulonglong)(uVar6 + 1);
      lVar8 = lVar8 + 0x160;
      lVar9 = lVar9 + 8;
    } while ((int)(uVar6 + 1) < param_3);
  }
  return;
}

// GetNumConstraints @ 1438bb380

int __thiscall
Chaos::Private::FCharacterGroundConstraintContainerSolver::GetNumConstraints
          (FCharacterGroundConstraintContainerSolver *this)

{
  return (this->SolvedConstraints).ArrayNum;
}

// Reset @ 1438d00e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Private::FCharacterGroundConstraintContainerSolver::Reset
          (FCharacterGroundConstraintContainerSolver *this,int param_1)

{
  int *piVar1;
  
  if (-1 < param_1) {
    (this->SolvedConstraints).ArrayNum = 0;
    if ((this->SolvedConstraints).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,&(this->SolvedConstraints).AllocatorInstance,0,
                 &(this->SolvedConstraints).ArrayMax);
    }
    piVar1 = &(this->Solvers).ArrayMax;
    (this->Solvers).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x160,0x10,0,&(this->Solvers).AllocatorInstance,0,piVar1);
    }
    TArray<Chaos::Private::FCharacterGroundConstraintSolver,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Solvers,param_1,Default);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// ScatterOutput @ 1438d0c60

void __thiscall
Chaos::Private::FCharacterGroundConstraintContainerSolver::ScatterOutput
          (FCharacterGroundConstraintContainerSolver *this,double param_1)

{
  ScatterOutput(this,param_1,0,(this->SolvedConstraints).ArrayNum);
  return;
}

// ScatterOutput @ 1438d0c80

void __thiscall
Chaos::Private::FCharacterGroundConstraintContainerSolver::ScatterOutput
          (FCharacterGroundConstraintContainerSolver *this,double param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  
  dVar16 = __real_3e45798ee0000000;
  dVar15 = __real_3ff0000000000000;
  uVar21 = (ulonglong)param_2;
  if (param_2 < param_3) {
    lVar19 = uVar21 * 0x160;
    uVar22 = uVar21;
    do {
      uVar20 = (uint)uVar22;
      uVar18 = 0;
      if ((int)uVar20 < (this->Solvers).ArrayNum) {
        uVar18 = ~uVar20 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (this->Solvers).AllocatorInstance.Data;
      uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (dVar16 < param_1) {
        fVar1 = *(float *)(pFVar3 + lVar19 + 0x4c);
        fVar2 = *(float *)(pFVar3 + lVar19 + 0x48);
        dVar8 = dVar15 / (param_1 * param_1);
        uVar9 = (double)(fVar1 * *(float *)(pFVar3 + lVar19 + 0xdc) +
                        *(float *)(pFVar3 + lVar19 + 0x30)) * dVar8;
        uVar10 = (double)(fVar1 * *(float *)(pFVar3 + lVar19 + 0xe4) +
                         *(float *)(pFVar3 + lVar19 + 0x38)) * dVar8;
        uVar11 = (double)(fVar1 * *(float *)(pFVar3 + lVar19 + 0xe0) +
                         *(float *)(pFVar3 + lVar19 + 0x34)) * dVar8;
        uVar12 = (double)(fVar2 * *(float *)(pFVar3 + lVar19 + 0xe8) +
                         *(float *)(pFVar3 + lVar19 + 0x3c)) * dVar8;
        uVar13 = (double)(fVar2 * *(float *)(pFVar3 + lVar19 + 0xec) +
                         *(float *)(pFVar3 + lVar19 + 0x40)) * dVar8;
        uVar14 = (double)(fVar2 * *(float *)(pFVar3 + lVar19 + 0xf0) +
                         *(float *)(pFVar3 + lVar19 + 0x44)) * dVar8;
      }
      *(undefined8 *)(pFVar3 + lVar19) = 0;
      *(undefined8 *)(pFVar3 + lVar19 + 0x18) = 0;
      uVar18 = 0;
      if ((int)uVar20 < (this->SolvedConstraints).ArrayNum) {
        uVar18 = ~uVar20 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar22 = (ulonglong)(uVar20 + 1);
      lVar19 = lVar19 + 0x160;
      lVar4 = *(longlong *)((this->SolvedConstraints).AllocatorInstance.Data + uVar21 * 8);
      uVar21 = uVar21 + 1;
      auVar6._8_4_ = (int)uVar11;
      auVar6._0_8_ = uVar9;
      auVar6._12_4_ = (int)((ulonglong)uVar11 >> 0x20);
      *(undefined1 (*) [16])(lVar4 + 0xe0) = auVar6;
      *(undefined8 *)(lVar4 + 0xf0) = uVar10;
      auVar7._8_4_ = (int)uVar13;
      auVar7._0_8_ = uVar12;
      auVar7._12_4_ = (int)((ulonglong)uVar13 >> 0x20);
      *(undefined1 (*) [16])(lVar4 + 0xf8) = auVar7;
      *(undefined8 *)(lVar4 + 0x108) = uVar14;
    } while ((int)(uVar20 + 1) < param_3);
  }
  return;
}

