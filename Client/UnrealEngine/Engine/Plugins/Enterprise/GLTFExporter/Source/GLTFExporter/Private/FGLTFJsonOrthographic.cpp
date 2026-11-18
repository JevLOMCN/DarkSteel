// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// WriteObject @ 14e61d280

void __thiscall
FGLTFJsonOrthographic::WriteObject(FGLTFJsonOrthographic *this,IGLTFJsonWriter *param_1)

{
  float fVar1;
  FString local_28 [2];
  
  fVar1 = this->XMag;
  ::FString::FString(local_28,L"xmag");
  (**(code **)(param_1->_padding_ + 0x40))(param_1,local_28);
  (**(code **)(param_1->_padding_ + 0x20))(param_1,fVar1);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  fVar1 = this->YMag;
  ::FString::FString(local_28,L"ymag");
  (**(code **)(param_1->_padding_ + 0x40))(param_1,local_28);
  (**(code **)(param_1->_padding_ + 0x20))(param_1,fVar1);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  fVar1 = this->ZFar;
  ::FString::FString(local_28,L"zfar");
  (**(code **)(param_1->_padding_ + 0x40))(param_1,local_28);
  (**(code **)(param_1->_padding_ + 0x20))(param_1,fVar1);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  fVar1 = this->ZNear;
  ::FString::FString(local_28,L"znear");
  (**(code **)(param_1->_padding_ + 0x40))(param_1,local_28);
  (**(code **)(param_1->_padding_ + 0x20))(param_1,fVar1);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return;
}

