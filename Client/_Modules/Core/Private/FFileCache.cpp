// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 15

// FFileCache @ 141583ee0

/* WARNING: Enum "Type": Some values do not have unique names */

FFileCache * __thiscall FFileCache::FFileCache(FFileCache *this,int param_1)

{
  int iVar1;
  TArray<FFileCache::FSlotInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  int *piVar4;
  code *pcVar5;
  TAtomic<unsigned___int64> TVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  FFileCache *pFVar11;
  uchar *puVar12;
  FStaticBasicLogRecord *pFVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  FLLMScope local_res10 [2];
  FMemScope local_res18;
  <lambda_1> local_res20;
  undefined1 local_98 [8];
  ForAnyElementType local_90;
  int local_88;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  ForAnyElementType *local_50;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)this,4000);
  local_98 = (undefined1  [8])0x0;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_98,
             (FWriteAccessScope *)&local_68);
  local_50 = &local_90;
  if (local_88 != 3) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_90,0,3,0x10);
    local_88 = 3;
  }
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    *(undefined ***)local_90.Data =
         &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    LOCK();
    UNLOCK();
    lVar10 = (longlong)UE::Delegates::Private::GNextID + 1;
    TVar6 = (TAtomic<unsigned___int64>)((longlong)UE::Delegates::Private::GNextID + 1);
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = (longlong)UE::Delegates::Private::GNextID + 2;
      TVar6 = (TAtomic<unsigned___int64>)((longlong)UE::Delegates::Private::GNextID + 2);
    }
    UE::Delegates::Private::GNextID = TVar6;
    *(longlong *)(local_90.Data + 0x10) = lVar10;
    *(undefined ***)local_90.Data =
         &
         ___7__TBaseRawMethodDelegateInstance__0A_VFFileCache____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(code **)(local_90.Data + 0x20) = EvictFileCacheFromConsole;
    *(FFileCache **)(local_90.Data + 0x18) = this;
    if ((this == (FFileCache *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FFileCache *)(*pcVar5)();
      return pFVar11;
    }
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->EvictFileCacheCommand,L"r.VT.EvictFileCache",
             L"Evict all the file caches in the VT system.",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_98,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_98,
             (FWriteAccessScope *)&local_80);
  if ((local_88 != 0) && (local_90.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_90.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_90,0,0,0x10);
    local_88 = 0;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_98);
  *(undefined8 *)&this->CompletedRequests = 0;
  pTVar2 = &this->SlotInfo;
  *(undefined8 *)&this->CompletedRequests = 0;
  piVar3 = &(this->SlotInfo).ArrayNum;
  (this->CompletedRequestsCounter).Counter = 0;
  piVar4 = &(this->SlotInfo).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar3 = 0;
  *piVar4 = 0;
  lVar10 = (longlong)GFileCacheBlockSizeKB;
  this->NumFreeSlots = param_1;
  this->SizeInBytes = lVar10 * param_1 * 0x400;
  this->MinNumFreeSlots = param_1;
  FLLMScope::FLLMScope(local_res10,FileSystem,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,FileSystem,true);
  if (bIoStoreCompressionBlockSizeMultiple == (atomic<bool>)0x0) {
    if ((((GIoStoreCompressionBlockSize == (atomic<unsigned_int>)0x0) ||
         ((ulonglong)(uint)GIoStoreCompressionBlockSize == (longlong)GFileCacheBlockSizeKB * 0x400))
        || ((byte)LogStreamingFileCache._0_1_ < 3)) ||
       ((UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreamingFileCache)
        , (byte)LogStreamingFileCache._0_1_ < 3 ||
        (UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreamingFileCache)
        , (byte)LogStreamingFileCache._0_1_ < 3)))) goto LAB_1415841bf;
    pFVar13 = &::LOG_Static;
  }
  else {
    if ((((byte)LogStreamingFileCache._0_1_ < 3) ||
        (UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreamingFileCache)
        , (byte)LogStreamingFileCache._0_1_ < 3)) ||
       (UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreamingFileCache),
       (byte)LogStreamingFileCache._0_1_ < 3)) goto LAB_1415841bf;
    pFVar13 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar13,(FLogCategoryBase *)&LogStreamingFileCache);
LAB_1415841bf:
  puVar12 = FMemory::Malloc(this->SizeInBytes,0);
  this->Memory = puVar12;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,param_1 + 1,&pTVar2->AllocatorInstance,piVar3,piVar4);
  uVar15 = 0;
  if (-1 < param_1) {
    lVar10 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar15 < *piVar3) {
        uVar8 = ~uVar15 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FFileCache *)(*pcVar5)();
        return pFVar11;
      }
      iVar1 = uVar15 - 1;
      pFVar14 = (pTVar2->AllocatorInstance).Data + lVar10;
      iVar9 = uVar15 + 1;
      uVar15 = uVar15 + 1;
      lVar10 = lVar10 + 0x18;
      *(undefined8 *)pFVar14 = 0;
      *(undefined4 *)(pFVar14 + 8) = 0xffffffff;
      *(undefined4 *)(pFVar14 + 0x14) = 0;
      *(int *)(pFVar14 + 0xc) = iVar9;
      *(int *)(pFVar14 + 0x10) = iVar1;
    } while ((int)uVar15 <= param_1);
  }
  if ((*piVar3 < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FFileCache *)(*pcVar5)();
    return pFVar11;
  }
  *(int *)((pTVar2->AllocatorInstance).Data + 0x10) = param_1;
  uVar15 = 0;
  if (param_1 < *piVar3) {
    uVar15 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FFileCache *)(*pcVar5)();
    return pFVar11;
  }
  *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)param_1 * 0x18 + 0xc) = 0;
  LOCK();
  bFileCacheInitialized = (atomic<bool>)0x1;
  UNLOCK();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddLambda<_FFileCache::FFileCache_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnBeginFrameRT,&local_res20);
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return this;
}

// operator() @ 141590c30

void __thiscall `FFileCache::FFileCache'::__l2::<lambda_1>::operator()(void *this)

{
  if (!__CsvProfilerStat396) {
    FCsvProfilerTrace::OutputInlineStat("NumFreeSlots",_GCsvCategory_FileCache.Index);
    __CsvProfilerStat396 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("NumFreeSlots",_GCsvCategory_FileCache.Index,*(int *)(*(longlong *)this + 0xa8),Set);
  if (__CsvProfilerStat397 == false) {
    FCsvProfilerTrace::OutputInlineStat("MinNumFreeSlots",_GCsvCategory_FileCache.Index);
    __CsvProfilerStat397 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("MinNumFreeSlots",_GCsvCategory_FileCache.Index,*(int *)(*(longlong *)this + 0xac),Set)
  ;
  return;
}

// operator() @ 1415958c0

void __thiscall `FFileCache::PushCompletedRequest'::__l12::<lambda_1>::operator()(void *this)

{
  atomic<void_*> aVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  LockFreeLinkAllocator_TLSCache *this_00;
  
  while( true ) {
    uVar4 = FLockFreePointerListLIFORoot<64,1>::Pop
                      ((FLockFreePointerListLIFORoot<64,1> *)(*(longlong *)this + 0x40));
    if (uVar4 == 0) {
      return;
    }
    aVar1 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar4 >> 0xe][uVar4 & 0x3fff].Payload;
    this_00 = GetLockFreeAllocator();
    LockFreeLinkAllocator_TLSCache::Push(this_00,uVar4);
    if (aVar1 == (atomic<void_*>)0x0) break;
    if (((*(char *)((longlong)aVar1 + 0x41) == '\0') &&
        ((**(code **)(*(longlong *)aVar1 + 0x10))(aVar1,0),
        *(char *)((longlong)aVar1 + 0x41) == '\0')) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CompletedRequest->WaitCompletion()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                           ,0x94,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(code *)**(undefined8 **)aVar1)(aVar1,1);
  }
  return;
}

// AcquireAndLockSlot @ 1415a7df0

StrongBlockIdentifier<CacheSlotStrongType> __thiscall
FFileCache::AcquireAndLockSlot
          (FFileCache *this,FFileCacheHandle *param_1,
          StrongBlockIdentifier<CacheLineStrongType> param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_register_00000084;
  undefined4 in_R9D;
  
  if (this->NumFreeSlots < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumFreeSlots > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                       ,0x193,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return (StrongBlockIdentifier<CacheSlotStrongType>)iVar6;
    }
  }
  this->NumFreeSlots = this->NumFreeSlots + -1;
  iVar6 = this->NumFreeSlots;
  if (this->MinNumFreeSlots < this->NumFreeSlots) {
    iVar6 = this->MinNumFreeSlots;
  }
  this->MinNumFreeSlots = iVar6;
  if ((this->SlotInfo).ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return (StrongBlockIdentifier<CacheSlotStrongType>)iVar6;
    }
  }
  uVar2 = *(uint *)((this->SlotInfo).AllocatorInstance.Data + 0xc);
  if (uVar2 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlotIndex != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                       ,0x198,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return (StrongBlockIdentifier<CacheSlotStrongType>)iVar6;
    }
  }
  uVar7 = 0;
  if ((int)uVar2 < (this->SlotInfo).ArrayNum) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return (StrongBlockIdentifier<CacheSlotStrongType>)iVar6;
    }
  }
  pFVar3 = (this->SlotInfo).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)(int)uVar2 * 0x18;
  if (*(int *)(pFVar3 + (longlong)(int)uVar2 * 0x18 + 0x14) != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Info.LockCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                       ,0x19b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return (StrongBlockIdentifier<CacheSlotStrongType>)iVar6;
    }
  }
  if (*(FFileCacheHandle **)pFVar1 != (FFileCacheHandle *)0x0) {
    FFileCacheHandle::Evict
              (*(FFileCacheHandle **)pFVar1,
               (StrongBlockIdentifier<CacheLineStrongType>)*(int *)(pFVar1 + 8));
  }
  *(undefined4 *)(pFVar1 + 0x14) = 1;
  *(ulonglong *)pFVar1 = CONCAT44(in_register_00000084,param_2.Id);
  *(undefined4 *)(pFVar1 + 8) = in_R9D;
  UnlinkSlot(this,uVar2);
  *(uint *)&param_1->_padding_ = uVar2 - 1;
  return (StrongBlockIdentifier<CacheSlotStrongType>)(int)param_1;
}

// EvictAll @ 1415c0bd0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FFileCache::EvictAll(FFileCache *this,FFileCacheHandle *param_1)

{
  int *piVar1;
  FFileCacheHandle *this_00;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_SFC_EvictAll> FVar10;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FNameEntryId FVar11;
  FName FVar12;
  uint uVar13;
  bool bVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  FColor_u_0 local_res8 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_68;
  FName local_60;
  FStatMessage local_50;
  
  FVar10 = StatPtr_STAT_SFC_EvictAll;
  if (StatPtr_STAT_SFC_EvictAll == (FThreadSafeStaticStat<FStat_STAT_SFC_EvictAll>)0x0) {
    pFVar9 = ::FName::FName(&local_68,"STAT_SFC_EvictAll");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_SFC_EvictAll>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SFC_EvictAll,*pFVar9,L"EvictAll",
                        "STATGROUP_SFC","STATCAT_Advanced",L"Streaming File Cache",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar10;
  bVar3 = false;
  bVar5 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar13 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar11.Value;
        local_res18.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                   ,0x1d0);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar11.Value;
      local_res20.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar4 = true;
      goto LAB_1415c0d25;
    }
  }
  bVar4 = false;
  FVar12 = local_60;
LAB_1415c0d25:
  if (this == (FFileCache *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  uVar13 = 1;
  bVar14 = true;
  if (1 < (this->SlotInfo).ArrayNum) {
    lVar16 = 0x18;
    bVar14 = true;
    do {
      uVar8 = 0;
      if ((int)uVar13 < (this->SlotInfo).ArrayNum) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return (bool)uVar7;
      }
      pFVar15 = (this->SlotInfo).AllocatorInstance.Data + lVar16;
      this_00 = *(FFileCacheHandle **)pFVar15;
      if ((this_00 != (FFileCacheHandle *)0x0) &&
         ((this_00 == param_1 || (param_1 == (FFileCacheHandle *)0x0)))) {
        if (*(int *)(pFVar15 + 0x14) == 0) {
          FFileCacheHandle::Evict
                    (this_00,(StrongBlockIdentifier<CacheLineStrongType>)*(int *)(pFVar15 + 8));
          *(undefined8 *)pFVar15 = 0;
          *(undefined4 *)(pFVar15 + 8) = 0xffffffff;
          UnlinkSlot(this,uVar13);
          LinkSlotHead(this,uVar13);
        }
        else {
          bVar14 = false;
        }
      }
      uVar13 = uVar13 + 1;
      lVar16 = lVar16 + 0x18;
    } while ((int)uVar13 < (this->SlotInfo).ArrayNum);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_50.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_50.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_50.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_50.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_50.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_50.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_50);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return bVar14;
}

// EvictFileCacheFromConsole @ 1415c0f60

void __thiscall FFileCache::EvictFileCacheFromConsole(FFileCache *this)

{
  EvictAll(this,(FFileCacheHandle *)0x0);
  return;
}

// FlushCompletedRequests @ 1415c3410

void __thiscall FFileCache::FlushCompletedRequests(FFileCache *this)

{
  atomic<void_*> aVar1;
  uint uVar2;
  LockFreeLinkAllocator_TLSCache *this_00;
  
  while( true ) {
    uVar2 = FLockFreePointerListLIFORoot<64,1>::Pop
                      ((FLockFreePointerListLIFORoot<64,1> *)&this->CompletedRequests);
    if (uVar2 == 0) {
      return;
    }
    aVar1 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe][uVar2 & 0x3fff].Payload;
    this_00 = GetLockFreeAllocator();
    LockFreeLinkAllocator_TLSCache::Push(this_00,uVar2);
    if (aVar1 == (atomic<void_*>)0x0) break;
    if (*(char *)((longlong)aVar1 + 0x41) == '\0') {
      (**(code **)(*(longlong *)aVar1 + 0x10))(aVar1,0);
    }
    (*(code *)**(undefined8 **)aVar1)(aVar1,1);
  }
  return;
}

// GetSlotMemory @ 1415c7cc0

uchar * __thiscall
FFileCache::GetSlotMemory(FFileCache *this,StrongBlockIdentifier<CacheSlotStrongType> param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uchar *puVar4;
  uint uVar5;
  
  if ((this->SlotInfo).ArrayNum + -1 <= param_1.Id) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlotID.Get() < SlotInfo.Num() - 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                       ,0x6b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar4 = (uchar *)(*pcVar1)();
      return puVar4;
    }
  }
  uVar5 = param_1.Id + 1;
  uVar3 = 0;
  if ((int)uVar5 < (this->SlotInfo).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar4 = (uchar *)(*pcVar1)();
      return puVar4;
    }
  }
  if (*(int *)((this->SlotInfo).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x18 + 0x14) < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSlotLocked(SlotID)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                       ,0x6c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar4 = (uchar *)(*pcVar1)();
      return puVar4;
    }
  }
  return this->Memory + (longlong)GFileCacheBlockSizeKB * (longlong)param_1.Id * 0x400;
}

// IsSlotLocked @ 1415c9ba0

bool __thiscall
FFileCache::IsSlotLocked(FFileCache *this,StrongBlockIdentifier<CacheSlotStrongType> param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_1.Id + 1;
  uVar4 = 0;
  if ((int)uVar5 < (this->SlotInfo).ArrayNum) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return 0 < *(int *)((this->SlotInfo).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x18 + 0x14);
}

// LinkSlotHead @ 1415d3ec0

void __thiscall FFileCache::LinkSlotHead(FFileCache *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  lVar6 = (longlong)param_1;
  if (param_1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlotIndex != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                       ,0xb4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->SlotInfo).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (this->SlotInfo).AllocatorInstance.Data;
  uVar5 = 0;
  if (param_1 < (this->SlotInfo).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->SlotInfo).AllocatorInstance.Data;
  if (*(int *)(pFVar2 + lVar6 * 0x18 + 0xc) != param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Info.NextSlotIndex == SlotIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                       ,0xb7,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)(pFVar2 + lVar6 * 0x18 + 0x10) != param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Info.PrevSlotIndex == SlotIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                       ,0xb8,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(undefined4 *)(pFVar2 + lVar6 * 0x18 + 0xc) = *(undefined4 *)(pFVar1 + 0xc);
  *(undefined4 *)(pFVar2 + lVar6 * 0x18 + 0x10) = 0;
  uVar5 = *(uint *)(pFVar1 + 0xc);
  uVar7 = 0;
  if ((int)uVar5 < (this->SlotInfo).ArrayNum) {
    uVar7 = ~uVar5 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(int *)((this->SlotInfo).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x18 + 0x10) = param_1;
  *(int *)(pFVar1 + 0xc) = param_1;
  return;
}

// LinkSlotTail @ 1415d4090

void __thiscall FFileCache::LinkSlotTail(FFileCache *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  lVar6 = (longlong)param_1;
  if (param_1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlotIndex != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                       ,0xa6,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->SlotInfo).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (this->SlotInfo).AllocatorInstance.Data;
  uVar5 = 0;
  if (param_1 < (this->SlotInfo).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->SlotInfo).AllocatorInstance.Data;
  if (*(int *)(pFVar2 + lVar6 * 0x18 + 0xc) != param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Info.NextSlotIndex == SlotIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                       ,0xa9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)(pFVar2 + lVar6 * 0x18 + 0x10) != param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Info.PrevSlotIndex == SlotIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                       ,0xaa,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(undefined4 *)(pFVar2 + lVar6 * 0x18 + 0xc) = 0;
  *(undefined4 *)(pFVar2 + lVar6 * 0x18 + 0x10) = *(undefined4 *)(pFVar1 + 0x10);
  uVar5 = *(uint *)(pFVar1 + 0x10);
  uVar7 = 0;
  if ((int)uVar5 < (this->SlotInfo).ArrayNum) {
    uVar7 = ~uVar5 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(int *)((this->SlotInfo).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x18 + 0xc) = param_1;
  *(int *)(pFVar1 + 0x10) = param_1;
  return;
}

// LockSlot @ 1415d4300

void __thiscall
FFileCache::LockSlot(FFileCache *this,StrongBlockIdentifier<CacheSlotStrongType> param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = param_1.Id + 1;
  uVar5 = 0;
  if ((int)uVar7 < (this->SlotInfo).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->SlotInfo).AllocatorInstance.Data;
  iVar1 = *(int *)(pFVar2 + (longlong)(int)uVar7 * 0x18 + 0x14);
  if (iVar1 == 0) {
    if (this->NumFreeSlots < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumFreeSlots > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                         ,0x1b7,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    this->NumFreeSlots = this->NumFreeSlots + -1;
    iVar6 = this->NumFreeSlots;
    if (this->MinNumFreeSlots < this->NumFreeSlots) {
      iVar6 = this->MinNumFreeSlots;
    }
    this->MinNumFreeSlots = iVar6;
    UnlinkSlot(this,uVar7);
  }
  *(int *)(pFVar2 + (longlong)(int)uVar7 * 0x18 + 0x14) = iVar1 + 1;
  return;
}

// PushCompletedRequest @ 1415d9f20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FFileCache::PushCompletedRequest(FFileCache *this,IAsyncReadRequest *param_1)

{
  int *piVar1;
  FThreadSafeCounter *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  LockFreeLinkAllocator_TLSCache *this_00;
  FIndexedLockFreeLink *pFVar7;
  undefined8 *local_res8;
  code *local_38 [2];
  undefined **local_28;
  FFileCache *local_20;
  undefined8 local_10;
  
  if (param_1 == (IAsyncReadRequest *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Request",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                       ,0x8a,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this_00 = GetLockFreeAllocator();
  uVar6 = LockFreeLinkAllocator_TLSCache::Pop(this_00);
  if (uVar6 == 0) {
    pFVar7 = (FIndexedLockFreeLink *)0x0;
  }
  else {
    pFVar7 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar6 >> 0xe] + (uVar6 & 0x3fff);
  }
  pFVar7->Payload = (atomic<void_*>)param_1;
  FLockFreePointerListLIFORoot<64,1>::Push
            ((FLockFreePointerListLIFORoot<64,1> *)&this->CompletedRequests,uVar6);
  LOCK();
  pFVar2 = &this->CompletedRequestsCounter;
  iVar3 = pFVar2->Counter;
  pFVar2->Counter = pFVar2->Counter + 1;
  UNLOCK();
  if ((iVar3 + 1U & 0x1f) == 0) {
    local_10 = 0;
    local_28 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__M___PushCompletedRequest_FFileCache__QEAAXPEAVIAsyncReadRequest___Z__00_0A__Function_Private_Core_UE__6B_
    ;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FFileCache::PushCompletedRequest'::__l12::<lambda_1>,void>::
                  Call;
    local_20 = this;
    FFunctionGraphTask::CreateAndDispatchWhenReady
              ((TUniqueFunction<void___cdecl(void)> *)&local_res8,(TStatIdData *)local_38,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)&TStatId::TStatId_NAME_None,MainQueue);
    if (local_res8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_res8 + 6);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)*local_res8)(local_res8,1);
      }
    }
  }
  return;
}

// UnlinkSlot @ 1416097e0

void __thiscall FFileCache::UnlinkSlot(FFileCache *this,int param_1)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  lVar7 = (longlong)param_1;
  if (param_1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlotIndex != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                       ,0x9d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar6 = 0;
  if (param_1 < (this->SlotInfo).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->SlotInfo).AllocatorInstance.Data;
  uVar6 = *(uint *)(pFVar2 + lVar7 * 0x18 + 0x10);
  uVar1 = *(undefined4 *)(pFVar2 + lVar7 * 0x18 + 0xc);
  uVar5 = 0;
  if ((int)uVar6 < (this->SlotInfo).ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(undefined4 *)((this->SlotInfo).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x18 + 0xc) =
       uVar1;
  uVar6 = *(uint *)(pFVar2 + lVar7 * 0x18 + 0xc);
  uVar1 = *(undefined4 *)(pFVar2 + lVar7 * 0x18 + 0x10);
  uVar5 = 0;
  if ((int)uVar6 < (this->SlotInfo).ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(undefined4 *)((this->SlotInfo).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x18 + 0x10) =
       uVar1;
  *(int *)(pFVar2 + lVar7 * 0x18 + 0x10) = param_1;
  *(int *)(pFVar2 + lVar7 * 0x18 + 0xc) = param_1;
  return;
}

// UnlockSlot @ 1416099a0

void __thiscall
FFileCache::UnlockSlot(FFileCache *this,StrongBlockIdentifier<CacheSlotStrongType> param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_1.Id + 1;
  uVar4 = 0;
  if ((int)uVar5 < (this->SlotInfo).ArrayNum) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar1 = *(int *)((this->SlotInfo).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x18 + 0x14);
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrevLockCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                       ,0x1c3,L"");
    if (bVar3) {
code_r0x000141609aa6:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (iVar1 == 1) {
    LinkSlotTail(this,uVar5);
    this->NumFreeSlots = this->NumFreeSlots + 1;
    if (((this->SlotInfo).ArrayNum <= this->NumFreeSlots) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumFreeSlots < SlotInfo.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                           ,0x1c9,L""), bVar3)) goto code_r0x000141609aa6;
  }
  uVar4 = 0;
  if ((int)uVar5 < (this->SlotInfo).ArrayNum) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(int *)((this->SlotInfo).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x18 + 0x14) =
       iVar1 + -1;
  return;
}

