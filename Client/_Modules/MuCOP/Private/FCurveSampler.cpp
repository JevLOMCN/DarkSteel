// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCOP
// Functions: 3

// FCurveSampler @ 14d367380

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FCurveSampler * __thiscall
CustomizableObjectPopulation::FCurveSampler::FCurveSampler
          (FCurveSampler *this,FRichCurve *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FCurveSampler *pFVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_res8 [2];
  
  fVar18 = __real_42f00000;
  fVar15 = __real_38d1b717;
  uVar7 = 0;
  this->MaxDefault = 0.0;
  (this->BinMaxHeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BinMaxHeights).ArrayNum = 0;
  (this->BinMaxHeights).ArrayMax = 0;
  (this->CumulativeBinWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CumulativeBinWeights).ArrayNum = 0;
  (this->CumulativeBinWeights).ArrayMax = 0;
  (this->Curve).CompressedKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Curve).CompressedKeys.ArrayNum = 0;
  (this->Curve).CompressedKeys.ArrayMax = 0;
  this->BinWidth = 0.03125;
  this->MinT = 0.0;
  (this->Curve).CompressionFormat = '\0';
  (this->Curve).KeyTimeCompressionFormat = '\x01';
  (this->Curve).PreInfinityExtrap = '\x05';
  (this->Curve).PostInfinityExtrap = '\x05';
  (this->Curve).ConstantValueNumKeys = (TConstantValueNumKeys)0x0;
  FRichCurve::CompressCurve(param_1,&this->Curve,fVar15,fVar18);
  FRichCurve::GetTimeRange(param_1,&this->MinT,local_res8);
  fVar15 = (local_res8[0] - this->MinT) / (float)param_2;
  this->BinWidth = fVar15;
  fVar15 = fVar15 * __real_3d000000;
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&this->CumulativeBinWeights,param_2 + 1,Default)
  ;
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&this->BinMaxHeights,param_2,Default);
  if (((this->CumulativeBinWeights).ArrayNum < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FCurveSampler *)(*pcVar1)();
    return pFVar4;
  }
  fVar18 = 0.0;
  fVar14 = 0.0;
  *(undefined4 *)(this->CumulativeBinWeights).AllocatorInstance.Data = 0xb22bcc77;
  if (0 < param_2) {
    fVar17 = fVar15 * __real_3f000000;
    uVar9 = uVar7;
    do {
      uVar8 = (uint)uVar9;
      fVar16 = 0.0;
      fVar12 = (float)(int)uVar8 * this->BinWidth + this->MinT;
      lVar6 = 0x20;
      fVar13 = 0.0;
      do {
        fVar11 = fVar17 + fVar12;
        fVar10 = FCompressedRichCurve::Eval(&this->Curve,fVar11,0.0);
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
        if (fVar13 < fVar10) {
          fVar16 = fVar11;
        }
        fVar12 = fVar12 + fVar15;
        fVar11 = fVar10;
        if (fVar10 <= fVar13) {
          fVar11 = fVar13;
        }
        fVar14 = fVar14 + fVar10 * fVar15;
        lVar6 = lVar6 + -1;
        fVar13 = fVar11;
      } while (lVar6 != 0);
      uVar5 = uVar8 + 1;
      uVar3 = 0;
      if ((int)uVar5 < (this->CumulativeBinWeights).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FCurveSampler *)(*pcVar1)();
        return pFVar4;
      }
      *(float *)((this->CumulativeBinWeights).AllocatorInstance.Data + uVar7 + 4) = fVar14;
      uVar3 = 0;
      if ((int)uVar8 < (this->BinMaxHeights).ArrayNum) {
        uVar3 = ~uVar8 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FCurveSampler *)(*pcVar1)();
        return pFVar4;
      }
      *(float *)((this->BinMaxHeights).AllocatorInstance.Data + uVar7) = fVar11;
      if (fVar18 < fVar11) {
        this->MaxDefault = fVar16;
        fVar18 = fVar11;
      }
      uVar7 = uVar7 + 4;
      uVar9 = (ulonglong)uVar5;
    } while ((int)uVar5 < param_2);
  }
  return this;
}

// IsValidSampler @ 14d36a440

bool __thiscall CustomizableObjectPopulation::FCurveSampler::IsValidSampler(FCurveSampler *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  iVar1 = (this->CumulativeBinWeights).ArrayNum;
  if (1 < iVar1) {
    uVar5 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar5 = ~(iVar1 - 1U) >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if (0.0 < *(float *)((this->CumulativeBinWeights).AllocatorInstance.Data +
                        (longlong)(this->CumulativeBinWeights).ArrayNum * 4 + -4)) {
      return true;
    }
  }
  return false;
}

// Sample @ 14d36a730

float __thiscall
CustomizableObjectPopulation::FCurveSampler::Sample(FCurveSampler *this,FRandomStream *param_1)

{
  float fVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  iVar2 = (this->CumulativeBinWeights).ArrayNum;
  uVar14 = 0;
  uVar10 = 0;
  if (1 < iVar2) {
    uVar11 = uVar10;
    if ((int)(iVar2 - 1U) < iVar2) {
      uVar11 = ~(iVar2 - 1U) >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      fVar16 = (float)(*pcVar4)();
      return fVar16;
    }
    if (0.0 < *(float *)((this->CumulativeBinWeights).AllocatorInstance.Data +
                        (longlong)(this->CumulativeBinWeights).ArrayNum * 4 + -4))
    goto LAB_14d36a7ee;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidSampler()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\MutablePopulation\\Source\\CustomizableObjectPopulation\\Private\\MuCOP\\CustomizableObjectPopulationSamplers.cpp"
                     ,0x10e,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    fVar16 = (float)(*pcVar4)();
    return fVar16;
  }
LAB_14d36a7ee:
  iVar2 = (this->CumulativeBinWeights).ArrayNum;
  uVar11 = iVar2 - 1;
  uVar7 = uVar10;
  if ((int)uVar11 < iVar2) {
    uVar7 = ~uVar11 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    fVar16 = (float)(*pcVar4)();
    return fVar16;
  }
  fVar5 = __real_3f800000;
  lVar15 = (longlong)(int)uVar11 * 4;
  fVar16 = *(float *)((this->CumulativeBinWeights).AllocatorInstance.Data + lVar15);
  uVar7 = param_1->Seed * 0xbb38435 + 0x3619636b;
  param_1->Seed = uVar7;
  do {
    uVar12 = uVar11;
    lVar15 = lVar15 + -4;
    uVar11 = uVar12 - 1;
    uVar8 = 0;
    uVar9 = uVar8;
    if ((int)uVar11 < (this->CumulativeBinWeights).ArrayNum) {
      uVar9 = -uVar12 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      fVar16 = (float)(*pcVar4)();
      return fVar16;
    }
  } while (((float)(uVar7 >> 9 | 0x3f800000) - fVar5) * fVar16 <
           *(float *)((this->CumulativeBinWeights).AllocatorInstance.Data + lVar15));
  if (uVar11 == 0) {
    if (0 < (this->CumulativeBinWeights).ArrayNum) {
      uVar8 = -uVar12 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      fVar16 = (float)(*pcVar4)();
      return fVar16;
    }
    fVar16 = *(float *)(this->CumulativeBinWeights).AllocatorInstance.Data;
    uVar13 = uVar14;
  }
  else {
    uVar7 = uVar12 - 2;
    uVar9 = uVar8;
    if ((int)uVar7 < (this->CumulativeBinWeights).ArrayNum) {
      uVar9 = ~uVar7 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      fVar16 = (float)(*pcVar4)();
      return fVar16;
    }
    pFVar3 = (this->CumulativeBinWeights).AllocatorInstance.Data;
    if ((int)uVar11 < (this->CumulativeBinWeights).ArrayNum) {
      uVar8 = -uVar12 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      fVar16 = (float)(*pcVar4)();
      return fVar16;
    }
    uVar13 = (ulonglong)(int)uVar11;
    fVar16 = *(float *)((this->CumulativeBinWeights).AllocatorInstance.Data + uVar13 * 4) -
             *(float *)(pFVar3 + (longlong)(int)uVar7 * 4);
  }
  if (__real_38d1b717 < fVar16) {
    fVar16 = this->BinWidth;
    if ((int)uVar11 < (this->BinMaxHeights).ArrayNum) {
      uVar10 = -uVar12 >> 0x1f;
    }
    fVar19 = (float)(int)uVar11 * fVar16 + this->MinT;
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      fVar16 = (float)(*pcVar4)();
      return fVar16;
    }
    fVar1 = *(float *)((this->BinMaxHeights).AllocatorInstance.Data + uVar13 * 4);
    do {
      uVar10 = param_1->Seed * 0xbb38435 + 0x3619636b;
      uVar11 = uVar10 * 0xbb38435 + 0x3619636b;
      param_1->Seed = uVar11;
      fVar18 = ((float)(uVar10 >> 9 | 0x3f800000) - fVar5) * ((fVar16 + fVar19) - fVar19) + fVar19;
      fVar17 = FCompressedRichCurve::Eval(&this->Curve,fVar18,0.0);
      if (((float)(uVar11 >> 9 | 0x3f800000) - fVar5) * fVar1 < fVar17) {
        return fVar18;
      }
      uVar10 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar10;
    } while ((int)uVar10 < 0x10000);
  }
  return this->MaxDefault;
}

