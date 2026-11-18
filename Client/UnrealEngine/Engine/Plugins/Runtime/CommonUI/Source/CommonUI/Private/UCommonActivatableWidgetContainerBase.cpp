// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 33

// StaticClass @ 14a786550

UClass * __cdecl UCommonActivatableWidgetContainerBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonActivatableWidgetContainerBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonActivatableWidgetContainerBase",
               &Z_Registration_Info_UClass_UCommonActivatableWidgetContainerBase.InnerSingleton,
               StaticRegisterNativesUCommonActivatableWidgetContainerBase,0x2e8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCommonActivatableWidgetContainerBase>,
               InternalVTableHelperCtorCaller<UCommonActivatableWidgetContainerBase>,local_res8,
               UWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonActivatableWidgetContainerBase.InnerSingleton;
}

// UCommonActivatableWidgetContainerBase @ 14a7abae0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UCommonActivatableWidgetContainerBase * __thiscall
UCommonActivatableWidgetContainerBase::UCommonActivatableWidgetContainerBase
          (UCommonActivatableWidgetContainerBase *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->TransitionDuration = 0.4;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&this->OnTransitioningChanged = 0;
  *(undefined8 *)&(this->OnTransitioningChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnTransitioningChanged).field_0x10 = 0;
  (this->WidgetList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WidgetList).ArrayNum = 0;
  (this->WidgetList).ArrayMax = 0;
  (this->DisplayedWidget).field0_0x0.DebugPtr = (UCommonActivatableWidget *)0x0;
  (this->GeneratedWidgetsPool).ActiveWidgets.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->GeneratedWidgetsPool).ActiveWidgets.ArrayNum = 0;
  (this->GeneratedWidgetsPool).ActiveWidgets.ArrayMax = 0;
  (this->GeneratedWidgetsPool).InactiveWidgets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GeneratedWidgetsPool).InactiveWidgets.ArrayNum = 0;
  (this->GeneratedWidgetsPool).InactiveWidgets.ArrayMax = 0;
  (this->GeneratedWidgetsPool).OwningWidget.WeakPtr = (FWeakObjectPtr)0x0;
  (this->GeneratedWidgetsPool).OwningWorld.WeakPtr = (FWeakObjectPtr)0x0;
  (this->GeneratedWidgetsPool).DefaultPlayerController.WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->GeneratedWidgetsPool).CachedSlateByWidgetObject = 0;
  *(undefined8 *)&(this->GeneratedWidgetsPool).CachedSlateByWidgetObject.field_0x8 = 0;
  *(undefined8 *)&(this->GeneratedWidgetsPool).CachedSlateByWidgetObject.field_0x20 = 0;
  this->bResetPoolWhenReleasingSlateResources = false;
  this->TransitionFallbackStrategy = None;
  *(undefined8 *)&(this->OnTransitioningChanged).field_0x18 = 2;
  *(undefined4 *)&(this->GeneratedWidgetsPool).CachedSlateByWidgetObject.field_0x28 = 0;
  *(undefined4 *)&(this->GeneratedWidgetsPool).CachedSlateByWidgetObject.field_0x2c = 0x80;
  *(undefined4 *)&(this->GeneratedWidgetsPool).CachedSlateByWidgetObject.field_0x34 = 0;
  *(undefined4 *)&(this->GeneratedWidgetsPool).CachedSlateByWidgetObject.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->GeneratedWidgetsPool).CachedSlateByWidgetObject.field_0x40 = 0;
  *(undefined4 *)&(this->GeneratedWidgetsPool).CachedSlateByWidgetObject.field_0x48 = 0;
  (this->MyOverlay).Object = (SOverlay *)0x0;
  (this->MyOverlay).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->MyInputGuard).Object = (SSpacer *)0x0;
  (this->MyInputGuard).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->MySwitcher).Object = (SCommonAnimatedSwitcher *)0x0;
  (this->MySwitcher).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ReleasedWidgets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReleasedWidgets).ArrayNum = 0;
  (this->ReleasedWidgets).ArrayMax = 0;
  this->bRemoveDisplayedWidgetPostTransition = false;
  *(undefined8 *)&this->OnDisplayedWidgetChangedEvent = 0;
  *(undefined8 *)&(this->OnDisplayedWidgetChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnDisplayedWidgetChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnDisplayedWidgetChangedEvent).field_0x18 = 2;
  return this;
}

// UCommonActivatableWidgetContainerBase @ 14a7abc30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UCommonActivatableWidgetContainerBase * __thiscall
UCommonActivatableWidgetContainerBase::UCommonActivatableWidgetContainerBase
          (UCommonActivatableWidgetContainerBase *this,FObjectInitializer *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->TransitionDuration = 0.4;
  this->bResetPoolWhenReleasingSlateResources = false;
  this->TransitionFallbackStrategy = None;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  *(undefined8 *)&this->OnTransitioningChanged = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&(this->OnTransitioningChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnTransitioningChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnTransitioningChanged).field_0x18 = 2;
  (this->WidgetList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WidgetList).ArrayNum = 0;
  (this->WidgetList).ArrayMax = 0;
  (this->DisplayedWidget).field0_0x0.DebugPtr = (UCommonActivatableWidget *)0x0;
  FUserWidgetPool::FUserWidgetPool(&this->GeneratedWidgetsPool,(UWidget *)this);
  (this->MyOverlay).Object = (SOverlay *)0x0;
  (this->MyOverlay).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->MyInputGuard).Object = (SSpacer *)0x0;
  (this->MyInputGuard).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->MySwitcher).Object = (SCommonAnimatedSwitcher *)0x0;
  (this->MySwitcher).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ReleasedWidgets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReleasedWidgets).ArrayNum = 0;
  (this->ReleasedWidgets).ArrayMax = 0;
  this->bRemoveDisplayedWidgetPostTransition = false;
  *(undefined8 *)&this->OnDisplayedWidgetChangedEvent = 0;
  *(undefined8 *)&(this->OnDisplayedWidgetChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnDisplayedWidgetChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnDisplayedWidgetChangedEvent).field_0x18 = 2;
  UWidget::SetVisibilityInternal((UWidget *)this,Collapsed);
  return this;
}

// ~UCommonActivatableWidgetContainerBase @ 14a7b1df0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonActivatableWidgetContainerBase::~UCommonActivatableWidgetContainerBase
          (UCommonActivatableWidgetContainerBase *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnDisplayedWidgetChangedEvent).field_0x8,
             *(int *)&(this->OnDisplayedWidgetChangedEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnDisplayedWidgetChangedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDisplayedWidgetChangedEvent);
  DestructItems<TSharedPtr<SWidget,1>,int>
            ((TSharedPtr<SWidget,1> *)(this->ReleasedWidgets).AllocatorInstance.Data,
             (this->ReleasedWidgets).ArrayNum);
  pFVar2 = (this->ReleasedWidgets).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MySwitcher).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyInputGuard).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyOverlay).SharedReferenceCount.ReferenceController);
  FUserWidgetPool::~FUserWidgetPool(&this->GeneratedWidgetsPool);
  pFVar2 = (this->WidgetList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTransitioningChanged).field_0x8,
             *(int *)&(this->OnTransitioningChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnTransitioningChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTransitioningChanged);
  UWidget::~UWidget((UWidget *)this);
  return;
}

// operator() @ 14a7b64d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`UCommonActivatableWidgetContainerBase::ReleaseWidget'::__l85::<lambda_1>::operator()
          (void *this,float param_1)

{
  int *piVar1;
  longlong lVar2;
  TSharedPtr<SWidget,1> *pTVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_UCommonActivatableWidgetContainerBase::ReleaseWidget(TSharedRef<SWidget,1>_const_&)_::_85_::<lambda_1>::operator()(float)const_::_2_::FStat_STAT_UCommonActivatableWidgetContainerBase_ReleaseWidget>
  FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  LARGE_INTEGER local_res8;
  FName local_res18;
  FStatMessage local_38;
  
  FVar12.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_UCommonActivatableWidgetContainerBase_ReleaseWidget ==
          (FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_UCommonActivatableWidgetContainerBase::ReleaseWidget(TSharedRef<SWidget,1>_const_&)_::_85_::<lambda_1>::operator()(float)const_::_2_::FStat_STAT_UCommonActivatableWidgetContainerBase_ReleaseWidget>
           )0x0) {
        pFVar7 = ::FName::FName((FName *)&local_res8.s,
                                "STAT_UCommonActivatableWidgetContainerBase_ReleaseWidget");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_UCommonActivatableWidgetContainerBase_ReleaseWidget,*pFVar7,
                   L"STAT_UCommonActivatableWidgetContainerBase_ReleaseWidget","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = StatPtr_STAT_UCommonActivatableWidgetContainerBase_ReleaseWidget;
  if (StatPtr_STAT_UCommonActivatableWidgetContainerBase_ReleaseWidget ==
      (FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_UCommonActivatableWidgetContainerBase::ReleaseWidget(TSharedRef<SWidget,1>_const_&)_::_85_::<lambda_1>::operator()(float)const_::_2_::FStat_STAT_UCommonActivatableWidgetContainerBase_ReleaseWidget>
       )0x0) {
    pFVar7 = ::FName::FName(&local_res18,"STAT_UCommonActivatableWidgetContainerBase_ReleaseWidget")
    ;
    FVar8 = (FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_UCommonActivatableWidgetContainerBase::ReleaseWidget(TSharedRef<SWidget,1>_const_&)_::_85_::<lambda_1>::operator()(float)const_::_2_::FStat_STAT_UCommonActivatableWidgetContainerBase_ReleaseWidget>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_UCommonActivatableWidgetContainerBase_ReleaseWidget,*pFVar7,
                         L"STAT_UCommonActivatableWidgetContainerBase_ReleaseWidget",
                         "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false
                         ,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar4 = false;
  bVar6 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Widgets\\CommonActivatableWidgetContainer.cpp"
                   ,0x107);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar5 = true;
      FVar12.Value = FVar10.Value;
      goto LAB_14a7b6661;
    }
  }
  bVar5 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_14a7b6661:
  lVar2 = *(longlong *)this;
  piVar1 = (int *)(lVar2 + 700);
  pTVar3 = (TSharedPtr<SWidget,1> *)((ForAnyElementType *)(lVar2 + 0x2b0))->Data;
  if (*piVar1 < 0) {
    DestructItems<TSharedPtr<SWidget,1>,int>(pTVar3,*(int *)(lVar2 + 0x2b8));
    *(undefined4 *)(lVar2 + 0x2b8) = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)(lVar2 + 0x2b0),0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<SWidget,1>,int>(pTVar3,*(int *)(lVar2 + 0x2b8));
    *(undefined4 *)(lVar2 + 0x2b8) = 0;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
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
  return false;
}

// AddWidgetInstance @ 14a7be880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonActivatableWidgetContainerBase::AddWidgetInstance
          (UCommonActivatableWidgetContainerBase *this,UCommonActivatableWidget *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UCommonActivatableWidget>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  FName FStackX_8;
  UCommonActivatableWidget *pUStack_28;
  FString FStack_20;
  
  if (6 < (byte)LogCommonUI._0_1_) {
    FStackX_8 = (FName)param_1->_padding_;
    ::FName::ToString(&FStackX_8,&FStack_20);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
    if (FStack_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data.AllocatorInstance.Data);
    }
  }
  pTVar2 = &this->WidgetList;
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  pFVar3 = pFVar6 + (longlong)(this->WidgetList).ArrayNum * 8;
  for (; pFVar6 != pFVar3; pFVar6 = pFVar6 + 8) {
    if (*(UCommonActivatableWidget **)pFVar6 == (UCommonActivatableWidget *)0x0) {
      bVar7 = param_1 == (UCommonActivatableWidget *)0x0;
    }
    else {
      bVar7 = *(UCommonActivatableWidget **)pFVar6 == param_1;
    }
    if (bVar7) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2907796557082394831>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Widgets\\CommonActivatableWidgetContainer.cpp"
                         ,0xcf,"!WidgetList.Contains(&NewWidget)");
      if (!bVar7) {
        return;
      }
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pUStack_28 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UCommonActivatableWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)&pUStack_28) &&
      ((FScriptContainerElement *)&pUStack_28 < pFVar3 + (longlong)(this->WidgetList).ArrayMax * 8))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar5 = (this->WidgetList).ArrayNum;
  piVar1 = &(this->WidgetList).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->WidgetList).ArrayNum = iVar5 + 1;
  *(UCommonActivatableWidget **)((pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 8) =
       pUStack_28;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUStack_28 != (UCommonActivatableWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUStack_28);
  }
  (**(code **)(this->_padding_ + 0x310))(this,param_1);
  return;
}

// AddWidgetInternal @ 14a7be890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UCommonActivatableWidget * __thiscall
UCommonActivatableWidgetContainerBase::AddWidgetInternal
          (UCommonActivatableWidgetContainerBase *this,TSubclassOf<UCommonActivatableWidget> param_1
          ,TFunctionRef<void___cdecl(UCommonActivatableWidget_&)> *param_2)

{
  UObject *pUVar1;
  UCommonActivatableWidget *pUVar2;
  undefined1 local_res8 [8];
  UObject *local_res10;
  code *local_18;
  undefined1 *local_10;
  
  pUVar1 = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FUserWidgetPool::GetOrCreateInstance<UCommonActivatableWidget>'::__l2::<lambda_1>,TSharedPtr<SObjectWidget,1>,UUserWidget_*,TSharedRef<SWidget,1>_>
             ::Call;
  local_res10 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  pUVar2 = FUserWidgetPool::AddActiveWidgetInternal<UCommonActivatableWidget>
                     (&this->GeneratedWidgetsPool,
                      (TSubclassOf<UCommonActivatableWidget>)&local_res10,
                      (TFunctionRef<TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                       *)&local_18);
  if (pUVar2 != (UCommonActivatableWidget *)0x0) {
    (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,pUVar2);
    RegisterInstanceInternal(this,pUVar2);
    return pUVar2;
  }
  return (UCommonActivatableWidget *)0x0;
}

// BP_AddWidget @ 14a7c0a20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UCommonActivatableWidget * __thiscall
UCommonActivatableWidgetContainerBase::BP_AddWidget
          (UCommonActivatableWidgetContainerBase *this,TSubclassOf<UCommonActivatableWidget> param_1
          )

{
  UObject *pUVar1;
  UCommonActivatableWidget *pUVar2;
  undefined1 local_res8 [8];
  UObject *local_res10;
  code *local_18;
  undefined1 *local_10;
  
  pUVar1 = *(UObject **)param_1.Class.field0_0x0;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
  }
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FUserWidgetPool::GetOrCreateInstance<UCommonActivatableWidget>'::__l2::<lambda_1>,TSharedPtr<SObjectWidget,1>,UUserWidget_*,TSharedRef<SWidget,1>_>
             ::Call;
  local_res10 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  pUVar2 = FUserWidgetPool::AddActiveWidgetInternal<UCommonActivatableWidget>
                     (&this->GeneratedWidgetsPool,
                      (TSubclassOf<UCommonActivatableWidget>)&local_res10,
                      (TFunctionRef<TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                       *)&local_18);
  if (pUVar2 != (UCommonActivatableWidget *)0x0) {
    RegisterInstanceInternal(this,pUVar2);
    return pUVar2;
  }
  return (UCommonActivatableWidget *)0x0;
}

// ClearWidgets @ 14a7c47c0

void __thiscall
UCommonActivatableWidgetContainerBase::ClearWidgets(UCommonActivatableWidgetContainerBase *this)

{
  SetSwitcherIndex(this,0,false);
  return;
}

// GetActiveWidget @ 14a7e0580

UCommonActivatableWidget * __thiscall
UCommonActivatableWidgetContainerBase::GetActiveWidget(UCommonActivatableWidgetContainerBase *this)

{
  SCommonAnimatedSwitcher *this_00;
  TSharedPtr<SWidget,1> *pTVar1;
  UCommonActivatableWidget *pUVar2;
  TSharedPtr<SWidget,1> local_18;
  
  this_00 = (this->MySwitcher).Object;
  pUVar2 = (UCommonActivatableWidget *)0x0;
  if (this_00 != (SCommonAnimatedSwitcher *)0x0) {
    pTVar1 = SWidgetSwitcher::GetActiveWidget((SWidgetSwitcher *)this_00,&local_18);
    pUVar2 = ActivatableWidgetFromSlate(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return pUVar2;
}

// GetNumWidgets @ 14a7e3700

int __thiscall
UCommonActivatableWidgetContainerBase::GetNumWidgets(UCommonActivatableWidgetContainerBase *this)

{
  return (this->WidgetList).ArrayNum;
}

// GetPrivateStaticClass @ 14a7e4940

UClass * __cdecl UCommonActivatableWidgetContainerBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonActivatableWidgetContainerBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonActivatableWidgetContainerBase",
               &Z_Registration_Info_UClass_UCommonActivatableWidgetContainerBase.InnerSingleton,
               StaticRegisterNativesUCommonActivatableWidgetContainerBase,0x2e8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCommonActivatableWidgetContainerBase>,
               InternalVTableHelperCtorCaller<UCommonActivatableWidgetContainerBase>,local_res8,
               UWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonActivatableWidgetContainerBase.InnerSingleton;
}

// GetTransitionDuration @ 14a7e8ee0

float __thiscall
UCommonActivatableWidgetContainerBase::GetTransitionDuration
          (UCommonActivatableWidgetContainerBase *this)

{
  return this->TransitionDuration;
}

// HandleActiveIndexChanged @ 14a7e9df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCommonActivatableWidgetContainerBase::HandleActiveIndexChanged
          (UCommonActivatableWidgetContainerBase *this,int param_1)

{
  undefined1 *puVar1;
  SCommonAnimatedSwitcher *pSVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  TSharedPtr<SWidget,1> *pTVar11;
  UCommonActivatableWidget *pUVar12;
  UWorld *this_00;
  FTimerManager *this_01;
  undefined8 *puVar13;
  ulong64 uVar14;
  uint uVar15;
  ForAnyElementType FVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  undefined1 auStackY_198 [32];
  ForAnyElementType local_160;
  int local_158;
  FDelegateAllocation local_150;
  TSharedPtr<SWidget,1> local_140;
  TSharedPtr<SWidget,1> local_130;
  UCommonActivatableWidget *local_118;
  ulonglong uStack_110;
  UCommonActivatableWidget *local_108;
  UCommonActivatableWidgetContainerBase *local_100;
  TSharedRef<SWidget,1> local_f8;
  TSharedRef<SWidget,1> local_e8;
  FDestructionSentinel local_d8;
  undefined1 local_c0 [16];
  TSharedPtr<SWidget,1> local_b0;
  undefined1 local_a0;
  FDelegateAllocation *local_98;
  ForAnyElementType local_88;
  int local_80;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (6 < (byte)LogCommonUI._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
  }
  while( true ) {
    if (((this->MySwitcher).Object == (SCommonAnimatedSwitcher *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pSVar2 = (this->MySwitcher).Object;
    if ((int)pSVar2->_padding_ + -1 <= param_1) break;
    if ((pSVar2 == (SCommonAnimatedSwitcher *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pSVar2 = (this->MySwitcher).Object;
    if ((pSVar2 == (SCommonAnimatedSwitcher *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    SWidgetSwitcher::GetWidget
              ((SWidgetSwitcher *)pSVar2,&local_140,(int)((this->MySwitcher).Object)->_padding_ + -1
              );
    if (local_140.Object == (SWidget *)0x0) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2907796557082394903>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Widgets\\CommonActivatableWidgetContainer.cpp"
                         ,0x117,"WidgetToRelease");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      if ((local_140.Object == (SWidget *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar6.ReferenceController = local_140.SharedReferenceCount.ReferenceController;
      local_f8.Object = local_140.Object;
      local_f8.SharedReferenceCount.ReferenceController =
           local_140.SharedReferenceCount.ReferenceController;
      if (local_140.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_140.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_140.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_140.Object == (SWidget *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      ReleaseWidget(this,&local_f8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar6.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_140.SharedReferenceCount.ReferenceController);
  }
  pUVar12 = (this->DisplayedWidget).field0_0x0.DebugPtr;
  if ((pUVar12 != (UCommonActivatableWidget *)0x0) &&
     (this->bRemoveDisplayedWidgetPostTransition != false)) {
    UWidget::GetCachedWidget((UWidget *)pUVar12,&local_130);
    if (local_130.Object != (SWidget *)0x0) {
      if ((local_130.Object == (SWidget *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar6.ReferenceController = local_130.SharedReferenceCount.ReferenceController;
      local_e8.SharedReferenceCount.ReferenceController =
           local_130.SharedReferenceCount.ReferenceController;
      if (local_130.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_130.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_130.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_130.Object == (SWidget *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      ReleaseWidget(this,&local_e8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar6.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_130.SharedReferenceCount.ReferenceController);
  }
  this->bRemoveDisplayedWidgetPostTransition = false;
  if (((this->MySwitcher).Object == (SCommonAnimatedSwitcher *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar11 = SWidgetSwitcher::GetActiveWidget((SWidgetSwitcher *)(this->MySwitcher).Object,&local_b0)
  ;
  pUVar12 = ActivatableWidgetFromSlate(pTVar11);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar12 != (UCommonActivatableWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar12);
  }
  (this->DisplayedWidget).field0_0x0.DebugPtr = pUVar12;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.SharedReferenceCount.ReferenceController);
  pcVar5 = *(code **)(this->_padding_ + 0x2c0);
  if ((this->DisplayedWidget).field0_0x0.DebugPtr == (UCommonActivatableWidget *)0x0) {
    (*pcVar5)(this,1);
    goto LAB_14a7ea432;
  }
  (*pcVar5)(this,4);
  local_108 = (this->DisplayedWidget).field0_0x0.DebugPtr;
  uStack_110 = uStack_110 & 0xffffffff00000000;
  local_118 = (UCommonActivatableWidget *)HandleActiveWidgetDeactivated;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UCommonActivatableWidgetContainerBase,UCommonActivatableWidget_*>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &local_108->OnDeactivatedEvent,(UCommonActivatableWidgetContainerBase *)local_c0,
             (pmf_738dca6e *)this,&local_118);
  pUVar12 = (this->DisplayedWidget).field0_0x0.DebugPtr;
  if (pUVar12->bIsActive == false) {
    (**(code **)(pUVar12->_padding_ + 0x520))();
  }
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  if (this_00 == (UWorld *)0x0) goto LAB_14a7ea432;
  this_01 = UWorld::GetTimerManager(this_00);
  local_150.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_150.DelegateSize = 0;
  local_a0 = 0;
  local_98 = &local_150;
  puVar13 = UE::Core::Private::DelegateAllocate(0x28,&local_150);
  if (puVar13 != (undefined8 *)0x0) {
    *puVar13 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar14 = FDelegateHandle::GenerateNewID();
    puVar13[2] = uVar14;
    *puVar13 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UCommonActivatableWidgetContainerBase::HandleActiveIndexChanged'::`37'::<lambda_1>_>
                ::_vftable_;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar13[3] = 0;
    local_100 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 3),(FObjectPtr)&local_100);
    puVar13[4] = this;
  }
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_160.Data = (FScriptContainerElement *)0x0;
  local_158 = 0;
  FVar16.Data = (FScriptContainerElement *)0x0;
  iVar18 = 0;
  if ((local_150.DelegateSize != 0) &&
     (local_150.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)local_150.DelegateAllocator + 0x48))();
    FVar16.Data = local_160.Data;
    iVar18 = local_158;
  }
  local_158 = 0;
  local_160.Data = (FScriptContainerElement *)0x0;
  if (local_80 == 0) {
LAB_14a7ea2e8:
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
  }
  else if (local_88.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_88.Data)(local_88.Data);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_88,0,0,0x10);
    local_80 = 0;
    goto LAB_14a7ea2e8;
  }
  local_88.Data = FVar16.Data;
  local_80 = iVar18;
  if (local_158 == 0) {
LAB_14a7ea338:
    if (local_160.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data);
    }
  }
  else if (local_160.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_160.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_160,0,0,0x10);
    local_158 = 0;
    goto LAB_14a7ea338;
  }
  local_58 = 1;
  FTimerManager::InternalSetTimerForNextTick(this_01,(FTimerUnifiedDelegate *)(local_c0 + 8));
  uVar17 = (ulonglong)local_58;
  if ((3 < local_58) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar17] ==
      UE::Core::Private::
      TDestructorCaller<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>_>::
      Destruct) {
    if (local_80 != 0) {
      if (local_88.Data == (FScriptContainerElement *)0x0) goto LAB_14a7ea3e5;
      (*(code *)**(undefined8 **)local_88.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_88,0,0,0x10);
      local_80 = 0;
    }
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar17])(&local_88);
  }
LAB_14a7ea3e5:
  if (local_150.DelegateSize != 0) {
    if (local_150.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)
    goto LAB_14a7ea432;
    (*(code *)**(undefined8 **)local_150.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_150,0,0,0x10);
    local_150.DelegateSize = 0;
  }
  if (local_150.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_150.DelegateAllocator);
  }
LAB_14a7ea432:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnDisplayedWidgetChangedEvent,(FWriteAccessScope *)&local_d8);
  puVar1 = &(this->OnDisplayedWidgetChangedEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar7 = false;
  uVar15 = *(int *)&(this->OnDisplayedWidgetChangedEvent).field_0x10 - 1;
  if (-1 < (int)uVar15) {
    lVar19 = (longlong)(int)uVar15 << 4;
    bVar7 = false;
    do {
      uVar10 = 0;
      if ((int)uVar15 < *(int *)&(this->OnDisplayedWidgetChangedEvent).field_0x10) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar3 = *(longlong *)&(this->OnDisplayedWidgetChangedEvent).field_0x8;
      if (((*(int *)(lVar19 + 8 + lVar3) == 0) ||
          (plVar4 = *(longlong **)(lVar19 + lVar3), plVar4 == (longlong *)0x0)) ||
         (cVar9 = (**(code **)(*plVar4 + 0x68))(), cVar9 == '\0')) {
        bVar7 = true;
      }
      lVar19 = lVar19 + -0x10;
      uVar15 = uVar15 - 1;
    } while (-1 < (int)uVar15);
  }
  puVar1 = &(this->OnDisplayedWidgetChangedEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnDisplayedWidgetChangedEvent,false);
  }
  if (local_d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
  }
  return;
}

// HandleActiveWidgetDeactivated @ 14a7ea540

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonActivatableWidgetContainerBase::HandleActiveWidgetDeactivated
          (UCommonActivatableWidgetContainerBase *this,UCommonActivatableWidget *param_1)

{
  UCommonActivatableWidget *pUVar1;
  code *pcVar2;
  int *piVar3;
  SCommonAnimatedSwitcher *pSVar4;
  SCommonAnimatedSwitcher *pSVar5;
  bool bVar6;
  FName local_res8;
  FString local_18;
  
  if (6 < (byte)LogCommonUI._0_1_) {
    local_res8 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pUVar1 = (this->DisplayedWidget).field0_0x0.DebugPtr;
  if (pUVar1 == (UCommonActivatableWidget *)0x0) {
    bVar6 = param_1 == (UCommonActivatableWidget *)0x0;
  }
  else {
    bVar6 = pUVar1 == param_1;
  }
  if (bVar6) {
    pSVar4 = (this->MySwitcher).Object;
    if ((pSVar4 != (SCommonAnimatedSwitcher *)0x0) &&
       (piVar3 = TAttribute<int>::Get((TAttribute<int> *)&pSVar4->_padding_), 0 < *piVar3)) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &((this->DisplayedWidget).field0_0x0.DebugPtr)->OnDeactivatedEvent,this);
      pSVar4 = TSharedPtr<SCommonAnimatedSwitcher,1>::operator->(&this->MySwitcher);
      pSVar5 = TSharedPtr<SCommonAnimatedSwitcher,1>::operator->(&this->MySwitcher);
      piVar3 = TAttribute<int>::Get((TAttribute<int> *)&pSVar5->_padding_);
      SCommonAnimatedSwitcher::TransitionToIndex(pSVar4,*piVar3 + -1,false);
    }
  }
  else {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2907796557082394853>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Widgets\\CommonActivatableWidgetContainer.cpp"
                       ,0xe5,"DeactivatedWidget == DisplayedWidget");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// HandleSwitcherIsTransitioningChanged @ 14a7effe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonActivatableWidgetContainerBase::HandleSwitcherIsTransitioningChanged
          (UCommonActivatableWidgetContainerBase *this,bool param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_58;
  TAttribute<EVisibility> local_40;
  
  if (6 < (byte)LogCommonUI._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
  }
  if (((this->MyInputGuard).Object == (SSpacer *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_40.bIsSet = true;
  local_40.Getter._0_8_ = 0;
  local_40.Getter._8_8_ = 0;
  local_40.Value.Value.Value = EVisibility::Collapsed.Value.Value;
  if (param_1) {
    local_40.Value.Value.Value = EVisibility::Visible.Value.Value;
  }
  local_40.Getter._16_8_ = 0;
  SLeafWidget::SetVisibility((SLeafWidget *)(this->MyInputGuard).Object,&local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnTransitioningChanged
             ,(FWriteAccessScope *)&local_58);
  puVar1 = &(this->OnTransitioningChanged).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->OnTransitioningChanged).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->OnTransitioningChanged).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnTransitioningChanged).field_0x8;
      if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,this,param_1), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->OnTransitioningChanged).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnTransitioningChanged,
               false);
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  return;
}

// OnWidgetAddedToList @ 14a800630

void __thiscall
UCommonActivatableWidgetContainerBase::OnWidgetAddedToList
          (UCommonActivatableWidgetContainerBase *this,UCommonActivatableWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Public\\Widgets\\CommonActivatableWidgetContainer.h"
                     ,0x62,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnWidgetRebuilt @ 14a800b30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonActivatableWidgetContainerBase::OnWidgetRebuilt(UCommonActivatableWidgetContainerBase *this)

{
  UWidget::OnWidgetRebuilt((UWidget *)this);
  HandleActiveIndexChanged(this,0);
  return;
}

// RebuildWidget @ 14a806990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<SWidget,1> * __thiscall
UCommonActivatableWidgetContainerBase::RebuildWidget
          (UCommonActivatableWidgetContainerBase *this,TSharedRef<SWidget,1> *__return_storage_ptr__
          )

{
  TSharedPtr<SOverlay,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  SOverlay *pSVar4;
  code *pcVar5;
  SWidget *pSVar6;
  bool bVar7;
  FArguments *pFVar8;
  FSlotArguments *pFVar9;
  FArguments *pFVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TSharedRef<SCommonAnimatedSwitcher,1> *pTVar13;
  FArguments *pFVar14;
  TSharedRef<SSpacer,1> *pTVar15;
  TSharedRef<SOverlay,1> *pTVar16;
  TSharedRef<SWidget,1> *pTVar17;
  FScopedWidgetSlotArguments *pFVar18;
  undefined1 auStackY_9e8 [32];
  T0RequiredArgs local_9b8;
  T0RequiredArgs local_9b7;
  T0RequiredArgs local_9b6 [2];
  FLLMScope local_9b4;
  FLLMScope local_9b0;
  FLLMScope local_9ac;
  FMemScope local_9a8;
  undefined4 uStack_9a0;
  undefined4 uStack_99c;
  uchar local_998;
  undefined1 local_997;
  undefined1 local_990 [8];
  ForAnyElementType FStack_988;
  ulonglong local_980;
  SCommonAnimatedSwitcher *local_978;
  FSharedReferencer<1> local_970;
  SSpacer *local_968;
  FSharedReferencer<1> local_960;
  SOverlay *local_958;
  FSharedReferencer<1> local_950;
  SWidget *local_948;
  FSharedReferencer<1> local_940;
  UCommonActivatableWidgetContainerBase *local_938;
  UCommonActivatableWidgetContainerBase *local_930;
  FName local_928;
  FMemScope local_920;
  FName local_918;
  FMemScope local_910;
  FName local_908;
  TSharedRef<SCommonAnimatedSwitcher,1> local_900;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> local_8f0;
  TSlateDecl<SCommonAnimatedSwitcher,RequiredArgs::T0RequiredArgs> local_8d8;
  FDestructionSentinel local_8c0;
  FDestructionSentinel local_8a8;
  undefined1 *local_890;
  FDestructionSentinel local_888;
  undefined1 *local_870;
  TSharedRef<SSpacer,1> local_868;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_858;
  SCommonAnimatedSwitcher *local_840;
  TReferenceControllerBase<1> *pTStack_838;
  SSpacer *local_830;
  TReferenceControllerBase<1> *pTStack_828;
  TSharedRef<SOverlay,1> local_820;
  undefined1 local_810 [56];
  void *local_7d8;
  undefined1 local_7b0 [56];
  void *local_778;
  undefined1 local_750 [520];
  undefined1 local_548 [24];
  undefined1 local_530 [24];
  FArguments local_518;
  undefined1 local_310 [528];
  undefined1 local_100 [24];
  FScopedWidgetSlotArguments local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_9e8;
  pFVar8 = SOverlay::FArguments::FArguments(&local_518);
  pFVar9 = SOverlay::Slot((FSlotArguments *)local_7b0,0);
  pFVar10 = SCommonAnimatedSwitcher::FArguments::FArguments((FArguments *)local_750);
  uStack_9a0 = 0;
  pFVar10->_TransitionCurveType = this->TransitionCurveType;
  pFVar10->_TransitionDuration = this->TransitionDuration;
  pFVar10->_TransitionType = this->TransitionType;
  pFVar10->_TransitionFallbackStrategy = this->TransitionFallbackStrategy;
  local_9a8 = (FMemScope)HandleActiveIndexChanged;
  uStack_99c = local_900.SharedReferenceCount.ReferenceController._4_4_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar10->_OnActiveIndexChanged,(FWriteAccessScope *)&local_8a8);
  local_890 = &(pFVar10->_OnActiveIndexChanged).field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_890);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonActivatableWidgetContainerBase____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[3] = 0;
    local_938 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_938);
    *(FMemScope *)(puVar11 + 4) = local_9a8;
    puVar11[5] = CONCAT44(uStack_99c,uStack_9a0);
  }
  if (local_8a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_8a8.Accessor,&local_8a8);
  }
  uStack_9a0 = 0;
  local_9a8 = (FMemScope)HandleSwitcherIsTransitioningChanged;
  uStack_99c = local_900.SharedReferenceCount.ReferenceController._4_4_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar10->_OnIsTransitioningChanged,(FWriteAccessScope *)&local_888);
  local_870 = &(pFVar10->_OnIsTransitioningChanged).field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_870);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonActivatableWidgetContainerBase____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[3] = 0;
    local_930 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_930);
    *(FMemScope *)(puVar11 + 4) = local_9a8;
    puVar11[5] = CONCAT44(uStack_99c,uStack_9a0);
  }
  if (local_888.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_888.Accessor,&local_888);
  }
  FLLMScope::FLLMScope(&local_9b4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_928 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_920,&local_928,true);
  TSlateDecl<SCommonAnimatedSwitcher,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SCommonAnimatedSwitcher,RequiredArgs::T0RequiredArgs>
            (&local_8d8,"SCommonAnimatedSwitcher",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Widgets\\CommonActivatableWidgetContainer.cpp"
             ,0x67,&local_9b8);
  FMemScope::~FMemScope(&local_920);
  FLLMScope::~FLLMScope(&local_9b4);
  if (local_8d8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_8d8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_8d8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_840 = (this->MySwitcher).Object;
  pTStack_838 = (this->MySwitcher).SharedReferenceCount.ReferenceController;
  (this->MySwitcher).Object = local_8d8._Widget.Object;
  (this->MySwitcher).SharedReferenceCount.ReferenceController =
       local_8d8._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_838);
  pTVar13 = TSlateDecl<SCommonAnimatedSwitcher,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_8d8,&local_900,pFVar10);
  pTVar2 = (pTVar13->SharedReferenceCount).ReferenceController;
  local_978 = pTVar13->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_970.ReferenceController = pTVar2;
  if ((SCommonAnimatedSwitcher **)&pFVar9->_padding_ != &local_978) {
    pFVar9->_padding_ = (longlong)local_978;
    local_978 = (SCommonAnimatedSwitcher *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar9->_padding_,&local_970);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_970.ReferenceController);
  pFVar8 = SOverlay::FArguments::operator+(pFVar8,pFVar9);
  pFVar9 = SOverlay::Slot((FSlotArguments *)local_810,0);
  pFVar14 = SSpacer::FArguments::FArguments((FArguments *)local_310);
  local_997 = 1;
  local_998 = (uchar)EVisibility::Collapsed.Value.Value;
  local_990 = (undefined1  [8])0x0;
  FStack_988.Data = (FScriptContainerElement *)0x0;
  local_980 = 0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar14->_padding_ = EVisibility::Collapsed.Value.Value;
  *(undefined1 *)((longlong)&pFVar14->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar14->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_990);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_990,
             (FWriteAccessScope *)&local_8c0);
  if (((int)local_980 != 0) && (FStack_988.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_988.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_988,0,0,0x10);
    local_980 = local_980 & 0xffffffff00000000;
  }
  if (local_8c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_8c0.Accessor,&local_8c0);
  }
  if (FStack_988.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_988.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_990);
  FLLMScope::FLLMScope(&local_9b0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_918 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_910,&local_918,true);
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>
            (&local_8f0,"SSpacer",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Widgets\\CommonActivatableWidgetContainer.cpp"
             ,0x71,&local_9b7);
  FMemScope::~FMemScope(&local_910);
  FLLMScope::~FLLMScope(&local_9b0);
  if (local_8f0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_8f0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_8f0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_830 = (this->MyInputGuard).Object;
  pTStack_828 = (this->MyInputGuard).SharedReferenceCount.ReferenceController;
  (this->MyInputGuard).Object = local_8f0._Widget.Object;
  (this->MyInputGuard).SharedReferenceCount.ReferenceController =
       local_8f0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_828);
  pTVar15 = TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_8f0,&local_868,pFVar14);
  pTVar3 = (pTVar15->SharedReferenceCount).ReferenceController;
  local_968 = pTVar15->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_960.ReferenceController = pTVar3;
  if ((SSpacer **)&pFVar9->_padding_ != &local_968) {
    pFVar9->_padding_ = (longlong)local_968;
    local_968 = (SSpacer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar9->_padding_,&local_960);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_960.ReferenceController);
  pFVar8 = SOverlay::FArguments::operator+(pFVar8,pFVar9);
  FLLMScope::FLLMScope(&local_9ac,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_908 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_9a8,&local_908,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_858,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Widgets\\CommonActivatableWidgetContainer.cpp"
             ,100,local_9b6);
  FMemScope::~FMemScope(&local_9a8);
  FLLMScope::~FLLMScope(&local_9ac);
  pTVar16 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_858,&local_820,pFVar8);
  local_950.ReferenceController = (pTVar16->SharedReferenceCount).ReferenceController;
  local_958 = pTVar16->Object;
  if (local_950.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_950.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_950.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->MyOverlay;
  if (pTVar1 != (TSharedPtr<SOverlay,1> *)&local_958) {
    pTVar1->Object = local_958;
    local_958 = (SOverlay *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyOverlay).SharedReferenceCount,&local_950);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_950.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_820.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_858._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_868.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8f0._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_100);
  if ((void *)local_100._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_100._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_100);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_310);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_810 + 0x30));
  if (local_7d8 != (void *)0x0) {
    FMemory::Free(local_7d8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_810 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_810._16_8_);
  if ((undefined8 *)local_810._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_810._0_8_)(local_810._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_900.SharedReferenceCount.ReferenceController._4_4_,
                      local_900.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8d8._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_530);
  if ((void *)local_530._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_530._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_530);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_548);
  if ((void *)local_548._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_548._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_548);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_750);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_7b0 + 0x30));
  if (local_778 != (void *)0x0) {
    FMemory::Free(local_778);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_7b0 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_7b0._16_8_);
  if ((undefined8 *)local_7b0._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_7b0._0_8_)(local_7b0._0_8_,1);
  }
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_518._Slots.AllocatorInstance.Data,local_518._Slots.ArrayNum);
  if ((FSlotArguments *)local_518._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_518._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_518);
  if ((this->MySwitcher).Object == (SCommonAnimatedSwitcher *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar17 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar17;
    }
  }
  pFVar18 = SWidgetSwitcher::AddSlot((SWidgetSwitcher *)(this->MySwitcher).Object,&local_e8,-1);
  pSVar6 = SNullWidget::NullWidget.Object;
  local_948 = SNullWidget::NullWidget.Object;
  local_940.ReferenceController = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)&pFVar18->_padding_ != &local_948) {
    pFVar18->_padding_ = (longlong)pSVar6;
    local_948 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar18->_padding_,&local_940);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_940.ReferenceController);
  TPanelChildren<FBasicLayoutWidgetSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_e8);
  if (pTVar1->Object == (SOverlay *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar17 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar17;
    }
  }
  pSVar4 = pTVar1->Object;
  pTVar2 = (this->MyOverlay).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar4 == (SOverlay *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar17 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar17;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar4;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// RegisterInstanceInternal @ 14a80eaa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonActivatableWidgetContainerBase::RegisterInstanceInternal
          (UCommonActivatableWidgetContainerBase *this,UCommonActivatableWidget *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UCommonActivatableWidget>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  FName local_res8;
  UCommonActivatableWidget *local_28;
  FString local_20;
  
  if (6 < (byte)LogCommonUI._0_1_) {
    local_res8 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res8,&local_20);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
  }
  pTVar2 = &this->WidgetList;
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  pFVar3 = pFVar6 + (longlong)(this->WidgetList).ArrayNum * 8;
  for (; pFVar6 != pFVar3; pFVar6 = pFVar6 + 8) {
    if (*(UCommonActivatableWidget **)pFVar6 == (UCommonActivatableWidget *)0x0) {
      bVar7 = param_1 == (UCommonActivatableWidget *)0x0;
    }
    else {
      bVar7 = *(UCommonActivatableWidget **)pFVar6 == param_1;
    }
    if (bVar7) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2907796557082394831>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Widgets\\CommonActivatableWidgetContainer.cpp"
                         ,0xcf,"!WidgetList.Contains(&NewWidget)");
      if (!bVar7) {
        return;
      }
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_28 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UCommonActivatableWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar3 + (longlong)(this->WidgetList).ArrayMax * 8))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar5 = (this->WidgetList).ArrayNum;
  piVar1 = &(this->WidgetList).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->WidgetList).ArrayNum = iVar5 + 1;
  *(UCommonActivatableWidget **)((pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_28;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_28 != (UCommonActivatableWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_28);
  }
  (**(code **)(this->_padding_ + 0x310))(this,param_1);
  return;
}

// ReleaseSlateResources @ 14a811970

void __thiscall
UCommonActivatableWidgetContainerBase::ReleaseSlateResources
          (UCommonActivatableWidgetContainerBase *this,bool param_1)

{
  int *piVar1;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UVisual::ReleaseSlateResources((UVisual *)this,param_1);
  local_38 = 0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyOverlay != (TSharedPtr<SOverlay,1> *)&local_38) {
    (this->MyOverlay).Object = (SOverlay *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyOverlay).SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyInputGuard != (TSharedPtr<SSpacer,1> *)&local_28) {
    (this->MyInputGuard).Object = (SSpacer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyInputGuard).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MySwitcher != (TSharedPtr<SCommonAnimatedSwitcher,1> *)&local_18) {
    (this->MySwitcher).Object = (SCommonAnimatedSwitcher *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MySwitcher).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  DestructItems<TSharedPtr<SWidget,1>,int>
            ((TSharedPtr<SWidget,1> *)(this->ReleasedWidgets).AllocatorInstance.Data,
             (this->ReleasedWidgets).ArrayNum);
  piVar1 = &(this->ReleasedWidgets).ArrayMax;
  (this->ReleasedWidgets).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->ReleasedWidgets).AllocatorInstance,0,piVar1);
  }
  (this->WidgetList).ArrayNum = 0;
  if ((this->WidgetList).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->WidgetList).AllocatorInstance,0,&(this->WidgetList).ArrayMax);
  }
  if (this->bResetPoolWhenReleasingSlateResources != false) {
    FUserWidgetPool::ResetPool(&this->GeneratedWidgetsPool);
    return;
  }
  FUserWidgetPool::ReleaseAll(&this->GeneratedWidgetsPool,true);
  return;
}

// ReleaseWidget @ 14a8122e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UCommonActivatableWidgetContainerBase::ReleaseWidget
          (UCommonActivatableWidgetContainerBase *this,TSharedRef<SWidget,1> *param_1)

{
  int *piVar1;
  atomic<int> *paVar2;
  TArray<TSharedPtr<SWidget,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  SCommonAnimatedSwitcher *this_00;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TObjectPtr<UCommonActivatableWidget>_u_0 TVar10;
  FTSTicker *this_01;
  undefined8 *puVar11;
  ulong64 uVar12;
  FName local_res8;
  TObjectPtr<UCommonActivatableWidget>_u_0 local_res10;
  UCommonActivatableWidgetContainerBase *local_res18;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  SWidget *local_b0;
  TReferenceControllerBase<1> *local_a8;
  FString local_a0;
  TSharedPtr<SWidget,1> local_90;
  TSharedRef<SWidget,1> local_80;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  TWeakPtr<FTSTicker::FElement,1> local_38;
  
  if (6 < (byte)LogCommonUI._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
  }
  pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
  local_90.Object = param_1->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_90.SharedReferenceCount.ReferenceController = pTVar5;
  TVar10.DebugPtr = ActivatableWidgetFromSlate(&local_90);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if (TVar10.DebugPtr == (UCommonActivatableWidget *)0x0) {
    if (2 < (byte)LogCommonUI._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
    }
  }
  else {
    if (6 < (byte)LogCommonUI._0_1_) {
      local_res8 = (FName)(TVar10.DebugPtr)->_padding_;
      ::FName::ToString(&local_res8,&local_a0);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
    }
    FUserWidgetPool::Release(&this->GeneratedWidgetsPool,(UUserWidget *)TVar10.DebugPtr,true);
    local_res10.DebugPtr = TVar10.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar10.DebugPtr);
    }
    TArray<TObjectPtr<UCommonActivatableWidget>,TSizedDefaultAllocator<32>_>::Remove
              (&this->WidgetList,(TObjectPtr<UCommonActivatableWidget> *)&local_res10.ObjectPtr);
  }
  if (((this->MySwitcher).Object == (SCommonAnimatedSwitcher *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_80.Object = param_1->Object;
  this_00 = (this->MySwitcher).Object;
  local_80.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_80.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar9 = SWidgetSwitcher::RemoveSlot((SWidgetSwitcher *)this_00,&local_80);
  if (iVar9 != -1) {
    if (6 < (byte)LogCommonUI._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
    }
    local_b0 = param_1->Object;
    pTVar3 = &this->ReleasedWidgets;
    local_a8 = (param_1->SharedReferenceCount).ReferenceController;
    if (local_a8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_a8->SharedReferenceCount = (atomic<int>)((int)local_a8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar6 = (pTVar3->AllocatorInstance).Data;
    if (((pFVar6 <= (FScriptContainerElement *)&local_b0) &&
        ((FScriptContainerElement *)&local_b0 <
         pFVar6 + (longlong)(this->ReleasedWidgets).ArrayMax * 0x10)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar9 = (this->ReleasedWidgets).ArrayNum;
    piVar1 = &(this->ReleasedWidgets).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar3->AllocatorInstance,piVar1);
    }
    (this->ReleasedWidgets).ArrayNum = iVar9 + 1;
    pFVar6 = (pTVar3->AllocatorInstance).Data;
    *(SWidget **)(pFVar6 + (longlong)iVar9 * 0x10) = local_b0;
    *(TReferenceControllerBase<1> **)(pFVar6 + (longlong)iVar9 * 0x10 + 8) = local_a8;
    local_a8 = (TReferenceControllerBase<1> *)0x0;
    local_b0 = (SWidget *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if ((this->ReleasedWidgets).ArrayNum == 1) {
      this_01 = FTSTicker::GetCoreTicker();
      local_c8 = (undefined1  [8])0x0;
      local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_c0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
                 (FWriteAccessScope *)&local_58);
      local_40 = &local_c0;
      puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_c0);
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = &
                   ___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar12 = FDelegateHandle::GenerateNewID();
        puVar11[2] = uVar12;
        *puVar11 = &TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UCommonActivatableWidgetContainerBase::ReleaseWidget'::`85'::<lambda_1>_>
                    ::_vftable_;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar11[3] = 0;
        local_res18 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_res18);
        puVar11[4] = this;
      }
      if (local_58.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
      }
      FTSTicker::AddTicker
                (this_01,&local_38,
                 (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_c8,0.0);
      if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar4 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)((local_38.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_38.WeakReferenceCount.ReferenceController,1);
        }
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
                 (FWriteAccessScope *)&local_70);
      if ((local_c0.DelegateSize != 0) &&
         (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_c0,0,0,0x10);
        local_c0.DelegateSize = 0;
      }
      if (local_70.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
      }
      if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_c0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_c8);
    }
  }
  return;
}

// RemoveWidget @ 14a814320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UCommonActivatableWidgetContainerBase::RemoveWidget
          (UCommonActivatableWidgetContainerBase *this,UCommonActivatableWidget *param_1)

{
  SCommonAnimatedSwitcher *this_00;
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  TSharedPtr<SWidget,1> *pTVar4;
  UCommonActivatableWidget *pUVar5;
  FName FStackX_8;
  TObjectPtr<UCommonActivatableWidget>_u_0 TStackX_10;
  TSharedPtr<SWidget,1> TStack_58;
  FString FStack_48;
  TSharedRef<SWidget,1> TStack_38;
  TSharedPtr<SWidget,1> TStack_28;
  
  if (param_1 == (UCommonActivatableWidget *)0x0) {
    return;
  }
  pUVar5 = (UCommonActivatableWidget *)0x0;
  FStackX_8 = (FName)((ulonglong)FStackX_8 & 0xffffffff00000000);
  if (6 < (byte)LogCommonUI._0_1_) {
    FStackX_8 = (FName)param_1->_padding_;
    ::FName::ToString(&FStackX_8,&FStack_48);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
    if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
    }
  }
  this_00 = (this->MySwitcher).Object;
  if (this_00 != (SCommonAnimatedSwitcher *)0x0) {
    pTVar4 = SWidgetSwitcher::GetActiveWidget((SWidgetSwitcher *)this_00,&TStack_28);
    pUVar5 = ActivatableWidgetFromSlate(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_28.SharedReferenceCount.ReferenceController);
  }
  if (param_1 == pUVar5) {
    if (param_1->bIsActive == false) {
      this->bRemoveDisplayedWidgetPostTransition = true;
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014a8143fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1->_padding_ + 0x528))(param_1);
    return;
  }
  UWidget::GetCachedWidget((UWidget *)param_1,&TStack_58);
  if ((TStack_58.Object == (SWidget *)0x0) ||
     ((this->MySwitcher).Object == (SCommonAnimatedSwitcher *)0x0)) {
    FUserWidgetPool::Release(&this->GeneratedWidgetsPool,(UUserWidget *)param_1,true);
    TStackX_10.DebugPtr = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UCommonActivatableWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    TArray<TObjectPtr<UCommonActivatableWidget>,TSizedDefaultAllocator<32>_>::Remove
              (&this->WidgetList,(TObjectPtr<UCommonActivatableWidget> *)&TStackX_10.ObjectPtr);
  }
  else {
    if ((TStack_58.Object == (SWidget *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar2.ReferenceController = TStack_58.SharedReferenceCount.ReferenceController;
    TStack_38.SharedReferenceCount.ReferenceController =
         TStack_58.SharedReferenceCount.ReferenceController;
    if (TStack_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (TStack_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(TStack_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((TStack_58.Object == (SWidget *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    ReleaseWidget(this,&TStack_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar2.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_58.SharedReferenceCount.ReferenceController);
  return;
}

// RemoveWidget @ 14a814330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UCommonActivatableWidgetContainerBase::RemoveWidget
          (UCommonActivatableWidgetContainerBase *this,UCommonActivatableWidget *param_1)

{
  SCommonAnimatedSwitcher *this_00;
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  TSharedPtr<SWidget,1> *pTVar4;
  UCommonActivatableWidget *pUVar5;
  FName local_res8;
  TObjectPtr<UCommonActivatableWidget>_u_0 local_res10;
  TSharedPtr<SWidget,1> local_58;
  FString local_48;
  TSharedRef<SWidget,1> local_38;
  TSharedPtr<SWidget,1> local_28;
  
  pUVar5 = (UCommonActivatableWidget *)0x0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if (6 < (byte)LogCommonUI._0_1_) {
    local_res8 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res8,&local_48);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  this_00 = (this->MySwitcher).Object;
  if (this_00 != (SCommonAnimatedSwitcher *)0x0) {
    pTVar4 = SWidgetSwitcher::GetActiveWidget((SWidgetSwitcher *)this_00,&local_28);
    pUVar5 = ActivatableWidgetFromSlate(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  if (param_1 == pUVar5) {
    if (param_1->bIsActive == false) {
      this->bRemoveDisplayedWidgetPostTransition = true;
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014a8143fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1->_padding_ + 0x528))(param_1);
    return;
  }
  UWidget::GetCachedWidget((UWidget *)param_1,&local_58);
  if ((local_58.Object == (SWidget *)0x0) ||
     ((this->MySwitcher).Object == (SCommonAnimatedSwitcher *)0x0)) {
    FUserWidgetPool::Release(&this->GeneratedWidgetsPool,(UUserWidget *)param_1,true);
    local_res10.DebugPtr = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UCommonActivatableWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    TArray<TObjectPtr<UCommonActivatableWidget>,TSizedDefaultAllocator<32>_>::Remove
              (&this->WidgetList,(TObjectPtr<UCommonActivatableWidget> *)&local_res10.ObjectPtr);
  }
  else {
    if ((local_58.Object == (SWidget *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar2.ReferenceController = local_58.SharedReferenceCount.ReferenceController;
    local_38.SharedReferenceCount.ReferenceController =
         local_58.SharedReferenceCount.ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_58.Object == (SWidget *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    ReleaseWidget(this,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar2.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return;
}

// SetSwitcherIndex @ 14a81bce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonActivatableWidgetContainerBase::SetSwitcherIndex
          (UCommonActivatableWidgetContainerBase *this,int param_1,bool param_2)

{
  UCommonActivatableWidget *pUVar1;
  code *pcVar2;
  bool bVar3;
  int *piVar4;
  SCommonAnimatedSwitcher *pSVar5;
  
  if (6 < (byte)LogCommonUI._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
  }
  pSVar5 = (this->MySwitcher).Object;
  if (pSVar5 != (SCommonAnimatedSwitcher *)0x0) {
    piVar4 = TAttribute<int>::Get((TAttribute<int> *)&pSVar5->_padding_);
    if (*piVar4 != param_1) {
      pUVar1 = (this->DisplayedWidget).field0_0x0.DebugPtr;
      if (pUVar1 != (UCommonActivatableWidget *)0x0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnDeactivatedEvent
                   ,this);
        pUVar1 = (this->DisplayedWidget).field0_0x0.DebugPtr;
        if (pUVar1->bIsActive == false) {
          pSVar5 = TSharedPtr<SCommonAnimatedSwitcher,1>::operator->(&this->MySwitcher);
          piVar4 = TAttribute<int>::Get((TAttribute<int> *)&pSVar5->_padding_);
          if (*piVar4 != 0) {
            this->bRemoveDisplayedWidgetPostTransition = true;
          }
        }
        else {
          (**(code **)(pUVar1->_padding_ + 0x528))();
        }
      }
      if ((this->MySwitcher).Object == (SCommonAnimatedSwitcher *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      SCommonAnimatedSwitcher::TransitionToIndex((this->MySwitcher).Object,param_1,param_2);
    }
  }
  return;
}

// SetTransitionDuration @ 14a81cb40

void __thiscall
UCommonActivatableWidgetContainerBase::SetTransitionDuration
          (UCommonActivatableWidgetContainerBase *this,float param_1)

{
  SCommonAnimatedSwitcher *this_00;
  
  this_00 = (this->MySwitcher).Object;
  this->TransitionDuration = param_1;
  if (this_00 != (SCommonAnimatedSwitcher *)0x0) {
    SCommonAnimatedSwitcher::SetTransition(this_00,param_1,this->TransitionCurveType);
    return;
  }
  return;
}

// StaticRegisterNativesUCommonActivatableWidgetContainerBase @ 14a81e2d0

void __cdecl
UCommonActivatableWidgetContainerBase::StaticRegisterNativesUCommonActivatableWidgetContainerBase
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execBP_AddWidget @ 14a82bfa0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UCommonActivatableWidgetContainerBase::execBP_AddWidget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TObjectPtr<UUserWidget>_u_0 *pTVar1;
  int iVar2;
  FProperty *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  code *pcVar6;
  UObject *pUVar7;
  bool bVar8;
  int iVar9;
  UClass *pUVar10;
  UObject *pUVar11;
  UWidget *this;
  FName FVar12;
  UWorld *pUVar13;
  TSharedPtr<SWidget,1> *pTVar14;
  longlong lVar15;
  TSharedRef<SWidget,1> *pTVar16;
  uint uVar17;
  undefined1 *puVar18;
  TObjectPtr<UUserWidget>_u_0 TVar19;
  TObjectPtr<UUserWidget>_u_0 *pTVar20;
  undefined1 local_res10 [8];
  TObjectPtr<UUserWidget>_u_0 *local_res18;
  undefined1 local_res20 [8];
  TObjectPtr<UUserWidget>_u_0 local_e8;
  TObjectPtr<UUserWidget>_u_0 local_e0;
  uint local_d8;
  int local_d4;
  UObject *local_d0;
  SWidget *local_c8;
  FSharedReferencer<1> local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  TObjectPtr<UUserWidget>_u_0 local_a0;
  UObject *local_98;
  UObject *local_90;
  UObject *local_88;
  TObjectPtr<UUserWidget>_u_0 *local_80;
  code *local_78;
  undefined1 *local_70;
  TSharedRef<SWidget,1> local_68;
  TSharedPtr<SWidget,1> local_58;
  
  local_d8 = 0;
  local_d0 = (UObject *)0x0;
  local_res18 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  pUVar7 = local_d0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (local_d0 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_d0);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar7);
    }
  }
  puVar18 = &param_1[0xc].field_0x18;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar7 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar7);
    }
  }
  bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[0xd].field_0x10);
  if ((bVar8) ||
     (bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[0xd].field_0x18), bVar8)) {
    if ((pUVar7 != (UObject *)0x0) &&
       (pUVar10 = UCommonActivatableWidget::StaticClass(), pUVar10 != (UClass *)0x0)) {
      iVar9 = (int)pUVar10->_padding_;
      if ((*(int *)&pUVar7[1].field_0x10 < iVar9) ||
         ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar9 * 8) !=
          &pUVar10->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        pTVar20 = *(TObjectPtr<UUserWidget>_u_0 **)(param_1 + 0xd);
        iVar9 = *(int *)&param_1[0xd].field_0x8;
        local_e8.DebugPtr = (UUserWidget *)0x0;
        pTVar1 = pTVar20 + iVar9;
        do {
          if (*(int *)&param_1[0xd].field_0x8 != iVar9) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<TObjectPtr<UUserWidget>,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res10);
          }
          if (pTVar20 == pTVar1) goto LAB_14a82c1c6;
          TVar19 = (TObjectPtr<UUserWidget>_u_0)pTVar20->DebugPtr;
          pUVar10 = UCommonActivatableWidget::StaticClass();
          if (pUVar10 == (UClass *)0x0) {
LAB_14a82c18e:
            pUVar11 = (UObject *)0x0;
          }
          else {
            iVar2 = (int)pUVar10->_padding_;
            if ((*(int *)&pUVar7[1].field_0x10 < iVar2) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar2 * 8) !=
                &pUVar10->_padding_)) {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
            pUVar11 = pUVar7;
            if (!bVar8) goto LAB_14a82c18e;
          }
          if ((UObject *)(TVar19.DebugPtr)->_padding_ == pUVar11) goto LAB_14a82c19c;
          pTVar20 = pTVar20 + 1;
        } while( true );
      }
    }
  }
  else {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5370306963798228889>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Blueprint\\UserWidgetPool.h"
                       ,0x67,"IsInitialized()");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  goto LAB_14a82c0ce;
LAB_14a82c19c:
  local_e8 = TVar19;
  local_a0 = TVar19;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)TVar19.DebugPtr);
  }
  TArray<TObjectPtr<UUserWidget>,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
            ((TArray<TObjectPtr<UUserWidget>,TSizedDefaultAllocator<32>_> *)(param_1 + 0xd),
             (TObjectPtr<UUserWidget> *)&local_a0.ObjectPtr,Default);
LAB_14a82c1c6:
  this = (UWidget *)FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[0xd].field_0x10);
  if ((UCommonActivatableWidget *)local_e8.DebugPtr == (UCommonActivatableWidget *)0x0) {
    if (this == (UWidget *)0x0) {
      FVar12 = (FName)FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[0xd].field_0x20);
      if (FVar12 == (FName)0x0) {
        local_88 = pUVar7;
        local_a8 = FVar12;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        pUVar13 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[0xd].field_0x18);
        local_e8.DebugPtr =
             CreateWidget<UUserWidget,UWorld_*>
                       (pUVar13,(TSubclassOf<UUserWidget>)&local_88,local_a8);
      }
      else {
        local_90 = pUVar7;
        local_b0.ComparisonIndex.Value = 0;
        local_b0.Number = 0;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        local_e8.DebugPtr =
             CreateWidget<UUserWidget,APlayerController_*>
                       ((APlayerController *)FVar12,(TSubclassOf<UUserWidget>)&local_90,local_b0);
      }
    }
    else {
      local_98 = pUVar7;
      local_b8.ComparisonIndex.Value = 0;
      local_b8.Number = 0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      local_e8.DebugPtr =
           CreateWidget<UUserWidget,UWidget_*>(this,(TSubclassOf<UUserWidget>)&local_98,local_b8);
    }
    if ((UCommonActivatableWidget *)local_e8.DebugPtr != (UCommonActivatableWidget *)0x0)
    goto LAB_14a82c2a4;
  }
  else {
LAB_14a82c2a4:
    local_e0 = local_e8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UCommonActivatableWidget *)local_e8.DebugPtr != (UCommonActivatableWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_e8.DebugPtr);
    }
    if (((*(TObjectPtr<UUserWidget>_u_0 **)puVar18 <= &local_e0) &&
        (&local_e0 < *(TObjectPtr<UUserWidget>_u_0 **)puVar18 + *(int *)&param_1[0xc].field_0x24))
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = *(int *)&param_1[0xc].field_0x20;
    if (iVar9 == *(int *)&param_1[0xc].field_0x24) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)puVar18,(int *)&param_1[0xc].field_0x24);
    }
    *(int *)&param_1[0xc].field_0x20 = iVar9 + 1;
    ((TObjectPtr<UUserWidget>_u_0 *)(*(longlong *)puVar18 + (longlong)iVar9 * 8))->DebugPtr =
         (UUserWidget *)local_e0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UCommonActivatableWidget *)local_e0.DebugPtr != (UCommonActivatableWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_e0.DebugPtr);
    }
    uVar17 = local_d8;
    if (this == (UWidget *)0x0) {
LAB_14a82c396:
      bVar8 = true;
    }
    else {
      uVar17 = 1;
      pTVar14 = UWidget::GetCachedWidget(this,&local_58);
      if (pTVar14->Object != (SWidget *)0x0) goto LAB_14a82c396;
      bVar8 = false;
    }
    if ((uVar17 & 1) != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
    }
    if (bVar8) {
      uVar17 = ((uint)((ulonglong)local_e8.DebugPtr >> 0x14) & 0xffff ^
               (uint)((ulonglong)local_e8.DebugPtr >> 4)) * -0x7a143595;
      uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
      uVar17 = uVar17 >> 0x10 ^ uVar17;
      if (*(int *)&param_1[0xe].field_0x8 != *(int *)&param_1[0xf].field_0xc) {
        puVar18 = *(undefined1 **)&param_1[0xf].field_0x18;
        if (*(undefined1 **)&param_1[0xf].field_0x18 == (undefined1 *)0x0) {
          puVar18 = &param_1[0xf].field_0x10;
        }
        iVar9 = *(int *)(puVar18 + (ulonglong)(*(int *)&param_1[0xf].field_0x20 - 1U & uVar17) * 4);
        if (iVar9 != -1) {
          lVar15 = *(longlong *)(param_1 + 0xe);
          do {
            if (*(UCommonActivatableWidget **)((longlong)iVar9 * 0x20 + lVar15) ==
                (UCommonActivatableWidget *)local_e8.DebugPtr) {
              if ((iVar9 != -1) && (lVar15 = (longlong)iVar9 * 0x20 + lVar15, lVar15 != 0))
              goto LAB_14a82c485;
              break;
            }
            iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + lVar15);
          } while (iVar9 != -1);
        }
      }
      local_80 = &local_e8;
      TSet<TTuple<UUserWidget_*,TSharedPtr<SWidget,1>_>,TDefaultMapHashableKeyFuncs<UUserWidget_*,TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<UUserWidget_*_const_&>_>
                ((TSet<TTuple<UUserWidget_*,TSharedPtr<SWidget,1>_>,TDefaultMapHashableKeyFuncs<UUserWidget_*,TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                  *)(param_1 + 0xe),(uint)&local_d4,
                 (TKeyInitializer<UUserWidget_*_const_&> *)(ulonglong)uVar17,(bool *)&local_80);
      lVar15 = (longlong)local_d4 * 0x20 + *(longlong *)(param_1 + 0xe);
LAB_14a82c485:
      if (*(longlong *)(lVar15 + 8) == 0) {
        local_78 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FUserWidgetPool::GetOrCreateInstance<UCommonActivatableWidget>'::__l2::<lambda_1>,TSharedPtr<SObjectWidget,1>,UUserWidget_*,TSharedRef<SWidget,1>_>
                   ::Call;
        local_70 = local_res20;
        pTVar16 = UWidget::TakeWidget_Private
                            ((UWidget *)local_e8.DebugPtr,&local_68,
                             (TFunctionRef<TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                              *)&local_78);
        pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
        pSVar5 = pTVar16->Object;
        if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_68.SharedReferenceCount.ReferenceController);
        }
        else {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_68.SharedReferenceCount.ReferenceController);
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_c8 = pSVar5;
        local_c0.ReferenceController = pTVar4;
        if ((SWidget **)(lVar15 + 8) != &local_c8) {
          *(SWidget **)(lVar15 + 8) = pSVar5;
          local_c8 = (SWidget *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(lVar15 + 0x10),&local_c0);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c0.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      }
    }
  }
  TVar19 = local_e8;
  if ((UCommonActivatableWidget *)local_e8.DebugPtr == (UCommonActivatableWidget *)0x0) {
LAB_14a82c55b:
    TVar19.DebugPtr = (UUserWidget *)0x0;
  }
  else {
    pUVar10 = UCommonActivatableWidget::StaticClass();
    iVar9 = (int)pUVar10->_padding_;
    if ((*(int *)((TVar19.DebugPtr)->_padding_ + 0x38) < iVar9) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)((TVar19.DebugPtr)->_padding_ + 0x30) + (longlong)iVar9 * 8)
        != &pUVar10->_padding_)) goto LAB_14a82c55b;
  }
  if ((UCommonActivatableWidget *)TVar19.DebugPtr != (UCommonActivatableWidget *)0x0) {
    RegisterInstanceInternal
              ((UCommonActivatableWidgetContainerBase *)param_1,
               (UCommonActivatableWidget *)TVar19.DebugPtr);
    local_res18->DebugPtr = (UUserWidget *)TVar19;
    return;
  }
LAB_14a82c0ce:
  local_res18->DebugPtr = (UUserWidget *)0x0;
  return;
}

// execClearWidgets @ 14a82cad0

void __cdecl
UCommonActivatableWidgetContainerBase::execClearWidgets
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetSwitcherIndex((UCommonActivatableWidgetContainerBase *)param_1,0,false);
  return;
}

// execGetActiveWidget @ 14a82d340

void __cdecl
UCommonActivatableWidgetContainerBase::execGetActiveWidget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TSharedPtr<SWidget,1> *pTVar1;
  UCommonActivatableWidget *pUVar2;
  TSharedPtr<SWidget,1> local_18;
  
  pUVar2 = (UCommonActivatableWidget *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(SWidgetSwitcher **)&param_1[0x10].field_0x20 != (SWidgetSwitcher *)0x0) {
    pTVar1 = SWidgetSwitcher::GetActiveWidget
                       (*(SWidgetSwitcher **)&param_1[0x10].field_0x20,&local_18);
    pUVar2 = ActivatableWidgetFromSlate(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  *(UCommonActivatableWidget **)param_3 = pUVar2;
  return;
}

// execGetTransitionDuration @ 14a82f690

void __cdecl
UCommonActivatableWidgetContainerBase::execGetTransitionDuration
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0xb].field_0x1c;
  return;
}

// execRemoveWidget @ 14a831780

void __cdecl
UCommonActivatableWidgetContainerBase::execRemoveWidget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UCommonActivatableWidget *local_res10;
  
  local_res10 = (UCommonActivatableWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (UCommonActivatableWidget *)0x0) {
    RemoveWidget((UCommonActivatableWidgetContainerBase *)param_1,local_res10);
  }
  return;
}

// execSetTransitionDuration @ 14a836380

void __cdecl
UCommonActivatableWidgetContainerBase::execSetTransitionDuration
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SCommonAnimatedSwitcher *this;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
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
  this = *(SCommonAnimatedSwitcher **)&param_1[0x10].field_0x20;
  *(float *)&param_1[0xb].field_0x1c = local_res8[0];
  if (this != (SCommonAnimatedSwitcher *)0x0) {
    SCommonAnimatedSwitcher::SetTransition(this,local_res8[0],param_1[0xb].field_0x19);
  }
  return;
}

