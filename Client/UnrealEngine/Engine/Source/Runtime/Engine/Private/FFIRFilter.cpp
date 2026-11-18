// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// CalculateCoefficient @ 1474c2980

void __thiscall FFIRFilter::CalculateCoefficient(FFIRFilter *this,EFilterInterpolationType param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  
  fVar4 = __real_3f800000;
  if (0 < (this->FilterData).ArrayNum) {
    uVar7 = 0;
    fVar10 = 0.0;
    uVar6 = 0;
    if ((this->Coefficients).ArrayNum != 0) {
      lVar8 = 0;
      do {
        if (((this->FilterData).ArrayNum < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AnimInterpFilter.h"
                               ,0x38,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar1 = (this->Coefficients).ArrayNum;
        fVar9 = fVar4 / (float)iVar1;
        if (param_1 != BSIT_Average) {
          if (param_1 == BSIT_Linear) {
            fVar9 = (float)(int)uVar7 * fVar9;
          }
          else if (param_1 == BSIT_Cubic) {
            fVar9 = (float)(int)uVar7 * fVar9 * fVar9 * fVar9;
          }
          else {
            fVar9 = 0.0;
          }
        }
        uVar6 = 0;
        if ((int)uVar7 < iVar1) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(float *)((this->Coefficients).AllocatorInstance.Data + lVar8) = fVar9;
        uVar6 = 0;
        if ((int)uVar7 < (this->Coefficients).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar7 = uVar7 + 1;
        fVar10 = fVar10 + *(float *)((this->Coefficients).AllocatorInstance.Data + lVar8);
        uVar6 = (this->Coefficients).ArrayNum;
        lVar8 = lVar8 + 4;
      } while (uVar7 != uVar6);
    }
    if ((__real_3727c5ac < (float)((uint)(fVar10 - fVar4) & __xmm_7fffffff7fffffff7fffffff7fffffff))
       && (uVar7 = 0, uVar6 != 0)) {
      lVar8 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar7 < (this->Coefficients).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (this->Coefficients).AllocatorInstance.Data;
        uVar7 = uVar7 + 1;
        *(float *)(pFVar2 + lVar8) = (fVar4 / fVar10) * *(float *)(pFVar2 + lVar8);
        lVar8 = lVar8 + 4;
      } while (uVar7 != (this->Coefficients).ArrayNum);
    }
  }
  return;
}

// CalculateFilteredOutput @ 1474c2be0

float __thiscall FFIRFilter::CalculateFilteredOutput(FFIRFilter *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  
  uVar8 = (this->Coefficients).ArrayNum - 1;
  uVar6 = this->CurrentStack;
  fVar9 = 0.0;
  if ((int)uVar8 < 0) {
    return 0.0;
  }
  lVar7 = (longlong)(int)uVar8 * 4;
  do {
    uVar4 = 0;
    if ((int)uVar8 < (this->Coefficients).ArrayNum) {
      uVar4 = ~uVar8 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        fVar9 = (float)(*pcVar2)();
        return fVar9;
      }
    }
    pFVar1 = (this->Coefficients).AllocatorInstance.Data;
    uVar4 = 0;
    if ((int)uVar6 < (this->FilterData).ArrayNum) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        fVar9 = (float)(*pcVar2)();
        return fVar9;
      }
    }
    lVar5 = (longlong)(int)uVar6;
    uVar6 = uVar6 - 1;
    fVar9 = fVar9 + *(float *)((this->FilterData).AllocatorInstance.Data + lVar5 * 4) *
                    *(float *)(pFVar1 + lVar7);
    if ((int)uVar6 < 0) {
      uVar6 = (this->FilterData).ArrayNum - 1;
    }
    lVar7 = lVar7 + -4;
    uVar8 = uVar8 - 1;
  } while (-1 < (int)uVar8);
  return fVar9;
}

// GetFilteredData @ 1474d9690

float __thiscall FFIRFilter::GetFilteredData(FFIRFilter *this,float param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  float fVar10;
  
  iVar1 = (this->FilterData).ArrayNum;
  if (iVar1 < 1) {
    this->LastOutput = param_1;
    return param_1;
  }
  uVar7 = this->CurrentStack;
  uVar9 = 0;
  if ((int)uVar7 < iVar1) {
    uVar9 = ~uVar7 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    fVar10 = (float)(*pcVar3)();
    return fVar10;
  }
  *(float *)((this->FilterData).AllocatorInstance.Data + (longlong)(int)uVar7 * 4) = param_1;
  fVar10 = 0.0;
  uVar9 = (this->Coefficients).ArrayNum - 1;
  uVar7 = this->CurrentStack;
  if (-1 < (int)uVar9) {
    lVar8 = (longlong)(int)uVar9 * 4;
    do {
      uVar5 = 0;
      if ((int)uVar9 < (this->Coefficients).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        fVar10 = (float)(*pcVar3)();
        return fVar10;
      }
      pFVar2 = (this->Coefficients).AllocatorInstance.Data;
      uVar5 = 0;
      if ((int)uVar7 < (this->FilterData).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        fVar10 = (float)(*pcVar3)();
        return fVar10;
      }
      lVar6 = (longlong)(int)uVar7;
      uVar7 = uVar7 - 1;
      fVar10 = fVar10 + *(float *)((this->FilterData).AllocatorInstance.Data + lVar6 * 4) *
                        *(float *)(pFVar2 + lVar8);
      if ((int)uVar7 < 0) {
        uVar7 = (this->FilterData).ArrayNum - 1;
      }
      lVar8 = lVar8 + -4;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  iVar1 = (this->FilterData).ArrayNum;
  this->CurrentStack = this->CurrentStack + 1;
  if (iVar1 + -1 < this->CurrentStack) {
    this->CurrentStack = 0;
  }
  this->LastOutput = fVar10;
  return fVar10;
}

// GetInterpolationCoefficient @ 1474da290

float __thiscall
FFIRFilter::GetInterpolationCoefficient
          (FFIRFilter *this,EFilterInterpolationType param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((this->FilterData).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AnimInterpFilter.h"
                       ,0x38,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  fVar3 = __real_3f800000 / (float)(this->Coefficients).ArrayNum;
  if (param_1 == BSIT_Average) {
    return fVar3;
  }
  if (param_1 == BSIT_Linear) {
    return (float)param_2 * fVar3;
  }
  if (param_1 != BSIT_Cubic) {
    return 0.0;
  }
  return (float)param_2 * fVar3 * fVar3 * fVar3;
}

