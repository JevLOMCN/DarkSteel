// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// WriteObject @ 14e61d3b0

void __thiscall
FGLTFJsonPBRMetallicRoughness::WriteObject
          (FGLTFJsonPBRMetallicRoughness *this,IGLTFJsonWriter *param_1)

{
  float fVar1;
  uint uVar2;
  ulonglong uVar3;
  float fVar4;
  FString local_38 [3];
  
  uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  uVar3 = 0;
  do {
    if (param_1->DefaultTolerance <
        (float)((uint)(*(float *)(&(this->BaseColorFactor).field_0x8 + uVar3) -
                      *(float *)(&FGLTFJsonColor4::White.field_0x8 + uVar3)) &
               __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      ::FString::FString(local_38,L"baseColorFactor");
      (**(code **)(param_1->_padding_ + 0x40))(param_1,local_38);
      (**(code **)(*(longlong *)&this->BaseColorFactor + 8))(&this->BaseColorFactor,param_1);
      if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
      }
      break;
    }
    uVar3 = uVar3 + 4;
  } while (uVar3 < 0x10);
  if ((this->BaseColorTexture).Index != (FGLTFJsonTexture *)0x0) {
    ::FString::FString(local_38,L"baseColorTexture");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,local_38);
    (**(code **)((this->BaseColorTexture)._padding_ + 8))(&this->BaseColorTexture,param_1);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  fVar1 = this->MetallicFactor;
  fVar4 = (float)((uint)(fVar1 - __real_3f800000) & uVar2);
  if (param_1->DefaultTolerance <= fVar4 && fVar4 != param_1->DefaultTolerance) {
    ::FString::FString(local_38,L"metallicFactor");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,local_38);
    (**(code **)(param_1->_padding_ + 0x20))(param_1,fVar1);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  fVar1 = this->RoughnessFactor;
  fVar4 = (float)((uint)(fVar1 - __real_3f800000) & uVar2);
  if (param_1->DefaultTolerance <= fVar4 && fVar4 != param_1->DefaultTolerance) {
    ::FString::FString(local_38,L"roughnessFactor");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,local_38);
    (**(code **)(param_1->_padding_ + 0x20))(param_1,fVar1);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  if ((this->MetallicRoughnessTexture).Index != (FGLTFJsonTexture *)0x0) {
    ::FString::FString(local_38,L"metallicRoughnessTexture");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,local_38);
    (**(code **)((this->MetallicRoughnessTexture)._padding_ + 8))
              (&this->MetallicRoughnessTexture,param_1);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

