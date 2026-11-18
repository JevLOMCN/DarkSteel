// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetWorldPartition @ 148a972e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorldPartition * __cdecl
FHLODRuntimeSubsystem::GetWorldPartition(IWorldPartitionHLODObject *param_1)

{
  int iVar1;
  ULevel *pUVar2;
  UWorldPartition *pUVar3;
  ULevelStreaming *pUVar4;
  longlong *plVar5;
  longlong lVar6;
  UClass *pUVar7;
  UWorld *this;
  
  pUVar2 = (ULevel *)(**(code **)((longlong)*param_1 + 8))();
  pUVar3 = ULevel::GetWorldPartition(pUVar2);
  if (pUVar3 != (UWorldPartition *)0x0) {
    return pUVar3;
  }
  pUVar2 = (ULevel *)(**(code **)((longlong)*param_1 + 8))(param_1);
  pUVar4 = FLevelUtils::FindStreamingLevel(pUVar2);
  if (pUVar4 == (ULevelStreaming *)0x0) {
    return (UWorldPartition *)0x0;
  }
  plVar5 = (longlong *)(**(code **)(pUVar4->_padding_ + 0x2b0))(pUVar4);
  if ((plVar5 != (longlong *)0x0) && (lVar6 = (**(code **)(*plVar5 + 8))(plVar5), lVar6 != 0)) {
    pUVar7 = Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_148a97363;
  }
  lVar6 = 0;
LAB_148a97363:
  if (lVar6 == 0) {
    return (UWorldPartition *)0x0;
  }
  this = (UWorld *)(**(code **)(*(longlong *)(lVar6 + 0x28) + 0x78))(lVar6 + 0x28);
  pUVar3 = UWorld::GetWorldPartition(this);
  return pUVar3;
}

