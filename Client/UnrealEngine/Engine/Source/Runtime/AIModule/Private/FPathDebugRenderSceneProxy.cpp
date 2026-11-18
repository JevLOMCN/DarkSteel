// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 2

// GetTypeHash @ 146f5a8d0

ulong64 __thiscall
`FGameplayDebuggerCategory_AI::CreateDebugSceneProxy'::__l2::FPathDebugRenderSceneProxy::GetTypeHash
          (void *this)

{
  return 0x1551c3d50;
}

// GetViewRelevance @ 146f5ac60

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
`FGameplayDebuggerCategory_AI::CreateDebugSceneProxy'::__l2::FPathDebugRenderSceneProxy::
GetViewRelevance(void *this,FPrimitiveViewRelevance *__return_storage_ptr__,FSceneView *param_1)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  
  bVar3 = FEngineShowFlags::GetSingleFlag
                    (&param_1->Family->EngineShowFlags,*(uint *)((longlong)this + 0x350));
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xfb;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 5);
  *pbVar1 = *pbVar1 | bVar3 << 2;
  uVar2 = *(uint *)&__return_storage_ptr__->field_0x8;
  bVar4 = (*(byte *)((longlong)&__return_storage_ptr__->_padding_ + 5) & 0xfc) << 5 |
          *(byte *)((longlong)&__return_storage_ptr__->_padding_ + 4) & 0x7b | 4;
  *(byte *)((longlong)&__return_storage_ptr__->_padding_ + 4) = bVar4;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       (bVar4 & 0xffffffdf | 0x1040) >> 5 | uVar2 & 0xfffffffb;
  return __return_storage_ptr__;
}

