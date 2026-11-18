// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 1

// StaticStruct @ 14d77d540

UScriptStruct * __cdecl FMediaIOAutoDetectableTimecodeFormat_Backup::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup,
                         (UObject *)pUVar1,L"MediaIOAutoDetectableTimecodeFormat_Backup");
  }
  return Z_Registration_Info_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup.
         OuterSingleton;
}

