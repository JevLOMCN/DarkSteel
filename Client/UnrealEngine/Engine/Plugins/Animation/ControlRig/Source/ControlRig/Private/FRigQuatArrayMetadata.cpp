// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a2c21c0

UScriptStruct * __cdecl FRigQuatArrayMetadata::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigQuatArrayMetadata.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigQuatArrayMetadata.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigQuatArrayMetadata,(UObject *)pUVar1,
                         L"RigQuatArrayMetadata");
  }
  return Z_Registration_Info_UScriptStruct_FRigQuatArrayMetadata.OuterSingleton;
}

// Serialize @ 14a2c2210

void __thiscall FRigQuatArrayMetadata::Serialize(FRigQuatArrayMetadata *this,FArchive *param_1)

{
  FRigBaseMetadata::Serialize((FRigBaseMetadata *)this,param_1);
  TArrayPrivateFriend::Serialize<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>
            (param_1,&this->Value);
  return;
}

