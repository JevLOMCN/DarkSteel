// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ISMPool
// Functions: 2

// GetTypeHash @ 1463407b0

ulong64 __thiscall FISMPoolDebugDrawSceneProxy::GetTypeHash(FISMPoolDebugDrawSceneProxy *this)

{
  return 0x1551aac08;
}

// GetViewRelevance @ 1463407d0

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
FISMPoolDebugDrawSceneProxy::GetViewRelevance
          (FISMPoolDebugDrawSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  undefined1 *puVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  uint uVar4;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar2 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 5);
  *pbVar2 = *pbVar2 | 4;
  puVar3 = &__return_storage_ptr__->field_0x8;
  __return_storage_ptr__->bDynamicRelevance = 1;
  __return_storage_ptr__->bRenderInMainPass = 1;
  __return_storage_ptr__->bDrawRelevance = 1;
  *(byte *)((longlong)&__return_storage_ptr__->_padding_ + 4) =
       *(byte *)((longlong)&__return_storage_ptr__->_padding_ + 4) | 0x84;
  return __return_storage_ptr__;
}

