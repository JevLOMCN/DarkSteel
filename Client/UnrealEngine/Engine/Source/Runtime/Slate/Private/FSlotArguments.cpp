// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 42

// OnSlotResized<UE::Slate::Private::SPanelDrawerArea> @ 1426f3650

/* WARNING: Enum "Type": Some values do not have unique names */

FSlotArguments * __thiscall
SSplitter::FSlot::FSlotArguments::OnSlotResized<UE::Slate::Private::SPanelDrawerArea>
          (FSlotArguments *this,SPanelDrawerArea *param_1,pmf_27a9554c *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnSlotResized,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnSlotResized).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSPanelDrawerArea_Private_Slate_UE___00__A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// Value<UE::Slate::Private::SPanelDrawerArea> @ 1426f4fd0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlotArguments * __thiscall
SSplitter::FSlot::FSlotArguments::Value<UE::Slate::Private::SPanelDrawerArea>
          (FSlotArguments *this,SPanelDrawerArea *param_1,pmf_8774c200 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_Value).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_Value).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_Value).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSPanelDrawerArea_Private_Slate_UE___00__A6AMXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// FSlotArguments @ 1426fcbd0

FSlotArguments * __thiscall
SConstraintCanvas::FSlot::FSlotArguments::FSlotArguments
          (FSlotArguments *this,FSlotArguments *param_1)

{
  bool bVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  param_1->_padding_ = 0;
  fVar3 = (param_1->_Offset).Value.Top;
  fVar4 = (param_1->_Offset).Value.Right;
  fVar5 = (param_1->_Offset).Value.Bottom;
  (this->_Offset).Value.Left = (param_1->_Offset).Value.Left;
  (this->_Offset).Value.Top = fVar3;
  (this->_Offset).Value.Right = fVar4;
  (this->_Offset).Value.Bottom = fVar5;
  (this->_Offset).bIsSet = (param_1->_Offset).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Offset).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->_Offset).Getter);
  dVar2 = (param_1->_Anchors).Value.Minimum.field0_0x0._s_0.Y;
  (this->_Anchors).Value.Minimum.field0_0x0._s_0.X =
       (param_1->_Anchors).Value.Minimum.field0_0x0._s_0.X;
  (this->_Anchors).Value.Minimum.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->_Anchors).Value.Maximum.field0_0x0._s_0.Y;
  (this->_Anchors).Value.Maximum.field0_0x0._s_0.X =
       (param_1->_Anchors).Value.Maximum.field0_0x0._s_0.X;
  (this->_Anchors).Value.Maximum.field0_0x0._s_0.Y = dVar2;
  (this->_Anchors).bIsSet = (param_1->_Anchors).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Anchors).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->_Anchors).Getter);
  dVar2 = (param_1->_Alignment).Value.field0_0x0._s_0.Y;
  (this->_Alignment).Value.field0_0x0._s_0.X = (param_1->_Alignment).Value.field0_0x0._s_0.X;
  (this->_Alignment).Value.field0_0x0._s_0.Y = dVar2;
  (this->_Alignment).bIsSet = (param_1->_Alignment).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Alignment).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->_Alignment).Getter);
  (this->_AutoSize).Value = (param_1->_AutoSize).Value;
  (this->_AutoSize).bIsSet = (param_1->_AutoSize).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_AutoSize).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->_AutoSize).Getter);
  (this->_ZOrder).bIsSet = false;
  bVar1 = (param_1->_ZOrder).bIsSet;
  (this->_ZOrder).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->_ZOrder).TypedValue = (param_1->_ZOrder).TypedValue;
  }
  return this;
}

// FSlotArguments @ 1426fcce0

FSlotArguments * __thiscall
SHorizontalBox::FSlot::FSlotArguments::FSlotArguments(FSlotArguments *this,FSlotArguments *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)&this->field_0x8 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&this->field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&param_1->field_0x10 = 0;
  *(undefined8 *)&param_1->field_0x8 = 0;
  uVar2 = *(undefined8 *)&param_1->field_0x20;
  *(undefined8 *)&this->field_0x18 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&this->field_0x20 = uVar2;
  this->field_0x28 = param_1->field_0x28;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x30,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->field_0x30);
  this->field_0x4c = 0;
  cVar1 = param_1->field_0x4c;
  this->field_0x4c = cVar1;
  if (cVar1 != '\0') {
    *(undefined4 *)&this->field_0x48 = *(undefined4 *)&param_1->field_0x48;
  }
  this->field_0x54 = 0;
  cVar1 = param_1->field_0x54;
  this->field_0x54 = cVar1;
  if (cVar1 != '\0') {
    *(undefined4 *)&this->field_0x50 = *(undefined4 *)&param_1->field_0x50;
  }
  this->field_0xa0 = 0;
  cVar1 = param_1->field_0xa0;
  this->field_0xa0 = cVar1;
  if (cVar1 != '\0') {
    *(undefined4 *)&this->field_0x58 = *(undefined4 *)&param_1->field_0x58;
    *(undefined4 *)&this->field_0x60 = *(undefined4 *)&param_1->field_0x60;
    this->field_0x64 = param_1->field_0x64;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x68,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->field_0x68);
    *(undefined4 *)&this->field_0x80 = *(undefined4 *)&param_1->field_0x80;
    this->field_0x84 = param_1->field_0x84;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x88,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->field_0x88);
  }
  *(undefined4 *)&this->field_0xa8 = *(undefined4 *)&param_1->field_0xa8;
  this->field_0xac = param_1->field_0xac;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0xb0,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->field_0xb0);
  *(undefined4 *)&this->field_0xc8 = *(undefined4 *)&param_1->field_0xc8;
  this->field_0xcc = param_1->field_0xcc;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0xd0,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->field_0xd0);
  return this;
}

// FSlotArguments @ 1426fce30

FSlotArguments * __thiscall
SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
          (FSlotArguments *this,
          TUniquePtr<SHorizontalBox::FSlot,TDefaultDelete<SHorizontalBox::FSlot>_> param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  FSlotArguments *pFVar5;
  
  lVar1 = *(longlong *)param_1.Ptr;
  *(undefined8 *)param_1.Ptr = 0;
  *(longlong *)this = lVar1;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  if (lVar1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Slot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                       ,0x9b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FSlotArguments *)(*pcVar3)();
      return pFVar5;
    }
  }
  this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  this->field_0x4c = 0;
  this->field_0x54 = 0;
  this->field_0xa0 = 0;
  *(undefined4 *)&this->field_0xa8 = 0;
  this->field_0xac = 0;
  *(undefined8 *)&this->field_0xc0 = 0;
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined8 *)&this->field_0xb8 = 0;
  *(undefined4 *)&this->field_0xc8 = 0;
  this->field_0xcc = 0;
  *(undefined8 *)&this->field_0xe0 = 0;
  *(undefined8 *)&this->field_0xd0 = 0;
  *(undefined8 *)&this->field_0xd8 = 0;
  puVar2 = *(undefined8 **)param_1.Ptr;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return this;
}

// FSlotArguments @ 1426fcf20

FSlotArguments * __thiscall
SSplitter::FSlot::FSlotArguments::FSlotArguments(FSlotArguments *this,FSlotArguments *param_1)

{
  bool bVar1;
  
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  param_1->_padding_ = 0;
  (this->_SizeRule).Value = (param_1->_SizeRule).Value;
  (this->_SizeRule).bIsSet = (param_1->_SizeRule).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SizeRule).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->_SizeRule).Getter);
  (this->_Value).Value = (param_1->_Value).Value;
  (this->_Value).bIsSet = (param_1->_Value).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Value).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->_Value).Getter);
  (this->_MinSize).Value = (param_1->_MinSize).Value;
  (this->_MinSize).bIsSet = (param_1->_MinSize).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinSize).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->_MinSize).Getter);
  (this->_Resizable).bIsSet = false;
  bVar1 = (param_1->_Resizable).bIsSet;
  (this->_Resizable).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->_Resizable).TypedValue = (param_1->_Resizable).TypedValue;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSlotResized,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->_OnSlotResized);
  return this;
}

// ~FSlotArguments @ 142701450

void __thiscall SConstraintCanvas::FSlot::FSlotArguments::~FSlotArguments(FSlotArguments *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_AutoSize).Getter);
  pvVar1 = *(void **)&(this->_AutoSize).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_AutoSize).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Alignment).Getter);
  pvVar1 = *(void **)&(this->_Alignment).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Alignment).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Anchors).Getter);
  pvVar1 = *(void **)&(this->_Anchors).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Anchors).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Offset).Getter);
  pvVar1 = *(void **)&(this->_Offset).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Offset).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  puVar2 = (undefined8 *)this->_padding_;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return;
}

// ~FSlotArguments @ 142701520

void __thiscall SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(FSlotArguments *this)

{
  undefined8 *puVar1;
  
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            ((FSlotArgumentsMixin *)&this->field_0x58);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x30);
  if (*(void **)&this->field_0x38 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x38);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  puVar1 = *(undefined8 **)this;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

// ~FSlotArguments @ 142701590

void __thiscall SSplitter::FSlot::FSlotArguments::~FSlotArguments(FSlotArguments *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSlotResized);
  pvVar1 = *(void **)&(this->_OnSlotResized).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnSlotResized);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinSize).Getter);
  pvVar1 = *(void **)&(this->_MinSize).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MinSize).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Value).Getter);
  pvVar1 = *(void **)&(this->_Value).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Value).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SizeRule).Getter);
  pvVar1 = *(void **)&(this->_SizeRule).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SizeRule).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  puVar2 = (undefined8 *)this->_padding_;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return;
}

// operator[] @ 1427033d0

FSlotArguments * __thiscall
TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
          (FSlotArguments *this,TSharedRef<SWidget,1> *param_1)

{
  SWidget *local_18;
  FSharedReferencer<1> local_10;
  
  local_18 = param_1->Object;
  local_10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->ChildWidget != (TSharedPtr<SWidget,1> *)&local_18) {
    (this->ChildWidget).Object = local_18;
    local_18 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ChildWidget).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  return (FSlotArguments *)this;
}

// AutoHeight @ 14270e7f0

FSlotArguments * __thiscall SVerticalBox::FSlot::FSlotArguments::AutoHeight(FSlotArguments *this)

{
  FSizeParam *pFVar1;
  undefined1 local_58 [16];
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  pFVar1 = (FSizeParam *)FAuto::FAuto((FAuto *)local_58);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&this->field_0x58,pFVar1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  if ((void *)local_28._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_28._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
  if ((void *)local_48._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_48._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  return this;
}

// AutoWidth @ 14270e870

FSlotArguments * __thiscall SHorizontalBox::FSlot::FSlotArguments::AutoWidth(FSlotArguments *this)

{
  FSizeParam *pFVar1;
  undefined1 local_58 [16];
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  pFVar1 = (FSizeParam *)FAuto::FAuto((FAuto *)local_58);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&this->field_0x58,pFVar1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  if ((void *)local_28._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_28._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
  if ((void *)local_48._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_48._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  return this;
}

// FillWidth @ 142734600

FSlotArguments * __thiscall
SHorizontalBox::FSlot::FSlotArguments::FillWidth(FSlotArguments *this,TAttribute<float> *param_1)

{
  void *pvVar1;
  FDestructionSentinel local_68;
  undefined1 local_50 [16];
  undefined1 local_40 [8];
  ForAnyElementType FStack_38;
  int local_30;
  float local_28;
  bool local_24;
  undefined1 local_20 [8];
  ForAnyElementType FStack_18;
  int local_10;
  
  local_50._8_4_ = param_1->Value;
  local_50[0xc] = param_1->bIsSet;
  local_50._0_4_ = SizeRule_Stretch;
  local_30 = 0;
  local_40 = (undefined1  [8])0x0;
  FStack_38.Data = (FScriptContainerElement *)0x0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_40,&param_1->Getter)
  ;
  local_28 = param_1->Value;
  local_24 = param_1->bIsSet;
  local_20 = (undefined1  [8])0x0;
  FStack_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_20,&param_1->Getter)
  ;
  TOptional<FSizeParam>::operator=
            ((TOptional<FSizeParam> *)&this->field_0x58,(FSizeParam *)local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_20,
             (FWriteAccessScope *)&local_68);
  if ((local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
    local_10 = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (FStack_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_20);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_40,
             (FWriteAccessScope *)&local_68);
  if ((local_30 != 0) && (FStack_38.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_38.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (FStack_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  return this;
}

// FSlotArguments @ 1427b4710

FSlotArguments * __thiscall
SScrollBox::FSlot::FSlotArguments::FSlotArguments(FSlotArguments *this,FSlotArguments *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)&this->field_0x8 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&this->field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&param_1->field_0x10 = 0;
  *(undefined8 *)&param_1->field_0x8 = 0;
  uVar2 = *(undefined8 *)&param_1->field_0x20;
  *(undefined8 *)&this->field_0x18 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&this->field_0x20 = uVar2;
  this->field_0x28 = param_1->field_0x28;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x30,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->field_0x30);
  this->field_0x4c = 0;
  cVar1 = param_1->field_0x4c;
  this->field_0x4c = cVar1;
  if (cVar1 != '\0') {
    *(undefined4 *)&this->field_0x48 = *(undefined4 *)&param_1->field_0x48;
  }
  this->field_0x54 = 0;
  cVar1 = param_1->field_0x54;
  this->field_0x54 = cVar1;
  if (cVar1 != '\0') {
    *(undefined4 *)&this->field_0x50 = *(undefined4 *)&param_1->field_0x50;
  }
  this->field_0xa0 = 0;
  cVar1 = param_1->field_0xa0;
  this->field_0xa0 = cVar1;
  if (cVar1 != '\0') {
    *(undefined4 *)&this->field_0x58 = *(undefined4 *)&param_1->field_0x58;
    *(undefined4 *)&this->field_0x60 = *(undefined4 *)&param_1->field_0x60;
    this->field_0x64 = param_1->field_0x64;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x68,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->field_0x68);
    *(undefined4 *)&this->field_0x80 = *(undefined4 *)&param_1->field_0x80;
    this->field_0x84 = param_1->field_0x84;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x88,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->field_0x88);
  }
  *(undefined4 *)&this->field_0xa8 = *(undefined4 *)&param_1->field_0xa8;
  this->field_0xac = param_1->field_0xac;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0xb0,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->field_0xb0);
  *(undefined4 *)&this->field_0xc8 = *(undefined4 *)&param_1->field_0xc8;
  this->field_0xcc = param_1->field_0xcc;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0xd0,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->field_0xd0);
  return this;
}

// FSlotArguments @ 1427b4860

FSlotArguments * __thiscall
SUniformToolbarPanel::FSlot::FSlotArguments::FSlotArguments
          (FSlotArguments *this,
          TUniquePtr<SUniformToolbarPanel::FSlot,TDefaultDelete<SUniformToolbarPanel::FSlot>_>
          param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  FSlotArguments *pFVar5;
  
  lVar1 = *(longlong *)param_1.Ptr;
  *(undefined8 *)param_1.Ptr = 0;
  *(longlong *)this = lVar1;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  if (lVar1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Slot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                       ,0x9b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FSlotArguments *)(*pcVar3)();
      return pFVar5;
    }
  }
  this->field_0x1c = 0;
  this->field_0x24 = 0;
  puVar2 = *(undefined8 **)param_1.Ptr;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return this;
}

// ~FSlotArguments @ 1427b9af0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SPrioritizedWrapBox::FSlot::FSlotArguments::~FSlotArguments(FSlotArguments *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_WrapMode).Getter);
  pvVar1 = *(void **)&(this->_WrapMode).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_WrapMode).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_WrapPriority).Getter);
  pvVar1 = *(void **)&(this->_WrapPriority).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_WrapPriority).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_AllowWrapping).Getter);
  pvVar1 = *(void **)&(this->_AllowWrapping).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_AllowWrapping).Getter);
  TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            ((FSlotArgumentsMixin *)&this->_padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  puVar2 = (undefined8 *)this->_padding_;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return;
}

// ~FSlotArguments @ 1427b9bd0

void __thiscall SScrollBox::FSlot::FSlotArguments::~FSlotArguments(FSlotArguments *this)

{
  undefined8 *puVar1;
  
  TResizingWidgetSlotMixin<SScrollBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            ((FSlotArgumentsMixin *)&this->field_0x58);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x30);
  if (*(void **)&this->field_0x38 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x38);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  puVar1 = *(undefined8 **)this;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

// operator[] @ 1427bbb90

FSlotArguments * __thiscall
TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
          (FSlotArguments *this,TSharedRef<SWidget,1> *param_1)

{
  SWidget *local_18;
  FSharedReferencer<1> local_10;
  
  local_18 = param_1->Object;
  local_10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->ChildWidget != (TSharedPtr<SWidget,1> *)&local_18) {
    (this->ChildWidget).Object = local_18;
    local_18 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ChildWidget).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  return (FSlotArguments *)this;
}

// operator[] @ 1427bbc00

FSlotArguments * __thiscall
TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
          (FSlotArguments *this,TSharedRef<SWidget,1> *param_1)

{
  SWidget *local_18;
  FSharedReferencer<1> local_10;
  
  local_18 = param_1->Object;
  local_10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->ChildWidget != (TSharedPtr<SWidget,1> *)&local_18) {
    (this->ChildWidget).Object = local_18;
    local_18 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ChildWidget).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  return (FSlotArguments *)this;
}

// operator[] @ 1427bbc70

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FSlotArguments * __thiscall
TSlotBase<SPrioritizedWrapBox::FSlot>::FSlotArguments::operator[]
          (FSlotArguments *this,TSharedRef<SWidget,1> *param_1)

{
  SWidget *local_18;
  FSharedReferencer<1> local_10;
  
  local_18 = param_1->Object;
  local_10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->ChildWidget != (TSharedPtr<SWidget,1> *)&local_18) {
    (this->ChildWidget).Object = local_18;
    local_18 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ChildWidget).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  return (FSlotArguments *)this;
}

// operator[] @ 1427bbce0

FSlotArguments * __thiscall
TSlotBase<SScrollBox::FSlot>::FSlotArguments::operator[]
          (FSlotArguments *this,TSharedRef<SWidget,1> *param_1)

{
  SWidget *local_18;
  FSharedReferencer<1> local_10;
  
  local_18 = param_1->Object;
  local_10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->ChildWidget != (TSharedPtr<SWidget,1> *)&local_18) {
    (this->ChildWidget).Object = local_18;
    local_18 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ChildWidget).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  return (FSlotArguments *)this;
}

// AllowWrapping @ 1427d0800

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FSlotArguments * __thiscall
SPrioritizedWrapBox::FSlot::FSlotArguments::AllowWrapping
          (FSlotArguments *this,TAttribute<bool> *param_1)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_AllowWrapping).Value = param_1->Value;
  (this->_AllowWrapping).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_AllowWrapping).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// FillContentWidth @ 142808610

FSlotArguments * __thiscall
SHorizontalBox::FSlot::FSlotArguments::FillContentWidth
          (FSlotArguments *this,TAttribute<float> *param_1,TAttribute<float> *param_2)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  FDestructionSentinel local_68;
  undefined1 local_50 [16];
  undefined1 local_40 [8];
  ForAnyElementType FStack_38;
  int local_30;
  float local_28;
  bool local_24;
  undefined1 local_20 [8];
  ForAnyElementType FStack_18;
  int local_10;
  
  local_50._8_4_ = param_1->Value;
  this_00 = &param_1->Getter;
  local_50[0xc] = param_1->bIsSet;
  local_50._0_4_ = SizeRule_StretchContent;
  local_30 = 0;
  local_40 = (undefined1  [8])0x0;
  FStack_38.Data = (FScriptContainerElement *)0x0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_40,this_00);
  local_28 = param_2->Value;
  local_24 = param_2->bIsSet;
  this_01 = &param_2->Getter;
  local_20 = (undefined1  [8])0x0;
  FStack_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_20,this_01);
  TOptional<FSizeParam>::operator=
            ((TOptional<FSizeParam> *)&this->field_0x58,(FSizeParam *)local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_20,
             (FWriteAccessScope *)&local_68);
  if ((local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
    local_10 = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (FStack_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_20);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_40,
             (FWriteAccessScope *)&local_68);
  if ((local_30 != 0) && (FStack_38.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_38.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (FStack_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_01);
  pvVar1 = *(void **)&(param_2->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_01);
  return this;
}

// MaxHeight @ 142821920

FSlotArguments * __thiscall
SVerticalBox::FSlot::FSlotArguments::MaxHeight(FSlotArguments *this,TAttribute<float> *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  *(float *)&this->field_0xc8 = param_1->Value;
  this->field_0xcc = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0xd0,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// MaxWidth @ 142821a10

FSlotArguments * __thiscall
SHorizontalBox::FSlot::FSlotArguments::MaxWidth(FSlotArguments *this,TAttribute<float> *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  *(float *)&this->field_0xc8 = param_1->Value;
  this->field_0xcc = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0xd0,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// MinWidth @ 142821be0

FSlotArguments * __thiscall
SHorizontalBox::FSlot::FSlotArguments::MinWidth(FSlotArguments *this,TAttribute<float> *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  *(float *)&this->field_0xa8 = param_1->Value;
  this->field_0xac = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0xb0,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// WrapMode @ 14283bab0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FSlotArguments * __thiscall
SPrioritizedWrapBox::FSlot::FSlotArguments::WrapMode
          (FSlotArguments *this,TAttribute<UE::Slate::PrioritizedWrapBox::EWrapMode> *param_1)

{
  TDelegate<UE::Slate::PrioritizedWrapBox::EWrapMode___cdecl(void),FDefaultDelegateUserPolicy>
  *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_WrapMode).Value = param_1->Value;
  (this->_WrapMode).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_WrapMode).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// WrapPriority @ 14283bb20

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FSlotArguments * __thiscall
SPrioritizedWrapBox::FSlot::FSlotArguments::WrapPriority
          (FSlotArguments *this,TAttribute<int> *param_1)

{
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_WrapPriority).Value = param_1->Value;
  (this->_WrapPriority).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_WrapPriority).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// FSlotArguments @ 1428b9110

FSlotArguments * __thiscall
SConstraintCanvas::FSlot::FSlotArguments::FSlotArguments
          (FSlotArguments *this,
          TUniquePtr<SConstraintCanvas::FSlot,TDefaultDelete<SConstraintCanvas::FSlot>_> param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  FSlotArguments *pFVar5;
  
  lVar1 = (param_1.Ptr)->_padding_;
  (param_1.Ptr)->_padding_ = 0;
  this->_padding_ = lVar1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  if (lVar1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Slot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                       ,0x9b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FSlotArguments *)(*pcVar3)();
      return pFVar5;
    }
  }
  (this->_Offset).bIsSet = false;
  (this->_Offset).Value.Left = 0.0;
  (this->_Offset).Value.Top = 0.0;
  (this->_Offset).Value.Right = 0.0;
  (this->_Offset).Value.Bottom = 0.0;
  *(undefined8 *)&(this->_Offset).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Offset).Getter = 0;
  *(undefined8 *)&(this->_Offset).Getter.field_0x8 = 0;
  (this->_Anchors).bIsSet = false;
  *(undefined8 *)&(this->_Anchors).Getter.field_0x8 = 0;
  (this->_Anchors).Value.Minimum.field0_0x0._s_0.X = 0.0;
  (this->_Anchors).Value.Minimum.field0_0x0._s_0.Y = 0.0;
  (this->_Anchors).Value.Maximum.field0_0x0._s_0.X = 0.0;
  (this->_Anchors).Value.Maximum.field0_0x0._s_0.Y = 0.0;
  *(undefined8 *)&(this->_Anchors).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Anchors).Getter = 0;
  (this->_Alignment).Value.field0_0x0._s_0.X = 0.0;
  (this->_Alignment).Value.field0_0x0._s_0.Y = 0.0;
  (this->_Alignment).bIsSet = false;
  *(undefined8 *)&(this->_Alignment).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Alignment).Getter = 0;
  *(undefined8 *)&(this->_Alignment).Getter.field_0x8 = 0;
  (this->_AutoSize).Value = false;
  (this->_AutoSize).bIsSet = false;
  *(undefined8 *)&(this->_AutoSize).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_AutoSize).Getter = 0;
  *(undefined8 *)&(this->_AutoSize).Getter.field_0x8 = 0;
  (this->_ZOrder).bIsSet = false;
  puVar2 = (undefined8 *)(param_1.Ptr)->_padding_;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return this;
}

// FSlotArguments @ 1428b9220

FSlotArguments * __thiscall
SGridPanel::FSlot::FSlotArguments::FSlotArguments
          (FSlotArguments *this,
          TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_> param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  FSlotArguments *pFVar5;
  
  lVar1 = (param_1.Ptr)->_padding_;
  (param_1.Ptr)->_padding_ = 0;
  this->_padding_ = lVar1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  if (lVar1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Slot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                       ,0x9b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FSlotArguments *)(*pcVar3)();
      return pFVar5;
    }
  }
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  (this->_Column).bIsSet = false;
  (this->_ColumnSpan).bIsSet = false;
  (this->_Row).bIsSet = false;
  (this->_RowSpan).bIsSet = false;
  (this->_Layer).bIsSet = false;
  (this->_Nudge).bIsSet = false;
  puVar2 = (undefined8 *)(param_1.Ptr)->_padding_;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return this;
}

// FSlotArguments @ 1428b92e0

FSlotArguments * __thiscall
SRadialBox::FSlot::FSlotArguments::FSlotArguments
          (FSlotArguments *this,
          TUniquePtr<SRadialBox::FSlot,TDefaultDelete<SRadialBox::FSlot>_> param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  FSlotArguments *pFVar5;
  
  lVar1 = *(longlong *)param_1.Ptr;
  *(undefined8 *)param_1.Ptr = 0;
  *(longlong *)this = lVar1;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  if (lVar1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Slot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                       ,0x9b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FSlotArguments *)(*pcVar3)();
      return pFVar5;
    }
  }
  puVar2 = *(undefined8 **)param_1.Ptr;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return this;
}

// FSlotArguments @ 1428b9360

FSlotArguments * __thiscall
SScrollBox::FSlot::FSlotArguments::FSlotArguments
          (FSlotArguments *this,
          TUniquePtr<SScrollBox::FSlot,TDefaultDelete<SScrollBox::FSlot>_> param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  FSlotArguments *pFVar5;
  
  lVar1 = (param_1.Ptr)->_padding_;
  (param_1.Ptr)->_padding_ = 0;
  *(longlong *)this = lVar1;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  if (lVar1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Slot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                       ,0x9b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FSlotArguments *)(*pcVar3)();
      return pFVar5;
    }
  }
  this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  this->field_0x4c = 0;
  this->field_0x54 = 0;
  this->field_0xa0 = 0;
  *(undefined4 *)&this->field_0xa8 = 0;
  this->field_0xac = 0;
  *(undefined8 *)&this->field_0xc0 = 0;
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined8 *)&this->field_0xb8 = 0;
  *(undefined4 *)&this->field_0xc8 = 0;
  this->field_0xcc = 0;
  *(undefined8 *)&this->field_0xe0 = 0;
  *(undefined8 *)&this->field_0xd0 = 0;
  *(undefined8 *)&this->field_0xd8 = 0;
  puVar2 = (undefined8 *)(param_1.Ptr)->_padding_;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return this;
}

// FSlotArguments @ 1428b9450

FSlotArguments * __thiscall
SSplitter::FSlot::FSlotArguments::FSlotArguments
          (FSlotArguments *this,
          TUniquePtr<SSplitter::FSlot,TDefaultDelete<SSplitter::FSlot>_> param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  FSlotArguments *pFVar5;
  
  lVar1 = (param_1.Ptr)->_padding_;
  (param_1.Ptr)->_padding_ = 0;
  this->_padding_ = lVar1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  if (lVar1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Slot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                       ,0x9b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FSlotArguments *)(*pcVar3)();
      return pFVar5;
    }
  }
  (this->_SizeRule).Value = SizeToContent;
  (this->_SizeRule).bIsSet = false;
  *(undefined8 *)&(this->_SizeRule).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SizeRule).Getter = 0;
  *(undefined8 *)&(this->_SizeRule).Getter.field_0x8 = 0;
  (this->_Value).Value = 0.0;
  (this->_Value).bIsSet = false;
  *(undefined8 *)&(this->_Value).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Value).Getter = 0;
  *(undefined8 *)&(this->_Value).Getter.field_0x8 = 0;
  (this->_MinSize).Value = 0.0;
  (this->_MinSize).bIsSet = false;
  *(undefined8 *)&(this->_MinSize).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MinSize).Getter = 0;
  *(undefined8 *)&(this->_MinSize).Getter.field_0x8 = 0;
  (this->_Resizable).bIsSet = false;
  *(undefined8 *)&this->_OnSlotResized = 0;
  *(undefined8 *)&(this->_OnSlotResized).field_0x8 = 0;
  *(undefined4 *)&(this->_OnSlotResized).field_0x10 = 0;
  puVar2 = (undefined8 *)(param_1.Ptr)->_padding_;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return this;
}

// FSlotArguments @ 1429b9b80

FSlotArguments * __thiscall
TBasicLayoutWidgetSlot<FBasicLayoutWidgetSlot>::FSlotArguments::FSlotArguments
          (FSlotArguments *this,
          TUniquePtr<FBasicLayoutWidgetSlot,TDefaultDelete<FBasicLayoutWidgetSlot>_> param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  FSlotArguments *pFVar5;
  
  lVar1 = *(longlong *)param_1.Ptr;
  *(undefined8 *)param_1.Ptr = 0;
  *(longlong *)this = lVar1;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  if (lVar1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Slot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                       ,0x9b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FSlotArguments *)(*pcVar3)();
      return pFVar5;
    }
  }
  this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  this->field_0x4c = 0;
  this->field_0x54 = 0;
  puVar2 = *(undefined8 **)param_1.Ptr;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return this;
}

// FSlotArguments @ 1429b9c20

FSlotArguments * __thiscall
SCanvas::FSlot::FSlotArguments::FSlotArguments
          (FSlotArguments *this,TUniquePtr<SCanvas::FSlot,TDefaultDelete<SCanvas::FSlot>_> param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  FSlotArguments *pFVar5;
  
  lVar1 = (param_1.Ptr)->_padding_;
  (param_1.Ptr)->_padding_ = 0;
  this->_padding_ = lVar1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  if (lVar1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Slot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                       ,0x9b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FSlotArguments *)(*pcVar3)();
      return pFVar5;
    }
  }
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  (this->_Position).Value.field0_0x0._s_0.X = 0.0;
  (this->_Position).Value.field0_0x0._s_0.Y = 0.0;
  (this->_Position).bIsSet = false;
  *(undefined8 *)&(this->_Position).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Position).Getter = 0;
  *(undefined8 *)&(this->_Position).Getter.field_0x8 = 0;
  (this->_Size).Value.field0_0x0._s_0.X = 0.0;
  (this->_Size).Value.field0_0x0._s_0.Y = 0.0;
  (this->_Size).bIsSet = false;
  *(undefined8 *)&(this->_Size).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Size).Getter = 0;
  *(undefined8 *)&(this->_Size).Getter.field_0x8 = 0;
  puVar2 = (undefined8 *)(param_1.Ptr)->_padding_;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return this;
}

// FSlotArguments @ 1429b9ce0

FSlotArguments * __thiscall
SUniformGridPanel::FSlot::FSlotArguments::FSlotArguments
          (FSlotArguments *this,
          TUniquePtr<SUniformGridPanel::FSlot,TDefaultDelete<SUniformGridPanel::FSlot>_> param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  FSlotArguments *pFVar5;
  
  lVar1 = (param_1.Ptr)->_padding_;
  (param_1.Ptr)->_padding_ = 0;
  *(longlong *)this = lVar1;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  if (lVar1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Slot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                       ,0x9b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FSlotArguments *)(*pcVar3)();
      return pFVar5;
    }
  }
  this->field_0x1c = 0;
  this->field_0x24 = 0;
  puVar2 = (undefined8 *)(param_1.Ptr)->_padding_;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return this;
}

// FSlotArguments @ 142a17df0

FSlotArguments * __thiscall
TSlotBase<SListPanel::FSlot>::FSlotArguments::FSlotArguments
          (FSlotArguments *this,
          TUniquePtr<SListPanel::FSlot,TDefaultDelete<SListPanel::FSlot>_> param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  FSlotArguments *pFVar4;
  
                    /* WARNING: Load size is inaccurate */
  (this->Slot).Ptr = *param_1.Ptr;
  *(undefined8 *)param_1.Ptr = 0;
  (this->ChildWidget).Object = (SWidget *)0x0;
  (this->ChildWidget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((this->Slot).Ptr == (FSlot *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Slot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                       ,0x9b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FSlotArguments *)(*pcVar2)();
      return pFVar4;
    }
  }
  puVar1 = *(undefined8 **)param_1.Ptr;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return this;
}

// operator[] @ 142a19210

FSlotArguments * __thiscall
TSlotBase<SSplitter::FSlot>::FSlotArguments::operator[]
          (FSlotArguments *this,TSharedRef<SWidget,1> *param_1)

{
  SWidget *local_18;
  FSharedReferencer<1> local_10;
  
  local_18 = param_1->Object;
  local_10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->ChildWidget != (TSharedPtr<SWidget,1> *)&local_18) {
    (this->ChildWidget).Object = local_18;
    local_18 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ChildWidget).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  return (FSlotArguments *)this;
}

// MinSize @ 142a2d410

FSlotArguments * __thiscall
SSplitter::FSlot::FSlotArguments::MinSize(FSlotArguments *this,TAttribute<float> *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_MinSize).Value = param_1->Value;
  (this->_MinSize).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinSize).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// OnSlotResized @ 142a31c10

FSlotArguments * __thiscall
SSplitter::FSlot::FSlotArguments::OnSlotResized
          (FSlotArguments *this,TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSlotResized,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return this;
}

// Resizable @ 142a35a50

FSlotArguments * __thiscall
SSplitter::FSlot::FSlotArguments::Resizable(FSlotArguments *this,TOptional<bool> param_1)

{
  undefined6 in_register_00000012;
  
  if ((TOptional<bool> *)CONCAT62(in_register_00000012,param_1) != &this->_Resizable) {
    if (*(char *)(CONCAT62(in_register_00000012,param_1) + 1) == '\0') {
      if ((this->_Resizable).bIsSet != false) {
        (this->_Resizable).bIsSet = false;
        return this;
      }
    }
    else {
      (this->_Resizable).TypedValue = *(bool *)CONCAT62(in_register_00000012,param_1);
      (this->_Resizable).bIsSet = true;
    }
  }
  return this;
}

// SizeRule @ 142a36d80

FSlotArguments * __thiscall
SSplitter::FSlot::FSlotArguments::SizeRule
          (FSlotArguments *this,TAttribute<SSplitter::ESizeRule> *param_1)

{
  TDelegate<SSplitter::ESizeRule___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_SizeRule).Value = param_1->Value;
  (this->_SizeRule).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SizeRule).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

