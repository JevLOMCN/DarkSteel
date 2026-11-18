// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CsvMetrics
// Functions: 2

// DereferenceIfNecessary<UCsvMetricsSubsystem,UCsvMetricsSubsystem_*_&> @ 14f14a350

UCsvMetricsSubsystem * __cdecl
UE::Core::Private::DereferenceIfNecessary<UCsvMetricsSubsystem,UCsvMetricsSubsystem_*_&>
          (UCsvMetricsSubsystem **param_1)

{
  return *param_1;
}

// CanHaveCsvMetrics @ 14f14abe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl UE::CsvMetrics::Private::CanHaveCsvMetrics(UWorld *param_1)

{
  bool bVar1;
  
  if (param_1 != (UWorld *)0x0) {
    bVar1 = UWorld::IsGameWorld(param_1);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

