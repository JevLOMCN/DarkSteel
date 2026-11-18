// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles> @ 143a32710

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles> * __thiscall
Chaos::Softs::FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles>::
FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles>
          (FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1,
          TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  code *pcVar15;
  float fVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar20;
  FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles> *pFVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_b8 [8];
  
  (this->Constraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar22 = param_2->ArrayNum;
  pFVar10 = (param_2->AllocatorInstance).Data;
  piVar1 = &(this->Constraints).ArrayMax;
  (this->Constraints).ArrayNum = iVar22;
  if (iVar22 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar22,0,(ForAnyElementType *)this,iVar22,piVar1);
    memcpy((this->Constraints).AllocatorInstance.Data,pFVar10,(longlong)iVar22 << 4);
  }
  pTVar2 = &this->StiffnessArray;
  (this->IncidentElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncidentElements).ArrayNum = 0;
  (this->IncidentElements).ArrayMax = 0;
  pTVar3 = &this->IncidentElements;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->StiffnessArray).ArrayMax;
  (this->Volumes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Volumes).ArrayNum = 0;
  (this->Volumes).ArrayMax = 0;
  (this->IncidentElementsLocal).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncidentElementsLocal).ArrayNum = 0;
  (this->IncidentElementsLocal).ArrayMax = 0;
  iVar22 = param_3->ArrayNum;
  pFVar10 = (param_3->AllocatorInstance).Data;
  (this->StiffnessArray).ArrayNum = iVar22;
  if (iVar22 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar22,0,&pTVar2->AllocatorInstance,iVar22,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar10,(longlong)iVar22 << 2);
  }
  pTVar20 = Utilities::ComputeIncidentElements<4>
                      (local_b8,&this->Constraints,&this->IncidentElementsLocal);
  if (pTVar3 != pTVar20) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar3->AllocatorInstance).Data,
               (this->IncidentElements).ArrayNum);
    pFVar10 = (pTVar3->AllocatorInstance).Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    (pTVar3->AllocatorInstance).Data = (pTVar20->AllocatorInstance).Data;
    (pTVar20->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->IncidentElements).ArrayNum = pTVar20->ArrayNum;
    (this->IncidentElements).ArrayMax = pTVar20->ArrayMax;
    pTVar20->ArrayNum = 0;
    pTVar20->ArrayMax = 0;
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_b8[0].AllocatorInstance.Data,
             local_b8[0].ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_b8[0].AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_b8[0].AllocatorInstance.Data);
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->Volumes,(this->Constraints).ArrayNum,Default);
  fVar16 = __real_3e2aaaab;
  iVar22 = (this->Constraints).ArrayNum;
  uVar23 = 0;
  if (0 < iVar22) {
    lVar24 = 0;
    lVar26 = 0;
    do {
      uVar25 = ~uVar23 >> 0x1f;
      uVar19 = 0;
      if ((int)uVar23 < iVar22) {
        uVar19 = uVar25;
      }
      if ((uVar19 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar15 = (code *)swi(3);
        pFVar21 = (FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles> *)
                  (*pcVar15)();
        return pFVar21;
      }
      pFVar10 = (this->Constraints).AllocatorInstance.Data;
      uVar19 = *(uint *)(pFVar10 + lVar26 + 0xc);
      lVar27 = (longlong)(int)uVar19;
      uVar18 = 0;
      if ((int)uVar19 < (int)param_1->_padding_) {
        uVar18 = ~uVar19 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar15 = (code *)swi(3);
        pFVar21 = (FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles> *)
                  (*pcVar15)();
        return pFVar21;
      }
      lVar11 = param_1->_padding_;
      uVar19 = *(uint *)(pFVar10 + lVar26 + 8);
      lVar28 = (longlong)(int)uVar19;
      uVar18 = 0;
      if ((int)uVar19 < (int)param_1->_padding_) {
        uVar18 = ~uVar19 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar15 = (code *)swi(3);
        pFVar21 = (FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles> *)
                  (*pcVar15)();
        return pFVar21;
      }
      lVar12 = param_1->_padding_;
      uVar19 = *(uint *)(pFVar10 + lVar26 + 4);
      lVar29 = (longlong)(int)uVar19;
      uVar18 = 0;
      if ((int)uVar19 < (int)param_1->_padding_) {
        uVar18 = ~uVar19 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar15 = (code *)swi(3);
        pFVar21 = (FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles> *)
                  (*pcVar15)();
        return pFVar21;
      }
      uVar19 = *(uint *)(pFVar10 + lVar26);
      lVar30 = (longlong)(int)uVar19;
      lVar13 = param_1->_padding_;
      uVar18 = 0;
      if ((int)uVar19 < (int)param_1->_padding_) {
        uVar18 = ~uVar19 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar15 = (code *)swi(3);
        pFVar21 = (FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles> *)
                  (*pcVar15)();
        return pFVar21;
      }
      lVar14 = param_1->_padding_;
      fVar4 = *(float *)(lVar14 + 8 + lVar30 * 0xc);
      fVar5 = *(float *)(lVar14 + 4 + lVar30 * 0xc);
      fVar6 = *(float *)(lVar14 + lVar30 * 0xc);
      fVar33 = *(float *)(lVar13 + 8 + lVar29 * 0xc) - fVar4;
      fVar34 = *(float *)(lVar13 + lVar29 * 0xc) - fVar6;
      fVar36 = *(float *)(lVar13 + 4 + lVar29 * 0xc) - fVar5;
      fVar31 = *(float *)(lVar12 + 8 + lVar28 * 0xc) - fVar4;
      fVar32 = *(float *)(lVar12 + lVar28 * 0xc) - fVar6;
      fVar35 = *(float *)(lVar12 + 4 + lVar28 * 0xc) - fVar5;
      fVar7 = *(float *)(lVar11 + 4 + lVar27 * 0xc);
      fVar8 = *(float *)(lVar11 + lVar27 * 0xc);
      fVar9 = *(float *)(lVar11 + 8 + lVar27 * 0xc);
      uVar19 = 0;
      if ((int)uVar23 < (this->Volumes).ArrayNum) {
        uVar19 = uVar25;
      }
      if ((uVar19 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar15 = (code *)swi(3);
        pFVar21 = (FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles> *)
                  (*pcVar15)();
        return pFVar21;
      }
      *(float *)((this->Volumes).AllocatorInstance.Data + lVar24 * 4) =
           ((fVar32 * fVar33 - fVar31 * fVar34) * (fVar7 - fVar5) +
            (fVar31 * fVar36 - fVar35 * fVar33) * (fVar8 - fVar6) +
           (fVar35 * fVar34 - fVar32 * fVar36) * (fVar9 - fVar4)) * fVar16;
      uVar19 = 0;
      if ((int)uVar23 < (this->Volumes).ArrayNum) {
        uVar19 = uVar25;
      }
      if ((uVar19 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar15 = (code *)swi(3);
        pFVar21 = (FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles> *)
                  (*pcVar15)();
        return pFVar21;
      }
      fVar4 = *(float *)((this->Volumes).AllocatorInstance.Data + lVar24 * 4);
      uVar19 = 0;
      if ((int)uVar23 < (this->StiffnessArray).ArrayNum) {
        uVar19 = uVar25;
      }
      if ((uVar19 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar15 = (code *)swi(3);
        pFVar21 = (FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles> *)
                  (*pcVar15)();
        return pFVar21;
      }
      pFVar10 = (this->StiffnessArray).AllocatorInstance.Data;
      uVar23 = uVar23 + 1;
      lVar26 = lVar26 + 0x10;
      *(float *)(pFVar10 + lVar24 * 4) = *(float *)(pFVar10 + lVar24 * 4) / fVar4;
      lVar24 = lVar24 + 1;
      iVar22 = (this->Constraints).ArrayNum;
    } while ((int)uVar23 < iVar22);
  }
  pFVar10 = (param_3->AllocatorInstance).Data;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  return this;
}

// AddResidualAndHessian @ 143a4a1a0

void __thiscall
Chaos::Softs::FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles>::
AddResidualAndHessian
          (FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1,int param_2,int param_3,float param_4,TVector<float,3> *param_5,
          PMatrix<float,3,3> *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles> *pFVar6;
  bool bVar7;
  uint uVar8;
  TVector<float,3> *pTVar9;
  TVector<float,3> *pTVar10;
  TVector<float,3> *pTVar11;
  TVector<float,3> *pTVar12;
  longlong lVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_118;
  uint local_114;
  uint local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles> *local_e8;
  
  lVar13 = (longlong)param_2;
  uVar14 = (uint)~param_2 >> 0x1f;
  uVar8 = 0;
  if (param_2 < (this->Constraints).ArrayNum) {
    uVar8 = uVar14;
  }
  local_e8 = this;
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (this->Constraints).AllocatorInstance.Data;
  iVar1 = *(int *)(pFVar4 + lVar13 * 0x10 + 4);
  iVar2 = *(int *)(pFVar4 + lVar13 * 0x10 + 8);
  iVar3 = *(int *)(pFVar4 + lVar13 * 0x10 + 0xc);
  pTVar9 = FSolverParticles::P(param_1,*(int *)(pFVar4 + lVar13 * 0x10));
  pTVar10 = FSolverParticles::P(param_1,iVar1);
  pTVar11 = FSolverParticles::P(param_1,iVar2);
  pTVar12 = FSolverParticles::P(param_1,iVar3);
  fVar21 = *(float *)&pTVar9->field_0x4;
  fVar20 = *(float *)pTVar9;
  fVar19 = *(float *)&pTVar9->field_0x8;
  fVar17 = *(float *)&pTVar11->field_0x8 - fVar19;
  fVar22 = *(float *)&pTVar11->field_0x4 - fVar21;
  fVar15 = *(float *)pTVar12 - fVar20;
  fVar18 = *(float *)pTVar11 - fVar20;
  fVar23 = *(float *)&pTVar12->field_0x8 - fVar19;
  fVar16 = *(float *)&pTVar12->field_0x4 - fVar21;
  fVar20 = *(float *)pTVar10 - fVar20;
  fVar21 = *(float *)&pTVar10->field_0x4 - fVar21;
  fVar19 = *(float *)&pTVar10->field_0x8 - fVar19;
  local_10c = (fVar22 * fVar23 - fVar17 * fVar16) * __real_3e2aaaab;
  local_108 = (fVar17 * fVar15 - fVar18 * fVar23) * __real_3e2aaaab;
  local_104 = (fVar18 * fVar16 - fVar22 * fVar15) * __real_3e2aaaab;
  local_100 = (fVar16 * fVar19 - fVar23 * fVar21) * __real_3e2aaaab;
  local_f8 = (fVar15 * fVar21 - fVar16 * fVar20) * __real_3e2aaaab;
  local_fc = (fVar23 * fVar20 - fVar15 * fVar19) * __real_3e2aaaab;
  local_f4 = (fVar17 * fVar21 - fVar22 * fVar19) * __real_3e2aaaab;
  local_f0 = (fVar18 * fVar19 - fVar17 * fVar20) * __real_3e2aaaab;
  local_118 = (float)((uint)(local_100 + local_10c + local_f4) ^
                     __xmm_80000000800000008000000080000000);
  local_ec = (fVar22 * fVar20 - fVar18 * fVar21) * __real_3e2aaaab;
  local_114 = (uint)(local_fc + local_108 + local_f0) ^ __xmm_80000000800000008000000080000000;
  local_110 = (uint)(local_f8 + local_104 + local_ec) ^ __xmm_80000000800000008000000080000000;
  fVar21 = ComputeVolume(pTVar9,pTVar10,pTVar11,pTVar12);
  pFVar6 = local_e8;
  uVar8 = 0;
  if (param_2 < (local_e8->StiffnessArray).ArrayNum) {
    uVar8 = uVar14;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = 0;
  if (param_2 < (pFVar6->Volumes).ArrayNum) {
    uVar8 = uVar14;
  }
  fVar20 = param_4 * *(float *)((pFVar6->StiffnessArray).AllocatorInstance.Data +
                               (longlong)param_2 * 4) * param_4;
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar13 = (longlong)param_3;
  fVar21 = (fVar21 - *(float *)((pFVar6->Volumes).AllocatorInstance.Data + (longlong)param_2 * 4)) *
           fVar20;
  if (param_3 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                       ,0x86,L"");
    if (bVar7) {
code_r0x000143a4a5ae:
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if ((3 < param_3) &&
          (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index < NumElements",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                              ,0x87,L""), bVar7)) goto code_r0x000143a4a5ae;
  fVar19 = (&local_118)[lVar13 * 3 + 1];
  fVar15 = (&local_118)[lVar13 * 3 + 2];
  *(float *)param_5 = fVar21 * (&local_118)[lVar13 * 3] + *(float *)param_5;
  *(float *)&param_5->field_0x4 = fVar21 * fVar19 + *(float *)&param_5->field_0x4;
  *(float *)&param_5->field_0x8 = fVar21 * fVar15 + *(float *)&param_5->field_0x8;
  if (param_3 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                       ,0x86,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                       ,0x86,L"");
    if (bVar7) {
code_r0x000143a4a68f:
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (3 < param_3) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < NumElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                       ,0x87,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < NumElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                       ,0x87,L"");
    if (bVar7) goto code_r0x000143a4a68f;
  }
  fVar21 = (&local_118)[lVar13 * 3];
  fVar19 = (&local_118)[lVar13 * 3 + 1];
  fVar15 = (&local_118)[lVar13 * 3 + 2];
  *(float *)param_6 = fVar21 * fVar21 * fVar20 + *(float *)param_6;
  *(float *)&param_6->field_0x4 = fVar21 * fVar19 * fVar20 + *(float *)&param_6->field_0x4;
  *(float *)&param_6->field_0x8 = fVar21 * fVar15 * fVar20 + *(float *)&param_6->field_0x8;
  fVar16 = fVar19 * fVar15 * fVar20;
  *(float *)&param_6->field_0x10 = fVar21 * fVar19 * fVar20 + *(float *)&param_6->field_0x10;
  *(float *)&param_6->field_0x20 = fVar21 * fVar15 * fVar20 + *(float *)&param_6->field_0x20;
  *(float *)&param_6->field_0x14 = fVar19 * fVar19 * fVar20 + *(float *)&param_6->field_0x14;
  *(float *)&param_6->field_0x18 = fVar16 + *(float *)&param_6->field_0x18;
  *(float *)&param_6->field_0x24 = fVar16 + *(float *)&param_6->field_0x24;
  *(float *)&param_6->field_0x28 = fVar15 * fVar15 * fVar20 + *(float *)&param_6->field_0x28;
  return;
}

// ComputeVolume @ 143a60c00

float __cdecl
Chaos::Softs::FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles>::
ComputeVolume(TVector<float,3> *param_1,TVector<float,3> *param_2,TVector<float,3> *param_3,
             TVector<float,3> *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)&param_1->field_0x4;
  fVar3 = *(float *)&param_3->field_0x8 - *(float *)&param_1->field_0x8;
  fVar4 = *(float *)&param_2->field_0x8 - *(float *)&param_1->field_0x8;
  fVar5 = *(float *)&param_3->field_0x4 - fVar2;
  fVar6 = *(float *)&param_2->field_0x4 - fVar2;
  return (((*(float *)param_3 - fVar1) * fVar4 - fVar3 * (*(float *)param_2 - fVar1)) *
          (*(float *)&param_4->field_0x4 - fVar2) +
          (fVar3 * fVar6 - fVar5 * fVar4) * (*(float *)param_4 - fVar1) +
         (fVar5 * (*(float *)param_2 - fVar1) - (*(float *)param_3 - fVar1) * fVar6) *
         (*(float *)&param_4->field_0x8 - *(float *)&param_1->field_0x8)) * __real_3e2aaaab;
}

// GetStaticConstraintArrays @ 143a701b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::Softs::FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles>::
GetStaticConstraintArrays
          (FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles> *this,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_78;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
            (param_1,&this->IncidentElements);
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
            (param_2,&this->IncidentElementsLocal);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (__return_storage_ptr__,(this->Constraints).ArrayNum,Default);
  uVar6 = 0;
  if (0 < __return_storage_ptr__->ArrayNum) {
    lVar8 = 0;
    do {
      iVar1 = (this->Constraints).ArrayNum;
      uVar7 = ~uVar6 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar6 < iVar1) {
        uVar4 = uVar7;
      }
      if (uVar4 == 0) {
        local_58 = (longlong)(int)uVar6;
        local_50 = (longlong)iVar1;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar5;
        }
      }
      local_48 = *(int *)((this->Constraints).AllocatorInstance.Data + lVar8);
      iVar1 = (this->Constraints).ArrayNum;
      uVar4 = 0;
      if ((int)uVar6 < iVar1) {
        uVar4 = uVar7;
      }
      if (uVar4 == 0) {
        local_58 = (longlong)(int)uVar6;
        local_50 = (longlong)iVar1;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar5;
        }
      }
      local_44 = *(undefined4 *)((this->Constraints).AllocatorInstance.Data + lVar8 + 4);
      iVar1 = (this->Constraints).ArrayNum;
      uVar4 = 0;
      if ((int)uVar6 < iVar1) {
        uVar4 = uVar7;
      }
      if (uVar4 == 0) {
        local_58 = (longlong)(int)uVar6;
        local_50 = (longlong)iVar1;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar5;
        }
      }
      local_40 = *(undefined4 *)((this->Constraints).AllocatorInstance.Data + lVar8 + 8);
      iVar1 = (this->Constraints).ArrayNum;
      uVar4 = 0;
      if ((int)uVar6 < iVar1) {
        uVar4 = uVar7;
      }
      if (uVar4 == 0) {
        local_58 = (longlong)(int)uVar6;
        local_50 = (longlong)iVar1;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar5;
        }
      }
      local_3c = *(undefined4 *)((this->Constraints).AllocatorInstance.Data + lVar8 + 0xc);
      uVar4 = 0;
      if ((int)uVar6 < __return_storage_ptr__->ArrayNum) {
        uVar4 = uVar7;
      }
      if (uVar4 == 0) {
        local_58 = (longlong)(int)uVar6;
        local_50 = (longlong)__return_storage_ptr__->ArrayNum;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar5;
        }
      }
      this_00 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                ((__return_storage_ptr__->AllocatorInstance).Data + lVar8);
      TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
                (this_00,&local_48,4,this_00->ArrayMax);
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((int)uVar6 < __return_storage_ptr__->ArrayNum);
  }
  return __return_storage_ptr__;
}

