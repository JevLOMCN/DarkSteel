// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 23

// GetOrCreateStorage<UE::MovieScene::FPreAnimatedComponentTransformStorage> @ 1465d5190

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FPreAnimatedComponentTransformStorage,1> * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::
GetOrCreateStorage<UE::MovieScene::FPreAnimatedComponentTransformStorage>
          (FPreAnimatedStateExtension *this,
          TSharedPtr<UE::MovieScene::FPreAnimatedComponentTransformStorage,1>
          *__return_storage_ptr__,
          TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedComponentTransformStorage> param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<UE::MovieScene::FPreAnimatedComponentTransformStorage,1> *pTVar8;
  FPreAnimatedComponentTransformStorage *pFVar9;
  FPreAnimatedStorageID local_res8 [2];
  FPreAnimatedStorageID local_res18 [4];
  TSharedPtr<UE::MovieScene::FPreAnimatedComponentTransformStorage,1> local_48;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> local_38;
  
  local_res8[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res8);
  if (pTVar6 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (FPreAnimatedComponentTransformStorage *)0x0;
LAB_1465d51e3:
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
  }
  else {
    pTVar7 = (pTVar6->SharedReferenceCount).ReferenceController;
    pFVar9 = (FPreAnimatedComponentTransformStorage *)pTVar6->Object;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = pFVar9;
      goto LAB_1465d51e3;
    }
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    __return_storage_ptr__->Object = pFVar9;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (__return_storage_ptr__->Object != (FPreAnimatedComponentTransformStorage *)0x0) {
    return __return_storage_ptr__;
  }
  pTVar7 = ::operator_new(0x120);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = (FPreAnimatedComponentTransformStorage *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFPreAnimatedComponentTransformStorage_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    FPreAnimatedComponentTransformStorage::FPreAnimatedComponentTransformStorage
              ((FPreAnimatedComponentTransformStorage *)(pTVar7 + 1));
    pFVar9 = (FPreAnimatedComponentTransformStorage *)(pTVar7 + 1);
    if (pFVar9 == (FPreAnimatedComponentTransformStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedComponentTransformStorage,1> *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_1465d52df;
    }
  }
  if (((*(longlong *)&pFVar9->field_0x8 == 0) || (*(longlong *)&pFVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->field_0x10 + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FPreAnimatedComponentTransformStorage **)&pFVar9->field_0x8 = pFVar9;
    if (pTVar7 != *(TReferenceControllerBase<1> **)&pFVar9->field_0x10) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar9->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar9->field_0x10 = pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_1465d52df:
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pFVar9;
  local_48.SharedReferenceCount.ReferenceController = pTVar7;
  if (__return_storage_ptr__ != &local_48) {
    __return_storage_ptr__->Object = pFVar9;
    local_48.Object = (FPreAnimatedComponentTransformStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&local_48.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if ((__return_storage_ptr__->Object == (FPreAnimatedComponentTransformStorage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedComponentTransformStorage,1> *)(*pcVar4)();
    return pTVar8;
  }
  (**(code **)(*(longlong *)__return_storage_ptr__->Object + 0x10))
            (__return_storage_ptr__->Object,param_1,this);
  pTVar7 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar9 = __return_storage_ptr__->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res18[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res18);
  if ((pTVar6 != (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!StorageImplementations.Contains(InStorageID)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateExtension.h"
                         ,0x71,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedComponentTransformStorage,1> *)(*pcVar4)();
    return pTVar8;
  }
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = (IPreAnimatedStorage *)pFVar9;
  local_38.SharedReferenceCount.ReferenceController = pTVar7;
  TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
  ::
  Emplace<UE::MovieScene::FPreAnimatedStorageID_const_&,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>
            (&this->StorageImplementations,local_res18,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return __return_storage_ptr__;
}

// GetOrCreateStorage<UE::MovieScene::FPreAnimatedAudioStorage> @ 1467474f0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FPreAnimatedAudioStorage,1> * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::
GetOrCreateStorage<UE::MovieScene::FPreAnimatedAudioStorage>
          (FPreAnimatedStateExtension *this,
          TSharedPtr<UE::MovieScene::FPreAnimatedAudioStorage,1> *__return_storage_ptr__,
          TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedAudioStorage> param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<UE::MovieScene::FPreAnimatedAudioStorage,1> *pTVar8;
  FPreAnimatedAudioStorage *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  FPreAnimatedStorageID local_res8 [2];
  FPreAnimatedStorageID local_res18 [2];
  TSharedPtr<UE::MovieScene::FPreAnimatedAudioStorage,1> local_48;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> local_38;
  
  local_res8[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res8);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) {
    __return_storage_ptr__->Object = (FPreAnimatedAudioStorage *)0x0;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7 = (pTVar6->SharedReferenceCount).ReferenceController;
    pFVar9 = (FPreAnimatedAudioStorage *)pTVar6->Object;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (__return_storage_ptr__->Object != (FPreAnimatedAudioStorage *)0x0) {
    return __return_storage_ptr__;
  }
  pTVar7 = ::operator_new(0xf0);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = (FPreAnimatedAudioStorage *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pFVar9 = (FPreAnimatedAudioStorage *)(pTVar7 + 1);
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFPreAnimatedAudioStorage_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar7[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[4]._padding_ = 0;
    pTVar7[6]._padding_ = 0;
    pTVar7[7]._padding_ = 0;
    pTVar7[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[9]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[0xd]._padding_ + 4) = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[3]._padding_ = 0;
    pTVar7[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[4].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[5]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[5]._padding_ + 4) = 0x80;
    pTVar7[5].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[8]._padding_ = 0;
    pTVar7[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[9].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[10]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[10]._padding_ + 4) = 0x80;
    pTVar7[10].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[1]._padding_ =
         (longlong)
         &FPreAnimatedAudioStorage::
          _vftable__for__UE__MovieScene__TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedAudioStateTraits<UE::MovieScene::FBoundObjectPreAnimatedStateTraits>_>__
    ;
    *(undefined ***)&pTVar7[0xe].SharedReferenceCount =
         &FPreAnimatedAudioStorage::_vftable__for__UE__MovieScene__IPreAnimatedObjectEntityStorage__
    ;
    pTVar7[0xb]._padding_ = 0;
    pTVar7[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc]._padding_ = 0;
    pTVar7[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0xd]._padding_ = 0xffffffff;
    pTVar7[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xe]._padding_ = 0;
    pTVar10 = pTVar7;
    if (pFVar9 == (FPreAnimatedAudioStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedAudioStorage,1> *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_14674770e;
    }
  }
  if (((*(longlong *)&pFVar9->field_0x8 == 0) || (*(longlong *)&pFVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->field_0x10 + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FPreAnimatedAudioStorage **)&pFVar9->field_0x8 = pFVar9;
    if (pTVar10 != *(TReferenceControllerBase<1> **)&pFVar9->field_0x10) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar9->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar9->field_0x10 = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_14674770e:
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pFVar9;
  local_48.SharedReferenceCount.ReferenceController = pTVar10;
  if (__return_storage_ptr__ != &local_48) {
    __return_storage_ptr__->Object = pFVar9;
    local_48.Object = (FPreAnimatedAudioStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&local_48.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if ((__return_storage_ptr__->Object == (FPreAnimatedAudioStorage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedAudioStorage,1> *)(*pcVar4)();
    return pTVar8;
  }
  (**(code **)(*(longlong *)__return_storage_ptr__->Object + 0x10))
            (__return_storage_ptr__->Object,param_1,this);
  pTVar10 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar9 = __return_storage_ptr__->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res18[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res18);
  if ((pTVar6 != (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!StorageImplementations.Contains(InStorageID)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateExtension.h"
                         ,0x71,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedAudioStorage,1> *)(*pcVar4)();
    return pTVar8;
  }
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = (IPreAnimatedStorage *)pFVar9;
  local_38.SharedReferenceCount.ReferenceController = pTVar10;
  TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
  ::
  Emplace<UE::MovieScene::FPreAnimatedStorageID_const_&,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>
            (&this->StorageImplementations,local_res18,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

// GetOrCreateStorage<UE::MovieScene::FPreAnimatedCameraComponentShakeStateStorage> @ 146747850

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FPreAnimatedCameraComponentShakeStateStorage,1> * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::
GetOrCreateStorage<UE::MovieScene::FPreAnimatedCameraComponentShakeStateStorage>
          (FPreAnimatedStateExtension *this,
          TSharedPtr<UE::MovieScene::FPreAnimatedCameraComponentShakeStateStorage,1>
          *__return_storage_ptr__,
          TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedCameraComponentShakeStateStorage>
          param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<UE::MovieScene::FPreAnimatedCameraComponentShakeStateStorage,1> *pTVar8;
  FPreAnimatedCameraComponentShakeStateStorage *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  FPreAnimatedStorageID local_res8 [2];
  FPreAnimatedStorageID local_res18 [2];
  TSharedPtr<UE::MovieScene::FPreAnimatedCameraComponentShakeStateStorage,1> local_48;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> local_38;
  
  local_res8[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res8);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) {
    __return_storage_ptr__->Object = (FPreAnimatedCameraComponentShakeStateStorage *)0x0;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7 = (pTVar6->SharedReferenceCount).ReferenceController;
    pFVar9 = (FPreAnimatedCameraComponentShakeStateStorage *)pTVar6->Object;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (__return_storage_ptr__->Object != (FPreAnimatedCameraComponentShakeStateStorage *)0x0) {
    return __return_storage_ptr__;
  }
  pTVar7 = ::operator_new(0xf0);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = (FPreAnimatedCameraComponentShakeStateStorage *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pFVar9 = (FPreAnimatedCameraComponentShakeStateStorage *)(pTVar7 + 1);
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFPreAnimatedCameraComponentShakeStateStorage_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar7[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[4]._padding_ = 0;
    pTVar7[6]._padding_ = 0;
    pTVar7[7]._padding_ = 0;
    pTVar7[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[9]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[0xd]._padding_ + 4) = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[3]._padding_ = 0;
    pTVar7[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[4].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[5]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[5]._padding_ + 4) = 0x80;
    pTVar7[5].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[8]._padding_ = 0;
    pTVar7[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[9].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[10]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[10]._padding_ + 4) = 0x80;
    pTVar7[10].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[1]._padding_ =
         (longlong)
         &FPreAnimatedCameraComponentShakeStateStorage::
          _vftable__for__UE__MovieScene__TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraComponentShakeTraits>__
    ;
    *(undefined ***)&pTVar7[0xe].SharedReferenceCount =
         &FPreAnimatedCameraComponentShakeStateStorage::
          _vftable__for__UE__MovieScene__IPreAnimatedObjectEntityStorage__;
    pTVar7[0xb]._padding_ = 0;
    pTVar7[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc]._padding_ = 0;
    pTVar7[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0xd]._padding_ = 0xffffffff;
    pTVar7[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xe]._padding_ = 0;
    pTVar10 = pTVar7;
    if (pFVar9 == (FPreAnimatedCameraComponentShakeStateStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedCameraComponentShakeStateStorage,1> *)
                 (*pcVar4)();
        return pTVar8;
      }
      goto LAB_146747a6e;
    }
  }
  if (((*(longlong *)&pFVar9->field_0x8 == 0) || (*(longlong *)&pFVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->field_0x10 + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FPreAnimatedCameraComponentShakeStateStorage **)&pFVar9->field_0x8 = pFVar9;
    if (pTVar10 != *(TReferenceControllerBase<1> **)&pFVar9->field_0x10) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar9->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar9->field_0x10 = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_146747a6e:
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pFVar9;
  local_48.SharedReferenceCount.ReferenceController = pTVar10;
  if (__return_storage_ptr__ != &local_48) {
    __return_storage_ptr__->Object = pFVar9;
    local_48.Object = (FPreAnimatedCameraComponentShakeStateStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&local_48.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if ((__return_storage_ptr__->Object == (FPreAnimatedCameraComponentShakeStateStorage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedCameraComponentShakeStateStorage,1> *)
             (*pcVar4)();
    return pTVar8;
  }
  (**(code **)(*(longlong *)__return_storage_ptr__->Object + 0x10))
            (__return_storage_ptr__->Object,param_1,this);
  pTVar10 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar9 = __return_storage_ptr__->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res18[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res18);
  if ((pTVar6 != (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!StorageImplementations.Contains(InStorageID)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateExtension.h"
                         ,0x71,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedCameraComponentShakeStateStorage,1> *)
             (*pcVar4)();
    return pTVar8;
  }
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = (IPreAnimatedStorage *)pFVar9;
  local_38.SharedReferenceCount.ReferenceController = pTVar10;
  TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
  ::
  Emplace<UE::MovieScene::FPreAnimatedStorageID_const_&,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>
            (&this->StorageImplementations,local_res18,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

// GetOrCreateStorage<UE::MovieScene::FPreAnimatedCameraShakeStateStorage> @ 146747bb0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FPreAnimatedCameraShakeStateStorage,1> * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::
GetOrCreateStorage<UE::MovieScene::FPreAnimatedCameraShakeStateStorage>
          (FPreAnimatedStateExtension *this,
          TSharedPtr<UE::MovieScene::FPreAnimatedCameraShakeStateStorage,1> *__return_storage_ptr__,
          TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedCameraShakeStateStorage> param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<UE::MovieScene::FPreAnimatedCameraShakeStateStorage,1> *pTVar8;
  FPreAnimatedCameraShakeStateStorage *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  FPreAnimatedStorageID local_res8 [2];
  FPreAnimatedStorageID local_res18 [2];
  TSharedPtr<UE::MovieScene::FPreAnimatedCameraShakeStateStorage,1> local_48;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> local_38;
  
  local_res8[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res8);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) {
    __return_storage_ptr__->Object = (FPreAnimatedCameraShakeStateStorage *)0x0;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7 = (pTVar6->SharedReferenceCount).ReferenceController;
    pFVar9 = (FPreAnimatedCameraShakeStateStorage *)pTVar6->Object;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (__return_storage_ptr__->Object != (FPreAnimatedCameraShakeStateStorage *)0x0) {
    return __return_storage_ptr__;
  }
  pTVar7 = ::operator_new(0xf0);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = (FPreAnimatedCameraShakeStateStorage *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pFVar9 = (FPreAnimatedCameraShakeStateStorage *)(pTVar7 + 1);
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFPreAnimatedCameraShakeStateStorage_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar7[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[4]._padding_ = 0;
    pTVar7[6]._padding_ = 0;
    pTVar7[7]._padding_ = 0;
    pTVar7[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[9]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[0xd]._padding_ + 4) = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[3]._padding_ = 0;
    pTVar7[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[4].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[5]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[5]._padding_ + 4) = 0x80;
    pTVar7[5].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[8]._padding_ = 0;
    pTVar7[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[9].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[10]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[10]._padding_ + 4) = 0x80;
    pTVar7[10].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[1]._padding_ =
         (longlong)
         &FPreAnimatedCameraShakeStateStorage::
          _vftable__for__UE__MovieScene__TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraShakeTraits>__
    ;
    *(undefined ***)&pTVar7[0xe].SharedReferenceCount =
         &FPreAnimatedCameraShakeStateStorage::
          _vftable__for__UE__MovieScene__IPreAnimatedObjectEntityStorage__;
    pTVar7[0xb]._padding_ = 0;
    pTVar7[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc]._padding_ = 0;
    pTVar7[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0xd]._padding_ = 0xffffffff;
    pTVar7[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xe]._padding_ = 0;
    pTVar10 = pTVar7;
    if (pFVar9 == (FPreAnimatedCameraShakeStateStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedCameraShakeStateStorage,1> *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_146747dce;
    }
  }
  if (((*(longlong *)&pFVar9->field_0x8 == 0) || (*(longlong *)&pFVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->field_0x10 + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FPreAnimatedCameraShakeStateStorage **)&pFVar9->field_0x8 = pFVar9;
    if (pTVar10 != *(TReferenceControllerBase<1> **)&pFVar9->field_0x10) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar9->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar9->field_0x10 = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_146747dce:
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pFVar9;
  local_48.SharedReferenceCount.ReferenceController = pTVar10;
  if (__return_storage_ptr__ != &local_48) {
    __return_storage_ptr__->Object = pFVar9;
    local_48.Object = (FPreAnimatedCameraShakeStateStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&local_48.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if ((__return_storage_ptr__->Object == (FPreAnimatedCameraShakeStateStorage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedCameraShakeStateStorage,1> *)(*pcVar4)();
    return pTVar8;
  }
  (**(code **)(*(longlong *)__return_storage_ptr__->Object + 0x10))
            (__return_storage_ptr__->Object,param_1,this);
  pTVar10 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar9 = __return_storage_ptr__->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res18[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res18);
  if ((pTVar6 != (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!StorageImplementations.Contains(InStorageID)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateExtension.h"
                         ,0x71,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedCameraShakeStateStorage,1> *)(*pcVar4)();
    return pTVar8;
  }
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = (IPreAnimatedStorage *)pFVar9;
  local_38.SharedReferenceCount.ReferenceController = pTVar10;
  TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
  ::
  Emplace<UE::MovieScene::FPreAnimatedStorageID_const_&,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>
            (&this->StorageImplementations,local_res18,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

// GetOrCreateStorage<UE::MovieScene::FPreAnimatedCameraSourceShakeStateStorage> @ 146747f10

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FPreAnimatedCameraSourceShakeStateStorage,1> * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::
GetOrCreateStorage<UE::MovieScene::FPreAnimatedCameraSourceShakeStateStorage>
          (FPreAnimatedStateExtension *this,
          TSharedPtr<UE::MovieScene::FPreAnimatedCameraSourceShakeStateStorage,1>
          *__return_storage_ptr__,
          TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedCameraSourceShakeStateStorage> param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<UE::MovieScene::FPreAnimatedCameraSourceShakeStateStorage,1> *pTVar8;
  FPreAnimatedCameraSourceShakeStateStorage *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  FPreAnimatedStorageID local_res8 [2];
  FPreAnimatedStorageID local_res18 [2];
  TSharedPtr<UE::MovieScene::FPreAnimatedCameraSourceShakeStateStorage,1> local_48;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> local_38;
  
  local_res8[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res8);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) {
    __return_storage_ptr__->Object = (FPreAnimatedCameraSourceShakeStateStorage *)0x0;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7 = (pTVar6->SharedReferenceCount).ReferenceController;
    pFVar9 = (FPreAnimatedCameraSourceShakeStateStorage *)pTVar6->Object;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (__return_storage_ptr__->Object != (FPreAnimatedCameraSourceShakeStateStorage *)0x0) {
    return __return_storage_ptr__;
  }
  pTVar7 = ::operator_new(0xf0);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = (FPreAnimatedCameraSourceShakeStateStorage *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pFVar9 = (FPreAnimatedCameraSourceShakeStateStorage *)(pTVar7 + 1);
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFPreAnimatedCameraSourceShakeStateStorage_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar7[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[4]._padding_ = 0;
    pTVar7[6]._padding_ = 0;
    pTVar7[7]._padding_ = 0;
    pTVar7[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[9]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[0xd]._padding_ + 4) = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[3]._padding_ = 0;
    pTVar7[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[4].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[5]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[5]._padding_ + 4) = 0x80;
    pTVar7[5].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[8]._padding_ = 0;
    pTVar7[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[9].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[10]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[10]._padding_ + 4) = 0x80;
    pTVar7[10].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[1]._padding_ =
         (longlong)
         &FPreAnimatedCameraSourceShakeStateStorage::
          _vftable__for__UE__MovieScene__TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraSourceShakeTraits>__
    ;
    *(undefined ***)&pTVar7[0xe].SharedReferenceCount =
         &FPreAnimatedCameraSourceShakeStateStorage::
          _vftable__for__UE__MovieScene__IPreAnimatedObjectEntityStorage__;
    pTVar7[0xb]._padding_ = 0;
    pTVar7[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc]._padding_ = 0;
    pTVar7[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0xd]._padding_ = 0xffffffff;
    pTVar7[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xe]._padding_ = 0;
    pTVar10 = pTVar7;
    if (pFVar9 == (FPreAnimatedCameraSourceShakeStateStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedCameraSourceShakeStateStorage,1> *)
                 (*pcVar4)();
        return pTVar8;
      }
      goto LAB_14674812e;
    }
  }
  if (((*(longlong *)&pFVar9->field_0x8 == 0) || (*(longlong *)&pFVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->field_0x10 + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FPreAnimatedCameraSourceShakeStateStorage **)&pFVar9->field_0x8 = pFVar9;
    if (pTVar10 != *(TReferenceControllerBase<1> **)&pFVar9->field_0x10) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar9->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar9->field_0x10 = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_14674812e:
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pFVar9;
  local_48.SharedReferenceCount.ReferenceController = pTVar10;
  if (__return_storage_ptr__ != &local_48) {
    __return_storage_ptr__->Object = pFVar9;
    local_48.Object = (FPreAnimatedCameraSourceShakeStateStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&local_48.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if ((__return_storage_ptr__->Object == (FPreAnimatedCameraSourceShakeStateStorage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedCameraSourceShakeStateStorage,1> *)(*pcVar4)();
    return pTVar8;
  }
  (**(code **)(*(longlong *)__return_storage_ptr__->Object + 0x10))
            (__return_storage_ptr__->Object,param_1,this);
  pTVar10 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar9 = __return_storage_ptr__->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res18[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res18);
  if ((pTVar6 != (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!StorageImplementations.Contains(InStorageID)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateExtension.h"
                         ,0x71,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedCameraSourceShakeStateStorage,1> *)(*pcVar4)();
    return pTVar8;
  }
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = (IPreAnimatedStorage *)pFVar9;
  local_38.SharedReferenceCount.ReferenceController = pTVar10;
  TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
  ::
  Emplace<UE::MovieScene::FPreAnimatedStorageID_const_&,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>
            (&this->StorageImplementations,local_res18,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

// GetOrCreateStorage<UE::MovieScene::FPreAnimatedComponentAttachmentStorage> @ 146748270

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FPreAnimatedComponentAttachmentStorage,1> * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::
GetOrCreateStorage<UE::MovieScene::FPreAnimatedComponentAttachmentStorage>
          (FPreAnimatedStateExtension *this,
          TSharedPtr<UE::MovieScene::FPreAnimatedComponentAttachmentStorage,1>
          *__return_storage_ptr__,
          TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedComponentAttachmentStorage> param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<UE::MovieScene::FPreAnimatedComponentAttachmentStorage,1> *pTVar8;
  FPreAnimatedComponentAttachmentStorage *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  FPreAnimatedStorageID local_res8 [2];
  FPreAnimatedStorageID local_res18 [2];
  TSharedPtr<UE::MovieScene::FPreAnimatedComponentAttachmentStorage,1> local_48;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> local_38;
  
  local_res8[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res8);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) {
    __return_storage_ptr__->Object = (FPreAnimatedComponentAttachmentStorage *)0x0;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7 = (pTVar6->SharedReferenceCount).ReferenceController;
    pFVar9 = (FPreAnimatedComponentAttachmentStorage *)pTVar6->Object;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (__return_storage_ptr__->Object != (FPreAnimatedComponentAttachmentStorage *)0x0) {
    return __return_storage_ptr__;
  }
  pTVar7 = ::operator_new(0xf0);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = (FPreAnimatedComponentAttachmentStorage *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pFVar9 = (FPreAnimatedComponentAttachmentStorage *)(pTVar7 + 1);
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFPreAnimatedComponentAttachmentStorage_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar7[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[4]._padding_ = 0;
    pTVar7[6]._padding_ = 0;
    pTVar7[7]._padding_ = 0;
    pTVar7[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[9]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[0xd]._padding_ + 4) = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[3]._padding_ = 0;
    pTVar7[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[4].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[5]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[5]._padding_ + 4) = 0x80;
    pTVar7[5].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[8]._padding_ = 0;
    pTVar7[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[9].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[10]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[10]._padding_ + 4) = 0x80;
    pTVar7[10].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[1]._padding_ =
         (longlong)
         &FPreAnimatedComponentAttachmentStorage::
          _vftable__for__UE__MovieScene__TPreAnimatedStateStorage<UE::MovieScene::FComponentAttachmentPreAnimatedTraits>__
    ;
    *(undefined ***)&pTVar7[0xe].SharedReferenceCount =
         &FPreAnimatedComponentAttachmentStorage::
          _vftable__for__UE__MovieScene__IPreAnimatedObjectEntityStorage__;
    pTVar7[0xb]._padding_ = 0;
    pTVar7[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc]._padding_ = 0;
    pTVar7[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0xd]._padding_ = 0xffffffff;
    pTVar7[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xe]._padding_ = 0;
    pTVar10 = pTVar7;
    if (pFVar9 == (FPreAnimatedComponentAttachmentStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedComponentAttachmentStorage,1> *)(*pcVar4)()
        ;
        return pTVar8;
      }
      goto LAB_14674848e;
    }
  }
  if (((*(longlong *)&pFVar9->field_0x8 == 0) || (*(longlong *)&pFVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->field_0x10 + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FPreAnimatedComponentAttachmentStorage **)&pFVar9->field_0x8 = pFVar9;
    if (pTVar10 != *(TReferenceControllerBase<1> **)&pFVar9->field_0x10) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar9->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar9->field_0x10 = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_14674848e:
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pFVar9;
  local_48.SharedReferenceCount.ReferenceController = pTVar10;
  if (__return_storage_ptr__ != &local_48) {
    __return_storage_ptr__->Object = pFVar9;
    local_48.Object = (FPreAnimatedComponentAttachmentStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&local_48.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if ((__return_storage_ptr__->Object == (FPreAnimatedComponentAttachmentStorage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedComponentAttachmentStorage,1> *)(*pcVar4)();
    return pTVar8;
  }
  (**(code **)(*(longlong *)__return_storage_ptr__->Object + 0x10))
            (__return_storage_ptr__->Object,param_1,this);
  pTVar10 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar9 = __return_storage_ptr__->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res18[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res18);
  if ((pTVar6 != (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!StorageImplementations.Contains(InStorageID)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateExtension.h"
                         ,0x71,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedComponentAttachmentStorage,1> *)(*pcVar4)();
    return pTVar8;
  }
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = (IPreAnimatedStorage *)pFVar9;
  local_38.SharedReferenceCount.ReferenceController = pTVar10;
  TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
  ::
  Emplace<UE::MovieScene::FPreAnimatedStorageID_const_&,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>
            (&this->StorageImplementations,local_res18,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

// GetOrCreateStorage<UE::MovieScene::FPreAnimatedComponentMaterialParameterStorage> @ 1467485d0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FPreAnimatedComponentMaterialParameterStorage,1> * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::
GetOrCreateStorage<UE::MovieScene::FPreAnimatedComponentMaterialParameterStorage>
          (FPreAnimatedStateExtension *this,
          TSharedPtr<UE::MovieScene::FPreAnimatedComponentMaterialParameterStorage,1>
          *__return_storage_ptr__,
          TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedComponentMaterialParameterStorage>
          param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<UE::MovieScene::FPreAnimatedComponentMaterialParameterStorage,1> *pTVar8;
  FPreAnimatedComponentMaterialParameterStorage *pFVar9;
  FPreAnimatedStorageID local_res8 [2];
  FPreAnimatedStorageID local_res18 [4];
  TSharedPtr<UE::MovieScene::FPreAnimatedComponentMaterialParameterStorage,1> local_48;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> local_38;
  
  local_res8[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res8);
  if (pTVar6 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (FPreAnimatedComponentMaterialParameterStorage *)0x0;
LAB_146748623:
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
  }
  else {
    pTVar7 = (pTVar6->SharedReferenceCount).ReferenceController;
    pFVar9 = (FPreAnimatedComponentMaterialParameterStorage *)pTVar6->Object;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = pFVar9;
      goto LAB_146748623;
    }
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    __return_storage_ptr__->Object = pFVar9;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (__return_storage_ptr__->Object != (FPreAnimatedComponentMaterialParameterStorage *)0x0) {
    return __return_storage_ptr__;
  }
  pTVar7 = ::operator_new(0xe8);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = (FPreAnimatedComponentMaterialParameterStorage *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFPreAnimatedComponentMaterialParameterStorage_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    memset(&pTVar7[1].SharedReferenceCount,0,0xd0);
    TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>_>
    ::
    TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>_>
              ((TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>_>
                *)(pTVar7 + 1));
    pFVar9 = (FPreAnimatedComponentMaterialParameterStorage *)(pTVar7 + 1);
    pTVar7[1]._padding_ =
         (longlong)&___7FPreAnimatedComponentMaterialParameterStorage_MovieScene_UE__6B_;
    if (pFVar9 == (FPreAnimatedComponentMaterialParameterStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedComponentMaterialParameterStorage,1> *)
                 (*pcVar4)();
        return pTVar8;
      }
      goto LAB_14674873b;
    }
  }
  if (((*(longlong *)&pFVar9->field_0x8 == 0) || (*(longlong *)&pFVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->field_0x10 + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FPreAnimatedComponentMaterialParameterStorage **)&pFVar9->field_0x8 = pFVar9;
    if (pTVar7 != *(TReferenceControllerBase<1> **)&pFVar9->field_0x10) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar9->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar9->field_0x10 = pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_14674873b:
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pFVar9;
  local_48.SharedReferenceCount.ReferenceController = pTVar7;
  if (__return_storage_ptr__ != &local_48) {
    __return_storage_ptr__->Object = pFVar9;
    local_48.Object = (FPreAnimatedComponentMaterialParameterStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&local_48.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if ((__return_storage_ptr__->Object == (FPreAnimatedComponentMaterialParameterStorage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedComponentMaterialParameterStorage,1> *)
             (*pcVar4)();
    return pTVar8;
  }
  (**(code **)(*(longlong *)__return_storage_ptr__->Object + 0x10))
            (__return_storage_ptr__->Object,param_1,this);
  pTVar7 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar9 = __return_storage_ptr__->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res18[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res18);
  if ((pTVar6 != (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!StorageImplementations.Contains(InStorageID)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateExtension.h"
                         ,0x71,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedComponentMaterialParameterStorage,1> *)
             (*pcVar4)();
    return pTVar8;
  }
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = (IPreAnimatedStorage *)pFVar9;
  local_38.SharedReferenceCount.ReferenceController = pTVar7;
  TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
  ::
  Emplace<UE::MovieScene::FPreAnimatedStorageID_const_&,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>
            (&this->StorageImplementations,local_res18,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return __return_storage_ptr__;
}

// GetOrCreateStorage<UE::MovieScene::FPreAnimatedComponentMaterialSwitcherStorage> @ 146748880

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FPreAnimatedComponentMaterialSwitcherStorage,1> * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::
GetOrCreateStorage<UE::MovieScene::FPreAnimatedComponentMaterialSwitcherStorage>
          (FPreAnimatedStateExtension *this,
          TSharedPtr<UE::MovieScene::FPreAnimatedComponentMaterialSwitcherStorage,1>
          *__return_storage_ptr__,
          TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedComponentMaterialSwitcherStorage>
          param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<UE::MovieScene::FPreAnimatedComponentMaterialSwitcherStorage,1> *pTVar8;
  FPreAnimatedComponentMaterialSwitcherStorage *pFVar9;
  FPreAnimatedStorageID local_res8 [2];
  FPreAnimatedStorageID local_res18 [4];
  TSharedPtr<UE::MovieScene::FPreAnimatedComponentMaterialSwitcherStorage,1> local_48;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> local_38;
  
  local_res8[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res8);
  if (pTVar6 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (FPreAnimatedComponentMaterialSwitcherStorage *)0x0;
LAB_1467488d3:
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
  }
  else {
    pTVar7 = (pTVar6->SharedReferenceCount).ReferenceController;
    pFVar9 = (FPreAnimatedComponentMaterialSwitcherStorage *)pTVar6->Object;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = pFVar9;
      goto LAB_1467488d3;
    }
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    __return_storage_ptr__->Object = pFVar9;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (__return_storage_ptr__->Object != (FPreAnimatedComponentMaterialSwitcherStorage *)0x0) {
    return __return_storage_ptr__;
  }
  pTVar7 = ::operator_new(0xe8);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = (FPreAnimatedComponentMaterialSwitcherStorage *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFPreAnimatedComponentMaterialSwitcherStorage_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    memset(&pTVar7[1].SharedReferenceCount,0,0xd0);
    TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>_>
    ::
    TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>_>
              ((TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>_>
                *)(pTVar7 + 1));
    pFVar9 = (FPreAnimatedComponentMaterialSwitcherStorage *)(pTVar7 + 1);
    pTVar7[1]._padding_ =
         (longlong)&___7FPreAnimatedComponentMaterialSwitcherStorage_MovieScene_UE__6B_;
    if (pFVar9 == (FPreAnimatedComponentMaterialSwitcherStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedComponentMaterialSwitcherStorage,1> *)
                 (*pcVar4)();
        return pTVar8;
      }
      goto LAB_1467489eb;
    }
  }
  if (((*(longlong *)&pFVar9->field_0x8 == 0) || (*(longlong *)&pFVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->field_0x10 + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FPreAnimatedComponentMaterialSwitcherStorage **)&pFVar9->field_0x8 = pFVar9;
    if (pTVar7 != *(TReferenceControllerBase<1> **)&pFVar9->field_0x10) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar9->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar9->field_0x10 = pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_1467489eb:
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pFVar9;
  local_48.SharedReferenceCount.ReferenceController = pTVar7;
  if (__return_storage_ptr__ != &local_48) {
    __return_storage_ptr__->Object = pFVar9;
    local_48.Object = (FPreAnimatedComponentMaterialSwitcherStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&local_48.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if ((__return_storage_ptr__->Object == (FPreAnimatedComponentMaterialSwitcherStorage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedComponentMaterialSwitcherStorage,1> *)
             (*pcVar4)();
    return pTVar8;
  }
  (**(code **)(*(longlong *)__return_storage_ptr__->Object + 0x10))
            (__return_storage_ptr__->Object,param_1,this);
  pTVar7 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar9 = __return_storage_ptr__->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res18[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res18);
  if ((pTVar6 != (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!StorageImplementations.Contains(InStorageID)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateExtension.h"
                         ,0x71,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedComponentMaterialSwitcherStorage,1> *)
             (*pcVar4)();
    return pTVar8;
  }
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = (IPreAnimatedStorage *)pFVar9;
  local_38.SharedReferenceCount.ReferenceController = pTVar7;
  TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
  ::
  Emplace<UE::MovieScene::FPreAnimatedStorageID_const_&,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>
            (&this->StorageImplementations,local_res18,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return __return_storage_ptr__;
}

// GetOrCreateStorage<UE::MovieScene::FPreAnimatedComponentMobilityStorage> @ 146748b30

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FPreAnimatedComponentMobilityStorage,1> * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::
GetOrCreateStorage<UE::MovieScene::FPreAnimatedComponentMobilityStorage>
          (FPreAnimatedStateExtension *this,
          TSharedPtr<UE::MovieScene::FPreAnimatedComponentMobilityStorage,1> *__return_storage_ptr__
          ,TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedComponentMobilityStorage> param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<UE::MovieScene::FPreAnimatedComponentMobilityStorage,1> *pTVar8;
  FPreAnimatedComponentMobilityStorage *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  FPreAnimatedStorageID local_res8 [2];
  FPreAnimatedStorageID local_res18 [2];
  TSharedPtr<UE::MovieScene::FPreAnimatedComponentMobilityStorage,1> local_48;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> local_38;
  
  local_res8[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res8);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) {
    __return_storage_ptr__->Object = (FPreAnimatedComponentMobilityStorage *)0x0;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7 = (pTVar6->SharedReferenceCount).ReferenceController;
    pFVar9 = (FPreAnimatedComponentMobilityStorage *)pTVar6->Object;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (__return_storage_ptr__->Object != (FPreAnimatedComponentMobilityStorage *)0x0) {
    return __return_storage_ptr__;
  }
  pTVar7 = ::operator_new(0xf0);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = (FPreAnimatedComponentMobilityStorage *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pFVar9 = (FPreAnimatedComponentMobilityStorage *)(pTVar7 + 1);
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFPreAnimatedComponentMobilityStorage_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar7[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[4]._padding_ = 0;
    pTVar7[6]._padding_ = 0;
    pTVar7[7]._padding_ = 0;
    pTVar7[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[9]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[0xd]._padding_ + 4) = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[3]._padding_ = 0;
    pTVar7[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[4].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[5]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[5]._padding_ + 4) = 0x80;
    pTVar7[5].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[8]._padding_ = 0;
    pTVar7[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[9].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[10]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[10]._padding_ + 4) = 0x80;
    pTVar7[10].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[1]._padding_ =
         (longlong)
         &FPreAnimatedComponentMobilityStorage::
          _vftable__for__UE__MovieScene__TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedMobilityTraits>__
    ;
    *(undefined ***)&pTVar7[0xe].SharedReferenceCount =
         &FPreAnimatedComponentMobilityStorage::
          _vftable__for__UE__MovieScene__IPreAnimatedObjectEntityStorage__;
    pTVar7[0xb]._padding_ = 0;
    pTVar7[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc]._padding_ = 0;
    pTVar7[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0xd]._padding_ = 0xffffffff;
    pTVar7[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xe]._padding_ = 0;
    pTVar10 = pTVar7;
    if (pFVar9 == (FPreAnimatedComponentMobilityStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedComponentMobilityStorage,1> *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_146748d4e;
    }
  }
  if (((*(longlong *)&pFVar9->field_0x8 == 0) || (*(longlong *)&pFVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->field_0x10 + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FPreAnimatedComponentMobilityStorage **)&pFVar9->field_0x8 = pFVar9;
    if (pTVar10 != *(TReferenceControllerBase<1> **)&pFVar9->field_0x10) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar9->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar9->field_0x10 = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_146748d4e:
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pFVar9;
  local_48.SharedReferenceCount.ReferenceController = pTVar10;
  if (__return_storage_ptr__ != &local_48) {
    __return_storage_ptr__->Object = pFVar9;
    local_48.Object = (FPreAnimatedComponentMobilityStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&local_48.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if ((__return_storage_ptr__->Object == (FPreAnimatedComponentMobilityStorage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedComponentMobilityStorage,1> *)(*pcVar4)();
    return pTVar8;
  }
  (**(code **)(*(longlong *)__return_storage_ptr__->Object + 0x10))
            (__return_storage_ptr__->Object,param_1,this);
  pTVar10 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar9 = __return_storage_ptr__->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res18[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res18);
  if ((pTVar6 != (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!StorageImplementations.Contains(InStorageID)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateExtension.h"
                         ,0x71,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedComponentMobilityStorage,1> *)(*pcVar4)();
    return pTVar8;
  }
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = (IPreAnimatedStorage *)pFVar9;
  local_38.SharedReferenceCount.ReferenceController = pTVar10;
  TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
  ::
  Emplace<UE::MovieScene::FPreAnimatedStorageID_const_&,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>
            (&this->StorageImplementations,local_res18,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

// GetOrCreateStorage<UE::MovieScene::FPreAnimatedConstraintStorage> @ 146748e90

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FPreAnimatedConstraintStorage,1> * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::
GetOrCreateStorage<UE::MovieScene::FPreAnimatedConstraintStorage>
          (FPreAnimatedStateExtension *this,
          TSharedPtr<UE::MovieScene::FPreAnimatedConstraintStorage,1> *__return_storage_ptr__,
          TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedConstraintStorage> param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<UE::MovieScene::FPreAnimatedConstraintStorage,1> *pTVar8;
  FPreAnimatedConstraintStorage *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  FPreAnimatedStorageID local_res8 [2];
  FPreAnimatedStorageID local_res18 [2];
  TSharedPtr<UE::MovieScene::FPreAnimatedConstraintStorage,1> local_48;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> local_38;
  
  local_res8[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res8);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) {
    __return_storage_ptr__->Object = (FPreAnimatedConstraintStorage *)0x0;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7 = (pTVar6->SharedReferenceCount).ReferenceController;
    pFVar9 = (FPreAnimatedConstraintStorage *)pTVar6->Object;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (__return_storage_ptr__->Object != (FPreAnimatedConstraintStorage *)0x0) {
    return __return_storage_ptr__;
  }
  pTVar7 = ::operator_new(0xe8);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = (FPreAnimatedConstraintStorage *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pFVar9 = (FPreAnimatedConstraintStorage *)(pTVar7 + 1);
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFPreAnimatedConstraintStorage_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar7[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[4]._padding_ = 0;
    pTVar7[6]._padding_ = 0;
    pTVar7[7]._padding_ = 0;
    pTVar7[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[9]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[0xd]._padding_ + 4) = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[3]._padding_ = 0;
    pTVar7[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[4].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[5]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[5]._padding_ + 4) = 0x80;
    pTVar7[5].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[8]._padding_ = 0;
    pTVar7[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[9].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[10]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[10]._padding_ + 4) = 0x80;
    pTVar7[10].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xb]._padding_ = 0;
    pTVar7[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc]._padding_ = 0;
    pTVar7[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0xd]._padding_ = 0xffffffff;
    pTVar7[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xe]._padding_ = 0;
    pTVar7[1]._padding_ = (longlong)&___7FPreAnimatedConstraintStorage_MovieScene_UE__6B_;
    pTVar10 = pTVar7;
    if (pFVar9 == (FPreAnimatedConstraintStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedConstraintStorage,1> *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_1467490a0;
    }
  }
  if (((*(longlong *)&pFVar9->field_0x8 == 0) || (*(longlong *)&pFVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->field_0x10 + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FPreAnimatedConstraintStorage **)&pFVar9->field_0x8 = pFVar9;
    if (pTVar10 != *(TReferenceControllerBase<1> **)&pFVar9->field_0x10) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar9->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar9->field_0x10 = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_1467490a0:
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pFVar9;
  local_48.SharedReferenceCount.ReferenceController = pTVar10;
  if (__return_storage_ptr__ != &local_48) {
    __return_storage_ptr__->Object = pFVar9;
    local_48.Object = (FPreAnimatedConstraintStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&local_48.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if ((__return_storage_ptr__->Object == (FPreAnimatedConstraintStorage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedConstraintStorage,1> *)(*pcVar4)();
    return pTVar8;
  }
  (**(code **)(*(longlong *)__return_storage_ptr__->Object + 0x10))
            (__return_storage_ptr__->Object,param_1,this);
  pTVar10 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar9 = __return_storage_ptr__->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res18[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res18);
  if ((pTVar6 != (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!StorageImplementations.Contains(InStorageID)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateExtension.h"
                         ,0x71,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedConstraintStorage,1> *)(*pcVar4)();
    return pTVar8;
  }
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = (IPreAnimatedStorage *)pFVar9;
  local_38.SharedReferenceCount.ReferenceController = pTVar10;
  TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
  ::
  Emplace<UE::MovieScene::FPreAnimatedStorageID_const_&,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>
            (&this->StorageImplementations,local_res18,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

// GetOrCreateStorage<UE::MovieScene::FPreAnimatedCustomPrimitiveDataEntryStorage> @ 1467491e0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FPreAnimatedCustomPrimitiveDataEntryStorage,1> * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::
GetOrCreateStorage<UE::MovieScene::FPreAnimatedCustomPrimitiveDataEntryStorage>
          (FPreAnimatedStateExtension *this,
          TSharedPtr<UE::MovieScene::FPreAnimatedCustomPrimitiveDataEntryStorage,1>
          *__return_storage_ptr__,
          TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedCustomPrimitiveDataEntryStorage> param_1
          )

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<UE::MovieScene::FPreAnimatedCustomPrimitiveDataEntryStorage,1> *pTVar8;
  FPreAnimatedCustomPrimitiveDataEntryStorage *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  FPreAnimatedStorageID local_res8 [2];
  FPreAnimatedStorageID local_res18 [2];
  TSharedPtr<UE::MovieScene::FPreAnimatedCustomPrimitiveDataEntryStorage,1> local_48;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> local_38;
  
  local_res8[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res8);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) {
    __return_storage_ptr__->Object = (FPreAnimatedCustomPrimitiveDataEntryStorage *)0x0;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7 = (pTVar6->SharedReferenceCount).ReferenceController;
    pFVar9 = (FPreAnimatedCustomPrimitiveDataEntryStorage *)pTVar6->Object;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (__return_storage_ptr__->Object != (FPreAnimatedCustomPrimitiveDataEntryStorage *)0x0) {
    return __return_storage_ptr__;
  }
  pTVar7 = ::operator_new(0xe8);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = (FPreAnimatedCustomPrimitiveDataEntryStorage *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pFVar9 = (FPreAnimatedCustomPrimitiveDataEntryStorage *)(pTVar7 + 1);
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFPreAnimatedCustomPrimitiveDataEntryStorage_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar7[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[4]._padding_ = 0;
    pTVar7[6]._padding_ = 0;
    pTVar7[7]._padding_ = 0;
    pTVar7[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[9]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[0xd]._padding_ + 4) = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[3]._padding_ = 0;
    pTVar7[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[4].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[5]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[5]._padding_ + 4) = 0x80;
    pTVar7[5].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[8]._padding_ = 0;
    pTVar7[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[9].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[10]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[10]._padding_ + 4) = 0x80;
    pTVar7[10].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xb]._padding_ = 0;
    pTVar7[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc]._padding_ = 0;
    pTVar7[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0xd]._padding_ = 0xffffffff;
    pTVar7[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xe]._padding_ = 0;
    pTVar7[1]._padding_ =
         (longlong)&___7FPreAnimatedCustomPrimitiveDataEntryStorage_MovieScene_UE__6B_;
    pTVar10 = pTVar7;
    if (pFVar9 == (FPreAnimatedCustomPrimitiveDataEntryStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedCustomPrimitiveDataEntryStorage,1> *)
                 (*pcVar4)();
        return pTVar8;
      }
      goto LAB_1467493f0;
    }
  }
  if (((*(longlong *)&pFVar9->field_0x8 == 0) || (*(longlong *)&pFVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->field_0x10 + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FPreAnimatedCustomPrimitiveDataEntryStorage **)&pFVar9->field_0x8 = pFVar9;
    if (pTVar10 != *(TReferenceControllerBase<1> **)&pFVar9->field_0x10) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar9->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar9->field_0x10 = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_1467493f0:
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pFVar9;
  local_48.SharedReferenceCount.ReferenceController = pTVar10;
  if (__return_storage_ptr__ != &local_48) {
    __return_storage_ptr__->Object = pFVar9;
    local_48.Object = (FPreAnimatedCustomPrimitiveDataEntryStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&local_48.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if ((__return_storage_ptr__->Object == (FPreAnimatedCustomPrimitiveDataEntryStorage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedCustomPrimitiveDataEntryStorage,1> *)
             (*pcVar4)();
    return pTVar8;
  }
  (**(code **)(*(longlong *)__return_storage_ptr__->Object + 0x10))
            (__return_storage_ptr__->Object,param_1,this);
  pTVar10 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar9 = __return_storage_ptr__->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res18[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res18);
  if ((pTVar6 != (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!StorageImplementations.Contains(InStorageID)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateExtension.h"
                         ,0x71,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedCustomPrimitiveDataEntryStorage,1> *)
             (*pcVar4)();
    return pTVar8;
  }
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = (IPreAnimatedStorage *)pFVar9;
  local_38.SharedReferenceCount.ReferenceController = pTVar10;
  TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
  ::
  Emplace<UE::MovieScene::FPreAnimatedStorageID_const_&,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>
            (&this->StorageImplementations,local_res18,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

// GetOrCreateStorage<UE::MovieScene::FPreAnimatedDataLayerStorage> @ 1467ec410

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FPreAnimatedDataLayerStorage,1> * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::
GetOrCreateStorage<UE::MovieScene::FPreAnimatedDataLayerStorage>
          (FPreAnimatedStateExtension *this,
          TSharedPtr<UE::MovieScene::FPreAnimatedDataLayerStorage,1> *__return_storage_ptr__,
          TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedDataLayerStorage> param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<UE::MovieScene::FPreAnimatedDataLayerStorage,1> *pTVar8;
  FPreAnimatedDataLayerStorage *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  FPreAnimatedStorageID local_res8 [2];
  FPreAnimatedStorageID local_res18 [2];
  TSharedPtr<UE::MovieScene::FPreAnimatedDataLayerStorage,1> local_48;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> local_38;
  
  local_res8[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res8);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) {
    __return_storage_ptr__->Object = (FPreAnimatedDataLayerStorage *)0x0;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7 = (pTVar6->SharedReferenceCount).ReferenceController;
    pFVar9 = (FPreAnimatedDataLayerStorage *)pTVar6->Object;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (__return_storage_ptr__->Object != (FPreAnimatedDataLayerStorage *)0x0) {
    return __return_storage_ptr__;
  }
  pTVar7 = ::operator_new(0xd8);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = (FPreAnimatedDataLayerStorage *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pFVar9 = (FPreAnimatedDataLayerStorage *)(pTVar7 + 1);
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFPreAnimatedDataLayerStorage_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar7[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[4]._padding_ = 0;
    pTVar7[6]._padding_ = 0;
    pTVar7[7]._padding_ = 0;
    pTVar7[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[9]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[0xd]._padding_ + 4) = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[3]._padding_ = 0;
    pTVar7[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[4].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[5]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[5]._padding_ + 4) = 0x80;
    pTVar7[5].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[8]._padding_ = 0;
    pTVar7[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[9].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[10]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[10]._padding_ + 4) = 0x80;
    pTVar7[10].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xb]._padding_ = 0;
    pTVar7[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc]._padding_ = 0;
    pTVar7[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0xd]._padding_ = 0xffffffff;
    pTVar7[1]._padding_ = (longlong)&___7FPreAnimatedDataLayerStorage_MovieScene_UE__6B_;
    pTVar10 = pTVar7;
    if (pFVar9 == (FPreAnimatedDataLayerStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedDataLayerStorage,1> *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_1467ec612;
    }
  }
  if (((*(longlong *)&pFVar9->field_0x8 == 0) || (*(longlong *)&pFVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->field_0x10 + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FPreAnimatedDataLayerStorage **)&pFVar9->field_0x8 = pFVar9;
    if (pTVar10 != *(TReferenceControllerBase<1> **)&pFVar9->field_0x10) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar9->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar9->field_0x10 = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_1467ec612:
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pFVar9;
  local_48.SharedReferenceCount.ReferenceController = pTVar10;
  if (__return_storage_ptr__ != &local_48) {
    __return_storage_ptr__->Object = pFVar9;
    local_48.Object = (FPreAnimatedDataLayerStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&local_48.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if ((__return_storage_ptr__->Object == (FPreAnimatedDataLayerStorage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedDataLayerStorage,1> *)(*pcVar4)();
    return pTVar8;
  }
  (**(code **)(*(longlong *)__return_storage_ptr__->Object + 0x10))
            (__return_storage_ptr__->Object,param_1,this);
  pTVar10 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar9 = __return_storage_ptr__->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res18[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res18);
  if ((pTVar6 != (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!StorageImplementations.Contains(InStorageID)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateExtension.h"
                         ,0x71,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedDataLayerStorage,1> *)(*pcVar4)();
    return pTVar8;
  }
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = (IPreAnimatedStorage *)pFVar9;
  local_38.SharedReferenceCount.ReferenceController = pTVar10;
  TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
  ::
  Emplace<UE::MovieScene::FPreAnimatedStorageID_const_&,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>
            (&this->StorageImplementations,local_res18,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

// GetOrCreateStorage<UE::MovieScene::FPreAnimatedFadeStateStorage> @ 1467ec750

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FPreAnimatedFadeStateStorage,1> * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::
GetOrCreateStorage<UE::MovieScene::FPreAnimatedFadeStateStorage>
          (FPreAnimatedStateExtension *this,
          TSharedPtr<UE::MovieScene::FPreAnimatedFadeStateStorage,1> *__return_storage_ptr__,
          TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedFadeStateStorage> param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<UE::MovieScene::FPreAnimatedFadeStateStorage,1> *pTVar8;
  FPreAnimatedFadeStateStorage *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  FPreAnimatedStorageID local_res8 [2];
  FPreAnimatedStorageID local_res18 [2];
  TSharedPtr<UE::MovieScene::FPreAnimatedFadeStateStorage,1> local_48;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> local_38;
  
  local_res8[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res8);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) {
    __return_storage_ptr__->Object = (FPreAnimatedFadeStateStorage *)0x0;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7 = (pTVar6->SharedReferenceCount).ReferenceController;
    pFVar9 = (FPreAnimatedFadeStateStorage *)pTVar6->Object;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (__return_storage_ptr__->Object != (FPreAnimatedFadeStateStorage *)0x0) {
    return __return_storage_ptr__;
  }
  pTVar7 = ::operator_new(0xd8);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = (FPreAnimatedFadeStateStorage *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pFVar9 = (FPreAnimatedFadeStateStorage *)(pTVar7 + 1);
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFPreAnimatedFadeStateStorage_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar7[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[4]._padding_ = 0;
    pTVar7[6]._padding_ = 0;
    pTVar7[7]._padding_ = 0;
    pTVar7[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[9]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[0xd]._padding_ + 4) = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[3]._padding_ = 0;
    pTVar7[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[4].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[5]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[5]._padding_ + 4) = 0x80;
    pTVar7[5].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[8]._padding_ = 0;
    pTVar7[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[9].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[10]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[10]._padding_ + 4) = 0x80;
    pTVar7[10].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xb]._padding_ = 0;
    pTVar7[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc]._padding_ = 0;
    pTVar7[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0xd]._padding_ = 0xffffffff;
    pTVar7[1]._padding_ = (longlong)&___7FPreAnimatedFadeStateStorage_MovieScene_UE__6B_;
    pTVar10 = pTVar7;
    if (pFVar9 == (FPreAnimatedFadeStateStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedFadeStateStorage,1> *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_1467ec952;
    }
  }
  if (((*(longlong *)&pFVar9->field_0x8 == 0) || (*(longlong *)&pFVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->field_0x10 + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FPreAnimatedFadeStateStorage **)&pFVar9->field_0x8 = pFVar9;
    if (pTVar10 != *(TReferenceControllerBase<1> **)&pFVar9->field_0x10) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar9->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar9->field_0x10 = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_1467ec952:
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pFVar9;
  local_48.SharedReferenceCount.ReferenceController = pTVar10;
  if (__return_storage_ptr__ != &local_48) {
    __return_storage_ptr__->Object = pFVar9;
    local_48.Object = (FPreAnimatedFadeStateStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&local_48.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if ((__return_storage_ptr__->Object == (FPreAnimatedFadeStateStorage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedFadeStateStorage,1> *)(*pcVar4)();
    return pTVar8;
  }
  (**(code **)(*(longlong *)__return_storage_ptr__->Object + 0x10))
            (__return_storage_ptr__->Object,param_1,this);
  pTVar10 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar9 = __return_storage_ptr__->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res18[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res18);
  if ((pTVar6 != (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!StorageImplementations.Contains(InStorageID)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateExtension.h"
                         ,0x71,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedFadeStateStorage,1> *)(*pcVar4)();
    return pTVar8;
  }
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = (IPreAnimatedStorage *)pFVar9;
  local_38.SharedReferenceCount.ReferenceController = pTVar10;
  TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
  ::
  Emplace<UE::MovieScene::FPreAnimatedStorageID_const_&,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>
            (&this->StorageImplementations,local_res18,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

// GetOrCreateStorage<UE::MovieScene::FPreAnimatedScalarMaterialParameterStorage> @ 1467eca90

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FPreAnimatedScalarMaterialParameterStorage,1> * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::
GetOrCreateStorage<UE::MovieScene::FPreAnimatedScalarMaterialParameterStorage>
          (FPreAnimatedStateExtension *this,
          TSharedPtr<UE::MovieScene::FPreAnimatedScalarMaterialParameterStorage,1>
          *__return_storage_ptr__,
          TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedScalarMaterialParameterStorage> param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<UE::MovieScene::FPreAnimatedScalarMaterialParameterStorage,1> *pTVar8;
  FPreAnimatedScalarMaterialParameterStorage *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  FPreAnimatedStorageID local_res8 [2];
  FPreAnimatedStorageID local_res18 [2];
  TSharedPtr<UE::MovieScene::FPreAnimatedScalarMaterialParameterStorage,1> local_48;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> local_38;
  
  local_res8[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res8);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) {
    __return_storage_ptr__->Object = (FPreAnimatedScalarMaterialParameterStorage *)0x0;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7 = (pTVar6->SharedReferenceCount).ReferenceController;
    pFVar9 = (FPreAnimatedScalarMaterialParameterStorage *)pTVar6->Object;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (__return_storage_ptr__->Object != (FPreAnimatedScalarMaterialParameterStorage *)0x0) {
    return __return_storage_ptr__;
  }
  pTVar7 = ::operator_new(0xe8);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = (FPreAnimatedScalarMaterialParameterStorage *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pFVar9 = (FPreAnimatedScalarMaterialParameterStorage *)(pTVar7 + 1);
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFPreAnimatedScalarMaterialParameterStorage_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar7[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[4]._padding_ = 0;
    pTVar7[6]._padding_ = 0;
    pTVar7[7]._padding_ = 0;
    pTVar7[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[9]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[0xd]._padding_ + 4) = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[3]._padding_ = 0;
    pTVar7[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[4].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[5]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[5]._padding_ + 4) = 0x80;
    pTVar7[5].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[8]._padding_ = 0;
    pTVar7[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[9].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[10]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[10]._padding_ + 4) = 0x80;
    pTVar7[10].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xb]._padding_ = 0;
    pTVar7[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc]._padding_ = 0;
    pTVar7[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0xd]._padding_ = 0xffffffff;
    pTVar7[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xe]._padding_ = 0;
    pTVar7[1]._padding_ =
         (longlong)&___7FPreAnimatedScalarMaterialParameterStorage_MovieScene_UE__6B_;
    pTVar10 = pTVar7;
    if (pFVar9 == (FPreAnimatedScalarMaterialParameterStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedScalarMaterialParameterStorage,1> *)
                 (*pcVar4)();
        return pTVar8;
      }
      goto LAB_1467ecca0;
    }
  }
  if (((*(longlong *)&pFVar9->field_0x8 == 0) || (*(longlong *)&pFVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->field_0x10 + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FPreAnimatedScalarMaterialParameterStorage **)&pFVar9->field_0x8 = pFVar9;
    if (pTVar10 != *(TReferenceControllerBase<1> **)&pFVar9->field_0x10) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar9->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar9->field_0x10 = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_1467ecca0:
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pFVar9;
  local_48.SharedReferenceCount.ReferenceController = pTVar10;
  if (__return_storage_ptr__ != &local_48) {
    __return_storage_ptr__->Object = pFVar9;
    local_48.Object = (FPreAnimatedScalarMaterialParameterStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&local_48.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if ((__return_storage_ptr__->Object == (FPreAnimatedScalarMaterialParameterStorage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedScalarMaterialParameterStorage,1> *)(*pcVar4)()
    ;
    return pTVar8;
  }
  (**(code **)(*(longlong *)__return_storage_ptr__->Object + 0x10))
            (__return_storage_ptr__->Object,param_1,this);
  pTVar10 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar9 = __return_storage_ptr__->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res18[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res18);
  if ((pTVar6 != (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!StorageImplementations.Contains(InStorageID)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateExtension.h"
                         ,0x71,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedScalarMaterialParameterStorage,1> *)(*pcVar4)()
    ;
    return pTVar8;
  }
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = (IPreAnimatedStorage *)pFVar9;
  local_38.SharedReferenceCount.ReferenceController = pTVar10;
  TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
  ::
  Emplace<UE::MovieScene::FPreAnimatedStorageID_const_&,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>
            (&this->StorageImplementations,local_res18,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

// GetOrCreateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceStorage> @ 1467ecde0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceStorage,1> * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::
GetOrCreateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceStorage>
          (FPreAnimatedStateExtension *this,
          TSharedPtr<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceStorage,1>
          *__return_storage_ptr__,
          TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceStorage>
          param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceStorage,1> *pTVar8;
  FPreAnimatedSkeletalAnimationAnimInstanceStorage *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  FPreAnimatedStorageID local_res8 [2];
  FPreAnimatedStorageID local_res18 [2];
  TSharedPtr<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceStorage,1> local_48;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> local_38;
  
  local_res8[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res8);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) {
    __return_storage_ptr__->Object = (FPreAnimatedSkeletalAnimationAnimInstanceStorage *)0x0;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7 = (pTVar6->SharedReferenceCount).ReferenceController;
    pFVar9 = (FPreAnimatedSkeletalAnimationAnimInstanceStorage *)pTVar6->Object;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (__return_storage_ptr__->Object != (FPreAnimatedSkeletalAnimationAnimInstanceStorage *)0x0) {
    return __return_storage_ptr__;
  }
  pTVar7 = ::operator_new(0xf0);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = (FPreAnimatedSkeletalAnimationAnimInstanceStorage *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pFVar9 = (FPreAnimatedSkeletalAnimationAnimInstanceStorage *)(pTVar7 + 1);
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFPreAnimatedSkeletalAnimationAnimInstanceStorage_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar7[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[4]._padding_ = 0;
    pTVar7[6]._padding_ = 0;
    pTVar7[7]._padding_ = 0;
    pTVar7[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[9]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[0xd]._padding_ + 4) = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[3]._padding_ = 0;
    pTVar7[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[4].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[5]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[5]._padding_ + 4) = 0x80;
    pTVar7[5].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[8]._padding_ = 0;
    pTVar7[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[9].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[10]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[10]._padding_ + 4) = 0x80;
    pTVar7[10].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[1]._padding_ =
         (longlong)
         &FPreAnimatedSkeletalAnimationAnimInstanceStorage::
          _vftable__for__UE__MovieScene__TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>__
    ;
    *(undefined ***)&pTVar7[0xe].SharedReferenceCount =
         &FPreAnimatedSkeletalAnimationAnimInstanceStorage::
          _vftable__for__UE__MovieScene__IPreAnimatedObjectEntityStorage__;
    pTVar7[0xb]._padding_ = 0;
    pTVar7[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc]._padding_ = 0;
    pTVar7[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0xd]._padding_ = 0xffffffff;
    pTVar7[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xe]._padding_ = 0;
    pTVar10 = pTVar7;
    if (pFVar9 == (FPreAnimatedSkeletalAnimationAnimInstanceStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceStorage,1> *)
                 (*pcVar4)();
        return pTVar8;
      }
      goto LAB_1467ecffe;
    }
  }
  if (((*(longlong *)&pFVar9->field_0x8 == 0) || (*(longlong *)&pFVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->field_0x10 + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FPreAnimatedSkeletalAnimationAnimInstanceStorage **)&pFVar9->field_0x8 = pFVar9;
    if (pTVar10 != *(TReferenceControllerBase<1> **)&pFVar9->field_0x10) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar9->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar9->field_0x10 = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_1467ecffe:
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pFVar9;
  local_48.SharedReferenceCount.ReferenceController = pTVar10;
  if (__return_storage_ptr__ != &local_48) {
    __return_storage_ptr__->Object = pFVar9;
    local_48.Object = (FPreAnimatedSkeletalAnimationAnimInstanceStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&local_48.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if ((__return_storage_ptr__->Object == (FPreAnimatedSkeletalAnimationAnimInstanceStorage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceStorage,1> *)
             (*pcVar4)();
    return pTVar8;
  }
  (**(code **)(*(longlong *)__return_storage_ptr__->Object + 0x10))
            (__return_storage_ptr__->Object,param_1,this);
  pTVar10 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar9 = __return_storage_ptr__->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res18[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res18);
  if ((pTVar6 != (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!StorageImplementations.Contains(InStorageID)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateExtension.h"
                         ,0x71,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceStorage,1> *)
             (*pcVar4)();
    return pTVar8;
  }
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = (IPreAnimatedStorage *)pFVar9;
  local_38.SharedReferenceCount.ReferenceController = pTVar10;
  TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
  ::
  Emplace<UE::MovieScene::FPreAnimatedStorageID_const_&,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>
            (&this->StorageImplementations,local_res18,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

// GetOrCreateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageStorage> @ 1467ed140

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageStorage,1> * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::
GetOrCreateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageStorage>
          (FPreAnimatedStateExtension *this,
          TSharedPtr<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageStorage,1>
          *__return_storage_ptr__,
          TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageStorage> param_1
          )

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageStorage,1> *pTVar8;
  FPreAnimatedSkeletalAnimationMontageStorage *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  FPreAnimatedStorageID local_res8 [2];
  FPreAnimatedStorageID local_res18 [2];
  TSharedPtr<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageStorage,1> local_48;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> local_38;
  
  local_res8[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res8);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) {
    __return_storage_ptr__->Object = (FPreAnimatedSkeletalAnimationMontageStorage *)0x0;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7 = (pTVar6->SharedReferenceCount).ReferenceController;
    pFVar9 = (FPreAnimatedSkeletalAnimationMontageStorage *)pTVar6->Object;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (__return_storage_ptr__->Object != (FPreAnimatedSkeletalAnimationMontageStorage *)0x0) {
    return __return_storage_ptr__;
  }
  pTVar7 = ::operator_new(0xf0);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = (FPreAnimatedSkeletalAnimationMontageStorage *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pFVar9 = (FPreAnimatedSkeletalAnimationMontageStorage *)(pTVar7 + 1);
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFPreAnimatedSkeletalAnimationMontageStorage_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar7[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[4]._padding_ = 0;
    pTVar7[6]._padding_ = 0;
    pTVar7[7]._padding_ = 0;
    pTVar7[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[9]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[0xd]._padding_ + 4) = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[3]._padding_ = 0;
    pTVar7[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[4].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[5]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[5]._padding_ + 4) = 0x80;
    pTVar7[5].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[8]._padding_ = 0;
    pTVar7[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[9].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[10]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[10]._padding_ + 4) = 0x80;
    pTVar7[10].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[1]._padding_ =
         (longlong)
         &FPreAnimatedSkeletalAnimationMontageStorage::
          _vftable__for__UE__MovieScene__TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageTraits>__
    ;
    *(undefined ***)&pTVar7[0xe].SharedReferenceCount =
         &FPreAnimatedSkeletalAnimationMontageStorage::
          _vftable__for__UE__MovieScene__IPreAnimatedObjectEntityStorage__;
    pTVar7[0xb]._padding_ = 0;
    pTVar7[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc]._padding_ = 0;
    pTVar7[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0xd]._padding_ = 0xffffffff;
    pTVar7[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xe]._padding_ = 0;
    pTVar10 = pTVar7;
    if (pFVar9 == (FPreAnimatedSkeletalAnimationMontageStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageStorage,1> *)
                 (*pcVar4)();
        return pTVar8;
      }
      goto LAB_1467ed35e;
    }
  }
  if (((*(longlong *)&pFVar9->field_0x8 == 0) || (*(longlong *)&pFVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->field_0x10 + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FPreAnimatedSkeletalAnimationMontageStorage **)&pFVar9->field_0x8 = pFVar9;
    if (pTVar10 != *(TReferenceControllerBase<1> **)&pFVar9->field_0x10) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar9->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar9->field_0x10 = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_1467ed35e:
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pFVar9;
  local_48.SharedReferenceCount.ReferenceController = pTVar10;
  if (__return_storage_ptr__ != &local_48) {
    __return_storage_ptr__->Object = pFVar9;
    local_48.Object = (FPreAnimatedSkeletalAnimationMontageStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&local_48.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if ((__return_storage_ptr__->Object == (FPreAnimatedSkeletalAnimationMontageStorage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageStorage,1> *)
             (*pcVar4)();
    return pTVar8;
  }
  (**(code **)(*(longlong *)__return_storage_ptr__->Object + 0x10))
            (__return_storage_ptr__->Object,param_1,this);
  pTVar10 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar9 = __return_storage_ptr__->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res18[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res18);
  if ((pTVar6 != (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!StorageImplementations.Contains(InStorageID)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateExtension.h"
                         ,0x71,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageStorage,1> *)
             (*pcVar4)();
    return pTVar8;
  }
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = (IPreAnimatedStorage *)pFVar9;
  local_38.SharedReferenceCount.ReferenceController = pTVar10;
  TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
  ::
  Emplace<UE::MovieScene::FPreAnimatedStorageID_const_&,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>
            (&this->StorageImplementations,local_res18,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

// GetOrCreateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationStorage> @ 1467ed4a0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FPreAnimatedSkeletalAnimationStorage,1> * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::
GetOrCreateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationStorage>
          (FPreAnimatedStateExtension *this,
          TSharedPtr<UE::MovieScene::FPreAnimatedSkeletalAnimationStorage,1> *__return_storage_ptr__
          ,TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedSkeletalAnimationStorage> param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<UE::MovieScene::FPreAnimatedSkeletalAnimationStorage,1> *pTVar8;
  FPreAnimatedSkeletalAnimationStorage *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  FPreAnimatedStorageID local_res8 [2];
  FPreAnimatedStorageID local_res18 [2];
  TSharedPtr<UE::MovieScene::FPreAnimatedSkeletalAnimationStorage,1> local_48;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> local_38;
  
  local_res8[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res8);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) {
    __return_storage_ptr__->Object = (FPreAnimatedSkeletalAnimationStorage *)0x0;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7 = (pTVar6->SharedReferenceCount).ReferenceController;
    pFVar9 = (FPreAnimatedSkeletalAnimationStorage *)pTVar6->Object;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (__return_storage_ptr__->Object != (FPreAnimatedSkeletalAnimationStorage *)0x0) {
    return __return_storage_ptr__;
  }
  pTVar7 = ::operator_new(0xf0);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = (FPreAnimatedSkeletalAnimationStorage *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pFVar9 = (FPreAnimatedSkeletalAnimationStorage *)(pTVar7 + 1);
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFPreAnimatedSkeletalAnimationStorage_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar7[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[4]._padding_ = 0;
    pTVar7[6]._padding_ = 0;
    pTVar7[7]._padding_ = 0;
    pTVar7[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[9]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[0xd]._padding_ + 4) = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[3]._padding_ = 0;
    pTVar7[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[4].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[5]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[5]._padding_ + 4) = 0x80;
    pTVar7[5].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[8]._padding_ = 0;
    pTVar7[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[9].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[10]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[10]._padding_ + 4) = 0x80;
    pTVar7[10].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[1]._padding_ =
         (longlong)
         &FPreAnimatedSkeletalAnimationStorage::
          _vftable__for__UE__MovieScene__TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>__
    ;
    *(undefined ***)&pTVar7[0xe].SharedReferenceCount =
         &FPreAnimatedSkeletalAnimationStorage::
          _vftable__for__UE__MovieScene__IPreAnimatedObjectEntityStorage__;
    pTVar7[0xb]._padding_ = 0;
    pTVar7[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc]._padding_ = 0;
    pTVar7[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0xd]._padding_ = 0xffffffff;
    pTVar7[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xe]._padding_ = 0;
    pTVar10 = pTVar7;
    if (pFVar9 == (FPreAnimatedSkeletalAnimationStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedSkeletalAnimationStorage,1> *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_1467ed6be;
    }
  }
  if (((*(longlong *)&pFVar9->field_0x8 == 0) || (*(longlong *)&pFVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->field_0x10 + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FPreAnimatedSkeletalAnimationStorage **)&pFVar9->field_0x8 = pFVar9;
    if (pTVar10 != *(TReferenceControllerBase<1> **)&pFVar9->field_0x10) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar9->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar9->field_0x10 = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_1467ed6be:
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pFVar9;
  local_48.SharedReferenceCount.ReferenceController = pTVar10;
  if (__return_storage_ptr__ != &local_48) {
    __return_storage_ptr__->Object = pFVar9;
    local_48.Object = (FPreAnimatedSkeletalAnimationStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&local_48.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if ((__return_storage_ptr__->Object == (FPreAnimatedSkeletalAnimationStorage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedSkeletalAnimationStorage,1> *)(*pcVar4)();
    return pTVar8;
  }
  (**(code **)(*(longlong *)__return_storage_ptr__->Object + 0x10))
            (__return_storage_ptr__->Object,param_1,this);
  pTVar10 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar9 = __return_storage_ptr__->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res18[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res18);
  if ((pTVar6 != (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!StorageImplementations.Contains(InStorageID)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateExtension.h"
                         ,0x71,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedSkeletalAnimationStorage,1> *)(*pcVar4)();
    return pTVar8;
  }
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = (IPreAnimatedStorage *)pFVar9;
  local_38.SharedReferenceCount.ReferenceController = pTVar10;
  TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
  ::
  Emplace<UE::MovieScene::FPreAnimatedStorageID_const_&,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>
            (&this->StorageImplementations,local_res18,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

// GetOrCreateStorage<UE::MovieScene::FPreAnimatedSlomoStateStorage> @ 1467ed800

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FPreAnimatedSlomoStateStorage,1> * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::
GetOrCreateStorage<UE::MovieScene::FPreAnimatedSlomoStateStorage>
          (FPreAnimatedStateExtension *this,
          TSharedPtr<UE::MovieScene::FPreAnimatedSlomoStateStorage,1> *__return_storage_ptr__,
          TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedSlomoStateStorage> param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<UE::MovieScene::FPreAnimatedSlomoStateStorage,1> *pTVar8;
  FPreAnimatedSlomoStateStorage *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  FPreAnimatedStorageID local_res8 [2];
  FPreAnimatedStorageID local_res18 [2];
  TSharedPtr<UE::MovieScene::FPreAnimatedSlomoStateStorage,1> local_48;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> local_38;
  
  local_res8[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res8);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) {
    __return_storage_ptr__->Object = (FPreAnimatedSlomoStateStorage *)0x0;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7 = (pTVar6->SharedReferenceCount).ReferenceController;
    pFVar9 = (FPreAnimatedSlomoStateStorage *)pTVar6->Object;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (__return_storage_ptr__->Object != (FPreAnimatedSlomoStateStorage *)0x0) {
    return __return_storage_ptr__;
  }
  pTVar7 = ::operator_new(0xd8);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = (FPreAnimatedSlomoStateStorage *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pFVar9 = (FPreAnimatedSlomoStateStorage *)(pTVar7 + 1);
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFPreAnimatedSlomoStateStorage_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar7[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[4]._padding_ = 0;
    pTVar7[6]._padding_ = 0;
    pTVar7[7]._padding_ = 0;
    pTVar7[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[9]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[0xd]._padding_ + 4) = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[3]._padding_ = 0;
    pTVar7[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[4].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[5]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[5]._padding_ + 4) = 0x80;
    pTVar7[5].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[8]._padding_ = 0;
    pTVar7[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[9].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[10]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[10]._padding_ + 4) = 0x80;
    pTVar7[10].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xb]._padding_ = 0;
    pTVar7[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc]._padding_ = 0;
    pTVar7[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0xd]._padding_ = 0xffffffff;
    pTVar7[1]._padding_ = (longlong)&___7FPreAnimatedSlomoStateStorage_MovieScene_UE__6B_;
    pTVar10 = pTVar7;
    if (pFVar9 == (FPreAnimatedSlomoStateStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedSlomoStateStorage,1> *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_1467eda02;
    }
  }
  if (((*(longlong *)&pFVar9->field_0x8 == 0) || (*(longlong *)&pFVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->field_0x10 + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FPreAnimatedSlomoStateStorage **)&pFVar9->field_0x8 = pFVar9;
    if (pTVar10 != *(TReferenceControllerBase<1> **)&pFVar9->field_0x10) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar9->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar9->field_0x10 = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_1467eda02:
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pFVar9;
  local_48.SharedReferenceCount.ReferenceController = pTVar10;
  if (__return_storage_ptr__ != &local_48) {
    __return_storage_ptr__->Object = pFVar9;
    local_48.Object = (FPreAnimatedSlomoStateStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&local_48.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if ((__return_storage_ptr__->Object == (FPreAnimatedSlomoStateStorage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedSlomoStateStorage,1> *)(*pcVar4)();
    return pTVar8;
  }
  (**(code **)(*(longlong *)__return_storage_ptr__->Object + 0x10))
            (__return_storage_ptr__->Object,param_1,this);
  pTVar10 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar9 = __return_storage_ptr__->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res18[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res18);
  if ((pTVar6 != (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!StorageImplementations.Contains(InStorageID)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateExtension.h"
                         ,0x71,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedSlomoStateStorage,1> *)(*pcVar4)();
    return pTVar8;
  }
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = (IPreAnimatedStorage *)pFVar9;
  local_38.SharedReferenceCount.ReferenceController = pTVar10;
  TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
  ::
  Emplace<UE::MovieScene::FPreAnimatedStorageID_const_&,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>
            (&this->StorageImplementations,local_res18,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

// GetOrCreateStorage<UE::MovieScene::FPreAnimatedVectorMaterialParameterStorage> @ 1467edb40

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FPreAnimatedVectorMaterialParameterStorage,1> * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::
GetOrCreateStorage<UE::MovieScene::FPreAnimatedVectorMaterialParameterStorage>
          (FPreAnimatedStateExtension *this,
          TSharedPtr<UE::MovieScene::FPreAnimatedVectorMaterialParameterStorage,1>
          *__return_storage_ptr__,
          TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedVectorMaterialParameterStorage> param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<UE::MovieScene::FPreAnimatedVectorMaterialParameterStorage,1> *pTVar8;
  FPreAnimatedVectorMaterialParameterStorage *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  FPreAnimatedStorageID local_res8 [2];
  FPreAnimatedStorageID local_res18 [2];
  TSharedPtr<UE::MovieScene::FPreAnimatedVectorMaterialParameterStorage,1> local_48;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> local_38;
  
  local_res8[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res8);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) {
    __return_storage_ptr__->Object = (FPreAnimatedVectorMaterialParameterStorage *)0x0;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7 = (pTVar6->SharedReferenceCount).ReferenceController;
    pFVar9 = (FPreAnimatedVectorMaterialParameterStorage *)pTVar6->Object;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (__return_storage_ptr__->Object != (FPreAnimatedVectorMaterialParameterStorage *)0x0) {
    return __return_storage_ptr__;
  }
  pTVar7 = ::operator_new(0xe8);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = (FPreAnimatedVectorMaterialParameterStorage *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pFVar9 = (FPreAnimatedVectorMaterialParameterStorage *)(pTVar7 + 1);
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFPreAnimatedVectorMaterialParameterStorage_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar7[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[4]._padding_ = 0;
    pTVar7[6]._padding_ = 0;
    pTVar7[7]._padding_ = 0;
    pTVar7[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[9]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[0xd]._padding_ + 4) = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[3]._padding_ = 0;
    pTVar7[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[4].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[5]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[5]._padding_ + 4) = 0x80;
    pTVar7[5].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[8]._padding_ = 0;
    pTVar7[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[9].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[10]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[10]._padding_ + 4) = 0x80;
    pTVar7[10].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xb]._padding_ = 0;
    pTVar7[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc]._padding_ = 0;
    pTVar7[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0xd]._padding_ = 0xffffffff;
    pTVar7[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xe]._padding_ = 0;
    pTVar7[1]._padding_ =
         (longlong)&___7FPreAnimatedVectorMaterialParameterStorage_MovieScene_UE__6B_;
    pTVar10 = pTVar7;
    if (pFVar9 == (FPreAnimatedVectorMaterialParameterStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedVectorMaterialParameterStorage,1> *)
                 (*pcVar4)();
        return pTVar8;
      }
      goto LAB_1467edd50;
    }
  }
  if (((*(longlong *)&pFVar9->field_0x8 == 0) || (*(longlong *)&pFVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->field_0x10 + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FPreAnimatedVectorMaterialParameterStorage **)&pFVar9->field_0x8 = pFVar9;
    if (pTVar10 != *(TReferenceControllerBase<1> **)&pFVar9->field_0x10) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar9->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar9->field_0x10 = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_1467edd50:
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pFVar9;
  local_48.SharedReferenceCount.ReferenceController = pTVar10;
  if (__return_storage_ptr__ != &local_48) {
    __return_storage_ptr__->Object = pFVar9;
    local_48.Object = (FPreAnimatedVectorMaterialParameterStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&local_48.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if ((__return_storage_ptr__->Object == (FPreAnimatedVectorMaterialParameterStorage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedVectorMaterialParameterStorage,1> *)(*pcVar4)()
    ;
    return pTVar8;
  }
  (**(code **)(*(longlong *)__return_storage_ptr__->Object + 0x10))
            (__return_storage_ptr__->Object,param_1,this);
  pTVar10 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar9 = __return_storage_ptr__->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res18[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res18);
  if ((pTVar6 != (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!StorageImplementations.Contains(InStorageID)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateExtension.h"
                         ,0x71,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedVectorMaterialParameterStorage,1> *)(*pcVar4)()
    ;
    return pTVar8;
  }
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = (IPreAnimatedStorage *)pFVar9;
  local_38.SharedReferenceCount.ReferenceController = pTVar10;
  TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
  ::
  Emplace<UE::MovieScene::FPreAnimatedStorageID_const_&,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>
            (&this->StorageImplementations,local_res18,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

// FindStorage<UE::MovieScene::FPreAnimatedCameraCutStorage> @ 146889ed0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FPreAnimatedCameraCutStorage,1> * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::
FindStorage<UE::MovieScene::FPreAnimatedCameraCutStorage>
          (FPreAnimatedStateExtension *this,
          TSharedPtr<UE::MovieScene::FPreAnimatedCameraCutStorage,1> *__return_storage_ptr__,
          TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedCameraCutStorage> param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FPreAnimatedCameraCutStorage *pFVar2;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar3;
  FPreAnimatedStorageID local_res18 [4];
  
  local_res18[0].TypeID = (uint)param_1;
  pTVar3 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res18);
  if (pTVar3 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) {
    __return_storage_ptr__->Object = (FPreAnimatedCameraCutStorage *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return __return_storage_ptr__;
  }
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  pFVar2 = (FPreAnimatedCameraCutStorage *)pTVar3->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    __return_storage_ptr__->Object = pFVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = pFVar2;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetOrCreateStorage<UE::MovieScene::FPreAnimatedCVarStorage> @ 14688bd10

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FPreAnimatedCVarStorage,1> * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::
GetOrCreateStorage<UE::MovieScene::FPreAnimatedCVarStorage>
          (FPreAnimatedStateExtension *this,
          TSharedPtr<UE::MovieScene::FPreAnimatedCVarStorage,1> *__return_storage_ptr__,
          TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedCVarStorage> param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<UE::MovieScene::FPreAnimatedCVarStorage,1> *pTVar8;
  FPreAnimatedCVarStorage *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  FPreAnimatedStorageID local_res8 [2];
  FPreAnimatedStorageID local_res18 [2];
  TSharedPtr<UE::MovieScene::FPreAnimatedCVarStorage,1> local_48;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> local_38;
  
  local_res8[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res8);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) {
    __return_storage_ptr__->Object = (FPreAnimatedCVarStorage *)0x0;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7 = (pTVar6->SharedReferenceCount).ReferenceController;
    pFVar9 = (FPreAnimatedCVarStorage *)pTVar6->Object;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (__return_storage_ptr__->Object != (FPreAnimatedCVarStorage *)0x0) {
    return __return_storage_ptr__;
  }
  pTVar7 = ::operator_new(0xd8);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = (FPreAnimatedCVarStorage *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pFVar9 = (FPreAnimatedCVarStorage *)(pTVar7 + 1);
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFPreAnimatedCVarStorage_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar7[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[4]._padding_ = 0;
    pTVar7[6]._padding_ = 0;
    pTVar7[7]._padding_ = 0;
    pTVar7[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[9]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[0xd]._padding_ + 4) = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[3]._padding_ = 0;
    pTVar7[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[4].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[5]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[5]._padding_ + 4) = 0x80;
    pTVar7[5].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[8]._padding_ = 0;
    pTVar7[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[9].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[10]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[10]._padding_ + 4) = 0x80;
    pTVar7[10].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xb]._padding_ = 0;
    pTVar7[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc]._padding_ = 0;
    pTVar7[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0xd]._padding_ = 0xffffffff;
    pTVar7[1]._padding_ = (longlong)&___7FPreAnimatedCVarStorage_MovieScene_UE__6B_;
    pTVar10 = pTVar7;
    if (pFVar9 == (FPreAnimatedCVarStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedCVarStorage,1> *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_14688bf12;
    }
  }
  if (((*(longlong *)&pFVar9->field_0x8 == 0) || (*(longlong *)&pFVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->field_0x10 + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FPreAnimatedCVarStorage **)&pFVar9->field_0x8 = pFVar9;
    if (pTVar10 != *(TReferenceControllerBase<1> **)&pFVar9->field_0x10) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar9->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar9->field_0x10 = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_14688bf12:
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pFVar9;
  local_48.SharedReferenceCount.ReferenceController = pTVar10;
  if (__return_storage_ptr__ != &local_48) {
    __return_storage_ptr__->Object = pFVar9;
    local_48.Object = (FPreAnimatedCVarStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&local_48.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if ((__return_storage_ptr__->Object == (FPreAnimatedCVarStorage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedCVarStorage,1> *)(*pcVar4)();
    return pTVar8;
  }
  (**(code **)(*(longlong *)__return_storage_ptr__->Object + 0x10))
            (__return_storage_ptr__->Object,param_1,this);
  pTVar10 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar9 = __return_storage_ptr__->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res18[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res18);
  if ((pTVar6 != (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!StorageImplementations.Contains(InStorageID)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateExtension.h"
                         ,0x71,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedCVarStorage,1> *)(*pcVar4)();
    return pTVar8;
  }
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = (IPreAnimatedStorage *)pFVar9;
  local_38.SharedReferenceCount.ReferenceController = pTVar10;
  TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
  ::
  Emplace<UE::MovieScene::FPreAnimatedStorageID_const_&,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>
            (&this->StorageImplementations,local_res18,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

// GetOrCreateStorage<UE::MovieScene::FPreAnimatedCameraCutStorage> @ 14688c050

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FPreAnimatedCameraCutStorage,1> * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::
GetOrCreateStorage<UE::MovieScene::FPreAnimatedCameraCutStorage>
          (FPreAnimatedStateExtension *this,
          TSharedPtr<UE::MovieScene::FPreAnimatedCameraCutStorage,1> *__return_storage_ptr__,
          TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedCameraCutStorage> param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedPtr<UE::MovieScene::FPreAnimatedCameraCutStorage,1> *pTVar7;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar8;
  FPreAnimatedCameraCutStorage *pFVar9;
  FPreAnimatedStorageID local_res10 [2];
  TSharedPtr<UE::MovieScene::FPreAnimatedCameraCutStorage,1> local_48;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> local_38;
  
  FindStorage<UE::MovieScene::FPreAnimatedCameraCutStorage>(this,__return_storage_ptr__,param_1);
  if (__return_storage_ptr__->Object != (FPreAnimatedCameraCutStorage *)0x0) {
    return __return_storage_ptr__;
  }
  pTVar6 = ::operator_new(0xd8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = (FPreAnimatedCameraCutStorage *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pFVar9 = (FPreAnimatedCameraCutStorage *)(pTVar6 + 1);
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFPreAnimatedCameraCutStorage_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar6[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[4]._padding_ = 0;
    pTVar6[6]._padding_ = 0;
    pTVar6[7]._padding_ = 0;
    pTVar6[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[9]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar6[0xd]._padding_ + 4) = 0;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[2]._padding_ = 0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[3]._padding_ = 0;
    pTVar6[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[4].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[5]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar6[5]._padding_ + 4) = 0x80;
    pTVar6[5].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar6[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[8]._padding_ = 0;
    pTVar6[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[9].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[10]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar6[10]._padding_ + 4) = 0x80;
    pTVar6[10].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar6[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0xb]._padding_ = 0;
    pTVar6[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0xc]._padding_ = 0;
    pTVar6[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0xc].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0xd]._padding_ = 0xffffffff;
    pTVar6[1]._padding_ = (longlong)&___7FPreAnimatedCameraCutStorage_MovieScene_UE__6B_;
    if (pFVar9 == (FPreAnimatedCameraCutStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedPtr<UE::MovieScene::FPreAnimatedCameraCutStorage,1> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14688c209;
    }
  }
  if (((*(longlong *)&pFVar9->field_0x8 == 0) || (*(longlong *)&pFVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->field_0x10 + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FPreAnimatedCameraCutStorage **)&pFVar9->field_0x8 = pFVar9;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pFVar9->field_0x10) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar9->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar9->field_0x10 = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14688c209:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pFVar9;
  local_48.SharedReferenceCount.ReferenceController = pTVar6;
  if (__return_storage_ptr__ != &local_48) {
    __return_storage_ptr__->Object = pFVar9;
    local_48.Object = (FPreAnimatedCameraCutStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&local_48.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((__return_storage_ptr__->Object == (FPreAnimatedCameraCutStorage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<UE::MovieScene::FPreAnimatedCameraCutStorage,1> *)(*pcVar4)();
    return pTVar7;
  }
  (**(code **)(*(longlong *)__return_storage_ptr__->Object + 0x10))
            (__return_storage_ptr__->Object,param_1,this);
  pTVar6 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar9 = __return_storage_ptr__->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res10[0].TypeID = (uint)param_1;
  pTVar8 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res10);
  if ((pTVar8 != (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!StorageImplementations.Contains(InStorageID)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateExtension.h"
                         ,0x71,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<UE::MovieScene::FPreAnimatedCameraCutStorage,1> *)(*pcVar4)();
    return pTVar7;
  }
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = (IPreAnimatedStorage *)pFVar9;
  local_38.SharedReferenceCount.ReferenceController = pTVar6;
  TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
  ::
  Emplace<UE::MovieScene::FPreAnimatedStorageID_const_&,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>
            (&this->StorageImplementations,local_res10,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// GetOrCreateStorage<UE::MovieScene::FPreAnimatedVisibilityStorage> @ 14688c350

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FPreAnimatedVisibilityStorage,1> * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::
GetOrCreateStorage<UE::MovieScene::FPreAnimatedVisibilityStorage>
          (FPreAnimatedStateExtension *this,
          TSharedPtr<UE::MovieScene::FPreAnimatedVisibilityStorage,1> *__return_storage_ptr__,
          TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedVisibilityStorage> param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<UE::MovieScene::FPreAnimatedVisibilityStorage,1> *pTVar8;
  FPreAnimatedVisibilityStorage *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  FPreAnimatedStorageID local_res8 [2];
  FPreAnimatedStorageID local_res18 [2];
  TSharedPtr<UE::MovieScene::FPreAnimatedVisibilityStorage,1> local_48;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> local_38;
  
  local_res8[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res8);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) {
    __return_storage_ptr__->Object = (FPreAnimatedVisibilityStorage *)0x0;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7 = (pTVar6->SharedReferenceCount).ReferenceController;
    pFVar9 = (FPreAnimatedVisibilityStorage *)pTVar6->Object;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      __return_storage_ptr__->Object = pFVar9;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (__return_storage_ptr__->Object != (FPreAnimatedVisibilityStorage *)0x0) {
    return __return_storage_ptr__;
  }
  pTVar7 = ::operator_new(0xf0);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = (FPreAnimatedVisibilityStorage *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pFVar9 = (FPreAnimatedVisibilityStorage *)(pTVar7 + 1);
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFPreAnimatedVisibilityStorage_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar7[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[4]._padding_ = 0;
    pTVar7[6]._padding_ = 0;
    pTVar7[7]._padding_ = 0;
    pTVar7[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[9]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[0xd]._padding_ + 4) = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[3]._padding_ = 0;
    pTVar7[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[4].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[5]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[5]._padding_ + 4) = 0x80;
    pTVar7[5].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[8]._padding_ = 0;
    pTVar7[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[9].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[10]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[10]._padding_ + 4) = 0x80;
    pTVar7[10].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[1]._padding_ =
         (longlong)
         &FPreAnimatedVisibilityStorage::
          _vftable__for__UE__MovieScene__TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedVisibilityTraits>__
    ;
    *(undefined ***)&pTVar7[0xe].SharedReferenceCount =
         &FPreAnimatedVisibilityStorage::
          _vftable__for__UE__MovieScene__IPreAnimatedObjectEntityStorage__;
    pTVar7[0xb]._padding_ = 0;
    pTVar7[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc]._padding_ = 0;
    pTVar7[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0xd]._padding_ = 0xffffffff;
    pTVar7[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xe]._padding_ = 0;
    pTVar10 = pTVar7;
    if (pFVar9 == (FPreAnimatedVisibilityStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedVisibilityStorage,1> *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_14688c56e;
    }
  }
  if (((*(longlong *)&pFVar9->field_0x8 == 0) || (*(longlong *)&pFVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->field_0x10 + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FPreAnimatedVisibilityStorage **)&pFVar9->field_0x8 = pFVar9;
    if (pTVar10 != *(TReferenceControllerBase<1> **)&pFVar9->field_0x10) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar9->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar9->field_0x10 = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_14688c56e:
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pFVar9;
  local_48.SharedReferenceCount.ReferenceController = pTVar10;
  if (__return_storage_ptr__ != &local_48) {
    __return_storage_ptr__->Object = pFVar9;
    local_48.Object = (FPreAnimatedVisibilityStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&local_48.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if ((__return_storage_ptr__->Object == (FPreAnimatedVisibilityStorage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedVisibilityStorage,1> *)(*pcVar4)();
    return pTVar8;
  }
  (**(code **)(*(longlong *)__return_storage_ptr__->Object + 0x10))
            (__return_storage_ptr__->Object,param_1,this);
  pTVar10 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar9 = __return_storage_ptr__->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res18[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res18);
  if ((pTVar6 != (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!StorageImplementations.Contains(InStorageID)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateExtension.h"
                         ,0x71,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedVisibilityStorage,1> *)(*pcVar4)();
    return pTVar8;
  }
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = (IPreAnimatedStorage *)pFVar9;
  local_38.SharedReferenceCount.ReferenceController = pTVar10;
  TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
  ::
  Emplace<UE::MovieScene::FPreAnimatedStorageID_const_&,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>
            (&this->StorageImplementations,local_res18,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

