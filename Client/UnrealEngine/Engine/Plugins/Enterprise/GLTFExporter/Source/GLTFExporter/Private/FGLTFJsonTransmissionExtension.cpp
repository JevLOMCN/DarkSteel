// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// WriteObject @ 14e61f0a0

void __thiscall
FGLTFJsonTransmissionExtension::WriteObject
          (FGLTFJsonTransmissionExtension *this,IGLTFJsonWriter *param_1)

{
  float fVar1;
  FString local_28 [2];
  
  fVar1 = this->Factor;
  if (__real_322bcc77 < (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    ::FString::FString(local_28,L"transmissionFactor");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,local_28);
    (**(code **)(param_1->_padding_ + 0x20))(param_1,fVar1);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  if ((this->Texture).Index != (FGLTFJsonTexture *)0x0) {
    ::FString::FString(local_28,L"transmissionTexture");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,local_28);
    (**(code **)((this->Texture)._padding_ + 8))(&this->Texture,param_1);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

