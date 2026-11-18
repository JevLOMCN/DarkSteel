// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 1

// PopAll<TArray<void_*,TSizedDefaultAllocator<32>_>_> @ 145ad6ef0

void __thiscall
FLockFreePointerListLIFOBase<void,64,1>::PopAll<TArray<void_*,TSizedDefaultAllocator<32>_>_>
          (FLockFreePointerListLIFOBase<void,64,1> *this,
          TArray<void_*,TSizedDefaultAllocator<32>_> *param_1)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned___int64> aVar2;
  FIndexedLockFreeLink *pFVar3;
  atomic<void_*> *paVar4;
  code *pcVar5;
  int iVar6;
  atomic<unsigned___int64> aVar7;
  atomic<unsigned_int> aVar8;
  bool bVar9;
  atomic<void_*> local_38 [2];
  
  do {
    aVar2 = (this->RootList).Head.Ptrs;
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    aVar8 = (atomic<unsigned_int>)(aVar2._0_4_ & 0x3ffffff);
    if (((ulonglong)aVar2 & 0x3ffffff) == 0) break;
    aVar7 = (atomic<unsigned___int64>)((((ulonglong)aVar2 >> 0x1a) + 1) * 0x4000000);
    if ((ulonglong)aVar7 < ((ulonglong)aVar2 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    LOCK();
    bVar9 = aVar2 == (this->RootList).Head.Ptrs;
    if (bVar9) {
      (this->RootList).Head.Ptrs = aVar7;
    }
    UNLOCK();
  } while (!bVar9);
  if (((ulonglong)aVar2 & 0x3ffffff) != 0) {
    do {
      pFVar3 = FLockFreeLinkPolicy::LinkAllocator.Pages[(uint)aVar8 >> 0xe];
      local_38[0] = pFVar3[(uint)aVar8 & 0x3fff].Payload;
      paVar4 = (atomic<void_*> *)(param_1->AllocatorInstance).Data;
      if (((paVar4 <= local_38) && (local_38 < paVar4 + param_1->ArrayMax)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar6 = param_1->ArrayNum;
      if (iVar6 == param_1->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar6 + 1;
      *(atomic<void_*> *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_38[0];
      aVar1 = pFVar3[(uint)aVar8 & 0x3fff].SingleNext;
      FLockFreeLinkPolicy::FreeLockFreeLink((uint)aVar8);
      aVar8 = aVar1;
    } while (aVar1 != (atomic<unsigned_int>)0x0);
  }
  return;
}

