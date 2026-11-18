// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 4

// FPointsSampler @ 14dfae2f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPointsSampler * __thiscall
GroomBinding_RBFWeighting::FPointsSampler::FPointsSampler
          (FPointsSampler *this,TArray<bool,TSizedDefaultAllocator<32>_> *param_1,
          TVector<float> *param_2,int param_3)

{
  undefined8 uVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  FPointsSampler *pFVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  float local_res20 [2];
  TArray<float,TSizedDefaultAllocator<32>_> local_58 [2];
  
  uVar6 = 0;
  (this->SampleIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SampleIndices).ArrayNum = 0;
  (this->SampleIndices).ArrayMax = 0;
  (this->SamplePositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SamplePositions).ArrayNum = 0;
  (this->SamplePositions).ArrayMax = 0;
  iVar8 = param_1->ArrayNum;
  uVar13 = 0xffffffff;
  uVar10 = 0xffffffff;
  iVar14 = 0;
  uVar11 = uVar6;
  uVar15 = uVar6;
  if (0 < iVar8) {
    do {
      uVar9 = (uint)uVar6;
      uVar10 = 0;
      if ((int)uVar9 < iVar8) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FPointsSampler *)(*pcVar4)();
        return pFVar7;
      }
      if (((param_1->AllocatorInstance).Data[uVar11] != (FScriptContainerElement)0x0) &&
         (uVar15 = (ulonglong)((int)uVar15 + 1), (int)uVar13 == -1)) {
        uVar13 = uVar6;
      }
      uVar10 = (uint)uVar13;
      iVar14 = (int)uVar15;
      iVar8 = param_1->ArrayNum;
      uVar6 = (ulonglong)(uVar9 + 1);
      uVar11 = uVar11 + 1;
    } while ((int)(uVar9 + 1) < iVar8);
  }
  if (iVar14 < param_3) {
    param_3 = iVar14;
  }
  if (param_3 != 0) {
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum(&this->SampleIndices,param_3,Default);
    if (((this->SampleIndices).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FPointsSampler *)(*pcVar4)();
      return pFVar7;
    }
    *(uint *)(this->SampleIndices).AllocatorInstance.Data = uVar10;
    uVar9 = 0;
    if ((int)uVar10 < param_1->ArrayNum) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FPointsSampler *)(*pcVar4)();
      return pFVar7;
    }
    local_res20[0] = 3.4028235e+38;
    (param_1->AllocatorInstance).Data[(int)uVar10] = (FScriptContainerElement)0x0;
    local_58[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58[0].ArrayNum = 0;
    local_58[0].ArrayMax = 0;
    TArray<float,TSizedDefaultAllocator<32>_>::Init(local_58,local_res20,param_1->ArrayNum);
    uVar10 = 1;
    if (1 < param_3) {
      do {
        FurthestPoint(this,param_1->ArrayNum,param_2,uVar10,param_1,local_58);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < param_3);
    }
    iVar8 = (this->SampleIndices).ArrayNum;
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->SamplePositions,iVar8,Default);
    uVar10 = 0;
    if (0 < iVar8) {
      lVar16 = 0;
      lVar12 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar10 < (this->SampleIndices).ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FPointsSampler *)(*pcVar4)();
          return pFVar7;
        }
        uVar9 = *(uint *)((this->SampleIndices).AllocatorInstance.Data + lVar16 * 4);
        uVar1 = *(undefined8 *)&param_2[uVar9].field0_0x0;
        fVar2 = param_2[uVar9].field0_0x0._s_0.Z;
        uVar9 = 0;
        if ((int)uVar10 < (this->SamplePositions).ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FPointsSampler *)(*pcVar4)();
          return pFVar7;
        }
        pFVar3 = (this->SamplePositions).AllocatorInstance.Data;
        uVar10 = uVar10 + 1;
        lVar16 = lVar16 + 1;
        *(undefined8 *)(pFVar3 + lVar12) = uVar1;
        *(float *)(pFVar3 + lVar12 + 8) = fVar2;
        lVar12 = lVar12 + 0xc;
      } while (lVar16 < iVar8);
    }
    if (local_58[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].AllocatorInstance.Data);
    }
  }
  return this;
}

// BuildPositions @ 14dfba7a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
GroomBinding_RBFWeighting::FPointsSampler::BuildPositions
          (FPointsSampler *this,TVector<float> *param_1)

{
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  
  iVar2 = (this->SampleIndices).ArrayNum;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->SamplePositions,iVar2,Default);
  uVar10 = 0;
  if (0 < iVar2) {
    lVar9 = 0;
    lVar8 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < (this->SampleIndices).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
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
      uVar7 = *(uint *)((this->SampleIndices).AllocatorInstance.Data + lVar9 * 4);
      uVar1 = *(undefined8 *)&param_1[uVar7].field0_0x0;
      fVar3 = param_1[uVar7].field0_0x0._s_0.Z;
      uVar7 = 0;
      if ((int)uVar10 < (this->SamplePositions).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
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
      pFVar4 = (this->SamplePositions).AllocatorInstance.Data;
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 1;
      *(undefined8 *)(pFVar4 + lVar8) = uVar1;
      *(float *)(pFVar4 + lVar8 + 8) = fVar3;
      lVar8 = lVar8 + 0xc;
    } while (lVar9 < iVar2);
  }
  return;
}

// FurthestPoint @ 14dfc3970

void __thiscall
GroomBinding_RBFWeighting::FPointsSampler::FurthestPoint
          (FPointsSampler *this,int param_1,TVector<float> *param_2,uint param_3,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_4,
          TArray<float,TSizedDefaultAllocator<32>_> *param_5)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar10 = 0;
  uVar8 = 0;
  fVar14 = 0.0;
  if (0 < param_1) {
    lVar6 = 0;
    pfVar9 = &(param_2->field0_0x0)._s_0.Z;
    do {
      uVar7 = ~uVar8 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar8 < param_4->ArrayNum) {
        uVar5 = uVar7;
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
      if ((param_4->AllocatorInstance).Data[lVar6] != (FScriptContainerElement)0x0) {
        uVar5 = 0;
        if ((int)uVar8 < param_5->ArrayNum) {
          uVar5 = uVar7;
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
        fVar2 = *(float *)((param_5->AllocatorInstance).Data + lVar6 * 4);
        uVar5 = 0;
        if ((int)(param_3 - 1) < (this->SampleIndices).ArrayNum) {
          uVar5 = ~(param_3 - 1) >> 0x1f;
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
        uVar5 = *(uint *)((this->SampleIndices).AllocatorInstance.Data +
                         (longlong)(int)param_3 * 4 + -4);
        fVar13 = param_2[uVar5].field0_0x0._s_0.Y - pfVar9[-1];
        fVar12 = param_2[uVar5].field0_0x0._s_0.X - ((TVector<float>_u_0_s_0 *)(pfVar9 + -2))->X;
        fVar11 = param_2[uVar5].field0_0x0._s_0.Z - *pfVar9;
        uVar5 = 0;
        if ((int)uVar8 < param_5->ArrayNum) {
          uVar5 = uVar7;
        }
        fVar11 = SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11);
        if (fVar2 <= fVar11) {
          fVar11 = fVar2;
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
        *(float *)((param_5->AllocatorInstance).Data + lVar6 * 4) = fVar11;
        uVar5 = 0;
        if ((int)uVar8 < param_5->ArrayNum) {
          uVar5 = uVar7;
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
        pFVar1 = (param_5->AllocatorInstance).Data + lVar6 * 4;
        if (fVar14 < *(float *)pFVar1 || fVar14 == *(float *)pFVar1) {
          uVar10 = 0;
          if ((int)uVar8 < param_5->ArrayNum) {
            uVar10 = uVar7;
          }
          if ((uVar10 == 0) &&
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
          fVar14 = *(float *)((param_5->AllocatorInstance).Data + lVar6 * 4);
          uVar10 = uVar8;
        }
      }
      uVar8 = uVar8 + 1;
      lVar6 = lVar6 + 1;
      pfVar9 = pfVar9 + 3;
    } while ((int)uVar8 < param_1);
  }
  uVar8 = 0;
  if ((int)uVar10 < param_4->ArrayNum) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (param_4->AllocatorInstance).Data[(int)uVar10] = (FScriptContainerElement)0x0;
  uVar8 = 0;
  if ((int)param_3 < (this->SampleIndices).ArrayNum) {
    uVar8 = ~param_3 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(uint *)((this->SampleIndices).AllocatorInstance.Data + (longlong)(int)param_3 * 4) = uVar10;
  return;
}

// StartingPoint @ 14dfd8800

int __thiscall
GroomBinding_RBFWeighting::FPointsSampler::StartingPoint
          (FPointsSampler *this,TArray<bool,TSizedDefaultAllocator<32>_> *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  *param_2 = 0;
  uVar5 = 0;
  iVar4 = param_1->ArrayNum;
  uVar7 = 0xffffffff;
  if (0 < iVar4) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < iVar4) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (((param_1->AllocatorInstance).Data[lVar6] != (FScriptContainerElement)0x0) &&
         (*param_2 = *param_2 + 1, uVar7 == 0xffffffff)) {
        uVar7 = uVar5;
      }
      iVar4 = param_1->ArrayNum;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 1;
    } while ((int)uVar5 < iVar4);
  }
  return uVar7;
}

