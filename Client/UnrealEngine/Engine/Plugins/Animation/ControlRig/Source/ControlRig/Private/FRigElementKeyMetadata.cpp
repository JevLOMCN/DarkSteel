// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a2c31d0

UScriptStruct * __cdecl FRigElementKeyMetadata::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigElementKeyMetadata.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigElementKeyMetadata.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigElementKeyMetadata,(UObject *)pUVar1,
                         L"RigElementKeyMetadata");
  }
  return Z_Registration_Info_UScriptStruct_FRigElementKeyMetadata.OuterSingleton;
}

// Serialize @ 14a2c3210

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigElementKeyMetadata::Serialize(FRigElementKeyMetadata *this,FArchive *param_1)

{
  FRigBaseMetadata::Serialize((FRigBaseMetadata *)this,param_1);
  ::operator<<(param_1,&this->Value);
  return;
}

