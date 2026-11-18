// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 2

// HasValue @ 14e6011f0

bool __thiscall FGLTFJsonSheenExtension::HasValue(FGLTFJsonSheenExtension *this)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  do {
    if (__real_38d1b717 <
        (float)((uint)(*(float *)(&(this->ColorFactor).field_0x8 + uVar1) -
                      *(float *)(&FGLTFJsonColor3::Black.field_0x8 + uVar1)) &
               __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      return true;
    }
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0xc);
  if ((((this->ColorTexture).Index == (FGLTFJsonTexture *)0x0) &&
      ((float)((uint)this->RoughnessFactor & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
       __real_322bcc77)) && ((this->RoughnessTexture).Index == (FGLTFJsonTexture *)0x0)) {
    return false;
  }
  return true;
}

// WriteObject @ 14e61e4d0

void __thiscall
FGLTFJsonSheenExtension::WriteObject(FGLTFJsonSheenExtension *this,IGLTFJsonWriter *param_1)

{
  float fVar1;
  uint uVar2;
  ulonglong uVar3;
  FString local_38 [3];
  
  uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  uVar3 = 0;
  do {
    if (__real_38d1b717 <
        (float)((uint)(*(float *)(&(this->ColorFactor).field_0x8 + uVar3) -
                      *(float *)(&FGLTFJsonColor3::Black.field_0x8 + uVar3)) &
               __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      ::FString::FString(local_38,L"sheenColorFactor");
      (**(code **)(param_1->_padding_ + 0x40))(param_1,local_38);
      (**(code **)(*(longlong *)&this->ColorFactor + 8))(&this->ColorFactor,param_1);
      if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
      }
      break;
    }
    uVar3 = uVar3 + 4;
  } while (uVar3 < 0xc);
  if ((this->ColorTexture).Index != (FGLTFJsonTexture *)0x0) {
    ::FString::FString(local_38,L"sheenColorTexture");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,local_38);
    (**(code **)((this->ColorTexture)._padding_ + 8))(&this->ColorTexture,param_1);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  fVar1 = this->RoughnessFactor;
  if (__real_322bcc77 < (float)((uint)fVar1 & uVar2)) {
    ::FString::FString(local_38,L"sheenRoughnessFactor");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,local_38);
    (**(code **)(param_1->_padding_ + 0x20))(param_1,fVar1);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  if ((this->RoughnessTexture).Index != (FGLTFJsonTexture *)0x0) {
    ::FString::FString(local_38,L"sheenRoughnessTexture");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,local_38);
    (**(code **)((this->RoughnessTexture)._padding_ + 8))(&this->RoughnessTexture,param_1);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

