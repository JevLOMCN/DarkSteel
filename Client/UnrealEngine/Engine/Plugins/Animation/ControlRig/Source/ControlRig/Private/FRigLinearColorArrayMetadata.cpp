// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a2c2a50

UScriptStruct * __cdecl FRigLinearColorArrayMetadata::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigLinearColorArrayMetadata.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigLinearColorArrayMetadata.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigLinearColorArrayMetadata,(UObject *)pUVar1,
                         L"RigLinearColorArrayMetadata");
  }
  return Z_Registration_Info_UScriptStruct_FRigLinearColorArrayMetadata.OuterSingleton;
}

// Serialize @ 14a2c2ac0

void __thiscall
FRigLinearColorArrayMetadata::Serialize(FRigLinearColorArrayMetadata *this,FArchive *param_1)

{
  FRigBaseMetadata::Serialize((FRigBaseMetadata *)this,param_1);
  TArrayPrivateFriend::Serialize<FLinearColor,TSizedDefaultAllocator<32>_>(param_1,&this->Value);
  return;
}

