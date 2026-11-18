// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// WriteObject @ 14e61ec90

void __thiscall FGLTFJsonTexture::WriteObject(FGLTFJsonTexture *this,IGLTFJsonWriter *param_1)

{
  FGLTFJsonSampler *pFVar1;
  FGLTFJsonImage *pFVar2;
  FString local_18;
  
  if (1 < (this->Name).Data.ArrayNum) {
    ::FString::FString(&local_18,L"name");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_18);
    (**(code **)(param_1->_padding_ + 0x18))(param_1,&this->Name);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar1 = this->Sampler;
  if (pFVar1 != (FGLTFJsonSampler *)0x0) {
    ::FString::FString(&local_18,L"sampler");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_18);
    (**(code **)(param_1->_padding_ + 0x30))(param_1,(int)pFVar1->_padding_);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar2 = this->Source;
  if (pFVar2 != (FGLTFJsonImage *)0x0) {
    ::FString::FString(&local_18,L"source");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_18);
    (**(code **)(param_1->_padding_ + 0x30))(param_1,(int)pFVar2->_padding_);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

