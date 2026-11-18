// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 1476d94e0

UScriptStruct * __cdecl FCameraShakeDuration::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCameraShakeDuration.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FCameraShakeDuration.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraShakeDuration,(UObject *)pUVar1,
                         L"CameraShakeDuration");
  }
  return Z_Registration_Info_UScriptStruct_FCameraShakeDuration.OuterSingleton;
}

