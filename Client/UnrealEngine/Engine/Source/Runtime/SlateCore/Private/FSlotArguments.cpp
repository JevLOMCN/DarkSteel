// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 14

// ~FSlotArguments @ 14254bdc0

void __thiscall
UE::Slate::Private::SContainerAttribute::FSlot::FSlotArguments::~FSlotArguments
          (FSlotArguments *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SlotAttribute3).Getter);
  pvVar1 = *(void **)&(this->_SlotAttribute3).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SlotAttribute3).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SlotAttribute2).Getter);
  pvVar1 = *(void **)&(this->_SlotAttribute2).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SlotAttribute2).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SlotAttribute1).Getter);
  pvVar1 = *(void **)&(this->_SlotAttribute1).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SlotAttribute1).Getter);
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

// SlotAttribute1 @ 1425a8630

FSlotArguments * __thiscall
UE::Slate::Private::SContainerAttribute::FSlot::FSlotArguments::SlotAttribute1
          (FSlotArguments *this,TAttribute<int> *param_1)

{
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_SlotAttribute1).Value = param_1->Value;
  (this->_SlotAttribute1).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SlotAttribute1).Getter,
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

// SlotAttribute2 @ 1425a8690

FSlotArguments * __thiscall
UE::Slate::Private::SContainerAttribute::FSlot::FSlotArguments::SlotAttribute2
          (FSlotArguments *this,TAttribute<int> *param_1)

{
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_SlotAttribute2).Value = param_1->Value;
  (this->_SlotAttribute2).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SlotAttribute2).Getter,
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

// SlotAttribute3 @ 1425a86f0

FSlotArguments * __thiscall
UE::Slate::Private::SContainerAttribute::FSlot::FSlotArguments::SlotAttribute3
          (FSlotArguments *this,TAttribute<int> *param_1)

{
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_SlotAttribute3).Value = param_1->Value;
  (this->_SlotAttribute3).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SlotAttribute3).Getter,
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

// FSlotArguments @ 1425bdee0

FSlotArguments * __thiscall
SOverlay::FOverlaySlot::FSlotArguments::FSlotArguments(FSlotArguments *this,FSlotArguments *param_1)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  param_1->_padding_ = 0;
  lVar3 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar3;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->_padding_);
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 4);
  *(char *)((longlong)&this->_padding_ + 4) = cVar1;
  if (cVar1 != '\0') {
    *(int *)&this->_padding_ = (int)param_1->_padding_;
  }
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 4);
  *(char *)((longlong)&this->_padding_ + 4) = cVar1;
  if (cVar1 != '\0') {
    *(int *)&this->_padding_ = (int)param_1->_padding_;
  }
  (this->_ZOrder).bIsSet = false;
  bVar2 = (param_1->_ZOrder).bIsSet;
  (this->_ZOrder).bIsSet = bVar2;
  if (bVar2 != false) {
    (this->_ZOrder).TypedValue = (param_1->_ZOrder).TypedValue;
  }
  return this;
}

// FSlotArguments @ 1425bdf90

FSlotArguments * __thiscall
SOverlay::FOverlaySlot::FSlotArguments::FSlotArguments
          (FSlotArguments *this,
          TUniquePtr<SOverlay::FOverlaySlot,TDefaultDelete<SOverlay::FOverlaySlot>_> param_1)

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
  (this->_ZOrder).bIsSet = false;
  puVar2 = (undefined8 *)(param_1.Ptr)->_padding_;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return this;
}

// FSlotArguments @ 1425be040

FSlotArguments * __thiscall
SVerticalBox::FSlot::FSlotArguments::FSlotArguments(FSlotArguments *this,FSlotArguments *param_1)

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

// FSlotArguments @ 1425be190

FSlotArguments * __thiscall
SVerticalBox::FSlot::FSlotArguments::FSlotArguments
          (FSlotArguments *this,
          TUniquePtr<SVerticalBox::FSlot,TDefaultDelete<SVerticalBox::FSlot>_> param_1)

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

// ~FSlotArguments @ 1425c1990

void __thiscall SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(FSlotArguments *this)

{
  undefined8 *puVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  puVar1 = (undefined8 *)this->_padding_;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

// ~FSlotArguments @ 1425c19f0

void __thiscall SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(FSlotArguments *this)

{
  undefined8 *puVar1;
  
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
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

// operator[] @ 1425c3240

FSlotArguments * __thiscall
TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
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

// operator[] @ 1425c32b0

FSlotArguments * __thiscall
TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
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

// operator[] @ 1425c3320

FSlotArguments * __thiscall
TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
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

// FillHeight @ 1425dba40

FSlotArguments * __thiscall
SVerticalBox::FSlot::FSlotArguments::FillHeight(FSlotArguments *this,TAttribute<float> *param_1)

{
  void *pvVar1;
  undefined1 local_58 [16];
  undefined1 local_48 [24];
  float local_30;
  bool local_2c;
  undefined1 local_28 [32];
  
  local_58._8_4_ = param_1->Value;
  local_58[0xc] = param_1->bIsSet;
  local_58._0_4_ = SizeRule_Stretch;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,&param_1->Getter)
  ;
  local_30 = param_1->Value;
  local_2c = param_1->bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_28,&param_1->Getter)
  ;
  TOptional<FSizeParam>::operator=
            ((TOptional<FSizeParam> *)&this->field_0x58,(FSizeParam *)local_58);
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

