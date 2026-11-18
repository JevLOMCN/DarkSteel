// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// FindEntry @ 146790530

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPreAnimatedStateEntry * __thiscall
UE::MovieScene::FPreAnimatedComponentMobilityStorage::FindEntry
          (FPreAnimatedComponentMobilityStorage *this,FPreAnimatedStateEntry *__return_storage_ptr__
          ,USceneComponent *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FPreAnimatedStateEntry *pFVar4;
  TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle> *pTVar5;
  TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar6;
  int iVar7;
  int iVar8;
  FWeakObjectPtr local_res8;
  FObjectKey local_res10;
  FWeakObjectPtr local_res18;
  FObjectKey local_res20;
  USceneComponent *local_48;
  USceneComponent *local_40 [2];
  
  if (*(longlong *)&this->field_0xc8 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPreAnimatedStateEntry *)(*pcVar2)();
      return pFVar4;
    }
  }
  lVar1 = *(longlong *)&this->field_0xc8;
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if (param_1 != (USceneComponent *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_48 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_48);
    local_res10.ObjectIndex = local_res8.ObjectIndex;
    local_res10.ObjectSerialNumber = local_res8.ObjectSerialNumber;
  }
  pTVar5 = TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle,0>,FDefaultSetAllocator>
                   *)(lVar1 + 0x18),&local_res10);
  iVar7 = -1;
  if (pTVar5 == (TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle> *)0x0) {
    iVar8 = -1;
  }
  else {
    iVar8 = *(int *)&pTVar5->field_0x8;
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  if (param_1 != (USceneComponent *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_40[0] = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)local_40);
    local_res20.ObjectIndex = local_res18.ObjectIndex;
    local_res20.ObjectSerialNumber = local_res18.ObjectSerialNumber;
  }
  pTVar6 = TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                   *)&this->field_0x18,&local_res20);
  if (pTVar6 != (TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) {
    iVar7 = *(int *)&pTVar6->field_0x8;
  }
  (__return_storage_ptr__->ValueHandle).TypeID.TypeID = (uint)StorageID;
  (__return_storage_ptr__->GroupHandle).Value = iVar8;
  (__return_storage_ptr__->ValueHandle).StorageIndex.Value = iVar7;
  return __return_storage_ptr__;
}

// MakeEntry @ 1467a6820

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPreAnimatedStateEntry * __thiscall
UE::MovieScene::FPreAnimatedComponentMobilityStorage::MakeEntry
          (FPreAnimatedComponentMobilityStorage *this,FPreAnimatedStateEntry *__return_storage_ptr__
          ,USceneComponent *param_1)

{
  TPreAnimatedStateGroupManager<FObjectKey> *this_00;
  code *pcVar1;
  bool bVar2;
  FPreAnimatedStateEntry *pFVar3;
  FObjectKey local_res8;
  FObjectKey local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_58;
  FWeakObjectPtr local_50;
  USceneComponent *local_48;
  USceneComponent *local_40 [2];
  
  if (*(longlong *)&this->field_0xc8 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPreAnimatedStateEntry *)(*pcVar1)();
      return pFVar3;
    }
  }
  this_00 = *(TPreAnimatedStateGroupManager<FObjectKey> **)&this->field_0xc8;
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  if (param_1 == (USceneComponent *)0x0) {
    TPreAnimatedStateGroupManager<FObjectKey>::MakeGroupForKey(this_00,&local_res8);
    local_50.ObjectIndex = 0;
    local_50.ObjectSerialNumber = 0;
  }
  else {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_48 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_48);
    local_res18 = local_res20;
    TPreAnimatedStateGroupManager<FObjectKey>::MakeGroupForKey(this_00,&local_res8);
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_40[0] = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)local_40);
    local_50 = local_58;
  }
  TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedMobilityTraits>::GetOrCreateStorageIndex
            ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedMobilityTraits> *)this,
             &local_res10);
  (__return_storage_ptr__->GroupHandle).Value = local_res8.ObjectIndex;
  (__return_storage_ptr__->ValueHandle).TypeID.TypeID = (uint)StorageID;
  (__return_storage_ptr__->ValueHandle).StorageIndex.Value = local_res10.ObjectIndex;
  return __return_storage_ptr__;
}

