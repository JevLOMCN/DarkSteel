// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullDrv
// Functions: 1

// operator_new @ 1446c47f0

void * __cdecl UE::RHI::GPUProfiler::FEventStream::FChunk::operator_new(ulong64 param_1)

{
  atomic<unsigned_int> aVar1;
  FIndexedLockFreeLink *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  void *pvVar6;
  atomic<void_*> _Dst;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  
  if ((param_1 != 0x4000) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size == sizeof(FChunk)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\GPUProfiler.h"
                         ,0x150,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pvVar6 = (void *)(*pcVar3)();
    return pvVar6;
  }
  do {
    uVar4 = MemoryPool._0_8_;
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    uVar9 = (uint)uVar4;
    uVar8 = uVar9 & 0x3ffffff;
    if ((uVar4 & 0x3ffffff) == 0) goto LAB_1446c493f;
    uVar7 = (((ulonglong)uVar4 >> 0x1a) + 1) * 0x4000000;
    if (uVar7 < (uVar4 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    pFVar2 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar8 >> 0xe];
    aVar1 = pFVar2[uVar9 & 0x3fff].SingleNext;
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    LOCK();
    bVar5 = uVar4 != MemoryPool._0_8_;
    uVar7 = uVar7 | (uint)aVar1;
    if (bVar5) {
      uVar7 = MemoryPool._0_8_;
    }
    MemoryPool._0_8_ = uVar7;
    UNLOCK();
  } while (bVar5);
  pFVar2[uVar9 & 0x3fff].SingleNext = (atomic<unsigned_int>)0x0;
  _Dst = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar8 >> 0xe][uVar9 & 0x3fff].Payload;
  FLockFreeLinkPolicy::FreeLockFreeLink(uVar8);
  if (_Dst == (atomic<void_*>)0x0) {
LAB_1446c493f:
    _Dst = (atomic<void_*>)FMemory::Malloc(0x4000,8);
  }
  memset((void *)_Dst,0xf7,0x4000);
  return (void *)_Dst;
}

