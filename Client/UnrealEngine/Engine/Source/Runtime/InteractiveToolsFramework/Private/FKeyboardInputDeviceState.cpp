// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 1

// StaticStruct @ 14966d680

UScriptStruct * __cdecl FKeyboardInputDeviceState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FKeyboardInputDeviceState.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UScriptStruct_FKeyboardInputDeviceState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FKeyboardInputDeviceState,(UObject *)pUVar1,
                         L"KeyboardInputDeviceState");
  }
  return Z_Registration_Info_UScriptStruct_FKeyboardInputDeviceState.OuterSingleton;
}

