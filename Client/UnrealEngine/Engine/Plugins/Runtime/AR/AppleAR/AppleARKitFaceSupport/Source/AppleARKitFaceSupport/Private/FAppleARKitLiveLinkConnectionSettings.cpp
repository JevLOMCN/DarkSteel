// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKitFaceSupport
// Functions: 1

// StaticStruct @ 14d2819c0

UScriptStruct * __cdecl FAppleARKitLiveLinkConnectionSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAppleARKitLiveLinkConnectionSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AppleARKitFaceSupport();
    Z_Registration_Info_UScriptStruct_FAppleARKitLiveLinkConnectionSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAppleARKitLiveLinkConnectionSettings,
                         (UObject *)pUVar1,L"AppleARKitLiveLinkConnectionSettings");
  }
  return Z_Registration_Info_UScriptStruct_FAppleARKitLiveLinkConnectionSettings.OuterSingleton;
}

