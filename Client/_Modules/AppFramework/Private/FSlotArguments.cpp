// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 22

// FSlotArguments @ 142f36c80

FSlotArguments * __thiscall
SSegmentedControl<int>::FSlot::FSlotArguments::FSlotArguments
          (FSlotArguments *this,FSlotArguments *param_1)

{
  char cVar1;
  bool bVar2;
  
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  param_1->_padding_ = 0;
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
  FText::FText(&(this->_Text).Value,&(param_1->_Text).Value);
  (this->_Text).bIsSet = (param_1->_Text).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->_Text).Getter);
  FText::FText(&(this->_ToolTip).Value,&(param_1->_ToolTip).Value);
  (this->_ToolTip).bIsSet = (param_1->_ToolTip).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ToolTip).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->_ToolTip).Getter);
  (this->_ToolTipWidget).Value.Object = (param_1->_ToolTipWidget).Value.Object;
  (this->_ToolTipWidget).Value.SharedReferenceCount.ReferenceController =
       (param_1->_ToolTipWidget).Value.SharedReferenceCount.ReferenceController;
  (param_1->_ToolTipWidget).Value.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->_ToolTipWidget).Value.Object = (IToolTip *)0x0;
  (this->_ToolTipWidget).bIsSet = (param_1->_ToolTipWidget).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ToolTipWidget).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->_ToolTipWidget).Getter);
  (this->_Icon).Value = (param_1->_Icon).Value;
  (this->_Icon).bIsSet = (param_1->_Icon).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Icon).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->_Icon).Getter);
  (this->_Value).bIsSet = false;
  bVar2 = (param_1->_Value).bIsSet;
  (this->_Value).bIsSet = bVar2;
  if (bVar2 != false) {
    (this->_Value).TypedValue = (param_1->_Value).TypedValue;
  }
  return this;
}

// ~FSlotArguments @ 142f3f220

void __thiscall
SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments(FSlotArguments *this)

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

// ~FSlotArguments @ 142f3f290

void __thiscall
TSlotBase<SSegmentedControl<int>::FSlot>::FSlotArguments::~FSlotArguments(FSlotArguments *this)

{
  TSharedPtr<SWidget,1>::~TSharedPtr<SWidget,1>(&this->ChildWidget);
  TDefaultDelete<SSegmentedControl<int>::FSlot>::operator()
            ((TDefaultDelete<SSegmentedControl<int>::FSlot> *)this,(this->Slot).Ptr);
  return;
}

// ~FSlotArguments @ 142f3f2f0

void __thiscall
TSlotBase<SUniformGridPanel::FSlot>::FSlotArguments::~FSlotArguments(FSlotArguments *this)

{
  TSharedPtr<SWidget,1>::~TSharedPtr<SWidget,1>(&this->ChildWidget);
  TDefaultDelete<SUniformGridPanel::FSlot>::operator()
            ((TDefaultDelete<SUniformGridPanel::FSlot> *)this,(this->Slot).Ptr);
  return;
}

// ~FSlotArguments @ 142f3f350

void __thiscall SSegmentedControl<int>::FSlot::FSlotArguments::~FSlotArguments(FSlotArguments *this)

{
  TAttribute<FSlateBrush_const_*>::~TAttribute<FSlateBrush_const_*>(&this->_Icon);
  TAttribute<TSharedPtr<IToolTip,1>_>::~TAttribute<TSharedPtr<IToolTip,1>_>(&this->_ToolTipWidget);
  TAttribute<FText>::~TAttribute<FText>(&this->_ToolTip);
  TAttribute<FText>::~TAttribute<FText>(&this->_Text);
  TSlotBase<SSegmentedControl<int>::FSlot>::FSlotArguments::~FSlotArguments((FSlotArguments *)this);
  return;
}

// ~FSlotArguments @ 142f3f3c0

void __thiscall SUniformGridPanel::FSlot::FSlotArguments::~FSlotArguments(FSlotArguments *this)

{
  TSlotBase<SUniformGridPanel::FSlot>::FSlotArguments::~FSlotArguments((FSlotArguments *)this);
  return;
}

// ~FSlotArguments @ 142f3f3e0

void __thiscall SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(FSlotArguments *this)

{
  undefined8 *puVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  puVar1 = *(undefined8 **)this;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142f3f407. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// operator[] @ 142f41ef0

FSlotArguments * __thiscall
TSlotBase<SSegmentedControl<int>::FSlot>::FSlotArguments::operator[]
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

// operator[] @ 142f41f60

FSlotArguments * __thiscall
TSlotBase<SUniformGridPanel::FSlot>::FSlotArguments::operator[]
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

// operator[] @ 142f41fd0

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

// operator[] @ 142f42040

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

// Icon @ 142fe2420

FSlotArguments * __thiscall
SSegmentedControl<int>::FSlot::FSlotArguments::Icon
          (FSlotArguments *this,TAttribute<FSlateBrush_const_*> *param_1)

{
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_Icon).Value = param_1->Value;
  (this->_Icon).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Icon).Getter,
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

// MinHeight @ 142fecb00

FSlotArguments * __thiscall
SVerticalBox::FSlot::FSlotArguments::MinHeight(FSlotArguments *this,TAttribute<float> *param_1)

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

// Text @ 143011b90

FSlotArguments * __thiscall
SSegmentedControl<int>::FSlot::FSlotArguments::Text(FSlotArguments *this,TAttribute<FText> *param_1)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  FText::operator=(&(this->_Text).Value,&param_1->Value);
  (this->_Text).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  pIVar2 = (param_1->Value).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return this;
}

// ~FSlotArguments @ 14301b180

void __thiscall
SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments(FSlotArguments *this)

{
  undefined8 *puVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0xd0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0xb0);
  if (this->field_0xa0 != '\0') {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x88);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x68);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  puVar1 = *(undefined8 **)this;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014301b1e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// FSlotArguments @ 14305c9e0

FSlotArguments * __thiscall
SResponsiveGridPanel::FSlot::FSlotArguments::FSlotArguments
          (FSlotArguments *this,FSlotArguments *param_1)

{
  char cVar1;
  longlong lVar2;
  
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  param_1->_padding_ = 0;
  lVar2 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar2;
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
  (this->ColumnLayouts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ColumnLayouts).AllocatorInstance.Data = (param_1->ColumnLayouts).AllocatorInstance.Data;
  (param_1->ColumnLayouts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ColumnLayouts).ArrayNum = (param_1->ColumnLayouts).ArrayNum;
  (this->ColumnLayouts).ArrayMax = (param_1->ColumnLayouts).ArrayMax;
  (param_1->ColumnLayouts).ArrayNum = 0;
  (param_1->ColumnLayouts).ArrayMax = 0;
  return this;
}

// ~FSlotArguments @ 143061df0

void __thiscall SResponsiveGridPanel::FSlot::FSlotArguments::~FSlotArguments(FSlotArguments *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  
  pFVar1 = (this->ColumnLayouts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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

// operator[] @ 1430636f0

FSlotArguments * __thiscall
TSlotBase<SResponsiveGridPanel::FSlot>::FSlotArguments::operator[]
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

// ColumnSpan @ 14306f270

FSlotArguments * __thiscall
SGridPanel::FSlot::FSlotArguments::ColumnSpan(FSlotArguments *this,TOptional<int> param_1)

{
  if (param_1 != (TOptional<int>)&this->_ColumnSpan) {
    if (*(char *)((longlong)param_1 + 4) == '\0') {
      if ((this->_ColumnSpan).bIsSet != false) {
        (this->_ColumnSpan).bIsSet = false;
        return this;
      }
    }
    else {
      (this->_ColumnSpan).TypedValue = *(int *)param_1;
      (this->_ColumnSpan).bIsSet = true;
    }
  }
  return this;
}

// ColumnSpan @ 14306f2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSlotArguments * __thiscall
SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan
          (FSlotArguments *this,float param_1,int param_2,int param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FSlotArguments *pFVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_98 [32];
  float *local_78;
  FScriptContainerElement *local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  float local_48;
  int iStack_44;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  uVar9 = 0;
  if (param_2 < 0) {
    param_2 = 0;
  }
  local_48 = param_1;
  iStack_44 = param_2;
  local_40 = param_3;
  if (0 < (this->ColumnLayouts).ArrayNum) {
    lVar8 = 0;
    do {
      iVar6 = (this->ColumnLayouts).ArrayNum;
      uVar5 = 0;
      if ((int)uVar9 < iVar6) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_78 = (float *)(longlong)(int)uVar9;
        local_70 = (FScriptContainerElement *)(longlong)iVar6;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FSlotArguments *)(*pcVar3)();
          return pFVar7;
        }
      }
      pFVar2 = (this->ColumnLayouts).AllocatorInstance.Data;
      if (local_48 < *(float *)(pFVar2 + lVar8)) {
        if ((pFVar2 <= (FScriptContainerElement *)&local_48) &&
           (lVar8 = (longlong)(this->ColumnLayouts).ArrayMax,
           (FScriptContainerElement *)&local_48 < pFVar2 + lVar8 * 0xc)) {
          local_60 = (longlong)(this->ColumnLayouts).ArrayNum;
          local_58 = 0xc;
          local_78 = &local_48;
          local_70 = pFVar2;
          local_68 = lVar8;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar7 = (FSlotArguments *)(*pcVar3)();
            return pFVar7;
          }
        }
        iVar6 = (this->ColumnLayouts).ArrayNum;
        piVar1 = &(this->ColumnLayouts).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,&(this->ColumnLayouts).AllocatorInstance,piVar1);
        }
        (this->ColumnLayouts).ArrayNum = iVar6 + 1;
        lVar8 = (longlong)(int)uVar9;
        pFVar2 = (this->ColumnLayouts).AllocatorInstance.Data + lVar8 * 0xc;
        memmove(pFVar2 + 0xc,pFVar2,(longlong)(int)(iVar6 - uVar9) * 0xc);
        pFVar2 = (this->ColumnLayouts).AllocatorInstance.Data;
        *(ulonglong *)(pFVar2 + lVar8 * 0xc) = CONCAT44(iStack_44,local_48);
        *(int *)(pFVar2 + lVar8 * 0xc + 8) = local_40;
        return this;
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0xc;
    } while ((int)uVar9 < (this->ColumnLayouts).ArrayNum);
  }
  pFVar2 = (this->ColumnLayouts).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_48) &&
     (lVar8 = (longlong)(this->ColumnLayouts).ArrayMax,
     (FScriptContainerElement *)&local_48 < pFVar2 + lVar8 * 0xc)) {
    local_60 = (longlong)(this->ColumnLayouts).ArrayNum;
    local_58 = 0xc;
    local_78 = &local_48;
    local_70 = pFVar2;
    local_68 = lVar8;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FSlotArguments *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar6 = (this->ColumnLayouts).ArrayNum;
  piVar1 = &(this->ColumnLayouts).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(this->ColumnLayouts).AllocatorInstance,piVar1);
    (this->ColumnLayouts).ArrayNum = iVar6;
  }
  (this->ColumnLayouts).ArrayNum = iVar6 + 1;
  pFVar2 = (this->ColumnLayouts).AllocatorInstance.Data;
  *(ulonglong *)(pFVar2 + (longlong)iVar6 * 0xc) = CONCAT44(iStack_44,local_48);
  *(int *)(pFVar2 + (longlong)iVar6 * 0xc + 8) = local_40;
  return this;
}

// Expose @ 1430bfa10

FSlotArguments * __thiscall
TSlotBase<SVerticalBox::FSlot>::FSlotArguments::Expose(FSlotArguments *this,FSlot **param_1)

{
  *param_1 = (this->Slot).Ptr;
  return (FSlotArguments *)this;
}

// RowSpan @ 1430eb410

FSlotArguments * __thiscall
SGridPanel::FSlot::FSlotArguments::RowSpan(FSlotArguments *this,TOptional<int> param_1)

{
  if (param_1 != (TOptional<int>)&this->_RowSpan) {
    if (*(char *)((longlong)param_1 + 4) == '\0') {
      if ((this->_RowSpan).bIsSet != false) {
        (this->_RowSpan).bIsSet = false;
        return this;
      }
    }
    else {
      (this->_RowSpan).TypedValue = *(int *)param_1;
      (this->_RowSpan).bIsSet = true;
    }
  }
  return this;
}

