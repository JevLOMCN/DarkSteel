// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a2c0170

UScriptStruct * __cdecl FRigInt32ArrayMetadata::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigInt32ArrayMetadata.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigInt32ArrayMetadata.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigInt32ArrayMetadata,(UObject *)pUVar1,
                         L"RigInt32ArrayMetadata");
  }
  return Z_Registration_Info_UScriptStruct_FRigInt32ArrayMetadata.OuterSingleton;
}

// Serialize @ 14a2c0230

void __thiscall FRigInt32ArrayMetadata::Serialize(FRigInt32ArrayMetadata *this,FArchive *param_1)

{
  FRigBaseMetadata::Serialize((FRigBaseMetadata *)this,param_1);
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(param_1,&this->Value);
  return;
}

