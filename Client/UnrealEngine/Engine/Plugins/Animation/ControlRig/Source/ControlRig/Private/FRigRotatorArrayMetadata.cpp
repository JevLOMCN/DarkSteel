// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a2c0ce0

UScriptStruct * __cdecl FRigRotatorArrayMetadata::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigRotatorArrayMetadata.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigRotatorArrayMetadata.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigRotatorArrayMetadata,(UObject *)pUVar1,
                         L"RigRotatorArrayMetadata");
  }
  return Z_Registration_Info_UScriptStruct_FRigRotatorArrayMetadata.OuterSingleton;
}

// Serialize @ 14a2c0d60

void __thiscall
FRigRotatorArrayMetadata::Serialize(FRigRotatorArrayMetadata *this,FArchive *param_1)

{
  FRigBaseMetadata::Serialize((FRigBaseMetadata *)this,param_1);
  TArrayPrivateFriend::Serialize<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>
            (param_1,&this->Value);
  return;
}

