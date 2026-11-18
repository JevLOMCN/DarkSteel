// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PreLoadScreen
// Functions: 4

// FArguments @ 145abf2a0

FArguments * __thiscall SScaleBox::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  this->_HAlign = HAlign_Center;
  this->_VAlign = VAlign_Center;
  (this->_StretchDirection).Value = Both;
  (this->_StretchDirection).bIsSet = true;
  *(undefined8 *)&(this->_StretchDirection).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_StretchDirection).Getter = 0;
  *(undefined8 *)&(this->_StretchDirection).Getter.field_0x8 = 0;
  (this->_Stretch).Value = None;
  (this->_Stretch).bIsSet = true;
  *(undefined8 *)&(this->_Stretch).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Stretch).Getter = 0;
  *(undefined8 *)&(this->_Stretch).Getter.field_0x8 = 0;
  (this->_UserSpecifiedScale).Value = 1.0;
  (this->_UserSpecifiedScale).bIsSet = true;
  *(undefined8 *)&(this->_UserSpecifiedScale).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_UserSpecifiedScale).Getter = 0;
  *(undefined8 *)&(this->_UserSpecifiedScale).Getter.field_0x8 = 0;
  (this->_IgnoreInheritedScale).Value = false;
  (this->_IgnoreInheritedScale).bIsSet = true;
  *(undefined8 *)&(this->_IgnoreInheritedScale).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_IgnoreInheritedScale).Getter = 0;
  *(undefined8 *)&(this->_IgnoreInheritedScale).Getter.field_0x8 = 0;
  return this;
}

// FArguments @ 145abf380

FArguments * __thiscall SVirtualWindow::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_Size).field0_0x0._s_0.X = 100.0;
  (this->_Size).field0_0x0._s_0.Y = 100.0;
  return this;
}

// ~FArguments @ 145abfa40

void __thiscall SScaleBox::FArguments::~FArguments(FArguments *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_IgnoreInheritedScale).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_UserSpecifiedScale).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Stretch).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_StretchDirection).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Content).Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// Stretch @ 145ad0a30

FArguments * __thiscall
SScaleBox::FArguments::Stretch(FArguments *this,TAttribute<EStretch::Type> *param_1)

{
  (this->_Stretch).Value = param_1->Value;
  (this->_Stretch).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Stretch).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

