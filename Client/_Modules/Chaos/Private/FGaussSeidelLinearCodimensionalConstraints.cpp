// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 7

// FGaussSeidelLinearCodimensionalConstraints<float,Chaos::Softs::FSolverParticles> @ 143a31c90

FGaussSeidelLinearCodimensionalConstraints<float,Chaos::Softs::FSolverParticles> * __thiscall
Chaos::Softs::FGaussSeidelLinearCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>::
FGaussSeidelLinearCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>
          (FGaussSeidelLinearCodimensionalConstraints<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1,
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3,float *param_4)

{
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *this_00;
  TArray<float,TSizedDefaultAllocator<32>_> *this_01;
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
  FGaussSeidelLinearCodimensionalConstraints<float,Chaos::Softs::FSolverParticles> *pFVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  float local_78;
  float local_74;
  float local_70 [14];
  
  pTVar1 = &this->MeshConstraints;
  this->_padding_ =
       (longlong)
       &
       ___7__FGaussSeidelLinearCodimensionalConstraints_MVFSolverParticles_Softs_Chaos___Softs_Chaos__6B_
  ;
  this_00 = &this->MuElementArray;
  (this->DmInverse).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this_01 = &this->LambdaElementArray;
  (this->DmInverse).ArrayNum = 0;
  (this->DmInverse).ArrayMax = 0;
  piVar2 = &(this->MeshConstraints).ArrayMax;
  (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->MuElementArray).ArrayNum = 0;
  (this->MuElementArray).ArrayMax = 0;
  (this_01->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->LambdaElementArray).ArrayNum = 0;
  (this->LambdaElementArray).ArrayMax = 0;
  (this->AlphaJArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AlphaJArray).ArrayNum = 0;
  (this->AlphaJArray).ArrayMax = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
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
  local_78 = 0.0;
  (this->Measure).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Measure).ArrayNum = 0;
  (this->Measure).ArrayMax = 0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            (&this->Measure,&local_78,(this->MeshConstraints).ArrayNum);
  InitializeCodimensionData(this,param_1);
  local_74 = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            (this_01,&local_74,(this->MeshConstraints).ArrayNum);
  local_70[0] = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init(this_00,local_70,(this->MeshConstraints).ArrayNum)
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
        pFVar11 = (FGaussSeidelLinearCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>
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
        pFVar11 = (FGaussSeidelLinearCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>
                   *)(*pcVar6)();
        return pFVar11;
      }
      *(float *)((this_01->AllocatorInstance).Data + lVar13) =
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
        pFVar11 = (FGaussSeidelLinearCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>
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
        pFVar11 = (FGaussSeidelLinearCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>
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

// ~FGaussSeidelLinearCodimensionalConstraints<float,Chaos::Softs::FSolverParticles> @ 143a386e0

void __thiscall
Chaos::Softs::FGaussSeidelLinearCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>::
~FGaussSeidelLinearCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>
          (FGaussSeidelLinearCodimensionalConstraints<float,Chaos::Softs::FSolverParticles> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FGaussSeidelLinearCodimensionalConstraints_MVFSolverParticles_Softs_Chaos___Softs_Chaos__6B_
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

// AddHyperelasticResidualAndHessian @ 143a48420

void __thiscall
Chaos::Softs::FGaussSeidelLinearCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>::
AddHyperelasticResidualAndHessian
          (FGaussSeidelLinearCodimensionalConstraints<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1,int param_2,int param_3,float param_4,TVector<float,3> *param_5,
          PMatrix<float,3,3> *param_6)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  PMatrix<float,3,2> *pPVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_178 [4];
  TArray<Chaos::PMatrix<float,2,2>,TSizedDefaultAllocator<32>_> *local_168;
  int local_160;
  float fStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  PMatrix<float,2,2> local_130;
  PMatrix<float,3,2> local_120;
  FSolverParticles *local_108;
  PMatrix<float,3,3> *local_100;
  TVector<float,3> *local_f8;
  PMatrix<float,3,2> local_f0;
  PMatrix<float,3,2> local_d8 [6];
  
  lVar11 = (longlong)param_2;
  local_100 = param_6;
  local_f8 = param_5;
  local_160 = param_3;
  local_108 = param_1;
  if ((((this->DmInverse).ArrayNum <= param_2) || (0x7fffffff < (uint)param_2)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementIndex < DmInverse.Num() && ElementIndex > INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Deformable\\GaussSeidelLinearCodimensionalConstraints.h"
                         ,0xa7,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((this->MuElementArray).ArrayNum <= param_2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementIndex < MuElementArray.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Deformable\\GaussSeidelLinearCodimensionalConstraints.h"
                         ,0xa8,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((this->Measure).ArrayNum <= param_2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementIndex < Measure.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Deformable\\GaussSeidelLinearCodimensionalConstraints.h"
                         ,0xa9,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((this->LambdaElementArray).ArrayNum <= param_2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementIndex < LambdaElementArray.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Deformable\\GaussSeidelLinearCodimensionalConstraints.h"
                         ,0xaa,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (2 < (uint)param_3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementIndexLocal < 3 && ElementIndexLocal > INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Deformable\\GaussSeidelLinearCodimensionalConstraints.h"
                       ,0xab,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (2 < (uint)param_3) {
      return;
    }
  }
  if ((((param_2 < (this->Measure).ArrayNum) && (param_2 < (this->MuElementArray).ArrayNum)) &&
      (param_2 < (this->LambdaElementArray).ArrayNum)) &&
     ((param_2 < (this->DmInverse).ArrayNum && (-1 < param_2)))) {
    lVar10 = 0;
    uVar13 = (uint)~param_2 >> 0x1f;
    if ((param_2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar6 = 0;
    if (param_2 < (this->DmInverse).ArrayNum) {
      uVar6 = uVar13;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_168 = &this->DmInverse;
    lVar12 = lVar11 * 0x10;
    fVar15 = 0.0;
    pFVar1 = (this->DmInverse).AllocatorInstance.Data + lVar12;
    local_158 = *(undefined8 *)pFVar1;
    uStack_150 = *(undefined8 *)(pFVar1 + 8);
    if (param_2 < (this->DmInverse).ArrayNum) {
      if ((param_2 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->DmInverse).AllocatorInstance.Data;
      pPVar9 = Ds(this,&local_f0,param_2,local_108);
      fVar15 = *(float *)(pFVar1 + lVar12);
      fVar17 = *(float *)(pFVar1 + lVar12 + 4);
      fVar20 = *(float *)(pFVar1 + lVar12 + 8);
      fVar16 = fVar15 * pPVar9->M[0] + pPVar9->M[3] * fVar17;
      fVar14 = *(float *)(pFVar1 + lVar12 + 0xc);
      fVar19 = pPVar9->M[1] * fVar15 + pPVar9->M[4] * fVar17;
      fVar18 = pPVar9->M[2] * fVar15 + pPVar9->M[5] * fVar17;
      fVar17 = fVar20 * pPVar9->M[0] + fVar14 * pPVar9->M[3];
      fVar15 = fVar20 * pPVar9->M[1] + fVar14 * pPVar9->M[4];
      fVar20 = fVar20 * pPVar9->M[2] + fVar14 * pPVar9->M[5];
      param_6 = local_100;
    }
    else {
      fVar16 = 0.0;
      fVar17 = 0.0;
      fVar18 = 0.0;
      fVar20 = 0.0;
      fVar19 = 0.0;
    }
    local_138 = 0;
    uVar6 = 0;
    if (param_2 < (this->MuElementArray).ArrayNum) {
      uVar6 = uVar13;
    }
    local_148 = 0;
    uStack_140 = 0;
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    fVar14 = *(float *)((this->MuElementArray).AllocatorInstance.Data + lVar11 * 4);
    fVar14 = fVar14 + fVar14;
    uVar7 = 0;
    uVar6 = uVar7;
    if (param_2 < local_168->ArrayNum) {
      uVar6 = uVar13;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = (local_168->AllocatorInstance).Data;
    local_130.M[0] = *(float *)(pFVar1 + lVar12);
    local_130.M[1] = *(float *)(pFVar1 + lVar12 + 8);
    local_130.M[2] = *(float *)(pFVar1 + lVar12 + 4);
    local_130.M[3] = *(float *)(pFVar1 + lVar12 + 0xc);
    uVar6 = uVar7;
    if (param_2 < (this->Measure).ArrayNum) {
      uVar6 = uVar13;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_120.M[5] =
         (float)(*(uint *)((this->Measure).AllocatorInstance.Data + lVar11 * 4) ^
                __xmm_80000000800000008000000080000000);
    local_120.M[0] = local_120.M[5] * fVar16 * fVar14;
    local_120.M[1] = local_120.M[5] * fVar19 * fVar14;
    local_120.M[2] = local_120.M[5] * fVar18 * fVar14;
    local_120.M[3] = local_120.M[5] * fVar17 * fVar14;
    local_120.M[4] = local_120.M[5] * fVar15 * fVar14;
    local_120.M[5] = local_120.M[5] * fVar20 * fVar14;
    pPVar9 = Chaos::operator*(local_d8,&local_120,&local_130);
    iVar4 = local_160;
    lVar12 = (longlong)local_160;
    local_138 = *(undefined8 *)(pPVar9->M + 4);
    local_178[0] = 0.0;
    local_178[1] = 0.0;
    local_178[2] = 0.0;
    local_148 = *(undefined8 *)pPVar9->M;
    uStack_140 = *(undefined8 *)(pPVar9->M + 2);
    if (local_160 < 1) {
      do {
        *(float *)((longlong)local_178 + lVar10) =
             (*(float *)((longlong)local_178 + lVar10) - *(float *)((longlong)&local_148 + lVar10))
             - *(float *)((longlong)&uStack_140 + lVar10 + 4);
        lVar10 = lVar10 + 4;
      } while (lVar10 < 0xc);
    }
    else {
      lVar10 = (longlong)(local_160 * 3);
      local_178[0] = *(float *)((longlong)&local_158 + lVar10 * 4 + 4);
      local_178[1] = *(float *)((longlong)&uStack_150 + lVar10 * 4);
      local_178[2] = *(float *)((longlong)&uStack_150 + lVar10 * 4 + 4);
    }
    fVar15 = param_4 * param_4;
    local_178[0] = local_178[0] * fVar15;
    local_178[1] = local_178[1] * fVar15;
    local_178[2] = local_178[2] * fVar15;
    *(float *)local_f8 = *(float *)local_f8 - local_178[0];
    *(float *)&local_f8->field_0x4 = *(float *)&local_f8->field_0x4 - local_178[1];
    *(float *)&local_f8->field_0x8 = *(float *)&local_f8->field_0x8 - local_178[2];
    uVar6 = uVar7;
    if (param_2 < (this->Measure).ArrayNum) {
      uVar6 = uVar13;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar2 = (this->MuElementArray).ArrayNum;
    fVar16 = *(float *)((this->Measure).AllocatorInstance.Data + lVar11 * 4);
    uVar6 = 0;
    if (iVar4 == 0) {
      uVar8 = uVar7;
      if (param_2 < iVar2) {
        uVar8 = uVar13;
      }
      fVar17 = (local_158._4_4_ + (float)local_158) * (local_158._4_4_ + (float)local_158) +
               (uStack_150._4_4_ + (float)uStack_150) * (uStack_150._4_4_ + (float)uStack_150);
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar16 = (fVar15 + fVar15) * fVar16;
      *(float *)param_6 =
           fVar16 * *(float *)((this->MuElementArray).AllocatorInstance.Data + lVar11 * 4) * fVar17
           + *(float *)param_6;
      if (param_2 < (this->MuElementArray).ArrayNum) {
        uVar7 = uVar13;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)&param_6->field_0x14 =
           fVar16 * *(float *)((this->MuElementArray).AllocatorInstance.Data + lVar11 * 4) * fVar17
           + *(float *)&param_6->field_0x14;
      if (param_2 < (this->MuElementArray).ArrayNum) {
        uVar6 = uVar13;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar17 = fVar16 * *(float *)((this->MuElementArray).AllocatorInstance.Data + lVar11 * 4) *
               fVar17 + *(float *)&param_6->field_0x28;
    }
    else {
      fVar16 = *(float *)((longlong)&local_158 + lVar12 * 4 + 4);
      fVar17 = (&fStack_15c)[lVar12];
      if (param_2 < iVar2) {
        uVar7 = uVar13;
      }
      fVar16 = fVar16 * fVar16;
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->MuElementArray).AllocatorInstance.Data;
      fVar18 = *(float *)param_6;
      uVar7 = uVar6;
      if (param_2 < (this->Measure).ArrayNum) {
        uVar7 = uVar13;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar16 = (fVar17 + fVar17) * fVar17 + fVar16 + fVar16;
      *(float *)param_6 =
           fVar15 * *(float *)((this->Measure).AllocatorInstance.Data + lVar11 * 4) *
           fVar16 * *(float *)(pFVar1 + lVar11 * 4) + fVar18;
      uVar7 = uVar6;
      if (param_2 < (this->MuElementArray).ArrayNum) {
        uVar7 = uVar13;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->MuElementArray).AllocatorInstance.Data;
      fVar17 = *(float *)&param_6->field_0x14;
      uVar7 = uVar6;
      if (param_2 < (this->Measure).ArrayNum) {
        uVar7 = uVar13;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)&param_6->field_0x14 =
           fVar15 * *(float *)((this->Measure).AllocatorInstance.Data + lVar11 * 4) *
           fVar16 * *(float *)(pFVar1 + lVar11 * 4) + fVar17;
      uVar7 = uVar6;
      if (param_2 < (this->MuElementArray).ArrayNum) {
        uVar7 = uVar13;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->MuElementArray).AllocatorInstance.Data;
      fVar17 = *(float *)&param_6->field_0x28;
      if (param_2 < (this->Measure).ArrayNum) {
        uVar6 = uVar13;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar17 = fVar15 * *(float *)((this->Measure).AllocatorInstance.Data + lVar11 * 4) *
               fVar16 * *(float *)(pFVar1 + lVar11 * 4) + fVar17;
    }
    *(float *)&param_6->field_0x28 = fVar17;
  }
  return;
}

// Ds @ 143a65340

PMatrix<float,3,2> * __thiscall
Chaos::Softs::FGaussSeidelLinearCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>::Ds
          (FGaussSeidelLinearCodimensionalConstraints<float,Chaos::Softs::FSolverParticles> *this,
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

// GetConstraintsArray @ 143a68ad0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::Softs::FGaussSeidelLinearCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>::
GetConstraintsArray(FGaussSeidelLinearCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>
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
        else if (iVar8 == 0) goto LAB_143a68c7c;
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
LAB_143a68c7c:
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

// InitializeCodimensionData @ 143a742d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FGaussSeidelLinearCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>::
InitializeCodimensionData
          (FGaussSeidelLinearCodimensionalConstraints<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1)

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
        goto LAB_143a74468;
      }
      else {
LAB_143a74468:
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("MeshConstraints[e][0] < (int32)Particles.Size() && MeshConstraints[e][0] > INDEX_NONE"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Deformable\\GaussSeidelLinearCodimensionalConstraints.h"
                           ,0x85,L"");
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
        goto LAB_143a74535;
      }
      else {
LAB_143a74535:
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("MeshConstraints[e][1] < (int32)Particles.Size() && MeshConstraints[e][1] > INDEX_NONE"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Deformable\\GaussSeidelLinearCodimensionalConstraints.h"
                           ,0x86,L"");
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
        goto LAB_143a74606;
      }
      else {
LAB_143a74606:
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("MeshConstraints[e][2] < (int32)Particles.Size() && MeshConstraints[e][2] > INDEX_NONE"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Deformable\\GaussSeidelLinearCodimensionalConstraints.h"
                           ,0x87,L"");
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
                    FGaussSeidelLinearCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>
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

// operator() @ 1504a5230

bool __thiscall
`Chaos::Softs::FGaussSeidelLinearCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>::
InitializeCodimensionData'::__l28::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5293103049751920787>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5293103049751920787>,
                       &`public:___cdecl_`protected:_void___cdecl_Chaos::Softs::FGaussSeidelLinearCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>::InitializeCodimensionData(Chaos::Softs::FSolverParticles_const&___ptr64)___ptr64'::`28'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

