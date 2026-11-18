// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 3

// ~FInterfaceModifyDelegates @ 14addf030

void __thiscall
Metasound::Frontend::FInterfaceModifyDelegates::~FInterfaceModifyDelegates
          (FInterfaceModifyDelegates *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnOutputIsConstructorPinChanged).field_0x8,
             *(int *)&(this->OnOutputIsConstructorPinChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnOutputIsConstructorPinChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnOutputIsConstructorPinChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnOutputDataTypeChanged).field_0x8,
             *(int *)&(this->OnOutputDataTypeChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnOutputDataTypeChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnOutputDataTypeChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnOutputNameChanged).field_0x8,*(int *)&(this->OnOutputNameChanged).field_0x10
            );
  pvVar1 = *(void **)&(this->OnOutputNameChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnOutputNameChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnRemovingOutput).field_0x8,*(int *)&(this->OnRemovingOutput).field_0x10);
  pvVar1 = *(void **)&(this->OnRemovingOutput).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRemovingOutput);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnOutputAdded).field_0x8,*(int *)&(this->OnOutputAdded).field_0x10);
  pvVar1 = *(void **)&(this->OnOutputAdded).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnOutputAdded);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnInputInheritsDefaultChanged).field_0x8,
             *(int *)&(this->OnInputInheritsDefaultChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnInputInheritsDefaultChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInputInheritsDefaultChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnInputIsConstructorPinChanged).field_0x8,
             *(int *)&(this->OnInputIsConstructorPinChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnInputIsConstructorPinChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInputIsConstructorPinChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnInputDefaultChanged).field_0x8,
             *(int *)&(this->OnInputDefaultChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnInputDefaultChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInputDefaultChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnInputDataTypeChanged).field_0x8,
             *(int *)&(this->OnInputDataTypeChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnInputDataTypeChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInputDataTypeChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnInputNameChanged).field_0x8,*(int *)&(this->OnInputNameChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnInputNameChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInputNameChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnRemovingInput).field_0x8,*(int *)&(this->OnRemovingInput).field_0x10);
  pvVar1 = *(void **)&(this->OnRemovingInput).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRemovingInput);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnInputAdded).field_0x8,*(int *)&(this->OnInputAdded).field_0x10);
  pvVar1 = *(void **)&(this->OnInputAdded).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInputAdded);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnRemovingInterface).field_0x8,*(int *)&(this->OnRemovingInterface).field_0x10
            );
  pvVar1 = *(void **)&(this->OnRemovingInterface).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRemovingInterface);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnInterfaceAdded).field_0x8,*(int *)&(this->OnInterfaceAdded).field_0x10);
  pvVar1 = *(void **)&(this->OnInterfaceAdded).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// FInterfaceModifyDelegates @ 14ae1c040

FInterfaceModifyDelegates * __thiscall
Metasound::Frontend::FInterfaceModifyDelegates::FInterfaceModifyDelegates
          (FInterfaceModifyDelegates *this)

{
  *(undefined8 *)&(this->OnInterfaceAdded).field_0x18 = 2;
  *(undefined8 *)&this->OnInterfaceAdded = 0;
  *(undefined8 *)&(this->OnInterfaceAdded).field_0x8 = 0;
  *(undefined8 *)&(this->OnInterfaceAdded).field_0x10 = 0;
  *(undefined8 *)&this->OnRemovingInterface = 0;
  *(undefined8 *)&(this->OnRemovingInterface).field_0x8 = 0;
  *(undefined8 *)&(this->OnRemovingInterface).field_0x10 = 0;
  *(undefined8 *)&this->OnInputAdded = 0;
  *(undefined8 *)&(this->OnInputAdded).field_0x8 = 0;
  *(undefined8 *)&(this->OnInputAdded).field_0x10 = 0;
  *(undefined8 *)&this->OnRemovingInput = 0;
  *(undefined8 *)&(this->OnRemovingInput).field_0x8 = 0;
  *(undefined8 *)&(this->OnRemovingInput).field_0x10 = 0;
  *(undefined8 *)&this->OnInputNameChanged = 0;
  *(undefined8 *)&(this->OnInputNameChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnInputNameChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnInputDataTypeChanged = 0;
  *(undefined8 *)&(this->OnInputDataTypeChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnInputDataTypeChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnInputDefaultChanged = 0;
  *(undefined8 *)&(this->OnInputDefaultChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnInputDefaultChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnInputIsConstructorPinChanged = 0;
  *(undefined8 *)&(this->OnInputIsConstructorPinChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnInputIsConstructorPinChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnInputInheritsDefaultChanged = 0;
  *(undefined8 *)&(this->OnInputInheritsDefaultChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnInputInheritsDefaultChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnOutputAdded = 0;
  *(undefined8 *)&(this->OnOutputAdded).field_0x8 = 0;
  *(undefined8 *)&(this->OnOutputAdded).field_0x10 = 0;
  *(undefined8 *)&this->OnRemovingOutput = 0;
  *(undefined8 *)&(this->OnRemovingOutput).field_0x8 = 0;
  *(undefined8 *)&(this->OnRemovingOutput).field_0x10 = 0;
  *(undefined8 *)&this->OnOutputNameChanged = 0;
  *(undefined8 *)&(this->OnOutputNameChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnOutputNameChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnOutputDataTypeChanged = 0;
  *(undefined8 *)&(this->OnOutputDataTypeChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnOutputDataTypeChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnOutputIsConstructorPinChanged = 0;
  *(undefined8 *)&(this->OnOutputIsConstructorPinChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnOutputIsConstructorPinChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnRemovingInterface).field_0x18 = 2;
  *(undefined8 *)&(this->OnInputAdded).field_0x18 = 2;
  *(undefined8 *)&(this->OnRemovingInput).field_0x18 = 2;
  *(undefined8 *)&(this->OnInputNameChanged).field_0x18 = 2;
  *(undefined8 *)&(this->OnInputDataTypeChanged).field_0x18 = 2;
  *(undefined8 *)&(this->OnInputDefaultChanged).field_0x18 = 2;
  *(undefined8 *)&(this->OnInputIsConstructorPinChanged).field_0x18 = 2;
  *(undefined8 *)&(this->OnInputInheritsDefaultChanged).field_0x18 = 2;
  *(undefined8 *)&(this->OnOutputAdded).field_0x18 = 2;
  *(undefined8 *)&(this->OnRemovingOutput).field_0x18 = 2;
  *(undefined8 *)&(this->OnOutputNameChanged).field_0x18 = 2;
  *(undefined8 *)&(this->OnOutputDataTypeChanged).field_0x18 = 2;
  *(undefined8 *)&(this->OnOutputIsConstructorPinChanged).field_0x18 = 2;
  return this;
}

// FInterfaceModifyDelegates @ 14ae594f0

FInterfaceModifyDelegates * __thiscall
Metasound::Frontend::FInterfaceModifyDelegates::FInterfaceModifyDelegates
          (FInterfaceModifyDelegates *this,FInterfaceModifyDelegates *param_1)

{
  TMulticastDelegate<void___cdecl(FMetasoundFrontendInterface_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *pTVar1;
  TMulticastDelegate<void___cdecl(FName,FName),FDefaultDelegateUserPolicy> *pTVar2;
  
  *(undefined8 *)&(this->OnInterfaceAdded).field_0x18 = 2;
  *(undefined8 *)&this->OnInterfaceAdded = 0;
  *(undefined8 *)&(this->OnInterfaceAdded).field_0x8 = 0;
  *(undefined8 *)&(this->OnInterfaceAdded).field_0x10 = 0;
  if (param_1 != this) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMetasoundFrontendInterface_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)param_1);
  }
  this_00 = &this->OnRemovingInterface;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->OnRemovingInterface).field_0x8 = 0;
  *(undefined8 *)&(this->OnRemovingInterface).field_0x10 = 0;
  *(undefined8 *)&(this->OnRemovingInterface).field_0x18 = 2;
  if (&param_1->OnRemovingInterface != this_00) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMetasoundFrontendInterface_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->OnRemovingInterface);
  }
  pTVar1 = &this->OnInputAdded;
  *(undefined8 *)&pTVar1->field_0x0 = 0;
  *(undefined8 *)&(this->OnInputAdded).field_0x8 = 0;
  *(undefined8 *)&(this->OnInputAdded).field_0x10 = 0;
  *(undefined8 *)&(this->OnInputAdded).field_0x18 = 2;
  if (&param_1->OnInputAdded != pTVar1) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar1,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->OnInputAdded);
  }
  pTVar1 = &this->OnRemovingInput;
  *(undefined8 *)&pTVar1->field_0x0 = 0;
  *(undefined8 *)&(this->OnRemovingInput).field_0x8 = 0;
  *(undefined8 *)&(this->OnRemovingInput).field_0x10 = 0;
  *(undefined8 *)&(this->OnRemovingInput).field_0x18 = 2;
  if (&param_1->OnRemovingInput != pTVar1) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar1,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->OnRemovingInput);
  }
  pTVar2 = &this->OnInputNameChanged;
  *(undefined8 *)&pTVar2->field_0x0 = 0;
  *(undefined8 *)&(this->OnInputNameChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnInputNameChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnInputNameChanged).field_0x18 = 2;
  if (&param_1->OnInputNameChanged != pTVar2) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FName,FName),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar2,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->OnInputNameChanged);
  }
  pTVar1 = &this->OnInputDataTypeChanged;
  *(undefined8 *)&pTVar1->field_0x0 = 0;
  *(undefined8 *)&(this->OnInputDataTypeChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnInputDataTypeChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnInputDataTypeChanged).field_0x18 = 2;
  if (&param_1->OnInputDataTypeChanged != pTVar1) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar1,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &param_1->OnInputDataTypeChanged);
  }
  pTVar1 = &this->OnInputDefaultChanged;
  *(undefined8 *)&pTVar1->field_0x0 = 0;
  *(undefined8 *)&(this->OnInputDefaultChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnInputDefaultChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnInputDefaultChanged).field_0x18 = 2;
  if (&param_1->OnInputDefaultChanged != pTVar1) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar1,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->OnInputDefaultChanged
              );
  }
  pTVar1 = &this->OnInputIsConstructorPinChanged;
  *(undefined8 *)&pTVar1->field_0x0 = 0;
  *(undefined8 *)&(this->OnInputIsConstructorPinChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnInputIsConstructorPinChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnInputIsConstructorPinChanged).field_0x18 = 2;
  if (&param_1->OnInputIsConstructorPinChanged != pTVar1) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar1,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &param_1->OnInputIsConstructorPinChanged);
  }
  pTVar1 = &this->OnInputInheritsDefaultChanged;
  *(undefined8 *)&pTVar1->field_0x0 = 0;
  *(undefined8 *)&(this->OnInputInheritsDefaultChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnInputInheritsDefaultChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnInputInheritsDefaultChanged).field_0x18 = 2;
  if (&param_1->OnInputInheritsDefaultChanged != pTVar1) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar1,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &param_1->OnInputInheritsDefaultChanged);
  }
  pTVar1 = &this->OnOutputAdded;
  *(undefined8 *)&pTVar1->field_0x0 = 0;
  *(undefined8 *)&(this->OnOutputAdded).field_0x8 = 0;
  *(undefined8 *)&(this->OnOutputAdded).field_0x10 = 0;
  *(undefined8 *)&(this->OnOutputAdded).field_0x18 = 2;
  if (&param_1->OnOutputAdded != pTVar1) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar1,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->OnOutputAdded);
  }
  pTVar1 = &this->OnRemovingOutput;
  *(undefined8 *)&pTVar1->field_0x0 = 0;
  *(undefined8 *)&(this->OnRemovingOutput).field_0x8 = 0;
  *(undefined8 *)&(this->OnRemovingOutput).field_0x10 = 0;
  *(undefined8 *)&(this->OnRemovingOutput).field_0x18 = 2;
  if (&param_1->OnRemovingOutput != pTVar1) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar1,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->OnRemovingOutput);
  }
  pTVar2 = &this->OnOutputNameChanged;
  *(undefined8 *)&pTVar2->field_0x0 = 0;
  *(undefined8 *)&(this->OnOutputNameChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnOutputNameChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnOutputNameChanged).field_0x18 = 2;
  if (&param_1->OnOutputNameChanged != pTVar2) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FName,FName),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar2,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->OnOutputNameChanged);
  }
  pTVar1 = &this->OnOutputDataTypeChanged;
  *(undefined8 *)&pTVar1->field_0x0 = 0;
  *(undefined8 *)&(this->OnOutputDataTypeChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnOutputDataTypeChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnOutputDataTypeChanged).field_0x18 = 2;
  if (&param_1->OnOutputDataTypeChanged != pTVar1) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar1,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &param_1->OnOutputDataTypeChanged);
  }
  pTVar1 = &this->OnOutputIsConstructorPinChanged;
  *(undefined8 *)&pTVar1->field_0x0 = 0;
  *(undefined8 *)&(this->OnOutputIsConstructorPinChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnOutputIsConstructorPinChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnOutputIsConstructorPinChanged).field_0x18 = 2;
  if (&param_1->OnOutputIsConstructorPinChanged != pTVar1) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar1,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &param_1->OnOutputIsConstructorPinChanged);
  }
  return this;
}

