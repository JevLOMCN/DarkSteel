// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 1

// FViewSourceValueArgs @ 14a73f600

FViewSourceValueArgs * __thiscall
UE::MVVM::FDebugging::FViewSourceValueArgs::FViewSourceValueArgs
          (FViewSourceValueArgs *this,FMVVMViewClass_SourceKey *param_1,FMVVMView_SourceKey *param_2
          )

{
  (this->ClassSource).Index = param_1->Index;
  (this->ViewSource).Index = param_2->Index;
  return this;
}

