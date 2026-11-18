// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 33

// SetPadding_WrapperImpl @ 146a4ba20

void __cdecl UWrapBoxSlot::SetPadding_WrapperImpl(void *param_1,void *param_2)

{
  FMargin local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  SetPadding(param_1,&local_18);
  return;
}

// SetFillSpanWhenLessThan_WrapperImpl @ 146a4ba50

void __cdecl UWrapBoxSlot::SetFillSpanWhenLessThan_WrapperImpl(void *param_1,void *param_2)

{
  SetFillSpanWhenLessThan(param_1,*(float *)param_2);
  return;
}

// SetHorizontalAlignment_WrapperImpl @ 146a4ba60

void __cdecl UWrapBoxSlot::SetHorizontalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  FSharedReferencer<1> *pFVar1;
  byte bVar2;
  FSlotBase *pFVar3;
  FSlotBase *this;
  
  bVar2 = *(byte *)param_2;
  pFVar3 = *(FSlotBase **)((longlong)param_1 + 0x50);
  *(byte *)((longlong)param_1 + 0x4c) = bVar2;
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

// SetVerticalAlignment_WrapperImpl @ 146a4baa0

void __cdecl UWrapBoxSlot::SetVerticalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  FSlotBase *this;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0x4d) = bVar1;
  this = *(FSlotBase **)((longlong)param_1 + 0x50);
  if ((this != (FSlotBase *)0x0) &&
     (*(uint *)((longlong)&this[1].Widget.SharedReferenceCount.ReferenceController + 4) !=
      (uint)bVar1)) {
    *(uint *)((longlong)&this[1].Widget.SharedReferenceCount.ReferenceController + 4) = (uint)bVar1;
    FSlotBase::Invalidate(this,Layout);
    return;
  }
  return;
}

// SetbFillEmptySpace_WrapperImpl @ 146a4bad0

void __cdecl UWrapBoxSlot::SetbFillEmptySpace_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  FSlotBase *this;
  
  cVar1 = *(char *)param_2;
  *(char *)((longlong)param_1 + 0x4e) = cVar1;
  this = *(FSlotBase **)((longlong)param_1 + 0x50);
  if ((this != (FSlotBase *)0x0) && (*(char *)&this[2].Owner != cVar1)) {
    *(char *)&this[2].Owner = cVar1;
    FSlotBase::Invalidate(this,Layout);
    return;
  }
  return;
}

// SetbForceNewLine_WrapperImpl @ 146a4bb00

void __cdecl UWrapBoxSlot::SetbForceNewLine_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  FSlotBase *this;
  
  cVar1 = *(char *)param_2;
  *(char *)((longlong)param_1 + 0x4f) = cVar1;
  this = *(FSlotBase **)((longlong)param_1 + 0x50);
  if ((this != (FSlotBase *)0x0) && (*(char *)((longlong)&this[2].Owner + 1) != cVar1)) {
    *(char *)((longlong)&this[2].Owner + 1) = cVar1;
    FSlotBase::Invalidate(this,Layout);
    return;
  }
  return;
}

// StaticClass @ 146a4bb30

UClass * __cdecl UWrapBoxSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWrapBoxSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WrapBoxSlot",&Z_Registration_Info_UClass_UWrapBoxSlot.InnerSingleton
               ,StaticRegisterNativesUWrapBoxSlot,0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWrapBoxSlot>,InternalVTableHelperCtorCaller<UWrapBoxSlot>,
               local_res8,UPanelSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWrapBoxSlot.InnerSingleton;
}

// UWrapBoxSlot @ 146a57eb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWrapBoxSlot * __thiscall UWrapBoxSlot::UWrapBoxSlot(UWrapBoxSlot *this,FVTableHelper *param_1)

{
  UPanelSlot::UPanelSlot((UPanelSlot *)this,param_1);
  this->_padding_ = (longlong)&___7UWrapBoxSlot__6B_;
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  return this;
}

// UWrapBoxSlot @ 146a57ef0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWrapBoxSlot * __thiscall UWrapBoxSlot::UWrapBoxSlot(UWrapBoxSlot *this,FObjectInitializer *param_1)

{
  UPanelSlot::UPanelSlot((UPanelSlot *)this,param_1);
  this->_padding_ = (longlong)&___7UWrapBoxSlot__6B_;
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  this->FillSpanWhenLessThan = 0.0;
  this->HorizontalAlignment = '\0';
  this->VerticalAlignment = '\0';
  this->bFillEmptySpace = false;
  this->bForceNewLine = false;
  this->Slot = (FSlot *)0x0;
  return this;
}

// ~UWrapBoxSlot @ 146a58e30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWrapBoxSlot::~UWrapBoxSlot(UWrapBoxSlot *this)

{
  this->_padding_ = (longlong)&___7UWrapBoxSlot__6B_;
  UPanelSlot::~UPanelSlot((UPanelSlot *)this);
  return;
}

// BuildSlot @ 146a5fa00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWrapBoxSlot::BuildSlot(UWrapBoxSlot *this,TSharedRef<SWrapBox,1> *param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  bool bVar3;
  bool bVar4;
  FMRSWRecursiveAccessDetector *pFVar5;
  FScopedWidgetSlotArguments *pFVar6;
  FDestructionSentinel *pFVar7;
  FScopedWidgetSlotArguments *pFVar8;
  FScopedWidgetSlotArguments *pFVar9;
  float fVar10;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  SWidget *local_170;
  FSharedReferencer<1> local_168;
  longlong local_160;
  longlong lStack_158;
  undefined1 local_150;
  undefined1 local_148 [8];
  ForAnyElementType FStack_140;
  ulonglong local_138;
  FDestructionSentinel local_130;
  undefined8 local_110;
  undefined8 local_108;
  float local_100 [2];
  TSharedRef<SWidget,1> local_f8;
  FScopedWidgetSlotArguments local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_198;
  pFVar8 = (FScopedWidgetSlotArguments *)0x0;
  pFVar6 = SWrapBox::AddSlot(param_1->Object,&local_e8);
  local_160._0_4_ = (this->Padding).Left;
  local_160._4_4_ = (this->Padding).Top;
  lStack_158._0_4_ = (this->Padding).Right;
  lStack_158._4_4_ = (this->Padding).Bottom;
  local_150 = 1;
  bVar4 = false;
  local_138 = 0;
  local_148 = (undefined1  [8])0x0;
  FStack_140.Data = (FScriptContainerElement *)0x0;
  pFVar6->_padding_ = local_160;
  pFVar6->_padding_ = lStack_158;
  *(undefined1 *)&pFVar6->_padding_ = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar6->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_148);
  pFVar9 = pFVar8;
  if (&pFVar6->_padding_ != (longlong *)0x0) {
    pFVar9 = pFVar6;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_148,
             (FWriteAccessScope *)&local_130);
  if (((int)local_138 != 0) && (FStack_140.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_140.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_140,0,0,0x10);
    local_138 = local_138 & 0xffffffff00000000;
  }
  if (local_130.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_130.Accessor,&local_130);
  }
  if (FStack_140.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_140.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_148);
  plVar1 = &pFVar9->_padding_;
  if (&local_110 != plVar1) {
    *(uint *)plVar1 = (uint)(this->HorizontalAlignment).Value;
    *(undefined1 *)((longlong)&pFVar9->_padding_ + 4) = 1;
  }
  if (plVar1 == (longlong *)0x0) {
    pFVar9 = pFVar8;
  }
  if (&local_108 != &pFVar9->_padding_) {
    *(uint *)&pFVar9->_padding_ = (uint)(this->VerticalAlignment).Value;
    *(undefined1 *)((longlong)&pFVar9->_padding_ + 4) = 1;
  }
  if (pFVar9 != (FScopedWidgetSlotArguments *)0xffffffffffffffb8) {
    pFVar8 = pFVar9;
  }
  if (&local_178 != &pFVar8->_padding_) {
    *(bool *)&pFVar8->_padding_ = this->bFillEmptySpace;
    *(undefined1 *)((longlong)&pFVar8->_padding_ + 1) = 1;
  }
  fVar10 = this->FillSpanWhenLessThan;
  bVar3 = fVar10 == 0.0;
  if (bVar3) {
    fVar10 = local_100[0];
  }
  if (local_100 != (float *)&pFVar8->_padding_) {
    if (bVar3) {
      if (*(char *)((longlong)&pFVar8->_padding_ + 4) != '\0') {
        *(undefined1 *)((longlong)&pFVar8->_padding_ + 4) = 0;
      }
    }
    else {
      *(float *)&pFVar8->_padding_ = fVar10;
      *(undefined1 *)((longlong)&pFVar8->_padding_ + 4) = 1;
    }
  }
  puVar2 = (undefined1 *)((longlong)&pFVar8->_padding_ + 2);
  if ((undefined1 *)((longlong)&local_178 + 2) != puVar2) {
    *puVar2 = this->bForceNewLine;
    *(undefined1 *)((longlong)&pFVar8->_padding_ + 3) = 1;
  }
  this->Slot = (FSlot *)pFVar8->_padding_;
  local_170 = SNullWidget::NullWidget.Object;
  if ((UWidget *)this->_padding_ == (UWidget *)0x0) {
    local_130._0_8_ = SNullWidget::NullWidget.Object;
    local_130.Accessor =
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
    pFVar7 = &local_130;
    bVar3 = true;
  }
  else {
    pFVar7 = (FDestructionSentinel *)UWidget::TakeWidget((UWidget *)this->_padding_,&local_f8);
    bVar3 = false;
    bVar4 = true;
    local_170 = *(SWidget **)&pFVar7->AccessType;
  }
  pFVar5 = local_130.Accessor;
  local_168.ReferenceController = ((FSharedReferencer<1> *)&pFVar7->Accessor)->ReferenceController;
  if (local_168.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_168.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_168.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)&pFVar8->_padding_ != &local_170) {
    pFVar8->_padding_ = (longlong)local_170;
    local_170 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar8->_padding_,&local_168);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.ReferenceController);
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.SharedReferenceCount.ReferenceController);
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar5);
  }
  TPanelChildren<SWrapBox::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// DoesFillEmptySpace @ 146a6b6f0

bool __thiscall UWrapBoxSlot::DoesFillEmptySpace(UWrapBoxSlot *this)

{
  return this->bFillEmptySpace;
}

// DoesForceNewLine @ 146a6b700

bool __thiscall UWrapBoxSlot::DoesForceNewLine(UWrapBoxSlot *this)

{
  return this->bForceNewLine;
}

// GetFillSpanWhenLessThan @ 146a765f0

float __thiscall UWrapBoxSlot::GetFillSpanWhenLessThan(UWrapBoxSlot *this)

{
  return this->FillSpanWhenLessThan;
}

// GetHorizontalAlignment @ 146a76a30

EHorizontalAlignment __thiscall UWrapBoxSlot::GetHorizontalAlignment(UWrapBoxSlot *this)

{
  return (EHorizontalAlignment)(this->HorizontalAlignment).Value;
}

// GetPadding @ 146a77aa0

FMargin * __thiscall UWrapBoxSlot::GetPadding(UWrapBoxSlot *this,FMargin *__return_storage_ptr__)

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

// GetPrivateStaticClass @ 146a788d0

UClass * __cdecl UWrapBoxSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWrapBoxSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WrapBoxSlot",&Z_Registration_Info_UClass_UWrapBoxSlot.InnerSingleton
               ,StaticRegisterNativesUWrapBoxSlot,0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWrapBoxSlot>,InternalVTableHelperCtorCaller<UWrapBoxSlot>,
               local_res8,UPanelSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWrapBoxSlot.InnerSingleton;
}

// GetVerticalAlignment @ 146a79790

EVerticalAlignment __thiscall UWrapBoxSlot::GetVerticalAlignment(UWrapBoxSlot *this)

{
  return (EVerticalAlignment)(this->VerticalAlignment).Value;
}

// ReleaseSlateResources @ 146a8ece0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWrapBoxSlot::ReleaseSlateResources(UWrapBoxSlot *this,bool param_1)

{
  UPanelSlot::ReleaseSlateResources((UPanelSlot *)this,param_1);
  this->Slot = (FSlot *)0x0;
  return;
}

// SetFillEmptySpace @ 146a93700

void __thiscall UWrapBoxSlot::SetFillEmptySpace(UWrapBoxSlot *this,bool param_1)

{
  FSlot *this_00;
  
  this->bFillEmptySpace = param_1;
  this_00 = this->Slot;
  if ((this_00 != (FSlot *)0x0) && (this_00->bSlotFillEmptySpace != param_1)) {
    this_00->bSlotFillEmptySpace = param_1;
    FSlotBase::Invalidate((FSlotBase *)this_00,Layout);
    return;
  }
  return;
}

// SetFillSpanWhenLessThan @ 146a93730

void __thiscall UWrapBoxSlot::SetFillSpanWhenLessThan(UWrapBoxSlot *this,float param_1)

{
  TOptional<float> *pTVar1;
  bool bVar2;
  FSlot *this_00;
  bool bVar3;
  bool bVar4;
  float local_18 [6];
  
  this_00 = this->Slot;
  this->FillSpanWhenLessThan = param_1;
  if (this_00 != (FSlot *)0x0) {
    bVar3 = param_1 != 0.0;
    if (!bVar3) {
      param_1 = local_18[0];
    }
    bVar2 = (this_00->SlotFillLineWhenSizeLessThan).bIsSet;
    pTVar1 = &this_00->SlotFillLineWhenSizeLessThan;
    if (bVar2 == bVar3) {
      bVar4 = false;
      if ((bVar2 != false) && (bVar4 = true, param_1 == pTVar1->TypedValue)) {
        bVar4 = false;
      }
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      if ((TOptional<float> *)local_18 != pTVar1) {
        if (bVar3) {
          pTVar1->TypedValue = param_1;
          (this_00->SlotFillLineWhenSizeLessThan).bIsSet = true;
          FSlotBase::Invalidate((FSlotBase *)this_00,Layout);
          return;
        }
        if (bVar2 != false) {
          (this_00->SlotFillLineWhenSizeLessThan).bIsSet = false;
        }
      }
      FSlotBase::Invalidate((FSlotBase *)this_00,Layout);
      return;
    }
  }
  return;
}

// SetHorizontalAlignment @ 146a93b40

void __thiscall
UWrapBoxSlot::SetHorizontalAlignment(UWrapBoxSlot *this,EHorizontalAlignment param_1)

{
  FSlot *pFVar1;
  FSlot *this_00;
  
  pFVar1 = this->Slot;
  (this->HorizontalAlignment).Value = (uchar)param_1;
  if ((pFVar1 != (FSlot *)0x0) && ((EHorizontalAlignment)pFVar1->_padding_ != param_1)) {
    *(EHorizontalAlignment *)&pFVar1->_padding_ = param_1;
    this_00 = (FSlot *)0x0;
    if (&pFVar1->_padding_ != (longlong *)0x0) {
      this_00 = pFVar1;
    }
    FSlotBase::Invalidate((FSlotBase *)this_00,Layout);
    return;
  }
  return;
}

// SetNewLine @ 146a93f40

void __thiscall UWrapBoxSlot::SetNewLine(UWrapBoxSlot *this,bool param_1)

{
  FSlot *this_00;
  
  this->bForceNewLine = param_1;
  this_00 = this->Slot;
  if ((this_00 != (FSlot *)0x0) && (this_00->bSlotForceNewLine != param_1)) {
    this_00->bSlotForceNewLine = param_1;
    FSlotBase::Invalidate((FSlotBase *)this_00,Layout);
    return;
  }
  return;
}

// SetPadding @ 146a945f0

void __thiscall UWrapBoxSlot::SetPadding(UWrapBoxSlot *this,FMargin *param_1)

{
  FSlot *pFVar1;
  FSlot *pFVar2;
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
  if (pFVar1 != (FSlot *)0x0) {
    local_40[0x10] = true;
    local_18 = 0;
    pFVar2 = (FSlot *)0x0;
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

// SetVerticalAlignment @ 146a95190

void __thiscall UWrapBoxSlot::SetVerticalAlignment(UWrapBoxSlot *this,EVerticalAlignment param_1)

{
  FSlot *this_00;
  
  (this->VerticalAlignment).Value = (uchar)param_1;
  this_00 = this->Slot;
  if ((this_00 != (FSlot *)0x0) &&
     (*(EVerticalAlignment *)((longlong)&this_00->_padding_ + 4) != param_1)) {
    *(EVerticalAlignment *)((longlong)&this_00->_padding_ + 4) = param_1;
    FSlotBase::Invalidate((FSlotBase *)this_00,Layout);
    return;
  }
  return;
}

// StaticRegisterNativesUWrapBoxSlot @ 146a96ad0

void __cdecl UWrapBoxSlot::StaticRegisterNativesUWrapBoxSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UWrapBoxSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a979d0

void __thiscall UWrapBoxSlot::SynchronizeProperties(UWrapBoxSlot *this)

{
  longlong *plVar1;
  FSlot *pFVar2;
  uint uVar3;
  FSlot *this_00;
  FMargin local_18;
  
  local_18.Left = (this->Padding).Left;
  local_18.Top = (this->Padding).Top;
  local_18.Right = (this->Padding).Right;
  local_18.Bottom = (this->Padding).Bottom;
  SetPadding(this,&local_18);
  pFVar2 = this->Slot;
  if ((pFVar2 != (FSlot *)0x0) && (pFVar2->bSlotFillEmptySpace != this->bFillEmptySpace)) {
    pFVar2->bSlotFillEmptySpace = this->bFillEmptySpace;
    FSlotBase::Invalidate((FSlotBase *)pFVar2,Layout);
  }
  SetFillSpanWhenLessThan(this,this->FillSpanWhenLessThan);
  pFVar2 = this->Slot;
  if (pFVar2 != (FSlot *)0x0) {
    plVar1 = &pFVar2->_padding_;
    uVar3 = (uint)(this->HorizontalAlignment).Value;
    if ((uint)*plVar1 != uVar3) {
      *(uint *)plVar1 = uVar3;
      this_00 = (FSlot *)0x0;
      if (plVar1 != (longlong *)0x0) {
        this_00 = pFVar2;
      }
      FSlotBase::Invalidate((FSlotBase *)this_00,Layout);
    }
  }
  pFVar2 = this->Slot;
  if ((pFVar2 != (FSlot *)0x0) &&
     (uVar3 = (uint)(this->VerticalAlignment).Value,
     *(uint *)((longlong)&pFVar2->_padding_ + 4) != uVar3)) {
    *(uint *)((longlong)&pFVar2->_padding_ + 4) = uVar3;
    FSlotBase::Invalidate((FSlotBase *)pFVar2,Layout);
  }
  pFVar2 = this->Slot;
  if ((pFVar2 != (FSlot *)0x0) && (pFVar2->bSlotForceNewLine != this->bForceNewLine)) {
    pFVar2->bSlotForceNewLine = this->bForceNewLine;
    FSlotBase::Invalidate((FSlotBase *)pFVar2,Layout);
    return;
  }
  return;
}

// execSetFillEmptySpace @ 146aa8310

void __cdecl UWrapBoxSlot::execSetFillEmptySpace(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlotBase *this;
  bool bVar2;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar2 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(FSlotBase **)(param_1 + 2);
  param_1[1].field_0x26 = bVar2;
  if ((this != (FSlotBase *)0x0) && ((bool)*(char *)&this[2].Owner != bVar2)) {
    *(bool *)&this[2].Owner = bVar2;
    FSlotBase::Invalidate(this,Layout);
  }
  return;
}

// execSetFillSpanWhenLessThan @ 146aa83b0

void __cdecl
UWrapBoxSlot::execSetFillSpanWhenLessThan(UObject *param_1,FFrame *param_2,void *param_3)

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
  SetFillSpanWhenLessThan((UWrapBoxSlot *)param_1,local_res10[0]);
  return;
}

// execSetHorizontalAlignment @ 146aa8af0

void __cdecl
UWrapBoxSlot::execSetHorizontalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

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
  pFVar3 = *(FSlotBase **)(param_1 + 2);
  param_1[1].field_0x24 = local_res8[0];
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

// execSetNewLine @ 146aa9470

void __cdecl UWrapBoxSlot::execSetNewLine(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlotBase *this;
  bool bVar2;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar2 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(FSlotBase **)(param_1 + 2);
  param_1[1].field_0x27 = bVar2;
  if ((this != (FSlotBase *)0x0) && ((bool)*(char *)((longlong)&this[2].Owner + 1) != bVar2)) {
    *(bool *)((longlong)&this[2].Owner + 1) = bVar2;
    FSlotBase::Invalidate(this,Layout);
  }
  return;
}

// execSetPadding @ 146aa9aa0

void __cdecl UWrapBoxSlot::execSetPadding(UObject *param_1,FFrame *param_2,void *param_3)

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
  SetPadding((UWrapBoxSlot *)param_1,&local_18);
  return;
}

// execSetVerticalAlignment @ 146aaa690

void __cdecl UWrapBoxSlot::execSetVerticalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

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
  this = *(FSlotBase **)(param_1 + 2);
  param_1[1].field_0x25 = local_res8[0];
  if ((this != (FSlotBase *)0x0) &&
     (*(uint *)((longlong)&this[1].Widget.SharedReferenceCount.ReferenceController + 4) !=
      (uint)local_res8[0])) {
    *(uint *)((longlong)&this[1].Widget.SharedReferenceCount.ReferenceController + 4) =
         (uint)local_res8[0];
    FSlotBase::Invalidate(this,Layout);
  }
  return;
}

