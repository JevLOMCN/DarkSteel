// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// StaticStruct @ 14a4d47b0

UScriptStruct * __cdecl FRigUnit_ItemBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ItemBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ItemBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ItemBase,(UObject *)pUVar1,
                         L"RigUnit_ItemBase");
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ItemBase.OuterSingleton;
}

