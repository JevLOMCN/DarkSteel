// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: KawaiiPhysics
// Functions: 1

// StaticStruct @ 14de3b360

UScriptStruct * __cdecl FKawaiiPhysicsSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FKawaiiPhysicsSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_KawaiiPhysics();
    Z_Registration_Info_UScriptStruct_FKawaiiPhysicsSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings,(UObject *)pUVar1,
                         L"KawaiiPhysicsSettings");
  }
  return Z_Registration_Info_UScriptStruct_FKawaiiPhysicsSettings.OuterSingleton;
}

