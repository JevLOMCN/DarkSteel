// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// Allocate @ 1416285f0

void * __thiscall TMemoryPool<65536>::Allocate(TMemoryPool<65536> *this,ulong64 param_1)

{
  FThreadSafeCounter *pFVar1;
  byte bVar2;
  ulonglong *puVar3;
  uint uVar4;
  ulonglong uVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  void *pvVar9;
  void *pvVar10;
  ulonglong uVar11;
  ulong64 uVar12;
  void *pvVar13;
  ulonglong *puVar14;
  int iVar15;
  ulonglong uVar16;
  
  if ((this->BlockSize < param_1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size <= BlockSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\GenericPlatform\\OSAllocationPool.h"
                         ,0x55,
                         L"Attempting to allocate %llu bytes from a memory pool of %llu byte blocks"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    pvVar9 = (void *)(*pcVar6)();
    return pvVar9;
  }
  LOCK();
  pFVar1 = &this->NoConcurrentAccess;
  iVar15 = pFVar1->Counter;
  pFVar1->Counter = pFVar1->Counter + 1;
  UNLOCK();
  if ((iVar15 != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NoConcurrentAccess.Increment() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\GenericPlatform\\OSAllocationPool.h"
                         ,0x57,
                         L"TMemoryPool is being accessed on multiple threads. The class is not thread safe, add locking!."
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    pvVar9 = (void *)(*pcVar6)();
    return pvVar9;
  }
  pvVar9 = (void *)0x0;
  if (this->NumFreeBlocks != 0) {
    puVar3 = (ulonglong *)this->Bitmask;
    pvVar13 = (void *)(this->BitmaskSizeInBytes >> 3);
    pvVar10 = pvVar9;
    puVar14 = puVar3;
    if (pvVar13 != (void *)0x0) {
LAB_1416286b0:
      uVar16 = *puVar14;
      if (uVar16 == 0) goto code_r0x0001416286b8;
      uVar5 = 0;
      if (uVar16 != 0) {
        for (; (uVar16 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
      uVar11 = 0x40;
      if (uVar16 != 0) {
        uVar11 = uVar5 & 0xffffffff;
      }
      *puVar14 = uVar16 & ~(1L << (uVar11 & 0x3f));
      uVar11 = uVar11 + ((longlong)puVar14 - (longlong)this->Bitmask) * 8;
      if (this->NumBlocks <= uVar11) {
        iVar15 = 0xca;
        goto LAB_14162875f;
      }
      goto LAB_14162877f;
    }
LAB_1416286c4:
    puVar3 = (ulonglong *)((longlong)puVar3 + this->BitmaskSizeInBytes);
    uVar16 = 8;
    if ((this->NumBlocks & 7) != 0) {
      uVar16 = this->NumBlocks & 7;
    }
    if (puVar14 < puVar3) {
LAB_1416286e2:
      bVar2 = (byte)*puVar14;
      if (bVar2 == 0) goto LAB_14162870b;
      uVar4 = 0;
      if (bVar2 != 0) {
        for (; (bVar2 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
      uVar8 = 0x20;
      if (bVar2 != 0) {
        uVar8 = uVar4;
      }
      if (((ulonglong *)((longlong)puVar3 - 1U) <= puVar14) && (uVar16 <= uVar8))
      goto LAB_14162870b;
      *(byte *)puVar14 = bVar2 & ~(byte)(1 << (uVar8 & 0x1f));
      uVar11 = (ulonglong)uVar8 + ((longlong)puVar14 - (longlong)this->Bitmask) * 8;
      if (this->NumBlocks <= uVar11) {
        iVar15 = 0xe9;
LAB_14162875f:
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IndexOfFirstBlock < NumBlocks",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\GenericPlatform\\OSAllocationPool.h"
                           ,iVar15,L"Allocating outside of pool - TMemoryPool error.");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pvVar9 = (void *)(*pcVar6)();
          return pvVar9;
        }
      }
LAB_14162877f:
      pvVar9 = (void *)(uVar11 * this->BlockSize + this->AlignedPoolStart);
    }
LAB_141628787:
    this->NumFreeBlocks = this->NumFreeBlocks - 1;
    this->UsefulMemorySize = param_1 + this->UsefulMemorySize;
    if ((pvVar9 == (void *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Address != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\GenericPlatform\\OSAllocationPool.h"
                           ,100,
                           L"NumFreeBlocks and bitmask of the free blocks are not in sync - bug in TMemoryPool"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      pvVar9 = (void *)(*pcVar6)();
      return pvVar9;
    }
    uVar12 = FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::GetCommitAlignment();
    FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::Commit
              (&this->VMBlock,(longlong)pvVar9 - *(longlong *)&this->VMBlock,
               (param_1 - 1) + uVar12 & ~(uVar12 - 1));
  }
  LOCK();
  pFVar1 = &this->NoConcurrentAccess;
  iVar15 = pFVar1->Counter;
  pFVar1->Counter = pFVar1->Counter + -1;
  UNLOCK();
  if ((iVar15 != 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NoConcurrentAccess.Decrement() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\GenericPlatform\\OSAllocationPool.h"
                         ,0x6d,
                         L"TMemoryPool is being accessed on multiple threads. The class is not thread safe, add locking!."
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    pvVar9 = (void *)(*pcVar6)();
    return pvVar9;
  }
  return pvVar9;
code_r0x0001416286b8:
  puVar14 = puVar14 + 1;
  pvVar10 = (void *)((longlong)pvVar10 + 1);
  if (pvVar13 <= pvVar10) goto LAB_1416286c4;
  goto LAB_1416286b0;
LAB_14162870b:
  puVar14 = (ulonglong *)((longlong)puVar14 + 1);
  if (puVar3 <= puVar14) goto LAB_141628787;
  goto LAB_1416286e2;
}

// Free @ 14163c940

void __thiscall TMemoryPool<65536>::Free(TMemoryPool<65536> *this,void *param_1,ulong64 param_2)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  code *pcVar6;
  bool bVar7;
  ulonglong uVar8;
  uint uVar9;
  
  if ((param_1 < (void *)this->AlignedPoolStart) || ((void *)this->AlignedPoolEnd <= param_1)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("WasAllocatedFromThisPool(Ptr, BlockSize)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\GenericPlatform\\OSAllocationPool.h"
                       ,0x7d,
                       L"Address passed to Free() of a pool of block size %llu was not allocated in it (address: %p, boundaries: %p - %p"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if ((short)param_1 != 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(reinterpret_cast<SIZE_T>(Ptr) % RequiredAlignment == 0)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\GenericPlatform\\OSAllocationPool.h"
                       ,0x83,
                       L"Address passed to Free() of a pool of block size %llu was not aligned to %llu bytes (address: %p)"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  LOCK();
  pFVar1 = &this->NoConcurrentAccess;
  iVar2 = pFVar1->Counter;
  pFVar1->Counter = pFVar1->Counter + 1;
  UNLOCK();
  if (iVar2 != 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("NoConcurrentAccess.Increment() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\GenericPlatform\\OSAllocationPool.h"
                       ,0x85,
                       L"TMemoryPool is being accessed on multiple threads. The class is not thread safe, add locking!."
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = this->BlockSize;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (longlong)param_1 - this->AlignedPoolStart;
  uVar8 = SUB168(auVar5 / auVar4,0);
  if (this->NumBlocks <= uVar8) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("BitIndex < NumBlocks",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\GenericPlatform\\OSAllocationPool.h"
                       ,0xa6,L"Incorrect pointer %p passed to MarkFree()");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar8 = uVar8 >> 3;
  uVar9 = SUB164(auVar5 / auVar4,0) & 7;
  bVar3 = this->Bitmask[uVar8];
  if ((bVar3 >> uVar9 & 1) != 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Byte & (1 << IndexInByte)) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\GenericPlatform\\OSAllocationPool.h"
                       ,0xae,L"MarkFree() - double freeing the pointer %p");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  this->Bitmask[uVar8] = bVar3 | (byte)(1 << uVar9);
  this->NumFreeBlocks = this->NumFreeBlocks + 1;
  this->UsefulMemorySize = this->UsefulMemorySize - param_2;
  FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::Decommit
            (&this->VMBlock,(longlong)param_1 - *(longlong *)&this->VMBlock,this->BlockSize);
  if (this->NumBlocks < this->NumFreeBlocks) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumFreeBlocks <= NumBlocks",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\GenericPlatform\\OSAllocationPool.h"
                       ,0x94,L"Too many frees!");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  LOCK();
  pFVar1 = &this->NoConcurrentAccess;
  iVar2 = pFVar1->Counter;
  pFVar1->Counter = pFVar1->Counter + -1;
  UNLOCK();
  if (iVar2 != 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("NoConcurrentAccess.Decrement() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\GenericPlatform\\OSAllocationPool.h"
                       ,0x96,
                       L"TMemoryPool is being accessed on multiple threads. The class is not thread safe, add locking!."
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
}

