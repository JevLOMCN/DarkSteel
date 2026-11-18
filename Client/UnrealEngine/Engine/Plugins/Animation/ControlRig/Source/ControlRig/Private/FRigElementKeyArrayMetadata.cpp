// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a2c33f0

UScriptStruct * __cdecl FRigElementKeyArrayMetadata::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigElementKeyArrayMetadata.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigElementKeyArrayMetadata.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigElementKeyArrayMetadata,(UObject *)pUVar1,
                         L"RigElementKeyArrayMetadata");
  }
  return Z_Registration_Info_UScriptStruct_FRigElementKeyArrayMetadata.OuterSingleton;
}

// Serialize @ 14a2c3430

void __thiscall
FRigElementKeyArrayMetadata::Serialize(FRigElementKeyArrayMetadata *this,FArchive *param_1)

{
  FRigBaseMetadata::Serialize((FRigBaseMetadata *)this,param_1);
  TArrayPrivateFriend::Serialize<FRigElementKey,TSizedDefaultAllocator<32>_>(param_1,&this->Value);
  return;
}

