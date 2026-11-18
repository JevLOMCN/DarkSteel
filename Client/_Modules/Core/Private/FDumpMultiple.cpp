// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FDumpMultiple @ 1419cd8e0

FDumpMultiple * __thiscall FDumpMultiple::FDumpMultiple(FDumpMultiple *this)

{
  FStatsThreadState *pFVar1;
  FDelegateHandle FVar2;
  
  pFVar1 = FStatsThreadState::GetLocalState();
  this->Stats = pFVar1;
  this->NumFrames = 0;
  this->NumFramesToGo = 0;
  this->Stack = (FRawStatStackNode *)0x0;
  (this->NewFrameDelegateHandle).ID = 0;
  this->bAverage = true;
  this->bSum = false;
  LOCK();
  FThreadStats::PrimaryEnableCounter.Counter = FThreadStats::PrimaryEnableCounter.Counter + 1;
  UNLOCK();
  FThreadStats::CheckEnable();
  FVar2 = TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>::
          AddRaw<FDumpMultiple>
                    ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
                      *)&this->Stats->NewFrameDelegate,(FDumpMultiple *)&stack0x00000008,
                     (pmf_bde167ba)this);
                    /* WARNING: Load size is inaccurate */
  (this->NewFrameDelegateHandle).ID = *FVar2.ID;
  return this;
}

// ~FDumpMultiple @ 1419d2270

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDumpMultiple::~FDumpMultiple(FDumpMultiple *this)

{
  atomic<void_*> this_00;
  FDelegateHandle FVar1;
  uint uVar2;
  TLockFreeFixedSizeAllocator<96,64,FNoopCounter> *this_01;
  FStaticBasicLogRecord *pFVar3;
  FIndexedLockFreeLink *pFVar4;
  wchar_t *pwVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  pFVar4 = (FIndexedLockFreeLink *)0x0;
  if ((this->Stack == (FRawStatStackNode *)0x0) || (uVar2 = this->NumFrames, uVar2 == 0))
  goto LAB_1419d2460;
  if (this->bAverage == false) {
    if (this->bSum == false) {
      if (4 < (byte)LogStats._0_1_) {
        pFVar3 = &`public:___cdecl_FDumpMultiple::~FDumpMultiple(void)___ptr64'::__l54::LOG_Static;
        goto LAB_1419d22f0;
      }
    }
    else if (4 < (byte)LogStats._0_1_) {
      pFVar3 = &`public:___cdecl_FDumpMultiple::~FDumpMultiple(void)___ptr64'::__l34::LOG_Static;
LAB_1419d22f0:
      UE::Logging::Private::BasicLog<5>(pFVar3,(FLogCategoryBase *)&LogStats);
    }
  }
  else {
    if (1 < (int)uVar2) {
      FRawStatStackNode::Divide(this->Stack,uVar2);
    }
    if (4 < (byte)LogStats._0_1_) {
      pFVar3 = &`public:___cdecl_FDumpMultiple::~FDumpMultiple(void)___ptr64'::__l12::LOG_Static;
      goto LAB_1419d22f0;
    }
  }
  FRawStatStackNode::AddNameHierarchy(this->Stack,0);
  FRawStatStackNode::AddSelf(this->Stack);
  if (DumpCull != 0.0) {
    FRawStatStackNode::CullByCycles
              (this->Stack,
               (longlong)
               (DumpCull / (float)(FGenericPlatformTime::SecondsPerCycle * __real_408f400000000000))
              );
  }
  if ((GNameFilter.Data.ArrayNum < 2) || (GLeafFilter.Data.ArrayNum < 2)) {
    if (GLeafFilter.Data.ArrayNum < 2) {
      pwVar5 = L"";
      if (GNameFilter.Data.ArrayNum != 0) {
        pwVar5 = (wchar_t *)GNameFilter.Data.AllocatorInstance.Data;
      }
      FRawStatStackNode::DebugPrint(this->Stack,pwVar5,GMaxDepth,0);
    }
    else {
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      FRawStatStackNode::DebugPrintLeafFilterInner
                (this->Stack,(wchar_t *)GLeafFilter.Data.AllocatorInstance.Data,0,&local_18);
      DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
    }
  }
  else if (4 < (byte)LogStats._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`public:___cdecl_FDumpMultiple::~FDumpMultiple(void)___ptr64'::__l78::LOG_Static,
               (FLogCategoryBase *)&LogStats);
  }
  this_00 = (atomic<void_*>)this->Stack;
  if (this_00 != (atomic<void_*>)0x0) {
    FRawStatStackNode::DeleteAllChildrenNodes((FRawStatStackNode *)this_00);
    TMapBase<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
    ::
    ~TMapBase<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
              ((TMapBase<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
                *)((longlong)this_00 + 0x10));
    this_01 = GetRawStatStackNodeAllocator();
    uVar2 = FLockFreeLinkPolicy::AllocLockFreeLink();
    if (uVar2 != 0) {
      pFVar4 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe] + (uVar2 & 0x3fff);
    }
    pFVar4->Payload = this_00;
    FLockFreePointerListLIFORoot<64,1>::Push((FLockFreePointerListLIFORoot<64,1> *)this_01,uVar2);
  }
  this->Stack = (FRawStatStackNode *)0x0;
LAB_1419d2460:
  FVar1.ID = (this->NewFrameDelegateHandle).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               &this->Stats->NewFrameDelegate,FVar1);
  }
  LOCK();
  FThreadStats::PrimaryEnableCounter.Counter = FThreadStats::PrimaryEnableCounter.Counter + -1;
  UNLOCK();
  FThreadStats::CheckEnable();
  DumpMultiple = (FDumpMultiple *)0x0;
  return;
}

// NewFrame @ 141a0bf90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FDumpMultiple::NewFrame(FDumpMultiple *this,long64 param_1)

{
  FStatsThreadState *pFVar1;
  FRawStatStackNode *pFVar2;
  TArray<FStatMessage,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [80];
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if (this->Stack == (FRawStatStackNode *)0x0) {
    pFVar2 = FRawStatStackNode::operator_new(0x60);
    if (pFVar2 == (FRawStatStackNode *)0x0) {
      pFVar2 = (FRawStatStackNode *)0x0;
    }
    else {
      pFVar2 = FRawStatStackNode::FRawStatStackNode(pFVar2);
    }
    pFVar1 = this->Stats;
    this->Stack = pFVar2;
    pTVar3 = FStatsThreadState::GetCondensedHistory(pFVar1,param_1);
    FStatsThreadState::UncondenseStackStats
              (pFVar1,pTVar3,pFVar2,(IItemFilter *)0x0,
               (TArray<FStatMessage,TSizedDefaultAllocator<32>_> *)0x0);
  }
  else {
    FRawStatStackNode::FRawStatStackNode((FRawStatStackNode *)local_88);
    pFVar1 = this->Stats;
    pTVar3 = FStatsThreadState::GetCondensedHistory(pFVar1,param_1);
    FStatsThreadState::UncondenseStackStats
              (pFVar1,pTVar3,(FRawStatStackNode *)local_88,(IItemFilter *)0x0,
               (TArray<FStatMessage,TSizedDefaultAllocator<32>_> *)0x0);
    if ((this->bAverage == false) && (this->bSum == false)) {
      FRawStatStackNode::MergeMax(this->Stack,(FRawStatStackNode *)local_88);
    }
    else {
      FRawStatStackNode::MergeAdd(this->Stack,(FRawStatStackNode *)local_88);
    }
    FRawStatStackNode::DeleteAllChildrenNodes((FRawStatStackNode *)local_88);
    local_30 = 0;
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FRawStatStackNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,FRawStatStackNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,FRawStatStackNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_88 + 0x10));
  }
  this->NumFrames = this->NumFrames + 1;
  if (this->NumFramesToGo <= this->NumFrames) {
    ~FDumpMultiple(this);
    ::operator_delete(this,0x28);
  }
  return;
}

