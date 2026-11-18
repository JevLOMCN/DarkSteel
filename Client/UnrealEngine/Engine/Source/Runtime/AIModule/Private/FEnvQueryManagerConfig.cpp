// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 2

// StaticStruct @ 146f0f330

UScriptStruct * __cdecl FEnvQueryManagerConfig::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEnvQueryManagerConfig.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FEnvQueryManagerConfig.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEnvQueryManagerConfig,(UObject *)pUVar1,
                         L"EnvQueryManagerConfig");
  }
  return Z_Registration_Info_UScriptStruct_FEnvQueryManagerConfig.OuterSingleton;
}

// ToString @ 146f7a5c0

FString * __thiscall
FEnvQueryManagerConfig::ToString(FEnvQueryManagerConfig *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"MaxAllowedTestingTime=%f bTestQueriesUsingBreadth=%d QueryCountWarningThreshold=%d QueryCountWarningInterval=%f ExecutionTimeWarningSeconds=%f HandlingResultTimeWarningSeconds=%f GenerationTimeWarningSeconds=%f"
            );
  return __return_storage_ptr__;
}

