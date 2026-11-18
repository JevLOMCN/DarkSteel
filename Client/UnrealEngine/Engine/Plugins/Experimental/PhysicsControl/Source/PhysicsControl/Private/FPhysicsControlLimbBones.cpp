// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 1

// StaticStruct @ 14d9af570

UScriptStruct * __cdecl FPhysicsControlLimbBones::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlLimbBones.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsControl();
    Z_Registration_Info_UScriptStruct_FPhysicsControlLimbBones.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsControlLimbBones,(UObject *)pUVar1,
                         L"PhysicsControlLimbBones");
  }
  return Z_Registration_Info_UScriptStruct_FPhysicsControlLimbBones.OuterSingleton;
}

