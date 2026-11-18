// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// ~FMassProcessingPhase @ 1470f8730

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FMassProcessingPhase::~FMassProcessingPhase(FMassProcessingPhase *this)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  ~TMulticastDelegateBase<FDefaultDelegateUserPolicy>
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnPhaseEnd);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  ~TMulticastDelegateBase<FDefaultDelegateUserPolicy>
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnPhaseStart);
  FTickFunction::~FTickFunction((FTickFunction *)this);
  return;
}

