// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 1

// StaticStruct @ 14452bb80

UScriptStruct * __cdecl FSoundGeneratorOutput::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSoundGeneratorOutput.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_AudioExtensions();
    Z_Registration_Info_UScriptStruct_FSoundGeneratorOutput.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSoundGeneratorOutput,(UObject *)pUVar1,
                         L"SoundGeneratorOutput");
  }
  return Z_Registration_Info_UScriptStruct_FSoundGeneratorOutput.OuterSingleton;
}

