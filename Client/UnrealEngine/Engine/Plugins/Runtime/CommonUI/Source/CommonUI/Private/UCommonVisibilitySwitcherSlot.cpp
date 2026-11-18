// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 9

// StaticClass @ 14a781500

UClass * __cdecl UCommonVisibilitySwitcherSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonVisibilitySwitcherSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonVisibilitySwitcherSlot",
               &Z_Registration_Info_UClass_UCommonVisibilitySwitcherSlot.InnerSingleton,
               StaticRegisterNativesUCommonVisibilitySwitcherSlot,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonVisibilitySwitcherSlot>,
               InternalVTableHelperCtorCaller<UCommonVisibilitySwitcherSlot>,local_res8,
               UOverlaySlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonVisibilitySwitcherSlot.InnerSingleton;
}

// UCommonVisibilitySwitcherSlot @ 14a7b0000

UCommonVisibilitySwitcherSlot * __thiscall
UCommonVisibilitySwitcherSlot::UCommonVisibilitySwitcherSlot
          (UCommonVisibilitySwitcherSlot *this,FVTableHelper *param_1)

{
  UOverlaySlot::UOverlaySlot((UOverlaySlot *)this,param_1);
  this->_padding_ = (longlong)&___7UCommonVisibilitySwitcherSlot__6B_;
  (this->VisibilityBox).Object = (SBox *)0x0;
  (this->VisibilityBox).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UCommonVisibilitySwitcherSlot @ 14a7b0040

UCommonVisibilitySwitcherSlot * __thiscall
UCommonVisibilitySwitcherSlot::UCommonVisibilitySwitcherSlot
          (UCommonVisibilitySwitcherSlot *this,FObjectInitializer *param_1)

{
  UOverlaySlot::UOverlaySlot((UOverlaySlot *)this,param_1);
  this->_padding_ = (longlong)&___7UCommonVisibilitySwitcherSlot__6B_;
  (this->VisibilityBox).Object = (SBox *)0x0;
  (this->VisibilityBox).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  UOverlaySlot::SetHorizontalAlignment((UOverlaySlot *)this,HAlign_Fill);
  UOverlaySlot::SetVerticalAlignment((UOverlaySlot *)this,VAlign_Fill);
  return this;
}

// ~UCommonVisibilitySwitcherSlot @ 14a7b3c10

void __thiscall
UCommonVisibilitySwitcherSlot::~UCommonVisibilitySwitcherSlot(UCommonVisibilitySwitcherSlot *this)

{
  this->_padding_ = (longlong)&___7UCommonVisibilitySwitcherSlot__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VisibilityBox).SharedReferenceCount.ReferenceController);
  UOverlaySlot::~UOverlaySlot((UOverlaySlot *)this);
  return;
}

// BuildSlot @ 14a7c29f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonVisibilitySwitcherSlot::BuildSlot
          (UCommonVisibilitySwitcherSlot *this,TSharedRef<SOverlay,1> *param_1)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSharedReferencer<1> FVar4;
  EHorizontalAlignment EVar5;
  EVerticalAlignment EVar6;
  FScopedWidgetSlotArguments *pFVar7;
  FMargin *pFVar8;
  FArguments *pFVar9;
  TSharedRef<SWidget,1> *pTVar10;
  TSharedRef<SBox,1> *pTVar11;
  SWidget *pSVar12;
  int iVar13;
  int iVar14;
  FScopedWidgetSlotArguments *pFVar15;
  FScopedWidgetSlotArguments *pFVar16;
  undefined1 auStackY_518 [32];
  T0RequiredArgs local_4e8 [4];
  FLLMScope local_4e4;
  SBox *local_4e0;
  FSharedReferencer<1> local_4d8;
  TSharedRef<SWidget,1> local_4d0;
  SBox *local_4c0;
  FSharedReferencer<1> local_4b8;
  bool local_4b0;
  longlong local_4a8;
  longlong lStack_4a0;
  undefined1 local_498;
  undefined1 local_490 [8];
  ForAnyElementType FStack_488;
  ulonglong local_480;
  EHorizontalAlignment local_478 [2];
  EVerticalAlignment local_470 [2];
  FName local_468;
  TSharedRef<SBox,1> local_460;
  TSharedRef<SWidget,1> local_450;
  FMargin local_440;
  FArguments local_430;
  FScopedWidgetSlotArguments local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_518;
  pFVar15 = (FScopedWidgetSlotArguments *)0x0;
  pFVar7 = SOverlay::AddSlot(param_1->Object,&local_e8,-1);
  this->_padding_ = pFVar7->_padding_;
  pFVar8 = UOverlaySlot::GetPadding((UOverlaySlot *)this,&local_440);
  local_4a8._0_4_ = pFVar8->Left;
  local_4a8._4_4_ = pFVar8->Top;
  lStack_4a0._0_4_ = pFVar8->Right;
  lStack_4a0._4_4_ = pFVar8->Bottom;
  local_498 = 1;
  iVar13 = 0;
  local_480 = 0;
  local_490 = (undefined1  [8])0x0;
  FStack_488.Data = (FScriptContainerElement *)0x0;
  pFVar7->_padding_ = local_4a8;
  pFVar7->_padding_ = lStack_4a0;
  *(undefined1 *)&pFVar7->_padding_ = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar7->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_490);
  pFVar16 = pFVar15;
  if (&pFVar7->_padding_ != (longlong *)0x0) {
    pFVar16 = pFVar7;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_490,
             (FWriteAccessScope *)&local_4c0);
  if (((int)local_480 != 0) && (FStack_488.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_488.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_488,0,0,0x10);
    local_480 = local_480 & 0xffffffff00000000;
  }
  if (local_4b0 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_4b8.ReferenceController,
               (FDestructionSentinel *)&local_4c0);
  }
  if (FStack_488.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_488.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_490);
  plVar1 = &pFVar16->_padding_;
  EVar5 = UOverlaySlot::GetHorizontalAlignment((UOverlaySlot *)this);
  if (local_478 != (EHorizontalAlignment *)plVar1) {
    *(EHorizontalAlignment *)plVar1 = EVar5;
    *(undefined1 *)((longlong)&pFVar16->_padding_ + 4) = 1;
  }
  pFVar7 = pFVar15;
  if (plVar1 != (longlong *)0x0) {
    pFVar7 = pFVar16;
  }
  EVar6 = UOverlaySlot::GetVerticalAlignment((UOverlaySlot *)this);
  if (local_470 != (EVerticalAlignment *)&pFVar7->_padding_) {
    *(EVerticalAlignment *)&pFVar7->_padding_ = EVar6;
    *(undefined1 *)((longlong)&pFVar7->_padding_ + 4) = 1;
  }
  if (pFVar7 != (FScopedWidgetSlotArguments *)0xffffffffffffffb8) {
    pFVar15 = pFVar7;
  }
  pFVar9 = SBox::FArguments::FArguments(&local_430);
  pSVar12 = SNullWidget::NullWidget.Object;
  if ((UWidget *)this->_padding_ == (UWidget *)0x0) {
    local_4d0.Object = SNullWidget::NullWidget.Object;
    local_4d0.SharedReferenceCount.ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar10 = &local_4d0;
    iVar14 = 2;
  }
  else {
    pTVar10 = UWidget::TakeWidget((UWidget *)this->_padding_,&local_450);
    pSVar12 = pTVar10->Object;
    iVar14 = iVar13;
    iVar13 = 1;
  }
  FVar4.ReferenceController = local_4d0.SharedReferenceCount.ReferenceController;
  pTVar2 = (pTVar10->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar9->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar9->_Content).Widget.Object = pSVar12;
  (pFVar9->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FLLMScope::FLLMScope(&local_4e4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_468 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_4d0,&local_468,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *)&local_4c0,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonVisibilitySwitcherSlot.cpp"
             ,0x19,local_4e8);
  FMemScope::~FMemScope((FMemScope *)&local_4d0);
  FLLMScope::~FLLMScope(&local_4e4);
  if (local_4b8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_4b8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_4b8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = (this->VisibilityBox).SharedReferenceCount.ReferenceController;
  (this->VisibilityBox).Object = local_4c0;
  (this->VisibilityBox).SharedReferenceCount.ReferenceController = local_4b8.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar11 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *)&local_4c0,&local_460,pFVar9
                      );
  pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
  local_4e0 = pTVar11->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4d8.ReferenceController = pTVar2;
  if ((SBox **)&pFVar15->_padding_ != &local_4e0) {
    pFVar15->_padding_ = (longlong)local_4e0;
    local_4e0 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar15->_padding_,&local_4d8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4d8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_460.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4b8.ReferenceController);
  if (iVar14 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar4.ReferenceController);
  }
  if (iVar13 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_450.SharedReferenceCount.ReferenceController);
  }
  SBox::FArguments::~FArguments(&local_430);
  TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetPrivateStaticClass @ 14a7e6d60

UClass * __cdecl UCommonVisibilitySwitcherSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonVisibilitySwitcherSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonVisibilitySwitcherSlot",
               &Z_Registration_Info_UClass_UCommonVisibilitySwitcherSlot.InnerSingleton,
               StaticRegisterNativesUCommonVisibilitySwitcherSlot,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonVisibilitySwitcherSlot>,
               InternalVTableHelperCtorCaller<UCommonVisibilitySwitcherSlot>,local_res8,
               UOverlaySlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonVisibilitySwitcherSlot.InnerSingleton;
}

// ReleaseSlateResources @ 14a8120b0

void __thiscall
UCommonVisibilitySwitcherSlot::ReleaseSlateResources
          (UCommonVisibilitySwitcherSlot *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UOverlaySlot::ReleaseSlateResources((UOverlaySlot *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->VisibilityBox != (TSharedPtr<SBox,1> *)&local_18) {
    (this->VisibilityBox).Object = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->VisibilityBox).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetSlotVisibility @ 14a81ba40

void __thiscall
UCommonVisibilitySwitcherSlot::SetSlotVisibility
          (UCommonVisibilitySwitcherSlot *this,ESlateVisibility param_1)

{
  SBox *this_00;
  EVisibility EVar1;
  undefined7 extraout_var;
  undefined1 local_res8 [32];
  TAttribute<EVisibility> local_28;
  
  this_00 = (this->VisibilityBox).Object;
  if (this_00 != (SBox *)0x0) {
    EVar1 = UWidget::ConvertSerializedVisibilityToRuntime((ESlateVisibility)local_res8);
    local_28.Value.Value.Value =
         *(TEnumAsByte<EVisibility::Private> *)CONCAT71(extraout_var,EVar1.Value.Value);
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SPanel::SetVisibility((SPanel *)this_00,&local_28);
  }
  return;
}

// StaticRegisterNativesUCommonVisibilitySwitcherSlot @ 14a81ea90

void __cdecl UCommonVisibilitySwitcherSlot::StaticRegisterNativesUCommonVisibilitySwitcherSlot(void)

{
  return;
}

