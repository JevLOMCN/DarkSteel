// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetWorldPartitionFromObject @ 148ad1ee0

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
FWorldPartitionHelpersPrivate::GetWorldPartitionFromObject(UObject *param_1)

{
  int iVar1;
  uint uVar2;
  UClass *pUVar3;
  IWorldPartitionCell *pIVar4;
  UWorld *pUVar5;
  UWorldPartition *pUVar6;
  
  while( true ) {
    if ((ULevel *)param_1 == (ULevel *)0x0) {
      return (UWorldPartition *)0x0;
    }
    if (((uint)((ULevel *)param_1)->_padding_ >> 0x1e & 1) != 0) {
      return (UWorldPartition *)0x0;
    }
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(((ULevel *)param_1)->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(((ULevel *)param_1)->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      if (((uint)((ULevel *)param_1)->_padding_ >> 0x1e & 1) != 0) {
        return (UWorldPartition *)0x0;
      }
      param_1 = (UObject *)AActor::GetLevel((AActor *)param_1);
      if ((ULevel *)param_1 == (ULevel *)0x0) {
        return (UWorldPartition *)0x0;
      }
      uVar2 = (uint)((ULevel *)param_1)->_padding_;
      goto LAB_148ad1fcd;
    }
    pUVar3 = Z_Construct_UClass_ULevel_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(((ULevel *)param_1)->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(((ULevel *)param_1)->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) break;
    pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(((ULevel *)param_1)->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(((ULevel *)param_1)->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      if (((uint)((ULevel *)param_1)->_padding_ >> 0x1e & 1) != 0) {
        return (UWorldPartition *)0x0;
      }
      param_1 = (UObject *)((ULevel *)param_1)->_padding_;
      if ((ULevel *)param_1 == (ULevel *)0x0) {
        return (UWorldPartition *)0x0;
      }
      break;
    }
    pUVar3 = Z_Construct_UClass_UWorldPartition_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(((ULevel *)param_1)->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(((ULevel *)param_1)->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return (UWorldPartition *)(ULevel *)param_1;
    }
    param_1 = (UObject *)((ULevel *)param_1)->_padding_;
  }
  uVar2 = (uint)((ULevel *)param_1)->_padding_;
LAB_148ad1fcd:
  if ((uVar2 >> 0x1e & 1) == 0) {
    pIVar4 = ULevel::GetWorldPartitionRuntimeCell((ULevel *)param_1);
    if (pIVar4 != (IWorldPartitionCell *)0x0) {
      pUVar5 = (UWorld *)(**(code **)((longlong)*pIVar4 + 0x78))(pIVar4);
      pUVar6 = UWorld::GetWorldPartition(pUVar5);
      return pUVar6;
    }
    pUVar5 = (UWorld *)((ULevel *)param_1)->_padding_;
    if (pUVar5 != (UWorld *)0x0) {
      pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        pUVar6 = UWorld::GetWorldPartition(pUVar5);
        return pUVar6;
      }
    }
  }
  return (UWorldPartition *)0x0;
}

