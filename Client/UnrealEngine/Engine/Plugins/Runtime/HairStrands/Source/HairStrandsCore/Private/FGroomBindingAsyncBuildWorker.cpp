// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// DoWork @ 14dfbe870

void __thiscall FGroomBindingAsyncBuildWorker::DoWork(FGroomBindingAsyncBuildWorker *this)

{
  if ((this->BuildContext).bIsSet != false) {
    UGroomBindingAsset::ExecuteCacheDerivedDatas
              (this->GroomBinding,&(this->BuildContext).TypedValue);
    return;
  }
  return;
}

