// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 1476d8410

UScriptStruct * __cdecl FCollisionProfileName::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollisionProfileName.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FCollisionProfileName.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollisionProfileName,(UObject *)pUVar1,
                         L"CollisionProfileName");
  }
  return Z_Registration_Info_UScriptStruct_FCollisionProfileName.OuterSingleton;
}

