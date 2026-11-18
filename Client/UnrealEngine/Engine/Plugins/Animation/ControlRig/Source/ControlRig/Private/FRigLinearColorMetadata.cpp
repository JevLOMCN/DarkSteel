// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a2c27f0

UScriptStruct * __cdecl FRigLinearColorMetadata::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigLinearColorMetadata.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigLinearColorMetadata.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigLinearColorMetadata,(UObject *)pUVar1,
                         L"RigLinearColorMetadata");
  }
  return Z_Registration_Info_UScriptStruct_FRigLinearColorMetadata.OuterSingleton;
}

// Serialize @ 14a2c2880

void __thiscall FRigLinearColorMetadata::Serialize(FRigLinearColorMetadata *this,FArchive *param_1)

{
  FRigBaseMetadata::Serialize((FRigBaseMetadata *)this,param_1);
  ::operator<<(param_1,&this->Value);
  return;
}

