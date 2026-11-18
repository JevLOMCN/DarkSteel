// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// WriteObject @ 14e61bae0

void __thiscall FGLTFJsonLightMap::WriteObject(FGLTFJsonLightMap *this,IGLTFJsonWriter *param_1)

{
  FString local_18;
  
  if (1 < (this->Name).Data.ArrayNum) {
    ::FString::FString(&local_18,L"name");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_18);
    (**(code **)(param_1->_padding_ + 0x18))(param_1,&this->Name);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((this->Texture).Index != (FGLTFJsonTexture *)0x0) {
    ::FString::FString(&local_18,L"texture");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_18);
    (**(code **)((this->Texture)._padding_ + 8))(&this->Texture,param_1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(&local_18,L"lightmapScale");
  (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_18);
  (**(code **)(*(longlong *)&this->LightMapScale + 8))(&this->LightMapScale,param_1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"lightmapAdd");
  (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_18);
  (**(code **)(*(longlong *)&this->LightMapAdd + 8))(&this->LightMapAdd,param_1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"coordinateScaleBias");
  (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_18);
  (**(code **)(*(longlong *)&this->CoordinateScaleBias + 8))(&this->CoordinateScaleBias,param_1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

