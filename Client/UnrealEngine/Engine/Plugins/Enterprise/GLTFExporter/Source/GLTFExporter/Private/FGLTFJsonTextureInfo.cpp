// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// WriteObject @ 14e61ed90

void __thiscall
FGLTFJsonTextureInfo::WriteObject(FGLTFJsonTextureInfo *this,IGLTFJsonWriter *param_1)

{
  int iVar1;
  FGLTFJsonTexture *pFVar2;
  bool bVar3;
  undefined4 uVar4;
  bool local_res8 [8];
  EGLTFJsonExtension local_res10 [2];
  FString local_18;
  
  pFVar2 = this->Index;
  ::FString::FString(&local_18,L"index");
  (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_18);
  if (pFVar2 == (FGLTFJsonTexture *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)pFVar2->_padding_;
  }
  (**(code **)(param_1->_padding_ + 0x30))(param_1,uVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  iVar1 = this->TexCoord;
  if (iVar1 != 0) {
    ::FString::FString(&local_18,L"texCoord");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_18);
    (**(code **)(param_1->_padding_ + 0x30))(param_1,iVar1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  bVar3 = FGLTFJsonTextureTransform::IsNearlyDefault(&this->Transform,param_1->DefaultTolerance);
  if (!bVar3) {
    ::FString::FString(&local_18,L"extensions");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_18);
    (**(code **)(param_1->_padding_ + 0x48))(param_1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    local_res8[0] = true;
    local_res8[1] = false;
    local_res8[2] = false;
    local_res8[3] = false;
    TSet<enum_EGLTFJsonExtension,DefaultKeyFuncs<enum_EGLTFJsonExtension,0>,FDefaultSetAllocator>::
    Emplace<enum_EGLTFJsonExtension_const_&>(param_1->Extensions,local_res10,local_res8);
    ::FString::FString(&local_18,L"KHR_texture_transform");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_18);
    (**(code **)((this->Transform)._padding_ + 8))(&this->Transform,param_1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    (**(code **)(param_1->_padding_ + 0x50))(param_1);
  }
  return;
}

