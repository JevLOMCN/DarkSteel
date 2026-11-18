// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// WriteObject @ 14e61cee0

void __thiscall
FGLTFJsonNormalTextureInfo::WriteObject(FGLTFJsonNormalTextureInfo *this,IGLTFJsonWriter *param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  undefined4 uVar5;
  float fVar6;
  bool local_res8 [8];
  EGLTFJsonExtension local_res10 [2];
  FString local_28 [2];
  
  lVar3 = this->_padding_;
  ::FString::FString(local_28,L"index");
  (**(code **)(param_1->_padding_ + 0x40))(param_1,local_28);
  if (lVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = *(undefined4 *)(lVar3 + 8);
  }
  (**(code **)(param_1->_padding_ + 0x30))(param_1,uVar5);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  iVar2 = (int)this->_padding_;
  if (iVar2 != 0) {
    ::FString::FString(local_28,L"texCoord");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,local_28);
    (**(code **)(param_1->_padding_ + 0x30))(param_1,iVar2);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  fVar1 = this->Scale;
  fVar6 = (float)((uint)(fVar1 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (param_1->DefaultTolerance <= fVar6 && fVar6 != param_1->DefaultTolerance) {
    ::FString::FString(local_28,L"scale");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,local_28);
    (**(code **)(param_1->_padding_ + 0x20))(param_1,fVar1);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  bVar4 = FGLTFJsonTextureTransform::IsNearlyDefault
                    ((FGLTFJsonTextureTransform *)&this->_padding_,param_1->DefaultTolerance);
  if (!bVar4) {
    ::FString::FString(local_28,L"extensions");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,local_28);
    (**(code **)(param_1->_padding_ + 0x48))(param_1);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
    local_res8[0] = true;
    local_res8[1] = false;
    local_res8[2] = false;
    local_res8[3] = false;
    TSet<enum_EGLTFJsonExtension,DefaultKeyFuncs<enum_EGLTFJsonExtension,0>,FDefaultSetAllocator>::
    Emplace<enum_EGLTFJsonExtension_const_&>(param_1->Extensions,local_res10,local_res8);
    ::FString::FString(local_28,L"KHR_texture_transform");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,local_28);
    (**(code **)(this->_padding_ + 8))(&this->_padding_,param_1);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
    (**(code **)(param_1->_padding_ + 0x50))(param_1);
  }
  return;
}

