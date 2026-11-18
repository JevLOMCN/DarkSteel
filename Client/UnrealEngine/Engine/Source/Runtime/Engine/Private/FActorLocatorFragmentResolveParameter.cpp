// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 1488a38e0

UScriptStruct * __cdecl FActorLocatorFragmentResolveParameter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FActorLocatorFragmentResolveParameter.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FActorLocatorFragmentResolveParameter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FActorLocatorFragmentResolveParameter,
                         (UObject *)pUVar1,L"ActorLocatorFragmentResolveParameter");
  }
  return Z_Registration_Info_UScriptStruct_FActorLocatorFragmentResolveParameter.OuterSingleton;
}

