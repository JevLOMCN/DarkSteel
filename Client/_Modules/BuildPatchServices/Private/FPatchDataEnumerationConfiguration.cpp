// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// FPatchDataEnumerationConfiguration @ 143224d80

FPatchDataEnumerationConfiguration * __thiscall
BuildPatchServices::FPatchDataEnumerationConfiguration::FPatchDataEnumerationConfiguration
          (FPatchDataEnumerationConfiguration *this)

{
  (this->InputFile).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputFile).Data.ArrayNum = 0;
  (this->InputFile).Data.ArrayMax = 0;
  (this->OutputFile).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputFile).Data.ArrayNum = 0;
  (this->OutputFile).Data.ArrayMax = 0;
  this->bIncludeSizes = false;
  return this;
}

