// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetViewRelevance @ 1476b64d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
`UCameraProxyMeshComponent::CreateSceneProxy'::__l2::FCameraProxyMeshProxy::GetViewRelevance
          (void *this,FPrimitiveViewRelevance *__return_storage_ptr__,FSceneView *param_1)

{
  if ((param_1->Family->EngineShowFlags).Cameras != 0) {
    FStaticMeshSceneProxy::GetViewRelevance(this,__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->_padding_ = 0x400000000;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0x80;
  return __return_storage_ptr__;
}

