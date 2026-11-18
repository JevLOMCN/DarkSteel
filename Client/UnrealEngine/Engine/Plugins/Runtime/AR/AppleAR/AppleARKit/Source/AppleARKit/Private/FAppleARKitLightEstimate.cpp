// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKit
// Functions: 1

// StaticStruct @ 14cfcc010

UScriptStruct * __cdecl FAppleARKitLightEstimate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAppleARKitLightEstimate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AppleARKit();
    Z_Registration_Info_UScriptStruct_FAppleARKitLightEstimate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAppleARKitLightEstimate,(UObject *)pUVar1,
                         L"AppleARKitLightEstimate");
  }
  return Z_Registration_Info_UScriptStruct_FAppleARKitLightEstimate.OuterSingleton;
}

