// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// Add @ 1454913b0

void __thiscall
FSceneCulling::FCellIndexCacheEntry::Add(FCellIndexCacheEntry *this,int param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar6;
  int local_18;
  uint local_14;
  uint local_10 [2];
  
  if ((0x7fffffff < (uint)param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("uint32(CellIndex) < CellIndexMax",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.h"
                         ,0xc2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((this->bSingleInstanceOnly != false) && (param_2 != 1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bSingleInstanceOnly || NumInstances == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.h"
                         ,0xc3,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->Items).AllocatorInstance.Data;
  pTVar6 = &this->Items;
  if (param_2 < 2) {
    local_10[0] = param_1 | 0x80000000;
    if (((pFVar2 <= (FScriptContainerElement *)local_10) &&
        ((FScriptContainerElement *)local_10 < pFVar2 + (longlong)(this->Items).ArrayMax * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (this->Items).ArrayNum;
    piVar1 = &(this->Items).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar6->AllocatorInstance,piVar1);
    }
  }
  else {
    local_18 = param_1;
    if (((pFVar2 <= (FScriptContainerElement *)&local_18) &&
        ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)(this->Items).ArrayMax * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (this->Items).ArrayNum;
    if (iVar5 == (this->Items).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar6->AllocatorInstance,&(this->Items).ArrayMax);
    }
    (this->Items).ArrayNum = iVar5 + 1;
    *(int *)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_18;
    pFVar2 = (pTVar6->AllocatorInstance).Data;
    local_14 = param_2;
    if (((pFVar2 <= (FScriptContainerElement *)&local_14) &&
        ((FScriptContainerElement *)&local_14 < pFVar2 + (longlong)(this->Items).ArrayMax * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (this->Items).ArrayNum;
    local_10[0] = local_14;
    if (iVar5 == (this->Items).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar6->AllocatorInstance,&(this->Items).ArrayMax);
      local_10[0] = local_14;
    }
  }
  (this->Items).ArrayNum = iVar5 + 1;
  *(uint *)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_10[0];
  return;
}

// LoadAndStepItem @ 1454ac4a0

FItem __thiscall
FSceneCulling::FCellIndexCacheEntry::LoadAndStepItem(FCellIndexCacheEntry *this,int *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FItem FVar4;
  uint uVar5;
  uint uVar6;
  uint *in_R8;
  
  uVar5 = *in_R8;
  uVar6 = 0;
  if ((int)uVar5 < (this->Items).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FItem)(*pcVar2)();
      return FVar4;
    }
  }
  pFVar1 = (this->Items).AllocatorInstance.Data;
  *param_1 = 1;
  uVar5 = *(uint *)(pFVar1 + (longlong)(int)uVar5 * 4);
  param_1[1] = uVar5 & 0x7fffffff;
  if (-1 < (int)uVar5) {
    uVar6 = *in_R8 + 1;
    *in_R8 = uVar6;
    uVar5 = 0;
    if ((int)uVar6 < (this->Items).ArrayNum) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        FVar4 = (FItem)(*pcVar2)();
        return FVar4;
      }
    }
    *param_1 = *(int *)((this->Items).AllocatorInstance.Data + (longlong)(int)uVar6 * 4);
  }
  return (FItem)param_1;
}

// Set @ 1454b93c0

void __thiscall
FSceneCulling::FCellIndexCacheEntry::Set(FCellIndexCacheEntry *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (this->bSingleInstanceOnly == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSingleInstanceOnly",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.h"
                       ,0xd7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (0x7fffffff < (uint)param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("uint32(CellIndex) < CellIndexMax",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.h"
                       ,0xd8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->Items).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(uint *)((this->Items).AllocatorInstance.Data + (longlong)param_1 * 4) = param_2 | 0x80000000;
  return;
}

