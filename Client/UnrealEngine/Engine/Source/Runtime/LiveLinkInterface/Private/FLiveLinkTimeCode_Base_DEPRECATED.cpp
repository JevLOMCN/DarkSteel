// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 1

// StaticStruct @ 14cfaf090

UScriptStruct * __cdecl FLiveLinkTimeCode_Base_DEPRECATED::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED,
                         (UObject *)pUVar1,L"LiveLinkTimeCode_Base_DEPRECATED");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED.OuterSingleton;
}

