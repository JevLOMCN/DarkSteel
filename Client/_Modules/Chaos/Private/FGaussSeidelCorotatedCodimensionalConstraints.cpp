// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 9

// FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles> @ 143a30eb0

FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles> * __thiscall
Chaos::Softs::FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>::
FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>
          (FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles> *this
          ,FSolverParticles *param_1,
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3,float *param_4)

{
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  FScriptContainerElement *_Src;
  code *pcVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles> *pFVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 local_res18 [8];
  float local_res20 [2];
  float local_78;
  float local_74 [15];
  
  this->_padding_ =
       (longlong)
       &
       ___7__FGaussSeidelCorotatedCodimensionalConstraints_MVFSolverParticles_Softs_Chaos___Softs_Chaos__6B_
  ;
  pTVar1 = &this->MeshConstraints;
  this_00 = &this->MuElementArray;
  (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->MeshConstraints).ArrayMax;
  (this->MuElementArray).ArrayNum = 0;
  (this->MuElementArray).ArrayMax = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->DmInverse).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DmInverse).ArrayNum = 0;
  (this->DmInverse).ArrayMax = 0;
  (this->LambdaElementArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LambdaElementArray).ArrayNum = 0;
  (this->LambdaElementArray).ArrayMax = 0;
  (this->AlphaJArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AlphaJArray).ArrayNum = 0;
  (this->AlphaJArray).ArrayMax = 0;
  iVar5 = param_2->ArrayNum;
  _Src = (param_2->AllocatorInstance).Data;
  (this->MeshConstraints).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar5 * 0xc);
  }
  (this->Measure).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Measure).ArrayNum = 0;
  (this->Measure).ArrayMax = 0;
  if (param_3->ArrayNum != param_2->ArrayNum) {
    local_res18[0] = 0;
    `Chaos::Softs::
    FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>::
    FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>'::__l2::
    <lambda_1>::operator()(local_res18);
  }
  local_res20[0] = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            (&this->Measure,local_res20,(this->MeshConstraints).ArrayNum);
  InitializeCodimensionData(this,param_1);
  local_78 = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            (&this->LambdaElementArray,&local_78,(this->MeshConstraints).ArrayNum);
  local_74[0] = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init(this_00,local_74,(this->MeshConstraints).ArrayNum)
  ;
  fVar8 = __real_40000000;
  fVar7 = __real_3f800000;
  uVar12 = 0;
  if (0 < param_2->ArrayNum) {
    lVar13 = 0;
    do {
      uVar14 = ~uVar12 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar12 < param_3->ArrayNum) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        pFVar11 = (FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>
                   *)(*pcVar6)();
        return pFVar11;
      }
      fVar3 = *param_4;
      fVar4 = *(float *)((param_3->AllocatorInstance).Data + lVar13);
      uVar10 = 0;
      if ((int)uVar12 < (this->LambdaElementArray).ArrayNum) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        pFVar11 = (FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>
                   *)(*pcVar6)();
        return pFVar11;
      }
      *(float *)((this->LambdaElementArray).AllocatorInstance.Data + lVar13) =
           (fVar3 * fVar4) / ((fVar7 - (fVar3 + fVar3)) * (fVar3 + fVar7));
      uVar10 = 0;
      if ((int)uVar12 < param_3->ArrayNum) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        pFVar11 = (FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>
                   *)(*pcVar6)();
        return pFVar11;
      }
      fVar3 = *param_4;
      fVar4 = *(float *)((param_3->AllocatorInstance).Data + lVar13);
      uVar10 = 0;
      if ((int)uVar12 < (this->MuElementArray).ArrayNum) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        pFVar11 = (FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>
                   *)(*pcVar6)();
        return pFVar11;
      }
      uVar12 = uVar12 + 1;
      *(float *)((this_00->AllocatorInstance).Data + lVar13) = fVar4 / (fVar3 + fVar3 + fVar8);
      lVar13 = lVar13 + 4;
    } while ((int)uVar12 < param_2->ArrayNum);
  }
  return this;
}

// ~FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles> @ 143a38430

void __thiscall
Chaos::Softs::FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>::
~FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>
          (FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles> *this
          )

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FGaussSeidelCorotatedCodimensionalConstraints_MVFSolverParticles_Softs_Chaos___Softs_Chaos__6B_
  ;
  pFVar1 = (this->Measure).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MeshConstraints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AlphaJArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LambdaElementArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MuElementArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DmInverse).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddHyperelasticResidualAndHessian @ 143a46920

void __thiscall
Chaos::Softs::FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>::
AddHyperelasticResidualAndHessian
          (FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles> *this
          ,FSolverParticles *param_1,int param_2,int param_3,float param_4,TVector<float,3> *param_5
          ,PMatrix<float,3,3> *param_6)

{
  float fVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  PMatrix<float,3,2> *pPVar8;
  longlong lVar9;
  longlong lVar10;
  float *pfVar11;
  uint uVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  PMatrix<float,3,2> local_280;
  float local_268;
  float local_260 [4];
  float local_250 [4];
  undefined8 local_240;
  float local_238;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float fStack_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0 [6];
  PMatrix<float,2,2> local_188;
  PMatrix<float,2,2> local_178;
  PMatrix<float,3,2> local_168;
  PMatrix<float,3,2> local_150;
  PMatrix<float,3,2> local_138;
  PMatrix<float,3,2> local_120;
  PMatrix<float,3,2> local_108;
  PMatrix<float,3,2> local_f0 [7];
  
  lVar13 = (longlong)param_2;
  local_1d8._0_8_ = param_1;
  local_1c8._0_8_ = param_5;
  if ((((this->DmInverse).ArrayNum <= param_2) || (0x7fffffff < (uint)param_2)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementIndex < DmInverse.Num() && ElementIndex > INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Deformable\\GaussSeidelCorotatedCodimensionalConstraints.h"
                         ,0x129,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((this->MuElementArray).ArrayNum <= param_2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementIndex < MuElementArray.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Deformable\\GaussSeidelCorotatedCodimensionalConstraints.h"
                         ,0x12a,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((this->Measure).ArrayNum <= param_2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementIndex < Measure.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Deformable\\GaussSeidelCorotatedCodimensionalConstraints.h"
                         ,299,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((this->LambdaElementArray).ArrayNum <= param_2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementIndex < LambdaElementArray.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Deformable\\GaussSeidelCorotatedCodimensionalConstraints.h"
                         ,300,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (2 < (uint)param_3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementIndexLocal < 3 && ElementIndexLocal > INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Deformable\\GaussSeidelCorotatedCodimensionalConstraints.h"
                       ,0x12d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (2 < (uint)param_3) {
      return;
    }
  }
  if ((((param_2 < (this->Measure).ArrayNum) && (param_2 < (this->MuElementArray).ArrayNum)) &&
      (param_2 < (this->LambdaElementArray).ArrayNum)) &&
     ((param_2 < (this->DmInverse).ArrayNum && (-1 < param_2)))) {
    uVar12 = (uint)~param_2 >> 0x1f;
    if ((param_2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->DmInverse).AllocatorInstance.Data;
    local_22c = *(float *)(pFVar3 + lVar13 * 0x10);
    local_224 = *(float *)(pFVar3 + lVar13 * 0x10 + 4);
    local_230 = *(float *)(pFVar3 + lVar13 * 0x10 + 8);
    local_228 = *(float *)(pFVar3 + lVar13 * 0x10 + 0xc);
    uVar6 = 0;
    if (param_2 < (this->DmInverse).ArrayNum) {
      uVar6 = uVar12;
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
    local_268 = 0.0;
    pFVar3 = (this->DmInverse).AllocatorInstance.Data + lVar13 * 0x10;
    local_208 = *(undefined8 *)pFVar3;
    uStack_200 = *(undefined8 *)(pFVar3 + 8);
    if (param_2 < (this->DmInverse).ArrayNum) {
      if ((param_2 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->DmInverse).AllocatorInstance.Data;
      pPVar8 = Ds(this,&local_120,param_2,(FSolverParticles *)local_1d8._0_8_);
      fVar21 = *(float *)(pFVar3 + lVar13 * 0x10);
      fVar23 = *(float *)(pFVar3 + lVar13 * 0x10 + 4);
      fVar16 = *(float *)(pFVar3 + lVar13 * 0x10 + 8);
      fVar22 = pPVar8->M[0] * fVar21 + pPVar8->M[3] * fVar23;
      fVar27 = *(float *)(pFVar3 + lVar13 * 0x10 + 0xc);
      fVar26 = pPVar8->M[1] * fVar21 + pPVar8->M[4] * fVar23;
      local_280.M[1] = fVar26;
      local_280.M[0] = fVar22;
      fVar25 = pPVar8->M[2] * fVar21 + pPVar8->M[5] * fVar23;
      fVar24 = fVar16 * pPVar8->M[0] + fVar27 * pPVar8->M[3];
      fVar21 = fVar16 * pPVar8->M[1] + fVar27 * pPVar8->M[4];
      local_280.M[3] = fVar24;
      local_280.M[2] = fVar25;
      fVar23 = fVar16 * pPVar8->M[2] + fVar27 * pPVar8->M[5];
    }
    else {
      fVar22 = 0.0;
      fVar24 = 0.0;
      fVar25 = 0.0;
      local_280.M[0] = 0.0;
      local_280.M[1] = 0.0;
      local_280.M[2] = 0.0;
      local_280.M[3] = 0.0;
      fVar26 = 0.0;
      fVar21 = 0.0;
      fVar23 = 0.0;
    }
    local_280.M[4] = fVar21;
    local_280.M[5] = fVar23;
    ComputeR(&local_168,&local_280);
    local_1e8 = 0;
    uVar6 = 0;
    if (param_2 < (this->MuElementArray).ArrayNum) {
      uVar6 = uVar12;
    }
    fVar16 = fVar21 * fVar26 + fVar24 * fVar22 + fVar23 * fVar25;
    fVar16 = (fVar21 * fVar21 + fVar24 * fVar24 + fVar23 * fVar23) *
             (fVar26 * fVar26 + fVar22 * fVar22 + fVar25 * fVar25) - fVar16 * fVar16;
    local_214 = SQRT(fVar16);
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_220 = fVar24 - local_168.M[3];
    local_21c = fVar21 - local_168.M[4];
    local_218 = fVar23 - local_168.M[5];
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
    fVar27 = *(float *)((this->MuElementArray).AllocatorInstance.Data + lVar13 * 4);
    fVar27 = fVar27 + fVar27;
    uVar6 = 0;
    if (param_2 < (this->LambdaElementArray).ArrayNum) {
      uVar6 = uVar12;
    }
    local_210 = fVar27 * (fVar26 - local_168.M[1]);
    fVar14 = fVar27 * local_220;
    local_1d8._0_4_ = fVar27 * (fVar25 - local_168.M[2]);
    fVar15 = fVar27 * local_21c;
    fVar28 = fVar27 * local_218;
    fVar18 = fVar21 * fVar26 + fVar24 * fVar22 + fVar23 * fVar25;
    local_188.M[3] = fVar26 * fVar26 + fVar22 * fVar22 + fVar25 * fVar25;
    local_188.M[0] = fVar21 * fVar21 + fVar24 * fVar24 + fVar23 * fVar23;
    fVar17 = __real_3f800000 / (local_188.M[0] * local_188.M[3] - fVar18 * fVar18);
    local_188.M[0] = fVar17 * local_188.M[0];
    local_188.M[3] = fVar17 * local_188.M[3];
    local_188.M[1] = (float)((uint)(fVar17 * fVar18) ^ __xmm_80000000800000008000000080000000);
    local_188.M[2] = local_188.M[1];
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
    local_150.M[5] =
         (fVar16 - local_214) *
         *(float *)((this->LambdaElementArray).AllocatorInstance.Data + lVar13 * 4);
    local_150.M[0] = local_150.M[5] * fVar22;
    local_150.M[1] = local_150.M[5] * fVar26;
    local_150.M[2] = local_150.M[5] * fVar25;
    local_150.M[3] = local_150.M[5] * fVar24;
    local_150.M[4] = local_150.M[5] * fVar21;
    local_150.M[5] = local_150.M[5] * fVar23;
    pPVar8 = Chaos::operator*(&local_108,&local_150,&local_188);
    fVar16 = pPVar8->M[3];
    fVar17 = pPVar8->M[4];
    fVar18 = pPVar8->M[0];
    fVar19 = local_210 + pPVar8->M[1];
    fVar1 = pPVar8->M[5];
    fVar20 = (float)local_1d8._0_4_ + pPVar8->M[2];
    uVar6 = 0;
    if (param_2 < (this->DmInverse).ArrayNum) {
      uVar6 = uVar12;
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
    pFVar3 = (this->DmInverse).AllocatorInstance.Data;
    local_178.M[0] = *(float *)(pFVar3 + lVar13 * 0x10);
    local_178.M[1] = *(float *)(pFVar3 + lVar13 * 0x10 + 8);
    local_178.M[2] = *(float *)(pFVar3 + lVar13 * 0x10 + 4);
    local_178.M[3] = *(float *)(pFVar3 + lVar13 * 0x10 + 0xc);
    lVar9 = 0;
    uVar6 = 0;
    if (param_2 < (this->Measure).ArrayNum) {
      uVar6 = uVar12;
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
    local_138.M[5] =
         (float)(*(uint *)((this->Measure).AllocatorInstance.Data + lVar13 * 4) ^
                __xmm_80000000800000008000000080000000);
    local_138.M[3] = (fVar14 + fVar16) * local_138.M[5];
    local_138.M[0] = (fVar27 * (fVar22 - local_168.M[0]) + fVar18) * local_138.M[5];
    local_138.M[4] = (fVar15 + fVar17) * local_138.M[5];
    local_138.M[1] = fVar19 * local_138.M[5];
    local_138.M[2] = fVar20 * local_138.M[5];
    local_138.M[5] = (fVar28 + fVar1) * local_138.M[5];
    pPVar8 = Chaos::operator*(local_f0,&local_138,&local_178);
    local_250[0] = 0.0;
    local_250[1] = 0.0;
    local_250[2] = 0.0;
    local_1e8 = *(undefined8 *)(pPVar8->M + 4);
    local_1f8 = *(undefined8 *)pPVar8->M;
    uStack_1f0 = *(undefined8 *)(pPVar8->M + 2);
    lVar10 = lVar9;
    if (param_3 < 1) {
      do {
        *(float *)((longlong)local_250 + lVar10) =
             (*(float *)((longlong)local_250 + lVar10) - *(float *)((longlong)&local_1f8 + lVar10))
             - *(float *)((longlong)&uStack_1f0 + lVar10 + 4);
        lVar10 = lVar10 + 4;
      } while (lVar10 < 0xc);
    }
    else {
      lVar10 = (longlong)(param_3 * 3);
      local_250[0] = *(float *)((longlong)&local_208 + lVar10 * 4 + 4);
      local_250[1] = *(float *)((longlong)&uStack_200 + lVar10 * 4);
      local_250[2] = *(float *)((longlong)&uStack_200 + lVar10 * 4 + 4);
    }
    fVar14 = param_4 * param_4;
    local_250[0] = local_250[0] * fVar14;
    local_250[1] = local_250[1] * fVar14;
    *(float *)local_1c8._0_8_ = *(float *)local_1c8._0_8_ - local_250[0];
    *(float *)(local_1c8._0_8_ + 4) = *(float *)(local_1c8._0_8_ + 4) - local_250[1];
    *(float *)(local_1c8._0_8_ + 8) = *(float *)(local_1c8._0_8_ + 8) - local_250[2] * fVar14;
    local_250[2] = local_250[2] * fVar14;
    fVar16 = fVar21 * fVar26 + fVar24 * fVar22 + fVar23 * fVar25;
    fVar17 = fVar26 * fVar26 + fVar22 * fVar22 + fVar25 * fVar25;
    fVar27 = (float)((uint)fVar16 ^ __xmm_80000000800000008000000080000000);
    fVar15 = fVar21 * fVar21 + fVar24 * fVar24 + fVar23 * fVar23;
    fVar16 = fVar15 * fVar17 - fVar16 * fVar16;
    if (fVar16 <= local_268) {
      fVar18 = 0.0;
      fVar22 = 0.0;
      fVar15 = 0.0;
      fVar16 = 0.0;
      fVar21 = local_268;
    }
    else {
      fVar28 = __real_3f800000 / SQRT(fVar16);
      fVar18 = (fVar15 * fVar22 + fVar27 * fVar24) * fVar28;
      fVar16 = (fVar15 * fVar26 + fVar27 * fVar21) * fVar28;
      local_1d8 = ZEXT416((uint)fVar16);
      fVar15 = (fVar15 * fVar25 + fVar27 * fVar23) * fVar28;
      fVar22 = (fVar17 * fVar24 + fVar27 * fVar22) * fVar28;
      local_1c8 = ZEXT416((uint)fVar22);
      local_268 = (fVar17 * fVar21 + fVar27 * fVar26) * fVar28;
      fVar21 = (fVar17 * fVar23 + fVar27 * fVar25) * fVar28;
    }
    uVar6 = 0;
    if (param_2 < (this->Measure).ArrayNum) {
      uVar6 = uVar12;
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
    fVar23 = *(float *)param_6;
    iVar2 = (this->MuElementArray).ArrayNum;
    fVar24 = *(float *)((this->Measure).AllocatorInstance.Data + lVar13 * 4);
    fVar25 = fVar14 * fVar24;
    if (param_3 == 0) {
      uVar7 = 0;
      uVar6 = uVar7;
      if (param_2 < iVar2) {
        uVar6 = uVar12;
      }
      fVar26 = (local_208._4_4_ + (float)local_208) * (local_208._4_4_ + (float)local_208) +
               (uStack_200._4_4_ + (float)uStack_200) * (uStack_200._4_4_ + (float)uStack_200);
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
      fVar24 = (fVar14 + fVar14) * fVar24;
      fVar27 = *(float *)&param_6->field_0x14;
      *(float *)param_6 =
           fVar24 * *(float *)((this->MuElementArray).AllocatorInstance.Data + lVar13 * 4) * fVar26
           + fVar23;
      uVar6 = uVar7;
      if (param_2 < (this->MuElementArray).ArrayNum) {
        uVar6 = uVar12;
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
      fVar23 = *(float *)&param_6->field_0x28;
      *(float *)&param_6->field_0x14 =
           fVar24 * *(float *)((this->MuElementArray).AllocatorInstance.Data + lVar13 * 4) * fVar26
           + fVar27;
      uVar6 = uVar7;
      if (param_2 < (this->MuElementArray).ArrayNum) {
        uVar6 = uVar12;
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
      local_260[0] = 0.0;
      local_260[1] = 0.0;
      local_260[2] = 0.0;
      local_1a0[0] = local_230 * fVar22 + local_22c * fVar18;
      local_1a0[2] = local_230 * fVar21 + local_22c * fVar15;
      local_1a0[1] = local_230 * local_268 + local_22c * fVar16;
      *(float *)&param_6->field_0x28 =
           fVar24 * *(float *)((this->MuElementArray).AllocatorInstance.Data + lVar13 * 4) * fVar26
           + fVar23;
      local_1a0[3] = local_228 * fVar22 + local_224 * fVar18;
      local_1a0[4] = local_228 * local_268 + local_224 * fVar16;
      local_1a0[5] = local_228 * fVar21 + local_224 * fVar15;
      do {
        *(float *)((longlong)local_260 + lVar9) =
             *(float *)((longlong)local_260 + lVar9) + *(float *)((longlong)local_1a0 + lVar9) +
             *(float *)((longlong)local_1a0 + lVar9 + 0xc);
        lVar9 = lVar9 + 4;
      } while (lVar9 < 0xc);
      fVar21 = *(float *)param_6;
      fVar22 = *(float *)&param_6->field_0x10;
      fVar23 = *(float *)&param_6->field_0x20;
      uVar6 = uVar7;
      if (param_2 < (this->LambdaElementArray).ArrayNum) {
        uVar6 = uVar12;
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
      fVar14 = local_260[2];
      fVar16 = local_260[0];
      fVar27 = local_260[1];
      fVar24 = *(float *)&param_6->field_0x24;
      fVar26 = *(float *)((this->LambdaElementArray).AllocatorInstance.Data + lVar13 * 4);
      *(undefined4 *)&param_6->field_0x30 = 0;
      fVar15 = fVar25 * fVar26 * local_260[0];
      fVar26 = *(float *)&param_6->field_0x4;
      *(float *)param_6 = local_260[0] * fVar15 + fVar21;
      *(float *)&param_6->field_0x10 = local_260[1] * fVar15 + fVar22;
      fVar21 = *(float *)&param_6->field_0x14;
      *(float *)&param_6->field_0x20 = local_260[2] * fVar15 + fVar23;
      if (param_2 < (this->LambdaElementArray).ArrayNum) {
        uVar7 = uVar12;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar22 = *(float *)((this->LambdaElementArray).AllocatorInstance.Data + lVar13 * 4);
      *(undefined4 *)&param_6->field_0x34 = 0;
      fVar15 = fVar25 * fVar22 * fVar27;
      fVar22 = *(float *)&param_6->field_0x8;
      fVar23 = *(float *)&param_6->field_0x18;
      *(float *)&param_6->field_0x4 = fVar16 * fVar15 + fVar26;
      *(float *)&param_6->field_0x14 = fVar27 * fVar15 + fVar21;
      fVar21 = *(float *)&param_6->field_0x28;
      *(float *)&param_6->field_0x24 = fVar14 * fVar15 + fVar24;
      uVar6 = 0;
      if (param_2 < (this->LambdaElementArray).ArrayNum) {
        uVar6 = uVar12;
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
      fVar24 = *(float *)((this->LambdaElementArray).AllocatorInstance.Data + lVar13 * 4);
      *(undefined4 *)&param_6->field_0x38 = 0;
      fVar24 = fVar25 * fVar24 * fVar14;
      *(float *)&param_6->field_0x8 = fVar16 * fVar24 + fVar22;
      *(float *)&param_6->field_0x18 = fVar27 * fVar24 + fVar23;
      *(float *)&param_6->field_0x28 = fVar14 * fVar24 + fVar21;
    }
    else {
      fVar24 = *(float *)((longlong)&local_208 + (longlong)param_3 * 4 + 4);
      fVar25 = (&fStack_20c)[param_3];
      uVar6 = 0;
      if (param_2 < iVar2) {
        uVar6 = uVar12;
      }
      fVar24 = fVar24 * fVar24;
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
      pFVar3 = (this->MuElementArray).AllocatorInstance.Data;
      uVar6 = 0;
      if (param_2 < (this->Measure).ArrayNum) {
        uVar6 = uVar12;
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
      fVar24 = (fVar25 + fVar25) * fVar25 + fVar24 + fVar24;
      fVar25 = *(float *)&param_6->field_0x14;
      *(float *)param_6 =
           fVar14 * *(float *)((this->Measure).AllocatorInstance.Data + lVar13 * 4) *
           fVar24 * *(float *)(pFVar3 + lVar13 * 4) + fVar23;
      uVar6 = 0;
      if (param_2 < (this->MuElementArray).ArrayNum) {
        uVar6 = uVar12;
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
      pFVar3 = (this->MuElementArray).AllocatorInstance.Data;
      uVar6 = 0;
      if (param_2 < (this->Measure).ArrayNum) {
        uVar6 = uVar12;
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
      fVar23 = *(float *)&param_6->field_0x28;
      *(float *)&param_6->field_0x14 =
           fVar14 * *(float *)((this->Measure).AllocatorInstance.Data + lVar13 * 4) *
           fVar24 * *(float *)(pFVar3 + lVar13 * 4) + fVar25;
      uVar6 = 0;
      if (param_2 < (this->MuElementArray).ArrayNum) {
        uVar6 = uVar12;
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
      pFVar3 = (this->MuElementArray).AllocatorInstance.Data;
      uVar6 = 0;
      if (param_2 < (this->Measure).ArrayNum) {
        uVar6 = uVar12;
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
      iVar2 = param_3 * 3;
      local_240 = 0;
      local_238 = 0.0;
      lVar9 = (longlong)iVar2;
      *(float *)&param_6->field_0x28 =
           fVar14 * *(float *)((this->Measure).AllocatorInstance.Data + lVar13 * 4) *
           fVar24 * *(float *)(pFVar3 + lVar13 * 4) + fVar23;
      local_1b8 = local_230 * fVar22 + local_22c * fVar18;
      local_1b4 = local_230 * local_268 + local_22c * fVar16;
      local_1b0 = local_230 * fVar21 + local_22c * fVar15;
      local_1ac = local_228 * fVar22 + local_224 * fVar18;
      local_1a8 = local_228 * local_268 + local_224 * fVar16;
      local_1a4 = local_228 * fVar21 + local_224 * fVar15;
      if (iVar2 - 3U < 6) {
        local_240 = (ulonglong)*(uint *)(local_1c8 + lVar9 * 4 + 4);
      }
      if (iVar2 - 2U < 6) {
        local_240 = CONCAT44(*(undefined4 *)(local_1c8 + lVar9 * 4 + 8),(float)local_240);
      }
      if (iVar2 - 1U < 6) {
        local_238 = *(float *)(local_1c8 + lVar9 * 4 + 0xc);
      }
      lVar9 = 3;
      pfVar11 = (float *)&param_6->field_0x20;
      local_1c8._0_8_ = (longlong)&local_240 - (longlong)param_6;
      do {
        fVar21 = pfVar11[-8];
        fVar22 = pfVar11[-4];
        fVar23 = *pfVar11;
        uVar6 = 0;
        if (param_2 < (this->LambdaElementArray).ArrayNum) {
          uVar6 = uVar12;
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
        pFVar3 = (this->LambdaElementArray).AllocatorInstance.Data;
        uVar6 = 0;
        if (param_2 < (this->Measure).ArrayNum) {
          uVar6 = uVar12;
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
        fVar24 = *(float *)((longlong)pfVar11 + local_1c8._0_8_ + -0x20);
        fVar25 = *(float *)(pFVar3 + lVar13 * 4);
        fVar26 = *(float *)((this->Measure).AllocatorInstance.Data + lVar13 * 4);
        pfVar11[4] = 0.0;
        fVar24 = fVar24 * fVar25 * fVar14 * fVar26;
        pfVar11[-8] = fVar24 * (float)local_240 + fVar21;
        pfVar11[-4] = fVar24 * local_240._4_4_ + fVar22;
        *pfVar11 = fVar24 * local_238 + fVar23;
        pfVar11 = pfVar11 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
  }
  return;
}

// ComputeR @ 143a5ee10

PMatrix<float,3,2> * __cdecl
Chaos::Softs::FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>::
ComputeR(PMatrix<float,3,2> *__return_storage_ptr__,PMatrix<float,3,2> *param_1)

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
  float fVar15;
  
  fVar1 = param_1->M[1];
  fVar2 = param_1->M[2];
  fVar15 = 0.0;
  fVar3 = param_1->M[0];
  fVar4 = param_1->M[4];
  fVar5 = param_1->M[5];
  fVar6 = param_1->M[3];
  fVar7 = fVar3 * fVar6 + fVar1 * fVar4 + fVar2 * fVar5;
  fVar13 = fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2;
  fVar12 = fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5;
  fVar8 = __real_3f800000;
  if (fVar7 != 0.0) {
    fVar15 = ((fVar12 - fVar13) * __real_3f000000) / fVar7;
    fVar8 = SQRT(fVar15 * fVar15 + __real_3f800000);
    if (fVar15 < 0.0) {
      fVar8 = fVar8 - fVar15;
      fVar15 = __real_bf800000;
    }
    else {
      fVar8 = fVar8 + fVar15;
      fVar15 = __real_3f800000;
    }
    fVar15 = fVar15 / fVar8;
    fVar8 = __real_3f800000 / SQRT(fVar15 * fVar15 + __real_3f800000);
    fVar15 = fVar8 * fVar15;
  }
  fVar9 = (float)((uint)fVar15 ^ __xmm_80000000800000008000000080000000);
  fVar10 = SQRT((fVar13 * fVar8 + fVar9 * fVar7) * fVar8 + (fVar12 * fVar9 + fVar8 * fVar7) * fVar9)
  ;
  fVar11 = fVar10 * fVar9;
  fVar10 = fVar10 * fVar8;
  fVar12 = SQRT((fVar12 * fVar8 + fVar15 * fVar7) * fVar8 +
                (fVar13 * fVar15 + fVar8 * fVar7) * fVar15);
  fVar7 = fVar12 * fVar15;
  fVar12 = fVar12 * fVar8;
  fVar14 = fVar10 * fVar9 + fVar7 * fVar8;
  fVar13 = fVar7 * fVar15 + fVar10 * fVar8;
  fVar7 = fVar11 * fVar9 + fVar12 * fVar8;
  fVar15 = fVar12 * fVar15 + fVar11 * fVar8;
  fVar8 = __real_3f800000 / (fVar7 * fVar13 - fVar14 * fVar15);
  fVar7 = fVar8 * fVar7;
  fVar15 = (float)((uint)(fVar8 * fVar15) ^ __xmm_80000000800000008000000080000000);
  fVar13 = fVar8 * fVar13;
  fVar8 = (float)((uint)(fVar8 * fVar14) ^ __xmm_80000000800000008000000080000000);
  __return_storage_ptr__->M[0] = fVar15 * fVar6 + fVar7 * fVar3;
  __return_storage_ptr__->M[1] = fVar4 * fVar15 + fVar1 * fVar7;
  __return_storage_ptr__->M[3] = fVar3 * fVar8 + fVar6 * fVar13;
  __return_storage_ptr__->M[4] = fVar4 * fVar13 + fVar1 * fVar8;
  __return_storage_ptr__->M[5] = fVar5 * fVar13 + fVar2 * fVar8;
  __return_storage_ptr__->M[2] = fVar5 * fVar15 + fVar2 * fVar7;
  return __return_storage_ptr__;
}

// Ds @ 143a64f00

PMatrix<float,3,2> * __thiscall
Chaos::Softs::FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>::
Ds(FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles> *this,
  PMatrix<float,3,2> *__return_storage_ptr__,int param_1,FSolverParticles *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  PMatrix<float,3,2> *pPVar13;
  TVector<float,3> *pTVar14;
  TVector<float,3> *pTVar15;
  longlong lVar16;
  uint uVar17;
  
  lVar16 = (longlong)param_1;
  if ((-1 < param_1) && (param_1 < (this->MeshConstraints).ArrayNum)) {
    uVar17 = (uint)~param_1 >> 0x1f;
    if ((param_1 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      pPVar13 = (PMatrix<float,3,2> *)(*pcVar9)();
      return pPVar13;
    }
    if (-1 < *(int *)((this->MeshConstraints).AllocatorInstance.Data + lVar16 * 0xc)) {
      uVar11 = 0;
      uVar12 = uVar11;
      if (param_1 < (this->MeshConstraints).ArrayNum) {
        uVar12 = uVar17;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        pPVar13 = (PMatrix<float,3,2> *)(*pcVar9)();
        return pPVar13;
      }
      if (*(int *)((this->MeshConstraints).AllocatorInstance.Data + lVar16 * 0xc) <
          (int)param_2->_padding_) {
        uVar12 = uVar11;
        if (param_1 < (this->MeshConstraints).ArrayNum) {
          uVar12 = uVar17;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          pPVar13 = (PMatrix<float,3,2> *)(*pcVar9)();
          return pPVar13;
        }
        if (-1 < *(int *)((this->MeshConstraints).AllocatorInstance.Data + lVar16 * 0xc + 4)) {
          uVar12 = uVar11;
          if (param_1 < (this->MeshConstraints).ArrayNum) {
            uVar12 = uVar17;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            pPVar13 = (PMatrix<float,3,2> *)(*pcVar9)();
            return pPVar13;
          }
          if (*(int *)((this->MeshConstraints).AllocatorInstance.Data + lVar16 * 0xc + 4) <
              (int)param_2->_padding_) {
            if (param_1 < (this->MeshConstraints).ArrayNum) {
              uVar11 = uVar17;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              pPVar13 = (PMatrix<float,3,2> *)(*pcVar9)();
              return pPVar13;
            }
            if (-1 < *(int *)((this->MeshConstraints).AllocatorInstance.Data + lVar16 * 0xc + 8)) {
              uVar11 = 0;
              uVar12 = uVar11;
              if (param_1 < (this->MeshConstraints).ArrayNum) {
                uVar12 = uVar17;
              }
              if ((uVar12 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar9 = (code *)swi(3);
                pPVar13 = (PMatrix<float,3,2> *)(*pcVar9)();
                return pPVar13;
              }
              if (*(int *)((this->MeshConstraints).AllocatorInstance.Data + lVar16 * 0xc + 8) <
                  (int)param_2->_padding_) {
                uVar12 = uVar11;
                if (param_1 < (this->MeshConstraints).ArrayNum) {
                  uVar12 = uVar17;
                }
                if ((uVar12 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar9 = (code *)swi(3);
                  pPVar13 = (PMatrix<float,3,2> *)(*pcVar9)();
                  return pPVar13;
                }
                pTVar14 = FSolverParticles::P(param_2,*(int *)((this->MeshConstraints).
                                                               AllocatorInstance.Data +
                                                              lVar16 * 0xc + 4));
                uVar12 = uVar11;
                if (param_1 < (this->MeshConstraints).ArrayNum) {
                  uVar12 = uVar17;
                }
                if ((uVar12 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar9 = (code *)swi(3);
                  pPVar13 = (PMatrix<float,3,2> *)(*pcVar9)();
                  return pPVar13;
                }
                pTVar15 = FSolverParticles::P(param_2,*(int *)((this->MeshConstraints).
                                                               AllocatorInstance.Data + lVar16 * 0xc
                                                              ));
                fVar1 = *(float *)&pTVar14->field_0x8;
                fVar2 = *(float *)&pTVar14->field_0x4;
                fVar3 = *(float *)pTVar14;
                fVar4 = *(float *)&pTVar15->field_0x8;
                fVar5 = *(float *)&pTVar15->field_0x4;
                fVar6 = *(float *)pTVar15;
                uVar12 = uVar11;
                if (param_1 < (this->MeshConstraints).ArrayNum) {
                  uVar12 = uVar17;
                }
                if ((uVar12 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar9 = (code *)swi(3);
                  pPVar13 = (PMatrix<float,3,2> *)(*pcVar9)();
                  return pPVar13;
                }
                pTVar14 = FSolverParticles::P(param_2,*(int *)((this->MeshConstraints).
                                                               AllocatorInstance.Data +
                                                              lVar16 * 0xc + 8));
                if (param_1 < (this->MeshConstraints).ArrayNum) {
                  uVar11 = uVar17;
                }
                if ((uVar11 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar9 = (code *)swi(3);
                  pPVar13 = (PMatrix<float,3,2> *)(*pcVar9)();
                  return pPVar13;
                }
                pTVar15 = FSolverParticles::P(param_2,*(int *)((this->MeshConstraints).
                                                               AllocatorInstance.Data + lVar16 * 0xc
                                                              ));
                fVar7 = *(float *)pTVar14;
                fVar8 = *(float *)&pTVar14->field_0x4;
                __return_storage_ptr__->M[0] = fVar3 - fVar6;
                fVar3 = *(float *)pTVar15;
                fVar6 = *(float *)&pTVar15->field_0x4;
                __return_storage_ptr__->M[1] = fVar2 - fVar5;
                __return_storage_ptr__->M[3] = fVar7 - fVar3;
                fVar2 = *(float *)&pTVar14->field_0x8;
                fVar3 = *(float *)&pTVar15->field_0x8;
                __return_storage_ptr__->M[2] = fVar1 - fVar4;
                __return_storage_ptr__->M[4] = fVar8 - fVar6;
                __return_storage_ptr__->M[5] = fVar2 - fVar3;
                return __return_storage_ptr__;
              }
            }
          }
        }
      }
    }
  }
  __return_storage_ptr__->M[0] = 0.0;
  __return_storage_ptr__->M[1] = 0.0;
  __return_storage_ptr__->M[2] = 0.0;
  __return_storage_ptr__->M[3] = 0.0;
  __return_storage_ptr__->M[4] = 0.0;
  __return_storage_ptr__->M[5] = 0.0;
  return __return_storage_ptr__;
}

// GetConstraintsArray @ 143a68630

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::Softs::FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>::
GetConstraintsArray(FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>
                    *this,TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
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
  longlong local_res10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (__return_storage_ptr__,(this->MeshConstraints).ArrayNum,Default);
  uVar11 = 0;
  if (0 < (this->MeshConstraints).ArrayNum) {
    lVar12 = 0;
    local_res10 = 0;
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
      if (iVar8 < 3) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,3 - iVar8,(ForAnyElementType *)pFVar9,(int *)pFVar2,
                           (int *)(pFVar9 + 0xc));
        memset((void *)(*(longlong *)&pFVar9->field_0x0 + (longlong)iVar6 * 4),0,
               (longlong)(3 - iVar8) << 2);
      }
      else if (3 < iVar8) {
        iVar8 = iVar8 + -3;
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
        else if (iVar8 == 0) goto LAB_143a687dc;
        _Dst = (void *)(*(longlong *)&pFVar9->field_0x0 + 0xc);
        iVar6 = (*(int *)&pFVar2->field_0x0 - iVar8) + -3;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar8 * 4),(longlong)iVar6 << 2);
        }
        *(int *)&pFVar2->field_0x0 = *(int *)&pFVar2->field_0x0 - iVar8;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)pFVar9,*(int *)&pFVar2->field_0x0,(int *)(pFVar9 + 0xc))
        ;
      }
LAB_143a687dc:
      uVar5 = 0;
      if ((int)uVar11 < (this->MeshConstraints).ArrayNum) {
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
      uVar1 = *(undefined4 *)((this->MeshConstraints).AllocatorInstance.Data + local_res10);
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
      if ((int)uVar11 < (this->MeshConstraints).ArrayNum) {
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
      uVar1 = *(undefined4 *)((this->MeshConstraints).AllocatorInstance.Data + local_res10 + 4);
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
      if ((int)uVar11 < (this->MeshConstraints).ArrayNum) {
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
      uVar1 = *(undefined4 *)((this->MeshConstraints).AllocatorInstance.Data + local_res10 + 8);
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
      pFVar2 = pFVar2 + lVar12;
      local_res10 = local_res10 + 0xc;
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x10;
      *(undefined4 *)(*(longlong *)pFVar2 + 8) = uVar1;
    } while ((int)uVar11 < (this->MeshConstraints).ArrayNum);
  }
  return __return_storage_ptr__;
}

// InitializeCodimensionData @ 143a73920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>::
InitializeCodimensionData
          (FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles> *this
          ,FSolverParticles *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  TVector<float,3> *pTVar9;
  TVector<float,3> *pTVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  undefined1 local_e8 [4];
  float local_e4;
  PMatrix<float,2,2> local_e0;
  ulonglong local_d0;
  
  local_d0 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_e4 = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            (&this->Measure,&local_e4,(this->MeshConstraints).ArrayNum);
  local_e0.M[0] = 0.0;
  local_e0.M[1] = 0.0;
  local_e0.M[2] = 0.0;
  local_e0.M[3] = 0.0;
  TArray<Chaos::PMatrix<float,2,2>,TSizedDefaultAllocator<32>_>::Init
            (&this->DmInverse,&local_e0,(this->MeshConstraints).ArrayNum);
  uVar6 = __xmm_80000000800000008000000080000000;
  fVar5 = __real_3f000000;
  fVar4 = __real_3f800000;
  uVar11 = 0;
  if (0 < (this->MeshConstraints).ArrayNum) {
    lVar14 = 0;
    lVar15 = 0;
    lVar13 = 0;
    do {
      iVar1 = (this->MeshConstraints).ArrayNum;
      uVar12 = ~uVar11 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar11 < iVar1) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        local_f8 = (longlong)(int)uVar11;
        local_f0 = (longlong)iVar1;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (*(int *)((this->MeshConstraints).AllocatorInstance.Data + lVar13) <
          (int)param_1->_padding_) {
        iVar1 = (this->MeshConstraints).ArrayNum;
        uVar8 = 0;
        if ((int)uVar11 < iVar1) {
          uVar8 = uVar12;
        }
        if (uVar8 == 0) {
          local_f8 = (longlong)(int)uVar11;
          local_f0 = (longlong)iVar1;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (0x7fffffff < *(uint *)((this->MeshConstraints).AllocatorInstance.Data + lVar13))
        goto LAB_143a73ab8;
      }
      else {
LAB_143a73ab8:
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("MeshConstraints[e][0] < (int32)Particles.Size() && MeshConstraints[e][0] > INDEX_NONE"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Deformable\\GaussSeidelCorotatedCodimensionalConstraints.h"
                           ,0x97,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar1 = (this->MeshConstraints).ArrayNum;
      uVar8 = 0;
      if ((int)uVar11 < iVar1) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        local_f8 = (longlong)(int)uVar11;
        local_f0 = (longlong)iVar1;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (*(int *)((this->MeshConstraints).AllocatorInstance.Data + lVar13 + 4) <
          (int)param_1->_padding_) {
        iVar1 = (this->MeshConstraints).ArrayNum;
        uVar8 = 0;
        if ((int)uVar11 < iVar1) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if (uVar8 == 0) {
          local_f8 = (longlong)(int)uVar11;
          local_f0 = (longlong)iVar1;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (0x7fffffff < *(uint *)((this->MeshConstraints).AllocatorInstance.Data + lVar13 + 4))
        goto LAB_143a73b85;
      }
      else {
LAB_143a73b85:
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("MeshConstraints[e][1] < (int32)Particles.Size() && MeshConstraints[e][1] > INDEX_NONE"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Deformable\\GaussSeidelCorotatedCodimensionalConstraints.h"
                           ,0x98,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar1 = (this->MeshConstraints).ArrayNum;
      uVar8 = 0;
      if ((int)uVar11 < iVar1) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if (uVar8 == 0) {
        local_f8 = (longlong)(int)uVar11;
        local_f0 = (longlong)iVar1;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (*(int *)((this->MeshConstraints).AllocatorInstance.Data + lVar13 + 8) <
          (int)param_1->_padding_) {
        iVar1 = (this->MeshConstraints).ArrayNum;
        uVar8 = 0;
        if ((int)uVar11 < iVar1) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if (uVar8 == 0) {
          local_f8 = (longlong)(int)uVar11;
          local_f0 = (longlong)iVar1;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (0x7fffffff < *(uint *)((this->MeshConstraints).AllocatorInstance.Data + lVar13 + 8))
        goto LAB_143a73c56;
      }
      else {
LAB_143a73c56:
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("MeshConstraints[e][2] < (int32)Particles.Size() && MeshConstraints[e][2] > INDEX_NONE"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Deformable\\GaussSeidelCorotatedCodimensionalConstraints.h"
                           ,0x99,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar1 = (this->MeshConstraints).ArrayNum;
      uVar8 = 0;
      if ((int)uVar11 < iVar1) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if (uVar8 == 0) {
        local_f8 = (longlong)(int)uVar11;
        local_f0 = (longlong)iVar1;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (*(int *)((this->MeshConstraints).AllocatorInstance.Data + lVar13) <
          (int)param_1->_padding_) {
        iVar1 = (this->MeshConstraints).ArrayNum;
        uVar8 = 0;
        if ((int)uVar11 < iVar1) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if (uVar8 == 0) {
          local_f8 = (longlong)(int)uVar11;
          local_f0 = (longlong)iVar1;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (-1 < *(int *)((this->MeshConstraints).AllocatorInstance.Data + lVar13)) {
          iVar1 = (this->MeshConstraints).ArrayNum;
          uVar8 = 0;
          if ((int)uVar11 < iVar1) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if (uVar8 == 0) {
            local_f8 = (longlong)(int)uVar11;
            local_f0 = (longlong)iVar1;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          if (*(int *)((this->MeshConstraints).AllocatorInstance.Data + lVar13 + 4) <
              (int)param_1->_padding_) {
            iVar1 = (this->MeshConstraints).ArrayNum;
            uVar8 = 0;
            if ((int)uVar11 < iVar1) {
              uVar8 = ~uVar11 >> 0x1f;
            }
            if (uVar8 == 0) {
              local_f8 = (longlong)(int)uVar11;
              local_f0 = (longlong)iVar1;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            if (-1 < *(int *)((this->MeshConstraints).AllocatorInstance.Data + lVar13 + 4)) {
              iVar1 = (this->MeshConstraints).ArrayNum;
              uVar8 = 0;
              if ((int)uVar11 < iVar1) {
                uVar8 = ~uVar11 >> 0x1f;
              }
              if (uVar8 == 0) {
                local_f8 = (longlong)(int)uVar11;
                local_f0 = (longlong)iVar1;
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar7) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              if (*(int *)((this->MeshConstraints).AllocatorInstance.Data + lVar13 + 8) <
                  (int)param_1->_padding_) {
                iVar1 = (this->MeshConstraints).ArrayNum;
                uVar8 = 0;
                if ((int)uVar11 < iVar1) {
                  uVar8 = ~uVar11 >> 0x1f;
                }
                if (uVar8 == 0) {
                  local_f8 = (longlong)(int)uVar11;
                  local_f0 = (longlong)iVar1;
                  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar7) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                }
                if (-1 < *(int *)((this->MeshConstraints).AllocatorInstance.Data + lVar13 + 8)) {
                  iVar1 = (this->MeshConstraints).ArrayNum;
                  uVar8 = 0;
                  if ((int)uVar11 < iVar1) {
                    uVar8 = ~uVar11 >> 0x1f;
                  }
                  if (uVar8 == 0) {
                    local_f8 = (longlong)(int)uVar11;
                    local_f0 = (longlong)iVar1;
                    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      );
                    if (bVar7) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                  }
                  pTVar9 = TParticles<float,3>::GetX
                                     ((TParticles<float,3> *)param_1,
                                      *(int *)((this->MeshConstraints).AllocatorInstance.Data +
                                              lVar13 + 4));
                  iVar1 = (this->MeshConstraints).ArrayNum;
                  uVar8 = 0;
                  if ((int)uVar11 < iVar1) {
                    uVar8 = ~uVar11 >> 0x1f;
                  }
                  if ((uVar8 == 0) &&
                     (local_f8 = lVar14, local_f0 = (longlong)iVar1,
                     bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar7)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  pTVar10 = TParticles<float,3>::GetX
                                      ((TParticles<float,3> *)param_1,
                                       *(int *)((this->MeshConstraints).AllocatorInstance.Data +
                                               lVar13));
                  fVar20 = *(float *)&pTVar9->field_0x8 - *(float *)&pTVar10->field_0x8;
                  fVar25 = *(float *)&pTVar9->field_0x4 - *(float *)&pTVar10->field_0x4;
                  fVar23 = *(float *)pTVar9 - *(float *)pTVar10;
                  iVar1 = (this->MeshConstraints).ArrayNum;
                  uVar8 = 0;
                  if ((int)uVar11 < iVar1) {
                    uVar8 = ~uVar11 >> 0x1f;
                  }
                  if (uVar8 == 0) {
                    local_f8 = (longlong)(int)uVar11;
                    local_f0 = (longlong)iVar1;
                    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      );
                    if (bVar7) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                  }
                  pTVar9 = TParticles<float,3>::GetX
                                     ((TParticles<float,3> *)param_1,
                                      *(int *)((this->MeshConstraints).AllocatorInstance.Data +
                                              lVar13 + 8));
                  iVar1 = (this->MeshConstraints).ArrayNum;
                  uVar8 = 0;
                  if ((int)uVar11 < iVar1) {
                    uVar8 = ~uVar11 >> 0x1f;
                  }
                  if (uVar8 == 0) {
                    local_f8 = (longlong)(int)uVar11;
                    local_f0 = (longlong)iVar1;
                    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      );
                    if (bVar7) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                  }
                  pTVar10 = TParticles<float,3>::GetX
                                      ((TParticles<float,3> *)param_1,
                                       *(int *)((this->MeshConstraints).AllocatorInstance.Data +
                                               lVar13));
                  fVar19 = *(float *)&pTVar9->field_0x4 - *(float *)&pTVar10->field_0x4;
                  fVar18 = *(float *)pTVar9 - *(float *)pTVar10;
                  fVar17 = *(float *)&pTVar9->field_0x8 - *(float *)&pTVar10->field_0x8;
                  iVar1 = (this->Measure).ArrayNum;
                  uVar8 = 0;
                  if ((int)uVar11 < iVar1) {
                    uVar8 = ~uVar11 >> 0x1f;
                  }
                  fVar22 = SQRT(fVar23 * fVar23 + fVar25 * fVar25 + fVar20 * fVar20);
                  fVar16 = fVar25 * fVar17 - fVar20 * fVar19;
                  fVar24 = fVar23 * fVar19 - fVar25 * fVar18;
                  fVar21 = fVar20 * fVar18 - fVar23 * fVar17;
                  fVar21 = SQRT(fVar21 * fVar21 + fVar16 * fVar16 + fVar24 * fVar24);
                  fVar16 = fVar21 / fVar22;
                  if (uVar8 == 0) {
                    local_f8 = (longlong)(int)uVar11;
                    local_f0 = (longlong)iVar1;
                    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      );
                    if (bVar7) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                  }
                  *(float *)((this->Measure).AllocatorInstance.Data + lVar14 * 4) = fVar21 * fVar5;
                  iVar1 = (this->Measure).ArrayNum;
                  uVar8 = 0;
                  if ((int)uVar11 < iVar1) {
                    uVar8 = ~uVar11 >> 0x1f;
                  }
                  if (uVar8 == 0) {
                    local_f8 = (longlong)(int)uVar11;
                    local_f0 = (longlong)iVar1;
                    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      );
                    if (bVar7) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                  }
                  if (*(float *)((this->Measure).AllocatorInstance.Data + lVar14 * 4) <= 0.0) {
                    local_e8[0] = 0;
                    `Chaos::Softs::
                    FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>
                    ::InitializeCodimensionData'::__l28::<lambda_1>::operator()(local_e8);
                  }
                  iVar1 = (this->DmInverse).ArrayNum;
                  fVar21 = fVar4 / (fVar16 * fVar22);
                  uVar8 = 0;
                  if ((int)uVar11 < iVar1) {
                    uVar8 = ~uVar11 >> 0x1f;
                  }
                  if (uVar8 == 0) {
                    local_f8 = (longlong)(int)uVar11;
                    local_f0 = (longlong)iVar1;
                    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      );
                    if (bVar7) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                  }
                  pFVar2 = (this->DmInverse).AllocatorInstance.Data;
                  *(float *)(pFVar2 + lVar15) = fVar16 * fVar21;
                  *(undefined4 *)(pFVar2 + lVar15 + 4) = 0x80000000;
                  *(uint *)(pFVar2 + lVar15 + 8) =
                       (uint)(((fVar23 * fVar18 + fVar25 * fVar19 + fVar20 * fVar17) / fVar22) *
                             fVar21) ^ uVar6;
                  *(float *)(pFVar2 + lVar15 + 0xc) = fVar22 * fVar21;
                }
              }
            }
          }
        }
      }
      uVar11 = uVar11 + 1;
      lVar14 = lVar14 + 1;
      lVar13 = lVar13 + 0xc;
      lVar15 = lVar15 + 0x10;
    } while ((int)uVar11 < (this->MeshConstraints).ArrayNum);
  }
  return;
}

// operator() @ 1504a4750

bool __thiscall
`Chaos::Softs::FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>::
FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7586625112053383215>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7586625112053383215>,
                       &`public:___cdecl_`public:___cdecl_Chaos::Softs::FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>::FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles_const&___ptr64,TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<float,TSizedDefaultAllocator<32>_>_const&___ptr64,float_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a51f0

bool __thiscall
`Chaos::Softs::FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>::
InitializeCodimensionData'::__l28::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7586625112053383333>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7586625112053383333>,
                       &`public:___cdecl_`protected:_void___cdecl_Chaos::Softs::FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>::InitializeCodimensionData(Chaos::Softs::FSolverParticles_const&___ptr64)___ptr64'::`28'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

