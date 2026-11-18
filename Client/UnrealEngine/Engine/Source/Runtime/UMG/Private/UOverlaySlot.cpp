// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 25

// GetPadding_WrapperImpl @ 146964040

void __cdecl UOverlaySlot::GetPadding_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x48);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x40);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetPadding_WrapperImpl @ 146964060

void __cdecl UOverlaySlot::SetPadding_WrapperImpl(void *param_1,void *param_2)

{
  FMargin local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  SetPadding(param_1,&local_18);
  return;
}

// GetHorizontalAlignment_WrapperImpl @ 1469640c0

void __cdecl UOverlaySlot::GetHorizontalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x50);
  return;
}

// SetHorizontalAlignment_WrapperImpl @ 1469640e0

void __cdecl UOverlaySlot::SetHorizontalAlignment_WrapperImpl(void *param_1,void *param_2)

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

// GetVerticalAlignment_WrapperImpl @ 1469641f0

void __cdecl UOverlaySlot::GetVerticalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x51);
  return;
}

// SetVerticalAlignment_WrapperImpl @ 146964200

void __cdecl UOverlaySlot::SetVerticalAlignment_WrapperImpl(void *param_1,void *param_2)

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

// StaticClass @ 146964290

UClass * __cdecl UOverlaySlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOverlaySlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"OverlaySlot",&Z_Registration_Info_UClass_UOverlaySlot.InnerSingleton
               ,StaticRegisterNativesUOverlaySlot,0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UOverlaySlot>,InternalVTableHelperCtorCaller<UOverlaySlot>,
               local_res8,UPanelSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOverlaySlot.InnerSingleton;
}

// UOverlaySlot @ 14698c480

UOverlaySlot * __thiscall UOverlaySlot::UOverlaySlot(UOverlaySlot *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UOverlaySlot__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  return this;
}

// UOverlaySlot @ 14698c4c0

UOverlaySlot * __thiscall UOverlaySlot::UOverlaySlot(UOverlaySlot *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  this->_padding_ = (longlong)&___7UOverlaySlot__6B_;
  this->HorizontalAlignment = '\x01';
  this->VerticalAlignment = '\x01';
  this->Slot = (FOverlaySlot *)0x0;
  return this;
}

// ~UOverlaySlot @ 146993b70

void __thiscall UOverlaySlot::~UOverlaySlot(UOverlaySlot *this)

{
  this->_padding_ = (longlong)&___7UVisual__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BuildSlot @ 1469a40e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UOverlaySlot::BuildSlot(UOverlaySlot *this,TSharedRef<SOverlay,1> *param_1)

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
  pFVar5 = SOverlay::AddSlot(param_1->Object,&local_d8,-1);
  local_148._0_4_ = (this->Padding).Left;
  local_148._4_4_ = (this->Padding).Top;
  lStack_140._0_4_ = (this->Padding).Right;
  lStack_140._4_4_ = (this->Padding).Bottom;
  this->Slot = (FOverlaySlot *)pFVar5->_padding_;
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
  TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetHorizontalAlignment @ 1469d1290

EHorizontalAlignment __thiscall UOverlaySlot::GetHorizontalAlignment(UOverlaySlot *this)

{
  return (EHorizontalAlignment)(this->HorizontalAlignment).Value;
}

// GetPadding @ 1469d3600

FMargin * __thiscall UOverlaySlot::GetPadding(UOverlaySlot *this,FMargin *__return_storage_ptr__)

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

// GetPrivateStaticClass @ 1469d4db0

UClass * __cdecl UOverlaySlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOverlaySlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"OverlaySlot",&Z_Registration_Info_UClass_UOverlaySlot.InnerSingleton
               ,StaticRegisterNativesUOverlaySlot,0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UOverlaySlot>,InternalVTableHelperCtorCaller<UOverlaySlot>,
               local_res8,UPanelSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOverlaySlot.InnerSingleton;
}

// GetVerticalAlignment @ 1469d9c50

EVerticalAlignment __thiscall UOverlaySlot::GetVerticalAlignment(UOverlaySlot *this)

{
  return (EVerticalAlignment)(this->VerticalAlignment).Value;
}

// ReleaseSlateResources @ 146a0ab80

void __thiscall UOverlaySlot::ReleaseSlateResources(UOverlaySlot *this,bool param_1)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar3 = Z_Construct_UClass_UUserWidget_NoRegister();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) {
      (**(code **)(*(longlong *)this->_padding_ + 0x2b0))((longlong *)this->_padding_,param_1);
    }
    this->Slot = (FOverlaySlot *)0x0;
    return;
  }
  this->Slot = (FOverlaySlot *)0x0;
  return;
}

// ReplaceContent @ 146a0cd50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UOverlaySlot::ReplaceContent(UOverlaySlot *this,UWidget *param_1)

{
  longlong *plVar1;
  FOverlaySlot *this_00;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<SWidget,1> *pTVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  TSharedRef<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  iVar6 = 0;
  if ((UWidget *)this->_padding_ == (UWidget *)0x0) {
    bVar8 = param_1 == (UWidget *)0x0;
  }
  else {
    bVar8 = (UWidget *)this->_padding_ == param_1;
  }
  if (bVar8) {
    return;
  }
  if (param_1 != (UWidget *)0x0) {
    (**(code **)(param_1->_padding_ + 0x2d0))(param_1);
  }
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 != (longlong *)0x0) {
    plVar1[6] = 0;
    (**(code **)(*plVar1 + 0x2d0))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (param_1 == (UWidget *)0x0)) {
    this->_padding_ = (longlong)param_1;
    if (param_1 == (UWidget *)0x0) goto LAB_146a0cde4;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)param_1);
    this->_padding_ = (longlong)param_1;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  (param_1->Slot).field0_0x0.DebugPtr = (UPanelSlot *)this;
LAB_146a0cde4:
  this_00 = this->Slot;
  if (this_00 != (FOverlaySlot *)0x0) {
    if ((UWidget *)this->_padding_ == (UWidget *)0x0) {
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
      pTVar5 = &local_28;
      iVar7 = iVar6;
      iVar6 = 1;
    }
    else {
      pTVar5 = UWidget::TakeWidget((UWidget *)this->_padding_,&local_18);
      iVar7 = 2;
    }
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    pTVar2 = (pTVar5->SharedReferenceCount).ReferenceController;
    pSVar3 = ((TSharedRef<SWidget,1> *)&this_00->_padding_)->Object;
    pTVar4 = ((FSharedReferencer<1> *)&this_00->_padding_)->ReferenceController;
    ((TSharedRef<SWidget,1> *)&this_00->_padding_)->Object = pTVar5->Object;
    ((FSharedReferencer<1> *)&this_00->_padding_)->ReferenceController = pTVar2;
    pTVar5->Object = pSVar3;
    (pTVar5->SharedReferenceCount).ReferenceController = pTVar4;
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
    if (iVar7 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    if (iVar6 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// SetHorizontalAlignment @ 146a15140

void __thiscall
UOverlaySlot::SetHorizontalAlignment(UOverlaySlot *this,EHorizontalAlignment param_1)

{
  FOverlaySlot *pFVar1;
  FOverlaySlot *this_00;
  
  pFVar1 = this->Slot;
  (this->HorizontalAlignment).Value = (uchar)param_1;
  if ((pFVar1 != (FOverlaySlot *)0x0) && ((EHorizontalAlignment)pFVar1->_padding_ != param_1)) {
    *(EHorizontalAlignment *)&pFVar1->_padding_ = param_1;
    this_00 = (FOverlaySlot *)0x0;
    if (&pFVar1->_padding_ != (longlong *)0x0) {
      this_00 = pFVar1;
    }
    FSlotBase::Invalidate((FSlotBase *)this_00,Layout);
    return;
  }
  return;
}

// SetPadding @ 146a188b0

void __thiscall UOverlaySlot::SetPadding(UOverlaySlot *this,FMargin *param_1)

{
  FOverlaySlot *pFVar1;
  FOverlaySlot *pFVar2;
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
  if (pFVar1 != (FOverlaySlot *)0x0) {
    local_40[0x10] = true;
    local_18 = 0;
    pFVar2 = (FOverlaySlot *)0x0;
    if (&pFVar1->_padding_ != (longlong *)0x0) {
      pFVar2 = pFVar1;
    }
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)&pFVar1->_padding_,(ISlateAttributeContainer *)&pFVar2->_padding_,
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

// SetVerticalAlignment @ 146a1d540

void __thiscall UOverlaySlot::SetVerticalAlignment(UOverlaySlot *this,EVerticalAlignment param_1)

{
  FOverlaySlot *this_00;
  
  (this->VerticalAlignment).Value = (uchar)param_1;
  this_00 = this->Slot;
  if ((this_00 != (FOverlaySlot *)0x0) &&
     (*(EVerticalAlignment *)((longlong)&this_00->_padding_ + 4) != param_1)) {
    *(EVerticalAlignment *)((longlong)&this_00->_padding_ + 4) = param_1;
    FSlotBase::Invalidate((FSlotBase *)this_00,Layout);
    return;
  }
  return;
}

// StaticRegisterNativesUOverlaySlot @ 146a1ebe0

void __cdecl UOverlaySlot::StaticRegisterNativesUOverlaySlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UOverlaySlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a23840

void __thiscall UOverlaySlot::SynchronizeProperties(UOverlaySlot *this)

{
  longlong *plVar1;
  FOverlaySlot *pFVar2;
  uint uVar3;
  FOverlaySlot *this_00;
  FMargin local_18;
  
  local_18.Left = (this->Padding).Left;
  local_18.Top = (this->Padding).Top;
  local_18.Right = (this->Padding).Right;
  local_18.Bottom = (this->Padding).Bottom;
  SetPadding(this,&local_18);
  pFVar2 = this->Slot;
  if (pFVar2 != (FOverlaySlot *)0x0) {
    plVar1 = &pFVar2->_padding_;
    uVar3 = (uint)(this->HorizontalAlignment).Value;
    if ((uint)*plVar1 != uVar3) {
      *(uint *)plVar1 = uVar3;
      this_00 = (FOverlaySlot *)0x0;
      if (plVar1 != (longlong *)0x0) {
        this_00 = pFVar2;
      }
      FSlotBase::Invalidate((FSlotBase *)this_00,Layout);
    }
  }
  pFVar2 = this->Slot;
  if ((pFVar2 != (FOverlaySlot *)0x0) &&
     (uVar3 = (uint)(this->VerticalAlignment).Value,
     *(uint *)((longlong)&pFVar2->_padding_ + 4) != uVar3)) {
    *(uint *)((longlong)&pFVar2->_padding_ + 4) = uVar3;
    FSlotBase::Invalidate((FSlotBase *)pFVar2,Layout);
    return;
  }
  return;
}

// execSetHorizontalAlignment @ 146a3d810

void __cdecl
UOverlaySlot::execSetHorizontalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

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

// execSetPadding @ 146a40890

void __cdecl UOverlaySlot::execSetPadding(UObject *param_1,FFrame *param_2,void *param_3)

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
  SetPadding((UOverlaySlot *)param_1,&local_18);
  return;
}

// execSetVerticalAlignment @ 146a442c0

void __cdecl UOverlaySlot::execSetVerticalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

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

