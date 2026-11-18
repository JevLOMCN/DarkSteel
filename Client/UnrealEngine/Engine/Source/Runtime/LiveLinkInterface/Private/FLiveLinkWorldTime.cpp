// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 1

// StaticStruct @ 14cfae0c0

UScriptStruct * __cdecl FLiveLinkWorldTime::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkWorldTime.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FLiveLinkWorldTime.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkWorldTime,(UObject *)pUVar1,
                         L"LiveLinkWorldTime");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkWorldTime.OuterSingleton;
}

