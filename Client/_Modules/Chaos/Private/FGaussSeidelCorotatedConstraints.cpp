// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 10

// <lambda_invoker_cdecl> @ 143a248b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`Chaos::Softs::FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
InitializeCorotatedLambdas'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (PMatrix<float,3,3> *param_1,float param_2,float param_3,PMatrix<float,3,3> *param_4)

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
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  PMatrix<float,3,3> aPStack_e8 [3];
  
  auStack_128 = (undefined1  [8])0x0;
  uStack_118 = 0;
  uStack_108 = 0;
  uStack_120 = 0;
  uStack_110 = 0;
  uStack_100 = 0;
  uStack_f8 = ___xmm_3f800000000000000000000000000000;
  uStack_f0 = _UNK_150689648;
  aPStack_e8[0]._0_8_ = 0;
  aPStack_e8[0]._16_8_ = 0;
  aPStack_e8[0]._32_8_ = 0;
  aPStack_e8[0]._8_8_ = 0;
  aPStack_e8[0]._24_8_ = 0;
  aPStack_e8[0]._40_8_ = 0;
  aPStack_e8[0]._48_8_ = ___xmm_3f800000000000000000000000000000;
  aPStack_e8[0]._56_8_ = _UNK_150689648;
  Chaos::PolarDecomposition<float>(param_1,(PMatrix<float,3,3> *)auStack_128,aPStack_e8);
  fVar1 = *(float *)&param_1->field_0x28;
  fVar13 = param_2 + param_2;
  fVar2 = *(float *)&param_1->field_0x24;
  fVar3 = *(float *)&param_1->field_0x10;
  fVar4 = *(float *)&param_1->field_0x14;
  fVar5 = *(float *)&param_1->field_0x18;
  fVar6 = *(float *)&param_1->field_0x8;
  fVar7 = *(float *)&param_1->field_0x20;
  fVar8 = *(float *)&param_1->field_0x4;
  fVar9 = *(float *)param_1;
  fVar12 = fVar4 * fVar1 - fVar5 * fVar2;
  fVar11 = fVar3 * fVar2 - fVar7 * fVar4;
  fVar14 = (((fVar12 * fVar9 - (fVar3 * fVar1 - fVar7 * fVar5) * fVar8) + fVar11 * fVar6) -
           __real_3f800000) * param_3;
  fVar10 = *(float *)&param_1->field_0x28;
  *(float *)param_4 = (fVar9 - (float)auStack_128._0_4_) * fVar13 + fVar12 * fVar14;
  *(float *)&param_4->field_0x4 =
       (fVar8 - (float)auStack_128._4_4_) * fVar13 + (fVar7 * fVar5 - fVar3 * fVar1) * fVar14;
  *(float *)&param_4->field_0x8 = (fVar6 - (float)uStack_120) * fVar13 + fVar11 * fVar14;
  *(undefined4 *)&param_4->field_0xc = 0;
  *(float *)&param_4->field_0x10 =
       (fVar6 * fVar2 - fVar8 * fVar1) * fVar14 + (fVar3 - (float)uStack_118) * fVar13;
  *(float *)&param_4->field_0x14 =
       (fVar9 * fVar10 - fVar7 * fVar6) * fVar14 + (fVar4 - uStack_118._4_4_) * fVar13;
  *(float *)&param_4->field_0x18 =
       (fVar7 * fVar8 - fVar9 * fVar2) * fVar14 + (fVar5 - (float)uStack_110) * fVar13;
  *(undefined4 *)&param_4->field_0x1c = 0;
  *(float *)&param_4->field_0x20 =
       (fVar8 * fVar5 - fVar6 * fVar4) * fVar14 + (fVar7 - (float)uStack_108) * fVar13;
  *(float *)&param_4->field_0x24 =
       (fVar3 * fVar6 - fVar9 * fVar5) * fVar14 + (fVar2 - uStack_108._4_4_) * fVar13;
  *(float *)&param_4->field_0x28 =
       (fVar9 * fVar4 - fVar3 * fVar8) * fVar14 + (fVar10 - (float)uStack_100) * fVar13;
  *(undefined8 *)&param_4->field_0x2c = 0;
  *(undefined8 *)&param_4->field_0x34 = 0;
  *(undefined4 *)&param_4->field_0x3c = 0x3f800000;
  return;
}

// <lambda_invoker_cdecl> @ 143a248d0

void __cdecl
`Chaos::Softs::FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
InitializeCorotatedLambdas'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (PMatrix<float,3,3> *param_1,PMatrix<float,3,3> *param_2,float param_3,float param_4,
          int param_5,float param_6,PMatrix<float,3,3> *param_7)

{
  undefined1 local_18 [24];
  
  operator()(local_18,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

// <lambda_invoker_cdecl> @ 143a24970

void __cdecl
`Chaos::Softs::FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
InitializeCorotatedLambdas'::__l2::<lambda_3>::<lambda_invoker_cdecl>
          (FSolverParticles *param_1,int param_2,float param_3,TVector<float,3> *param_4)

{
  return;
}

// <lambda_invoker_cdecl> @ 143a24980

void __cdecl
`Chaos::Softs::FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
InitializeCorotatedLambdas'::__l2::<lambda_4>::<lambda_invoker_cdecl>
          (FSolverParticles *param_1,int param_2,float param_3,PMatrix<float,3,3> *param_4)

{
  return;
}

// FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles> @ 143a311f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles> * __thiscall
Chaos::Softs::FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles>
          (FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1,
          TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3,
          TArray<float,TSizedDefaultAllocator<32>_> *param_4,
          TArray<float,TSizedDefaultAllocator<32>_> *param_5,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_6,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_7,
          int param_8,int param_9,bool param_10,bool param_11,float param_12,
          FDeformableXPBDCorotatedParams *param_13,float *param_14,bool param_15)

{
  int *piVar1;
  int *piVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  float fVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *pFVar13;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar14;
  longlong *plVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  undefined1 auStackY_1c8 [32];
  undefined4 local_178 [2];
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *local_170;
  TVector<float,3> local_168;
  TVector<float,3> local_15c;
  TVector<float,3> local_150;
  FSolverParticles *local_140;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_138;
  longlong local_128;
  undefined8 uStack_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  longlong *plStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  longlong *plStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *plStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_170 = param_2;
  local_140 = param_1;
  FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
  FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>
            ((FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)this,param_1,param_2
             ,param_3,param_4,param_5,param_13,param_14,param_15,false);
  pTVar3 = &this->Particle2Incident;
  pTVar19 = &this->IncidentElements;
  *(undefined ***)this =
       &___7__FGaussSeidelCorotatedConstraints_MVFSolverParticles_Softs_Chaos___Softs_Chaos__6B_;
  piVar1 = &(this->Particle2Incident).ArrayMax;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->IncidentElements).ArrayMax;
  (this->Particle2Incident).ArrayNum = 0;
  *piVar1 = 0;
  (pTVar19->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar11 = param_6->ArrayNum;
  pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)(param_6->AllocatorInstance).Data;
  (this->IncidentElements).ArrayNum = iVar11;
  if (iVar11 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar11,0,&pTVar19->AllocatorInstance,iVar11,piVar2);
    ConstructItems<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((pTVar19->AllocatorInstance).Data,pTVar5,iVar11);
  }
  pTVar19 = &this->IncidentElementsLocal;
  (pTVar19->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->IncidentElementsLocal).ArrayMax;
  iVar11 = param_7->ArrayNum;
  pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)(param_7->AllocatorInstance).Data;
  (this->IncidentElementsLocal).ArrayNum = iVar11;
  if (iVar11 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar11,0,&pTVar19->AllocatorInstance,iVar11,piVar2);
    ConstructItems<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((pTVar19->AllocatorInstance).Data,pTVar5,iVar11);
  }
  (this->ParticlesPerColor).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParticlesPerColor).ArrayNum = 0;
  (this->ParticlesPerColor).ArrayMax = 0;
  this->ParticleStartIndex = param_8;
  this->ParticleEndIndex = param_9;
  (this->xtilde).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->X_k_1).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->X_k).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->xtilde).ArrayNum = 0;
  (this->xtilde).ArrayMax = 0;
  (this->X_k_1).ArrayNum = 0;
  (this->X_k_1).ArrayMax = 0;
  (this->X_k).ArrayNum = 0;
  (this->X_k).ArrayMax = 0;
  this->bDoQuasistatics = param_10;
  this->bDoSOR = param_11;
  *(undefined8 *)&this->ComputeStress = 0;
  *(undefined8 *)&(this->ComputeStress).field_0x28 = 0;
  *(undefined8 *)&this->ComputeHessianHelper = 0;
  *(undefined8 *)&(this->ComputeHessianHelper).field_0x28 = 0;
  *(undefined8 *)&this->AddAdditionalRes = 0;
  *(undefined8 *)&(this->AddAdditionalRes).field_0x28 = 0;
  *(undefined8 *)&this->AddAdditionalHessian = 0;
  *(undefined8 *)&(this->AddAdditionalHessian).field_0x28 = 0;
  (this->ParticleColors).Ptr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  this->CurrentIt = 0;
  this->OmegaSOR = param_12;
  this->LocalNewtonTol = 1e-05;
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<float,TSizedDefaultAllocator<32>_> *)&this->field_0x8,0,Default);
  uVar22 = param_9 - param_8;
  local_178[0] = 0xffffffff;
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
  }
  (this->Particle2Incident).ArrayNum = 0;
  if (*piVar1 != uVar22) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar22,&pTVar3->AllocatorInstance,0,piVar1);
  }
  if (0 < (int)uVar22) {
    uVar16 = (ulonglong)uVar22;
    do {
      pFVar6 = (pTVar3->AllocatorInstance).Data;
      if (((pFVar6 <= (FScriptContainerElement *)local_178) &&
          ((FScriptContainerElement *)local_178 < pFVar6 + (longlong)*piVar1 * 4)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar7 = (code *)swi(3);
        pFVar13 = (FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)
                  (*pcVar7)();
        return pFVar13;
      }
      iVar11 = (this->Particle2Incident).ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar3->AllocatorInstance,piVar1);
      }
      (this->Particle2Incident).ArrayNum = iVar11 + 1;
      *(undefined4 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_178[0];
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  uVar22 = 0;
  if (0 < (this->IncidentElements).ArrayNum) {
    lVar21 = 0;
    do {
      uVar17 = 0;
      if ((int)uVar22 < (this->Particle2Incident).ArrayNum) {
        uVar17 = ~uVar22 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        pFVar13 = (FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)
                  (*pcVar7)();
        return pFVar13;
      }
      *(uint *)((pTVar3->AllocatorInstance).Data + lVar21) = uVar22;
      uVar22 = uVar22 + 1;
      lVar21 = lVar21 + 4;
    } while ((int)uVar22 < (this->IncidentElements).ArrayNum);
  }
  uVar22 = 0;
  if (0 < local_170->ArrayNum) {
    lVar21 = 0;
    lVar18 = 0;
    uVar17 = 2;
    do {
      lVar20 = 3;
      uVar23 = ~uVar22 >> 0x1f;
      do {
        uVar12 = 0;
        if ((int)uVar22 < *(int *)&this->field_0x78) {
          uVar12 = uVar23;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          pFVar13 = (FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)
                    (*pcVar7)();
          return pFVar13;
        }
        fVar4 = *(float *)(lVar18 + *(longlong *)&this->field_0x70);
        uVar12 = 0;
        if ((int)(uVar17 - 2) < *(int *)&this->field_0x20) {
          uVar12 = ~(uVar17 - 2) >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          pFVar13 = (FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)
                    (*pcVar7)();
          return pFVar13;
        }
        *(float *)(*(longlong *)&this->field_0x18 + lVar21) =
             *(float *)(*(longlong *)&this->field_0x18 + lVar21) / fVar4;
        uVar12 = 0;
        if ((int)uVar22 < *(int *)&this->field_0x78) {
          uVar12 = uVar23;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          pFVar13 = (FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)
                    (*pcVar7)();
          return pFVar13;
        }
        fVar4 = *(float *)(lVar18 + *(longlong *)&this->field_0x70);
        uVar12 = 0;
        if ((int)(uVar17 - 1) < *(int *)&this->field_0x20) {
          uVar12 = ~(uVar17 - 1) >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          pFVar13 = (FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)
                    (*pcVar7)();
          return pFVar13;
        }
        *(float *)(*(longlong *)&this->field_0x18 + 4 + lVar21) =
             *(float *)(*(longlong *)&this->field_0x18 + 4 + lVar21) / fVar4;
        uVar12 = 0;
        if ((int)uVar22 < *(int *)&this->field_0x78) {
          uVar12 = uVar23;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          pFVar13 = (FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)
                    (*pcVar7)();
          return pFVar13;
        }
        fVar4 = *(float *)(lVar18 + *(longlong *)&this->field_0x70);
        uVar12 = 0;
        if ((int)uVar17 < *(int *)&this->field_0x20) {
          uVar12 = ~uVar17 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          pFVar13 = (FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)
                    (*pcVar7)();
          return pFVar13;
        }
        uVar17 = uVar17 + 3;
        *(float *)(*(longlong *)&this->field_0x18 + 8 + lVar21) =
             *(float *)(*(longlong *)&this->field_0x18 + 8 + lVar21) / fVar4;
        lVar21 = lVar21 + 0xc;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      uVar22 = uVar22 + 1;
      lVar18 = lVar18 + 4;
    } while ((int)uVar22 < local_170->ArrayNum);
  }
  pTVar19 = &this->ParticlesPerColor;
  if (this->bDoQuasistatics == false) {
    local_168._0_8_ = 0;
    local_168._8_4_ = 0;
    TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::Init
              (&this->xtilde,&local_168,this->ParticleEndIndex - this->ParticleStartIndex);
  }
  if (this->bDoSOR != false) {
    local_15c._0_8_ = 0;
    local_15c._8_4_ = 0;
    TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::Init
              (&this->X_k_1,&local_15c,this->ParticleEndIndex - this->ParticleStartIndex);
    local_150._0_8_ = 0;
    local_150._8_4_ = 0;
    TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::Init
              (&this->X_k,&local_150,this->ParticleEndIndex - this->ParticleStartIndex);
  }
  pTVar14 = ComputeNodalColoring<float>
                      (&local_138,
                       (TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)
                       &this->field_0xa0,(TDynamicParticles<float,3> *)local_140,
                       this->ParticleStartIndex,this->ParticleEndIndex,&this->IncidentElements,
                       &this->IncidentElementsLocal);
  if (pTVar19 != pTVar14) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar19->AllocatorInstance).Data,
               (this->ParticlesPerColor).ArrayNum);
    pFVar6 = (pTVar19->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar19->AllocatorInstance).Data = (pTVar14->AllocatorInstance).Data;
    (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ParticlesPerColor).ArrayNum = pTVar14->ArrayNum;
    (this->ParticlesPerColor).ArrayMax = pTVar14->ArrayMax;
    pTVar14->ArrayNum = 0;
    pTVar14->ArrayMax = 0;
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_138.AllocatorInstance.Data,
             local_138.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_138.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  local_128 = *(longlong *)&this->ComputeStress;
  uVar9 = *(undefined8 *)&(this->ComputeStress).field_0x8;
  local_118 = *(longlong *)&(this->ComputeStress).field_0x10;
  uStack_110 = *(undefined8 *)&(this->ComputeStress).field_0x18;
  uVar8 = *(undefined8 *)&(this->ComputeStress).field_0x20;
  plStack_100 = *(longlong **)&(this->ComputeStress).field_0x28;
  *(code **)&this->ComputeStress =
       UE::Core::Private::Function::
       TFunctionRefCaller<void_(__cdecl*)(Chaos::PMatrix<float,3,3>_const_&,float,float,Chaos::PMatrix<float,3,3>_&),void,Chaos::PMatrix<float,3,3>_const_&,float,float,Chaos::PMatrix<float,3,3>_&>
       ::Call;
  *(undefined8 *)&(this->ComputeStress).field_0x8 = uStack_120;
  *(undefined4 *)&(this->ComputeStress).field_0x10 = 0x50af79a0;
  *(undefined4 *)&(this->ComputeStress).field_0x14 = 1;
  *(undefined4 *)&(this->ComputeStress).field_0x18 = 0x43a248b0;
  *(undefined4 *)&(this->ComputeStress).field_0x1c = 1;
  *(undefined4 *)&(this->ComputeStress).field_0x20 = (undefined4)local_108;
  *(undefined4 *)&(this->ComputeStress).field_0x24 = local_108._4_4_;
  *(undefined4 *)&(this->ComputeStress).field_0x28 = 0;
  *(undefined4 *)&(this->ComputeStress).field_0x2c = 0;
  local_108 = uVar8;
  uStack_120 = uVar9;
  if (local_128 != 0) {
    plVar15 = &local_118;
    if (plStack_100 != (longlong *)0x0) {
      plVar15 = plStack_100;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  local_f8 = *(longlong *)&this->ComputeHessianHelper;
  uVar9 = *(undefined8 *)&(this->ComputeHessianHelper).field_0x8;
  local_e8 = *(longlong *)&(this->ComputeHessianHelper).field_0x10;
  uStack_e0 = *(undefined8 *)&(this->ComputeHessianHelper).field_0x18;
  uVar8 = *(undefined8 *)&(this->ComputeHessianHelper).field_0x20;
  plStack_d0 = *(longlong **)&(this->ComputeHessianHelper).field_0x28;
  *(code **)&this->ComputeHessianHelper =
       UE::Core::Private::Function::
       TFunctionRefCaller<void_(__cdecl*)(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,float,float,int,float,Chaos::PMatrix<float,3,3>_&),void,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,float,float,int,float,Chaos::PMatrix<float,3,3>_&>
       ::Call;
  *(undefined8 *)&(this->ComputeHessianHelper).field_0x8 = uStack_f0;
  *(undefined4 *)&(this->ComputeHessianHelper).field_0x10 = 0x50af79c0;
  *(undefined4 *)&(this->ComputeHessianHelper).field_0x14 = 1;
  *(undefined4 *)&(this->ComputeHessianHelper).field_0x18 = 0x43a248d0;
  *(undefined4 *)&(this->ComputeHessianHelper).field_0x1c = 1;
  *(undefined4 *)&(this->ComputeHessianHelper).field_0x20 = (undefined4)local_d8;
  *(undefined4 *)&(this->ComputeHessianHelper).field_0x24 = local_d8._4_4_;
  *(undefined4 *)&(this->ComputeHessianHelper).field_0x28 = 0;
  *(undefined4 *)&(this->ComputeHessianHelper).field_0x2c = 0;
  uStack_f0 = uVar9;
  local_d8 = uVar8;
  if (local_f8 != 0) {
    plVar15 = &local_e8;
    if (plStack_d0 != (longlong *)0x0) {
      plVar15 = plStack_d0;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  local_c8 = *(longlong *)&this->AddAdditionalRes;
  uVar9 = *(undefined8 *)&(this->AddAdditionalRes).field_0x8;
  local_b8 = *(longlong *)&(this->AddAdditionalRes).field_0x10;
  uStack_b0 = *(undefined8 *)&(this->AddAdditionalRes).field_0x18;
  uVar8 = *(undefined8 *)&(this->AddAdditionalRes).field_0x20;
  plStack_a0 = *(longlong **)&(this->AddAdditionalRes).field_0x28;
  *(code **)&this->AddAdditionalRes =
       UE::Core::Private::Function::
       TFunctionRefCaller<void_(__cdecl*)(Chaos::Softs::FSolverParticles_const_&,int,float,Chaos::TVector<float,3>_&),void,Chaos::Softs::FSolverParticles_const_&,int,float,Chaos::TVector<float,3>_&>
       ::Call;
  *(undefined8 *)&(this->AddAdditionalRes).field_0x8 = uStack_c0;
  *(undefined4 *)&(this->AddAdditionalRes).field_0x10 = 0x50af79e0;
  *(undefined4 *)&(this->AddAdditionalRes).field_0x14 = 1;
  *(undefined4 *)&(this->AddAdditionalRes).field_0x18 = 0x43a24970;
  *(undefined4 *)&(this->AddAdditionalRes).field_0x1c = 1;
  *(undefined4 *)&(this->AddAdditionalRes).field_0x20 = (undefined4)local_a8;
  *(undefined4 *)&(this->AddAdditionalRes).field_0x24 = local_a8._4_4_;
  *(undefined4 *)&(this->AddAdditionalRes).field_0x28 = 0;
  *(undefined4 *)&(this->AddAdditionalRes).field_0x2c = 0;
  uStack_c0 = uVar9;
  local_a8 = uVar8;
  if (local_c8 != 0) {
    plVar15 = &local_b8;
    if (plStack_a0 != (longlong *)0x0) {
      plVar15 = plStack_a0;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  local_98 = *(longlong *)&this->AddAdditionalHessian;
  uVar9 = *(undefined8 *)&(this->AddAdditionalHessian).field_0x8;
  local_88 = *(longlong *)&(this->AddAdditionalHessian).field_0x10;
  uStack_80 = *(undefined8 *)&(this->AddAdditionalHessian).field_0x18;
  uVar8 = *(undefined8 *)&(this->AddAdditionalHessian).field_0x20;
  plStack_70 = *(longlong **)&(this->AddAdditionalHessian).field_0x28;
  *(code **)&this->AddAdditionalHessian =
       UE::Core::Private::Function::
       TFunctionRefCaller<void_(__cdecl*)(Chaos::Softs::FSolverParticles_const_&,int,float,Chaos::PMatrix<float,3,3>_&),void,Chaos::Softs::FSolverParticles_const_&,int,float,Chaos::PMatrix<float,3,3>_&>
       ::Call;
  *(undefined8 *)&(this->AddAdditionalHessian).field_0x8 = uStack_90;
  *(undefined4 *)&(this->AddAdditionalHessian).field_0x10 = 0x50af7a00;
  *(undefined4 *)&(this->AddAdditionalHessian).field_0x14 = 1;
  *(undefined4 *)&(this->AddAdditionalHessian).field_0x18 = 0x43a24980;
  *(undefined4 *)&(this->AddAdditionalHessian).field_0x1c = 1;
  *(undefined4 *)&(this->AddAdditionalHessian).field_0x20 = (undefined4)local_78;
  *(undefined4 *)&(this->AddAdditionalHessian).field_0x24 = local_78._4_4_;
  *(undefined4 *)&(this->AddAdditionalHessian).field_0x28 = 0;
  *(undefined4 *)&(this->AddAdditionalHessian).field_0x2c = 0;
  uStack_90 = uVar9;
  local_78 = uVar8;
  if (local_98 != 0) {
    plVar15 = &local_88;
    if (plStack_70 != (longlong *)0x0) {
      plVar15 = plStack_70;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  return this;
}

// ~FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles> @ 143a384b0

void __thiscall
Chaos::Softs::FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
~FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles>
          (FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  *(undefined ***)this =
       &___7__FGaussSeidelCorotatedConstraints_MVFSolverParticles_Softs_Chaos___Softs_Chaos__6B_;
  pTVar1 = (this->ParticleColors).Ptr;
  if (pTVar1 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pTVar1,0x10);
  }
  if (*(longlong *)&this->AddAdditionalHessian != 0) {
    plVar3 = *(longlong **)&(this->AddAdditionalHessian).field_0x28;
    plVar4 = (longlong *)&(this->AddAdditionalHessian).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&this->AddAdditionalRes != 0) {
    plVar3 = *(longlong **)&(this->AddAdditionalRes).field_0x28;
    plVar4 = (longlong *)&(this->AddAdditionalRes).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&this->ComputeHessianHelper != 0) {
    plVar3 = *(longlong **)&(this->ComputeHessianHelper).field_0x28;
    plVar4 = (longlong *)&(this->ComputeHessianHelper).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&this->ComputeStress != 0) {
    plVar3 = *(longlong **)&(this->ComputeStress).field_0x28;
    plVar4 = (longlong *)&(this->ComputeStress).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  pFVar2 = (this->X_k).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->X_k_1).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->xtilde).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->ParticlesPerColor).AllocatorInstance.Data,(this->ParticlesPerColor).ArrayNum);
  pFVar2 = (this->ParticlesPerColor).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->IncidentElementsLocal).AllocatorInstance.Data,
             (this->IncidentElementsLocal).ArrayNum);
  pFVar2 = (this->IncidentElementsLocal).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->IncidentElements).AllocatorInstance.Data,(this->IncidentElements).ArrayNum);
  pFVar2 = (this->IncidentElements).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Particle2Incident).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
  ~FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>
            ((FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)this);
  return;
}

// operator() @ 143a42fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`Chaos::Softs::FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
InitializeCorotatedLambdas'::__l2::<lambda_2>::operator()
          (void *this,PMatrix<float,3,3> *param_1,PMatrix<float,3,3> *param_2,float param_3,
          float param_4,int param_5,float param_6,PMatrix<float,3,3> *param_7)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_228 [32];
  float local_208 [4];
  float local_1f8 [2];
  float fStack_1f0;
  float afStack_1ec [4];
  float afStack_1dc [5];
  float local_1c8 [2];
  float afStack_1c0 [2];
  float local_1b8 [6];
  float afStack_1a0 [2];
  float local_198 [2];
  float afStack_190 [2];
  float local_188 [2];
  float afStack_180 [2];
  TMatrix<float> local_178;
  TMatrix<float> local_138;
  TMatrix<float> local_f8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_228;
  fVar9 = *(float *)&param_1->field_0x28;
  fVar10 = *(float *)&param_1->field_0x8;
  fVar11 = *(float *)&param_1->field_0x20;
  fVar12 = *(float *)&param_1->field_0x18;
  fVar13 = *(float *)&param_1->field_0x10;
  fVar3 = *(float *)param_1;
  lVar7 = (longlong)param_5;
  fVar4 = *(float *)&param_1->field_0x4;
  fVar5 = *(float *)&param_1->field_0x24;
  local_178.M[0][3] = 0.0;
  fVar6 = *(float *)&param_1->field_0x14;
  local_178.M[1][3] = 0.0;
  local_178.M[2][3] = 0.0;
  local_178.M[0][0] = fVar6 * fVar9 - fVar12 * fVar5;
  local_178.M[0][1] = fVar10 * fVar5 - fVar4 * fVar9;
  local_178.M[0][2] = fVar4 * fVar12 - fVar10 * fVar6;
  local_178.M[1][0] = fVar11 * fVar12 - fVar13 * fVar9;
  local_178.M[1][1] = fVar3 * fVar9 - fVar11 * fVar10;
  local_178.M[1][2] = fVar13 * fVar10 - fVar3 * fVar12;
  local_178.M[2][0] = fVar13 * fVar5 - fVar11 * fVar6;
  local_178.M[2][1] = fVar11 * fVar4 - fVar3 * fVar5;
  local_178.M[2][2] = fVar3 * fVar6 - fVar13 * fVar4;
  local_178.M[3]._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_178.M[3]._8_8_ = _UNK_150689648;
  if (param_5 == 0) {
    fVar11 = *(float *)&param_2->field_0x24 + *(float *)&param_2->field_0x20 +
             *(float *)&param_2->field_0x28;
    fVar9 = *(float *)&param_2->field_0x14 + *(float *)&param_2->field_0x10 +
            *(float *)&param_2->field_0x18;
    fVar10 = *(float *)&param_2->field_0x4 + *(float *)param_2 + *(float *)&param_2->field_0x8;
    fVar9 = (fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9) * (param_6 + param_6) * param_3;
    *(float *)param_7 = fVar9 + *(float *)param_7;
    *(float *)&param_7->field_0x14 = fVar9 + *(float *)&param_7->field_0x14;
    *(float *)&param_7->field_0x28 = fVar9 + *(float *)&param_7->field_0x28;
    VectorMatrixMultiply(&local_138,&local_178,(TMatrix<float> *)param_2);
    pfVar8 = local_1b8 + 1;
    lVar7 = 0;
    local_1b8[0] = local_138.M[0][0];
    local_1b8[1] = local_138.M[0][1];
    local_1b8[2] = local_138.M[0][2];
    local_1b8[3] = local_138.M[0][3];
    local_1b8[4] = local_138.M[1][0];
    local_1b8[5] = local_138.M[1][1];
    afStack_1a0[0] = local_138.M[1][2];
    afStack_1a0[1] = local_138.M[1][3];
    local_198[0] = local_138.M[2][0];
    local_198[1] = local_138.M[2][1];
    afStack_190[0] = local_138.M[2][2];
    afStack_190[1] = local_138.M[2][3];
    local_188[0] = local_138.M[3][0];
    local_188[1] = local_138.M[3][1];
    afStack_180[0] = local_138.M[3][2];
    afStack_180[1] = local_138.M[3][3];
    local_208[0] = 0.0;
    local_208[1] = 0.0;
    local_208[2] = 0.0;
    do {
      pfVar1 = pfVar8 + -1;
      pfVar2 = pfVar8 + 1;
      fVar9 = *pfVar8;
      pfVar8 = pfVar8 + 4;
      local_208[lVar7] = *pfVar1 + local_208[lVar7] + *pfVar2 + fVar9;
      lVar7 = lVar7 + 1;
    } while (lVar7 < 3);
    fVar9 = param_4 * param_6;
    *(undefined8 *)&param_7->field_0x30 = 0;
    fVar10 = fVar9 * local_208[0];
    *(float *)param_7 = local_208[0] * fVar10 + *(float *)param_7;
    *(float *)&param_7->field_0x10 = local_208[1] * fVar10 + *(float *)&param_7->field_0x10;
    fVar11 = local_208[1] * fVar9;
    *(float *)&param_7->field_0x20 = local_208[2] * fVar10 + *(float *)&param_7->field_0x20;
    *(float *)&param_7->field_0x14 = local_208[1] * fVar11 + *(float *)&param_7->field_0x14;
    fVar9 = local_208[2] * fVar9;
    *(float *)&param_7->field_0x4 = local_208[0] * fVar11 + *(float *)&param_7->field_0x4;
    *(float *)&param_7->field_0x24 = local_208[2] * fVar11 + *(float *)&param_7->field_0x24;
    *(float *)&param_7->field_0x18 = local_208[1] * fVar9 + *(float *)&param_7->field_0x18;
    *(float *)&param_7->field_0x28 = local_208[2] * fVar9 + *(float *)&param_7->field_0x28;
    *(float *)&param_7->field_0x8 = fVar9 * local_208[0] + *(float *)&param_7->field_0x8;
    *(undefined4 *)&param_7->field_0x38 = 0;
  }
  else {
    fVar9 = *(float *)((longlong)param_2 + lVar7 * 4 + -4);
    fVar9 = (*(float *)(&param_2->field_0xc + lVar7 * 4) *
             *(float *)(&param_2->field_0xc + lVar7 * 4) + fVar9 * fVar9 +
            *(float *)(&param_2->field_0x1c + lVar7 * 4) *
            *(float *)(&param_2->field_0x1c + lVar7 * 4)) * (param_6 + param_6) * param_3;
    *(float *)param_7 = fVar9 + *(float *)param_7;
    *(float *)&param_7->field_0x14 = fVar9 + *(float *)&param_7->field_0x14;
    *(float *)&param_7->field_0x28 = fVar9 + *(float *)&param_7->field_0x28;
    VectorMatrixMultiply(&local_f8,&local_178,(TMatrix<float> *)param_2);
    local_1f8[0] = local_f8.M[0][0];
    local_1f8[1] = local_f8.M[0][1];
    fStack_1f0 = local_f8.M[0][2];
    afStack_1ec[0] = local_f8.M[0][3];
    afStack_1ec[1] = local_f8.M[1][0];
    afStack_1ec[2] = local_f8.M[1][1];
    afStack_1ec[3] = local_f8.M[1][2];
    afStack_1dc[0] = local_f8.M[1][3];
    afStack_1dc[1] = local_f8.M[2][0];
    afStack_1dc[2] = local_f8.M[2][1];
    afStack_1dc[3] = local_f8.M[2][2];
    afStack_1dc[4] = local_f8.M[2][3];
    local_1c8[0] = local_f8.M[3][0];
    local_1c8[1] = local_f8.M[3][1];
    afStack_1c0[0] = local_f8.M[3][2];
    afStack_1c0[1] = local_f8.M[3][3];
    fVar9 = local_208[lVar7 + 3];
    fVar10 = afStack_1dc[lVar7];
    fVar11 = afStack_1ec[lVar7];
    fVar13 = param_4 * param_6;
    *(undefined8 *)&param_7->field_0x30 = 0;
    fVar12 = fVar13 * fVar9;
    *(float *)param_7 = fVar12 * fVar9 + *(float *)param_7;
    *(float *)&param_7->field_0x10 = fVar12 * fVar11 + *(float *)&param_7->field_0x10;
    *(float *)&param_7->field_0x20 = fVar12 * fVar10 + *(float *)&param_7->field_0x20;
    fVar12 = fVar13 * fVar11;
    fVar13 = fVar13 * fVar10;
    *(float *)&param_7->field_0x4 = fVar12 * fVar9 + *(float *)&param_7->field_0x4;
    *(float *)&param_7->field_0x14 = fVar12 * fVar11 + *(float *)&param_7->field_0x14;
    *(float *)&param_7->field_0x24 = fVar12 * fVar10 + *(float *)&param_7->field_0x24;
    *(float *)&param_7->field_0x8 = fVar13 * fVar9 + *(float *)&param_7->field_0x8;
    *(float *)&param_7->field_0x18 = fVar13 * fVar11 + *(float *)&param_7->field_0x18;
    *(float *)&param_7->field_0x28 = fVar13 * fVar10 + *(float *)&param_7->field_0x28;
    *(undefined4 *)&param_7->field_0x38 = 0;
  }
  return;
}

// AddHyperelasticResidualAndHessian @ 143a47de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
AddHyperelasticResidualAndHessian
          (FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1,int param_2,int param_3,float param_4,TVector<float,3> *param_5,
          PMatrix<float,3,3> *param_6)

{
  undefined4 uVar1;
  float fVar2;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  PMatrix<float,3,3> *pPVar9;
  PMatrix<float,3,3> *pPVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  TMatrix<float> *pTVar16;
  float fVar17;
  undefined1 auStack_3d8 [32];
  TMatrix<float> *local_3b8;
  int *local_3b0;
  float *local_3a8;
  PMatrix<float,3,3> *local_3a0;
  float local_398 [4];
  undefined4 local_388 [2];
  undefined4 local_380 [2];
  int local_378;
  float local_370 [2];
  int local_368 [2];
  undefined4 local_360 [2];
  undefined4 local_358 [4];
  float local_348;
  float local_344;
  float local_340;
  undefined4 local_33c;
  float local_338;
  float local_334;
  float local_330;
  undefined4 local_32c;
  float local_328;
  float local_324;
  float local_320;
  undefined4 local_31c;
  float local_318 [2];
  float afStack_310 [2];
  PMatrix<float,3,3> *local_308;
  float afStack_300 [6];
  float local_2e8 [4];
  float local_2d8 [4];
  float local_2c8 [2];
  float afStack_2c0 [2];
  TMatrix<float> local_2b8;
  TMatrix<float> local_278;
  float local_238 [2];
  float afStack_230 [2];
  float local_228 [2];
  float afStack_220 [2];
  float local_218 [2];
  float afStack_210 [2];
  float local_208 [2];
  float afStack_200 [2];
  TMatrix<float> local_1f8;
  TMatrix<float> local_1b8;
  PMatrix<float,3,3> local_178;
  PMatrix<float,3,3> local_138;
  PMatrix<float,3,3> local_f8;
  PMatrix<float,3,3> local_b8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_3d8;
  pTVar16 = (TMatrix<float> *)(longlong)param_2;
  local_308 = param_6;
  local_378 = param_3;
  pPVar9 = FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::ElementDmInv
                     ((FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)this,
                      &local_178,param_2);
  local_33c = 0;
  local_32c = 0;
  local_31c = 0;
  local_348 = *(float *)pPVar9;
  local_338 = *(float *)&pPVar9->field_0x4;
  local_328 = *(float *)&pPVar9->field_0x8;
  local_344 = *(float *)&pPVar9->field_0x10;
  local_334 = *(float *)&pPVar9->field_0x14;
  local_324 = *(float *)&pPVar9->field_0x18;
  local_340 = *(float *)&pPVar9->field_0x20;
  local_330 = *(float *)&pPVar9->field_0x24;
  local_320 = *(float *)&pPVar9->field_0x28;
  local_318[0] = ___xmm_3f800000000000000000000000000000;
  local_318[1] = _UNK_150689644;
  afStack_310[0] = _UNK_150689648;
  afStack_310[1] = _UNK_15068964c;
  pPVar9 = FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::ElementDmInv
                     ((FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)this,
                      &local_138,param_2);
  pPVar10 = FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::Ds
                      ((FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)this,
                       &local_f8,param_2,param_1);
  VectorMatrixMultiply(&local_1f8,(TMatrix<float> *)pPVar9,(TMatrix<float> *)pPVar10);
  lVar12 = 0;
  uVar15 = (uint)~param_2 >> 0x1f;
  local_238[0] = local_1f8.M[0][0];
  local_238[1] = local_1f8.M[0][1];
  afStack_230[0] = local_1f8.M[0][2];
  afStack_230[1] = local_1f8.M[0][3];
  uVar7 = 0;
  if (param_2 < *(int *)&this->field_0x68) {
    uVar7 = uVar15;
  }
  local_228[0] = local_1f8.M[1][0];
  local_228[1] = local_1f8.M[1][1];
  afStack_220[0] = local_1f8.M[1][2];
  afStack_220[1] = local_1f8.M[1][3];
  local_218[0] = local_1f8.M[2][0];
  local_218[1] = local_1f8.M[2][1];
  afStack_210[0] = local_1f8.M[2][2];
  afStack_210[1] = local_1f8.M[2][3];
  local_208[0] = local_1f8.M[3][0];
  local_208[1] = local_1f8.M[3][1];
  afStack_200[0] = local_1f8.M[3][2];
  afStack_200[1] = local_1f8.M[3][3];
  local_2b8.M[0][0] = 0.0;
  local_2b8.M[0][1] = 0.0;
  local_2b8.M[1][0] = 0.0;
  local_2b8.M[1][1] = 0.0;
  local_2b8.M[2][0] = 0.0;
  local_2b8.M[2][1] = 0.0;
  local_2b8.M[0][2] = 0.0;
  local_2b8.M[0][3] = 0.0;
  local_2b8.M[1][2] = 0.0;
  local_2b8.M[1][3] = 0.0;
  local_2b8.M[2][2] = 0.0;
  local_2b8.M[2][3] = 0.0;
  local_2b8.M[3][0] = ___xmm_3f800000000000000000000000000000;
  local_2b8.M[3][1] = _UNK_150689644;
  local_2b8.M[3][2] = _UNK_150689648;
  local_2b8.M[3][3] = _UNK_15068964c;
  if ((uVar7 == 0) &&
     (local_3b8 = pTVar16, local_3b0 = (int *)(longlong)*(int *)&this->field_0x68,
     bVar6 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar6
     )) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar1 = *(undefined4 *)(*(longlong *)&this->field_0x60 + (longlong)pTVar16 * 4);
  uVar7 = 0;
  if (param_2 < *(int *)&this->field_0x58) {
    uVar7 = uVar15;
  }
  if ((uVar7 == 0) &&
     (local_3b8 = pTVar16, local_3b0 = (int *)(longlong)*(int *)&this->field_0x58,
     bVar6 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar6
     )) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_380[0] = *(undefined4 *)(*(longlong *)&this->field_0x50 + (longlong)pTVar16 * 4);
  local_388[0] = uVar1;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->ComputeStress);
  pcVar4 = *(code **)&this->ComputeStress;
  plVar3 = *(longlong **)&(this->ComputeStress).field_0x28;
  plVar13 = (longlong *)&(this->ComputeStress).field_0x10;
  if (plVar3 != (longlong *)0x0) {
    plVar13 = plVar3;
  }
  uVar11 = (**(code **)(*plVar13 + 8))();
  local_3b8 = &local_2b8;
  (*pcVar4)(uVar11,local_238,local_380,local_388);
  uVar8 = 0;
  uVar7 = uVar8;
  if (param_2 < *(int *)&this->field_0xb8) {
    uVar7 = uVar15;
  }
  if ((uVar7 == 0) &&
     (local_3b8 = pTVar16, local_3b0 = (int *)(longlong)*(int *)&this->field_0xb8,
     bVar6 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar6
     )) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_278.M[2][2] =
       (float)(*(uint *)(*(longlong *)&this->field_0xb0 + (longlong)pTVar16 * 4) ^
              __xmm_80000000800000008000000080000000);
  local_278.M[0][3] = 0.0;
  local_278.M[0][0] = local_278.M[2][2] * local_348;
  local_278.M[1][3] = 0.0;
  local_278.M[1][0] = local_278.M[2][2] * local_338;
  local_278.M[2][3] = 0.0;
  local_278.M[2][0] = local_278.M[2][2] * local_328;
  local_278.M[0][1] = local_278.M[2][2] * local_344;
  local_278.M[1][1] = local_278.M[2][2] * local_334;
  local_278.M[2][1] = local_278.M[2][2] * local_324;
  local_278.M[0][2] = local_278.M[2][2] * local_340;
  local_278.M[1][2] = local_278.M[2][2] * local_330;
  local_278.M[2][2] = local_278.M[2][2] * local_320;
  local_278.M[3][0] = ___xmm_3f800000000000000000000000000000;
  local_278.M[3][1] = _UNK_150689644;
  local_278.M[3][2] = _UNK_150689648;
  local_278.M[3][3] = _UNK_15068964c;
  VectorMatrixMultiply(&local_1b8,&local_278,&local_2b8);
  iVar5 = local_378;
  lVar14 = (longlong)local_378;
  afStack_300[2] = local_1b8.M[0][0];
  afStack_300[3] = local_1b8.M[0][1];
  afStack_300[4] = local_1b8.M[0][2];
  afStack_300[5] = local_1b8.M[0][3];
  local_2e8[0] = local_1b8.M[1][0];
  local_2e8[1] = local_1b8.M[1][1];
  local_2e8[2] = local_1b8.M[1][2];
  local_2e8[3] = local_1b8.M[1][3];
  local_2d8[0] = local_1b8.M[2][0];
  local_2d8[1] = local_1b8.M[2][1];
  local_2d8[2] = local_1b8.M[2][2];
  local_2d8[3] = local_1b8.M[2][3];
  local_2c8[0] = local_1b8.M[3][0];
  local_2c8[1] = local_1b8.M[3][1];
  afStack_2c0[0] = local_1b8.M[3][2];
  afStack_2c0[1] = local_1b8.M[3][3];
  local_398[0] = 0.0;
  local_398[1] = 0.0;
  local_398[2] = 0.0;
  if (local_378 < 1) {
    do {
      *(float *)((longlong)local_398 + lVar12) =
           ((*(float *)((longlong)local_398 + lVar12) -
            *(float *)((longlong)afStack_300 + lVar12 + 8)) -
           *(float *)((longlong)local_2e8 + lVar12)) - *(float *)((longlong)local_2d8 + lVar12);
      lVar12 = lVar12 + 4;
    } while (lVar12 < 0xc);
  }
  else {
    local_398[0] = afStack_300[lVar14 * 4 + -2];
    local_398[1] = afStack_300[lVar14 * 4 + -1];
    local_398[2] = afStack_300[lVar14 * 4];
  }
  fVar17 = param_4 * param_4;
  local_398[0] = local_398[0] * fVar17;
  local_398[1] = local_398[1] * fVar17;
  local_398[2] = local_398[2] * fVar17;
  *(float *)param_5 = *(float *)param_5 - local_398[0];
  *(float *)&param_5->field_0x4 = *(float *)&param_5->field_0x4 - local_398[1];
  *(float *)&param_5->field_0x8 = *(float *)&param_5->field_0x8 - local_398[2];
  uVar7 = uVar8;
  if (param_2 < *(int *)&this->field_0xb8) {
    uVar7 = uVar15;
  }
  if ((uVar7 == 0) &&
     (local_3b8 = pTVar16, local_3b0 = (int *)(longlong)*(int *)&this->field_0xb8,
     bVar6 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar6
     )) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  fVar2 = *(float *)(*(longlong *)&this->field_0xb0 + (longlong)pTVar16 * 4);
  uVar7 = uVar8;
  if (param_2 < *(int *)&this->field_0x68) {
    uVar7 = uVar15;
  }
  if ((uVar7 == 0) &&
     (local_3b8 = pTVar16, local_3b0 = (int *)(longlong)*(int *)&this->field_0x68,
     bVar6 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar6
     )) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar1 = *(undefined4 *)(*(longlong *)&this->field_0x60 + (longlong)pTVar16 * 4);
  if (param_2 < *(int *)&this->field_0x58) {
    uVar8 = uVar15;
  }
  if ((uVar8 == 0) &&
     (local_3b8 = pTVar16, local_3b0 = (int *)(longlong)*(int *)&this->field_0x58,
     bVar6 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar6
     )) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_358[0] = *(undefined4 *)(*(longlong *)&this->field_0x50 + (longlong)pTVar16 * 4);
  pPVar9 = FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::ElementDmInv
                     ((FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)this,
                      &local_b8,param_2);
  local_368[0] = iVar5;
  local_370[0] = fVar17 * fVar2;
  local_360[0] = uVar1;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->ComputeHessianHelper);
  pcVar4 = *(code **)&this->ComputeHessianHelper;
  plVar3 = *(longlong **)&(this->ComputeHessianHelper).field_0x28;
  plVar13 = (longlong *)&(this->ComputeHessianHelper).field_0x10;
  if (plVar3 != (longlong *)0x0) {
    plVar13 = plVar3;
  }
  uVar11 = (**(code **)(*plVar13 + 8))();
  local_3a0 = local_308;
  local_3a8 = local_370;
  local_3b0 = local_368;
  local_3b8 = (TMatrix<float> *)local_360;
  (*pcVar4)(uVar11,local_238,pPVar9,local_358);
  return;
}

// GetMeshArray @ 143a6b760

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::Softs::FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::GetMeshArray
          (FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar7;
  void *_Dst;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (__return_storage_ptr__,*(int *)&this->field_0xa8,Default);
  uVar11 = 0;
  if (0 < *(int *)&this->field_0xa8) {
    lVar12 = 0;
    do {
      uVar10 = ~uVar11 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar11 < __return_storage_ptr__->ArrayNum) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data + lVar12;
      iVar8 = *(int *)&pFVar9[8].field_0x0;
      pFVar2 = pFVar9 + 8;
      if (iVar8 < 4) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,4 - iVar8,(ForAnyElementType *)pFVar9,(int *)pFVar2,
                           (int *)(pFVar9 + 0xc));
        memset((void *)(*(longlong *)&pFVar9->field_0x0 + (longlong)iVar6 * 4),0,
               (longlong)(4 - iVar8) << 2);
      }
      else if (4 < iVar8) {
        iVar8 = iVar8 + -4;
        if (iVar8 < 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar3)();
            return pTVar7;
          }
        }
        else if (iVar8 == 0) goto LAB_143a6b904;
        _Dst = (void *)(*(longlong *)&pFVar9->field_0x0 + 0x10);
        iVar6 = (*(int *)&pFVar2->field_0x0 - iVar8) + -4;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar8 * 4),(longlong)iVar6 << 2);
        }
        *(int *)&pFVar2->field_0x0 = *(int *)&pFVar2->field_0x0 - iVar8;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)pFVar9,*(int *)&pFVar2->field_0x0,(int *)(pFVar9 + 0xc))
        ;
      }
LAB_143a6b904:
      uVar5 = 0;
      if ((int)uVar11 < *(int *)&this->field_0xa8) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      uVar1 = *(undefined4 *)(lVar12 + *(longlong *)&this->field_0xa0);
      uVar5 = 0;
      if ((int)uVar11 < __return_storage_ptr__->ArrayNum) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((*(int *)(pFVar2 + lVar12 + 8) < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      **(undefined4 **)(pFVar2 + lVar12) = uVar1;
      uVar5 = 0;
      if ((int)uVar11 < *(int *)&this->field_0xa8) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      uVar1 = *(undefined4 *)(lVar12 + 4 + *(longlong *)&this->field_0xa0);
      uVar5 = 0;
      if ((int)uVar11 < __return_storage_ptr__->ArrayNum) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((*(int *)(pFVar2 + lVar12 + 8) < 2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      *(undefined4 *)(*(longlong *)(pFVar2 + lVar12) + 4) = uVar1;
      uVar5 = 0;
      if ((int)uVar11 < *(int *)&this->field_0xa8) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      uVar1 = *(undefined4 *)(lVar12 + 8 + *(longlong *)&this->field_0xa0);
      uVar5 = 0;
      if ((int)uVar11 < __return_storage_ptr__->ArrayNum) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((*(int *)(pFVar2 + lVar12 + 8) < 3) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      *(undefined4 *)(*(longlong *)(pFVar2 + lVar12) + 8) = uVar1;
      uVar5 = 0;
      if ((int)uVar11 < *(int *)&this->field_0xa8) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      uVar1 = *(undefined4 *)(lVar12 + 0xc + *(longlong *)&this->field_0xa0);
      uVar5 = 0;
      if ((int)uVar11 < __return_storage_ptr__->ArrayNum) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((*(int *)(pFVar2 + lVar12 + 8) < 4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      pFVar2 = pFVar2 + lVar12;
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x10;
      *(undefined4 *)(*(longlong *)pFVar2 + 0xc) = uVar1;
    } while ((int)uVar11 < *(int *)&this->field_0xa8);
  }
  return __return_storage_ptr__;
}

// Init @ 143a714b0

void __thiscall
Chaos::Softs::FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::Init
          (FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this)

{
  return;
}

