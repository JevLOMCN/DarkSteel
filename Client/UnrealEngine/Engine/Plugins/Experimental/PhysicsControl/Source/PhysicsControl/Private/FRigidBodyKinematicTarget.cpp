// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 1

// StaticStruct @ 14d9b4580

UScriptStruct * __cdecl FRigidBodyKinematicTarget::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigidBodyKinematicTarget.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsControl();
    Z_Registration_Info_UScriptStruct_FRigidBodyKinematicTarget.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigidBodyKinematicTarget,(UObject *)pUVar1,
                         L"RigidBodyKinematicTarget");
  }
  return Z_Registration_Info_UScriptStruct_FRigidBodyKinematicTarget.OuterSingleton;
}

