// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// WriteObject @ 14e61afd0

void __thiscall
FGLTFJsonClearCoatExtension::WriteObject(FGLTFJsonClearCoatExtension *this,IGLTFJsonWriter *param_1)

{
  float fVar1;
  float fVar2;
  FString local_28 [2];
  
  fVar1 = this->ClearCoatFactor;
  fVar2 = (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (param_1->DefaultTolerance <= fVar2 && fVar2 != param_1->DefaultTolerance) {
    ::FString::FString(local_28,L"clearcoatFactor");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,local_28);
    (**(code **)(param_1->_padding_ + 0x20))(param_1,fVar1);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  if ((this->ClearCoatTexture).Index != (FGLTFJsonTexture *)0x0) {
    ::FString::FString(local_28,L"clearcoatTexture");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,local_28);
    (**(code **)((this->ClearCoatTexture)._padding_ + 8))(&this->ClearCoatTexture,param_1);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  fVar1 = this->ClearCoatRoughnessFactor;
  fVar2 = (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (param_1->DefaultTolerance <= fVar2 && fVar2 != param_1->DefaultTolerance) {
    ::FString::FString(local_28,L"clearcoatRoughnessFactor");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,local_28);
    (**(code **)(param_1->_padding_ + 0x20))(param_1,fVar1);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  if ((this->ClearCoatRoughnessTexture).Index != (FGLTFJsonTexture *)0x0) {
    ::FString::FString(local_28,L"clearcoatRoughnessTexture");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,local_28);
    (**(code **)((this->ClearCoatRoughnessTexture)._padding_ + 8))
              (&this->ClearCoatRoughnessTexture,param_1);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  if ((this->ClearCoatNormalTexture)._padding_ != 0) {
    ::FString::FString(local_28,L"clearcoatNormalTexture");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,local_28);
    (**(code **)((this->ClearCoatNormalTexture)._padding_ + 8))
              (&this->ClearCoatNormalTexture,param_1);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

