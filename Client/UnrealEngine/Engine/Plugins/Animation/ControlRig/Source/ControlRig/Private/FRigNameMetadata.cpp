// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a2c0450

UScriptStruct * __cdecl FRigNameMetadata::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigNameMetadata.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigNameMetadata.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigNameMetadata,(UObject *)pUVar1,
                         L"RigNameMetadata");
  }
  return Z_Registration_Info_UScriptStruct_FRigNameMetadata.OuterSingleton;
}

// Serialize @ 14a2c04d0

void __thiscall FRigNameMetadata::Serialize(FRigNameMetadata *this,FArchive *param_1)

{
  FRigBaseMetadata::Serialize((FRigBaseMetadata *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014a2c04f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->Value);
  return;
}

