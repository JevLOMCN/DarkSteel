// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 2

// HasValue @ 14e601260

bool __thiscall
FGLTFJsonSpecularGlossinessExtension::HasValue(FGLTFJsonSpecularGlossinessExtension *this)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  uVar2 = uVar1;
  do {
    if (__real_38d1b717 <
        (float)((uint)(*(float *)(&(this->DiffuseFactor).field_0x8 + uVar2) -
                      *(float *)(&FGLTFJsonColor4::White.field_0x8 + uVar2)) &
               __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      return true;
    }
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x10);
  if ((this->DiffuseTexture).Index == (FGLTFJsonTexture *)0x0) {
    do {
      if (__real_38d1b717 <
          (float)((uint)(*(float *)(&(this->SpecularFactor).field_0x8 + uVar1) -
                        *(float *)(&FGLTFJsonColor3::White.field_0x8 + uVar1)) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        return true;
      }
      uVar1 = uVar1 + 4;
    } while (uVar1 < 0xc);
    if (((float)((uint)(this->GlossinessFactor - __real_3f800000) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) &&
       ((this->SpecularGlossinessTexture).Index == (FGLTFJsonTexture *)0x0)) {
      return false;
    }
  }
  return true;
}

// WriteObject @ 14e61e8c0

void __thiscall
FGLTFJsonSpecularGlossinessExtension::WriteObject
          (FGLTFJsonSpecularGlossinessExtension *this,IGLTFJsonWriter *param_1)

{
  float fVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  FString local_38 [3];
  
  uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar1 = __real_38d1b717;
  uVar4 = 0;
  uVar3 = uVar4;
  do {
    if (__real_38d1b717 <
        (float)((uint)(*(float *)(&(this->DiffuseFactor).field_0x8 + uVar3) -
                      *(float *)(&FGLTFJsonColor4::White.field_0x8 + uVar3)) &
               __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      ::FString::FString(local_38,L"diffuseFactor");
      (**(code **)(param_1->_padding_ + 0x40))(param_1,local_38);
      (**(code **)(*(longlong *)&this->DiffuseFactor + 8))(&this->DiffuseFactor,param_1);
      if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
      }
      break;
    }
    uVar3 = uVar3 + 4;
  } while (uVar3 < 0x10);
  if ((this->DiffuseTexture).Index != (FGLTFJsonTexture *)0x0) {
    ::FString::FString(local_38,L"diffuseTexture");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,local_38);
    (**(code **)((this->DiffuseTexture)._padding_ + 8))(&this->DiffuseTexture,param_1);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  do {
    if (fVar1 < (float)((uint)(*(float *)(&(this->SpecularFactor).field_0x8 + uVar4) -
                              *(float *)(&FGLTFJsonColor3::White.field_0x8 + uVar4)) & uVar2)) {
      ::FString::FString(local_38,L"specularFactor");
      (**(code **)(param_1->_padding_ + 0x40))(param_1,local_38);
      (**(code **)(*(longlong *)&this->SpecularFactor + 8))(&this->SpecularFactor,param_1);
      if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
      }
      break;
    }
    uVar4 = uVar4 + 4;
  } while (uVar4 < 0xc);
  fVar1 = this->GlossinessFactor;
  if (__real_322bcc77 < (float)((uint)(fVar1 - __real_3f800000) & uVar2)) {
    ::FString::FString(local_38,L"glossinessFactor");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,local_38);
    (**(code **)(param_1->_padding_ + 0x20))(param_1,fVar1);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  if ((this->SpecularGlossinessTexture).Index != (FGLTFJsonTexture *)0x0) {
    ::FString::FString(local_38,L"specularGlossinessTexture");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,local_38);
    (**(code **)((this->SpecularGlossinessTexture)._padding_ + 8))
              (&this->SpecularGlossinessTexture,param_1);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

