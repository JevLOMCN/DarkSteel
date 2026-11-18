// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// FindEntry @ 1461a82b0

FPreAnimatedStateEntry * __thiscall
UE::MovieScene::FAnimTypePreAnimatedStateObjectStorage::FindEntry
          (FAnimTypePreAnimatedStateObjectStorage *this,
          FPreAnimatedStateEntry *__return_storage_ptr__,UObject *param_1,
          FMovieSceneAnimTypeID param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FPreAnimatedStateEntry *pFVar4;
  TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle> *pTVar5;
  TTuple<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar6;
  int iVar7;
  int iVar8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FObjectKey local_res18;
  UObject *local_res20;
  UObject *local_48;
  FWeakObjectPtr local_40;
  ulong64 local_38;
  
  local_40.ObjectIndex = 0;
  local_40.ObjectSerialNumber = 0;
  if (param_1 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending) {
      GC::MarkAsReachable(param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res20 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
    local_40 = local_res8;
  }
  local_38 = param_2.ID;
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
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  if (param_1 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_48 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_48);
    local_res18.ObjectIndex = local_res10.ObjectIndex;
    local_res18.ObjectSerialNumber = local_res10.ObjectSerialNumber;
  }
  pTVar5 = TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle,0>,FDefaultSetAllocator>
                   *)(lVar1 + 0x18),&local_res18);
  iVar7 = -1;
  if (pTVar5 == (TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle> *)0x0) {
    iVar8 = -1;
  }
  else {
    iVar8 = *(int *)&pTVar5->field_0x8;
  }
  pTVar6 = TSet<TTuple<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                   *)&this->field_0x18,(TTuple<FObjectKey,FMovieSceneAnimTypeID> *)&local_40);
  if (pTVar6 != (TTuple<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex>
                 *)0x0) {
    iVar7 = *(int *)&pTVar6->field_0x10;
  }
  (__return_storage_ptr__->ValueHandle).TypeID.TypeID = (uint)StorageID;
  (__return_storage_ptr__->GroupHandle).Value = iVar8;
  (__return_storage_ptr__->ValueHandle).StorageIndex.Value = iVar7;
  return __return_storage_ptr__;
}

// MakeEntry @ 1461bdc20

/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedStateEntry * __thiscall
UE::MovieScene::FAnimTypePreAnimatedStateObjectStorage::MakeEntry
          (FAnimTypePreAnimatedStateObjectStorage *this,
          FPreAnimatedStateEntry *__return_storage_ptr__,UObject *param_1,
          FMovieSceneAnimTypeID param_2)

{
  TPreAnimatedStateGroupManager<FObjectKey> *this_00;
  code *pcVar1;
  bool bVar2;
  FPreAnimatedStateEntry *pFVar3;
  FObjectKey local_res8;
  undefined1 local_res10 [8];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UObject *local_60;
  UObject *local_58;
  FWeakObjectPtr local_50;
  ulong64 local_48;
  
  local_50.ObjectIndex = 0;
  local_50.ObjectSerialNumber = 0;
  if (param_1 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending) {
      GC::MarkAsReachable(param_1);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_60 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_60);
    local_50 = local_res18;
  }
  local_48 = param_2.ID;
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
  if (param_1 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_1);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_58 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_58);
  }
  TPreAnimatedStateGroupManager<FObjectKey>::MakeGroupForKey(this_00,&local_res8);
  TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits>::GetOrCreateStorageIndex
            ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits> *)this,
             (TTuple<FObjectKey,FMovieSceneAnimTypeID> *)local_res10);
  (__return_storage_ptr__->GroupHandle).Value = local_res8.ObjectIndex;
  (__return_storage_ptr__->ValueHandle).TypeID.TypeID = (uint)StorageID;
  (__return_storage_ptr__->ValueHandle).StorageIndex.Value = local_res10._0_4_;
  return __return_storage_ptr__;
}

