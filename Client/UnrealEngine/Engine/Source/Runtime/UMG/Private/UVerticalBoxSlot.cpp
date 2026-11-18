// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 25

// SetSize_WrapperImpl @ 14695ede0

void __cdecl UVerticalBoxSlot::SetSize_WrapperImpl(void *param_1,void *param_2)

{
  SetSize(param_1,*(FSlateChildSize *)param_2);
  return;
}

// SetPadding_WrapperImpl @ 14695ee00

void __cdecl UVerticalBoxSlot::SetPadding_WrapperImpl(void *param_1,void *param_2)

{
  FMargin local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  SetPadding(param_1,&local_18);
  return;
}

// SetHorizontalAlignment_WrapperImpl @ 14695ee50

void __cdecl UVerticalBoxSlot::SetHorizontalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  FSharedReferencer<1> *pFVar1;
  byte bVar2;
  FSlotBase *pFVar3;
  FSlotBase *this;
  
  bVar2 = *(byte *)param_2;
  pFVar3 = *(FSlotBase **)((longlong)param_1 + 0x58);
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

// SetVerticalAlignment_WrapperImpl @ 14695eed0

void __cdecl UVerticalBoxSlot::SetVerticalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  FSlotBase *this;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0x51) = bVar1;
  this = *(FSlotBase **)((longlong)param_1 + 0x58);
  if ((this != (FSlotBase *)0x0) &&
     (*(uint *)((longlong)&this[1].Widget.SharedReferenceCount.ReferenceController + 4) !=
      (uint)bVar1)) {
    *(uint *)((longlong)&this[1].Widget.SharedReferenceCount.ReferenceController + 4) = (uint)bVar1;
    FSlotBase::Invalidate(this,Layout);
    return;
  }
  return;
}

// StaticClass @ 14695ef90

UClass * __cdecl UVerticalBoxSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVerticalBoxSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"VerticalBoxSlot",
               &Z_Registration_Info_UClass_UVerticalBoxSlot.InnerSingleton,
               StaticRegisterNativesUVerticalBoxSlot,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UVerticalBoxSlot>,
               InternalVTableHelperCtorCaller<UVerticalBoxSlot>,local_res8,UPanelSlot::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVerticalBoxSlot.InnerSingleton;
}

// UVerticalBoxSlot @ 14698ea10

UVerticalBoxSlot * __thiscall
UVerticalBoxSlot::UVerticalBoxSlot(UVerticalBoxSlot *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->Size).Value = 1.0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UVerticalBoxSlot__6B_;
  this->_padding_ = 0;
  (this->Size).SizeRule.Value = '\x01';
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  return this;
}

// UVerticalBoxSlot @ 14698ea60

UVerticalBoxSlot * __thiscall
UVerticalBoxSlot::UVerticalBoxSlot(UVerticalBoxSlot *this,FObjectInitializer *param_1)

{
  FSlateChildSize FVar1;
  uint uStackX_c;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UVerticalBoxSlot__6B_;
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

// ~UVerticalBoxSlot @ 146994920

void __thiscall UVerticalBoxSlot::~UVerticalBoxSlot(UVerticalBoxSlot *this)

{
  this->_padding_ = (longlong)&___7UVisual__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BuildSlot @ 1469a5190

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UVerticalBoxSlot::BuildSlot(UVerticalBoxSlot *this,TSharedRef<SVerticalBox,1> *param_1)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> *pFVar5;
  FSizeParam *pFVar6;
  TSharedRef<SWidget,1> *pTVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  SWidget *local_238;
  FSharedReferencer<1> local_230;
  longlong local_228;
  longlong lStack_220;
  undefined1 local_218;
  undefined1 local_210 [8];
  ForAnyElementType FStack_208;
  ulonglong local_200;
  SWidget *local_1f8;
  TReferenceControllerBase<1> *local_1f0;
  bool local_1e8;
  undefined1 local_1e0 [8];
  undefined1 local_1d8 [8];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [24];
  float local_1a8;
  bool local_1a4;
  undefined1 local_1a0 [24];
  bool local_188;
  TSharedRef<SWidget,1> local_180;
  undefined1 local_170 [16];
  undefined1 local_160 [32];
  undefined1 local_140 [24];
  undefined1 local_128 [24];
  TReferenceControllerBase<1> *local_110;
  undefined1 local_f0 [40];
  FSlotArgumentsMixin local_c8;
  TPanelChildren<SBoxPanel::FSlot> *local_38;
  int local_30;
  
  plVar10 = (longlong *)0x0;
  pFVar5 = SVerticalBox::AddSlot
                     (param_1->Object,(FScopedWidgetSlotArguments<SVerticalBox::FSlot> *)local_128);
  local_228._0_4_ = (this->Padding).Left;
  local_228._4_4_ = (this->Padding).Top;
  lStack_220._0_4_ = (this->Padding).Right;
  lStack_220._4_4_ = (this->Padding).Bottom;
  this->Slot = (FSlot *)pFVar5->_padding_;
  local_218 = 1;
  bVar2 = false;
  local_200 = 0;
  local_210 = (undefined1  [8])0x0;
  FStack_208.Data = (FScriptContainerElement *)0x0;
  pFVar5->_padding_ = local_228;
  pFVar5->_padding_ = lStack_220;
  *(undefined1 *)&pFVar5->_padding_ = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar5->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_210);
  plVar9 = &pFVar5->_padding_;
  if (&pFVar5->_padding_ == (longlong *)0x0) {
    plVar9 = plVar10;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_210,
             (FWriteAccessScope *)&local_1f8);
  if (((int)local_200 != 0) && (FStack_208.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_208.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_208,0,0,0x10);
    local_200 = local_200 & 0xffffffff00000000;
  }
  if (local_1e8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1f0,(FDestructionSentinel *)&local_1f8);
  }
  if (FStack_208.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_208.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_210);
  plVar1 = plVar9 + 9;
  if ((longlong *)local_1e0 != plVar1) {
    *(uint *)plVar1 = (uint)(this->HorizontalAlignment).Value;
    *(undefined1 *)((longlong)plVar9 + 0x4c) = 1;
  }
  plVar8 = plVar10;
  if (plVar1 != (longlong *)0x0) {
    plVar8 = plVar9;
  }
  if ((longlong *)local_1d8 != plVar8 + 10) {
    *(uint *)(plVar8 + 10) = (uint)(this->VerticalAlignment).Value;
    *(undefined1 *)((longlong)plVar8 + 0x54) = 1;
  }
  if (plVar8 == (longlong *)0xffffffffffffffb8) {
    plVar8 = plVar10;
  }
  pFVar6 = UWidget::ConvertSerializedSizeParamToRuntime((FSizeParam *)local_170,&this->Size);
  local_1d0._0_4_ = pFVar6->SizeRule;
  local_1d0._8_4_ = (pFVar6->Value).Value;
  local_1d0[0xc] = (pFVar6->Value).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c0,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->Value).Getter);
  local_1a8 = (pFVar6->ShrinkValue).Value;
  local_1a4 = (pFVar6->ShrinkValue).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a0,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->ShrinkValue).Getter);
  local_188 = true;
  TOptional<FSizeParam>::operator=
            ((TOptional<FSizeParam> *)(plVar8 + 0xb),(TOptional<FSizeParam> *)local_1d0);
  if ((TOptional<FSizeParam> *)(plVar8 + 0xb) != (TOptional<FSizeParam> *)0x0) {
    plVar10 = plVar8;
  }
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
  local_238 = SNullWidget::NullWidget.Object;
  if ((UWidget *)this->_padding_ == (UWidget *)0x0) {
    local_1f8 = SNullWidget::NullWidget.Object;
    local_1f0 = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (TSharedRef<SWidget,1> *)&local_1f8;
    bVar3 = true;
  }
  else {
    pTVar7 = UWidget::TakeWidget((UWidget *)this->_padding_,&local_180);
    bVar3 = false;
    bVar2 = true;
    local_238 = pTVar7->Object;
  }
  pTVar4 = local_1f0;
  local_230.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
  if (local_230.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_230.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_230.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)(plVar10 + 1) != &local_238) {
    plVar10[1] = (longlong)local_238;
    local_238 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(plVar10 + 2),&local_230);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_230.ReferenceController);
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_180.SharedReferenceCount.ReferenceController);
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_140);
  if ((void *)local_140._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_140._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_140);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_160);
  if ((void *)local_160._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_160._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_160);
  local_128._0_8_ = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  if ((undefined8 *)local_128._8_8_ != (undefined8 *)0x0) {
    if (local_30 == -1) {
      TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_38,(FSlotArguments *)(local_128 + 8));
    }
    else {
      TPanelChildren<SBoxPanel::FSlot>::InsertSlot
                (local_38,(FSlotArguments *)(local_128 + 8),local_30);
    }
  }
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_c8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f0);
  if ((void *)local_f0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_f0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_110);
  if ((undefined8 *)local_128._8_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_128._8_8_)(local_128._8_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetHorizontalAlignment @ 1469d1330

EHorizontalAlignment __thiscall UVerticalBoxSlot::GetHorizontalAlignment(UVerticalBoxSlot *this)

{
  return (EHorizontalAlignment)(this->HorizontalAlignment).Value;
}

// GetPadding @ 1469d3700

FMargin * __thiscall
UVerticalBoxSlot::GetPadding(UVerticalBoxSlot *this,FMargin *__return_storage_ptr__)

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

// GetPrivateStaticClass @ 1469d67d0

UClass * __cdecl UVerticalBoxSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVerticalBoxSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"VerticalBoxSlot",
               &Z_Registration_Info_UClass_UVerticalBoxSlot.InnerSingleton,
               StaticRegisterNativesUVerticalBoxSlot,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UVerticalBoxSlot>,
               InternalVTableHelperCtorCaller<UVerticalBoxSlot>,local_res8,UPanelSlot::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVerticalBoxSlot.InnerSingleton;
}

// GetSize @ 1469d86a0

FSlateChildSize __thiscall UVerticalBoxSlot::GetSize(UVerticalBoxSlot *this)

{
  FSlateChildSize in_RDX;
  
  *(FSlateChildSize *)in_RDX = this->Size;
  return in_RDX;
}

// GetVerticalAlignment @ 1469d9cf0

EVerticalAlignment __thiscall UVerticalBoxSlot::GetVerticalAlignment(UVerticalBoxSlot *this)

{
  return (EVerticalAlignment)(this->VerticalAlignment).Value;
}

// ReleaseSlateResources @ 146a0b8e0

void __thiscall UVerticalBoxSlot::ReleaseSlateResources(UVerticalBoxSlot *this,bool param_1)

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

// SetHorizontalAlignment @ 146a154e0

void __thiscall
UVerticalBoxSlot::SetHorizontalAlignment(UVerticalBoxSlot *this,EHorizontalAlignment param_1)

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

// SetPadding @ 146a18e00

void __thiscall UVerticalBoxSlot::SetPadding(UVerticalBoxSlot *this,FMargin *param_1)

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

// SetSize @ 146a1b5b0

void __thiscall UVerticalBoxSlot::SetSize(UVerticalBoxSlot *this,FSlateChildSize param_1)

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

// SetVerticalAlignment @ 146a1d8e0

void __thiscall
UVerticalBoxSlot::SetVerticalAlignment(UVerticalBoxSlot *this,EVerticalAlignment param_1)

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

// StaticRegisterNativesUVerticalBoxSlot @ 146a1f320

void __cdecl UVerticalBoxSlot::StaticRegisterNativesUVerticalBoxSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UVerticalBoxSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a27410

void __thiscall UVerticalBoxSlot::SynchronizeProperties(UVerticalBoxSlot *this)

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

// execSetHorizontalAlignment @ 146a3db40

void __cdecl
UVerticalBoxSlot::execSetHorizontalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

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

// execSetPadding @ 146a40ab0

void __cdecl UVerticalBoxSlot::execSetPadding(UObject *param_1,FFrame *param_2,void *param_3)

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
  SetPadding((UVerticalBoxSlot *)param_1,&local_18);
  return;
}

// execSetSize @ 146a42a80

void __cdecl UVerticalBoxSlot::execSetSize(UObject *param_1,FFrame *param_2,void *param_3)

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
  SetSize((UVerticalBoxSlot *)param_1,FVar2);
  return;
}

// execSetVerticalAlignment @ 146a445c0

void __cdecl
UVerticalBoxSlot::execSetVerticalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

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

