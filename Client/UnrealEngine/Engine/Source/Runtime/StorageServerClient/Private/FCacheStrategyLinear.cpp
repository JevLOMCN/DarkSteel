// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 8

// FCacheStrategyLinear @ 148cb4100

FCacheStrategyLinear * __thiscall
StorageServer::FCacheStrategyLinear::FCacheStrategyLinear
          (FCacheStrategyLinear *this,
          TUniquePtr<StorageServer::ICacheJournal,TDefaultDelete<StorageServer::ICacheJournal>_>
          *param_1,TUniquePtr<StorageServer::ICacheStorage,TDefaultDelete<StorageServer::ICacheStorage>_>
                   *param_2,ulong64 param_3,float param_4,bool param_5)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  char cVar1;
  atomic<unsigned___int64> local_res8;
  longlong local_res20;
  atomic<unsigned___int64> *local_28;
  longlong *local_20;
  code *local_18;
  atomic<unsigned___int64> **local_10;
  
  ICacheStrategy::ICacheStrategy((ICacheStrategy *)this,param_1,param_2,param_4);
  this->_padding_ = (longlong)&___7FCacheStrategyLinear_StorageServer__6B_;
  lpCriticalSection = &this->JournalLock;
  this->CurrentSize = (atomic<unsigned___int64>)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)lpCriticalSection,4000);
  local_28 = &local_res8;
  local_res8 = (atomic<unsigned___int64>)0x0;
  local_res20 = 0;
  local_20 = &local_res20;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`StorageServer::FCacheStrategyLinear::FCacheStrategyLinear'::__l2::<lambda_1>,void,FIoChunkId_const_&,StorageServer::FCacheEntry_const_&>
             ::Call;
  (**(code **)(*(longlong *)this->_padding_ + 0x50))((longlong *)this->_padding_,&local_18);
  LOCK();
  this->CurrentSize = local_res8;
  UNLOCK();
  this->CurrentInvalidSize = (longlong)local_res8 - local_res20;
  this->AbandonAtInvalidSize = param_3;
  SetCounters(this);
  if (((!param_5) && (cVar1 = (**(code **)(*(longlong *)this->_padding_ + 8))(), cVar1 == '\0')) &&
     (this->CurrentInvalidSize < this->AbandonAtInvalidSize)) {
    return this;
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (**(code **)(*(longlong *)this->_padding_ + 0x10))();
    LOCK();
    this->CurrentSize = (atomic<unsigned___int64>)0x0;
    UNLOCK();
    this->CurrentInvalidSize = 0;
    SetCounters(this);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ~FCacheStrategyLinear @ 148cb6200

void __thiscall
StorageServer::FCacheStrategyLinear::~FCacheStrategyLinear(FCacheStrategyLinear *this)

{
  this->_padding_ = (longlong)&___7FCacheStrategyLinear_StorageServer__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->JournalLock);
  ICacheStrategy::~ICacheStrategy((ICacheStrategy *)this);
  return;
}

// CacheChunk @ 148cbd0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
StorageServer::FCacheStrategyLinear::CacheChunk
          (FCacheStrategyLinear *this,FIoChunkId *param_1,ulong64 param_2,ulong64 param_3,
          FIoBuffer *param_4,EStorageServerContentType param_5,ulong64 param_6)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uchar uVar1;
  uint uVar2;
  BufCore *pBVar3;
  atomic<unsigned___int64> aVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  ulonglong uVar8;
  FBlake3Hash *pFVar9;
  undefined1 auStackY_148 [32];
  FCacheStrategyLinear *local_110;
  undefined1 local_104;
  ulong64 local_100;
  ulong64 local_f8;
  undefined1 local_f0;
  code *local_e8;
  FCacheStrategyLinear **local_e0;
  ulong64 local_d8;
  undefined1 local_d0;
  undefined1 local_c8 [8];
  undefined1 local_c0;
  undefined1 local_b8 [8];
  undefined1 local_b0;
  ulong64 local_a8;
  ulong64 local_a0;
  atomic<unsigned___int64> local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  FBlake3Hash local_70;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_148;
  lpCriticalSection = &this->JournalLock;
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_100 = param_3;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_c0 = 0;
  local_f8 = param_6;
  local_f0 = 1;
  cVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x20))
                    ((longlong *)this->_padding_,param_1,&local_f8,local_c8);
  if (cVar6 == '\0') {
    if (this->CurrentSize != (atomic<unsigned___int64>)0x0) {
      local_e0 = &local_110;
      local_e8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`StorageServer::FCacheStrategyLinear::Invalidate'::__l2::<lambda_1>,void,StorageServer::FCacheEntry_const_&>
                 ::Call;
      local_110 = this;
      (**(code **)(*(longlong *)this->_padding_ + 0x48))
                ((longlong *)this->_padding_,param_1,&local_e8);
      SetCounters(this);
      if (this->CurrentInvalidSize < this->AbandonAtInvalidSize) {
        (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,param_1);
      }
      else {
        InvalidateAll(this);
      }
    }
    local_104 = 0;
    local_b0 = 0;
    local_d8 = param_6;
    local_d0 = 1;
    cVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x20))
                      ((longlong *)this->_padding_,param_1,&local_d8,local_b8);
    if ((cVar6 == '\0') &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2652918826777182015>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\Cache\\CacheStrategyLinear.cpp"
                           ,0xc1,"ModTagValid"), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pBVar3 = (param_4->CorePtr).Reference;
  aVar4 = this->CurrentSize;
  uVar1 = pBVar3->DataSizeHigh;
  uVar2 = pBVar3->DataSizeLow;
  uVar8 = (**(code **)(*(longlong *)this->_padding_ + 0x18))();
  if ((ulonglong)CONCAT14(uVar1,uVar2) + (longlong)aVar4 < uVar8) {
    local_a0 = local_100;
    local_98 = this->CurrentSize;
    pBVar3 = (param_4->CorePtr).Reference;
    local_90 = (ulonglong)CONCAT14(pBVar3->DataSizeHigh,pBVar3->DataSizeLow);
    local_a8 = param_2;
    pFVar9 = FBlake3::HashBuffer(&local_70,pBVar3->DataPtr,
                                 (ulonglong)CONCAT14(pBVar3->DataSizeHigh,pBVar3->DataSizeLow));
    local_88 = *(undefined8 *)pFVar9->Hash;
    uStack_80 = *(undefined8 *)(pFVar9->Hash + 8);
    local_78._0_5_ = CONCAT14(param_5,*(undefined4 *)(pFVar9->Hash + 0x10));
    cVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x30))
                      ((longlong *)this->_padding_,param_1,&local_a8);
    if (cVar6 != '\0') {
      pBVar3 = (param_4->CorePtr).Reference;
      LOCK();
      this->CurrentSize =
           (atomic<unsigned___int64>)
           ((longlong)this->CurrentSize +
           (ulonglong)CONCAT14(pBVar3->DataSizeHigh,pBVar3->DataSizeLow));
      UNLOCK();
      SetCounters(this);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pBVar3 = (param_4->CorePtr).Reference;
      (**(code **)(*(longlong *)this->_padding_ + 0x30))
                ((longlong *)this->_padding_,local_98,pBVar3->DataPtr,
                 (ulonglong)CONCAT14(pBVar3->DataSizeHigh,pBVar3->DataSizeLow));
      return;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Invalidate @ 148ccbbf0

void __thiscall
StorageServer::FCacheStrategyLinear::Invalidate
          (FCacheStrategyLinear *this,FIoChunkId *param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  LPCRITICAL_SECTION lpCriticalSection_00;
  bool bVar2;
  FCacheStrategyLinear *local_res8;
  code *local_18;
  FCacheStrategyLinear **local_10;
  
  lpCriticalSection = &this->JournalLock;
  lpCriticalSection_00 = (LPCRITICAL_SECTION)0x0;
  if (param_2) {
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x3e,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lpCriticalSection_00 = (LPCRITICAL_SECTION)lpCriticalSection;
  }
  if (this->CurrentSize != (atomic<unsigned___int64>)0x0) {
    local_10 = &local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`StorageServer::FCacheStrategyLinear::Invalidate'::__l2::<lambda_1>,void,StorageServer::FCacheEntry_const_&>
               ::Call;
    local_res8 = this;
    (**(code **)(*(longlong *)this->_padding_ + 0x48))
              ((longlong *)this->_padding_,param_1,&local_18);
    SetCounters(this);
    if (this->CurrentInvalidSize < this->AbandonAtInvalidSize) {
      (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,param_1);
    }
    else {
      InvalidateAll(this);
    }
  }
  if (lpCriticalSection_00 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection_00);
  }
  return;
}

// Invalidate @ 148ccbcd0

void __thiscall
StorageServer::FCacheStrategyLinear::Invalidate(FCacheStrategyLinear *this,FIoChunkId *param_1)

{
  Invalidate(this,param_1,true);
  return;
}

// InvalidateAll @ 148ccc4a0

void __thiscall StorageServer::FCacheStrategyLinear::InvalidateAll(FCacheStrategyLinear *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->JournalLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (**(code **)(*(longlong *)this->_padding_ + 0x10))();
    LOCK();
    this->CurrentSize = (atomic<unsigned___int64>)0x0;
    UNLOCK();
    this->CurrentInvalidSize = 0;
    SetCounters(this);
                    /* WARNING: Could not recover jumptable at 0x000148ccc4ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ReadChunk @ 148cd4660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
StorageServer::FCacheStrategyLinear::ReadChunk
          (FCacheStrategyLinear *this,FIoChunkId *param_1,ulong64 param_2,ulong64 param_3,
          TOptional<FIoBuffer> *param_4,FIoBuffer *param_5,EStorageServerContentType *param_6)

{
  int *piVar1;
  BufCore *this_00;
  longlong *plVar2;
  code *pcVar3;
  TRefCountPtr<FIoBuffer::BufCore> this_01;
  char cVar4;
  int iVar5;
  FBlake3Hash *pFVar6;
  FIoBuffer FVar7;
  ulonglong uVar8;
  undefined1 auStack_f8 [32];
  TRefCountPtr<FIoBuffer::BufCore> *local_d8;
  FIoBuffer local_c0;
  TRefCountPtr<FIoBuffer::BufCore> local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulonglong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  FBlake3Hash local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_d8 = (TRefCountPtr<FIoBuffer::BufCore> *)&local_a0;
  local_70 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  cVar4 = (**(code **)(*(longlong *)this->_padding_ + 0x38))();
  if (cVar4 == '\0') {
    if ((param_4->bIsSet != false) &&
       (this_00 = (param_4->TypedValue).CorePtr.Reference, this_00 != (BufCore *)0x0)) {
      FIoBuffer::BufCore::CheckRefCount(this_00);
      LOCK();
      piVar1 = &this_00->NumRefs;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        FIoBuffer::BufCore::~BufCore(this_00);
        ::operator_delete(this_00,0x20);
      }
    }
    return false;
  }
  plVar2 = (longlong *)this->_padding_;
  pcVar3 = *(code **)(*plVar2 + 0x28);
  uStack_b0 = CONCAT71(uStack_b0._1_7_,param_4->bIsSet);
  if ((param_4->bIsSet != false) &&
     (local_b8.Reference = (param_4->TypedValue).CorePtr.Reference,
     local_b8.Reference != (BufCore *)0x0)) {
    LOCK();
    (local_b8.Reference)->NumRefs = (local_b8.Reference)->NumRefs + 1;
    UNLOCK();
  }
  local_d8 = &local_b8;
  (*pcVar3)(plVar2,&local_c0,local_90,uStack_88);
  uVar8 = (ulonglong)
          CONCAT14(*(uchar *)((longlong)local_c0.CorePtr.Reference + 0x18),
                   *(uint *)((longlong)local_c0.CorePtr.Reference + 8));
  FVar7.CorePtr.Reference = local_c0.CorePtr.Reference;
  if (uVar8 == uStack_88) {
    pFVar6 = FBlake3::HashBuffer(&local_68,*(void **)local_c0.CorePtr.Reference,uVar8);
    local_b8.Reference = *(BufCore **)pFVar6->Hash;
    uStack_b0 = *(undefined8 *)(pFVar6->Hash + 8);
    local_a8 = *(undefined4 *)(pFVar6->Hash + 0x10);
    iVar5 = memcmp(&local_80,&local_b8,0x14);
    if (iVar5 == 0) {
      this_01.Reference = (param_5->CorePtr).Reference;
      FVar7.CorePtr.Reference = local_c0.CorePtr.Reference;
      if ((TRefCountPtr<FIoBuffer::BufCore>)this_01.Reference != local_c0.CorePtr.Reference) {
        (param_5->CorePtr).Reference = (BufCore *)local_c0;
        if (local_c0.CorePtr.Reference != (BufCore *)0x0) {
          LOCK();
          *(int *)((longlong)local_c0.CorePtr.Reference + 0xc) =
               *(int *)((longlong)local_c0.CorePtr.Reference + 0xc) + 1;
          UNLOCK();
        }
        if (this_01.Reference != (BufCore *)0x0) {
          FIoBuffer::BufCore::CheckRefCount(this_01.Reference);
          LOCK();
          piVar1 = &(this_01.Reference)->NumRefs;
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          FVar7.CorePtr.Reference = local_c0.CorePtr.Reference;
          if (iVar5 == 1) {
            FIoBuffer::BufCore::~BufCore(this_01.Reference);
            ::operator_delete(this_01.Reference,0x20);
            FVar7.CorePtr.Reference = local_c0.CorePtr.Reference;
          }
        }
      }
      *param_6 = local_70._4_1_;
      if (FVar7.CorePtr.Reference != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount((BufCore *)FVar7.CorePtr.Reference);
        LOCK();
        piVar1 = &((BufCore *)FVar7.CorePtr.Reference)->NumRefs;
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          FIoBuffer::BufCore::~BufCore((BufCore *)FVar7.CorePtr.Reference);
          ::operator_delete((void *)FVar7.CorePtr.Reference,0x20);
        }
      }
      TOptional<FIoBuffer>::~TOptional<FIoBuffer>(param_4);
      return true;
    }
    FVar7.CorePtr.Reference = local_c0.CorePtr.Reference;
    if (local_c0.CorePtr.Reference == (BufCore *)0x0) goto LAB_148cd47c0;
  }
  FIoBuffer::BufCore::CheckRefCount((BufCore *)FVar7.CorePtr.Reference);
  LOCK();
  piVar1 = &((BufCore *)FVar7.CorePtr.Reference)->NumRefs;
  iVar5 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar5 == 1) {
    FIoBuffer::BufCore::~BufCore((BufCore *)FVar7.CorePtr.Reference);
    ::operator_delete((void *)FVar7.CorePtr.Reference,0x20);
  }
LAB_148cd47c0:
  TOptional<FIoBuffer>::~TOptional<FIoBuffer>(param_4);
  return false;
}

// SetCounters @ 148cde090

void __thiscall StorageServer::FCacheStrategyLinear::SetCounters(FCacheStrategyLinear *this)

{
  atomic<unsigned___int64> aVar1;
  ulong64 uVar2;
  ushort uVar3;
  
  aVar1 = this->CurrentSize;
  if (((atomic<unsigned___int64>)__GTraceCounterZenLinearStrategyCacheCurrentSize.Value != aVar1) &&
     (__GTraceCounterZenLinearStrategyCacheCurrentSize.Value = (long64)aVar1,
     -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterZenLinearStrategyCacheCurrentSize.CounterId == (atomic<unsigned_int>)0x0) {
      uVar3 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterZenLinearStrategyCacheCurrentSize.CounterName,
                         TraceCounterType_Int,
                         __GTraceCounterZenLinearStrategyCacheCurrentSize.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterZenLinearStrategyCacheCurrentSize.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterZenLinearStrategyCacheCurrentSize.CounterId._2_2_ = 0;
        __GTraceCounterZenLinearStrategyCacheCurrentSize.CounterId._0_2_ = uVar3;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterZenLinearStrategyCacheCurrentSize.CounterId._0_2_,
               __GTraceCounterZenLinearStrategyCacheCurrentSize.Value);
  }
  uVar2 = this->CurrentInvalidSize;
  if ((__GTraceCounterZenLinearStrategyCacheInvalidSize.Value != uVar2) &&
     (__GTraceCounterZenLinearStrategyCacheInvalidSize.Value = uVar2, -1 < CountersChannel->Enabled)
     ) {
    if (__GTraceCounterZenLinearStrategyCacheInvalidSize.CounterId == (atomic<unsigned_int>)0x0) {
      uVar3 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterZenLinearStrategyCacheInvalidSize.CounterName,
                         TraceCounterType_Int,
                         __GTraceCounterZenLinearStrategyCacheInvalidSize.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterZenLinearStrategyCacheInvalidSize.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterZenLinearStrategyCacheInvalidSize.CounterId._2_2_ = 0;
        __GTraceCounterZenLinearStrategyCacheInvalidSize.CounterId._0_2_ = uVar3;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterZenLinearStrategyCacheInvalidSize.CounterId._0_2_,
               __GTraceCounterZenLinearStrategyCacheInvalidSize.Value);
    return;
  }
  return;
}

