// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// StaticStruct @ 1493171a0

UScriptStruct * __cdecl FNiagaraVariableWithOffset::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraVariableWithOffset.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraVariableWithOffset.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariableWithOffset,(UObject *)pUVar1,
                         L"NiagaraVariableWithOffset");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraVariableWithOffset.OuterSingleton;
}

// Serialize @ 14936a0d0

bool __thiscall
FNiagaraVariableWithOffset::Serialize(FNiagaraVariableWithOffset *this,FArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  FNiagaraVariableBase::Serialize((FNiagaraVariableBase *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FNiagaraCustomVersion::GUID);
  iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FNiagaraCustomVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) && (iVar3 < 0x40)) {
    return false;
  }
  piVar1 = &this->Offset;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar2 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return true;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    return true;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
  return true;
}

