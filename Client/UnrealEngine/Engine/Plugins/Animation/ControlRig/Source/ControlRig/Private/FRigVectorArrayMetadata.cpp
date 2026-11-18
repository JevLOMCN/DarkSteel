// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a2c0950

UScriptStruct * __cdecl FRigVectorArrayMetadata::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVectorArrayMetadata.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigVectorArrayMetadata.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVectorArrayMetadata,(UObject *)pUVar1,
                         L"RigVectorArrayMetadata");
  }
  return Z_Registration_Info_UScriptStruct_FRigVectorArrayMetadata.OuterSingleton;
}

// Serialize @ 14a2c09d0

void __thiscall FRigVectorArrayMetadata::Serialize(FRigVectorArrayMetadata *this,FArchive *param_1)

{
  FRigBaseMetadata::Serialize((FRigBaseMetadata *)this,param_1);
  TArrayPrivateFriend::Serialize<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>
            (param_1,&this->Value);
  return;
}

