// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EventLoop
// Functions: 9

// FIOManagerBSDSocketSelectImpl @ 143140b00

FIOManagerBSDSocketSelectImpl * __thiscall
UE::EventLoop::FIOManagerBSDSocketSelectImpl::FIOManagerBSDSocketSelectImpl
          (FIOManagerBSDSocketSelectImpl *this,IEventLoop *param_1)

{
  atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FAddRequest,FMemory>::FNode_*>
  aVar1;
  atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>
  aVar2;
  
  this->EventLoop = param_1;
  (this->SelectData).MaxFd = 0xffffffffffffffff;
  this->_padding_ = (longlong)&___7FIOManagerBSDSocketSelectImpl_EventLoop_UE__6B_;
  *(undefined8 *)&(this->IORequestStorage).Storage.field_0x10 = 0;
  *(undefined8 *)&(this->IORequestStorage).Storage.field_0x18 = 0;
  *(undefined8 *)&(this->IORequestStorage).Storage = 0;
  *(undefined8 *)&(this->IORequestStorage).Storage.field_0x8 = 0;
  *(undefined8 *)&(this->IORequestStorage).Storage.field_0x20 = 0;
  *(undefined4 *)&(this->IORequestStorage).Storage.field_0x28 = 0;
  *(undefined4 *)&(this->IORequestStorage).Storage.field_0x2c = 0x80;
  *(undefined4 *)&(this->IORequestStorage).Storage.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IORequestStorage).Storage.field_0x34 = 0;
  *(undefined8 *)&(this->IORequestStorage).StorageHandleIndex.field_0x10 = 0;
  *(undefined8 *)&(this->IORequestStorage).StorageHandleIndex.field_0x18 = 0;
  *(undefined8 *)&(this->IORequestStorage).StorageHandleIndex.field_0x38 = 0;
  *(undefined4 *)&(this->IORequestStorage).StorageHandleIndex.field_0x4c = 0;
  *(undefined8 *)&(this->IORequestStorage).StorageHandleIndex = 0;
  *(undefined8 *)&(this->IORequestStorage).StorageHandleIndex.field_0x8 = 0;
  *(undefined8 *)&(this->IORequestStorage).StorageHandleIndex.field_0x20 = 0;
  *(undefined4 *)&(this->IORequestStorage).StorageHandleIndex.field_0x28 = 0;
  *(undefined4 *)&(this->IORequestStorage).StorageHandleIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->IORequestStorage).StorageHandleIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IORequestStorage).StorageHandleIndex.field_0x34 = 0;
  *(undefined8 *)&(this->IORequestStorage).StorageHandleIndex.field_0x40 = 0;
  *(undefined4 *)&(this->IORequestStorage).StorageHandleIndex.field_0x48 = 0;
  (this->IORequestStorage).AddRequests.Head =
       (atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FAddRequest,FMemory>::FNode_*>
        )0x0;
  aVar1 = (atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FAddRequest,FMemory>::FNode_*>
           )FMemory::Malloc(0x60,0x10);
  *(undefined8 *)aVar1 = 0;
  (this->IORequestStorage).AddRequests.Head = aVar1;
  (this->IORequestStorage).AddRequests.Tail = (FNode *)aVar1;
  (this->IORequestStorage).RemoveRequests.Head =
       (atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>
        )0x0;
  aVar2 = (atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>
           )FMemory::Malloc(0x50,0x10);
  *(undefined8 *)aVar2 = 0;
  (this->IORequestStorage).RemoveRequests.Head = aVar2;
  (this->IORequestStorage).RemoveRequests.Tail = (FNode *)aVar2;
  (this->IORequestStorage).ManagerThreadId = (TAtomic<unsigned_int>)0x0;
  (this->IOAccess).IORequestStorage = &this->IORequestStorage;
  this->bAsyncSignal = (TAtomic<bool>)0x0;
  *(undefined8 *)&this->SocketInternalHandleIndex = 0;
  *(undefined8 *)&(this->SocketInternalHandleIndex).field_0x8 = 0;
  *(undefined8 *)&(this->SocketInternalHandleIndex).field_0x20 = 0;
  *(undefined4 *)&(this->SocketInternalHandleIndex).field_0x28 = 0;
  *(undefined4 *)&(this->SocketInternalHandleIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->SocketInternalHandleIndex).field_0x34 = 0;
  *(undefined4 *)&(this->SocketInternalHandleIndex).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SocketInternalHandleIndex).field_0x40 = 0;
  *(undefined4 *)&(this->SocketInternalHandleIndex).field_0x48 = 0;
  *(undefined8 *)&this->SocketIndex = 0;
  *(undefined8 *)&(this->SocketIndex).field_0x8 = 0;
  *(undefined8 *)&(this->SocketIndex).field_0x20 = 0;
  *(undefined4 *)&(this->SocketIndex).field_0x28 = 0;
  *(undefined4 *)&(this->SocketIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->SocketIndex).field_0x34 = 0;
  *(undefined4 *)&(this->SocketIndex).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SocketIndex).field_0x40 = 0;
  *(undefined4 *)&(this->SocketIndex).field_0x48 = 0;
  return this;
}

// ~FIOManagerBSDSocketSelectImpl @ 143141040

void __thiscall
UE::EventLoop::FIOManagerBSDSocketSelectImpl::~FIOManagerBSDSocketSelectImpl
          (FIOManagerBSDSocketSelectImpl *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->SocketIndex).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SocketIndex).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SocketIndex);
  *(undefined4 *)&(this->SocketInternalHandleIndex).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SocketInternalHandleIndex).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SocketInternalHandleIndex);
  TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FRemoveRequest,FMemory>
  ::
  ~TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FRemoveRequest,FMemory>
            (&(this->IORequestStorage).RemoveRequests);
  TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FAddRequest,FMemory>
  ::
  ~TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FAddRequest,FMemory>
            (&(this->IORequestStorage).AddRequests);
  *(undefined4 *)&(this->IORequestStorage).StorageHandleIndex.field_0x48 = 0;
  pvVar1 = *(void **)&(this->IORequestStorage).StorageHandleIndex.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->IORequestStorage).StorageHandleIndex);
  TSparseArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FStorageEntry,FDefaultSparseArrayAllocator>
  ::
  ~TSparseArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FStorageEntry,FDefaultSparseArrayAllocator>
            (&(this->IORequestStorage).Storage);
  return;
}

// Init @ 143141690

bool __thiscall
UE::EventLoop::FIOManagerBSDSocketSelectImpl::Init(FIOManagerBSDSocketSelectImpl *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TAtomic<unsigned_int> TVar4;
  
  if ((this->IORequestStorage).ManagerThreadId != (TAtomic<unsigned_int>)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ManagerThreadId == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoopManagedStorage.h"
                       ,0x26,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  TVar4 = (TAtomic<unsigned_int>)GetCurrentThreadId();
  LOCK();
  (this->IORequestStorage).ManagerThreadId = TVar4;
  UNLOCK();
  return true;
}

// Notify @ 143141740

void __thiscall
UE::EventLoop::FIOManagerBSDSocketSelectImpl::Notify(FIOManagerBSDSocketSelectImpl *this)

{
  LOCK();
  this->bAsyncSignal = (TAtomic<bool>)0x1;
  UNLOCK();
  return;
}

// Poll @ 143141770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::EventLoop::FIOManagerBSDSocketSelectImpl::Poll
          (FIOManagerBSDSocketSelectImpl *this,FTimespan param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_UE::EventLoop::FIOManagerBSDSocketSelectImpl::Poll(FTimespan)_::_2_::FStat_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_Poll>
  FVar5;
  uint uVar6;
  FTimespan FVar7;
  FNameEntryId FVar8;
  longlong lVar9;
  FName FVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  FName local_res18;
  FName local_res20;
  
  uVar11 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_Poll ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UE::EventLoop::FIOManagerBSDSocketSelectImpl::Poll(FTimespan)_::_2_::FStat_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_Poll>
           )0x0) {
        pFVar4 = ::FName::FName(&local_res18,"STAT_EventLoop_FIOManagerBSDSocketSelectImpl_Poll");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_Poll,*pFVar4,
                   L"STAT_EventLoop_FIOManagerBSDSocketSelectImpl_Poll","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar5 = StatPtr_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_Poll;
  if (StatPtr_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_Poll ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UE::EventLoop::FIOManagerBSDSocketSelectImpl::Poll(FTimespan)_::_2_::FStat_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_Poll>
       )0x0) {
    pFVar4 = ::FName::FName(&local_res20,"STAT_EventLoop_FIOManagerBSDSocketSelectImpl_Poll");
    FVar5 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UE::EventLoop::FIOManagerBSDSocketSelectImpl::Poll(FTimespan)_::_2_::FStat_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_Poll>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_Poll,*pFVar4,
                         L"STAT_EventLoop_FIOManagerBSDSocketSelectImpl_Poll","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar5;
  bVar1 = false;
  bVar3 = false;
  FVar8 = FVar10.ComparisonIndex.Value;
  uVar6 = FVar10.Number;
  if ((FVar8.Value != 0) || (uVar6 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.ComparisonIndex.Value = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar1 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar8.Value;
        local_res18.Number = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Private\\EventLoop\\BSDSocket\\EventLoopIOManagerBSDSocketSelect.cpp"
                   ,0x55);
        bVar1 = true;
        bVar3 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.ComparisonIndex.Value = FVar8.Value;
      local_res18.Number = uVar6;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar2 = true;
      goto LAB_1431418f7;
    }
  }
  bVar2 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_1431418f7:
  auVar14._8_8_ = 0;
  auVar14._0_8_ = __real_40f86a0800000000;
  auVar14 = roundpd(auVar14,auVar14,1);
  if (this->bAsyncSignal != (TAtomic<bool>)0x0) {
    param_1.Ticks = uVar11;
  }
  lVar9 = (longlong)auVar14._0_8_;
  uVar12 = param_1.Ticks;
  uVar13 = uVar11;
  for (; ((int)uVar13 == 0 || ((longlong)uVar11 < param_1.Ticks)); uVar11 = uVar11 + lVar9) {
    FVar7.Ticks = lVar9;
    if ((longlong)uVar12 < lVar9) {
      FVar7.Ticks = uVar12;
    }
    PollInternal(this,FVar7);
    if (this->bAsyncSignal != (TAtomic<bool>)0x0) break;
    uVar12 = uVar12 - lVar9;
    uVar13 = (ulonglong)((int)uVar13 + 1);
  }
  LOCK();
  this->bAsyncSignal = (TAtomic<bool>)0x0;
  UNLOCK();
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FThreadStats::AddMessage(FVar10,CycleScopeEnd);
  }
  return;
}

// PollInternal @ 143141a60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143142fa9) */
/* WARNING: Removing unreachable block (ram,0x000143142fb8) */
/* WARNING: Removing unreachable block (ram,0x0001431423e8) */
/* WARNING: Removing unreachable block (ram,0x0001431423f8) */
/* WARNING: Removing unreachable block (ram,0x000143142ba7) */
/* WARNING: Removing unreachable block (ram,0x000143142852) */
/* WARNING: Removing unreachable block (ram,0x00014314240d) */
/* WARNING: Removing unreachable block (ram,0x000143142fcc) */
/* WARNING: Removing unreachable block (ram,0x000143142651) */
/* WARNING: Removing unreachable block (ram,0x000143142661) */
/* WARNING: Removing unreachable block (ram,0x000143141eb1) */
/* WARNING: Removing unreachable block (ram,0x000143141ec1) */
/* WARNING: Removing unreachable block (ram,0x000143141ed6) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::EventLoop::FIOManagerBSDSocketSelectImpl::PollInternal
          (FIOManagerBSDSocketSelectImpl *this,FTimespan param_1)

{
  TMap<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,unsigned___int64,0>_>
  *this_00;
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FIOManagerBSDSocketSelectImpl *pFVar8;
  TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>
  *pTVar9;
  TBitArray<FDefaultBitArrayAllocator> *pTVar10;
  SOCKET *pSVar11;
  FTimespan FVar12;
  FIOManagerBSDSocketSelectImpl *pFVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  FName *pFVar19;
  TStatId TVar20;
  FString *pFVar21;
  undefined8 uVar22;
  FThreadSafeStaticStat<_public:_void___cdecl_UE::EventLoop::FIOManagerBSDSocketSelectImpl::PollInternal(FTimespan)_::_100_::FStat_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollInternal_IdleSleep>
  FVar23;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FThreadSafeStaticStat<_public:_void___cdecl_UE::EventLoop::FIOManagerBSDSocketSelectImpl::PollInternal(FTimespan)_::_103_::FStat_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollInternal_HandleIOState>
  FVar24;
  int *piVar25;
  size_t sVar26;
  uint *puVar27;
  longlong *plVar28;
  ulonglong *puVar29;
  longlong lVar30;
  SOCKET *pSVar31;
  FNameEntryId FVar32;
  undefined8 *puVar33;
  FName FVar34;
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>
  FVar35;
  uint uVar36;
  ulonglong uVar37;
  undefined1 *puVar38;
  undefined1 *puVar39;
  ulonglong *puVar41;
  TSparseArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FStorageEntry,FDefaultSparseArrayAllocator>
  *this_03;
  longlong *plVar42;
  undefined1 *puVar43;
  char cVar44;
  FName FVar45;
  ulong64 uVar46;
  longlong lVar47;
  ForAnyElementType FVar48;
  undefined8 *puVar49;
  bool bVar50;
  undefined1 auStackY_1138 [32];
  undefined1 local_10d7;
  undefined1 local_10d6 [6];
  undefined1 local_10d0 [8];
  undefined1 local_10c8 [8];
  undefined1 local_10c0 [8];
  undefined1 local_10b8 [8];
  FIOManagerBSDSocketSelectImpl *local_10b0;
  FName local_10a8;
  uint local_10a0;
  uint local_109c;
  uint local_1098;
  uint local_1090 [2];
  TSparseArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FStorageEntry,FDefaultSparseArrayAllocator>
  *local_1088;
  FName local_1080;
  undefined4 local_1078 [2];
  undefined4 local_1070 [2];
  uint local_1068;
  FColor_u_0 local_1064;
  FColor_u_0 local_1060;
  undefined1 local_105c [20];
  FString local_1048;
  FString local_1038;
  ulong64 local_1028;
  undefined8 uStack_1020;
  FString local_1018;
  FName local_1008;
  byte local_1000;
  FName local_ff8;
  ulong64 local_fe8;
  FName local_fe0;
  FName local_fd8;
  TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>
  *local_fc8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_fc0;
  undefined8 uStack_fa0;
  longlong local_f98;
  longlong lStack_f90;
  SOCKET *local_f88;
  char local_f80;
  TResourceHandle<UE::EventLoop::FIORequestHandleTraits> local_f78;
  ulonglong local_f70;
  TResourceHandle<UE::EventLoop::FIORequestHandleTraits> local_f68;
  FTimespan local_f60;
  LARGE_INTEGER local_f58;
  SOCKET local_f50;
  FString local_f48;
  FName local_f38;
  TPairInitializer<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_const_&,unsigned___int64_const_&>
  local_f30;
  FString local_f20;
  FStatMessage local_f10;
  FString local_f00;
  TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>
  *local_ef0;
  uint uStack_ee8;
  uint uStack_ee4;
  undefined1 *local_ee0;
  undefined4 uStack_ed8;
  uint uStack_ed4;
  uint local_ed0;
  undefined4 uStack_ecc;
  int iStack_ec8;
  undefined4 uStack_ec4;
  ulonglong local_ec0;
  FSourceLocation local_eb8;
  ulonglong local_e98;
  ulonglong uStack_e90;
  FString local_e88;
  ulong64 local_e78;
  undefined8 uStack_e70;
  FString local_e68;
  ulong64 *local_e58;
  ulonglong *local_e50;
  ulonglong *local_e48;
  ulong64 *local_e40;
  FString local_e38;
  FName local_e28;
  FName local_e20;
  FName local_e18;
  FString local_e10;
  FString local_df8;
  longlong local_de8;
  longlong lStack_de0;
  SOCKET *local_dd8;
  longlong local_dd0;
  longlong lStack_dc8;
  SOCKET *local_dc0;
  FString local_db8;
  FName local_da8 [8];
  TBaseRangeForIterator<0> local_d68;
  undefined4 local_cfc;
  code *local_cf8;
  longlong local_ce8 [3];
  longlong *local_cd0;
  code *local_cc8;
  longlong local_cb8 [3];
  longlong *local_ca0;
  TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_c98;
  TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_a88;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_878;
  FSelectData local_758;
  char local_138 [256];
  ulonglong local_38;
  undefined8 local_30;
  ulonglong *puVar40;
  
  local_30 = 0x143141a8a;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1138;
  bVar50 = false;
  bVar5 = false;
  bVar15 = false;
  local_1090[0] = 0;
  local_10b0 = this;
  local_f60.Ticks = param_1.Ticks;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollInternal =
         (FThreadSafeStaticStat<_public:_void___cdecl_UE::EventLoop::FIOManagerBSDSocketSelectImpl::PollInternal(FTimespan)_::_2_::FStat_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollInternal>
          )0x0;
    pFVar19 = ::FName::FName(&local_e28,"STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollInternal")
    ;
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollInternal,*pFVar19,
               L"STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollInternal","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  TVar20 = FThreadSafeStaticStatInner<`UE::EventLoop::FIOManagerBSDSocketSelectImpl::PollInternal'::__l2::FStat_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollInternal,1>
           ::GetStatId(&StatPtr_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollInternal);
  local_eb8.Impl._Line = 0x78;
  local_eb8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Private\\EventLoop\\BSDSocket\\EventLoopIOManagerBSDSocketSelect.cpp"
  ;
  local_eb8.Impl._Column = 2;
  local_eb8.Impl._Function =
       "void __cdecl UE::EventLoop::FIOManagerBSDSocketSelectImpl::PollInternal(struct FTimespan)";
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_1008,*(TStatIdData **)&(TVar20.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_eb8);
  local_1088 = &(this->IORequestStorage).Storage;
  local_a88.AllocatorInstance.SecondaryData =
       (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>
        )0x0;
  local_a88.ArrayNum = 0;
  local_a88.ArrayMax = 0x20;
  local_c98.AllocatorInstance.SecondaryData =
       (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>
        )0x0;
  local_c98.ArrayNum = 0;
  local_c98.ArrayMax = 0x20;
  local_1068 = TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>
               ::Update((TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>
                         *)local_1088,&local_a88,&local_c98);
  uVar37 = (ulonglong)local_c98.ArrayNum;
  local_1098 = local_c98.ArrayNum;
  FVar45 = (FName)&local_c98;
  if ((FName)local_c98.AllocatorInstance.SecondaryData != (FName)0x0) {
    FVar45 = (FName)local_c98.AllocatorInstance.SecondaryData;
  }
  local_105c._4_8_ = uVar37 * 0x10 + (longlong)FVar45;
  FVar34 = (FName)local_105c._4_8_;
LAB_143141c68:
  while( true ) {
    bVar6 = false;
    bVar14 = false;
    puVar40 = (ulonglong *)0x0;
    local_10a8 = FVar45;
    if (local_c98.ArrayNum != (uint)uVar37) {
      local_10d7 = 0;
      `TCheckedPointerIterator<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_10d7);
    }
    if (FVar45 == FVar34) break;
    local_e98 = *(ulonglong *)FVar45;
    uStack_e90 = *(ulonglong *)((longlong)FVar45 + 8);
    this_00 = &this->SocketInternalHandleIndex;
    pFVar13 = this;
    if (*(int *)&(this->SocketInternalHandleIndex).field_0x8 !=
        *(int *)&(this->SocketInternalHandleIndex).field_0x34) {
      puVar39 = *(undefined1 **)&(this->SocketInternalHandleIndex).field_0x40;
      puVar43 = &(this->SocketInternalHandleIndex).field_0x38;
      puVar38 = puVar43;
      if (puVar39 != (undefined1 *)0x0) {
        puVar38 = puVar39;
      }
      uVar36 = *(uint *)(puVar38 +
                        ((local_e98 >> 0x20) * 0x17 + local_e98 &
                        (ulonglong)(*(int *)&(this->SocketInternalHandleIndex).field_0x48 - 1)) * 4)
      ;
      FVar34 = (FName)local_105c._4_8_;
      if (uVar36 != 0xffffffff) {
        lVar30 = *(longlong *)&this_00->field_0x0;
        do {
          lVar47 = (longlong)(int)uVar36 * 0x20;
          if (*(ulonglong *)(lVar47 + lVar30) == local_e98) {
            local_fe8 = *(ulong64 *)(lVar47 + 0x10 + lVar30);
            if (((int)uVar36 < 0) ||
               (*(int *)&(this->SocketInternalHandleIndex).field_0x28 <= (int)uVar36)) {
LAB_143141d98:
              bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Elements.IsValidIndex(ElementIndex)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                  ,0x2ab,
                                  L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
              if (bVar14) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            else {
              if ((*(int *)&(this->SocketInternalHandleIndex).field_0x28 <= (int)uVar36) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5c6,L""), bVar14)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              puVar39 = *(undefined1 **)&(this->SocketInternalHandleIndex).field_0x20;
              puVar38 = &(this->SocketInternalHandleIndex).field_0x10;
              if (puVar39 != (undefined1 *)0x0) {
                puVar38 = puVar39;
              }
              uVar17 = uVar36;
              if ((int)uVar36 < 0) {
                uVar17 = uVar36 + 0x1f;
              }
              if ((*(uint *)(puVar38 + (longlong)((int)uVar17 >> 5) * 4) >> (uVar36 & 0x1f) & 1) ==
                  0) goto LAB_143141d98;
            }
            puVar39 = *(undefined1 **)&(this->SocketInternalHandleIndex).field_0x40;
            local_f30.Value = *(ulong64 **)&this_00->field_0x0;
            if (puVar39 != (undefined1 *)0x0) {
              puVar43 = puVar39;
            }
            puVar27 = (uint *)(puVar43 +
                              (longlong)*(int *)(lVar47 + 0x1c + (longlong)local_f30.Value) * 4);
            goto LAB_143141de4;
          }
          uVar36 = *(uint *)(lVar47 + 0x18 + lVar30);
          pFVar13 = local_10b0;
        } while (uVar36 != 0xffffffff);
      }
    }
    this = pFVar13;
    uVar37 = (ulonglong)local_1098;
    FVar45 = (FName)((longlong)FVar45 + 0x10);
  }
  uVar37 = (ulonglong)local_a88.ArrayNum;
  local_1098 = local_a88.ArrayNum;
  FVar35 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>
            )&local_a88;
  if (local_a88.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>
       )0x0) {
    FVar35 = local_a88.AllocatorInstance.SecondaryData;
  }
  local_105c._12_8_ = uVar37 * 0x10 + (longlong)FVar35;
  this_03 = local_1088;
LAB_143142030:
  uVar22 = local_105c._12_8_;
  bVar50 = false;
  bVar5 = false;
  bVar15 = false;
  if (local_a88.ArrayNum != (uint)uVar37) {
    local_10d6[0] = 0;
    `TCheckedPointerIterator<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,int,0>
    ::operator!='::__l2::<lambda_1>::operator()(local_10d6);
  }
  FVar12.Ticks = local_f60.Ticks;
  uVar36 = 0;
  if (FVar35 != (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>
                 )uVar22) {
    local_1028 = *(ulong64 *)FVar35;
    uStack_1020 = *(undefined8 *)((longlong)FVar35 + 8);
    local_e78 = local_1028;
    uStack_e70 = uStack_1020;
    uVar36 = (uint)*(undefined8 *)((longlong)FVar35 + 8);
    pFVar13 = this;
    if ((-1 < (int)uVar36) &&
       ((int)uVar36 <
        *(int *)&((TSparseArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FStorageEntry,FDefaultSparseArrayAllocator>
                   *)&this_03->field_0x0)->field_0x28)) {
      if ((*(int *)&((TSparseArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FStorageEntry,FDefaultSparseArrayAllocator>
                      *)&this_03->field_0x0)->field_0x28 <= (int)uVar36) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5c6,L""), bVar15)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar8 = local_10b0;
      puVar43 = *(undefined1 **)
                 &((TSparseArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FStorageEntry,FDefaultSparseArrayAllocator>
                    *)&this_03->field_0x0)->field_0x20;
      puVar39 = &((TSparseArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FStorageEntry,FDefaultSparseArrayAllocator>
                   *)&this_03->field_0x0)->field_0x10;
      if (puVar43 != (undefined1 *)0x0) {
        puVar39 = puVar43;
      }
      uVar17 = uVar36;
      if ((int)uVar36 < 0) {
        uVar17 = uVar36 + 0x1f;
      }
      if ((*(uint *)(puVar39 + (longlong)((int)uVar17 >> 5) * 4) >> (uVar36 & 0x1f) & 1) == 0)
      goto LAB_14314274b;
      lVar30 = *(longlong *)&this_03->field_0x0;
      lVar47 = (longlong)(int)uVar36 * 0x50;
      if (*(ulong64 *)(lVar47 + lVar30) == local_e78) {
        puVar33 = (undefined8 *)(lVar30 + 0x20 + lVar47);
        puVar49 = (undefined8 *)(lVar30 + 0x48 + lVar47);
        plVar42 = (longlong *)(lVar30 + 0x30 + lVar47);
        puVar41 = (ulonglong *)(lVar30 + 0x10 + lVar47);
      }
      else {
        puVar33 = (undefined8 *)&DAT_00000010;
        puVar49 = (undefined8 *)&DAT_00000038;
        plVar42 = (longlong *)&DAT_00000020;
        puVar41 = puVar40;
      }
      this_03 = local_1088;
      pFVar13 = local_10b0;
      if (puVar41 == (ulonglong *)0x0) goto LAB_14314274b;
      iVar18 = *(int *)&(local_10b0->SocketIndex).field_0x8;
      iVar1 = *(int *)&(local_10b0->SocketIndex).field_0x34;
      if (iVar18 - iVar1 < 0x40) {
        uVar37 = *puVar41;
        if (iVar18 != iVar1) {
          puVar43 = *(undefined1 **)&(local_10b0->SocketIndex).field_0x40;
          puVar39 = &(local_10b0->SocketIndex).field_0x38;
          if (puVar43 != (undefined1 *)0x0) {
            puVar39 = puVar43;
          }
          iVar18 = *(int *)(puVar39 +
                           ((uVar37 >> 0x20) * 0x17 + uVar37 &
                           (ulonglong)(*(int *)&(local_10b0->SocketIndex).field_0x48 - 1)) * 4);
          if (iVar18 != -1) {
            do {
              if (*(ulonglong *)((longlong)iVar18 * 0x20 + *(longlong *)&local_10b0->SocketIndex) ==
                  uVar37) {
                if (5 < (byte)LogEventLoop._0_1_) {
                  ::FString::FString(&local_f20,L"Invalid");
                  Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogEventLoop);
                  if (local_f20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_f20.Data.AllocatorInstance.Data);
                  }
                }
                local_f70 = *puVar41;
                local_1070[0] = 0;
                local_10c8[0] = 2;
                Core::Private::Function::CheckCallable((void *)puVar41[2]);
                pcVar4 = (code *)puVar41[2];
                puVar29 = puVar41 + 4;
                if ((ulonglong *)puVar41[7] != (ulonglong *)0x0) {
                  puVar29 = (ulonglong *)puVar41[7];
                }
                uVar22 = (**(code **)(*puVar29 + 8))();
                (*pcVar4)(uVar22,&local_f70,local_10c8,local_1070);
                this_03 = local_1088;
                local_cc8 = (code *)0x0;
                local_ca0 = (longlong *)0x0;
                local_f68.ID = local_1028;
                local_109c = 0xffffffff;
                bVar15 = TMap<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>,int,0>_>
                         ::RemoveAndCopyValue
                                   ((TMap<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>,int,0>_>
                                     *)(local_1088 + 1),&local_f68,(int *)&local_109c);
                uVar36 = local_109c;
                this = pFVar8;
                if (((bVar15) && (this = local_10b0, -1 < (int)local_109c)) &&
                   ((int)local_109c < *(int *)(&this_03->field_0x0 + 0x28))) {
                  if ((*(int *)(&this_03->field_0x0 + 0x28) <= (int)local_109c) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Index>=0 && Index<NumBits",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                          ,0x5c6,L""), bVar15)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  puVar43 = &this_03->field_0x0 + 0x10;
                  if (*(undefined1 **)(&this_03->field_0x0 + 0x20) != (undefined1 *)0x0) {
                    puVar43 = *(undefined1 **)(&this_03->field_0x0 + 0x20);
                  }
                  uVar17 = uVar36;
                  if ((int)uVar36 < 0) {
                    uVar17 = uVar36 + 0x1f;
                  }
                  this = local_10b0;
                  if ((*(uint *)(puVar43 + (longlong)((int)uVar17 >> 5) * 4) >> (uVar36 & 0x1f) & 1)
                      != 0) {
                    TSparseArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FStorageEntry,FDefaultSparseArrayAllocator>
                    ::RemoveAt(this_03,uVar36,1);
                    this = local_10b0;
                  }
                }
                pFVar13 = local_10b0;
                if (local_cc8 == (code *)0x0) goto LAB_14314274b;
                Core::Private::Function::CheckCallable(local_cc8);
                pcVar4 = local_cc8;
                plVar42 = local_cb8;
                if (local_ca0 != (longlong *)0x0) {
                  plVar42 = local_ca0;
                }
                uVar22 = (**(code **)(*plVar42 + 8))();
                (*pcVar4)(uVar22);
                pFVar13 = local_10b0;
                if (local_cc8 == (code *)0x0) goto LAB_14314274b;
                plVar42 = local_cb8;
                if (local_ca0 != (longlong *)0x0) {
                  plVar42 = local_ca0;
                }
                (**(code **)(*plVar42 + 0x10))();
                uVar37 = (ulonglong)local_1098;
                FVar35 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>
                          )((longlong)FVar35 + 0x10);
                goto LAB_143142030;
              }
              iVar18 = *(int *)((longlong)iVar18 * 0x20 + 0x18 +
                               *(longlong *)&local_10b0->SocketIndex);
            } while (iVar18 != -1);
          }
        }
        if (6 < (byte)LogEventLoop._0_1_) {
          if (local_1028 == 0) {
            pFVar21 = ::FString::FString(&local_db8,L"<invalid>");
          }
          else {
            ::FString::PrintfImpl(&local_1038,L"%s:%llu");
            local_10a8 = (FName)local_1038.Data.AllocatorInstance;
            bVar6 = true;
            local_1038.Data.ArrayNum = 0;
            local_1038.Data.ArrayMax = 0;
            local_1038.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            bVar14 = true;
            ::FString::PrintfImpl(&local_e68,L"Internal:[ext:%s, idx:%d]");
            pFVar21 = &local_e68;
          }
          pFVar3 = (pFVar21->Data).AllocatorInstance.Data;
          (pFVar21->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar21->Data).ArrayNum = 0;
          (pFVar21->Data).ArrayMax = 0;
          if ((bVar14) &&
             (bVar14 = false,
             local_e68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_e68.Data.AllocatorInstance.Data);
          }
          if ((bVar6) && (bVar6 = false, local_10a8 != (FName)0x0)) {
            FMemory::Free((void *)local_10a8);
          }
          Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogEventLoop);
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
        }
        this = local_10b0;
        local_e58 = &local_1028;
        local_e50 = puVar41;
        TSet<TTuple<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,unsigned___int64>,TDefaultMapHashableKeyFuncs<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,unsigned___int64,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_const_&,unsigned___int64_const_&>_>
                  ((TSet<TTuple<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,unsigned___int64>,TDefaultMapHashableKeyFuncs<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,unsigned___int64,0>,FDefaultSetAllocator>
                    *)&local_10b0->SocketInternalHandleIndex,&local_f30,(bool *)&local_e58);
        local_e40 = &local_1028;
        local_e48 = puVar41;
        TSet<TTuple<unsigned___int64,UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<unsigned___int64_const_&,UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_const_&>_>
                  ((TSet<TTuple<unsigned___int64,UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,0>,FDefaultSetAllocator>
                    *)&this->SocketIndex,
                   (TPairInitializer<unsigned___int64_const_&,UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_const_&>
                    *)local_105c,(bool *)&local_e48);
        uVar37 = (ulonglong)local_1098;
        FVar35 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>
                  )((longlong)FVar35 + 0x10);
        this_03 = local_1088;
        goto LAB_143142030;
      }
      if (5 < (byte)LogEventLoop._0_1_) {
        ::FString::FString(&local_f48,L"NoResources");
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogEventLoop);
        if (local_f48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f48.Data.AllocatorInstance.Data);
        }
      }
      local_ec0 = *puVar41;
      local_1078[0] = 0;
      local_10d0[0] = 1;
      Core::Private::Function::CheckCallable((void *)*puVar33);
      pcVar4 = (code *)*puVar33;
      plVar28 = (longlong *)*puVar49;
      if ((longlong *)*puVar49 == (longlong *)0x0) {
        plVar28 = plVar42;
      }
      uVar22 = (**(code **)(*plVar28 + 8))();
      (*pcVar4)(uVar22,&local_ec0,local_10d0,local_1078);
      this_03 = local_1088;
      local_cf8 = (code *)0x0;
      local_cd0 = (longlong *)0x0;
      local_f78.ID = local_1028;
      local_10a0 = 0xffffffff;
      bVar15 = TMap<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>,int,0>_>
               ::RemoveAndCopyValue
                         ((TMap<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>,int,0>_>
                           *)(local_1088 + 1),&local_f78,(int *)&local_10a0);
      uVar36 = local_10a0;
      if (((bVar15) && (-1 < (int)local_10a0)) &&
         ((int)local_10a0 < *(int *)(&this_03->field_0x0 + 0x28))) {
        if ((*(int *)(&this_03->field_0x0 + 0x28) <= (int)local_10a0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5c6,L""), bVar15)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar43 = &this_03->field_0x0 + 0x10;
        if (*(undefined1 **)(&this_03->field_0x0 + 0x20) != (undefined1 *)0x0) {
          puVar43 = *(undefined1 **)(&this_03->field_0x0 + 0x20);
        }
        uVar17 = uVar36;
        if ((int)uVar36 < 0) {
          uVar17 = uVar36 + 0x1f;
        }
        if ((*(uint *)(puVar43 + (longlong)((int)uVar17 >> 5) * 4) >> (uVar36 & 0x1f) & 1) != 0) {
          TSparseArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FStorageEntry,FDefaultSparseArrayAllocator>
          ::RemoveAt(this_03,uVar36,1);
        }
      }
      pFVar13 = local_10b0;
      if (local_cf8 != (code *)0x0) {
        Core::Private::Function::CheckCallable(local_cf8);
        pcVar4 = local_cf8;
        plVar42 = local_ce8;
        if (local_cd0 != (longlong *)0x0) {
          plVar42 = local_cd0;
        }
        uVar22 = (**(code **)(*plVar42 + 8))();
        (*pcVar4)(uVar22);
        pFVar13 = local_10b0;
        if (local_cf8 == (code *)0x0) goto LAB_14314274b;
        plVar42 = local_ce8;
        if (local_cd0 != (longlong *)0x0) {
          plVar42 = local_cd0;
        }
        (**(code **)(*plVar42 + 0x10))();
        uVar37 = (ulonglong)local_1098;
        FVar35 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>
                  )((longlong)FVar35 + 0x10);
        this = local_10b0;
        goto LAB_143142030;
      }
    }
LAB_14314274b:
    this = pFVar13;
    FVar35 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>
              )((longlong)FVar35 + 0x10);
    uVar37 = (ulonglong)local_1098;
    goto LAB_143142030;
  }
  if (local_1068 != 0) {
    RebuildSelectData(this,&this->SelectData);
  }
  if (*(int *)&(this->IORequestStorage).Storage.field_0x8 ==
      *(int *)&(this->IORequestStorage).Storage.field_0x34) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
      StatPtr_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollInternal_IdleSleep =
           (FThreadSafeStaticStat<_public:_void___cdecl_UE::EventLoop::FIOManagerBSDSocketSelectImpl::PollInternal(FTimespan)_::_100_::FStat_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollInternal_IdleSleep>
            )0x0;
      pFVar19 = ::FName::FName(&local_e18,
                               "STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollInternal_IdleSleep"
                              );
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollInternal_IdleSleep,
                 *pFVar19,L"STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollInternal_IdleSleep",
                 "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                 MCR_Invalid);
      _Init_thread_footer(&::_TSS3);
    }
    FVar23 = StatPtr_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollInternal_IdleSleep;
    if (StatPtr_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollInternal_IdleSleep ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UE::EventLoop::FIOManagerBSDSocketSelectImpl::PollInternal(FTimespan)_::_100_::FStat_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollInternal_IdleSleep>
         )0x0) {
      pFVar19 = ::FName::FName(&local_e20,
                               "STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollInternal_IdleSleep"
                              );
      FVar23 = (FThreadSafeStaticStat<_public:_void___cdecl_UE::EventLoop::FIOManagerBSDSocketSelectImpl::PollInternal(FTimespan)_::_100_::FStat_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollInternal_IdleSleep>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &
                            StatPtr_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollInternal_IdleSleep
                            ,*pFVar19,
                            L"STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollInternal_IdleSleep",
                            "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                            false,MCR_Invalid);
    }
    FVar45 = *(FName *)FVar23;
    bVar15 = false;
    bVar5 = false;
    local_ff8.ComparisonIndex.Value = 0;
    local_ff8.Number = 0;
    FVar32 = FVar45.ComparisonIndex.Value;
    uVar36 = FVar45.Number;
    if ((FVar32.Value == 0) && (uVar36 == 0)) {
      FWindowsPlatformProcess::SleepNoStats((float)((double)FVar12.Ticks * __real_3e7ad7f29abcaf48))
      ;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_1064.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_1064._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
        bVar15 = false;
        bVar5 = true;
        if (-1 < CpuChannel->Enabled) {
          local_1080.ComparisonIndex.Value = FVar32.Value;
          local_1080.Number = uVar36;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_1080,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Private\\EventLoop\\BSDSocket\\EventLoopIOManagerBSDSocketSelect.cpp"
                     ,0xb1);
          bVar15 = true;
          bVar5 = true;
        }
      }
      bVar50 = FThreadStats::bPrimaryEnable != false;
      FVar34 = local_ff8;
      if (bVar50) {
        local_1080.ComparisonIndex.Value = FVar32.Value;
        local_1080.Number = uVar36;
        local_ff8 = FVar45;
        FThreadStats::AddMessage(FVar45,CycleScopeStart);
        puVar40 = (ulonglong *)((ulonglong)local_ff8 & 0xffffffff);
        FVar34 = FVar45;
      }
      FWindowsPlatformProcess::SleepNoStats((float)((double)FVar12.Ticks * __real_3e7ad7f29abcaf48))
      ;
      if (bVar5) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar15) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar50) && (FVar34 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        this_01 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_01 == (FThreadStats *)0x0) {
          this_02 = FThreadStatsPool::Get();
          this_01 = FThreadStatsPool::GetFromPool(this_02);
        }
        if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
          local_f10.NameAndInfo.Index.Value = (uint)puVar40;
          local_f10.NameAndInfo.Number = FVar34.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_f58);
          local_f10.StatData.Pad[4] = '\0';
          local_f10.StatData.Pad[5] = '\0';
          local_f10.StatData.Pad[6] = '\0';
          local_f10.StatData.Pad[7] = '\0';
          local_f10.StatData.Pad[0] = local_f58.s.LowPart._0_1_;
          local_f10.StatData.Pad[1] = local_f58.s.LowPart._1_1_;
          local_f10.StatData.Pad[2] = local_f58.s.LowPart._2_1_;
          local_f10.StatData.Pad[3] = local_f58.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_01,&local_f10);
          piVar25 = &this_01->ScopeCount;
          *piVar25 = *piVar25 + -1;
          if (*piVar25 == 0) {
            FThreadStats::Flush(this_01,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_01,false,false);
          }
        }
      }
    }
    goto LAB_143143275;
  }
  local_758.MaxFd = 0xffffffffffffffff;
  iVar18 = PollSelectData(this,&this->SelectData,&local_758,FVar12);
  if (iVar18 < 1) {
    if (iVar18 < 0) {
      local_138[0] = '\0';
      piVar25 = _errno();
      strerror_s(local_138,0x100,*piVar25);
      _errno();
      local_878._padding_ = 0;
      sVar26 = strlen(local_138);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_878,local_138,(int)sVar26,Yes);
      ::FString::PrintfImpl(&local_f00,L"%s: (%d)");
      if ((void *)local_878._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_878._padding_);
      }
      Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)&PTR_u__FIOManagerBSDS_150a4c5b0,
                 (FLogCategoryBase *)&LogEventLoop);
      if (local_f00.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f00.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_143143275;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    StatPtr_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollInternal_HandleIOState =
         (FThreadSafeStaticStat<_public:_void___cdecl_UE::EventLoop::FIOManagerBSDSocketSelectImpl::PollInternal(FTimespan)_::_103_::FStat_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollInternal_HandleIOState>
          )0x0;
    pFVar19 = ::FName::FName(local_da8,
                             "STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollInternal_HandleIOState"
                            );
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollInternal_HandleIOState,
               *pFVar19,L"STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollInternal_HandleIOState",
               "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&::_TSS4);
  }
  FVar24 = StatPtr_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollInternal_HandleIOState;
  if (StatPtr_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollInternal_HandleIOState ==
      (FThreadSafeStaticStat<_public:_void___cdecl_UE::EventLoop::FIOManagerBSDSocketSelectImpl::PollInternal(FTimespan)_::_103_::FStat_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollInternal_HandleIOState>
       )0x0) {
    pFVar19 = ::FName::FName(&local_f38,
                             "STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollInternal_HandleIOState"
                            );
    FVar24 = (FThreadSafeStaticStat<_public:_void___cdecl_UE::EventLoop::FIOManagerBSDSocketSelectImpl::PollInternal(FTimespan)_::_103_::FStat_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollInternal_HandleIOState>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &
                          StatPtr_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollInternal_HandleIOState
                          ,*pFVar19,
                          L"STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollInternal_HandleIOState"
                          ,"STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar45 = *(FName *)FVar24;
  bVar14 = false;
  bVar7 = false;
  local_fd8.ComparisonIndex.Value = 0;
  local_fd8.Number = 0;
  bVar6 = false;
  bVar16 = false;
  if ((FVar45.ComparisonIndex.Value.Value == 0) && (FVar45.Number == 0)) {
LAB_143142cf6:
    bVar7 = bVar16;
    bVar14 = bVar6;
    bVar6 = false;
    local_10a8 = local_fd8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1060.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1060._s_0,(char *)*(FName *)((longlong)FVar24 + 0x10));
      bVar14 = false;
      bVar7 = true;
      bVar6 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_fe0.ComparisonIndex.Value = FVar45.ComparisonIndex.Value.Value;
        local_fe0.Number = FVar45.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_fe0,(wchar_t *)*(FName *)((longlong)FVar24 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Private\\EventLoop\\BSDSocket\\EventLoopIOManagerBSDSocketSelect.cpp"
                   ,0xbd);
        bVar14 = true;
        bVar7 = true;
        bVar6 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143142cf6;
    local_10a8 = FVar45;
    FThreadStats::AddMessage(FVar45,CycleScopeStart);
    bVar6 = true;
  }
  local_fc8 = &this->IORequestStorage;
  uVar17 = *(uint *)&(this->IORequestStorage).Storage.field_0x28;
  TStack_fc0.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(this->IORequestStorage).Storage.field_0x10;
  uStack_ee4 = 1;
  local_ed0 = 0;
  uStack_ed4 = local_ed0;
  if (uVar17 != 0) {
    puVar27 = *(uint **)&(this->IORequestStorage).Storage.field_0x20;
    if (puVar27 == (uint *)0x0) {
      puVar27 = (uint *)TStack_fc0.Array;
    }
    uVar2 = *puVar27;
    puVar41 = puVar40;
    while( true ) {
      uVar36 = (uint)puVar40;
      local_ed0 = (uint)puVar41;
      if (uVar2 != 0) break;
      lVar30 = (longlong)(int)uVar36;
      local_ed0 = local_ed0 + 0x20;
      puVar41 = (ulonglong *)(ulonglong)local_ed0;
      uVar36 = uVar36 + 1;
      puVar40 = (ulonglong *)(ulonglong)uVar36;
      uStack_ed4 = uVar17;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar36)
      goto LAB_143142d92;
      uVar2 = puVar27[lVar30 + 1];
    }
    uStack_ee4 = -uVar2 & uVar2;
    uVar37 = (ulonglong)uStack_ee4 * 2 + 1;
    lVar30 = 0x3f;
    if (uVar37 != 0) {
      for (; uVar37 >> lVar30 == 0; lVar30 = lVar30 + -1) {
      }
    }
    local_f30.Key._4_4_ = (int)lVar30;
    uStack_ed4 = local_f30.Key._4_4_ + -1 + local_ed0;
    if ((int)uVar17 < (int)uStack_ed4) {
      uStack_ed4 = uVar17;
    }
  }
LAB_143142d92:
  uStack_ecc = local_cfc;
  iStack_ec8 = *(int *)&(this->IORequestStorage).Storage.field_0x8 -
               *(int *)&(this->IORequestStorage).Storage.field_0x34;
  TStack_fc0._padding_ = CONCAT44(uStack_ee4,uVar36);
  uStack_ed8 = 0xffffffff;
  TStack_fc0._16_8_ = CONCAT44(uStack_ed4,0xffffffff);
  TStack_fc0._28_4_ = local_cfc;
  TStack_fc0.BaseBitIndex = local_ed0;
  uStack_fa0 = CONCAT44(uStack_ec4,iStack_ec8);
  cVar44 = (int)uStack_ed4 < *(int *)&(this->IORequestStorage).Storage.field_0x28;
  if ((bool)cVar44) {
    plVar42 = (longlong *)((longlong)(int)uStack_ed4 * 0x50 + *(longlong *)&local_fc8->Storage);
    local_f98 = *plVar42;
    lStack_f90 = plVar42[1];
    local_f88 = (SOCKET *)
                (*(longlong *)&local_fc8->Storage + 0x10 + (longlong)(int)uStack_ed4 * 0x50);
    local_de8 = local_f98;
    lStack_de0 = lStack_f90;
    local_dd8 = local_f88;
  }
  local_f80 = cVar44;
  local_ef0 = local_fc8;
  uStack_ee8 = uVar36;
  local_ee0 = (undefined1 *)TStack_fc0.Array;
  TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>
  ::end(local_fc8,&local_d68);
  uVar37 = (ulonglong)TStack_fc0._16_8_ >> 0x20;
  FVar45 = local_f38;
  while( true ) {
    pTVar10 = TStack_fc0.Array;
    pTVar9 = local_fc8;
    if (*(int *)&(local_fc8->Storage).field_0x8 - *(int *)&(local_fc8->Storage).field_0x34 !=
        (int)uStack_fa0) {
      local_10c0[0] = 0;
      `TSparseArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FStorageEntry,FDefaultSparseArrayAllocator>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_10c0);
    }
    FVar34 = local_10a8;
    if ((((int)uVar37 == local_d68.StorageIterator._padding_._4_4_) &&
        (pTVar10 == (TBitArray<FDefaultBitArrayAllocator> *)local_d68.StorageIterator._padding_)) &&
       (pTVar9 == (TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>
                   *)local_d68.StorageIterator._padding_)) break;
    if ((cVar44 == '\0') &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar16)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pSVar11 = local_f88;
    uVar36 = 0;
    if ((local_f88[1] & 1) != 0) {
      iVar18 = __WSAFDIsSet(*local_f88,(fd_set *)&local_758);
      uVar36 = 0;
      if (iVar18 != 0) {
        uVar36 = 1;
      }
    }
    if (((pSVar11[1] & 2) != 0) &&
       ((iVar18 = __WSAFDIsSet(*pSVar11,(fd_set *)&local_758.SocketWriteSet), iVar18 != 0 ||
        (iVar18 = __WSAFDIsSet(*pSVar11,(fd_set *)&local_758.SocketExceptionSet), iVar18 != 0)))) {
      uVar36 = uVar36 | 2;
    }
    if (uVar36 != 0) {
      if (6 < (byte)LogEventLoop._0_1_) {
        if (local_f98 == 0) {
          bVar5 = true;
          pFVar21 = ::FString::FString(&local_df8,L"<invalid>");
        }
        else {
          ::FString::PrintfImpl(&local_1018,L"%s:%llu");
          FVar45 = (FName)local_1018.Data.AllocatorInstance;
          bVar15 = true;
          local_1018.Data.ArrayNum = 0;
          local_1018.Data.ArrayMax = 0;
          local_1018.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          bVar50 = true;
          ::FString::PrintfImpl(&local_e38,L"Internal:[ext:%s, idx:%d]");
          pFVar21 = &local_e38;
        }
        pFVar3 = (pFVar21->Data).AllocatorInstance.Data;
        (pFVar21->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar21->Data).ArrayNum = 0;
        (pFVar21->Data).ArrayMax = 0;
        if ((bVar5) &&
           (bVar5 = false, local_df8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_df8.Data.AllocatorInstance.Data);
        }
        if ((bVar50) &&
           (bVar50 = false, local_e38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
           ) {
          FMemory::Free(local_e38.Data.AllocatorInstance.Data);
        }
        if ((bVar15) && (bVar15 = false, FVar45 != (FName)0x0)) {
          FMemory::Free((void *)FVar45);
        }
        Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogEventLoop);
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
      }
      local_f50 = *pSVar11;
      local_10b8[0] = 0;
      local_1090[0] = uVar36;
      Core::Private::Function::CheckCallable((void *)pSVar11[2]);
      pSVar31 = (SOCKET *)pSVar11[7];
      pcVar4 = (code *)pSVar11[2];
      if (pSVar31 == (SOCKET *)0x0) {
        pSVar31 = pSVar11 + 4;
      }
      uVar22 = (**(code **)(*pSVar31 + 8))();
      (*pcVar4)(uVar22,&local_f50,local_10b8,local_1090);
    }
    TStack_fc0.UnvisitedBitMask = TStack_fc0.UnvisitedBitMask & ~TStack_fc0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_fc0);
    uVar37 = (ulonglong)TStack_fc0.CurrentBitIndex;
    cVar44 = local_f80;
    if (TStack_fc0.CurrentBitIndex < (TStack_fc0.Array)->NumBits) {
      local_f80 = '\x01';
      plVar42 = (longlong *)(uVar37 * 0x50 + *(longlong *)&local_fc8->Storage);
      local_f98 = *plVar42;
      lStack_f90 = plVar42[1];
      local_f88 = (SOCKET *)(*(longlong *)&local_fc8->Storage + 0x10 + uVar37 * 0x50);
      cVar44 = '\x01';
      local_dd0 = local_f98;
      lStack_dc8 = lStack_f90;
      local_dc0 = local_f88;
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(FVar34,CycleScopeEnd);
  }
LAB_143143275:
  if ((FName)local_c98.AllocatorInstance.SecondaryData != (FName)0x0) {
    FMemory::Free((void *)local_c98.AllocatorInstance.SecondaryData);
  }
  if (local_a88.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>
       )0x0) {
    FMemory::Free((void *)local_a88.AllocatorInstance.SecondaryData);
  }
  if ((local_1000 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_1000 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_1000 & 4) != 0) {
    FThreadStats::AddMessage(local_1008,CycleScopeEnd);
  }
  return;
LAB_143141de4:
  uVar17 = *puVar27;
  if (uVar17 == 0xffffffff) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("NextElementIndex != INDEX_NONE",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                        ,0x2b5,L"Corrupt hash");
    if (bVar14) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (uVar17 == uVar36) goto LAB_143141e3a;
  puVar27 = (uint *)((longlong)(int)uVar17 * 0x20 + 0x18 + *(longlong *)&this_00->field_0x0);
  goto LAB_143141de4;
LAB_143141e3a:
  *puVar27 = (uint)local_f30.Value[(longlong)(int)uVar36 * 4 + 3];
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00,uVar36,1);
  uVar46 = local_fe8;
  if (6 < (byte)LogEventLoop._0_1_) {
    if (local_e98 == 0) {
      bVar15 = true;
      pFVar21 = ::FString::FString(&local_e10,L"<invalid>");
      FVar48.Data = (FScriptContainerElement *)local_105c._12_8_;
    }
    else {
      ::FString::PrintfImpl(&local_1048,L"%s:%llu");
      FVar48.Data = local_1048.Data.AllocatorInstance.Data;
      bVar50 = true;
      local_1048.Data.ArrayNum = 0;
      local_1048.Data.ArrayMax = 0;
      local_1048.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_105c._12_8_ = FVar48.Data;
      bVar5 = true;
      ::FString::PrintfImpl(&local_e88,L"Internal:[ext:%s, idx:%d]");
      pFVar21 = &local_e88;
    }
    pFVar3 = (pFVar21->Data).AllocatorInstance.Data;
    (pFVar21->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar21->Data).ArrayNum = 0;
    (pFVar21->Data).ArrayMax = 0;
    if ((bVar15) &&
       (bVar15 = false, local_e10.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_e10.Data.AllocatorInstance.Data);
    }
    if ((bVar5) &&
       (bVar5 = false, local_e88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_e88.Data.AllocatorInstance.Data);
    }
    if ((bVar50) && (bVar50 = false, FVar48.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(FVar48.Data);
    }
    uVar46 = local_fe8;
    Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogEventLoop);
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
  }
  this = local_10b0;
  TSet<TTuple<unsigned___int64,UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,0>,FDefaultSetAllocator>
  ::Remove((TSet<TTuple<unsigned___int64,UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,0>,FDefaultSetAllocator>
            *)&local_10b0->SocketIndex,uVar46);
  FVar45 = (FName)((longlong)local_10a8 + 0x10);
  uVar37 = (ulonglong)local_1098;
  FVar34 = (FName)local_105c._4_8_;
  goto LAB_143141c68;
}

// PollSelectData @ 143143300

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::EventLoop::FIOManagerBSDSocketSelectImpl::PollSelectData
          (FIOManagerBSDSocketSelectImpl *this,FSelectData *param_1,FSelectData *param_2,
          FTimespan param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_private:_int___cdecl_UE::EventLoop::FIOManagerBSDSocketSelectImpl::PollSelectData(UE::EventLoop::FIOManagerBSDSocketSelectImpl::FSelectData_const_&,UE::EventLoop::FIOManagerBSDSocketSelectImpl::FSelectData_&,FTimespan)const_::_2_::FStat_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollSelectData>
  FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  longlong lVar11;
  FNameEntryId FVar12;
  FName FVar13;
  timeval *timeout;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  timeval local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FStatMessage local_50;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollSelectData ==
          (FThreadSafeStaticStat<_private:_int___cdecl_UE::EventLoop::FIOManagerBSDSocketSelectImpl::PollSelectData(UE::EventLoop::FIOManagerBSDSocketSelectImpl::FSelectData_const_&,UE::EventLoop::FIOManagerBSDSocketSelectImpl::FSelectData_&,FTimespan)const_::_2_::FStat_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollSelectData>
           )0x0) {
        pFVar8 = ::FName::FName(&local_70,
                                "STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollSelectData");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollSelectData,*pFVar8,
                   L"STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollSelectData","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar9 = StatPtr_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollSelectData;
  if (StatPtr_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollSelectData ==
      (FThreadSafeStaticStat<_private:_int___cdecl_UE::EventLoop::FIOManagerBSDSocketSelectImpl::PollSelectData(UE::EventLoop::FIOManagerBSDSocketSelectImpl::FSelectData_const_&,UE::EventLoop::FIOManagerBSDSocketSelectImpl::FSelectData_&,FTimespan)const_::_2_::FStat_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollSelectData>
       )0x0) {
    pFVar8 = ::FName::FName(&local_68,"STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollSelectData")
    ;
    FVar9 = (FThreadSafeStaticStat<_private:_int___cdecl_UE::EventLoop::FIOManagerBSDSocketSelectImpl::PollSelectData(UE::EventLoop::FIOManagerBSDSocketSelectImpl::FSelectData_const_&,UE::EventLoop::FIOManagerBSDSocketSelectImpl::FSelectData_&,FTimespan)const_::_2_::FStat_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollSelectData>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollSelectData,
                         *pFVar8,L"STAT_EventLoop_FIOManagerBSDSocketSelectImpl_PollSelectData",
                         "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false
                         ,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar9;
  bVar3 = false;
  bVar5 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar10 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar12.Value;
        local_res18.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Private\\EventLoop\\BSDSocket\\EventLoopIOManagerBSDSocketSelect.cpp"
                   ,0x103);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar12.Value;
      local_res20.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar4 = true;
      goto LAB_143143480;
    }
  }
  bVar4 = false;
  FVar13 = local_60;
LAB_143143480:
  memcpy(param_2,param_1,0x620);
  local_78.tv_sec = (long)((double)param_3.Ticks * __real_3e7ad7f29abcaf48);
  lVar11 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(param_3.Ticks),8) + param_3.Ticks;
  local_78.tv_usec =
       (long)((param_3.Ticks + ((lVar11 >> 0x17) - (lVar11 >> 0x3f)) * -10000000) / 10);
  timeout = &local_78;
  if (param_3.Ticks < 0) {
    timeout = (timeval *)0x0;
  }
  lVar11 = param_2->MaxFd + 1;
  iVar7 = (int)lVar11;
  if ((lVar11 != iVar7) || (iVar7 < 0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      iVar7 = (*pcVar2)();
      return iVar7;
    }
  }
  iVar7 = select(iVar7,(fd_set *)param_2,(fd_set *)&param_2->SocketWriteSet,
                 (fd_set *)&param_2->SocketExceptionSet,timeout);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_50.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_50.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_50.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_50.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_50.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_50);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return iVar7;
}

// RebuildSelectData @ 1431436f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::EventLoop::FIOManagerBSDSocketSelectImpl::RebuildSelectData
          (FIOManagerBSDSocketSelectImpl *this,FSelectData *param_1)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  ulonglong uVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  TMap<unsigned___int64,UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,0>_>
  *pTVar8;
  bool bVar9;
  bool bVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_private:_void___cdecl_UE::EventLoop::FIOManagerBSDSocketSelectImpl::RebuildSelectData(UE::EventLoop::FIOManagerBSDSocketSelectImpl::FSelectData_&)const_::_2_::FStat_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_RebuildSelectData>
  FVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  byte bVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  int iVar17;
  uint uVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  uint *puVar21;
  byte *pbVar22;
  uint uVar23;
  undefined1 *puVar24;
  uint uVar25;
  undefined1 local_res10 [8];
  uint local_res18;
  FColor_u_0 local_res20 [2];
  FName local_108;
  FName local_100;
  FName local_f8;
  TMap<unsigned___int64,UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,0>_>
  *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  int local_b8;
  int local_b4;
  LARGE_INTEGER local_b0;
  FStatMessage local_a8;
  TMap<unsigned___int64,UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  longlong local_68;
  longlong lStack_60;
  FName local_58;
  FName local_50 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_RebuildSelectData ==
        (FThreadSafeStaticStat<_private:_void___cdecl_UE::EventLoop::FIOManagerBSDSocketSelectImpl::RebuildSelectData(UE::EventLoop::FIOManagerBSDSocketSelectImpl::FSelectData_&)const_::_2_::FStat_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_RebuildSelectData>
         )0x0) {
      pFVar11 = ::FName::FName(&local_58,
                               "STAT_EventLoop_FIOManagerBSDSocketSelectImpl_RebuildSelectData");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_RebuildSelectData,*pFVar11,
                 L"STAT_EventLoop_FIOManagerBSDSocketSelectImpl_RebuildSelectData","STATGROUP_Quick"
                 ,"STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar12 = StatPtr_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_RebuildSelectData;
  if (StatPtr_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_RebuildSelectData ==
      (FThreadSafeStaticStat<_private:_void___cdecl_UE::EventLoop::FIOManagerBSDSocketSelectImpl::RebuildSelectData(UE::EventLoop::FIOManagerBSDSocketSelectImpl::FSelectData_&)const_::_2_::FStat_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_RebuildSelectData>
       )0x0) {
    pFVar11 = ::FName::FName(local_50,
                             "STAT_EventLoop_FIOManagerBSDSocketSelectImpl_RebuildSelectData");
    FVar12 = (FThreadSafeStaticStat<_private:_void___cdecl_UE::EventLoop::FIOManagerBSDSocketSelectImpl::RebuildSelectData(UE::EventLoop::FIOManagerBSDSocketSelectImpl::FSelectData_&)const_::_2_::FStat_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_RebuildSelectData>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_EventLoop_FIOManagerBSDSocketSelectImpl_RebuildSelectData,
                          *pFVar11,L"STAT_EventLoop_FIOManagerBSDSocketSelectImpl_RebuildSelectData"
                          ,"STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar12;
  bVar7 = false;
  bVar6 = false;
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  bVar10 = false;
  bVar9 = false;
  if ((FVar3.ComparisonIndex.Value.Value != 0) || (FVar3.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar7 = false;
      bVar6 = true;
      bVar10 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_108.ComparisonIndex.Value = FVar3.ComparisonIndex.Value.Value;
        local_108.Number = FVar3.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_108,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Private\\EventLoop\\BSDSocket\\EventLoopIOManagerBSDSocketSelect.cpp"
                   ,0xe0);
        bVar7 = true;
        bVar6 = true;
        bVar10 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_100 = FVar3;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      bVar9 = true;
      goto LAB_143143876;
    }
  }
  bVar7 = bVar10;
  bVar6 = bVar9;
  bVar9 = false;
  local_100 = local_f8;
LAB_143143876:
  (param_1->SocketReadSet).fd_count = 0;
  (param_1->SocketWriteSet).fd_count = 0;
  (param_1->SocketExceptionSet).fd_count = 0;
  local_c8 = 0;
  local_d8 = &(this->SocketIndex).field_0x10;
  param_1->MaxFd = 0xffffffffffffffff;
  iVar2 = *(int *)&(this->SocketIndex).field_0x28;
  uStack_dc = 1;
  iStack_cc = 0;
  iStack_e0 = 0;
  if (iVar2 != 0) {
    puVar21 = *(uint **)&(this->SocketIndex).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)local_d8;
    }
    uVar25 = *puVar21;
    while (uVar25 == 0) {
      lVar14 = (longlong)iStack_e0;
      local_c8 = local_c8 + 0x20;
      iStack_e0 = iStack_e0 + 1;
      iStack_cc = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e0) goto LAB_14314391f;
      uVar25 = puVar21[lVar14 + 1];
    }
    uStack_dc = -uVar25 & uVar25;
    uVar15 = (ulonglong)uStack_dc * 2 + 1;
    lVar14 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_b8 = (int)lVar14;
    iStack_cc = local_b8 + -1 + local_c8;
    if (iVar2 < iStack_cc) {
      iStack_cc = iVar2;
    }
  }
LAB_14314391f:
  local_res18 = *(uint *)&(this->SocketIndex).field_0x28;
  local_e8 = &this->SocketIndex;
  iStack_c0 = *(int *)&(this->SocketIndex).field_0x8 - *(int *)&(this->SocketIndex).field_0x34;
  uVar25 = local_res18 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(uStack_dc,iStack_e0);
  uStack_d0 = 0xffffffff;
  TStack_90.CurrentBitIndex = iStack_cc;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)local_res18 >> 5;
  TStack_90._28_4_ = iStack_cc;
  TStack_90.BaseBitIndex = local_c8;
  uStack_70 = CONCAT44(uStack_bc,iStack_c0);
  bVar13 = (byte)local_res18;
  iStack_c4 = iStack_cc;
  local_98 = local_e8;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_d8;
  if ((((int)local_res18 < 0) || (iVar2 < (int)local_res18)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar18 = *(uint *)&(this->SocketIndex).field_0x28;
  if (local_res18 != uVar18) {
    puVar19 = *(undefined1 **)&(this->SocketIndex).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = &(this->SocketIndex).field_0x10;
    }
    uVar23 = -1 << (bVar13 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar23 == 0) {
      lVar14 = (longlong)iVar17;
      uVar25 = uVar25 + 0x20;
      iVar17 = iVar17 + 1;
      local_res18 = uVar18;
      if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_143143a55;
      uVar23 = *(uint *)(puVar19 + lVar14 * 4 + 4);
    }
    uVar15 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_b4 = (int)lVar14;
    local_res18 = local_b4 + -1 + uVar25;
    if ((int)uVar18 < (int)local_res18) {
      local_res18 = uVar18;
    }
  }
LAB_143143a55:
  uVar25 = local_res18;
  do {
    pTVar8 = local_98;
    if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    FVar3 = local_100;
    if (((TStack_90.CurrentBitIndex == uVar25) &&
        (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->SocketIndex).field_0x10)
        ) && (pTVar8 == &this->SocketIndex)) {
      if (bVar6) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar7) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (((bVar9) && (FVar3 != (FName)0x0)) &&
         ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff))))
      {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
          local_a8.NameAndInfo.Index = FVar3.ComparisonIndex.Value;
          local_a8.NameAndInfo.Number = FVar3.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_b0);
          local_a8.StatData.Pad[4] = '\0';
          local_a8.StatData.Pad[5] = '\0';
          local_a8.StatData.Pad[6] = '\0';
          local_a8.StatData.Pad[7] = '\0';
          local_a8.StatData.Pad[0] = local_b0.s.LowPart._0_1_;
          local_a8.StatData.Pad[1] = local_b0.s.LowPart._1_1_;
          local_a8.StatData.Pad[2] = local_b0.s.LowPart._2_1_;
          local_a8.StatData.Pad[3] = local_b0.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_00,&local_a8);
          piVar1 = &this_00->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(this_00,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_00,false,false);
          }
        }
      }
      return;
    }
    lVar14 = *(longlong *)pTVar8;
    plVar20 = (longlong *)((longlong)TStack_90.CurrentBitIndex * 0x20 + 8 + lVar14);
    local_68 = *plVar20;
    lStack_60 = plVar20[1];
    uVar18 = (uint)*(undefined8 *)((longlong)TStack_90.CurrentBitIndex * 0x20 + 0x10 + lVar14);
    if ((-1 < (int)uVar18) && ((int)uVar18 < *(int *)&(this->IORequestStorage).Storage.field_0x28))
    {
      if ((*(int *)&(this->IORequestStorage).Storage.field_0x28 <= (int)uVar18) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5c6,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar19 = *(undefined1 **)&(this->IORequestStorage).Storage.field_0x20;
      puVar24 = &(this->IORequestStorage).Storage.field_0x10;
      if (puVar19 != (undefined1 *)0x0) {
        puVar24 = puVar19;
      }
      uVar23 = uVar18;
      if ((int)uVar18 < 0) {
        uVar23 = uVar18 + 0x1f;
      }
      if ((*(uint *)(puVar24 + (longlong)((int)uVar23 >> 5) * 4) >> (uVar18 & 0x1f) & 1) != 0) {
        plVar20 = (longlong *)
                  ((longlong)(int)uVar18 * 0x50 + *(longlong *)&(this->IORequestStorage).Storage);
        if (*plVar20 == local_68) {
          puVar16 = (ulonglong *)(plVar20 + 2);
          pbVar22 = (byte *)(plVar20 + 3);
        }
        else {
          puVar16 = (ulonglong *)0x0;
          pbVar22 = &DAT_00000008;
        }
        if (puVar16 != (ulonglong *)0x0) {
          uVar15 = *puVar16;
          if ((param_1->MaxFd != 0xffffffffffffffff) &&
             (uVar4 = (this->SelectData).MaxFd, uVar15 < uVar4)) {
            uVar15 = uVar4;
          }
          param_1->MaxFd = uVar15;
          if ((*pbVar22 & 1) != 0) {
            uVar18 = (param_1->SocketReadSet).fd_count;
            uVar15 = 0;
            if (uVar18 != 0) {
              do {
                if ((param_1->SocketReadSet).fd_array[uVar15] == *puVar16) break;
                uVar23 = (int)uVar15 + 1;
                uVar15 = (ulonglong)uVar23;
              } while (uVar23 < uVar18);
            }
            if (((uint)uVar15 == uVar18) && (uVar18 < 0x40)) {
              (param_1->SocketReadSet).fd_array[uVar15] = *puVar16;
              (param_1->SocketReadSet).fd_count = (param_1->SocketReadSet).fd_count + 1;
            }
          }
          if ((*pbVar22 & 2) != 0) {
            uVar18 = (param_1->SocketWriteSet).fd_count;
            uVar15 = 0;
            if (uVar18 != 0) {
              do {
                if ((param_1->SocketWriteSet).fd_array[uVar15] == *puVar16) goto LAB_143143c0a;
                uVar23 = (int)uVar15 + 1;
                uVar15 = (ulonglong)uVar23;
              } while (uVar23 < uVar18);
            }
            if (((uint)uVar15 == uVar18) && (uVar18 < 0x40)) {
              (param_1->SocketWriteSet).fd_array[uVar15] = *puVar16;
              (param_1->SocketWriteSet).fd_count = (param_1->SocketWriteSet).fd_count + 1;
            }
LAB_143143c0a:
            uVar18 = (param_1->SocketExceptionSet).fd_count;
            uVar15 = 0;
            if (uVar18 != 0) {
              do {
                if ((param_1->SocketExceptionSet).fd_array[uVar15] == *puVar16) goto LAB_143143c4a;
                uVar23 = (int)uVar15 + 1;
                uVar15 = (ulonglong)uVar23;
              } while (uVar23 < uVar18);
            }
            if (((uint)uVar15 == uVar18) && (uVar18 < 0x40)) {
              (param_1->SocketExceptionSet).fd_array[uVar15] = *puVar16;
              (param_1->SocketExceptionSet).fd_count = (param_1->SocketExceptionSet).fd_count + 1;
            }
          }
        }
      }
    }
LAB_143143c4a:
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  } while( true );
}

// Shutdown @ 143144830

void __thiscall
UE::EventLoop::FIOManagerBSDSocketSelectImpl::Shutdown(FIOManagerBSDSocketSelectImpl *this)

{
  return;
}

