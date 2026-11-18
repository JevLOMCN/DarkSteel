// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// WriteObject @ 14e61c720

void __thiscall
FGLTFJsonMaterialVariant::WriteObject(FGLTFJsonMaterialVariant *this,IGLTFJsonWriter *param_1)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"name");
  (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_18);
  (**(code **)(param_1->_padding_ + 0x18))(param_1,&this->Name);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

