// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkControlRig
// Functions: 1

// StaticStruct @ 14d360670

UScriptStruct * __cdecl FRigUnit_LiveLinkBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_LiveLinkBase.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_LiveLinkBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_LiveLinkBase,(UObject *)pUVar1,
                         L"RigUnit_LiveLinkBase");
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_LiveLinkBase.OuterSingleton;
}

