// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 179

// ExecuteTask @ 141493f40

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FTaskGraphCompatibilityImplementation::TriggerEventWhenTasksComplete'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141493f4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 0xd8) + 0x10))();
  return;
}

// ExecuteTask @ 141493f60

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::WaitAny<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>'::__l12::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  byte bVar1;
  byte *pbVar2;
  
  *(undefined4 *)(*(longlong *)((longlong)this + 0xd8) + 4) = *(undefined4 *)((longlong)this + 0xe8)
  ;
  pbVar2 = *(byte **)((longlong)this + 0xd8);
  LOCK();
  bVar1 = *pbVar2;
  *pbVar2 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll(pbVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 1417cbd60

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::FIoDispatcherChunkBlockDecoder::LaunchDecodeTask'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  longlong *plVar1;
  
  `UE::FIoDispatcherChunkBlockDecoder::LaunchDecodeTask'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xe0));
  if (*(longlong *)((longlong)this + 0x140) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x150);
    if (*(longlong **)((longlong)this + 0x168) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x168);
    }
                    /* WARNING: Could not recover jumptable at 0x0001417cbd99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ExecuteTask @ 1417cbdb0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FIoStoreReaderImpl::StartAsyncRead'::__l2::<lambda_1>,void,void>::ExecuteTask
          (void *this)

{
  `FIoStoreReaderImpl::StartAsyncRead'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 1417cbdd0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``FIoStoreReaderImpl::ReadAsync'::__l2::<lambda_3>::operator()'::__l5::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  ``FIoStoreReaderImpl::ReadAsync'::__l2::<lambda_3>::operator()'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 1417cbdf0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FIoStoreReaderImpl::ReadAsync'::__l5::<lambda_1>,TIoStatusOr<FIoBuffer>,void>::
ExecuteTask(void *this)

{
  `FIoStoreReaderImpl::ReadAsync'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0xf0),(TIoStatusOr<FIoBuffer> *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 1417cbe10

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FIoStoreReaderImpl::ReadAsync'::__l8::<lambda_2>,TIoStatusOr<FIoBuffer>,void>::
ExecuteTask(void *this)

{
  wchar_t *pwVar1;
  TSharedString<wchar_t> TVar2;
  
  TVar2.Chars = FIoStatus::Unknown.ErrorMessage.Chars;
  *(wchar_t **)((longlong)this + 0xd8) = FIoStatus::Unknown.ErrorMessage.Chars;
  if (TVar2.Chars != (wchar_t *)0x0) {
    LOCK();
    pwVar1 = TVar2.Chars + -4;
    *(int *)pwVar1 = *(int *)pwVar1 + 1;
    UNLOCK();
  }
  *(EIoErrorCode *)((longlong)this + 0xe0) = FIoStatus::Unknown.ErrorCode;
  *(uint *)((longlong)this + 0xe4) = FIoStatus::Unknown.SystemErrorCode;
  return;
}

// ExecuteTask @ 1417cbe50

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FIoStoreReaderImpl::ReadAsync'::__l2::<lambda_3>,TIoStatusOr<FIoBuffer>,void>::
ExecuteTask(void *this)

{
  `FIoStoreReaderImpl::ReadAsync'::__l2::<lambda_3>::operator()
            ((void *)((longlong)this + 0xf0),(TIoStatusOr<FIoBuffer> *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 14186cb80

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::ConfigUtilities::SaveCVarForNextBoot'::__l2::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  void *pvVar1;
  
  `UE::ConfigUtilities::SaveCVarForNextBoot'::__l2::<lambda_1>::operator()
            ((undefined8 *)((longlong)this + 0xd8));
  if (*(void **)((longlong)this + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xe8));
  }
  pvVar1 = *(void **)((longlong)this + 0xd8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// ExecuteTask @ 1418da100

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`MTAccessDetector_Private::FParallel::FParallel<`FMRSWRecursiveAccessDetectorMultiThreadTest::RunTest'::__l3::<lambda_1>,`FMRSWRecursiveAccessDetectorMultiThreadTest::RunTest'::__l3::<lambda_2>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  atomic<bool> aVar1;
  longlong lVar2;
  FTaskBase *pFVar3;
  atomic<unsigned___int64> *this_00;
  
  FMRSWRecursiveAccessDetector::AcquireReadAccess
            (*(FMRSWRecursiveAccessDetector **)((longlong)this + 0xe0));
  lVar2 = *(longlong *)(*(longlong *)((longlong)this + 0xd8) + 8);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0xd0) == '\0')) {
    pFVar3 = *(FTaskBase **)(*(longlong *)((longlong)this + 0xd8) + 8);
    LOCK();
    aVar1 = pFVar3->TaskTriggered;
    pFVar3->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar1 == (atomic<bool>)0x0) {
      LOCK();
      pFVar3->RefCount = (atomic<unsigned_int>)((int)pFVar3->RefCount + 1);
      UNLOCK();
      FTaskBase::TryLaunch(pFVar3,0xd8);
    }
  }
  pFVar3 = *(FTaskBase **)(*(longlong *)((longlong)this + 0xd8) + 0x10);
  if (pFVar3 != (FTaskBase *)0x0) {
    FTaskBase::Wait(pFVar3);
  }
  this_00 = *(atomic<unsigned___int64> **)((longlong)this + 0xe8);
  FMRSWRecursiveAccessDetector::RemoveReaderFromTls((FMRSWRecursiveAccessDetector *)this_00);
  LOCK();
  *this_00 = (atomic<unsigned___int64>)((longlong)*this_00 + -1);
  UNLOCK();
  return;
}

// ExecuteTask @ 1418da190

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`MTAccessDetector_Private::FParallel::FParallel<`FMRSWRecursiveAccessDetectorMultiThreadTest::RunTest'::__l4::<lambda_3>,`FMRSWRecursiveAccessDetectorMultiThreadTest::RunTest'::__l4::<lambda_4>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  atomic<bool> aVar1;
  longlong lVar2;
  FTaskBase *pFVar3;
  atomic<unsigned___int64> *this_00;
  
  FMRSWRecursiveAccessDetector::AcquireReadAccess
            (*(FMRSWRecursiveAccessDetector **)((longlong)this + 0xe0));
  lVar2 = *(longlong *)(*(longlong *)((longlong)this + 0xd8) + 8);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0xd0) == '\0')) {
    pFVar3 = *(FTaskBase **)(*(longlong *)((longlong)this + 0xd8) + 8);
    LOCK();
    aVar1 = pFVar3->TaskTriggered;
    pFVar3->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar1 == (atomic<bool>)0x0) {
      LOCK();
      pFVar3->RefCount = (atomic<unsigned_int>)((int)pFVar3->RefCount + 1);
      UNLOCK();
      FTaskBase::TryLaunch(pFVar3,0xd8);
    }
  }
  pFVar3 = *(FTaskBase **)(*(longlong *)((longlong)this + 0xd8) + 0x10);
  if (pFVar3 != (FTaskBase *)0x0) {
    FTaskBase::Wait(pFVar3);
  }
  this_00 = *(atomic<unsigned___int64> **)((longlong)this + 0xe8);
  FMRSWRecursiveAccessDetector::RemoveReaderFromTls((FMRSWRecursiveAccessDetector *)this_00);
  LOCK();
  *this_00 = (atomic<unsigned___int64>)((longlong)*this_00 + -1);
  UNLOCK();
  return;
}

// ExecuteTask @ 1418da220

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`MTAccessDetector_Private::FParallel::FParallel<`FMRSWRecursiveAccessDetectorMultiThreadTest::RunTest'::__l5::<lambda_5>,`FMRSWRecursiveAccessDetectorMultiThreadTest::RunTest'::__l5::<lambda_6>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  atomic<bool> aVar1;
  longlong lVar2;
  FTaskBase *pFVar3;
  
  FMRSWRecursiveAccessDetector::AcquireWriteAccess
            (*(FMRSWRecursiveAccessDetector **)((longlong)this + 0xe0));
  lVar2 = *(longlong *)(*(longlong *)((longlong)this + 0xd8) + 8);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0xd0) == '\0')) {
    pFVar3 = *(FTaskBase **)(*(longlong *)((longlong)this + 0xd8) + 8);
    LOCK();
    aVar1 = pFVar3->TaskTriggered;
    pFVar3->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar1 == (atomic<bool>)0x0) {
      LOCK();
      pFVar3->RefCount = (atomic<unsigned_int>)((int)pFVar3->RefCount + 1);
      UNLOCK();
      FTaskBase::TryLaunch(pFVar3,0xd8);
    }
  }
  pFVar3 = *(FTaskBase **)(*(longlong *)((longlong)this + 0xd8) + 0x10);
  if (pFVar3 != (FTaskBase *)0x0) {
    FTaskBase::Wait(pFVar3);
  }
  FMRSWRecursiveAccessDetector::ReleaseWriteAccess
            (*(FMRSWRecursiveAccessDetector **)((longlong)this + 0xe8));
  return;
}

// ExecuteTask @ 1418da2a0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`RWAccessDetectorConcurrentReadersPerfTest<1000000,FRWAccessDetector>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `RWAccessDetectorConcurrentReadersPerfTest<1000000,FRWAccessDetector>'::__l2::<lambda_1>::
  operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 1418da2c0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`RWAccessDetectorConcurrentReadersPerfTest<1000000,FRWFullyRecursiveAccessDetector>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `RWAccessDetectorConcurrentReadersPerfTest<1000000,FRWFullyRecursiveAccessDetector>'::__l2::
  <lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 1418da2e0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`RWAccessDetectorConcurrentReadersPerfTest<1000000,FRWRecursiveAccessDetector>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `RWAccessDetectorConcurrentReadersPerfTest<1000000,FRWRecursiveAccessDetector>'::__l2::<lambda_1>
  ::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 1418da300

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`RWAccessDetectorConcurrentReadersPerfTest<1000000,FMRSWRecursiveAccessDetector>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  atomic<unsigned___int64> *this_00;
  longlong lVar1;
  
  lVar1 = 1000000;
  do {
    FMRSWRecursiveAccessDetector::AcquireReadAccess
              (*(FMRSWRecursiveAccessDetector **)((longlong)this + 0xd8));
    this_00 = *(atomic<unsigned___int64> **)((longlong)this + 0xd8);
    FMRSWRecursiveAccessDetector::RemoveReaderFromTls((FMRSWRecursiveAccessDetector *)this_00);
    LOCK();
    *this_00 = (atomic<unsigned___int64>)((longlong)*this_00 + -1);
    UNLOCK();
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}

// ExecuteTask @ 1418da360

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 1419f6ef0

void __thiscall
UE::Tasks::Private::TExecutableTaskBase<`GetPermanentStats'::__l2::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  GetPermanentStats_StatsThread
            (*(TArray<FStatMessage,TSizedDefaultAllocator<32>_> **)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 1419f6f10

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FThreadStats::SendMessage_Async'::__l5::<lambda_1>,void,void>::ExecuteTask
          (void *this)

{
  FStatsThread *this_00;
  
  this_00 = FStatsThread::Get();
  FStatsThread::StatMessage(this_00,*(FStatPacket **)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 1419f6f40

void __thiscall
UE::Tasks::Private::TExecutableTaskBase<`FLastFrameBarrier::Wait'::__l5::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 1419f6f50

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Stats::DirectStatsCommand'::__l146::<lambda_1>,void,void>::ExecuteTask
          (void *this)

{
  bool bVar1;
  FOutputDevice *pFVar2;
  FScriptContainerElement *pFVar3;
  FString *pFVar4;
  FString local_18;
  
  pFVar2 = *(FOutputDevice **)((longlong)this + 0xf0);
  bVar1 = *(bool *)((longlong)this + 0xe8);
  pFVar4 = ::FString::FString(&local_18,(FString *)((longlong)this + 0xd8));
  StatCmd(pFVar4,bVar1,pFVar2);
  pFVar3 = (((FString *)((longlong)this + 0xd8))->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// ExecuteTask @ 141a7ea20

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::Private::TryWaitOnNamedThread'::__l5::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141a7ea30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 0xe0) + 0x58))
            (*(longlong **)((longlong)this + 0xe0),*(undefined4 *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141c00c20

void __thiscall
UE::Tasks::Private::TExecutableTaskBase<`FTSTickerTest::TestBody'::__l60::<lambda_10>,void,void>::
ExecuteTask(void *this)

{
  `FTSTickerTest::TestBody'::__l60::<lambda_10>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141c00c40

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l71::<lambda_16>,void,void>
::ExecuteTask(void *this)

{
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  atomic<unsigned___int64> aVar3;
  FReadAccessScope local_28;
  
  this_00 = *(TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> **)((longlong)this + 0xd8);
  uVar1 = *(undefined8 *)((longlong)this + 0xe8);
  uVar2 = *(undefined8 *)((longlong)this + 0xe0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this_00,&local_28);
  if (*(int *)&this_00[2].AccessDetector.State == 0) {
    aVar3 = (atomic<unsigned___int64>)0x0;
  }
  else {
    aVar3 = this_00[1].AccessDetector.State;
  }
  (**(code **)(*(longlong *)aVar3 + 0x60))(aVar3,uVar2,uVar1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// ExecuteTask @ 141c00cb0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l71::<lambda_17>,void,void>
::ExecuteTask(void *this)

{
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  atomic<unsigned___int64> aVar3;
  FReadAccessScope local_28;
  
  this_00 = *(TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> **)((longlong)this + 0xd8);
  uVar1 = *(undefined8 *)((longlong)this + 0xe8);
  uVar2 = *(undefined8 *)((longlong)this + 0xe0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this_00,&local_28);
  if (*(int *)&this_00[2].AccessDetector.State == 0) {
    aVar3 = (atomic<unsigned___int64>)0x0;
  }
  else {
    aVar3 = this_00[1].AccessDetector.State;
  }
  (**(code **)(*(longlong *)aVar3 + 0x60))(aVar3,uVar2,uVar1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// ExecuteTask @ 141c00d20

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::Wait<TArray<UE::Tasks::FTaskEvent,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141c00d30

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TSDelegatesTest::FMulticastTSDelegateStressTest::TestBody'::__l3::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `UE::TSDelegatesTest::FMulticastTSDelegateStressTest::TestBody'::__l3::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141c00d50

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TSDelegatesTest::FUnicastTSDelegateStressTest::TestBody'::__l3::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `UE::TSDelegatesTest::FUnicastTSDelegateStressTest::TestBody'::__l3::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141c00d70

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TSDelegatesTest::FMulticastTSDelegateStressTest::TestBody'::__l3::<lambda_2>,void,void>
::ExecuteTask(void *this)

{
  `UE::TSDelegatesTest::FMulticastTSDelegateStressTest::TestBody'::__l3::<lambda_2>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141c00d90

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``FTSTickerTest::TestBody'::__l60::<lambda_10>::operator()'::__l4::<lambda_2>,void,void>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  TWeakPtr<FTSTicker::FElement,1> local_18;
  
  local_18.Object = *(FElement **)((longlong)this + 0xd8);
  local_18.WeakReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 0xe0);
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker(&local_18);
  plVar3 = *(longlong **)((longlong)this + 0xe0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000141c00dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ExecuteTask @ 141c00e00

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TSDelegatesTest::FUnicastTSDelegateStressTest::TestBody'::__l5::<lambda_2>,void,void>
::ExecuteTask(void *this)

{
  `UE::TSDelegatesTest::FUnicastTSDelegateStressTest::TestBody'::__l5::<lambda_2>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141c00e20

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l11::<lambda_2>,void,void>
::ExecuteTask(void *this)

{
  `UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l11::<lambda_2>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141c00e40

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l18::<lambda_3>,void,void>
::ExecuteTask(void *this)

{
  <lambda_1> local_res8 [32];
  
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
  AddLambda<__UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody_::__l18::<lambda_3>::operator()_::__l2::<lambda_1>_>
            (*(TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> **)
              ((longlong)this + 0xd8),local_res8);
  return;
}

// ExecuteTask @ 141c00e70

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l19::<lambda_3>,void,void>
::ExecuteTask(void *this)

{
  `UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l19::<lambda_3>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141c00e90

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l18::<lambda_4>,void,void>
::ExecuteTask(void *this)

{
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast
            (*(TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> **)
              ((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141c00eb0

void __thiscall
UE::Tasks::Private::TExecutableTaskBase<`FTSTickerTest::TestBody'::__l19::<lambda_4>,void,void>::
ExecuteTask(void *this)

{
  TWeakPtr<FTSTicker::FElement,1> local_18;
  
  FWindowsPlatformProcess::Sleep(__real_3dcccccd);
  local_18.Object = (FElement *)**(undefined8 **)((longlong)this + 0xe0);
  local_18.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)(*(undefined8 **)((longlong)this + 0xe0))[1];
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker(&local_18);
  return;
}

// ExecuteTask @ 141c00f00

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l12::<lambda_4>,void,void>
::ExecuteTask(void *this)

{
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  atomic<unsigned___int64> aVar1;
  FReadAccessScope local_28;
  
  this_00 = *(TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> **)((longlong)this + 0xd8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this_00,&local_28);
  if (*(int *)&this_00[2].AccessDetector.State == 0) {
    aVar1 = (atomic<unsigned___int64>)0x0;
  }
  else {
    aVar1 = this_00[1].AccessDetector.State;
  }
  (**(code **)(*(longlong *)aVar1 + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// ExecuteTask @ 141c00f50

void __thiscall
UE::Tasks::Private::TExecutableTaskBase<`FTSTickerTest::TestBody'::__l19::<lambda_5>,void,void>::
ExecuteTask(void *this)

{
  FTSTicker::Tick(*(FTSTicker **)((longlong)this + 0xd8),0.0);
  return;
}

// ExecuteTask @ 141c00f70

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l19::<lambda_6>,FDelegateHandle,void>
::ExecuteTask(void *this)

{
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
  AddLambda<__UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody_::__l19::<lambda_6>::operator()_::__l2::<lambda_1>_>
            (*(TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> **)
              ((longlong)this + 0xe0),(<lambda_1> *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141c00f90

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l13::<lambda_6>,void,void>
::ExecuteTask(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            (*(TDelegateBase<FNotThreadSafeDelegateMode> **)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141c00fb0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l19::<lambda_7>,void,void>
::ExecuteTask(void *this)

{
  `UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l19::<lambda_7>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141c00fd0

void __thiscall
UE::Tasks::Private::TExecutableTaskBase<`FTSTickerTest::TestBody'::__l58::<lambda_9>,void,void>::
ExecuteTask(void *this)

{
  char cVar1;
  
  cVar1 = **(char **)((longlong)this + 0xe0);
  while (cVar1 == '\0') {
    FTSTicker::Tick(*(FTSTicker **)((longlong)this + 0xd8),0.0);
    cVar1 = **(char **)((longlong)this + 0xe0);
  }
  return;
}

// ExecuteTask @ 141d78f40

void __thiscall
UE::Tasks::Private::TExecutableTaskBase<void_(__cdecl*)(void),void,void>::ExecuteTask
          (TExecutableTaskBase<void_(__cdecl*)(void),void,void> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141d78f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->TaskBodyStorage).Pad)();
  return;
}

// ExecuteTask @ 141d78f50

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::__l10::FFunctor,void,void>::
ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d78f60

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::__l16::<lambda_10>,void,void>::
ExecuteTask(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (**(char **)((longlong)this + 0xd8) == '\0') {
    **(undefined1 **)((longlong)this + 0xe0) = 1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!bSecondDone",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                     ,0x24b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  **(undefined1 **)((longlong)this + 0xe0) = 1;
  return;
}

// ExecuteTask @ 141d78fd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l29::<lambda_10>,void,void>
::ExecuteTask(void *this)

{
  EExtendedTaskPriority EVar1;
  FTaskBase *this_00;
  Type TVar2;
  byte bVar3;
  bool bVar4;
  Type TVar5;
  FTaskGraphInterface *pFVar6;
  Type TVar7;
  bool bVar8;
  LARGE_INTEGER LStackX_10;
  LARGE_INTEGER aLStackX_18 [2];
  LARGE_INTEGER LStack_28;
  undefined8 uStack_20;
  
  this_00 = (FTaskBase *)**(undefined8 **)((longlong)this + 0xd8);
  if (this_00 == (FTaskBase *)0x0) {
    return;
  }
  if (GTaskGraphAlwaysWaitWithNamedThreadSupport) {
LAB_141a99947:
    if ((this_00->Subsequents).bIsClosed == (atomic<bool>)0x0) {
      bVar8 = CpuChannel->Enabled < 0;
      if (!bVar8) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId210,"FTaskBase::WaitWithNamedThreadsSupport",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tasks\\TaskPrivate.cpp"
                   ,0xd2);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId210);
      }
      TaskTrace::FWaitingScope::FWaitingScope
                ((FWaitingScope *)&LStackX_10.s,(ulong64)this_00->TraceId);
      QueryPerformanceCounter(aLStackX_18);
      LStack_28 = aLStackX_18[0];
      uStack_20 = 0xffffffffffffffff;
      FTaskBase::TryRetractAndExecute(this_00,(FTimeout *)&LStack_28.s,0);
      if ((this_00->Subsequents).bIsClosed == (atomic<bool>)0x0) {
        bVar4 = TryWaitOnNamedThread(this_00);
        if (!bVar4) {
          QueryPerformanceCounter(aLStackX_18);
          LStack_28 = aLStackX_18[0];
          uStack_20 = 0xffffffffffffffff;
          FTaskBase::WaitImpl(this_00,(FTimeout *)&LStack_28.s);
        }
        TaskTrace::FWaitingScope::~FWaitingScope((FWaitingScope *)&LStackX_10.s);
        if (bVar8) {
          return;
        }
      }
      else {
        TaskTrace::FWaitingScope::~FWaitingScope((FWaitingScope *)&LStackX_10.s);
        if (bVar8) {
          return;
        }
      }
      FCpuProfilerTrace::OutputEndEvent();
    }
    return;
  }
  EVar1 = this_00->ExtendedPriority;
  if ('\x02' < (char)EVar1) {
    pFVar6 = FTaskGraphInterface::Get();
    bVar3 = (**(code **)((longlong)*pFVar6 + 0x10))(pFVar6,0);
    TVar7 = AnyNormalThreadNormalTask;
    if (bVar3 != AnyNormalThreadNormalTask) {
      TVar7 = (uint)bVar3;
    }
    if (TVar7 < NumThreadPriorities) {
      TVar5 = TranslatePriority(EVar1);
      TVar2 = AnyNormalThreadNormalTask;
      if ((TVar5 & AnyNormalThreadNormalTask) != AnyNormalThreadNormalTask) {
        TVar2 = TVar5 & AnyNormalThreadNormalTask;
      }
      if (TVar2 == TVar7) goto LAB_141a99947;
    }
  }
  QueryPerformanceCounter(&LStackX_10);
  LStack_28 = LStackX_10;
  uStack_20 = 0xffffffffffffffff;
  FTaskBase::WaitImpl(this_00,(FTimeout *)&LStack_28.s);
  return;
}

// ExecuteTask @ 141d78ff0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l111::<lambda_10>,void,void>::
ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79000

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::__l16::<lambda_11>,void,void>::
ExecuteTask(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (**(char **)((longlong)this + 0xd8) != '\0') {
    **(undefined1 **)((longlong)this + 0xe0) = 1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("bFirstDone",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                     ,0x24c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  **(undefined1 **)((longlong)this + 0xe0) = 1;
  return;
}

// ExecuteTask @ 141d79070

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l29::<lambda_11>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79080

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l111::<lambda_11>,void,void>::
ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79090

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l44::<lambda_12>,void,void>
::ExecuteTask(void *this)

{
  EExtendedTaskPriority EVar1;
  FTaskBase *this_00;
  Type TVar2;
  byte bVar3;
  bool bVar4;
  Type TVar5;
  FTaskGraphInterface *pFVar6;
  Type TVar7;
  bool bVar8;
  LARGE_INTEGER LStackX_10;
  LARGE_INTEGER aLStackX_18 [2];
  LARGE_INTEGER LStack_28;
  undefined8 uStack_20;
  
  this_00 = (FTaskBase *)**(undefined8 **)((longlong)this + 0xd8);
  if (this_00 == (FTaskBase *)0x0) {
    return;
  }
  if (GTaskGraphAlwaysWaitWithNamedThreadSupport) {
LAB_141a99947:
    if ((this_00->Subsequents).bIsClosed == (atomic<bool>)0x0) {
      bVar8 = CpuChannel->Enabled < 0;
      if (!bVar8) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId210,"FTaskBase::WaitWithNamedThreadsSupport",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tasks\\TaskPrivate.cpp"
                   ,0xd2);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId210);
      }
      TaskTrace::FWaitingScope::FWaitingScope
                ((FWaitingScope *)&LStackX_10.s,(ulong64)this_00->TraceId);
      QueryPerformanceCounter(aLStackX_18);
      LStack_28 = aLStackX_18[0];
      uStack_20 = 0xffffffffffffffff;
      FTaskBase::TryRetractAndExecute(this_00,(FTimeout *)&LStack_28.s,0);
      if ((this_00->Subsequents).bIsClosed == (atomic<bool>)0x0) {
        bVar4 = TryWaitOnNamedThread(this_00);
        if (!bVar4) {
          QueryPerformanceCounter(aLStackX_18);
          LStack_28 = aLStackX_18[0];
          uStack_20 = 0xffffffffffffffff;
          FTaskBase::WaitImpl(this_00,(FTimeout *)&LStack_28.s);
        }
        TaskTrace::FWaitingScope::~FWaitingScope((FWaitingScope *)&LStackX_10.s);
        if (bVar8) {
          return;
        }
      }
      else {
        TaskTrace::FWaitingScope::~FWaitingScope((FWaitingScope *)&LStackX_10.s);
        if (bVar8) {
          return;
        }
      }
      FCpuProfilerTrace::OutputEndEvent();
    }
    return;
  }
  EVar1 = this_00->ExtendedPriority;
  if ('\x02' < (char)EVar1) {
    pFVar6 = FTaskGraphInterface::Get();
    bVar3 = (**(code **)((longlong)*pFVar6 + 0x10))(pFVar6,0);
    TVar7 = AnyNormalThreadNormalTask;
    if (bVar3 != AnyNormalThreadNormalTask) {
      TVar7 = (uint)bVar3;
    }
    if (TVar7 < NumThreadPriorities) {
      TVar5 = TranslatePriority(EVar1);
      TVar2 = AnyNormalThreadNormalTask;
      if ((TVar5 & AnyNormalThreadNormalTask) != AnyNormalThreadNormalTask) {
        TVar2 = TVar5 & AnyNormalThreadNormalTask;
      }
      if (TVar2 == TVar7) goto LAB_141a99947;
    }
  }
  QueryPerformanceCounter(&LStackX_10);
  LStack_28 = LStackX_10;
  uStack_20 = 0xffffffffffffffff;
  FTaskBase::WaitImpl(this_00,(FTimeout *)&LStack_28.s);
  return;
}

// ExecuteTask @ 141d790b0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l120::<lambda_12>,`UE::TasksTests::FTasksBasicTest::TestBody'::__l119::FMoveConstructable,void>
::ExecuteTask(void *this)

{
  `UE::TasksTests::FTasksBasicTest::TestBody'::__l119::FMoveConstructable::FMoveConstructable
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141d790d0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l44::<lambda_13>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d790e0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l121::<lambda_13>,`UE::TasksTests::FTasksBasicTest::TestBody'::__l119::FMoveConstructable,void>
::ExecuteTask(void *this)

{
  `UE::TasksTests::FTasksBasicTest::TestBody'::__l119::FMoveConstructable::FMoveConstructable
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141d79100

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l59::<lambda_14>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79110

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l124::<lambda_14>,void,void>::
ExecuteTask(void *this)

{
  LOCK();
  **(undefined1 **)((longlong)this + 0xd8) = 1;
  UNLOCK();
  return;
}

// ExecuteTask @ 141d79130

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l59::<lambda_15>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79140

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l127::<lambda_15>,void,void>::
ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l67::<lambda_16>,void,void>
::ExecuteTask(void *this)

{
  EExtendedTaskPriority EVar1;
  FTaskBase *this_00;
  Type TVar2;
  byte bVar3;
  bool bVar4;
  Type TVar5;
  FTaskGraphInterface *pFVar6;
  Type TVar7;
  bool bVar8;
  LARGE_INTEGER LStackX_10;
  LARGE_INTEGER aLStackX_18 [2];
  LARGE_INTEGER LStack_28;
  undefined8 uStack_20;
  
  this_00 = (FTaskBase *)**(undefined8 **)((longlong)this + 0xd8);
  if (this_00 == (FTaskBase *)0x0) {
    return;
  }
  if (GTaskGraphAlwaysWaitWithNamedThreadSupport) {
LAB_141a99947:
    if ((this_00->Subsequents).bIsClosed == (atomic<bool>)0x0) {
      bVar8 = CpuChannel->Enabled < 0;
      if (!bVar8) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId210,"FTaskBase::WaitWithNamedThreadsSupport",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tasks\\TaskPrivate.cpp"
                   ,0xd2);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId210);
      }
      TaskTrace::FWaitingScope::FWaitingScope
                ((FWaitingScope *)&LStackX_10.s,(ulong64)this_00->TraceId);
      QueryPerformanceCounter(aLStackX_18);
      LStack_28 = aLStackX_18[0];
      uStack_20 = 0xffffffffffffffff;
      FTaskBase::TryRetractAndExecute(this_00,(FTimeout *)&LStack_28.s,0);
      if ((this_00->Subsequents).bIsClosed == (atomic<bool>)0x0) {
        bVar4 = TryWaitOnNamedThread(this_00);
        if (!bVar4) {
          QueryPerformanceCounter(aLStackX_18);
          LStack_28 = aLStackX_18[0];
          uStack_20 = 0xffffffffffffffff;
          FTaskBase::WaitImpl(this_00,(FTimeout *)&LStack_28.s);
        }
        TaskTrace::FWaitingScope::~FWaitingScope((FWaitingScope *)&LStackX_10.s);
        if (bVar8) {
          return;
        }
      }
      else {
        TaskTrace::FWaitingScope::~FWaitingScope((FWaitingScope *)&LStackX_10.s);
        if (bVar8) {
          return;
        }
      }
      FCpuProfilerTrace::OutputEndEvent();
    }
    return;
  }
  EVar1 = this_00->ExtendedPriority;
  if ('\x02' < (char)EVar1) {
    pFVar6 = FTaskGraphInterface::Get();
    bVar3 = (**(code **)((longlong)*pFVar6 + 0x10))(pFVar6,0);
    TVar7 = AnyNormalThreadNormalTask;
    if (bVar3 != AnyNormalThreadNormalTask) {
      TVar7 = (uint)bVar3;
    }
    if (TVar7 < NumThreadPriorities) {
      TVar5 = TranslatePriority(EVar1);
      TVar2 = AnyNormalThreadNormalTask;
      if ((TVar5 & AnyNormalThreadNormalTask) != AnyNormalThreadNormalTask) {
        TVar2 = TVar5 & AnyNormalThreadNormalTask;
      }
      if (TVar2 == TVar7) goto LAB_141a99947;
    }
  }
  QueryPerformanceCounter(&LStackX_10);
  LStack_28 = LStackX_10;
  uStack_20 = 0xffffffffffffffff;
  FTaskBase::WaitImpl(this_00,(FTimeout *)&LStack_28.s);
  return;
}

// ExecuteTask @ 141d79170

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l127::<lambda_16>,bool,void>::
ExecuteTask(void *this)

{
  *(undefined1 *)((longlong)this + 0xd8) = 0;
  return;
}

// ExecuteTask @ 141d79180

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l67::<lambda_17>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79190

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'[::A]::<lambda_17>,void,void>::
ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d791a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l82::<lambda_18>,void,void>
::ExecuteTask(void *this)

{
  EExtendedTaskPriority EVar1;
  FTaskBase *this_00;
  Type TVar2;
  byte bVar3;
  bool bVar4;
  Type TVar5;
  FTaskGraphInterface *pFVar6;
  Type TVar7;
  bool bVar8;
  LARGE_INTEGER LStackX_10;
  LARGE_INTEGER aLStackX_18 [2];
  LARGE_INTEGER LStack_28;
  undefined8 uStack_20;
  
  this_00 = (FTaskBase *)**(undefined8 **)((longlong)this + 0xd8);
  if (this_00 == (FTaskBase *)0x0) {
    return;
  }
  if (GTaskGraphAlwaysWaitWithNamedThreadSupport) {
LAB_141a99947:
    if ((this_00->Subsequents).bIsClosed == (atomic<bool>)0x0) {
      bVar8 = CpuChannel->Enabled < 0;
      if (!bVar8) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId210,"FTaskBase::WaitWithNamedThreadsSupport",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tasks\\TaskPrivate.cpp"
                   ,0xd2);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId210);
      }
      TaskTrace::FWaitingScope::FWaitingScope
                ((FWaitingScope *)&LStackX_10.s,(ulong64)this_00->TraceId);
      QueryPerformanceCounter(aLStackX_18);
      LStack_28 = aLStackX_18[0];
      uStack_20 = 0xffffffffffffffff;
      FTaskBase::TryRetractAndExecute(this_00,(FTimeout *)&LStack_28.s,0);
      if ((this_00->Subsequents).bIsClosed == (atomic<bool>)0x0) {
        bVar4 = TryWaitOnNamedThread(this_00);
        if (!bVar4) {
          QueryPerformanceCounter(aLStackX_18);
          LStack_28 = aLStackX_18[0];
          uStack_20 = 0xffffffffffffffff;
          FTaskBase::WaitImpl(this_00,(FTimeout *)&LStack_28.s);
        }
        TaskTrace::FWaitingScope::~FWaitingScope((FWaitingScope *)&LStackX_10.s);
        if (bVar8) {
          return;
        }
      }
      else {
        TaskTrace::FWaitingScope::~FWaitingScope((FWaitingScope *)&LStackX_10.s);
        if (bVar8) {
          return;
        }
      }
      FCpuProfilerTrace::OutputEndEvent();
    }
    return;
  }
  EVar1 = this_00->ExtendedPriority;
  if ('\x02' < (char)EVar1) {
    pFVar6 = FTaskGraphInterface::Get();
    bVar3 = (**(code **)((longlong)*pFVar6 + 0x10))(pFVar6,0);
    TVar7 = AnyNormalThreadNormalTask;
    if (bVar3 != AnyNormalThreadNormalTask) {
      TVar7 = (uint)bVar3;
    }
    if (TVar7 < NumThreadPriorities) {
      TVar5 = TranslatePriority(EVar1);
      TVar2 = AnyNormalThreadNormalTask;
      if ((TVar5 & AnyNormalThreadNormalTask) != AnyNormalThreadNormalTask) {
        TVar2 = TVar5 & AnyNormalThreadNormalTask;
      }
      if (TVar2 == TVar7) goto LAB_141a99947;
    }
  }
  QueryPerformanceCounter(&LStackX_10);
  LStack_28 = LStackX_10;
  uStack_20 = 0xffffffffffffffff;
  FTaskBase::WaitImpl(this_00,(FTimeout *)&LStack_28.s);
  return;
}

// ExecuteTask @ 141d791c0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'[::B]::<lambda_18>,void,void>::
ExecuteTask(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((**(longlong **)((longlong)this + 0xd8) == 0) ||
     (*(char *)(**(longlong **)((longlong)this + 0xd8) + 0xd0) != '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Task.IsCompleted()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                       ,0xd1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ExecuteTask @ 141d79210

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l82::<lambda_19>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79220

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'[::C]::<lambda_19>,void,void>::
ExecuteTask(void *this)

{
  `UE::TasksTests::FTasksBasicTest::TestBody'[::C]::<lambda_19>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141d79240

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::MakeCompletedTask<int,int>'::__l2::<lambda_1>,int,void>::ExecuteTask
          (void *this)

{
  *(undefined4 *)((longlong)this + 0xd8) = **(undefined4 **)((longlong)this + 0xe0);
  return;
}

// ExecuteTask @ 141d79260

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::MakeCompletedTask<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::__l19::FCopyOnly,`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::__l19::FCopyOnly>'::__l2::<lambda_1>,`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::__l19::FCopyOnly,void>
::ExecuteTask(void *this)

{
  undefined1 local_res8;
  
  *(undefined1 *)((longlong)this + 0xd8) = local_res8;
  return;
}

// ExecuteTask @ 141d79280

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::MakeCompletedTask<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::__l21::FDummy,int,wchar_t_const_(&)[5]>'::__l2::<lambda_1>,`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::__l21::FDummy,void>
::ExecuteTask(void *this)

{
  `UE::Tasks::
  MakeCompletedTask<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::__l21::FDummy,int,wchar_t_const_(&)[5]>'
  ::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xf0),(FDummy *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141d792a0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::MakeCompletedTask<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::__l20::FNonMovable>'::__l2::<lambda_1>,`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::__l20::FNonMovable,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d792b0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::MakeCompletedTask<TUniquePtr<int,TDefaultDelete<int>_>,TUniquePtr<int,TDefaultDelete<int>_>_>'::__l2::<lambda_1>,TUniquePtr<int,TDefaultDelete<int>_>,void>
::ExecuteTask(void *this)

{
  *(undefined8 *)((longlong)this + 0xd8) = **(undefined8 **)((longlong)this + 0xe0);
  **(undefined8 **)((longlong)this + 0xe0) = 0;
  return;
}

// ExecuteTask @ 141d792d0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::TasksTests::FTasksBasicTest::TestBody'::__l176::FPipeSuspensionScope::FPipeSuspensionScope'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  ``UE::TasksTests::FTasksBasicTest::TestBody'::__l176::FPipeSuspensionScope::FPipeSuspensionScope'
  ::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141d792f0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<```UE::TasksTests::TwoLevelsDeepRetractionTest'::__l2::<lambda_5>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79300

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::TasksTests::NestedTasksStressTest<10000>'::__l4::<lambda_1>::operator()'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79310

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<```UE::TasksTests::PipeStressTest<200,100>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (**(char **)((longlong)this + 0xd8) != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bExecuting",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                       ,0x281,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  LOCK();
  **(undefined1 **)((longlong)this + 0xd8) = 1;
  UNLOCK();
  LOCK();
  **(int **)((longlong)this + 0xe0) = **(int **)((longlong)this + 0xe0) + 1;
  UNLOCK();
  LOCK();
  **(undefined1 **)((longlong)this + 0xd8) = 0;
  UNLOCK();
  return;
}

// ExecuteTask @ 141d79380

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<```UE::TasksTests::BasicStressTest<100,100,100>'::__l6::<lambda_1>::operator()'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  LOCK();
  **(int **)((longlong)this + 0xd8) = **(int **)((longlong)this + 0xd8) + 1;
  UNLOCK();
  return;
}

// ExecuteTask @ 141d793a0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::TasksTests::FTasksBasicTest::TestBody'::__l145::<lambda_20>::operator()'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d793b0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::TasksTests::FTasksBasicTest::TestBody'::__l168::<lambda_22>::operator()'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  FTaskBase *this_00;
  
  puVar1 = *(undefined8 **)((longlong)this + 0xd8);
  this_00 = GetCurrentTask();
  if (this_00 == (FTaskBase *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                       ,0x1ff,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FTaskBase::AddNested(this_00,(FTaskBase *)*puVar1);
  return;
}

// ExecuteTask @ 141d79410

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::TasksTests::FTasksBasicTest::TestBody'::__l193::<lambda_25>::operator()'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  DWORD DVar4;
  
  lVar1 = **(longlong **)((longlong)this + 0xd8);
  if (lVar1 != 0) {
    DVar4 = GetCurrentThreadId();
    if (DVar4 != *(DWORD *)(lVar1 + 0x48)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Outer.IsAwaitable()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x161,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// ExecuteTask @ 141d79470

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::TasksTests::FTasksDeepRetractionTest::TestBody'::__l26::<lambda_4>::operator()'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  ``UE::TasksTests::FTasksDeepRetractionTest::TestBody'::__l26::<lambda_4>::operator()'::__l2::
  <lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141d79490

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::TasksTests::TwoLevelsDeepRetractionTest'::__l2::<lambda_5>::operator()'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  ``UE::TasksTests::TwoLevelsDeepRetractionTest'::__l2::<lambda_5>::operator()'::__l2::<lambda_1>::
  operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141d794b0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::TasksTests::FTasksPipeTest::TestBody'::__l7::FAsyncClass::DoSomething'::__l2::<lambda_1>,bool,void>
::ExecuteTask(void *this)

{
  *(undefined1 *)((longlong)this + 0xd8) = 0;
  return;
}

// ExecuteTask @ 141d794c0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::TasksTests::FTasksPipeTest::TestBody'::__l7::FAsyncClass::DoSomethingElse'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d794d0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksLoneStandbyWorker::TestBody'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  byte bVar1;
  byte *pbVar2;
  FOversubscriptionScope local_res8 [16];
  
  local_res8[0].bIncrementOversubscriptionEmitted = false;
  local_res8[0].bCpuBeginEventEmitted = false;
  LowLevelTasks::FOversubscriptionScope::TryIncrementOversubscription(local_res8);
  pbVar2 = *(byte **)((longlong)this + 0xd8);
  LOCK();
  bVar1 = *pbVar2;
  *pbVar2 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll(pbVar2);
  }
  FManualResetEvent::WaitUntil
            (*(FManualResetEvent **)((longlong)this + 0xe0),__real_7ff0000000000000);
  if (local_res8[0].bIncrementOversubscriptionEmitted != false) {
    LowLevelTasks::FOversubscriptionScope::DecrementOversubscription(local_res8);
  }
  return;
}

// ExecuteTask @ 141d79540

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPipeNoThreadingTest::TestBody'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79550

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPriorityCVarTest::TestBody'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79560

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::TwoLevelsDeepRetractionTest'::__l2::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79570

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksAny::TestBody'::__l3::<lambda_1>,void,void>::ExecuteTask
          (void *this)

{
  return;
}

// ExecuteTask @ 141d79580

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksCancellation::TestBody'::__l3::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  
  if (*(FTaskBase **)((longlong)this + 0xe0) != (FTaskBase *)0x0) {
    FTaskBase::Wait(*(FTaskBase **)((longlong)this + 0xe0));
  }
  if (**(char **)((longlong)this + 0xd8) == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CancellationToken.IsCanceled()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                       ,0x5c9,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar3 = *(undefined8 **)((longlong)this + 0xe0);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000141d795f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ExecuteTask @ 141d79610

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::__l3::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  **(undefined1 **)((longlong)this + 0xd8) = 1;
  return;
}

// ExecuteTask @ 141d79630

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l3::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79640

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksWaitAny::TestBody'::__l3::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79650

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::DependenciesPerfTest<150,150>'::__l4::<lambda_1>,UE::Tasks::FTaskEvent,void>
::ExecuteTask(void *this)

{
  `UE::TasksTests::DependenciesPerfTest<150,150>'::__l4::<lambda_1>::operator()
            ((void *)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 141d79670

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::NestedTasksStressTest<10000>'::__l4::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  `UE::TasksTests::NestedTasksStressTest<10000>'::__l4::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141d79690

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::PipeStressTest<200,100>'::__l4::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  `UE::TasksTests::PipeStressTest<200,100>'::__l4::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141d796b0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::TaskConcurrencyLimiterStressTest<8,1000000,10>'::__l4::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `UE::TasksTests::TaskConcurrencyLimiterStressTest<8,1000000,10>'::__l4::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141d796d0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::TestBatchSpawning<10000>'::__l4::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d796e0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::TestLatency<1000>'::__l4::<lambda_1>,void,void>::ExecuteTask
          (void *this)

{
  return;
}

// ExecuteTask @ 141d796f0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::TestPerfBasic<10000>'::__l4::<lambda_1>,void,void>::ExecuteTask
          (void *this)

{
  return;
}

// ExecuteTask @ 141d79700

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::TestPerfBatch<10000,100>'::__l4::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  `UE::TasksTests::TestPerfBatch<10000,100>'::__l4::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141d79720

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::TestPerfBatchOptimised<10000,100>'::__l4::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `UE::TasksTests::TestPerfBatchOptimised<10000,100>'::__l4::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141d79740

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::TestWorkStealing<100,100>'::__l4::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  `UE::TasksTests::TestWorkStealing<100,100>'::__l4::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141d79760

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::TestBody'::__l2::<lambda_1>::operator()'::__l4::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79770

void __thiscall
UE::Tasks::Private::TExecutableTaskBase<`UE::TasksTests::BlockWorkers'::__l4::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `UE::TasksTests::BlockWorkers'::__l4::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141d79790

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FAsymmetricThreadFence::TestBody'::__l4::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  **(undefined4 **)((longlong)this + 0xd8) = 1;
  FWindowsPlatformMisc::AsymmetricThreadFenceHeavy();
  **(undefined4 **)((longlong)this + 0xe8) = **(undefined4 **)((longlong)this + 0xe0);
  return;
}

// ExecuteTask @ 141d797d0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTaskGraphBackgroundWithNormalAsPrereq::TestBody'::__l4::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d797e0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTaskGraphOversubscribeDuringRestartWorkers::TestBody'::__l4::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FOversubscriptionScope local_res10 [12];
  
  local_res10[0].bIncrementOversubscriptionEmitted = false;
  local_res10[0].bCpuBeginEventEmitted = false;
  LowLevelTasks::FOversubscriptionScope::TryIncrementOversubscription(local_res10);
  if (local_res10[0].bIncrementOversubscriptionEmitted != false) {
    LowLevelTasks::FOversubscriptionScope::DecrementOversubscription(local_res10);
  }
  return;
}

// ExecuteTask @ 141d79820

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksEventTest::TestBody'::__l4::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79830

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPipeWaitUntilEmptyTest::TestBody'::__l4::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79840

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::TasksTests::FTasksPipeWaitUntilEmptyTest::TestBody'::__l85::<lambda_4>::operator()<`UE::TasksTests::FTasksPipeWaitUntilEmptyTest::TestBody'::__l85::<lambda_4>_>'::__l5::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `UE::TasksTests::FTasksPipeWaitUntilEmptyTest::TestBody'::__l85::<lambda_4>::
  operator()<_UE::TasksTests::FTasksPipeWaitUntilEmptyTest::TestBody_::__l85::<lambda_4>_>
            (*(void **)((longlong)this + 0xd8),*(void **)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141d79860

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::TestSpawning<10000>'::__l5::<lambda_1>,void,void>::ExecuteTask
          (void *this)

{
  return;
}

// ExecuteTask @ 141d79870

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::TasksTests::DependenciesPerfTest<150,150>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79880

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::TasksTests::PipeStressTest<200,100>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  ``UE::TasksTests::PipeStressTest<200,100>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>::
  operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141d798a0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::TasksTests::TestPerfBatch<10000,100>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d798b0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::TasksTests::TestWorkStealing<100,100>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d798c0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::TasksTests::BasicStressTest<100,100,100>'::__l6::<lambda_1>::operator()'::__l5::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  ``UE::TasksTests::BasicStressTest<100,100,100>'::__l6::<lambda_1>::operator()'::__l5::<lambda_1>::
  operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141d798e0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::BasicStressTest<100,100,100>'::__l6::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  `UE::TasksTests::BasicStressTest<100,100,100>'::__l6::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141d79900

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l6::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79910

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::__l6::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79920

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::Any<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l9::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `UE::Tasks::Any<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l9::
  <lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141d79940

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::WaitAny<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l12::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  byte bVar1;
  byte *pbVar2;
  
  *(undefined4 *)(*(longlong *)((longlong)this + 0xd8) + 4) = *(undefined4 *)((longlong)this + 0xe8)
  ;
  pbVar2 = *(byte **)((longlong)this + 0xd8);
  LOCK();
  bVar1 = *pbVar2;
  *pbVar2 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll(pbVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 141d79990

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l145::<lambda_20>,void,void>::
ExecuteTask(void *this)

{
  `UE::TasksTests::FTasksBasicTest::TestBody'::__l145::<lambda_20>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141d799b0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l146::<lambda_21>,void,void>::
ExecuteTask(void *this)

{
  `UE::TasksTests::FTasksBasicTest::TestBody'::__l146::<lambda_21>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141d799d0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l168::<lambda_22>,void,void>::
ExecuteTask(void *this)

{
  `UE::TasksTests::FTasksBasicTest::TestBody'::__l168::<lambda_22>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141d799f0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l177::<lambda_23>,void,void>::
ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79a00

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l185::<lambda_24>,void,void>::
ExecuteTask(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  DWORD DVar4;
  
  lVar1 = **(longlong **)((longlong)this + 0xd8);
  if (lVar1 != 0) {
    DVar4 = GetCurrentThreadId();
    if (DVar4 != *(DWORD *)(lVar1 + 0x48)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Task.IsAwaitable()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x150,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// ExecuteTask @ 141d79a60

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l193::<lambda_25>,void,void>::
ExecuteTask(void *this)

{
  `UE::TasksTests::FTasksBasicTest::TestBody'::__l193::<lambda_25>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141d79a80

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l195::<lambda_26>,void,void>::
ExecuteTask(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                       ,0x174,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ExecuteTask @ 141d79ac0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<```UE::TasksTests::TwoLevelsDeepRetractionTest'::__l2::<lambda_5>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79ad0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::TasksTests::TwoLevelsDeepRetractionTest'::__l2::<lambda_5>::operator()'::__l2::<lambda_2>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79ae0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksLoneStandbyWorker::TestBody'::__l2::<lambda_2>,void,void>
::ExecuteTask(void *this)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)((longlong)this + 0xd8);
  LOCK();
  bVar1 = *pbVar2;
  *pbVar2 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll(pbVar2);
  }
  FManualResetEvent::WaitUntil
            (*(FManualResetEvent **)((longlong)this + 0xe0),__real_7ff0000000000000);
  return;
}

// ExecuteTask @ 141d79b20

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPipeNoThreadingTest::TestBody'::__l2::<lambda_2>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79b30

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::TwoLevelsDeepRetractionTest'::__l2::<lambda_2>,void,void>::
ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79b40

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksAny::TestBody'::__l3::<lambda_2>,void,void>::ExecuteTask
          (void *this)

{
  return;
}

// ExecuteTask @ 141d79b50

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksCancellation::TestBody'::__l3::<lambda_2>,void,void>::
ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79b60

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksWaitAny::TestBody'::__l3::<lambda_2>,void,void>::
ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79b70

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTaskGraphBackgroundWithNormalAsPrereq::TestBody'::__l4::<lambda_2>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79b80

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPipeWaitUntilEmptyTest::TestBody'::__l4::<lambda_2>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79b90

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::TaskConcurrencyLimiter_WaitingStressTest<10000>'::__l6::<lambda_2>,void,void>
::ExecuteTask(void *this)

{
  `UE::TasksTests::TaskConcurrencyLimiter_WaitingStressTest<10000>'::__l6::<lambda_2>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141d79bb0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::__l6::<lambda_2>,void,void>::
ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79bc0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l7::<lambda_2>,void,void>::
ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79bd0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::TestSpawning<10000>'::__l8::<lambda_2>,void,void>::ExecuteTask
          (void *this)

{
  return;
}

// ExecuteTask @ 141d79be0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::__l11::<lambda_2>,void,void>
::ExecuteTask(void *this)

{
  `UE::TasksTests::FTasksDeepRetractionTest::TestBody'::__l11::<lambda_2>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141d79c00

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l11::<lambda_2>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksLoneStandbyWorker::TestBody'::__l2::<lambda_3>,void,void>
::ExecuteTask(void *this)

{
  ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_> FVar1;
  byte bVar2;
  FBucket *this_00;
  TRefCountPtr<UE::ParkingLot::Private::FThread> TVar3;
  byte *pbVar4;
  atomic<UE::ParkingLot::Private::FTable_*> aVar5;
  int iVar6;
  ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_> FVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_478 [32];
  undefined1 auStack_458 [8];
  <lambda_1> <Stack_450;
  TArray<TRefCountPtr<UE::ParkingLot::Private::FThread>,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
  TStack_438;
  ulonglong uStack_28;
  
  pbVar4 = *(byte **)((longlong)this + 0xd8);
  LOCK();
  bVar2 = *pbVar4;
  *pbVar4 = 1;
  UNLOCK();
  if ((bVar2 & 3) != 2) {
    return;
  }
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_478;
  TStack_438.AllocatorInstance.SecondaryData =
       (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)0x0;
  TStack_438.ArrayNum = 0;
  TStack_438.ArrayMax = 0x80;
  aVar5 = ParkingLot::Private::FTable::GlobalTable;
  while( true ) {
    ParkingLot::Private::FTable::GlobalTable = aVar5;
    if ((aVar5 == (atomic<UE::ParkingLot::Private::FTable_*>)0x0) ||
       (this_00 = *(FBucket **)
                   ((uint *)((longlong)aVar5 + 8) +
                   ((((ulonglong)pbVar4 & 0xffffffff) * -0x34efebe6d34d3a04 + 0x5b12db9242bd7ce7 +
                     ((ulonglong)pbVar4 >> 0x20) * -0x23d4e82362d043d7 >> 0x20) %
                   (ulonglong)*(uint *)aVar5) * 2), this_00 == (FBucket *)0x0)) goto LAB_1414b96fa;
    FWordMutex::Lock(&this_00->Mutex);
    if (aVar5 == ParkingLot::Private::FTable::GlobalTable) break;
    FWordMutex::Unlock(&this_00->Mutex);
    aVar5 = ParkingLot::Private::FTable::GlobalTable;
  }
  <Stack_450.WakeThreads = &TStack_438;
  <Stack_450.WakeCount = 0xffffffff;
  <Stack_450.Address = pbVar4;
  ParkingLot::Private::FBucket::DequeueIf<_UE::ParkingLot::WakeMultiple_::__l5::<lambda_1>_>
            (this_00,&<Stack_450);
  FWordMutex::Unlock(&this_00->Mutex);
LAB_1414b96fa:
  iVar6 = TStack_438.ArrayNum;
  uVar9 = (ulonglong)TStack_438.ArrayNum;
  FVar7 = (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)&TStack_438;
  if (TStack_438.AllocatorInstance.SecondaryData !=
      (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)0x0) {
    FVar7 = TStack_438.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)
          ((longlong)FVar7 + uVar9 * 8);
  while( true ) {
    uVar8 = (uint)uVar9;
    if ((uint)uVar9 != iVar6) {
      `TCheckedPointerIterator<TRefCountPtr<UE::ParkingLot::Private::FThread>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(auStack_458);
      uVar8 = TStack_438.ArrayNum;
    }
    if (FVar7 == FVar1) break;
    TVar3.Reference = *(FThread **)FVar7;
    (TVar3.Reference)->WaitAddress = (atomic<void_const_*>)0x0;
    HAL::Private::FMicrosoftManualResetEvent::Notify(&(TVar3.Reference)->Event);
    uVar9 = (ulonglong)(uint)TStack_438.ArrayNum;
    FVar7 = (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)((longlong)FVar7 + 8);
  }
  FVar7 = (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)&TStack_438;
  if (TStack_438.AllocatorInstance.SecondaryData !=
      (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)0x0) {
    FVar7 = TStack_438.AllocatorInstance.SecondaryData;
  }
  DestructItems<TRefCountPtr<UE::ParkingLot::Private::FThread>,int>
            ((TRefCountPtr<UE::ParkingLot::Private::FThread> *)FVar7,uVar8);
  if (TStack_438.AllocatorInstance.SecondaryData !=
      (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)0x0) {
    FMemory::Free((void *)TStack_438.AllocatorInstance.SecondaryData);
  }
  return;
}

// ExecuteTask @ 141d79c30

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::TwoLevelsDeepRetractionTest'::__l2::<lambda_3>,void,void>::
ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79c40

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::__l8::<lambda_3>,void,void>::
ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l9::<lambda_3>,void,void>::
ExecuteTask(void *this)

{
  EExtendedTaskPriority EVar1;
  FTaskBase *this_00;
  Type TVar2;
  byte bVar3;
  bool bVar4;
  Type TVar5;
  FTaskGraphInterface *pFVar6;
  Type TVar7;
  bool bVar8;
  LARGE_INTEGER LStackX_10;
  LARGE_INTEGER aLStackX_18 [2];
  LARGE_INTEGER LStack_28;
  undefined8 uStack_20;
  
  this_00 = (FTaskBase *)**(undefined8 **)((longlong)this + 0xd8);
  if (this_00 == (FTaskBase *)0x0) {
    return;
  }
  if (GTaskGraphAlwaysWaitWithNamedThreadSupport) {
LAB_141a99947:
    if ((this_00->Subsequents).bIsClosed == (atomic<bool>)0x0) {
      bVar8 = CpuChannel->Enabled < 0;
      if (!bVar8) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId210,"FTaskBase::WaitWithNamedThreadsSupport",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tasks\\TaskPrivate.cpp"
                   ,0xd2);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId210);
      }
      TaskTrace::FWaitingScope::FWaitingScope
                ((FWaitingScope *)&LStackX_10.s,(ulong64)this_00->TraceId);
      QueryPerformanceCounter(aLStackX_18);
      LStack_28 = aLStackX_18[0];
      uStack_20 = 0xffffffffffffffff;
      FTaskBase::TryRetractAndExecute(this_00,(FTimeout *)&LStack_28.s,0);
      if ((this_00->Subsequents).bIsClosed == (atomic<bool>)0x0) {
        bVar4 = TryWaitOnNamedThread(this_00);
        if (!bVar4) {
          QueryPerformanceCounter(aLStackX_18);
          LStack_28 = aLStackX_18[0];
          uStack_20 = 0xffffffffffffffff;
          FTaskBase::WaitImpl(this_00,(FTimeout *)&LStack_28.s);
        }
        TaskTrace::FWaitingScope::~FWaitingScope((FWaitingScope *)&LStackX_10.s);
        if (bVar8) {
          return;
        }
      }
      else {
        TaskTrace::FWaitingScope::~FWaitingScope((FWaitingScope *)&LStackX_10.s);
        if (bVar8) {
          return;
        }
      }
      FCpuProfilerTrace::OutputEndEvent();
    }
    return;
  }
  EVar1 = this_00->ExtendedPriority;
  if ('\x02' < (char)EVar1) {
    pFVar6 = FTaskGraphInterface::Get();
    bVar3 = (**(code **)((longlong)*pFVar6 + 0x10))(pFVar6,0);
    TVar7 = AnyNormalThreadNormalTask;
    if (bVar3 != AnyNormalThreadNormalTask) {
      TVar7 = (uint)bVar3;
    }
    if (TVar7 < NumThreadPriorities) {
      TVar5 = TranslatePriority(EVar1);
      TVar2 = AnyNormalThreadNormalTask;
      if ((TVar5 & AnyNormalThreadNormalTask) != AnyNormalThreadNormalTask) {
        TVar2 = TVar5 & AnyNormalThreadNormalTask;
      }
      if (TVar2 == TVar7) goto LAB_141a99947;
    }
  }
  QueryPerformanceCounter(&LStackX_10);
  LStack_28 = LStackX_10;
  uStack_20 = 0xffffffffffffffff;
  FTaskBase::WaitImpl(this_00,(FTimeout *)&LStack_28.s);
  return;
}

// ExecuteTask @ 141d79c70

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksWaitAny::TestBody'::__l18::<lambda_3>,void,void>::
ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l19::<lambda_3>,void,void>
::ExecuteTask(void *this)

{
  EExtendedTaskPriority EVar1;
  FTaskBase *this_00;
  Type TVar2;
  byte bVar3;
  bool bVar4;
  Type TVar5;
  FTaskGraphInterface *pFVar6;
  Type TVar7;
  bool bVar8;
  LARGE_INTEGER LStackX_10;
  LARGE_INTEGER aLStackX_18 [2];
  LARGE_INTEGER LStack_28;
  undefined8 uStack_20;
  
  this_00 = (FTaskBase *)**(undefined8 **)((longlong)this + 0xd8);
  if (this_00 == (FTaskBase *)0x0) {
    return;
  }
  if (GTaskGraphAlwaysWaitWithNamedThreadSupport) {
LAB_141a99947:
    if ((this_00->Subsequents).bIsClosed == (atomic<bool>)0x0) {
      bVar8 = CpuChannel->Enabled < 0;
      if (!bVar8) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId210,"FTaskBase::WaitWithNamedThreadsSupport",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tasks\\TaskPrivate.cpp"
                   ,0xd2);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId210);
      }
      TaskTrace::FWaitingScope::FWaitingScope
                ((FWaitingScope *)&LStackX_10.s,(ulong64)this_00->TraceId);
      QueryPerformanceCounter(aLStackX_18);
      LStack_28 = aLStackX_18[0];
      uStack_20 = 0xffffffffffffffff;
      FTaskBase::TryRetractAndExecute(this_00,(FTimeout *)&LStack_28.s,0);
      if ((this_00->Subsequents).bIsClosed == (atomic<bool>)0x0) {
        bVar4 = TryWaitOnNamedThread(this_00);
        if (!bVar4) {
          QueryPerformanceCounter(aLStackX_18);
          LStack_28 = aLStackX_18[0];
          uStack_20 = 0xffffffffffffffff;
          FTaskBase::WaitImpl(this_00,(FTimeout *)&LStack_28.s);
        }
        TaskTrace::FWaitingScope::~FWaitingScope((FWaitingScope *)&LStackX_10.s);
        if (bVar8) {
          return;
        }
      }
      else {
        TaskTrace::FWaitingScope::~FWaitingScope((FWaitingScope *)&LStackX_10.s);
        if (bVar8) {
          return;
        }
      }
      FCpuProfilerTrace::OutputEndEvent();
    }
    return;
  }
  EVar1 = this_00->ExtendedPriority;
  if ('\x02' < (char)EVar1) {
    pFVar6 = FTaskGraphInterface::Get();
    bVar3 = (**(code **)((longlong)*pFVar6 + 0x10))(pFVar6,0);
    TVar7 = AnyNormalThreadNormalTask;
    if (bVar3 != AnyNormalThreadNormalTask) {
      TVar7 = (uint)bVar3;
    }
    if (TVar7 < NumThreadPriorities) {
      TVar5 = TranslatePriority(EVar1);
      TVar2 = AnyNormalThreadNormalTask;
      if ((TVar5 & AnyNormalThreadNormalTask) != AnyNormalThreadNormalTask) {
        TVar2 = TVar5 & AnyNormalThreadNormalTask;
      }
      if (TVar2 == TVar7) goto LAB_141a99947;
    }
  }
  QueryPerformanceCounter(&LStackX_10);
  LStack_28 = LStackX_10;
  uStack_20 = 0xffffffffffffffff;
  FTaskBase::WaitImpl(this_00,(FTimeout *)&LStack_28.s);
  return;
}

// ExecuteTask @ 141d79ca0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPipeWaitUntilEmptyTest::TestBody'::__l82::<lambda_3>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79cb0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksAny::TestBody'::__l11::<lambda_3>,void,void>::ExecuteTask
          (void *this)

{
  return;
}

// ExecuteTask @ 141d79cc0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::__l11::<lambda_3>,void,void>
::ExecuteTask(void *this)

{
  `UE::TasksTests::FTasksDeepRetractionTest::TestBody'::__l11::<lambda_3>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141d79ce0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::TwoLevelsDeepRetractionTest'::__l2::<lambda_4>,void,void>::
ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79cf0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::__l8::<lambda_4>,void,void>::
ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79d00

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksWaitAny::TestBody'::__l18::<lambda_4>,void,void>::
ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79d10

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l19::<lambda_4>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79d20

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::__l26::<lambda_4>,void,void>
::ExecuteTask(void *this)

{
  `UE::TasksTests::FTasksDeepRetractionTest::TestBody'::__l26::<lambda_4>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141d79d40

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l53::<lambda_4>,void,void>::
ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (*(FTaskBase **)((longlong)this + 0xd8) != (FTaskBase *)0x0) {
    FTaskBase::Wait(*(FTaskBase **)((longlong)this + 0xd8));
  }
  puVar3 = *(undefined8 **)((longlong)this + 0xd8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000141d79d82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ExecuteTask @ 141d79da0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksAny::TestBody'::__l11::<lambda_4>,void,void>::ExecuteTask
          (void *this)

{
  return;
}

// ExecuteTask @ 141d79db0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::TwoLevelsDeepRetractionTest'::__l2::<lambda_5>,void,void>::
ExecuteTask(void *this)

{
  `UE::TasksTests::TwoLevelsDeepRetractionTest'::__l2::<lambda_5>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 141d79dd0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l27::<lambda_5>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79de0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::__l48::<lambda_5>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79df0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l82::<lambda_5>,void,void>::
ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79e00

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::__l11::<lambda_5>,void,void>::
ExecuteTask(void *this)

{
  FWindowsPlatformProcess::Sleep(__real_3dcccccd);
  **(undefined1 **)((longlong)this + 0xd8) = 1;
  return;
}

// ExecuteTask @ 141d79e30

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l27::<lambda_6>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79e40

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::__l49::<lambda_6>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79e50

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l82::<lambda_6>,void,void>::
ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79e60

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::__l11::<lambda_6>,void,void>::
ExecuteTask(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (**(char **)((longlong)this + 0xd8) == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bTask1Done",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                       ,0x224,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ExecuteTask @ 141d79eb0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l28::<lambda_7>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79ec0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::__l49::<lambda_7>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79ed0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l83::<lambda_7>,void,void>::
ExecuteTask(void *this)

{
  LOCK();
  **(undefined1 **)((longlong)this + 0xd8) = 1;
  UNLOCK();
  return;
}

// ExecuteTask @ 141d79ef0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::__l12::<lambda_7>,void,void>::
ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79f00

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l28::<lambda_8>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79f10

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l93::<lambda_8>,int,void>::
ExecuteTask(void *this)

{
  FWindowsPlatformProcess::Sleep(__real_3dcccccd);
  *(undefined4 *)((longlong)this + 0xd8) = 0x2a;
  return;
}

// ExecuteTask @ 141d79f40

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::__l12::<lambda_8>,void,void>::
ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79f50

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::__l28::<lambda_9>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 141d79f60

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::__l101::<lambda_9>,int,void>::
ExecuteTask(void *this)

{
  *(undefined4 *)((longlong)this + 0xd8) = 0x2a;
  return;
}

// ExecuteTask @ 141d79f80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::__l13::<lambda_9>,void,void>::
ExecuteTask(void *this)

{
  EExtendedTaskPriority EVar1;
  FTaskBase *this_00;
  Type TVar2;
  byte bVar3;
  bool bVar4;
  Type TVar5;
  FTaskGraphInterface *pFVar6;
  Type TVar7;
  bool bVar8;
  LARGE_INTEGER LStackX_10;
  LARGE_INTEGER aLStackX_18 [2];
  LARGE_INTEGER LStack_28;
  undefined8 uStack_20;
  
  LOCK();
  **(undefined1 **)((longlong)this + 0xd8) = 1;
  UNLOCK();
  this_00 = (FTaskBase *)**(undefined8 **)((longlong)this + 0xe0);
  if (this_00 == (FTaskBase *)0x0) {
    return;
  }
  if (GTaskGraphAlwaysWaitWithNamedThreadSupport != false) {
LAB_141a99947:
    if ((this_00->Subsequents).bIsClosed == (atomic<bool>)0x0) {
      bVar8 = CpuChannel->Enabled < 0;
      if (!bVar8) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId210,"FTaskBase::WaitWithNamedThreadsSupport",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tasks\\TaskPrivate.cpp"
                   ,0xd2);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId210);
      }
      TaskTrace::FWaitingScope::FWaitingScope
                ((FWaitingScope *)&LStackX_10.s,(ulong64)this_00->TraceId);
      QueryPerformanceCounter(aLStackX_18);
      LStack_28 = aLStackX_18[0];
      uStack_20 = 0xffffffffffffffff;
      FTaskBase::TryRetractAndExecute(this_00,(FTimeout *)&LStack_28.s,0);
      if ((this_00->Subsequents).bIsClosed == (atomic<bool>)0x0) {
        bVar4 = TryWaitOnNamedThread(this_00);
        if (!bVar4) {
          QueryPerformanceCounter(aLStackX_18);
          LStack_28 = aLStackX_18[0];
          uStack_20 = 0xffffffffffffffff;
          FTaskBase::WaitImpl(this_00,(FTimeout *)&LStack_28.s);
        }
        TaskTrace::FWaitingScope::~FWaitingScope((FWaitingScope *)&LStackX_10.s);
        if (bVar8) {
          return;
        }
      }
      else {
        TaskTrace::FWaitingScope::~FWaitingScope((FWaitingScope *)&LStackX_10.s);
        if (bVar8) {
          return;
        }
      }
      FCpuProfilerTrace::OutputEndEvent();
    }
    return;
  }
  EVar1 = this_00->ExtendedPriority;
  if ('\x02' < (char)EVar1) {
    pFVar6 = FTaskGraphInterface::Get();
    bVar3 = (**(code **)((longlong)*pFVar6 + 0x10))(pFVar6,0);
    TVar7 = AnyNormalThreadNormalTask;
    if (bVar3 != AnyNormalThreadNormalTask) {
      TVar7 = (uint)bVar3;
    }
    if (TVar7 < NumThreadPriorities) {
      TVar5 = TranslatePriority(EVar1);
      TVar2 = AnyNormalThreadNormalTask;
      if ((TVar5 & AnyNormalThreadNormalTask) != AnyNormalThreadNormalTask) {
        TVar2 = TVar5 & AnyNormalThreadNormalTask;
      }
      if (TVar2 == TVar7) goto LAB_141a99947;
    }
  }
  QueryPerformanceCounter(&LStackX_10);
  LStack_28 = LStackX_10;
  uStack_20 = 0xffffffffffffffff;
  FTaskBase::WaitImpl(this_00,(FTimeout *)&LStack_28.s);
  return;
}

