// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MessageLog
// Functions: 7

// IsEnabled<SMessageLogListing> @ 142bc0400

FArguments * __thiscall
TSlateBaseNamedArgs<SButton>::IsEnabled<SMessageLogListing>
          (TSlateBaseNamedArgs<SButton> *this,SMessageLogListing *param_1,pmf_b078e480 *param_2)

{
  pmf_b078e480 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TAttribute<bool>::Bind<SMessageLogListing>
            ((TAttribute<bool> *)&this->field_0xa8,param_1,&local_18);
  return (FArguments *)this;
}

// Visibility<SMessageLogListing> @ 142bc3340

FArguments * __thiscall
TSlateBaseNamedArgs<SButton>::Visibility<SMessageLogListing>
          (TSlateBaseNamedArgs<SButton> *this,SMessageLogListing *param_1,pmf_4cd0b4cf *param_2)

{
  pmf_4cd0b4cf local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TAttribute<EVisibility>::Bind<SMessageLogListing>
            ((TAttribute<EVisibility> *)&this->field_0x88,param_1,&local_18);
  return (FArguments *)this;
}

// ~TSlateBaseNamedArgs<SBorder> @ 142bcab30

void __thiscall
TSlateBaseNamedArgs<SBorder>::~TSlateBaseNamedArgs<SBorder>(TSlateBaseNamedArgs<SBorder> *this)

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

// ~TSlateBaseNamedArgs<SHeaderRow> @ 142bcab40

void __thiscall
TSlateBaseNamedArgs<SHeaderRow>::~TSlateBaseNamedArgs<SHeaderRow>
          (TSlateBaseNamedArgs<SHeaderRow> *this)

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

// ~TSlateBaseNamedArgs<SSplitter> @ 142bcab50

void __thiscall
TSlateBaseNamedArgs<SSplitter>::~TSlateBaseNamedArgs<SSplitter>
          (TSlateBaseNamedArgs<SSplitter> *this)

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

// ToolTipText @ 142c28ea0

FArguments * __thiscall
TSlateBaseNamedArgs<SHyperlink>::ToolTipText
          (TSlateBaseNamedArgs<SHyperlink> *this,TAttribute<FText> *param_1)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  FText::operator=((FText *)this,&param_1->Value);
  this->field_0x10 = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x18,
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
  return (FArguments *)this;
}

// Visibility @ 142c2c6a0

FArguments * __thiscall
TSlateBaseNamedArgs<SHeaderRow>::Visibility
          (TSlateBaseNamedArgs<SHeaderRow> *this,TAttribute<EVisibility> *param_1)

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

