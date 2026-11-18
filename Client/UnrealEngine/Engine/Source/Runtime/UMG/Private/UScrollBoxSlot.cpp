// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 22

// GetSize_WrapperImpl @ 146957cf0

void __cdecl UScrollBoxSlot::GetSize_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x38);
  return;
}

// SetSize_WrapperImpl @ 146957d00

void __cdecl UScrollBoxSlot::SetSize_WrapperImpl(void *param_1,void *param_2)

{
  SetSize(param_1,*(FSlateChildSize *)param_2);
  return;
}

// StaticClass @ 146957d60

UClass * __cdecl UScrollBoxSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScrollBoxSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ScrollBoxSlot",
               &Z_Registration_Info_UClass_UScrollBoxSlot.InnerSingleton,
               StaticRegisterNativesUScrollBoxSlot,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UScrollBoxSlot>,InternalVTableHelperCtorCaller<UScrollBoxSlot>,
               local_res8,UPanelSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScrollBoxSlot.InnerSingleton;
}

// UScrollBoxSlot @ 14698d480

UScrollBoxSlot * __thiscall
UScrollBoxSlot::UScrollBoxSlot(UScrollBoxSlot *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->Size).Value = 1.0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UScrollBoxSlot__6B_;
  this->_padding_ = 0;
  (this->Size).SizeRule.Value = '\x01';
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  return this;
}

// UScrollBoxSlot @ 14698d4d0

UScrollBoxSlot * __thiscall
UScrollBoxSlot::UScrollBoxSlot(UScrollBoxSlot *this,FObjectInitializer *param_1)

{
  FSlateChildSize FVar1;
  uint uStackX_c;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UScrollBoxSlot__6B_;
  this->_padding_ = 0;
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  uStackX_c = uStackX_c & 0xffffff00;
  FVar1._4_4_ = uStackX_c;
  FVar1.Value = 1.0;
  this->Size = FVar1;
  this->Slot = (FSlot *)0x0;
  this->HorizontalAlignment = '\0';
  this->VerticalAlignment = '\0';
  return this;
}

// ~UScrollBoxSlot @ 1469941b0

void __thiscall UScrollBoxSlot::~UScrollBoxSlot(UScrollBoxSlot *this)

{
  this->_padding_ = (longlong)&___7UVisual__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BuildSlot @ 1469a45b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UScrollBoxSlot::BuildSlot(UScrollBoxSlot *this,TSharedRef<SScrollBox,1> *param_1)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScopedWidgetSlotArguments *pFVar5;
  FSizeParam *pFVar6;
  TSharedRef<SWidget,1> *pTVar7;
  FScopedWidgetSlotArguments *pFVar8;
  FScopedWidgetSlotArguments *pFVar9;
  undefined1 auStack_2b8 [32];
  SWidget *local_298;
  FSharedReferencer<1> local_290;
  longlong local_288;
  longlong lStack_280;
  undefined1 local_278;
  undefined1 local_270 [8];
  ForAnyElementType FStack_268;
  ulonglong local_260;
  SWidget *local_258;
  TReferenceControllerBase<1> *local_250;
  bool local_248;
  undefined8 local_238;
  undefined8 local_230;
  undefined1 local_228 [16];
  undefined1 local_218 [24];
  float local_200;
  bool local_1fc;
  undefined1 local_1f8 [24];
  bool local_1e0;
  TSharedRef<SWidget,1> local_1d8;
  undefined1 local_1c8 [48];
  undefined1 local_198 [32];
  FScopedWidgetSlotArguments local_178;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  pFVar9 = (FScopedWidgetSlotArguments *)0x0;
  pFVar5 = SScrollBox::AddSlot(param_1->Object,&local_178);
  local_288._0_4_ = (this->Padding).Left;
  local_288._4_4_ = (this->Padding).Top;
  lStack_280._0_4_ = (this->Padding).Right;
  lStack_280._4_4_ = (this->Padding).Bottom;
  local_278 = 1;
  bVar2 = false;
  local_260 = 0;
  local_270 = (undefined1  [8])0x0;
  FStack_268.Data = (FScriptContainerElement *)0x0;
  pFVar5->_padding_ = local_288;
  pFVar5->_padding_ = lStack_280;
  *(undefined1 *)&pFVar5->_padding_ = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar5->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_270);
  pFVar8 = pFVar9;
  if (&pFVar5->_padding_ != (longlong *)0x0) {
    pFVar8 = pFVar5;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_270,
             (FWriteAccessScope *)&local_258);
  if (((int)local_260 != 0) && (FStack_268.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_268.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_268,0,0,0x10);
    local_260 = local_260 & 0xffffffff00000000;
  }
  if (local_248 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_250,(FDestructionSentinel *)&local_258);
  }
  if (FStack_268.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_268.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_270);
  plVar1 = &pFVar8->_padding_;
  if (&local_238 != plVar1) {
    *(uint *)plVar1 = (uint)(this->HorizontalAlignment).Value;
    *(undefined1 *)((longlong)&pFVar8->_padding_ + 4) = 1;
  }
  if (plVar1 == (longlong *)0x0) {
    pFVar8 = pFVar9;
  }
  if (&local_230 != &pFVar8->_padding_) {
    *(uint *)&pFVar8->_padding_ = (uint)(this->VerticalAlignment).Value;
    *(undefined1 *)((longlong)&pFVar8->_padding_ + 4) = 1;
  }
  pFVar5 = pFVar9;
  if (pFVar8 != (FScopedWidgetSlotArguments *)0xffffffffffffffb8) {
    pFVar5 = pFVar8;
  }
  this->Slot = (FSlot *)pFVar5->_padding_;
  pFVar6 = UWidget::ConvertSerializedSizeParamToRuntime((FSizeParam *)local_1c8,&this->Size);
  local_228._0_4_ = pFVar6->SizeRule;
  local_228._8_4_ = (pFVar6->Value).Value;
  local_228[0xc] = (pFVar6->Value).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_218,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->Value).Getter);
  local_200 = (pFVar6->ShrinkValue).Value;
  local_1fc = (pFVar6->ShrinkValue).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f8,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->ShrinkValue).Getter);
  local_1e0 = true;
  TOptional<FSizeParam>::operator=
            ((TOptional<FSizeParam> *)&pFVar5->_padding_,(TOptional<FSizeParam> *)local_228);
  if (&pFVar5->_padding_ == (longlong *)0x0) {
    pFVar5 = pFVar9;
  }
  if (local_1e0 != false) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f8);
    if ((void *)local_1f8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1f8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1f8);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_218);
    if ((void *)local_218._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_218._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_218);
  }
  local_298 = SNullWidget::NullWidget.Object;
  if ((UWidget *)this->_padding_ == (UWidget *)0x0) {
    local_258 = SNullWidget::NullWidget.Object;
    local_250 = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (TSharedRef<SWidget,1> *)&local_258;
    bVar3 = true;
  }
  else {
    pTVar7 = UWidget::TakeWidget((UWidget *)this->_padding_,&local_1d8);
    bVar3 = false;
    bVar2 = true;
    local_298 = pTVar7->Object;
  }
  pTVar4 = local_250;
  local_290.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
  if (local_290.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_290.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_290.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)&pFVar5->_padding_ != &local_298) {
    pFVar5->_padding_ = (longlong)local_298;
    local_298 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar5->_padding_,&local_290);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_290.ReferenceController);
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1d8.SharedReferenceCount.ReferenceController);
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_198);
  if ((void *)local_198._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_198._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_198);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_1c8 + 0x10));
  if ((void *)local_1c8._24_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1c8._24_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_1c8 + 0x10));
  TPanelChildren<SScrollBox::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_178);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetHorizontalAlignment @ 1469d12d0

EHorizontalAlignment __thiscall UScrollBoxSlot::GetHorizontalAlignment(UScrollBoxSlot *this)

{
  if (this->Slot != (FSlot *)0x0) {
    return (EHorizontalAlignment)this->Slot->_padding_;
  }
  return (EHorizontalAlignment)(this->HorizontalAlignment).Value;
}

// GetPadding @ 1469d3650

FMargin * __thiscall
UScrollBoxSlot::GetPadding(UScrollBoxSlot *this,FMargin *__return_storage_ptr__)

{
  FSlot *pFVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong local_28;
  undefined8 uStack_20;
  longlong local_18;
  longlong lStack_10;
  
  pFVar1 = this->Slot;
  plVar4 = &local_18;
  if (pFVar1 == (FSlot *)0x0) {
    local_28._0_4_ = (this->Padding).Left;
    local_28._4_4_ = (this->Padding).Top;
    uStack_20._0_4_ = (this->Padding).Right;
    uStack_20._4_4_ = (this->Padding).Bottom;
    plVar4 = &local_28;
  }
  else {
    local_18 = pFVar1->_padding_;
    lStack_10 = pFVar1->_padding_;
  }
  lVar2 = *plVar4;
  lVar3 = plVar4[1];
  __return_storage_ptr__->Left = (float)(int)lVar2;
  __return_storage_ptr__->Top = (float)(int)((ulonglong)lVar2 >> 0x20);
  __return_storage_ptr__->Right = (float)(int)lVar3;
  __return_storage_ptr__->Bottom = (float)(int)((ulonglong)lVar3 >> 0x20);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1469d5a60

UClass * __cdecl UScrollBoxSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScrollBoxSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ScrollBoxSlot",
               &Z_Registration_Info_UClass_UScrollBoxSlot.InnerSingleton,
               StaticRegisterNativesUScrollBoxSlot,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UScrollBoxSlot>,InternalVTableHelperCtorCaller<UScrollBoxSlot>,
               local_res8,UPanelSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScrollBoxSlot.InnerSingleton;
}

// GetSize @ 1469d85f0

FSlateChildSize __thiscall UScrollBoxSlot::GetSize(UScrollBoxSlot *this)

{
  FSlateChildSize in_RDX;
  
  *(FSlateChildSize *)in_RDX = this->Size;
  return in_RDX;
}

// GetVerticalAlignment @ 1469d9c90

EVerticalAlignment __thiscall UScrollBoxSlot::GetVerticalAlignment(UScrollBoxSlot *this)

{
  if (this->Slot != (FSlot *)0x0) {
    return *(EVerticalAlignment *)((longlong)&this->Slot->_padding_ + 4);
  }
  return (EVerticalAlignment)(this->VerticalAlignment).Value;
}

// ReleaseSlateResources @ 146a0b2b0

void __thiscall UScrollBoxSlot::ReleaseSlateResources(UScrollBoxSlot *this,bool param_1)

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
    this->Slot = (FSlot *)0x0;
    return;
  }
  this->Slot = (FSlot *)0x0;
  return;
}

// SetHorizontalAlignment @ 146a15330

void __thiscall
UScrollBoxSlot::SetHorizontalAlignment(UScrollBoxSlot *this,EHorizontalAlignment param_1)

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

// SetPadding @ 146a18ad0

void __thiscall UScrollBoxSlot::SetPadding(UScrollBoxSlot *this,FMargin *param_1)

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

// SetSize @ 146a1b1a0

void __thiscall UScrollBoxSlot::SetSize(UScrollBoxSlot *this,FSlateChildSize param_1)

{
  longlong *plVar1;
  longlong *this_00;
  ESizeRule EVar2;
  FSlot *pFVar3;
  void *pvVar4;
  FSizeParam *pFVar5;
  FSlot *pFVar6;
  FSlot *pFVar7;
  longlong *plVar8;
  FSlateChildSize local_res10;
  FSizeParam local_68;
  
  pFVar3 = this->Slot;
  this->Size = param_1;
  if (pFVar3 != (FSlot *)0x0) {
    plVar1 = &pFVar3->_padding_;
    local_res10 = param_1;
    pFVar5 = UWidget::ConvertSerializedSizeParamToRuntime(&local_68,&local_res10);
    pFVar7 = (FSlot *)0x0;
    EVar2 = pFVar5->SizeRule;
    *(ESizeRule *)plVar1 = EVar2;
    this_00 = &pFVar3->_padding_;
    if (EVar2 == SizeRule_StretchContent) {
      if ((pFVar5->ShrinkValue).bIsSet == false) {
        pFVar6 = pFVar7;
        if (plVar1 != (longlong *)0x0) {
          pFVar6 = pFVar3;
        }
        SlateAttributePrivate::
        TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
        ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
                  *)this_00,(ISlateAttributeContainer *)&pFVar6->_padding_,&pFVar5->Value,None);
      }
      else {
        pFVar6 = pFVar7;
        if (plVar1 != (longlong *)0x0) {
          pFVar6 = pFVar3;
        }
        SlateAttributePrivate::
        TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
        ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
                  *)this_00,(ISlateAttributeContainer *)&pFVar6->_padding_,&pFVar5->ShrinkValue,None
                );
      }
    }
    else {
      pFVar6 = pFVar7;
      if (plVar1 != (longlong *)0x0) {
        pFVar6 = pFVar3;
      }
      plVar8 = &pFVar6->_padding_;
      SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
                ((FSlateAttributeImpl *)this_00,(ISlateAttributeContainer *)plVar8,Contained);
      (**(code **)*plVar8)(plVar8);
      if (__real_3f800000 != *(float *)&pFVar3->_padding_) {
        *(undefined4 *)&pFVar3->_padding_ = 0x3f800000;
        (**(code **)*plVar8)(plVar8);
        SlateAttributePrivate::FSlateAttributeImpl::ProtectedInvalidateWidget
                  ((FSlateAttributeImpl *)&pFVar3->_padding_,(ISlateAttributeContainer *)plVar8,
                   Contained,None);
      }
    }
    if (plVar1 != (longlong *)0x0) {
      pFVar7 = pFVar3;
    }
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)((longlong)&pFVar3->_padding_ + 4),(ISlateAttributeContainer *)&pFVar7->_padding_,
             &pFVar5->Value,None);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->ShrinkValue).Getter);
    pvVar4 = *(void **)&(pFVar5->ShrinkValue).Getter.field_0x8;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&(pFVar5->ShrinkValue).Getter);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->Value).Getter);
    pvVar4 = *(void **)&(pFVar5->Value).Getter.field_0x8;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&(pFVar5->Value).Getter);
  }
  return;
}

// SetVerticalAlignment @ 146a1d730

void __thiscall
UScrollBoxSlot::SetVerticalAlignment(UScrollBoxSlot *this,EVerticalAlignment param_1)

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

// StaticRegisterNativesUScrollBoxSlot @ 146a1ef00

void __cdecl UScrollBoxSlot::StaticRegisterNativesUScrollBoxSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UScrollBoxSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a25200

void __thiscall UScrollBoxSlot::SynchronizeProperties(UScrollBoxSlot *this)

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
  SetSize(this,this->Size);
  return;
}

// execSetHorizontalAlignment @ 146a3d950

void __cdecl
UScrollBoxSlot::execSetHorizontalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

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
  pFVar3 = *(FSlotBase **)&param_1[2].field_0x8;
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

// execSetPadding @ 146a40990

void __cdecl UScrollBoxSlot::execSetPadding(UObject *param_1,FFrame *param_2,void *param_3)

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
  SetPadding((UScrollBoxSlot *)param_1,&local_18);
  return;
}

// execSetVerticalAlignment @ 146a443f0

void __cdecl
UScrollBoxSlot::execSetVerticalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

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
  this = *(FSlotBase **)&param_1[2].field_0x8;
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

