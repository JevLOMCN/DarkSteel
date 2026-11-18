// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// Pop @ 1414a8200

/* WARNING: Type propagation algorithm not settling */

FBaseGraphTask * __thiscall
FStallingTaskQueue<FBaseGraphTask,64,2>::Pop
          (FStallingTaskQueue<FBaseGraphTask,64,2> *this,int param_1,bool param_2)

{
  FIndexedPointer *pFVar1;
  atomic<unsigned___int64> aVar2;
  atomic<unsigned___int64> aVar3;
  atomic<unsigned___int64> aVar4;
  atomic<unsigned___int64> aVar5;
  atomic<void_*> aVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  FBaseGraphTask *pFVar10;
  FIndexedLockFreeLink *pFVar11;
  ulonglong uVar12;
  FStallingTaskQueue<FBaseGraphTask,64,2> *pFVar13;
  longlong lVar14;
  atomic<unsigned___int64> local_res8;
  
  if ((0x19 < (uint)param_1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("MyThread >= 0 && MyThread < FLockFreeLinkPolicy::MAX_BITS_IN_TLinkPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LockFreeList.h"
                         ,0x2f3,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FBaseGraphTask *)(*pcVar7)();
    return pFVar10;
  }
  do {
    local_res8 = (this->MasterState).Ptrs;
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    lVar14 = 0;
    pFVar13 = this;
LAB_1414a8280:
    do {
      do {
        aVar2 = pFVar13->PriorityQueues[0].Head.Ptrs;
        if (GTestCriticalStalls != 0) {
          DoTestCriticalStall();
        }
        aVar3 = pFVar13->PriorityQueues[0].Tail.Ptrs;
        if (GTestCriticalStalls != 0) {
          DoTestCriticalStall();
        }
        uVar9 = aVar2._0_4_;
        if (((ulonglong)aVar2 & 0x3ffffff) == 0) {
          pFVar11 = (FIndexedLockFreeLink *)0x0;
        }
        else {
          pFVar11 = FLockFreeLinkPolicy::LinkAllocator.Pages[(uVar9 & 0x3ffffff) >> 0xe] +
                    (uVar9 & 0x3fff);
        }
        aVar4 = (pFVar11->DoubleNext).Ptrs;
        if (GTestCriticalStalls != 0) {
          DoTestCriticalStall();
        }
        aVar5 = pFVar13->PriorityQueues[0].Head.Ptrs;
        if (GTestCriticalStalls != 0) {
          DoTestCriticalStall();
        }
      } while (aVar2 != aVar5);
      if (((aVar3._0_4_ ^ uVar9) & 0x3ffffff) == 0) {
        if (((ulonglong)aVar4 & 0x3ffffff) != 0) {
          if (GTestCriticalStalls != 0) {
            DoTestCriticalStall();
          }
          uVar12 = (((ulonglong)aVar3 >> 0x1a) + 1) * 0x4000000;
          if (uVar12 < ((ulonglong)aVar3 & 0xfffffffffc000000)) {
            LockFreeTagCounterHasOverflowed();
          }
          if (GTestCriticalStalls != 0) {
            DoTestCriticalStall();
          }
          pFVar1 = &pFVar13->PriorityQueues[0].Tail;
          LOCK();
          if (aVar3 == pFVar1->Ptrs) {
            pFVar1->Ptrs = (atomic<unsigned___int64>)
                           ((uVar12 ^ (ulonglong)aVar4 & 0xffffffff) & 0xfffffffffc000000 ^
                           (ulonglong)aVar4 & 0xffffffff);
          }
          UNLOCK();
          goto LAB_1414a8280;
        }
      }
      else {
        if (GTestCriticalStalls != 0) {
          DoTestCriticalStall();
        }
        if (((ulonglong)aVar4 & 0x3ffffff) == 0) {
          pFVar11 = (FIndexedLockFreeLink *)0x0;
        }
        else {
          pFVar11 = FLockFreeLinkPolicy::LinkAllocator.Pages[(aVar4._0_4_ & 0x3ffffff) >> 0xe] +
                    (aVar4._0_4_ & 0x3fff);
        }
        aVar6 = pFVar11->Payload;
        uVar12 = (((ulonglong)aVar2 >> 0x1a) + 1) * 0x4000000;
        if (uVar12 < ((ulonglong)aVar2 & 0xfffffffffc000000)) {
          LockFreeTagCounterHasOverflowed();
        }
        if (GTestCriticalStalls != 0) {
          DoTestCriticalStall();
        }
        LOCK();
        bVar8 = aVar2 == pFVar13->PriorityQueues[0].Head.Ptrs;
        if (bVar8) {
          pFVar13->PriorityQueues[0].Head.Ptrs =
               (atomic<unsigned___int64>)
               ((uVar12 ^ (ulonglong)aVar4 & 0xffffffff) & 0xfffffffffc000000 ^
               (ulonglong)aVar4 & 0xffffffff);
        }
        UNLOCK();
        if (!bVar8) goto LAB_1414a8280;
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar9 & 0x3ffffff);
        if (aVar6 != (atomic<void_*>)0x0) {
          while( true ) {
            uVar12 = (((ulonglong)local_res8 >> 0x1a) + 1) * 0x4000000;
            if (uVar12 < ((ulonglong)local_res8 & 0xfffffffffc000000)) {
              LockFreeTagCounterHasOverflowed();
            }
            if (GTestCriticalStalls != 0) {
              DoTestCriticalStall();
            }
            LOCK();
            bVar8 = local_res8 == (this->MasterState).Ptrs;
            if (bVar8) {
              (this->MasterState).Ptrs =
                   (atomic<unsigned___int64>)
                   ((uVar12 ^ (ulonglong)local_res8 & 0xffffffff) & 0xfffffffffc000000 ^
                   (ulonglong)local_res8 & 0xffffffff);
            }
            UNLOCK();
            if (bVar8) break;
            local_res8 = (this->MasterState).Ptrs;
            if (GTestCriticalStalls != 0) {
              DoTestCriticalStall();
            }
          }
          return (FBaseGraphTask *)aVar6;
        }
      }
      lVar14 = lVar14 + 1;
      pFVar13 = (FStallingTaskQueue<FBaseGraphTask,64,2> *)(pFVar13->PriorityQueues + 1);
    } while (lVar14 < 2);
    if (!param_2) {
      return (FBaseGraphTask *)0x0;
    }
    uVar12 = (((ulonglong)local_res8 >> 0x1a) + 1) * 0x4000000;
    if (uVar12 < ((ulonglong)local_res8 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    LOCK();
    bVar8 = local_res8 == (this->MasterState).Ptrs;
    if (bVar8) {
      (this->MasterState).Ptrs =
           (atomic<unsigned___int64>)
           ((local_res8._0_4_ & 0x3ffffff | (uint)(1L << ((longlong)param_1 & 0x3fU))) | uVar12);
    }
    UNLOCK();
    if (bVar8) {
      return (FBaseGraphTask *)0x0;
    }
  } while( true );
}

// Push @ 1414aba90

int __thiscall
FStallingTaskQueue<FBaseGraphTask,64,2>::Push
          (FStallingTaskQueue<FBaseGraphTask,64,2> *this,FBaseGraphTask *param_1,uint param_2)

{
  uint uVar1;
  atomic<unsigned___int64> aVar2;
  atomic<unsigned___int64> aVar3;
  ulonglong uVar4;
  int iVar5;
  bool bVar6;
  atomic<unsigned___int64> local_res8;
  atomic<unsigned___int64> local_res20;
  
  local_res20 = (this->MasterState).Ptrs;
  if (GTestCriticalStalls != 0) {
    DoTestCriticalStall();
  }
  FLockFreePointerFIFOBase<FBaseGraphTask,64,1>::Push(this->PriorityQueues + param_2,param_1);
  uVar4 = (((ulonglong)local_res20 >> 0x1a) + 1) * 0x4000000;
  if (uVar4 < ((ulonglong)local_res20 & 0xfffffffffc000000)) {
    LockFreeTagCounterHasOverflowed();
  }
  iVar5 = -1;
  uVar1 = local_res20._0_4_;
  aVar2._0_4_ = uVar1 & 0x3ffffff;
  aVar2._4_4_ = 0;
  if (((ulonglong)local_res20 & 0x3ffffff) != 0) {
    iVar5 = 0;
    aVar3 = local_res20;
    while (((ulonglong)aVar3 & 1) == 0) {
      iVar5 = iVar5 + 1;
      aVar2 = (atomic<unsigned___int64>)((ulonglong)aVar2 >> 1);
      aVar3 = aVar2;
    }
  }
  if (-1 < iVar5) goto LAB_1414abc1c;
  do {
    local_res8 = (atomic<unsigned___int64>)
                 ((uVar4 ^ (ulonglong)local_res20 & 0xffffffff) & 0xfffffffffc000000 ^
                 (ulonglong)local_res20 & 0xffffffff);
    while( true ) {
      if (GTestCriticalStalls != 0) {
        DoTestCriticalStall();
      }
      LOCK();
      bVar6 = local_res20 == (this->MasterState).Ptrs;
      if (bVar6) {
        (this->MasterState).Ptrs = local_res8;
      }
      UNLOCK();
      if (bVar6) {
        return iVar5;
      }
      local_res20 = (this->MasterState).Ptrs;
      if (GTestCriticalStalls != 0) {
        DoTestCriticalStall();
      }
      uVar4 = (((ulonglong)local_res20 >> 0x1a) + 1) * 0x4000000;
      if (uVar4 < ((ulonglong)local_res20 & 0xfffffffffc000000)) {
        LockFreeTagCounterHasOverflowed();
      }
      iVar5 = -1;
      uVar1 = local_res20._0_4_;
      aVar3._0_4_ = uVar1 & 0x3ffffff;
      aVar3._4_4_ = 0;
      if (((ulonglong)local_res20 & 0x3ffffff) != 0) {
        iVar5 = 0;
        aVar2 = local_res20;
        while (((ulonglong)aVar2 & 1) == 0) {
          iVar5 = iVar5 + 1;
          aVar3 = (atomic<unsigned___int64>)((ulonglong)aVar3 >> 1);
          aVar2 = aVar3;
        }
      }
      if (iVar5 < 0) break;
LAB_1414abc1c:
      local_res8 = (atomic<unsigned___int64>)
                   ((ulonglong)(uVar1 & 0x3ffffff) & ~(1L << ((longlong)iVar5 & 0x3fU)) | uVar4);
    }
  } while( true );
}

