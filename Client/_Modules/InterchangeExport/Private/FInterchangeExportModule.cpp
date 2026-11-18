// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeExport
// Functions: 2

// StartupModule @ 14e72c1d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FInterchangeExportModule::StartupModule(FInterchangeExportModule *this)

{
  UInterchangeManager *this_00;
  UClass *pUVar1;
  <lambda_1> local_res10 [24];
  
  if (GEngine != (UEngine *)0x0) {
    this_00 = UInterchangeManager::GetInterchangeManager();
    pUVar1 = UInterchangeTextureWriter::StaticClass();
    UInterchangeManager::RegisterWriter(this_00,pUVar1);
    return;
  }
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddLambda<_FInterchangeExportModule::StartupModule_::__l2::<lambda_1>_&>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPostEngineInit,local_res10);
  return;
}

// ShutdownModule @ 14e72c230

void __thiscall FInterchangeExportModule::ShutdownModule(FInterchangeExportModule *this)

{
  return;
}

