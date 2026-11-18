// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HeadMountedDisplay
// Functions: 1

// StaticStruct @ 14594b780

UScriptStruct * __cdecl FXRMotionControllerState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FXRMotionControllerState.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HeadMountedDisplay();
    Z_Registration_Info_UScriptStruct_FXRMotionControllerState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FXRMotionControllerState,(UObject *)pUVar1,
                         L"XRMotionControllerState");
  }
  return Z_Registration_Info_UScriptStruct_FXRMotionControllerState.OuterSingleton;
}

