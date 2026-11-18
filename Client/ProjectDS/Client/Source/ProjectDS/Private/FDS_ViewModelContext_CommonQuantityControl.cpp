// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// StaticStruct @ 14b5df640

UScriptStruct * __cdecl FDS_ViewModelContext_CommonQuantityControl::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_CommonQuantityControl.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_CommonQuantityControl.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewModelContext_CommonQuantityControl,
                         (UObject *)pUVar1,L"DS_ViewModelContext_CommonQuantityControl");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_CommonQuantityControl.OuterSingleton
  ;
}

// FDS_ViewModelContext_CommonQuantityControl @ 14b5e9310

FDS_ViewModelContext_CommonQuantityControl * __thiscall
FDS_ViewModelContext_CommonQuantityControl::FDS_ViewModelContext_CommonQuantityControl
          (FDS_ViewModelContext_CommonQuantityControl *this)

{
  this->StepQuantity = 1.0;
  this->FractionalDigits = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FDS_ViewModelContext_CommonQuantityControl__6B_;
  this->Min = 0.0;
  this->Max = 0.0;
  this->InitialQuantity = 0.0;
  FText::FromString(&this->QuantityName,L"Quantity");
  this->bBroadcastWithInit = true;
  *(undefined8 *)&this->OnQuantityChangeEvent = 0;
  *(undefined8 *)&(this->OnQuantityChangeEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnQuantityChangeEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnQuantityChangeEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnClickAutoDelegate = 0;
  *(undefined8 *)&(this->OnClickAutoDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickAutoDelegate).field_0x10 = 0;
  return this;
}

// ~FDS_ViewModelContext_CommonQuantityControl @ 14b5e9860

void __thiscall
FDS_ViewModelContext_CommonQuantityControl::~FDS_ViewModelContext_CommonQuantityControl
          (FDS_ViewModelContext_CommonQuantityControl *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickAutoDelegate);
  pvVar1 = *(void **)&(this->OnClickAutoDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickAutoDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnQuantityChangeEvent).field_0x8,
             *(int *)&(this->OnQuantityChangeEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnQuantityChangeEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnQuantityChangeEvent);
  pIVar2 = (this->QuantityName).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FDS_ViewModelContext__6B_;
  return;
}

