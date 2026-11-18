// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicModule
// Functions: 1

// StaticStruct @ 14a65be60

UScriptStruct * __cdecl FCoordinateSystem::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCoordinateSystem.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UScriptStruct_FCoordinateSystem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCoordinateSystem,(UObject *)pUVar1,
                         L"CoordinateSystem");
  }
  return Z_Registration_Info_UScriptStruct_FCoordinateSystem.OuterSingleton;
}

