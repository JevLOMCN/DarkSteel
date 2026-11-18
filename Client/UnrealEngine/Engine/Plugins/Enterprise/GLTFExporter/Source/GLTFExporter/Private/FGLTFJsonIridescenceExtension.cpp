// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 2

// HasValue @ 14e601030

bool __thiscall FGLTFJsonIridescenceExtension::HasValue(FGLTFJsonIridescenceExtension *this)

{
  if (((((float)((uint)this->IridescenceFactor & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
         __real_322bcc77) && ((this->IridescenceTexture).Index == (FGLTFJsonTexture *)0x0)) &&
      ((float)((uint)(this->IridescenceIOR - __real_3fa66666) &
              __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) &&
     ((((float)((uint)(this->IridescenceThicknessMinimum - __real_42c80000) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77 &&
       ((float)((uint)(this->IridescenceThicknessMaximum - __real_43c80000) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) &&
      ((this->IridescenceThicknessTexture).Index == (FGLTFJsonTexture *)0x0)))) {
    return false;
  }
  return true;
}

// WriteObject @ 14e61b3d0

void __thiscall
FGLTFJsonIridescenceExtension::WriteObject
          (FGLTFJsonIridescenceExtension *this,IGLTFJsonWriter *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FString local_48 [4];
  
  fVar2 = __real_322bcc77;
  fVar1 = this->IridescenceFactor;
  if (__real_322bcc77 < (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    ::FString::FString(local_48,L"iridescenceFactor");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,local_48);
    (**(code **)(param_1->_padding_ + 0x20))(param_1,fVar1);
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
  }
  if ((this->IridescenceTexture).Index != (FGLTFJsonTexture *)0x0) {
    ::FString::FString(local_48,L"iridescenceTexture");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,local_48);
    (**(code **)((this->IridescenceTexture)._padding_ + 8))(&this->IridescenceTexture,param_1);
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
  }
  fVar1 = this->IridescenceIOR;
  if (fVar2 < (float)((uint)(fVar1 - __real_3fa66666) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    ::FString::FString(local_48,L"iridescenceIor");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,local_48);
    (**(code **)(param_1->_padding_ + 0x20))(param_1,fVar1);
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
  }
  fVar3 = __real_42c80000;
  fVar1 = this->IridescenceThicknessMinimum;
  if (fVar2 < (float)((uint)(fVar1 - __real_42c80000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    ::FString::FString(local_48,L"iridescenceThicknessMinimum");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,local_48);
    (**(code **)(param_1->_padding_ + 0x20))(param_1,fVar1);
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
  }
  fVar1 = this->IridescenceThicknessMaximum;
  if (fVar2 < (float)((uint)(fVar1 - fVar3) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    ::FString::FString(local_48,L"iridescenceThicknessMaximum");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,local_48);
    (**(code **)(param_1->_padding_ + 0x20))(param_1,fVar1);
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
  }
  if ((this->IridescenceThicknessTexture).Index != (FGLTFJsonTexture *)0x0) {
    ::FString::FString(local_48,L"iridescenceThicknessTexture");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,local_48);
    (**(code **)((this->IridescenceThicknessTexture)._padding_ + 8))
              (&this->IridescenceThicknessTexture,param_1);
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

