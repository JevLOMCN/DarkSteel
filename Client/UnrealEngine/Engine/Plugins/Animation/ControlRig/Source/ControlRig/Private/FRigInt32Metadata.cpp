// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a2bfeb0

UScriptStruct * __cdecl FRigInt32Metadata::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigInt32Metadata.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigInt32Metadata.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigInt32Metadata,(UObject *)pUVar1,
                         L"RigInt32Metadata");
  }
  return Z_Registration_Info_UScriptStruct_FRigInt32Metadata.OuterSingleton;
}

// Serialize @ 14a2bff60

void __thiscall FRigInt32Metadata::Serialize(FRigInt32Metadata *this,FArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  
  FRigBaseMetadata::Serialize((FRigBaseMetadata *)this,param_1);
  piVar1 = &this->Value;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar2 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014a2bffbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
  return;
}

