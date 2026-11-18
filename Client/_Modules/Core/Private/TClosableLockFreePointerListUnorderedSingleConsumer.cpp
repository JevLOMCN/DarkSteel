// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// PushIfNotClosed @ 141b48e30

bool __thiscall
TClosableLockFreePointerListUnorderedSingleConsumer<void,0>::PushIfNotClosed
          (TClosableLockFreePointerListUnorderedSingleConsumer<void,0> *this,void *param_1)

{
  TClosableLockFreePointerListUnorderedSingleConsumer<void,0> TVar1;
  uint uVar2;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  TClosableLockFreePointerListUnorderedSingleConsumer<void,0> local_res18;
  TClosableLockFreePointerListUnorderedSingleConsumer<void,0> local_res20;
  code *local_48;
  undefined1 *local_40;
  code **local_38;
  void *local_30;
  uint *local_28;
  
  local_40 = local_res8;
  local_res10[0] = 0;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`TClosableLockFreePointerListUnorderedSingleConsumer<void,0>::PushIfNotClosed'::__l2::<lambda_1>,bool,unsigned___int64>
             ::Call;
  local_38 = &local_48;
  local_28 = local_res10;
  local_30 = param_1;
  do {
    local_res20 = *this;
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    uVar2 = `FLockFreePointerListLIFOBase<void,0,2>::PushIf'::__l2::<lambda_1>::operator()
                      (&local_38,(ulonglong)((uint)((ulonglong)local_res20 >> 0x1a) & 1));
    if (uVar2 == 0) {
      if (local_res10[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink(local_res10[0]);
      }
      return false;
    }
    local_res18 = (TClosableLockFreePointerListUnorderedSingleConsumer<void,0>)
                  ((((ulonglong)local_res20 >> 0x1a) + 2) * 0x4000000);
    if ((ulonglong)local_res18 < ((ulonglong)local_res20 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe][uVar2 & 0x3fff].SingleNext =
         (atomic<unsigned_int>)(local_res20._0_4_ & 0x3ffffff);
    local_res18 = (TClosableLockFreePointerListUnorderedSingleConsumer<void,0>)
                  ((ulonglong)local_res18 & 0xfffffffffc000000 | (ulonglong)uVar2);
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    LOCK();
    TVar1 = *this;
    if (local_res20 == TVar1) {
      *this = local_res18;
    }
    UNLOCK();
  } while (local_res20 != TVar1);
  return true;
}

