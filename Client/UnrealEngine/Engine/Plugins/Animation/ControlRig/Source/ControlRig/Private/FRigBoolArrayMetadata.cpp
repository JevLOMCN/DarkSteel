// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a2bfa10

UScriptStruct * __cdecl FRigBoolArrayMetadata::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigBoolArrayMetadata.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigBoolArrayMetadata.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigBoolArrayMetadata,(UObject *)pUVar1,
                         L"RigBoolArrayMetadata");
  }
  return Z_Registration_Info_UScriptStruct_FRigBoolArrayMetadata.OuterSingleton;
}

// Serialize @ 14a2bfa90

void __thiscall FRigBoolArrayMetadata::Serialize(FRigBoolArrayMetadata *this,FArchive *param_1)

{
  FRigBaseMetadata::Serialize((FRigBaseMetadata *)this,param_1);
  TArrayPrivateFriend::Serialize<bool,TSizedDefaultAllocator<32>_>(param_1,&this->Value);
  return;
}

