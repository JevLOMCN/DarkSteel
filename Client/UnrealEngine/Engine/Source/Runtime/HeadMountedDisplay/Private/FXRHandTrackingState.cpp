// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HeadMountedDisplay
// Functions: 1

// StaticStruct @ 14594b7c0

UScriptStruct * __cdecl FXRHandTrackingState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FXRHandTrackingState.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_HeadMountedDisplay();
    Z_Registration_Info_UScriptStruct_FXRHandTrackingState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FXRHandTrackingState,(UObject *)pUVar1,
                         L"XRHandTrackingState");
  }
  return Z_Registration_Info_UScriptStruct_FXRHandTrackingState.OuterSingleton;
}

