// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a2bfb60

UScriptStruct * __cdecl FRigFloatMetadata::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigFloatMetadata.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigFloatMetadata.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigFloatMetadata,(UObject *)pUVar1,
                         L"RigFloatMetadata");
  }
  return Z_Registration_Info_UScriptStruct_FRigFloatMetadata.OuterSingleton;
}

// Serialize @ 14a2bfba0

void __thiscall FRigFloatMetadata::Serialize(FRigFloatMetadata *this,FArchive *param_1)

{
  float *pfVar1;
  float *pfVar2;
  
  FRigBaseMetadata::Serialize((FRigBaseMetadata *)this,param_1);
  pfVar1 = &this->Value;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if (pfVar2 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014a2bfbfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
  return;
}

