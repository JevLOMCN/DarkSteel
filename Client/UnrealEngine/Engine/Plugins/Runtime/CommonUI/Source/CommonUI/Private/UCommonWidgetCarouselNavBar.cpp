// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 15

// StaticClass @ 14a7845b0

UClass * __cdecl UCommonWidgetCarouselNavBar::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonWidgetCarouselNavBar.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonWidgetCarouselNavBar",
               &Z_Registration_Info_UClass_UCommonWidgetCarouselNavBar.InnerSingleton,
               StaticRegisterNativesUCommonWidgetCarouselNavBar,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonWidgetCarouselNavBar>,
               InternalVTableHelperCtorCaller<UCommonWidgetCarouselNavBar>,local_res8,
               UWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonWidgetCarouselNavBar.InnerSingleton;
}

// UCommonWidgetCarouselNavBar @ 14a7b0250

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UCommonWidgetCarouselNavBar * __thiscall
UCommonWidgetCarouselNavBar::UCommonWidgetCarouselNavBar
          (UCommonWidgetCarouselNavBar *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->ButtonWidgetType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ButtonPadding).Left = 0.0;
  (this->ButtonPadding).Top = 0.0;
  (this->ButtonPadding).Right = 0.0;
  (this->ButtonPadding).Bottom = 0.0;
  (this->MyContainer).Object = (SHorizontalBox *)0x0;
  (this->MyContainer).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->LinkedCarousel).field0_0x0.DebugPtr = (UCommonWidgetCarousel *)0x0;
  (this->ButtonGroup).field0_0x0.DebugPtr = (UCommonButtonGroupBase *)0x0;
  (this->Buttons).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Buttons).ArrayNum = 0;
  (this->Buttons).ArrayMax = 0;
  return this;
}

// UCommonWidgetCarouselNavBar @ 14a7b02d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UCommonWidgetCarouselNavBar * __thiscall
UCommonWidgetCarouselNavBar::UCommonWidgetCarouselNavBar
          (UCommonWidgetCarouselNavBar *this,FObjectInitializer *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->ButtonWidgetType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ButtonPadding).Left = 0.0;
  (this->ButtonPadding).Top = 0.0;
  (this->ButtonPadding).Right = 0.0;
  (this->ButtonPadding).Bottom = 0.0;
  (this->MyContainer).Object = (SHorizontalBox *)0x0;
  (this->MyContainer).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->LinkedCarousel).field0_0x0.DebugPtr = (UCommonWidgetCarousel *)0x0;
  (this->ButtonGroup).field0_0x0.DebugPtr = (UCommonButtonGroupBase *)0x0;
  (this->Buttons).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Buttons).ArrayNum = 0;
  (this->Buttons).ArrayMax = 0;
  return this;
}

// ~UCommonWidgetCarouselNavBar @ 14a7b3d30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonWidgetCarouselNavBar::~UCommonWidgetCarouselNavBar(UCommonWidgetCarouselNavBar *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  pFVar1 = (this->Buttons).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyContainer).SharedReferenceCount.ReferenceController);
  UWidget::~UWidget((UWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14a7e6fa0

UClass * __cdecl UCommonWidgetCarouselNavBar::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonWidgetCarouselNavBar.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonWidgetCarouselNavBar",
               &Z_Registration_Info_UClass_UCommonWidgetCarouselNavBar.InnerSingleton,
               StaticRegisterNativesUCommonWidgetCarouselNavBar,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonWidgetCarouselNavBar>,
               InternalVTableHelperCtorCaller<UCommonWidgetCarouselNavBar>,local_res8,
               UWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonWidgetCarouselNavBar.InnerSingleton;
}

// HandleButtonClicked @ 14a7ea970

void __thiscall
UCommonWidgetCarouselNavBar::HandleButtonClicked
          (UCommonWidgetCarouselNavBar *this,UCommonButtonBase *param_1,int param_2)

{
  UCommonWidgetCarousel *pUVar1;
  SWidgetCarousel<UPanelSlot_*> *pSVar2;
  int iVar3;
  
  pUVar1 = (this->LinkedCarousel).field0_0x0.DebugPtr;
  if (pUVar1 != (UCommonWidgetCarousel *)0x0) {
    pSVar2 = (pUVar1->MyCommonWidgetCarousel).Object;
    if (pSVar2 == (SWidgetCarousel<UPanelSlot_*> *)0x0) {
      iVar3 = pUVar1->ActiveWidgetIndex;
    }
    else {
      iVar3 = pSVar2->WidgetIndex;
    }
    if (iVar3 != param_2) {
      UCommonWidgetCarousel::EndAutoScrolling(pUVar1);
      pUVar1 = (this->LinkedCarousel).field0_0x0.DebugPtr;
      (**(code **)(pUVar1->_padding_ + 0x330))(pUVar1,param_2);
    }
  }
  return;
}

// HandlePageChanged @ 14a7ee2f0

void __thiscall
UCommonWidgetCarouselNavBar::HandlePageChanged
          (UCommonWidgetCarouselNavBar *this,UCommonWidgetCarousel *param_1,int param_2)

{
  UCommonButtonGroupBase *this_00;
  
  this_00 = (this->ButtonGroup).field0_0x0.DebugPtr;
  if ((this_00 != (UCommonButtonGroupBase *)0x0) && (this_00->SelectedButtonIndex != param_2)) {
    UCommonButtonGroupBase::SelectButtonAtIndex(this_00,param_2,true);
    return;
  }
  return;
}

// RebuildButtons @ 14a8045e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UCommonWidgetCarouselNavBar::RebuildButtons(UCommonWidgetCarouselNavBar *this)

{
  int *piVar1;
  TArray<TObjectPtr<UCommonButtonBase>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  UCommonButtonGroupBase *pUVar4;
  SHorizontalBox *pSVar5;
  UCommonWidgetCarousel *pUVar6;
  code *pcVar7;
  FSlot *pFVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  APlayerController *pAVar12;
  UUserWidget *this_00;
  UClass *pUVar13;
  TSubclassOf<UWidget> TVar14;
  FSlot *pFVar15;
  FSlot *pFVar16;
  UObject *this_01;
  UFunction *pUVar17;
  ulonglong uVar18;
  <lambda_1> local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  FName local_res20;
  UUserWidget *local_268;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_260;
  FWeakObjectPtr local_258;
  FName local_250;
  undefined8 local_248;
  FSharedReferencer<1> FStack_240;
  longlong local_238;
  longlong lStack_230;
  undefined1 local_228;
  undefined1 local_220 [8];
  ForAnyElementType FStack_218;
  ulonglong local_210;
  UClass *local_208;
  FSlot *local_200;
  FName local_1f8;
  UCommonWidgetCarouselNavBar *local_1f0;
  FName *local_1e8 [2];
  TSharedRef<SWidget,1> local_1d8;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_1c8;
  FDestructionSentinel local_1b8;
  FDestructionSentinel local_1a0;
  undefined1 local_188 [8];
  FReadAccessScope local_180;
  FReadAccessScope local_168;
  undefined1 local_150 [16];
  SWidget *local_140;
  FSharedReferencer<1> local_138;
  longlong local_130;
  longlong lStack_128;
  undefined1 local_120;
  TDelegateBase<FNotThreadSafeDelegateMode> local_118 [7];
  TPanelChildren<SBoxPanel::FSlot> *local_60;
  int local_58;
  
  (**(code **)(((this->ButtonGroup).field0_0x0.DebugPtr)->_padding_ + 0x2c8))();
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &((this->ButtonGroup).field0_0x0.DebugPtr)->OnSelectedButtonBaseChanged,(UObject *)this
            );
  if ((this->MyContainer).Object == (SHorizontalBox *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3236020698031849427>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonWidgetCarouselNavBar.cpp"
                       ,0x2d,"MyContainer");
    if (!bVar9) {
      return;
    }
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((this->LinkedCarousel).field0_0x0.DebugPtr == (UCommonWidgetCarousel *)0x0) {
    return;
  }
  SBoxPanel::ClearChildren((SBoxPanel *)(this->MyContainer).Object);
  uVar10 = UPanelWidget::GetChildrenCount
                     ((UPanelWidget *)(this->LinkedCarousel).field0_0x0.DebugPtr);
  if ((int)uVar10 < 1) {
    return;
  }
  uVar18 = (ulonglong)uVar10;
  local_res10 = 0;
  do {
    local_208 = (this->ButtonWidgetType).Class.field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_208 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_208);
    }
    pAVar12 = (APlayerController *)(**(code **)(this->_padding_ + 0x2d8))(this);
    this_00 = CreateWidget<UUserWidget,APlayerController_*>
                        (pAVar12,(TSubclassOf<UUserWidget>)&local_208,(FName)0x0);
    if (this_00 == (UUserWidget *)0x0) {
LAB_14a8049f8:
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3236020698031849419>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonWidgetCarouselNavBar.cpp"
                         ,0x35,"ButtonUserWidget");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      pUVar13 = UCommonButtonBase::StaticClass();
      iVar11 = (int)pUVar13->_padding_;
      if ((*(int *)(this_00->_padding_ + 0x38) < iVar11) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
          &pUVar13->_padding_)) goto LAB_14a8049f8;
      pTVar2 = &this->Buttons;
      local_268 = this_00;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_268) &&
          ((FScriptContainerElement *)&local_268 < pFVar3 + (longlong)(this->Buttons).ArrayMax * 8))
         && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = (this->Buttons).ArrayNum;
      piVar1 = &(this->Buttons).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->Buttons).ArrayNum = iVar11 + 1;
      *(UUserWidget **)((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_268;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_268 != (UUserWidget *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)local_268);
      }
      pUVar4 = (this->ButtonGroup).field0_0x0.DebugPtr;
      TVar14.Class.field0_0x0 =
           (TObjectPtr<UClass>)(**(code **)(pUVar4->_padding_ + 0x2b0))(pUVar4,local_188);
      bVar9 = UObjectBaseUtility::IsA<TSubclassOf<UWidget>_>((UObjectBaseUtility *)this_00,TVar14);
      if (bVar9) {
        (**(code **)(pUVar4->_padding_ + 0x2b8))(pUVar4,this_00);
      }
      UWidget::TakeWidget((UWidget *)this_00,&local_1d8);
      if (((this->MyContainer).Object == (SHorizontalBox *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pSVar5 = (this->MyContainer).Object;
      pFVar15 = ::operator_new(0x58);
      pFVar16 = (FSlot *)0x0;
      if (pFVar15 != (FSlot *)0x0) {
        *(undefined8 *)pFVar15 = 0;
        *(undefined8 *)&pFVar15->field_0x8 = 0;
        *(undefined8 *)&pFVar15->field_0x10 = 0;
        *(undefined8 *)&pFVar15->field_0x18 = 0;
        *(undefined8 *)&pFVar15->field_0x20 = 0;
        *(undefined8 *)&pFVar15->field_0x28 = 0;
        *(undefined8 *)&pFVar15->field_0x30 = 0;
        *(undefined8 *)&pFVar15->field_0x38 = 0;
        *(undefined8 *)&pFVar15->field_0x40 = 0;
        *(undefined8 *)&pFVar15->field_0x48 = 0;
        *(undefined8 *)&pFVar15->field_0x50 = 0;
        pFVar16 = SHorizontalBox::FSlot::FSlot(pFVar15);
      }
      local_200 = pFVar16;
      SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
                ((FSlotArguments *)(local_150 + 8),(FSlot *)&local_200);
      local_238._0_4_ = (this->ButtonPadding).Left;
      local_238._4_4_ = (this->ButtonPadding).Top;
      lStack_230._0_4_ = (this->ButtonPadding).Right;
      lStack_230._4_4_ = (this->ButtonPadding).Bottom;
      local_58 = -1;
      local_150._0_8_ = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
      local_60 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar5->field_0x218;
      local_228 = 1;
      local_120 = 1;
      local_210 = 0;
      local_220 = (undefined1  [8])0x0;
      FStack_218.Data = (FScriptContainerElement *)0x0;
      local_130 = local_238;
      lStack_128 = lStack_230;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                (local_118,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_220);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_220,
                 (FWriteAccessScope *)&local_1b8);
      if (((int)local_210 != 0) && (FStack_218.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_218.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_218,0,0,0x10);
        local_210 = local_210 & 0xffffffff00000000;
      }
      if (local_1b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b8.Accessor,&local_1b8);
      }
      if (FStack_218.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_218.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_220);
      FStack_240.ReferenceController = local_1d8.SharedReferenceCount.ReferenceController;
      if (local_1d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_140 = local_1d8.Object;
      local_248 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_138,&FStack_240);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_240.ReferenceController);
      SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
      ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>
                ((FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_150);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1d8.SharedReferenceCount.ReferenceController);
    }
    uVar18 = uVar18 - 1;
  } while (uVar18 != 0);
  pUVar6 = (this->LinkedCarousel).field0_0x0.DebugPtr;
  if ((pUVar6->MyCommonWidgetCarousel).Object == (SWidgetCarousel<UPanelSlot_*> *)0x0) {
    iVar11 = pUVar6->ActiveWidgetIndex;
  }
  else {
    iVar11 = ((pUVar6->MyCommonWidgetCarousel).Object)->WidgetIndex;
  }
  UCommonButtonGroupBase::SelectButtonAtIndex((this->ButtonGroup).field0_0x0.DebugPtr,iVar11,true);
  pUVar4 = (this->ButtonGroup).field0_0x0.DebugPtr;
  pFVar15 = (FSlot *)strstr("&UCommonWidgetCarouselNavBar::HandleButtonClicked","::");
  pFVar16 = (FSlot *)0x0;
  while (pFVar8 = pFVar15, pFVar8 != (FSlot *)0x0) {
    pFVar15 = (FSlot *)strstr(&pFVar8->field_0x1,"::");
    pFVar16 = pFVar8;
  }
  if (((pFVar16 == (FSlot *)0x0) || (pFVar16->field_0x2 == '0')) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function"), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ::FName::FName(&local_1f8,&pFVar16->field_0x2);
  local_260.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_258.ObjectIndex = 0;
  local_258.ObjectSerialNumber = 0;
  local_250.ComparisonIndex.Value = 0;
  local_250.Number = 0;
  local_res20 = local_1f8;
  local_1f0 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_258,(FObjectPtr)&local_1f0);
  local_250 = local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_260,&local_180);
  local_res18 = 0;
  if ((local_250 == (FName)0x0) ||
     (this_01 = FWeakObjectPtr::Get(&local_258), this_01 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_180);
  }
  else {
    pUVar17 = UObject::FindFunction(this_01,local_250);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_180);
    if (pUVar17 != (UFunction *)0x0) goto LAB_14a804bba;
  }
  local_1e8[0] = &local_res20;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UCommonButtonBase_*,int>::
  __Internal_BindDynamic<UCommonWidgetCarouselNavBar>'::__l2::<lambda_1>::operator()(local_1e8);
LAB_14a804bba:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_260,&local_168);
  local_1c8.Object = local_258;
  local_1c8.FunctionName = local_250;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_168);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar4->OnButtonBaseClicked,
             (FWriteAccessScope *)&local_1a0);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pUVar4->OnButtonBaseClicked).field_0x8,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar4->OnButtonBaseClicked,
             &local_1c8);
  if (local_1a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a0.Accessor,&local_1a0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_260.AccessDetector);
  return;
}

// RebuildWidget @ 14a80c810

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UCommonWidgetCarouselNavBar::RebuildWidget
          (UCommonWidgetCarouselNavBar *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TSharedPtr<SHorizontalBox,1> *pTVar1;
  int iVar2;
  SHorizontalBox *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  UObject *pUVar7;
  UCommonButtonGroupBase *this_00;
  UCommonButtonBase *this_01;
  FArguments *pFVar8;
  TSharedRef<SHorizontalBox,1> *pTVar9;
  TSharedRef<SWidget,1> *pTVar10;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  SHorizontalBox *local_268;
  FSharedReferencer<1> local_260;
  TSharedRef<SHorizontalBox,1> local_258;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_248;
  FArguments local_230;
  
  pUVar7 = GetTransientPackageAsObject();
  this_00 = NewObject<UCommonButtonGroupBase>(pUVar7);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_00 != (UCommonButtonGroupBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->ButtonGroup).field0_0x0.DebugPtr = this_00;
  if (((this_00->bSelectionRequired != true) &&
      (iVar2 = (this_00->Buttons).ArrayNum, this_00->bSelectionRequired = true, 0 < iVar2)) &&
     (this_00->SelectedButtonIndex < 0)) {
    this_01 = UCommonButtonGroupBase::GetButtonBaseAtIndex(this_00,0);
    if ((this_01 != (UCommonButtonBase *)0x0) && (this_01->bSelected == 0)) {
      bVar6 = UWidget::GetIsEnabled((UWidget *)this_01);
      if (bVar6) {
        this_00->SelectedButtonIndex = 0;
        UCommonButtonBase::SetSelectedInternal(this_01,true,true,true);
      }
    }
  }
  pFVar8 = SHorizontalBox::FArguments::FArguments(&local_230);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_248,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonWidgetCarouselNavBar.cpp"
             ,0x51,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pTVar9 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_248,&local_258,pFVar8);
  local_260.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
  local_268 = pTVar9->Object;
  if (local_260.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_260.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_260.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->MyContainer;
  if (pTVar1 != (TSharedPtr<SHorizontalBox,1> *)&local_268) {
    pTVar1->Object = local_268;
    local_268 = (SHorizontalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyContainer).SharedReferenceCount,&local_260);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_260.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_258.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_248._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_230._Slots.AllocatorInstance.Data,local_230._Slots.ArrayNum);
  if ((FSlotArguments *)local_230._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_230._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_230);
  if (pTVar1->Object == (SHorizontalBox *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  pSVar3 = pTVar1->Object;
  pTVar4 = (this->MyContainer).SharedReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar3 == (SHorizontalBox *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar3;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 14a812220

void __thiscall
UCommonWidgetCarouselNavBar::ReleaseSlateResources(UCommonWidgetCarouselNavBar *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UVisual::ReleaseSlateResources((UVisual *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyContainer != (TSharedPtr<SHorizontalBox,1> *)&local_18) {
    (this->MyContainer).Object = (SHorizontalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyContainer).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetLinkedCarousel @ 14a8199d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UCommonWidgetCarouselNavBar::SetLinkedCarousel
          (UCommonWidgetCarouselNavBar *this,UCommonWidgetCarousel *param_1)

{
  UCommonWidgetCarousel *pUVar1;
  code *pcVar2;
  bool bVar3;
  char *pcVar4;
  UObject *this_00;
  UFunction *pUVar5;
  char *pcVar6;
  <lambda_1> local_res8 [8];
  FName local_res10;
  FName local_res18;
  UCommonWidgetCarouselNavBar *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FWeakObjectPtr local_b0;
  FName local_a8;
  FName *local_a0;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_98;
  FDestructionSentinel local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  
  pUVar1 = (this->LinkedCarousel).field0_0x0.DebugPtr;
  if (pUVar1 != (UCommonWidgetCarousel *)0x0) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &pUVar1->OnCurrentPageIndexChanged,(UObject *)this);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (param_1 == (UCommonWidgetCarousel *)0x0)) {
    (this->LinkedCarousel).field0_0x0.DebugPtr = param_1;
    if (param_1 == (UCommonWidgetCarousel *)0x0) goto LAB_14a819bfb;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->LinkedCarousel).field0_0x0.DebugPtr = param_1;
  }
  pcVar4 = strstr("&UCommonWidgetCarouselNavBar::HandlePageChanged","::");
  if (pcVar4 == (char *)0x0) {
LAB_14a819a9b:
    pcVar6 = &DAT_00000002;
LAB_14a819aa0:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    do {
      pcVar6 = pcVar4;
      pcVar4 = strstr(pcVar6 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar6 == (char *)0x0) goto LAB_14a819a9b;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14a819aa0;
  }
  ::FName::FName(&local_res18,pcVar6);
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.ObjectIndex = 0;
  local_b0.ObjectSerialNumber = 0;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  local_res10 = local_res18;
  local_res20 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UCommonWidgetCarouselNavBar *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_res20);
  local_a8 = local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_70);
  if ((local_a8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_b0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
LAB_14a819b78:
    local_a0 = &local_res10;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UCommonWidgetCarousel_*,int>::
    __Internal_BindDynamic<UCommonWidgetCarouselNavBar>'::__l2::<lambda_1>::operator()(&local_a0);
  }
  else {
    pUVar5 = UObject::FindFunction(this_00,local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
    if (pUVar5 == (UFunction *)0x0) goto LAB_14a819b78;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_58);
  local_98.Object = local_b0;
  local_98.FunctionName = local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &param_1->OnCurrentPageIndexChanged,(FWriteAccessScope *)&local_88);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(param_1->OnCurrentPageIndexChanged).field_0x8,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &param_1->OnCurrentPageIndexChanged,&local_98);
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
LAB_14a819bfb:
  RebuildButtons(this);
  return;
}

// StaticRegisterNativesUCommonWidgetCarouselNavBar @ 14a81eaf0

void __cdecl UCommonWidgetCarouselNavBar::StaticRegisterNativesUCommonWidgetCarouselNavBar(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execHandleButtonClicked @ 14a82f850

void __cdecl
UCommonWidgetCarouselNavBar::execHandleButtonClicked(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UCommonWidgetCarousel *this;
  SWidgetCarousel<UPanelSlot_*> *pSVar2;
  int iVar3;
  int iVar4;
  int local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
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
  iVar3 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(UCommonWidgetCarousel **)&param_1[0xb].field_0x20;
  if (this != (UCommonWidgetCarousel *)0x0) {
    pSVar2 = (this->MyCommonWidgetCarousel).Object;
    if (pSVar2 == (SWidgetCarousel<UPanelSlot_*> *)0x0) {
      iVar4 = this->ActiveWidgetIndex;
    }
    else {
      iVar4 = pSVar2->WidgetIndex;
    }
    if (iVar4 != local_res8[0]) {
      UCommonWidgetCarousel::EndAutoScrolling(this);
      (**(code **)(**(longlong **)&param_1[0xb].field_0x20 + 0x330))
                (*(longlong **)&param_1[0xb].field_0x20,iVar3);
    }
  }
  return;
}

// execHandlePageChanged @ 14a82fb20

void __cdecl
UCommonWidgetCarouselNavBar::execHandlePageChanged(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UCommonButtonGroupBase *this;
  int local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
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
  this = *(UCommonButtonGroupBase **)(param_1 + 0xc);
  if ((this != (UCommonButtonGroupBase *)0x0) && (this->SelectedButtonIndex != local_res8[0])) {
    UCommonButtonGroupBase::SelectButtonAtIndex(this,local_res8[0],true);
  }
  return;
}

// execSetLinkedCarousel @ 14a834440

void __cdecl
UCommonWidgetCarouselNavBar::execSetLinkedCarousel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UCommonWidgetCarousel *local_res10;
  
  local_res10 = (UCommonWidgetCarousel *)0x0;
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
  SetLinkedCarousel((UCommonWidgetCarouselNavBar *)param_1,local_res10);
  return;
}

