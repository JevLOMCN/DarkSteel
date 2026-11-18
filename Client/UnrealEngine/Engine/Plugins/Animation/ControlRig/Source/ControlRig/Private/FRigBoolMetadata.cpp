// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a2bf850

UScriptStruct * __cdecl FRigBoolMetadata::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigBoolMetadata.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigBoolMetadata.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigBoolMetadata,(UObject *)pUVar1,
                         L"RigBoolMetadata");
  }
  return Z_Registration_Info_UScriptStruct_FRigBoolMetadata.OuterSingleton;
}

// Serialize @ 14a2bf8a0

void __thiscall FRigBoolMetadata::Serialize(FRigBoolMetadata *this,FArchive *param_1)

{
  FRigBaseMetadata::Serialize((FRigBaseMetadata *)this,param_1);
  ::operator<<(param_1,&this->Value);
  return;
}

