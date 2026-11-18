// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 26

// GetPadding_WrapperImpl @ 146964cd0

void __cdecl UStackBoxSlot::GetPadding_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x40);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x38);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetPadding_WrapperImpl @ 146964ce0

void __cdecl UStackBoxSlot::SetPadding_WrapperImpl(void *param_1,void *param_2)

{
  FMargin local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  SetPadding(param_1,&local_18);
  return;
}

// GetSize_WrapperImpl @ 146964d10

void __cdecl UStackBoxSlot::GetSize_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x48);
  return;
}

// SetSize_WrapperImpl @ 146964d60

void __cdecl UStackBoxSlot::SetSize_WrapperImpl(void *param_1,void *param_2)

{
  SetSize(param_1,*(FSlateChildSize *)param_2);
  return;
}

// GetHorizontalAlignment_WrapperImpl @ 146964d70

void __cdecl UStackBoxSlot::GetHorizontalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x50);
  return;
}

// SetHorizontalAlignment_WrapperImpl @ 146964d80

void __cdecl UStackBoxSlot::SetHorizontalAlignment_WrapperImpl(void *param_1,void *param_2)

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

// GetVerticalAlignment_WrapperImpl @ 146964dc0

void __cdecl UStackBoxSlot::GetVerticalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x51);
  return;
}

// SetVerticalAlignment_WrapperImpl @ 146964dd0

void __cdecl UStackBoxSlot::SetVerticalAlignment_WrapperImpl(void *param_1,void *param_2)

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

// StaticClass @ 146964e40

UClass * __cdecl UStackBoxSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStackBoxSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"StackBoxSlot",
               &Z_Registration_Info_UClass_UStackBoxSlot.InnerSingleton,
               StaticRegisterNativesUStackBoxSlot,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UStackBoxSlot>,InternalVTableHelperCtorCaller<UStackBoxSlot>,
               local_res8,UPanelSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStackBoxSlot.InnerSingleton;
}

// UStackBoxSlot @ 14698df90

UStackBoxSlot * __thiscall UStackBoxSlot::UStackBoxSlot(UStackBoxSlot *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->Size).Value = 1.0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UStackBoxSlot__6B_;
  this->_padding_ = 0;
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  (this->Size).SizeRule.Value = '\0';
  this->HorizontalAlignment = '\0';
  this->VerticalAlignment = '\0';
  this->Slot = (FSlot *)0x0;
  return this;
}

// UStackBoxSlot @ 14698dfe0

UStackBoxSlot * __thiscall
UStackBoxSlot::UStackBoxSlot(UStackBoxSlot *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->Size).Value = 1.0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UStackBoxSlot__6B_;
  this->_padding_ = 0;
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  (this->Size).SizeRule.Value = '\0';
  this->HorizontalAlignment = '\0';
  this->VerticalAlignment = '\0';
  this->Slot = (FSlot *)0x0;
  return this;
}

// ~UStackBoxSlot @ 1469945a0

void __thiscall UStackBoxSlot::~UStackBoxSlot(UStackBoxSlot *this)

{
  this->_padding_ = (longlong)&___7UVisual__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BuildSlot @ 1469a4a40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UStackBoxSlot::BuildSlot(UStackBoxSlot *this,TSharedRef<SStackBox,1> *param_1)

{
  SStackBox *pSVar1;
  code *pcVar2;
  bool bVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  FSlot *this_00;
  FSizeParam *pFVar6;
  TSharedRef<SWidget,1> *pTVar7;
  SWidget *pSVar8;
  undefined1 local_270 [8];
  ForAnyElementType FStack_268;
  ulonglong local_260;
  undefined **local_258;
  FSlot *local_250;
  SWidget *pSStack_248;
  FSharedReferencer<1> aFStack_240 [3];
  undefined1 local_228;
  undefined1 local_220 [8];
  ForAnyElementType FStack_218;
  ulonglong local_210;
  uint local_208;
  undefined1 local_204;
  uint local_200;
  undefined1 local_1fc;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [32];
  undefined1 local_1c8 [24];
  bool local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1a0;
  ForAnyElementType FStack_198;
  ulonglong local_190;
  undefined4 local_188;
  undefined1 local_184;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_180;
  ForAnyElementType FStack_178;
  ulonglong local_170;
  TPanelChildren<SBoxPanel::FSlot> *local_168;
  int local_160;
  TSharedRef<SWidget,1> local_158;
  undefined8 local_148;
  FSharedReferencer<1> local_140;
  undefined1 local_138 [16];
  undefined1 local_128 [24];
  float local_110;
  bool local_10c;
  undefined1 local_108 [24];
  bool local_f0;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  TSharedRef<SWidget,1> local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  
  pSVar1 = param_1->Object;
  this_00 = ::operator_new(0x58);
  if (this_00 == (FSlot *)0x0) {
    local_250 = (FSlot *)0x0;
  }
  else {
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
    local_250 = SStackBox::FSlot::FSlot(this_00);
    pSStack_248 = (SWidget *)0x0;
    aFStack_240[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (local_250 != (FSlot *)0x0) goto LAB_1469a4ae6;
  }
  aFStack_240[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pSStack_248 = (SWidget *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Slot.Get()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                     ,0x9b,L"");
  if (bVar5) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1469a4ae6:
  aFStack_240[1].ReferenceController._0_4_ = (this->Padding).Left;
  aFStack_240[1].ReferenceController._4_4_ = (this->Padding).Top;
  aFStack_240[2].ReferenceController._0_4_ = (this->Padding).Right;
  aFStack_240[2].ReferenceController._4_4_ = (this->Padding).Bottom;
  local_160 = -1;
  local_204 = 0;
  local_1fc = 0;
  local_1b0 = false;
  local_1a8 = 0;
  local_1a4 = 0;
  local_188 = 0;
  local_184 = 0;
  local_168 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar1->field_0x218;
  this->Slot = local_250;
  bVar5 = false;
  local_260 = 0;
  local_220 = (undefined1  [8])0x0;
  FStack_218.Data = (FScriptContainerElement *)0x0;
  local_210 = 0;
  local_1a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_198.Data = (FScriptContainerElement *)0x0;
  local_190 = 0;
  local_180.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_178.Data = (FScriptContainerElement *)0x0;
  local_170 = 0;
  local_258 = &___7__FScopedWidgetSlotArguments_VFSlot_SStackBox___SBoxPanel__6B_;
  local_270 = (undefined1  [8])0x0;
  FStack_268.Data = (FScriptContainerElement *)0x0;
  local_228 = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_220,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_270);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_270,
             (FWriteAccessScope *)&local_e8);
  if (((int)local_260 != 0) && (FStack_268.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_268.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_268,0,0,0x10);
    local_260 = local_260 & 0xffffffff00000000;
  }
  if (local_e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
  }
  if (FStack_268.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_268.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_270);
  local_208 = (uint)(this->HorizontalAlignment).Value;
  local_200 = (uint)(this->VerticalAlignment).Value;
  local_204 = 1;
  local_1fc = 1;
  pFVar6 = UWidget::ConvertSerializedSizeParamToRuntime((FSizeParam *)local_78,&this->Size);
  local_138._0_4_ = pFVar6->SizeRule;
  local_138._8_4_ = (pFVar6->Value).Value;
  local_138[0xc] = (pFVar6->Value).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_128,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->Value).Getter);
  local_110 = (pFVar6->ShrinkValue).Value;
  local_10c = (pFVar6->ShrinkValue).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_108,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->ShrinkValue).Getter);
  local_f0 = true;
  TOptional<FSizeParam>::operator=
            ((TOptional<FSizeParam> *)local_1f8,(TOptional<FSizeParam> *)local_138);
  if (local_f0 != false) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_108);
    if ((void *)local_108._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_108._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_108);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_128);
    if ((void *)local_128._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_128._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_128);
  }
  pSVar8 = SNullWidget::NullWidget.Object;
  if ((UWidget *)this->_padding_ == (UWidget *)0x0) {
    local_158.Object = SNullWidget::NullWidget.Object;
    local_158.SharedReferenceCount.ReferenceController =
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
    pTVar7 = &local_158;
    bVar3 = true;
  }
  else {
    pTVar7 = UWidget::TakeWidget((UWidget *)this->_padding_,&local_88);
    bVar3 = false;
    bVar5 = true;
    pSVar8 = pTVar7->Object;
  }
  FVar4.ReferenceController = local_158.SharedReferenceCount.ReferenceController;
  local_140.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
  if (local_140.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_140.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_140.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_148 = 0;
  pSStack_248 = pSVar8;
  SharedPointerInternals::FSharedReferencer<1>::operator=(aFStack_240,&local_140);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_140.ReferenceController);
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar4.ReferenceController);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
  if ((void *)local_48._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_48._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
  if ((void *)local_68._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  local_258 = &___7__FScopedWidgetSlotArguments_VFSlot_SStackBox___SBoxPanel__6B_;
  if (local_250 != (FSlot *)0x0) {
    if (local_160 == -1) {
      TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_168,(FSlotArguments *)&local_250);
    }
    else {
      TPanelChildren<SBoxPanel::FSlot>::InsertSlot(local_168,(FSlotArguments *)&local_250,local_160)
      ;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_180,(FWriteAccessScope *)&local_d0);
  if (((int)local_170 != 0) && (FStack_178.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_178.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_178,0,0,0x10);
    local_170 = local_170 & 0xffffffff00000000;
  }
  if (local_d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
  }
  if (FStack_178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_178.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_180.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1a0,(FWriteAccessScope *)&local_b8);
  if (((int)local_190 != 0) && (FStack_198.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_198.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_198,0,0,0x10);
    local_190 = local_190 & 0xffffffff00000000;
  }
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  if (FStack_198.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_198.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1a0.AccessDetector);
  if (local_1b0 != false) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c8);
    if ((void *)local_1c8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1c8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1c8);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e8);
    if ((void *)local_1e8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1e8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1e8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_220,
             (FWriteAccessScope *)&local_a0);
  if (((int)local_210 != 0) && (FStack_218.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_218.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_218,0,0,0x10);
    local_210 = local_210 & 0xffffffff00000000;
  }
  if (local_a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
  }
  if (FStack_218.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_218.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_220);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_240[0].ReferenceController);
  if (local_250 != (FSlot *)0x0) {
    (*(code *)**(undefined8 **)local_250)(local_250,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetHorizontalAlignment @ 1469d1310

EHorizontalAlignment __thiscall UStackBoxSlot::GetHorizontalAlignment(UStackBoxSlot *this)

{
  return (EHorizontalAlignment)(this->HorizontalAlignment).Value;
}

// GetPadding @ 1469d36e0

FMargin * __thiscall UStackBoxSlot::GetPadding(UStackBoxSlot *this,FMargin *__return_storage_ptr__)

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

// GetPrivateStaticClass @ 1469d6110

UClass * __cdecl UStackBoxSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStackBoxSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"StackBoxSlot",
               &Z_Registration_Info_UClass_UStackBoxSlot.InnerSingleton,
               StaticRegisterNativesUStackBoxSlot,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UStackBoxSlot>,InternalVTableHelperCtorCaller<UStackBoxSlot>,
               local_res8,UPanelSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStackBoxSlot.InnerSingleton;
}

// GetSize @ 1469d8680

FSlateChildSize __thiscall UStackBoxSlot::GetSize(UStackBoxSlot *this)

{
  FSlateChildSize in_RDX;
  
  *(FSlateChildSize *)in_RDX = this->Size;
  return in_RDX;
}

// GetVerticalAlignment @ 1469d9cd0

EVerticalAlignment __thiscall UStackBoxSlot::GetVerticalAlignment(UStackBoxSlot *this)

{
  return (EVerticalAlignment)(this->VerticalAlignment).Value;
}

// ReleaseSlateResources @ 146a0b5a0

void __thiscall UStackBoxSlot::ReleaseSlateResources(UStackBoxSlot *this,bool param_1)

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

// ReplaceContent @ 146a0cea0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UStackBoxSlot::ReplaceContent(UStackBoxSlot *this,UWidget *param_1)

{
  longlong *plVar1;
  FSlot *this_00;
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
    if (param_1 == (UWidget *)0x0) goto LAB_146a0cf34;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)param_1);
    this->_padding_ = (longlong)param_1;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  (param_1->Slot).field0_0x0.DebugPtr = (UPanelSlot *)this;
LAB_146a0cf34:
  this_00 = this->Slot;
  if (this_00 != (FSlot *)0x0) {
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
    pSVar3 = ((TSharedRef<SWidget,1> *)&this_00->field_0x10)->Object;
    pTVar4 = ((FSharedReferencer<1> *)&this_00->field_0x18)->ReferenceController;
    ((TSharedRef<SWidget,1> *)&this_00->field_0x10)->Object = pTVar5->Object;
    ((FSharedReferencer<1> *)&this_00->field_0x18)->ReferenceController = pTVar2;
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

// SetHorizontalAlignment @ 146a15480

void __thiscall
UStackBoxSlot::SetHorizontalAlignment(UStackBoxSlot *this,EHorizontalAlignment param_1)

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

// SetPadding @ 146a18d20

void __thiscall UStackBoxSlot::SetPadding(UStackBoxSlot *this,FMargin *param_1)

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

// SetSize @ 146a1b440

void __thiscall UStackBoxSlot::SetSize(UStackBoxSlot *this,FSlateChildSize param_1)

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

// SetVerticalAlignment @ 146a1d880

void __thiscall UStackBoxSlot::SetVerticalAlignment(UStackBoxSlot *this,EVerticalAlignment param_1)

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

// StaticRegisterNativesUStackBoxSlot @ 146a1f110

void __cdecl UStackBoxSlot::StaticRegisterNativesUStackBoxSlot(void)

{
  return;
}

// SynchronizeProperties @ 146a268a0

void __thiscall UStackBoxSlot::SynchronizeProperties(UStackBoxSlot *this)

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

