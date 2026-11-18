// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a2c2420

UScriptStruct * __cdecl FRigTransformMetadata::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigTransformMetadata.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigTransformMetadata.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigTransformMetadata,(UObject *)pUVar1,
                         L"RigTransformMetadata");
  }
  return Z_Registration_Info_UScriptStruct_FRigTransformMetadata.OuterSingleton;
}

// Serialize @ 14a2c2500

void __thiscall FRigTransformMetadata::Serialize(FRigTransformMetadata *this,FArchive *param_1)

{
  FRigBaseMetadata::Serialize((FRigBaseMetadata *)this,param_1);
  UE::Math::operator<<(param_1,&this->Value);
  return;
}

