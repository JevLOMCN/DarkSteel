// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// FGLTFProxyMaterialTextureParameterInfo @ 14e5d2a80

FGLTFProxyMaterialTextureParameterInfo * __thiscall
FGLTFProxyMaterialTextureParameterInfo::FGLTFProxyMaterialTextureParameterInfo
          (FGLTFProxyMaterialTextureParameterInfo *this,FString *param_1)

{
  FName FVar1;
  FName *pFVar2;
  ForAnyElementType FVar3;
  FName local_res8;
  FString local_28;
  
  ::FString::ConcatFC(&local_28,param_1,L" Texture");
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  pFVar2 = ::FName::FName(&local_res8,(wchar_t *)FVar3.Data);
  FVar1 = *pFVar2;
  (this->Texture).ParameterInfo.Name.ComparisonIndex.Value = FVar1.ComparisonIndex.Value.Value;
  (this->Texture).ParameterInfo.Name.Number = FVar1.Number;
  (this->Texture).ParameterInfo.Name.DisplayIndex.Value = 0;
  (this->Texture).ParameterInfo.Index = -1;
  (this->Texture).ParameterInfo.Association.Value = '\x02';
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFC(&local_28,param_1,L" UV Index");
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  pFVar2 = ::FName::FName(&local_res8,(wchar_t *)FVar3.Data);
  FVar1 = *pFVar2;
  (this->UVIndex).ParameterInfo.Name.ComparisonIndex.Value = FVar1.ComparisonIndex.Value.Value;
  (this->UVIndex).ParameterInfo.Name.Number = FVar1.Number;
  (this->UVIndex).ParameterInfo.Name.DisplayIndex.Value = 0;
  (this->UVIndex).ParameterInfo.Index = -1;
  (this->UVIndex).ParameterInfo.Association.Value = '\x02';
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFC(&local_28,param_1,L" UV Offset");
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  pFVar2 = ::FName::FName(&local_res8,(wchar_t *)FVar3.Data);
  FVar1 = *pFVar2;
  (this->UVOffset).ParameterInfo.Name.ComparisonIndex.Value = FVar1.ComparisonIndex.Value.Value;
  (this->UVOffset).ParameterInfo.Name.Number = FVar1.Number;
  (this->UVOffset).ParameterInfo.Name.DisplayIndex.Value = 0;
  (this->UVOffset).ParameterInfo.Index = -1;
  (this->UVOffset).ParameterInfo.Association.Value = '\x02';
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFC(&local_28,param_1,L" UV Scale");
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  pFVar2 = ::FName::FName(&local_res8,(wchar_t *)FVar3.Data);
  FVar1 = *pFVar2;
  (this->UVScale).ParameterInfo.Name.ComparisonIndex.Value = FVar1.ComparisonIndex.Value.Value;
  (this->UVScale).ParameterInfo.Name.Number = FVar1.Number;
  (this->UVScale).ParameterInfo.Name.DisplayIndex.Value = 0;
  (this->UVScale).ParameterInfo.Index = -1;
  (this->UVScale).ParameterInfo.Association.Value = '\x02';
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFC(&local_28,param_1,L" UV Rotation");
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  pFVar2 = ::FName::FName(&local_res8,(wchar_t *)FVar3.Data);
  FVar1 = *pFVar2;
  (this->UVRotation).ParameterInfo.Name.ComparisonIndex.Value = FVar1.ComparisonIndex.Value.Value;
  (this->UVRotation).ParameterInfo.Name.Number = FVar1.Number;
  (this->UVRotation).ParameterInfo.Name.DisplayIndex.Value = 0;
  (this->UVRotation).ParameterInfo.Index = -1;
  (this->UVRotation).ParameterInfo.Association.Value = '\x02';
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFC(&local_28,param_1,L" Tiling Method");
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  pFVar2 = ::FName::FName(&local_res8,(wchar_t *)FVar3.Data);
  FVar1 = *pFVar2;
  (this->TilingMethod).ParameterInfo.Name.ComparisonIndex.Value = FVar1.ComparisonIndex.Value.Value;
  (this->TilingMethod).ParameterInfo.Name.Number = FVar1.Number;
  (this->TilingMethod).ParameterInfo.Name.DisplayIndex.Value = 0;
  (this->TilingMethod).ParameterInfo.Index = -1;
  (this->TilingMethod).ParameterInfo.Association.Value = '\x02';
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return this;
}

