// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147f0dd80

UScriptStruct * __cdecl FMaterialExternalCodeEnvironmentDefine::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMaterialExternalCodeEnvironmentDefine.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMaterialExternalCodeEnvironmentDefine.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMaterialExternalCodeEnvironmentDefine,
                         (UObject *)pUVar1,L"MaterialExternalCodeEnvironmentDefine");
  }
  return Z_Registration_Info_UScriptStruct_FMaterialExternalCodeEnvironmentDefine.OuterSingleton;
}

// UpdateHash @ 147f53bb0

void __thiscall
FMaterialExternalCodeEnvironmentDefine::UpdateHash
          (FMaterialExternalCodeEnvironmentDefine *this,FSHA1 *param_1)

{
  ForAnyElementType FVar1;
  uint uVar2;
  FString local_18;
  
  ::FName::ToString(&this->Name,&local_18);
  uVar2 = local_18.Data.ArrayNum - 1;
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  if (local_18.Data.ArrayNum == 0) {
    uVar2 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  FSHA1::UpdateWithString(param_1,(wchar_t *)FVar1.Data,uVar2);
  FSHA1::Update(param_1,&this->ShaderFrequency,1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

