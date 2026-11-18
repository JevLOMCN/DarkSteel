// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// FPBDIslandConstraintGroupSolver @ 143b57390

FPBDIslandConstraintGroupSolver * __thiscall
Chaos::Private::FPBDIslandConstraintGroupSolver::FPBDIslandConstraintGroupSolver
          (FPBDIslandConstraintGroupSolver *this,FPBDIslandManager *param_1)

{
  FPBDConstraintGroupSolver::FPBDConstraintGroupSolver((FPBDConstraintGroupSolver *)this);
  this->IslandManager = param_1;
  this->_padding_ = (longlong)&___7FPBDIslandConstraintGroupSolver_Private_Chaos__6B_;
  this->NumParticles = 0;
  this->NumConstraints = 0;
  (this->NumContainerConstraints).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (this->NumContainerConstraints).ArrayNum = 0;
  (this->NumContainerConstraints).ArrayMax = 5;
  (this->Islands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Islands).ArrayNum = 0;
  (this->Islands).ArrayMax = 0;
  return this;
}

// AddConstraintsImpl @ 143b5cb20

void __thiscall
Chaos::Private::FPBDIslandConstraintGroupSolver::AddConstraintsImpl
          (FPBDIslandConstraintGroupSolver *this)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  ForElementType<int> FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ForElementType<int> FVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  longlong local_res18;
  undefined8 local_48;
  int local_40;
  
  uVar9 = this->NumParticles;
  *(undefined4 *)&this->_padding_ = 0;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar1 < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar9,(ForAnyElementType *)&this->_padding_,0,
               (int *)((longlong)&this->_padding_ + 4));
  }
  TSet<TTuple<Chaos::FGenericParticleHandle,int>,TDefaultMapHashableKeyFuncs<Chaos::FGenericParticleHandle,int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<Chaos::FGenericParticleHandle,int>,TDefaultMapHashableKeyFuncs<Chaos::FGenericParticleHandle,int,0>,FDefaultSetAllocator>
           *)&this->_padding_);
  uVar9 = 0;
  *(undefined1 *)&this->_padding_ = 0;
  if (0 < (int)this->_padding_) {
    lVar11 = 0;
    local_res18 = 0;
    do {
      lVar12 = local_res18;
      uVar14 = ~uVar9 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar9 < (int)this->_padding_) {
        uVar7 = uVar14;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(longlong *)(lVar11 + this->_padding_) != 0) {
        uVar7 = 0;
        if ((int)uVar9 < (int)this->_padding_) {
          uVar7 = uVar14;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar3 = *(longlong **)(lVar11 + this->_padding_);
        pcVar5 = *(code **)(*plVar3 + 8);
        uVar7 = 0;
        if ((int)uVar9 < (this->NumContainerConstraints).ArrayNum) {
          uVar7 = uVar14;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar4 = (this->NumContainerConstraints).AllocatorInstance.SecondaryData;
        FVar8 = (ForElementType<int>)&this->NumContainerConstraints;
        if (FVar4 != (ForElementType<int>)0x0) {
          FVar8 = FVar4;
        }
        (*pcVar5)(plVar3,*(undefined4 *)((longlong)FVar8 + lVar12));
        pFVar13 = (this->Islands).AllocatorInstance.Data;
        iVar1 = (this->Islands).ArrayNum;
        local_res10 = pFVar13 + (longlong)iVar1 * 8;
        while( true ) {
          if ((this->Islands).ArrayNum != iVar1) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<Chaos::Private::FPBDIsland_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          lVar12 = local_res18;
          if (pFVar13 == local_res10) break;
          lVar12 = *(longlong *)pFVar13;
          uVar7 = 0;
          if ((int)uVar9 < *(int *)(lVar12 + 0x68)) {
            uVar7 = uVar14;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar10 = lVar12 + 0x10;
          if (*(longlong *)(lVar12 + 0x60) != 0) {
            lVar10 = *(longlong *)(lVar12 + 0x60);
          }
          local_48 = *(undefined8 *)(lVar10 + (longlong)(int)uVar9 * 0x10);
          iVar2 = *(int *)(lVar10 + 8 + (longlong)(int)uVar9 * 0x10);
          if ((iVar2 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar7 = 0;
          if ((int)uVar9 < (int)this->_padding_) {
            uVar7 = uVar14;
          }
          local_40 = iVar2;
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          plVar3 = *(longlong **)(lVar11 + this->_padding_);
          (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
          pFVar13 = pFVar13 + 8;
        }
      }
      local_res18 = lVar12 + 4;
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 8;
    } while ((int)uVar9 < (int)this->_padding_);
  }
  return;
}

// AddIsland @ 143b5d070

void __thiscall
Chaos::Private::FPBDIslandConstraintGroupSolver::AddIsland
          (FPBDIslandConstraintGroupSolver *this,FPBDIsland *param_1)

{
  int *piVar1;
  TArray<Chaos::Private::FPBDIsland_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar4;
  ForElementType<int> FVar5;
  code *pcVar6;
  FPBDIsland *pFVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ForElementType<int> FVar11;
  uint uVar12;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar13
  ;
  longlong lVar14;
  longlong lVar15;
  FPBDIsland *local_res10;
  
  if (param_1 != (FPBDIsland *)0x0) {
    pTVar2 = &this->Islands;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    local_res10 = param_1;
    if (((pFVar3 <= (FScriptContainerElement *)&local_res10) &&
        ((FScriptContainerElement *)&local_res10 < pFVar3 + (longlong)(this->Islands).ArrayMax * 8))
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = (this->Islands).ArrayNum;
    piVar1 = &(this->Islands).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->Islands).ArrayNum = iVar9 + 1;
    uVar12 = 0;
    *(FPBDIsland **)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_res10;
    this->NumParticles = this->NumParticles + (local_res10->Nodes).ArrayNum;
    if (0 < (int)this->_padding_) {
      lVar15 = 0;
      lVar14 = 0;
      do {
        pFVar7 = local_res10;
        FVar13 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                  )&local_res10->ContainerEdges;
        uVar10 = 0;
        if ((int)uVar12 < (local_res10->ContainerEdges).ArrayNum) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar4 = (pFVar7->ContainerEdges).AllocatorInstance.SecondaryData;
        if (FVar4 != (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                      )0x0) {
          FVar13 = FVar4;
        }
        uVar10 = 0;
        if ((int)uVar12 < (this->NumContainerConstraints).ArrayNum) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        iVar9 = *(int *)(lVar14 + 8 + (longlong)FVar13);
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar5 = (this->NumContainerConstraints).AllocatorInstance.SecondaryData;
        FVar11 = (ForElementType<int>)&this->NumContainerConstraints;
        if (FVar5 != (ForElementType<int>)0x0) {
          FVar11 = FVar5;
        }
        uVar12 = uVar12 + 1;
        lVar14 = lVar14 + 0x10;
        *(int *)(lVar15 + (longlong)FVar11) = *(int *)(lVar15 + (longlong)FVar11) + iVar9;
        lVar15 = lVar15 + 4;
        this->NumConstraints = this->NumConstraints + iVar9;
      } while ((int)uVar12 < (int)this->_padding_);
    }
  }
  return;
}

// ApplyIterationSettingsOverrides @ 143b5d8e0

void __thiscall
Chaos::Private::FPBDIslandConstraintGroupSolver::ApplyIterationSettingsOverrides
          (FPBDIslandConstraintGroupSolver *this)

{
  undefined1 uVar1;
  int iVar2;
  
  if (-1 < CVars::ChaosSolverPositionIterations) {
    iVar2 = 0x7f;
    if (CVars::ChaosSolverPositionIterations < 0x7f) {
      iVar2 = CVars::ChaosSolverPositionIterations;
    }
    uVar1 = 0xff;
    if (-1 < iVar2) {
      uVar1 = (char)iVar2;
    }
    *(undefined1 *)&this->_padding_ = uVar1;
  }
  if (-1 < CVars::ChaosSolverVelocityIterations) {
    iVar2 = 0x7f;
    if (CVars::ChaosSolverVelocityIterations < 0x7f) {
      iVar2 = CVars::ChaosSolverVelocityIterations;
    }
    uVar1 = 0xff;
    if (-1 < iVar2) {
      uVar1 = (char)iVar2;
    }
    *(undefined1 *)((longlong)&this->_padding_ + 1) = uVar1;
  }
  if (-1 < CVars::ChaosSolverProjectionIterations) {
    iVar2 = 0x7f;
    if (CVars::ChaosSolverProjectionIterations < 0x7f) {
      iVar2 = CVars::ChaosSolverProjectionIterations;
    }
    uVar1 = 0xff;
    if (-1 < iVar2) {
      uVar1 = (char)iVar2;
    }
    *(undefined1 *)((longlong)&this->_padding_ + 2) = uVar1;
  }
  return;
}

// GatherBodiesImpl @ 143b67390

void __thiscall
Chaos::Private::FPBDIslandConstraintGroupSolver::GatherBodiesImpl
          (FPBDIslandConstraintGroupSolver *this,double param_1,int param_2,int param_3)

{
  longlong lVar1;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FPBDIslandParticle *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  
  uVar10 = (ulonglong)param_2;
  if (param_2 < param_3) {
    lVar11 = uVar10 * 8;
    do {
      uVar9 = (uint)uVar10;
      uVar8 = (int)uVar9 >> 0x1f & 0xff;
      uVar4 = uVar9 + uVar8;
      uVar12 = (int)uVar4 >> 8;
      uVar7 = 0;
      if ((int)uVar12 < (int)this->_padding_) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)(this->_padding_ + (longlong)(int)uVar12 * 8);
      uVar7 = 0;
      if ((int)uVar9 < (int)this->_padding_) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = *(TGeometryParticleHandleImp<double,3,1> **)(lVar11 + this->_padding_);
      if ((this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) ||
         (pFVar6 = TGeometryParticleHandleImp<double,3,1>::GetConstraintGraphNode(this_00),
         pFVar6 == (FPBDIslandParticle *)0x0)) {
        iVar5 = -1;
      }
      else {
        iVar5 = pFVar6->Level;
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      *(int *)((ulonglong)((uVar4 & 0xff) - uVar8) * 0x160 + lVar1 + 0x150) = iVar5;
      lVar11 = lVar11 + 8;
    } while ((int)(uVar9 + 1) < param_3);
  }
  return;
}

// ResetImpl @ 143b75130

void __thiscall
Chaos::Private::FPBDIslandConstraintGroupSolver::ResetImpl(FPBDIslandConstraintGroupSolver *this)

{
  ForElementType<int> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ForElementType<int> FVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar7 = 0;
  this->NumParticles = 0;
  this->NumConstraints = 0;
  uVar8 = uVar7;
  if (0 < (int)this->_padding_) {
    do {
      uVar6 = (uint)uVar7;
      uVar4 = 0;
      if ((int)uVar6 < (this->NumContainerConstraints).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
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
      FVar1 = (this->NumContainerConstraints).AllocatorInstance.SecondaryData;
      FVar5 = (ForElementType<int>)&this->NumContainerConstraints;
      if (FVar1 != (ForElementType<int>)0x0) {
        FVar5 = FVar1;
      }
      uVar7 = (ulonglong)(uVar6 + 1);
      *(undefined4 *)(uVar8 + (longlong)FVar5) = 0;
      uVar8 = uVar8 + 4;
    } while ((int)(uVar6 + 1) < (int)this->_padding_);
  }
  (this->Islands).ArrayNum = 0;
  if ((this->Islands).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Islands).AllocatorInstance,0,&(this->Islands).ArrayMax);
  }
  return;
}

// SetConstraintSolverImpl @ 143b77c80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Private::FPBDIslandConstraintGroupSolver::SetConstraintSolverImpl
          (FPBDIslandConstraintGroupSolver *this,int param_1)

{
  if ((this->NumContainerConstraints).ArrayNum <= param_1) {
    TArray<int,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
              (&this->NumContainerConstraints,param_1 + 1,Default);
    return;
  }
  return;
}

// SetIterationSettings @ 143b77cd0

void __thiscall
Chaos::Private::FPBDIslandConstraintGroupSolver::SetIterationSettings
          (FPBDIslandConstraintGroupSolver *this,TIterationSettings<signed_char> *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined2 uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined1 uVar7;
  char cVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  char cStackX_19;
  
  *(undefined2 *)&this->_padding_ = 0xffff;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0xff;
  pFVar9 = (this->Islands).AllocatorInstance.Data;
  iVar6 = (this->Islands).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar6 * 8;
  while( true ) {
    if ((this->Islands).ArrayNum != iVar6) {
      `TCheckedPointerIterator<Chaos::Private::FPBDIsland_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar1) break;
    uVar2 = *(undefined2 *)(*(longlong *)pFVar9 + 0x98);
    cVar4 = *(char *)(*(longlong *)pFVar9 + 0x9a);
    cVar5 = *(char *)((longlong)&this->_padding_ + 2);
    cStackX_19 = (char)((ushort)uVar2 >> 8);
    if (cVar4 < cVar5) {
      cVar4 = cVar5;
    }
    cVar3 = (char)uVar2;
    cVar5 = *(char *)((longlong)&this->_padding_ + 1);
    if (cStackX_19 < cVar5) {
      cStackX_19 = cVar5;
    }
    cVar5 = (char)this->_padding_;
    if (cVar3 < cVar5) {
      cVar3 = cVar5;
    }
    cVar5 = '\x7f';
    if (cVar3 < '\x7f') {
      cVar5 = cVar3;
    }
    cVar3 = '\x7f';
    if (cStackX_19 < '\x7f') {
      cVar3 = cStackX_19;
    }
    cVar8 = '\x7f';
    if (cVar4 < '\x7f') {
      cVar8 = cVar4;
    }
    cVar4 = -1;
    if (-1 < cVar5) {
      cVar4 = cVar5;
    }
    *(char *)&this->_padding_ = cVar4;
    cVar5 = -1;
    if (-1 < cVar3) {
      cVar5 = cVar3;
    }
    *(char *)((longlong)&this->_padding_ + 1) = cVar5;
    cVar5 = -1;
    if (-1 < cVar8) {
      cVar5 = cVar8;
    }
    pFVar9 = pFVar9 + 8;
    *(char *)((longlong)&this->_padding_ + 2) = cVar5;
  }
  if ((char)this->_padding_ < '\0') {
    cVar5 = '\x7f';
    if (param_1->NumPositionIterations < '\x7f') {
      cVar5 = param_1->NumPositionIterations;
    }
    cVar4 = -1;
    if (-1 < cVar5) {
      cVar4 = cVar5;
    }
    *(char *)&this->_padding_ = cVar4;
  }
  if (*(char *)((longlong)&this->_padding_ + 1) < '\0') {
    cVar5 = '\x7f';
    if (param_1->NumVelocityIterations < '\x7f') {
      cVar5 = param_1->NumVelocityIterations;
    }
    cVar4 = -1;
    if (-1 < cVar5) {
      cVar4 = cVar5;
    }
    *(char *)((longlong)&this->_padding_ + 1) = cVar4;
  }
  if (*(char *)((longlong)&this->_padding_ + 2) < '\0') {
    cVar5 = '\x7f';
    if (param_1->NumProjectionIterations < '\x7f') {
      cVar5 = param_1->NumProjectionIterations;
    }
    cVar4 = -1;
    if (-1 < cVar5) {
      cVar4 = cVar5;
    }
    *(char *)((longlong)&this->_padding_ + 2) = cVar4;
  }
  if (-1 < CVars::ChaosSolverPositionIterations) {
    iVar6 = 0x7f;
    if (CVars::ChaosSolverPositionIterations < 0x7f) {
      iVar6 = CVars::ChaosSolverPositionIterations;
    }
    uVar7 = 0xff;
    if (-1 < iVar6) {
      uVar7 = (char)iVar6;
    }
    *(undefined1 *)&this->_padding_ = uVar7;
  }
  if (-1 < CVars::ChaosSolverVelocityIterations) {
    iVar6 = 0x7f;
    if (CVars::ChaosSolverVelocityIterations < 0x7f) {
      iVar6 = CVars::ChaosSolverVelocityIterations;
    }
    uVar7 = 0xff;
    if (-1 < iVar6) {
      uVar7 = (char)iVar6;
    }
    *(undefined1 *)((longlong)&this->_padding_ + 1) = uVar7;
  }
  if (-1 < CVars::ChaosSolverProjectionIterations) {
    iVar6 = 0x7f;
    if (CVars::ChaosSolverProjectionIterations < 0x7f) {
      iVar6 = CVars::ChaosSolverProjectionIterations;
    }
    uVar7 = 0xff;
    if (-1 < iVar6) {
      uVar7 = (char)iVar6;
    }
    *(undefined1 *)((longlong)&this->_padding_ + 2) = uVar7;
  }
  return;
}

