// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// PostReplicatedAdd @ 148a616d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
`FFastArraySerializer::
FastArrayDeltaSerialize_DeltaSerializeStructs<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>'
::__l2::FFastArrayItemCallbackHelper::PostReplicatedAdd
          (void *param_1,FFastArrayDeltaSerializeParams *param_2)

{
  return;
}

// PostReplicatedChange @ 148a616f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
`FFastArraySerializer::
FastArrayDeltaSerialize_DeltaSerializeStructs<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>'
::__l2::FFastArrayItemCallbackHelper::PostReplicatedChange
          (void *param_1,FFastArrayDeltaSerializeParams *param_2)

{
  return;
}

// PreReplicatedRemove @ 148a619e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
`FFastArraySerializer::
FastArrayDeltaSerialize_DeltaSerializeStructs<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>'
::__l2::FFastArrayItemCallbackHelper::PreReplicatedRemove
          (void *param_1,FFastArrayDeltaSerializeParams *param_2)

{
  return;
}

// ReceivedItem @ 148a61fa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
`FFastArraySerializer::
FastArrayDeltaSerialize_DeltaSerializeStructs<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>'
::__l2::FFastArrayItemCallbackHelper::ReceivedItem
          (void *param_1,FFastArrayDeltaSerializeParams *param_2,uint param_3)

{
  int iVar1;
  
  *(uint *)param_1 = param_3;
  iVar1 = param_2->ReadArrayReplicationKey;
  *(int *)((longlong)param_1 + 4) = *(int *)((longlong)param_1 + 4) + 1;
  *(int *)((longlong)param_1 + 8) = iVar1;
  return;
}

