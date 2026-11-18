// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DeveloperSettings
// Functions: 2

// StaticStruct @ 14241a610

UScriptStruct * __cdecl FPerPlatformSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPerPlatformSettings.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_DeveloperSettings();
    Z_Registration_Info_UScriptStruct_FPerPlatformSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPerPlatformSettings,(UObject *)pUVar1,
                         L"PerPlatformSettings");
  }
  return Z_Registration_Info_UScriptStruct_FPerPlatformSettings.OuterSingleton;
}

// Initialize @ 14241d2d0

void __thiscall
FPerPlatformSettings::Initialize(FPerPlatformSettings *this,TSubclassOf<UPlatformSettings> param_1)

{
  return;
}

