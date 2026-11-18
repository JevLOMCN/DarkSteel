// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsSolver
// Functions: 9

// To<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14e250890

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FDataflowConverter<TArray<double,TSizedDefaultAllocator<32>_>_>::
To<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TArray<double,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(param_2,param_1->ArrayNum,Default);
  uVar5 = 0;
  if (0 < param_1->ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < param_2->ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
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
      pFVar1 = (param_2->AllocatorInstance).Data;
      uVar4 = 0;
      if ((int)uVar5 < param_1->ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
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
      uVar5 = uVar5 + 1;
      *(int *)(pFVar1 + lVar6 * 4) = (int)*(double *)((param_1->AllocatorInstance).Data + lVar6 * 8)
      ;
      lVar6 = lVar6 + 1;
    } while ((int)uVar5 < param_1->ArrayNum);
  }
  return;
}

// To<TArray<double,TSizedDefaultAllocator<32>_>_> @ 14e2509a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FDataflowConverter<TArray<double,TSizedDefaultAllocator<32>_>_>::
To<TArray<double,TSizedDefaultAllocator<32>_>_>
          (TArray<double,TSizedDefaultAllocator<32>_> *param_1,
          TArray<double,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(param_2,param_1->ArrayNum,Default);
  uVar5 = 0;
  if (0 < param_1->ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < param_2->ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
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
      pFVar1 = (param_2->AllocatorInstance).Data;
      uVar4 = 0;
      if ((int)uVar5 < param_1->ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
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
      uVar5 = uVar5 + 1;
      *(undefined8 *)(pFVar1 + lVar6 * 8) =
           *(undefined8 *)((param_1->AllocatorInstance).Data + lVar6 * 8);
      lVar6 = lVar6 + 1;
    } while ((int)uVar5 < param_1->ArrayNum);
  }
  return;
}

// To<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> @ 14e250ab0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FDataflowConverter<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>::
To<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_2)

{
  double dVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>::SetNum
            (param_2,param_1->ArrayNum,Default);
  uVar9 = 0;
  if (0 < param_1->ArrayNum) {
    lVar8 = 0;
    lVar10 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < param_2->ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
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
      pFVar3 = (param_2->AllocatorInstance).Data;
      uVar7 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
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
      pFVar4 = (param_1->AllocatorInstance).Data;
      uVar9 = uVar9 + 1;
      dVar1 = *(double *)(pFVar4 + lVar8 + 8);
      dVar2 = *(double *)(pFVar4 + lVar8 + 0x10);
      pFVar4 = pFVar4 + lVar8;
      lVar8 = lVar8 + 0x20;
      *(int *)(pFVar3 + lVar10) = (int)*(double *)pFVar4;
      *(int *)(pFVar3 + lVar10 + 4) = (int)dVar1;
      *(int *)(pFVar3 + lVar10 + 8) = (int)dVar2;
      lVar10 = lVar10 + 0xc;
    } while ((int)uVar9 < param_1->ArrayNum);
  }
  return;
}

// To<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_> @ 14e250c00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FDataflowConverter<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>::
To<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  
  TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>::SetNum
            (param_2,param_1->ArrayNum,Default);
  uVar11 = 0;
  if (0 < param_1->ArrayNum) {
    lVar10 = 0;
    lVar12 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar11 < param_2->ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (param_2->AllocatorInstance).Data;
      uVar9 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (param_1->AllocatorInstance).Data;
      uVar11 = uVar11 + 1;
      pFVar1 = pFVar6 + lVar10;
      lVar2 = lVar10 + 8;
      dVar3 = *(double *)(pFVar6 + lVar10 + 0x10);
      dVar4 = *(double *)(pFVar6 + lVar10 + 0x18);
      lVar10 = lVar10 + 0x20;
      pFVar5 = pFVar5 + lVar12;
      *(ulonglong *)pFVar5 = CONCAT44((int)*(double *)(pFVar6 + lVar2),(int)*(double *)pFVar1);
      *(ulonglong *)(pFVar5 + 8) = CONCAT44((int)dVar4,(int)dVar3);
      lVar12 = lVar12 + 0x10;
    } while ((int)uVar11 < param_1->ArrayNum);
  }
  return;
}

// To<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_> @ 14e250d60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FDataflowConverter<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>::
To<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  longlong lVar9;
  
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum
            (param_2,param_1->ArrayNum,Default);
  uVar8 = 0;
  if (0 < param_1->ArrayNum) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < param_2->ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
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
      pFVar7 = (param_2->AllocatorInstance).Data + lVar9;
      uVar6 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
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
      pFVar2 = (param_1->AllocatorInstance).Data;
      uVar8 = uVar8 + 1;
      uVar4 = *(undefined8 *)(pFVar2 + lVar9 + 8);
      *(undefined8 *)pFVar7 = *(undefined8 *)(pFVar2 + lVar9);
      *(undefined8 *)(pFVar7 + 8) = uVar4;
      uVar4 = *(undefined8 *)(pFVar2 + lVar9 + 0x10 + 8);
      *(undefined8 *)(pFVar7 + 0x10) = *(undefined8 *)(pFVar2 + lVar9 + 0x10);
      *(undefined8 *)(pFVar7 + 0x18) = uVar4;
      uVar4 = *(undefined8 *)(pFVar2 + lVar9 + 0x20 + 8);
      *(undefined8 *)(pFVar7 + 0x20) = *(undefined8 *)(pFVar2 + lVar9 + 0x20);
      *(undefined8 *)(pFVar7 + 0x28) = uVar4;
      uVar4 = *(undefined8 *)(pFVar2 + lVar9 + 0x30 + 8);
      *(undefined8 *)(pFVar7 + 0x30) = *(undefined8 *)(pFVar2 + lVar9 + 0x30);
      *(undefined8 *)(pFVar7 + 0x38) = uVar4;
      uVar4 = *(undefined8 *)(pFVar2 + lVar9 + 0x40 + 8);
      *(undefined8 *)(pFVar7 + 0x40) = *(undefined8 *)(pFVar2 + lVar9 + 0x40);
      *(undefined8 *)(pFVar7 + 0x48) = uVar4;
      lVar1 = lVar9 + 0x50;
      uVar4 = *(undefined8 *)(pFVar2 + lVar1 + 8);
      lVar9 = lVar9 + 0x60;
      *(undefined8 *)(pFVar7 + 0x50) = *(undefined8 *)(pFVar2 + lVar1);
      *(undefined8 *)(pFVar7 + 0x58) = uVar4;
    } while ((int)uVar8 < param_1->ArrayNum);
  }
  return;
}

// To<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_> @ 14e250eb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FDataflowConverter<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>::
To<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>::SetNum
            (param_2,param_1->ArrayNum,Default);
  uVar9 = 0;
  if (0 < param_1->ArrayNum) {
    lVar10 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar9 < param_2->ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
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
      pFVar3 = (param_2->AllocatorInstance).Data;
      uVar8 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
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
      pFVar4 = (param_1->AllocatorInstance).Data;
      uVar9 = uVar9 + 1;
      pFVar1 = pFVar4 + lVar10;
      uVar6 = *(undefined8 *)(pFVar1 + 8);
      pFVar2 = pFVar3 + lVar10;
      *(undefined8 *)pFVar2 = *(undefined8 *)pFVar1;
      *(undefined8 *)(pFVar2 + 8) = uVar6;
      pFVar4 = pFVar4 + lVar10 + 0x10;
      uVar6 = *(undefined8 *)(pFVar4 + 8);
      pFVar3 = pFVar3 + lVar10 + 0x10;
      *(undefined8 *)pFVar3 = *(undefined8 *)pFVar4;
      *(undefined8 *)(pFVar3 + 8) = uVar6;
      lVar10 = lVar10 + 0x20;
    } while ((int)uVar9 < param_1->ArrayNum);
  }
  return;
}

// To<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_> @ 14e250fe0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FDataflowConverter<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>::
To<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (param_2,param_1->ArrayNum,Default);
  uVar10 = 0;
  if (0 < param_1->ArrayNum) {
    lVar9 = 0;
    lVar11 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar10 < param_2->ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (param_2->AllocatorInstance).Data;
      uVar8 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      uVar10 = uVar10 + 1;
      pFVar1 = pFVar3 + lVar9 + 8;
      uVar5 = *(undefined8 *)pFVar1;
      uVar6 = *(undefined8 *)(pFVar1 + 8);
      pFVar3 = pFVar3 + lVar9;
      lVar9 = lVar9 + 0x20;
      *(undefined8 *)(pFVar2 + lVar11) = *(undefined8 *)pFVar3;
      pFVar2 = pFVar2 + lVar11 + 8;
      *(undefined8 *)pFVar2 = uVar5;
      *(undefined8 *)(pFVar2 + 8) = uVar6;
      lVar11 = lVar11 + 0x18;
    } while ((int)uVar10 < param_1->ArrayNum);
  }
  return;
}

// To<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> @ 14e251120

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FDataflowConverter<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>::
To<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  
  TArray<FLinearColor,TSizedDefaultAllocator<32>_>::SetNum(param_2,param_1->ArrayNum,Default);
  uVar11 = 0;
  if (0 < param_1->ArrayNum) {
    lVar10 = 0;
    lVar12 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar11 < param_2->ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (param_2->AllocatorInstance).Data;
      uVar9 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (param_1->AllocatorInstance).Data;
      uVar11 = uVar11 + 1;
      pFVar1 = pFVar6 + lVar10;
      dVar2 = *(double *)(pFVar6 + lVar10 + 8);
      dVar3 = *(double *)(pFVar6 + lVar10 + 0x10);
      dVar4 = *(double *)(pFVar6 + lVar10 + 0x18);
      lVar10 = lVar10 + 0x20;
      pFVar5 = pFVar5 + lVar12;
      *(float *)pFVar5 = (float)*(double *)pFVar1;
      *(float *)(pFVar5 + 4) = (float)dVar2;
      *(float *)(pFVar5 + 8) = (float)dVar3;
      *(float *)(pFVar5 + 0xc) = (float)dVar4;
      lVar12 = lVar12 + 0x10;
    } while ((int)uVar11 < param_1->ArrayNum);
  }
  return;
}

// To<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14e251290

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FDataflowConverter<TArray<bool,TSizedDefaultAllocator<32>_>_>::
To<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (TArray<bool,TSizedDefaultAllocator<32>_> *param_1,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNum(param_2,param_1->ArrayNum,Default);
  uVar5 = 0;
  if (0 < param_1->ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < param_2->ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
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
      pFVar1 = (param_2->AllocatorInstance).Data;
      uVar4 = 0;
      if ((int)uVar5 < param_1->ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
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
      uVar5 = uVar5 + 1;
      pFVar1[lVar6] = (param_1->AllocatorInstance).Data[lVar6];
      lVar6 = lVar6 + 1;
    } while ((int)uVar5 < param_1->ArrayNum);
  }
  return;
}

