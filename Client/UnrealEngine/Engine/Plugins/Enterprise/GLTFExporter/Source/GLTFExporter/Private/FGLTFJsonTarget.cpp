// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 2

// HasValue @ 14e601310

bool __thiscall FGLTFJsonTarget::HasValue(FGLTFJsonTarget *this)

{
  if (((this->Position == (FGLTFJsonAccessor *)0x0) || (this->Position->Count == 0)) &&
     ((this->Normal == (FGLTFJsonAccessor *)0x0 || (this->Normal->Count == 0)))) {
    return false;
  }
  return true;
}

// WriteObject @ 14e61ebd0

void __thiscall FGLTFJsonTarget::WriteObject(FGLTFJsonTarget *this,IGLTFJsonWriter *param_1)

{
  FGLTFJsonAccessor *pFVar1;
  FString local_18;
  
  pFVar1 = this->Position;
  if (pFVar1 != (FGLTFJsonAccessor *)0x0) {
    ::FString::FString(&local_18,L"POSITION");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_18);
    (**(code **)(param_1->_padding_ + 0x30))(param_1,(int)pFVar1->_padding_);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar1 = this->Normal;
  if (pFVar1 != (FGLTFJsonAccessor *)0x0) {
    ::FString::FString(&local_18,L"NORMAL");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_18);
    (**(code **)(param_1->_padding_ + 0x30))(param_1,(int)pFVar1->_padding_);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

