// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRigSpline
// Functions: 1

// StaticStruct @ 14debd320

UScriptStruct * __cdecl FRigUnit_ControlRigSplineBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ControlRigSplineBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRigSpline();
    Z_Registration_Info_UScriptStruct_FRigUnit_ControlRigSplineBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase,(UObject *)pUVar1,
                         L"RigUnit_ControlRigSplineBase");
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ControlRigSplineBase.OuterSingleton;
}

