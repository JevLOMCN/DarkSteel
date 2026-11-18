// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokensUI
// Functions: 5

// ~TSlateBaseNamedArgs<SMenuAnchor> @ 14d0ef4c0

void __thiscall
TSlateBaseNamedArgs<SMenuAnchor>::~TSlateBaseNamedArgs<SMenuAnchor>
          (TSlateBaseNamedArgs<SMenuAnchor> *this)

{
  DestructItems<TSharedRef<ISlateMetaData,1>,int>
            (*(TSharedRef<ISlateMetaData,1> **)&this->field_0x1e8,*(int *)&this->field_0x1f0);
  if (*(void **)&this->field_0x1e8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x1e8);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x1d0);
  if (*(void **)&this->field_0x1d8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x1d8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x1d0);
  if (*(longlong **)&this->field_0x1b8 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this->field_0x1b8 + 0x10))();
  }
  if (this->field_0x1b0 != '\0') {
    FAccessibleWidgetData::~FAccessibleWidgetData((FAccessibleWidgetData *)&this->field_0x148);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x128);
  if (*(void **)&this->field_0x130 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x130);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x128);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0xf8);
  if (*(void **)&this->field_0x100 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x100);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0xf8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0xb0);
  if (*(void **)&this->field_0xb8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0xb0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x90);
  if (*(void **)&this->field_0x98 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x98);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x90);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x70);
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x70);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x48);
  if (*(void **)&this->field_0x50 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x50);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x38);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x18);
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x18);
  if (*(longlong **)this != (longlong *)0x0) {
    (**(code **)(**(longlong **)this + 0x10))();
  }
  return;
}

// ~TSlateBaseNamedArgs<SNamingTokenDataTreeViewWidget> @ 14d0ef4d0

void __thiscall
TSlateBaseNamedArgs<SNamingTokenDataTreeViewWidget>::
~TSlateBaseNamedArgs<SNamingTokenDataTreeViewWidget>
          (TSlateBaseNamedArgs<SNamingTokenDataTreeViewWidget> *this)

{
  DestructItems<TSharedRef<ISlateMetaData,1>,int>
            (*(TSharedRef<ISlateMetaData,1> **)&this->field_0x1e8,*(int *)&this->field_0x1f0);
  if (*(void **)&this->field_0x1e8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x1e8);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x1d0);
  if (*(void **)&this->field_0x1d8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x1d8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x1d0);
  if (*(longlong **)&this->field_0x1b8 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this->field_0x1b8 + 0x10))();
  }
  if (this->field_0x1b0 != '\0') {
    FAccessibleWidgetData::~FAccessibleWidgetData((FAccessibleWidgetData *)&this->field_0x148);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x128);
  if (*(void **)&this->field_0x130 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x130);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x128);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0xf8);
  if (*(void **)&this->field_0x100 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x100);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0xf8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0xb0);
  if (*(void **)&this->field_0xb8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0xb0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x90);
  if (*(void **)&this->field_0x98 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x98);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x90);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x70);
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x70);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x48);
  if (*(void **)&this->field_0x50 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x50);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x38);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x18);
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x18);
  if (*(longlong **)this != (longlong *)0x0) {
    (**(code **)(**(longlong **)this + 0x10))();
  }
  return;
}

// ~TSlateBaseNamedArgs<SPopupErrorText> @ 14d0ef4e0

void __thiscall
TSlateBaseNamedArgs<SPopupErrorText>::~TSlateBaseNamedArgs<SPopupErrorText>
          (TSlateBaseNamedArgs<SPopupErrorText> *this)

{
  DestructItems<TSharedRef<ISlateMetaData,1>,int>
            (*(TSharedRef<ISlateMetaData,1> **)&this->field_0x1e8,*(int *)&this->field_0x1f0);
  if (*(void **)&this->field_0x1e8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x1e8);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x1d0);
  if (*(void **)&this->field_0x1d8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x1d8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x1d0);
  if (*(longlong **)&this->field_0x1b8 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this->field_0x1b8 + 0x10))();
  }
  if (this->field_0x1b0 != '\0') {
    FAccessibleWidgetData::~FAccessibleWidgetData((FAccessibleWidgetData *)&this->field_0x148);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x128);
  if (*(void **)&this->field_0x130 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x130);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x128);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0xf8);
  if (*(void **)&this->field_0x100 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x100);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0xf8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0xb0);
  if (*(void **)&this->field_0xb8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0xb0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x90);
  if (*(void **)&this->field_0x98 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x98);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x90);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x70);
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x70);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x48);
  if (*(void **)&this->field_0x50 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x50);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x38);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x18);
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x18);
  if (*(longlong **)this != (longlong *)0x0) {
    (**(code **)(**(longlong **)this + 0x10))();
  }
  return;
}

// Visibility @ 14d11d950

FArguments * __thiscall
TSlateBaseNamedArgs<SMenuAnchor>::Visibility
          (TSlateBaseNamedArgs<SMenuAnchor> *this,TAttribute<EVisibility> *param_1)

{
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  this->field_0x88 = (param_1->Value).Value.Value;
  this->field_0x89 = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x90,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return (FArguments *)this;
}

// Visibility_Lambda @ 14d11d9c0

FArguments * __thiscall
TSlateBaseNamedArgs<SBox>::Visibility_Lambda
          (TSlateBaseNamedArgs<SBox> *this,TFunction<EVisibility___cdecl(void)> *param_1)

{
  TAttribute<EVisibility>::BindLambda<TFunction<EVisibility___cdecl(void)>_&>
            ((TAttribute<EVisibility> *)&this->field_0x88,param_1);
  return (FArguments *)this;
}

