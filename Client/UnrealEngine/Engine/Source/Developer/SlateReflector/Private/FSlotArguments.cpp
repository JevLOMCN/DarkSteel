// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 3

// FSlotArguments @ 142e0add0

FSlotArguments * __thiscall
SGridPanel::FSlot::FSlotArguments::FSlotArguments(FSlotArguments *this,FSlotArguments *param_1)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  double dVar4;
  
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
  (this->_Column).bIsSet = false;
  bVar2 = (param_1->_Column).bIsSet;
  (this->_Column).bIsSet = bVar2;
  if (bVar2 != false) {
    (this->_Column).TypedValue = (param_1->_Column).TypedValue;
  }
  (this->_ColumnSpan).bIsSet = false;
  bVar2 = (param_1->_ColumnSpan).bIsSet;
  (this->_ColumnSpan).bIsSet = bVar2;
  if (bVar2 != false) {
    (this->_ColumnSpan).TypedValue = (param_1->_ColumnSpan).TypedValue;
  }
  (this->_Row).bIsSet = false;
  bVar2 = (param_1->_Row).bIsSet;
  (this->_Row).bIsSet = bVar2;
  if (bVar2 != false) {
    (this->_Row).TypedValue = (param_1->_Row).TypedValue;
  }
  (this->_RowSpan).bIsSet = false;
  bVar2 = (param_1->_RowSpan).bIsSet;
  (this->_RowSpan).bIsSet = bVar2;
  if (bVar2 != false) {
    (this->_RowSpan).TypedValue = (param_1->_RowSpan).TypedValue;
  }
  (this->_Layer).bIsSet = false;
  bVar2 = (param_1->_Layer).bIsSet;
  (this->_Layer).bIsSet = bVar2;
  if (bVar2 != false) {
    (this->_Layer).TypedValue = (param_1->_Layer).TypedValue;
  }
  (this->_Nudge).bIsSet = false;
  bVar2 = (param_1->_Nudge).bIsSet;
  (this->_Nudge).bIsSet = bVar2;
  if (bVar2 != false) {
    dVar4 = (param_1->_Nudge).TypedValue.field0_0x0._s_0.Y;
    (this->_Nudge).TypedValue.field0_0x0._s_0.X = (param_1->_Nudge).TypedValue.field0_0x0._s_0.X;
    (this->_Nudge).TypedValue.field0_0x0._s_0.Y = dVar4;
  }
  return this;
}

// ~FSlotArguments @ 142e14290

void __thiscall SGridPanel::FSlot::FSlotArguments::~FSlotArguments(FSlotArguments *this)

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

// operator[] @ 142e18560

FSlotArguments * __thiscall
TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
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

