// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// FindEntry @ 1461a8420

FPreAnimatedStateEntry * __thiscall
UE::MovieScene::FAnimTypePreAnimatedStateRootStorage::FindEntry
          (FAnimTypePreAnimatedStateRootStorage *this,FPreAnimatedStateEntry *__return_storage_ptr__
          ,FMovieSceneAnimTypeID param_1)

{
  longlong lVar1;
  TAutoRegisterPreAnimatedStorageID<UE::MovieScene::FAnimTypePreAnimatedStateRootStorage> TVar2;
  int iVar3;
  undefined1 *puVar4;
  
  if (*(int *)&this->field_0x20 != *(int *)&this->field_0x4c) {
    puVar4 = *(undefined1 **)&this->field_0x58;
    if (*(undefined1 **)&this->field_0x58 == (undefined1 *)0x0) {
      puVar4 = &this->field_0x50;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&this->field_0x60 - 1U &
                              (int)(param_1.ID >> 0x20) * 0x17 + (int)param_1.ID) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)&this->field_0x18 + (longlong)iVar3 * 0x18;
        if (*(ulong64 *)(*(longlong *)&this->field_0x18 + (longlong)iVar3 * 0x18) == param_1.ID) {
          if (lVar1 != 0) {
            iVar3 = *(int *)(lVar1 + 8);
            goto LAB_1461a848d;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_1461a848d:
  (__return_storage_ptr__->GroupHandle).Value = -1;
  TVar2 = StorageID;
  (__return_storage_ptr__->ValueHandle).StorageIndex.Value = iVar3;
  (__return_storage_ptr__->ValueHandle).TypeID.TypeID = (uint)TVar2;
  return __return_storage_ptr__;
}

// GetStorageType @ 1461b4380

FPreAnimatedStorageID __thiscall
UE::MovieScene::FAnimTypePreAnimatedStateRootStorage::GetStorageType
          (FAnimTypePreAnimatedStateRootStorage *this)

{
  TAutoRegisterPreAnimatedStorageID<UE::MovieScene::FAnimTypePreAnimatedStateRootStorage> *in_RDX;
  
  *in_RDX = StorageID;
  return (FPreAnimatedStorageID)(uint)in_RDX;
}

// Initialize @ 1461b5940

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FAnimTypePreAnimatedStateRootStorage::Initialize
          (FAnimTypePreAnimatedStateRootStorage *this,FPreAnimatedStorageID param_1,
          FPreAnimatedStateExtension *param_2)

{
  *(FPreAnimatedStateExtension **)&this->field_0xb0 = param_2;
  *(uint *)&this->field_0xc0 = param_1.TypeID;
  return;
}

// MakeEntry @ 1461bdd70

/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedStateEntry * __thiscall
UE::MovieScene::FAnimTypePreAnimatedStateRootStorage::MakeEntry
          (FAnimTypePreAnimatedStateRootStorage *this,FPreAnimatedStateEntry *__return_storage_ptr__
          ,FMovieSceneAnimTypeID param_1)

{
  FMovieSceneAnimTypeID local_res10;
  ulong64 local_res18;
  
  local_res18 = param_1.ID;
  TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits>::GetOrCreateStorageIndex
            ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits> *)this,
             &local_res10);
  (__return_storage_ptr__->GroupHandle).Value = -1;
  (__return_storage_ptr__->ValueHandle).TypeID.TypeID = (uint)StorageID;
  (__return_storage_ptr__->ValueHandle).StorageIndex.Value = (int)local_res10.ID;
  return __return_storage_ptr__;
}

