// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 6

// Add @ 145b09c10

int __cdecl
VulkanRHI::FRange::Add
          (TArray<VulkanRHI::FRange,TSizedDefaultAllocator<32>_> *param_1,FRange *param_2)

{
  FRange *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  iVar5 = param_1->ArrayNum;
  pFVar1 = (FRange *)(param_1->AllocatorInstance).Data;
  if (iVar5 < 1) {
    if (((pFVar1 <= param_2) && (param_2 < pFVar1 + param_1->ArrayMax)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    iVar5 = param_1->ArrayNum;
    if (iVar5 == param_1->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    pFVar2 = (param_1->AllocatorInstance).Data;
    param_1->ArrayNum = iVar5 + 1;
    *(FRange *)(pFVar2 + (longlong)iVar5 * 8) = *param_2;
    return iVar5;
  }
  iVar9 = 0;
  lVar6 = 0;
  do {
    if (param_2->Offset < pFVar1[lVar6].Offset) {
      iVar5 = InsertAndTryToMerge(param_1,param_2,iVar9);
      return iVar5;
    }
    iVar9 = iVar9 + 1;
    lVar6 = lVar6 + 1;
  } while (lVar6 < iVar5);
  uVar8 = iVar5 - 1;
  if (((int)uVar8 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ret >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0x5be,L"FRange::AppendAndTryToMerge() was called on an empty array."),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  uVar7 = 0;
  if ((int)uVar8 < param_1->ArrayNum) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  pFVar1 = (FRange *)(param_1->AllocatorInstance).Data;
  if (pFVar1[(int)uVar8].Offset + pFVar1[(int)uVar8].Size == param_2->Offset) {
    pFVar1[(int)uVar8].Size = param_2->Size + pFVar1[(int)uVar8].Size;
  }
  else {
    if (((pFVar1 <= param_2) && (param_2 < pFVar1 + param_1->ArrayMax)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    uVar8 = param_1->ArrayNum;
    if (uVar8 == param_1->ArrayMax) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    pFVar2 = (param_1->AllocatorInstance).Data;
    param_1->ArrayNum = uVar8 + 1;
    *(FRange *)(pFVar2 + (longlong)(int)uVar8 * 8) = *param_2;
  }
  return uVar8;
}

// AllocateFromEntry @ 145b0e740

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
VulkanRHI::FRange::AllocateFromEntry
          (TArray<VulkanRHI::FRange,TSizedDefaultAllocator<32>_> *param_1,int param_2,uint param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_2;
  uVar4 = 0;
  if (param_2 < param_1->ArrayNum) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  uVar4 = *(uint *)(pFVar1 + lVar5 * 8 + 4);
  if (param_3 < uVar4) {
    *(uint *)(pFVar1 + lVar5 * 8) = *(int *)(pFVar1 + lVar5 * 8) + param_3;
    *(uint *)(pFVar1 + lVar5 * 8 + 4) = uVar4 - param_3;
    return;
  }
  TArray<VulkanRHI::FRange,TSizedDefaultAllocator<32>_>::RemoveAt(param_1,param_2,No);
  return;
}

// AppendAndTryToMerge @ 145b0f4f0

int __cdecl
VulkanRHI::FRange::AppendAndTryToMerge
          (TArray<VulkanRHI::FRange,TSizedDefaultAllocator<32>_> *param_1,FRange *param_2)

{
  FRange *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = param_1->ArrayNum - 1;
  if ((int)uVar7 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ret >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0x5be,L"FRange::AppendAndTryToMerge() was called on an empty array.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  uVar6 = 0;
  if ((int)uVar7 < param_1->ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  pFVar1 = (FRange *)(param_1->AllocatorInstance).Data;
  if (pFVar1[(int)uVar7].Offset + pFVar1[(int)uVar7].Size == param_2->Offset) {
    pFVar1[(int)uVar7].Size = param_2->Size + pFVar1[(int)uVar7].Size;
    return uVar7;
  }
  if ((pFVar1 <= param_2) && (param_2 < pFVar1 + param_1->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = param_1->ArrayNum;
  if (iVar5 == param_1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  param_1->ArrayNum = iVar5 + 1;
  *(FRange *)(pFVar2 + (longlong)iVar5 * 8) = *param_2;
  return iVar5;
}

// InsertAndTryToMerge @ 145b265d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __cdecl
VulkanRHI::FRange::InsertAndTryToMerge
          (TArray<VulkanRHI::FRange,TSizedDefaultAllocator<32>_> *param_1,FRange *param_2,
          int param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  
  uVar5 = 0;
  if (param_3 < param_1->ArrayNum) {
    uVar5 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  if ((*(uint *)((param_1->AllocatorInstance).Data + (longlong)param_3 * 8) <= param_2->Offset) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Item.Offset < Ranges[ProposedIndex].Offset",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0x57e,
                         L"FRange::InsertAndTryToMerge() was called to append an element - internal logic error, FRange::AppendAndTryToMerge() should have been called instead."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  if (param_3 == 0) {
    if ((param_1->ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)pFVar1 == param_2->Size + param_2->Offset) {
      *(uint *)pFVar1 = param_2->Offset;
      *(uint *)(pFVar1 + 4) = *(int *)(pFVar1 + 4) + param_2->Size;
      return 0;
    }
    param_3 = 0;
  }
  else {
    uVar5 = 0;
    if (param_3 < param_1->ArrayNum) {
      uVar5 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    uVar9 = param_3 - 1;
    pFVar1 = (param_1->AllocatorInstance).Data + (longlong)param_3 * 8;
    uVar5 = 0;
    if ((int)uVar9 < param_1->ArrayNum) {
      uVar5 = ~uVar9 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    pFVar2 = (param_1->AllocatorInstance).Data;
    lVar7 = (longlong)(int)uVar9;
    iVar6 = *(int *)(pFVar2 + lVar7 * 8);
    uVar5 = param_2->Offset;
    if (*(int *)(pFVar2 + lVar7 * 8 + 4) + iVar6 == uVar5) {
      iVar8 = param_2->Size + *(int *)(pFVar2 + lVar7 * 8 + 4);
      *(int *)(pFVar2 + lVar7 * 8 + 4) = iVar8;
      if (iVar8 + iVar6 != *(int *)pFVar1) {
        return param_3;
      }
      *(int *)(pFVar2 + lVar7 * 8 + 4) = iVar8 + *(int *)(pFVar1 + 4);
      TArray<VulkanRHI::FRange,TSizedDefaultAllocator<32>_>::RemoveAt(param_1,param_3,Default);
      return uVar9;
    }
    if (param_2->Size + uVar5 == *(int *)pFVar1) {
      *(uint *)pFVar1 = uVar5;
      *(uint *)(pFVar1 + 4) = *(int *)(pFVar1 + 4) + param_2->Size;
      return param_3;
    }
  }
  iVar6 = TArray<VulkanRHI::FRange,TSizedDefaultAllocator<32>_>::Insert(param_1,param_2,param_3);
  return iVar6;
}

// JoinConsecutiveRanges @ 145b271c0

void __cdecl
VulkanRHI::FRange::JoinConsecutiveRanges
          (TArray<VulkanRHI::FRange,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// SanityCheck @ 145b320a0

void __cdecl
VulkanRHI::FRange::SanityCheck(TArray<VulkanRHI::FRange,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

