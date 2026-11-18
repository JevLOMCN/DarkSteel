// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// WriteObject @ 14e61ab80

void __thiscall FGLTFJsonBuffer::WriteObject(FGLTFJsonBuffer *this,IGLTFJsonWriter *param_1)

{
  long64 lVar1;
  FString local_18;
  
  if (1 < (this->Name).Data.ArrayNum) {
    ::FString::FString(&local_18,L"name");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_18);
    (**(code **)(param_1->_padding_ + 0x18))(param_1,&this->Name);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (1 < (this->URI).Data.ArrayNum) {
    ::FString::FString(&local_18,L"uri");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_18);
    (**(code **)(param_1->_padding_ + 0x18))(param_1,&this->URI);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  lVar1 = this->ByteLength;
  ::FString::FString(&local_18,L"byteLength");
  (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_18);
  (**(code **)(param_1->_padding_ + 0x28))(param_1,lVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

