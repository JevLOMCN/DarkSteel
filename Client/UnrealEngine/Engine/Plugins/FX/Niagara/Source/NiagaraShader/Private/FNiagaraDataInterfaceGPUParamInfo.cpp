// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 4

// StaticStruct @ 148de8b20

UScriptStruct * __cdecl FNiagaraDataInterfaceGPUParamInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NiagaraShader();
    Z_Registration_Info_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo,
                         (UObject *)pUVar1,L"NiagaraDataInterfaceGPUParamInfo");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo.OuterSingleton;
}

// IsExternalParameter @ 148e091a0

bool __thiscall
FNiagaraDataInterfaceGPUParamInfo::IsExternalParameter(FNiagaraDataInterfaceGPUParamInfo *this)

{
  bool bVar1;
  
  bVar1 = ::FString::StartsWith(&this->DataInterfaceHLSLSymbol,L"User_",5,IgnoreCase);
  if (!bVar1) {
    bVar1 = ::FString::StartsWith(&this->DataInterfaceHLSLSymbol,L"NPC_",4,IgnoreCase);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// IsUserParameter @ 148e09770

bool __thiscall
FNiagaraDataInterfaceGPUParamInfo::IsUserParameter(FNiagaraDataInterfaceGPUParamInfo *this)

{
  bool bVar1;
  
  bVar1 = ::FString::StartsWith(&this->DataInterfaceHLSLSymbol,L"User_",5,IgnoreCase);
  return bVar1;
}

// Serialize @ 148e0cc20

bool __thiscall
FNiagaraDataInterfaceGPUParamInfo::Serialize
          (FNiagaraDataInterfaceGPUParamInfo *this,FArchive *param_1)

{
  int iVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FNiagaraCustomVersion::GUID);
  iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FNiagaraCustomVersion::GUID);
  ::operator<<(param_1,&this->DataInterfaceHLSLSymbol);
  ::operator<<(param_1,&this->DIClassName);
  if (((param_1->field_0x28 & 1) == 0) || (0x36 < iVar1)) {
    TArrayPrivateFriend::
    Serialize<FNiagaraDataInterfaceGeneratedFunction,TSizedDefaultAllocator<32>_>
              (param_1,&this->GeneratedFunctions);
  }
  return true;
}

