// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a2c1f70

UScriptStruct * __cdecl FRigQuatMetadata::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigQuatMetadata.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigQuatMetadata.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigQuatMetadata,(UObject *)pUVar1,
                         L"RigQuatMetadata");
  }
  return Z_Registration_Info_UScriptStruct_FRigQuatMetadata.OuterSingleton;
}

// Serialize @ 14a2c1fb0

void __thiscall FRigQuatMetadata::Serialize(FRigQuatMetadata *this,FArchive *param_1)

{
  FRigBaseMetadata::Serialize((FRigBaseMetadata *)this,param_1);
  UE::Math::operator<<(param_1,&this->Value);
  return;
}

