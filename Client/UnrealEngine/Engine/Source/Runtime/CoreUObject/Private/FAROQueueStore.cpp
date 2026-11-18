// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// ReturnAllBlocks @ 14208e6d0

void __thiscall UE::GC::FAROQueueStore::ReturnAllBlocks(FAROQueueStore *this)

{
  FAROBlock **ppFVar1;
  atomic<unsigned_int> aVar2;
  FAROBlock *pFVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  FAROBlock **ppFVar7;
  FAROBlock *local_18 [2];
  
  if ((0x100 < (uint)this->NumBlocks) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBlocks.load() <= MaxBlocks",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x9dc,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  aVar2 = this->NumBlocks;
  ppFVar7 = this->Blocks;
  if (((int)aVar2 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ppFVar1 = ppFVar7 + (int)aVar2;
  while( true ) {
    if (ppFVar7 == ppFVar1) {
      LOCK();
      this->NumBlocks = (atomic<unsigned_int>)0x0;
      UNLOCK();
      LOCK();
      this->bFull = (atomic<bool>)0x0;
      UNLOCK();
      return;
    }
    pFVar3 = *ppFVar7;
    if (((pFVar3 == (FAROBlock *)0x0) || (((ulonglong)pFVar3 & 0xfff) != 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidPage(Page)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0x55c,L""), bVar5)) break;
    local_18[0] = pFVar3;
    EnterCriticalSection((LPCRITICAL_SECTION)&GScratchPages);
    if (((GScratchPages.SharedCache.Pages.AllocatorInstance.Data <=
          (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 <
         GScratchPages.SharedCache.Pages.AllocatorInstance.Data +
         (longlong)GScratchPages.SharedCache.Pages.ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (GScratchPages.SharedCache.Pages.ArrayNum == GScratchPages.SharedCache.Pages.ArrayMax) {
      GScratchPages.SharedCache.Pages.ArrayNum =
           Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&GScratchPages.SharedCache.Pages.AllocatorInstance,
                      &GScratchPages.SharedCache.Pages.ArrayMax);
    }
    lVar6 = (longlong)GScratchPages.SharedCache.Pages.ArrayNum;
    GScratchPages.SharedCache.Pages.ArrayNum = GScratchPages.SharedCache.Pages.ArrayNum + 1;
    *(FAROBlock **)(GScratchPages.SharedCache.Pages.AllocatorInstance.Data + lVar6 * 8) =
         local_18[0];
    LeaveCriticalSection((LPCRITICAL_SECTION)&GScratchPages);
    *ppFVar7 = (FAROBlock *)0x0;
    ppFVar7 = ppFVar7 + 1;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

