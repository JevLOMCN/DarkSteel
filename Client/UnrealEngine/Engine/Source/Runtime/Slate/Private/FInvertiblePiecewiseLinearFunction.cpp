// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 6

// FInvertiblePiecewiseLinearFunction @ 1427b11c0

FInvertiblePiecewiseLinearFunction * __thiscall
FInvertiblePiecewiseLinearFunction::FInvertiblePiecewiseLinearFunction
          (FInvertiblePiecewiseLinearFunction *this,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FInvertiblePiecewiseLinearFunction *pFVar7;
  longlong lVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  
  (this->SubFunctions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubFunctions).ArrayNum = 0;
  (this->SubFunctions).ArrayMax = 0;
  iVar5 = param_1->ArrayNum;
  if (iVar5 < 2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)this,&(this->SubFunctions).ArrayMax);
    (this->SubFunctions).ArrayNum = iVar5 + 1;
    pFVar1 = (this->SubFunctions).AllocatorInstance.Data;
    *(undefined8 *)(pFVar1 + (longlong)iVar5 * 0xc) = 0;
    *(undefined4 *)(pFVar1 + (longlong)iVar5 * 0xc + 8) = 0x3f800000;
    return this;
  }
  lVar8 = 0;
  uVar9 = 1;
  fVar11 = 0.0;
  do {
    uVar6 = 0;
    if ((int)(uVar9 - 1) < iVar5) {
      uVar6 = ~(uVar9 - 1) >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FInvertiblePiecewiseLinearFunction *)(*pcVar3)();
      return pFVar7;
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    uVar6 = 0;
    if ((int)uVar9 < param_1->ArrayNum) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FInvertiblePiecewiseLinearFunction *)(*pcVar3)();
      return pFVar7;
    }
    pFVar2 = (param_1->AllocatorInstance).Data;
    if (*(float *)(pFVar1 + lVar8) == *(float *)(pFVar2 + lVar8 + 8)) {
      fVar10 = fVar11;
      if (*(float *)(pFVar2 + lVar8 + 0xc) != *(float *)(pFVar1 + lVar8 + 4)) {
LAB_1427b133f:
        if (*(float *)(pFVar2 + lVar8 + 0xc) < *(float *)(pFVar1 + lVar8 + 4)) goto LAB_1427b134b;
        goto LAB_1427b1371;
      }
    }
    else {
      if (*(float *)(pFVar1 + lVar8) <= *(float *)(pFVar2 + lVar8 + 8)) goto LAB_1427b133f;
LAB_1427b134b:
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Begin.X <= End.X && Begin.Y <= End.Y",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\FInvertiblePiecewiseLinearFunction.cpp"
                         ,0x33,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FInvertiblePiecewiseLinearFunction *)(*pcVar3)();
        return pFVar7;
      }
LAB_1427b1371:
      fVar10 = (*(float *)(pFVar2 + lVar8 + 0xc) - *(float *)(pFVar1 + lVar8 + 4)) /
               (*(float *)(pFVar2 + lVar8 + 8) - *(float *)(pFVar1 + lVar8));
      if (fVar11 != fVar10) {
        iVar5 = (this->SubFunctions).ArrayNum;
        if (iVar5 == (this->SubFunctions).ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,(ForAnyElementType *)this,&(this->SubFunctions).ArrayMax);
        }
        (this->SubFunctions).ArrayNum = iVar5 + 1;
        pFVar2 = (this->SubFunctions).AllocatorInstance.Data;
        *(undefined8 *)(pFVar2 + (longlong)iVar5 * 0xc) = *(undefined8 *)(pFVar1 + lVar8);
        *(float *)(pFVar2 + (longlong)iVar5 * 0xc + 8) = fVar10;
      }
    }
    iVar5 = param_1->ArrayNum;
    uVar9 = uVar9 + 1;
    lVar8 = lVar8 + 8;
    fVar11 = fVar10;
    if (iVar5 <= (int)uVar9) {
      return this;
    }
  } while( true );
}

// FInvertiblePiecewiseLinearFunction @ 1427b1420

FInvertiblePiecewiseLinearFunction * __thiscall
FInvertiblePiecewiseLinearFunction::FInvertiblePiecewiseLinearFunction
          (FInvertiblePiecewiseLinearFunction *this)

{
  FScriptContainerElement *pFVar1;
  
  (this->SubFunctions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubFunctions).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,1,0,(ForAnyElementType *)this,1,&(this->SubFunctions).ArrayMax);
  pFVar1 = (this->SubFunctions).AllocatorInstance.Data;
  *(undefined8 *)pFVar1 = 0;
  *(undefined4 *)(pFVar1 + 8) = 0x3f800000;
  return this;
}

// FindSubFunctionAtX @ 1428097e0

FInvertiblePointSlopeFunction * __thiscall
FInvertiblePiecewiseLinearFunction::FindSubFunctionAtX
          (FInvertiblePiecewiseLinearFunction *this,float param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FInvertiblePointSlopeFunction *pFVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (((this->SubFunctions).ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FInvertiblePointSlopeFunction *)(*pcVar2)();
    return pFVar5;
  }
  iVar8 = (this->SubFunctions).ArrayNum;
  if (param_1 < *(float *)(this->SubFunctions).AllocatorInstance.Data) {
    if ((iVar8 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FInvertiblePointSlopeFunction *)(*pcVar2)();
      return pFVar5;
    }
    return (FInvertiblePointSlopeFunction *)(this->SubFunctions).AllocatorInstance.Data;
  }
  uVar11 = iVar8 - 1;
  iVar8 = 0;
  uVar9 = 0;
  if (-1 < (int)uVar11) {
    do {
      uVar4 = (int)(uVar11 + iVar8) / 2;
      lVar7 = (longlong)(int)uVar4;
      uVar10 = ~uVar4 >> 0x1f;
      uVar6 = uVar9;
      if ((int)uVar4 < (this->SubFunctions).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FInvertiblePointSlopeFunction *)(*pcVar2)();
        return pFVar5;
      }
      iVar1 = (this->SubFunctions).ArrayNum;
      if (param_1 == *(float *)((this->SubFunctions).AllocatorInstance.Data + lVar7 * 0xc)) {
        if ((int)uVar4 < iVar1) {
          uVar9 = uVar10;
        }
        if ((uVar9 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FInvertiblePointSlopeFunction *)(*pcVar2)();
          return pFVar5;
        }
        return (FInvertiblePointSlopeFunction *)
               ((this->SubFunctions).AllocatorInstance.Data + lVar7 * 0xc);
      }
      uVar6 = uVar9;
      if ((int)uVar4 < iVar1) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FInvertiblePointSlopeFunction *)(*pcVar2)();
        return pFVar5;
      }
      iVar1 = uVar4 + 1;
      if (param_1 <= *(float *)((this->SubFunctions).AllocatorInstance.Data + lVar7 * 0xc)) {
        iVar1 = iVar8;
        uVar11 = uVar4 - 1;
      }
      iVar8 = iVar1;
    } while (iVar8 <= (int)uVar11);
  }
  if ((int)uVar11 < (this->SubFunctions).ArrayNum) {
    uVar9 = ~uVar11 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FInvertiblePointSlopeFunction *)(*pcVar2)();
    return pFVar5;
  }
  return (FInvertiblePointSlopeFunction *)
         ((this->SubFunctions).AllocatorInstance.Data + (longlong)(int)uVar11 * 0xc);
}

// FindSubFunctionAtY @ 142809a30

FInvertiblePointSlopeFunction * __thiscall
FInvertiblePiecewiseLinearFunction::FindSubFunctionAtY
          (FInvertiblePiecewiseLinearFunction *this,float param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FInvertiblePointSlopeFunction *pFVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (((this->SubFunctions).ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FInvertiblePointSlopeFunction *)(*pcVar2)();
    return pFVar5;
  }
  iVar8 = (this->SubFunctions).ArrayNum;
  if (param_1 < *(float *)((this->SubFunctions).AllocatorInstance.Data + 4)) {
    if ((iVar8 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FInvertiblePointSlopeFunction *)(*pcVar2)();
      return pFVar5;
    }
    return (FInvertiblePointSlopeFunction *)(this->SubFunctions).AllocatorInstance.Data;
  }
  uVar11 = iVar8 - 1;
  iVar8 = 0;
  uVar9 = 0;
  if (-1 < (int)uVar11) {
    do {
      uVar4 = (int)(uVar11 + iVar8) / 2;
      lVar7 = (longlong)(int)uVar4;
      uVar10 = ~uVar4 >> 0x1f;
      uVar6 = uVar9;
      if ((int)uVar4 < (this->SubFunctions).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FInvertiblePointSlopeFunction *)(*pcVar2)();
        return pFVar5;
      }
      iVar1 = (this->SubFunctions).ArrayNum;
      if (param_1 == *(float *)((this->SubFunctions).AllocatorInstance.Data + lVar7 * 0xc + 4)) {
        if ((int)uVar4 < iVar1) {
          uVar9 = uVar10;
        }
        if ((uVar9 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FInvertiblePointSlopeFunction *)(*pcVar2)();
          return pFVar5;
        }
        return (FInvertiblePointSlopeFunction *)
               ((this->SubFunctions).AllocatorInstance.Data + lVar7 * 0xc);
      }
      uVar6 = uVar9;
      if ((int)uVar4 < iVar1) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FInvertiblePointSlopeFunction *)(*pcVar2)();
        return pFVar5;
      }
      iVar1 = uVar4 + 1;
      if (param_1 <= *(float *)((this->SubFunctions).AllocatorInstance.Data + lVar7 * 0xc + 4)) {
        iVar1 = iVar8;
        uVar11 = uVar4 - 1;
      }
      iVar8 = iVar1;
    } while (iVar8 <= (int)uVar11);
  }
  if ((int)uVar11 < (this->SubFunctions).ArrayNum) {
    uVar9 = ~uVar11 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FInvertiblePointSlopeFunction *)(*pcVar2)();
    return pFVar5;
  }
  return (FInvertiblePointSlopeFunction *)
         ((this->SubFunctions).AllocatorInstance.Data + (longlong)(int)uVar11 * 0xc);
}

// SolveForX @ 1428361c0

float __thiscall
FInvertiblePiecewiseLinearFunction::SolveForX
          (FInvertiblePiecewiseLinearFunction *this,float param_1)

{
  FInvertiblePointSlopeFunction *pFVar1;
  float fVar2;
  
  pFVar1 = FindSubFunctionAtY(this,param_1);
  fVar2 = __real_3f800000 / pFVar1->Slope;
  return ((pFVar1->Point).field0_0x0._s_0.X - fVar2 * (pFVar1->Point).field0_0x0._s_0.Y) +
         fVar2 * param_1;
}

// SolveForY @ 142836240

float __thiscall
FInvertiblePiecewiseLinearFunction::SolveForY
          (FInvertiblePiecewiseLinearFunction *this,float param_1)

{
  FInvertiblePointSlopeFunction *pFVar1;
  
  pFVar1 = FindSubFunctionAtX(this,param_1);
  return ((pFVar1->Point).field0_0x0._s_0.Y - pFVar1->Slope * (pFVar1->Point).field0_0x0._s_0.X) +
         pFVar1->Slope * param_1;
}

