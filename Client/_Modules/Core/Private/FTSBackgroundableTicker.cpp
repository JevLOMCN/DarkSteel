// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// FTSBackgroundableTicker @ 141585480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FTSBackgroundableTicker * __thiscall
FTSBackgroundableTicker::FTSBackgroundableTicker(FTSBackgroundableTicker *this)

{
  TWeakPtr<FTSTicker::FElement,1> *pTVar1;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  atomic<double> aVar5;
  atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*> aVar6;
  longlong lVar7;
  FDelegateHandle FVar8;
  ulonglong uVar9;
  atomic<double> aVar10;
  undefined ***pppuVar11;
  atomic<double> aVar12;
  undefined1 auStack_98 [32];
  FTSBackgroundableTicker *local_78;
  <lambda_2> local_70;
  atomic<double> local_68 [2];
  atomic<double> local_58;
  undefined **local_48;
  FTSBackgroundableTicker *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  this->_padding_ = 0;
  puVar4 = FMemory::Malloc(0x18,8);
  uVar9 = (ulonglong)_tls_index;
  pTVar1 = &this->CoreTickerHandle;
  aVar10 = (atomic<double>)0x0;
  *puVar4 = 0;
  this->_padding_ = (longlong)puVar4;
  this->_padding_ = (longlong)puVar4;
  pvVar3 = ThreadLocalStoragePointer;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  lVar7 = *(longlong *)((longlong)pvVar3 + uVar9 * 8);
  pTVar1->Object = (FElement *)0x0;
  (this->CoreTickerHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->BackgroundTickerHandle).ID = 0;
  this->bWasBackgrounded = false;
  if ((*(int *)(lVar7 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    CoreTicker.AddedElements.Head =
         (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)0x0;
    CoreTicker.AddedElements.Head =
         (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)
         FMemory::Malloc(0x18,8);
    *(undefined8 *)CoreTicker.AddedElements.Head = 0;
    CoreTicker.CurrentTime = (atomic<double>)0x0;
    CoreTicker.Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    CoreTicker.Elements.ArrayNum = 0;
    CoreTicker.Elements.ArrayMax = 0;
    CoreTicker.AddedElements.Tail = (FNode *)CoreTicker.AddedElements.Head;
    atexit(`FTSTicker::GetCoreTicker'::__l2::_dynamic_atexit_destructor_for__CoreTicker__);
    _Init_thread_footer(&::_TSS0);
  }
  local_30 = (undefined ***)0x0;
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FTSBackgroundableTicker::FTSBackgroundableTicker'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_58 = (atomic<double>)
             UE::Core::Private::Function::
             TFunctionRefCaller<`FTSBackgroundableTicker::FTSBackgroundableTicker'::__l2::<lambda_1>,bool,float>
             ::Call;
  pFStack_40 = this;
  aVar5 = (atomic<double>)::operator_new(0x50);
  aVar12 = aVar10;
  if (aVar5 != (atomic<double>)0x0) {
    *(atomic<double> *)aVar5 = CoreTicker.CurrentTime;
    *(undefined4 *)((longlong)aVar5 + 8) = 0;
    *(atomic<double> *)((longlong)aVar5 + 0x10) = local_58;
    *(undefined ****)((longlong)aVar5 + 0x38) = local_30;
    *(undefined ***)((longlong)aVar5 + 0x20) = local_48;
    *(FTSBackgroundableTicker **)((longlong)aVar5 + 0x28) = pFStack_40;
    *(undefined8 *)((longlong)aVar5 + 0x30) = local_38;
    if (*(longlong *)((longlong)aVar5 + 0x10) != 0) {
      local_58 = aVar10;
    }
    *(undefined8 *)((longlong)aVar5 + 0x40) = 0;
    aVar12 = aVar5;
  }
  aVar5 = (atomic<double>)::operator_new(0x18);
  if (aVar5 == (atomic<double>)0x0) {
    aVar6 = (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)
            FMemory::Malloc(0x18,8);
    *(undefined8 *)aVar6 = 0;
    *(atomic<double> *)((longlong)aVar6 + 8) = aVar12;
    *(undefined8 *)((longlong)aVar6 + 0x10) = 0;
  }
  else {
    *(undefined4 *)((longlong)aVar5 + 8) = 1;
    *(undefined4 *)((longlong)aVar5 + 0xc) = 1;
    *(undefined ***)aVar5 =
         &
         ___7__TReferenceControllerWithDeleter_UFElement_FTSTicker__U__DefaultDeleter_UFElement_FTSTicker___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(atomic<double> *)((longlong)aVar5 + 0x10) = aVar12;
    LOCK();
    *(int *)((longlong)aVar5 + 8) = *(int *)((longlong)aVar5 + 8) + 1;
    UNLOCK();
    aVar6 = (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)
            FMemory::Malloc(0x18,8);
    *(undefined8 *)aVar6 = 0;
    *(atomic<double> *)((longlong)aVar6 + 8) = aVar12;
    *(atomic<double> *)((longlong)aVar6 + 0x10) = aVar5;
    LOCK();
    *(int *)((longlong)aVar5 + 8) = *(int *)((longlong)aVar5 + 8) + 1;
    UNLOCK();
    aVar10 = aVar5;
  }
  LOCK();
  UNLOCK();
  *(atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*> *)
   CoreTicker.AddedElements.Head = aVar6;
  CoreTicker.AddedElements.Head = aVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)aVar10);
  if (aVar10 != (atomic<double>)0x0) {
    LOCK();
    *(int *)((longlong)aVar10 + 0xc) = *(int *)((longlong)aVar10 + 0xc) + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)aVar10);
  if (pTVar1 == (TWeakPtr<FTSTicker::FElement,1> *)local_68) {
    if (aVar10 == (atomic<double>)0x0) goto LAB_14158566b;
    LOCK();
    lVar7 = (longlong)aVar10 + 0xc;
    iVar2 = *(int *)lVar7;
    *(int *)lVar7 = *(int *)lVar7 + -1;
    UNLOCK();
    if (iVar2 != 1) goto LAB_14158566b;
    lVar7 = *(longlong *)aVar10;
  }
  else {
    aVar5 = (atomic<double>)(this->CoreTickerHandle).WeakReferenceCount.ReferenceController;
    pTVar1->Object = (FElement *)aVar12;
    (this->CoreTickerHandle).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)aVar10;
    if (aVar5 == (atomic<double>)0x0) goto LAB_14158566b;
    LOCK();
    lVar7 = (longlong)aVar5 + 0xc;
    iVar2 = *(int *)lVar7;
    *(int *)lVar7 = *(int *)lVar7 + -1;
    UNLOCK();
    if (iVar2 != 1) goto LAB_14158566b;
    lVar7 = *(longlong *)aVar5;
    aVar10 = aVar5;
  }
  (**(code **)(lVar7 + 8))(aVar10,1);
LAB_14158566b:
  if (local_58 != (atomic<double>)0x0) {
    pppuVar11 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar11 = local_30;
    }
    (*(code *)(*pppuVar11)[2])();
  }
  local_78 = this;
  FVar8 = TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
          AddLambda<_FTSBackgroundableTicker::FTSBackgroundableTicker_::__l2::<lambda_2>_>
                    ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>
                      *)&FCoreDelegates::MobileBackgroundTickDelegate,&local_70);
                    /* WARNING: Load size is inaccurate */
  (this->BackgroundTickerHandle).ID = *FVar8.ID;
  return this;
}

// ~FTSBackgroundableTicker @ 14158a150

void __thiscall FTSBackgroundableTicker::~FTSBackgroundableTicker(FTSBackgroundableTicker *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  ulong64 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ulong64 *puVar8;
  uint uVar9;
  longlong lVar10;
  ForAnyElementType *this_00;
  TWeakPtr<FTSTicker::FElement,1> local_48;
  FDestructionSentinel local_38;
  
  local_48.Object = (this->CoreTickerHandle).Object;
  local_48.WeakReferenceCount.ReferenceController =
       (this->CoreTickerHandle).WeakReferenceCount.ReferenceController;
  if (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker(&local_48);
  uVar3 = (this->BackgroundTickerHandle).ID;
  if (uVar3 != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FCoreDelegates::MobileBackgroundTickDelegate,(FWriteAccessScope *)&local_38);
    uVar9 = 0;
    if (0 < (int)FCoreDelegates::MobileBackgroundTickDelegate._16_4_) {
      lVar10 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar9 < (int)FCoreDelegates::MobileBackgroundTickDelegate._16_4_) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this_00 = (ForAnyElementType *)(FCoreDelegates::MobileBackgroundTickDelegate._8_8_ + lVar10)
        ;
        if (((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0))
           && (puVar8 = (ulong64 *)(**(code **)(*(longlong *)this_00->Data + 0x40))(),
              *puVar8 == uVar3)) {
          if ((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0))
          {
            (*(code *)**(undefined8 **)this_00->Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_00,0,0,0x10);
            *(undefined4 *)&this_00[1].Data = 0;
          }
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &FCoreDelegates::MobileBackgroundTickDelegate,false);
          break;
        }
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x10;
      } while ((int)uVar9 < (int)FCoreDelegates::MobileBackgroundTickDelegate._16_4_);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  pTVar4 = (this->CoreTickerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  FTSTicker::~FTSTicker((FTSTicker *)this);
  return;
}

// operator() @ 141590da0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`FTSBackgroundableTicker::FTSBackgroundableTicker'::__l2::<lambda_1>::operator()
          (void *this,float param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_public:_bool___cdecl__public:___cdecl_FTSBackgroundableTicker::FTSBackgroundableTicker(void)_::_2_::<lambda_1>::operator()(float)const_::_2_::FStat_STAT_FBackgroundableTicker_ForegroundTick>
  FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res8;
  FName local_res18;
  FStatMessage local_38 [2];
  
  FVar10.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FBackgroundableTicker_ForegroundTick ==
          (FThreadSafeStaticStat<_public:_bool___cdecl__public:___cdecl_FTSBackgroundableTicker::FTSBackgroundableTicker(void)_::_2_::<lambda_1>::operator()(float)const_::_2_::FStat_STAT_FBackgroundableTicker_ForegroundTick>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_res8.s,"STAT_FBackgroundableTicker_ForegroundTick");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FBackgroundableTicker_ForegroundTick,
                   *pFVar5,L"STAT_FBackgroundableTicker_ForegroundTick","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar6 = StatPtr_STAT_FBackgroundableTicker_ForegroundTick;
  if (StatPtr_STAT_FBackgroundableTicker_ForegroundTick ==
      (FThreadSafeStaticStat<_public:_bool___cdecl__public:___cdecl_FTSBackgroundableTicker::FTSBackgroundableTicker(void)_::_2_::<lambda_1>::operator()(float)const_::_2_::FStat_STAT_FBackgroundableTicker_ForegroundTick>
       )0x0) {
    pFVar5 = ::FName::FName(&local_res18,"STAT_FBackgroundableTicker_ForegroundTick");
    FVar6 = (FThreadSafeStaticStat<_public:_bool___cdecl__public:___cdecl_FTSBackgroundableTicker::FTSBackgroundableTicker(void)_::_2_::<lambda_1>::operator()(float)const_::_2_::FStat_STAT_FBackgroundableTicker_ForegroundTick>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_FBackgroundableTicker_ForegroundTick,*pFVar5,
                         L"STAT_FBackgroundableTicker_ForegroundTick","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\BackgroundableTicker.cpp"
                   ,0x14);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar8.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_141590f31;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_141590f31:
  if (*(char *)(*(longlong *)this + 0x40) != '\0') {
    if (__real_3c888889 <= param_1) {
      param_1 = __real_3c888889;
    }
    *(undefined1 *)(*(longlong *)this + 0x40) = 0;
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
  }
  FTSTicker::Tick(*(FTSTicker **)this,param_1);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38[0].NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_38[0].NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_38[0].StatData.Pad[4] = '\0';
      local_38[0].StatData.Pad[5] = '\0';
      local_38[0].StatData.Pad[6] = '\0';
      local_38[0].StatData.Pad[7] = '\0';
      local_38[0].StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38[0].StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38[0].StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38[0].StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_38);
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
  return true;
}

// operator() @ 141595a50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FTSBackgroundableTicker::FTSBackgroundableTicker'::__l2::<lambda_2>::operator()
          (void *this,float param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<_public:___cdecl__public:___cdecl_FTSBackgroundableTicker::FTSBackgroundableTicker(void)_::_2_::<lambda_2>::operator()(float)const_::_2_::FStat_STAT_FBackgroundableTicker_BackgroundTick>
  FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER local_res8;
  FName local_res18;
  FStatMessage local_38 [2];
  
  FVar9.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FBackgroundableTicker_BackgroundTick ==
          (FThreadSafeStaticStat<_public:___cdecl__public:___cdecl_FTSBackgroundableTicker::FTSBackgroundableTicker(void)_::_2_::<lambda_2>::operator()(float)const_::_2_::FStat_STAT_FBackgroundableTicker_BackgroundTick>
           )0x0) {
        pFVar4 = ::FName::FName((FName *)&local_res8.s,"STAT_FBackgroundableTicker_BackgroundTick");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FBackgroundableTicker_BackgroundTick,
                   *pFVar4,L"STAT_FBackgroundableTicker_BackgroundTick","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar5 = StatPtr_STAT_FBackgroundableTicker_BackgroundTick;
  if (StatPtr_STAT_FBackgroundableTicker_BackgroundTick ==
      (FThreadSafeStaticStat<_public:___cdecl__public:___cdecl_FTSBackgroundableTicker::FTSBackgroundableTicker(void)_::_2_::<lambda_2>::operator()(float)const_::_2_::FStat_STAT_FBackgroundableTicker_BackgroundTick>
       )0x0) {
    pFVar4 = ::FName::FName(&local_res18,"STAT_FBackgroundableTicker_BackgroundTick");
    FVar5 = (FThreadSafeStaticStat<_public:___cdecl__public:___cdecl_FTSBackgroundableTicker::FTSBackgroundableTicker(void)_::_2_::<lambda_2>::operator()(float)const_::_2_::FStat_STAT_FBackgroundableTicker_BackgroundTick>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_FBackgroundableTicker_BackgroundTick,*pFVar4,
                         L"STAT_FBackgroundableTicker_BackgroundTick","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar8 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value == 0) && (uVar6 == 0)) {
    *(undefined1 *)(*(longlong *)this + 0x40) = 1;
    FTSTicker::Tick(*(FTSTicker **)this,param_1);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar7.Value;
        local_res8.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\BackgroundableTicker.cpp"
                   ,0x20);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar10 = FThreadStats::bPrimaryEnable == false;
    if (bVar10) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      local_res8.s.LowPart = FVar7.Value;
      local_res8.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    *(undefined1 *)(*(longlong *)this + 0x40) = 1;
    FTSTicker::Tick(*(FTSTicker **)this,param_1);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_38[0].NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        local_38[0].NameAndInfo.Index.Value = FVar9.Value;
        QueryPerformanceCounter(&local_res8);
        local_38[0].StatData.Pad[4] = '\0';
        local_38[0].StatData.Pad[5] = '\0';
        local_38[0].StatData.Pad[6] = '\0';
        local_38[0].StatData.Pad[7] = '\0';
        local_38[0].StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_38[0].StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_38[0].StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_38[0].StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,local_38);
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
  }
  return;
}

// GetCoreTicker @ 1415c5640

FTSBackgroundableTicker * __cdecl FTSBackgroundableTicker::GetCoreTicker(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FTSBackgroundableTicker(&::Singleton);
      atexit(`FTSBackgroundableTicker::GetCoreTicker'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

