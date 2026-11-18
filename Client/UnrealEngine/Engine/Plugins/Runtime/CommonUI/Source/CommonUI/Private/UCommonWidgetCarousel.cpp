// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 43

// GetMoveSpeed_WrapperImpl @ 14a78b3c0

void __cdecl UCommonWidgetCarousel::GetMoveSpeed_WrapperImpl(void *param_1,void *param_2)

{
  float fVar1;
  
  fVar1 = GetMoveSpeed(param_1);
  *(float *)param_2 = fVar1;
  return;
}

// SetMoveSpeed_WrapperImpl @ 14a78b3e0

void __cdecl UCommonWidgetCarousel::SetMoveSpeed_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)((longlong)param_1 + 0x1cc) = *(undefined4 *)param_2;
  return;
}

// GetbCacheChildren_WrapperImpl @ 14a78b3f0

void __cdecl UCommonWidgetCarousel::GetbCacheChildren_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1d0);
  return;
}

// SetbCacheChildren_WrapperImpl @ 14a78b400

void __cdecl UCommonWidgetCarousel::SetbCacheChildren_WrapperImpl(void *param_1,void *param_2)

{
  SetCacheChildren(param_1,*(bool *)param_2);
  return;
}

// StaticClass @ 14a78b490

UClass * __cdecl UCommonWidgetCarousel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonWidgetCarousel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonWidgetCarousel",
               &Z_Registration_Info_UClass_UCommonWidgetCarousel.InnerSingleton,
               StaticRegisterNativesUCommonWidgetCarousel,0x220,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonWidgetCarousel>,
               InternalVTableHelperCtorCaller<UCommonWidgetCarousel>,local_res8,
               UPanelWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonWidgetCarousel.InnerSingleton;
}

// UCommonWidgetCarousel @ 14a7b0130

UCommonWidgetCarousel * __thiscall
UCommonWidgetCarousel::UCommonWidgetCarousel(UCommonWidgetCarousel *this,FVTableHelper *param_1)

{
  UPanelWidget::UPanelWidget((UPanelWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&this->OnCurrentPageIndexChanged = 0;
  *(undefined8 *)&(this->OnCurrentPageIndexChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnCurrentPageIndexChanged).field_0x10 = 0;
  (this->TickerHandle).Object = (FElement *)0x0;
  (this->TickerHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->MyCommonWidgetCarousel).Object = (SWidgetCarousel<UPanelSlot_*> *)0x0;
  (this->MyCommonWidgetCarousel).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CachedSlotWidgets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedSlotWidgets).ArrayNum = 0;
  (this->CachedSlotWidgets).ArrayMax = 0;
  return this;
}

// UCommonWidgetCarousel @ 14a7b01b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UCommonWidgetCarousel * __thiscall
UCommonWidgetCarousel::UCommonWidgetCarousel
          (UCommonWidgetCarousel *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UPanelWidget::UPanelWidget((UPanelWidget *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 1;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&this->OnCurrentPageIndexChanged = 0;
  *(undefined8 *)&(this->OnCurrentPageIndexChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnCurrentPageIndexChanged).field_0x10 = 0;
  (this->TickerHandle).Object = (FElement *)0x0;
  (this->TickerHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->MyCommonWidgetCarousel).Object = (SWidgetCarousel<UPanelSlot_*> *)0x0;
  (this->MyCommonWidgetCarousel).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CachedSlotWidgets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedSlotWidgets).ArrayNum = 0;
  (this->CachedSlotWidgets).ArrayMax = 0;
  UWidget::SetClipping((UWidget *)this,ClipToBounds);
  this->MoveSpeed = 5.0;
  this->bCacheChildren = true;
  return this;
}

// ~UCommonWidgetCarousel @ 14a7b3c80

void __thiscall UCommonWidgetCarousel::~UCommonWidgetCarousel(UCommonWidgetCarousel *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  void *pvVar5;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  DestructItems<TSharedRef<SWidget,1>,int>
            ((TSharedRef<SWidget,1> *)(this->CachedSlotWidgets).AllocatorInstance.Data,
             (this->CachedSlotWidgets).ArrayNum);
  pFVar3 = (this->CachedSlotWidgets).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyCommonWidgetCarousel).SharedReferenceCount.ReferenceController);
  pTVar4 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
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
  pvVar5 = *(void **)&(this->OnCurrentPageIndexChanged).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCurrentPageIndexChanged);
  UPanelWidget::~UPanelWidget((UPanelWidget *)this);
  return;
}

// AutoScrollCallback @ 14a7c06e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UCommonWidgetCarousel::AutoScrollCallback(UCommonWidgetCarousel *this,float param_1)

{
  int *piVar1;
  SWidgetCarousel<UPanelSlot_*> *this_00;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_protected:_bool___cdecl_UCommonWidgetCarousel::AutoScrollCallback(float)_::_2_::FStat_STAT_UCommonWidgetCarousel_AutoScrollCallback>
  FVar7;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  LARGE_INTEGER local_res8;
  FName local_res18;
  FStatMessage local_28;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_UCommonWidgetCarousel_AutoScrollCallback ==
          (FThreadSafeStaticStat<_protected:_bool___cdecl_UCommonWidgetCarousel::AutoScrollCallback(float)_::_2_::FStat_STAT_UCommonWidgetCarousel_AutoScrollCallback>
           )0x0) {
        pFVar6 = ::FName::FName((FName *)&local_res8.s,
                                "STAT_UCommonWidgetCarousel_AutoScrollCallback");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_UCommonWidgetCarousel_AutoScrollCallback,*pFVar6,
                   L"STAT_UCommonWidgetCarousel_AutoScrollCallback","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar7 = StatPtr_STAT_UCommonWidgetCarousel_AutoScrollCallback;
  if (StatPtr_STAT_UCommonWidgetCarousel_AutoScrollCallback ==
      (FThreadSafeStaticStat<_protected:_bool___cdecl_UCommonWidgetCarousel::AutoScrollCallback(float)_::_2_::FStat_STAT_UCommonWidgetCarousel_AutoScrollCallback>
       )0x0) {
    pFVar6 = ::FName::FName(&local_res18,"STAT_UCommonWidgetCarousel_AutoScrollCallback");
    FVar7 = (FThreadSafeStaticStat<_protected:_bool___cdecl_UCommonWidgetCarousel::AutoScrollCallback(float)_::_2_::FStat_STAT_UCommonWidgetCarousel_AutoScrollCallback>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_UCommonWidgetCarousel_AutoScrollCallback,*pFVar6,
                         L"STAT_UCommonWidgetCarousel_AutoScrollCallback","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar2 = false;
  bVar4 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonWidgetCarousel.cpp"
                   ,0x2d);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      goto LAB_14a7c0860;
    }
  }
  bVar3 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_14a7c0860:
  this_00 = (this->MyCommonWidgetCarousel).Object;
  if (this_00 != (SWidgetCarousel<UPanelSlot_*> *)0x0) {
    bVar5 = SWidgetCarousel<UPanelSlot_*>::IsInTransition(this_00);
    if (!bVar5) {
      SWidgetCarousel<UPanelSlot_*>::SwapBuffer(this_00,Carousel_Right,-1);
    }
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_28.NameAndInfo.Index = FVar10.ComparisonIndex.Value;
      local_28.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_28);
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
  return true;
}

// BeginAutoScrolling @ 14a7c1270

void __thiscall UCommonWidgetCarousel::BeginAutoScrolling(UCommonWidgetCarousel *this,float param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  FTSTicker *this_00;
  undefined8 *puVar7;
  ulong64 uVar8;
  TWeakPtr<FTSTicker::FElement,1> *pTVar9;
  UCommonWidgetCarousel *local_res8;
  code *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  bool local_88;
  TWeakPtr<FTSTicker::FElement,1> local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  EndAutoScrolling(this);
  this_00 = FTSTicker::GetCoreTicker();
  uStack_8c = local_78.WeakReferenceCount.ReferenceController._4_4_;
  uStack_90 = 0;
  local_68 = (undefined1  [8])0x0;
  local_98 = AutoScrollCallback;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonWidgetCarousel____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UCommonWidgetCarousel *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar7[3] = 0;
    local_res8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UCommonWidgetCarousel *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_res8);
    puVar7[4] = local_98;
    puVar7[5] = CONCAT44(uStack_8c,uStack_90);
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  pTVar9 = FTSTicker::AddTicker
                     (this_00,&local_78,
                      (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_68,param_1)
  ;
  if (&this->TickerHandle != pTVar9) {
    (this->TickerHandle).Object = pTVar9->Object;
    pTVar9->Object = (FElement *)0x0;
    pTVar5 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
    (this->TickerHandle).WeakReferenceCount.ReferenceController =
         (pTVar9->WeakReferenceCount).ReferenceController;
    (pTVar9->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
  }
  plVar6 = (longlong *)
           CONCAT44(local_78.WeakReferenceCount.ReferenceController._4_4_,
                    local_78.WeakReferenceCount.ReferenceController._0_4_);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_98);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_88 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_8c,uStack_90),
               (FDestructionSentinel *)&local_98);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  return;
}

// EndAutoScrolling @ 14a7d4b30

void __thiscall UCommonWidgetCarousel::EndAutoScrolling(UCommonWidgetCarousel *this)

{
  atomic<int> *paVar1;
  TWeakPtr<FTSTicker::FElement,1> *pTVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TWeakPtr<FTSTicker::FElement,1> local_28;
  longlong local_18 [2];
  
  pTVar2 = &this->TickerHandle;
  if (((pTVar2->Object != (FElement *)0x0) &&
      (pTVar4 = (this->TickerHandle).WeakReferenceCount.ReferenceController,
      pTVar4 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar4->SharedReferenceCount)) {
    local_28.Object = pTVar2->Object;
    local_28.WeakReferenceCount.ReferenceController =
         (this->TickerHandle).WeakReferenceCount.ReferenceController;
    if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_28);
    if (pTVar2 != (TWeakPtr<FTSTicker::FElement,1> *)local_18) {
      pTVar4 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
      pTVar2->Object = (FElement *)0x0;
      (this->TickerHandle).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014a7d4baf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          return;
        }
      }
    }
  }
  return;
}

// GetActiveWidgetIndex @ 14a7e0600

int __thiscall UCommonWidgetCarousel::GetActiveWidgetIndex(UCommonWidgetCarousel *this)

{
  SWidgetCarousel<UPanelSlot_*> *pSVar1;
  
  pSVar1 = (this->MyCommonWidgetCarousel).Object;
  if (pSVar1 != (SWidgetCarousel<UPanelSlot_*> *)0x0) {
    return pSVar1->WidgetIndex;
  }
  return this->ActiveWidgetIndex;
}

// GetCacheChildren @ 14a7e0e50

bool __thiscall UCommonWidgetCarousel::GetCacheChildren(UCommonWidgetCarousel *this)

{
  return this->bCacheChildren;
}

// GetMoveSpeed @ 14a7e3450

float __thiscall UCommonWidgetCarousel::GetMoveSpeed(UCommonWidgetCarousel *this)

{
  SWidgetCarousel<UPanelSlot_*> *pSVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  
  pSVar1 = (this->MyCommonWidgetCarousel).Object;
  if (pSVar1 == (SWidgetCarousel<UPanelSlot_*> *)0x0) {
    return this->MoveSpeed;
  }
  if ((pSVar1->CenterCarouselWidget).Object == (FCarouselDisplayItem *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar4 = (float)(*pcVar2)();
      return fVar4;
    }
  }
  return ((pSVar1->CenterCarouselWidget).Object)->MoveSpeed;
}

// GetPrivateStaticClass @ 14a7e6ee0

UClass * __cdecl UCommonWidgetCarousel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonWidgetCarousel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonWidgetCarousel",
               &Z_Registration_Info_UClass_UCommonWidgetCarousel.InnerSingleton,
               StaticRegisterNativesUCommonWidgetCarousel,0x220,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonWidgetCarousel>,
               InternalVTableHelperCtorCaller<UCommonWidgetCarousel>,local_res8,
               UPanelWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonWidgetCarousel.InnerSingleton;
}

// GetSlotClass @ 14a7e8720

UClass * __thiscall UCommonWidgetCarousel::GetSlotClass(UCommonWidgetCarousel *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPanelSlot.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"PanelSlot",&Z_Registration_Info_UClass_UPanelSlot.InnerSingleton,
               UPanelSlot::StaticRegisterNativesUPanelSlot,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPanelSlot>,InternalVTableHelperCtorCaller<UPanelSlot>,
               aFStackX_8,UVisual::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPanelSlot.InnerSingleton;
}

// GetWidgetAtIndex @ 14a7e9900

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __thiscall
UCommonWidgetCarousel::GetWidgetAtIndex(UCommonWidgetCarousel *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UWidget *pUVar4;
  
  if ((-1 < param_1) && (param_1 < (int)this->_padding_)) {
    uVar3 = 0;
    if (param_1 < (int)this->_padding_) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UWidget *)(*pcVar1)();
        return pUVar4;
      }
    }
    return *(UWidget **)(*(longlong *)(this->_padding_ + (longlong)param_1 * 8) + 0x30);
  }
  return (UWidget *)0x0;
}

// HandlePageChanged @ 14a7ee2c0

void __thiscall UCommonWidgetCarousel::HandlePageChanged(UCommonWidgetCarousel *this,int param_1)

{
  UCommonWidgetCarousel *local_18;
  int local_10;
  
  local_18 = this;
  local_10 = param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->OnCurrentPageIndexChanged,&local_18);
  return;
}

// NextPage @ 14a7fb950

void __thiscall UCommonWidgetCarousel::NextPage(UCommonWidgetCarousel *this)

{
  SWidgetCarousel<UPanelSlot_*> *this_00;
  bool bVar1;
  
  this_00 = (this->MyCommonWidgetCarousel).Object;
  if ((this_00 != (SWidgetCarousel<UPanelSlot_*> *)0x0) && (1 < (int)this->_padding_)) {
    bVar1 = SWidgetCarousel<UPanelSlot_*>::IsInTransition(this_00);
    if (!bVar1) {
      SWidgetCarousel<UPanelSlot_*>::SwapBuffer(this_00,Carousel_Left,-1);
      return;
    }
  }
  return;
}

// OnGenerateWidgetForCarousel @ 14a7fccd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UCommonWidgetCarousel::OnGenerateWidgetForCarousel
          (UCommonWidgetCarousel *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          UPanelSlot *param_1)

{
  atomic<int> *paVar1;
  UWidget *this_00;
  FSharedReferencer<1> FVar2;
  
  this_00 = (param_1->Content).field0_0x0.DebugPtr;
  if (this_00 != (UWidget *)0x0) {
    UWidget::TakeWidget(this_00,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// OnSlotAdded @ 14a7fef90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonWidgetCarousel::OnSlotAdded(UCommonWidgetCarousel *this,UPanelSlot *param_1)

{
  UWidget *this_00;
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  SWidgetCarousel<UPanelSlot_*> *this_01;
  code *pcVar3;
  bool bVar4;
  TSharedRef<SWidget,1> *pTVar5;
  TSharedRef<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  if (((this->bCacheChildren != false) && (param_1 != (UPanelSlot *)0x0)) &&
     (this_00 = (param_1->Content).field0_0x0.DebugPtr, this_00 != (UWidget *)0x0)) {
    pTVar5 = UWidget::TakeWidget(this_00,&local_18);
    pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar5->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if (pSVar2 != (SWidget *)0x0) {
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_28.Object = pSVar2;
      local_28.SharedReferenceCount.ReferenceController = pTVar1;
      if (pSVar2 == (SWidget *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      TArray<TSharedRef<SWidget,1>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TSharedRef<SWidget,1>_>(&this->CachedSlotWidgets,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  this_01 = (this->MyCommonWidgetCarousel).Object;
  if (this_01 != (SWidgetCarousel<UPanelSlot_*> *)0x0) {
    SWidgetCarousel<UPanelSlot_*>::GenerateCurrentWidgets(this_01);
    return;
  }
  return;
}

// OnSlotRemoved @ 14a7ff3e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonWidgetCarousel::OnSlotRemoved(UCommonWidgetCarousel *this,UPanelSlot *param_1)

{
  UWidget *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  SWidget *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  TSharedPtr<SWidget,1> local_38;
  
  if (((this->bCacheChildren != false) && (param_1 != (UPanelSlot *)0x0)) &&
     (this_00 = (param_1->Content).field0_0x0.DebugPtr, this_00 != (UWidget *)0x0)) {
    UWidget::GetCachedWidget(this_00,&local_38);
    if (local_38.Object != (SWidget *)0x0) {
      if (local_38.Object == (SWidget *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_48 = local_38.Object;
      pTStack_40 = local_38.SharedReferenceCount.ReferenceController;
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (local_38.Object == (SWidget *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar1 = (this->CachedSlotWidgets).AllocatorInstance.Data;
      if ((pFVar1 <= (FScriptContainerElement *)&local_48) &&
         ((FScriptContainerElement *)&local_48 <
          pFVar1 + (longlong)(this->CachedSlotWidgets).ArrayMax * 0x10)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar8 = (this->CachedSlotWidgets).ArrayNum;
      lVar4 = (longlong)iVar8;
      if (iVar8 != 0) {
        pFVar1 = (this->CachedSlotWidgets).AllocatorInstance.Data;
        iVar10 = 0;
        bVar3 = *(SWidget **)pFVar1 != local_48;
        lVar6 = 0;
        iVar8 = 0;
        do {
          lVar6 = lVar6 + 1;
          iVar9 = iVar8 + 1;
          if (lVar6 < lVar4) {
            pFVar5 = pFVar1 + lVar6 * 0x10;
            do {
              if (bVar3 != (*(SWidget **)pFVar5 != local_48)) break;
              iVar9 = iVar9 + 1;
              lVar6 = lVar6 + 1;
              pFVar5 = pFVar5 + 0x10;
            } while (lVar6 < lVar4);
          }
          iVar7 = iVar9 - iVar8;
          if (bVar3 == false) {
            DestructItems<TSharedRef<SWidget,1>,int>
                      ((TSharedRef<SWidget,1> *)(pFVar1 + (longlong)iVar8 * 0x10),iVar7);
          }
          else {
            if (iVar10 != iVar8) {
              memmove(pFVar1 + (longlong)iVar10 * 0x10,pFVar1 + (longlong)iVar8 * 0x10,
                      (longlong)iVar7 << 4);
            }
            iVar10 = iVar10 + iVar7;
          }
          bVar3 = (bool)(bVar3 ^ 1);
          iVar8 = iVar9;
        } while (lVar6 < lVar4);
        (this->CachedSlotWidgets).ArrayNum = iVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  return;
}

// PreviousPage @ 14a802e70

void __thiscall UCommonWidgetCarousel::PreviousPage(UCommonWidgetCarousel *this)

{
  SWidgetCarousel<UPanelSlot_*> *this_00;
  bool bVar1;
  
  this_00 = (this->MyCommonWidgetCarousel).Object;
  if ((this_00 != (SWidgetCarousel<UPanelSlot_*> *)0x0) && (1 < (int)this->_padding_)) {
    bVar1 = SWidgetCarousel<UPanelSlot_*>::IsInTransition(this_00);
    if (!bVar1) {
      SWidgetCarousel<UPanelSlot_*>::SwapBuffer(this_00,Carousel_Right,-1);
      return;
    }
  }
  return;
}

// RebuildWidget @ 14a80bff0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UCommonWidgetCarousel::RebuildWidget
          (UCommonWidgetCarousel *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  int *piVar2;
  TArray<TSharedRef<SWidget,1>,TSizedDefaultAllocator<32>_> *this_00;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  UWidget *this_01;
  TReferenceControllerBase<1> *pTVar6;
  SWidgetCarousel<UPanelSlot_*> *pSVar7;
  code *pcVar8;
  FSharedReferencer<1> FVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  FArguments *pFVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  TSharedRef<SWidget,1> *pTVar16;
  longlong *plVar17;
  undefined1 local_res8 [8];
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  UCommonWidgetCarousel *local_res20;
  FMemScope local_458;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  TSlateDecl<SWidgetCarousel<UPanelSlot_*>,RequiredArgs::T0RequiredArgs> local_448;
  SWidgetCarousel<UPanelSlot_*> *local_430;
  FSharedReferencer<1> local_428;
  undefined4 local_420;
  undefined1 local_41c;
  undefined1 local_418 [8];
  void *pvStack_410;
  undefined8 local_408;
  float local_400;
  undefined1 local_3fc;
  undefined1 local_3f8 [8];
  void *pvStack_3f0;
  undefined8 local_3e8;
  float local_3e0;
  undefined1 local_3dc;
  undefined1 local_3d8 [8];
  void *pvStack_3d0;
  undefined8 local_3c8;
  float local_3c0;
  undefined1 local_3bc;
  undefined1 local_3b8 [8];
  void *pvStack_3b0;
  undefined8 local_3a8;
  UCommonWidgetCarousel *local_3a0;
  FName local_398;
  TSharedRef<SWidget,1> local_390;
  FDestructionSentinel local_380;
  undefined1 *local_368;
  FDestructionSentinel local_360;
  undefined1 *local_348;
  undefined1 local_340 [504];
  undefined1 local_148 [24];
  undefined1 local_130 [40];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [40];
  
  pFVar13 = SWidgetCarousel<UPanelSlot_*>::FArguments::FArguments((FArguments *)local_340);
  pFVar13->_WidgetItemsSource = (TArray<UPanelSlot_*,TSizedDefaultAllocator<32>_> *)&this->_padding_
  ;
  local_41c = 1;
  local_408 = 0;
  local_420 = 0;
  local_418 = (undefined1  [8])0x0;
  pvStack_410 = (void *)0x0;
  (pFVar13->_FadeRate).Value = 0.0;
  (pFVar13->_FadeRate).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar13->_FadeRate).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_418);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_418);
  if (pvStack_410 != (void *)0x0) {
    FMemory::Free(pvStack_410);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_418);
  local_3fc = 1;
  local_400 = __real_bf800000;
  local_3e8 = 0;
  local_3f8 = (undefined1  [8])0x0;
  pvStack_3f0 = (void *)0x0;
  (pFVar13->_SlideValueLeftLimit).Value = __real_bf800000;
  (pFVar13->_SlideValueLeftLimit).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar13->_SlideValueLeftLimit).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3f8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3f8);
  if (pvStack_3f0 != (void *)0x0) {
    FMemory::Free(pvStack_3f0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3f8);
  local_3dc = 1;
  local_3e0 = __real_3f800000;
  local_3c8 = 0;
  local_3d8 = (undefined1  [8])0x0;
  pvStack_3d0 = (void *)0x0;
  (pFVar13->_SlideValueRightLimit).Value = __real_3f800000;
  (pFVar13->_SlideValueRightLimit).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar13->_SlideValueRightLimit).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3d8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3d8);
  if (pvStack_3d0 != (void *)0x0) {
    FMemory::Free(pvStack_3d0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3d8);
  local_3c0 = this->MoveSpeed;
  local_3bc = 1;
  local_3a8 = 0;
  local_3b8 = (undefined1  [8])0x0;
  pvStack_3b0 = (void *)0x0;
  (pFVar13->_MoveSpeed).Value = local_3c0;
  (pFVar13->_MoveSpeed).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar13->_MoveSpeed).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3b8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3b8);
  if (pvStack_3b0 != (void *)0x0) {
    FMemory::Free(pvStack_3b0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3b8);
  uStack_450 = 0;
  local_458 = (FMemScope)OnGenerateWidgetForCarousel;
  uStack_44c = local_390.SharedReferenceCount.ReferenceController._4_4_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar13->_OnGenerateWidget,
             (FWriteAccessScope *)&local_380);
  local_368 = &(pFVar13->_OnGenerateWidget).field_0x8;
  puVar14 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_368);
  if (puVar14 != (undefined8 *)0x0) {
    *puVar14 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__PEAVUPanelSlot___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar15 = FDelegateHandle::GenerateNewID();
    puVar14[2] = uVar15;
    *puVar14 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonWidgetCarousel____A6A_AV__TSharedRef_VSWidget___00__PEAVUPanelSlot___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar14[3] = 0;
    local_res20 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar14 + 3),(FObjectPtr)&local_res20);
    *(FMemScope *)(puVar14 + 4) = local_458;
    puVar14[5] = CONCAT44(uStack_44c,uStack_450);
  }
  if (local_380.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_380.Accessor,&local_380);
  }
  uStack_450 = 0;
  local_458 = (FMemScope)HandlePageChanged;
  uStack_44c = local_390.SharedReferenceCount.ReferenceController._4_4_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar13->_OnPageChanged,
             (FWriteAccessScope *)&local_360);
  local_348 = &(pFVar13->_OnPageChanged).field_0x8;
  puVar14 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_348);
  if (puVar14 != (undefined8 *)0x0) {
    *puVar14 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar15 = FDelegateHandle::GenerateNewID();
    puVar14[2] = uVar15;
    *puVar14 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonWidgetCarousel____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar14[3] = 0;
    local_3a0 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar14 + 3),(FObjectPtr)&local_3a0);
    *(FMemScope *)(puVar14 + 4) = local_458;
    puVar14[5] = CONCAT44(uStack_44c,uStack_450);
  }
  if (local_360.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_360.Accessor,&local_360);
  }
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_398 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_458,&local_398,true);
  TSlateDecl<SWidgetCarousel<UPanelSlot_*>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SWidgetCarousel<UPanelSlot_*>,RequiredArgs::T0RequiredArgs>
            (&local_448,"SWidgetCarousel<UPanelSlot*>",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonWidgetCarousel.cpp"
             ,0xc6,local_res10);
  FMemScope::~FMemScope(&local_458);
  FLLMScope::~FLLMScope(local_res18);
  pSVar7 = local_448._Widget.Object;
  if (local_448._Widget.Object == (SWidgetCarousel<UPanelSlot_*> *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar16 = (TSharedRef<SWidget,1> *)(*pcVar8)();
      return pTVar16;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_448._Widget.Object,(FSlateBaseNamedArgs *)pFVar13);
  SWidgetCarousel<UPanelSlot_*>::Construct(local_448._Widget.Object,pFVar13);
  if (local_448._Widget.Object == (SWidgetCarousel<UPanelSlot_*> *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar16 = (TSharedRef<SWidget,1> *)(*pcVar8)();
      return pTVar16;
    }
  }
  if (((local_448._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar11 = (**(code **)((local_448._Widget.Object)->_padding_ + 0x228))(local_448._Widget.Object);
    bVar12 = 0;
    if (cVar11 == '\0') goto LAB_14a80c448;
  }
  bVar12 = 0x20;
LAB_14a80c448:
  *(byte *)&(local_448._Widget.Object)->_padding_ =
       (byte)(local_448._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_448._Widget.Object)->_padding_ =
       (byte)(local_448._Widget.Object)->_padding_ | bVar12;
  if (local_448._Widget.Object == (SWidgetCarousel<UPanelSlot_*> *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar16 = (TSharedRef<SWidget,1> *)(*pcVar8)();
      return pTVar16;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_448._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_448._Widget.Object == (SWidgetCarousel<UPanelSlot_*> *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar16 = (TSharedRef<SWidget,1> *)(*pcVar8)();
      return pTVar16;
    }
  }
  FVar9.ReferenceController = local_448._Widget.SharedReferenceCount.ReferenceController;
  local_448._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_448._Widget.Object = (SWidgetCarousel<UPanelSlot_*> *)0x0;
  if (pSVar7 == (SWidgetCarousel<UPanelSlot_*> *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar16 = (TSharedRef<SWidget,1> *)(*pcVar8)();
      return pTVar16;
    }
  }
  local_430 = pSVar7;
  local_428.ReferenceController = FVar9.ReferenceController;
  if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar9.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar9.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MyCommonWidgetCarousel != (TSharedPtr<SWidgetCarousel<UPanelSlot_*>,1> *)&local_430) {
    (this->MyCommonWidgetCarousel).Object = pSVar7;
    local_430 = (SWidgetCarousel<UPanelSlot_*> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyCommonWidgetCarousel).SharedReferenceCount,&local_428);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_428.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
  if ((void *)local_68._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_88);
  if ((void *)local_88._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_88._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_88);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
  if ((void *)local_a8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_a8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
  if ((void *)local_c8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e8);
  if ((void *)local_e8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_108);
  if ((void *)local_108._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_108._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_108);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_130);
  if ((void *)local_130._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_130._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_130);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_148);
  if ((void *)local_148._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_148._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_148);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_340);
  this_00 = &this->CachedSlotWidgets;
  DestructItems<TSharedRef<SWidget,1>,int>
            ((TSharedRef<SWidget,1> *)(this_00->AllocatorInstance).Data,
             (this->CachedSlotWidgets).ArrayNum);
  piVar2 = &(this->CachedSlotWidgets).ArrayMax;
  (this->CachedSlotWidgets).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&this_00->AllocatorInstance,0,piVar2);
  }
  plVar17 = (longlong *)this->_padding_;
  iVar4 = (int)this->_padding_;
  plVar3 = plVar17 + iVar4;
  while( true ) {
    if ((int)this->_padding_ != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UPanelSlot>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar17 == plVar3) break;
    lVar5 = *plVar17;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    *(UCommonWidgetCarousel **)(lVar5 + 0x28) = this;
    if ((this->bCacheChildren != false) &&
       (this_01 = *(UWidget **)(lVar5 + 0x30), this_01 != (UWidget *)0x0)) {
      pTVar16 = UWidget::TakeWidget(this_01,&local_390);
      TArray<TSharedRef<SWidget,1>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TSharedRef<SWidget,1>_>(this_00,pTVar16);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(local_390.SharedReferenceCount.ReferenceController._4_4_,
                          local_390.SharedReferenceCount.ReferenceController._0_4_));
    }
    plVar17 = plVar17 + 1;
  }
  if ((this->MyCommonWidgetCarousel).Object == (SWidgetCarousel<UPanelSlot_*> *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x408,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar16 = (TSharedRef<SWidget,1> *)(*pcVar8)();
      return pTVar16;
    }
  }
  pTVar6 = (this->MyCommonWidgetCarousel).SharedReferenceCount.ReferenceController;
  pSVar7 = (this->MyCommonWidgetCarousel).Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar7 == (SWidgetCarousel<UPanelSlot_*> *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x25d,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar16 = (TSharedRef<SWidget,1> *)(*pcVar8)();
      return pTVar16;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 14a812160

void __thiscall
UCommonWidgetCarousel::ReleaseSlateResources(UCommonWidgetCarousel *this,bool param_1)

{
  int *piVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UPanelWidget::ReleaseSlateResources((UPanelWidget *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyCommonWidgetCarousel != (TSharedPtr<SWidgetCarousel<UPanelSlot_*>,1> *)&local_18) {
    (this->MyCommonWidgetCarousel).Object = (SWidgetCarousel<UPanelSlot_*> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyCommonWidgetCarousel).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  DestructItems<TSharedRef<SWidget,1>,int>
            ((TSharedRef<SWidget,1> *)(this->CachedSlotWidgets).AllocatorInstance.Data,
             (this->CachedSlotWidgets).ArrayNum);
  piVar1 = &(this->CachedSlotWidgets).ArrayMax;
  (this->CachedSlotWidgets).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->CachedSlotWidgets).AllocatorInstance,0,piVar1);
  }
  EndAutoScrolling(this);
  return;
}

// SetActiveWidget @ 14a8163f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonWidgetCarousel::SetActiveWidget(UCommonWidgetCarousel *this,UWidget *param_1)

{
  SWidgetCarousel<UPanelSlot_*> *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = UPanelWidget::GetChildIndex((UPanelWidget *)this,param_1);
  this_00 = (this->MyCommonWidgetCarousel).Object;
  this->ActiveWidgetIndex = iVar2;
  if (this_00 != (SWidgetCarousel<UPanelSlot_*> *)0x0) {
    iVar3 = (int)this->_padding_ + -1;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    if (iVar2 < iVar3) {
      iVar3 = iVar2;
    }
    iVar2 = 0;
    if (0 < iVar3) {
      iVar2 = iVar3;
    }
    bVar1 = SWidgetCarousel<UPanelSlot_*>::IsInTransition(this_00);
    if ((!bVar1) && (iVar2 != this_00->WidgetIndex)) {
      SWidgetCarousel<UPanelSlot_*>::SwapBuffer(this_00,(uint)(this_00->WidgetIndex <= iVar2),iVar2)
      ;
    }
  }
  return;
}

// SetActiveWidgetIndex @ 14a816590

void __thiscall UCommonWidgetCarousel::SetActiveWidgetIndex(UCommonWidgetCarousel *this,int param_1)

{
  SWidgetCarousel<UPanelSlot_*> *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  
  this_00 = (this->MyCommonWidgetCarousel).Object;
  this->ActiveWidgetIndex = param_1;
  if (this_00 != (SWidgetCarousel<UPanelSlot_*> *)0x0) {
    iVar2 = (int)this->_padding_ + -1;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    if (param_1 < iVar2) {
      iVar2 = param_1;
    }
    iVar3 = 0;
    if (0 < iVar2) {
      iVar3 = iVar2;
    }
    bVar1 = SWidgetCarousel<UPanelSlot_*>::IsInTransition(this_00);
    if ((!bVar1) && (iVar3 != this_00->WidgetIndex)) {
      SWidgetCarousel<UPanelSlot_*>::SwapBuffer(this_00,(uint)(this_00->WidgetIndex <= iVar3),iVar3)
      ;
    }
  }
  return;
}

// SetCacheChildren @ 14a8175c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonWidgetCarousel::SetCacheChildren(UCommonWidgetCarousel *this,bool param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  TSharedRef<SWidget,1> *pTVar4;
  longlong *plVar5;
  undefined1 local_res10 [8];
  TSharedRef<SWidget,1> local_18;
  
  if (this->bCacheChildren != param_1) {
    this->bCacheChildren = param_1;
    if (param_1) {
      plVar5 = (longlong *)this->_padding_;
      iVar3 = (int)this->_padding_;
      plVar2 = plVar5 + iVar3;
      while( true ) {
        if ((int)this->_padding_ != iVar3) {
          `TCheckedPointerIterator<TObjectPtr<UPanelSlot>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (plVar5 == plVar2) break;
        if (*(UWidget **)(*plVar5 + 0x30) != (UWidget *)0x0) {
          pTVar4 = UWidget::TakeWidget(*(UWidget **)(*plVar5 + 0x30),&local_18);
          TArray<TSharedRef<SWidget,1>,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<TSharedRef<SWidget,1>_>(&this->CachedSlotWidgets,pTVar4);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_18.SharedReferenceCount.ReferenceController);
        }
        plVar5 = plVar5 + 1;
      }
    }
    else {
      DestructItems<TSharedRef<SWidget,1>,int>
                ((TSharedRef<SWidget,1> *)(this->CachedSlotWidgets).AllocatorInstance.Data,
                 (this->CachedSlotWidgets).ArrayNum);
      piVar1 = &(this->CachedSlotWidgets).ArrayMax;
      (this->CachedSlotWidgets).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->CachedSlotWidgets).AllocatorInstance,0,piVar1);
        return;
      }
    }
  }
  return;
}

// SetMoveSpeed @ 14a81a510

void __thiscall UCommonWidgetCarousel::SetMoveSpeed(UCommonWidgetCarousel *this,float param_1)

{
  this->MoveSpeed = param_1;
  return;
}

// StaticRegisterNativesUCommonWidgetCarousel @ 14a81eab0

void __cdecl UCommonWidgetCarousel::StaticRegisterNativesUCommonWidgetCarousel(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = Z_Construct_UClass_UCommonWidgetCarousel_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 14a820bc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonWidgetCarousel::SynchronizeProperties(UCommonWidgetCarousel *this)

{
  UWidget::SynchronizeProperties((UWidget *)this);
                    /* WARNING: Could not recover jumptable at 0x00014a820bdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x330))(this,this->ActiveWidgetIndex);
  return;
}

// execBeginAutoScrolling @ 14a82c7b0

void __cdecl
UCommonWidgetCarousel::execBeginAutoScrolling(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  BeginAutoScrolling((UCommonWidgetCarousel *)param_1,local_res10[0]);
  return;
}

// execEndAutoScrolling @ 14a82cfb0

void __cdecl
UCommonWidgetCarousel::execEndAutoScrolling(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EndAutoScrolling((UCommonWidgetCarousel *)param_1);
  return;
}

// execGetActiveWidgetIndex @ 14a82d430

void __cdecl
UCommonWidgetCarousel::execGetActiveWidgetIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0xc].field_0x20 != 0) {
    *(undefined4 *)param_3 = *(undefined4 *)(*(longlong *)&param_1[0xc].field_0x20 + 800);
    return;
  }
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0xb].field_0x10;
  return;
}

// execGetCacheChildren @ 14a82d730

void __cdecl
UCommonWidgetCarousel::execGetCacheChildren(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0xb].field_0x18;
  return;
}

// execGetMoveSpeed @ 14a82e8d0

void __cdecl UCommonWidgetCarousel::execGetMoveSpeed(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetMoveSpeed((UCommonWidgetCarousel *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetWidgetAtIndex @ 14a82f720

void __cdecl
UCommonWidgetCarousel::execGetWidgetAtIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = (longlong)(int)local_res8[0];
  if (((int)local_res8[0] < 0) || (*(int *)(param_1 + 0xb) <= (int)local_res8[0])) {
    *(undefined8 *)param_3 = 0;
  }
  else {
    uVar5 = 0;
    if ((int)local_res8[0] < *(int *)(param_1 + 0xb)) {
      uVar5 = ~local_res8[0] >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined8 *)param_3 =
         *(undefined8 *)(*(longlong *)(*(longlong *)&param_1[10].field_0x20 + lVar4 * 8) + 0x30);
  }
  return;
}

// execNextPage @ 14a830a30

void __cdecl UCommonWidgetCarousel::execNextPage(UObject *param_1,FFrame *param_2,void *param_3)

{
  SWidgetCarousel<UPanelSlot_*> *this;
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SWidgetCarousel<UPanelSlot_*> **)&param_1[0xc].field_0x20;
  if ((this != (SWidgetCarousel<UPanelSlot_*> *)0x0) && (1 < *(int *)(param_1 + 0xb))) {
    bVar1 = SWidgetCarousel<UPanelSlot_*>::IsInTransition(this);
    if (!bVar1) {
      SWidgetCarousel<UPanelSlot_*>::SwapBuffer(this,Carousel_Left,-1);
      return;
    }
  }
  return;
}

// execPreviousPage @ 14a831270

void __cdecl UCommonWidgetCarousel::execPreviousPage(UObject *param_1,FFrame *param_2,void *param_3)

{
  SWidgetCarousel<UPanelSlot_*> *this;
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SWidgetCarousel<UPanelSlot_*> **)&param_1[0xc].field_0x20;
  if ((this != (SWidgetCarousel<UPanelSlot_*> *)0x0) && (1 < *(int *)(param_1 + 0xb))) {
    bVar1 = SWidgetCarousel<UPanelSlot_*>::IsInTransition(this);
    if (!bVar1) {
      SWidgetCarousel<UPanelSlot_*>::SwapBuffer(this,Carousel_Right,-1);
      return;
    }
  }
  return;
}

// execSetActiveWidget @ 14a831f50

void __cdecl
UCommonWidgetCarousel::execSetActiveWidget(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x338))(param_1,local_res8);
  return;
}

// execSetActiveWidgetIndex @ 14a832070

void __cdecl
UCommonWidgetCarousel::execSetActiveWidgetIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x330))(param_1,local_res8[0]);
  return;
}

// execSetCacheChildren @ 14a832840

void __cdecl
UCommonWidgetCarousel::execSetCacheChildren(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetCacheChildren((UCommonWidgetCarousel *)param_1,local_res10[0] != 0);
  return;
}

// execSetMoveSpeed @ 14a834dc0

void __cdecl UCommonWidgetCarousel::execSetMoveSpeed(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0xb].field_0x14 = local_res8[0];
  return;
}

