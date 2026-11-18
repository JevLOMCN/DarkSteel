// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 2

// StaticStruct @ 148de88a0

UScriptStruct * __cdecl FNiagaraDataInterfaceGeneratedFunction::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NiagaraShader();
    Z_Registration_Info_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction,
                         (UObject *)pUVar1,L"NiagaraDataInterfaceGeneratedFunction");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction.OuterSingleton;
}

// Serialize @ 148e0cca0

bool __thiscall
FNiagaraDataInterfaceGeneratedFunction::Serialize
          (FNiagaraDataInterfaceGeneratedFunction *this,FArchive *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  int iVar3;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FNiagaraCustomVersion::GUID);
  iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FNiagaraCustomVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,this);
  ::operator<<(param_1,&this->InstanceName);
  TArrayPrivateFriend::Serialize<TTuple<FName,FName>,TSizedDefaultAllocator<32>_>
            (param_1,&this->Specifiers);
  if (0x4c < iVar3) {
    TArrayPrivateFriend::Serialize<FNiagaraVariableCommonReference,TSizedDefaultAllocator<32>_>
              (param_1,&this->VariadicInputs);
    TArrayPrivateFriend::Serialize<FNiagaraVariableCommonReference,TSizedDefaultAllocator<32>_>
              (param_1,&this->VariadicOutputs);
  }
  if (0x5a < iVar3) {
    puVar1 = &this->MiscUsageBitMask;
    puVar2 = (ushort *)**(undefined8 **)&param_1->field_0x8;
    if (puVar2 + 1 <= (ushort *)(*(undefined8 **)&param_1->field_0x8)[1]) {
      *puVar1 = *puVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
      return true;
    }
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,2);
      return true;
    }
    FArchive::SerializeByteOrderSwapped(param_1,puVar1);
  }
  return true;
}

