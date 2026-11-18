// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshDescription
// Functions: 7

// FChunk @ 143656d20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FChunk * __thiscall FMeshElementIndexer::FChunk::FChunk(FChunk *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FChunk *pFVar4;
  ForElementType<int> FVar5;
  ForElementType<int> FVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  (this->StartIndex).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (this->StartIndex).ArrayNum = 0;
  (this->StartIndex).ArrayMax = 1;
  (this->Count).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (this->Count).ArrayNum = 0;
  (this->Count).ArrayMax = 1;
  (this->MaxCount).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (this->MaxCount).ArrayNum = 0;
  (this->MaxCount).ArrayMax = 1;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&this->Data,param_1 * param_2,No);
  TArray<int,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::SetNumUninitialized
            (&this->StartIndex,param_2,Default);
  TArray<int,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::SetNumUninitialized
            (&this->Count,param_2,Default);
  TArray<int,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::SetNumUninitialized
            (&this->MaxCount,param_2,Default);
  iVar9 = 0;
  uVar7 = 0;
  if (0 < param_2) {
    lVar8 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar7 < (this->StartIndex).ArrayNum) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FChunk *)(*pcVar1)();
        return pFVar4;
      }
      FVar6 = (this->StartIndex).AllocatorInstance.SecondaryData;
      FVar5 = (ForElementType<int>)&this->StartIndex;
      if (FVar6 != (ForElementType<int>)0x0) {
        FVar5 = FVar6;
      }
      uVar7 = uVar7 + 1;
      *(int *)(lVar8 + (longlong)FVar5) = iVar9;
      iVar9 = iVar9 + param_1;
      lVar8 = lVar8 + 4;
    } while ((int)uVar7 < param_2);
    uVar7 = 0;
    lVar8 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar7 < (this->MaxCount).ArrayNum) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FChunk *)(*pcVar1)();
        return pFVar4;
      }
      FVar6 = (this->MaxCount).AllocatorInstance.SecondaryData;
      FVar5 = (ForElementType<int>)&this->MaxCount;
      if (FVar6 != (ForElementType<int>)0x0) {
        FVar5 = FVar6;
      }
      uVar7 = uVar7 + 1;
      *(int *)(lVar8 + (longlong)FVar5) = param_1;
      lVar8 = lVar8 + 4;
    } while ((int)uVar7 < param_2);
  }
  FVar6 = (this->Count).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<int>)0x0) {
    FVar6 = (ForElementType<int>)&this->Count;
  }
  memset((void *)FVar6,0,(longlong)param_2 << 2);
  return this;
}

// Add @ 14365f060

/* WARNING: Type propagation algorithm not settling */

bool __thiscall FMeshElementIndexer::FChunk::Add(FChunk *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  ForElementType<int> FVar8;
  ForElementType<int> FVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  lVar14 = (longlong)param_1;
  uVar15 = (uint)~param_1 >> 0x1f;
  uVar6 = 0;
  if (param_1 < (this->MaxCount).ArrayNum) {
    uVar6 = uVar15;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  FVar8 = (this->MaxCount).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<int>)0x0) {
    FVar8 = (ForElementType<int>)&this->MaxCount;
  }
  uVar6 = 0;
  if (param_1 < (this->Count).ArrayNum) {
    uVar6 = uVar15;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  FVar9 = (this->Count).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<int>)0x0) {
    FVar9 = (ForElementType<int>)&this->Count;
  }
  if (*(int *)((longlong)FVar8 + lVar14 * 4) <= *(int *)((longlong)FVar9 + lVar14 * 4)) {
    return false;
  }
  uVar6 = 0;
  if (param_1 < (this->StartIndex).ArrayNum) {
    uVar6 = uVar15;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  FVar8 = (this->StartIndex).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<int>)0x0) {
    FVar8 = (ForElementType<int>)&this->StartIndex;
  }
  iVar2 = *(int *)((longlong)FVar8 + lVar14 * 4);
  pFVar10 = (this->Data).AllocatorInstance.Data;
  uVar6 = 0;
  if (param_1 < (this->Count).ArrayNum) {
    uVar6 = uVar15;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  FVar8 = (this->Count).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<int>)0x0) {
    FVar8 = (ForElementType<int>)&this->Count;
  }
  uVar6 = *(uint *)((longlong)FVar8 + lVar14 * 4);
  if (((int)uVar6 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  uVar12 = 0;
  uVar11 = 0;
  uVar7 = uVar6;
  if (0 < (int)uVar6) {
    do {
      uVar13 = uVar7 >> 1;
      uVar11 = uVar12;
      if (*(int *)(pFVar10 + (longlong)(int)(uVar13 + uVar12) * 4 + (longlong)iVar2 * 4) < param_2)
      {
        uVar11 = (uVar7 & 1) + uVar13 + uVar12;
      }
      uVar7 = uVar13;
      uVar12 = uVar11;
    } while (uVar13 != 0);
  }
  uVar7 = 0;
  if (param_1 < (this->Count).ArrayNum) {
    uVar7 = uVar15;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  FVar8 = (this->Count).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<int>)0x0) {
    FVar8 = (ForElementType<int>)&this->Count;
  }
  if ((int)uVar11 < *(int *)((longlong)FVar8 + lVar14 * 4)) {
    uVar7 = 0;
    if ((int)uVar11 < (int)uVar6) {
      uVar7 = ~uVar11 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (*(int *)(pFVar10 + (longlong)(int)uVar11 * 4 + (longlong)iVar2 * 4) == param_2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bExists",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshElementIndexer.cpp"
                         ,0x244,L"");
      if (!bVar4) {
        return true;
      }
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  uVar6 = 0;
  if (param_1 < (this->Count).ArrayNum) {
    uVar6 = uVar15;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  FVar8 = (this->Count).AllocatorInstance.SecondaryData;
  pFVar10 = pFVar10 + (longlong)(int)uVar11 * 4 + (longlong)iVar2 * 4;
  if (FVar8 == (ForElementType<int>)0x0) {
    FVar8 = (ForElementType<int>)&this->Count;
  }
  memmove(pFVar10 + 4,pFVar10,(longlong)(int)(*(int *)((longlong)FVar8 + lVar14 * 4) - uVar11) << 2)
  ;
  *(int *)pFVar10 = param_2;
  uVar6 = 0;
  if (param_1 < (this->Count).ArrayNum) {
    uVar6 = uVar15;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  FVar8 = (this->Count).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<int>)0x0) {
    FVar8 = (ForElementType<int>)&this->Count;
  }
  piVar1 = (int *)((longlong)FVar8 + lVar14 * 4);
  *piVar1 = *piVar1 + 1;
  return true;
}

// AddUnsorted @ 14365fcc0

bool __thiscall FMeshElementIndexer::FChunk::AddUnsorted(FChunk *this,int param_1,int param_2)

{
  TArray<int,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  ForElementType<int> FVar9;
  ForElementType<int> FVar10;
  longlong lVar11;
  uint uVar12;
  
  lVar11 = (longlong)param_1;
  pTVar1 = &this->Count;
  uVar12 = (uint)~param_1 >> 0x1f;
  uVar8 = 0;
  if (param_1 < (this->MaxCount).ArrayNum) {
    uVar8 = uVar12;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  FVar9 = (this->MaxCount).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<int>)0x0) {
    FVar9 = (ForElementType<int>)&this->MaxCount;
  }
  uVar8 = 0;
  if (param_1 < (this->Count).ArrayNum) {
    uVar8 = uVar12;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  FVar10 = (this->Count).AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<int>)0x0) {
    FVar10 = (ForElementType<int>)pTVar1;
  }
  if (*(int *)((longlong)FVar9 + lVar11 * 4) <= *(int *)((longlong)FVar10 + lVar11 * 4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Count[Index] < MaxCount[Index]",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshElementIndexer.cpp"
                       ,0x254,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  uVar8 = 0;
  if (param_1 < (this->StartIndex).ArrayNum) {
    uVar8 = uVar12;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  FVar9 = (this->StartIndex).AllocatorInstance.SecondaryData;
  pFVar4 = (this->Data).AllocatorInstance.Data;
  if (FVar9 == (ForElementType<int>)0x0) {
    FVar9 = (ForElementType<int>)&this->StartIndex;
  }
  iVar3 = *(int *)((longlong)FVar9 + lVar11 * 4);
  uVar8 = 0;
  if (param_1 < (this->Count).ArrayNum) {
    uVar8 = uVar12;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  FVar9 = (this->Count).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<int>)0x0) {
    FVar9 = (ForElementType<int>)pTVar1;
  }
  *(int *)(pFVar4 + ((longlong)*(int *)((longlong)FVar9 + lVar11 * 4) + (longlong)iVar3) * 4) =
       param_2;
  uVar8 = 0;
  if (param_1 < (this->Count).ArrayNum) {
    uVar8 = uVar12;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  FVar9 = (this->Count).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<int>)0x0) {
    FVar9 = (ForElementType<int>)pTVar1;
  }
  piVar2 = (int *)((longlong)FVar9 + lVar11 * 4);
  *piVar2 = *piVar2 + 1;
  return true;
}

// Contains @ 1436649c0

bool __thiscall FMeshElementIndexer::FChunk::Contains(FChunk *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  ForElementType<int> FVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  
  lVar13 = (longlong)param_1;
  uVar10 = (uint)~param_1 >> 0x1f;
  uVar6 = 0;
  if (param_1 < (this->StartIndex).ArrayNum) {
    uVar6 = uVar10;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  FVar7 = (this->StartIndex).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<int>)0x0) {
    FVar7 = (ForElementType<int>)&this->StartIndex;
  }
  iVar1 = *(int *)((longlong)FVar7 + lVar13 * 4);
  pFVar2 = (this->Data).AllocatorInstance.Data;
  uVar6 = 0;
  if (param_1 < (this->Count).ArrayNum) {
    uVar6 = uVar10;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  FVar7 = (this->Count).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<int>)0x0) {
    FVar7 = (ForElementType<int>)&this->Count;
  }
  uVar6 = *(uint *)((longlong)FVar7 + lVar13 * 4);
  if (((int)uVar6 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  uVar9 = 0;
  uVar8 = 0;
  uVar11 = uVar6;
  if (0 < (int)uVar6) {
    do {
      uVar12 = uVar11 >> 1;
      uVar8 = uVar9;
      if (*(int *)(pFVar2 + (longlong)(int)(uVar12 + uVar9) * 4 + (longlong)iVar1 * 4) < param_2) {
        uVar8 = uVar12 + uVar9 + (uVar11 & 1);
      }
      uVar11 = uVar12;
      uVar9 = uVar8;
    } while (uVar12 != 0);
  }
  uVar11 = 0;
  if (param_1 < (this->Count).ArrayNum) {
    uVar11 = uVar10;
  }
  if ((uVar11 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  FVar7 = (this->Count).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<int>)0x0) {
    FVar7 = (ForElementType<int>)&this->Count;
  }
  if ((int)uVar8 < *(int *)((longlong)FVar7 + lVar13 * 4)) {
    uVar10 = 0;
    if ((int)uVar8 < (int)uVar6) {
      uVar10 = ~uVar8 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (*(int *)(pFVar2 + (longlong)(int)uVar8 * 4 + (longlong)iVar1 * 4) == param_2) {
      return true;
    }
  }
  return false;
}

// Get @ 143670ea0

TArrayView<int_const_,int> * __thiscall
FMeshElementIndexer::FChunk::Get
          (FChunk *this,TArrayView<int_const_,int> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArrayView<int_const_,int> *pTVar6;
  ForElementType<int> FVar7;
  
  uVar5 = 0;
  if (param_1 < (this->StartIndex).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<int_const_,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  FVar7 = (this->StartIndex).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<int>)0x0) {
    FVar7 = (ForElementType<int>)&this->StartIndex;
  }
  iVar1 = *(int *)((longlong)FVar7 + (longlong)param_1 * 4);
  pFVar2 = (this->Data).AllocatorInstance.Data;
  uVar5 = 0;
  if (param_1 < (this->Count).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<int_const_,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  FVar7 = (this->Count).AllocatorInstance.SecondaryData;
  __return_storage_ptr__->DataPtr = (int *)(pFVar2 + (longlong)iVar1 * 4);
  if (FVar7 == (ForElementType<int>)0x0) {
    FVar7 = (ForElementType<int>)&this->Count;
  }
  iVar1 = *(int *)((longlong)FVar7 + (longlong)param_1 * 4);
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<int_const_,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return __return_storage_ptr__;
}

// Remove @ 143685d40

bool __thiscall FMeshElementIndexer::FChunk::Remove(FChunk *this,int param_1,int param_2)

{
  TArray<int,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  ForElementType<int> FVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  
  lVar15 = (longlong)param_1;
  uVar13 = (uint)~param_1 >> 0x1f;
  uVar8 = 0;
  if (param_1 < (this->StartIndex).ArrayNum) {
    uVar8 = uVar13;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  FVar10 = (this->StartIndex).AllocatorInstance.SecondaryData;
  pTVar1 = &this->Count;
  if (FVar10 == (ForElementType<int>)0x0) {
    FVar10 = (ForElementType<int>)&this->StartIndex;
  }
  iVar3 = *(int *)((longlong)FVar10 + lVar15 * 4);
  pFVar4 = (this->Data).AllocatorInstance.Data;
  uVar8 = 0;
  if (param_1 < (this->Count).ArrayNum) {
    uVar8 = uVar13;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  FVar10 = (this->Count).AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<int>)0x0) {
    FVar10 = (ForElementType<int>)pTVar1;
  }
  uVar8 = *(uint *)((longlong)FVar10 + lVar15 * 4);
  if (((int)uVar8 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar12 = 0;
  uVar11 = 0;
  uVar9 = uVar8;
  if (0 < (int)uVar8) {
    do {
      uVar14 = uVar9 >> 1;
      uVar11 = uVar12;
      if (*(int *)(pFVar4 + (longlong)(int)(uVar14 + uVar12) * 4 + (longlong)iVar3 * 4) < param_2) {
        uVar11 = uVar14 + uVar12 + (uVar9 & 1);
      }
      uVar9 = uVar14;
      uVar12 = uVar11;
    } while (uVar14 != 0);
  }
  uVar9 = 0;
  if (param_1 < (this->Count).ArrayNum) {
    uVar9 = uVar13;
  }
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  FVar10 = (this->Count).AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<int>)0x0) {
    FVar10 = (ForElementType<int>)pTVar1;
  }
  if ((int)uVar11 < *(int *)((longlong)FVar10 + lVar15 * 4)) {
    uVar9 = 0;
    if ((int)uVar11 < (int)uVar8) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pFVar4 = pFVar4 + (longlong)(int)uVar11 * 4 + (longlong)iVar3 * 4;
    if (*(int *)pFVar4 == param_2) {
      uVar8 = 0;
      if (param_1 < (this->Count).ArrayNum) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      FVar10 = (this->Count).AllocatorInstance.SecondaryData;
      if (FVar10 == (ForElementType<int>)0x0) {
        FVar10 = (ForElementType<int>)pTVar1;
      }
      memmove(pFVar4,pFVar4 + 4,
              (longlong)(int)((*(int *)((longlong)FVar10 + lVar15 * 4) - uVar11) + -1) << 2);
      uVar8 = 0;
      if (param_1 < (this->Count).ArrayNum) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      FVar10 = (this->Count).AllocatorInstance.SecondaryData;
      if (FVar10 == (ForElementType<int>)0x0) {
        FVar10 = (ForElementType<int>)pTVar1;
      }
      piVar2 = (int *)((longlong)FVar10 + lVar15 * 4);
      *piVar2 = *piVar2 + -1;
      return true;
    }
  }
  return false;
}

// Sort @ 143696930

void __thiscall FMeshElementIndexer::FChunk::Sort(FChunk *this,int param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ForElementType<int> FVar7;
  FIdentityFunctor local_res10;
  
  uVar6 = 0;
  if (param_1 < (this->StartIndex).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar7 = (this->StartIndex).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<int>)0x0) {
    FVar7 = (ForElementType<int>)&this->StartIndex;
  }
  iVar1 = *(int *)((longlong)FVar7 + (longlong)param_1 * 4);
  pFVar3 = (this->Data).AllocatorInstance.Data;
  uVar6 = 0;
  if (param_1 < (this->Count).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar7 = (this->Count).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<int>)0x0) {
    FVar7 = (ForElementType<int>)&this->Count;
  }
  iVar2 = *(int *)((longlong)FVar7 + (longlong)param_1 * 4);
  if (iVar2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TLess<void>_>
            ((int *)(pFVar3 + (longlong)iVar1 * 4),iVar2,local_res10,(TLess<void>)local_res10);
  return;
}

