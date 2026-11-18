// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 148766dd0

UScriptStruct * __cdecl FStreamableTexture::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStreamableTexture.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FStreamableTexture.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStreamableTexture,(UObject *)pUVar1,
                         L"StreamableTexture");
  }
  return Z_Registration_Info_UScriptStruct_FStreamableTexture.OuterSingleton;
}

