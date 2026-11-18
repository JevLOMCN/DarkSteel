// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// WriteObject @ 14e61a680

void __thiscall FGLTFJsonAsset::WriteObject(FGLTFJsonAsset *this,IGLTFJsonWriter *param_1)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"version");
  (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_18);
  (**(code **)(param_1->_padding_ + 0x18))(param_1,&this->Version);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (1 < (this->Generator).Data.ArrayNum) {
    ::FString::FString(&local_18,L"generator");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_18);
    (**(code **)(param_1->_padding_ + 0x18))(param_1,&this->Generator);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (1 < (this->Copyright).Data.ArrayNum) {
    ::FString::FString(&local_18,L"copyright");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_18);
    (**(code **)(param_1->_padding_ + 0x18))(param_1,&this->Copyright);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

