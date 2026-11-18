// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 2

// FLibraryBindingExecutedArgs @ 14a73f360

FLibraryBindingExecutedArgs * __thiscall
UE::MVVM::FDebugging::FLibraryBindingExecutedArgs::FLibraryBindingExecutedArgs
          (FLibraryBindingExecutedArgs *this,FMVVMViewClass_BindingKey param_1)

{
  (this->Binding).Index = param_1.Index;
  (this->FailingReason).bIsSet = false;
  return this;
}

// FLibraryBindingExecutedArgs @ 14a73f370

FLibraryBindingExecutedArgs * __thiscall
UE::MVVM::FDebugging::FLibraryBindingExecutedArgs::FLibraryBindingExecutedArgs
          (FLibraryBindingExecutedArgs *this,FMVVMViewClass_BindingKey param_1,
          EExecutionFailingReason param_2)

{
  (this->Binding).Index = param_1.Index;
  (this->FailingReason).TypedValue = param_2;
  (this->FailingReason).bIsSet = true;
  return this;
}

