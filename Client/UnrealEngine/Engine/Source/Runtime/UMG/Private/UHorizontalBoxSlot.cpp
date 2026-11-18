// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 25

// SetSize_WrapperImpl @ 146963880

void __cdecl UHorizontalBoxSlot::SetSize_WrapperImpl(void *param_1,void *param_2)

{
  SetSize(param_1,*(FSlateChildSize *)param_2);
  return;
}

// SetPadding_WrapperImpl @ 1469638a0

void __cdecl UHorizontalBoxSlot::SetPadding_WrapperImpl(void *param_1,void *param_2)

{
  FMargin local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  SetPadding(param_1,&local_18);
  return;
}

// SetHorizontalAlignment_WrapperImpl @ 146963930

void __cdecl UHorizontalBoxSlot::SetHorizontalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  FSharedReferencer<1> *pFVar1;
  byte bVar2;
  FSlotBase *pFVar3;
  FSlotBase *this;
  
  bVar2 = *(byte *)param_2;
  pFVar3 = *(FSlotBase **)((longlong)param_1 + 0x38);
  *(byte *)((longlong)param_1 + 0x58) = bVar2;
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

// SetVerticalAlignment_WrapperImpl @ 146963980

void __cdecl UHorizontalBoxSlot::SetVerticalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  FSlotBase *this;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0x59) = bVar1;
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

// StaticClass @ 146963a20

UClass * __cdecl UHorizontalBoxSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHorizontalBoxSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"HorizontalBoxSlot",
               &Z_Registration_Info_UClass_UHorizontalBoxSlot.InnerSingleton,
               StaticRegisterNativesUHorizontalBoxSlot,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UHorizontalBoxSlot>,
               InternalVTableHelperCtorCaller<UHorizontalBoxSlot>,local_res8,UPanelSlot::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHorizontalBoxSlot.InnerSingleton;
}

// UHorizontalBoxSlot @ 14698a6b0

UHorizontalBoxSlot * __thiscall
UHorizontalBoxSlot::UHorizontalBoxSlot(UHorizontalBoxSlot *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->Size).Value = 1.0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UHorizontalBoxSlot__6B_;
  this->_padding_ = 0;
  (this->Size).SizeRule.Value = '\x01';
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  return this;
}

// UHorizontalBoxSlot @ 14698a700

UHorizontalBoxSlot * __thiscall
UHorizontalBoxSlot::UHorizontalBoxSlot(UHorizontalBoxSlot *this,FObjectInitializer *param_1)

{
  FSlateChildSize FVar1;
  uint uStackX_c;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UHorizontalBoxSlot__6B_;
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

// ~UHorizontalBoxSlot @ 146992f40

void __thiscall UHorizontalBoxSlot::~UHorizontalBoxSlot(UHorizontalBoxSlot *this)

{
  this->_padding_ = (longlong)&___7UVisual__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BuildSlot @ 1469a3d30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UHorizontalBoxSlot::BuildSlot(UHorizontalBoxSlot *this,TSharedRef<SHorizontalBox,1> *param_1)

{
  SHorizontalBox *pSVar1;
  bool bVar2;
  bool bVar3;
  FSlot *this_00;
  FSlot *pFVar4;
  FSizeParam *pFVar5;
  FDestructionSentinel *pFVar6;
  FSharedReferencer<1> FVar7;
  FSlot *local_res8;
  FDestructionSentinel local_218;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined1 local_1f0;
  undefined1 local_1e8 [8];
  ForAnyElementType FStack_1e0;
  ulonglong local_1d8;
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [24];
  float local_1a8;
  bool local_1a4;
  undefined1 local_1a0 [24];
  bool local_188;
  TSharedRef<SWidget,1> local_180;
  undefined **local_170;
  FSlot *local_168;
  SWidget *local_160;
  FSharedReferencer<1> local_158 [3];
  undefined1 local_140;
  undefined1 local_138 [24];
  uint local_120;
  undefined1 local_11c;
  uint local_118;
  undefined1 local_114;
  FSlotArgumentsMixin local_110;
  TPanelChildren<SBoxPanel::FSlot> *local_80;
  int local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [32];
  undefined1 local_40 [24];
  
  pSVar1 = param_1->Object;
  pFVar4 = (FSlot *)0x0;
  this_00 = ::operator_new(0x58);
  if (this_00 != (FSlot *)0x0) {
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)&this_00->field_0x8 = 0;
    *(undefined8 *)&this_00->field_0x10 = 0;
    *(undefined8 *)&this_00->field_0x18 = 0;
    *(undefined8 *)&this_00->field_0x20 = 0;
    *(undefined8 *)&this_00->field_0x28 = 0;
    *(undefined8 *)&this_00->field_0x30 = 0;
    *(undefined8 *)&this_00->field_0x38 = 0;
    *(undefined8 *)&this_00->field_0x40 = 0;
    *(undefined8 *)&this_00->field_0x48 = 0;
    *(undefined8 *)&this_00->field_0x50 = 0;
    pFVar4 = SHorizontalBox::FSlot::FSlot(this_00);
  }
  local_res8 = pFVar4;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_168,(FSlot *)&local_res8);
  local_200._0_4_ = (this->Padding).Left;
  local_200._4_4_ = (this->Padding).Top;
  uStack_1f8._0_4_ = (this->Padding).Right;
  uStack_1f8._4_4_ = (this->Padding).Bottom;
  local_80 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar1->field_0x218;
  local_78 = -1;
  this->Slot = local_168;
  local_120 = (uint)(this->HorizontalAlignment).Value;
  local_118 = (uint)(this->VerticalAlignment).Value;
  bVar2 = false;
  local_1d8 = 0;
  local_170 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
  local_11c = 1;
  local_114 = 1;
  local_1f0 = 1;
  local_1e8 = (undefined1  [8])0x0;
  FStack_1e0.Data = (FScriptContainerElement *)0x0;
  local_140 = 1;
  local_158[1].ReferenceController = (TReferenceControllerBase<1> *)local_200;
  local_158[2].ReferenceController = (TReferenceControllerBase<1> *)uStack_1f8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_138,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e8,
             (FWriteAccessScope *)&local_218);
  if (((int)local_1d8 != 0) && (FStack_1e0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1e0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1e0,0,0,0x10);
    local_1d8 = local_1d8 & 0xffffffff00000000;
  }
  if (local_218.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_218.Accessor,&local_218);
  }
  if (FStack_1e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1e0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1e8);
  pFVar5 = UWidget::ConvertSerializedSizeParamToRuntime((FSizeParam *)local_70,&this->Size);
  local_1d0._0_4_ = pFVar5->SizeRule;
  local_1d0._8_4_ = (pFVar5->Value).Value;
  local_1d0[0xc] = (pFVar5->Value).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c0,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->Value).Getter);
  local_1a8 = (pFVar5->ShrinkValue).Value;
  local_1a4 = (pFVar5->ShrinkValue).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a0,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->ShrinkValue).Getter);
  local_188 = true;
  TOptional<FSizeParam>::operator=(&local_110._SizeParam,(TOptional<FSizeParam> *)local_1d0);
  if (local_188 != false) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a0);
    if ((void *)local_1a0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1a0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1a0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c0);
    if ((void *)local_1c0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1c0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1c0);
  }
  FVar7.ReferenceController = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  local_160 = SNullWidget::NullWidget.Object;
  if ((UWidget *)this->_padding_ == (UWidget *)0x0) {
    local_218.Accessor =
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
    pFVar6 = &local_218;
    bVar3 = true;
  }
  else {
    pFVar6 = (FDestructionSentinel *)UWidget::TakeWidget((UWidget *)this->_padding_,&local_180);
    bVar3 = false;
    bVar2 = true;
    local_160 = *(SWidget **)&pFVar6->AccessType;
    FVar7.ReferenceController = (TReferenceControllerBase<1> *)local_218.Accessor;
  }
  local_218.Accessor =
       (FMRSWRecursiveAccessDetector *)
       ((FSharedReferencer<1> *)&pFVar6->Accessor)->ReferenceController;
  if ((TReferenceControllerBase<1> *)local_218.Accessor != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_218.Accessor)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_218.Accessor)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_218.AccessType = Reader;
  local_218._4_4_ = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (local_158,(FSharedReferencer<1> *)&local_218.Accessor);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_218.Accessor);
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_180.SharedReferenceCount.ReferenceController);
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar7.ReferenceController);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_40);
  if ((void *)local_40._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_40._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_60);
  if ((void *)local_60._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_60._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_60);
  local_170 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
  if (local_168 != (FSlot *)0x0) {
    if (local_78 == -1) {
      TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_80,(FSlotArguments *)&local_168);
    }
    else {
      TPanelChildren<SBoxPanel::FSlot>::InsertSlot(local_80,(FSlotArguments *)&local_168,local_78);
    }
  }
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_110);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_138);
  if ((void *)local_138._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_138._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_138);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158[0].ReferenceController);
  if (local_168 != (FSlot *)0x0) {
    (*(code *)**(undefined8 **)local_168)(local_168,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetHorizontalAlignment @ 1469d1280

EHorizontalAlignment __thiscall UHorizontalBoxSlot::GetHorizontalAlignment(UHorizontalBoxSlot *this)

{
  return (EHorizontalAlignment)(this->HorizontalAlignment).Value;
}

// GetPadding @ 1469d35e0

FMargin * __thiscall
UHorizontalBoxSlot::GetPadding(UHorizontalBoxSlot *this,FMargin *__return_storage_ptr__)

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

// GetPrivateStaticClass @ 1469d4330

UClass * __cdecl UHorizontalBoxSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHorizontalBoxSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"HorizontalBoxSlot",
               &Z_Registration_Info_UClass_UHorizontalBoxSlot.InnerSingleton,
               StaticRegisterNativesUHorizontalBoxSlot,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UHorizontalBoxSlot>,
               InternalVTableHelperCtorCaller<UHorizontalBoxSlot>,local_res8,UPanelSlot::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHorizontalBoxSlot.InnerSingleton;
}

// GetSize @ 1469d85d0

FSlateChildSize __thiscall UHorizontalBoxSlot::GetSize(UHorizontalBoxSlot *this)

{
  FSlateChildSize in_RDX;
  
  *(FSlateChildSize *)in_RDX = this->Size;
  return in_RDX;
}

// GetVerticalAlignment @ 1469d9c40

EVerticalAlignment __thiscall UHorizontalBoxSlot::GetVerticalAlignment(UHorizontalBoxSlot *this)

{
  return (EVerticalAlignment)(this->VerticalAlignment).Value;
}

// ReleaseSlateResources @ 146a0a670

void __thiscall UHorizontalBoxSlot::ReleaseSlateResources(UHorizontalBoxSlot *this,bool param_1)

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

// SetHorizontalAlignment @ 146a15110

void __thiscall
UHorizontalBoxSlot::SetHorizontalAlignment(UHorizontalBoxSlot *this,EHorizontalAlignment param_1)

{
  FSlot *pFVar1;
  FSlot *this_00;
  
  pFVar1 = this->Slot;
  (this->HorizontalAlignment).Value = (uchar)param_1;
  if ((pFVar1 != (FSlot *)0x0) && (*(EHorizontalAlignment *)&pFVar1->field_0x38 != param_1)) {
    *(EHorizontalAlignment *)&pFVar1->field_0x38 = param_1;
    this_00 = (FSlot *)0x0;
    if (&pFVar1->field_0x38 != (undefined1 *)0x0) {
      this_00 = pFVar1;
    }
    FSlotBase::Invalidate((FSlotBase *)this_00,Layout);
    return;
  }
  return;
}

// SetPadding @ 146a187d0

void __thiscall UHorizontalBoxSlot::SetPadding(UHorizontalBoxSlot *this,FMargin *param_1)

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

// SetSize @ 146a1b030

void __thiscall UHorizontalBoxSlot::SetSize(UHorizontalBoxSlot *this,FSlateChildSize param_1)

{
  undefined1 *puVar1;
  undefined1 *this_00;
  ESizeRule EVar2;
  FSlot *pFVar3;
  void *pvVar4;
  FSizeParam *pFVar5;
  FSlot *pFVar6;
  FSlot *pFVar7;
  undefined1 *puVar8;
  FSlateChildSize local_res10;
  FSizeParam local_68;
  
  pFVar3 = this->Slot;
  this->Size = param_1;
  if (pFVar3 != (FSlot *)0x0) {
    puVar1 = &pFVar3->field_0x40;
    local_res10 = param_1;
    pFVar5 = UWidget::ConvertSerializedSizeParamToRuntime(&local_68,&local_res10);
    pFVar7 = (FSlot *)0x0;
    EVar2 = pFVar5->SizeRule;
    *(ESizeRule *)puVar1 = EVar2;
    this_00 = &pFVar3->field_0x48;
    if (EVar2 == SizeRule_StretchContent) {
      if ((pFVar5->ShrinkValue).bIsSet == false) {
        pFVar6 = pFVar7;
        if (puVar1 != (undefined1 *)0x0) {
          pFVar6 = pFVar3;
        }
        SlateAttributePrivate::
        TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
        ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
                  *)this_00,(ISlateAttributeContainer *)&pFVar6->field_0x20,&pFVar5->Value,None);
      }
      else {
        pFVar6 = pFVar7;
        if (puVar1 != (undefined1 *)0x0) {
          pFVar6 = pFVar3;
        }
        SlateAttributePrivate::
        TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
        ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
                  *)this_00,(ISlateAttributeContainer *)&pFVar6->field_0x20,&pFVar5->ShrinkValue,
                 None);
      }
    }
    else {
      pFVar6 = pFVar7;
      if (puVar1 != (undefined1 *)0x0) {
        pFVar6 = pFVar3;
      }
      puVar8 = &pFVar6->field_0x20;
      SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
                ((FSlateAttributeImpl *)this_00,(ISlateAttributeContainer *)puVar8,Contained);
      (*(code *)**(undefined8 **)puVar8)(puVar8);
      if (__real_3f800000 != *(float *)&pFVar3->field_0x48) {
        *(undefined4 *)&pFVar3->field_0x48 = 0x3f800000;
        (*(code *)**(undefined8 **)puVar8)(puVar8);
        SlateAttributePrivate::FSlateAttributeImpl::ProtectedInvalidateWidget
                  ((FSlateAttributeImpl *)&pFVar3->field_0x48,(ISlateAttributeContainer *)puVar8,
                   Contained,None);
      }
    }
    if (puVar1 != (undefined1 *)0x0) {
      pFVar7 = pFVar3;
    }
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)&pFVar3->field_0x44,(ISlateAttributeContainer *)&pFVar7->field_0x20,&pFVar5->Value,
             None);
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

// SetVerticalAlignment @ 146a1d510

void __thiscall
UHorizontalBoxSlot::SetVerticalAlignment(UHorizontalBoxSlot *this,EVerticalAlignment param_1)

{
  FSlot *this_00;
  
  (this->VerticalAlignment).Value = (uchar)param_1;
  this_00 = this->Slot;
  if ((this_00 != (FSlot *)0x0) && (*(EVerticalAlignment *)&this_00->field_0x3c != param_1)) {
    *(EVerticalAlignment *)&this_00->field_0x3c = param_1;
    FSlotBase::Invalidate((FSlotBase *)this_00,Layout);
    return;
  }
  return;
}

// StaticRegisterNativesUHorizontalBoxSlot @ 146a1e920

void __cdecl UHorizontalBoxSlot::StaticRegisterNativesUHorizontalBoxSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UHorizontalBoxSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a21810

void __thiscall UHorizontalBoxSlot::SynchronizeProperties(UHorizontalBoxSlot *this)

{
  undefined1 *puVar1;
  FSlot *pFVar2;
  uint uVar3;
  FSlot *this_00;
  FMargin local_18;
  
  local_18.Left = (this->Padding).Left;
  local_18.Top = (this->Padding).Top;
  local_18.Right = (this->Padding).Right;
  local_18.Bottom = (this->Padding).Bottom;
  SetPadding(this,&local_18);
  SetSize(this,this->Size);
  pFVar2 = this->Slot;
  if (pFVar2 != (FSlot *)0x0) {
    puVar1 = &pFVar2->field_0x38;
    uVar3 = (uint)(this->HorizontalAlignment).Value;
    if (*(uint *)puVar1 != uVar3) {
      *(uint *)puVar1 = uVar3;
      this_00 = (FSlot *)0x0;
      if (puVar1 != (undefined1 *)0x0) {
        this_00 = pFVar2;
      }
      FSlotBase::Invalidate((FSlotBase *)this_00,Layout);
    }
  }
  pFVar2 = this->Slot;
  if ((pFVar2 != (FSlot *)0x0) &&
     (uVar3 = (uint)(this->VerticalAlignment).Value, *(uint *)&pFVar2->field_0x3c != uVar3)) {
    *(uint *)&pFVar2->field_0x3c = uVar3;
    FSlotBase::Invalidate((FSlotBase *)pFVar2,Layout);
    return;
  }
  return;
}

// execSetHorizontalAlignment @ 146a3d760

void __cdecl
UHorizontalBoxSlot::execSetHorizontalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

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
  param_1[2].field_0x8 = local_res8[0];
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

// execSetPadding @ 146a40800

void __cdecl UHorizontalBoxSlot::execSetPadding(UObject *param_1,FFrame *param_2,void *param_3)

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
  SetPadding((UHorizontalBoxSlot *)param_1,&local_18);
  return;
}

// execSetSize @ 146a42960

void __cdecl UHorizontalBoxSlot::execSetSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlateChildSize FVar2;
  float local_res10;
  undefined4 uStackX_14;
  
  local_res10 = 1.0;
  uStackX_14 = CONCAT31(uStackX_14._1_3_,1);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FVar2._4_4_ = uStackX_14;
  FVar2.Value = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetSize((UHorizontalBoxSlot *)param_1,FVar2);
  return;
}

// execSetVerticalAlignment @ 146a44220

void __cdecl
UHorizontalBoxSlot::execSetVerticalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

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
  param_1[2].field_0x9 = local_res8[0];
  if ((this != (FSlotBase *)0x0) &&
     (*(uint *)((longlong)&this[1].Widget.SharedReferenceCount.ReferenceController + 4) !=
      (uint)local_res8[0])) {
    *(uint *)((longlong)&this[1].Widget.SharedReferenceCount.ReferenceController + 4) =
         (uint)local_res8[0];
    FSlotBase::Invalidate(this,Layout);
  }
  return;
}

