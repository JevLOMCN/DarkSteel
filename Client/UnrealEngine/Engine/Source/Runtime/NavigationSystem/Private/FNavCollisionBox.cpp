// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// StaticStruct @ 146d624d0

UScriptStruct * __cdecl FNavCollisionBox::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNavCollisionBox.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NavigationSystem();
    Z_Registration_Info_UScriptStruct_FNavCollisionBox.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNavCollisionBox,(UObject *)pUVar1,
                         L"NavCollisionBox");
  }
  return Z_Registration_Info_UScriptStruct_FNavCollisionBox.OuterSingleton;
}

