// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineCameras
// Functions: 1

// StaticStruct @ 14ad19420

UScriptStruct * __cdecl FVOscillator::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVOscillator.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EngineCameras();
    Z_Registration_Info_UScriptStruct_FVOscillator.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVOscillator,(UObject *)pUVar1,L"VOscillator");
  }
  return Z_Registration_Info_UScriptStruct_FVOscillator.OuterSingleton;
}

