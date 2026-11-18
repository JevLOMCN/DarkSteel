// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// StaticStruct @ 149078080

UScriptStruct * __cdecl FNDCSpawnedSystemRef::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNDCSpawnedSystemRef.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNDCSpawnedSystemRef.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNDCSpawnedSystemRef,(UObject *)pUVar1,
                         L"NDCSpawnedSystemRef");
  }
  return Z_Registration_Info_UScriptStruct_FNDCSpawnedSystemRef.OuterSingleton;
}

// FNDCSpawnedSystemRef @ 1490b0d00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FNDCSpawnedSystemRef * __thiscall
FNDCSpawnedSystemRef::FNDCSpawnedSystemRef(FNDCSpawnedSystemRef *this,UNiagaraComponent *param_1)

{
  UNiagaraComponent *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UNiagaraComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->SpawnedSystem).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UNiagaraComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  return this;
}

