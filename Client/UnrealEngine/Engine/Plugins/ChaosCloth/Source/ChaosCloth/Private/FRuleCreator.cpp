// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 13

// FRuleCreator @ 14db96980

FRuleCreator * __thiscall
Chaos::FClothConstraints::FRuleCreator::FRuleCreator(FRuleCreator *this,FClothConstraints *param_1)

{
  uint uVar1;
  int iVar2;
  FClothConstraints *pFVar3;
  FEvolution *pFVar4;
  TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>
  *pTVar5;
  TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>
  *pTVar6;
  TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>
  *pTVar7;
  code *pcVar8;
  bool bVar9;
  FRuleCreator *pFVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined4 uStack_7c;
  TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>,int>
  local_78;
  TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int> local_68;
  TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>,int>
  local_58;
  TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,Chaos::Softs::ESolverMode)>,int>
  local_48;
  TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int> local_38;
  TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int> local_28;
  TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,Chaos::Softs::ESolverMode)>,int>
  local_18;
  
  this->Constraints = param_1;
  (this->PreSubstepParallelInits).DataPtr =
       (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>
        *)0x0;
  (this->PreSubstepParallelInits).ArrayNum = 0;
  (this->ExternalForceRules).DataPtr =
       (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)> *)0x0;
  (this->ExternalForceRules).ArrayNum = 0;
  (this->PostInitialGuessParallelInits).DataPtr =
       (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>
        *)0x0;
  (this->PostInitialGuessParallelInits).ArrayNum = 0;
  (this->PreSubstepConstraintRules).DataPtr =
       (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,Chaos::Softs::ESolverMode)>
        *)0x0;
  (this->PreSubstepConstraintRules).ArrayNum = 0;
  (this->PerIterationConstraintRules).DataPtr =
       (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)> *)0x0;
  (this->PerIterationConstraintRules).ArrayNum = 0;
  (this->PerIterationCollisionConstraintRules).DataPtr =
       (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>
        *)0x0;
  (this->PerIterationCollisionConstraintRules).ArrayNum = 0;
  (this->PerIterationPostCollisionsConstraintRules).DataPtr =
       (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)> *)0x0;
  (this->PerIterationPostCollisionsConstraintRules).ArrayNum = 0;
  (this->UpdateLinearSystemRules).DataPtr =
       (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>
        *)0x0;
  (this->UpdateLinearSystemRules).ArrayNum = 0;
  (this->UpdateLinearSystemCollisionsRules).DataPtr =
       (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>
        *)0x0;
  (this->UpdateLinearSystemCollisionsRules).ArrayNum = 0;
  (this->PostSubstepConstraintRules).DataPtr =
       (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,Chaos::Softs::ESolverMode)>
        *)0x0;
  (this->PostSubstepConstraintRules).ArrayNum = 0;
  this->PreSubstepInitsIndex = 0;
  this->ExternalForceRulesIndex = 0;
  this->PostInitialGuessInitsIndex = 0;
  this->PreSubstepConstraintRulesIndex = 0;
  this->ConstraintRuleIndex = 0;
  this->CollisionConstraintRulesIndex = 0;
  this->PostCollisionConstraintRulesIndex = 0;
  this->UpdateLinearSystemRulesIndex = 0;
  this->UpdateLinearSystemCollisionsRulesIndex = 0;
  this->PostSubstepConstraintRulesIndex = 0;
  if (this->Constraints == (FClothConstraints *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Constraints",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                       ,0x7d,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar10 = (FRuleCreator *)(*pcVar8)();
      return pFVar10;
    }
  }
  pFVar3 = this->Constraints;
  Softs::FEvolution::
  AllocateRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>_>
            (pFVar3->Evolution,pFVar3->ParticleRangeId,pFVar3->NumPreSubstepInits,
             &(pFVar3->Evolution->SoftBodies).PreSubstepParallelInits);
  pFVar3 = this->Constraints;
  Softs::FEvolution::
  AllocateRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>_>
            (pFVar3->Evolution,pFVar3->ParticleRangeId,pFVar3->NumExternalForceRules,
             &(pFVar3->Evolution->SoftBodies).PBDExternalForceRules);
  pFVar3 = this->Constraints;
  Softs::FEvolution::
  AllocateRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>_>
            (pFVar3->Evolution,pFVar3->ParticleRangeId,pFVar3->NumConstraintInits,
             &(pFVar3->Evolution->SoftBodies).PostInitialGuessParallelInits);
  pFVar3 = this->Constraints;
  Softs::FEvolution::
  AllocateRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>_>
            (pFVar3->Evolution,pFVar3->ParticleRangeId,pFVar3->NumPreSubstepConstraintRules,
             &(pFVar3->Evolution->SoftBodies).PreSubstepConstraintRules);
  pFVar3 = this->Constraints;
  Softs::FEvolution::
  AllocateRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>_>
            (pFVar3->Evolution,pFVar3->ParticleRangeId,pFVar3->NumConstraintRules,
             &(pFVar3->Evolution->SoftBodies).PerIterationPBDConstraintRules);
  pFVar3 = this->Constraints;
  Softs::FEvolution::
  AllocateRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>_>
            (pFVar3->Evolution,pFVar3->ParticleRangeId,pFVar3->NumCollisionConstraintRules,
             &(pFVar3->Evolution->SoftBodies).PerIterationCollisionPBDConstraintRules);
  pFVar3 = this->Constraints;
  Softs::FEvolution::
  AllocateRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>_>
            (pFVar3->Evolution,pFVar3->ParticleRangeId,pFVar3->NumPostCollisionConstraintRules,
             &(pFVar3->Evolution->SoftBodies).PerIterationPostCollisionsPBDConstraintRules);
  pFVar3 = this->Constraints;
  Softs::FEvolution::
  AllocateRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>_>
            (pFVar3->Evolution,pFVar3->ParticleRangeId,pFVar3->NumUpdateLinearSystemRules,
             &(pFVar3->Evolution->SoftBodies).UpdateLinearSystemRules);
  pFVar3 = this->Constraints;
  Softs::FEvolution::
  AllocateRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>_>
            (pFVar3->Evolution,pFVar3->ParticleRangeId,pFVar3->NumUpdateLinearSystemCollisionsRules,
             &(pFVar3->Evolution->SoftBodies).UpdateLinearSystemCollisionsRules);
  pFVar3 = this->Constraints;
  Softs::FEvolution::
  AllocateRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>_>
            (pFVar3->Evolution,pFVar3->ParticleRangeId,pFVar3->NumPostprocessingConstraintRules,
             &(pFVar3->Evolution->SoftBodies).PostSubstepConstraintRules);
  pFVar4 = this->Constraints->Evolution;
  Softs::FEvolution::
  GetRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>_>
            (pFVar4,&local_78,this->Constraints->ParticleRangeId,
             &(pFVar4->SoftBodies).PreSubstepParallelInits);
  pFVar3 = this->Constraints;
  (this->PreSubstepParallelInits).DataPtr = local_78.DataPtr;
  (this->PreSubstepParallelInits).ArrayNum = local_78.ArrayNum;
  *(undefined4 *)&(this->PreSubstepParallelInits).field_0xc = local_78._12_4_;
  pFVar4 = pFVar3->Evolution;
  Softs::FEvolution::GetRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>_>
            (pFVar4,&local_68,pFVar3->ParticleRangeId,&(pFVar4->SoftBodies).PBDExternalForceRules);
  pFVar3 = this->Constraints;
  (this->ExternalForceRules).DataPtr = local_68.DataPtr;
  (this->ExternalForceRules).ArrayNum = local_68.ArrayNum;
  *(undefined4 *)&(this->ExternalForceRules).field_0xc = local_68._12_4_;
  pFVar4 = pFVar3->Evolution;
  Softs::FEvolution::
  GetRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>_>
            (pFVar4,&local_58,pFVar3->ParticleRangeId,
             &(pFVar4->SoftBodies).PostInitialGuessParallelInits);
  pFVar3 = this->Constraints;
  (this->PostInitialGuessParallelInits).DataPtr = local_58.DataPtr;
  (this->PostInitialGuessParallelInits).ArrayNum = local_58.ArrayNum;
  *(undefined4 *)&(this->PostInitialGuessParallelInits).field_0xc = local_58._12_4_;
  pFVar4 = pFVar3->Evolution;
  Softs::FEvolution::
  GetRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>_>
            (pFVar4,&local_48,pFVar3->ParticleRangeId,
             &(pFVar4->SoftBodies).PreSubstepConstraintRules);
  pFVar3 = this->Constraints;
  (this->PreSubstepConstraintRules).DataPtr = local_48.DataPtr;
  (this->PreSubstepConstraintRules).ArrayNum = local_48.ArrayNum;
  *(undefined4 *)&(this->PreSubstepConstraintRules).field_0xc = local_48._12_4_;
  pFVar4 = pFVar3->Evolution;
  Softs::FEvolution::GetRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>_>
            (pFVar4,&local_38,pFVar3->ParticleRangeId,
             &(pFVar4->SoftBodies).PerIterationPBDConstraintRules);
  pFVar3 = this->Constraints;
  (this->PerIterationConstraintRules).DataPtr = local_38.DataPtr;
  (this->PerIterationConstraintRules).ArrayNum = local_38.ArrayNum;
  *(undefined4 *)&(this->PerIterationConstraintRules).field_0xc = local_38._12_4_;
  uVar1 = pFVar3->ParticleRangeId;
  pFVar4 = pFVar3->Evolution;
  uVar11 = 0;
  if ((int)uVar1 < *(int *)&(pFVar4->SoftBodies).PerIterationCollisionPBDConstraintRules.field_0x10)
  {
    uVar11 = ~uVar1 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar10 = (FRuleCreator *)(*pcVar8)();
      return pFVar10;
    }
  }
  puVar12 = (undefined8 *)
            ((longlong)(int)uVar1 * 0x10 +
            *(longlong *)&(pFVar4->SoftBodies).PerIterationCollisionPBDConstraintRules.field_0x8);
  pTVar5 = (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>
            *)*puVar12;
  iVar2 = *(int *)(puVar12 + 1);
  if (iVar2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar10 = (FRuleCreator *)(*pcVar8)();
      return pFVar10;
    }
  }
  pFVar3 = this->Constraints;
  (this->PerIterationCollisionConstraintRules).DataPtr = pTVar5;
  *(ulonglong *)&(this->PerIterationCollisionConstraintRules).ArrayNum = CONCAT44(uStack_7c,iVar2);
  pFVar4 = pFVar3->Evolution;
  Softs::FEvolution::GetRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>_>
            (pFVar4,&local_28,pFVar3->ParticleRangeId,
             &(pFVar4->SoftBodies).PerIterationPostCollisionsPBDConstraintRules);
  pFVar3 = this->Constraints;
  (this->PerIterationPostCollisionsConstraintRules).DataPtr = local_28.DataPtr;
  (this->PerIterationPostCollisionsConstraintRules).ArrayNum = local_28.ArrayNum;
  *(undefined4 *)&(this->PerIterationPostCollisionsConstraintRules).field_0xc = local_28._12_4_;
  uVar1 = pFVar3->ParticleRangeId;
  pFVar4 = pFVar3->Evolution;
  uVar11 = 0;
  if ((int)uVar1 < *(int *)&(pFVar4->SoftBodies).UpdateLinearSystemRules.field_0x10) {
    uVar11 = ~uVar1 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar10 = (FRuleCreator *)(*pcVar8)();
      return pFVar10;
    }
  }
  puVar12 = (undefined8 *)
            ((longlong)(int)uVar1 * 0x10 +
            *(longlong *)&(pFVar4->SoftBodies).UpdateLinearSystemRules.field_0x8);
  pTVar6 = (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>
            *)*puVar12;
  iVar2 = *(int *)(puVar12 + 1);
  if (iVar2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar10 = (FRuleCreator *)(*pcVar8)();
      return pFVar10;
    }
  }
  pFVar3 = this->Constraints;
  (this->UpdateLinearSystemRules).DataPtr = pTVar6;
  *(ulonglong *)&(this->UpdateLinearSystemRules).ArrayNum = CONCAT44(uStack_7c,iVar2);
  uVar1 = pFVar3->ParticleRangeId;
  pFVar4 = pFVar3->Evolution;
  uVar11 = 0;
  if ((int)uVar1 < *(int *)&(pFVar4->SoftBodies).UpdateLinearSystemCollisionsRules.field_0x10) {
    uVar11 = ~uVar1 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar10 = (FRuleCreator *)(*pcVar8)();
      return pFVar10;
    }
  }
  puVar12 = (undefined8 *)
            ((longlong)(int)uVar1 * 0x10 +
            *(longlong *)&(pFVar4->SoftBodies).UpdateLinearSystemCollisionsRules.field_0x8);
  pTVar7 = (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>
            *)*puVar12;
  iVar2 = *(int *)(puVar12 + 1);
  if (iVar2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar10 = (FRuleCreator *)(*pcVar8)();
      return pFVar10;
    }
  }
  pFVar3 = this->Constraints;
  (this->UpdateLinearSystemCollisionsRules).DataPtr = pTVar7;
  *(ulonglong *)&(this->UpdateLinearSystemCollisionsRules).ArrayNum = CONCAT44(uStack_7c,iVar2);
  pFVar4 = pFVar3->Evolution;
  Softs::FEvolution::
  GetRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>_>
            (pFVar4,&local_18,pFVar3->ParticleRangeId,
             &(pFVar4->SoftBodies).PostSubstepConstraintRules);
  (this->PostSubstepConstraintRules).DataPtr = local_18.DataPtr;
  (this->PostSubstepConstraintRules).ArrayNum = local_18.ArrayNum;
  *(undefined4 *)&(this->PostSubstepConstraintRules).field_0xc = local_18._12_4_;
  return this;
}

// ~FRuleCreator @ 14db9ffd0

void __thiscall Chaos::FClothConstraints::FRuleCreator::~FRuleCreator(FRuleCreator *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Constraints != (FClothConstraints *)0x0) {
    if (this->PreSubstepInitsIndex != this->Constraints->NumPreSubstepInits) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PreSubstepInitsIndex == Constraints->NumPreSubstepInits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                         ,0x99,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (this->ExternalForceRulesIndex != this->Constraints->NumExternalForceRules) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExternalForceRulesIndex == Constraints->NumExternalForceRules",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                         ,0x9a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (this->PostInitialGuessInitsIndex != this->Constraints->NumConstraintInits) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PostInitialGuessInitsIndex == Constraints->NumConstraintInits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                         ,0x9b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (this->PreSubstepConstraintRulesIndex != this->Constraints->NumPreSubstepConstraintRules) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PreSubstepConstraintRulesIndex == Constraints->NumPreSubstepConstraintRules"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                         ,0x9c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (this->ConstraintRuleIndex != this->Constraints->NumConstraintRules) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ConstraintRuleIndex == Constraints->NumConstraintRules",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                         ,0x9d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (this->CollisionConstraintRulesIndex != this->Constraints->NumCollisionConstraintRules) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CollisionConstraintRulesIndex == Constraints->NumCollisionConstraintRules"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                         ,0x9e,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (this->PostCollisionConstraintRulesIndex !=
        this->Constraints->NumPostCollisionConstraintRules) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PostCollisionConstraintRulesIndex == Constraints->NumPostCollisionConstraintRules"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                         ,0x9f,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (this->UpdateLinearSystemRulesIndex != this->Constraints->NumUpdateLinearSystemRules) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("UpdateLinearSystemRulesIndex == Constraints->NumUpdateLinearSystemRules",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                         ,0xa0,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (this->UpdateLinearSystemCollisionsRulesIndex !=
        this->Constraints->NumUpdateLinearSystemCollisionsRules) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("UpdateLinearSystemCollisionsRulesIndex == Constraints->NumUpdateLinearSystemCollisionsRules"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                         ,0xa1,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (this->PostSubstepConstraintRulesIndex != this->Constraints->NumPostprocessingConstraintRules
       ) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PostSubstepConstraintRulesIndex == Constraints->NumPostprocessingConstraintRules"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                         ,0xa2,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// operator() @ 14dba5ed0

void __thiscall
`Chaos::FClothConstraints::FRuleCreator::
AddPerIterationPBDConstraintRule_Apply<1,Chaos::Softs::FPBDSkinnedTriangleMeshCollisionConstraints>'
::__l3::<lambda_1>::operator()(void *this,FSolverParticlesRange *param_1,float param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  TBitArray<FDefaultBitArrayAllocator> *pTVar6;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  longlong *local_50;
  int iStack_48;
  uint uStack_44;
  TBitArray<FDefaultBitArrayAllocator> *local_40;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  lVar4 = *(longlong *)this;
  if (*(char *)(lVar4 + 0x6c) != '\0') {
    iStack_48 = 0;
    uStack_44 = 1;
    local_30 = 0;
    iVar2 = *(int *)(lVar4 + 0x98);
    TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)(lVar4 + 0x80);
    iStack_34 = 0;
    if (iVar2 != 0) {
      pTVar6 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar4 + 0x90);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar4 + 0x90) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar6 = TStack_70.Array;
      }
      uVar3 = *(uint *)(pTVar6->AllocatorInstance).InlineData;
      while (uVar3 == 0) {
        lVar5 = (longlong)iStack_48;
        local_30 = local_30 + 0x20;
        iStack_48 = iStack_48 + 1;
        iStack_34 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_48) goto LAB_14dba5f8a;
        uVar3 = *(uint *)((pTVar6->AllocatorInstance).InlineData + lVar5 * 4 + 4);
      }
      uStack_44 = -uVar3 & uVar3;
      uVar1 = (ulonglong)uStack_44 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_34 = local_30 + -1 + (int)lVar5;
      if (iVar2 < iStack_34) {
        iStack_34 = iVar2;
      }
    }
LAB_14dba5f8a:
    uStack_38 = 0xffffffff;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    iStack_2c = TStack_70.CurrentBitIndex;
    TStack_70._28_4_ = TStack_70.CurrentBitIndex;
    TStack_70.BaseBitIndex = local_30;
    local_50 = (longlong *)(lVar4 + 0x70);
    local_40 = TStack_70.Array;
    TStack_70._padding_._0_4_ = iStack_48;
    TStack_70._padding_._4_4_ = uStack_44;
    TStack_70.CurrentBitIndex = iStack_34;
    if (iStack_34 < *(int *)(lVar4 + 0x98)) {
      do {
        Chaos::Softs::FPBDKinematicTriangleMeshCollisions::Apply
                  ((FPBDKinematicTriangleMeshCollisions *)
                   (*(longlong *)(lVar4 + 0x70) + 8 + (longlong)TStack_70.CurrentBitIndex * 0xb0),
                   param_1,param_2);
        TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
      } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
    }
  }
  return;
}

// operator() @ 14dba6060

void __thiscall
`Chaos::FClothConstraints::FRuleCreator::
AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FXPBDFaceConstraints>'::__l3::<lambda_1>::
operator()(void *this,FSolverParticlesRange *param_1,float param_2)

{
  TXPBDEmbeddedSpringConstraints<3,3> *this_00;
  bool bVar1;
  
  this_00 = *(TXPBDEmbeddedSpringConstraints<3,3> **)this;
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::TXPBDEmbeddedSpringConstraints<3,3>::Apply(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId223,"TXPBDEmbeddedSpringConstraints_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDEmbeddedSpringConstraints.h"
               ,0xdf);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::TXPBDEmbeddedSpringConstraints<3,3>::Apply(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId223);
  }
  if (bChaos_XPBDSpring_ISPC_Enabled == false) {
    Chaos::Softs::TXPBDEmbeddedSpringConstraints<3,3>::ApplyInternal(this_00,param_1,param_2);
  }
  else {
    Chaos::Softs::TXPBDEmbeddedSpringConstraints<3,3>::ApplyISPC(this_00,param_1,param_2);
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14dba6110

void __thiscall
`Chaos::FClothConstraints::FRuleCreator::
AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FXPBDVertexConstraints>'::__l3::<lambda_1>::
operator()(void *this,FSolverParticlesRange *param_1,float param_2)

{
  TXPBDEmbeddedSpringConstraints<1,1> *this_00;
  bool bVar1;
  
  this_00 = *(TXPBDEmbeddedSpringConstraints<1,1> **)this;
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,1>::Apply(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId223,"TXPBDEmbeddedSpringConstraints_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDEmbeddedSpringConstraints.h"
               ,0xdf);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,1>::Apply(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId223);
  }
  if (bChaos_XPBDSpring_ISPC_Enabled == false) {
    Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,1>::ApplyInternal(this_00,param_1,param_2);
  }
  else {
    Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,1>::ApplyISPC(this_00,param_1,param_2);
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14dba61c0

void __thiscall
`Chaos::FClothConstraints::FRuleCreator::
AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FXPBDVertexFaceConstraints>'::__l3::
<lambda_1>::operator()(void *this,FSolverParticlesRange *param_1,float param_2)

{
  TXPBDEmbeddedSpringConstraints<1,3> *this_00;
  bool bVar1;
  
  this_00 = *(TXPBDEmbeddedSpringConstraints<1,3> **)this;
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,3>::Apply(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId223,"TXPBDEmbeddedSpringConstraints_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDEmbeddedSpringConstraints.h"
               ,0xdf);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,3>::Apply(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId223);
  }
  if (bChaos_XPBDSpring_ISPC_Enabled == false) {
    Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,3>::ApplyInternal(this_00,param_1,param_2);
  }
  else {
    Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,3>::ApplyISPC(this_00,param_1,param_2);
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14dba6270

void __thiscall
`Chaos::FClothConstraints::FRuleCreator::
AddXPBDParallelInitRule<1,Chaos::Softs::FPBDBendingConstraints>'::__l3::<lambda_1>::operator()
          (void *this,FSolverParticlesRange *param_1,float param_2,ESolverMode param_3)

{
  int iVar1;
  longlong lVar2;
  <lambda_1> local_res20 [8];
  
  lVar2 = *(longlong *)this;
  iVar1 = *(int *)(*(longlong *)((longlong)this + 8) + 0xc);
  Chaos::Softs::FPBDStiffness::ApplyPBDValues((FPBDStiffness *)(lVar2 + 0x30),param_2,iVar1);
  Chaos::Softs::FPBDWeightMap::
  ApplyValues<_Chaos::Softs::FPBDWeightMap::ApplyValues_::__l2::<lambda_1>_>
            ((FPBDWeightMap *)(lVar2 + 0x78),local_res20,(bool *)0x0);
  Chaos::Softs::FPBDStiffness::ApplyPBDValues((FPBDStiffness *)(lVar2 + 0xb0),param_2,iVar1);
  if ((param_3 & PBD) != None) {
    Chaos::Softs::FPBDBendingConstraintsBase::Init<Chaos::Softs::FSolverParticlesRange>
              (*(FPBDBendingConstraintsBase **)this,param_1);
  }
  return;
}

// operator() @ 14dba6300

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`Chaos::FClothConstraints::FRuleCreator::
AddXPBDParallelInitRule<0,Chaos::Softs::FMultiResConstraints>'::__l3::<lambda_1>::operator()
          (void *this,FSolverParticlesRange *param_1,float param_2,ESolverMode param_3)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  float fVar4;
  
  fVar4 = __real_4e6e6b28;
  lVar2 = *(longlong *)this;
  iVar1 = *(int *)(*(longlong *)((longlong)this + 8) + 0xc);
  if (*(char *)(lVar2 + 0x30) == '\0') {
    Chaos::Softs::FPBDStiffness::ApplyPBDValues((FPBDStiffness *)(lVar2 + 0x38),param_2,iVar1);
    Chaos::Softs::FPBDStiffness::ApplyPBDValues((FPBDStiffness *)(lVar2 + 0x80),param_2,iVar1);
  }
  else {
    Chaos::Softs::FPBDStiffness::ApplyXPBDValues((FPBDStiffness *)(lVar2 + 0x38),__real_4e6e6b28);
    Chaos::Softs::FPBDStiffness::ApplyXPBDValues((FPBDStiffness *)(lVar2 + 0x80),fVar4);
  }
  if (((param_3 & PBD) != None) && (piVar3 = *(int **)this, (char)piVar3[0xc] != '\0')) {
    piVar3[0x34] = 0;
    if (piVar3[0x35] < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)(piVar3 + 0x32),0,piVar3 + 0x35);
    }
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
              ((TArray<float,TSizedDefaultAllocator<32>_> *)(piVar3 + 0x32),*piVar3,Default);
  }
  return;
}

// operator() @ 14dba63f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`Chaos::FClothConstraints::FRuleCreator::
AddXPBDParallelInitRule<0,Chaos::Softs::FXPBDFaceConstraints>'::__l3::<lambda_1>::operator()
          (void *this,FSolverParticlesRange *param_1,float param_2,ESolverMode param_3)

{
  longlong lVar1;
  
  if ((param_3 & PBD) != None) {
    lVar1 = *(longlong *)this;
    *(undefined4 *)(lVar1 + 0x50) = 0;
    if (*(int *)(lVar1 + 0x54) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)(lVar1 + 0x48),0,(int *)(lVar1 + 0x54));
    }
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
              ((TArray<float,TSizedDefaultAllocator<32>_> *)(lVar1 + 0x48),*(int *)(lVar1 + 0x10),
               Default);
    *(undefined4 *)(lVar1 + 0x60) = 0;
    if (*(int *)(lVar1 + 100) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)(lVar1 + 0x58),0,(int *)(lVar1 + 100));
    }
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
              ((TArray<float,TSizedDefaultAllocator<32>_> *)(lVar1 + 0x58),*(int *)(lVar1 + 0x10),
               Default);
  }
  return;
}

// operator() @ 14dba64a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`Chaos::FClothConstraints::FRuleCreator::
AddXPBDParallelInitRule<0,Chaos::Softs::FXPBDVertexConstraints>'::__l3::<lambda_1>::operator()
          (void *this,FSolverParticlesRange *param_1,float param_2,ESolverMode param_3)

{
  longlong lVar1;
  
  if ((param_3 & PBD) != None) {
    lVar1 = *(longlong *)this;
    *(undefined4 *)(lVar1 + 0x50) = 0;
    if (*(int *)(lVar1 + 0x54) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)(lVar1 + 0x48),0,(int *)(lVar1 + 0x54));
    }
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
              ((TArray<float,TSizedDefaultAllocator<32>_> *)(lVar1 + 0x48),*(int *)(lVar1 + 0x10),
               Default);
    *(undefined4 *)(lVar1 + 0x60) = 0;
    if (*(int *)(lVar1 + 100) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)(lVar1 + 0x58),0,(int *)(lVar1 + 100));
    }
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
              ((TArray<float,TSizedDefaultAllocator<32>_> *)(lVar1 + 0x58),*(int *)(lVar1 + 0x10),
               Default);
  }
  return;
}

// operator() @ 14dba6550

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`Chaos::FClothConstraints::FRuleCreator::
AddXPBDParallelInitRule<0,Chaos::Softs::FXPBDVertexFaceConstraints>'::__l3::<lambda_1>::operator()
          (void *this,FSolverParticlesRange *param_1,float param_2,ESolverMode param_3)

{
  longlong lVar1;
  
  if ((param_3 & PBD) != None) {
    lVar1 = *(longlong *)this;
    *(undefined4 *)(lVar1 + 0x50) = 0;
    if (*(int *)(lVar1 + 0x54) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)(lVar1 + 0x48),0,(int *)(lVar1 + 0x54));
    }
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
              ((TArray<float,TSizedDefaultAllocator<32>_> *)(lVar1 + 0x48),*(int *)(lVar1 + 0x10),
               Default);
    *(undefined4 *)(lVar1 + 0x60) = 0;
    if (*(int *)(lVar1 + 100) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)(lVar1 + 0x58),0,(int *)(lVar1 + 100));
    }
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
              ((TArray<float,TSizedDefaultAllocator<32>_> *)(lVar1 + 0x58),*(int *)(lVar1 + 0x10),
               Default);
  }
  return;
}

// AddPostInitialGuessParallelInitRule @ 14dbba860

void __thiscall
Chaos::FClothConstraints::FRuleCreator::AddPostInitialGuessParallelInitRule
          (FRuleCreator *this,
          TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>
          *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>
  *pTVar12;
  
  uVar1 = this->PostInitialGuessInitsIndex;
  this->PostInitialGuessInitsIndex = uVar1 + 1;
  uVar11 = 0;
  if ((int)uVar1 < (this->PostInitialGuessParallelInits).ArrayNum) {
    uVar11 = ~uVar1 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar10) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar3 = *(undefined8 *)&param_1->field_0x8;
  pTVar12 = (this->PostInitialGuessParallelInits).DataPtr + (int)uVar1;
  uVar4 = *(undefined8 *)pTVar12;
  uVar5 = *(undefined8 *)&pTVar12->field_0x8;
  uVar6 = *(undefined8 *)&pTVar12->field_0x10;
  uVar7 = *(undefined8 *)&pTVar12->field_0x18;
  uVar8 = *(undefined8 *)&pTVar12->field_0x20;
  uVar9 = *(undefined8 *)&pTVar12->field_0x28;
  *(undefined8 *)pTVar12 = *(undefined8 *)param_1;
  *(undefined8 *)&pTVar12->field_0x8 = uVar3;
  uVar3 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&pTVar12->field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&pTVar12->field_0x18 = uVar3;
  uVar3 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&pTVar12->field_0x20 = *(undefined8 *)&param_1->field_0x20;
  *(undefined8 *)&pTVar12->field_0x28 = uVar3;
  *(undefined8 *)param_1 = uVar4;
  *(undefined8 *)&param_1->field_0x8 = uVar5;
  *(undefined8 *)&param_1->field_0x10 = uVar6;
  *(undefined8 *)&param_1->field_0x18 = uVar7;
  *(undefined8 *)&param_1->field_0x20 = uVar8;
  *(undefined8 *)&param_1->field_0x28 = uVar9;
  return;
}

// AddUpdateLinearSystemRule @ 14dbbb340

void __thiscall
Chaos::FClothConstraints::FRuleCreator::AddUpdateLinearSystemRule
          (FRuleCreator *this,
          TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>
          *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>
  *pTVar12;
  
  uVar1 = this->UpdateLinearSystemRulesIndex;
  this->UpdateLinearSystemRulesIndex = uVar1 + 1;
  uVar11 = 0;
  if ((int)uVar1 < (this->UpdateLinearSystemRules).ArrayNum) {
    uVar11 = ~uVar1 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar10) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar3 = *(undefined8 *)&param_1->field_0x8;
  pTVar12 = (this->UpdateLinearSystemRules).DataPtr + (int)uVar1;
  uVar4 = *(undefined8 *)pTVar12;
  uVar5 = *(undefined8 *)&pTVar12->field_0x8;
  uVar6 = *(undefined8 *)&pTVar12->field_0x10;
  uVar7 = *(undefined8 *)&pTVar12->field_0x18;
  uVar8 = *(undefined8 *)&pTVar12->field_0x20;
  uVar9 = *(undefined8 *)&pTVar12->field_0x28;
  *(undefined8 *)pTVar12 = *(undefined8 *)param_1;
  *(undefined8 *)&pTVar12->field_0x8 = uVar3;
  uVar3 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&pTVar12->field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&pTVar12->field_0x18 = uVar3;
  uVar3 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&pTVar12->field_0x20 = *(undefined8 *)&param_1->field_0x20;
  *(undefined8 *)&pTVar12->field_0x28 = uVar3;
  *(undefined8 *)param_1 = uVar4;
  *(undefined8 *)&param_1->field_0x8 = uVar5;
  *(undefined8 *)&param_1->field_0x10 = uVar6;
  *(undefined8 *)&param_1->field_0x18 = uVar7;
  *(undefined8 *)&param_1->field_0x20 = uVar8;
  *(undefined8 *)&param_1->field_0x28 = uVar9;
  return;
}

