// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// RestorePreAnimatedValue @ 146863d00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::MovieScene::FPreAnimatedDataLayerStorageTraits::RestorePreAnimatedValue
          (TObjectKey<UDataLayerInstance> *param_1,EDataLayerRuntimeState param_2,
          FRestoreStateParams *param_3)

{
  UDataLayerInstance *pUVar1;
  longlong lVar2;
  UWorldPartition *this;
  UDataLayerManager *this_00;
  FWeakObjectPtr local_res8;
  
  local_res8.ObjectIndex = (param_1->ObjectKey).ObjectIndex;
  local_res8.ObjectSerialNumber = (param_1->ObjectKey).ObjectSerialNumber;
  pUVar1 = (UDataLayerInstance *)FWeakObjectPtr::Get(&local_res8);
  if (pUVar1 != (UDataLayerInstance *)0x0) {
    lVar2 = (**(code **)(pUVar1->_padding_ + 0x180))(pUVar1);
    if ((lVar2 != 0) && (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0)) {
      if (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0) {
        this = FWorldPartitionHelpersPrivate::GetWorldPartitionFromObject((UObject *)pUVar1);
      }
      else {
        this = (UWorldPartition *)0x0;
      }
      if (this != (UWorldPartition *)0x0) {
        this_00 = UWorldPartition::GetDataLayerManager(this);
        if (this_00 != (UDataLayerManager *)0x0) {
          UDataLayerManager::SetDataLayerInstanceRuntimeState(this_00,pUVar1,param_2,false);
        }
      }
    }
  }
  return;
}

