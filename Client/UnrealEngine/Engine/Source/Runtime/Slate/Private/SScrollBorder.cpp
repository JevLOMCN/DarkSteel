// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 4

// ~SScrollBorder @ 1428c18c0

void __thiscall SScrollBorder::~SScrollBorder(SScrollBorder *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  this->_padding_ = (longlong)&___7SScrollBorder__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ScrollableWidget).Getter);
  pvVar3 = *(void **)&(this->ScrollableWidget).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ScrollableWidget).Getter);
  pTVar4 = (this->ScrollableWidget).Value.WeakReferenceCount.ReferenceController;
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
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BorderFadeDistance).Getter);
  pvVar3 = *(void **)&(this->BorderFadeDistance).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BorderFadeDistance).Getter);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// Construct @ 142902870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SScrollBorder::Construct
          (SScrollBorder *this,FArguments *param_1,TSharedRef<IScrollableWidget,1> *param_2)

{
  longlong *plVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  double dVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  FArguments *pFVar8;
  FSlotArguments *pFVar9;
  FScopedWidgetSlotArguments *pFVar10;
  FArguments *pFVar11;
  TSharedRef<SImage,1> *pTVar12;
  FScopedWidgetSlotArguments *pFVar13;
  atomic<int> *paVar14;
  FScopedWidgetSlotArguments *pFVar15;
  undefined1 auStackY_c28 [32];
  T0RequiredArgs local_bf8;
  T0RequiredArgs local_bf7;
  T0RequiredArgs local_bf6 [2];
  FLLMScope local_bf4;
  FLLMScope local_bf0;
  FLLMScope local_bec;
  uchar local_be8;
  undefined1 local_be7;
  undefined1 local_be0 [8];
  ForAnyElementType FStack_bd8;
  ulonglong local_bd0;
  uchar local_bc8;
  undefined1 local_bc7;
  undefined1 local_bc0 [8];
  ForAnyElementType FStack_bb8;
  ulonglong local_bb0;
  FName local_ba8;
  undefined4 uStack_ba0;
  uint uStack_b9c;
  SImage *local_b98;
  FSharedReferencer<1> local_b90;
  SImage *local_b88;
  FSharedReferencer<1> local_b80;
  IScrollableWidget *local_b78;
  TReferenceControllerBase<1> *local_b70;
  bool local_b68;
  undefined1 local_b60 [8];
  ForAnyElementType FStack_b58;
  ulonglong local_b50;
  FSlateBrush *local_b48;
  undefined1 local_b40;
  undefined1 local_b38 [8];
  ForAnyElementType FStack_b30;
  ulonglong local_b28;
  FSlateBrush *local_b20;
  undefined1 local_b18;
  undefined1 local_b10 [8];
  ForAnyElementType FStack_b08;
  ulonglong local_b00;
  SWidget *local_af8;
  FSharedReferencer<1> local_af0;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined1 local_ad8;
  undefined1 local_ad0 [8];
  ForAnyElementType FStack_ac8;
  ulonglong local_ac0;
  TSharedRef<SOverlay,1> local_ab8;
  undefined4 local_aa8 [2];
  undefined4 local_aa0 [2];
  undefined4 local_a98 [2];
  undefined4 local_a90 [2];
  FName local_a88;
  FMemScope local_a80;
  FName local_a78;
  FMemScope local_a70;
  FMemScope local_a68;
  FDestructionSentinel local_a60;
  FDestructionSentinel local_a48;
  FDestructionSentinel local_a30;
  FDestructionSentinel local_a18;
  FDestructionSentinel local_a00;
  FDestructionSentinel local_9e8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_9d0;
  TSharedRef<SImage,1> local_9b8;
  code *local_9a8;
  longlong lStack_9a0;
  TSharedRef<SImage,1> local_998;
  code *local_988;
  longlong lStack_980;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_978;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_960;
  undefined1 local_948 [56];
  void *local_910;
  FArguments local_8e8;
  FArguments local_6e0;
  FArguments local_438;
  FScopedWidgetSlotArguments local_188;
  FScopedWidgetSlotArguments local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c28;
  if (param_1->_Style == (FScrollBorderStyle *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InArgs._Style",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBorder.cpp"
                       ,0xf,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  dVar5 = (param_1->_BorderFadeDistance).Value.field0_0x0._s_0.Y;
  (this->BorderFadeDistance).Value.field0_0x0._s_0.X =
       (param_1->_BorderFadeDistance).Value.field0_0x0._s_0.X;
  (this->BorderFadeDistance).Value.field0_0x0._s_0.Y = dVar5;
  (this->BorderFadeDistance).bIsSet = (param_1->_BorderFadeDistance).bIsSet;
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->BorderFadeDistance).Getter,&(param_1->_BorderFadeDistance).Getter);
  local_b70 = (param_2->SharedReferenceCount).ReferenceController;
  local_b78 = param_2->Object;
  if (local_b70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_b70->WeakReferenceCount = (atomic<int>)((int)local_b70->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_b68 = true;
  pFVar15 = (FScopedWidgetSlotArguments *)0x0;
  local_b50 = 0;
  local_b60 = (undefined1  [8])0x0;
  FStack_b58.Data = (FScriptContainerElement *)0x0;
  if (&this->ScrollableWidget != (TAttribute<TWeakPtr<IScrollableWidget,1>_> *)&local_b78) {
    (this->ScrollableWidget).Value.Object = local_b78;
    pTVar3 = (this->ScrollableWidget).Value.WeakReferenceCount.ReferenceController;
    local_b78 = (IScrollableWidget *)0x0;
    (this->ScrollableWidget).Value.WeakReferenceCount.ReferenceController = local_b70;
    local_b70 = (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar14 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar14;
      *paVar14 = (atomic<int>)((int)*paVar14 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
  }
  (this->ScrollableWidget).bIsSet = local_b68;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ScrollableWidget).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_b60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b60,
             (FWriteAccessScope *)&local_a18);
  if (((int)local_b50 != 0) && (FStack_b58.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_b58.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b58,0,0,0x10);
    local_b50 = local_b50 & 0xffffffff00000000;
  }
  if (local_a18.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a18.Accessor,&local_a18);
  }
  if (FStack_b58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b58.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b60);
  if (local_b70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar14 = &local_b70->WeakReferenceCount;
    aVar2 = *paVar14;
    *paVar14 = (atomic<int>)((int)*paVar14 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(local_b70->_padding_ + 8))();
    }
  }
  pFVar8 = SOverlay::FArguments::FArguments(&local_8e8);
  pFVar9 = SOverlay::Slot((FSlotArguments *)local_948,0);
  local_ad8 = 1;
  local_ac0 = 0;
  local_ae8 = 0;
  uStack_ae0 = 0;
  local_ad0 = (undefined1  [8])0x0;
  FStack_ac8.Data = (FScriptContainerElement *)0x0;
  pFVar9->_padding_ = 0;
  pFVar9->_padding_ = 0;
  *(undefined1 *)&pFVar9->_padding_ = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_ad0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_ad0,
             (FWriteAccessScope *)&local_a00);
  if (((int)local_ac0 != 0) && (FStack_ac8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_ac8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_ac8,0,0,0x10);
    local_ac0 = local_ac0 & 0xffffffff00000000;
  }
  if (local_a00.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a00.Accessor,&local_a00);
  }
  if (FStack_ac8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_ac8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ad0);
  local_af0.ReferenceController =
       (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  local_af8 = (param_1->_Content).Widget.Object;
  if (local_af0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_af0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_af0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)&pFVar9->_padding_ != &local_af8) {
    pFVar9->_padding_ = (longlong)local_af8;
    local_af8 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar9->_padding_,&local_af0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_af0.ReferenceController);
  pFVar8 = SOverlay::FArguments::operator+(pFVar8,pFVar9);
  FLLMScope::FLLMScope(&local_bf4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_a88 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_a80,&local_a88,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_978,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBorder.cpp"
             ,0x14,&local_bf8);
  FMemScope::~FMemScope(&local_a80);
  FLLMScope::~FLLMScope(&local_bf4);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=(&local_978,&local_ab8,pFVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_978._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_948 + 0x30));
  if (local_910 != (void *)0x0) {
    FMemory::Free(local_910);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_948 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_948._16_8_);
  if ((undefined8 *)local_948._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_948._0_8_)(local_948._0_8_,1);
  }
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_8e8._Slots.AllocatorInstance.Data,local_8e8._Slots.ArrayNum);
  if ((FSlotArguments *)local_8e8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_8e8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_8e8);
  pFVar10 = SOverlay::AddSlot(local_ab8.Object,&local_188,-1);
  plVar1 = &pFVar10->_padding_;
  if ((longlong *)local_aa8 != plVar1) {
    *(undefined4 *)plVar1 = 0;
    *(undefined1 *)((longlong)&pFVar10->_padding_ + 4) = 1;
  }
  pFVar13 = pFVar15;
  if (plVar1 != (longlong *)0x0) {
    pFVar13 = pFVar10;
  }
  if ((longlong *)local_aa0 != &pFVar13->_padding_) {
    *(undefined4 *)&pFVar13->_padding_ = 1;
    *(undefined1 *)((longlong)&pFVar13->_padding_ + 4) = 1;
  }
  pFVar10 = pFVar15;
  if (pFVar13 != (FScopedWidgetSlotArguments *)0xffffffffffffffb8) {
    pFVar10 = pFVar13;
  }
  pFVar11 = SImage::FArguments::FArguments(&local_6e0);
  local_bc8 = (uchar)EVisibility::HitTestInvisible.Value.Value;
  local_bc7 = 1;
  local_bb0 = 0;
  local_bc0 = (undefined1  [8])0x0;
  FStack_bb8.Data = (FScriptContainerElement *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar11->_padding_ =
       EVisibility::HitTestInvisible.Value.Value;
  *(undefined1 *)((longlong)&pFVar11->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar11->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_bc0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_bc0,
             (FWriteAccessScope *)&local_9e8);
  if (((int)local_bb0 != 0) && (FStack_bb8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_bb8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_bb8,0,0,0x10);
    local_bb0 = local_bb0 & 0xffffffff00000000;
  }
  if (local_9e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_9e8.Accessor,&local_9e8);
  }
  if (FStack_bb8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_bb8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_bc0);
  uStack_ba0 = 0;
  local_ba8 = (FName)GetTopBorderOpacity;
  lStack_9a0 = (ulonglong)uStack_b9c << 0x20;
  local_9a8 = GetTopBorderOpacity;
  pFVar11 = SImage::FArguments::ColorAndOpacity<SScrollBorder>
                      (pFVar11,this,(pmf_5a85bad8 *)&local_9a8);
  local_b40 = 1;
  local_b48 = &param_1->_Style->TopShadowBrush;
  local_b28 = 0;
  local_b38 = (undefined1  [8])0x0;
  FStack_b30.Data = (FScriptContainerElement *)0x0;
  (pFVar11->_Image).Value = local_b48;
  (pFVar11->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_b38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b38,
             (FWriteAccessScope *)&local_a30);
  if (((int)local_b28 != 0) && (FStack_b30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_b30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b30,0,0,0x10);
    local_b28 = local_b28 & 0xffffffff00000000;
  }
  if (local_a30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a30.Accessor,&local_a30);
  }
  if (FStack_b30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b38);
  FLLMScope::FLLMScope(&local_bf0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_a78 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_a70,&local_a78,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_960,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBorder.cpp"
             ,0x20,&local_bf7);
  FMemScope::~FMemScope(&local_a70);
  FLLMScope::~FLLMScope(&local_bf0);
  pTVar12 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_960,&local_9b8,pFVar11);
  pTVar3 = (pTVar12->SharedReferenceCount).ReferenceController;
  local_b98 = pTVar12->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b90.ReferenceController = pTVar3;
  if ((SImage **)&pFVar10->_padding_ != &local_b98) {
    pFVar10->_padding_ = (longlong)local_b98;
    local_b98 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar10->_padding_,&local_b90);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b90.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_960._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_6e0);
  TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_188);
  pFVar10 = SOverlay::AddSlot(local_ab8.Object,&local_e8,-1);
  plVar1 = &pFVar10->_padding_;
  if ((longlong *)local_a98 != plVar1) {
    *(undefined4 *)plVar1 = 0;
    *(undefined1 *)((longlong)&pFVar10->_padding_ + 4) = 1;
  }
  pFVar13 = pFVar15;
  if (plVar1 != (longlong *)0x0) {
    pFVar13 = pFVar10;
  }
  if ((longlong *)local_a90 != &pFVar13->_padding_) {
    *(undefined4 *)&pFVar13->_padding_ = 3;
    *(undefined1 *)((longlong)&pFVar13->_padding_ + 4) = 1;
  }
  if (pFVar13 != (FScopedWidgetSlotArguments *)0xffffffffffffffb8) {
    pFVar15 = pFVar13;
  }
  pFVar11 = SImage::FArguments::FArguments(&local_438);
  local_be8 = (uchar)EVisibility::HitTestInvisible.Value.Value;
  local_be7 = 1;
  local_bd0 = 0;
  local_be0 = (undefined1  [8])0x0;
  FStack_bd8.Data = (FScriptContainerElement *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar11->_padding_ =
       EVisibility::HitTestInvisible.Value.Value;
  *(undefined1 *)((longlong)&pFVar11->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar11->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_be0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_be0,
             (FWriteAccessScope *)&local_a60);
  if (((int)local_bd0 != 0) && (FStack_bd8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_bd8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_bd8,0,0,0x10);
    local_bd0 = local_bd0 & 0xffffffff00000000;
  }
  if (local_a60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a60.Accessor,&local_a60);
  }
  if (FStack_bd8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_bd8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_be0);
  uStack_ba0 = 0;
  local_ba8 = (FName)GetBottomBorderOpacity;
  lStack_980 = (ulonglong)uStack_b9c << 0x20;
  local_988 = GetBottomBorderOpacity;
  pFVar11 = SImage::FArguments::ColorAndOpacity<SScrollBorder>
                      (pFVar11,this,(pmf_5a85bad8 *)&local_988);
  local_b18 = 1;
  local_b20 = &param_1->_Style->BottomShadowBrush;
  local_b00 = 0;
  local_b10 = (undefined1  [8])0x0;
  FStack_b08.Data = (FScriptContainerElement *)0x0;
  (pFVar11->_Image).Value = local_b20;
  (pFVar11->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_b10);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b10,
             (FWriteAccessScope *)&local_a48);
  if (((int)local_b00 != 0) && (FStack_b08.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_b08.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b08,0,0,0x10);
    local_b00 = local_b00 & 0xffffffff00000000;
  }
  if (local_a48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a48.Accessor,&local_a48);
  }
  if (FStack_b08.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b08.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b10);
  FLLMScope::FLLMScope(&local_bec,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_ba8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_a68,&local_ba8,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_9d0,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBorder.cpp"
             ,0x2b,local_bf6);
  FMemScope::~FMemScope(&local_a68);
  FLLMScope::~FLLMScope(&local_bec);
  pTVar12 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_9d0,&local_998,pFVar11);
  pTVar3 = (pTVar12->SharedReferenceCount).ReferenceController;
  local_b88 = pTVar12->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b80.ReferenceController = pTVar3;
  if ((SImage **)&pFVar15->_padding_ != &local_b88) {
    pFVar15->_padding_ = (longlong)local_b88;
    local_b88 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar15->_padding_,&local_b80);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b80.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_998.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9d0._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_438);
  TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_e8);
  FVar6.ReferenceController = local_ab8.SharedReferenceCount.ReferenceController;
  if (local_ab8.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    paVar14 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar14 = &(local_ab8.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar14 = (atomic<int>)((int)*paVar14 + 1);
    UNLOCK();
  }
  FSlotBase::DetatchParentFromContent((FSlotBase *)&this->_padding_);
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar14 = (atomic<int>)((int)*paVar14 + 1);
    UNLOCK();
  }
  pTVar3 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)local_ab8.Object;
  this->_padding_ = (longlong)local_ab8.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// GetBottomBorderOpacity @ 14293c290

FSlateColor * __thiscall
SScrollBorder::GetBottomBorderOpacity(SScrollBorder *this,FSlateColor *__return_storage_ptr__)

{
  IScrollableWidget *pIVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TWeakPtr<IScrollableWidget,1> *pTVar4;
  longlong lVar5;
  TVector2<double> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  float fVar9;
  undefined1 local_28 [32];
  
  fVar9 = 0.0;
  pTVar4 = TAttribute<TWeakPtr<IScrollableWidget,1>_>::Get(&this->ScrollableWidget);
  pTVar7 = (pTVar4->WeakReferenceCount).ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14293c2e0;
      }
      LOCK();
      aVar3 = pTVar7->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pIVar1 = pTVar4->Object;
    if (pIVar1 != (IScrollableWidget *)0x0) {
      lVar5 = (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,local_28);
      pTVar6 = TAttribute<UE::Math::TVector2<double>_>::Get(&this->BorderFadeDistance);
      fVar9 = (float)(*(double *)(lVar5 + 8) / (pTVar6->field0_0x0)._s_0.Y);
    }
  }
LAB_14293c2e0:
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.R = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.G = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = fVar9;
  __return_storage_ptr__->ColorUseRule = UseColor_Specified;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return __return_storage_ptr__;
}

// GetTopBorderOpacity @ 14294a1b0

FSlateColor * __thiscall
SScrollBorder::GetTopBorderOpacity(SScrollBorder *this,FSlateColor *__return_storage_ptr__)

{
  IScrollableWidget *pIVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TWeakPtr<IScrollableWidget,1> *pTVar5;
  TVector2<double> *pTVar6;
  longlong lVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  double dVar10;
  float fVar11;
  undefined1 local_28 [32];
  
  fVar11 = 0.0;
  pTVar5 = TAttribute<TWeakPtr<IScrollableWidget,1>_>::Get(&this->ScrollableWidget);
  pTVar8 = (pTVar5->WeakReferenceCount).ReferenceController;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar8->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14294a202;
      }
      LOCK();
      aVar4 = pTVar8->SharedReferenceCount;
      bVar9 = aVar3 == aVar4;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar9);
    pIVar1 = pTVar5->Object;
    if (pIVar1 != (IScrollableWidget *)0x0) {
      pcVar2 = *(code **)((longlong)*pIVar1 + 8);
      pTVar6 = TAttribute<UE::Math::TVector2<double>_>::Get(&this->BorderFadeDistance);
      dVar10 = (pTVar6->field0_0x0)._s_0.Y;
      lVar7 = (*pcVar2)(pIVar1,local_28);
      dVar10 = *(double *)(lVar7 + 8) / dVar10;
      if (__real_3ff0000000000000 <= dVar10) {
        dVar10 = __real_3ff0000000000000;
      }
      if (dVar10 <= 0.0) {
        dVar10 = 0.0;
      }
      fVar11 = (float)dVar10;
    }
  }
LAB_14294a202:
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.R = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.G = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = fVar11;
  __return_storage_ptr__->ColorUseRule = UseColor_Specified;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return __return_storage_ptr__;
}

