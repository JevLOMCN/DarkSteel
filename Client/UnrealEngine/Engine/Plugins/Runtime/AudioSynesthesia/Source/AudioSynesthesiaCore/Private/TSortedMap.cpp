// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 4

// Emplace<int_const_&> @ 14d7eed80

FAggregateLoudnessStats * __thiscall
TSortedMap<int,Audio::FLKFSWorker::FAggregateLoudnessStats,TSizedDefaultAllocator<32>,TLess<int_const_>_>
::Emplace<int_const_&>
          (TSortedMap<int,Audio::FLKFSWorker::FAggregateLoudnessStats,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  FAggregateLoudnessStats *pFVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  uint uVar9;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar8 = 0;
  if (0 < (int)uVar2) {
    uVar9 = uVar2;
    do {
      iVar1 = (uVar9 >> 1) + iVar8;
      if (*(int *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x10) < *param_1) {
        iVar8 = iVar1 + (uVar9 & 1);
      }
      uVar4 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar8 < 0) || ((int)uVar2 < iVar8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FAggregateLoudnessStats *)(*pcVar3)();
      return pFVar6;
    }
    if (-1 < iVar8) goto LAB_14d7eee09;
  }
  else {
LAB_14d7eee09:
    if (iVar8 < (this->Pairs).ArrayNum) {
      if ((iVar8 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FAggregateLoudnessStats *)(*pcVar3)();
        return pFVar6;
      }
      pFVar7 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
      if (*(int *)pFVar7 <= *param_1) goto LAB_14d7eee82;
    }
  }
  TArray<TTuple<int,Audio::FLKFSWorker::FAggregateLoudnessStats>,TSizedDefaultAllocator<32>_>::
  InsertUninitializedImpl(&this->Pairs,iVar8,1);
  pFVar7 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
LAB_14d7eee82:
  *(int *)pFVar7 = *param_1;
  ((FAggregateLoudnessStats *)(pFVar7 + 4))->ShortTermLoudness = -3.4028235e+38;
  *(int *)(pFVar7 + 8) = -0x800001;
  *(int *)(pFVar7 + 0xc) = -0x800001;
  return (FAggregateLoudnessStats *)(pFVar7 + 4);
}

// Emplace<int_const_&> @ 14d7eeec0

TArray<FLKFSResults,TSizedDefaultAllocator<32>_> * __thiscall
TSortedMap<int,TArray<FLKFSResults,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
::Emplace<int_const_&>
          (TSortedMap<int,TArray<FLKFSResults,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  TArray<FLKFSResults,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  TTuple<int,TArray<FLKFSResults,TSizedDefaultAllocator<32>_>_> *pTVar9;
  uint uVar10;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar8 = 0;
  if (0 < (int)uVar2) {
    uVar10 = uVar2;
    do {
      iVar1 = (uVar10 >> 1) + iVar8;
      if (*(int *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x18) < *param_1) {
        iVar8 = iVar1 + (uVar10 & 1);
      }
      uVar5 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar8 < 0) || ((int)uVar2 < iVar8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TArray<FLKFSResults,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar7;
    }
    if (-1 < iVar8) goto LAB_14d7eef4d;
  }
  else {
LAB_14d7eef4d:
    if (iVar8 < (this->Pairs).ArrayNum) {
      if ((iVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<FLKFSResults,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar7;
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      pTVar9 = (TTuple<int,TArray<FLKFSResults,TSizedDefaultAllocator<32>_>_> *)
               (pFVar3 + (longlong)iVar8 * 0x18);
      if (*(int *)(pFVar3 + (longlong)iVar8 * 0x18) <= *param_1) {
        DestructItems<TTuple<int,TArray<FLKFSResults,TSizedDefaultAllocator<32>_>_>,int>(pTVar9,1);
        goto LAB_14d7eefd6;
      }
    }
  }
  TArray<TTuple<int,TArray<FLKFSResults,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar8,1);
  pTVar9 = (TTuple<int,TArray<FLKFSResults,TSizedDefaultAllocator<32>_>_> *)
           ((this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x18);
LAB_14d7eefd6:
  *(int *)pTVar9 = *param_1;
  *(undefined8 *)&pTVar9->field_0x8 = 0;
  *(undefined8 *)&pTVar9->field_0x10 = 0;
  return (TArray<FLKFSResults,TSizedDefaultAllocator<32>_> *)&pTVar9->field_0x8;
}

// Find @ 14d806210

TArray<FLKFSResults,TSizedDefaultAllocator<32>_> * __thiscall
TSortedMap<int,TArray<FLKFSResults,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
::Find(TSortedMap<int,TArray<FLKFSResults,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
       *this,int param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  TArray<FLKFSResults,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar7 = 0;
  pFVar3 = (this->Pairs).AllocatorInstance.Data;
  uVar9 = uVar2;
  if (0 < (int)uVar2) {
    do {
      iVar1 = (uVar9 >> 1) + iVar7;
      if (*(int *)(pFVar3 + (longlong)iVar1 * 0x18) < param_1) {
        iVar7 = iVar1 + (uVar9 & 1);
      }
      uVar5 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar5 != 0);
  }
  if (((iVar7 < (int)uVar2) && (*(int *)(pFVar3 + (longlong)iVar7 * 0x18) <= param_1)) &&
     (iVar7 != -1)) {
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<FLKFSResults,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar8;
    }
    pTVar8 = (TArray<FLKFSResults,TSizedDefaultAllocator<32>_> *)
             ((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x18 + 8);
  }
  else {
    pTVar8 = (TArray<FLKFSResults,TSizedDefaultAllocator<32>_> *)0x0;
  }
  return pTVar8;
}

// FindChecked @ 14d8067c0

FAggregateLoudnessStats * __thiscall
TSortedMap<int,Audio::FLKFSWorker::FAggregateLoudnessStats,TSizedDefaultAllocator<32>,TLess<int_const_>_>
::FindChecked(TSortedMap<int,Audio::FLKFSWorker::FAggregateLoudnessStats,TSizedDefaultAllocator<32>,TLess<int_const_>_>
              *this,int param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAggregateLoudnessStats *pFVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = (this->Pairs).ArrayNum;
  pFVar2 = (this->Pairs).AllocatorInstance.Data;
  iVar6 = 0;
  uVar8 = uVar1;
  iVar7 = 0;
  if (0 < (int)uVar1) {
    do {
      uVar9 = uVar8 >> 1;
      iVar6 = iVar7;
      if (*(int *)(pFVar2 + (longlong)(int)(uVar9 + iVar7) * 0x10) < param_1) {
        iVar6 = uVar9 + iVar7 + (uVar8 & 1);
      }
      uVar8 = uVar9;
      iVar7 = iVar6;
    } while (uVar9 != 0);
  }
  if (((iVar6 < (int)uVar1) && (*(int *)(pFVar2 + (longlong)iVar6 * 0x10) <= param_1)) &&
     (iVar6 != -1)) {
    if ((iVar6 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FAggregateLoudnessStats *)(*pcVar3)();
      return pFVar5;
    }
    pFVar5 = (FAggregateLoudnessStats *)
             ((this->Pairs).AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 4);
    if (pFVar5 != (FAggregateLoudnessStats *)0x0) {
      return pFVar5;
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Value != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                     ,0x141,L"");
  if (!bVar4) {
    return (FAggregateLoudnessStats *)0x0;
  }
  pcVar3 = (code *)swi(3);
  pFVar5 = (FAggregateLoudnessStats *)(*pcVar3)();
  return pFVar5;
}

