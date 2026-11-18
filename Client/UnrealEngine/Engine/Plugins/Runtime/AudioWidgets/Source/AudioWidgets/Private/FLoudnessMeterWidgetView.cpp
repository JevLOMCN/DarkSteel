// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 12

// FLoudnessMeterWidgetView @ 14d8b63d0

FLoudnessMeterWidgetView * __thiscall
AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMeterWidgetView(FLoudnessMeterWidgetView *this)

{
  MakeShared<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
            (&this->LoudnessMetrics);
  MakeShared<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
            (&this->NumericValues);
  MakeShared<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
            (&this->MeterValues);
  (this->TimerPanelParams).AnalysisTime.bIsSet = true;
  (this->TimerPanelParams).AnalysisTime.Value.Ticks = 0;
  *(undefined8 *)&(this->TimerPanelParams).AnalysisTime.Getter.field_0x10 = 0;
  *(undefined8 *)&(this->TimerPanelParams).AnalysisTime.Getter = 0;
  *(undefined8 *)&(this->TimerPanelParams).AnalysisTime.Getter.field_0x8 = 0;
  *(undefined8 *)&(this->TimerPanelParams).OnResetButtonClicked = 0;
  *(undefined8 *)&(this->TimerPanelParams).OnResetButtonClicked.field_0x8 = 0;
  *(undefined4 *)&(this->TimerPanelParams).OnResetButtonClicked.field_0x10 = 0;
  (this->TimerPanelParams).bIsVisible.Value = false;
  (this->TimerPanelParams).bIsVisible.bIsSet = true;
  *(undefined8 *)&(this->TimerPanelParams).bIsVisible.Getter.field_0x10 = 0;
  *(undefined8 *)&(this->TimerPanelParams).bIsVisible.Getter = 0;
  *(undefined8 *)&(this->TimerPanelParams).bIsVisible.Getter.field_0x8 = 0;
  *(undefined8 *)&(this->TimerPanelParams).OnVisibilityToggleRequested = 0;
  *(undefined8 *)&(this->TimerPanelParams).OnVisibilityToggleRequested.field_0x8 = 0;
  *(undefined4 *)&(this->TimerPanelParams).OnVisibilityToggleRequested.field_0x10 = 0;
  return this;
}

// ~<lambda_1> @ 14d8ba790

void __thiscall
`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x90));
  AudioWidgets::FLoudnessMeterWidgetView::FTimerPanelParams::~FTimerPanelParams
            ((FTimerPanelParams *)((longlong)this + 0x10));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 8));
  return;
}

// ~<lambda_2> @ 14d8ba7d0

void __thiscall
`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_2>::~<lambda_2>(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  return;
}

// ~<lambda_5> @ 14d8ba810

void __thiscall
`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_5>::~<lambda_5>(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x10));
  return;
}

// ~FLoudnessMeterWidgetView @ 14d8bf1f0

void __thiscall
AudioWidgets::FLoudnessMeterWidgetView::~FLoudnessMeterWidgetView(FLoudnessMeterWidgetView *this)

{
  int iVar1;
  TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
  *pTVar2;
  TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *pTVar3;
  int *piVar4;
  uint uStack_4c;
  uint7 uStack_3f;
  TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
  local_38;
  
  pTVar2 = (this->LoudnessMetrics).Object;
  piVar4 = &(pTVar2->Array).ArrayMax;
  iVar1 = (pTVar2->Array).ArrayNum;
  pTVar3 = (TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *)
           (pTVar2->Array).AllocatorInstance.Data;
  if ((pTVar2->Array).ArrayMax < 0) {
    DestructItems<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,int>
              (pTVar3,iVar1);
    (pTVar2->Array).ArrayNum = 0;
    if (*piVar4 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)pTVar2,0,piVar4);
    }
  }
  else {
    DestructItems<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,int>
              (pTVar3,iVar1);
    (pTVar2->Array).ArrayNum = 0;
  }
  if (0 < iVar1) {
    local_38.Array._8_8_ = (ulonglong)uStack_4c << 0x20;
    local_38._24_8_ = (ulonglong)uStack_3f << 8;
    local_38.Array.DataPtr =
         (TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *)0x0;
    local_38.StartIndex = -1;
    local_38.MoveIndex = -1;
    TMulticastDelegate<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
    ::Broadcast(&pTVar2->ArrayChangedDelegate,&local_38);
  }
  pTVar2 = (this->NumericValues).Object;
  piVar4 = &(pTVar2->Array).ArrayMax;
  iVar1 = (pTVar2->Array).ArrayNum;
  pTVar3 = (TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *)
           (pTVar2->Array).AllocatorInstance.Data;
  if ((pTVar2->Array).ArrayMax < 0) {
    DestructItems<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,int>
              (pTVar3,iVar1);
    (pTVar2->Array).ArrayNum = 0;
    if (*piVar4 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)pTVar2,0,piVar4);
    }
  }
  else {
    DestructItems<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,int>
              (pTVar3,iVar1);
    (pTVar2->Array).ArrayNum = 0;
  }
  if (0 < iVar1) {
    local_38.Array._8_8_ = (ulonglong)uStack_4c << 0x20;
    local_38._24_8_ = (ulonglong)uStack_3f << 8;
    local_38.Array.DataPtr =
         (TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *)0x0;
    local_38.StartIndex = -1;
    local_38.MoveIndex = -1;
    TMulticastDelegate<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
    ::Broadcast(&pTVar2->ArrayChangedDelegate,&local_38);
  }
  pTVar2 = (this->MeterValues).Object;
  piVar4 = &(pTVar2->Array).ArrayMax;
  iVar1 = (pTVar2->Array).ArrayNum;
  pTVar3 = (TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *)
           (pTVar2->Array).AllocatorInstance.Data;
  if ((pTVar2->Array).ArrayMax < 0) {
    DestructItems<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,int>
              (pTVar3,iVar1);
    (pTVar2->Array).ArrayNum = 0;
    if (*piVar4 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)pTVar2,0,piVar4);
    }
  }
  else {
    DestructItems<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,int>
              (pTVar3,iVar1);
    (pTVar2->Array).ArrayNum = 0;
  }
  if (0 < iVar1) {
    local_38.Array._8_8_ = (ulonglong)uStack_4c << 0x20;
    local_38._24_8_ = (ulonglong)uStack_3f << 8;
    local_38.Array.DataPtr =
         (TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *)0x0;
    local_38.StartIndex = -1;
    local_38.MoveIndex = -1;
    TMulticastDelegate<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
    ::Broadcast(&pTVar2->ArrayChangedDelegate,&local_38);
  }
  FTimerPanelParams::~FTimerPanelParams(&this->TimerPanelParams);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MeterValues).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NumericValues).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LoudnessMetrics).SharedReferenceCount.ReferenceController);
  return;
}

// operator() @ 14d8c6df0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()
          (void *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  FExtender *pFVar6;
  char cVar7;
  ISlateStyle *pIVar8;
  FText *pFVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  FUIAction *pFVar12;
  FSlateIcon *pFVar13;
  ulonglong uVar14;
  TSharedRef<SWidget,1> *pTVar15;
  FExtender *pFVar16;
  bool bVar17;
  FName local_res8;
  TSharedRef<SWidget,1> *local_res10;
  FName local_res18;
  undefined1 local_res20 [8];
  undefined1 local_4d8 [8];
  undefined1 local_4d0 [8];
  ForAnyElementType FStack_4c8;
  ulonglong local_4c0;
  FDestructionSentinel local_4b8;
  FDelegateAllocation *local_4a0;
  undefined1 local_498 [8];
  FDelegateAllocation local_490;
  undefined1 local_480 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_468;
  ForAnyElementType FStack_460;
  ulonglong local_458;
  undefined1 local_450 [16];
  ForAnyElementType FStack_440;
  FDelegateAllocation *local_438;
  undefined1 local_430 [8];
  FMRSWRecursiveAccessDetector *local_428;
  undefined4 local_420;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_418;
  ForAnyElementType FStack_410;
  ulonglong local_408;
  TSharedPtr<FUICommandList_const_,1> local_400;
  undefined1 local_3f0 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3d8;
  ForAnyElementType FStack_3d0;
  ulonglong local_3c8;
  FName local_3c0;
  FName local_3b8;
  TSharedPtr<FExtender,1> local_3b0;
  undefined1 local_3a0 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_388;
  ForAnyElementType FStack_380;
  ulonglong local_378;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_370;
  undefined1 local_358 [24];
  undefined1 local_340 [8];
  void *pvStack_338;
  undefined8 local_330;
  undefined1 local_328 [208];
  undefined1 local_258 [8];
  void *pvStack_250;
  undefined8 local_248;
  FUIAction local_240;
  FMenuBuilder local_1d8;
  
  bVar17 = false;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_res10 = __return_storage_ptr__;
  pIVar8 = FAppStyle::Get();
  local_400.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 8);
  local_400.Object = *(FUICommandList **)this;
  local_3b0.Object = (FExtender *)0x0;
  local_3b0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (local_400.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_400.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_400.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMenuBuilder::FMenuBuilder
            (&local_1d8,true,&local_400,&local_3b0,false,pIVar8,true,local_res8,true);
  memset(local_328,0,200);
  local_328._128_4_ = 0;
  local_328._24_8_ = 0;
  local_328._56_8_ = 0;
  local_328._88_8_ = 0;
  local_328._120_8_ = 0;
  local_328._152_8_ = 0;
  local_328._184_8_ = 0;
  local_248 = 0;
  local_4c0 = 0;
  local_328._8_8_ = 0;
  local_328._16_8_ = 0;
  local_328[0x20] = false;
  local_328[0x21] = false;
  local_328._40_8_ = 0;
  local_328._48_8_ = 0;
  local_328[0x40] = false;
  local_328[0x41] = false;
  local_328._72_8_ = 0;
  local_328._80_8_ = 0;
  local_328[0x60] = false;
  local_328[0x61] = false;
  local_328._104_8_ = 0;
  local_328._112_8_ = 0;
  local_328[0x84] = false;
  local_328._136_8_ = 0;
  local_328._144_8_ = 0;
  local_328[0xa0] = Preferred;
  local_328[0xa1] = false;
  local_328._168_8_ = 0;
  local_328._176_8_ = 0;
  local_328[0xc1] = false;
  local_328[0xc3] = false;
  local_328[200] = false;
  local_258 = (undefined1  [8])0x0;
  pvStack_250 = (void *)0x0;
  local_4d8[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_4d8[1] = false;
  local_4d0 = (undefined1  [8])0x0;
  FStack_4c8.Data = (FScriptContainerElement *)0x0;
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_400,L"FLoudnessMeterWidgetView",L"LayoutOptions",
                      L"Layout Options");
  FText::FText((FText *)local_3f0,pFVar9);
  local_3f0[0x10] = true;
  local_3c8 = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_3d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_3d0.Data = (FScriptContainerElement *)0x0;
  FMenuBuilder::BeginSection
            (&local_1d8,(FName)0x0,(TAttribute<FText> *)local_3f0,
             (TAttribute<EVisibility> *)local_4d8,(TAttribute<FMenuEntryResizeParams> *)local_328);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_3d8,(FWriteAccessScope *)local_430);
  if (((int)local_3c8 != 0) && (FStack_3d0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3d0,0,0,0x10);
    local_3c8 = local_3c8 & 0xffffffff00000000;
  }
  if (local_420._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_428,(FDestructionSentinel *)local_430);
  }
  if (FStack_3d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3d8.AccessDetector);
  if ((FName)local_3f0._0_8_ != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_3f0._0_8_ + 0x10))();
  }
  if (local_400.Object != (FUICommandList *)0x0) {
    (**(code **)((local_400.Object)->_padding_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4d0);
  if (FStack_4c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4d0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_258);
  if (pvStack_250 != (void *)0x0) {
    FMemory::Free(pvStack_250);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_258);
  FMenuEntryResizeParams::~FMenuEntryResizeParams((FMenuEntryResizeParams *)local_328);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x70),
             (FReadAccessScope *)&local_4b8);
  if ((*(int *)((longlong)this + 0x80) != 0) &&
     (*(longlong **)((longlong)this + 0x78) != (longlong *)0x0)) {
    cVar7 = (**(code **)(**(longlong **)((longlong)this + 0x78) + 0x38))();
    if (cVar7 != '\0') {
      bVar5 = true;
      goto LAB_14d8c7102;
    }
  }
  bVar5 = false;
LAB_14d8c7102:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_4b8);
  if (bVar5) {
    local_4d8[0] = (TEnumAsByte<EVisibility::Private>)0x19;
    local_4d8[1] = false;
    local_4c0 = 0;
    local_4d0 = (undefined1  [8])0x0;
    FStack_4c8.Data = (FScriptContainerElement *)0x0;
    FText::FText((FText *)local_480);
    local_480[0x10] = false;
    local_450[0] = *(undefined1 *)((longlong)this + 0x50);
    local_450[1] = *(undefined1 *)((longlong)this + 0x51);
    local_468.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_460.Data = (FScriptContainerElement *)0x0;
    local_458 = 0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_res18.ComparisonIndex.Value = 0;
    local_res18.Number = 0;
    local_450._8_8_ = (FMRSWRecursiveAccessDetector *)0x0;
    FStack_440.Data = (FScriptContainerElement *)0x0;
    local_438 = (FDelegateAllocation *)((ulonglong)local_438 & 0xffffffff00000000);
    TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)(local_450 + 8),
               (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x58));
    local_498 = (undefined1  [8])0x0;
    local_490.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_490.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_498,
               (FWriteAccessScope *)&local_4b8);
    local_4a0 = &local_490;
    puVar10 = UE::Core::Private::DelegateAllocate(0x38,&local_490);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar10[2] = uVar11;
      *puVar10 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_1>::operator()'::`6'::<lambda_1>_>
                  ::_vftable_;
      *(undefined1 *)(puVar10 + 3) = local_450[0];
      *(undefined1 *)((longlong)puVar10 + 0x19) = local_450[1];
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar10 + 4),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)(local_450 + 8));
    }
    if (local_4b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4b8.Accessor,&local_4b8);
    }
    local_370._16_8_ = 0;
    local_370._0_8_ = (longlong *)0x0;
    local_370._8_8_ = 0;
    local_430 = (undefined1  [8])0x0;
    local_428 = (FMRSWRecursiveAccessDetector *)0x0;
    local_420._0_1_ = false;
    local_420._1_3_ = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_430,
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x70));
    pFVar12 = FUIAction::FUIAction
                        (&local_240,
                         (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_430,
                         &local_370,
                         (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_498,
                         RepeatDisabled);
    pFVar13 = FSlateIcon::FSlateIcon((FSlateIcon *)local_3f0);
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_3b0,L"FLoudnessMeterWidgetView",
                        L"LayoutOptions_Time_ToolTip",L"Display analysis timer");
    FText::FText((FText *)local_3a0,pFVar9);
    local_3a0[0x10] = true;
    local_378 = 0;
    local_388.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_380.Data = (FScriptContainerElement *)0x0;
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_400,L"FLoudnessMeterWidgetView",L"LayoutOptions_Time_Label",
                        L"Time");
    FText::FText((FText *)local_358,pFVar9);
    local_358[0x10] = true;
    local_330 = 0;
    local_340 = (undefined1  [8])0x0;
    pvStack_338 = (void *)0x0;
    FBaseMenuBuilder::AddMenuEntry
              ((FBaseMenuBuilder *)&local_1d8,(TAttribute<FText> *)local_358,
               (TAttribute<FText> *)local_3a0,pFVar13,pFVar12,local_res18,ToggleButton,local_res8,
               (TAttribute<FText> *)local_480,(TAttribute<EVisibility> *)local_4d8);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_340);
    if (pvStack_338 != (void *)0x0) {
      FMemory::Free(pvStack_338);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_340);
    if ((ITextData *)local_358._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_358._0_8_ + 0x10))();
    }
    if (local_400.Object != (FUICommandList *)0x0) {
      (**(code **)((local_400.Object)->_padding_ + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_388,(FWriteAccessScope *)&local_4b8);
    if (((int)local_378 != 0) && (FStack_380.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_380.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_380,0,0,0x10);
      local_378 = local_378 & 0xffffffff00000000;
    }
    if (local_4b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4b8.Accessor,&local_4b8);
    }
    if (FStack_380.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_380.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_388.AccessDetector);
    if ((ITextData *)local_3a0._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_3a0._0_8_ + 0x10))();
    }
    if (local_3b0.Object != (FExtender *)0x0) {
      (**(code **)(((local_3b0.Object)->Extensions).AllocatorInstance.Data + 0x10))();
    }
    FUIAction::~FUIAction(&local_240);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_450 + 8),
               (FWriteAccessScope *)&local_4b8);
    if (((int)local_438 != 0) && (FStack_440.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_440.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_440,0,0,0x10);
      local_438 = (FDelegateAllocation *)((ulonglong)local_438 & 0xffffffff00000000);
    }
    if (local_4b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4b8.Accessor,&local_4b8);
    }
    if (FStack_440.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_440.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)(local_450 + 8));
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_468,(FWriteAccessScope *)&local_4b8);
    if (((int)local_458 != 0) && (FStack_460.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_460.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_460,0,0,0x10);
      local_458 = local_458 & 0xffffffff00000000;
    }
    if (local_4b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4b8.Accessor,&local_4b8);
    }
    if (FStack_460.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_460.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_468.AccessDetector);
    if ((ITextData *)local_480._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_480._0_8_ + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4d0,
               (FWriteAccessScope *)&local_4b8);
    if (((int)local_4c0 != 0) && (FStack_4c8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_4c8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4c8,0,0,0x10);
      local_4c0 = local_4c0 & 0xffffffff00000000;
    }
    if (local_4b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4b8.Accessor,&local_4b8);
    }
    if (FStack_4c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_4c8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_4d0);
  }
  local_400.Object = *(FUICommandList **)((longlong)this + 0x88);
  iVar2 = (int)(local_400.Object)->_padding_;
  uVar14 = (ulonglong)iVar2;
  pFVar16 = (FExtender *)(local_400.Object)->_padding_;
  local_3b0.Object = pFVar16 + uVar14;
  local_res18.ComparisonIndex.Value = iVar2;
  pTVar15 = local_res10;
  while( true ) {
    pFVar6 = local_3b0.Object;
    if ((int)(local_400.Object)->_padding_ != (int)uVar14) {
      `TCheckedPointerIterator<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar16 == pFVar6) break;
    local_4d8[0] = (TEnumAsByte<EVisibility::Private>)0x19;
    local_4d8[1] = false;
    local_4c0 = 0;
    local_4d0 = (undefined1  [8])0x0;
    FStack_4c8.Data = (FScriptContainerElement *)0x0;
    local_3c0.ComparisonIndex.Value = 0;
    local_3c0.Number = 0;
    local_3b8.ComparisonIndex.Value = 0;
    local_3b8.Number = 0;
    pFVar13 = FSlateIcon::FSlateIcon((FSlateIcon *)local_3f0);
    pFVar3 = (pFVar16->Extensions).AllocatorInstance.Data;
    local_498 = (undefined1  [8])0x0;
    local_490.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_490.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_498,
               (FWriteAccessScope *)local_450);
    local_438 = &local_490;
    puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_490);
    if (puVar10 != (undefined8 *)0x0) {
      pTVar15 = *(TSharedRef<SWidget,1> **)&(pFVar16->Extensions).ArrayNum;
      pFVar4 = (pFVar16->Extensions).AllocatorInstance.Data;
      if (pTVar15 != (TSharedRef<SWidget,1> *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)&(pTVar15->SharedReferenceCount).ReferenceController + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      bVar17 = true;
      *puVar10 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar10[2] = uVar11;
      *puVar10 = &TBaseSPLambdaDelegateInstance<1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,``AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_1>::operator()'::`10'::<lambda_2>_>
                  ::_vftable_;
      puVar10[3] = pFVar4;
      puVar10[4] = pTVar15;
      if (pTVar15 != (TSharedRef<SWidget,1> *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)&(pTVar15->SharedReferenceCount).ReferenceController + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      puVar10[5] = pFVar3;
    }
    if ((bVar17) && (bVar17 = false, pTVar15 != (TSharedRef<SWidget,1> *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)&(pTVar15->SharedReferenceCount).ReferenceController + 4);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)pTVar15->Object->_padding_)(pTVar15,1);
      }
    }
    if (FStack_440.Data._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_450._8_8_,(FDestructionSentinel *)local_450);
    }
    pFVar9 = FText::FText((FText *)&local_370);
    FText::FText((FText *)local_480,pFVar9);
    pFVar3 = (pFVar16->Extensions).AllocatorInstance.Data;
    local_458 = 0;
    local_480[0x10] = true;
    local_468.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_460.Data = (FScriptContainerElement *)0x0;
    local_430 = *(undefined1 (*) [8])(pFVar3 + 8);
    if (local_430 != (undefined1  [8])0x0) {
      (**(code **)((longlong)*(ITextData *)local_430 + 8))(local_430,local_res20);
    }
    local_428 = (FMRSWRecursiveAccessDetector *)
                CONCAT44(local_428._4_4_,*(undefined4 *)(pFVar3 + 0x10));
    local_420._0_1_ = true;
    local_408 = 0;
    local_418.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_410.Data = (FScriptContainerElement *)0x0;
    FMenuBuilder::AddSubMenu
              (&local_1d8,(TAttribute<FText> *)local_430,(TAttribute<FText> *)local_480,
               (TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)local_498,false
               ,pFVar13,true,local_3b8,local_3c0,(TAttribute<EVisibility> *)local_4d8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_418,(FWriteAccessScope *)&local_4b8);
    if (((int)local_408 != 0) && (FStack_410.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_410.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_410,0,0,0x10);
      local_408 = local_408 & 0xffffffff00000000;
    }
    if (local_4b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4b8.Accessor,&local_4b8);
    }
    if (FStack_410.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_410.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_418.AccessDetector);
    if (local_430 != (undefined1  [8])0x0) {
      (**(code **)((longlong)*(ITextData *)local_430 + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_468,(FWriteAccessScope *)&local_4b8);
    if (((int)local_458 != 0) && (FStack_460.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_460.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_460,0,0,0x10);
      local_458 = local_458 & 0xffffffff00000000;
    }
    if (local_4b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4b8.Accessor,&local_4b8);
    }
    if (FStack_460.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_460.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_468.AccessDetector);
    if ((ITextData *)local_480._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_480._0_8_ + 0x10))();
    }
    if ((longlong *)local_370._0_8_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_370._0_8_ + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_498,
               (FWriteAccessScope *)&local_4b8);
    if ((local_490.DelegateSize != 0) &&
       (local_490.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_490.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_490,0,0,0x10);
      local_490.DelegateSize = 0;
    }
    if (local_4b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4b8.Accessor,&local_4b8);
    }
    if (local_490.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_490.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_498);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4d0,
               (FWriteAccessScope *)&local_4b8);
    if (((int)local_4c0 != 0) && (FStack_4c8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_4c8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4c8,0,0,0x10);
      local_4c0 = local_4c0 & 0xffffffff00000000;
    }
    if (local_4b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4b8.Accessor,&local_4b8);
    }
    if (FStack_4c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_4c8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_4d0);
    pFVar16 = pFVar16 + 1;
    uVar14 = (ulonglong)local_res18 & 0xffffffff;
  }
  FMenuBuilder::EndSection(&local_1d8);
  FMenuBuilder::MakeWidget
            (&local_1d8,local_res10,
             (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
              *)0x0);
  FMenuBuilder::~FMenuBuilder(&local_1d8);
  return local_res10;
}

// operator() @ 14d8cf0f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_4>::operator()(void *this)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  FGeometry *pFVar4;
  int iVar5;
  float local_res8;
  float fStackX_c;
  undefined8 local_28;
  undefined4 uStack_20;
  
  plVar1 = *(longlong **)(*(longlong *)this + 0x9f8);
  if (plVar1 == (longlong *)0x0) {
    local_28 = 0;
    uStack_20 = 0;
    puVar3 = &local_28;
  }
  else {
    puVar3 = (undefined8 *)(**(code **)(*plVar1 + 8))(plVar1,&local_28);
  }
  iVar2 = *(int *)(puVar3 + 1);
  pFVar4 = SWidget::GetTickSpaceGeometry(*(SWidget **)this);
  local_res8 = SUB84(pFVar4->Size,0);
  fStackX_c = SUB84(pFVar4->Size,4);
  iVar5 = (int)ROUND((local_res8 * ___real_3c4f6475 + local_res8 * ___real_3c4f6475) -
                     __real_3f000000) >> 1;
  if (iVar5 < 1) {
    iVar5 = 1;
  }
  fStackX_c = fStackX_c / (float)((iVar2 + -1 + iVar5) / iVar5);
  if (fStackX_c <= __real_43200000) {
    fStackX_c = __real_43200000;
  }
  return fStackX_c;
}

// operator() @ 14d8cf1e0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __thiscall
`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_5>::operator()
          (void *this,FText *__return_storage_ptr__)

{
  char cVar1;
  longlong *plVar2;
  undefined8 local_res8;
  TSharedPtr<FCulture,1> local_38;
  FReadAccessScope local_28;
  
  local_38.Object = (FCulture *)0x0;
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x10),
             &local_28);
  if ((*(int *)((longlong)this + 0x20) != 0) &&
     (*(longlong **)((longlong)this + 0x18) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x18) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x10),
                 &local_28);
      if (*(int *)((longlong)this + 0x20) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)((longlong)this + 0x18);
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,&local_res8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      *(undefined8 *)this = local_res8;
      goto LAB_14d8cf274;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
LAB_14d8cf274:
  FText::AsTimespan(__return_storage_ptr__,this,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// AddLoudnessMetric @ 14d8da450

void __thiscall
AudioWidgets::FLoudnessMeterWidgetView::AddLoudnessMetric
          (FLoudnessMeterWidgetView *this,FLoudnessMetric *param_1)

{
  TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric,1> *pTVar1;
  bool *pbVar2;
  TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> local_28;
  TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric,1> local_18;
  
  pTVar1 = MakeShared<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric,1,AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_&>
                     (&local_18,param_1);
  local_28.Object = pTVar1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (pTVar1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  UE::Slate::Containers::
  TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
  Add((this->LoudnessMetrics).Object,&local_28);
  pbVar2 = TAttribute<bool>::Get(&param_1->bShowValue);
  if (*pbVar2 != false) {
    UE::Slate::Containers::
    TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
    ::Add((this->NumericValues).Object,&local_28);
  }
  pbVar2 = TAttribute<bool>::Get(&param_1->bShowMeter);
  if (*pbVar2 != false) {
    UE::Slate::Containers::
    TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
    ::Add((this->MeterValues).Object,&local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// InitTimerPanel @ 14d93cfa0

void __thiscall
AudioWidgets::FLoudnessMeterWidgetView::InitTimerPanel
          (FLoudnessMeterWidgetView *this,FTimerPanelParams *param_1)

{
  (this->TimerPanelParams).AnalysisTime.Value.Ticks = (param_1->AnalysisTime).Value.Ticks;
  (this->TimerPanelParams).AnalysisTime.bIsSet = (param_1->AnalysisTime).bIsSet;
  TDelegate<FTimespan___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->TimerPanelParams).AnalysisTime.Getter,&(param_1->AnalysisTime).Getter);
  TDelegate<FReply___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->TimerPanelParams).OnResetButtonClicked,&param_1->OnResetButtonClicked);
  TAttribute<bool>::operator=(&(this->TimerPanelParams).bIsVisible,&param_1->bIsVisible);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->TimerPanelParams).OnVisibilityToggleRequested,
             &param_1->OnVisibilityToggleRequested);
  return;
}

// MakeWidget @ 14d9469f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
AudioWidgets::FLoudnessMeterWidgetView::MakeWidget
          (FLoudnessMeterWidgetView *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  int *piVar1;
  long64 *plVar2;
  byte *pbVar3;
  int iVar4;
  FName FVar5;
  STextBlock *pSVar6;
  SImage *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  TReferenceControllerBase<1> *pTVar10;
  float fVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  FMultiBoxCustomization FVar14;
  FSharedReferencer<1> FVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  TIntrusiveReferenceController<FUICommandList,1> *this_00;
  TIntrusiveReferenceController<FUICommandList,1> *pTVar19;
  TSharedRef<SWidget,1> *pTVar20;
  FName *pFVar21;
  FName FVar22;
  FSlateIcon *pFVar23;
  FText *pFVar24;
  undefined8 *puVar25;
  ulong64 uVar26;
  FUIAction *pFVar27;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *pTVar28;
  FArguments *pFVar29;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *pTVar30;
  FArguments *pFVar31;
  FArguments *pFVar32;
  FSlotArguments *pFVar33;
  FArguments *pFVar34;
  FSlotArguments *pFVar35;
  FArguments *pFVar36;
  FLinearColor_u_0_s_0 *pFVar37;
  TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SColorBlock,1> *pTVar38;
  longlong *plVar39;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SOverlay,1> *pTVar40;
  undefined1 *puVar41;
  FArguments *pFVar42;
  FArguments *pFVar43;
  FSlotArguments *pFVar44;
  FArguments *pFVar45;
  FSlateFontInfo *pFVar46;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<STextBlock,1> *pTVar47;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *pTVar48;
  TSharedRef<SBorder,1> *pTVar49;
  FArguments *pFVar50;
  ISlateStyle *pIVar51;
  FButtonStyle *pFVar52;
  FArguments *pFVar53;
  FAudioWidgetsStyle *pFVar54;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SImage,1> *pTVar55;
  SButton *pSVar56;
  SButton *pSVar57;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_05;
  TSharedRef<SHorizontalBox,1> *pTVar58;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *this_06;
  TSharedRef<SBox,1> *pTVar59;
  FArguments *pFVar60;
  FSlateBrush *pFVar61;
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs> *pTVar62;
  TSharedRef<SSeparator,1> *pTVar63;
  TAttribute<EVisibility> *pTVar64;
  TSharedRef<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
  *pTVar65;
  TAttribute<float> *pTVar66;
  TAttribute<EListItemAlignment> *pTVar67;
  TAttribute<ESelectionMode::Type> *pTVar68;
  TSlateDecl<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T0RequiredArgs>
  *this_07;
  TSharedRef<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
  *pTVar69;
  TAttribute<FSlateColor> *pTVar70;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_08;
  TSharedRef<SVerticalBox,1> *pTVar71;
  FMargin *pFVar72;
  FUICommandList *pFVar73;
  undefined1 auStackY_4768 [32];
  EListItemAlignment local_46f8;
  T0RequiredArgs local_46f7;
  T0RequiredArgs local_46f6;
  T0RequiredArgs local_46f5;
  T0RequiredArgs local_46f4;
  T0RequiredArgs local_46f3;
  T0RequiredArgs local_46f2;
  T0RequiredArgs local_46f1;
  T0RequiredArgs local_46f0;
  T0RequiredArgs local_46ef;
  T0RequiredArgs local_46ee;
  T0RequiredArgs local_46ed;
  T0RequiredArgs local_46ec;
  T0RequiredArgs local_46eb;
  T0RequiredArgs local_46ea [2];
  FLLMScope local_46e8;
  FLLMScope local_46e4;
  undefined1 local_46e0 [8];
  FDelegateAllocation local_46d8;
  SHorizontalBox *local_46c8;
  undefined8 uStack_46c0;
  float local_46b8;
  float local_46b4;
  Type local_46b0;
  float local_46ac;
  FArguments *local_46a8;
  FName local_46a0;
  FSlotArguments *local_4698;
  FArguments *local_4690;
  undefined1 local_4688 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_4680;
  ForAnyElementType FStack_4678;
  ulonglong local_4670;
  undefined1 local_4668 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_4660;
  ForAnyElementType FStack_4658;
  ulonglong local_4650;
  undefined1 local_4648 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_4640;
  ForAnyElementType FStack_4638;
  ulonglong local_4630;
  undefined1 local_4628 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_4620;
  ForAnyElementType FStack_4618;
  ulonglong local_4610;
  int local_4608;
  bool local_4604;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_4600;
  ForAnyElementType FStack_45f8;
  ulonglong local_45f0;
  undefined1 local_45e8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_45e0;
  ForAnyElementType FStack_45d8;
  ulonglong local_45d0;
  bool local_45c7;
  bool local_45c5;
  bool local_45c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_45b8;
  ForAnyElementType FStack_45b0;
  ulonglong local_45a8;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_45a0;
  undefined8 local_4588;
  undefined8 local_4580;
  FName local_4578;
  undefined8 local_4570;
  SWidget *local_4568;
  TReferenceControllerBase<1> *pTStack_4560;
  SWidget *local_4558;
  TReferenceControllerBase<1> *pTStack_4550;
  undefined1 local_4548 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_4530;
  ForAnyElementType FStack_4528;
  ulonglong local_4520;
  undefined1 local_4518 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_4500;
  ForAnyElementType FStack_44f8;
  ulonglong local_44f0;
  undefined2 local_44e8;
  undefined1 local_44e0 [8];
  void *pvStack_44d8;
  undefined8 local_44d0;
  uchar local_44c8;
  undefined1 local_44c7;
  undefined1 local_44c0 [8];
  void *pvStack_44b8;
  undefined8 local_44b0;
  FLinearColor_u_0 local_44a8;
  undefined1 local_4498 [40];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_4470;
  ForAnyElementType FStack_4468;
  ulonglong local_4460;
  <lambda_4> local_4458;
  FMemScope local_4450;
  FName local_4448;
  FArguments *local_4440;
  TSharedRef<SWidget,1> *local_4438;
  TReferenceControllerBase<1> *local_4430;
  TReferenceControllerBase<1> *local_4428;
  TReferenceControllerBase<1> *local_4420;
  <lambda_3> local_4418;
  TVector2<float>_u_0 local_4410;
  undefined4 local_4408 [2];
  FMemScope local_4400;
  FSlotArguments *local_43f8;
  TSharedRef<SWidget,1> local_43f0;
  TSharedRef<SWidget,1> local_43e0;
  TSharedRef<SWidget,1> local_43d0;
  TSharedRef<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
  local_43c0;
  undefined4 local_43b0 [2];
  <lambda_2> local_43a8;
  TAttribute<EMenuPlacement> local_4388;
  TAttribute<EVisibility> local_4368;
  TAttribute<float> local_4348;
  TAttribute<ESelectionMode::Type> local_4328;
  undefined8 local_4308;
  undefined8 uStack_4300;
  undefined1 local_42f8;
  undefined1 local_42f0 [8];
  void *pvStack_42e8;
  undefined8 local_42e0;
  undefined8 local_42d8;
  undefined8 uStack_42d0;
  undefined4 local_42c8;
  TSharedPtr<FUICommandList_const_,1> local_42c0;
  TSharedRef<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
  local_42b0;
  TSharedRef<SWidget,1> local_42a0;
  TSharedRef<SWidget,1> local_4290;
  TSharedRef<SWidget,1> local_4280;
  TAttribute<EVisibility> local_4270;
  TSharedRef<SWidget,1> local_4250;
  TSharedRef<SWidget,1> local_4240;
  TSharedRef<SWidget,1> local_4230;
  TSharedRef<SWidget,1> local_4220;
  TAttribute<FSlateBrush_const_*> local_4210;
  TAttribute<FSlateBrush_const_*> local_41e8;
  FDestructionSentinel local_41c0;
  FDestructionSentinel local_41a8;
  FDestructionSentinel local_4190;
  FDestructionSentinel local_4178;
  FDestructionSentinel local_4160;
  FDestructionSentinel local_4148;
  FDestructionSentinel local_4130;
  FDestructionSentinel local_4118;
  undefined1 local_4100 [24];
  undefined1 local_40e8 [24];
  FDestructionSentinel local_40d0;
  FDestructionSentinel local_40b8;
  FDestructionSentinel local_40a0;
  FLinearColor_u_0 local_4088;
  undefined4 local_4078;
  undefined1 local_4074;
  undefined8 local_4070;
  undefined8 uStack_4068;
  undefined8 local_4060;
  TAttribute<FText> local_4058;
  FLinearColor_u_0 local_4028;
  undefined1 local_4018;
  undefined1 local_4014;
  undefined8 local_4010;
  undefined8 uStack_4008;
  undefined8 local_4000;
  FDestructionSentinel local_3ff8;
  FDelegateAllocation *local_3fe0;
  TAttribute<FText> local_3fd8;
  FLinearColor_u_0 local_3fa8;
  undefined1 local_3f98;
  undefined8 local_3f90;
  undefined8 uStack_3f88;
  undefined8 local_3f80;
  FText local_3f78;
  FLinearColor_u_0 local_3f68;
  TSharedRef<SBorder,1> local_3f58;
  TSlateDecl<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T0RequiredArgs>
  local_3f48;
  TSharedRef<SVerticalBox,1> local_3f30;
  TSharedRef<SSeparator,1> local_3f20;
  TSharedRef<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
  local_3f10;
  TSharedRef<SSeparator,1> local_3f00;
  TSharedRef<SBox,1> local_3ef0;
  TSharedRef<SHorizontalBox,1> local_3ee0;
  TSharedRef<SImage,1> local_3ed0;
  FText local_3ec0;
  TSharedRef<SBorder,1> local_3eb0;
  TAttribute<float> local_3ea0;
  TSharedRef<STextBlock,1> local_3e80;
  TSharedRef<SOverlay,1> local_3e70;
  TAttribute<FTimespan> local_3e60;
  TSharedRef<SWidget,1> local_3e38;
  TSharedRef<SColorBlock,1> local_3e28;
  FText local_3e18;
  FName local_3e08 [2];
  FName local_3df8;
  FName local_3df0;
  FName local_3de8;
  FName local_3de0;
  TSharedPtr<FExtender,1> local_3dd8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_3dc8;
  TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs> local_3db0;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_3d98;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3d80;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_3d68;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_3d50;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_3d38;
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs> local_3d20;
  TSlateDecl<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T0RequiredArgs>
  local_3d08;
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs> local_3cf0;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_3cd8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_3cc0;
  FUICommandList *local_3ca8;
  TIntrusiveReferenceController<FUICommandList,1> *local_3ca0;
  FTimerPanelParams local_3c98;
  TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
  *local_3c20;
  TReferenceControllerBase<1> *local_3c18;
  FMargin local_3c10;
  TSharedRef<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
  local_3c00;
  TAttribute<FSlateFontInfo> local_3bf0;
  FSlateIcon local_3b70;
  TAttribute<EVisibility> local_3b50;
  TAttribute<float> local_3b30;
  TAttribute<float> local_3b10;
  undefined1 local_3af0 [32];
  TAttribute<EVisibility> local_3ad0;
  TAttribute<float> local_3ab0;
  undefined1 local_3a90 [32];
  FSlotArguments local_3a70;
  TAttribute<FSlateColor> local_3a10;
  FSlateFontInfo local_39e0;
  FSlotArguments local_3980;
  FUIAction local_3920;
  FToolBarBuilder local_38b8;
  FSlotArguments local_3760;
  FSlotArguments local_3678;
  FSlotArguments local_3590;
  FSlotArguments local_34a8;
  FSlotArguments local_33c0;
  FSlotArguments local_32d8;
  FSlotArguments local_31f0;
  FSlotArguments local_3108;
  FArguments local_3020;
  FArguments local_2e18;
  FArguments local_2c10;
  FArguments local_2a08;
  FArguments local_27d0;
  FArguments local_2598;
  FArguments local_22f0;
  FArguments local_1fa8;
  FArguments local_1c48;
  FArguments local_1868;
  FArguments local_1488;
  FArguments local_1008;
  FArguments local_b88;
  FArguments local_648;
  code *local_e8 [5];
  undefined8 *local_c0;
  TFunction<EVisibility___cdecl(void)> local_b8;
  TFunction<EVisibility___cdecl(void)> local_88;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4768;
  pTVar19 = (TIntrusiveReferenceController<FUICommandList,1> *)0x0;
  local_4438 = __return_storage_ptr__;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_4410 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar72 = FMargin::FMargin(&local_3c10,0.0);
    local_4588 = 0;
    FSlateBrush::FSlateBrush
              ((FSlateBrush *)&BackgroundBrush,Image,(FName)0x0,pFVar72,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_4410._s_0,&FStyleColors::Recessed,
               (UObject *)0x0,false);
    BackgroundBrush._0_8_ = &___7FSlateColorBrush__6B_;
    atexit(`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::
           _dynamic_atexit_destructor_for__BackgroundBrush__);
    _Init_thread_footer(&::_TSS0);
  }
  this_00 = ::operator_new(0x150);
  if (this_00 == (TIntrusiveReferenceController<FUICommandList,1> *)0x0) {
    pFVar73 = (FUICommandList *)&DAT_00000010;
  }
  else {
    pTVar19 = SharedPointerInternals::TIntrusiveReferenceController<FUICommandList,1>::
              TIntrusiveReferenceController<FUICommandList,1><>(this_00);
    pFVar73 = (FUICommandList *)&pTVar19->ObjectStorage;
    if (pFVar73 == (FUICommandList *)0x0) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar18) {
        pcVar9 = (code *)swi(3);
        pTVar20 = (TSharedRef<SWidget,1> *)(*pcVar9)();
        return pTVar20;
      }
      goto LAB_14d946b26;
    }
  }
  if (((pFVar73->_padding_ == 0) || (pFVar73->_padding_ == 0)) ||
     (*(int *)(pFVar73->_padding_ + 8) < 1)) {
    if (pTVar19 != (TIntrusiveReferenceController<FUICommandList,1> *)0x0) {
      LOCK();
      *(int *)&pTVar19->_padding_ = (int)pTVar19->_padding_ + 1;
      UNLOCK();
    }
    pFVar73->_padding_ = (longlong)pFVar73;
    if (pTVar19 != (TIntrusiveReferenceController<FUICommandList,1> *)pFVar73->_padding_) {
      if (pTVar19 != (TIntrusiveReferenceController<FUICommandList,1> *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)&pTVar19->_padding_ + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      plVar39 = (longlong *)pFVar73->_padding_;
      if (plVar39 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar39 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar39 + 8))(plVar39,1);
        }
      }
      pFVar73->_padding_ = (longlong)pTVar19;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar19);
  }
LAB_14d946b26:
  FVar14.CustomizationName = FMultiBoxCustomization::None.CustomizationName;
  local_3dd8.Object = (FExtender *)0x0;
  local_3dd8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar19 != (TIntrusiveReferenceController<FUICommandList,1> *)0x0) {
    LOCK();
    *(int *)&pTVar19->_padding_ = (int)pTVar19->_padding_ + 1;
    UNLOCK();
  }
  local_42c0.Object = pFVar73;
  local_42c0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pTVar19;
  FSlimHorizontalToolBarBuilder::FSlimHorizontalToolBarBuilder
            ((FSlimHorizontalToolBarBuilder *)&local_38b8,&local_42c0,FVar14,&local_3dd8,true);
  if (pTVar19 != (TIntrusiveReferenceController<FUICommandList,1> *)0x0) {
    LOCK();
    *(int *)&pTVar19->_padding_ = (int)pTVar19->_padding_ + 1;
    UNLOCK();
  }
  local_3ca8 = pFVar73;
  local_3ca0 = pTVar19;
  FTimerPanelParams::FTimerPanelParams(&local_3c98,&this->TimerPanelParams);
  local_3c20 = (this->LoudnessMetrics).Object;
  local_3c18 = (this->LoudnessMetrics).SharedReferenceCount.ReferenceController;
  if (local_3c18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_3c18->SharedReferenceCount = (atomic<int>)((int)local_3c18->SharedReferenceCount + 1);
    UNLOCK();
  }
  memset(local_4688,0,200);
  local_4608 = 0;
  local_4670 = 0;
  local_4650 = 0;
  local_4630 = 0;
  local_4610 = 0;
  local_45f0 = 0;
  local_45d0 = 0;
  local_45a8 = 0;
  local_4388.Getter._16_8_ = 0;
  local_4680.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_4678.Data = (FScriptContainerElement *)0x0;
  local_4668[0] = false;
  local_4668[1] = false;
  local_4660.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_4658.Data = (FScriptContainerElement *)0x0;
  local_4648[0] = false;
  local_4648[1] = false;
  local_4640.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_4638.Data = (FScriptContainerElement *)0x0;
  local_4628[0] = false;
  local_4628[1] = false;
  local_4620.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_4618.Data = (FScriptContainerElement *)0x0;
  local_4604 = false;
  local_4600.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_45f8.Data = (FScriptContainerElement *)0x0;
  local_45e8[0] = Preferred;
  local_45e8[1] = false;
  local_45e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_45d8.Data = (FScriptContainerElement *)0x0;
  local_45c7 = false;
  local_45c5 = false;
  local_45c0 = false;
  local_45b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_45b0.Data = (FScriptContainerElement *)0x0;
  local_4388.Value = MenuPlacement_BelowAnchor;
  local_4388.bIsSet = false;
  local_4388.Getter._0_8_ = 0;
  local_4388.Getter._8_8_ = 0;
  FText::FText(&local_3fd8.Value);
  local_3fd8.bIsSet = false;
  local_3fd8.Getter._16_8_ = 0;
  local_4368.Getter._16_8_ = 0;
  local_3fd8.Getter._0_8_ = 0;
  local_3fd8.Getter._8_8_ = 0;
  local_4368.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
  local_4368.bIsSet = false;
  local_4368.Getter._0_8_ = 0;
  local_4368.Getter._8_8_ = 0;
  local_4578.ComparisonIndex.Value = 0;
  local_4578.Number = 0;
  local_4570 = 0;
  local_4580 = 0;
  pFVar21 = ::FName::FName(local_3e08,"LevelEditor.GameSettings");
  FVar5 = *pFVar21;
  FVar22 = FAppStyle::GetAppStyleSetName();
  pFVar23 = FSlateIcon::FSlateIcon(&local_3b70,*(FName *)FVar22,FVar5,(FName)0x0,(FName)0x0);
  local_4498._0_8_ = pFVar23->StyleSetName;
  local_4498._8_8_ = pFVar23->StyleName;
  local_4498._16_8_ = pFVar23->SmallStyleName;
  local_4498._24_8_ = pFVar23->StatusOverlayStyleName;
  local_4498[0x20] = true;
  local_4460 = 0;
  local_4470.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_4468.Data = (FScriptContainerElement *)0x0;
  pFVar24 = FText::FText(&local_3f78);
  FText::FText((FText *)local_4518,pFVar24);
  local_4518[0x10] = true;
  local_44f0 = 0;
  local_4500.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_44f8.Data = (FScriptContainerElement *)0x0;
  pFVar24 = FText::AsLocalizable_Advanced_LocText
                      (&local_3e18,L"FLoudnessMeterWidgetView",L"OptionsButtonDisplayName",
                       L"Options");
  FText::FText((FText *)local_4548,pFVar24);
  local_4548[0x10] = true;
  local_4520 = 0;
  local_46e0 = (undefined1  [8])0x0;
  local_4530.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_4528.Data = (FScriptContainerElement *)0x0;
  local_46d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_46d8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_46e0,
             (FWriteAccessScope *)&local_3ff8);
  local_3fe0 = &local_46d8;
  puVar25 = UE::Core::Private::DelegateAllocate(0xb0,&local_46d8);
  if (puVar25 != (undefined8 *)0x0) {
    *puVar25 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar26 = FDelegateHandle::GenerateNewID();
    puVar25[2] = uVar26;
    *puVar25 = &TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_1>_const_>
                ::_vftable_;
    puVar25[3] = local_3ca8;
    puVar25[4] = local_3ca0;
    if (local_3ca0 != (TIntrusiveReferenceController<FUICommandList,1> *)0x0) {
      LOCK();
      *(int *)&local_3ca0->_padding_ = (int)local_3ca0->_padding_ + 1;
      UNLOCK();
    }
    FTimerPanelParams::FTimerPanelParams((FTimerPanelParams *)(puVar25 + 5),&local_3c98);
    puVar25[0x14] = local_3c20;
    puVar25[0x15] = local_3c18;
    if (local_3c18 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_3c18->SharedReferenceCount = (atomic<int>)((int)local_3c18->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if (local_3ff8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3ff8.Accessor,&local_3ff8);
  }
  pFVar27 = FUIAction::FUIAction(&local_3920);
  FToolBarBuilder::AddComboButton
            (&local_38b8,pFVar27,
             (TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *)local_46e0
             ,(TAttribute<FText> *)local_4548,(TAttribute<FText> *)local_4518,
             (TAttribute<FSlateIcon> *)local_4498,false,local_4578,&local_4368,&local_3fd8,
             &local_4388,Button,(TAttribute<FMenuEntryResizeParams> *)local_4688);
  FUIAction::~FUIAction(&local_3920);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_46e0,
             (FWriteAccessScope *)&local_4130);
  if ((local_46d8.DelegateSize != 0) &&
     (local_46d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_46d8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_46d8,0,0,0x10);
    local_46d8.DelegateSize = 0;
  }
  if (local_4130.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4130.Accessor,&local_4130);
  }
  if (local_46d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_46d8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_46e0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_4530,(FWriteAccessScope *)&local_40d0);
  if (((int)local_4520 != 0) && (FStack_4528.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4528.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4528,0,0,0x10);
    local_4520 = local_4520 & 0xffffffff00000000;
  }
  if (local_40d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40d0.Accessor,&local_40d0);
  }
  if (FStack_4528.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4528.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_4530.AccessDetector);
  if ((ITextData *)local_4548._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_4548._0_8_ + 0x10))();
  }
  if (local_3e18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3e18.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_4500,(FWriteAccessScope *)&local_40b8);
  if (((int)local_44f0 != 0) && (FStack_44f8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_44f8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_44f8,0,0,0x10);
    local_44f0 = local_44f0 & 0xffffffff00000000;
  }
  if (local_40b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40b8.Accessor,&local_40b8);
  }
  if (FStack_44f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_44f8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_4500.AccessDetector);
  if ((ITextData *)local_4518._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_4518._0_8_ + 0x10))();
  }
  if (local_3f78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3f78.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_4470,(FWriteAccessScope *)&local_41c0);
  if (((int)local_4460 != 0) && (FStack_4468.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4468.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4468,0,0,0x10);
    local_4460 = local_4460 & 0xffffffff00000000;
  }
  if (local_41c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_41c0.Accessor,&local_41c0);
  }
  if (FStack_4468.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4468.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_4470.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_45b8,(FWriteAccessScope *)&local_41a8);
  if (((int)local_45a8 != 0) && (FStack_45b0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_45b0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_45b0,0,0,0x10);
    local_45a8 = local_45a8 & 0xffffffff00000000;
  }
  if (local_41a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_41a8.Accessor,&local_41a8);
  }
  if (FStack_45b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_45b0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_45b8.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_45e0,(FWriteAccessScope *)&local_4190);
  if (((int)local_45d0 != 0) && (FStack_45d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_45d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_45d8,0,0,0x10);
    local_45d0 = local_45d0 & 0xffffffff00000000;
  }
  if (local_4190.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4190.Accessor,&local_4190);
  }
  if (FStack_45d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_45d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_45e0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_4600,(FWriteAccessScope *)&local_4178);
  if (((int)local_45f0 != 0) && (FStack_45f8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_45f8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_45f8,0,0,0x10);
    local_45f0 = local_45f0 & 0xffffffff00000000;
  }
  if (local_4178.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4178.Accessor,&local_4178);
  }
  if (FStack_45f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_45f8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_4600.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_4620,(FWriteAccessScope *)&local_4160);
  if (((int)local_4610 != 0) && (FStack_4618.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4618.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4618,0,0,0x10);
    local_4610 = local_4610 & 0xffffffff00000000;
  }
  if (local_4160.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4160.Accessor,&local_4160);
  }
  if (FStack_4618.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4618.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_4620.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_4640,(FWriteAccessScope *)&local_4148);
  if (((int)local_4630 != 0) && (FStack_4638.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4638.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4638,0,0,0x10);
    local_4630 = local_4630 & 0xffffffff00000000;
  }
  if (local_4148.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4148.Accessor,&local_4148);
  }
  if (FStack_4638.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4638.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_4640.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_4660,(FWriteAccessScope *)&local_40a0);
  if (((int)local_4650 != 0) && (FStack_4658.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4658.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4658,0,0,0x10);
    local_4650 = local_4650 & 0xffffffff00000000;
  }
  if (local_40a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40a0.Accessor,&local_40a0);
  }
  if (FStack_4658.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4658.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_4660.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_4680,(FWriteAccessScope *)&local_4118);
  if (((int)local_4670 != 0) && (FStack_4678.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4678.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4678,0,0,0x10);
    local_4670 = local_4670 & 0xffffffff00000000;
  }
  if (local_4118.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4118.Accessor,&local_4118);
  }
  if (FStack_4678.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4678.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_4680.AccessDetector);
  local_43a8.bIsVisible.Value = (this->TimerPanelParams).bIsVisible.Value;
  local_43a8.bIsVisible.bIsSet = (this->TimerPanelParams).bIsVisible.bIsSet;
  local_43a8.bIsVisible.Getter._0_8_ = 0;
  local_43a8.bIsVisible.Getter._8_8_ = 0;
  local_43a8.bIsVisible.Getter._16_4_ = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_43a8.bIsVisible.Getter,&(this->TimerPanelParams).bIsVisible.Getter);
  local_4418.InNumericValues = (this->NumericValues).Object;
  pTVar28 = TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSPLambda<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1,_AudioWidgets::FLoudnessMeterWidgetView::MakeWidget_::__l2::<lambda_3>_>
                      ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_4100
                       ,&this->NumericValues,&local_4418);
  local_4270.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
  local_4270.bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_4270.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4100);
  if ((void *)local_4100._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_4100._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4100);
  pFVar29 = STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
            ::FArguments::FArguments(&local_1488);
  pFVar29 = STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
            ::FArguments::
            OnGenerateTile_Static<TSharedRef<ITableRow,1>_(__cdecl*)(TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<STableViewBase,1>_const_&)>
                      (pFVar29,LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget);
  local_42b0.SharedReferenceCount.ReferenceController =
       (this->MeterValues).SharedReferenceCount.ReferenceController;
  local_42b0.Object = (this->MeterValues).Object;
  if (local_42b0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_42b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_42b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar29 = STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
            ::FArguments::ListItemsSource(pFVar29,&local_42b0);
  local_4348.Value = 79.0;
  local_4348.bIsSet = true;
  local_4348.Getter._16_8_ = 0;
  local_4348.Getter._0_8_ = 0;
  local_4348.Getter._8_8_ = 0;
  pFVar29 = STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
            ::FArguments::ItemWidth(pFVar29,&local_4348);
  local_44e8 = 0x105;
  local_44d0 = 0;
  local_44e0 = (undefined1  [8])0x0;
  pvStack_44d8 = (void *)0x0;
  (pFVar29->_ItemAlignment).Value = CenterAligned;
  (pFVar29->_ItemAlignment).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar29->_ItemAlignment).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_44e0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_44e0);
  if (pvStack_44d8 != (void *)0x0) {
    FMemory::Free(pvStack_44d8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_44e0);
  local_4328.Value = None;
  local_4328.Getter._16_8_ = 0;
  local_4328.bIsSet = true;
  local_4328.Getter._0_8_ = 0;
  local_4328.Getter._8_8_ = 0;
  pFVar29 = STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
            ::FArguments::SelectionMode(pFVar29,&local_4328);
  local_44c8 = (uchar)EVisibility::Collapsed.Value.Value;
  local_44c7 = 1;
  local_44b0 = 0;
  local_44c0 = (undefined1  [8])0x0;
  pvStack_44b8 = (void *)0x0;
  (pFVar29->_ScrollbarVisibility).Value.Value.Value = (uchar)EVisibility::Collapsed.Value.Value;
  (pFVar29->_ScrollbarVisibility).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar29->_ScrollbarVisibility).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_44c0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_44c0);
  if (pvStack_44b8 != (void *)0x0) {
    FMemory::Free(pvStack_44b8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_44c0);
  FLLMScope::FLLMScope(&local_46e8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4448 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4450,&local_4448,true);
  TSlateDecl<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T0RequiredArgs>
  ::
  TSlateDecl<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T0RequiredArgs>
            (&local_3f48,"SLoudnessMetricTileView",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\LoudnessMeterWidgetView.cpp"
             ,0x10e,&local_46f7);
  FMemScope::~FMemScope(&local_4450);
  FLLMScope::~FLLMScope(&local_46e8);
  TSlateDecl<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T0RequiredArgs>
  ::operator<<=(&local_3f48,&local_43c0,pFVar29);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3f48._Widget.SharedReferenceCount.ReferenceController);
  STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
  FArguments::~FArguments(&local_1488);
  local_4458.TileView = local_43c0.Object;
  pTVar30 = TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateLambda<_AudioWidgets::FLoudnessMeterWidgetView::MakeWidget_::__l2::<lambda_4>_>
                      ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_40e8,
                       &local_4458);
  local_3ea0.Value = 0.0;
  local_3ea0.bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_3ea0.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar30);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_40e8);
  if ((void *)local_40e8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_40e8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40e8);
  STableViewBase::SetItemHeight((STableViewBase *)local_43c0.Object,&local_3ea0);
  pFVar31 = SBorder::FArguments::FArguments(&local_1868);
  pFVar31 = SBorder::FArguments::Padding(pFVar31,0.0);
  local_4210.Value = (FSlateBrush *)&BackgroundBrush;
  local_4210.bIsSet = true;
  local_4210.Getter._16_8_ = 0;
  local_4210.Getter._0_8_ = 0;
  local_4210.Getter._8_8_ = 0;
  local_4440 = SBorder::FArguments::BorderImage(pFVar31,&local_4210);
  pFVar32 = SVerticalBox::FArguments::FArguments(&local_2c10);
  pFVar33 = SVerticalBox::Slot(&local_31f0);
  pFVar33 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar33);
  pFVar34 = SOverlay::FArguments::FArguments(&local_2e18);
  pFVar35 = SOverlay::Slot(&local_3a70,0);
  pFVar36 = SColorBlock::FArguments::FArguments(&local_1fa8);
  local_3fa8 = FStyleColors::Panel.SpecifiedColor.field0_0x0;
  if (FStyleColors::Panel.ColorUseRule == UseColor_ColorTable) {
    pFVar37 = (FLinearColor_u_0_s_0 *)FSlateColor::GetColorFromTable(&FStyleColors::Panel);
    local_3fa8._s_0 = *pFVar37;
  }
  local_3f98 = 1;
  local_3f80 = 0;
  local_3f90 = 0;
  uStack_3f88 = 0;
  local_3f68 = local_3fa8;
  pFVar36 = SColorBlock::FArguments::Color(pFVar36,(TAttribute<FLinearColor> *)&local_3fa8._s_0);
  this_01 = MakeTDecl<SColorBlock,RequiredArgs::T0RequiredArgs>
                      (&local_3db0,"SColorBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\LoudnessMeterWidgetView.cpp"
                       ,0x12a,&local_46f6);
  pTVar38 = TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_01,&local_3e28,pFVar36);
  local_43d0.Object = (SWidget *)pTVar38->Object;
  local_43d0.SharedReferenceCount.ReferenceController =
       (pTVar38->SharedReferenceCount).ReferenceController;
  if (local_43d0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_43d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_43d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar35 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar35,&local_43d0);
  pFVar34 = SOverlay::FArguments::operator+(pFVar34,pFVar35);
  pFVar35 = SOverlay::Slot(&local_3980,0);
  plVar39 = &pFVar35->_padding_;
  if ((longlong *)local_43b0 != plVar39) {
    *(undefined4 *)plVar39 = 3;
    *(undefined1 *)((longlong)&pFVar35->_padding_ + 4) = 1;
  }
  if (plVar39 == (longlong *)0x0) {
    pFVar35 = (FSlotArguments *)0x0;
  }
  pTVar20 = FMultiBoxBuilder::MakeWidget
                      ((FMultiBoxBuilder *)&local_38b8,&local_3e38,
                       (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
                        *)0x0);
  pFVar35 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar35,pTVar20);
  pFVar34 = SOverlay::FArguments::operator+(pFVar34,pFVar35);
  this_02 = MakeTDecl<SOverlay,RequiredArgs::T0RequiredArgs>
                      (&local_3d68,"SOverlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\LoudnessMeterWidgetView.cpp"
                       ,0x127,&local_46f5);
  pTVar40 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_02,&local_3e70,pFVar34);
  local_43e0.Object = (SWidget *)pTVar40->Object;
  local_43e0.SharedReferenceCount.ReferenceController =
       (pTVar40->SharedReferenceCount).ReferenceController;
  if (local_43e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_43e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_43e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar33 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar33,&local_43e0);
  local_46a8 = SVerticalBox::FArguments::operator+(pFVar32,pFVar33);
  pFVar33 = SVerticalBox::Slot(&local_32d8);
  puVar41 = &pFVar33->field_0x48;
  if (local_4408 != (undefined4 *)puVar41) {
    *(undefined4 *)puVar41 = 2;
    pFVar33->field_0x4c = 1;
  }
  if (puVar41 == (undefined1 *)0x0) {
    pFVar33 = (FSlotArguments *)0x0;
  }
  local_4698 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar33);
  pFVar42 = SBox::FArguments::FArguments(&local_22f0);
  uVar13 = _UNK_152c28ab8;
  uVar17 = ___xmm_41200000000000004120000000000000;
  local_42f8 = 1;
  local_4308 = ___xmm_41200000000000004120000000000000;
  uStack_4300 = _UNK_152c28ab8;
  local_42e0 = 0;
  local_42f0 = (undefined1  [8])0x0;
  pvStack_42e8 = (void *)0x0;
  (pFVar42->_Padding).bIsSet = true;
  uVar16 = ___xmm_41200000000000004120000000000000;
  ___xmm_41200000000000004120000000000000 = (undefined4)uVar17;
  _UNK_152c28ab4 = SUB84(uVar17,4);
  uVar12 = _UNK_152c28ab4;
  (pFVar42->_Padding).Value.Left = (float)___xmm_41200000000000004120000000000000;
  ___xmm_41200000000000004120000000000000 = uVar16;
  uVar17 = _UNK_152c28ab8;
  (pFVar42->_Padding).Value.Top = (float)uVar12;
  _UNK_152c28ab8 = (undefined4)uVar13;
  _UNK_152c28abc = SUB84(uVar13,4);
  uVar12 = _UNK_152c28abc;
  (pFVar42->_Padding).Value.Right = (float)_UNK_152c28ab8;
  _UNK_152c28ab8 = uVar17;
  (pFVar42->_Padding).Value.Bottom = (float)uVar12;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar42->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_42f0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_42f0);
  if (pvStack_42e8 != (void *)0x0) {
    FMemory::Free(pvStack_42e8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_42f0);
  TFunction<EVisibility___cdecl(void)>::
  TFunction<EVisibility___cdecl(void)><_AudioWidgets::FLoudnessMeterWidgetView::MakeWidget_::__l2::<lambda_2>_const_&>
            (&local_b8,&local_43a8);
  TAttribute<EVisibility>::BindLambda<TFunction<EVisibility___cdecl(void)>_&>
            ((TAttribute<EVisibility> *)&pFVar42->_padding_,&local_b8);
  pFVar43 = SHorizontalBox::FArguments::FArguments(&local_3020);
  pFVar44 = SHorizontalBox::Slot(&local_33c0);
  local_46a0 = (FName)SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar44);
  pFVar31 = SBorder::FArguments::FArguments(&local_1c48);
  fVar11 = __real_41000000;
  pFVar31 = SBorder::FArguments::Padding(pFVar31,__real_41000000,__real_40800000);
  pFVar45 = STextBlock::FArguments::FArguments(&local_648);
  pFVar46 = FStyleDefaults::GetFontInfo(&local_39e0,10);
  FSlateFontInfo::FSlateFontInfo(&local_3bf0.Value,pFVar46);
  local_3bf0.bIsSet = true;
  local_3bf0.Getter._16_8_ = 0;
  local_3bf0.Getter._0_8_ = 0;
  local_3bf0.Getter._8_8_ = 0;
  pFVar45 = STextBlock::FArguments::Font(pFVar45,&local_3bf0);
  TAttribute<FTimespan>::TAttribute<FTimespan>(&local_3e60,&(this->TimerPanelParams).AnalysisTime);
  local_e8[0] = (code *)0x0;
  local_c0 = FMemory::Malloc(0x30,8);
  *local_c0 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_5>,0,1>
               ::_vftable_;
  plVar2 = local_c0 + 1;
  *plVar2 = local_3e60.Value.Ticks;
  *(bool *)(local_c0 + 2) = local_3e60.bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_c0 + 3),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_3e60.Getter);
  if (plVar2 != (long64 *)0x0) {
    local_e8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_5>,FText>
                  ::Call;
  }
  pFVar45 = STextBlock::FArguments::Text_Lambda(pFVar45,(TFunction<FText___cdecl(void)> *)local_e8);
  this_03 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_3d80,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\LoudnessMeterWidgetView.cpp"
                       ,0x142,&local_46f4);
  pTVar47 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_03,&local_3e80,pFVar45);
  pSVar6 = pTVar47->Object;
  local_4420 = (pTVar47->SharedReferenceCount).ReferenceController;
  if (local_4420 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_4420->SharedReferenceCount = (atomic<int>)((int)local_4420->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    local_4420->SharedReferenceCount = (atomic<int>)((int)local_4420->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4558 = (pFVar31->_Content).Widget.Object;
  pTStack_4550 = (pFVar31->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar31->_Content).Widget.Object = (SWidget *)pSVar6;
  (pFVar31->_Content).Widget.SharedReferenceCount.ReferenceController = local_4420;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_4550);
  pTVar48 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_3d98,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\LoudnessMeterWidgetView.cpp"
                       ,0x13f,&local_46f3);
  pTVar49 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar48,&local_3eb0,pFVar31);
  local_43f0.Object = (SWidget *)pTVar49->Object;
  local_43f0.SharedReferenceCount.ReferenceController =
       (pTVar49->SharedReferenceCount).ReferenceController;
  if (local_43f0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_43f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_43f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar44 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_46a0,&local_43f0);
  local_4690 = SHorizontalBox::FArguments::operator+(pFVar43,pFVar44);
  pFVar44 = SHorizontalBox::Slot(&local_34a8);
  local_43f8 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar44);
  pFVar50 = SButton::FArguments::FArguments(&local_b88);
  pIVar51 = FAppStyle::Get();
  pFVar21 = ::FName::FName(&local_3df8,"SimpleButton");
  pFVar52 = ISlateStyle::GetWidgetStyle<FButtonStyle>
                      (pIVar51,*pFVar21,(char *)0x0,(FButtonStyle *)0x0);
  pFVar50->_ButtonStyle = pFVar52;
  TDelegate<FReply___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar50->_OnClicked,&(this->TimerPanelParams).OnResetButtonClicked);
  pFVar53 = SImage::FArguments::FArguments(&local_2598);
  pFVar54 = FAudioWidgetsStyle::Get();
  pcVar9 = *(code **)(*(longlong *)pFVar54 + 0x50);
  pFVar21 = ::FName::FName(&local_3df0,"AudioWidgetsStyle.Reset");
  local_41e8.Value = (FSlateBrush *)(*pcVar9)(pFVar54,*pFVar21,0,0);
  local_41e8.bIsSet = true;
  local_41e8.Getter._16_8_ = 0;
  local_41e8.Getter._0_8_ = 0;
  local_41e8.Getter._8_8_ = 0;
  pFVar53 = SImage::FArguments::Image(pFVar53,&local_41e8);
  local_42c8 = CONCAT22(local_42c8._2_2_,2);
  local_4078 = local_42c8;
  local_4074 = 1;
  local_4060 = 0;
  local_42d8 = ___xmm_3f8000003f800000000000003f800000;
  uStack_42d0 = _UNK_15090c6d8;
  local_4088._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_4088._8_8_ = _UNK_15090c6d8;
  local_4070 = 0;
  uStack_4068 = 0;
  pFVar53 = SImage::FArguments::ColorAndOpacity(pFVar53,(TAttribute<FSlateColor> *)&local_4088._s_0)
  ;
  pFVar24 = FText::AsLocalizable_Advanced_LocText
                      (&local_3ec0,L"FLoudnessMeterWidgetView",L"ResetButtonToolTip",
                       L"Reset Long Term loudness analysis");
  FText::FText(&local_4058.Value,pFVar24);
  local_4058.bIsSet = true;
  local_4058.Getter._16_8_ = 0;
  local_4058.Getter._0_8_ = 0;
  local_4058.Getter._8_8_ = 0;
  TAttribute<FText>::operator=((TAttribute<FText> *)pFVar53,&local_4058);
  TAttribute<FText>::~TAttribute<FText>(&local_4058);
  this_04 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                      (&local_3dc8,"SImage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\LoudnessMeterWidgetView.cpp"
                       ,0x14e,&local_46f2);
  pTVar55 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_04,&local_3ed0,pFVar53);
  pSVar7 = pTVar55->Object;
  local_4428 = (pTVar55->SharedReferenceCount).ReferenceController;
  if (local_4428 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_4428->SharedReferenceCount = (atomic<int>)((int)local_4428->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    local_4428->SharedReferenceCount = (atomic<int>)((int)local_4428->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4568 = (pFVar50->_Content).Widget.Object;
  pTStack_4560 = (pFVar50->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar50->_Content).Widget.Object = (SWidget *)pSVar7;
  (pFVar50->_Content).Widget.SharedReferenceCount.ReferenceController = local_4428;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_4560);
  FLLMScope::FLLMScope(&local_46e4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_46a0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4400,&local_46a0,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_45a0,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\LoudnessMeterWidgetView.cpp"
             ,0x14a,&local_46f1);
  FMemScope::~FMemScope(&local_4400);
  FLLMScope::~FLLMScope(&local_46e4);
  pSVar56 = TSharedPtr<SButton,1>::operator->(&local_45a0._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar56,(FSlateBaseNamedArgs *)pFVar50);
  pSVar56 = local_45a0._Widget.Object;
  SButton::Construct(local_45a0._Widget.Object,pFVar50);
  pSVar57 = TSharedPtr<SButton,1>::operator->(&local_45a0._Widget);
  SWidget::CacheVolatility((SWidget *)pSVar57);
  pSVar57 = TSharedPtr<SButton,1>::operator->(&local_45a0._Widget);
  pbVar3 = (byte *)((longlong)&pSVar57->_padding_ + 1);
  *pbVar3 = *pbVar3 | 4;
  if ((local_45a0._Widget.Object == (SButton *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar18)) {
    pcVar9 = (code *)swi(3);
    pTVar20 = (TSharedRef<SWidget,1> *)(*pcVar9)();
    return pTVar20;
  }
  FVar15.ReferenceController = local_45a0._Widget.SharedReferenceCount.ReferenceController;
  local_4430 = local_45a0._Widget.SharedReferenceCount.ReferenceController;
  local_45a0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_45a0._Widget.Object = (SButton *)0x0;
  if ((pSVar56 == (SButton *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar18)) {
    pcVar9 = (code *)swi(3);
    pTVar20 = (TSharedRef<SWidget,1> *)(*pcVar9)();
    return pTVar20;
  }
  local_42a0.Object = (SWidget *)pSVar56;
  local_42a0.SharedReferenceCount.ReferenceController = FVar15.ReferenceController;
  if (FVar15.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar15.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar15.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar44 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_43f8,&local_42a0);
  pFVar43 = SHorizontalBox::FArguments::operator+(local_4690,pFVar44);
  this_05 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_3cc0,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\LoudnessMeterWidgetView.cpp"
                       ,0x13b,&local_46f0);
  pTVar58 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_05,&local_3ee0,pFVar43);
  pTVar8 = (pTVar58->SharedReferenceCount).ReferenceController;
  local_46c8 = pTVar58->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = (pFVar42->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar42->_Content).Widget.Object = (SWidget *)local_46c8;
  (pFVar42->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar8;
  uStack_46c0 = pTVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  this_06 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_3cd8,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\LoudnessMeterWidgetView.cpp"
                       ,0x137,&local_46ef);
  pTVar59 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(this_06,&local_3ef0,pFVar42);
  local_4290.Object = (SWidget *)pTVar59->Object;
  local_4690 = (FArguments *)(pTVar59->SharedReferenceCount).ReferenceController;
  if (local_4690 != (FArguments *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_4690)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_4690)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4290.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_4690;
  pFVar33 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_4698,&local_4290);
  pFVar32 = SVerticalBox::FArguments::operator+(local_46a8,pFVar33);
  pFVar33 = SVerticalBox::Slot(&local_3590);
  pFVar33 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar33);
  local_46a8 = (FArguments *)
               TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)&pFVar33->field_0x18,fVar11,__real_40000000);
  pFVar60 = SSeparator::FArguments::FArguments(&local_27d0);
  TFunction<EVisibility___cdecl(void)>::
  TFunction<EVisibility___cdecl(void)><_AudioWidgets::FLoudnessMeterWidgetView::MakeWidget_::__l2::<lambda_2>_const_&>
            (&local_88,&local_43a8);
  TAttribute<EVisibility>::BindLambda<TFunction<EVisibility___cdecl(void)>_&>
            ((TAttribute<EVisibility> *)&pFVar60->_padding_,&local_88);
  pIVar51 = FAppStyle::Get();
  pcVar9 = *(code **)((longlong)*pIVar51 + 0x50);
  pFVar21 = ::FName::FName(&local_3de8,"WhiteBrush");
  pFVar61 = (FSlateBrush *)(*pcVar9)(pIVar51,*pFVar21,0,0);
  pFVar60->_SeparatorImage = pFVar61;
  pFVar60->_Thickness = 1.0;
  pFVar60->_Orientation = Orient_Horizontal;
  local_4018 = 0;
  local_4000 = 0;
  uStack_46c0 = (TReferenceControllerBase<1> *)CONCAT44(0x3e800000,(undefined4)uStack_46c0);
  local_4014 = 1;
  local_4028._s_0.R = FLinearColor::White.field0_0x0._s_0.R;
  local_4028._s_0.G = FLinearColor::White.field0_0x0._s_0.G;
  local_4028._s_0.B = FLinearColor::White.field0_0x0._s_0.B;
  local_4028._s_0.A = 0.25;
  local_4010 = 0;
  uStack_4008 = 0;
  pFVar60 = SSeparator::FArguments::ColorAndOpacity
                      (pFVar60,(TAttribute<FSlateColor> *)&local_4028._s_0);
  pTVar62 = MakeTDecl<SSeparator,RequiredArgs::T0RequiredArgs>
                      (&local_3cf0,"SSeparator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\LoudnessMeterWidgetView.cpp"
                       ,0x15a,&local_46ee);
  pTVar63 = TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar62,&local_3f00,pFVar60);
  local_4280.Object = (SWidget *)pTVar63->Object;
  local_4698 = (FSlotArguments *)(pTVar63->SharedReferenceCount).ReferenceController;
  if (local_4698 != (FSlotArguments *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_4698)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_4698)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4280.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_4698;
  pFVar33 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_46a8,&local_4280);
  pFVar32 = SVerticalBox::FArguments::operator+(pFVar32,pFVar33);
  pFVar33 = SVerticalBox::Slot(&local_3678);
  pFVar33 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar33);
  pFVar29 = STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
            ::FArguments::FArguments(&local_1008);
  pTVar64 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_3b50,&local_4270);
  pFVar29 = TSlateBaseNamedArgs<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_>
            ::Visibility((TSlateBaseNamedArgs<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_>
                          *)pFVar29,pTVar64);
  pFVar29 = STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
            ::FArguments::
            OnGenerateTile_Static<TSharedRef<ITableRow,1>_(__cdecl*)(TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<STableViewBase,1>_const_&)>
                      (pFVar29,LoudnessMeterWidgetView_Private::MakeNumericValueTileWidget);
  pTVar65 = TSharedRef<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
            ::
            TSharedRef<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                      (&local_3c00,&this->NumericValues);
  pFVar29 = STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
            ::FArguments::ListItemsSource(pFVar29,pTVar65);
  local_46b8 = 60.0;
  pTVar66 = TAttribute<float>::TAttribute<float>(&local_3b30,&local_46b8);
  pFVar29 = STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
            ::FArguments::ItemHeight(pFVar29,pTVar66);
  local_46b4 = 60.0;
  pTVar66 = TAttribute<float>::TAttribute<float>(&local_3b10,&local_46b4);
  pFVar29 = STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
            ::FArguments::ItemWidth(pFVar29,pTVar66);
  local_46f8 = CenterAligned;
  pTVar67 = TAttribute<enum_EListItemAlignment>::TAttribute<enum_EListItemAlignment>
                      (local_3af0,&local_46f8);
  pFVar29 = STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
            ::FArguments::ItemAlignment(pFVar29,pTVar67);
  local_46b0 = None;
  pTVar68 = TAttribute<enum_ESelectionMode::Type>::TAttribute<enum_ESelectionMode::Type>
                      (local_3a90,&local_46b0);
  pFVar29 = STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
            ::FArguments::SelectionMode(pFVar29,pTVar68);
  this_07 = MakeTDecl<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T0RequiredArgs>
                      (&local_3d08,"SLoudnessMetricTileView",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\LoudnessMeterWidgetView.cpp"
                       ,0x164,&local_46ed);
  pTVar69 = TSlateDecl<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T0RequiredArgs>
            ::operator<<=(this_07,&local_3f10,pFVar29);
  TSharedRef<SWidget,1>::
  TSharedRef<SWidget,1><STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_>
            (&local_4220,pTVar69);
  pFVar33 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar33,&local_4220);
  pFVar32 = SVerticalBox::FArguments::operator+(pFVar32,pFVar33);
  pFVar33 = SVerticalBox::Slot(&local_3108);
  pFVar33 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar33);
  pFVar33 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar33->field_0x18,fVar11,__real_40000000);
  pFVar60 = SSeparator::FArguments::FArguments(&local_2a08);
  pTVar64 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_3ad0,&local_4270);
  pFVar60 = TSlateBaseNamedArgs<SSeparator>::Visibility
                      ((TSlateBaseNamedArgs<SSeparator> *)pFVar60,pTVar64);
  pIVar51 = FAppStyle::Get();
  pcVar9 = *(code **)((longlong)*pIVar51 + 0x50);
  pFVar21 = ::FName::FName(&local_3de0,"WhiteBrush");
  pFVar61 = (FSlateBrush *)(*pcVar9)(pIVar51,*pFVar21,0,0);
  pFVar60->_SeparatorImage = pFVar61;
  pFVar60->_Orientation = Orient_Horizontal;
  pFVar60->_Thickness = 1.0;
  local_44a8._s_0.R = FLinearColor::White.field0_0x0._s_0.R;
  local_44a8._s_0.B = FLinearColor::White.field0_0x0._s_0.B;
  local_44a8._s_0.G = FLinearColor::White.field0_0x0._s_0.G;
  local_44a8._s_0.A = 0.25;
  pTVar70 = TAttribute<FSlateColor>::TAttribute<FSlateColor><FLinearColor>
                      (&local_3a10,(FLinearColor *)&local_44a8._s_0);
  pFVar60 = SSeparator::FArguments::ColorAndOpacity(pFVar60,pTVar70);
  pTVar62 = MakeTDecl<SSeparator,RequiredArgs::T0RequiredArgs>
                      (&local_3d20,"SSeparator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\LoudnessMeterWidgetView.cpp"
                       ,0x171,&local_46ec);
  pTVar63 = TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar62,&local_3f20,pFVar60);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSeparator>(&local_4230,pTVar63);
  pFVar33 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar33,&local_4230);
  pFVar32 = SVerticalBox::FArguments::operator+(pFVar32,pFVar33);
  pFVar33 = SVerticalBox::Slot(&local_3760);
  local_46ac = 1.0;
  pTVar66 = TAttribute<float>::TAttribute<float>(&local_3ab0,&local_46ac);
  pFVar33 = SVerticalBox::FSlot::FSlotArguments::FillHeight(pFVar33,pTVar66);
  TSharedRef<SWidget,1>::
  TSharedRef<SWidget,1><STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_>
            (&local_4240,&local_43c0);
  pFVar33 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar33,&local_4240);
  pFVar32 = SVerticalBox::FArguments::operator+(pFVar32,pFVar33);
  this_08 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_3d38,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\LoudnessMeterWidgetView.cpp"
                       ,0x123,&local_46eb);
  pTVar71 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_08,&local_3f30,pFVar32);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_4250,pTVar71);
  pFVar31 = SBorder::FArguments::operator[](local_4440,&local_4250);
  pTVar48 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_3d50,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\LoudnessMeterWidgetView.cpp"
                       ,0x11f,local_46ea);
  pTVar49 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar48,&local_3f58,pFVar31);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(local_4438,pTVar49);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3f58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3d50._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4250.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3f30.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3d38._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4240.SharedReferenceCount.ReferenceController);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_3760);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4230.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3f20.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3d20._Widget.SharedReferenceCount.ReferenceController);
  SSeparator::FArguments::~FArguments(&local_2a08);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_3108);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4220.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3f10.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3d08._Widget.SharedReferenceCount.ReferenceController);
  STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
  FArguments::~FArguments(&local_1008);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_3678);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_4698);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3f00.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3cf0._Widget.SharedReferenceCount.ReferenceController);
  TFunction<EVisibility___cdecl(void)>::~TFunction<EVisibility___cdecl(void)>(&local_88);
  SSeparator::FArguments::~FArguments(&local_27d0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_3590);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_4690);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3ef0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3cd8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3ee0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3cc0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4430);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4430);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_45a0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4428);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3ed0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3dc8._Widget.SharedReferenceCount.ReferenceController);
  FText::~FText(&local_3ec0);
  SImage::FArguments::~FArguments(&local_2598);
  SButton::FArguments::~FArguments(&local_b88);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_34a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_43f0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3eb0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3d98._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4420);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3e80.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3d80._Widget.SharedReferenceCount.ReferenceController);
  TFunction<FText___cdecl(void)>::~TFunction<FText___cdecl(void)>
            ((TFunction<FText___cdecl(void)> *)local_e8);
  `AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_5>::~<lambda_5>(&local_3e60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_39e0.CompositeFont.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_648);
  SBorder::FArguments::~FArguments(&local_1c48);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_33c0);
  SHorizontalBox::FArguments::~FArguments(&local_3020);
  TFunction<EVisibility___cdecl(void)>::~TFunction<EVisibility___cdecl(void)>(&local_b8);
  SBox::FArguments::~FArguments(&local_22f0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_32d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_43e0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3e70.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3d68._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3e38.SharedReferenceCount.ReferenceController);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_3980);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_43d0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3e28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3db0._Widget.SharedReferenceCount.ReferenceController);
  SColorBlock::FArguments::~FArguments(&local_1fa8);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_3a70);
  SOverlay::FArguments::~FArguments(&local_2e18);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_31f0);
  SVerticalBox::FArguments::~FArguments(&local_2c10);
  SBorder::FArguments::~FArguments(&local_1868);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_43c0.SharedReferenceCount.ReferenceController);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_4270);
  `AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_2>::~<lambda_2>(&local_43a8);
  `AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::~<lambda_1>(&local_3ca8);
  FToolBarBuilder::~FToolBarBuilder(&local_38b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar19);
  return local_4438;
}

// RefreshVisibleLoudnessMetrics @ 14d9622e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
AudioWidgets::FLoudnessMeterWidgetView::RefreshVisibleLoudnessMetrics
          (FLoudnessMeterWidgetView *this)

{
  int *piVar1;
  int iVar2;
  TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
  *pTVar3;
  longlong lVar4;
  TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
  *pTVar5;
  code *pcVar6;
  char cVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  undefined7 uStack_ef;
  undefined7 uStack_cf;
  FReadAccessScope local_c8;
  FReadAccessScope local_b0;
  TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
  local_98;
  TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
  local_78;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  pTVar3 = (this->LoudnessMetrics).Object;
  iVar2 = (pTVar3->Array).ArrayNum;
  pFVar14 = (pTVar3->Array).AllocatorInstance.Data;
  pFVar16 = pFVar14 + (longlong)iVar2 * 0x10;
LAB_14d962320:
  do {
    if ((pTVar3->Array).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar14 == pFVar16) {
      return;
    }
    lVar4 = *(longlong *)pFVar14;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar4 + 0x48),&local_c8);
    if ((*(int *)(lVar4 + 0x58) == 0) || (*(longlong **)(lVar4 + 0x50) == (longlong *)0x0)) {
LAB_14d9623a7:
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_c8);
    }
    else {
      cVar7 = (**(code **)(**(longlong **)(lVar4 + 0x50) + 0x38))();
      if (cVar7 == '\0') goto LAB_14d9623a7;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_c8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar4 + 0x48),&local_58)
      ;
      if (*(int *)(lVar4 + 0x58) == 0) {
        plVar11 = (longlong *)0x0;
      }
      else {
        plVar11 = *(longlong **)(lVar4 + 0x50);
      }
      uVar8 = (**(code **)(*plVar11 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
      *(undefined1 *)(lVar4 + 0x40) = uVar8;
    }
    pTVar5 = (this->NumericValues).Object;
    pFVar12 = (pTVar5->Array).AllocatorInstance.Data;
    pFVar13 = pFVar12 + (longlong)(pTVar5->Array).ArrayNum * 0x10;
    if (pFVar12 != pFVar13) {
      do {
        if (*(longlong *)pFVar12 == *(longlong *)pFVar14) {
          cVar7 = '\x01';
          goto LAB_14d9623e4;
        }
        pFVar12 = pFVar12 + 0x10;
      } while (pFVar12 != pFVar13);
    }
    cVar7 = '\0';
LAB_14d9623e4:
    if (cVar7 != *(char *)(lVar4 + 0x40)) {
      pTVar5 = (this->NumericValues).Object;
      if (*(char *)(lVar4 + 0x40) == '\0') {
        pFVar12 = (pTVar5->Array).AllocatorInstance.Data;
        if (pFVar12 != pFVar12 + (longlong)(pTVar5->Array).ArrayNum * 0x10) {
          pFVar13 = pFVar12;
          do {
            if (*(longlong *)pFVar13 == *(longlong *)pFVar14) {
              iVar10 = (int)((longlong)pFVar13 - (longlong)pFVar12 >> 4);
              if (iVar10 != -1) {
                UE::Slate::Containers::
                TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                ::RemoveAt<int>(pTVar5,iVar10,1,Default);
              }
              break;
            }
            pFVar13 = pFVar13 + 0x10;
          } while (pFVar13 != pFVar12 + (longlong)(pTVar5->Array).ArrayNum * 0x10);
        }
      }
      else {
        pFVar12 = (pTVar5->Array).AllocatorInstance.Data;
        if ((pFVar12 <= pFVar14) && (pFVar14 < pFVar12 + (longlong)(pTVar5->Array).ArrayMax * 0x10))
        {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar10 = (pTVar5->Array).ArrayNum;
        piVar1 = &(pTVar5->Array).ArrayMax;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)pTVar5,piVar1);
        }
        pFVar12 = (pTVar5->Array).AllocatorInstance.Data;
        (pTVar5->Array).ArrayNum = iVar10 + 1;
        lVar15 = (longlong)iVar10 * 0x10;
        *(longlong *)(pFVar12 + lVar15) = *(longlong *)pFVar14;
        lVar4 = *(longlong *)(pFVar14 + 8);
        *(longlong *)(pFVar12 + lVar15 + 8) = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        pFVar12 = (pTVar5->Array).AllocatorInstance.Data;
        if (iVar10 < 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result.Array.Num() > 0 && Result.StartIndex >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Containers\\ObservableArray.h"
                             ,0x3d,L"");
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        local_98.Array.ArrayNum = 1;
        local_98.MoveIndex = -1;
        local_98.StartIndex = iVar10;
        local_98._25_7_ = uStack_ef;
        local_98.Action = Add;
        local_98.Array.DataPtr =
             (TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *)
             (pFVar12 + lVar15);
        TMulticastDelegate<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
        ::Broadcast(&pTVar5->ArrayChangedDelegate,&local_98);
      }
    }
    lVar4 = *(longlong *)pFVar14;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar4 + 0x68),&local_b0);
    if ((*(int *)(lVar4 + 0x78) == 0) || (*(longlong **)(lVar4 + 0x70) == (longlong *)0x0)) {
LAB_14d9625d5:
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_b0);
    }
    else {
      cVar7 = (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x38))();
      if (cVar7 == '\0') goto LAB_14d9625d5;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_b0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar4 + 0x68),&local_40)
      ;
      if (*(int *)(lVar4 + 0x78) == 0) {
        plVar11 = (longlong *)0x0;
      }
      else {
        plVar11 = *(longlong **)(lVar4 + 0x70);
      }
      uVar8 = (**(code **)(*plVar11 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_40);
      *(undefined1 *)(lVar4 + 0x60) = uVar8;
    }
    pTVar5 = (this->MeterValues).Object;
    pFVar12 = (pTVar5->Array).AllocatorInstance.Data;
    pFVar13 = pFVar12 + (longlong)(pTVar5->Array).ArrayNum * 0x10;
    if (pFVar12 != pFVar13) {
      do {
        if (*(longlong *)pFVar12 == *(longlong *)pFVar14) {
          cVar7 = '\x01';
          goto LAB_14d962614;
        }
        pFVar12 = pFVar12 + 0x10;
      } while (pFVar12 != pFVar13);
    }
    cVar7 = '\0';
LAB_14d962614:
    if (cVar7 == *(char *)(lVar4 + 0x60)) {
LAB_14d9627b4:
      pFVar14 = pFVar14 + 0x10;
      goto LAB_14d962320;
    }
    pTVar5 = (this->MeterValues).Object;
    if (*(char *)(lVar4 + 0x60) == '\0') {
      pFVar12 = (pTVar5->Array).AllocatorInstance.Data;
      if (pFVar12 == pFVar12 + (longlong)(pTVar5->Array).ArrayNum * 0x10) goto LAB_14d9627b4;
      pFVar13 = pFVar12;
      do {
        if (*(longlong *)pFVar13 == *(longlong *)pFVar14) {
          iVar10 = (int)((longlong)pFVar13 - (longlong)pFVar12 >> 4);
          if (iVar10 != -1) {
            UE::Slate::Containers::
            TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
            ::RemoveAt<int>(pTVar5,iVar10,1,Default);
          }
          goto LAB_14d9627b4;
        }
        pFVar13 = pFVar13 + 0x10;
      } while (pFVar13 != pFVar12 + (longlong)(pTVar5->Array).ArrayNum * 0x10);
      pFVar14 = pFVar14 + 0x10;
    }
    else {
      pFVar12 = (pTVar5->Array).AllocatorInstance.Data;
      if ((pFVar12 <= pFVar14) && (pFVar14 < pFVar12 + (longlong)(pTVar5->Array).ArrayMax * 0x10)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar10 = (pTVar5->Array).ArrayNum;
      piVar1 = &(pTVar5->Array).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,(ForAnyElementType *)pTVar5,piVar1);
      }
      pFVar12 = (pTVar5->Array).AllocatorInstance.Data;
      (pTVar5->Array).ArrayNum = iVar10 + 1;
      lVar15 = (longlong)iVar10 * 0x10;
      *(longlong *)(pFVar12 + lVar15) = *(longlong *)pFVar14;
      lVar4 = *(longlong *)(pFVar14 + 8);
      *(longlong *)(pFVar12 + lVar15 + 8) = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      pFVar12 = (pTVar5->Array).AllocatorInstance.Data;
      if (iVar10 < 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result.Array.Num() > 0 && Result.StartIndex >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Containers\\ObservableArray.h"
                           ,0x3d,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      local_78.Array.ArrayNum = 1;
      local_78.MoveIndex = -1;
      local_78.StartIndex = iVar10;
      local_78._25_7_ = uStack_cf;
      local_78.Action = Add;
      local_78.Array.DataPtr =
           (TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *)
           (pFVar12 + lVar15);
      TMulticastDelegate<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
      ::Broadcast(&pTVar5->ArrayChangedDelegate,&local_78);
      pFVar14 = pFVar14 + 0x10;
    }
  } while( true );
}

