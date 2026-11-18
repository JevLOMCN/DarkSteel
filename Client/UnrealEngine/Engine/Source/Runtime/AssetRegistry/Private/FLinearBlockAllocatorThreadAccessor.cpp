// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 1

// Malloc @ 142b09340

void * __thiscall
UE::FLinearBlockAllocatorThreadAccessor::Malloc
          (FLinearBlockAllocatorThreadAccessor *this,ulong64 param_1,uint param_2)

{
  FLinearBlockAllocator *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  FBlock *pFVar8;
  ulonglong uVar9;
  FWindowsRecursiveMutex *lpCriticalSection;
  void *pvVar10;
  void *local_38;
  FBlock *local_30;
  
  pFVar8 = this->LastBlock;
  uVar9 = (ulonglong)param_2;
  if (pFVar8 != (FBlock *)0x0) {
    pvVar10 = (void *)((longlong)pFVar8 + uVar9 + (longlong)pFVar8->NextOffset + -1 & -uVar9);
    uVar7 = (longlong)pvVar10 + (param_1 - (longlong)pFVar8);
    if ((uVar7 <= this->Allocator->BlockSize) &&
       (pFVar8->NextOffset = (int)uVar7, pvVar10 != (void *)0x0)) {
      return pvVar10;
    }
  }
  lpCriticalSection = &this->Allocator->LockForThreadSafeAllocator;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar1 = this->Allocator;
  iVar6 = pFVar1->BlockAlignment + 4;
  if (pFVar1->BlockSize < (ulonglong)(((param_2 - 1) + iVar6 & -param_2) - iVar6) + 4 + param_1) {
    local_38 = FMemory::Malloc(param_1,param_2);
    pFVar2 = (pFVar1->BlockAllocs).AllocatorInstance.Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 <
         pFVar2 + (longlong)(pFVar1->BlockAllocs).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      pvVar10 = (void *)(*pcVar3)();
      return pvVar10;
    }
    iVar6 = (pFVar1->BlockAllocs).ArrayNum;
    piVar4 = &(pFVar1->BlockAllocs).ArrayMax;
    if (iVar6 == *piVar4) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)pFVar1,piVar4);
      (pFVar1->BlockAllocs).ArrayNum = iVar6 + 1;
    }
    else {
      (pFVar1->BlockAllocs).ArrayNum = iVar6 + 1;
    }
    *(void **)((pFVar1->BlockAllocs).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_38;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pvVar10 = local_38;
  }
  else {
    pFVar8 = FMemory::Malloc(pFVar1->BlockSize,pFVar1->BlockAlignment);
    pFVar8->NextOffset = 4;
    pFVar2 = (pFVar1->BlockAllocs).AllocatorInstance.Data;
    local_30 = pFVar8;
    if (((pFVar2 <= (FScriptContainerElement *)&local_30) &&
        ((FScriptContainerElement *)&local_30 <
         pFVar2 + (longlong)(pFVar1->BlockAllocs).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      pvVar10 = (void *)(*pcVar3)();
      return pvVar10;
    }
    iVar6 = (pFVar1->BlockAllocs).ArrayNum;
    piVar4 = &(pFVar1->BlockAllocs).ArrayMax;
    if (iVar6 == *piVar4) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)pFVar1,piVar4);
      (pFVar1->BlockAllocs).ArrayNum = iVar6 + 1;
    }
    else {
      (pFVar1->BlockAllocs).ArrayNum = iVar6 + 1;
    }
    *(FBlock **)((pFVar1->BlockAllocs).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_30;
    this->LastBlock = pFVar8;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar8 = this->LastBlock;
    if (pFVar8 != (FBlock *)0x0) {
      pvVar10 = (void *)((longlong)pFVar8 + uVar9 + (longlong)pFVar8->NextOffset + -1 & -uVar9);
      uVar9 = (longlong)pvVar10 + (param_1 - (longlong)pFVar8);
      if ((uVar9 <= this->Allocator->BlockSize) &&
         (pFVar8->NextOffset = (int)uVar9, pvVar10 != (void *)0x0)) {
        return pvVar10;
      }
    }
    pvVar10 = (void *)0x0;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Internal\\AssetRegistry\\LinearBlockAllocator.h"
                       ,0xdd,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pvVar10 = (void *)(*pcVar3)();
      return pvVar10;
    }
  }
  return pvVar10;
}

