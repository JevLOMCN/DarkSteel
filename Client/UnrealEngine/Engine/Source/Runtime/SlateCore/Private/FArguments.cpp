// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 18

// FArguments @ 142541d00

FArguments * __thiscall
UE::Slate::Private::SAttributeLeftWidget_Child::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 142541d20

FArguments * __thiscall
UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::FArguments::FArguments
          (FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 142541d40

FArguments * __thiscall
UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::FArguments::FArguments
          (FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 142541d60

FArguments * __thiscall
UE::Slate::Private::SAttributeLeftWidget_Parent::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 142541d80

FArguments * __thiscall
UE::Slate::Private::SContainerAttribute::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 142541da0

FArguments * __thiscall
`FSlateAttributeTest::RunTest'::__l14::SManagedAttribute::FArguments::FArguments(void *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs(this);
  return this;
}

// FArguments @ 142541dc0

FArguments * __thiscall
`FSlateAttributeTest::RunTest'::__l9::SSlateAttribute::FArguments::FArguments(void *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs(this);
  return this;
}

// FArguments @ 1425bc510

FArguments * __thiscall
UE::Slate::Private::SEmptyLeftWidget::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 1425bc530

FArguments * __thiscall
UE::Slate::Test::Private::SEmptyLeftWidget::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 1425bc550

FArguments * __thiscall SNullWidgetContent::FArguments::FArguments(FArguments *this)

{
  FDestructionSentinel local_48;
  uchar local_30;
  undefined1 local_2f;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  local_30 = (uchar)EVisibility::SelfHitTestInvisible.Value.Value;
  local_18 = 0;
  local_2f = 1;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  this->field_0x88 = EVisibility::SelfHitTestInvisible.Value.Value;
  this->field_0x89 = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x90,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_48);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  return this;
}

// FArguments @ 1425bc630

FArguments * __thiscall SOverlay::FArguments::FArguments(FArguments *this)

{
  FDestructionSentinel local_48;
  uchar local_30;
  undefined1 local_2f;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  local_2f = 1;
  (this->_Slots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->_Slots).ArrayNum = 0;
  (this->_Slots).ArrayMax = 0;
  local_30 = (uchar)EVisibility::SelfHitTestInvisible.Value.Value;
  *(TEnumAsByte<EVisibility::Private> *)&this->_padding_ =
       EVisibility::SelfHitTestInvisible.Value.Value;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_48);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  return this;
}

// FArguments @ 1425bc720

FArguments * __thiscall SPopupLayer::FArguments::FArguments(FArguments *this)

{
  FDestructionSentinel local_48;
  uchar local_30;
  undefined1 local_2f;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  local_2f = 1;
  (this->_Slots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->_Slots).ArrayNum = 0;
  (this->_Slots).ArrayMax = 0;
  local_30 = (uchar)EVisibility::SelfHitTestInvisible.Value.Value;
  *(TEnumAsByte<EVisibility::Private> *)&this->_padding_ =
       EVisibility::SelfHitTestInvisible.Value.Value;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_48);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  return this;
}

// FArguments @ 1425bc810

FArguments * __thiscall
UE::Slate::Test::Private::SSingleChild::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return this;
}

// FArguments @ 1425bc860

FArguments * __thiscall SVerticalBox::FArguments::FArguments(FArguments *this)

{
  FDestructionSentinel local_48;
  uchar local_30;
  undefined1 local_2f;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  local_2f = 1;
  (this->_Slots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->_Slots).ArrayNum = 0;
  (this->_Slots).ArrayMax = 0;
  local_30 = (uchar)EVisibility::SelfHitTestInvisible.Value.Value;
  *(TEnumAsByte<EVisibility::Private> *)&this->_padding_ =
       EVisibility::SelfHitTestInvisible.Value.Value;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_48);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  return this;
}

// FArguments @ 1425bc950

FArguments * __thiscall
UE::Slate::Test::Private::SWeakChild::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return this;
}

// FArguments @ 1425bc9a0

FArguments * __thiscall SWindow::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  FSharedReferencer<1> FVar6;
  ISlateStyle *pIVar7;
  FName *pFVar8;
  FWindowStyle *pFVar9;
  FText *pFVar10;
  FName local_res8;
  FText local_18;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  this->_Type = Normal;
  pIVar7 = FAppStyle::Get();
  pFVar8 = ::FName::FName(&local_res8,"Window");
  pFVar9 = (FWindowStyle *)
           (**(code **)((longlong)*pIVar7 + 0xa0))(pIVar7,FWindowStyle::TypeName,*pFVar8,0,1);
  if (pFVar9 == (FWindowStyle *)0x0) {
    pFVar9 = FWindowStyle::GetDefault();
  }
  this->_Style = pFVar9;
  FText::FText(&(this->_Title).Value);
  (this->_Title).bIsSet = false;
  *(undefined8 *)&(this->_Title).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Title).Getter = 0;
  *(undefined8 *)&(this->_Title).Getter.field_0x8 = 0;
  this->_bDragAnywhere = false;
  this->_AutoCenter = PreferredWorkArea;
  this->_ScreenPosition =
       (FDeprecateVector2DParameter)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  this->_ClientSize = (FDeprecateVector2DParameter)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar9 = this->_Style;
  (this->_SupportsTransparency).Value = None;
  (this->_MinWidth).bIsSet = false;
  (this->_MinHeight).bIsSet = false;
  (this->_MaxWidth).bIsSet = false;
  (this->_MaxHeight).bIsSet = false;
  this->_AdjustInitialSizeAndPositionForDPIScale = true;
  this->_InitialOpacity = 1.0;
  this->_IsInitiallyMaximized = false;
  this->_IsInitiallyMinimized = false;
  this->_SizingRule = UserSized;
  this->_IsPopupWindow = false;
  this->_IsTopmostWindow = false;
  this->_FocusWhenFirstShown = true;
  this->_FocusUserIndex = -1;
  this->_ActivationPolicy = Always;
  this->_UseOSWindowBorder = false;
  this->_HasCloseButton = true;
  this->_SupportsMaximize = true;
  this->_SupportsMinimize = true;
  this->_ShouldPreserveAspectRatio = false;
  this->_CreateTitleBar = true;
  this->_SaneWindowPlacement = true;
  fVar2 = (pFVar9->BorderPadding).Left;
  fVar3 = (pFVar9->BorderPadding).Top;
  fVar4 = (pFVar9->BorderPadding).Right;
  fVar5 = (pFVar9->BorderPadding).Bottom;
  this->_bManualManageDPI = false;
  (this->_LayoutBorder).Left = fVar2;
  (this->_LayoutBorder).Top = fVar3;
  (this->_LayoutBorder).Right = fVar4;
  (this->_LayoutBorder).Bottom = fVar5;
  (this->_UserResizeBorder).Left = 5.0;
  (this->_UserResizeBorder).Top = 5.0;
  (this->_UserResizeBorder).Right = 5.0;
  (this->_UserResizeBorder).Bottom = 5.0;
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar6 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar6.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      (&local_18,L"SWindow",L"Window_DefaultCloseButtonToolTip",L"Close");
  FText::FText(&(this->_CloseButtonToolTipText).Value,pFVar10);
  (this->_CloseButtonToolTipText).bIsSet = true;
  *(undefined8 *)&(this->_CloseButtonToolTipText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_CloseButtonToolTipText).Getter = 0;
  *(undefined8 *)&(this->_CloseButtonToolTipText).Getter.field_0x8 = 0;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return this;
}

// ~FArguments @ 1425c08a0

void __thiscall SWindow::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_CloseButtonToolTipText).Getter);
  pvVar1 = *(void **)&(this->_CloseButtonToolTipText).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_CloseButtonToolTipText).Getter);
  pIVar2 = (this->_CloseButtonToolTipText).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Content).Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Title).Getter);
  pvVar1 = *(void **)&(this->_Title).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Title).Getter);
  pIVar2 = (this->_Title).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// operator+ @ 1425c3430

FArguments * __thiscall SOverlay::FArguments::operator+(FArguments *this,FSlotArguments *param_1)

{
  int *piVar1;
  TArray<SOverlay::FOverlaySlot::FSlotArguments,TSizedDefaultAllocator<32>_> *pTVar2;
  FSlotArguments *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FArguments *pFVar7;
  
  pTVar2 = &this->_Slots;
  pFVar3 = (FSlotArguments *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->_Slots).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FArguments *)(*pcVar4)();
      return pFVar7;
    }
  }
  iVar6 = (this->_Slots).ArrayNum;
  piVar1 = &(this->_Slots).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x860,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->_Slots).ArrayNum = iVar6 + 1;
  FOverlaySlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x60),param_1);
  return this;
}

