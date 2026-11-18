// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 1

// CreateNewGizmoActor @ 149650080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ACombinedTransformGizmoActor * __thiscall
FCombinedTransformGizmoActorFactory::CreateNewGizmoActor
          (FCombinedTransformGizmoActorFactory *this,UWorld *param_1)

{
  ACombinedTransformGizmoActor *pAVar1;
  
  pAVar1 = ACombinedTransformGizmoActor::ConstructCustom3AxisGizmo
                     (param_1,this->GizmoViewContext,this->EnableElements);
  return pAVar1;
}

