// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 26

// FPBDConstraintGroupSolver @ 143afa3a0

FPBDConstraintGroupSolver * __thiscall
Chaos::Private::FPBDConstraintGroupSolver::FPBDConstraintGroupSolver
          (FPBDConstraintGroupSolver *this)

{
  this->_padding_ = (longlong)&___7FPBDConstraintGroupSolver_Private_Chaos__6B_;
  TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_>::
  TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_>
            ((TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_> *)
             &this->SolverBodyContainer,0);
  (this->SolverBodyContainer).Particles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SolverBodyContainer).Particles.ArrayNum = 0;
  (this->SolverBodyContainer).Particles.ArrayMax = 0;
  *(undefined8 *)&(this->SolverBodyContainer).ParticleToIndexMap = 0;
  *(undefined8 *)&(this->SolverBodyContainer).ParticleToIndexMap.field_0x8 = 0;
  *(undefined8 *)&(this->SolverBodyContainer).ParticleToIndexMap.field_0x20 = 0;
  *(undefined4 *)&(this->SolverBodyContainer).ParticleToIndexMap.field_0x28 = 0;
  *(undefined4 *)&(this->SolverBodyContainer).ParticleToIndexMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->SolverBodyContainer).ParticleToIndexMap.field_0x34 = 0;
  *(undefined4 *)&(this->SolverBodyContainer).ParticleToIndexMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SolverBodyContainer).ParticleToIndexMap.field_0x40 = 0;
  *(undefined4 *)&(this->SolverBodyContainer).ParticleToIndexMap.field_0x48 = 0;
  (this->SolverBodyContainer).bLocked = true;
  (this->ConstraintContainerSolvers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintContainerSolvers).ArrayNum = 0;
  (this->ConstraintContainerSolvers).ArrayMax = 0;
  this->TotalNumConstraints = 0;
  (this->PrioritizedConstraintContainerSolvers).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PrioritizedConstraintContainerSolvers).ArrayNum = 0;
  (this->PrioritizedConstraintContainerSolvers).ArrayMax = 0;
  (this->Iterations).NumPositionIterations = -1;
  (this->Iterations).NumVelocityIterations = -1;
  (this->Iterations).NumProjectionIterations = -1;
  return this;
}

// ~FPBDConstraintGroupSolver @ 143afd600

void __thiscall
Chaos::Private::FPBDConstraintGroupSolver::~FPBDConstraintGroupSolver
          (FPBDConstraintGroupSolver *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FPBDConstraintGroupSolver_Private_Chaos__6B_;
  pFVar1 = (this->PrioritizedConstraintContainerSolvers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>,int>
            ((TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
              *)(this->ConstraintContainerSolvers).AllocatorInstance.Data,
             (this->ConstraintContainerSolvers).ArrayNum);
  pFVar1 = (this->ConstraintContainerSolvers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->SolverBodyContainer).ParticleToIndexMap.field_0x48 = 0;
  pvVar2 = *(void **)&(this->SolverBodyContainer).ParticleToIndexMap.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::FGenericParticleHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::FGenericParticleHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::FGenericParticleHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->SolverBodyContainer).ParticleToIndexMap);
  pFVar1 = (this->SolverBodyContainer).Particles.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TIndirectArray<TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::
  ~TIndirectArray<TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
            ((TIndirectArray<TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
              *)&this->SolverBodyContainer);
  return;
}

// AddConstraintsAndBodies @ 143b0f940

void __thiscall
Chaos::Private::FPBDConstraintGroupSolver::AddConstraintsAndBodies(FPBDConstraintGroupSolver *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  (**(code **)(this->_padding_ + 0x20))();
  uVar7 = 0;
  if (0 < (this->ConstraintContainerSolvers).ArrayNum) {
    lVar8 = 0;
    do {
      uVar6 = ~uVar7 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar7 < (this->ConstraintContainerSolvers).ArrayNum) {
        uVar4 = uVar6;
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
      if (*(longlong *)((this->ConstraintContainerSolvers).AllocatorInstance.Data + lVar8) != 0) {
        uVar4 = 0;
        if ((int)uVar7 < (this->ConstraintContainerSolvers).ArrayNum) {
          uVar4 = uVar6;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar1 = *(longlong **)((this->ConstraintContainerSolvers).AllocatorInstance.Data + lVar8);
        (**(code **)(*plVar1 + 0x28))(plVar1,&this->SolverBodyContainer);
        uVar4 = 0;
        if ((int)uVar7 < (this->ConstraintContainerSolvers).ArrayNum) {
          uVar4 = uVar6;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = (**(code **)(**(longlong **)
                               ((this->ConstraintContainerSolvers).AllocatorInstance.Data + lVar8) +
                            0x10))();
        this->TotalNumConstraints = this->TotalNumConstraints + iVar5;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < (this->ConstraintContainerSolvers).ArrayNum);
  }
  (this->SolverBodyContainer).bLocked = true;
  return;
}

// AddConstraintsImpl @ 143b0fad0

void __thiscall
Chaos::Private::FPBDConstraintGroupSolver::AddConstraintsImpl(FPBDConstraintGroupSolver *this)

{
  return;
}

// ApplyPositionConstraints @ 143b158d0

void __thiscall
Chaos::Private::FPBDConstraintGroupSolver::ApplyPositionConstraints
          (FPBDConstraintGroupSolver *this,double param_1)

{
  char cVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  cVar1 = (this->Iterations).NumPositionIterations;
  iVar7 = 0;
  if ('\0' < cVar1) {
    do {
      uVar6 = 0;
      if (0 < (this->PrioritizedConstraintContainerSolvers).ArrayNum) {
        lVar8 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar6 < (this->PrioritizedConstraintContainerSolvers).ArrayNum) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(longlong *)
               ((this->PrioritizedConstraintContainerSolvers).AllocatorInstance.Data + lVar8) != 0)
          {
            uVar5 = 0;
            if ((int)uVar6 < (this->PrioritizedConstraintContainerSolvers).ArrayNum) {
              uVar5 = ~uVar6 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            plVar2 = *(longlong **)
                      ((this->PrioritizedConstraintContainerSolvers).AllocatorInstance.Data + lVar8)
            ;
            (**(code **)(*plVar2 + 0x68))(plVar2,SUB84(param_1,0),iVar7,(int)cVar1);
          }
          uVar6 = uVar6 + 1;
          lVar8 = lVar8 + 8;
        } while ((int)uVar6 < (this->PrioritizedConstraintContainerSolvers).ArrayNum);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < cVar1);
  }
  return;
}

// ApplyProjectionConstraints @ 143b15a30

void __thiscall
Chaos::Private::FPBDConstraintGroupSolver::ApplyProjectionConstraints
          (FPBDConstraintGroupSolver *this,double param_1)

{
  char cVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  cVar1 = (this->Iterations).NumProjectionIterations;
  iVar7 = 0;
  if ('\0' < cVar1) {
    do {
      uVar6 = 0;
      if (0 < (this->PrioritizedConstraintContainerSolvers).ArrayNum) {
        lVar8 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar6 < (this->PrioritizedConstraintContainerSolvers).ArrayNum) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(longlong *)
               ((this->PrioritizedConstraintContainerSolvers).AllocatorInstance.Data + lVar8) != 0)
          {
            uVar5 = 0;
            if ((int)uVar6 < (this->PrioritizedConstraintContainerSolvers).ArrayNum) {
              uVar5 = ~uVar6 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            plVar2 = *(longlong **)
                      ((this->PrioritizedConstraintContainerSolvers).AllocatorInstance.Data + lVar8)
            ;
            (**(code **)(*plVar2 + 0x78))(plVar2,SUB84(param_1,0),iVar7,(int)cVar1);
          }
          uVar6 = uVar6 + 1;
          lVar8 = lVar8 + 8;
        } while ((int)uVar6 < (this->PrioritizedConstraintContainerSolvers).ArrayNum);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < cVar1);
  }
  return;
}

// ApplyVelocityConstraints @ 143b16c10

void __thiscall
Chaos::Private::FPBDConstraintGroupSolver::ApplyVelocityConstraints
          (FPBDConstraintGroupSolver *this,double param_1)

{
  char cVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  cVar1 = (this->Iterations).NumVelocityIterations;
  iVar7 = 0;
  if ('\0' < cVar1) {
    do {
      uVar6 = 0;
      if (0 < (this->PrioritizedConstraintContainerSolvers).ArrayNum) {
        lVar8 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar6 < (this->PrioritizedConstraintContainerSolvers).ArrayNum) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(longlong *)
               ((this->PrioritizedConstraintContainerSolvers).AllocatorInstance.Data + lVar8) != 0)
          {
            uVar5 = 0;
            if ((int)uVar6 < (this->PrioritizedConstraintContainerSolvers).ArrayNum) {
              uVar5 = ~uVar6 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            plVar2 = *(longlong **)
                      ((this->PrioritizedConstraintContainerSolvers).AllocatorInstance.Data + lVar8)
            ;
            (**(code **)(*plVar2 + 0x70))(plVar2,SUB84(param_1,0),iVar7,(int)cVar1);
          }
          uVar6 = uVar6 + 1;
          lVar8 = lVar8 + 8;
        } while ((int)uVar6 < (this->PrioritizedConstraintContainerSolvers).ArrayNum);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < cVar1);
  }
  return;
}

// GatherBodies @ 143b1f230

void __thiscall
Chaos::Private::FPBDConstraintGroupSolver::GatherBodies
          (FPBDConstraintGroupSolver *this,double param_1)

{
  FSolverBodyContainer::GatherInput
            (&this->SolverBodyContainer,param_1,0,
             *(int *)&(this->SolverBodyContainer).SolverBodies.field_0x10);
  return;
}

// GatherBodies @ 143b1f250

void __thiscall
Chaos::Private::FPBDConstraintGroupSolver::GatherBodies
          (FPBDConstraintGroupSolver *this,double param_1,int param_2,int param_3)

{
  FSolverBodyContainer::GatherInput(&this->SolverBodyContainer,param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x000143b1f29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x28))(this,SUB84(param_1,0),param_2,param_3);
  return;
}

// GatherBodiesImpl @ 143b1f2b0

void __thiscall
Chaos::Private::FPBDConstraintGroupSolver::GatherBodiesImpl
          (FPBDConstraintGroupSolver *this,double param_1,int param_2,int param_3)

{
  return;
}

// GatherConstraints @ 143b1f2c0

void __thiscall
Chaos::Private::FPBDConstraintGroupSolver::GatherConstraints
          (FPBDConstraintGroupSolver *this,double param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->ConstraintContainerSolvers).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->ConstraintContainerSolvers).ArrayNum) {
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
      if (*(longlong *)((this->ConstraintContainerSolvers).AllocatorInstance.Data + lVar6) != 0) {
        uVar4 = 0;
        if ((int)uVar5 < (this->ConstraintContainerSolvers).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar1 = *(longlong **)((this->ConstraintContainerSolvers).AllocatorInstance.Data + lVar6);
        (**(code **)(*plVar1 + 0x38))(plVar1,SUB84(param_1,0));
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->ConstraintContainerSolvers).ArrayNum);
  }
  return;
}

// GatherConstraints @ 143b1f3e0

void __thiscall
Chaos::Private::FPBDConstraintGroupSolver::GatherConstraints
          (FPBDConstraintGroupSolver *this,double param_1,int param_2,int param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  uVar6 = 0;
  if (0 < (this->ConstraintContainerSolvers).ArrayNum) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->ConstraintContainerSolvers).ArrayNum) {
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
      plVar1 = *(longlong **)((this->ConstraintContainerSolvers).AllocatorInstance.Data + lVar8);
      if (plVar1 != (longlong *)0x0) {
        iVar5 = (**(code **)(*plVar1 + 0x10))(plVar1);
        if (param_2 < iVar5) {
          iVar7 = iVar5;
          if (param_3 < iVar5) {
            iVar7 = param_3;
          }
          (**(code **)(*plVar1 + 0x30))(plVar1,SUB84(param_1,0),param_2,iVar7);
        }
        param_2 = param_2 - iVar5;
        if (param_2 < 0) {
          param_2 = 0;
        }
        param_3 = param_3 - iVar5;
        if (param_3 < 0) {
          param_3 = 0;
        }
        if (param_3 < 1) break;
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar6 < (this->ConstraintContainerSolvers).ArrayNum);
  }
  if ((param_3 != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("EndIndex == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Evolution\\ConstraintGroupSolver.cpp"
                         ,0x99,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// PreApplyPositionConstraints @ 143b2bac0

void __thiscall
Chaos::Private::FPBDConstraintGroupSolver::PreApplyPositionConstraints
          (FPBDConstraintGroupSolver *this,double param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->ConstraintContainerSolvers).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->ConstraintContainerSolvers).ArrayNum) {
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
      if (*(longlong *)((this->ConstraintContainerSolvers).AllocatorInstance.Data + lVar6) != 0) {
        uVar4 = 0;
        if ((int)uVar5 < (this->ConstraintContainerSolvers).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar1 = *(longlong **)((this->ConstraintContainerSolvers).AllocatorInstance.Data + lVar6);
        (**(code **)(*plVar1 + 0x50))(plVar1,SUB84(param_1,0));
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->ConstraintContainerSolvers).ArrayNum);
  }
  return;
}

// PreApplyProjectionConstraints @ 143b2bbe0

void __thiscall
Chaos::Private::FPBDConstraintGroupSolver::PreApplyProjectionConstraints
          (FPBDConstraintGroupSolver *this,double param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  TRotation<double,3> *pTVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  FSolverBody *this_00;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  TRotation<double,3> local_48;
  
  uVar12 = 0;
  uVar10 = *(uint *)&(this->SolverBodyContainer).SolverBodies.field_0x10;
  if (uVar10 != 0) {
    uVar15 = (ulonglong)uVar10;
    uVar13 = uVar12;
    plVar14 = *(longlong **)&(this->SolverBodyContainer).SolverBodies;
    do {
      this_00 = (FSolverBody *)(uVar13 * 0x160 + *plVar14);
      fVar1 = *(float *)&(this_00->State).DP.field_0x4;
      fVar2 = *(float *)&(this_00->State).DP.field_0x8;
      dVar3 = *(double *)&(this_00->State).P.field_0x8;
      dVar4 = *(double *)&(this_00->State).P.field_0x10;
      *(double *)&(this_00->State).P =
           (double)*(float *)&(this_00->State).DP + *(double *)&(this_00->State).P;
      *(double *)&(this_00->State).P.field_0x8 = (double)fVar1 + dVar3;
      *(double *)&(this_00->State).P.field_0x10 = (double)fVar2 + dVar4;
      pTVar8 = FSolverBody::CorrectedQ(this_00,&local_48);
      uVar10 = (int)uVar13 + 1;
      uVar6 = *(undefined8 *)&pTVar8->field_0x8;
      uVar13 = uVar12;
      if (uVar10 < 0x100) {
        uVar13 = (ulonglong)uVar10;
      }
      *(undefined8 *)&(this_00->State).Q = *(undefined8 *)pTVar8;
      *(undefined8 *)&(this_00->State).Q.field_0x8 = uVar6;
      uVar6 = *(undefined8 *)&pTVar8->field_0x18;
      *(undefined8 *)&(this_00->State).Q.field_0x10 = *(undefined8 *)&pTVar8->field_0x10;
      *(undefined8 *)&(this_00->State).Q.field_0x18 = uVar6;
      *(undefined8 *)&(this_00->State).DP = 0;
      plVar9 = plVar14 + 1;
      if (uVar10 < 0x100) {
        plVar9 = plVar14;
      }
      *(undefined4 *)&(this_00->State).DP.field_0x8 = 0;
      *(undefined8 *)&(this_00->State).DQ = 0;
      *(undefined4 *)&(this_00->State).DQ.field_0x8 = 0;
      *(undefined8 *)&(this_00->State).CP = 0;
      *(undefined8 *)&(this_00->State).CP.field_0x8 = 0;
      *(undefined8 *)&(this_00->State).CQ.field_0x4 = 0;
      uVar15 = uVar15 - 1;
      plVar14 = plVar9;
    } while (uVar15 != 0);
  }
  uVar13 = uVar12;
  if (0 < (this->ConstraintContainerSolvers).ArrayNum) {
    do {
      uVar11 = (uint)uVar12;
      uVar10 = 0;
      if ((int)uVar11 < (this->ConstraintContainerSolvers).ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(longlong *)((this->ConstraintContainerSolvers).AllocatorInstance.Data + uVar13) != 0) {
        uVar10 = 0;
        if ((int)uVar11 < (this->ConstraintContainerSolvers).ArrayNum) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar14 = *(longlong **)((this->ConstraintContainerSolvers).AllocatorInstance.Data + uVar13)
        ;
        (**(code **)(*plVar14 + 0x60))(plVar14,SUB84(param_1,0));
      }
      uVar12 = (ulonglong)(uVar11 + 1);
      uVar13 = uVar13 + 8;
    } while ((int)(uVar11 + 1) < (this->ConstraintContainerSolvers).ArrayNum);
  }
  return;
}

// PreApplyVelocityConstraints @ 143b2bdf0

void __thiscall
Chaos::Private::FPBDConstraintGroupSolver::PreApplyVelocityConstraints
          (FPBDConstraintGroupSolver *this,double param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  longlong *plVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  float fVar13;
  
  fVar3 = __real_00800000;
  fVar2 = __real_3f800000;
  uVar7 = *(uint *)&(this->SolverBodyContainer).SolverBodies.field_0x10;
  uVar9 = 0;
  plVar10 = *(longlong **)&(this->SolverBodyContainer).SolverBodies;
  if (uVar7 != 0) {
    uVar11 = (ulonglong)uVar7;
    do {
      lVar8 = uVar9 * 0x160;
      lVar12 = *plVar10;
      if ((fVar3 < *(float *)(lVar8 + 0x134 + lVar12)) && (param_1 != 0.0)) {
        fVar13 = fVar2 / (float)param_1;
        *(float *)(lVar8 + 0x20 + lVar12) =
             (*(float *)(lVar8 + lVar12) - *(float *)(lVar8 + 0x138 + lVar12)) * fVar13 +
             *(float *)(lVar8 + 0x20 + lVar12);
        *(float *)(lVar8 + 0x24 + lVar12) =
             (*(float *)(lVar8 + 4 + lVar12) - *(float *)(lVar8 + 0x13c + lVar12)) * fVar13 +
             *(float *)(lVar8 + 0x24 + lVar12);
        *(float *)(lVar8 + 0x28 + lVar12) =
             (*(float *)(lVar8 + 8 + lVar12) - *(float *)(lVar8 + 0x140 + lVar12)) * fVar13 +
             *(float *)(lVar8 + 0x28 + lVar12);
        *(float *)(lVar8 + 0x30 + lVar12) =
             (*(float *)(lVar8 + 0x10 + lVar12) - *(float *)(lVar8 + 0x144 + lVar12)) * fVar13 +
             *(float *)(lVar8 + 0x30 + lVar12);
        *(float *)(lVar8 + 0x34 + lVar12) =
             (*(float *)(lVar8 + 0x14 + lVar12) - *(float *)(lVar8 + 0x148 + lVar12)) * fVar13 +
             *(float *)(lVar8 + 0x34 + lVar12);
        *(float *)(lVar8 + 0x38 + lVar12) =
             (*(float *)(lVar8 + 0x18 + lVar12) - *(float *)(lVar8 + 0x14c + lVar12)) * fVar13 +
             *(float *)(lVar8 + 0x38 + lVar12);
      }
      uVar7 = (int)uVar9 + 1;
      uVar9 = 0;
      plVar4 = plVar10 + 1;
      if (uVar7 < 0x100) {
        uVar9 = (ulonglong)uVar7;
        plVar4 = plVar10;
      }
      plVar10 = plVar4;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar7 = 0;
  if (0 < (this->ConstraintContainerSolvers).ArrayNum) {
    lVar12 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->ConstraintContainerSolvers).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(longlong *)((this->ConstraintContainerSolvers).AllocatorInstance.Data + lVar12) != 0) {
        uVar6 = 0;
        if ((int)uVar7 < (this->ConstraintContainerSolvers).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        plVar10 = *(longlong **)((this->ConstraintContainerSolvers).AllocatorInstance.Data + lVar12)
        ;
        (**(code **)(*plVar10 + 0x58))(plVar10,SUB84(param_1,0));
      }
      uVar7 = uVar7 + 1;
      lVar12 = lVar12 + 8;
    } while ((int)uVar7 < (this->ConstraintContainerSolvers).ArrayNum);
  }
  return;
}

// Reset @ 143b36c20

void __thiscall Chaos::Private::FPBDConstraintGroupSolver::Reset(FPBDConstraintGroupSolver *this)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar6 = 0;
  *(undefined4 *)&(this->SolverBodyContainer).SolverBodies.field_0x10 = 0;
  iVar1 = (this->SolverBodyContainer).Particles.ArrayMax;
  (this->SolverBodyContainer).Particles.ArrayNum = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->SolverBodyContainer).Particles.AllocatorInstance,0,
               &(this->SolverBodyContainer).Particles.ArrayMax);
  }
  TSet<TTuple<Chaos::FGenericParticleHandle,int>,TDefaultMapHashableKeyFuncs<Chaos::FGenericParticleHandle,int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<Chaos::FGenericParticleHandle,int>,TDefaultMapHashableKeyFuncs<Chaos::FGenericParticleHandle,int,0>,FDefaultSetAllocator>
           *)&(this->SolverBodyContainer).ParticleToIndexMap);
  (this->SolverBodyContainer).bLocked = false;
  uVar8 = uVar6;
  if (0 < (this->ConstraintContainerSolvers).ArrayNum) {
    do {
      uVar7 = (uint)uVar6;
      uVar5 = 0;
      if ((int)uVar7 < (this->ConstraintContainerSolvers).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
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
      if (*(longlong *)((this->ConstraintContainerSolvers).AllocatorInstance.Data + uVar8) != 0) {
        uVar5 = 0;
        if ((int)uVar7 < (this->ConstraintContainerSolvers).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar2 = *(longlong **)((this->ConstraintContainerSolvers).AllocatorInstance.Data + uVar8);
        (**(code **)(*plVar2 + 8))(plVar2,0);
      }
      uVar6 = (ulonglong)(uVar7 + 1);
      uVar8 = uVar8 + 8;
    } while ((int)(uVar7 + 1) < (this->ConstraintContainerSolvers).ArrayNum);
  }
  this->TotalNumConstraints = 0;
                    /* WARNING: Could not recover jumptable at 0x000143b36d7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))(this);
  return;
}

// ResetImpl @ 143b36ff0

void __thiscall
Chaos::Private::FPBDConstraintGroupSolver::ResetImpl(FPBDConstraintGroupSolver *this)

{
  return;
}

// ScatterBodies @ 143b39fc0

void __thiscall
Chaos::Private::FPBDConstraintGroupSolver::ScatterBodies
          (FPBDConstraintGroupSolver *this,double param_1)

{
  FSolverBodyContainer::ScatterOutput
            (&this->SolverBodyContainer,0,
             *(int *)&(this->SolverBodyContainer).SolverBodies.field_0x10);
  return;
}

// ScatterBodies @ 143b39fe0

void __thiscall
Chaos::Private::FPBDConstraintGroupSolver::ScatterBodies
          (FPBDConstraintGroupSolver *this,double param_1,int param_2,int param_3)

{
  FSolverBodyContainer::ScatterOutput(&this->SolverBodyContainer,param_2,param_3);
  return;
}

// ScatterConstraints @ 143b3a000

void __thiscall
Chaos::Private::FPBDConstraintGroupSolver::ScatterConstraints
          (FPBDConstraintGroupSolver *this,double param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->ConstraintContainerSolvers).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->ConstraintContainerSolvers).ArrayNum) {
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
      if (*(longlong *)((this->ConstraintContainerSolvers).AllocatorInstance.Data + lVar6) != 0) {
        uVar4 = 0;
        if ((int)uVar5 < (this->ConstraintContainerSolvers).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar1 = *(longlong **)((this->ConstraintContainerSolvers).AllocatorInstance.Data + lVar6);
        (**(code **)(*plVar1 + 0x48))(plVar1,SUB84(param_1,0));
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->ConstraintContainerSolvers).ArrayNum);
  }
  return;
}

// ScatterConstraints @ 143b3a120

void __thiscall
Chaos::Private::FPBDConstraintGroupSolver::ScatterConstraints
          (FPBDConstraintGroupSolver *this,double param_1,int param_2,int param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  uVar6 = 0;
  if (0 < (this->ConstraintContainerSolvers).ArrayNum) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->ConstraintContainerSolvers).ArrayNum) {
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
      plVar1 = *(longlong **)((this->ConstraintContainerSolvers).AllocatorInstance.Data + lVar8);
      if (plVar1 != (longlong *)0x0) {
        iVar5 = (**(code **)(*plVar1 + 0x10))(plVar1);
        if (param_2 < iVar5) {
          iVar7 = iVar5;
          if (param_3 < iVar5) {
            iVar7 = param_3;
          }
          (**(code **)(*plVar1 + 0x40))(plVar1,SUB84(param_1,0),param_2,iVar7);
        }
        param_2 = param_2 - iVar5;
        if (param_2 < 0) {
          param_2 = 0;
        }
        param_3 = param_3 - iVar5;
        if (param_3 < 0) {
          param_3 = 0;
        }
        if (param_3 < 1) break;
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar6 < (this->ConstraintContainerSolvers).ArrayNum);
  }
  if ((param_3 != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("EndIndex == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Evolution\\ConstraintGroupSolver.cpp"
                         ,0x99,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// SetConstraintSolver @ 143b3eea0

void __thiscall
Chaos::Private::FPBDConstraintGroupSolver::SetConstraintSolver
          (FPBDConstraintGroupSolver *this,int param_1,
          TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
          *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>,TSizedDefaultAllocator<32>_>
  *this_00;
  FScriptContainerElement *pFVar2;
  int iVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  piVar1 = &(this->ConstraintContainerSolvers).ArrayNum;
  iVar3 = *piVar1;
  if (iVar3 <= param_1) {
    uVar8 = param_1 + 1;
    this_00 = &this->ConstraintContainerSolvers;
    if (iVar3 < (int)uVar8) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar8 - iVar3,&this_00->AllocatorInstance,piVar1,
                         &(this->ConstraintContainerSolvers).ArrayMax);
      memset((this_00->AllocatorInstance).Data + (longlong)iVar7 * 8,0,
             (longlong)(int)(uVar8 - iVar3) << 3);
    }
    else {
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      if ((int)uVar8 < iVar3) {
        uVar9 = iVar3 - uVar8;
        if (((int)(uVar9 | uVar8) < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (uVar9 != 0) {
          TArray<TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>,TSizedDefaultAllocator<32>_>
          ::RemoveAtImpl(this_00,uVar8,uVar9);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this_00->AllocatorInstance,(this->ConstraintContainerSolvers).ArrayNum,
                     &(this->ConstraintContainerSolvers).ArrayMax);
        }
      }
    }
  }
  uVar8 = 0;
  if (param_1 < (this->ConstraintContainerSolvers).ArrayNum) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar2 = (this->ConstraintContainerSolvers).AllocatorInstance.Data + (longlong)param_1 * 8;
  if (pFVar2 != (FScriptContainerElement *)param_2) {
    puVar4 = *(undefined8 **)&pFVar2->field_0x0;
    *(FConstraintContainerSolver **)&pFVar2->field_0x0 = param_2->Ptr;
    param_2->Ptr = (FConstraintContainerSolver *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  (**(code **)(this->_padding_ + 0x18))(this,param_1);
  SortSolverContainers(this);
  return;
}

// SetConstraintSolverImpl @ 143b3f060

void __thiscall
Chaos::Private::FPBDConstraintGroupSolver::SetConstraintSolverImpl
          (FPBDConstraintGroupSolver *this,int param_1)

{
  return;
}

// SetConstraintSolverPriority @ 143b3f070

void __thiscall
Chaos::Private::FPBDConstraintGroupSolver::SetConstraintSolverPriority
          (FPBDConstraintGroupSolver *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_1;
  uVar4 = (uint)~param_1 >> 0x1f;
  uVar3 = 0;
  if (param_1 < (this->ConstraintContainerSolvers).ArrayNum) {
    uVar3 = uVar4;
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
  if (*(longlong *)((this->ConstraintContainerSolvers).AllocatorInstance.Data + lVar5 * 8) != 0) {
    uVar3 = 0;
    if (param_1 < (this->ConstraintContainerSolvers).ArrayNum) {
      uVar3 = uVar4;
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
    if (*(int *)(*(longlong *)
                  ((this->ConstraintContainerSolvers).AllocatorInstance.Data + lVar5 * 8) + 8) !=
        param_2) {
      uVar3 = 0;
      if (param_1 < (this->ConstraintContainerSolvers).ArrayNum) {
        uVar3 = uVar4;
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
      *(int *)(*(longlong *)((this->ConstraintContainerSolvers).AllocatorInstance.Data + lVar5 * 8)
              + 8) = param_2;
      SortSolverContainers(this);
    }
  }
  return;
}

// SetIterationSettings @ 143b401b0

void __thiscall
Chaos::Private::FPBDConstraintGroupSolver::SetIterationSettings
          (FPBDConstraintGroupSolver *this,TIterationSettings<signed_char> *param_1)

{
  schar sVar1;
  
  sVar1 = param_1->NumVelocityIterations;
  (this->Iterations).NumPositionIterations = param_1->NumPositionIterations;
  (this->Iterations).NumVelocityIterations = sVar1;
  (this->Iterations).NumProjectionIterations = param_1->NumProjectionIterations;
  return;
}

// SortSolverContainers @ 143b42430

void __thiscall
Chaos::Private::FPBDConstraintGroupSolver::SortSolverContainers(FPBDConstraintGroupSolver *this)

{
  int *piVar1;
  TArray<Chaos::FConstraintContainerSolver_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_38 [2];
  
  uVar4 = (this->ConstraintContainerSolvers).ArrayNum;
  pTVar2 = &this->PrioritizedConstraintContainerSolvers;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  piVar1 = &(this->PrioritizedConstraintContainerSolvers).ArrayMax;
  (this->PrioritizedConstraintContainerSolvers).ArrayNum = 0;
  if ((this->PrioritizedConstraintContainerSolvers).ArrayMax < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar4,&pTVar2->AllocatorInstance,0,piVar1);
  }
  pFVar11 = (this->ConstraintContainerSolvers).AllocatorInstance.Data;
  iVar5 = (this->ConstraintContainerSolvers).ArrayNum;
  pFVar3 = pFVar11 + (longlong)iVar5 * 8;
  while( true ) {
    if ((this->ConstraintContainerSolvers).ArrayNum != iVar5) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar3) break;
    lVar6 = *(longlong *)pFVar11;
    if (lVar6 != 0) {
      pFVar7 = (pTVar2->AllocatorInstance).Data;
      local_38[0] = lVar6;
      if ((pFVar7 <= (FScriptContainerElement *)local_38) &&
         ((FScriptContainerElement *)local_38 < pFVar7 + (longlong)*piVar1 * 8)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar10 = (this->PrioritizedConstraintContainerSolvers).ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->PrioritizedConstraintContainerSolvers).ArrayNum = iVar10 + 1;
      *(longlong *)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_38[0];
    }
    pFVar11 = pFVar11 + 8;
  }
  AlgoImpl::
  StableSortInternal<Chaos::FConstraintContainerSolver_*,FIdentityFunctor,TDereferenceWrapper<Chaos::FConstraintContainerSolver_*,_Chaos::Private::FPBDConstraintGroupSolver::SortSolverContainers_::__l2::<lambda_1>_>_>
            ((FConstraintContainerSolver **)(pTVar2->AllocatorInstance).Data,
             (this->PrioritizedConstraintContainerSolvers).ArrayNum,local_res8[0],
             (<lambda_1> *)local_res10);
  return;
}

