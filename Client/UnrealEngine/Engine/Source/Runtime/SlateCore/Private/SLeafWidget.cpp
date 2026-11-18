// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 5

// SLeafWidget @ 1425bf070

SLeafWidget * __thiscall SLeafWidget::SLeafWidget(SLeafWidget *this)

{
  SWidget::SWidget((SWidget *)this);
  this->field_0x30 = this->field_0x30 & 0xfd;
  *(undefined ***)this = &___7SLeafWidget__6B_;
  return this;
}

// ~SLeafWidget @ 1425c1c80

void __thiscall SLeafWidget::~SLeafWidget(SLeafWidget *this)

{
  *(undefined ***)this = &___7SLeafWidget__6B_;
  SWidget::~SWidget((SWidget *)this);
  return;
}

// GetChildren @ 1425dfcb0

FChildren * __thiscall SLeafWidget::GetChildren(SLeafWidget *this)

{
  return (FChildren *)&FNoChildren::NoChildrenInstance;
}

// OnArrangeChildren @ 1425eba40

void __thiscall
SLeafWidget::OnArrangeChildren(SLeafWidget *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  return;
}

// SetVisibility @ 1425fe720

void __thiscall SLeafWidget::SetVisibility(SLeafWidget *this,TAttribute<EVisibility> *param_1)

{
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  undefined1 local_28 [8];
  undefined1 local_20 [24];
  
  local_28[0] = (TEnumAsByte<EVisibility::Private>)(param_1->Value).Value.Value;
  this_00 = &param_1->Getter;
  local_28[1] = param_1->bIsSet;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_20,this_00);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->field_0x39,(SWidget *)this,(TAttribute<EVisibility> *)local_28,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_20);
  if ((void *)local_20._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_20._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_20);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return;
}

