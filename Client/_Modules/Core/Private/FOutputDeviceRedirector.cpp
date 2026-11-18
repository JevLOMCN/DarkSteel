// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 23

// FOutputDeviceRedirector @ 1418bcbf0

FOutputDeviceRedirector * __thiscall
FOutputDeviceRedirector::FOutputDeviceRedirector(FOutputDeviceRedirector *this)

{
  DWORD DVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined2 *)&this->_padding_ = 0x100;
  this->_padding_ = (longlong)&___7FOutputDeviceRedirector__6B_;
  puVar2 = ::operator_new(0x110);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = UE::Core::Private::PimplPtr::DeleterFunc<UE::Private::FOutputDeviceRedirectorState>;
    puVar2[0x12] = 0;
    puVar2[0x17] = 0;
    *(undefined8 *)((longlong)puVar2 + 0xd4) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xdc) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xe4) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xec) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xf4) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xfc) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x104) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x10c) = 0;
    puVar2[2] = 0;
    *(undefined4 *)(puVar2 + 3) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x24) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x2c) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x34) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x3c) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x44) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x4c) = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x13] = 0;
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
    puVar2[0x18] = 0;
    puVar2[0x19] = 0;
    *(undefined4 *)(puVar2 + 0x1a) = 0xffffffff;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)((longlong)puVar2 + 0xd4) = DVar1;
    *(undefined4 *)(puVar2 + 0x1b) = 0xffffffff;
    *(undefined2 *)((longlong)puVar2 + 0xdc) = 0x100;
    puVar2[0x1d] = 0;
    *(undefined4 *)(puVar2 + 0x1e) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xf4) = 0x20;
    puVar2[0x20] = 0;
    *(undefined4 *)(puVar2 + 0x21) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x10c) = 0x20;
    puVar3 = puVar2;
  }
  (this->State).Ptr = (FOutputDeviceRedirectorState *)(puVar3 + 2);
  return this;
}

// ~FOutputDeviceRedirector @ 1418bf170

void __thiscall FOutputDeviceRedirector::~FOutputDeviceRedirector(FOutputDeviceRedirector *this)

{
  FOutputDeviceRedirectorState *pFVar1;
  FOutputDeviceRedirector *pFVar2;
  
  this->_padding_ = (longlong)&___7FOutputDeviceRedirector__6B_;
  pFVar2 = Get();
  if (this == pFVar2) {
    GWasGLogDestroyed = true;
  }
  pFVar1 = (this->State).Ptr;
  if (pFVar1 != (FOutputDeviceRedirectorState *)0x0) {
    (*(code *)pFVar1[-1].UnbufferedOutputDevicesCanBeUsedOnPanicThread.AllocatorInstance.
              SecondaryData)
              (&pFVar1[-1].UnbufferedOutputDevicesCanBeUsedOnPanicThread.AllocatorInstance.
                SecondaryData);
  }
  this->_padding_ = (longlong)&___7FOutputDevice__6B_;
  return;
}

// AddOutputDevice @ 1418c6af0

void __thiscall
FOutputDeviceRedirector::AddOutputDevice(FOutputDeviceRedirector *this,FOutputDevice *param_1)

{
  FOutputDeviceRedirectorState *pFVar1;
  
  if (param_1 != (FOutputDevice *)0x0) {
    pFVar1 = (this->State).Ptr;
    if (pFVar1->bEnableBacklog != false) {
      UE::Private::FOutputDeviceRedirectorState::ConditionalFlushBufferedItems(pFVar1,None);
    }
    UE::Private::FOutputDeviceRedirectorState::AddOutputDevice((this->State).Ptr,param_1);
    pFVar1 = (this->State).Ptr;
    if (pFVar1->bEnableBacklog != false) {
      UE::Private::FOutputDeviceRedirectorState::SerializeBacklog
                (pFVar1,(TNotNull<FOutputDevice_*>)param_1);
    }
  }
  return;
}

// CreateFence @ 1418d4270

FOutputDeviceFence * __thiscall
FOutputDeviceRedirector::CreateFence
          (FOutputDeviceRedirector *this,FOutputDeviceFence *__return_storage_ptr__)

{
  atomic<unsigned___int64> *paVar1;
  TEventCount<unsigned_int> *pTVar2;
  atomic<unsigned_int> aVar3;
  atomic<unsigned___int64> aVar4;
  FOutputDeviceRedirectorState *pFVar5;
  atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
  aVar6;
  atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
  aVar7;
  atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
  aVar8;
  bool bVar9;
  
  pFVar5 = (this->State).Ptr;
  __return_storage_ptr__->Index = 0;
  __return_storage_ptr__->State = pFVar5;
  LOCK();
  paVar1 = &pFVar5->FenceCreateIndex;
  aVar4 = *paVar1;
  *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  aVar6 = (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
           )TLinearAllocatorBase<UE::Private::FOutputDeviceBlockAllocationTag,0>::Malloc(0x68,8);
  *(atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
    *)aVar6 = (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
               )0x0;
  *(longlong *)((longlong)aVar6 + 8) = (longlong)aVar4 + 1;
  *(undefined1 *)((longlong)aVar6 + 0x60) = 2;
  aVar7 = (pFVar5->BufferedItems).Head;
  do {
    aVar8 = aVar7;
    *(atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
      *)aVar6 = aVar8;
    LOCK();
    aVar7 = (pFVar5->BufferedItems).Head;
    bVar9 = aVar8 == aVar7;
    if (bVar9) {
      (pFVar5->BufferedItems).Head = aVar6;
      aVar7 = aVar8;
    }
    UNLOCK();
  } while (!bVar9);
  if (aVar8 == (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
                )0x0) {
    pTVar2 = &pFVar5->ThreadWakeEvent;
    LOCK();
    aVar3 = pTVar2->Count;
    pTVar2->Count = pTVar2->Count;
    UNLOCK();
    if (((uint)aVar3 & 1) != 0) {
      LOCK();
      bVar9 = aVar3 == pTVar2->Count;
      if (bVar9) {
        pTVar2->Count = (atomic<unsigned_int>)((int)aVar3 + 1);
      }
      UNLOCK();
      if (bVar9) {
        UE::ParkingLot::WakeAll(pTVar2);
      }
    }
  }
  __return_storage_ptr__->Index = (longlong)aVar4 + 1;
  return __return_storage_ptr__;
}

// EnableBacklog @ 1418d7260

void __thiscall FOutputDeviceRedirector::EnableBacklog(FOutputDeviceRedirector *this,bool param_1)

{
  UE::Private::FOutputDeviceRedirectorState::EnableBacklog((this->State).Ptr,param_1);
  return;
}

// Flush @ 1418daaf0

void __thiscall FOutputDeviceRedirector::Flush(FOutputDeviceRedirector *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  atomic<unsigned_int> aVar7;
  atomic<unsigned_int> aVar8;
  FOutputDevice *pFVar9;
  ForElementType<unsigned_int> FVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  FOutputDeviceRedirectorState *pFVar16;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FOutputDevice *local_60;
  FOutputDevice *local_58;
  FOutputDeviceRedirectorState *local_50;
  
  pFVar16 = (this->State).Ptr;
  bVar5 = false;
  local_50 = pFVar16;
  aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar7 == pFVar16->LockedThreadId) {
    return;
  }
  if ((pFVar16->PanicThreadId != (atomic<unsigned_int>)0xffffffff) &&
     (pFVar16->PanicThreadId != aVar7)) {
    return;
  }
  if (aVar7 != pFVar16->PanicThreadId) {
    AcquireSRWLockExclusive((PSRWLOCK)pFVar16);
    if ((aVar7 == pFVar16->LockedThreadId) ||
       ((pFVar16->PanicThreadId != (atomic<unsigned_int>)0xffffffff &&
        (pFVar16->PanicThreadId != aVar7)))) goto LAB_1418dada3;
    bVar5 = true;
  }
  pFVar16->LockedThreadId = aVar7;
  UE::Private::FOutputDeviceRedirectorState::FlushBufferedItems((this->State).Ptr);
  aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
  pFVar16 = (this->State).Ptr;
  uVar12 = 0;
  aVar7 = pFVar16->PanicThreadId;
  pFVar15 = (pFVar16->BufferedOutputDevices).AllocatorInstance.Data;
  iVar2 = (pFVar16->BufferedOutputDevices).ArrayNum;
  pFVar1 = pFVar15 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pFVar16->BufferedOutputDevices).ArrayNum != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FOutputDevice_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar15 == pFVar1) break;
    local_60 = *(FOutputDevice **)pFVar15;
    uVar14 = uVar12;
    if (aVar8 == aVar7) {
      uVar14 = uVar12 + 1;
      if ((((int)uVar12 < 0) ||
          ((pFVar16->BufferedOutputDevicesCanBeUsedOnPanicThread).NumBits <= (int)uVar12)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = (pFVar16->BufferedOutputDevicesCanBeUsedOnPanicThread).AllocatorInstance.SecondaryData
      ;
      FVar10 = (ForElementType<unsigned_int>)&pFVar16->BufferedOutputDevicesCanBeUsedOnPanicThread;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        FVar10 = FVar3;
      }
      uVar11 = uVar12 & 0x1f;
      if ((int)uVar12 < 0) {
        uVar12 = uVar12 + 0x1f;
      }
      iVar13 = (int)uVar12 >> 5;
      uVar12 = uVar14;
      if ((*(uint *)((longlong)FVar10 + (longlong)iVar13 * 4) >> uVar11 & 1) != 0)
      goto LAB_1418dac6a;
    }
    else {
LAB_1418dac6a:
      pFVar9 = UE::Core::Private::DereferenceIfNecessary<FOutputDevice,FOutputDevice_*_&>(&local_60)
      ;
      FOutputDevice::_vcall__32__flat______(pFVar9);
      uVar12 = uVar14;
    }
    pFVar15 = pFVar15 + 8;
  }
  uVar12 = 0;
  pFVar16 = (this->State).Ptr;
  aVar7 = pFVar16->PanicThreadId;
  pFVar15 = (pFVar16->UnbufferedOutputDevices).AllocatorInstance.Data;
  iVar2 = (pFVar16->UnbufferedOutputDevices).ArrayNum;
  pFVar1 = pFVar15 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pFVar16->UnbufferedOutputDevices).ArrayNum != iVar2) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FOutputDevice_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar15 == pFVar1) break;
    local_58 = *(FOutputDevice **)pFVar15;
    uVar14 = uVar12;
    if (aVar8 == aVar7) {
      uVar14 = uVar12 + 1;
      if ((((int)uVar12 < 0) ||
          ((pFVar16->UnbufferedOutputDevicesCanBeUsedOnPanicThread).NumBits <= (int)uVar12)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = (pFVar16->UnbufferedOutputDevicesCanBeUsedOnPanicThread).AllocatorInstance.
              SecondaryData;
      FVar10 = (ForElementType<unsigned_int>)&pFVar16->UnbufferedOutputDevicesCanBeUsedOnPanicThread
      ;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        FVar10 = FVar3;
      }
      uVar11 = uVar12 & 0x1f;
      if ((int)uVar12 < 0) {
        uVar12 = uVar12 + 0x1f;
      }
      iVar13 = (int)uVar12 >> 5;
      uVar12 = uVar14;
      if ((*(uint *)((longlong)FVar10 + (longlong)iVar13 * 4) >> uVar11 & 1) != 0)
      goto LAB_1418dad4c;
    }
    else {
LAB_1418dad4c:
      pFVar9 = UE::Core::Private::DereferenceIfNecessary<FOutputDevice,FOutputDevice_*_&>(&local_58)
      ;
      FOutputDevice::_vcall__32__flat______(pFVar9);
      uVar12 = uVar14;
    }
    pFVar15 = pFVar15 + 8;
  }
  local_50->LockedThreadId = (atomic<unsigned_int>)0xffffffff;
  pFVar16 = local_50;
  if (!bVar5) {
    return;
  }
LAB_1418dada3:
  ReleaseSRWLockExclusive((PSRWLOCK)pFVar16);
  return;
}

// FlushThreadedLogs @ 1418db0d0

void __thiscall
FOutputDeviceRedirector::FlushThreadedLogs
          (FOutputDeviceRedirector *this,EOutputDeviceRedirectorFlushOptions param_1)

{
  UE::Private::FOutputDeviceRedirectorState::ConditionalFlushBufferedItems
            ((this->State).Ptr,param_1);
  return;
}

// Get @ 1418dc3c0

FOutputDeviceRedirector * __cdecl FOutputDeviceRedirector::Get(void)

{
  DWORD DVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    puVar2 = ::operator_new(0x110);
    puVar3 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = 0;
      *puVar2 = UE::Core::Private::PimplPtr::DeleterFunc<UE::Private::FOutputDeviceRedirectorState>;
      puVar2[0x12] = 0;
      puVar2[0x17] = 0;
      *(undefined8 *)((longlong)puVar2 + 0xd4) = 0;
      *(undefined8 *)((longlong)puVar2 + 0xdc) = 0;
      *(undefined8 *)((longlong)puVar2 + 0xe4) = 0;
      *(undefined8 *)((longlong)puVar2 + 0xec) = 0;
      *(undefined8 *)((longlong)puVar2 + 0xf4) = 0;
      *(undefined8 *)((longlong)puVar2 + 0xfc) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x104) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x10c) = 0;
      puVar2[2] = 0;
      *(undefined4 *)(puVar2 + 3) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x24) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x2c) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x34) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x3c) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x44) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x4c) = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      puVar2[0x10] = 0;
      puVar2[0x11] = 0;
      puVar2[0x13] = 0;
      puVar2[0x14] = 0;
      puVar2[0x15] = 0;
      puVar2[0x16] = 0;
      puVar2[0x18] = 0;
      puVar2[0x19] = 0;
      *(undefined4 *)(puVar2 + 0x1a) = 0xffffffff;
      DVar1 = GetCurrentThreadId();
      *(DWORD *)((longlong)puVar2 + 0xd4) = DVar1;
      *(undefined4 *)(puVar2 + 0x1b) = 0xffffffff;
      *(undefined2 *)((longlong)puVar2 + 0xdc) = 0x100;
      puVar2[0x1d] = 0;
      *(undefined4 *)(puVar2 + 0x1e) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xf4) = 0x20;
      puVar2[0x20] = 0;
      *(undefined4 *)(puVar2 + 0x21) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x10c) = 0x20;
      puVar3 = puVar2;
    }
    ::Singleton.State.Ptr = (FOutputDeviceRedirectorState *)(puVar3 + 2);
    atexit(`FOutputDeviceRedirector::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
    _Init_thread_footer(&::_TSS0);
    return &::Singleton;
  }
  return &::Singleton;
}

// HasBacklogForCrash @ 1418e21e0

bool __thiscall FOutputDeviceRedirector::HasBacklogForCrash(FOutputDeviceRedirector *this)

{
  bool bVar1;
  FOutputDeviceRedirectorState *pFVar2;
  
  pFVar2 = (this->State).Ptr;
  AcquireSRWLockShared((PSRWLOCK)&pFVar2->BacklogLock);
  bVar1 = ((this->State).Ptr)->bEnableBacklog;
  ReleaseSRWLockShared((PSRWLOCK)&pFVar2->BacklogLock);
  return bVar1;
}

// IsBacklogEnabled @ 1418e2980

bool __thiscall FOutputDeviceRedirector::IsBacklogEnabled(FOutputDeviceRedirector *this)

{
  bool bVar1;
  FOutputDeviceRedirectorState *pFVar2;
  
  pFVar2 = (this->State).Ptr;
  AcquireSRWLockShared((PSRWLOCK)&pFVar2->BacklogLock);
  bVar1 = ((this->State).Ptr)->bEnableBacklog;
  ReleaseSRWLockShared((PSRWLOCK)&pFVar2->BacklogLock);
  return bVar1;
}

// IsRedirectingTo @ 1418e3650

bool __thiscall
FOutputDeviceRedirector::IsRedirectingTo(FOutputDeviceRedirector *this,FOutputDevice *param_1)

{
  atomic<unsigned_int> *paVar1;
  FScriptContainerElement *pFVar2;
  atomic<unsigned_int> aVar3;
  FOutputDeviceRedirectorState *pFVar4;
  FOutputDeviceRedirectorState *pFVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  FOutputDevicesReadScopeLock local_res8;
  
  pFVar4 = (this->State).Ptr;
  LOCK();
  paVar1 = &pFVar4->OutputDevicesLockState;
  aVar3 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 2);
  UNLOCK();
  if (((uint)aVar3 & 1) != 0) {
    local_res8.State = pFVar4;
    UE::Private::FOutputDevicesReadScopeLock::WaitForWriteLock(&local_res8);
  }
  pFVar5 = (this->State).Ptr;
  pFVar7 = (pFVar5->BufferedOutputDevices).AllocatorInstance.Data;
  pFVar2 = pFVar7 + (longlong)(pFVar5->BufferedOutputDevices).ArrayNum * 8;
  for (; pFVar7 != pFVar2; pFVar7 = pFVar7 + 8) {
    if (*(FOutputDevice **)pFVar7 == param_1) goto LAB_1418e36e5;
  }
  pFVar7 = (pFVar5->UnbufferedOutputDevices).AllocatorInstance.Data;
  pFVar2 = pFVar7 + (longlong)(pFVar5->UnbufferedOutputDevices).ArrayNum * 8;
  for (; pFVar7 != pFVar2; pFVar7 = pFVar7 + 8) {
    if (*(FOutputDevice **)pFVar7 == param_1) goto LAB_1418e36e5;
  }
  bVar6 = false;
LAB_1418e36d0:
  LOCK();
  pFVar4->OutputDevicesLockState = (atomic<unsigned_int>)((int)pFVar4->OutputDevicesLockState + -2);
  UNLOCK();
  return bVar6;
LAB_1418e36e5:
  bVar6 = true;
  goto LAB_1418e36d0;
}

// Panic @ 1418e9cc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FOutputDeviceRedirector::Panic(FOutputDeviceRedirector *this)

{
  atomic<unsigned_int> *paVar1;
  double dVar2;
  double dVar3;
  BOOLEAN BVar4;
  atomic<unsigned_int> aVar5;
  atomic<unsigned_int> aVar6;
  bool bVar7;
  double dVar8;
  LARGE_INTEGER local_res8;
  
  aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
  paVar1 = &((this->State).Ptr)->PanicThreadId;
  LOCK();
  aVar6 = *paVar1;
  bVar7 = aVar6 == (atomic<unsigned_int>)0xffffffff;
  if (bVar7) {
    *paVar1 = aVar5;
    aVar6 = (atomic<unsigned_int>)0xffffffff;
  }
  UNLOCK();
  if (!bVar7) {
    if (aVar6 == aVar5) {
                    /* WARNING: Subroutine does not return */
      Flush(this);
    }
    return;
  }
  QueryPerformanceCounter(&local_res8);
  dVar2 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          ___real_4170000010000000;
  QueryPerformanceCounter(&local_res8);
  dVar3 = __real_4170000000000000;
  dVar8 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  do {
    if (dVar2 <= dVar8 + dVar3) {
LAB_1418e9d93:
      LOCK();
      ((this->State).Ptr)->PrimaryThreadId = aVar5;
      UNLOCK();
                    /* WARNING: Subroutine does not return */
      Flush(this);
    }
    BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)(this->State).Ptr);
    if (BVar4 != '\0') {
      ReleaseSRWLockExclusive((PSRWLOCK)(this->State).Ptr);
      goto LAB_1418e9d93;
    }
    QueryPerformanceCounter(&local_res8);
    dVar8 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  } while( true );
}

// RedirectLog @ 1418f1380

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOutputDeviceRedirector::RedirectLog
          (FOutputDeviceRedirector *this,FLazyName *param_1,Type param_2,wchar_t *param_3)

{
  FName local_18 [2];
  
  FLazyName::Resolve(param_1);
  Serialize(this,param_3,param_2,local_18,__real_bff0000000000000);
  return;
}

// RedirectLog @ 1418f13f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOutputDeviceRedirector::RedirectLog
          (FOutputDeviceRedirector *this,FName *param_1,Type param_2,wchar_t *param_3)

{
  Serialize(this,param_3,param_2,param_1,__real_bff0000000000000);
  return;
}

// RemoveOutputDevice @ 1418f2b30

void __thiscall
FOutputDeviceRedirector::RemoveOutputDevice(FOutputDeviceRedirector *this,FOutputDevice *param_1)

{
  atomic<unsigned_int> aVar1;
  FOutputDeviceRedirectorState *SRWLock;
  code *pcVar2;
  atomic<unsigned_int> aVar3;
  bool bVar4;
  bool bVar5;
  FOutputDevice *local_res10;
  
  if (param_1 == (FOutputDevice *)0x0) {
    return;
  }
  SRWLock = (this->State).Ptr;
  bVar4 = -1 < CpuChannel->Enabled;
  local_res10 = param_1;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:___cdecl_UE::Private::FOutputDevicesWriteScopeLock::FOutputDevicesWriteScopeLock(UE::Private::FOutputDeviceRedirectorState&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId331,"FOutputDevicesWriteScopeLock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\OutputDeviceRedirector.cpp"
               ,0x14b);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:___cdecl_UE::Private::FOutputDevicesWriteScopeLock::FOutputDevicesWriteScopeLock(UE::Private::FOutputDeviceRedirectorState&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId331);
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  aVar3 = (atomic<unsigned_int>)GetCurrentThreadId();
  SRWLock->LockedThreadId = aVar3;
  aVar3 = SRWLock->OutputDevicesLockState;
  do {
    LOCK();
    aVar1 = SRWLock->OutputDevicesLockState;
    bVar5 = aVar3 == aVar1;
    if (bVar5) {
      SRWLock->OutputDevicesLockState = (atomic<unsigned_int>)((uint)aVar3 | 1);
      aVar1 = aVar3;
    }
    aVar3 = aVar1;
    UNLOCK();
  } while (!bVar5);
  if ((((uint)aVar3 & 1) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(LockState & 1) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\OutputDeviceRedirector.cpp"
                         ,0x151,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  while (1 < (uint)aVar3) {
    FWindowsPlatformProcess::Sleep(0.0);
    aVar3 = SRWLock->OutputDevicesLockState;
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  `UE::Private::FOutputDeviceRedirectorState::RemoveOutputDevice'::__l2::<lambda_1>::operator()
            (&local_res10,&SRWLock->BufferedOutputDevices,
             &SRWLock->BufferedOutputDevicesCanBeUsedOnPanicThread);
  `UE::Private::FOutputDeviceRedirectorState::RemoveOutputDevice'::__l2::<lambda_1>::operator()
            (&local_res10,&SRWLock->UnbufferedOutputDevices,
             &SRWLock->UnbufferedOutputDevicesCanBeUsedOnPanicThread);
  aVar3 = SRWLock->OutputDevicesLockState;
  do {
    LOCK();
    aVar1 = SRWLock->OutputDevicesLockState;
    bVar4 = aVar3 == aVar1;
    if (bVar4) {
      SRWLock->OutputDevicesLockState = (atomic<unsigned_int>)((uint)aVar3 & 0xfffffffe);
      aVar1 = aVar3;
    }
    aVar3 = aVar1;
    UNLOCK();
  } while (!bVar4);
  if ((((uint)aVar3 & 1) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(LockState & 1) == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\OutputDeviceRedirector.cpp"
                         ,0x162,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  SRWLock->LockedThreadId = (atomic<unsigned_int>)0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x0001418f2c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// Serialize @ 1418f5df0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOutputDeviceRedirector::Serialize
          (FOutputDeviceRedirector *this,wchar_t *param_1,Type param_2,FName *param_3)

{
  Serialize(this,param_1,param_2,param_3,__real_bff0000000000000);
  return;
}

// Serialize @ 1418f5e20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOutputDeviceRedirector::Serialize
          (FOutputDeviceRedirector *this,wchar_t *param_1,Type param_2,FName *param_3,double param_4
          )

{
  atomic<unsigned_int> *paVar1;
  TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  atomic<unsigned_int> aVar5;
  FOutputDeviceRedirectorState *pFVar6;
  ForElementType<unsigned_int> FVar7;
  code *pcVar8;
  ulong64 _Size;
  bool bVar9;
  atomic<unsigned_int> aVar10;
  FOutputDevice *pFVar11;
  atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
  aVar12;
  size_t sVar13;
  void *_Dst;
  atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
  aVar14;
  ForElementType<unsigned_int> FVar15;
  atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
  aVar16;
  TEventCount<unsigned_int> *pTVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  undefined1 local_98 [4];
  atomic<unsigned_int> local_94;
  atomic<unsigned_int> local_90;
  FOutputDevice *local_88;
  FOutputDevice *local_80;
  FOutputDevicesReadScopeLock local_78;
  LARGE_INTEGER local_70;
  FOutputDevicesPrimaryScopeLock local_68 [2];
  
  aVar14 = (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
            )param_4;
  if (param_4 == __real_bff0000000000000) {
    QueryPerformanceCounter(&local_70);
    aVar14 = (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
              )(((double)local_70.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                __real_4170000000000000) - GStartTime);
  }
  local_78.State = (this->State).Ptr;
  LOCK();
  paVar1 = &(local_78.State)->OutputDevicesLockState;
  aVar10 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 2);
  UNLOCK();
  if (((uint)aVar10 & 1) != 0) {
    UE::Private::FOutputDevicesReadScopeLock::WaitForWriteLock(&local_78);
  }
  if (((((this->State).Ptr)->BufferedOutputDevices).ArrayNum == 0) && (GIsRequestingExit != false))
  {
    wprintf(L"%s\n");
    FGenericPlatformMisc::LocalPrint(param_1);
  }
  else {
    aVar10 = (atomic<unsigned_int>)GetCurrentThreadId();
    pFVar6 = (this->State).Ptr;
    uVar19 = 0;
    local_90 = pFVar6->PanicThreadId;
    pFVar22 = (pFVar6->UnbufferedOutputDevices).AllocatorInstance.Data;
    iVar4 = (pFVar6->UnbufferedOutputDevices).ArrayNum;
    pFVar3 = pFVar22 + (longlong)iVar4 * 8;
    local_94 = aVar10;
    while( true ) {
      if ((pFVar6->UnbufferedOutputDevices).ArrayNum != iVar4) {
        param_4._0_1_ = 0;
        `TCheckedPointerIterator<FOutputDevice_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&param_4);
      }
      if (pFVar22 == pFVar3) break;
      local_88 = *(FOutputDevice **)pFVar22;
      uVar21 = uVar19;
      if (aVar10 == local_90) {
        uVar21 = uVar19 + 1;
        if ((((int)uVar19 < 0) ||
            ((pFVar6->UnbufferedOutputDevicesCanBeUsedOnPanicThread).NumBits <= (int)uVar19)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar7 = (pFVar6->UnbufferedOutputDevicesCanBeUsedOnPanicThread).AllocatorInstance.
                SecondaryData;
        FVar15 = (ForElementType<unsigned_int>)
                 &pFVar6->UnbufferedOutputDevicesCanBeUsedOnPanicThread;
        if (FVar7 != (ForElementType<unsigned_int>)0x0) {
          FVar15 = FVar7;
        }
        uVar18 = uVar19 & 0x1f;
        if ((int)uVar19 < 0) {
          uVar19 = uVar19 + 0x1f;
        }
        iVar20 = (int)uVar19 >> 5;
        uVar19 = uVar21;
        if ((*(uint *)((longlong)FVar15 + (longlong)iVar20 * 4) >> uVar18 & 1) != 0)
        goto LAB_1418f5fd8;
      }
      else {
LAB_1418f5fd8:
        pFVar11 = UE::Core::Private::DereferenceIfNecessary<FOutputDevice,FOutputDevice_*_&>
                            (&local_88);
        (**(code **)(pFVar11->_padding_ + 8))(pFVar11,param_1,param_2,param_3,aVar14);
        uVar19 = uVar21;
      }
      pFVar22 = pFVar22 + 8;
    }
    uVar19 = 0;
    pFVar6 = (this->State).Ptr;
    if ((pFVar6->bEnableBacklog != false) &&
       (pFVar6->PanicThreadId == (atomic<unsigned_int>)0xffffffff)) {
      UE::Private::FOutputDeviceRedirectorState::AddToBacklog
                ((this->State).Ptr,param_1,param_2,param_3,(double)aVar14);
    }
    aVar10 = local_94;
    if ((local_94 == ((this->State).Ptr)->PrimaryThreadId) &&
       (pFVar6 = (this->State).Ptr, (pFVar6->BufferedOutputDevices).ArrayNum != 0)) {
      UE::Private::FOutputDevicesPrimaryScopeLock::FOutputDevicesPrimaryScopeLock(local_68,pFVar6);
      if (local_68[0].bLocked != false) {
        if (aVar10 == ((this->State).Ptr)->PrimaryThreadId) {
          UE::Private::FOutputDeviceRedirectorState::FlushBufferedItems((this->State).Ptr);
          pFVar6 = (this->State).Ptr;
          aVar5 = pFVar6->PanicThreadId;
          pFVar22 = (pFVar6->BufferedOutputDevices).AllocatorInstance.Data;
          iVar4 = (pFVar6->BufferedOutputDevices).ArrayNum;
          pFVar3 = pFVar22 + (longlong)iVar4 * 8;
          while( true ) {
            if ((pFVar6->BufferedOutputDevices).ArrayNum != iVar4) {
              local_98[0] = 0;
              `TCheckedPointerIterator<FOutputDevice_*_const,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_98);
            }
            if (pFVar22 == pFVar3) break;
            local_80 = *(FOutputDevice **)pFVar22;
            uVar21 = uVar19;
            if (aVar10 == aVar5) {
              uVar21 = uVar19 + 1;
              if ((((int)uVar19 < 0) ||
                  ((pFVar6->BufferedOutputDevicesCanBeUsedOnPanicThread).NumBits <= (int)uVar19)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5c6,L""), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar7 = (pFVar6->BufferedOutputDevicesCanBeUsedOnPanicThread).AllocatorInstance.
                      SecondaryData;
              FVar15 = (ForElementType<unsigned_int>)
                       &pFVar6->BufferedOutputDevicesCanBeUsedOnPanicThread;
              if (FVar7 != (ForElementType<unsigned_int>)0x0) {
                FVar15 = FVar7;
              }
              uVar18 = uVar19 & 0x1f;
              if ((int)uVar19 < 0) {
                uVar19 = uVar19 + 0x1f;
              }
              iVar20 = (int)uVar19 >> 5;
              uVar19 = uVar21;
              if ((*(uint *)((longlong)FVar15 + (longlong)iVar20 * 4) >> uVar18 & 1) != 0)
              goto LAB_1418f6171;
            }
            else {
LAB_1418f6171:
              pFVar11 = UE::Core::Private::DereferenceIfNecessary<FOutputDevice,FOutputDevice_*_&>
                                  (&local_80);
              (**(code **)(pFVar11->_padding_ + 8))(pFVar11,param_1,param_2,param_3,aVar14);
              uVar19 = uVar21;
            }
            pFVar22 = pFVar22 + 8;
            aVar10 = local_94;
          }
          if (aVar10 == ((this->State).Ptr)->PanicThreadId) {
                    /* WARNING: Subroutine does not return */
            Flush(this);
          }
          if (local_68[0].bLocked != false) {
            (local_68[0].State)->LockedThreadId = (atomic<unsigned_int>)0xffffffff;
          }
          if (local_68[0].bNeedsUnlock != false) {
            ReleaseSRWLockExclusive((PSRWLOCK)local_68[0].State);
          }
          goto LAB_1418f62fd;
        }
        (local_68[0].State)->LockedThreadId = (atomic<unsigned_int>)0xffffffff;
      }
      if (local_68[0].bNeedsUnlock != false) {
        ReleaseSRWLockExclusive((PSRWLOCK)local_68[0].State);
      }
    }
    pFVar6 = (this->State).Ptr;
    aVar12 = (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
              )TLinearAllocatorBase<UE::Private::FOutputDeviceBlockAllocationTag,0>::Malloc(0x68,8);
    *(atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
      *)((longlong)aVar12 + 8) = aVar14;
    *(atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
      *)aVar12 = (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
                  )0x0;
    sVar13 = wcslen(param_1);
    _Size = (longlong)((int)sVar13 + 1) * 2;
    _Dst = TLinearAllocatorBase<UE::Private::FOutputDeviceBlockAllocationTag,0>::Malloc(_Size,2);
    aVar14 = (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
              )memcpy(_Dst,param_1,_Size);
    *(atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
      *)((longlong)aVar12 + 0x10) = aVar14;
    *(FName *)((longlong)aVar12 + 0x18) = *param_3;
    *(Type *)((longlong)aVar12 + 0x20) = param_2;
    *(undefined1 *)((longlong)aVar12 + 0x60) = 0;
    aVar14 = (pFVar6->BufferedItems).Head;
    do {
      aVar16 = aVar14;
      *(atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
        *)aVar12 = aVar16;
      pTVar2 = &pFVar6->BufferedItems;
      LOCK();
      aVar14 = pTVar2->Head;
      bVar9 = aVar16 == aVar14;
      if (bVar9) {
        pTVar2->Head = aVar12;
        aVar14 = aVar16;
      }
      UNLOCK();
    } while (!bVar9);
    if (aVar16 == (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
                   )0x0) {
      pTVar17 = &((this->State).Ptr)->ThreadWakeEvent;
      LOCK();
      aVar10 = pTVar17->Count;
      pTVar17->Count = pTVar17->Count;
      UNLOCK();
      if (((uint)aVar10 & 1) != 0) {
        LOCK();
        bVar9 = aVar10 == pTVar17->Count;
        if (bVar9) {
          pTVar17->Count = (atomic<unsigned_int>)((int)aVar10 + 1);
        }
        UNLOCK();
        if (bVar9) {
          UE::ParkingLot::WakeAll(pTVar17);
        }
      }
    }
  }
LAB_1418f62fd:
  LOCK();
  (local_78.State)->OutputDevicesLockState =
       (atomic<unsigned_int>)((int)(local_78.State)->OutputDevicesLockState + -2);
  UNLOCK();
  return;
}

// SerializeBacklog @ 1418f6b50

void __thiscall
FOutputDeviceRedirector::SerializeBacklog(FOutputDeviceRedirector *this,FOutputDevice *param_1)

{
  return;
}

// SerializeBacklogForCrash @ 1418f6c30

void __thiscall
FOutputDeviceRedirector::SerializeBacklogForCrash
          (FOutputDeviceRedirector *this,TNotNull<FOutputDevice_*> param_1)

{
  UE::Private::FOutputDeviceRedirectorState::SerializeBacklog((this->State).Ptr,param_1);
  return;
}

// SerializeRecord @ 1418f7f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOutputDeviceRedirector::SerializeRecord(FOutputDeviceRedirector *this,FLogRecord *param_1)

{
  atomic<unsigned_int> *paVar1;
  TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  atomic<unsigned_int> aVar4;
  int iVar5;
  FOutputDeviceRedirectorState *pFVar6;
  ForElementType<unsigned_int> FVar7;
  code *pcVar8;
  bool bVar9;
  atomic<unsigned_int> aVar10;
  FOutputDevice *pFVar11;
  atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
  aVar12;
  atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
  aVar13;
  ForElementType<unsigned_int> FVar14;
  atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
  aVar15;
  TEventCount<unsigned_int> *pTVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FOutputDevice *local_70;
  FOutputDevice *local_68;
  FOutputDevicesReadScopeLock local_60;
  FOutputDevicesPrimaryScopeLock local_58;
  
  local_60.State = (this->State).Ptr;
  LOCK();
  paVar1 = &(local_60.State)->OutputDevicesLockState;
  aVar4 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 2);
  UNLOCK();
  if (((uint)aVar4 & 1) != 0) {
    UE::Private::FOutputDevicesReadScopeLock::WaitForWriteLock(&local_60);
  }
  aVar10 = (atomic<unsigned_int>)GetCurrentThreadId();
  pFVar6 = (this->State).Ptr;
  uVar18 = 0;
  aVar4 = pFVar6->PanicThreadId;
  pFVar21 = (pFVar6->UnbufferedOutputDevices).AllocatorInstance.Data;
  iVar5 = (pFVar6->UnbufferedOutputDevices).ArrayNum;
  pFVar3 = pFVar21 + (longlong)iVar5 * 8;
  while( true ) {
    if ((pFVar6->UnbufferedOutputDevices).ArrayNum != iVar5) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FOutputDevice_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar21 == pFVar3) break;
    local_70 = *(FOutputDevice **)pFVar21;
    uVar20 = uVar18;
    if (aVar10 == aVar4) {
      uVar20 = uVar18 + 1;
      if ((((int)uVar18 < 0) ||
          ((pFVar6->UnbufferedOutputDevicesCanBeUsedOnPanicThread).NumBits <= (int)uVar18)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar7 = (pFVar6->UnbufferedOutputDevicesCanBeUsedOnPanicThread).AllocatorInstance.
              SecondaryData;
      FVar14 = (ForElementType<unsigned_int>)&pFVar6->UnbufferedOutputDevicesCanBeUsedOnPanicThread;
      if (FVar7 != (ForElementType<unsigned_int>)0x0) {
        FVar14 = FVar7;
      }
      uVar17 = uVar18 & 0x1f;
      if ((int)uVar18 < 0) {
        uVar18 = uVar18 + 0x1f;
      }
      iVar19 = (int)uVar18 >> 5;
      uVar18 = uVar20;
      if ((*(uint *)((longlong)FVar14 + (longlong)iVar19 * 4) >> uVar17 & 1) != 0)
      goto LAB_1418f8016;
    }
    else {
LAB_1418f8016:
      pFVar11 = UE::Core::Private::DereferenceIfNecessary<FOutputDevice,FOutputDevice_*_&>
                          (&local_70);
      (**(code **)(pFVar11->_padding_ + 0x18))(pFVar11,param_1);
      uVar18 = uVar20;
    }
    pFVar21 = pFVar21 + 8;
  }
  uVar18 = 0;
  pFVar6 = (this->State).Ptr;
  if ((pFVar6->bEnableBacklog != false) &&
     (pFVar6->PanicThreadId == (atomic<unsigned_int>)0xffffffff)) {
    UE::Private::FOutputDeviceRedirectorState::AddToBacklog((this->State).Ptr,param_1);
  }
  if ((aVar10 == ((this->State).Ptr)->PrimaryThreadId) &&
     (pFVar6 = (this->State).Ptr, (pFVar6->BufferedOutputDevices).ArrayNum != 0)) {
    UE::Private::FOutputDevicesPrimaryScopeLock::FOutputDevicesPrimaryScopeLock(&local_58,pFVar6);
    if (local_58.bLocked != false) {
      if (aVar10 == ((this->State).Ptr)->PrimaryThreadId) {
        UE::Private::FOutputDeviceRedirectorState::FlushBufferedItems((this->State).Ptr);
        pFVar6 = (this->State).Ptr;
        aVar4 = pFVar6->PanicThreadId;
        pFVar21 = (pFVar6->BufferedOutputDevices).AllocatorInstance.Data;
        iVar5 = (pFVar6->BufferedOutputDevices).ArrayNum;
        pFVar3 = pFVar21 + (longlong)iVar5 * 8;
        while( true ) {
          if ((pFVar6->BufferedOutputDevices).ArrayNum != iVar5) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<FOutputDevice_*_const,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res20);
          }
          if (pFVar21 == pFVar3) break;
          local_68 = *(FOutputDevice **)pFVar21;
          uVar20 = uVar18;
          if (aVar10 == aVar4) {
            uVar20 = uVar18 + 1;
            if ((((int)uVar18 < 0) ||
                ((pFVar6->BufferedOutputDevicesCanBeUsedOnPanicThread).NumBits <= (int)uVar18)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5c6,L""), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FVar7 = (pFVar6->BufferedOutputDevicesCanBeUsedOnPanicThread).AllocatorInstance.
                    SecondaryData;
            FVar14 = (ForElementType<unsigned_int>)
                     &pFVar6->BufferedOutputDevicesCanBeUsedOnPanicThread;
            if (FVar7 != (ForElementType<unsigned_int>)0x0) {
              FVar14 = FVar7;
            }
            uVar17 = uVar18 & 0x1f;
            if ((int)uVar18 < 0) {
              uVar18 = uVar18 + 0x1f;
            }
            iVar19 = (int)uVar18 >> 5;
            uVar18 = uVar20;
            if ((*(uint *)((longlong)FVar14 + (longlong)iVar19 * 4) >> uVar17 & 1) != 0)
            goto LAB_1418f8187;
          }
          else {
LAB_1418f8187:
            pFVar11 = UE::Core::Private::DereferenceIfNecessary<FOutputDevice,FOutputDevice_*_&>
                                (&local_68);
            (**(code **)(pFVar11->_padding_ + 0x18))(pFVar11,param_1);
            uVar18 = uVar20;
          }
          pFVar21 = pFVar21 + 8;
        }
        if (aVar10 == ((this->State).Ptr)->PanicThreadId) {
                    /* WARNING: Subroutine does not return */
          Flush(this);
        }
        if (local_58.bLocked != false) {
          (local_58.State)->LockedThreadId = (atomic<unsigned_int>)0xffffffff;
        }
        if (local_58.bNeedsUnlock != false) {
          ReleaseSRWLockExclusive((PSRWLOCK)local_58.State);
        }
        goto LAB_1418f828d;
      }
      (local_58.State)->LockedThreadId = (atomic<unsigned_int>)0xffffffff;
    }
    if (local_58.bNeedsUnlock != false) {
      ReleaseSRWLockExclusive((PSRWLOCK)local_58.State);
    }
  }
  pFVar6 = (this->State).Ptr;
  aVar12 = (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
            )TLinearAllocatorBase<UE::Private::FOutputDeviceBlockAllocationTag,0>::Malloc(0x68,8);
  *(atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
    *)aVar12 = (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
                )0x0;
  UE::FLogRecord::FLogRecord((FLogRecord *)((longlong)aVar12 + 8),param_1);
  *(undefined1 *)((longlong)aVar12 + 0x60) = 1;
  aVar13 = (pFVar6->BufferedItems).Head;
  do {
    aVar15 = aVar13;
    *(atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
      *)aVar12 = aVar15;
    pTVar2 = &pFVar6->BufferedItems;
    LOCK();
    aVar13 = pTVar2->Head;
    bVar9 = aVar15 == aVar13;
    if (bVar9) {
      pTVar2->Head = aVar12;
      aVar13 = aVar15;
    }
    UNLOCK();
  } while (!bVar9);
  if (aVar15 == (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
                 )0x0) {
    pTVar16 = &((this->State).Ptr)->ThreadWakeEvent;
    LOCK();
    aVar4 = pTVar16->Count;
    pTVar16->Count = pTVar16->Count;
    UNLOCK();
    if (((uint)aVar4 & 1) != 0) {
      LOCK();
      bVar9 = aVar4 == pTVar16->Count;
      if (bVar9) {
        pTVar16->Count = (atomic<unsigned_int>)((int)aVar4 + 1);
      }
      UNLOCK();
      if (bVar9) {
        UE::ParkingLot::WakeAll(pTVar16);
      }
    }
  }
LAB_1418f828d:
  LOCK();
  (local_60.State)->OutputDevicesLockState =
       (atomic<unsigned_int>)((int)(local_60.State)->OutputDevicesLockState + -2);
  UNLOCK();
  return;
}

// SetCurrentThreadAsPrimaryThread @ 1418f8c10

void __thiscall
FOutputDeviceRedirector::SetCurrentThreadAsPrimaryThread(FOutputDeviceRedirector *this)

{
  FOutputDeviceRedirectorState *SRWLock;
  bool bVar1;
  atomic<unsigned_int> aVar2;
  atomic<unsigned_int> aVar3;
  
  aVar2 = (atomic<unsigned_int>)GetCurrentThreadId();
  SRWLock = (this->State).Ptr;
  bVar1 = false;
  aVar3 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 == SRWLock->LockedThreadId) {
    return;
  }
  if ((SRWLock->PanicThreadId != (atomic<unsigned_int>)0xffffffff) &&
     (SRWLock->PanicThreadId != aVar3)) {
    return;
  }
  if (aVar3 != SRWLock->PanicThreadId) {
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    if ((aVar3 == SRWLock->LockedThreadId) ||
       ((SRWLock->PanicThreadId != (atomic<unsigned_int>)0xffffffff &&
        (SRWLock->PanicThreadId != aVar3)))) goto LAB_1418f8cf0;
    bVar1 = true;
  }
  SRWLock->LockedThreadId = aVar3;
  if (((this->State).Ptr)->PrimaryThreadId != aVar2) {
    ((this->State).Ptr)->PrimaryThreadId = aVar2;
    UE::Private::FOutputDeviceRedirectorState::FlushBufferedItems((this->State).Ptr);
    SRWLock->LockedThreadId = (atomic<unsigned_int>)0xffffffff;
    if (bVar1) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    UE::Private::FOutputDeviceRedirectorState::TryStopThread((this->State).Ptr);
    return;
  }
  SRWLock->LockedThreadId = (atomic<unsigned_int>)0xffffffff;
  if (!bVar1) {
    return;
  }
LAB_1418f8cf0:
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// TearDown @ 1418fa1a0

void __thiscall FOutputDeviceRedirector::TearDown(FOutputDeviceRedirector *this)

{
  FOutputDeviceRedirectorState *SRWLock;
  bool bVar1;
  atomic<unsigned_int> aVar2;
  atomic<unsigned_int> aVar3;
  
  aVar2 = (atomic<unsigned_int>)GetCurrentThreadId();
  SRWLock = (this->State).Ptr;
  bVar1 = false;
  aVar3 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar3 == SRWLock->LockedThreadId) ||
     ((SRWLock->PanicThreadId != (atomic<unsigned_int>)0xffffffff &&
      (SRWLock->PanicThreadId != aVar3)))) goto LAB_1418fa28b;
  if (aVar3 == SRWLock->PanicThreadId) {
LAB_1418fa227:
    SRWLock->LockedThreadId = aVar3;
    if (((this->State).Ptr)->PrimaryThreadId != aVar2) {
      ((this->State).Ptr)->PrimaryThreadId = aVar2;
      UE::Private::FOutputDeviceRedirectorState::FlushBufferedItems((this->State).Ptr);
      SRWLock->LockedThreadId = (atomic<unsigned_int>)0xffffffff;
      if (bVar1) {
        ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      }
      UE::Private::FOutputDeviceRedirectorState::TryStopThread((this->State).Ptr);
      goto LAB_1418fa28b;
    }
    SRWLock->LockedThreadId = (atomic<unsigned_int>)0xffffffff;
    if (!bVar1) goto LAB_1418fa28b;
  }
  else {
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    if ((aVar3 != SRWLock->LockedThreadId) &&
       ((SRWLock->PanicThreadId == (atomic<unsigned_int>)0xffffffff ||
        (SRWLock->PanicThreadId == aVar3)))) {
      bVar1 = true;
      goto LAB_1418fa227;
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
LAB_1418fa28b:
                    /* WARNING: Subroutine does not return */
  Flush(this);
}

// TryStartDedicatedPrimaryThread @ 1418fdc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FOutputDeviceRedirector::TryStartDedicatedPrimaryThread(FOutputDeviceRedirector *this)

{
  atomic<bool> aVar1;
  FOutputDeviceRedirectorState *pFVar2;
  bool bVar3;
  FThread *pFVar4;
  undefined ***pppuVar5;
  undefined1 auStackY_a8 [32];
  FThreadAffinity local_68;
  FThread local_58;
  code *local_48 [2];
  undefined **local_38;
  FOutputDeviceRedirectorState *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  bVar3 = FApp::ShouldUseThreadingForPerformance();
  if (bVar3) {
    pFVar2 = (this->State).Ptr;
    AcquireSRWLockExclusive((PSRWLOCK)&pFVar2->ThreadLock);
    LOCK();
    aVar1 = pFVar2->bThreadStarted;
    pFVar2->bThreadStarted = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar1 == (atomic<bool>)0x0) {
      local_20 = (undefined ***)0x0;
      local_68.ProcessorGroup = 0;
      local_68._10_6_ = 0;
      local_38 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UE::Private::FOutputDeviceRedirectorState::TryStartThread'::`5'::<lambda_1>,1,0>
                  ::_vftable_;
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UE::Private::FOutputDeviceRedirectorState::TryStartThread'::__l5::<lambda_1>,void>
                    ::Call;
      local_68.ThreadAffinityMask = 0xffffffffffffffff;
      local_30 = pFVar2;
      pFVar4 = ::FThread::FThread(&local_58,L"OutputDeviceRedirector",
                                  (TUniqueFunction<void___cdecl(void)> *)local_48,0,TPri_Normal,
                                  &local_68,NonForkable);
      ::FThread::operator=(&pFVar2->Thread,pFVar4);
      ::FThread::~FThread(&local_58);
      if (local_48[0] != (code *)0x0) {
        pppuVar5 = &local_38;
        if (local_20 != (undefined ***)0x0) {
          pppuVar5 = local_20;
        }
        (*(code *)(*pppuVar5)[2])();
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&pFVar2->ThreadLock);
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

