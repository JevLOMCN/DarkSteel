// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 1

// OnActorMoving @ 1464ba840

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FComponentEvaluationGraphBinding::OnActorMoving
          (FComponentEvaluationGraphBinding *this,AActor *param_1)

{
  UWorld *pUVar1;
  
  if (this->bPendingFlush != false) {
    if (param_1 != (AActor *)0x0) {
      pUVar1 = AActor::GetWorld(param_1);
      if (pUVar1 != (UWorld *)0x0) {
        ::Singleton.World = pUVar1;
        FConstraintsManagerController::FlushEvaluationGraph(&::Singleton);
      }
    }
    this->bPendingFlush = false;
  }
  return;
}

