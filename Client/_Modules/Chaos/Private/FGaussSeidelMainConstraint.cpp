// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 45

// FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> @ 143a31fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> * __thiscall
Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>
          (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1,bool param_2,bool param_3,float param_4,int param_5,
          float param_6,FDeformableXPBDCorotatedParams *param_7)

{
  float *pfVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *pFVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  float *pfVar16;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  longlong local_e0;
  float local_d8 [4];
  float local_c8 [4];
  longlong local_b8;
  FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong *plStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  ulonglong uVar15;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  uVar12 = 0;
  (this->StaticConstraints).ArrayNum = 0;
  (this->StaticConstraints).ArrayMax = 0;
  (this->StaticIncidentElements).ArrayNum = 0;
  (this->StaticIncidentElements).ArrayMax = 0;
  (this->StaticIncidentElementsLocal).ArrayNum = 0;
  (this->StaticIncidentElementsLocal).ArrayMax = 0;
  (this->TransientConstraints).ArrayNum = 0;
  (this->TransientConstraints).ArrayMax = 0;
  (this->TransientIncidentElements).ArrayNum = 0;
  (this->TransientIncidentElements).ArrayMax = 0;
  (this->TransientIncidentElementsLocal).ArrayNum = 0;
  (this->TransientIncidentElementsLocal).ArrayMax = 0;
  (this->DynamicConstraints).ArrayNum = 0;
  (this->DynamicConstraints).ArrayMax = 0;
  (this->DynamicIncidentElements).ArrayNum = 0;
  (this->DynamicIncidentElements).ArrayMax = 0;
  (this->DynamicIncidentElementsLocal).ArrayNum = 0;
  (this->DynamicIncidentElementsLocal).ArrayMax = 0;
  (this->AddStaticConstraintResidualAndHessian).ArrayNum = 0;
  (this->AddStaticConstraintResidualAndHessian).ArrayMax = 0;
  (this->AddDynamicConstraintResidualAndHessian).ArrayNum = 0;
  (this->AddDynamicConstraintResidualAndHessian).ArrayMax = 0;
  (this->AddTransientConstraintResidualAndHessian).ArrayNum = 0;
  (this->AddTransientConstraintResidualAndHessian).ArrayMax = 0;
  (this->AddPerNodeHessian).ArrayNum = 0;
  (this->AddPerNodeHessian).ArrayMax = 0;
  (this->StaticParticleColors).ArrayNum = 0;
  (this->StaticParticleColors).ArrayMax = 0;
  (this->StaticParticlesPerColor).ArrayNum = 0;
  (this->StaticParticlesPerColor).ArrayMax = 0;
  (this->ParticleColors).ArrayNum = 0;
  (this->ParticleColors).ArrayMax = 0;
  (this->ParticlesPerColor).ArrayNum = 0;
  (this->ParticlesPerColor).ArrayMax = 0;
  (this->StaticIncidentElementsOffsets).ArrayNum = 0;
  (this->StaticIncidentElementsOffsets).ArrayMax = 0;
  (this->TransientIncidentElementsOffsets).ArrayNum = 0;
  (this->TransientIncidentElementsOffsets).ArrayMax = 0;
  (this->DynamicIncidentElementsOffsets).ArrayNum = 0;
  (this->DynamicIncidentElementsOffsets).ArrayMax = 0;
  (this->xtilde).ArrayNum = 0;
  (this->xtilde).ArrayMax = 0;
  (this->X_k_1).ArrayNum = 0;
  (this->X_k_1).ArrayMax = 0;
  (this->X_k).ArrayNum = 0;
  (this->X_k).ArrayMax = 0;
  (this->StaticConstraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticIncidentElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticIncidentElementsLocal).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransientConstraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransientIncidentElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransientIncidentElementsLocal).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicConstraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicIncidentElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicIncidentElementsLocal).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&this->ComputeInitialResidualAndHessian = 0;
  *(undefined8 *)&(this->ComputeInitialResidualAndHessian).field_0x28 = 0;
  (this->AddStaticConstraintResidualAndHessian).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AddDynamicConstraintResidualAndHessian).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AddTransientConstraintResidualAndHessian).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AddPerNodeHessian).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticParticleColors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticParticlesPerColor).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParticleColors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParticlesPerColor).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticIncidentElementsOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransientIncidentElementsOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicIncidentElementsOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->xtilde).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&this->AccelerationTechniquePerParticle = 0;
  *(undefined8 *)&(this->AccelerationTechniquePerParticle).field_0x28 = 0;
  (this->X_k_1).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->X_k).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined ***)this =
       &___7__FGaussSeidelMainConstraint_MVFSolverParticles_Softs_Chaos___Softs_Chaos__6B_;
  this->ParallelMax = param_5;
  this->OmegaSOR = param_4;
  this->bDoQuasistatics = param_2;
  this->CurrentIt = 0;
  this->bDoAcceleration = param_3;
  this->SORStart = 1;
  iVar5 = param_7->XPBDCorotatedBatchThreshold;
  (this->CorotatedParams).XPBDCorotatedBatchSize = param_7->XPBDCorotatedBatchSize;
  (this->CorotatedParams).XPBDCorotatedBatchThreshold = iVar5;
  (this->CorotatedParams).NumLogExtremeParticle = param_7->NumLogExtremeParticle;
  (this->AddInternalForceDifferentials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AddInternalForceDifferentials).ArrayNum = 0;
  (this->AddInternalForceDifferentials).ArrayMax = 0;
  (this->use_list).Ptr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  (this->ReorderedPs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReorderedPs).ArrayNum = 0;
  (this->ReorderedPs).ArrayMax = 0;
  this->MaxDxSize = 0.0;
  *(undefined8 *)&(this->ExternalAcceleration).field_0x4 = 0;
  this->DebugResidual = false;
  this->IsFirstFrame = true;
  *(undefined8 *)&this->PassedIters = 0;
  local_b0 = this;
  Resize(this,(int)param_1->_padding_);
  local_a8 = *(longlong *)&this->ComputeInitialResidualAndHessian;
  uVar4 = *(undefined8 *)&(this->ComputeInitialResidualAndHessian).field_0x8;
  local_98 = *(longlong *)&(this->ComputeInitialResidualAndHessian).field_0x10;
  uStack_90 = *(undefined8 *)&(this->ComputeInitialResidualAndHessian).field_0x18;
  uVar3 = *(undefined8 *)&(this->ComputeInitialResidualAndHessian).field_0x20;
  plStack_80 = *(longlong **)&(this->ComputeInitialResidualAndHessian).field_0x28;
  *(code **)&this->ComputeInitialResidualAndHessian =
       UE::Core::Private::Function::
       TFunctionRefCaller<`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::InitializeLambdas'::__l2::<lambda_1>,void,Chaos::Softs::FSolverParticles_const_&,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&>
       ::Call;
  *(undefined8 *)&(this->ComputeInitialResidualAndHessian).field_0x8 = uStack_a0;
  *(undefined4 *)&(this->ComputeInitialResidualAndHessian).field_0x10 = 0x50af7960;
  *(undefined4 *)&(this->ComputeInitialResidualAndHessian).field_0x14 = 1;
  *(FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> **)
   &(this->ComputeInitialResidualAndHessian).field_0x18 = this;
  *(undefined4 *)&(this->ComputeInitialResidualAndHessian).field_0x20 = (undefined4)local_88;
  *(undefined4 *)&(this->ComputeInitialResidualAndHessian).field_0x24 = local_88._4_4_;
  *(undefined4 *)&(this->ComputeInitialResidualAndHessian).field_0x28 = 0;
  *(undefined4 *)&(this->ComputeInitialResidualAndHessian).field_0x2c = 0;
  uStack_a0 = uVar4;
  local_88 = uVar3;
  if (local_a8 != 0) {
    plVar9 = &local_98;
    if (plStack_80 != (longlong *)0x0) {
      plVar9 = plStack_80;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  local_78 = *(longlong *)&this->AccelerationTechniquePerParticle;
  uVar4 = *(undefined8 *)&(this->AccelerationTechniquePerParticle).field_0x8;
  local_68 = *(longlong *)&(this->AccelerationTechniquePerParticle).field_0x10;
  uStack_60 = *(undefined8 *)&(this->AccelerationTechniquePerParticle).field_0x18;
  uVar3 = *(undefined8 *)&(this->AccelerationTechniquePerParticle).field_0x20;
  plStack_50 = *(longlong **)&(this->AccelerationTechniquePerParticle).field_0x28;
  *(code **)&this->AccelerationTechniquePerParticle =
       UE::Core::Private::Function::
       TFunctionRefCaller<`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::InitializeLambdas'::__l2::<lambda_2>,void,Chaos::Softs::FSolverParticles_&,int>
       ::Call;
  *(undefined8 *)&(this->AccelerationTechniquePerParticle).field_0x8 = uStack_70;
  *(undefined4 *)&(this->AccelerationTechniquePerParticle).field_0x10 = 0x50af7980;
  *(undefined4 *)&(this->AccelerationTechniquePerParticle).field_0x14 = 1;
  *(FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> **)
   &(this->AccelerationTechniquePerParticle).field_0x18 = this;
  *(undefined4 *)&(this->AccelerationTechniquePerParticle).field_0x20 = (undefined4)local_58;
  *(undefined4 *)&(this->AccelerationTechniquePerParticle).field_0x24 = local_58._4_4_;
  *(undefined4 *)&(this->AccelerationTechniquePerParticle).field_0x28 = 0;
  *(undefined4 *)&(this->AccelerationTechniquePerParticle).field_0x2c = 0;
  uStack_70 = uVar4;
  local_58 = uVar3;
  if (local_78 != 0) {
    plVar9 = &local_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar9 = plStack_50;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  local_d8[0] = __real_42c80000;
  local_d8[1] = __real_42c80000;
  local_d8[2] = __real_42c80000;
  local_c8[0] = __real_c2c80000;
  local_c8[1] = __real_c2c80000;
  local_c8[2] = __real_c2c80000;
  uVar13 = uVar12;
  uVar15 = uVar12;
  if (0 < (int)param_1->_padding_) {
    do {
      lVar10 = 0;
      uVar14 = (uint)uVar15;
      uVar11 = ~uVar14 >> 0x1f;
      local_b8 = uVar13 - (longlong)local_c8;
      do {
        iVar5 = (int)param_1->_padding_;
        local_e0 = (longlong)iVar5;
        uVar7 = 0;
        if ((int)uVar14 < iVar5) {
          uVar7 = uVar11;
        }
        if ((uVar7 == 0) &&
           (local_e8 = uVar12,
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar6)) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)(*pcVar2)();
          return pFVar8;
        }
        pfVar16 = (float *)((longlong)local_c8 + lVar10);
        pfVar1 = (float *)(local_b8 + param_1->_padding_ + (longlong)pfVar16);
        if (*pfVar1 <= *pfVar16 && *pfVar16 != *pfVar1) {
          iVar5 = (int)param_1->_padding_;
          local_e0 = (longlong)iVar5;
          uVar7 = 0;
          if ((int)uVar14 < iVar5) {
            uVar7 = uVar11;
          }
          if ((uVar7 == 0) &&
             (local_e8 = uVar12,
             bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar6)) {
            pcVar2 = (code *)swi(3);
            pFVar8 = (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)(*pcVar2)()
            ;
            return pFVar8;
          }
          *pfVar16 = *(float *)(param_1->_padding_ + uVar13 + lVar10);
        }
        iVar5 = (int)param_1->_padding_;
        local_e0 = (longlong)iVar5;
        uVar7 = 0;
        if ((int)uVar14 < iVar5) {
          uVar7 = uVar11;
        }
        if ((uVar7 == 0) &&
           (local_e8 = uVar12,
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar6)) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)(*pcVar2)();
          return pFVar8;
        }
        if (*(float *)((longlong)local_d8 + lVar10) <
            *(float *)(param_1->_padding_ + uVar13 + lVar10)) {
          iVar5 = (int)param_1->_padding_;
          local_e0 = (longlong)iVar5;
          uVar7 = 0;
          if ((int)uVar14 < iVar5) {
            uVar7 = uVar11;
          }
          if ((uVar7 == 0) &&
             (local_e8 = uVar12,
             bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar6)) {
            pcVar2 = (code *)swi(3);
            pFVar8 = (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)(*pcVar2)()
            ;
            return pFVar8;
          }
          *(undefined4 *)((longlong)local_d8 + lVar10) =
               *(undefined4 *)(param_1->_padding_ + uVar13 + lVar10);
        }
        lVar10 = lVar10 + 4;
      } while (lVar10 < 0xc);
      uVar12 = uVar12 + 1;
      this = local_b0;
      uVar13 = uVar13 + 0xc;
      uVar15 = (ulonglong)(uVar14 + 1);
    } while ((int)(uVar14 + 1) < (int)param_1->_padding_);
  }
  this->MaxDxSize =
       SQRT((local_d8[0] - local_c8[0]) * (local_d8[0] - local_c8[0]) +
            (local_d8[1] - local_c8[1]) * (local_d8[1] - local_c8[1]) +
            (local_d8[2] - local_c8[2]) * (local_d8[2] - local_c8[2])) * param_6;
  return this;
}

// ~FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> @ 143a38760

void __thiscall
Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
~FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>
          (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *this)

{
  FScriptContainerElement *pFVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  *(undefined ***)this =
       &___7__FGaussSeidelMainConstraint_MVFSolverParticles_Softs_Chaos___Softs_Chaos__6B_;
  pFVar1 = (this->ReorderedPs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pTVar2 = (this->use_list).Ptr;
  if (pTVar2 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar1 = (pTVar2->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(pTVar2,0x10);
  }
  DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_const_&,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,int>
            ((TFunction<void___cdecl(Chaos::Softs::FSolverParticles_const_&,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>
              *)(this->AddInternalForceDifferentials).AllocatorInstance.Data,
             (this->AddInternalForceDifferentials).ArrayNum);
  pFVar1 = (this->AddInternalForceDifferentials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->X_k).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->X_k_1).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->AccelerationTechniquePerParticle != 0) {
    plVar3 = *(longlong **)&(this->AccelerationTechniquePerParticle).field_0x28;
    plVar4 = (longlong *)&(this->AccelerationTechniquePerParticle).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  pFVar1 = (this->xtilde).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DynamicIncidentElementsOffsets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TransientIncidentElementsOffsets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StaticIncidentElementsOffsets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->ParticlesPerColor).AllocatorInstance.Data,(this->ParticlesPerColor).ArrayNum);
  pFVar1 = (this->ParticlesPerColor).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParticleColors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->StaticParticlesPerColor).AllocatorInstance.Data,
             (this->StaticParticlesPerColor).ArrayNum);
  pFVar1 = (this->StaticParticlesPerColor).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StaticParticleColors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TFunction<void___cdecl(int,float,Chaos::PMatrix<float,3,3>_&)>,int>
            ((TFunction<void___cdecl(int,float,Chaos::PMatrix<float,3,3>_&)> *)
             (this->AddPerNodeHessian).AllocatorInstance.Data,(this->AddPerNodeHessian).ArrayNum);
  pFVar1 = (this->AddPerNodeHessian).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&)>,int>
            ((TFunction<void___cdecl(Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&)>
              *)(this->AddTransientConstraintResidualAndHessian).AllocatorInstance.Data,
             (this->AddTransientConstraintResidualAndHessian).ArrayNum);
  pFVar1 = (this->AddTransientConstraintResidualAndHessian).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&)>,int>
            ((TFunction<void___cdecl(Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&)>
              *)(this->AddDynamicConstraintResidualAndHessian).AllocatorInstance.Data,
             (this->AddDynamicConstraintResidualAndHessian).ArrayNum);
  pFVar1 = (this->AddDynamicConstraintResidualAndHessian).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&)>,int>
            ((TFunction<void___cdecl(Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&)>
              *)(this->AddStaticConstraintResidualAndHessian).AllocatorInstance.Data,
             (this->AddStaticConstraintResidualAndHessian).ArrayNum);
  pFVar1 = (this->AddStaticConstraintResidualAndHessian).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->ComputeInitialResidualAndHessian != 0) {
    plVar3 = *(longlong **)&(this->ComputeInitialResidualAndHessian).field_0x28;
    plVar4 = (longlong *)&(this->ComputeInitialResidualAndHessian).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->DynamicIncidentElementsLocal).AllocatorInstance.Data,
             (this->DynamicIncidentElementsLocal).ArrayNum);
  pFVar1 = (this->DynamicIncidentElementsLocal).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->DynamicIncidentElements).AllocatorInstance.Data,
             (this->DynamicIncidentElements).ArrayNum);
  pFVar1 = (this->DynamicIncidentElements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->DynamicConstraints).AllocatorInstance.Data,(this->DynamicConstraints).ArrayNum);
  pFVar1 = (this->DynamicConstraints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->TransientIncidentElementsLocal).AllocatorInstance.Data,
             (this->TransientIncidentElementsLocal).ArrayNum);
  pFVar1 = (this->TransientIncidentElementsLocal).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->TransientIncidentElements).AllocatorInstance.Data,
             (this->TransientIncidentElements).ArrayNum);
  pFVar1 = (this->TransientIncidentElements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->TransientConstraints).AllocatorInstance.Data,
             (this->TransientConstraints).ArrayNum);
  pFVar1 = (this->TransientConstraints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->StaticIncidentElementsLocal).AllocatorInstance.Data,
             (this->StaticIncidentElementsLocal).ArrayNum);
  pFVar1 = (this->StaticIncidentElementsLocal).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->StaticIncidentElements).AllocatorInstance.Data,
             (this->StaticIncidentElements).ArrayNum);
  pFVar1 = (this->StaticIncidentElements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->StaticConstraints).AllocatorInstance.Data,(this->StaticConstraints).ArrayNum);
  pFVar1 = (this->StaticConstraints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator() @ 143a401f0

void __thiscall
`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::InitializeLambdas'
::__l2::<lambda_1>::operator()
          (void *this,FSolverParticles *param_1,int param_2,float param_3,TVector<float,3> *param_4,
          PMatrix<float,3,3> *param_5)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  TVector<float,3> *pTVar8;
  longlong lVar9;
  float fVar10;
  longlong local_58;
  
  lVar1 = *(longlong *)this;
  lVar9 = (longlong)param_2;
  uVar7 = (uint)~param_2 >> 0x1f;
  if (*(char *)(lVar1 + 0x180) == '\0') {
    local_58 = 3;
    pTVar8 = param_4;
    do {
      uVar5 = 0;
      if (param_2 < *(int *)&(param_1->MPAndInvM).field_0x10) {
        uVar5 = uVar7;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar1 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
      lVar2 = *(longlong *)this;
      uVar5 = 0;
      if (param_2 < *(int *)(lVar2 + 400)) {
        uVar5 = uVar7;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar2 = *(longlong *)(lVar2 + 0x188);
      fVar10 = *(float *)((lVar9 * 0x10 - (longlong)param_4) + lVar1 + (longlong)pTVar8);
      uVar5 = 0;
      if (param_2 < (int)param_1->_padding_) {
        uVar5 = uVar7;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(float *)pTVar8 =
           (fVar10 - *(float *)((longlong)pTVar8 + ((lVar2 + lVar9 * 0xc) - (longlong)param_4))) *
           *(float *)(param_1->_padding_ + lVar9 * 4);
      pTVar8 = (TVector<float,3> *)&pTVar8->field_0x4;
      local_58 = local_58 + -1;
    } while (local_58 != 0);
    uVar5 = 0;
    if (param_2 < (int)param_1->_padding_) {
      uVar5 = uVar7;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined4 *)param_5 = *(undefined4 *)(param_1->_padding_ + lVar9 * 4);
    uVar5 = 0;
    if (param_2 < (int)param_1->_padding_) {
      uVar5 = uVar7;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined4 *)&param_5->field_0x14 = *(undefined4 *)(param_1->_padding_ + lVar9 * 4);
    uVar5 = 0;
    if (param_2 < (int)param_1->_padding_) {
      uVar5 = uVar7;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined4 *)&param_5->field_0x28 = *(undefined4 *)(param_1->_padding_ + lVar9 * 4);
  }
  else {
    uVar5 = 0;
    if (param_2 < (int)param_1->_padding_) {
      uVar5 = uVar7;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar5 = __xmm_80000000800000008000000080000000;
    fVar10 = param_3 * param_3;
    lVar2 = *(longlong *)this;
    *(uint *)param_4 =
         (uint)(fVar10 * *(float *)(lVar1 + 0x24c) * *(float *)(param_1->_padding_ + lVar9 * 4)) ^
         __xmm_80000000800000008000000080000000;
    uVar6 = 0;
    if (param_2 < (int)param_1->_padding_) {
      uVar6 = uVar7;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar1 = *(longlong *)this;
    *(uint *)&param_4->field_0x4 =
         (uint)(fVar10 * *(float *)(lVar2 + 0x250) * *(float *)(param_1->_padding_ + lVar9 * 4)) ^
         uVar5;
    uVar6 = 0;
    if (param_2 < (int)param_1->_padding_) {
      uVar6 = uVar7;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(uint *)&param_4->field_0x8 =
         (uint)(fVar10 * *(float *)(lVar1 + 0x254) * *(float *)(param_1->_padding_ + lVar9 * 4)) ^
         uVar5;
  }
  return;
}

// operator() @ 143a413d0

void __thiscall
`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::Apply'::__l7::
<lambda_1>::operator()(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  
  lVar7 = *(longlong *)this;
  iVar8 = 0;
  if (0 < *(int *)(lVar7 + 0x204)) {
    do {
      uVar1 = param_1 * *(int *)(lVar7 + 0x204) + iVar8;
      uVar2 = **(uint **)((longlong)this + 8);
      uVar6 = 0;
      if ((int)uVar2 < *(int *)(lVar7 + 0x148)) {
        uVar6 = ~uVar2 >> 0x1f;
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
      if ((int)uVar1 < *(int *)(*(longlong *)(lVar7 + 0x140) + 8 + (longlong)(int)uVar2 * 0x10)) {
        lVar7 = *(longlong *)this;
        lVar3 = *(longlong *)((longlong)this + 0x10);
        uVar2 = **(uint **)((longlong)this + 8);
        uVar6 = 0;
        if ((int)uVar2 < *(int *)(lVar7 + 0x148)) {
          uVar6 = ~uVar2 >> 0x1f;
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
        lVar7 = *(longlong *)(lVar7 + 0x140);
        uVar6 = 0;
        if ((int)uVar1 < *(int *)(lVar7 + 8 + (longlong)(int)uVar2 * 0x10)) {
          uVar6 = ~uVar1 >> 0x1f;
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
        uVar2 = *(uint *)(*(longlong *)(lVar7 + (longlong)(int)uVar2 * 0x10) +
                         (longlong)(int)uVar1 * 4);
        uVar6 = 0;
        if ((int)uVar2 < *(int *)(lVar3 + 0x98)) {
          uVar6 = ~uVar2 >> 0x1f;
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
        if (*(float *)(*(longlong *)(lVar3 + 0x90) + (longlong)(int)uVar2 * 4) != 0.0) {
          lVar7 = *(longlong *)this;
          uVar2 = **(uint **)((longlong)this + 8);
          uVar6 = 0;
          if ((int)uVar2 < *(int *)(lVar7 + 0x148)) {
            uVar6 = ~uVar2 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar7 = *(longlong *)(lVar7 + 0x140);
          uVar6 = 0;
          if ((int)uVar1 < *(int *)(lVar7 + 8 + (longlong)(int)uVar2 * 0x10)) {
            uVar6 = ~uVar1 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar5 = Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
                  ApplySingleParticle(*(FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>
                                        **)this,
                                      *(int *)(*(longlong *)(lVar7 + (longlong)(int)uVar2 * 0x10) +
                                              (longlong)(int)uVar1 * 4),
                                      **(float **)((longlong)this + 0x18),
                                      *(FSolverParticles **)((longlong)this + 0x10));
          if (!bVar5) {
            LOCK();
            **(int **)((longlong)this + 0x20) = **(int **)((longlong)this + 0x20) + 1;
            UNLOCK();
          }
        }
      }
      lVar7 = *(longlong *)this;
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(lVar7 + 0x204));
  }
  return;
}

// operator() @ 143a434f0

void __thiscall
`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::InitializeLambdas'
::__l2::<lambda_2>::operator()(void *this,FSolverParticles *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong lVar14;
  code *pcVar15;
  bool bVar16;
  float *pfVar17;
  TVector<float,3> *pTVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  
  lVar20 = (longlong)param_2;
  pfVar17 = Chaos::TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,param_2);
  if ((*pfVar17 != 0.0) &&
     (*(int *)(*(longlong *)this + 0x1fc) < *(int *)(*(longlong *)this + 0x1f0))) {
    pTVar18 = Chaos::Softs::FSolverParticles::P(param_1,param_2);
    lVar13 = *(longlong *)this;
    uVar19 = 0;
    if (param_2 < *(int *)(lVar13 + 0x1d8)) {
      uVar19 = (uint)~param_2 >> 0x1f;
    }
    if (uVar19 == 0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
    }
    lVar13 = *(longlong *)(lVar13 + 0x1d0);
    lVar14 = *(longlong *)this;
    fVar1 = *(float *)pTVar18;
    fVar2 = *(float *)&pTVar18->field_0x4;
    fVar3 = *(float *)(lVar13 + lVar20 * 0xc);
    fVar4 = *(float *)(lVar13 + 4 + lVar20 * 0xc);
    fVar5 = *(float *)(lVar14 + 0x1f8);
    fVar6 = *(float *)&pTVar18->field_0x8;
    fVar7 = *(float *)(lVar13 + 8 + lVar20 * 0xc);
    uVar19 = 0;
    if (param_2 < *(int *)(lVar14 + 0x1d8)) {
      uVar19 = (uint)~param_2 >> 0x1f;
    }
    if (uVar19 == 0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
    }
    lVar13 = *(longlong *)(lVar14 + 0x1d0);
    fVar8 = *(float *)(lVar13 + 8 + lVar20 * 0xc);
    fVar9 = *(float *)(lVar13 + 4 + lVar20 * 0xc);
    fVar10 = *(float *)(lVar13 + lVar20 * 0xc);
    pTVar18 = Chaos::Softs::FSolverParticles::P(param_1,param_2);
    *(float *)pTVar18 = (fVar1 - fVar3) * fVar5 + fVar10;
    *(float *)&pTVar18->field_0x4 = (fVar2 - fVar4) * fVar5 + fVar9;
    *(float *)&pTVar18->field_0x8 = (fVar6 - fVar7) * fVar5 + fVar8;
  }
  pfVar17 = Chaos::TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,param_2);
  if (*pfVar17 != 0.0) {
    lVar13 = *(longlong *)this;
    uVar21 = (uint)~param_2 >> 0x1f;
    uVar19 = 0;
    if (param_2 < *(int *)(lVar13 + 0x1e8)) {
      uVar19 = uVar21;
    }
    if (uVar19 == 0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
    }
    lVar13 = *(longlong *)(lVar13 + 0x1e0);
    lVar14 = *(longlong *)this;
    uVar11 = *(undefined8 *)(lVar13 + lVar20 * 0xc);
    uVar12 = *(undefined4 *)(lVar13 + 8 + lVar20 * 0xc);
    uVar19 = 0;
    if (param_2 < *(int *)(lVar14 + 0x1d8)) {
      uVar19 = uVar21;
    }
    if (uVar19 == 0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
    }
    lVar13 = *(longlong *)(lVar14 + 0x1d0);
    *(undefined8 *)(lVar13 + lVar20 * 0xc) = uVar11;
    *(undefined4 *)(lVar13 + 8 + lVar20 * 0xc) = uVar12;
    pTVar18 = Chaos::Softs::FSolverParticles::P(param_1,param_2);
    lVar13 = *(longlong *)this;
    uVar11 = *(undefined8 *)pTVar18;
    uVar12 = *(undefined4 *)&pTVar18->field_0x8;
    uVar19 = 0;
    if (param_2 < *(int *)(lVar13 + 0x1e8)) {
      uVar19 = uVar21;
    }
    if (uVar19 == 0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
    }
    lVar13 = *(longlong *)(lVar13 + 0x1e0);
    *(undefined8 *)(lVar13 + lVar20 * 0xc) = uVar11;
    *(undefined4 *)(lVar13 + 8 + lVar20 * 0xc) = uVar12;
  }
  return;
}

// AddPerNodeHessianRange @ 143a49cb0

int __thiscall
Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
AddPerNodeHessianRange
          (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = &(this->AddPerNodeHessian).ArrayNum;
  iVar2 = *piVar1;
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,0x10,param_1,&(this->AddPerNodeHessian).AllocatorInstance,piVar1,
                     &(this->AddPerNodeHessian).ArrayMax);
  DefaultConstructItems<TFunction<void___cdecl(int,float,Chaos::PMatrix<float,3,3>_&)>,int>
            ((this->AddPerNodeHessian).AllocatorInstance.Data + (longlong)iVar3 * 0x30,param_1);
  return iVar2;
}

// AddStaticConstraintResidualAndHessianRange @ 143a4bc10

int __thiscall
Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
AddStaticConstraintResidualAndHessianRange
          (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = &(this->AddStaticConstraintResidualAndHessian).ArrayNum;
  iVar2 = *piVar1;
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,0x10,param_1,
                     &(this->AddStaticConstraintResidualAndHessian).AllocatorInstance,piVar1,
                     &(this->AddStaticConstraintResidualAndHessian).ArrayMax);
  DefaultConstructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&)>,int>
            ((this->AddStaticConstraintResidualAndHessian).AllocatorInstance.Data +
             (longlong)iVar3 * 0x30,param_1);
  return iVar2;
}

// AddTransientConstraintResidualAndHessianRange @ 143a4bd00

int __thiscall
Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
AddTransientConstraintResidualAndHessianRange
          (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = &(this->AddTransientConstraintResidualAndHessian).ArrayNum;
  iVar2 = *piVar1;
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,0x10,param_1,
                     &(this->AddTransientConstraintResidualAndHessian).AllocatorInstance,piVar1,
                     &(this->AddTransientConstraintResidualAndHessian).ArrayMax);
  DefaultConstructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&)>,int>
            ((this->AddTransientConstraintResidualAndHessian).AllocatorInstance.Data +
             (longlong)iVar3 * 0x30,param_1);
  return iVar2;
}

// Apply @ 143a4d190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::Apply
          (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1,float param_2,int param_3,bool param_4,
          TPBDActiveView<Chaos::Softs::FSolverParticles> *param_5)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName FVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_ChaosGSMainConstraint_Apply> FVar13;
  FThreadSafeStaticStat<FStat_STAT_ChaosGSMainConstraint_Acceleration> FVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  FName FVar18;
  FName FVar19;
  int iVar20;
  FName FVar21;
  bool bVar22;
  bool bVar23;
  float local_res18 [2];
  uint local_154;
  FName local_150;
  undefined1 local_148 [4];
  int local_144;
  FColor_u_0 local_140 [2];
  FName local_138;
  FColor_u_0 local_130 [2];
  FName local_128;
  FName local_120;
  FName local_110;
  LARGE_INTEGER local_100;
  FStatMessage local_f8;
  code *local_e8;
  FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> **local_e0;
  code *local_d8;
  TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,int)> *local_d0;
  code *local_c8;
  TPBDActiveView<Chaos::Softs::FSolverParticles> **local_c0;
  FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *local_b8;
  FSolverParticles *local_b0;
  code *local_a8;
  FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> **local_a0;
  TPBDActiveView<Chaos::Softs::FSolverParticles> *local_98;
  uint local_90;
  code **local_88;
  FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *local_80;
  uint *local_78;
  FSolverParticles *local_70;
  float *local_68;
  int *local_60;
  FName local_58;
  FName local_50;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_48;
  
  FVar13 = StatPtr_STAT_ChaosGSMainConstraint_Apply;
  local_res18[0] = param_2;
  if (StatPtr_STAT_ChaosGSMainConstraint_Apply ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosGSMainConstraint_Apply>)0x0) {
    pFVar12 = ::FName::FName(&local_58,"STAT_ChaosGSMainConstraint_Apply");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_ChaosGSMainConstraint_Apply>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosGSMainConstraint_Apply,
                        *pFVar12,L"Chaos.Deformable.GSMainConstraint.Apply","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar13;
  bVar3 = false;
  bVar5 = false;
  local_120.ComparisonIndex.Value = 0;
  local_120.Number = 0;
  bVar7 = false;
  bVar22 = false;
  if ((FVar19.ComparisonIndex.Value.Value == 0) && (FVar19.Number == 0)) {
LAB_143a4d2f5:
    bVar5 = bVar22;
    bVar3 = bVar7;
    bVar7 = false;
    local_150 = local_120;
    FVar19 = local_120;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_130[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_130[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar3 = false;
      bVar5 = true;
      bVar7 = false;
      bVar22 = true;
      if (-1 < CpuChannel->Enabled) {
        local_128.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_128.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_128,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Deformable\\GaussSeidelMainConstraint.h"
                   ,0x94);
        bVar3 = true;
        bVar5 = true;
        bVar7 = true;
        bVar22 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143a4d2f5;
    local_150 = FVar19;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar7 = true;
  }
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::Apply(Chaos::Softs::FSolverParticles&___ptr64,float,int,bool,Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>_const*___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId148,"STAT_ChaosGSMainConstraint_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Deformable\\GaussSeidelMainConstraint.h"
               ,0x94);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::Apply(Chaos::Softs::FSolverParticles&___ptr64,float,int,bool,Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>_const*___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId148);
  }
  if (((this->DebugResidual != false) && (this->PassedIters < param_3)) &&
     (ComputeNewtonResiduals
                (this,&local_48,param_1,local_res18[0],param_4,
                 (TArray<Chaos::PMatrix<float,3,3>,TSizedDefaultAllocator<32>_> *)0x0),
     local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  local_144 = 0;
  local_154 = 0;
  if (0 < (this->ParticlesPerColor).ArrayNum) {
    do {
      uVar15 = local_154;
      uVar11 = 0;
      if ((int)local_154 < (this->ParticlesPerColor).ArrayNum) {
        uVar11 = ~local_154 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar11 = local_154;
      iVar20 = *(int *)((this->ParticlesPerColor).AllocatorInstance.Data +
                       (longlong)(int)uVar15 * 0x10 + 8) /
               (this->CorotatedParams).XPBDCorotatedBatchSize;
      uVar15 = 0;
      if ((int)local_154 < (this->ParticlesPerColor).ArrayNum) {
        uVar15 = ~local_154 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_e8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::Apply'::__l7::<lambda_1>,void,int>
                 ::Call;
      local_78 = &local_154;
      local_68 = local_res18;
      iVar16 = iVar20 + 1;
      if (*(int *)((this->ParticlesPerColor).AllocatorInstance.Data +
                  (longlong)(int)uVar11 * 0x10 + 8) % (this->CorotatedParams).XPBDCorotatedBatchSize
          == 0) {
        iVar16 = iVar20;
      }
      local_60 = &local_144;
      local_e0 = &local_80;
      local_80 = this;
      local_70 = param_1;
      PhysicsParallelFor(iVar16,(TFunctionRef<void___cdecl(int)> *)&local_e8,
                         iVar16 < (this->CorotatedParams).XPBDCorotatedBatchThreshold);
      local_154 = local_154 + 1;
      FVar19 = local_150;
    } while ((int)local_154 < (this->ParticlesPerColor).ArrayNum);
  }
  if (this->bDoAcceleration == false) goto LAB_143a4d8a6;
  FVar14 = StatPtr_STAT_ChaosGSMainConstraint_Acceleration;
  if (StatPtr_STAT_ChaosGSMainConstraint_Acceleration ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosGSMainConstraint_Acceleration>)0x0) {
    pFVar12 = ::FName::FName(&local_50,"STAT_ChaosGSMainConstraint_Acceleration");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_ChaosGSMainConstraint_Acceleration>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_ChaosGSMainConstraint_Acceleration,*pFVar12,
                        L"Chaos.Deformable.GSMainConstraint.Acceleration","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar14;
  bVar9 = false;
  bVar4 = false;
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  bVar8 = false;
  bVar23 = false;
  if ((FVar18.ComparisonIndex.Value.Value == 0) && (FVar18.Number == 0)) {
LAB_143a4d639:
    bVar4 = bVar23;
    bVar9 = bVar8;
    bVar8 = false;
    FVar18 = local_110;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_140[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_140[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar9 = false;
      bVar4 = true;
      bVar8 = false;
      bVar23 = true;
      if (-1 < CpuChannel->Enabled) {
        local_138 = FVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_138,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Deformable\\GaussSeidelMainConstraint.h"
                   ,0xbc);
        bVar9 = true;
        bVar4 = true;
        bVar8 = true;
        bVar23 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143a4d639;
    local_150 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar8 = true;
  }
  bVar23 = -1 < CpuChannel->Enabled;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::Apply(Chaos::Softs::FSolverParticles&___ptr64,float,int,bool,Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>_const*___ptr64)___ptr64'
                ::__l13::__CpuProfilerEventSpecId188,"STAT_ChaosGSMainConstraint_Acceleration",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Deformable\\GaussSeidelMainConstraint.h"
               ,0xbc);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::Apply(Chaos::Softs::FSolverParticles&___ptr64,float,int,bool,Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>_const*___ptr64)___ptr64'
               ::__l13::__CpuProfilerEventSpecId188);
  }
  if (param_5 == (TPBDActiveView<Chaos::Softs::FSolverParticles> *)0x0) {
    uVar15 = (uint)param_1->_padding_;
    local_a8 = UE::Core::Private::Function::
               TFunctionRefCaller<`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::Apply'::__l18::<lambda_2>,void,int>
               ::Call;
    local_b8 = this;
    local_b0 = param_1;
    local_a0 = &local_b8;
    PhysicsParallelFor(uVar15,(TFunctionRef<void___cdecl(int)> *)&local_a8,uVar15 < 1000);
  }
  else {
    local_150.ComparisonIndex.Value = (this->CorotatedParams).XPBDCorotatedBatchSize;
    if ((*(longlong *)&this->AccelerationTechniquePerParticle == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsBound(InFunc)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                            ,0x1d0,L"Cannot bind a null/unbound callable to a TFunctionRef"), bVar10
       )) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_140[0] = (FColor_u_0)(param_5->Ranges).ArrayNum;
    uVar17 = (ulonglong)(int)local_140[0].Bits;
    FVar21 = (FName)(param_5->Ranges).AllocatorInstance.Data;
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,int)>,void,Chaos::Softs::FSolverParticles_&,int>
               ::Call;
    local_138 = (FName)(uVar17 * 4 + (longlong)FVar21);
    uVar15 = 0;
    local_d0 = &this->AccelerationTechniquePerParticle;
    while( true ) {
      FVar6 = local_138;
      if ((param_5->Ranges).ArrayNum != (int)uVar17) {
        `TCheckedPointerIterator<Chaos::FActiveViewRange_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_148);
      }
      if (FVar21 == FVar6) break;
      uVar11 = *(uint *)FVar21;
      if (((uVar11 & 1) != 0) && (uVar11 >> 1 != 0)) {
        iVar20 = (uVar11 >> 1) - uVar15;
        local_c8 = UE::Core::Private::Function::
                   TFunctionRefCaller<`Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>::ParallelFor'::__l9::<lambda_1>,void,int>
                   ::Call;
        local_88 = &local_d8;
        local_c0 = &local_98;
        local_98 = param_5;
        local_90 = uVar15;
        PhysicsParallelFor(iVar20,(TFunctionRef<void___cdecl(int)> *)&local_c8,
                           iVar20 < (int)local_150.ComparisonIndex.Value);
      }
      FVar21 = (FName)((longlong)FVar21 + 4);
      uVar17 = (ulonglong)local_140[0].Bits;
      uVar15 = uVar11 >> 1;
    }
  }
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_f8.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_f8.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_100);
      local_f8.StatData.Pad[4] = '\0';
      local_f8.StatData.Pad[5] = '\0';
      local_f8.StatData.Pad[6] = '\0';
      local_f8.StatData.Pad[7] = '\0';
      local_f8.StatData.Pad[0] = local_100.s.LowPart._0_1_;
      local_f8.StatData.Pad[1] = local_100.s.LowPart._1_1_;
      local_f8.StatData.Pad[2] = local_100.s.LowPart._2_1_;
      local_f8.StatData.Pad[3] = local_100.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_f8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
LAB_143a4d8a6:
  this->CurrentIt = this->CurrentIt + 1;
  if ((0 < local_144) && (2 < (byte)LogDeformableGaussSeidelMainConstraint._0_1_)) {
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::Apply(Chaos::Softs::FSolverParticles&___ptr64,float,int,bool,Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>_const*___ptr64)___ptr64'
                ::__l22::LOG_Static,(FLogCategoryBase *)&LogDeformableGaussSeidelMainConstraint);
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar19,CycleScopeEnd);
  }
  return;
}

// ApplySingleParticle @ 143a53200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ApplySingleParticle
          (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *this,int param_1,
          float param_2,FSolverParticles *param_3)

{
  int iVar1;
  code *pcVar2;
  longlong *plVar3;
  float fVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined8 uVar10;
  TVector<float,3> *pTVar11;
  longlong *plVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  float *pfVar15;
  uint uVar16;
  float *pfVar17;
  float *pfVar18;
  uint uVar19;
  float *pfVar20;
  uint uVar21;
  longlong lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_238 [32];
  float *local_218;
  float *local_210;
  float *local_208;
  uint local_1f8;
  float local_1f4;
  uint local_1f0;
  float *local_1e8;
  FScriptContainerElement *local_1e0;
  uint local_1d8;
  float local_1d0 [2];
  float *local_1c8;
  FScriptContainerElement *local_1c0;
  float local_1b8;
  uint uStack_1b4;
  uint local_1b0;
  FSolverParticles *local_1a8;
  float local_1a0 [2];
  int local_198 [2];
  float local_190 [2];
  undefined4 local_188 [2];
  int local_180 [2];
  float local_178 [2];
  undefined4 local_170 [2];
  int local_168 [2];
  float local_160 [2];
  uint local_158 [2];
  int local_150 [2];
  float local_148 [2];
  FScriptContainerElement *local_140;
  float local_138 [12];
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStack_238;
  uVar21 = 0;
  _local_1b8 = 0;
  local_1b0 = 0;
  local_138[0] = 0.0;
  local_138[1] = 0.0;
  local_138[4] = 0.0;
  local_138[5] = 0.0;
  local_138[8] = 0.0;
  local_138[9] = 0.0;
  local_138[2] = 0.0;
  local_138[3] = 0.0;
  local_138[6] = 0.0;
  local_138[7] = 0.0;
  local_138[10] = 0.0;
  local_138[0xb] = 0.0;
  local_108 = ___xmm_3f800000000000000000000000000000;
  uStack_100 = _UNK_150689648;
  local_1f4 = (float)param_1;
  local_1a8 = param_3;
  local_1a0[0] = param_2;
  local_198[0] = param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->ComputeInitialResidualAndHessian);
  pcVar2 = *(code **)&this->ComputeInitialResidualAndHessian;
  plVar3 = *(longlong **)&(this->ComputeInitialResidualAndHessian).field_0x28;
  plVar12 = (longlong *)&(this->ComputeInitialResidualAndHessian).field_0x10;
  if (plVar3 != (longlong *)0x0) {
    plVar12 = plVar3;
  }
  uVar10 = (**(code **)(*plVar12 + 8))();
  local_218 = &local_1b8;
  local_210 = local_138;
  (*pcVar2)(uVar10,param_3,local_198,local_1a0);
  pfVar15 = (float *)(longlong)(int)local_1f4;
  uVar19 = 0;
  local_1e8 = (float *)0x0;
  local_1f8 = ~(uint)local_1f4 >> 0x1f;
  pfVar20 = (float *)0x0;
  pfVar17 = pfVar15;
  local_1c8 = pfVar15;
  while( true ) {
    iVar1 = (this->StaticIncidentElements).ArrayNum;
    uVar16 = 0;
    if ((int)pfVar17 < iVar1) {
      uVar16 = local_1f8;
    }
    if (uVar16 == 0) {
      local_218 = local_1c8;
      local_210 = (float *)(longlong)iVar1;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
      pfVar17 = (float *)(ulonglong)(uint)local_1f4;
    }
    if (*(int *)((this->StaticIncidentElements).AllocatorInstance.Data +
                (longlong)pfVar15 * 0x10 + 8) <= (int)uVar19) {
      uVar21 = 0;
      uVar19 = 0;
      pfVar20 = (float *)0x0;
      local_1e8 = (float *)0x0;
      while( true ) {
        iVar1 = (this->DynamicIncidentElements).ArrayNum;
        uVar16 = 0;
        if ((int)pfVar17 < iVar1) {
          uVar16 = local_1f8;
        }
        if (uVar16 == 0) {
          local_218 = local_1c8;
          local_210 = (float *)(longlong)iVar1;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
          pfVar17 = (float *)(ulonglong)(uint)local_1f4;
        }
        if (*(int *)((this->DynamicIncidentElements).AllocatorInstance.Data +
                    (longlong)pfVar15 * 0x10 + 8) <= (int)uVar21) {
          uVar21 = 0;
          uVar19 = 0;
          pfVar20 = (float *)0x0;
          local_1e0 = (FScriptContainerElement *)0x0;
          while( true ) {
            pfVar18 = local_1c8;
            iVar1 = (this->TransientIncidentElements).ArrayNum;
            uVar16 = 0;
            if ((int)pfVar17 < iVar1) {
              uVar16 = local_1f8;
            }
            local_1f0 = uVar21;
            if (uVar16 == 0) {
              local_218 = local_1c8;
              local_210 = (float *)(longlong)iVar1;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar2 = (code *)swi(3);
                uVar8 = (*pcVar2)();
                return (bool)uVar8;
              }
              pfVar17 = (float *)(ulonglong)(uint)local_1f4;
            }
            else {
              pfVar18 = (float *)(longlong)(int)pfVar17;
            }
            fVar4 = local_1f4;
            if (*(int *)((this->TransientIncidentElements).AllocatorInstance.Data +
                        (longlong)pfVar15 * 0x10 + 8) <= (int)uVar21) break;
            local_1e8 = (float *)(longlong)(int)uVar21;
            uVar16 = ~uVar21 >> 0x1f;
            uVar21 = uVar19;
            while( true ) {
              uVar21 = uVar21 + 1;
              iVar1 = (this->TransientIncidentElements).ArrayNum;
              uVar9 = 0;
              if ((int)pfVar17 < iVar1) {
                uVar9 = local_1f8;
              }
              if ((uVar9 == 0) &&
                 (local_218 = pfVar18, local_210 = (float *)(longlong)iVar1,
                 bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar2 = (code *)swi(3);
                uVar8 = (*pcVar2)();
                return (bool)uVar8;
              }
              pFVar14 = (this->TransientIncidentElements).AllocatorInstance.Data;
              iVar1 = *(int *)(pFVar14 + (longlong)pfVar15 * 0x10 + 8);
              uVar9 = 0;
              if ((int)local_1f0 < iVar1) {
                uVar9 = uVar16;
              }
              if ((uVar9 == 0) &&
                 (local_218 = local_1e8, local_210 = (float *)(longlong)iVar1,
                 bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar2 = (code *)swi(3);
                uVar8 = (*pcVar2)();
                return (bool)uVar8;
              }
              iVar1 = (this->TransientIncidentElementsOffsets).ArrayNum;
              lVar22 = *(longlong *)(pFVar14 + (longlong)pfVar15 * 0x10);
              uVar9 = 0;
              if ((int)uVar21 < iVar1) {
                uVar9 = ~uVar21 >> 0x1f;
              }
              if (uVar9 == 0) {
                local_218 = (float *)(longlong)(int)uVar21;
                local_210 = (float *)(longlong)iVar1;
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar7) {
                  pcVar2 = (code *)swi(3);
                  uVar8 = (*pcVar2)();
                  return (bool)uVar8;
                }
              }
              if ((*(int *)(lVar22 + (longlong)local_1e8 * 4) <
                   *(int *)((this->TransientIncidentElementsOffsets).AllocatorInstance.Data +
                           (longlong)pfVar20 * 4 + 4)) ||
                 ((this->TransientIncidentElementsOffsets).ArrayNum + -1 <= (int)uVar19)) break;
              pfVar17 = (float *)(ulonglong)(uint)local_1f4;
              uVar19 = uVar19 + 1;
              pfVar20 = (float *)((longlong)pfVar20 + 1);
              pfVar18 = local_1c8;
            }
            iVar1 = (this->AddTransientConstraintResidualAndHessian).ArrayNum;
            uVar21 = 0;
            if ((int)uVar19 < iVar1) {
              uVar21 = ~uVar19 >> 0x1f;
            }
            if (uVar21 == 0) {
              local_218 = (float *)(longlong)(int)uVar19;
              local_210 = (float *)(longlong)iVar1;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar2 = (code *)swi(3);
                uVar8 = (*pcVar2)();
                return (bool)uVar8;
              }
            }
            fVar4 = local_1f4;
            iVar1 = (this->TransientIncidentElementsLocal).ArrayNum;
            pfVar17 = (float *)(longlong)(int)local_1f4;
            local_140 = (this->AddTransientConstraintResidualAndHessian).AllocatorInstance.Data +
                        (longlong)pfVar20 * 0x30;
            uVar21 = 0;
            if ((int)local_1f4 < iVar1) {
              uVar21 = local_1f8;
            }
            if ((uVar21 == 0) &&
               (local_218 = pfVar17, local_210 = (float *)(longlong)iVar1,
               bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar2 = (code *)swi(3);
              uVar8 = (*pcVar2)();
              return (bool)uVar8;
            }
            local_1c0 = (this->TransientIncidentElementsLocal).AllocatorInstance.Data;
            uVar21 = 0;
            if ((int)local_1f0 < *(int *)(local_1c0 + ((longlong)pfVar15 * 2 + 1) * 8)) {
              uVar21 = uVar16;
            }
            if (uVar21 == 0) {
              local_218 = local_1e8;
              local_210 = (float *)(longlong)*(int *)(local_1c0 + ((longlong)pfVar15 * 2 + 1) * 8);
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar2 = (code *)swi(3);
                uVar8 = (*pcVar2)();
                return (bool)uVar8;
              }
            }
            local_1d8 = *(uint *)((longlong)local_1e0 +
                                 *(longlong *)(local_1c0 + (longlong)pfVar15 * 0x10));
            iVar1 = (this->TransientIncidentElements).ArrayNum;
            uVar21 = 0;
            if ((int)fVar4 < iVar1) {
              uVar21 = local_1f8;
            }
            if ((uVar21 == 0) &&
               (local_218 = pfVar17, local_210 = (float *)(longlong)iVar1,
               bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar2 = (code *)swi(3);
              uVar8 = (*pcVar2)();
              return (bool)uVar8;
            }
            iVar1 = (this->TransientIncidentElementsOffsets).ArrayNum;
            pFVar14 = (this->TransientIncidentElements).AllocatorInstance.Data;
            uVar21 = 0;
            if ((int)uVar19 < iVar1) {
              uVar21 = ~uVar19 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (local_218 = pfVar20, local_210 = (float *)(longlong)iVar1,
               bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar2 = (code *)swi(3);
              uVar8 = (*pcVar2)();
              return (bool)uVar8;
            }
            iVar1 = *(int *)(pFVar14 + (longlong)pfVar15 * 0x10 + 8);
            pFVar13 = (this->TransientIncidentElementsOffsets).AllocatorInstance.Data;
            uVar21 = 0;
            if ((int)local_1f0 < iVar1) {
              uVar21 = uVar16;
            }
            if (uVar21 == 0) {
              local_218 = local_1e8;
              local_210 = (float *)(longlong)iVar1;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar2 = (code *)swi(3);
                uVar8 = (*pcVar2)();
                return (bool)uVar8;
              }
            }
            pFVar6 = local_140;
            pFVar5 = local_1e0;
            local_150[0] = *(int *)(*(longlong *)(pFVar14 + (longlong)pfVar15 * 0x10) +
                                   (longlong)local_1e0) - *(int *)(pFVar13 + (longlong)pfVar20 * 4);
            local_158[0] = local_1d8;
            local_160[0] = param_2;
            UE::Core::Private::Function::CheckCallable(*(void **)local_140);
            pcVar2 = *(code **)pFVar6;
            pFVar14 = *(FScriptContainerElement **)(pFVar6 + 0x28);
            if (*(FScriptContainerElement **)(pFVar6 + 0x28) == (FScriptContainerElement *)0x0) {
              pFVar14 = pFVar6 + 0x10;
            }
            uVar10 = (**(code **)(*(longlong *)pFVar14 + 8))();
            local_210 = &local_1b8;
            local_218 = local_160;
            local_208 = local_138;
            (*pcVar2)(uVar10,local_1a8,local_150,local_158);
            pfVar17 = (float *)(ulonglong)(uint)local_1f4;
            uVar21 = local_1f0 + 1;
            local_1e0 = (FScriptContainerElement *)((longlong)pFVar5 + 4);
          }
          uVar21 = 0;
          if (0 < (this->AddPerNodeHessian).ArrayNum) {
            lVar22 = 0;
            do {
              iVar1 = (this->AddPerNodeHessian).ArrayNum;
              uVar19 = 0;
              if ((int)uVar21 < iVar1) {
                uVar19 = ~uVar21 >> 0x1f;
              }
              if (uVar19 == 0) {
                local_218 = (float *)(longlong)(int)uVar21;
                local_210 = (float *)(longlong)iVar1;
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar7) {
                  pcVar2 = (code *)swi(3);
                  uVar8 = (*pcVar2)();
                  return (bool)uVar8;
                }
              }
              pFVar14 = (this->AddPerNodeHessian).AllocatorInstance.Data;
              local_1d0[0] = fVar4;
              local_148[0] = param_2;
              UE::Core::Private::Function::CheckCallable(*(void **)(pFVar14 + lVar22));
              pcVar2 = *(code **)(pFVar14 + lVar22);
              pFVar13 = *(FScriptContainerElement **)(pFVar14 + lVar22 + 0x10 + 0x18);
              if (pFVar13 == (FScriptContainerElement *)0x0) {
                pFVar13 = pFVar14 + lVar22 + 0x10;
              }
              uVar10 = (**(code **)(*(longlong *)pFVar13 + 8))();
              (*pcVar2)(uVar10,local_1d0,local_148,local_138);
              uVar21 = uVar21 + 1;
              lVar22 = lVar22 + 0x30;
            } while ((int)uVar21 < (this->AddPerNodeHessian).ArrayNum);
          }
          fVar24 = ((local_138[10] * local_138[5] - local_138[6] * local_138[9]) * local_138[0] -
                   (local_138[10] * local_138[4] - local_138[6] * local_138[8]) * local_138[1]) +
                   (local_138[9] * local_138[4] - local_138[5] * local_138[8]) * local_138[2];
          if (((float)((uint)fVar24 & __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_34000000) ||
             (local_1d0[0] = __real_3f800000, fVar31 = local_138[10], fVar32 = local_138[5],
             fVar33 = local_138[9], fVar34 = local_138[4], fVar23 = local_138[8],
             fVar35 = local_138[0],
             __real_7f7fffff < (float)((uint)fVar24 & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
            local_1d0[0] = (float)((uint)local_138[0] & __xmm_7fffffff7fffffff7fffffff7fffffff);
            if ((float)((uint)local_138[0] & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
                __real_00000000) {
              local_1d0[0] = __real_00000000;
            }
            if (local_1d0[0] <= (float)((uint)local_138[4] & __xmm_7fffffff7fffffff7fffffff7fffffff)
               ) {
              local_1d0[0] = (float)((uint)local_138[4] & __xmm_7fffffff7fffffff7fffffff7fffffff);
            }
            if (local_1d0[0] <= (float)((uint)local_138[8] & __xmm_7fffffff7fffffff7fffffff7fffffff)
               ) {
              local_1d0[0] = (float)((uint)local_138[8] & __xmm_7fffffff7fffffff7fffffff7fffffff);
            }
            if (local_1d0[0] <= (float)((uint)local_138[1] & __xmm_7fffffff7fffffff7fffffff7fffffff)
               ) {
              local_1d0[0] = (float)((uint)local_138[1] & __xmm_7fffffff7fffffff7fffffff7fffffff);
            }
            if (local_1d0[0] <= (float)((uint)local_138[5] & __xmm_7fffffff7fffffff7fffffff7fffffff)
               ) {
              local_1d0[0] = (float)((uint)local_138[5] & __xmm_7fffffff7fffffff7fffffff7fffffff);
            }
            if (local_1d0[0] <= (float)((uint)local_138[9] & __xmm_7fffffff7fffffff7fffffff7fffffff)
               ) {
              local_1d0[0] = (float)((uint)local_138[9] & __xmm_7fffffff7fffffff7fffffff7fffffff);
            }
            if (local_1d0[0] <= (float)((uint)local_138[2] & __xmm_7fffffff7fffffff7fffffff7fffffff)
               ) {
              local_1d0[0] = (float)((uint)local_138[2] & __xmm_7fffffff7fffffff7fffffff7fffffff);
            }
            if (local_1d0[0] <= (float)((uint)local_138[6] & __xmm_7fffffff7fffffff7fffffff7fffffff)
               ) {
              local_1d0[0] = (float)((uint)local_138[6] & __xmm_7fffffff7fffffff7fffffff7fffffff);
            }
            if (local_1d0[0] <=
                (float)((uint)local_138[10] & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
              local_1d0[0] = (float)((uint)local_138[10] & __xmm_7fffffff7fffffff7fffffff7fffffff);
            }
            if (local_1d0[0] < __real_34000000) {
              return false;
            }
            if (__real_7f7fffff < local_1d0[0]) {
              return false;
            }
            fVar23 = __real_3f800000 / local_1d0[0];
            fVar24 = local_138[6] * fVar23;
            fVar31 = local_138[10] * fVar23;
            fVar34 = local_138[4] * fVar23;
            fVar33 = local_138[9] * fVar23;
            fVar32 = local_138[5] * fVar23;
            fVar35 = local_138[0] * fVar23;
            local_138[1] = local_138[1] * fVar23;
            fVar28 = local_138[2] * fVar23;
            fVar23 = local_138[8] * fVar23;
            local_138[6] = fVar24;
            local_138[0] = fVar35;
            local_138[2] = fVar28;
            local_138[5] = fVar32;
            local_138[4] = fVar34;
            local_138[9] = fVar33;
            local_138[8] = fVar23;
            local_138[10] = fVar31;
            fVar24 = ((fVar31 * fVar32 - fVar33 * fVar24) * fVar35 -
                     (fVar31 * fVar34 - fVar23 * fVar24) * local_138[1]) +
                     (fVar33 * fVar34 - fVar23 * fVar32) * fVar28;
            if ((float)((uint)fVar24 & __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_34000000) {
              return false;
            }
            if (__real_7f7fffff < (float)((uint)fVar24 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
              return false;
            }
          }
          local_1d0[0] = __real_3f800000 / local_1d0[0];
          fVar24 = __real_3f800000 / fVar24;
          fVar27 = (fVar33 * fVar23 - fVar31 * fVar34) * fVar24;
          fVar30 = (fVar33 * fVar34 - fVar32 * fVar23) * fVar24;
          fVar28 = (float)(local_1b0 ^ __xmm_80000000800000008000000080000000);
          fVar25 = (float)(uStack_1b4 ^ __xmm_80000000800000008000000080000000);
          fVar26 = (float)((uint)local_1b8 ^ __xmm_80000000800000008000000080000000);
          fVar29 = (fVar23 * fVar34 - fVar33 * fVar35) * fVar24;
          fVar33 = ((fVar31 * fVar32 - fVar33 * fVar33) * fVar24 * fVar26 + fVar25 * fVar27 +
                   fVar28 * fVar30) * local_1d0[0];
          fVar31 = ((fVar31 * fVar35 - fVar23 * fVar23) * fVar24 * fVar25 + fVar26 * fVar27 +
                   fVar28 * fVar29) * local_1d0[0];
          fVar24 = ((fVar32 * fVar35 - fVar34 * fVar34) * fVar24 * fVar28 +
                   fVar25 * fVar29 + fVar26 * fVar30) * local_1d0[0];
          if (this->MaxDxSize <= SQRT(fVar31 * fVar31 + fVar33 * fVar33 + fVar24 * fVar24)) {
            return false;
          }
          pTVar11 = FSolverParticles::P(local_1a8,(int)fVar4);
          *(float *)pTVar11 = fVar33 + *(float *)pTVar11;
          *(float *)&pTVar11->field_0x4 = fVar31 + *(float *)&pTVar11->field_0x4;
          *(float *)&pTVar11->field_0x8 = fVar24 + *(float *)&pTVar11->field_0x8;
          return true;
        }
        local_1f0 = ~uVar21 >> 0x1f;
        uVar16 = uVar19;
        while( true ) {
          uVar16 = uVar16 + 1;
          iVar1 = (this->DynamicIncidentElements).ArrayNum;
          uVar9 = 0;
          if ((int)pfVar17 < iVar1) {
            uVar9 = local_1f8;
          }
          if (uVar9 == 0) {
            local_218 = (float *)(longlong)(int)pfVar17;
            local_210 = (float *)(longlong)iVar1;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar2 = (code *)swi(3);
              uVar8 = (*pcVar2)();
              return (bool)uVar8;
            }
          }
          iVar1 = (this->DynamicIncidentElementsOffsets).ArrayNum;
          pFVar14 = (this->DynamicIncidentElements).AllocatorInstance.Data;
          uVar9 = 0;
          if ((int)uVar16 < iVar1) {
            uVar9 = ~uVar16 >> 0x1f;
          }
          if (uVar9 == 0) {
            local_218 = (float *)(longlong)(int)uVar16;
            local_210 = (float *)(longlong)iVar1;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar2 = (code *)swi(3);
              uVar8 = (*pcVar2)();
              return (bool)uVar8;
            }
          }
          local_1c0 = (this->DynamicIncidentElementsOffsets).AllocatorInstance.Data;
          iVar1 = *(int *)(pFVar14 + (longlong)pfVar15 * 0x10 + 8);
          uVar9 = 0;
          if ((int)uVar21 < iVar1) {
            uVar9 = local_1f0;
          }
          if (uVar9 == 0) {
            local_218 = (float *)(longlong)(int)uVar21;
            local_210 = (float *)(longlong)iVar1;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar2 = (code *)swi(3);
              uVar8 = (*pcVar2)();
              return (bool)uVar8;
            }
          }
          if ((*(int *)((longlong)local_1e8 + *(longlong *)(pFVar14 + (longlong)pfVar15 * 0x10)) <
               *(int *)(local_1c0 + (longlong)pfVar20 * 4 + 4)) ||
             ((this->DynamicIncidentElementsOffsets).ArrayNum + -1 <= (int)uVar19)) break;
          pfVar17 = (float *)(ulonglong)(uint)local_1f4;
          uVar19 = uVar19 + 1;
          pfVar20 = (float *)((longlong)pfVar20 + 1);
        }
        iVar1 = (this->AddDynamicConstraintResidualAndHessian).ArrayNum;
        local_1d8 = ~uVar19 >> 0x1f;
        uVar16 = 0;
        if ((int)uVar19 < iVar1) {
          uVar16 = local_1d8;
        }
        if (uVar16 == 0) {
          local_218 = (float *)(longlong)(int)uVar19;
          local_210 = (float *)(longlong)iVar1;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
        }
        fVar4 = local_1f4;
        iVar1 = (this->DynamicIncidentElementsLocal).ArrayNum;
        pfVar17 = (float *)(longlong)(int)local_1f4;
        local_1e0 = (this->AddDynamicConstraintResidualAndHessian).AllocatorInstance.Data +
                    (longlong)pfVar20 * 0x30;
        uVar16 = 0;
        if ((int)local_1f4 < iVar1) {
          uVar16 = local_1f8;
        }
        if ((uVar16 == 0) &&
           (local_218 = pfVar17, local_210 = (float *)(longlong)iVar1,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar7)) {
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return (bool)uVar8;
        }
        uVar16 = local_1f0;
        local_1c0 = (this->DynamicIncidentElementsLocal).AllocatorInstance.Data;
        uVar9 = 0;
        if ((int)uVar21 < *(int *)(local_1c0 + ((longlong)pfVar15 * 2 + 1) * 8)) {
          uVar9 = local_1f0;
        }
        if (uVar9 == 0) {
          local_218 = (float *)(longlong)(int)uVar21;
          local_210 = (float *)(longlong)*(int *)(local_1c0 + ((longlong)pfVar15 * 2 + 1) * 8);
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
        }
        local_1f0 = *(undefined4 *)
                     ((longlong)local_1e8 + *(longlong *)(local_1c0 + (longlong)pfVar15 * 0x10));
        iVar1 = (this->DynamicIncidentElements).ArrayNum;
        uVar9 = 0;
        if ((int)fVar4 < iVar1) {
          uVar9 = local_1f8;
        }
        if ((uVar9 == 0) &&
           (local_218 = pfVar17, local_210 = (float *)(longlong)iVar1,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar7)) break;
        pFVar14 = (this->DynamicIncidentElements).AllocatorInstance.Data;
        iVar1 = *(int *)(pFVar14 + (longlong)pfVar15 * 0x10 + 8);
        uVar9 = 0;
        if ((int)uVar21 < iVar1) {
          uVar9 = uVar16;
        }
        if (uVar9 == 0) {
          local_218 = (float *)(longlong)(int)uVar21;
          local_210 = (float *)(longlong)iVar1;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
        }
        iVar1 = (this->DynamicIncidentElementsOffsets).ArrayNum;
        lVar22 = *(longlong *)(pFVar14 + (longlong)pfVar15 * 0x10);
        uVar16 = 0;
        if ((int)uVar19 < iVar1) {
          uVar16 = local_1d8;
        }
        if ((uVar16 == 0) &&
           (local_218 = pfVar20, local_210 = (float *)(longlong)iVar1,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar7)) {
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return (bool)uVar8;
        }
        pFVar14 = local_1e0;
        local_168[0] = *(int *)((longlong)local_1e8 + lVar22) -
                       *(int *)((this->DynamicIncidentElementsOffsets).AllocatorInstance.Data +
                               (longlong)pfVar20 * 4);
        local_170[0] = local_1f0;
        local_178[0] = param_2;
        UE::Core::Private::Function::CheckCallable(*(void **)local_1e0);
        pcVar2 = *(code **)pFVar14;
        pFVar13 = *(FScriptContainerElement **)(pFVar14 + 0x28);
        if (*(FScriptContainerElement **)(pFVar14 + 0x28) == (FScriptContainerElement *)0x0) {
          pFVar13 = pFVar14 + 0x10;
        }
        uVar10 = (**(code **)(*(longlong *)pFVar13 + 8))();
        local_210 = &local_1b8;
        local_218 = local_178;
        local_208 = local_138;
        (*pcVar2)(uVar10,local_1a8,local_168,local_170);
        pfVar17 = (float *)(ulonglong)(uint)local_1f4;
        uVar21 = uVar21 + 1;
        local_1e8 = local_1e8 + 1;
      }
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
    local_1f0 = ~uVar19 >> 0x1f;
    uVar16 = uVar21;
    while( true ) {
      uVar16 = uVar16 + 1;
      iVar1 = (this->StaticIncidentElements).ArrayNum;
      uVar9 = 0;
      if ((int)pfVar17 < iVar1) {
        uVar9 = local_1f8;
      }
      if ((uVar9 == 0) &&
         (local_218 = local_1c8, local_210 = (float *)(longlong)iVar1,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
      iVar1 = (this->StaticIncidentElementsOffsets).ArrayNum;
      pFVar14 = (this->StaticIncidentElements).AllocatorInstance.Data;
      uVar9 = 0;
      if ((int)uVar16 < iVar1) {
        uVar9 = ~uVar16 >> 0x1f;
      }
      if (uVar9 == 0) {
        local_218 = (float *)(longlong)(int)uVar16;
        local_210 = (float *)(longlong)iVar1;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return (bool)uVar8;
        }
      }
      local_1e0 = (this->StaticIncidentElementsOffsets).AllocatorInstance.Data;
      iVar1 = *(int *)(pFVar14 + (longlong)pfVar15 * 0x10 + 8);
      uVar9 = 0;
      if ((int)uVar19 < iVar1) {
        uVar9 = local_1f0;
      }
      if (uVar9 == 0) {
        local_218 = (float *)(longlong)(int)uVar19;
        local_210 = (float *)(longlong)iVar1;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return (bool)uVar8;
        }
      }
      if ((*(int *)((longlong)local_1e8 + *(longlong *)(pFVar14 + (longlong)pfVar15 * 0x10)) <
           *(int *)(local_1e0 + (longlong)pfVar20 * 4 + 4)) ||
         ((this->StaticIncidentElementsOffsets).ArrayNum + -1 <= (int)uVar21)) break;
      pfVar17 = (float *)(ulonglong)(uint)local_1f4;
      uVar21 = uVar21 + 1;
      pfVar20 = (float *)((longlong)pfVar20 + 1);
    }
    iVar1 = (this->AddStaticConstraintResidualAndHessian).ArrayNum;
    local_1d8 = ~uVar21 >> 0x1f;
    uVar16 = 0;
    if ((int)uVar21 < iVar1) {
      uVar16 = local_1d8;
    }
    if (uVar16 == 0) {
      local_218 = (float *)(longlong)(int)uVar21;
      local_210 = (float *)(longlong)iVar1;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
    }
    fVar4 = local_1f4;
    iVar1 = (this->StaticIncidentElementsLocal).ArrayNum;
    pfVar17 = (float *)(longlong)(int)local_1f4;
    local_1c0 = (this->AddStaticConstraintResidualAndHessian).AllocatorInstance.Data +
                (longlong)pfVar20 * 0x30;
    uVar16 = 0;
    if ((int)local_1f4 < iVar1) {
      uVar16 = local_1f8;
    }
    if ((uVar16 == 0) &&
       (local_218 = pfVar17, local_210 = (float *)(longlong)iVar1,
       bVar7 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    uVar16 = local_1f0;
    local_1e0 = (this->StaticIncidentElementsLocal).AllocatorInstance.Data;
    uVar9 = 0;
    if ((int)uVar19 < *(int *)(local_1e0 + (longlong)pfVar15 * 0x10 + 8)) {
      uVar9 = local_1f0;
    }
    if (uVar9 == 0) {
      local_218 = (float *)(longlong)(int)uVar19;
      local_210 = (float *)(longlong)*(int *)(local_1e0 + (longlong)pfVar15 * 0x10 + 8);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
    }
    local_1f0 = *(undefined4 *)
                 ((longlong)local_1e8 + *(longlong *)(local_1e0 + (longlong)pfVar15 * 0x10));
    iVar1 = (this->StaticIncidentElements).ArrayNum;
    uVar9 = 0;
    if ((int)fVar4 < iVar1) {
      uVar9 = local_1f8;
    }
    if ((uVar9 == 0) &&
       (local_218 = pfVar17, local_210 = (float *)(longlong)iVar1,
       bVar7 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
    iVar1 = (this->StaticIncidentElementsOffsets).ArrayNum;
    pFVar14 = (this->StaticIncidentElements).AllocatorInstance.Data;
    uVar9 = 0;
    if ((int)uVar21 < iVar1) {
      uVar9 = local_1d8;
    }
    if ((uVar9 == 0) &&
       (local_218 = pfVar20, local_210 = (float *)(longlong)iVar1,
       bVar7 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
    local_1e0 = (this->StaticIncidentElementsOffsets).AllocatorInstance.Data;
    iVar1 = *(int *)(pFVar14 + (longlong)pfVar15 * 0x10 + 8);
    uVar9 = 0;
    if ((int)uVar19 < iVar1) {
      uVar9 = uVar16;
    }
    if (uVar9 == 0) {
      local_218 = (float *)(longlong)(int)uVar19;
      local_210 = (float *)(longlong)iVar1;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
    }
    pFVar13 = local_1c0;
    local_180[0] = *(int *)((longlong)local_1e8 + *(longlong *)(pFVar14 + (longlong)pfVar15 * 0x10))
                   - *(int *)(local_1e0 + (longlong)pfVar20 * 4);
    local_188[0] = local_1f0;
    local_190[0] = param_2;
    UE::Core::Private::Function::CheckCallable(*(void **)local_1c0);
    pcVar2 = *(code **)pFVar13;
    pFVar14 = *(FScriptContainerElement **)(pFVar13 + 0x28);
    if (*(FScriptContainerElement **)(pFVar13 + 0x28) == (FScriptContainerElement *)0x0) {
      pFVar14 = pFVar13 + 0x10;
    }
    uVar10 = (**(code **)(*(longlong *)pFVar14 + 8))();
    local_210 = &local_1b8;
    local_218 = local_190;
    local_208 = local_138;
    (*pcVar2)(uVar10,local_1a8,local_180,local_188);
    pfVar17 = (float *)(ulonglong)(uint)local_1f4;
    uVar19 = uVar19 + 1;
    local_1e8 = (float *)((longlong)local_1e8 + 4);
  }
  pcVar2 = (code *)swi(3);
  uVar8 = (*pcVar2)();
  return (bool)uVar8;
}

// Init @ 143a714c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::Init
          (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *this,float param_1,
          FSolverParticles *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_ChaosGSMainConstraint_Init> FVar14;
  FName FVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  FColor_u_0 local_res20 [2];
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  
  Resize(this,(int)param_2->_padding_);
  FVar14 = StatPtr_STAT_ChaosGSMainConstraint_Init;
  if (StatPtr_STAT_ChaosGSMainConstraint_Init ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosGSMainConstraint_Init>)0x0) {
    pFVar13 = ::FName::FName(&local_50,"STAT_ChaosGSMainConstraint_Init");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_ChaosGSMainConstraint_Init>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosGSMainConstraint_Init,
                        *pFVar13,L"Chaos.Deformable.GSMainConstraint.Init","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar14;
  bVar8 = false;
  bVar7 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  bVar20 = false;
  bVar9 = false;
  if ((FVar15.ComparisonIndex.Value.Value != 0) || (FVar15.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar8 = false;
      bVar7 = true;
      bVar20 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_60.ComparisonIndex.Value = FVar15.ComparisonIndex.Value.Value;
        local_60.Number = FVar15.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_60,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Deformable\\GaussSeidelMainConstraint.h"
                   ,0xed);
        bVar8 = true;
        bVar7 = true;
        bVar20 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_58 = FVar15;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar9 = true;
      goto LAB_143a7164f;
    }
  }
  bVar8 = bVar20;
  bVar7 = bVar9;
  bVar9 = false;
  local_58 = local_48;
  FVar15 = local_48;
LAB_143a7164f:
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::Init(float,Chaos::Softs::FSolverParticles_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId237,"STAT_ChaosGSMainConstraint_Init",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Deformable\\GaussSeidelMainConstraint.h"
               ,0xed);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::Init(float,Chaos::Softs::FSolverParticles_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId237);
  }
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->TransientConstraints,0,Default);
  uVar16 = 0;
  if (0 < (this->TransientIncidentElements).ArrayNum) {
    lVar18 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar16 < (this->TransientIncidentElements).ArrayNum) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar17 = (this->TransientIncidentElements).AllocatorInstance.Data + lVar18;
      iVar2 = *(int *)&pFVar17[8].field_0x0;
      pFVar5 = pFVar17 + 8;
      if (iVar2 < 0) {
        iVar11 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,-iVar2,(ForAnyElementType *)pFVar17,(int *)pFVar5,
                            (int *)(pFVar17 + 0xc));
        memset((void *)(*(longlong *)&pFVar17->field_0x0 + (longlong)iVar11 * 4),0,
               (longlong)-iVar2 << 2);
      }
      else if (0 < iVar2) {
        *(int *)&pFVar5->field_0x0 = *(int *)&pFVar5->field_0x0 - iVar2;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)pFVar17,*(int *)&pFVar5->field_0x0,
                   (int *)(pFVar17 + 0xc));
      }
      uVar12 = 0;
      if ((int)uVar16 < (this->TransientIncidentElementsLocal).ArrayNum) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar17 = (this->TransientIncidentElementsLocal).AllocatorInstance.Data + lVar18;
      iVar2 = *(int *)&pFVar17[8].field_0x0;
      pFVar5 = pFVar17 + 8;
      if (iVar2 < 0) {
        iVar11 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,-iVar2,(ForAnyElementType *)pFVar17,(int *)pFVar5,
                            (int *)(pFVar17 + 0xc));
        memset((void *)(*(longlong *)&pFVar17->field_0x0 + (longlong)iVar11 * 4),0,
               (longlong)-iVar2 << 2);
      }
      else if (0 < iVar2) {
        *(int *)&pFVar5->field_0x0 = *(int *)&pFVar5->field_0x0 - iVar2;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)pFVar17,*(int *)&pFVar5->field_0x0,
                   (int *)(pFVar17 + 0xc));
      }
      uVar16 = uVar16 + 1;
      lVar18 = lVar18 + 0x10;
    } while ((int)uVar16 < (this->TransientIncidentElements).ArrayNum);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->TransientIncidentElementsOffsets,0,Default)
  ;
  if ((this->bDoQuasistatics == false) && (uVar16 = 0, 0 < (this->xtilde).ArrayNum)) {
    lVar19 = 0;
    lVar18 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar16 < *(int *)&(param_2->MPAndInvM).field_0x10) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar4 = *(longlong *)&(param_2->MPAndInvM).field_0x8;
      uVar1 = *(undefined8 *)(lVar18 + lVar4);
      uVar3 = *(undefined4 *)(lVar18 + 8 + lVar4);
      uVar12 = 0;
      if ((int)uVar16 < (this->xtilde).ArrayNum) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this->xtilde).AllocatorInstance.Data;
      uVar16 = uVar16 + 1;
      lVar18 = lVar18 + 0x10;
      *(undefined8 *)(pFVar5 + lVar19) = uVar1;
      *(undefined4 *)(pFVar5 + lVar19 + 8) = uVar3;
      lVar19 = lVar19 + 0xc;
      FVar15 = local_58;
    } while ((int)uVar16 < (this->xtilde).ArrayNum);
  }
  this->CurrentIt = 0;
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar15,CycleScopeEnd);
  }
  return;
}

// InitDynamicColor @ 143a72c30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::InitDynamicColor
          (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_ChaosGSMainConstraint_InitDynamicColor> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  bool bVar11;
  LARGE_INTEGER local_res8;
  FName local_res18 [2];
  FStatMessage local_48;
  
  FVar10.Value = 0;
  FVar7 = StatPtr_STAT_ChaosGSMainConstraint_InitDynamicColor;
  if (StatPtr_STAT_ChaosGSMainConstraint_InitDynamicColor ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosGSMainConstraint_InitDynamicColor>)0x0) {
    pFVar6 = ::FName::FName(local_res18,"STAT_ChaosGSMainConstraint_InitDynamicColor");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_ChaosGSMainConstraint_InitDynamicColor>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_ChaosGSMainConstraint_InitDynamicColor,*pFVar6,
                       L"Chaos.Deformable.GSMainConstraint.InitDynamicColor","STATGROUP_Chaos",
                       "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar7;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar5 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar5 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar5;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Deformable\\GaussSeidelMainConstraint.h"
                   ,0xe3);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar8.Value;
      local_res8.s.HighPart = uVar5;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_143a72d98;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_143a72d98:
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::InitDynamicColor(Chaos::Softs::FSolverParticles_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId227,"STAT_ChaosGSMainConstraint_InitDynamicColor",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Deformable\\GaussSeidelMainConstraint.h"
               ,0xe3);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::InitDynamicColor(Chaos::Softs::FSolverParticles_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId227);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->ParticleColors,&this->StaticParticleColors);
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
            (&this->ParticlesPerColor,&this->StaticParticlesPerColor);
  ComputeExtraNodalColoring<float>
            (&this->StaticConstraints,&this->DynamicConstraints,
             (TDynamicParticles<float,3> *)param_1,&this->StaticIncidentElements,
             &this->TransientIncidentElements,&this->ParticleColors,&this->ParticlesPerColor);
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// InitStaticColor @ 143a72f30

void __thiscall
Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::InitStaticColor
          (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1,TPBDActiveView<Chaos::Softs::FSolverParticles> *param_2)

{
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_18;
  
  pTVar3 = ComputeNodalColoring<float,Chaos::Softs::FSolverParticles>
                     (&local_18,&this->StaticConstraints,(TDynamicParticles<float,3> *)param_1,0,
                      (int)param_1->_padding_,&this->StaticIncidentElements,
                      &this->StaticIncidentElementsLocal,param_2,&this->StaticParticleColors);
  pTVar1 = &this->StaticParticlesPerColor;
  if (pTVar1 != pTVar3) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar1->AllocatorInstance).Data,
               (this->StaticParticlesPerColor).ArrayNum);
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->StaticParticlesPerColor).ArrayNum = pTVar3->ArrayNum;
    (this->StaticParticlesPerColor).ArrayMax = pTVar3->ArrayMax;
    pTVar3->ArrayNum = 0;
    pTVar3->ArrayMax = 0;
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_18.AllocatorInstance.Data,
             local_18.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_18.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->ParticleColors,&this->StaticParticleColors);
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
            (&this->ParticlesPerColor,pTVar1);
  return;
}

// InitTransientColor @ 143a73020

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::InitTransientColor
          (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_ChaosGSMainConstraint_InitTransientColor> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  bool bVar11;
  LARGE_INTEGER local_res8;
  FName local_res18 [2];
  FStatMessage local_48;
  
  FVar10.Value = 0;
  FVar7 = StatPtr_STAT_ChaosGSMainConstraint_InitTransientColor;
  if (StatPtr_STAT_ChaosGSMainConstraint_InitTransientColor ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosGSMainConstraint_InitTransientColor>)0x0) {
    pFVar6 = ::FName::FName(local_res18,"STAT_ChaosGSMainConstraint_InitTransientColor");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_ChaosGSMainConstraint_InitTransientColor>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_ChaosGSMainConstraint_InitTransientColor,*pFVar6,
                       L"Chaos.Deformable.GSMainConstraint.InitTransientColor","STATGROUP_Chaos",
                       "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar7;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar5 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar5 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar5;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Deformable\\GaussSeidelMainConstraint.h"
                   ,0xdb);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar8.Value;
      local_res8.s.HighPart = uVar5;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_143a73188;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_143a73188:
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::InitTransientColor(Chaos::Softs::FSolverParticles_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId219,"STAT_ChaosGSMainConstraint_InitTransientColor",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Deformable\\GaussSeidelMainConstraint.h"
               ,0xdb);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::InitTransientColor(Chaos::Softs::FSolverParticles_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId219);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->ParticleColors,&this->StaticParticleColors);
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
            (&this->ParticlesPerColor,&this->StaticParticlesPerColor);
  ComputeExtraNodalColoring<float>
            (&this->StaticConstraints,&this->DynamicConstraints,&this->TransientConstraints,
             (TDynamicParticles<float,3> *)param_1,&this->StaticIncidentElements,
             &this->DynamicIncidentElements,&this->TransientIncidentElements,&this->ParticleColors,
             &this->ParticlesPerColor);
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// ResetDynamicConstraints @ 143a8fa30

void __thiscall
Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
ResetDynamicConstraints(FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->DynamicConstraints).AllocatorInstance.Data,(this->DynamicConstraints).ArrayNum);
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  CopyToEmpty<TArray<int,TSizedDefaultAllocator<32>_>,int>
            (&this->DynamicConstraints,(TArray<int,TSizedDefaultAllocator<32>_> *)0x0,0,
             (this->DynamicConstraints).ArrayMax);
  uVar7 = 0;
  if (0 < (this->DynamicIncidentElements).ArrayNum) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->DynamicIncidentElements).ArrayNum) {
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
      pFVar8 = (this->DynamicIncidentElements).AllocatorInstance.Data + lVar9;
      iVar2 = *(int *)&pFVar8[8].field_0x0;
      pFVar1 = pFVar8 + 8;
      if (iVar2 < 0) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,-iVar2,(ForAnyElementType *)pFVar8,(int *)pFVar1,
                           (int *)(pFVar8 + 0xc));
        memset((void *)(*(longlong *)&pFVar8->field_0x0 + (longlong)iVar6 * 4),0,
               (longlong)-iVar2 << 2);
      }
      else if (0 < iVar2) {
        *(int *)&pFVar1->field_0x0 = *(int *)&pFVar1->field_0x0 - iVar2;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)pFVar8,*(int *)&pFVar1->field_0x0,(int *)(pFVar8 + 0xc))
        ;
      }
      uVar5 = 0;
      if ((int)uVar7 < (this->DynamicIncidentElementsLocal).ArrayNum) {
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
      pFVar8 = (this->DynamicIncidentElementsLocal).AllocatorInstance.Data + lVar9;
      iVar2 = *(int *)&pFVar8[8].field_0x0;
      pFVar1 = pFVar8 + 8;
      if (iVar2 < 0) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,-iVar2,(ForAnyElementType *)pFVar8,(int *)pFVar1,
                           (int *)(pFVar8 + 0xc));
        memset((void *)(*(longlong *)&pFVar8->field_0x0 + (longlong)iVar6 * 4),0,
               (longlong)-iVar2 << 2);
      }
      else if (0 < iVar2) {
        *(int *)&pFVar1->field_0x0 = *(int *)&pFVar1->field_0x0 - iVar2;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)pFVar8,*(int *)&pFVar1->field_0x0,(int *)(pFVar8 + 0xc))
        ;
      }
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar7 < (this->DynamicIncidentElements).ArrayNum);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&this->DynamicIncidentElementsOffsets,(int *)0x0,0,
             (this->DynamicIncidentElementsOffsets).ArrayMax);
  return;
}

// Resize @ 143a903e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::Resize
          (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *this,int param_1)

{
  TVector<float,3> local_18;
  
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNum(&this->xtilde,param_1,Default)
  ;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->StaticIncidentElements,param_1,Default);
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->StaticIncidentElementsLocal,param_1,Default);
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->DynamicIncidentElements,param_1,Default);
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->DynamicIncidentElementsLocal,param_1,Default);
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->TransientIncidentElements,param_1,Default);
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->TransientIncidentElementsLocal,param_1,Default);
  local_18._0_8_ = 0;
  local_18._8_4_ = 0;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::Init(&this->X_k_1,&local_18,param_1);
  local_18._0_8_ = 0;
  local_18._8_4_ = 0;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::Init(&this->X_k,&local_18,param_1);
  return;
}

// operator() @ 143b02400

void __thiscall
`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ApplyCG'::__l2::
<lambda_1>::operator()
          (void *this,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar7 = 0;
  uVar8 = uVar7;
  uVar9 = uVar7;
  if (0 < param_1->ArrayNum) {
    do {
      lVar1 = *(longlong *)this;
      uVar6 = (uint)uVar7;
      uVar5 = 0;
      if ((int)uVar6 < *(int *)(lVar1 + 0x98)) {
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
      if (*(float *)(*(longlong *)(lVar1 + 0x90) + uVar8) == 0.0) {
        uVar5 = 0;
        if ((int)uVar6 < param_1->ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
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
        pFVar2 = (param_1->AllocatorInstance).Data;
        *(undefined8 *)(pFVar2 + uVar9) = 0;
        *(undefined4 *)(pFVar2 + uVar9 + 8) = 0;
      }
      uVar7 = (ulonglong)(uVar6 + 1);
      uVar8 = uVar8 + 4;
      uVar9 = uVar9 + 0xc;
    } while ((int)(uVar6 + 1) < param_1->ArrayNum);
  }
  return;
}

// operator() @ 143b09280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
ComputeNewtonResiduals'::__l7::<lambda_1>::operator()(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  uint uVar14;
  undefined8 uVar15;
  uint uVar16;
  longlong *plVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  uint uVar27;
  float fVar28;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  uint local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  longlong local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  longlong local_128;
  undefined4 local_120 [2];
  uint local_118 [2];
  undefined4 local_110 [2];
  undefined4 local_108 [2];
  int local_100 [2];
  undefined4 local_f8 [2];
  undefined4 local_f0 [2];
  int local_e8 [2];
  longlong local_e0;
  longlong local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  uVar19 = *(uint *)((longlong)this + 0x14);
  puVar22 = (undefined8 *)(longlong)(int)uVar19;
  puVar23 = (undefined8 *)0x0;
  lVar3 = *(longlong *)this;
  uVar27 = 0;
  iVar2 = *(int *)(lVar3 + 0x148);
  uVar16 = uVar27;
  if ((int)uVar19 < iVar2) {
    uVar16 = ~uVar19 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (local_198 = puVar22, local_190 = (undefined8 *)(longlong)iVar2,
     bVar13 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar3 = *(longlong *)(lVar3 + 0x140);
  iVar2 = *(int *)(lVar3 + 8 + (longlong)puVar22 * 0x10);
  uVar19 = uVar27;
  if (param_1 < iVar2) {
    uVar19 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (local_198 = (undefined8 *)(longlong)param_1, local_190 = (undefined8 *)(longlong)iVar2,
     bVar13 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar19 = *(uint *)(*(longlong *)(lVar3 + (longlong)puVar22 * 0x10) + (longlong)param_1 * 4);
  puVar22 = (undefined8 *)(longlong)(int)uVar19;
  local_178 = uVar19;
  fVar28 = Chaos::TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)((longlong)this + 0x20),uVar19);
  if (fVar28 != 0.0) {
    plVar17 = *(longlong **)((longlong)this + 0x18);
    local_16c = ~uVar19 >> 0x1f;
    lVar3 = *(longlong *)this;
    local_c8 = 0;
    local_b8 = 0;
    local_a8 = 0;
    uStack_c0 = 0;
    uStack_b0 = 0;
    uStack_a0 = 0;
    local_98 = ___xmm_3f800000000000000000000000000000;
    uStack_90 = _UNK_150689648;
    iVar2 = (int)plVar17[1];
    uVar21 = 0;
    uVar16 = uVar21;
    if ((int)uVar19 < iVar2) {
      uVar16 = local_16c;
    }
    if ((uVar16 == 0) &&
       (local_198 = puVar22, local_190 = (undefined8 *)(longlong)iVar2,
       bVar13 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar18 = *plVar17;
    local_120[0] = *(undefined4 *)((longlong)this + 0x10);
    uVar4 = *(undefined8 *)((longlong)this + 0x20);
    local_118[0] = local_178;
    local_148 = puVar22;
    UE::Core::Private::Function::CheckCallable(*(void **)(lVar3 + 0xa0));
    pcVar5 = *(code **)(lVar3 + 0xa0);
    plVar17 = (longlong *)(lVar3 + 0xb0);
    if (*(longlong **)(lVar3 + 200) != (longlong *)0x0) {
      plVar17 = *(longlong **)(lVar3 + 200);
    }
    uVar15 = (**(code **)(*plVar17 + 8))();
    local_190 = &local_c8;
    local_198 = (undefined8 *)(lVar18 + (longlong)puVar22 * 0xc);
    (*pcVar5)(uVar15,uVar4,local_118,local_120);
    local_174 = 0;
    local_158 = (undefined8 *)((longlong)local_148 << 4);
    local_150 = 0;
    puVar22 = puVar23;
    puVar24 = puVar23;
    puVar26 = puVar23;
    while( true ) {
      puVar25 = local_158;
      lVar3 = *(longlong *)this;
      iVar2 = *(int *)(lVar3 + 0x28);
      uVar19 = uVar21;
      if ((int)local_178 < iVar2) {
        uVar19 = local_16c;
      }
      if (uVar19 == 0) {
        local_198 = local_148;
        local_190 = (undefined8 *)(longlong)iVar2;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (*(int *)(*(longlong *)(lVar3 + 0x20) + 8 + (longlong)puVar25) <= (int)(uint)puVar24)
      break;
      uVar19 = (uint)puVar26;
      local_168 = ~(uint)puVar24 >> 0x1f;
      while( true ) {
        uVar19 = uVar19 + 1;
        lVar3 = *(longlong *)this;
        iVar2 = *(int *)(lVar3 + 0x28);
        uVar16 = uVar21;
        if ((int)local_178 < iVar2) {
          uVar16 = local_16c;
        }
        if ((uVar16 == 0) &&
           (local_198 = local_148, local_190 = (undefined8 *)(longlong)iVar2,
           bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar18 = *(longlong *)this;
        lVar3 = *(longlong *)(lVar3 + 0x20);
        iVar2 = *(int *)(lVar18 + 0x158);
        uVar16 = uVar21;
        if ((int)uVar19 < iVar2) {
          uVar16 = ~uVar19 >> 0x1f;
        }
        if (uVar16 == 0) {
          local_198 = (undefined8 *)(longlong)(int)uVar19;
          local_190 = (undefined8 *)(longlong)iVar2;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        lVar18 = *(longlong *)(lVar18 + 0x150);
        iVar2 = *(int *)((longlong)local_158 + 8 + lVar3);
        uVar20 = 0;
        uVar16 = uVar20;
        if ((int)local_174 < iVar2) {
          uVar16 = local_168;
        }
        if ((uVar16 == 0) &&
           (local_198 = (undefined8 *)(longlong)(int)local_174,
           local_190 = (undefined8 *)(longlong)iVar2,
           bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar16 = (uint)puVar26;
        if ((*(int *)(local_150 + *(longlong *)((longlong)local_158 + lVar3)) <
             *(int *)(lVar18 + 4 + (longlong)puVar22 * 4)) ||
           (*(int *)(*(longlong *)this + 0x158) + -1 <= (int)uVar16)) break;
        puVar26 = (undefined8 *)(ulonglong)(uVar16 + 1);
        puVar22 = (undefined8 *)((longlong)puVar22 + 1);
      }
      lVar3 = *(longlong *)this;
      iVar2 = *(int *)(lVar3 + 0xd8);
      uVar19 = uVar20;
      if ((int)uVar16 < iVar2) {
        uVar19 = ~uVar16 >> 0x1f;
      }
      if (uVar19 == 0) {
        local_198 = (undefined8 *)(longlong)(int)uVar16;
        local_190 = (undefined8 *)(longlong)iVar2;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar19 = local_178;
      puVar24 = (undefined8 *)(longlong)(int)local_178;
      local_130 = (undefined8 *)((longlong)puVar22 * 0x30 + *(longlong *)(lVar3 + 0xd0));
      plVar17 = *(longlong **)((longlong)this + 0x18);
      iVar2 = (int)plVar17[1];
      uVar14 = uVar20;
      if ((int)local_178 < iVar2) {
        uVar14 = local_16c;
      }
      if ((uVar14 == 0) &&
         (local_198 = puVar24, local_190 = (undefined8 *)(longlong)iVar2,
         bVar13 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar3 = *(longlong *)this;
      uVar1 = *(undefined4 *)((longlong)this + 0x10);
      local_140 = (undefined8 *)(*plVar17 + (longlong)puVar24 * 0xc);
      iVar2 = *(int *)(lVar3 + 0x38);
      uVar14 = uVar20;
      if ((int)uVar19 < iVar2) {
        uVar14 = local_16c;
      }
      if ((uVar14 == 0) &&
         (local_198 = puVar24, local_190 = (undefined8 *)(longlong)iVar2,
         bVar13 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar24 = local_158;
      uVar19 = local_174;
      local_160 = *(undefined8 **)(lVar3 + 0x30);
      puVar25 = (undefined8 *)(longlong)(int)local_174;
      iVar2 = *(int *)((longlong)local_160 + 8 + (longlong)local_158);
      uVar14 = uVar20;
      if ((int)local_174 < iVar2) {
        uVar14 = ~local_174 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (local_198 = puVar25, local_190 = (undefined8 *)(longlong)iVar2,
         bVar13 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_168 = *(undefined4 *)
                   (local_150 + *(longlong *)((longlong)local_160 + (longlong)puVar24));
      local_160 = *(undefined8 **)this;
      uVar14 = uVar20;
      if ((int)local_178 < *(int *)((longlong)local_160 + 0x28)) {
        uVar14 = local_16c;
      }
      if (uVar14 == 0) {
        local_198 = local_148;
        local_190 = (undefined8 *)(longlong)*(int *)((longlong)local_160 + 0x28);
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_138 = *(undefined8 **)((longlong)local_160 + 0x20);
      local_160 = *(undefined8 **)this;
      uVar14 = uVar20;
      if ((int)uVar16 < *(int *)((longlong)local_160 + 0x158)) {
        uVar14 = ~uVar16 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (local_198 = puVar22,
         local_190 = (undefined8 *)(longlong)*(int *)((longlong)local_160 + 0x158),
         bVar13 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar6 = local_138;
      local_160 = *(undefined8 **)((longlong)local_160 + 0x150);
      iVar2 = *(int *)((longlong)puVar24 + 8 + (longlong)local_138);
      if ((int)uVar19 < iVar2) {
        uVar20 = ~uVar19 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (local_198 = puVar25, local_190 = (undefined8 *)(longlong)iVar2,
         bVar13 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar4 = *(undefined8 *)((longlong)this + 0x20);
      local_100[0] = *(int *)(*(longlong *)((longlong)puVar24 + (longlong)puVar6) + local_150) -
                     *(int *)((longlong)local_160 + (longlong)puVar22 * 4);
      local_108[0] = local_168;
      local_110[0] = uVar1;
      UE::Core::Private::Function::CheckCallable((void *)*local_130);
      pcVar5 = (code *)*local_130;
      plVar17 = (longlong *)local_130[5];
      if ((longlong *)local_130[5] == (longlong *)0x0) {
        plVar17 = local_130 + 2;
      }
      uVar15 = (**(code **)(*plVar17 + 8))();
      local_188 = &local_c8;
      local_190 = local_140;
      local_198 = (undefined8 *)local_110;
      (*pcVar5)(uVar15,uVar4,local_100,local_108);
      local_174 = uVar19 + 1;
      puVar24 = (undefined8 *)(ulonglong)local_174;
      local_150 = local_150 + 4;
    }
    local_138 = (undefined8 *)(longlong)(int)local_178;
    local_168 = 0;
    local_170 = ~local_178 >> 0x1f;
    local_174 = 0;
    local_d8 = (longlong)local_138 * 3;
    local_158 = (undefined8 *)(longlong)(int)local_178;
    local_128 = (longlong)local_148 << 4;
    local_140 = (undefined8 *)0x0;
    puVar22 = puVar23;
    puVar24 = puVar23;
    while( true ) {
      puVar26 = local_138;
      lVar3 = *(longlong *)this;
      iVar2 = *(int *)(lVar3 + 0x58);
      uVar16 = 0;
      uVar19 = uVar16;
      if ((int)local_178 < iVar2) {
        uVar19 = local_170;
      }
      puVar25 = local_158;
      if ((uVar19 == 0) &&
         (local_198 = local_138, local_190 = (undefined8 *)(longlong)iVar2, local_158 = local_138,
         bVar13 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         puVar25 = puVar26, bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar12 = uStack_90;
      uVar11 = local_98;
      uVar10 = uStack_a0;
      uVar9 = local_a8;
      uVar8 = uStack_b0;
      uVar7 = local_b8;
      uVar15 = uStack_c0;
      uVar4 = local_c8;
      uVar19 = (uint)puVar23;
      if (*(int *)(*(longlong *)(lVar3 + 0x50) + 8 + local_128) <= (int)uVar19) break;
      puVar23 = (undefined8 *)(longlong)(int)uVar19;
      uVar21 = (uint)puVar24;
      local_160 = (undefined8 *)((longlong)puVar25 << 4);
      local_150 = CONCAT44(local_150._4_4_,~uVar19 >> 0x1f);
      local_130 = puVar23;
      while( true ) {
        uVar21 = uVar21 + 1;
        lVar3 = *(longlong *)this;
        iVar2 = *(int *)(lVar3 + 0x58);
        uVar19 = uVar16;
        if ((int)local_178 < iVar2) {
          uVar19 = local_170;
        }
        puVar24 = local_130;
        if ((uVar19 == 0) &&
           (local_198 = puVar25, local_190 = (undefined8 *)(longlong)iVar2,
           bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , puVar24 = puVar23, bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        puVar23 = puVar24;
        lVar3 = *(longlong *)(lVar3 + 0x50);
        lVar18 = *(longlong *)this;
        iVar2 = *(int *)((longlong)local_160 + 8 + lVar3);
        uVar19 = uVar16;
        if ((int)local_174 < iVar2) {
          uVar19 = (uint)local_150;
        }
        if ((uVar19 == 0) &&
           (local_198 = puVar23, local_190 = (undefined8 *)(longlong)iVar2,
           bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar2 = *(int *)(lVar18 + 0x168);
        lVar3 = *(longlong *)((longlong)local_160 + lVar3);
        uVar19 = uVar16;
        if ((int)uVar21 < iVar2) {
          uVar19 = ~uVar21 >> 0x1f;
        }
        if (uVar19 == 0) {
          local_198 = (undefined8 *)(longlong)(int)uVar21;
          local_190 = (undefined8 *)(longlong)iVar2;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        uVar19 = local_168;
        puVar24 = (undefined8 *)(ulonglong)local_168;
        if ((*(int *)(lVar3 + (longlong)puVar23 * 4) <
             *(int *)(*(longlong *)(lVar18 + 0x160) + 4 + (longlong)puVar22 * 4)) ||
           (*(int *)(*(longlong *)this + 0x168) + -1 <= (int)local_168)) break;
        local_168 = local_168 + 1;
        puVar22 = (undefined8 *)((longlong)puVar22 + 1);
        puVar25 = local_158;
      }
      lVar3 = *(longlong *)this;
      uVar20 = ~local_168;
      iVar2 = *(int *)(lVar3 + 0xf8);
      uVar21 = uVar16;
      if ((int)local_168 < iVar2) {
        uVar21 = uVar20 >> 0x1f;
      }
      if (uVar21 == 0) {
        local_198 = (undefined8 *)(longlong)(int)local_168;
        local_190 = (undefined8 *)(longlong)iVar2;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      puVar23 = (undefined8 *)((longlong)puVar22 * 0x30 + *(longlong *)(lVar3 + 0xf0));
      plVar17 = *(longlong **)((longlong)this + 0x18);
      iVar2 = (int)plVar17[1];
      uVar21 = uVar16;
      if ((int)local_178 < iVar2) {
        uVar21 = local_170;
      }
      if (uVar21 == 0) {
        local_198 = local_138;
        local_190 = (undefined8 *)(longlong)iVar2;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar3 = *(longlong *)this;
      uVar1 = *(undefined4 *)((longlong)this + 0x10);
      local_160 = (undefined8 *)(*plVar17 + local_d8 * 4);
      iVar2 = *(int *)(lVar3 + 0x68);
      uVar21 = uVar16;
      if ((int)local_178 < iVar2) {
        uVar21 = local_170;
      }
      if (uVar21 == 0) {
        local_198 = local_138;
        local_190 = (undefined8 *)(longlong)iVar2;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar3 = *(longlong *)(lVar3 + 0x60);
      iVar2 = *(int *)(local_128 + 8 + lVar3);
      uVar21 = uVar16;
      if ((int)local_174 < iVar2) {
        uVar21 = ~local_174 >> 0x1f;
      }
      if (uVar21 == 0) {
        local_198 = local_130;
        local_190 = (undefined8 *)(longlong)iVar2;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar18 = *(longlong *)this;
      iVar2 = *(int *)(lVar18 + 0x58);
      local_150 = CONCAT44(local_150._4_4_,
                           *(undefined4 *)((longlong)local_140 + *(longlong *)(local_128 + lVar3)));
      uVar21 = uVar16;
      if ((int)local_178 < iVar2) {
        uVar21 = local_170;
      }
      if (uVar21 == 0) {
        local_198 = local_138;
        local_190 = (undefined8 *)(longlong)iVar2;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_e0 = *(longlong *)(lVar18 + 0x50);
      lVar3 = *(longlong *)this;
      iVar2 = *(int *)(lVar3 + 0x168);
      uVar21 = uVar16;
      if ((int)uVar19 < iVar2) {
        uVar21 = uVar20 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (local_198 = puVar22, local_190 = (undefined8 *)(longlong)iVar2,
         bVar13 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar18 = local_e0;
      lVar3 = *(longlong *)(lVar3 + 0x160);
      iVar2 = *(int *)(local_128 + 8 + local_e0);
      if ((int)local_174 < iVar2) {
        uVar16 = ~local_174 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (local_198 = (undefined8 *)(longlong)(int)local_174,
         local_190 = (undefined8 *)(longlong)iVar2,
         bVar13 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_e8[0] = *(int *)((longlong)local_140 + *(longlong *)(local_128 + lVar18)) -
                    *(int *)(lVar3 + (longlong)puVar22 * 4);
      uVar4 = *(undefined8 *)((longlong)this + 0x20);
      local_f0[0] = (uint)local_150;
      local_f8[0] = uVar1;
      UE::Core::Private::Function::CheckCallable((void *)*puVar23);
      pcVar5 = (code *)*puVar23;
      plVar17 = (longlong *)puVar23[5];
      if ((longlong *)puVar23[5] == (longlong *)0x0) {
        plVar17 = puVar23 + 2;
      }
      uVar15 = (**(code **)(*plVar17 + 8))();
      local_188 = &local_c8;
      local_190 = local_160;
      local_198 = (undefined8 *)local_f8;
      (*pcVar5)(uVar15,uVar4,local_e8,local_f0);
      local_174 = local_174 + 1;
      puVar23 = (undefined8 *)(ulonglong)local_174;
      local_140 = (undefined8 *)((longlong)local_140 + 4);
    }
    plVar17 = (longlong *)**(longlong **)((longlong)this + 8);
    if (plVar17 != (longlong *)0x0) {
      local_190 = (undefined8 *)(longlong)(int)plVar17[1];
      if ((int)local_178 < (int)plVar17[1]) {
        uVar27 = local_16c;
      }
      if (uVar27 == 0) {
        local_198 = local_148;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar3 = *plVar17;
      lVar18 = (longlong)(int)local_178 * 0x40;
      *(undefined8 *)(lVar18 + lVar3) = uVar4;
      ((undefined8 *)(lVar18 + lVar3))[1] = uVar15;
      puVar22 = (undefined8 *)(lVar18 + 0x10 + lVar3);
      *puVar22 = uVar7;
      puVar22[1] = uVar8;
      puVar22 = (undefined8 *)(lVar18 + 0x20 + lVar3);
      *puVar22 = uVar9;
      puVar22[1] = uVar10;
      puVar22 = (undefined8 *)(lVar18 + 0x30 + lVar3);
      *puVar22 = uVar11;
      puVar22[1] = uVar12;
    }
  }
  return;
}

// operator() @ 143b0c6d0

void __thiscall
`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ApplyCG'::__l4::
<lambda_2>::operator()
          (void *this,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *_Src;
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  TVector<float,3> local_68;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  code *local_48;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> **local_40;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_38;
  undefined8 local_30;
  ForAnyElementType *local_28;
  undefined4 local_20;
  
  local_50 = param_2->ArrayNum;
  lVar9 = (longlong)local_50;
  _Src = (param_2->AllocatorInstance).Data;
  local_58.Data = (FScriptContainerElement *)0x0;
  if (local_50 == 0) {
    local_4c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,local_50,0,&local_58,local_50,&local_4c);
    memcpy(local_58.Data,_Src,lVar9 * 0xc);
  }
  puVar1 = *(undefined8 **)((longlong)this + 8);
  UE::Core::Private::Function::CheckCallable((void *)*puVar1);
  pcVar2 = (code *)*puVar1;
  plVar8 = puVar1 + 2;
  if ((longlong *)puVar1[5] != (longlong *)0x0) {
    plVar8 = (longlong *)puVar1[5];
  }
  uVar5 = (**(code **)(*plVar8 + 8))();
  (*pcVar2)(uVar5,&local_58);
  local_68._0_8_ = 0;
  local_68._8_4_ = 0;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::Init(param_1,&local_68,local_50);
  lVar9 = *(longlong *)this;
  uVar10 = 0;
  if (0 < *(int *)(lVar9 + 0x218)) {
    lVar11 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar10 < *(int *)(lVar9 + 0x218)) {
        uVar4 = ~uVar10 >> 0x1f;
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
      lVar9 = *(longlong *)(lVar9 + 0x210);
      uVar5 = *(undefined8 *)((longlong)this + 0x18);
      UE::Core::Private::Function::CheckCallable(*(void **)(lVar11 + lVar9));
      pcVar2 = *(code **)(lVar11 + lVar9);
      plVar6 = (longlong *)(lVar9 + 0x10 + lVar11);
      plVar8 = (longlong *)plVar6[3];
      if (plVar8 == (longlong *)0x0) {
        plVar8 = plVar6;
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      (*pcVar2)(uVar7,uVar5,&local_58,param_1);
      lVar9 = *(longlong *)this;
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x30;
    } while ((int)uVar10 < *(int *)(lVar9 + 0x218));
  }
  local_30 = *(undefined8 *)((longlong)this + 0x18);
  local_28 = &local_58;
  local_20 = **(undefined4 **)((longlong)this + 0x10);
  local_40 = &local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<``Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ApplyCG'::__l4::<lambda_2>::operator()'::__l2::<lambda_1>,void,int>
             ::Call;
  local_38 = param_1;
  Chaos::PhysicsParallelFor(param_1->ArrayNum,(TFunctionRef<void___cdecl(int)> *)&local_48,false);
  puVar1 = *(undefined8 **)((longlong)this + 8);
  UE::Core::Private::Function::CheckCallable((void *)*puVar1);
  pcVar2 = (code *)*puVar1;
  plVar8 = puVar1 + 2;
  if ((longlong *)puVar1[5] != (longlong *)0x0) {
    plVar8 = (longlong *)puVar1[5];
  }
  uVar5 = (**(code **)(*plVar8 + 8))();
  (*pcVar2)(uVar5,param_1);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return;
}

// operator() @ 143b0d2b0

void __thiscall
`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ApplyCG'::__l4::
<lambda_3>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<float,3> *pTVar6;
  longlong lVar7;
  
  plVar1 = *(longlong **)((longlong)this + 8);
  lVar7 = (longlong)param_1;
  uVar5 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *plVar1;
  pTVar6 = Chaos::Softs::FSolverParticles::P(*(FSolverParticles **)this,param_1);
  *(float *)pTVar6 = *(float *)pTVar6 - *(float *)(lVar2 + lVar7 * 0xc);
  *(float *)&pTVar6->field_0x4 = *(float *)&pTVar6->field_0x4 - *(float *)(lVar2 + 4 + lVar7 * 0xc);
  *(float *)&pTVar6->field_0x8 = *(float *)&pTVar6->field_0x8 - *(float *)(lVar2 + 8 + lVar7 * 0xc);
  return;
}

// AddAddInternalForceDifferentialsRange @ 143b0f490

int __thiscall
Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
AddAddInternalForceDifferentialsRange
          (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = &(this->AddInternalForceDifferentials).ArrayNum;
  iVar2 = *piVar1;
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,0x10,param_1,&(this->AddInternalForceDifferentials).AllocatorInstance,
                     piVar1,&(this->AddInternalForceDifferentials).ArrayMax);
  DefaultConstructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_const_&,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,int>
            ((this->AddInternalForceDifferentials).AllocatorInstance.Data + (longlong)iVar3 * 0x30,
             param_1);
  return iVar2;
}

// AddDynamicConstraintResidualAndHessianRange @ 143b0fc00

int __thiscall
Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
AddDynamicConstraintResidualAndHessianRange
          (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = &(this->AddDynamicConstraintResidualAndHessian).ArrayNum;
  iVar2 = *piVar1;
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,0x10,param_1,
                     &(this->AddDynamicConstraintResidualAndHessian).AllocatorInstance,piVar1,
                     &(this->AddDynamicConstraintResidualAndHessian).ArrayMax);
  DefaultConstructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&)>,int>
            ((this->AddDynamicConstraintResidualAndHessian).AllocatorInstance.Data +
             (longlong)iVar3 * 0x30,param_1);
  return iVar2;
}

// AddDynamicConstraints @ 143b0fc80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
AddDynamicConstraints
          (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *this,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_3,
          bool param_4)

{
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  void *_Src;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  int local_68;
  int local_64;
  longlong local_60;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_48;
  
  if ((param_4) && (bVar2 = IsClean(param_1,param_2,param_3), !bVar2)) {
    pTVar6 = Utilities::ComputeIncidentElements(&local_48,param_1,param_3);
    TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
              (param_2,pTVar6);
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_48.AllocatorInstance.Data,
               local_48.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_48.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  local_68 = (this->DynamicConstraints).ArrayNum;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator+=
            (&this->DynamicConstraints,param_1);
  iVar5 = param_2->ArrayNum;
  uVar13 = 0;
  if (0 < iVar5) {
    lVar11 = 0;
    local_60 = 0;
    do {
      lVar12 = local_60;
      uVar10 = ~uVar13 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar13 < iVar5) {
        uVar7 = uVar10;
      }
      if ((uVar7 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (0 < *(int *)((param_2->AllocatorInstance).Data + lVar11 + 8)) {
        uVar7 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar7 = uVar10;
        }
        if ((uVar7 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar8 = (param_2->AllocatorInstance).Data;
        local_58.Data = (FScriptContainerElement *)0x0;
        local_50 = *(int *)(pFVar8 + lVar11 + 8);
        lVar9 = (longlong)local_50;
        _Src = *(void **)(pFVar8 + lVar11);
        if (local_50 == 0) {
          local_4c = 0;
          iVar5 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_50,0,&local_58,local_50,&local_4c);
          memcpy(local_58.Data,_Src,lVar9 << 2);
          iVar5 = local_50;
        }
        uVar7 = 0;
        if (0 < iVar5) {
          lVar9 = 0;
          do {
            iVar4 = local_68;
            uVar3 = 0;
            if ((int)uVar7 < iVar5) {
              uVar3 = ~uVar7 >> 0x1f;
            }
            if ((uVar3 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            uVar7 = uVar7 + 1;
            *(int *)(local_58.Data + lVar9) = *(int *)(local_58.Data + lVar9) + iVar4;
            lVar9 = lVar9 + 4;
            lVar12 = local_60;
            iVar5 = local_50;
          } while ((int)uVar7 < local_50);
        }
        uVar7 = 0;
        if ((int)uVar13 < (this->DynamicIncidentElements).ArrayNum) {
          uVar7 = uVar10;
        }
        if ((uVar7 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , iVar5 = local_50, bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar8 = (this->DynamicIncidentElements).AllocatorInstance.Data + lVar11;
        if ((pFVar8 == (FScriptContainerElement *)&local_58) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), iVar5 = local_50, bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (iVar5 != 0) {
          iVar4 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,iVar5,(ForAnyElementType *)pFVar8,(int *)(pFVar8 + 8),
                             (int *)(pFVar8 + 0xc));
          memcpy((void *)(*(longlong *)&pFVar8->field_0x0 + (longlong)iVar4 * 4),local_58.Data,
                 (longlong)iVar5 << 2);
        }
        uVar7 = 0;
        if ((int)uVar13 < param_3->ArrayNum) {
          uVar7 = uVar10;
        }
        if ((uVar7 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar8 = (param_3->AllocatorInstance).Data;
        uVar7 = 0;
        if ((int)uVar13 < (this->DynamicIncidentElementsLocal).ArrayNum) {
          uVar7 = uVar10;
        }
        if ((uVar7 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        TArray<int,TSizedDefaultAllocator<32>_>::Append<int,TSizedDefaultAllocator<32>_>
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)
                   ((this->DynamicIncidentElementsLocal).AllocatorInstance.Data + lVar11),
                   (TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar8 + lVar11));
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data);
        }
      }
      iVar5 = param_2->ArrayNum;
      local_60 = lVar12 + 1;
      uVar13 = uVar13 + 1;
      lVar11 = lVar11 + 0x10;
    } while ((int)uVar13 < iVar5);
  }
  this_00 = &this->DynamicIncidentElementsOffsets;
  iVar5 = (this->DynamicIncidentElementsOffsets).ArrayNum;
  if (0 < iVar5) {
    TArray<int,TSizedDefaultAllocator<32>_>::RemoveAt(this_00,iVar5 + -1,Default);
  }
  pFVar8 = (this_00->AllocatorInstance).Data;
  if (((pFVar8 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 <
       pFVar8 + (longlong)(this->DynamicIncidentElementsOffsets).ArrayMax * 4)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar5 = (this->DynamicIncidentElementsOffsets).ArrayNum;
  if (iVar5 == (this->DynamicIncidentElementsOffsets).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&this_00->AllocatorInstance,
                       &(this->DynamicIncidentElementsOffsets).ArrayMax);
  }
  (this->DynamicIncidentElementsOffsets).ArrayNum = iVar5 + 1;
  *(int *)((this_00->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_68;
  pFVar8 = (this_00->AllocatorInstance).Data;
  local_64 = (this->DynamicConstraints).ArrayNum;
  if (((pFVar8 <= (FScriptContainerElement *)&local_64) &&
      ((FScriptContainerElement *)&local_64 <
       pFVar8 + (longlong)(this->DynamicIncidentElementsOffsets).ArrayMax * 4)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar5 = (this->DynamicIncidentElementsOffsets).ArrayNum;
  if (iVar5 == (this->DynamicIncidentElementsOffsets).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&this_00->AllocatorInstance,
                       &(this->DynamicIncidentElementsOffsets).ArrayMax);
  }
  (this->DynamicIncidentElementsOffsets).ArrayNum = iVar5 + 1;
  *(int *)((this_00->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_64;
  return;
}

// AddDynamicConstraints @ 143b101e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FGaussSeidelMainConstraint<double,Chaos::TDynamicParticles<double,3>_>::
AddDynamicConstraints
          (FGaussSeidelMainConstraint<double,Chaos::TDynamicParticles<double,3>_> *this,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_3,
          bool param_4)

{
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  void *_Src;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  int local_68;
  int local_64;
  longlong local_60;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_48;
  
  if ((param_4) && (bVar2 = IsClean(param_1,param_2,param_3), !bVar2)) {
    pTVar6 = Utilities::ComputeIncidentElements(&local_48,param_1,param_3);
    TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
              (param_2,pTVar6);
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_48.AllocatorInstance.Data,
               local_48.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_48.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  local_68 = (this->DynamicConstraints).ArrayNum;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator+=
            (&this->DynamicConstraints,param_1);
  iVar5 = param_2->ArrayNum;
  uVar13 = 0;
  if (0 < iVar5) {
    lVar11 = 0;
    local_60 = 0;
    do {
      lVar12 = local_60;
      uVar10 = ~uVar13 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar13 < iVar5) {
        uVar7 = uVar10;
      }
      if ((uVar7 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (0 < *(int *)((param_2->AllocatorInstance).Data + lVar11 + 8)) {
        uVar7 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar7 = uVar10;
        }
        if ((uVar7 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar8 = (param_2->AllocatorInstance).Data;
        local_58.Data = (FScriptContainerElement *)0x0;
        local_50 = *(int *)(pFVar8 + lVar11 + 8);
        lVar9 = (longlong)local_50;
        _Src = *(void **)(pFVar8 + lVar11);
        if (local_50 == 0) {
          local_4c = 0;
          iVar5 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_50,0,&local_58,local_50,&local_4c);
          memcpy(local_58.Data,_Src,lVar9 << 2);
          iVar5 = local_50;
        }
        uVar7 = 0;
        if (0 < iVar5) {
          lVar9 = 0;
          do {
            iVar4 = local_68;
            uVar3 = 0;
            if ((int)uVar7 < iVar5) {
              uVar3 = ~uVar7 >> 0x1f;
            }
            if ((uVar3 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            uVar7 = uVar7 + 1;
            *(int *)(local_58.Data + lVar9) = *(int *)(local_58.Data + lVar9) + iVar4;
            lVar9 = lVar9 + 4;
            lVar12 = local_60;
            iVar5 = local_50;
          } while ((int)uVar7 < local_50);
        }
        uVar7 = 0;
        if ((int)uVar13 < (this->DynamicIncidentElements).ArrayNum) {
          uVar7 = uVar10;
        }
        if ((uVar7 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , iVar5 = local_50, bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar8 = (this->DynamicIncidentElements).AllocatorInstance.Data + lVar11;
        if ((pFVar8 == (FScriptContainerElement *)&local_58) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), iVar5 = local_50, bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (iVar5 != 0) {
          iVar4 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,iVar5,(ForAnyElementType *)pFVar8,(int *)(pFVar8 + 8),
                             (int *)(pFVar8 + 0xc));
          memcpy((void *)(*(longlong *)&pFVar8->field_0x0 + (longlong)iVar4 * 4),local_58.Data,
                 (longlong)iVar5 << 2);
        }
        uVar7 = 0;
        if ((int)uVar13 < param_3->ArrayNum) {
          uVar7 = uVar10;
        }
        if ((uVar7 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar8 = (param_3->AllocatorInstance).Data;
        uVar7 = 0;
        if ((int)uVar13 < (this->DynamicIncidentElementsLocal).ArrayNum) {
          uVar7 = uVar10;
        }
        if ((uVar7 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        TArray<int,TSizedDefaultAllocator<32>_>::Append<int,TSizedDefaultAllocator<32>_>
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)
                   ((this->DynamicIncidentElementsLocal).AllocatorInstance.Data + lVar11),
                   (TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar8 + lVar11));
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data);
        }
      }
      iVar5 = param_2->ArrayNum;
      local_60 = lVar12 + 1;
      uVar13 = uVar13 + 1;
      lVar11 = lVar11 + 0x10;
    } while ((int)uVar13 < iVar5);
  }
  this_00 = &this->DynamicIncidentElementsOffsets;
  iVar5 = (this->DynamicIncidentElementsOffsets).ArrayNum;
  if (0 < iVar5) {
    TArray<int,TSizedDefaultAllocator<32>_>::RemoveAt(this_00,iVar5 + -1,Default);
  }
  pFVar8 = (this_00->AllocatorInstance).Data;
  if (((pFVar8 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 <
       pFVar8 + (longlong)(this->DynamicIncidentElementsOffsets).ArrayMax * 4)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar5 = (this->DynamicIncidentElementsOffsets).ArrayNum;
  if (iVar5 == (this->DynamicIncidentElementsOffsets).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&this_00->AllocatorInstance,
                       &(this->DynamicIncidentElementsOffsets).ArrayMax);
  }
  (this->DynamicIncidentElementsOffsets).ArrayNum = iVar5 + 1;
  *(int *)((this_00->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_68;
  pFVar8 = (this_00->AllocatorInstance).Data;
  local_64 = (this->DynamicConstraints).ArrayNum;
  if (((pFVar8 <= (FScriptContainerElement *)&local_64) &&
      ((FScriptContainerElement *)&local_64 <
       pFVar8 + (longlong)(this->DynamicIncidentElementsOffsets).ArrayMax * 4)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar5 = (this->DynamicIncidentElementsOffsets).ArrayNum;
  if (iVar5 == (this->DynamicIncidentElementsOffsets).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&this_00->AllocatorInstance,
                       &(this->DynamicIncidentElementsOffsets).ArrayMax);
  }
  (this->DynamicIncidentElementsOffsets).ArrayNum = iVar5 + 1;
  *(int *)((this_00->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_64;
  return;
}

// AddExternalAcceleration @ 143b10740

void __thiscall
Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
AddExternalAcceleration
          (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *this,
          TVector<float,3> *param_1)

{
  *(float *)&this->ExternalAcceleration = *(float *)param_1 + *(float *)&this->ExternalAcceleration;
  *(float *)&(this->ExternalAcceleration).field_0x4 =
       *(float *)&param_1->field_0x4 + *(float *)&(this->ExternalAcceleration).field_0x4;
  *(float *)&(this->ExternalAcceleration).field_0x8 =
       *(float *)&param_1->field_0x8 + *(float *)&(this->ExternalAcceleration).field_0x8;
  return;
}

// AddStaticConstraints @ 143b10970

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::AddStaticConstraints
          (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *this,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int local_68;
  int local_64;
  longlong local_60;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_48;
  
  bVar3 = IsClean(param_1,param_2,param_3);
  if (!bVar3) {
    pTVar7 = Utilities::ComputeIncidentElements(&local_48,param_1,param_3);
    if (param_2 != pTVar7) {
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)(param_2->AllocatorInstance).Data,
                 param_2->ArrayNum);
      pFVar9 = (param_2->AllocatorInstance).Data;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      (param_2->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
      (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      param_2->ArrayNum = pTVar7->ArrayNum;
      param_2->ArrayMax = pTVar7->ArrayMax;
      pTVar7->ArrayNum = 0;
      pTVar7->ArrayMax = 0;
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_48.AllocatorInstance.Data,
               local_48.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_48.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  local_68 = (this->StaticConstraints).ArrayNum;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator+=
            (&this->StaticConstraints,param_1);
  iVar6 = param_2->ArrayNum;
  uVar13 = 0;
  if (0 < iVar6) {
    local_60 = 0;
    do {
      lVar10 = local_60;
      uVar12 = ~uVar13 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar13 < iVar6) {
        uVar8 = uVar12;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (0 < *(int *)((param_2->AllocatorInstance).Data + lVar10 + 8)) {
        uVar8 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar8 = uVar12;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar9 = (param_2->AllocatorInstance).Data;
        local_58.Data = (FScriptContainerElement *)0x0;
        local_50 = *(int *)(pFVar9 + lVar10 + 8);
        lVar11 = (longlong)local_50;
        _Src = *(void **)(pFVar9 + lVar10);
        if (local_50 == 0) {
          local_4c = 0;
          iVar6 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_50,0,&local_58,local_50,&local_4c);
          memcpy(local_58.Data,_Src,lVar11 << 2);
          iVar6 = local_50;
        }
        uVar8 = 0;
        if (0 < iVar6) {
          lVar11 = 0;
          do {
            iVar5 = local_68;
            uVar4 = 0;
            if ((int)uVar8 < iVar6) {
              uVar4 = ~uVar8 >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar8 = uVar8 + 1;
            *(int *)(local_58.Data + lVar11) = *(int *)(local_58.Data + lVar11) + iVar5;
            lVar11 = lVar11 + 4;
            lVar10 = local_60;
            iVar6 = local_50;
          } while ((int)uVar8 < local_50);
        }
        uVar8 = 0;
        if ((int)uVar13 < (this->StaticIncidentElements).ArrayNum) {
          uVar8 = uVar12;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , iVar6 = local_50, bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar9 = (this->StaticIncidentElements).AllocatorInstance.Data + lVar10;
        if ((pFVar9 == (FScriptContainerElement *)&local_58) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), iVar6 = local_50, bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (iVar6 != 0) {
          iVar5 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,iVar6,(ForAnyElementType *)pFVar9,(int *)(pFVar9 + 8),
                             (int *)(pFVar9 + 0xc));
          memcpy((void *)(*(longlong *)&pFVar9->field_0x0 + (longlong)iVar5 * 4),local_58.Data,
                 (longlong)iVar6 << 2);
        }
        uVar8 = 0;
        if ((int)uVar13 < param_3->ArrayNum) {
          uVar8 = uVar12;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar9 = (param_3->AllocatorInstance).Data;
        uVar8 = 0;
        if ((int)uVar13 < (this->StaticIncidentElementsLocal).ArrayNum) {
          uVar8 = uVar12;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TArray<int,TSizedDefaultAllocator<32>_>::Append<int,TSizedDefaultAllocator<32>_>
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)
                   ((this->StaticIncidentElementsLocal).AllocatorInstance.Data + lVar10),
                   (TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar9 + lVar10));
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data);
        }
      }
      iVar6 = param_2->ArrayNum;
      local_60 = lVar10 + 0x10;
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < iVar6);
  }
  this_00 = &this->StaticIncidentElementsOffsets;
  iVar6 = (this->StaticIncidentElementsOffsets).ArrayNum;
  if (0 < iVar6) {
    TArray<int,TSizedDefaultAllocator<32>_>::RemoveAt(this_00,iVar6 + -1,Default);
  }
  pFVar9 = (this_00->AllocatorInstance).Data;
  if (((pFVar9 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 <
       pFVar9 + (longlong)(this->StaticIncidentElementsOffsets).ArrayMax * 4)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = (this->StaticIncidentElementsOffsets).ArrayNum;
  piVar1 = &(this->StaticIncidentElementsOffsets).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&this_00->AllocatorInstance,piVar1);
  }
  (this->StaticIncidentElementsOffsets).ArrayNum = iVar6 + 1;
  *(int *)((this_00->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_68;
  local_64 = (this->StaticConstraints).ArrayNum;
  pFVar9 = (this_00->AllocatorInstance).Data;
  if (((pFVar9 <= (FScriptContainerElement *)&local_64) &&
      ((FScriptContainerElement *)&local_64 < pFVar9 + (longlong)*piVar1 * 4)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = (this->StaticIncidentElementsOffsets).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&this_00->AllocatorInstance,piVar1);
    (this->StaticIncidentElementsOffsets).ArrayNum = iVar6;
  }
  (this->StaticIncidentElementsOffsets).ArrayNum = iVar6 + 1;
  *(int *)((this_00->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_64;
  return;
}

// AddStaticConstraints @ 143b10f00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FGaussSeidelMainConstraint<double,Chaos::TDynamicParticles<double,3>_>::
AddStaticConstraints
          (FGaussSeidelMainConstraint<double,Chaos::TDynamicParticles<double,3>_> *this,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int local_68;
  int local_64;
  longlong local_60;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_48;
  
  bVar3 = IsClean(param_1,param_2,param_3);
  if (!bVar3) {
    pTVar7 = Utilities::ComputeIncidentElements(&local_48,param_1,param_3);
    if (param_2 != pTVar7) {
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)(param_2->AllocatorInstance).Data,
                 param_2->ArrayNum);
      pFVar9 = (param_2->AllocatorInstance).Data;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      (param_2->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
      (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      param_2->ArrayNum = pTVar7->ArrayNum;
      param_2->ArrayMax = pTVar7->ArrayMax;
      pTVar7->ArrayNum = 0;
      pTVar7->ArrayMax = 0;
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_48.AllocatorInstance.Data,
               local_48.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_48.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  local_68 = (this->StaticConstraints).ArrayNum;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator+=
            (&this->StaticConstraints,param_1);
  iVar6 = param_2->ArrayNum;
  uVar13 = 0;
  if (0 < iVar6) {
    local_60 = 0;
    do {
      lVar10 = local_60;
      uVar12 = ~uVar13 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar13 < iVar6) {
        uVar8 = uVar12;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (0 < *(int *)((param_2->AllocatorInstance).Data + lVar10 + 8)) {
        uVar8 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar8 = uVar12;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar9 = (param_2->AllocatorInstance).Data;
        local_58.Data = (FScriptContainerElement *)0x0;
        local_50 = *(int *)(pFVar9 + lVar10 + 8);
        lVar11 = (longlong)local_50;
        _Src = *(void **)(pFVar9 + lVar10);
        if (local_50 == 0) {
          local_4c = 0;
          iVar6 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_50,0,&local_58,local_50,&local_4c);
          memcpy(local_58.Data,_Src,lVar11 << 2);
          iVar6 = local_50;
        }
        uVar8 = 0;
        if (0 < iVar6) {
          lVar11 = 0;
          do {
            iVar5 = local_68;
            uVar4 = 0;
            if ((int)uVar8 < iVar6) {
              uVar4 = ~uVar8 >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar8 = uVar8 + 1;
            *(int *)(local_58.Data + lVar11) = *(int *)(local_58.Data + lVar11) + iVar5;
            lVar11 = lVar11 + 4;
            lVar10 = local_60;
            iVar6 = local_50;
          } while ((int)uVar8 < local_50);
        }
        uVar8 = 0;
        if ((int)uVar13 < (this->StaticIncidentElements).ArrayNum) {
          uVar8 = uVar12;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , iVar6 = local_50, bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar9 = (this->StaticIncidentElements).AllocatorInstance.Data + lVar10;
        if ((pFVar9 == (FScriptContainerElement *)&local_58) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), iVar6 = local_50, bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (iVar6 != 0) {
          iVar5 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,iVar6,(ForAnyElementType *)pFVar9,(int *)(pFVar9 + 8),
                             (int *)(pFVar9 + 0xc));
          memcpy((void *)(*(longlong *)&pFVar9->field_0x0 + (longlong)iVar5 * 4),local_58.Data,
                 (longlong)iVar6 << 2);
        }
        uVar8 = 0;
        if ((int)uVar13 < param_3->ArrayNum) {
          uVar8 = uVar12;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar9 = (param_3->AllocatorInstance).Data;
        uVar8 = 0;
        if ((int)uVar13 < (this->StaticIncidentElementsLocal).ArrayNum) {
          uVar8 = uVar12;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TArray<int,TSizedDefaultAllocator<32>_>::Append<int,TSizedDefaultAllocator<32>_>
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)
                   ((this->StaticIncidentElementsLocal).AllocatorInstance.Data + lVar10),
                   (TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar9 + lVar10));
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data);
        }
      }
      iVar6 = param_2->ArrayNum;
      local_60 = lVar10 + 0x10;
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < iVar6);
  }
  this_00 = &this->StaticIncidentElementsOffsets;
  iVar6 = (this->StaticIncidentElementsOffsets).ArrayNum;
  if (0 < iVar6) {
    TArray<int,TSizedDefaultAllocator<32>_>::RemoveAt(this_00,iVar6 + -1,Default);
  }
  pFVar9 = (this_00->AllocatorInstance).Data;
  if (((pFVar9 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 <
       pFVar9 + (longlong)(this->StaticIncidentElementsOffsets).ArrayMax * 4)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = (this->StaticIncidentElementsOffsets).ArrayNum;
  piVar1 = &(this->StaticIncidentElementsOffsets).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&this_00->AllocatorInstance,piVar1);
  }
  (this->StaticIncidentElementsOffsets).ArrayNum = iVar6 + 1;
  *(int *)((this_00->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_68;
  local_64 = (this->StaticConstraints).ArrayNum;
  pFVar9 = (this_00->AllocatorInstance).Data;
  if (((pFVar9 <= (FScriptContainerElement *)&local_64) &&
      ((FScriptContainerElement *)&local_64 < pFVar9 + (longlong)*piVar1 * 4)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = (this->StaticIncidentElementsOffsets).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&this_00->AllocatorInstance,piVar1);
    (this->StaticIncidentElementsOffsets).ArrayNum = iVar6;
  }
  (this->StaticIncidentElementsOffsets).ArrayNum = iVar6 + 1;
  *(int *)((this_00->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_64;
  return;
}

// AddTransientConstraints @ 143b114d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
AddTransientConstraints
          (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *this,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_3,
          bool param_4)

{
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  void *_Src;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  int local_68;
  int local_64;
  longlong local_60;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_48;
  
  if ((param_4) && (bVar2 = IsClean(param_1,param_2,param_3), !bVar2)) {
    pTVar6 = Utilities::ComputeIncidentElements(&local_48,param_1,param_3);
    TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
              (param_2,pTVar6);
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_48.AllocatorInstance.Data,
               local_48.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_48.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  local_68 = (this->TransientConstraints).ArrayNum;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator+=
            (&this->TransientConstraints,param_1);
  iVar5 = param_2->ArrayNum;
  uVar13 = 0;
  if (0 < iVar5) {
    lVar11 = 0;
    local_60 = 0;
    do {
      lVar12 = local_60;
      uVar10 = ~uVar13 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar13 < iVar5) {
        uVar7 = uVar10;
      }
      if ((uVar7 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (0 < *(int *)((param_2->AllocatorInstance).Data + lVar11 + 8)) {
        uVar7 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar7 = uVar10;
        }
        if ((uVar7 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar8 = (param_2->AllocatorInstance).Data;
        local_58.Data = (FScriptContainerElement *)0x0;
        local_50 = *(int *)(pFVar8 + lVar11 + 8);
        lVar9 = (longlong)local_50;
        _Src = *(void **)(pFVar8 + lVar11);
        if (local_50 == 0) {
          local_4c = 0;
          iVar5 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_50,0,&local_58,local_50,&local_4c);
          memcpy(local_58.Data,_Src,lVar9 << 2);
          iVar5 = local_50;
        }
        uVar7 = 0;
        if (0 < iVar5) {
          lVar9 = 0;
          do {
            iVar4 = local_68;
            uVar3 = 0;
            if ((int)uVar7 < iVar5) {
              uVar3 = ~uVar7 >> 0x1f;
            }
            if ((uVar3 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            uVar7 = uVar7 + 1;
            *(int *)(local_58.Data + lVar9) = *(int *)(local_58.Data + lVar9) + iVar4;
            lVar9 = lVar9 + 4;
            lVar12 = local_60;
            iVar5 = local_50;
          } while ((int)uVar7 < local_50);
        }
        uVar7 = 0;
        if ((int)uVar13 < (this->TransientIncidentElements).ArrayNum) {
          uVar7 = uVar10;
        }
        if ((uVar7 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , iVar5 = local_50, bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar8 = (this->TransientIncidentElements).AllocatorInstance.Data + lVar11;
        if ((pFVar8 == (FScriptContainerElement *)&local_58) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), iVar5 = local_50, bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (iVar5 != 0) {
          iVar4 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,iVar5,(ForAnyElementType *)pFVar8,(int *)(pFVar8 + 8),
                             (int *)(pFVar8 + 0xc));
          memcpy((void *)(*(longlong *)&pFVar8->field_0x0 + (longlong)iVar4 * 4),local_58.Data,
                 (longlong)iVar5 << 2);
        }
        uVar7 = 0;
        if ((int)uVar13 < param_3->ArrayNum) {
          uVar7 = uVar10;
        }
        if ((uVar7 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar8 = (param_3->AllocatorInstance).Data;
        uVar7 = 0;
        if ((int)uVar13 < (this->TransientIncidentElementsLocal).ArrayNum) {
          uVar7 = uVar10;
        }
        if ((uVar7 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        TArray<int,TSizedDefaultAllocator<32>_>::Append<int,TSizedDefaultAllocator<32>_>
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)
                   ((this->TransientIncidentElementsLocal).AllocatorInstance.Data + lVar11),
                   (TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar8 + lVar11));
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data);
        }
      }
      iVar5 = param_2->ArrayNum;
      local_60 = lVar12 + 1;
      uVar13 = uVar13 + 1;
      lVar11 = lVar11 + 0x10;
    } while ((int)uVar13 < iVar5);
  }
  this_00 = &this->TransientIncidentElementsOffsets;
  iVar5 = (this->TransientIncidentElementsOffsets).ArrayNum;
  if (0 < iVar5) {
    TArray<int,TSizedDefaultAllocator<32>_>::RemoveAt(this_00,iVar5 + -1,Default);
  }
  pFVar8 = (this_00->AllocatorInstance).Data;
  if (((pFVar8 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 <
       pFVar8 + (longlong)(this->TransientIncidentElementsOffsets).ArrayMax * 4)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar5 = (this->TransientIncidentElementsOffsets).ArrayNum;
  if (iVar5 == (this->TransientIncidentElementsOffsets).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&this_00->AllocatorInstance,
                       &(this->TransientIncidentElementsOffsets).ArrayMax);
  }
  (this->TransientIncidentElementsOffsets).ArrayNum = iVar5 + 1;
  *(int *)((this_00->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_68;
  pFVar8 = (this_00->AllocatorInstance).Data;
  local_64 = (this->TransientConstraints).ArrayNum;
  if (((pFVar8 <= (FScriptContainerElement *)&local_64) &&
      ((FScriptContainerElement *)&local_64 <
       pFVar8 + (longlong)(this->TransientIncidentElementsOffsets).ArrayMax * 4)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar5 = (this->TransientIncidentElementsOffsets).ArrayNum;
  if (iVar5 == (this->TransientIncidentElementsOffsets).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&this_00->AllocatorInstance,
                       &(this->TransientIncidentElementsOffsets).ArrayMax);
  }
  (this->TransientIncidentElementsOffsets).ArrayNum = iVar5 + 1;
  *(int *)((this_00->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_64;
  return;
}

// AddTransientConstraints @ 143b11a20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FGaussSeidelMainConstraint<double,Chaos::TDynamicParticles<double,3>_>::
AddTransientConstraints
          (FGaussSeidelMainConstraint<double,Chaos::TDynamicParticles<double,3>_> *this,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_3,
          bool param_4)

{
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  void *_Src;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  int local_68;
  int local_64;
  longlong local_60;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_48;
  
  if ((param_4) && (bVar2 = IsClean(param_1,param_2,param_3), !bVar2)) {
    pTVar6 = Utilities::ComputeIncidentElements(&local_48,param_1,param_3);
    TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
              (param_2,pTVar6);
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_48.AllocatorInstance.Data,
               local_48.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_48.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  local_68 = (this->TransientConstraints).ArrayNum;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator+=
            (&this->TransientConstraints,param_1);
  iVar5 = param_2->ArrayNum;
  uVar13 = 0;
  if (0 < iVar5) {
    lVar11 = 0;
    local_60 = 0;
    do {
      lVar12 = local_60;
      uVar10 = ~uVar13 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar13 < iVar5) {
        uVar7 = uVar10;
      }
      if ((uVar7 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (0 < *(int *)((param_2->AllocatorInstance).Data + lVar11 + 8)) {
        uVar7 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar7 = uVar10;
        }
        if ((uVar7 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar8 = (param_2->AllocatorInstance).Data;
        local_58.Data = (FScriptContainerElement *)0x0;
        local_50 = *(int *)(pFVar8 + lVar11 + 8);
        lVar9 = (longlong)local_50;
        _Src = *(void **)(pFVar8 + lVar11);
        if (local_50 == 0) {
          local_4c = 0;
          iVar5 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_50,0,&local_58,local_50,&local_4c);
          memcpy(local_58.Data,_Src,lVar9 << 2);
          iVar5 = local_50;
        }
        uVar7 = 0;
        if (0 < iVar5) {
          lVar9 = 0;
          do {
            iVar4 = local_68;
            uVar3 = 0;
            if ((int)uVar7 < iVar5) {
              uVar3 = ~uVar7 >> 0x1f;
            }
            if ((uVar3 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            uVar7 = uVar7 + 1;
            *(int *)(local_58.Data + lVar9) = *(int *)(local_58.Data + lVar9) + iVar4;
            lVar9 = lVar9 + 4;
            lVar12 = local_60;
            iVar5 = local_50;
          } while ((int)uVar7 < local_50);
        }
        uVar7 = 0;
        if ((int)uVar13 < (this->TransientIncidentElements).ArrayNum) {
          uVar7 = uVar10;
        }
        if ((uVar7 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , iVar5 = local_50, bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar8 = (this->TransientIncidentElements).AllocatorInstance.Data + lVar11;
        if ((pFVar8 == (FScriptContainerElement *)&local_58) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), iVar5 = local_50, bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (iVar5 != 0) {
          iVar4 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,iVar5,(ForAnyElementType *)pFVar8,(int *)(pFVar8 + 8),
                             (int *)(pFVar8 + 0xc));
          memcpy((void *)(*(longlong *)&pFVar8->field_0x0 + (longlong)iVar4 * 4),local_58.Data,
                 (longlong)iVar5 << 2);
        }
        uVar7 = 0;
        if ((int)uVar13 < param_3->ArrayNum) {
          uVar7 = uVar10;
        }
        if ((uVar7 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar8 = (param_3->AllocatorInstance).Data;
        uVar7 = 0;
        if ((int)uVar13 < (this->TransientIncidentElementsLocal).ArrayNum) {
          uVar7 = uVar10;
        }
        if ((uVar7 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        TArray<int,TSizedDefaultAllocator<32>_>::Append<int,TSizedDefaultAllocator<32>_>
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)
                   ((this->TransientIncidentElementsLocal).AllocatorInstance.Data + lVar11),
                   (TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar8 + lVar11));
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data);
        }
      }
      iVar5 = param_2->ArrayNum;
      local_60 = lVar12 + 1;
      uVar13 = uVar13 + 1;
      lVar11 = lVar11 + 0x10;
    } while ((int)uVar13 < iVar5);
  }
  this_00 = &this->TransientIncidentElementsOffsets;
  iVar5 = (this->TransientIncidentElementsOffsets).ArrayNum;
  if (0 < iVar5) {
    TArray<int,TSizedDefaultAllocator<32>_>::RemoveAt(this_00,iVar5 + -1,Default);
  }
  pFVar8 = (this_00->AllocatorInstance).Data;
  if (((pFVar8 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 <
       pFVar8 + (longlong)(this->TransientIncidentElementsOffsets).ArrayMax * 4)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar5 = (this->TransientIncidentElementsOffsets).ArrayNum;
  if (iVar5 == (this->TransientIncidentElementsOffsets).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&this_00->AllocatorInstance,
                       &(this->TransientIncidentElementsOffsets).ArrayMax);
  }
  (this->TransientIncidentElementsOffsets).ArrayNum = iVar5 + 1;
  *(int *)((this_00->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_68;
  pFVar8 = (this_00->AllocatorInstance).Data;
  local_64 = (this->TransientConstraints).ArrayNum;
  if (((pFVar8 <= (FScriptContainerElement *)&local_64) &&
      ((FScriptContainerElement *)&local_64 <
       pFVar8 + (longlong)(this->TransientIncidentElementsOffsets).ArrayMax * 4)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar5 = (this->TransientIncidentElementsOffsets).ArrayNum;
  if (iVar5 == (this->TransientIncidentElementsOffsets).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&this_00->AllocatorInstance,
                       &(this->TransientIncidentElementsOffsets).ArrayMax);
  }
  (this->TransientIncidentElementsOffsets).ArrayNum = iVar5 + 1;
  *(int *)((this_00->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_64;
  return;
}

// ApplyCG @ 143b13fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ApplyCG
          (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1,float param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined ***pppuVar5;
  int iVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStackY_168 [32];
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_118;
  float local_108 [2];
  undefined8 local_100;
  undefined4 local_f8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_f0;
  FSolverParticles *local_e8;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_e0;
  code *local_d8;
  FSolverParticles **local_d0;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_c8;
  FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *local_b8;
  TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)> *pTStack_b0
  ;
  float *local_a8;
  FSolverParticles *pFStack_a0;
  <lambda_2> local_98;
  code *local_78 [2];
  undefined **local_68;
  FSolverParticles *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar8 = -1 < CpuChannel->Enabled;
  local_108[0] = param_2;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ApplyCG(Chaos::Softs::FSolverParticles&___ptr64,float)___ptr64'
                ::__l2::__CpuProfilerEventSpecId205,"STAT_ChaosGaussSeidelApplyCG",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\GaussSeidelMainConstraint.cpp"
               ,0xcd);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ApplyCG(Chaos::Softs::FSolverParticles&___ptr64,float)___ptr64'
               ::__l2::__CpuProfilerEventSpecId205);
  }
  iVar6 = 0;
  local_68 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__ApplyCG___FGaussSeidelMainConstraint_MVFSolverParticles_Softs_Chaos___Softs_Chaos__QEAAXAEAVFSolverParticles_45_M_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = (undefined ***)0x0;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ApplyCG'::__l2::<lambda_1>,void,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&>
                ::Call;
  local_60 = param_1;
  do {
    ComputeNewtonResiduals
              (this,&local_c8,param_1,local_108[0],false,
               (TArray<Chaos::PMatrix<float,3,3>,TSizedDefaultAllocator<32>_> *)0x0);
    uVar1 = (uint)param_1->_padding_;
    uVar7 = (ulonglong)uVar1;
    local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.ArrayNum = 0;
    local_118.ArrayMax = 0;
    local_100 = 0;
    local_f8 = 0;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar7);
    }
    if ((uVar1 != 0) &&
       (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,uVar1,&local_118.AllocatorInstance,0,&local_118.ArrayMax), 0 < (int)uVar1))
    {
      do {
        if ((local_118.AllocatorInstance.Data <= (FScriptContainerElement *)&local_100) &&
           (((FScriptContainerElement *)&local_100 <
             local_118.AllocatorInstance.Data + (longlong)local_118.ArrayMax * 0xc &&
            (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)))) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = local_118.ArrayNum;
        if (local_118.ArrayNum == local_118.ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,&local_118.AllocatorInstance,&local_118.ArrayMax);
        }
        local_118.ArrayNum = iVar4 + 1;
        *(undefined8 *)(local_118.AllocatorInstance.Data + (longlong)iVar4 * 0xc) = local_100;
        *(undefined4 *)(local_118.AllocatorInstance.Data + (longlong)iVar4 * 0xc + 8) = local_f8;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    local_f0 = (this->use_list).Ptr;
    pTStack_b0 = (TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>
                  *)local_78;
    local_a8 = local_108;
    local_b8 = this;
    pFStack_a0 = param_1;
    local_98.__this = this;
    local_98.ProjectBCs = pTStack_b0;
    local_98.Dt = local_a8;
    local_98.Particles = param_1;
    LanczosCG<float,Chaos::TVector<float,3>,_Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ApplyCG_::__l4::<lambda_2>,_Chaos::LanczosCG<float,_Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ApplyCG_::__l4::<lambda_2>,3>_::__l2::<lambda_1>,_Chaos::LanczosCG<float,_Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ApplyCG_::__l4::<lambda_2>,3>_::__l2::<lambda_2>,_Chaos::LanczosCG<float,_Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ApplyCG_::__l4::<lambda_2>,3>_::__l2::<lambda_3>,_Chaos::LanczosCG<float,_Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ApplyCG_::__l4::<lambda_2>,3>_::__l2::<lambda_4>_>
              (&local_98,(<lambda_1>)&local_f0,(<lambda_2>)&local_f0,(<lambda_3>)&local_f0,
               (<lambda_4>)&local_f0,&local_118,&local_c8,MaxItCG,CGTol,false);
    local_e0 = &local_118;
    local_d0 = &local_e8;
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ApplyCG'::__l4::<lambda_3>,void,int>
               ::Call;
    local_e8 = param_1;
    PhysicsParallelFor((int)param_1->_padding_,(TFunctionRef<void___cdecl(int)> *)&local_d8,false);
    if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.AllocatorInstance.Data);
    }
    if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 1);
  if (local_78[0] != (code *)0x0) {
    pppuVar5 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar5 = local_50;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ComputeNewtonResiduals @ 143b19840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
ComputeNewtonResiduals
          (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *this,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FSolverParticles *param_1,float param_2,bool param_3,
          TArray<Chaos::PMatrix<float,3,3>,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  TArray<Chaos::PMatrix<float,3,3>,TSizedDefaultAllocator<32>_> *pTVar4;
  FSolverParticles *pFVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar9;
  IFileManager *pIVar10;
  FString *pFVar11;
  FString *pFVar12;
  longlong lVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  bool bVar19;
  float fVar20;
  undefined1 auStackY_1f8 [32];
  FString local_1a0;
  TArray<Chaos::PMatrix<float,3,3>,TSizedDefaultAllocator<32>_> *local_190;
  TVector<float,3> local_188;
  FSolverParticles *local_178;
  FString local_170;
  code *local_160;
  FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> **local_158;
  FScriptContainerElement *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  FScriptContainerElement *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *local_128;
  TArray<Chaos::PMatrix<float,3,3>,TSizedDefaultAllocator<32>_> **local_120;
  float local_118;
  uint local_114;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_110;
  FSolverParticles *local_108;
  TStringView<wchar_t> local_f8;
  FString local_e8;
  TStringView<wchar_t> local_d8;
  FString local_c8;
  FString local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_190 = param_4;
  bVar19 = -1 < CpuChannel->Enabled;
  local_178 = param_1;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_class_TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ComputeNewtonResiduals(Chaos::Softs::FSolverParticles_const&___ptr64,float,bool,TArray<Chaos::PMatrix<float,3,3>,TSizedDefaultAllocator<32>_>*___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId119,"STAT_ChaosGaussSeidelComputeNewtonResidual",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\GaussSeidelMainConstraint.cpp"
               ,0x77);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_class_TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ComputeNewtonResiduals(Chaos::Softs::FSolverParticles_const&___ptr64,float,bool,TArray<Chaos::PMatrix<float,3,3>,TSizedDefaultAllocator<32>_>*___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId119);
  }
  uVar14 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  fVar20 = 0.0;
  local_188._0_8_ = 0;
  local_188._8_4_ = 0;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::Init
            (__return_storage_ptr__,&local_188,(this->xtilde).ArrayNum);
  pTVar4 = local_190;
  if (local_190 != (TArray<Chaos::PMatrix<float,3,3>,TSizedDefaultAllocator<32>_> *)0x0) {
    uVar8 = (uint)param_1->_padding_;
    uVar18 = (ulonglong)uVar8;
    local_a8 = 0;
    local_98 = 0;
    local_88 = 0;
    uStack_a0 = 0;
    uStack_90 = 0;
    uStack_80 = 0;
    local_78 = ___xmm_3f800000000000000000000000000000;
    uStack_70 = _UNK_150689648;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar18);
    }
    piVar1 = &local_190->ArrayMax;
    local_190->ArrayNum = 0;
    if (*piVar1 != uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,uVar8,&local_190->AllocatorInstance,0,piVar1);
    }
    if (0 < (int)uVar8) {
      do {
        pFVar2 = (pTVar4->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_a8) &&
            ((FScriptContainerElement *)&local_a8 < pFVar2 + (longlong)*piVar1 * 0x40)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar9;
        }
        iVar7 = pTVar4->ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1040,&pTVar4->AllocatorInstance,piVar1);
        }
        pTVar4->ArrayNum = iVar7 + 1;
        pFVar2 = (pTVar4->AllocatorInstance).Data;
        lVar13 = (longlong)iVar7 * 0x40;
        *(undefined8 *)(pFVar2 + lVar13) = local_a8;
        *(undefined8 *)(pFVar2 + lVar13 + 8) = uStack_a0;
        *(undefined8 *)(pFVar2 + lVar13 + 0x10) = local_98;
        *(undefined8 *)(pFVar2 + lVar13 + 0x10 + 8) = uStack_90;
        *(undefined8 *)(pFVar2 + lVar13 + 0x20) = local_88;
        *(undefined8 *)(pFVar2 + lVar13 + 0x20 + 8) = uStack_80;
        *(undefined8 *)(pFVar2 + lVar13 + 0x30) = local_78;
        *(undefined8 *)(pFVar2 + lVar13 + 0x30 + 8) = uStack_70;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
  }
  pFVar5 = local_178;
  uVar18 = uVar14;
  if (0 < (this->ParticlesPerColor).ArrayNum) {
    do {
      uVar16 = (uint)uVar14;
      uVar8 = 0;
      if ((int)uVar16 < (this->ParticlesPerColor).ArrayNum) {
        uVar8 = ~uVar16 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      iVar7 = *(int *)((this->ParticlesPerColor).AllocatorInstance.Data + uVar18 + 8);
      local_120 = &local_190;
      local_158 = &local_128;
      local_160 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ComputeNewtonResiduals'::__l7::<lambda_1>,void,int>
                  ::Call;
      uVar8 = 0;
      if ((int)uVar16 < (this->ParticlesPerColor).ArrayNum) {
        uVar8 = ~uVar16 >> 0x1f;
      }
      local_108 = pFVar5;
      local_128 = this;
      local_118 = param_2;
      local_114 = uVar16;
      local_110 = __return_storage_ptr__;
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      PhysicsParallelFor(*(int *)((this->ParticlesPerColor).AllocatorInstance.Data + uVar18 + 8),
                         (TFunctionRef<void___cdecl(int)> *)&local_160,iVar7 < 1000);
      uVar14 = (ulonglong)(uVar16 + 1);
      uVar18 = uVar18 + 0x10;
    } while ((int)(uVar16 + 1) < (this->ParticlesPerColor).ArrayNum);
  }
  uVar17 = 0;
  iVar7 = __return_storage_ptr__->ArrayNum;
  uVar14 = uVar17;
  uVar18 = uVar17;
  if (0 < iVar7) {
    do {
      uVar16 = (uint)uVar18;
      uVar8 = 0;
      if ((int)uVar16 < iVar7) {
        uVar8 = ~uVar16 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      iVar7 = __return_storage_ptr__->ArrayNum;
      fVar20 = fVar20 + *(float *)(pFVar2 + uVar14 + 4) * *(float *)(pFVar2 + uVar14 + 4) +
                        *(float *)(pFVar2 + uVar14) * *(float *)(pFVar2 + uVar14) +
                        *(float *)(pFVar2 + uVar14 + 8) * *(float *)(pFVar2 + uVar14 + 8);
      uVar14 = uVar14 + 0xc;
      uVar18 = (ulonglong)(uVar16 + 1);
    } while ((int)(uVar16 + 1) < iVar7);
  }
  if ((3 < (byte)LogChaos._0_1_) &&
     (UE::Logging::Private::BasicLog<4>
                (&`public:_class_TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ComputeNewtonResiduals(Chaos::Softs::FSolverParticles_const&___ptr64,float,bool,TArray<Chaos::PMatrix<float,3,3>,TSizedDefaultAllocator<32>_>*___ptr64)___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogChaos), 3 < (byte)LogChaos._0_1_)) {
    UE::Logging::Private::BasicLog<4>
              (&`public:_class_TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ComputeNewtonResiduals(Chaos::Softs::FSolverParticles_const&___ptr64,float,bool,TArray<Chaos::PMatrix<float,3,3>,TSizedDefaultAllocator<32>_>*___ptr64)___ptr64'
                ::__l27::LOG_Static,(FLogCategoryBase *)&LogChaos);
  }
  this->PassedIters = this->PassedIters + 1;
  if (param_3) {
    FPaths::ProjectDir(&local_1a0);
    ::FString::AppendChars(&local_1a0,L"/DebugOutput/NewtonResidual.txt",0x1f);
    if (this->PassedIters == 0) {
      pIVar10 = IFileManager::Get();
      FVar15.Data = (FScriptContainerElement *)L"";
      if (local_1a0.Data.ArrayNum != 0) {
        FVar15.Data = local_1a0.Data.AllocatorInstance.Data;
      }
      pFVar11 = ::FString::FString(&local_e8,L"Newton Norm\r\n");
      local_148 = (pFVar11->Data).AllocatorInstance.Data;
      iVar7 = (pFVar11->Data).ArrayNum;
      iStack_140 = iVar7 + -1;
      if (iVar7 == 0) {
        iStack_140 = 0;
      }
      local_f8._12_4_ = uStack_13c;
      local_f8.Size = iStack_140;
      local_f8.DataPtr = (wchar_t *)local_148;
      FFileHelper::SaveStringToFile(&local_f8,(wchar_t *)FVar15.Data,AutoDetect,pIVar10,0);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
    }
    pIVar10 = IFileManager::Get();
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_1a0.Data.ArrayNum != 0) {
      FVar15.Data = local_1a0.Data.AllocatorInstance.Data;
    }
    pFVar11 = ::FString::FString(&local_b8,L",\r\n");
    pFVar12 = ::FString::SanitizeFloat(&local_c8,(double)SQRT(fVar20),1);
    ::FString::ConcatFF(&local_170,pFVar12,pFVar11);
    local_138 = local_170.Data.AllocatorInstance.Data;
    uVar14 = (ulonglong)(local_170.Data.ArrayNum - 1);
    if (local_170.Data.ArrayNum == 0) {
      uVar14 = uVar17;
    }
    iStack_130 = (int)uVar14;
    local_d8._12_4_ = uStack_12c;
    local_d8.Size = iStack_130;
    local_d8.DataPtr = (wchar_t *)local_170.Data.AllocatorInstance.Data;
    FFileHelper::SaveStringToFile(&local_d8,(wchar_t *)FVar15.Data,AutoDetect,pIVar10,8);
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// DynamicConstraintResidualAndHessian @ 143b1b7a0

TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&)>,TSizedDefaultAllocator<32>_>
* __thiscall
Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
DynamicConstraintResidualAndHessian
          (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *this)

{
  return &this->AddDynamicConstraintResidualAndHessian;
}

// DynamicConstraintResidualAndHessian @ 143b1b7b0

TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&)>,TSizedDefaultAllocator<32>_>
* __thiscall
Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
DynamicConstraintResidualAndHessian
          (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *this)

{
  return &this->AddDynamicConstraintResidualAndHessian;
}

// InitializeLambdas @ 143b22c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::InitializeLambdas
          (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48 = *(longlong *)&this->ComputeInitialResidualAndHessian;
  uVar2 = *(undefined8 *)&(this->ComputeInitialResidualAndHessian).field_0x8;
  local_38 = *(longlong *)&(this->ComputeInitialResidualAndHessian).field_0x10;
  uStack_30 = *(undefined8 *)&(this->ComputeInitialResidualAndHessian).field_0x18;
  uVar1 = *(undefined8 *)&(this->ComputeInitialResidualAndHessian).field_0x20;
  plStack_20 = *(longlong **)&(this->ComputeInitialResidualAndHessian).field_0x28;
  *(code **)&this->ComputeInitialResidualAndHessian =
       UE::Core::Private::Function::
       TFunctionRefCaller<`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::InitializeLambdas'::__l2::<lambda_1>,void,Chaos::Softs::FSolverParticles_const_&,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&>
       ::Call;
  *(undefined8 *)&(this->ComputeInitialResidualAndHessian).field_0x8 = uStack_40;
  *(undefined4 *)&(this->ComputeInitialResidualAndHessian).field_0x10 = 0x50af7960;
  *(undefined4 *)&(this->ComputeInitialResidualAndHessian).field_0x14 = 1;
  *(FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> **)
   &(this->ComputeInitialResidualAndHessian).field_0x18 = this;
  *(undefined4 *)&(this->ComputeInitialResidualAndHessian).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->ComputeInitialResidualAndHessian).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->ComputeInitialResidualAndHessian).field_0x28 = 0;
  *(undefined4 *)&(this->ComputeInitialResidualAndHessian).field_0x2c = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = *(longlong *)&this->AccelerationTechniquePerParticle;
  uVar2 = *(undefined8 *)&(this->AccelerationTechniquePerParticle).field_0x8;
  local_38 = *(longlong *)&(this->AccelerationTechniquePerParticle).field_0x10;
  uStack_30 = *(undefined8 *)&(this->AccelerationTechniquePerParticle).field_0x18;
  uVar1 = *(undefined8 *)&(this->AccelerationTechniquePerParticle).field_0x20;
  plStack_20 = *(longlong **)&(this->AccelerationTechniquePerParticle).field_0x28;
  *(code **)&this->AccelerationTechniquePerParticle =
       UE::Core::Private::Function::
       TFunctionRefCaller<`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::InitializeLambdas'::__l2::<lambda_2>,void,Chaos::Softs::FSolverParticles_&,int>
       ::Call;
  *(undefined8 *)&(this->AccelerationTechniquePerParticle).field_0x8 = uStack_40;
  *(undefined4 *)&(this->AccelerationTechniquePerParticle).field_0x10 = 0x50af7980;
  *(undefined4 *)&(this->AccelerationTechniquePerParticle).field_0x14 = 1;
  *(FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> **)
   &(this->AccelerationTechniquePerParticle).field_0x18 = this;
  *(undefined4 *)&(this->AccelerationTechniquePerParticle).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->AccelerationTechniquePerParticle).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->AccelerationTechniquePerParticle).field_0x28 = 0;
  *(undefined4 *)&(this->AccelerationTechniquePerParticle).field_0x2c = 0;
  local_28 = uVar1;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    uStack_40 = uVar2;
    (**(code **)(*plVar3 + 0x10))();
  }
  return;
}

// InternalForceDifferentials @ 143b242f0

TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_const_&,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TSizedDefaultAllocator<32>_>
* __thiscall
Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
InternalForceDifferentials(FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *this)

{
  return &this->AddInternalForceDifferentials;
}

// InternalForceDifferentials @ 143b24300

TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_const_&,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TSizedDefaultAllocator<32>_>
* __thiscall
Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
InternalForceDifferentials(FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *this)

{
  return &this->AddInternalForceDifferentials;
}

// IsClean @ 143b24b00

bool __cdecl
Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::IsClean
          (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  uint uVar14;
  longlong local_58;
  
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_3->ArrayNum) {
    iVar7 = 0;
    uVar9 = 0;
    if (0 < iVar4) {
      local_58 = 0;
      while( true ) {
        uVar14 = ~uVar9 >> 0x1f;
        uVar11 = 0;
        if ((int)uVar9 < iVar4) {
          uVar11 = uVar14;
        }
        if ((uVar11 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        iVar7 = iVar7 + *(int *)((param_2->AllocatorInstance).Data + local_58 + 8);
        uVar11 = 0;
        if ((int)uVar9 < param_2->ArrayNum) {
          uVar11 = uVar14;
        }
        if ((uVar11 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        pFVar12 = (param_2->AllocatorInstance).Data;
        uVar11 = 0;
        if ((int)uVar9 < param_3->ArrayNum) {
          uVar11 = uVar14;
        }
        if ((uVar11 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        if (*(int *)(pFVar12 + local_58 + 8) !=
            *(int *)((param_3->AllocatorInstance).Data + local_58 + 8)) break;
        uVar11 = 0;
        lVar13 = 0;
        while( true ) {
          uVar5 = 0;
          if ((int)uVar9 < param_2->ArrayNum) {
            uVar5 = uVar14;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          iVar4 = param_2->ArrayNum;
          if (*(int *)((param_2->AllocatorInstance).Data + local_58 + 8) <= (int)uVar11) break;
          uVar5 = 0;
          if ((int)uVar9 < iVar4) {
            uVar5 = uVar14;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          pFVar12 = (param_2->AllocatorInstance).Data;
          uVar10 = ~uVar11 >> 0x1f;
          uVar5 = 0;
          if ((int)uVar11 < *(int *)(pFVar12 + local_58 + 8)) {
            uVar5 = uVar10;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          if (param_1->ArrayNum < *(int *)(*(longlong *)(pFVar12 + local_58) + lVar13)) {
            return false;
          }
          uVar5 = 0;
          if ((int)uVar9 < param_3->ArrayNum) {
            uVar5 = uVar14;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          pFVar12 = (param_3->AllocatorInstance).Data + local_58;
          uVar5 = 0;
          if ((int)uVar9 < param_2->ArrayNum) {
            uVar5 = uVar14;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          pFVar8 = (param_2->AllocatorInstance).Data + local_58;
          uVar5 = 0;
          if ((int)uVar11 < *(int *)(pFVar8 + 8)) {
            uVar5 = uVar10;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          uVar5 = *(uint *)(*(longlong *)pFVar8 + lVar13);
          uVar6 = 0;
          if ((int)uVar5 < param_1->ArrayNum) {
            uVar6 = ~uVar5 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          pFVar8 = (param_1->AllocatorInstance).Data;
          uVar6 = 0;
          if ((int)uVar11 < *(int *)(pFVar12 + 8)) {
            uVar6 = uVar10;
          }
          if ((uVar6 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          if (*(int *)(pFVar8 + (longlong)(int)uVar5 * 0x10 + 8) <
              *(int *)(*(longlong *)pFVar12 + lVar13)) {
            return false;
          }
          uVar11 = uVar11 + 1;
          lVar13 = lVar13 + 4;
        }
        local_58 = local_58 + 0x10;
        uVar9 = uVar9 + 1;
        if (iVar4 <= (int)uVar9) {
          return 0 < iVar7;
        }
      }
    }
  }
  return false;
}

// IsClean @ 143b24f60

bool __cdecl
Chaos::Softs::FGaussSeidelMainConstraint<double,Chaos::TDynamicParticles<double,3>_>::IsClean
          (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  uint uVar14;
  longlong local_58;
  
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_3->ArrayNum) {
    iVar7 = 0;
    uVar9 = 0;
    if (0 < iVar4) {
      local_58 = 0;
      while( true ) {
        uVar14 = ~uVar9 >> 0x1f;
        uVar11 = 0;
        if ((int)uVar9 < iVar4) {
          uVar11 = uVar14;
        }
        if ((uVar11 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        iVar7 = iVar7 + *(int *)((param_2->AllocatorInstance).Data + local_58 + 8);
        uVar11 = 0;
        if ((int)uVar9 < param_2->ArrayNum) {
          uVar11 = uVar14;
        }
        if ((uVar11 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        pFVar12 = (param_2->AllocatorInstance).Data;
        uVar11 = 0;
        if ((int)uVar9 < param_3->ArrayNum) {
          uVar11 = uVar14;
        }
        if ((uVar11 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        if (*(int *)(pFVar12 + local_58 + 8) !=
            *(int *)((param_3->AllocatorInstance).Data + local_58 + 8)) break;
        uVar11 = 0;
        lVar13 = 0;
        while( true ) {
          uVar5 = 0;
          if ((int)uVar9 < param_2->ArrayNum) {
            uVar5 = uVar14;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          iVar4 = param_2->ArrayNum;
          if (*(int *)((param_2->AllocatorInstance).Data + local_58 + 8) <= (int)uVar11) break;
          uVar5 = 0;
          if ((int)uVar9 < iVar4) {
            uVar5 = uVar14;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          pFVar12 = (param_2->AllocatorInstance).Data;
          uVar10 = ~uVar11 >> 0x1f;
          uVar5 = 0;
          if ((int)uVar11 < *(int *)(pFVar12 + local_58 + 8)) {
            uVar5 = uVar10;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          if (param_1->ArrayNum < *(int *)(*(longlong *)(pFVar12 + local_58) + lVar13)) {
            return false;
          }
          uVar5 = 0;
          if ((int)uVar9 < param_3->ArrayNum) {
            uVar5 = uVar14;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          pFVar12 = (param_3->AllocatorInstance).Data + local_58;
          uVar5 = 0;
          if ((int)uVar9 < param_2->ArrayNum) {
            uVar5 = uVar14;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          pFVar8 = (param_2->AllocatorInstance).Data + local_58;
          uVar5 = 0;
          if ((int)uVar11 < *(int *)(pFVar8 + 8)) {
            uVar5 = uVar10;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          uVar5 = *(uint *)(*(longlong *)pFVar8 + lVar13);
          uVar6 = 0;
          if ((int)uVar5 < param_1->ArrayNum) {
            uVar6 = ~uVar5 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          pFVar8 = (param_1->AllocatorInstance).Data;
          uVar6 = 0;
          if ((int)uVar11 < *(int *)(pFVar12 + 8)) {
            uVar6 = uVar10;
          }
          if ((uVar6 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          if (*(int *)(pFVar8 + (longlong)(int)uVar5 * 0x10 + 8) <
              *(int *)(*(longlong *)pFVar12 + lVar13)) {
            return false;
          }
          uVar11 = uVar11 + 1;
          lVar13 = lVar13 + 4;
        }
        local_58 = local_58 + 0x10;
        uVar9 = uVar9 + 1;
        if (iVar4 <= (int)uVar9) {
          return 0 < iVar7;
        }
      }
    }
  }
  return false;
}

// PerNodeHessian @ 143b2a740

TArray<TFunction<void___cdecl(int,float,Chaos::PMatrix<float,3,3>_&)>,TSizedDefaultAllocator<32>_> *
__thiscall
Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::PerNodeHessian
          (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *this)

{
  return &this->AddPerNodeHessian;
}

// PerNodeHessian @ 143b2a750

TArray<TFunction<void___cdecl(int,float,Chaos::PMatrix<float,3,3>_&)>,TSizedDefaultAllocator<32>_> *
__thiscall
Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::PerNodeHessian
          (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *this)

{
  return &this->AddPerNodeHessian;
}

// ResetExternalAcceleration @ 143b36fd0

void __thiscall
Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
ResetExternalAcceleration(FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *this)

{
  *(undefined8 *)&this->ExternalAcceleration = 0;
  *(undefined4 *)&(this->ExternalAcceleration).field_0x8 = 0;
  return;
}

// StaticConstraintResidualAndHessian @ 143b42a90

TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&)>,TSizedDefaultAllocator<32>_>
* __thiscall
Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
StaticConstraintResidualAndHessian
          (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *this)

{
  return &this->AddStaticConstraintResidualAndHessian;
}

// StaticConstraintResidualAndHessian @ 143b42aa0

TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&)>,TSizedDefaultAllocator<32>_>
* __thiscall
Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
StaticConstraintResidualAndHessian
          (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *this)

{
  return &this->AddStaticConstraintResidualAndHessian;
}

// TransientConstraintResidualAndHessian @ 143b46c00

TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&)>,TSizedDefaultAllocator<32>_>
* __thiscall
Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
TransientConstraintResidualAndHessian
          (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *this)

{
  return &this->AddTransientConstraintResidualAndHessian;
}

// TransientConstraintResidualAndHessian @ 143b46c10

TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&)>,TSizedDefaultAllocator<32>_>
* __thiscall
Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
TransientConstraintResidualAndHessian
          (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *this)

{
  return &this->AddTransientConstraintResidualAndHessian;
}

