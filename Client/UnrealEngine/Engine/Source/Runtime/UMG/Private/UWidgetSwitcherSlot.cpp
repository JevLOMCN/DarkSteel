// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 22

// SetPadding_WrapperImpl @ 146a4c260

void __cdecl UWidgetSwitcherSlot::SetPadding_WrapperImpl(void *param_1,void *param_2)

{
  FMargin local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  SetPadding(param_1,&local_18);
  return;
}

// SetHorizontalAlignment_WrapperImpl @ 146a4c290

void __cdecl UWidgetSwitcherSlot::SetHorizontalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  FSharedReferencer<1> *pFVar1;
  byte bVar2;
  FSlotBase *pFVar3;
  FSlotBase *this;
  
  bVar2 = *(byte *)param_2;
  pFVar3 = *(FSlotBase **)((longlong)param_1 + 0x38);
  *(byte *)((longlong)param_1 + 0x50) = bVar2;
  if (pFVar3 != (FSlotBase *)0x0) {
    pFVar1 = &pFVar3[1].Widget.SharedReferenceCount;
    if (*(uint *)&pFVar3[1].Widget.SharedReferenceCount.ReferenceController != (uint)bVar2) {
      *(uint *)&pFVar1->ReferenceController = (uint)bVar2;
      this = (FSlotBase *)0x0;
      if (pFVar1 != (FSharedReferencer<1> *)0x0) {
        this = pFVar3;
      }
      FSlotBase::Invalidate(this,Layout);
      return;
    }
  }
  return;
}

// SetVerticalAlignment_WrapperImpl @ 146a4c2d0

void __cdecl UWidgetSwitcherSlot::SetVerticalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  FSlotBase *this;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0x51) = bVar1;
  this = *(FSlotBase **)((longlong)param_1 + 0x38);
  if ((this != (FSlotBase *)0x0) &&
     (*(uint *)((longlong)&this[1].Widget.SharedReferenceCount.ReferenceController + 4) !=
      (uint)bVar1)) {
    *(uint *)((longlong)&this[1].Widget.SharedReferenceCount.ReferenceController + 4) = (uint)bVar1;
    FSlotBase::Invalidate(this,Layout);
    return;
  }
  return;
}

// StaticClass @ 146a4c310

UClass * __cdecl UWidgetSwitcherSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetSwitcherSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetSwitcherSlot",
               &Z_Registration_Info_UClass_UWidgetSwitcherSlot.InnerSingleton,
               StaticRegisterNativesUWidgetSwitcherSlot,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWidgetSwitcherSlot>,
               InternalVTableHelperCtorCaller<UWidgetSwitcherSlot>,local_res8,
               UPanelSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetSwitcherSlot.InnerSingleton;
}

// UWidgetSwitcherSlot @ 146a57c20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidgetSwitcherSlot * __thiscall
UWidgetSwitcherSlot::UWidgetSwitcherSlot(UWidgetSwitcherSlot *this,FVTableHelper *param_1)

{
  UPanelSlot::UPanelSlot((UPanelSlot *)this,param_1);
  this->_padding_ = (longlong)&___7UWidgetSwitcherSlot__6B_;
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  return this;
}

// UWidgetSwitcherSlot @ 146a57c60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidgetSwitcherSlot * __thiscall
UWidgetSwitcherSlot::UWidgetSwitcherSlot(UWidgetSwitcherSlot *this,FObjectInitializer *param_1)

{
  UPanelSlot::UPanelSlot((UPanelSlot *)this,param_1);
  this->_padding_ = (longlong)&___7UWidgetSwitcherSlot__6B_;
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  this->HorizontalAlignment = '\0';
  this->VerticalAlignment = '\0';
  this->Slot = (FBasicLayoutWidgetSlot *)0x0;
  return this;
}

// ~UWidgetSwitcherSlot @ 146a58d60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidgetSwitcherSlot::~UWidgetSwitcherSlot(UWidgetSwitcherSlot *this)

{
  this->_padding_ = (longlong)&___7UWidgetSwitcherSlot__6B_;
  UPanelSlot::~UPanelSlot((UPanelSlot *)this);
  return;
}

// BuildSlot @ 146a5f5d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWidgetSwitcherSlot::BuildSlot(UWidgetSwitcherSlot *this,TSharedRef<SWidgetSwitcher,1> *param_1)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  FMRSWRecursiveAccessDetector *pFVar4;
  FScopedWidgetSlotArguments *pFVar5;
  FDestructionSentinel *pFVar6;
  FScopedWidgetSlotArguments *pFVar7;
  FScopedWidgetSlotArguments *pFVar8;
  undefined1 auStack_178 [32];
  SWidget *local_158;
  FSharedReferencer<1> local_150;
  longlong local_148;
  longlong lStack_140;
  undefined1 local_138;
  undefined1 local_130 [8];
  ForAnyElementType FStack_128;
  ulonglong local_120;
  FDestructionSentinel local_118;
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  TSharedRef<SWidget,1> local_e8;
  FScopedWidgetSlotArguments local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  pFVar8 = (FScopedWidgetSlotArguments *)0x0;
  pFVar5 = SWidgetSwitcher::AddSlot(param_1->Object,&local_d8,-1);
  local_148._0_4_ = (this->Padding).Left;
  local_148._4_4_ = (this->Padding).Top;
  lStack_140._0_4_ = (this->Padding).Right;
  lStack_140._4_4_ = (this->Padding).Bottom;
  this->Slot = (FBasicLayoutWidgetSlot *)pFVar5->_padding_;
  local_138 = 1;
  bVar2 = false;
  local_120 = 0;
  local_130 = (undefined1  [8])0x0;
  FStack_128.Data = (FScriptContainerElement *)0x0;
  pFVar5->_padding_ = local_148;
  pFVar5->_padding_ = lStack_140;
  *(undefined1 *)&pFVar5->_padding_ = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar5->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_130);
  pFVar7 = pFVar8;
  if (&pFVar5->_padding_ != (longlong *)0x0) {
    pFVar7 = pFVar5;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_130,
             (FWriteAccessScope *)&local_118);
  if (((int)local_120 != 0) && (FStack_128.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_128.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_128,0,0,0x10);
    local_120 = local_120 & 0xffffffff00000000;
  }
  if (local_118.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
  }
  if (FStack_128.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_128.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_130);
  plVar1 = &pFVar7->_padding_;
  if ((longlong *)local_f8 != plVar1) {
    *(uint *)plVar1 = (uint)(this->HorizontalAlignment).Value;
    *(undefined1 *)((longlong)&pFVar7->_padding_ + 4) = 1;
  }
  if (plVar1 == (longlong *)0x0) {
    pFVar7 = pFVar8;
  }
  if ((longlong *)local_f0 != &pFVar7->_padding_) {
    *(uint *)&pFVar7->_padding_ = (uint)(this->VerticalAlignment).Value;
    *(undefined1 *)((longlong)&pFVar7->_padding_ + 4) = 1;
  }
  local_158 = SNullWidget::NullWidget.Object;
  if (pFVar7 != (FScopedWidgetSlotArguments *)0xffffffffffffffb8) {
    pFVar8 = pFVar7;
  }
  if ((UWidget *)this->_padding_ == (UWidget *)0x0) {
    local_118._0_8_ = SNullWidget::NullWidget.Object;
    local_118.Accessor =
         (FMRSWRecursiveAccessDetector *)
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
    pFVar6 = &local_118;
    bVar3 = true;
  }
  else {
    pFVar6 = (FDestructionSentinel *)UWidget::TakeWidget((UWidget *)this->_padding_,&local_e8);
    bVar3 = false;
    bVar2 = true;
    local_158 = *(SWidget **)&pFVar6->AccessType;
  }
  pFVar4 = local_118.Accessor;
  local_150.ReferenceController = ((FSharedReferencer<1> *)&pFVar6->Accessor)->ReferenceController;
  if (local_150.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_150.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_150.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)&pFVar8->_padding_ != &local_158) {
    pFVar8->_padding_ = (longlong)local_158;
    local_158 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar8->_padding_,&local_150);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_150.ReferenceController);
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.SharedReferenceCount.ReferenceController);
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar4);
  }
  TPanelChildren<FBasicLayoutWidgetSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetHorizontalAlignment @ 146a76a00

EHorizontalAlignment __thiscall
UWidgetSwitcherSlot::GetHorizontalAlignment(UWidgetSwitcherSlot *this)

{
  return (EHorizontalAlignment)(this->HorizontalAlignment).Value;
}

// GetPadding @ 146a77a60

FMargin * __thiscall
UWidgetSwitcherSlot::GetPadding(UWidgetSwitcherSlot *this,FMargin *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->Padding).Top;
  fVar2 = (this->Padding).Right;
  fVar3 = (this->Padding).Bottom;
  __return_storage_ptr__->Left = (this->Padding).Left;
  __return_storage_ptr__->Top = fVar1;
  __return_storage_ptr__->Right = fVar2;
  __return_storage_ptr__->Bottom = fVar3;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146a785d0

UClass * __cdecl UWidgetSwitcherSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetSwitcherSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetSwitcherSlot",
               &Z_Registration_Info_UClass_UWidgetSwitcherSlot.InnerSingleton,
               StaticRegisterNativesUWidgetSwitcherSlot,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWidgetSwitcherSlot>,
               InternalVTableHelperCtorCaller<UWidgetSwitcherSlot>,local_res8,
               UPanelSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetSwitcherSlot.InnerSingleton;
}

// GetVerticalAlignment @ 146a79770

EVerticalAlignment __thiscall UWidgetSwitcherSlot::GetVerticalAlignment(UWidgetSwitcherSlot *this)

{
  return (EVerticalAlignment)(this->VerticalAlignment).Value;
}

// ReleaseSlateResources @ 146a8eb80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidgetSwitcherSlot::ReleaseSlateResources(UWidgetSwitcherSlot *this,bool param_1)

{
  UPanelSlot::ReleaseSlateResources((UPanelSlot *)this,param_1);
  this->Slot = (FBasicLayoutWidgetSlot *)0x0;
  return;
}

// SetContent @ 146a92d40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidgetSwitcherSlot::SetContent(UWidgetSwitcherSlot *this,UWidget *param_1)

{
  FBasicLayoutWidgetSlot *this_00;
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  bool bVar5;
  TSharedRef<SWidget,1> *pTVar6;
  TSharedRef<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  bVar4 = false;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  this->_padding_ = (longlong)param_1;
  this_00 = this->Slot;
  if (this_00 != (FBasicLayoutWidgetSlot *)0x0) {
    if (param_1 == (UWidget *)0x0) {
      local_28.Object = SNullWidget::NullWidget.Object;
      local_28.SharedReferenceCount.ReferenceController =
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
      bVar5 = false;
      pTVar6 = &local_28;
      bVar4 = true;
    }
    else {
      pTVar6 = UWidget::TakeWidget(param_1,&local_18);
      bVar5 = true;
    }
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
    pSVar2 = ((TSharedRef<SWidget,1> *)&this_00->field_0x10)->Object;
    pTVar3 = ((FSharedReferencer<1> *)&this_00->field_0x18)->ReferenceController;
    ((TSharedRef<SWidget,1> *)&this_00->field_0x10)->Object = pTVar6->Object;
    ((FSharedReferencer<1> *)&this_00->field_0x18)->ReferenceController = pTVar1;
    pTVar6->Object = pSVar2;
    (pTVar6->SharedReferenceCount).ReferenceController = pTVar3;
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
    if (bVar4) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
    }
    if (bVar5) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// SetHorizontalAlignment @ 146a93a60

void __thiscall
UWidgetSwitcherSlot::SetHorizontalAlignment(UWidgetSwitcherSlot *this,EHorizontalAlignment param_1)

{
  FBasicLayoutWidgetSlot *pFVar1;
  FBasicLayoutWidgetSlot *this_00;
  
  pFVar1 = this->Slot;
  (this->HorizontalAlignment).Value = (uchar)param_1;
  if ((pFVar1 != (FBasicLayoutWidgetSlot *)0x0) &&
     (*(EHorizontalAlignment *)&pFVar1->field_0x38 != param_1)) {
    *(EHorizontalAlignment *)&pFVar1->field_0x38 = param_1;
    this_00 = (FBasicLayoutWidgetSlot *)0x0;
    if (&pFVar1->field_0x38 != (undefined1 *)0x0) {
      this_00 = pFVar1;
    }
    FSlotBase::Invalidate((FSlotBase *)this_00,Layout);
    return;
  }
  return;
}

// SetPadding @ 146a94450

void __thiscall UWidgetSwitcherSlot::SetPadding(UWidgetSwitcherSlot *this,FMargin *param_1)

{
  FBasicLayoutWidgetSlot *pFVar1;
  FBasicLayoutWidgetSlot *pFVar2;
  FDestructionSentinel local_58;
  undefined1 local_40 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_40._0_4_ = param_1->Left;
  local_40._4_4_ = param_1->Top;
  local_40._8_4_ = param_1->Right;
  local_40._12_4_ = param_1->Bottom;
  pFVar1 = this->Slot;
  (this->Padding).Left = local_40._0_4_;
  (this->Padding).Top = local_40._4_4_;
  (this->Padding).Right = local_40._8_4_;
  (this->Padding).Bottom = local_40._12_4_;
  if (pFVar1 != (FBasicLayoutWidgetSlot *)0x0) {
    local_40[0x10] = true;
    local_18 = 0;
    pFVar2 = (FBasicLayoutWidgetSlot *)0x0;
    if (&pFVar1->field_0x28 != (undefined1 *)0x0) {
      pFVar2 = pFVar1;
    }
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)&pFVar1->field_0x28,(ISlateAttributeContainer *)&pFVar2->field_0x20,
             (TAttribute<FMargin> *)local_40,None);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_58);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// SetVerticalAlignment @ 146a95100

void __thiscall
UWidgetSwitcherSlot::SetVerticalAlignment(UWidgetSwitcherSlot *this,EVerticalAlignment param_1)

{
  FBasicLayoutWidgetSlot *this_00;
  
  (this->VerticalAlignment).Value = (uchar)param_1;
  this_00 = this->Slot;
  if ((this_00 != (FBasicLayoutWidgetSlot *)0x0) &&
     (*(EVerticalAlignment *)&this_00->field_0x3c != param_1)) {
    *(EVerticalAlignment *)&this_00->field_0x3c = param_1;
    FSlotBase::Invalidate((FSlotBase *)this_00,Layout);
    return;
  }
  return;
}

// StaticRegisterNativesUWidgetSwitcherSlot @ 146a969d0

void __cdecl UWidgetSwitcherSlot::StaticRegisterNativesUWidgetSwitcherSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UWidgetSwitcherSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a976e0

void __thiscall UWidgetSwitcherSlot::SynchronizeProperties(UWidgetSwitcherSlot *this)

{
  undefined1 *puVar1;
  FBasicLayoutWidgetSlot *pFVar2;
  uint uVar3;
  FBasicLayoutWidgetSlot *this_00;
  FMargin local_18;
  
  local_18.Left = (this->Padding).Left;
  local_18.Top = (this->Padding).Top;
  local_18.Right = (this->Padding).Right;
  local_18.Bottom = (this->Padding).Bottom;
  SetPadding(this,&local_18);
  pFVar2 = this->Slot;
  if (pFVar2 != (FBasicLayoutWidgetSlot *)0x0) {
    puVar1 = &pFVar2->field_0x38;
    uVar3 = (uint)(this->HorizontalAlignment).Value;
    if (*(uint *)puVar1 != uVar3) {
      *(uint *)puVar1 = uVar3;
      this_00 = (FBasicLayoutWidgetSlot *)0x0;
      if (puVar1 != (undefined1 *)0x0) {
        this_00 = pFVar2;
      }
      FSlotBase::Invalidate((FSlotBase *)this_00,Layout);
    }
  }
  pFVar2 = this->Slot;
  if ((pFVar2 != (FBasicLayoutWidgetSlot *)0x0) &&
     (uVar3 = (uint)(this->VerticalAlignment).Value, *(uint *)&pFVar2->field_0x3c != uVar3)) {
    *(uint *)&pFVar2->field_0x3c = uVar3;
    FSlotBase::Invalidate((FSlotBase *)pFVar2,Layout);
    return;
  }
  return;
}

// execSetHorizontalAlignment @ 146aa8850

void __cdecl
UWidgetSwitcherSlot::execSetHorizontalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

{
  FSharedReferencer<1> *pFVar1;
  FProperty *pFVar2;
  FSlotBase *pFVar3;
  FSlotBase *this;
  byte local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = *(FSlotBase **)&param_1[1].field_0x10;
  *(byte *)(param_1 + 2) = local_res8[0];
  if (pFVar3 != (FSlotBase *)0x0) {
    pFVar1 = &pFVar3[1].Widget.SharedReferenceCount;
    if (*(uint *)&pFVar3[1].Widget.SharedReferenceCount.ReferenceController != (uint)local_res8[0])
    {
      *(uint *)&pFVar1->ReferenceController = (uint)local_res8[0];
      this = (FSlotBase *)0x0;
      if (pFVar1 != (FSharedReferencer<1> *)0x0) {
        this = pFVar3;
      }
      FSlotBase::Invalidate(this,Layout);
    }
  }
  return;
}

// execSetPadding @ 146aa9870

void __cdecl UWidgetSwitcherSlot::execSetPadding(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMargin local_28;
  FMargin local_18;
  
  local_28.Left = 0.0;
  local_28.Top = 0.0;
  local_28.Right = 0.0;
  local_28.Bottom = 0.0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18.Left = local_28.Left;
  local_18.Top = local_28.Top;
  local_18.Right = local_28.Right;
  local_18.Bottom = local_28.Bottom;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetPadding((UWidgetSwitcherSlot *)param_1,&local_18);
  return;
}

// execSetVerticalAlignment @ 146aaa4c0

void __cdecl
UWidgetSwitcherSlot::execSetVerticalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlotBase *this;
  byte local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(FSlotBase **)&param_1[1].field_0x10;
  param_1[2].field_0x1 = local_res8[0];
  if ((this != (FSlotBase *)0x0) &&
     (*(uint *)((longlong)&this[1].Widget.SharedReferenceCount.ReferenceController + 4) !=
      (uint)local_res8[0])) {
    *(uint *)((longlong)&this[1].Widget.SharedReferenceCount.ReferenceController + 4) =
         (uint)local_res8[0];
    FSlotBase::Invalidate(this,Layout);
  }
  return;
}

