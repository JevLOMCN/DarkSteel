// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// AddExtraStructReferencedObjects @ 149b669a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGBlueprintExecutionContext::AddExtraStructReferencedObjects
          (FPCGBlueprintExecutionContext *this,FReferenceCollector *param_1)

{
  if ((this->BlueprintElementInstance).field0_0x0.DebugPtr != (UPCGBlueprintBaseElement *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149b669bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->BlueprintElementInstance,0,0);
    return;
  }
  return;
}

// GetExternalContainerForOverridableParam @ 149b8f050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __thiscall
FPCGBlueprintExecutionContext::GetExternalContainerForOverridableParam
          (FPCGBlueprintExecutionContext *this,FPCGSettingsOverridableParam *param_1)

{
  return (UObject *)(this->BlueprintElementInstance).field0_0x0.DebugPtr;
}

