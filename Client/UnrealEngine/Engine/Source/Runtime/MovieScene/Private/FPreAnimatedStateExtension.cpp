// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 54

// FindGroupManager<UE::MovieScene::FPreAnimatedObjectGroupManager> @ 1461700d0

/* WARNING: Removing unreachable block (ram,0x0001461701a5) */
/* WARNING: Removing unreachable block (ram,0x0001461701af) */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FPreAnimatedObjectGroupManager,1> * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::
FindGroupManager<UE::MovieScene::FPreAnimatedObjectGroupManager>
          (FPreAnimatedStateExtension *this,
          TSharedPtr<UE::MovieScene::FPreAnimatedObjectGroupManager,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  FPreAnimatedObjectGroupManager *pFVar7;
  bool bVar8;
  
  pTVar4 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->GroupManagers,
                  (FPreAnimatedStorageID *)&FPreAnimatedObjectGroupManager::GroupManagerID);
  if (pTVar4 == (TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1> *)0x0) {
    pFVar7 = (FPreAnimatedObjectGroupManager *)0x0;
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5 = (pTVar4->WeakReferenceCount).ReferenceController;
    pFVar7 = (FPreAnimatedObjectGroupManager *)pTVar4->Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar6 = pTVar5;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
LAB_14617017a:
    __return_storage_ptr__->Object = (FPreAnimatedObjectGroupManager *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) goto LAB_14617018e;
  }
  else {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) goto LAB_14617017a;
    __return_storage_ptr__->Object = pFVar7;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
  }
  LOCK();
  pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
  UNLOCK();
LAB_14617018e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// FindStorage<UE::MovieScene::FAnimTypePreAnimatedStateObjectStorage> @ 146170f60

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FAnimTypePreAnimatedStateObjectStorage,1> * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::
FindStorage<UE::MovieScene::FAnimTypePreAnimatedStateObjectStorage>
          (FPreAnimatedStateExtension *this,
          TSharedPtr<UE::MovieScene::FAnimTypePreAnimatedStateObjectStorage,1>
          *__return_storage_ptr__,
          TPreAnimatedStorageID<UE::MovieScene::FAnimTypePreAnimatedStateObjectStorage> param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FAnimTypePreAnimatedStateObjectStorage *pFVar2;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar3;
  FPreAnimatedStorageID local_res18 [4];
  
  local_res18[0].TypeID = (uint)param_1;
  pTVar3 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res18);
  if (pTVar3 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) {
    __return_storage_ptr__->Object = (FAnimTypePreAnimatedStateObjectStorage *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return __return_storage_ptr__;
  }
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  pFVar2 = (FAnimTypePreAnimatedStateObjectStorage *)pTVar3->Object;
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

// GetOrCreateGroupManager<UE::MovieScene::FPreAnimatedObjectGroupManager> @ 146171480

/* WARNING: Removing unreachable block (ram,0x000146171556) */
/* WARNING: Removing unreachable block (ram,0x000146171563) */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FPreAnimatedObjectGroupManager,1> * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::
GetOrCreateGroupManager<UE::MovieScene::FPreAnimatedObjectGroupManager>
          (FPreAnimatedStateExtension *this,
          TSharedPtr<UE::MovieScene::FPreAnimatedObjectGroupManager,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  atomic<int> aVar7;
  TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1> *pTVar8;
  FPreAnimatedObjectGroupManager *pFVar9;
  TSharedPtr<UE::MovieScene::FPreAnimatedObjectGroupManager,1> *pTVar10;
  FPreAnimatedObjectGroupManager *pFVar11;
  FSharedReferencer<1> FVar12;
  FPreAnimatedObjectGroupManager *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  bool bVar15;
  FSharedReferencer<1> FStack_40;
  undefined8 local_38;
  FSharedReferencer<1> local_30;
  TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1> local_28;
  
  pTVar8 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->GroupManagers,
                  (FPreAnimatedStorageID *)&FPreAnimatedObjectGroupManager::GroupManagerID);
  if (pTVar8 == (TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1> *)0x0) {
    pFVar9 = (FPreAnimatedObjectGroupManager *)0x0;
    pTVar14 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar14 = (pTVar8->WeakReferenceCount).ReferenceController;
    pFVar9 = (FPreAnimatedObjectGroupManager *)pTVar8->Object;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
      UNLOCK();
    }
  }
  pFVar11 = (FPreAnimatedObjectGroupManager *)0x0;
  FVar12.ReferenceController = pTVar14;
  pFVar13 = pFVar11;
  FStack_40.ReferenceController = pTVar14;
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar14->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar7 = pTVar14->SharedReferenceCount;
      bVar15 = aVar3 == aVar7;
      if (bVar15) {
        pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar7 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar7;
    } while (!bVar15);
    FVar12.ReferenceController = FStack_40.ReferenceController;
    LOCK();
    paVar1 = &pTVar14->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar14->_padding_ + 8))(pTVar14,1);
    }
    if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      pFVar13 = pFVar9;
    }
  }
  if (pFVar13 != (FPreAnimatedObjectGroupManager *)0x0) goto LAB_1461717b3;
  pFVar9 = ::operator_new(0xd0);
  if (pFVar9 == (FPreAnimatedObjectGroupManager *)0x0) {
    pFVar13 = (FPreAnimatedObjectGroupManager *)&DAT_00000010;
LAB_146171689:
    if (((*(longlong *)&pFVar13->field_0x8 == 0) || (*(longlong *)&pFVar13->field_0x10 == 0)) ||
       (*(int *)(*(longlong *)&pFVar13->field_0x10 + 8) < 1)) {
      if (pFVar11 != (FPreAnimatedObjectGroupManager *)0x0) {
        LOCK();
        *(int *)&pFVar11->field_0x8 = *(int *)&pFVar11->field_0x8 + 1;
        UNLOCK();
      }
      *(FPreAnimatedObjectGroupManager **)&pFVar13->field_0x8 = pFVar13;
      if (pFVar11 != *(FPreAnimatedObjectGroupManager **)&pFVar13->field_0x10) {
        if (pFVar11 != (FPreAnimatedObjectGroupManager *)0x0) {
          LOCK();
          *(int *)&pFVar11->field_0xc = *(int *)&pFVar11->field_0xc + 1;
          UNLOCK();
        }
        plVar5 = *(longlong **)&pFVar13->field_0x10;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
        *(FPreAnimatedObjectGroupManager **)&pFVar13->field_0x10 = pFVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar11);
    }
  }
  else {
    *(undefined4 *)&pFVar9->field_0x8 = 1;
    pFVar13 = (FPreAnimatedObjectGroupManager *)&pFVar9->field_0x10;
    *(undefined4 *)&pFVar9->field_0xc = 1;
    *(undefined ***)&pFVar9->field_0x0 =
         &
         ___7__TIntrusiveReferenceController_UFPreAnimatedObjectGroupManager_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    *(undefined8 *)&pFVar9->field_0x38 = 0;
    *(undefined8 *)&pFVar9->field_0x40 = 0;
    *(undefined8 *)&pFVar9->field_0x60 = 0;
    *(undefined8 *)&pFVar9->field_0x70 = 0;
    *(undefined8 *)&pFVar9->field_0x88 = 0;
    *(undefined8 *)&pFVar9->field_0x90 = 0;
    *(undefined8 *)&pFVar9->field_0xb0 = 0;
    *(undefined8 *)(&pFVar9[1].field_0x0 + 4) = 0;
    *(undefined4 *)&pFVar9[1].field_0xc = 0;
    *(undefined8 *)&pFVar9->field_0x18 = 0;
    *(undefined8 *)&pFVar9->field_0x20 = 0;
    *(undefined8 *)&pFVar9->field_0x28 = 0;
    *(undefined8 *)&pFVar9->field_0x30 = 0;
    *(undefined8 *)&pFVar9->field_0x48 = 0;
    *(undefined4 *)&pFVar9->field_0x50 = 0;
    *(undefined4 *)&pFVar9->field_0x54 = 0x80;
    *(undefined4 *)&pFVar9->field_0x58 = 0xffffffff;
    *(undefined4 *)&pFVar9->field_0x5c = 0;
    *(undefined8 *)&pFVar9->field_0x68 = 0;
    *(undefined8 *)&pFVar9->field_0x78 = 0;
    *(undefined8 *)&pFVar9->field_0x80 = 0;
    *(undefined8 *)&pFVar9->field_0x98 = 0;
    *(undefined4 *)&pFVar9->field_0xa0 = 0;
    *(undefined4 *)&pFVar9->field_0xa4 = 0x80;
    *(undefined4 *)&pFVar9->field_0xa8 = 0xffffffff;
    *(undefined4 *)&pFVar9->field_0xac = 0;
    *(undefined8 *)&pFVar9->field_0xb8 = 0;
    *(undefined4 *)&pFVar9[1].field_0x0 = 0;
    *(undefined ***)&pFVar9->field_0x10 = &___7FPreAnimatedObjectGroupManager_MovieScene_UE__6B_;
    pFVar11 = pFVar9;
    if (pFVar13 != (FPreAnimatedObjectGroupManager *)0x0) goto LAB_146171689;
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x246,L"");
    if (bVar15) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedPtr<UE::MovieScene::FPreAnimatedObjectGroupManager,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  if (pFVar11 != (FPreAnimatedObjectGroupManager *)0x0) {
    LOCK();
    *(int *)&pFVar11->field_0x8 = *(int *)&pFVar11->field_0x8 + 1;
    UNLOCK();
  }
  local_38 = 0;
  local_30.ReferenceController = (TReferenceControllerBase<1> *)pFVar11;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_40,&local_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar11);
  if ((pFVar13 == (FPreAnimatedObjectGroupManager *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TSharedPtr<UE::MovieScene::FPreAnimatedObjectGroupManager,1> *)(*pcVar6)();
    return pTVar10;
  }
  (**(code **)(*(longlong *)&pFVar13->field_0x0 + 8))(pFVar13,this);
  FVar12.ReferenceController = FStack_40.ReferenceController;
  local_28.WeakReferenceCount.ReferenceController = FStack_40.ReferenceController;
  if (FStack_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_40.ReferenceController)->WeakReferenceCount =
         (atomic<int>)((int)(FStack_40.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = (IPreAnimatedStateGroupManager *)pFVar13;
  TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
  ::
  Emplace<UE::MovieScene::FPreAnimatedStorageID_const_&,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>_>
            (&this->GroupManagers,
             (FPreAnimatedStorageID *)&FPreAnimatedObjectGroupManager::GroupManagerID,&local_28);
  if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_28.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_28.WeakReferenceCount.ReferenceController,1);
    }
  }
LAB_1461717b3:
  __return_storage_ptr__->Object = pFVar13;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar12.ReferenceController;
  if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar12.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  return __return_storage_ptr__;
}

// GetOrCreateStorage<UE::MovieScene::FAnimTypePreAnimatedStateObjectStorage> @ 146171800

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FAnimTypePreAnimatedStateObjectStorage,1> * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::
GetOrCreateStorage<UE::MovieScene::FAnimTypePreAnimatedStateObjectStorage>
          (FPreAnimatedStateExtension *this,
          TSharedPtr<UE::MovieScene::FAnimTypePreAnimatedStateObjectStorage,1>
          *__return_storage_ptr__,
          TPreAnimatedStorageID<UE::MovieScene::FAnimTypePreAnimatedStateObjectStorage> param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedPtr<UE::MovieScene::FAnimTypePreAnimatedStateObjectStorage,1> *pTVar7;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar8;
  FAnimTypePreAnimatedStateObjectStorage *pFVar9;
  FPreAnimatedStorageID local_res10 [2];
  TSharedPtr<UE::MovieScene::FAnimTypePreAnimatedStateObjectStorage,1> local_48;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> local_38;
  
  FindStorage<UE::MovieScene::FAnimTypePreAnimatedStateObjectStorage>
            (this,__return_storage_ptr__,param_1);
  if (__return_storage_ptr__->Object != (FAnimTypePreAnimatedStateObjectStorage *)0x0) {
    return __return_storage_ptr__;
  }
  pTVar6 = ::operator_new(0xe8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = (FAnimTypePreAnimatedStateObjectStorage *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pFVar9 = (FAnimTypePreAnimatedStateObjectStorage *)(pTVar6 + 1);
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFAnimTypePreAnimatedStateObjectStorage_MovieScene_UE___00_SharedPointerInternals__6B_
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
    pTVar6[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0xe]._padding_ = 0;
    pTVar6[1]._padding_ = (longlong)&___7FAnimTypePreAnimatedStateObjectStorage_MovieScene_UE__6B_;
    if (pFVar9 == (FAnimTypePreAnimatedStateObjectStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedPtr<UE::MovieScene::FAnimTypePreAnimatedStateObjectStorage,1> *)(*pcVar4)()
        ;
        return pTVar7;
      }
      goto LAB_1461719c7;
    }
  }
  if (((*(longlong *)&pFVar9->field_0x8 == 0) || (*(longlong *)&pFVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->field_0x10 + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FAnimTypePreAnimatedStateObjectStorage **)&pFVar9->field_0x8 = pFVar9;
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
LAB_1461719c7:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pFVar9;
  local_48.SharedReferenceCount.ReferenceController = pTVar6;
  if (__return_storage_ptr__ != &local_48) {
    __return_storage_ptr__->Object = pFVar9;
    local_48.Object = (FAnimTypePreAnimatedStateObjectStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&local_48.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((__return_storage_ptr__->Object == (FAnimTypePreAnimatedStateObjectStorage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<UE::MovieScene::FAnimTypePreAnimatedStateObjectStorage,1> *)(*pcVar4)();
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
    pTVar7 = (TSharedPtr<UE::MovieScene::FAnimTypePreAnimatedStateObjectStorage,1> *)(*pcVar4)();
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

// GetOrCreateStorage<UE::MovieScene::FAnimTypePreAnimatedStateRootStorage> @ 146171b10

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FAnimTypePreAnimatedStateRootStorage,1> * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::
GetOrCreateStorage<UE::MovieScene::FAnimTypePreAnimatedStateRootStorage>
          (FPreAnimatedStateExtension *this,
          TSharedPtr<UE::MovieScene::FAnimTypePreAnimatedStateRootStorage,1> *__return_storage_ptr__
          ,TPreAnimatedStorageID<UE::MovieScene::FAnimTypePreAnimatedStateRootStorage> param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<UE::MovieScene::FAnimTypePreAnimatedStateRootStorage,1> *pTVar8;
  FAnimTypePreAnimatedStateRootStorage *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  FPreAnimatedStorageID local_res8 [2];
  FPreAnimatedStorageID local_res18 [2];
  TSharedPtr<UE::MovieScene::FAnimTypePreAnimatedStateRootStorage,1> local_48;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> local_38;
  
  local_res8[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res8);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) {
    __return_storage_ptr__->Object = (FAnimTypePreAnimatedStateRootStorage *)0x0;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7 = (pTVar6->SharedReferenceCount).ReferenceController;
    pFVar9 = (FAnimTypePreAnimatedStateRootStorage *)pTVar6->Object;
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
  if (__return_storage_ptr__->Object != (FAnimTypePreAnimatedStateRootStorage *)0x0) {
    return __return_storage_ptr__;
  }
  pTVar7 = ::operator_new(0xd8);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = (FAnimTypePreAnimatedStateRootStorage *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pFVar9 = (FAnimTypePreAnimatedStateRootStorage *)(pTVar7 + 1);
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFAnimTypePreAnimatedStateRootStorage_MovieScene_UE___00_SharedPointerInternals__6B_
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
    pTVar7[1]._padding_ = (longlong)&___7FAnimTypePreAnimatedStateRootStorage_MovieScene_UE__6B_;
    pTVar10 = pTVar7;
    if (pFVar9 == (FAnimTypePreAnimatedStateRootStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<UE::MovieScene::FAnimTypePreAnimatedStateRootStorage,1> *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_146171d12;
    }
  }
  if (((*(longlong *)&pFVar9->field_0x8 == 0) || (*(longlong *)&pFVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->field_0x10 + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FAnimTypePreAnimatedStateRootStorage **)&pFVar9->field_0x8 = pFVar9;
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
LAB_146171d12:
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pFVar9;
  local_48.SharedReferenceCount.ReferenceController = pTVar10;
  if (__return_storage_ptr__ != &local_48) {
    __return_storage_ptr__->Object = pFVar9;
    local_48.Object = (FAnimTypePreAnimatedStateRootStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&local_48.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if ((__return_storage_ptr__->Object == (FAnimTypePreAnimatedStateRootStorage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FAnimTypePreAnimatedStateRootStorage,1> *)(*pcVar4)();
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
    pTVar8 = (TSharedPtr<UE::MovieScene::FAnimTypePreAnimatedStateRootStorage,1> *)(*pcVar4)();
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

// FPreAnimatedStateExtension @ 1461819a0

/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedStateExtension * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::FPreAnimatedStateExtension
          (FPreAnimatedStateExtension *this)

{
  (this->EntityCaptureSource).Ptr = (FPreAnimatedEntityCaptureSource *)0x0;
  (this->TrackInstanceCaptureSource).Ptr = (FPreAnimatedTrackInstanceCaptureSources *)0x0;
  (this->TrackInstanceInputCaptureSource).Ptr = (FPreAnimatedTrackInstanceInputCaptureSources *)0x0;
  (this->TemplateCaptureSource).Ptr = (FPreAnimatedTemplateCaptureSources *)0x0;
  (this->EvaluationHookCaptureSource).Ptr = (FPreAnimatedEvaluationHookCaptureSources *)0x0;
  (this->WeakExternalCaptureSources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeakExternalCaptureSources).ArrayNum = 0;
  (this->WeakExternalCaptureSources).ArrayMax = 0;
  (this->WeakGenericObjectStorage).Object = (FAnimTypePreAnimatedStateObjectStorage *)0x0;
  (this->WeakGenericObjectStorage).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WeakGenericRootStorage).Object = (FAnimTypePreAnimatedStateRootStorage *)0x0;
  (this->WeakGenericRootStorage).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->GroupMetaData = 0;
  *(undefined8 *)&(this->GroupMetaData).field_0x8 = 0;
  *(undefined8 *)&(this->GroupMetaData).field_0x20 = 0;
  this->NumRequestsForGlobalState = 0;
  *(undefined4 *)&(this->GroupMetaData).field_0x28 = 0;
  *(undefined4 *)&(this->GroupMetaData).field_0x2c = 0x80;
  *(undefined4 *)&(this->GroupMetaData).field_0x34 = 0;
  *(undefined4 *)&(this->GroupMetaData).field_0x30 = 0xffffffff;
  *(undefined8 *)&this->UngroupedMetaData = 0;
  *(undefined8 *)&(this->UngroupedMetaData).field_0x8 = 0;
  *(undefined8 *)&(this->UngroupedMetaData).field_0x20 = 0;
  *(undefined4 *)&(this->UngroupedMetaData).field_0x28 = 0;
  *(undefined4 *)&(this->UngroupedMetaData).field_0x2c = 0x80;
  *(undefined4 *)&(this->UngroupedMetaData).field_0x34 = 0;
  *(undefined4 *)&(this->UngroupedMetaData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->UngroupedMetaData).field_0x40 = 0;
  *(undefined4 *)&(this->UngroupedMetaData).field_0x48 = 0;
  (this->StorageImplementations).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StorageImplementations).Pairs.ArrayNum = 0;
  (this->StorageImplementations).Pairs.ArrayMax = 0;
  (this->GroupManagers).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupManagers).Pairs.ArrayNum = 0;
  (this->GroupManagers).Pairs.ArrayMax = 0;
  this->Linker = (UMovieSceneEntitySystemLinker *)0x0;
  this->bEntriesInvalidated = false;
  return this;
}

// ~FPreAnimatedStateExtension @ 146185820

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedStateExtension::~FPreAnimatedStateExtension
          (FPreAnimatedStateExtension *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  TReferenceControllerBase<1> *pTVar5;
  FPreAnimatedEvaluationHookCaptureSources *pFVar6;
  FPreAnimatedTemplateCaptureSources *pFVar7;
  FPreAnimatedTrackInstanceInputCaptureSources *pFVar8;
  FPreAnimatedTrackInstanceCaptureSources *pFVar9;
  FPreAnimatedEntityCaptureSource *pFVar10;
  
  DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageID,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>_>,int>
            ((TTuple<UE::MovieScene::FPreAnimatedStorageID,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>_>
              *)(this->GroupManagers).Pairs.AllocatorInstance.Data,
             (this->GroupManagers).Pairs.ArrayNum);
  pFVar3 = (this->GroupManagers).Pairs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>,int>
            ((TTuple<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>
              *)(this->StorageImplementations).Pairs.AllocatorInstance.Data,
             (this->StorageImplementations).Pairs.ArrayNum);
  pFVar3 = (this->StorageImplementations).Pairs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->UngroupedMetaData).field_0x48 = 0;
  pvVar4 = *(void **)&(this->UngroupedMetaData).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UngroupedMetaData);
  TSparseArray<UE::MovieScene::FPreAnimatedStateExtension::FPreAnimatedGroupMetaData,FDefaultSparseArrayAllocator>
  ::
  ~TSparseArray<UE::MovieScene::FPreAnimatedStateExtension::FPreAnimatedGroupMetaData,FDefaultSparseArrayAllocator>
            (&this->GroupMetaData);
  pTVar5 = (this->WeakGenericRootStorage).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  pTVar5 = (this->WeakGenericObjectStorage).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  DestructItems<TWeakPtr<UE::MovieScene::IPreAnimatedCaptureSource,1>,int>
            ((TWeakPtr<UE::MovieScene::IPreAnimatedCaptureSource,1> *)
             (this->WeakExternalCaptureSources).AllocatorInstance.Data,
             (this->WeakExternalCaptureSources).ArrayNum);
  pFVar3 = (this->WeakExternalCaptureSources).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar6 = (this->EvaluationHookCaptureSource).Ptr;
  if (pFVar6 != (FPreAnimatedEvaluationHookCaptureSources *)0x0) {
    (*(code *)**(undefined8 **)pFVar6)(pFVar6,1);
  }
  pFVar7 = (this->TemplateCaptureSource).Ptr;
  if (pFVar7 != (FPreAnimatedTemplateCaptureSources *)0x0) {
    (*(code *)**(undefined8 **)pFVar7)(pFVar7,1);
  }
  pFVar8 = (this->TrackInstanceInputCaptureSource).Ptr;
  if (pFVar8 != (FPreAnimatedTrackInstanceInputCaptureSources *)0x0) {
    (*(code *)**(undefined8 **)pFVar8)(pFVar8,1);
  }
  pFVar9 = (this->TrackInstanceCaptureSource).Ptr;
  if (pFVar9 != (FPreAnimatedTrackInstanceCaptureSources *)0x0) {
    (*(code *)**(undefined8 **)pFVar9)(pFVar9,1);
  }
  pFVar10 = (this->EntityCaptureSource).Ptr;
  if (pFVar10 != (FPreAnimatedEntityCaptureSource *)0x0) {
    (*(code *)**(undefined8 **)pFVar10)(pFVar10,1);
  }
  return;
}

// AddMetaData @ 14618e3f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedStateExtension::AddMetaData
          (FPreAnimatedStateExtension *this,FPreAnimatedStateMetaData *param_1)

{
  FAggregatePreAnimatedStateMetaData *pFVar1;
  
  pFVar1 = GetOrAddMetaDataInternal(this,&param_1->Entry);
  pFVar1->NumContributors = pFVar1->NumContributors + 1;
  if (param_1->bWantsRestoreState != false) {
    pFVar1->NumRestoreContributors = pFVar1->NumRestoreContributors + 1;
    pFVar1->bWantedRestore = true;
  }
  return;
}

// AddReferencedObjects @ 14618f170

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedStateExtension::AddReferencedObjects
          (FPreAnimatedStateExtension *this,UMovieSceneEntitySystemLinker *param_1,
          FReferenceCollector *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar2 = (this->StorageImplementations).Pairs.ArrayNum;
  pFVar5 = (this->StorageImplementations).Pairs.AllocatorInstance.Data;
  pFVar1 = pFVar5 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->StorageImplementations).Pairs.ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    if (*(longlong *)(pFVar5 + 8) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (**(code **)(**(longlong **)(pFVar5 + 8) + 0x40))(*(longlong **)(pFVar5 + 8),param_2);
    pFVar5 = pFVar5 + 0x18;
  }
  return;
}

// AddSourceMetaData @ 14618fc20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedStateExtension::AddSourceMetaData
          (FPreAnimatedStateExtension *this,FPreAnimatedStateEntry *param_1)

{
  FScopedPreAnimatedCaptureSource *this_00;
  UMovieSceneEntitySystemLinker *pUVar1;
  FInstanceRegistry *pFVar2;
  FScopedPreAnimatedCaptureSource *pFVar3;
  undefined1 local_res18 [16];
  FPreAnimatedStateMetaData local_28;
  
  this_00 = *(FScopedPreAnimatedCaptureSource **)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xee8
             );
  if (this_00 != (FScopedPreAnimatedCaptureSource *)0x0) {
    pUVar1 = (UMovieSceneEntitySystemLinker *)FWeakObjectPtr::Get(&(this_00->WeakLinker).WeakPtr);
    if (pUVar1 != this->Linker) {
      `UE::MovieScene::FPreAnimatedStateExtension::AddSourceMetaData'::__l2::<lambda_1>::operator()
                (local_res18);
    }
    local_28.Entry.ValueHandle.StorageIndex.Value = (param_1->ValueHandle).StorageIndex.Value;
    local_28.Entry.GroupHandle.Value = (param_1->GroupHandle).Value;
    local_28.Entry.ValueHandle.TypeID.TypeID = (param_1->ValueHandle).TypeID.TypeID;
    local_28.RootInstanceHandle = (FRootInstanceHandle)0xffff;
    if (*(short *)&this_00->RootInstanceHandle == -1) {
      pFVar3 = this_00;
      if ((this_00->Variant).TypeIndex != '\x03') {
        pFVar3 = (FScopedPreAnimatedCaptureSource *)0x0;
      }
      if (pFVar3 != (FScopedPreAnimatedCaptureSource *)0x0) {
        pFVar2 = UMovieSceneEntitySystemLinker::GetInstanceRegistry(this->Linker);
        local_28.RootInstanceHandle =
             *(FRootInstanceHandle *)
              ((ulonglong)(ushort)(pFVar3->Variant)._padding_ * 0x140 + 0x13a +
              *(longlong *)&pFVar2->Instances);
      }
    }
    else {
      local_28.RootInstanceHandle = this_00->RootInstanceHandle;
    }
    local_28.bWantsRestoreState = this_00->bWantsRestoreState;
    FScopedPreAnimatedCaptureSource::BeginTracking(this_00,&local_28,this->Linker);
    return;
  }
  GetOrAddMetaDataInternal(this,param_1);
  return;
}

// AddWeakCaptureSource @ 1461918f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedStateExtension::AddWeakCaptureSource
          (FPreAnimatedStateExtension *this,
          TWeakPtr<UE::MovieScene::IPreAnimatedCaptureSource,1> *param_1)

{
  TArray<TWeakPtr<UE::MovieScene::IPreAnimatedCaptureSource,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  atomic<int> *paVar3;
  atomic<int> aVar4;
  TWeakPtr<UE::MovieScene::IPreAnimatedCaptureSource,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  
  pTVar1 = &this->WeakExternalCaptureSources;
  pTVar5 = (TWeakPtr<UE::MovieScene::IPreAnimatedCaptureSource,1> *)(pTVar1->AllocatorInstance).Data
  ;
  if ((pTVar5 <= param_1) && (param_1 < pTVar5 + (this->WeakExternalCaptureSources).ArrayMax)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar9 = (this->WeakExternalCaptureSources).ArrayNum;
  piVar2 = &(this->WeakExternalCaptureSources).ArrayMax;
  if (iVar9 == *piVar2) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->WeakExternalCaptureSources).ArrayNum = iVar9 + 1;
  pFVar10 = (pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
  *(IPreAnimatedCaptureSource **)pFVar10 = param_1->Object;
  pTVar6 = (param_1->WeakReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar10 + 8) = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar3 = &pTVar6->WeakReferenceCount;
    aVar4 = *paVar3;
    *paVar3 = (atomic<int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  return;
}

// AllocateGroup @ 146191fc0

/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedStorageGroupHandle __thiscall
UE::MovieScene::FPreAnimatedStateExtension::AllocateGroup
          (FPreAnimatedStateExtension *this,
          TSharedPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1> *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  undefined8 *in_R8;
  FSparseArrayAllocationInfo local_a8 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  pTVar6 = (TReferenceControllerBase<1> *)in_R8[1];
  uVar3 = *in_R8;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  iVar1 = *(int *)&(this->GroupMetaData).field_0x34;
  if (iVar1 == 0) {
    iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x70,8,1,(ForAnyElementType *)&this->GroupMetaData,
                       (int *)&(this->GroupMetaData).field_0x8,
                       (int *)&(this->GroupMetaData).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->GroupMetaData).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->GroupMetaData).field_0x30;
    iVar1 = iVar1 + -1;
    lVar4 = *(longlong *)&this->GroupMetaData;
    iVar2 = *(int *)((longlong)iVar5 * 0x70 + 4 + lVar4);
    *(int *)&(this->GroupMetaData).field_0x30 = iVar2;
    *(int *)&(this->GroupMetaData).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x70 + lVar4) = 0xffffffff;
    }
  }
  TSparseArrayBase<112,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<112,8,FDefaultSparseArrayAllocator> *)&this->GroupMetaData,local_a8,
             iVar5);
  if (local_a8[0].Pointer != (undefined8 *)0x0) {
    *(TReferenceControllerBase<1> **)((longlong)local_a8[0].Pointer + 8) = pTVar6;
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    *(undefined8 *)((longlong)local_a8[0].Pointer + 0x60) = 0;
    *(undefined8 *)local_a8[0].Pointer = uVar3;
    *(undefined8 *)((longlong)local_a8[0].Pointer + 0x10) = local_88;
    *(undefined8 *)((longlong)local_a8[0].Pointer + 0x18) = uStack_80;
    *(undefined8 *)((longlong)local_a8[0].Pointer + 0x20) = local_78;
    *(undefined8 *)((longlong)local_a8[0].Pointer + 0x28) = uStack_70;
    *(undefined8 *)((longlong)local_a8[0].Pointer + 0x30) = local_68;
    *(undefined8 *)((longlong)local_a8[0].Pointer + 0x38) = uStack_60;
    *(undefined8 *)((longlong)local_a8[0].Pointer + 0x40) = local_58;
    *(undefined8 *)((longlong)local_a8[0].Pointer + 0x48) = uStack_50;
    *(undefined8 *)((longlong)local_a8[0].Pointer + 0x50) = local_48;
    *(undefined8 *)((longlong)local_a8[0].Pointer + 0x58) = uStack_40;
    if (*(void **)((longlong)local_a8[0].Pointer + 0x60) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)local_a8[0].Pointer + 0x60));
    }
    *(undefined8 *)((longlong)local_a8[0].Pointer + 0x60) = 0;
    *(undefined4 *)((longlong)local_a8[0].Pointer + 0x68) = 0;
    *(undefined4 *)((longlong)local_a8[0].Pointer + 0x6c) = 4;
  }
  *(int *)&param_1->Object = local_a8[0].Index;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)in_R8[1]);
  return (FPreAnimatedStorageGroupHandle)(int)param_1;
}

// ContainsAnyStateForInstanceHandle @ 1461992e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::FPreAnimatedStateExtension::ContainsAnyStateForInstanceHandle
          (FPreAnimatedStateExtension *this,FRootInstanceHandle param_1)

{
  FPreAnimatedEntityCaptureSource *pFVar1;
  FPreAnimatedTrackInstanceCaptureSources *pFVar2;
  FPreAnimatedTrackInstanceInputCaptureSources *pFVar3;
  FPreAnimatedTemplateCaptureSources *pFVar4;
  FPreAnimatedEvaluationHookCaptureSources *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  code *pcVar8;
  atomic<int> aVar9;
  char cVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  atomic<int> aVar14;
  uint uVar15;
  TReferenceControllerBase<1> *pTVar16;
  longlong lVar17;
  
  pFVar1 = (this->EntityCaptureSource).Ptr;
  if ((((((pFVar1 != (FPreAnimatedEntityCaptureSource *)0x0) &&
         (cVar10 = (**(code **)(*(longlong *)pFVar1 + 0x10))(), cVar10 != '\0')) ||
        ((pFVar2 = (this->TrackInstanceCaptureSource).Ptr,
         pFVar2 != (FPreAnimatedTrackInstanceCaptureSources *)0x0 &&
         (cVar10 = (**(code **)(*(longlong *)pFVar2 + 0x10))(pFVar2,param_1), cVar10 != '\0')))) ||
       ((pFVar3 = (this->TrackInstanceInputCaptureSource).Ptr,
        pFVar3 != (FPreAnimatedTrackInstanceInputCaptureSources *)0x0 &&
        (cVar10 = (**(code **)(*(longlong *)pFVar3 + 0x10))(pFVar3,param_1), cVar10 != '\0')))) ||
      ((pFVar4 = (this->TemplateCaptureSource).Ptr,
       pFVar4 != (FPreAnimatedTemplateCaptureSources *)0x0 &&
       (cVar10 = (**(code **)(*(longlong *)pFVar4 + 0x10))(pFVar4,param_1), cVar10 != '\0')))) ||
     ((pFVar5 = (this->EvaluationHookCaptureSource).Ptr,
      pFVar5 != (FPreAnimatedEvaluationHookCaptureSources *)0x0 &&
      (cVar10 = (**(code **)(*(longlong *)pFVar5 + 0x10))(pFVar5,param_1), cVar10 != '\0')))) {
    return true;
  }
  uVar15 = (this->WeakExternalCaptureSources).ArrayNum - 1;
  if (-1 < (int)uVar15) {
    lVar17 = (longlong)(int)uVar15 << 4;
    do {
      uVar13 = 0;
      if ((int)uVar15 < (this->WeakExternalCaptureSources).ArrayNum) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        uVar12 = (*pcVar8)();
        return (bool)uVar12;
      }
      pFVar6 = (this->WeakExternalCaptureSources).AllocatorInstance.Data;
      pTVar16 = *(TReferenceControllerBase<1> **)(pFVar6 + lVar17 + 8);
      if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
        aVar9 = pTVar16->SharedReferenceCount;
        do {
          if (aVar9 == (atomic<int>)0x0) {
            pTVar16 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_146199400;
          }
          LOCK();
          aVar14 = pTVar16->SharedReferenceCount;
          bVar11 = aVar9 == aVar14;
          if (bVar11) {
            pTVar16->SharedReferenceCount = (atomic<int>)((int)aVar9 + 1);
            aVar14 = aVar9;
          }
          UNLOCK();
          aVar9 = aVar14;
        } while (!bVar11);
        plVar7 = *(longlong **)(pFVar6 + lVar17);
        if ((plVar7 != (longlong *)0x0) &&
           (cVar10 = (**(code **)(*plVar7 + 0x10))(plVar7,param_1), cVar10 != '\0')) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar16);
          return true;
        }
      }
LAB_146199400:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
      lVar17 = lVar17 + -0x10;
      uVar15 = uVar15 - 1;
    } while (-1 < (int)uVar15);
  }
  return false;
}

// DiscardGlobalState @ 14619f250

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedStateExtension::DiscardGlobalState
          (FPreAnimatedStateExtension *this,FRestoreStateParams *param_1)

{
  TArray<TWeakPtr<UE::MovieScene::IPreAnimatedCaptureSource,1>,TSizedDefaultAllocator<32>_> *this_00
  ;
  FPreAnimatedEntityCaptureSource *pFVar1;
  FPreAnimatedTrackInstanceCaptureSources *pFVar2;
  FPreAnimatedTrackInstanceInputCaptureSources *pFVar3;
  FPreAnimatedTemplateCaptureSources *pFVar4;
  FPreAnimatedEvaluationHookCaptureSources *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  code *pcVar8;
  atomic<int> aVar9;
  bool bVar10;
  atomic<int> aVar11;
  uint uVar12;
  TReferenceControllerBase<1> *pTVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  undefined1 local_res18 [16];
  FPreAnimatedStateMetaData *local_78;
  undefined8 local_70;
  FPreAnimatedStateMetaData *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  code *local_58;
  undefined1 *local_50;
  TArrayView<UE::MovieScene::FPreAnimatedStateMetaData,int> local_48;
  
  pFVar1 = (this->EntityCaptureSource).Ptr;
  local_78 = (FPreAnimatedStateMetaData *)0x0;
  local_70 = 0;
  if (pFVar1 != (FPreAnimatedEntityCaptureSource *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x18))(pFVar1,param_1,&local_78);
  }
  pFVar2 = (this->TrackInstanceCaptureSource).Ptr;
  if (pFVar2 != (FPreAnimatedTrackInstanceCaptureSources *)0x0) {
    (**(code **)(*(longlong *)pFVar2 + 0x18))(pFVar2,param_1,&local_78);
  }
  pFVar3 = (this->TrackInstanceInputCaptureSource).Ptr;
  if (pFVar3 != (FPreAnimatedTrackInstanceInputCaptureSources *)0x0) {
    (**(code **)(*(longlong *)pFVar3 + 0x18))(pFVar3,param_1,&local_78);
  }
  pFVar4 = (this->TemplateCaptureSource).Ptr;
  if (pFVar4 != (FPreAnimatedTemplateCaptureSources *)0x0) {
    (**(code **)(*(longlong *)pFVar4 + 0x18))(pFVar4,param_1,&local_78);
  }
  pFVar5 = (this->EvaluationHookCaptureSource).Ptr;
  if (pFVar5 != (FPreAnimatedEvaluationHookCaptureSources *)0x0) {
    (**(code **)(*(longlong *)pFVar5 + 0x18))(pFVar5,param_1,&local_78);
  }
  iVar16 = (this->WeakExternalCaptureSources).ArrayNum;
  uVar15 = iVar16 - 1;
  if (-1 < (int)uVar15) {
    this_00 = &this->WeakExternalCaptureSources;
    lVar14 = (longlong)(int)uVar15 << 4;
    do {
      uVar12 = 0;
      if ((int)uVar15 < (this->WeakExternalCaptureSources).ArrayNum) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6 = (this_00->AllocatorInstance).Data;
      pTVar13 = *(TReferenceControllerBase<1> **)(pFVar6 + lVar14 + 8);
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
LAB_14619f3a4:
        uVar12 = 0;
        if (iVar16 <= (this->WeakExternalCaptureSources).ArrayNum) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        TArray<TWeakPtr<UE::MovieScene::IPreAnimatedCaptureSource,1>,TSizedDefaultAllocator<32>_>::
        RemoveAtSwapImpl(this_00,uVar15,1);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_00->AllocatorInstance,(this->WeakExternalCaptureSources).ArrayNum,
                   &(this->WeakExternalCaptureSources).ArrayMax);
      }
      else {
        aVar9 = pTVar13->SharedReferenceCount;
        do {
          if (aVar9 == (atomic<int>)0x0) {
            pTVar13 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14619f3a4;
          }
          LOCK();
          aVar11 = pTVar13->SharedReferenceCount;
          bVar10 = aVar9 == aVar11;
          if (bVar10) {
            pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar9 + 1);
            aVar11 = aVar9;
          }
          UNLOCK();
          aVar9 = aVar11;
        } while (!bVar10);
        plVar7 = *(longlong **)(pFVar6 + lVar14);
        if (plVar7 == (longlong *)0x0) goto LAB_14619f3a4;
        (**(code **)(*plVar7 + 0x18))(plVar7,param_1,&local_78);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
      iVar16 = iVar16 + -1;
      lVar14 = lVar14 + -0x10;
      uVar15 = uVar15 - 1;
    } while (-1 < (int)uVar15);
  }
  iVar16 = (int)local_70;
  local_50 = local_res18;
  local_58 = Core::Private::Function::
             TFunctionRefCaller<`UE::MovieScene::FPreAnimatedStateExtension::DiscardGlobalState'::__l2::<lambda_1>,void,UE::MovieScene::IPreAnimatedStorage_&,UE::MovieScene::FPreAnimatedStorageIndex>
             ::Call;
  local_68 = local_78;
  if (((int)local_70 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iStack_60 = iVar16;
  local_48._12_4_ = uStack_5c;
  local_48.ArrayNum = iVar16;
  local_48.DataPtr = local_68;
  HandleMetaDataToRemove
            (this,param_1,&local_48,
             (TFunctionRef<void___cdecl(UE::MovieScene::IPreAnimatedStorage_&,UE::MovieScene::FPreAnimatedStorageIndex)>
              *)&local_58);
  if (local_78 != (FPreAnimatedStateMetaData *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

// DiscardStaleObjectState @ 14619f9c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedStateExtension::DiscardStaleObjectState
          (FPreAnimatedStateExtension *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  atomic<int> aVar8;
  ulonglong uVar9;
  int iVar10;
  longlong *plVar11;
  int *piVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int *local_38;
  ulonglong local_30;
  TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
  *local_28;
  ulonglong uStack_20;
  
  uStack_20 = uStack_20 & 0xffffffff00000000;
  uVar9 = uStack_20;
  uStack_20._0_4_ = 0;
  local_38 = (int *)0x0;
  local_30 = 0;
  plVar11 = (longlong *)0x0;
  uVar13 = (uint)uStack_20;
  local_28 = &this->GroupManagers;
  uStack_20 = uVar9;
  do {
    iVar10 = (int)plVar11;
    if ((iVar10 < 0) || ((this->GroupManagers).Pairs.ArrayNum <= iVar10)) {
      iVar10 = (int)local_30;
      uVar9 = (ulonglong)(int)local_30;
      piVar2 = local_38 + uVar9;
      piVar12 = local_38;
      while( true ) {
        if ((int)uVar9 != iVar10) {
          `TCheckedPointerIterator<UE::MovieScene::FPreAnimatedStorageGroupHandle,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (piVar12 == piVar2) break;
        DiscardStateForGroup(this,(FPreAnimatedStorageGroupHandle)*piVar12);
        uVar9 = local_30 & 0xffffffff;
        piVar12 = piVar12 + 1;
      }
      this->bEntriesInvalidated = true;
      if (local_38 != (int *)0x0) {
        FMemory::Free(local_38);
      }
      return;
    }
    if ((iVar10 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = (this->GroupManagers).Pairs.AllocatorInstance.Data;
    pTVar5 = *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)iVar10 * 0x18 + 0x10);
    plVar11 = *(longlong **)(pFVar4 + (longlong)iVar10 * 0x18 + 8);
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
      UNLOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_14619fac7;
        }
        LOCK();
        aVar8 = pTVar5->SharedReferenceCount;
        bVar7 = aVar3 == aVar8;
        if (bVar7) {
          pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar8 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar8;
      } while (!bVar7);
    }
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      plVar11 = (longlong *)0x0;
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x18))(plVar11,&local_38);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
LAB_14619fac7:
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
    uVar13 = uVar13 + 1;
    plVar11 = (longlong *)(ulonglong)uVar13;
  } while( true );
}

// DiscardStateForGroup @ 14619fb60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedStateExtension::DiscardStateForGroup
          (FPreAnimatedStateExtension *this,FPreAnimatedStorageGroupHandle param_1)

{
  uint *puVar1;
  FPreAnimatedEntityCaptureSource *pFVar2;
  FPreAnimatedTrackInstanceCaptureSources *pFVar3;
  FPreAnimatedTrackInstanceInputCaptureSources *pFVar4;
  FPreAnimatedTemplateCaptureSources *pFVar5;
  FPreAnimatedEvaluationHookCaptureSources *pFVar6;
  FScriptContainerElement *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  IPreAnimatedStorage *pIVar9;
  code *pcVar10;
  atomic<int> aVar11;
  longlong *plVar12;
  bool bVar13;
  uint uVar14;
  atomic<int> aVar15;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar16;
  longlong lVar17;
  uint uVar18;
  uint *puVar19;
  TReferenceControllerBase<1> *pTVar20;
  longlong *plVar21;
  FPreAnimatedStorageID local_res8 [2];
  undefined1 local_res10 [8];
  longlong *local_res18;
  void *local_48;
  undefined8 local_40;
  
  local_48 = (void *)0x0;
  pFVar2 = (this->EntityCaptureSource).Ptr;
  local_40 = 0;
  if (pFVar2 != (FPreAnimatedEntityCaptureSource *)0x0) {
    (**(code **)(*(longlong *)pFVar2 + 0x20))(pFVar2,param_1.Value,&local_48);
  }
  pFVar3 = (this->TrackInstanceCaptureSource).Ptr;
  if (pFVar3 != (FPreAnimatedTrackInstanceCaptureSources *)0x0) {
    (**(code **)(*(longlong *)pFVar3 + 0x20))(pFVar3,param_1.Value,&local_48);
  }
  pFVar4 = (this->TrackInstanceInputCaptureSource).Ptr;
  if (pFVar4 != (FPreAnimatedTrackInstanceInputCaptureSources *)0x0) {
    (**(code **)(*(longlong *)pFVar4 + 0x20))(pFVar4,param_1.Value,&local_48);
  }
  pFVar5 = (this->TemplateCaptureSource).Ptr;
  if (pFVar5 != (FPreAnimatedTemplateCaptureSources *)0x0) {
    (**(code **)(*(longlong *)pFVar5 + 0x20))(pFVar5,param_1.Value,&local_48);
  }
  pFVar6 = (this->EvaluationHookCaptureSource).Ptr;
  if (pFVar6 != (FPreAnimatedEvaluationHookCaptureSources *)0x0) {
    (**(code **)(*(longlong *)pFVar6 + 0x20))(pFVar6,param_1.Value,&local_48);
  }
  uVar18 = (this->WeakExternalCaptureSources).ArrayNum - 1;
  if (-1 < (int)uVar18) {
    lVar17 = (longlong)(int)uVar18 << 4;
    do {
      uVar14 = 0;
      if ((int)uVar18 < (this->WeakExternalCaptureSources).ArrayNum) {
        uVar14 = ~uVar18 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar7 = (this->WeakExternalCaptureSources).AllocatorInstance.Data;
      pTVar8 = *(TReferenceControllerBase<1> **)(pFVar7 + lVar17 + 8);
      pTVar20 = pTVar8;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        aVar11 = pTVar8->SharedReferenceCount;
        do {
          pTVar20 = (TReferenceControllerBase<1> *)0x0;
          if (aVar11 == (atomic<int>)0x0) goto LAB_14619fc85;
          LOCK();
          aVar15 = pTVar8->SharedReferenceCount;
          bVar13 = aVar11 == aVar15;
          if (bVar13) {
            pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar11 + 1);
            aVar15 = aVar11;
          }
          UNLOCK();
          aVar11 = aVar15;
        } while (!bVar13);
        plVar21 = *(longlong **)(pFVar7 + lVar17);
        pTVar20 = pTVar8;
        if (plVar21 != (longlong *)0x0) {
          (**(code **)(*plVar21 + 0x20))(plVar21,param_1.Value,&local_48);
        }
      }
LAB_14619fc85:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
      lVar17 = lVar17 + -0x10;
      uVar18 = uVar18 - 1;
    } while (-1 < (int)uVar18);
  }
  plVar21 = (longlong *)((longlong)param_1.Value * 0x70 + *(longlong *)&this->GroupMetaData);
  lVar17 = plVar21[0xd];
  puVar19 = (uint *)plVar21[0xc];
  if ((uint *)plVar21[0xc] == (uint *)0x0) {
    puVar19 = (uint *)(plVar21 + 2);
  }
  puVar1 = puVar19 + (longlong)(int)lVar17 * 5;
  local_res18 = plVar21;
  while( true ) {
    if ((int)plVar21[0xd] != (int)lVar17) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    plVar12 = local_res18;
    if (puVar19 == puVar1) {
      if ((*local_res18 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      (**(code **)(*(longlong *)*plVar12 + 0x10))((longlong *)*plVar12,param_1.Value);
      TSparseArray<UE::MovieScene::FPreAnimatedStateExtension::FPreAnimatedGroupMetaData,FDefaultSparseArrayAllocator>
      ::RemoveAt(&this->GroupMetaData,param_1.Value,1);
      this->bEntriesInvalidated = true;
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
      return;
    }
    local_res8[0].TypeID = *puVar19;
    pTVar16 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
              ::Find(&this->StorageImplementations,local_res8);
    if ((pTVar16 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Value != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                            ,0x148,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pIVar9 = pTVar16->Object;
    pTVar8 = (pTVar16->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pIVar9 == (IPreAnimatedStorage *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) break;
    (**(code **)(*(longlong *)pIVar9 + 0x28))(pIVar9,puVar19[1],1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    puVar19 = puVar19 + 5;
  }
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

// DiscardStateForStorage @ 14619fe40

/* WARNING: Removing unreachable block (ram,0x00014619ffc7) */
/* WARNING: Removing unreachable block (ram,0x0001461a063d) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedStateExtension::DiscardStateForStorage
          (FPreAnimatedStateExtension *this,FPreAnimatedStorageID param_1,
          FPreAnimatedStorageIndex param_2)

{
  TMap<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>_>
  *pTVar1;
  FPreAnimatedEntityCaptureSource *pFVar2;
  FPreAnimatedTrackInstanceCaptureSources *pFVar3;
  FPreAnimatedTrackInstanceInputCaptureSources *pFVar4;
  FPreAnimatedTemplateCaptureSources *pFVar5;
  FPreAnimatedEvaluationHookCaptureSources *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong *plVar8;
  IPreAnimatedStorage *pIVar9;
  code *pcVar10;
  byte bVar11;
  atomic<int> aVar12;
  bool bVar13;
  ushort uVar14;
  atomic<int> aVar15;
  undefined4 uVar16;
  FAggregatePreAnimatedStateMetaData *pFVar17;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar18;
  longlong lVar19;
  undefined1 *puVar20;
  ulonglong uVar21;
  undefined1 *puVar22;
  TReferenceControllerBase<1> *pTVar23;
  FPreAnimatedStateCachedValueHandle *pFVar24;
  longlong lVar25;
  uint *puVar26;
  undefined1 *puVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  longlong lVar32;
  longlong lVar33;
  FPreAnimatedStorageID local_res20 [2];
  longlong local_108;
  undefined1 auStack_d0 [16];
  uint uStack_c0;
  uint uStack_bc;
  longlong local_b8;
  TSet<TTuple<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>,FDefaultSetAllocator>
  *pTStack_b0;
  TSet<TTuple<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>,FDefaultSetAllocator>
  *local_a8;
  char local_a0;
  char cStack_9f;
  longlong *local_98;
  longlong local_90;
  undefined1 *local_88;
  TReferenceControllerBase<1> *local_80;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>,FDefaultSetAllocator>
  *pTStack_50;
  
  pFVar2 = (this->EntityCaptureSource).Ptr;
  if (pFVar2 != (FPreAnimatedEntityCaptureSource *)0x0) {
    (**(code **)(*(longlong *)pFVar2 + 0x28))();
  }
  pFVar3 = (this->TrackInstanceCaptureSource).Ptr;
  if (pFVar3 != (FPreAnimatedTrackInstanceCaptureSources *)0x0) {
    (**(code **)(*(longlong *)pFVar3 + 0x28))(pFVar3,param_1.TypeID);
  }
  pFVar4 = (this->TrackInstanceInputCaptureSource).Ptr;
  if (pFVar4 != (FPreAnimatedTrackInstanceInputCaptureSources *)0x0) {
    (**(code **)(*(longlong *)pFVar4 + 0x28))(pFVar4,param_1.TypeID);
  }
  pFVar5 = (this->TemplateCaptureSource).Ptr;
  if (pFVar5 != (FPreAnimatedTemplateCaptureSources *)0x0) {
    (**(code **)(*(longlong *)pFVar5 + 0x28))(pFVar5,param_1.TypeID);
  }
  pFVar6 = (this->EvaluationHookCaptureSource).Ptr;
  if (pFVar6 != (FPreAnimatedEvaluationHookCaptureSources *)0x0) {
    (**(code **)(*(longlong *)pFVar6 + 0x28))(pFVar6,param_1.TypeID);
  }
  uVar30 = (this->WeakExternalCaptureSources).ArrayNum - 1;
  if (-1 < (int)uVar30) {
    lVar32 = (longlong)(int)uVar30 << 4;
    do {
      uVar29 = 0;
      if ((int)uVar30 < (this->WeakExternalCaptureSources).ArrayNum) {
        uVar29 = ~uVar30 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar7 = (this->WeakExternalCaptureSources).AllocatorInstance.Data;
      pTVar23 = *(TReferenceControllerBase<1> **)(pFVar7 + lVar32 + 8);
      if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
        aVar12 = pTVar23->SharedReferenceCount;
        do {
          if (aVar12 == (atomic<int>)0x0) {
            pTVar23 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14619ff84;
          }
          LOCK();
          aVar15 = pTVar23->SharedReferenceCount;
          bVar13 = aVar12 == aVar15;
          if (bVar13) {
            pTVar23->SharedReferenceCount = (atomic<int>)((int)aVar12 + 1);
            aVar15 = aVar12;
          }
          UNLOCK();
          aVar12 = aVar15;
        } while (!bVar13);
        plVar8 = *(longlong **)(pFVar7 + lVar32);
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x28))(plVar8,param_1.TypeID);
        }
      }
LAB_14619ff84:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
      lVar32 = lVar32 + -0x10;
      uVar30 = uVar30 - 1;
    } while (-1 < (int)uVar30);
  }
  for (pFVar24 = (FPreAnimatedStateCachedValueHandle *)&DAT_00000004;
      &pFVar24[-1].StorageIndex != (FPreAnimatedStorageIndex *)0x0;
      pFVar24 = (FPreAnimatedStateCachedValueHandle *)&pFVar24[2].StorageIndex) {
    iVar28 = pFVar24[-1].StorageIndex.Value;
    if (iVar28 == -1) {
      pFVar17 = TMapBase<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>_>
                ::Find((TMapBase<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>_>
                        *)&this->UngroupedMetaData,pFVar24);
    }
    else {
      pFVar17 = AlgoImpl::
                FindBy<TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_&,UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateCachedValueHandle_UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData::*>
                          ((TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                            *)((longlong)iVar28 * 0x70 + *(longlong *)&this->GroupMetaData + 0x10),
                           pFVar24,(pdm_ea6cf2fe)0x0);
    }
    if (pFVar17 == (FAggregatePreAnimatedStateMetaData *)0x0) {
      bVar13 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1044199200692109928>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateExtension.cpp"
                          ,0x268,"Aggregate");
      if (bVar13) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    else {
      uVar14 = pFVar17->NumContributors - 1;
      pFVar17->NumContributors = uVar14;
      if ((char)pFVar24[1].StorageIndex.Value != '\0') {
        pFVar17->NumRestoreContributors = pFVar17->NumRestoreContributors - 1;
      }
      if (uVar14 == 0) {
        pFVar17->bWantedRestore = false;
        pFVar17->TerminalInstanceHandle = (FInstanceHandle)pFVar24[1].TypeID.TypeID;
      }
    }
  }
  local_res20[0].TypeID = param_1.TypeID;
  pTVar18 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
            ::Find(&this->StorageImplementations,local_res20);
  if ((pTVar18 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Value != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                          ,0x148,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_80 = (pTVar18->SharedReferenceCount).ReferenceController;
  pIVar9 = pTVar18->Object;
  if (local_80 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_80->SharedReferenceCount = (atomic<int>)((int)local_80->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar30 = 0;
  if (0 < *(int *)&(this->GroupMetaData).field_0x8) {
    puVar27 = &(this->GroupMetaData).field_0x10;
    local_108 = 0;
    local_88 = puVar27;
    do {
      if ((((int)uVar30 < 0) || (*(int *)(puVar27 + 0x18) <= (int)uVar30)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5c6,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      puVar22 = puVar27;
      if (*(undefined1 **)(puVar27 + 0x10) != (undefined1 *)0x0) {
        puVar22 = *(undefined1 **)(puVar27 + 0x10);
      }
      uVar29 = uVar30;
      if ((int)uVar30 < 0) {
        uVar29 = uVar30 + 0x1f;
      }
      lVar32 = (longlong)((int)uVar29 >> 5) * 4;
      if ((*(uint *)(puVar22 + lVar32) >> (uVar30 & 0x1f) & 1) != 0) {
        lVar33 = *(longlong *)&this->GroupMetaData;
        local_98 = (longlong *)(local_108 + lVar33);
        uVar29 = *(int *)(local_108 + 0x68 + lVar33) - 1;
        if (-1 < (int)uVar29) {
          lVar33 = lVar33 + 0x10 + local_108;
          lVar25 = (longlong)(int)uVar29 * 0x14;
          local_90 = lVar33;
          do {
            uVar31 = 0;
            if ((int)uVar29 < *(int *)(lVar33 + 0x58)) {
              uVar31 = ~uVar29 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            lVar19 = lVar33;
            if (*(longlong *)(lVar33 + 0x50) != 0) {
              lVar19 = *(longlong *)(lVar33 + 0x50);
            }
            puVar26 = (uint *)(lVar25 + lVar19);
            if (((*puVar26 == param_1.TypeID) && ((short)puVar26[3] == 0)) &&
               ((param_2.Value == -1 || (puVar26[1] == param_2.Value)))) {
              if ((pIVar9 == (IPreAnimatedStorage *)0x0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar13)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              (**(code **)(*(longlong *)pIVar9 + 0x28))(pIVar9,puVar26[1],1);
              uVar31 = 0;
              if ((int)uVar29 < *(int *)(lVar33 + 0x58)) {
                uVar31 = ~uVar29 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              lVar19 = lVar33;
              if (*(longlong *)(lVar33 + 0x50) != 0) {
                lVar19 = *(longlong *)(lVar33 + 0x50);
              }
              iVar28 = ~uVar29 + *(int *)(lVar33 + 0x58);
              if (iVar28 != 0) {
                memmove((void *)(lVar19 + lVar25),(void *)(lVar19 + lVar25 + 0x14),
                        (longlong)iVar28 * 0x14);
              }
              *(int *)(lVar33 + 0x58) = *(int *)(lVar33 + 0x58) + -1;
            }
            plVar8 = local_98;
            if ((int)local_98[0xd] == 0) {
              if ((*local_98 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar13)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              (**(code **)(*(longlong *)*plVar8 + 0x10))((longlong *)*plVar8,uVar30);
              TSparseArray<UE::MovieScene::FPreAnimatedStateExtension::FPreAnimatedGroupMetaData,FDefaultSparseArrayAllocator>
              ::DestroyElements(&this->GroupMetaData,uVar30,1);
              lVar33 = *(longlong *)&this->GroupMetaData;
              bVar11 = (byte)uVar30 & 0x1f;
              uVar31 = 1 << bVar11 | 1U >> 0x20 - bVar11;
              puVar27 = &(this->GroupMetaData).field_0x10;
              if ((((int)uVar30 < 0) || (*(int *)&(this->GroupMetaData).field_0x28 <= (int)uVar30))
                 && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Index>=0 && Index<NumBits",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                         ,0x5be,L""), bVar13)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              puVar22 = *(undefined1 **)&(this->GroupMetaData).field_0x20;
              puVar20 = puVar27;
              if (puVar22 != (undefined1 *)0x0) {
                puVar20 = puVar22;
              }
              if (((*(uint *)(puVar20 + lVar32) & uVar31) == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("AllocationFlags[Index]",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                      ,0xc5,L""), bVar13)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              if (*(int *)&(this->GroupMetaData).field_0x34 != 0) {
                *(uint *)((longlong)*(int *)&(this->GroupMetaData).field_0x30 * 0x70 + lVar33) =
                     uVar30;
              }
              *(undefined4 *)(local_108 + lVar33) = 0xffffffff;
              if (*(int *)&(this->GroupMetaData).field_0x34 < 1) {
                uVar16 = 0xffffffff;
              }
              else {
                uVar16 = *(undefined4 *)&(this->GroupMetaData).field_0x30;
              }
              *(undefined4 *)(local_108 + 4 + lVar33) = uVar16;
              puVar22 = &(this->GroupMetaData).field_0x34;
              *(int *)puVar22 = *(int *)puVar22 + 1;
              *(uint *)&(this->GroupMetaData).field_0x30 = uVar30;
              if ((((int)uVar30 < 0) || (*(int *)&(this->GroupMetaData).field_0x28 <= (int)uVar30))
                 && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Index>=0 && Index<NumBits",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                         ,0x5be,L""), bVar13)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              puVar22 = *(undefined1 **)&(this->GroupMetaData).field_0x20;
              if (puVar22 != (undefined1 *)0x0) {
                puVar27 = puVar22;
              }
              *(uint *)(puVar27 + lVar32) = *(uint *)(puVar27 + lVar32) & ~uVar31;
              lVar33 = local_90;
            }
            lVar25 = lVar25 + -0x14;
            uVar29 = uVar29 - 1;
            puVar27 = local_88;
          } while (-1 < (int)uVar29);
        }
      }
      local_108 = local_108 + 0x70;
      uVar30 = uVar30 + 1;
    } while ((int)uVar30 < *(int *)&(this->GroupMetaData).field_0x8);
  }
  iVar28 = 1;
  pTVar1 = &this->UngroupedMetaData;
  TSet<TTuple<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_a0 = '\0';
  cStack_9f = '\0';
  stack0xffffffffffffff38 = local_78._16_16_;
  auStack_d0._0_8_ = local_78._8_8_;
  local_b8 = local_58;
  pTStack_b0 = pTStack_50;
  uVar21 = local_78._24_8_ >> 0x20;
  local_a8 = (TSet<TTuple<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>,FDefaultSetAllocator>
              *)pTVar1;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      lVar32 = *(longlong *)local_78._0_8_ + (longlong)(int)uVar21 * 0x24;
      if (((*(uint *)(*(longlong *)local_78._0_8_ + 8 + (longlong)(int)uVar21 * 0x24) ==
            param_1.TypeID) && (*(short *)(lVar32 + 0x14) == 0)) &&
         ((param_2.Value == -1 || (*(int *)(lVar32 + 0xc) == param_2.Value)))) {
        if ((pIVar9 == (IPreAnimatedStorage *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        (**(code **)(*(longlong *)pIVar9 + 0x28))(pIVar9,*(undefined4 *)(lVar32 + 0xc),1);
        TSet<TTuple<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_b0,uStack_bc);
        local_a0 = '\x01';
      }
      uStack_c0 = uStack_c0 & ~auStack_d0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_d0);
      uVar21 = (ulonglong)uStack_bc;
    } while ((int)uStack_bc < *(int *)(auStack_d0._8_8_ + 0x18));
    if ((local_a0 != '\0') && (cStack_9f != '\0')) {
      uVar30 = *(int *)&(local_a8->Elements).field_0x8 - *(int *)&(local_a8->Elements).field_0x34;
      if (3 < uVar30) {
        uVar21 = (ulonglong)((uVar30 >> 1) + 7) * 2 + 1;
        lVar32 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar32 == 0; lVar32 = lVar32 + -1) {
          }
        }
        iVar28 = 1 << ((byte)lVar32 & 0x1f);
      }
      if (((0 < (int)uVar30) && (local_a8->HashSize < iVar28)) || (iVar28 < local_a8->HashSize)) {
        local_a8->HashSize = iVar28;
        TSet<TTuple<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>,FDefaultSetAllocator>
        ::Rehash(local_a8);
      }
    }
  }
  TSparseArrayBase<112,8,FDefaultSparseArrayAllocator>::Shrink
            ((TSparseArrayBase<112,8,FDefaultSparseArrayAllocator> *)&this->GroupMetaData);
  this->bEntriesInvalidated = true;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
  return;
}

// DiscardTransientState @ 1461a0660

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedStateExtension::DiscardTransientState(FPreAnimatedStateExtension *this)

{
  TMap<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>_>
  *pTVar1;
  uint *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  FPreAnimatedEntityCaptureSource *pFVar5;
  FPreAnimatedTrackInstanceCaptureSources *pFVar6;
  FPreAnimatedTrackInstanceInputCaptureSources *pFVar7;
  FPreAnimatedTemplateCaptureSources *pFVar8;
  FPreAnimatedEvaluationHookCaptureSources *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong *plVar11;
  IPreAnimatedStorage *pIVar12;
  code *pcVar13;
  atomic<int> aVar14;
  TMap<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>_>
  *pTVar15;
  bool bVar16;
  atomic<int> aVar17;
  uint uVar18;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar19;
  TReferenceControllerBase<1> *pTVar20;
  longlong lVar21;
  int iVar22;
  TReferenceControllerBase<1> *pTVar23;
  TSparseArray<UE::MovieScene::FPreAnimatedStateExtension::FPreAnimatedGroupMetaData,FDefaultSparseArrayAllocator>
  *pTVar24;
  uint *puVar25;
  uint uVar26;
  longlong lVar27;
  uint uVar28;
  int iVar29;
  undefined1 *puVar30;
  TReferenceControllerBase<1> *pTVar31;
  undefined1 *puVar32;
  TBitArray<FDefaultBitArrayAllocator> *pTVar33;
  uint uVar34;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_198;
  FPreAnimatedStorageID local_190 [2];
  FPreAnimatedStorageID local_188 [2];
  undefined8 local_180;
  undefined8 uStack_178;
  uint local_170;
  uint local_168;
  uint uStack_164;
  undefined1 *puStack_160;
  undefined4 local_158;
  int iStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  ulonglong local_148;
  TSparseArray<UE::MovieScene::FPreAnimatedStateExtension::FPreAnimatedGroupMetaData,FDefaultSparseArrayAllocator>
  *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_138;
  int local_118;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  TSparseArray<UE::MovieScene::FPreAnimatedStateExtension::FPreAnimatedGroupMetaData,FDefaultSparseArrayAllocator>
  *local_100;
  TBitArray<FDefaultBitArrayAllocator> *local_f8;
  TMap<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>_>
  *local_f0;
  uint uStack_e8;
  undefined4 uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  int local_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  TMap<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_54;
  
  pFVar5 = (this->EntityCaptureSource).Ptr;
  if (pFVar5 != (FPreAnimatedEntityCaptureSource *)0x0) {
    (**(code **)(*(longlong *)pFVar5 + 8))();
  }
  pFVar6 = (this->TrackInstanceCaptureSource).Ptr;
  if (pFVar6 != (FPreAnimatedTrackInstanceCaptureSources *)0x0) {
    (**(code **)(*(longlong *)pFVar6 + 8))();
  }
  pFVar7 = (this->TrackInstanceInputCaptureSource).Ptr;
  if (pFVar7 != (FPreAnimatedTrackInstanceInputCaptureSources *)0x0) {
    (**(code **)(*(longlong *)pFVar7 + 8))();
  }
  pFVar8 = (this->TemplateCaptureSource).Ptr;
  if (pFVar8 != (FPreAnimatedTemplateCaptureSources *)0x0) {
    (**(code **)(*(longlong *)pFVar8 + 8))();
  }
  pFVar9 = (this->EvaluationHookCaptureSource).Ptr;
  if (pFVar9 != (FPreAnimatedEvaluationHookCaptureSources *)0x0) {
    (**(code **)(*(longlong *)pFVar9 + 8))();
  }
  pTVar31 = (TReferenceControllerBase<1> *)0x0;
  uVar34 = 0;
  uVar28 = (this->WeakExternalCaptureSources).ArrayNum - 1;
  if (-1 < (int)uVar28) {
    lVar27 = (longlong)(int)uVar28 << 4;
    do {
      uVar18 = uVar34;
      if ((int)uVar28 < (this->WeakExternalCaptureSources).ArrayNum) {
        uVar18 = ~uVar28 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar10 = (this->WeakExternalCaptureSources).AllocatorInstance.Data;
      pTVar20 = *(TReferenceControllerBase<1> **)(pFVar10 + lVar27 + 8);
      pTVar23 = pTVar20;
      if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
        aVar14 = pTVar20->SharedReferenceCount;
        do {
          pTVar23 = pTVar31;
          if (aVar14 == (atomic<int>)0x0) goto LAB_1461a0765;
          LOCK();
          aVar17 = pTVar20->SharedReferenceCount;
          bVar16 = aVar14 == aVar17;
          if (bVar16) {
            pTVar20->SharedReferenceCount = (atomic<int>)((int)aVar14 + 1);
            aVar17 = aVar14;
          }
          UNLOCK();
          aVar14 = aVar17;
        } while (!bVar16);
        plVar11 = *(longlong **)(pFVar10 + lVar27);
        pTVar23 = pTVar20;
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 8))();
        }
      }
LAB_1461a0765:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
      lVar27 = lVar27 + -0x10;
      uVar28 = uVar28 - 1;
    } while (-1 < (int)uVar28);
  }
  pTVar24 = &this->GroupMetaData;
  iStack_154 = 0;
  uStack_150 = 0;
  iVar22 = *(int *)&(this->GroupMetaData).field_0x28;
  pTVar33 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->GroupMetaData).field_0x10;
  local_148 = 1;
  local_168 = 0;
  uStack_164 = 1;
  if (iVar22 != 0) {
    puVar25 = *(uint **)&(this->GroupMetaData).field_0x20;
    if (puVar25 == (uint *)0x0) {
      puVar25 = (uint *)pTVar33;
    }
    uVar28 = *puVar25;
    pTVar20 = pTVar31;
    pTVar23 = pTVar31;
    while (uVar28 == 0) {
      uStack_150 = (int)pTVar23 + 0x20;
      pTVar23 = (TReferenceControllerBase<1> *)(ulonglong)uStack_150;
      iVar29 = (int)pTVar20;
      local_168 = iVar29 + 1;
      pTVar20 = (TReferenceControllerBase<1> *)(ulonglong)local_168;
      if ((int)(iVar22 + -1 + (iVar22 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
      goto LAB_1461a082c;
      uVar28 = puVar25[(longlong)iVar29 + 1];
    }
    uStack_164 = -uVar28 & uVar28;
    uVar4 = (ulonglong)uStack_164 * 2 + 1;
    lVar27 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    local_110 = (int)lVar27;
    iStack_154 = local_110 + -1 + (int)pTVar23;
    if (iVar22 < iStack_154) {
LAB_1461a082c:
      iStack_154 = iVar22;
    }
  }
  local_158 = 0xffffffff;
  local_198 = *(uint *)&(this->GroupMetaData).field_0x28;
  local_118 = *(int *)&(this->GroupMetaData).field_0x8 - *(int *)&(this->GroupMetaData).field_0x34;
  local_138._padding_ = CONCAT44(uStack_164,local_168);
  local_138.CurrentBitIndex = iStack_154;
  local_138.UnvisitedBitMask = 0xffffffff;
  local_138._28_4_ = uStack_14c;
  local_138.BaseBitIndex = uStack_150;
  iVar29 = (int)local_198 >> 5;
  uVar28 = local_198 & 0xffffffe0;
  puStack_160 = (undefined1 *)pTVar33;
  local_140 = pTVar24;
  local_138.Array = pTVar33;
  local_100 = pTVar24;
  local_f8 = pTVar33;
  if ((((int)local_198 < 0) || (iVar22 < (int)local_198)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  uVar18 = *(uint *)&(this->GroupMetaData).field_0x28;
  if (local_198 != uVar18) {
    puVar30 = *(undefined1 **)&(this->GroupMetaData).field_0x20;
    if (puVar30 == (undefined1 *)0x0) {
      puVar30 = (undefined1 *)pTVar33;
    }
    uVar26 = -1 << ((byte)local_198 & 0x1f) & *(uint *)(puVar30 + (longlong)iVar29 * 4);
    while (uVar26 == 0) {
      lVar27 = (longlong)iVar29;
      uVar28 = uVar28 + 0x20;
      iVar29 = iVar29 + 1;
      local_198 = uVar18;
      if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar29)
      goto LAB_1461a0930;
      uVar26 = *(uint *)(puVar30 + lVar27 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
    lVar27 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    local_10c = (int)lVar27;
    local_198 = local_10c + -1 + uVar28;
    if ((int)uVar18 < (int)local_198) {
      local_198 = uVar18;
    }
  }
LAB_1461a0930:
  while( true ) {
    if (*(int *)&pTVar24->field_0x8 - *(int *)&pTVar24->field_0x34 != local_118) {
      local_res10[0] = 0;
      `TSparseArray<UE::MovieScene::FPreAnimatedStateExtension::FPreAnimatedGroupMetaData,FDefaultSparseArrayAllocator>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((local_138.CurrentBitIndex == local_198) && (local_138.Array == pTVar33)) &&
       (pTVar24 == local_100)) break;
    lVar21 = (longlong)local_138.CurrentBitIndex * 0x70;
    lVar27 = *(longlong *)pTVar24;
    iVar22 = *(int *)(lVar21 + 0x68 + lVar27);
    puVar25 = (uint *)(lVar21 + 0x10 + lVar27);
    if (*(uint **)(puVar25 + 0x14) != (uint *)0x0) {
      puVar25 = *(uint **)(puVar25 + 0x14);
    }
    puVar2 = puVar25 + (longlong)iVar22 * 5;
    while( true ) {
      if (*(int *)(lVar21 + lVar27 + 0x68) != iVar22) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (puVar25 == puVar2) break;
      local_180 = *(undefined8 *)puVar25;
      uStack_178 = 0xffff;
      local_170 = local_170 & 0xffff0000;
      *(undefined8 *)puVar25 = local_180;
      puVar25[2] = 0xffff;
      puVar25[3] = 0;
      puVar25[4] = local_170;
      local_190[0].TypeID = *puVar25;
      pTVar19 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
                ::Find(&this->StorageImplementations,local_190);
      if ((pTVar19 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Value != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                              ,0x148,L""), bVar16)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pIVar12 = pTVar19->Object;
      pTVar20 = (pTVar19->SharedReferenceCount).ReferenceController;
      if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pIVar12 == (IPreAnimatedStorage *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      (**(code **)(*(longlong *)pIVar12 + 0x28))(pIVar12,puVar25[1],2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
      puVar25 = puVar25 + 5;
    }
    local_138.UnvisitedBitMask = local_138.UnvisitedBitMask & ~local_138._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_138);
    pTVar24 = local_140;
    pTVar33 = local_f8;
  }
  puVar30 = &(this->UngroupedMetaData).field_0x10;
  uVar28 = *(uint *)&(this->UngroupedMetaData).field_0x28;
  pTVar1 = &this->UngroupedMetaData;
  uStack_d4 = uVar34;
  if (uVar28 != 0) {
    puVar25 = *(uint **)&(this->UngroupedMetaData).field_0x20;
    if (puVar25 == (uint *)0x0) {
      puVar25 = (uint *)puVar30;
    }
    uVar18 = *puVar25;
    pTVar20 = pTVar31;
    uVar34 = 0;
    while (uVar18 == 0) {
      iVar22 = (int)pTVar20;
      pTVar31 = (TReferenceControllerBase<1> *)(ulonglong)((int)pTVar31 + 0x20);
      uVar34 = iVar22 + 1;
      pTVar20 = (TReferenceControllerBase<1> *)(ulonglong)uVar34;
      uStack_d4 = uVar28;
      if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar34)
      goto LAB_1461a0b61;
      uVar18 = puVar25[(longlong)iVar22 + 1];
    }
    local_148 = (ulonglong)(-uVar18 & uVar18);
    uVar4 = local_148 * 2 + 1;
    lVar27 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    local_108 = (int)lVar27;
    uStack_d4 = (int)pTVar31 + -1 + local_108;
    if ((int)uVar28 < (int)uStack_d4) {
      uStack_d4 = uVar28;
    }
  }
LAB_1461a0b61:
  uVar18 = *(uint *)&(this->UngroupedMetaData).field_0x28;
  uStack_e4 = (undefined4)local_148;
  uVar26 = uVar18 & 0xffffffe0;
  uStack_cc = local_54;
  iStack_c8 = *(int *)&(this->UngroupedMetaData).field_0x8 -
              *(int *)&(this->UngroupedMetaData).field_0x34;
  uStack_d8 = 0xffffffff;
  TStack_b8._padding_ = CONCAT44(uStack_e4,uVar34);
  TStack_b8.CurrentBitIndex = uStack_d4;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  local_d0 = (int)pTVar31;
  iVar22 = (int)uVar18 >> 5;
  TStack_b8._28_4_ = local_54;
  TStack_b8.BaseBitIndex = local_d0;
  uStack_98 = CONCAT44(uStack_c4,iStack_c8);
  local_f0 = pTVar1;
  uStack_e8 = uVar34;
  local_e0 = puVar30;
  local_c0 = pTVar1;
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar30;
  if ((((int)uVar18 < 0) || ((int)uVar28 < (int)uVar18)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  uVar34 = *(uint *)&(this->UngroupedMetaData).field_0x28;
  if (uVar18 != uVar34) {
    puVar32 = *(undefined1 **)&(this->UngroupedMetaData).field_0x20;
    if (puVar32 == (undefined1 *)0x0) {
      puVar32 = puVar30;
    }
    uVar28 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar32 + (longlong)iVar22 * 4);
    while (uVar28 == 0) {
      lVar27 = (longlong)iVar22;
      uVar26 = uVar26 + 0x20;
      iVar22 = iVar22 + 1;
      uVar18 = uVar34;
      if ((int)((uVar34 - 1) + ((int)(uVar34 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
      goto LAB_1461a0c70;
      uVar28 = *(uint *)(puVar32 + lVar27 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
    lVar27 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    local_104 = (int)lVar27;
    uVar18 = local_104 + -1 + uVar26;
    if ((int)uVar34 < (int)uVar18) {
      uVar18 = uVar34;
    }
  }
LAB_1461a0c70:
  while( true ) {
    pTVar15 = local_c0;
    if (*(int *)&local_c0->field_0x8 - *(int *)&local_c0->field_0x34 != (int)uStack_98) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    lVar27 = (longlong)TStack_b8.CurrentBitIndex;
    if (((TStack_b8.CurrentBitIndex == uVar18) &&
        (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar30)) && (pTVar15 == pTVar1)
       ) {
      this->bEntriesInvalidated = true;
      return;
    }
    lVar21 = *(longlong *)pTVar15;
    puVar3 = (undefined8 *)(lVar21 + lVar27 * 0x24);
    local_90 = *puVar3;
    uStack_88 = puVar3[1];
    local_80 = *(undefined8 *)(lVar21 + 0x10 + lVar27 * 0x24);
    local_78 = *(undefined4 *)(lVar21 + 0x18 + lVar27 * 0x24);
    local_188[0].TypeID = (uint)local_90;
    pTVar19 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
              ::Find(&this->StorageImplementations,local_188);
    if ((pTVar19 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Value != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                            ,0x148,L""), bVar16)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pIVar12 = pTVar19->Object;
    pTVar31 = (pTVar19->SharedReferenceCount).ReferenceController;
    if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pIVar12 == (IPreAnimatedStorage *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) break;
    (**(code **)(*(longlong *)pIVar12 + 0x28))(pIVar12,local_90._4_4_,2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  }
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

// EnsureMetaData @ 1461a19a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedStateExtension::EnsureMetaData
          (FPreAnimatedStateExtension *this,FPreAnimatedStateEntry *param_1)

{
  FPreAnimatedStateCachedValueHandle *pFVar1;
  FPreAnimatedStateCachedValueHandle *pFVar2;
  int iVar3;
  FAggregatePreAnimatedStateMetaData *pFVar4;
  ForElementType<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>
  *pFVar5;
  longlong lVar6;
  FPreAnimatedStateCachedValueHandle *pFStack_38;
  FPreAnimatedStateCachedValueHandle *pFStack_30;
  FPreAnimatedStateCachedValueHandle FStack_28;
  undefined8 uStack_20;
  undefined2 uStack_18;
  
  iVar3 = (param_1->GroupHandle).Value;
  pFVar1 = &param_1->ValueHandle;
  if (iVar3 == -1) {
    pFVar4 = TMapBase<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>_>
             ::Find((TMapBase<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>_>
                     *)&this->UngroupedMetaData,pFVar1);
  }
  else {
    pFVar4 = AlgoImpl::
             FindBy<TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_&,UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateCachedValueHandle_UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData::*>
                       ((TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                         *)(*(longlong *)&this->GroupMetaData + 0x10 + (longlong)iVar3 * 0x70),
                        pFVar1,(pdm_ea6cf2fe)0x0);
  }
  if (pFVar4 == (FAggregatePreAnimatedStateMetaData *)0x0) {
    iVar3 = (param_1->GroupHandle).Value;
    if (iVar3 == -1) {
      FStack_28 = *pFVar1;
      pFStack_30 = &FStack_28;
      uStack_20 = 0xffff;
      uStack_18 = 0;
      pFStack_38 = pFVar1;
      TSet<TTuple<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<UE::MovieScene::FPreAnimatedStateCachedValueHandle_const_&,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData_&&>_>
                ((TSet<TTuple<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>,FDefaultSetAllocator>
                  *)&this->UngroupedMetaData,
                 (TPairInitializer<UE::MovieScene::FPreAnimatedStateCachedValueHandle_const_&,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData_&&>
                  *)&stack0x00000010,(bool *)&pFStack_38);
    }
    else {
      lVar6 = (longlong)iVar3 * 0x70 + *(longlong *)&this->GroupMetaData;
      iVar3 = *(int *)(lVar6 + 0x68);
      if (iVar3 == *(int *)(lVar6 + 0x6c)) {
        iVar3 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>_>
                          (0x414,(ForElementType<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>
                                  *)(lVar6 + 0x10),(int *)(lVar6 + 0x6c));
      }
      *(int *)(lVar6 + 0x68) = iVar3 + 1;
      pFVar5 = *(ForElementType<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>
                 **)(lVar6 + 0x60);
      if (*(ForElementType<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>
            **)(lVar6 + 0x60) ==
          (ForElementType<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>
           *)0x0) {
        pFVar5 = (ForElementType<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>
                  *)(lVar6 + 0x10);
      }
      pFVar2 = (FPreAnimatedStateCachedValueHandle *)(pFVar5->InlineData + (longlong)iVar3 * 0x14);
      *pFVar2 = *pFVar1;
      pFVar2[1].TypeID = 0xffff;
      pFVar2[1].StorageIndex = 0;
      *(undefined2 *)&pFVar2[2].TypeID.TypeID = 0;
    }
  }
  return;
}

// FindMetaData @ 1461a8b20

/* WARNING: Enum "Type": Some values do not have unique names */

FAggregatePreAnimatedStateMetaData * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::FindMetaData
          (FPreAnimatedStateExtension *this,FPreAnimatedStateEntry *param_1)

{
  int iVar1;
  FAggregatePreAnimatedStateMetaData *pFVar2;
  
  iVar1 = (param_1->GroupHandle).Value;
  if (iVar1 != -1) {
    pFVar2 = AlgoImpl::
             FindBy<TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_&,UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateCachedValueHandle_UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData::*>
                       ((TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                         *)(*(longlong *)&this->GroupMetaData + 0x10 + (longlong)iVar1 * 0x70),
                        &param_1->ValueHandle,(pdm_ea6cf2fe)0x0);
    return pFVar2;
  }
  pFVar2 = TMapBase<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>_>
           ::Find((TMapBase<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>_>
                   *)&this->UngroupedMetaData,&param_1->ValueHandle);
  return pFVar2;
}

// FindMetaData @ 1461a8b60

/* WARNING: Enum "Type": Some values do not have unique names */

FAggregatePreAnimatedStateMetaData * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::FindMetaData
          (FPreAnimatedStateExtension *this,FPreAnimatedStateEntry *param_1)

{
  int iVar1;
  FAggregatePreAnimatedStateMetaData *pFVar2;
  
  iVar1 = (param_1->GroupHandle).Value;
  if (iVar1 != -1) {
    pFVar2 = AlgoImpl::
             FindBy<TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_const_&,UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateCachedValueHandle_UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData::*>
                       ((TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                         *)(*(longlong *)&this->GroupMetaData + 0x10 + (longlong)iVar1 * 0x70),
                        &param_1->ValueHandle,(pdm_ea6cf2fe)0x0);
    return pFVar2;
  }
  pFVar2 = TMapBase<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>_>
           ::Find((TMapBase<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>_>
                   *)&this->UngroupedMetaData,&param_1->ValueHandle);
  return pFVar2;
}

// FreeGroup @ 1461aa260

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedStateExtension::FreeGroup
          (FPreAnimatedStateExtension *this,FPreAnimatedStorageGroupHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if (param_1.Value == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateExtension.cpp"
                       ,0x37,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)((longlong)param_1.Value * 0x70 + 0x68 + *(longlong *)&this->GroupMetaData) != 0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1044199200692109368>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateExtension.cpp"
                       ,0x38,"GroupMetaData[Handle.Value].AggregateMetaData.Num() == 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  plVar3 = (longlong *)((longlong)param_1.Value * 0x70 + *(longlong *)&this->GroupMetaData);
  if (*plVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  plVar3 = (longlong *)*plVar3;
  (**(code **)(*plVar3 + 0x10))(plVar3,param_1.Value);
  TSparseArray<UE::MovieScene::FPreAnimatedStateExtension::FPreAnimatedGroupMetaData,FDefaultSparseArrayAllocator>
  ::RemoveAt(&this->GroupMetaData,param_1.Value,1);
  return;
}

// FreeGroupInternal @ 1461aa340

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedStateExtension::FreeGroupInternal
          (FPreAnimatedStateExtension *this,FPreAnimatedStorageGroupHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)((longlong)param_1.Value * 0x70 + *(longlong *)&this->GroupMetaData);
  if (*plVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  plVar3 = (longlong *)*plVar3;
  (**(code **)(*plVar3 + 0x10))(plVar3,param_1.Value);
  TSparseArray<UE::MovieScene::FPreAnimatedStateExtension::FPreAnimatedGroupMetaData,FDefaultSparseArrayAllocator>
  ::RemoveAt(&this->GroupMetaData,param_1.Value,1);
  return;
}

// GetEntityMetaData @ 1461b0cc0

/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedEntityCaptureSource * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::GetEntityMetaData(FPreAnimatedStateExtension *this)

{
  return (this->EntityCaptureSource).Ptr;
}

// GetEvaluationHookMetaData @ 1461b0ce0

/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedEvaluationHookCaptureSources * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::GetEvaluationHookMetaData
          (FPreAnimatedStateExtension *this)

{
  return (this->EvaluationHookCaptureSource).Ptr;
}

// GetOrAddMetaDataInternal @ 1461b1a70

/* WARNING: Enum "Type": Some values do not have unique names */

FAggregatePreAnimatedStateMetaData * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::GetOrAddMetaDataInternal
          (FPreAnimatedStateExtension *this,FPreAnimatedStateEntry *param_1)

{
  FPreAnimatedStateCachedValueHandle *pFVar1;
  int iVar2;
  FAggregatePreAnimatedStateMetaData *pFVar3;
  ForElementType<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>
  *pFVar4;
  longlong lVar5;
  int local_res10;
  FPreAnimatedStateCachedValueHandle *local_38;
  FPreAnimatedStateCachedValueHandle *local_30;
  FPreAnimatedStateCachedValueHandle local_28;
  undefined8 local_20;
  undefined2 local_18;
  
  iVar2 = (param_1->GroupHandle).Value;
  pFVar1 = &param_1->ValueHandle;
  if (iVar2 == -1) {
    pFVar3 = TMapBase<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>_>
             ::Find((TMapBase<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>_>
                     *)&this->UngroupedMetaData,pFVar1);
  }
  else {
    pFVar3 = AlgoImpl::
             FindBy<TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_&,UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateCachedValueHandle_UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData::*>
                       ((TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                         *)(*(longlong *)&this->GroupMetaData + 0x10 + (longlong)iVar2 * 0x70),
                        pFVar1,(pdm_ea6cf2fe)0x0);
  }
  if (pFVar3 == (FAggregatePreAnimatedStateMetaData *)0x0) {
    iVar2 = (param_1->GroupHandle).Value;
    if (iVar2 == -1) {
      local_28 = *pFVar1;
      local_30 = &local_28;
      local_20 = 0xffff;
      local_18 = 0;
      local_38 = pFVar1;
      TSet<TTuple<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<UE::MovieScene::FPreAnimatedStateCachedValueHandle_const_&,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData_&&>_>
                ((TSet<TTuple<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>,FDefaultSetAllocator>
                  *)&this->UngroupedMetaData,
                 (TPairInitializer<UE::MovieScene::FPreAnimatedStateCachedValueHandle_const_&,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData_&&>
                  *)&local_res10,(bool *)&local_38);
      pFVar3 = (FAggregatePreAnimatedStateMetaData *)
               (*(longlong *)&(this->UngroupedMetaData).field_0x0 + (longlong)local_res10 * 0x24 + 8
               );
    }
    else {
      lVar5 = (longlong)iVar2 * 0x70 + *(longlong *)&this->GroupMetaData;
      iVar2 = *(int *)(lVar5 + 0x68);
      if (iVar2 == *(int *)(lVar5 + 0x6c)) {
        iVar2 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>_>
                          (0x414,(ForElementType<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>
                                  *)(lVar5 + 0x10),(int *)(lVar5 + 0x6c));
      }
      *(int *)(lVar5 + 0x68) = iVar2 + 1;
      pFVar4 = *(ForElementType<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>
                 **)(lVar5 + 0x60);
      if (*(ForElementType<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>
            **)(lVar5 + 0x60) ==
          (ForElementType<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>
           *)0x0) {
        pFVar4 = (ForElementType<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>
                  *)(lVar5 + 0x10);
      }
      pFVar3 = (FAggregatePreAnimatedStateMetaData *)(pFVar4->InlineData + (longlong)iVar2 * 0x14);
      pFVar3->ValueHandle = *pFVar1;
      (pFVar3->TerminalInstanceHandle).InstanceID = 0xffff;
      (pFVar3->TerminalInstanceHandle).InstanceSerial = 0;
      pFVar3->NumContributors = 0;
      pFVar3->NumRestoreContributors = 0;
      pFVar3->bWantedRestore = false;
      pFVar3->bEligibleForGlobalRestore = false;
    }
  }
  return pFVar3;
}

// GetOrCreateEntityMetaData @ 1461b1f60

/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedEntityCaptureSource * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::GetOrCreateEntityMetaData
          (FPreAnimatedStateExtension *this)

{
  TUniquePtr<UE::MovieScene::FPreAnimatedEntityCaptureSource,TDefaultDelete<UE::MovieScene::FPreAnimatedEntityCaptureSource>_>
  *pTVar1;
  FPreAnimatedEntityCaptureSource *pFVar2;
  FPreAnimatedEntityCaptureSource *pFVar3;
  longlong local_18 [2];
  
  pTVar1 = &this->EntityCaptureSource;
  if ((this->EntityCaptureSource).Ptr == (FPreAnimatedEntityCaptureSource *)0x0) {
    pFVar3 = ::operator_new(0x60);
    if (pFVar3 != (FPreAnimatedEntityCaptureSource *)0x0) {
      *(undefined8 *)&pFVar3->field_0x8 = 0;
      *(undefined8 *)&pFVar3->field_0x10 = 0;
      *(undefined8 *)&pFVar3->field_0x28 = 0;
      *(undefined4 *)&pFVar3->field_0x30 = 0;
      *(undefined4 *)&pFVar3->field_0x34 = 0x80;
      *(undefined4 *)&pFVar3->field_0x3c = 0;
      *(undefined4 *)&pFVar3->field_0x38 = 0xffffffff;
      *(undefined8 *)&pFVar3->field_0x48 = 0;
      *(undefined4 *)&pFVar3->field_0x50 = 0;
      *(undefined ***)pFVar3 = &___7FPreAnimatedEntityCaptureSource_MovieScene_UE__6B_;
      *(FPreAnimatedStateExtension **)&pFVar3->field_0x58 = this;
    }
    if (pTVar1 != (TUniquePtr<UE::MovieScene::FPreAnimatedEntityCaptureSource,TDefaultDelete<UE::MovieScene::FPreAnimatedEntityCaptureSource>_>
                   *)local_18) {
      pFVar2 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar3;
      if (pFVar2 == (FPreAnimatedEntityCaptureSource *)0x0) {
        return pFVar3;
      }
      (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
      return pTVar1->Ptr;
    }
    if (pFVar3 != (FPreAnimatedEntityCaptureSource *)0x0) {
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
    }
  }
  return pTVar1->Ptr;
}

// GetOrCreateEvaluationHookMetaData @ 1461b2030

/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedEvaluationHookCaptureSources * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::GetOrCreateEvaluationHookMetaData
          (FPreAnimatedStateExtension *this)

{
  TUniquePtr<UE::MovieScene::FPreAnimatedEvaluationHookCaptureSources,TDefaultDelete<UE::MovieScene::FPreAnimatedEvaluationHookCaptureSources>_>
  *pTVar1;
  FPreAnimatedEvaluationHookCaptureSources *pFVar2;
  FPreAnimatedEvaluationHookCaptureSources *pFVar3;
  longlong local_18 [2];
  
  pTVar1 = &this->EvaluationHookCaptureSource;
  if ((this->EvaluationHookCaptureSource).Ptr == (FPreAnimatedEvaluationHookCaptureSources *)0x0) {
    pFVar3 = ::operator_new(0x60);
    if (pFVar3 != (FPreAnimatedEvaluationHookCaptureSources *)0x0) {
      *(undefined8 *)&pFVar3->field_0x8 = 0;
      *(undefined8 *)&pFVar3->field_0x10 = 0;
      *(undefined8 *)&pFVar3->field_0x28 = 0;
      *(undefined4 *)&pFVar3->field_0x30 = 0;
      *(undefined4 *)&pFVar3->field_0x34 = 0x80;
      *(undefined4 *)&pFVar3->field_0x3c = 0;
      *(undefined4 *)&pFVar3->field_0x38 = 0xffffffff;
      *(undefined8 *)&pFVar3->field_0x48 = 0;
      *(undefined4 *)&pFVar3->field_0x50 = 0;
      *(undefined ***)pFVar3 = &___7FPreAnimatedEvaluationHookCaptureSources_MovieScene_UE__6B_;
      *(FPreAnimatedStateExtension **)&pFVar3->field_0x58 = this;
    }
    if (pTVar1 != (TUniquePtr<UE::MovieScene::FPreAnimatedEvaluationHookCaptureSources,TDefaultDelete<UE::MovieScene::FPreAnimatedEvaluationHookCaptureSources>_>
                   *)local_18) {
      pFVar2 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar3;
      if (pFVar2 == (FPreAnimatedEvaluationHookCaptureSources *)0x0) {
        return pFVar3;
      }
      (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
      return pTVar1->Ptr;
    }
    if (pFVar3 != (FPreAnimatedEvaluationHookCaptureSources *)0x0) {
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
    }
  }
  return pTVar1->Ptr;
}

// GetOrCreateTemplateMetaData @ 1461b24b0

/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedTemplateCaptureSources * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::GetOrCreateTemplateMetaData
          (FPreAnimatedStateExtension *this)

{
  TUniquePtr<UE::MovieScene::FPreAnimatedTemplateCaptureSources,TDefaultDelete<UE::MovieScene::FPreAnimatedTemplateCaptureSources>_>
  *pTVar1;
  FPreAnimatedTemplateCaptureSources *pFVar2;
  FPreAnimatedTemplateCaptureSources *pFVar3;
  longlong local_18 [2];
  
  pTVar1 = &this->TemplateCaptureSource;
  if ((this->TemplateCaptureSource).Ptr == (FPreAnimatedTemplateCaptureSources *)0x0) {
    pFVar3 = ::operator_new(0x60);
    if (pFVar3 != (FPreAnimatedTemplateCaptureSources *)0x0) {
      *(undefined8 *)&pFVar3->field_0x8 = 0;
      *(undefined8 *)&pFVar3->field_0x10 = 0;
      *(undefined8 *)&pFVar3->field_0x28 = 0;
      *(undefined4 *)&pFVar3->field_0x30 = 0;
      *(undefined4 *)&pFVar3->field_0x34 = 0x80;
      *(undefined4 *)&pFVar3->field_0x3c = 0;
      *(undefined4 *)&pFVar3->field_0x38 = 0xffffffff;
      *(undefined8 *)&pFVar3->field_0x48 = 0;
      *(undefined4 *)&pFVar3->field_0x50 = 0;
      *(undefined ***)pFVar3 = &___7FPreAnimatedTemplateCaptureSources_MovieScene_UE__6B_;
      *(FPreAnimatedStateExtension **)&pFVar3->field_0x58 = this;
    }
    if (pTVar1 != (TUniquePtr<UE::MovieScene::FPreAnimatedTemplateCaptureSources,TDefaultDelete<UE::MovieScene::FPreAnimatedTemplateCaptureSources>_>
                   *)local_18) {
      pFVar2 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar3;
      if (pFVar2 == (FPreAnimatedTemplateCaptureSources *)0x0) {
        return pFVar3;
      }
      (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
      return pTVar1->Ptr;
    }
    if (pFVar3 != (FPreAnimatedTemplateCaptureSources *)0x0) {
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
    }
  }
  return pTVar1->Ptr;
}

// GetOrCreateTrackInstanceInputMetaData @ 1461b2580

/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedTrackInstanceInputCaptureSources * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::GetOrCreateTrackInstanceInputMetaData
          (FPreAnimatedStateExtension *this)

{
  TUniquePtr<UE::MovieScene::FPreAnimatedTrackInstanceInputCaptureSources,TDefaultDelete<UE::MovieScene::FPreAnimatedTrackInstanceInputCaptureSources>_>
  *pTVar1;
  FPreAnimatedTrackInstanceInputCaptureSources *pFVar2;
  FPreAnimatedTrackInstanceInputCaptureSources *pFVar3;
  longlong local_18 [2];
  
  pTVar1 = &this->TrackInstanceInputCaptureSource;
  if ((this->TrackInstanceInputCaptureSource).Ptr ==
      (FPreAnimatedTrackInstanceInputCaptureSources *)0x0) {
    pFVar3 = ::operator_new(0x60);
    if (pFVar3 != (FPreAnimatedTrackInstanceInputCaptureSources *)0x0) {
      *(undefined8 *)&pFVar3->field_0x8 = 0;
      *(undefined8 *)&pFVar3->field_0x10 = 0;
      *(undefined8 *)&pFVar3->field_0x28 = 0;
      *(undefined4 *)&pFVar3->field_0x30 = 0;
      *(undefined4 *)&pFVar3->field_0x34 = 0x80;
      *(undefined4 *)&pFVar3->field_0x3c = 0;
      *(undefined4 *)&pFVar3->field_0x38 = 0xffffffff;
      *(undefined8 *)&pFVar3->field_0x48 = 0;
      *(undefined4 *)&pFVar3->field_0x50 = 0;
      *(undefined ***)pFVar3 = &___7FPreAnimatedTrackInstanceInputCaptureSources_MovieScene_UE__6B_;
      *(FPreAnimatedStateExtension **)&pFVar3->field_0x58 = this;
    }
    if (pTVar1 != (TUniquePtr<UE::MovieScene::FPreAnimatedTrackInstanceInputCaptureSources,TDefaultDelete<UE::MovieScene::FPreAnimatedTrackInstanceInputCaptureSources>_>
                   *)local_18) {
      pFVar2 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar3;
      if (pFVar2 == (FPreAnimatedTrackInstanceInputCaptureSources *)0x0) {
        return pFVar3;
      }
      (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
      return pTVar1->Ptr;
    }
    if (pFVar3 != (FPreAnimatedTrackInstanceInputCaptureSources *)0x0) {
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
    }
  }
  return pTVar1->Ptr;
}

// GetOrCreateTrackInstanceMetaData @ 1461b2650

/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedTrackInstanceCaptureSources * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::GetOrCreateTrackInstanceMetaData
          (FPreAnimatedStateExtension *this)

{
  TUniquePtr<UE::MovieScene::FPreAnimatedTrackInstanceCaptureSources,TDefaultDelete<UE::MovieScene::FPreAnimatedTrackInstanceCaptureSources>_>
  *pTVar1;
  FPreAnimatedTrackInstanceCaptureSources *pFVar2;
  FPreAnimatedTrackInstanceCaptureSources *pFVar3;
  longlong local_18 [2];
  
  pTVar1 = &this->TrackInstanceCaptureSource;
  if ((this->TrackInstanceCaptureSource).Ptr == (FPreAnimatedTrackInstanceCaptureSources *)0x0) {
    pFVar3 = ::operator_new(0x60);
    if (pFVar3 != (FPreAnimatedTrackInstanceCaptureSources *)0x0) {
      *(undefined8 *)&pFVar3->field_0x8 = 0;
      *(undefined8 *)&pFVar3->field_0x10 = 0;
      *(undefined8 *)&pFVar3->field_0x28 = 0;
      *(undefined4 *)&pFVar3->field_0x30 = 0;
      *(undefined4 *)&pFVar3->field_0x34 = 0x80;
      *(undefined4 *)&pFVar3->field_0x3c = 0;
      *(undefined4 *)&pFVar3->field_0x38 = 0xffffffff;
      *(undefined8 *)&pFVar3->field_0x48 = 0;
      *(undefined4 *)&pFVar3->field_0x50 = 0;
      *(undefined ***)pFVar3 = &___7FPreAnimatedTrackInstanceCaptureSources_MovieScene_UE__6B_;
      *(FPreAnimatedStateExtension **)&pFVar3->field_0x58 = this;
    }
    if (pTVar1 != (TUniquePtr<UE::MovieScene::FPreAnimatedTrackInstanceCaptureSources,TDefaultDelete<UE::MovieScene::FPreAnimatedTrackInstanceCaptureSources>_>
                   *)local_18) {
      pFVar2 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar3;
      if (pFVar2 == (FPreAnimatedTrackInstanceCaptureSources *)0x0) {
        return pFVar3;
      }
      (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
      return pTVar1->Ptr;
    }
    if (pFVar3 != (FPreAnimatedTrackInstanceCaptureSources *)0x0) {
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
    }
  }
  return pTVar1->Ptr;
}

// GetStorageRequirement @ 1461b42b0

/* WARNING: Enum "Type": Some values do not have unique names */

EPreAnimatedStorageRequirement __thiscall
UE::MovieScene::FPreAnimatedStateExtension::GetStorageRequirement
          (FPreAnimatedStateExtension *this,FPreAnimatedStateEntry *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  EPreAnimatedStorageRequirement EVar4;
  FAggregatePreAnimatedStateMetaData *pFVar5;
  
  iVar1 = (param_1->GroupHandle).Value;
  if (iVar1 == -1) {
    pFVar5 = TMapBase<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>_>
             ::Find((TMapBase<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>_>
                     *)&this->UngroupedMetaData,&param_1->ValueHandle);
  }
  else {
    pFVar5 = AlgoImpl::
             FindBy<TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_const_&,UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateCachedValueHandle_UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData::*>
                       ((TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                         *)(*(longlong *)&this->GroupMetaData + 0x10 + (longlong)iVar1 * 0x70),
                        &param_1->ValueHandle,(pdm_ea6cf2fe)0x0);
  }
  if (pFVar5 == (FAggregatePreAnimatedStateMetaData *)0x0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1044199200692109443>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateExtension.cpp"
                       ,0x83,"Aggregate");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    return None;
  }
  return (pFVar5->NumRestoreContributors != 0) + Persistent;
}

// GetTemplateMetaData @ 1461b43a0

/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedTemplateCaptureSources * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::GetTemplateMetaData(FPreAnimatedStateExtension *this)

{
  return (this->TemplateCaptureSource).Ptr;
}

// GetTrackInstanceInputMetaData @ 1461b4670

/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedTrackInstanceInputCaptureSources * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::GetTrackInstanceInputMetaData
          (FPreAnimatedStateExtension *this)

{
  return (this->TrackInstanceInputCaptureSource).Ptr;
}

// GetTrackInstanceMetaData @ 1461b4680

/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedTrackInstanceCaptureSources * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::GetTrackInstanceMetaData
          (FPreAnimatedStateExtension *this)

{
  return (this->TrackInstanceCaptureSource).Ptr;
}

// HandleMetaDataToRemove @ 1461b4c90

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedStateExtension::HandleMetaDataToRemove
          (FPreAnimatedStateExtension *this,FRestoreStateParams *param_1,
          TArrayView<UE::MovieScene::FPreAnimatedStateMetaData,int> *param_2,
          TFunctionRef<void___cdecl(UE::MovieScene::IPreAnimatedStorage_&,UE::MovieScene::FPreAnimatedStorageIndex)>
          *param_3)

{
  TMap<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>_>
  *pTVar1;
  FPreAnimatedStateMetaData *pFVar2;
  IPreAnimatedStorage *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  byte bVar6;
  FPreAnimatedStateEntry *pFVar7;
  bool bVar8;
  undefined4 uVar9;
  FAggregatePreAnimatedStateMetaData *pFVar10;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar11;
  ushort uVar12;
  undefined1 *puVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  FPreAnimatedStateCachedValueHandle *pFVar17;
  longlong lVar18;
  undefined1 *puVar19;
  longlong lVar20;
  uint uVar21;
  FPreAnimatedStateMetaData *pFVar22;
  longlong *plVar23;
  uint *puVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  uint local_res18;
  FPreAnimatedStorageID local_100 [2];
  uint local_f8 [2];
  FPreAnimatedStorageID local_f0 [2];
  undefined4 local_e8 [2];
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong *local_c8;
  undefined1 auStack_c0 [16];
  uint uStack_b0;
  uint uStack_ac;
  longlong local_a8;
  TSet<TTuple<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>,FDefaultSetAllocator>
  *pTStack_a0;
  TSet<TTuple<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>,FDefaultSetAllocator>
  *local_98;
  undefined2 local_90;
  longlong *local_88;
  undefined1 *local_80;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>,FDefaultSetAllocator>
  *pTStack_50;
  
  pFVar22 = param_2->DataPtr;
  pFVar2 = pFVar22 + param_2->ArrayNum;
  if (pFVar22 != pFVar2) {
    pFVar7 = &pFVar22->Entry;
    do {
      pFVar17 = &pFVar7->ValueHandle;
      iVar27 = (pFVar22->Entry).GroupHandle.Value;
      if (iVar27 == -1) {
        pFVar10 = TMapBase<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>_>
                  ::Find((TMapBase<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>_>
                          *)&this->UngroupedMetaData,pFVar17);
      }
      else {
        pFVar10 = AlgoImpl::
                  FindBy<TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_&,UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateCachedValueHandle_UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData::*>
                            ((TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                              *)((longlong)iVar27 * 0x70 + *(longlong *)&this->GroupMetaData + 0x10)
                             ,pFVar17,(pdm_ea6cf2fe)0x0);
      }
      if (pFVar10 == (FAggregatePreAnimatedStateMetaData *)0x0) {
        bVar8 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1044199200692110056>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateExtension.cpp"
                           ,0x2e8,"Aggregate");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        uVar12 = pFVar10->NumContributors - 1;
        pFVar10->NumContributors = uVar12;
        if (*(char *)((longlong)(pFVar17 + 1) + 4) != '\0') {
          pFVar10->NumRestoreContributors = pFVar10->NumRestoreContributors - 1;
        }
        if (uVar12 == 0) {
          pFVar10->bWantedRestore = false;
          pFVar10->TerminalInstanceHandle = *(FInstanceHandle *)(pFVar17 + 1);
        }
      }
      pFVar22 = pFVar22 + 1;
      pFVar7 = (FPreAnimatedStateEntry *)(pFVar17 + 2);
    } while (pFVar22 != pFVar2);
  }
  iVar27 = 0;
  if (0 < *(int *)&(this->GroupMetaData).field_0x8) {
    puVar19 = &(this->GroupMetaData).field_0x10;
    local_res18 = 1;
    local_d8 = 0;
    local_80 = puVar19;
    do {
      lVar20 = local_d8;
      if (((iVar27 < 0) || (*(int *)(puVar19 + 0x18) <= iVar27)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar13 = puVar19;
      if (*(undefined1 **)(puVar19 + 0x10) != (undefined1 *)0x0) {
        puVar13 = *(undefined1 **)(puVar19 + 0x10);
      }
      iVar25 = iVar27;
      if (iVar27 < 0) {
        iVar25 = iVar27 + 0x1f;
      }
      local_d0 = (longlong)(iVar25 >> 5) * 4;
      if ((*(uint *)(puVar13 + local_d0) & local_res18) != 0) {
        plVar23 = (longlong *)(*(longlong *)&this->GroupMetaData + lVar20);
        uVar26 = (int)plVar23[0xd] - 1;
        local_88 = plVar23;
        if ((int)uVar26 < 0) {
          puVar19 = &(this->GroupMetaData).field_0x10;
        }
        else {
          local_e0 = (longlong)(int)uVar26;
          lVar18 = local_e0 * 0x14;
          do {
            uVar21 = 0;
            if ((int)uVar26 < (int)plVar23[0xd]) {
              uVar21 = ~uVar26 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            plVar14 = plVar23 + 2;
            if ((longlong *)plVar23[0xc] != (longlong *)0x0) {
              plVar14 = (longlong *)plVar23[0xc];
            }
            puVar24 = (uint *)((longlong)plVar14 + lVar18);
            if ((short)puVar24[3] == 0) {
              if ((short)puVar24[2] != -1) {
                if (((ushort)puVar24[2] != (param_1->TerminalInstanceHandle).InstanceID) ||
                   ((ushort)(puVar24[2] >> 0x10) != (param_1->TerminalInstanceHandle).InstanceSerial
                   )) goto LAB_1461b4fde;
              }
              local_100[0].TypeID = *puVar24;
              pTVar11 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
                        ::Find(&this->StorageImplementations,local_100);
              if ((pTVar11 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Value != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                                     ,0x148,L""), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pIVar3 = pTVar11->Object;
              pTVar4 = (pTVar11->SharedReferenceCount).ReferenceController;
              if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_f8[0] = puVar24[1];
              (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,pIVar3,local_f8);
              uVar21 = 0;
              if ((int)uVar26 < (int)plVar23[0xd]) {
                uVar21 = ~uVar26 >> 0x1f;
              }
              if ((uVar21 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              plVar14 = plVar23 + 2;
              if ((longlong *)plVar23[0xc] != (longlong *)0x0) {
                plVar14 = (longlong *)plVar23[0xc];
              }
              iVar25 = ~uVar26 + (int)plVar23[0xd];
              if (iVar25 != 0) {
                memmove((void *)((longlong)plVar14 + lVar18),
                        (void *)((longlong)plVar14 + lVar18 + 0x14),(longlong)iVar25 * 0x14);
              }
              *(int *)(plVar23 + 0xd) = (int)plVar23[0xd] + -1;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar4);
            }
LAB_1461b4fde:
            plVar14 = local_88;
            if ((int)local_88[0xd] == 0) {
              if ((*local_88 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              (**(code **)(*(longlong *)*plVar14 + 0x10))((longlong *)*plVar14,iVar27);
              TSparseArray<UE::MovieScene::FPreAnimatedStateExtension::FPreAnimatedGroupMetaData,FDefaultSparseArrayAllocator>
              ::DestroyElements(&this->GroupMetaData,iVar27,1);
              lVar20 = *(longlong *)&this->GroupMetaData;
              puVar19 = &(this->GroupMetaData).field_0x10;
              bVar6 = (byte)iVar27 & 0x1f;
              uVar21 = 1 << bVar6 | 1U >> 0x20 - bVar6;
              if (((iVar27 < 0) || (*(int *)&(this->GroupMetaData).field_0x28 <= iVar27)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5be,L""), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              puVar13 = *(undefined1 **)&(this->GroupMetaData).field_0x20;
              puVar15 = puVar19;
              if (puVar13 != (undefined1 *)0x0) {
                puVar15 = puVar13;
              }
              if (((*(uint *)(puVar15 + local_d0) & uVar21) == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("AllocationFlags[Index]",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                     ,0xc5,L""), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (*(int *)&(this->GroupMetaData).field_0x34 != 0) {
                *(int *)((longlong)*(int *)&(this->GroupMetaData).field_0x30 * 0x70 + lVar20) =
                     iVar27;
              }
              *(undefined4 *)(lVar20 + local_d8) = 0xffffffff;
              if (*(int *)&(this->GroupMetaData).field_0x34 < 1) {
                uVar9 = 0xffffffff;
              }
              else {
                uVar9 = *(undefined4 *)&(this->GroupMetaData).field_0x30;
              }
              *(undefined4 *)(lVar20 + 4 + local_d8) = uVar9;
              puVar13 = &(this->GroupMetaData).field_0x34;
              *(int *)puVar13 = *(int *)puVar13 + 1;
              *(int *)&(this->GroupMetaData).field_0x30 = iVar27;
              if (((iVar27 < 0) || (*(int *)&(this->GroupMetaData).field_0x28 <= iVar27)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5be,L""), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              puVar13 = *(undefined1 **)&(this->GroupMetaData).field_0x20;
              if (puVar13 != (undefined1 *)0x0) {
                puVar19 = puVar13;
              }
              *(uint *)(puVar19 + local_d0) = *(uint *)(puVar19 + local_d0) & ~uVar21;
            }
            lVar18 = lVar18 + -0x14;
            local_e0 = local_e0 + -1;
            uVar26 = uVar26 - 1;
            lVar20 = local_d8;
            puVar19 = local_80;
          } while (-1 < (int)uVar26);
        }
      }
      local_res18 = local_res18 << 1 | (uint)((int)local_res18 < 0);
      local_d8 = lVar20 + 0x70;
      iVar27 = iVar27 + 1;
    } while (iVar27 < *(int *)&(this->GroupMetaData).field_0x8);
  }
  pTVar1 = &this->UngroupedMetaData;
  TSet<TTuple<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>,FDefaultSetAllocator>
              *)pTVar1);
  stack0xffffffffffffff48 = local_78._16_16_;
  local_c8 = (longlong *)local_78._0_8_;
  auStack_c0._0_8_ = local_78._8_8_;
  local_90 = 0;
  local_a8 = local_58;
  pTStack_a0 = pTStack_50;
  uVar16 = local_78._24_8_ >> 0x20;
  local_98 = (TSet<TTuple<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>,FDefaultSetAllocator>
              *)pTVar1;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      lVar20 = *local_c8 + (longlong)(int)uVar16 * 0x24;
      if (*(short *)(*local_c8 + 0x14 + (longlong)(int)uVar16 * 0x24) == 0) {
        if (*(short *)(lVar20 + 0x10) != -1) {
          if (((ushort)*(undefined4 *)(lVar20 + 0x10) !=
               (param_1->TerminalInstanceHandle).InstanceID) ||
             ((ushort)((uint)*(undefined4 *)(lVar20 + 0x10) >> 0x10) !=
              (param_1->TerminalInstanceHandle).InstanceSerial)) goto LAB_1461b52b9;
        }
        local_f0[0].TypeID = *(uint *)(lVar20 + 8);
        pTVar11 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
                  ::Find(&this->StorageImplementations,local_f0);
        if ((pTVar11 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Value != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                               ,0x148,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pIVar3 = pTVar11->Object;
        pTVar4 = (pTVar11->SharedReferenceCount).ReferenceController;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_e8[0] = *(undefined4 *)(lVar20 + 0xc);
        (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,pIVar3,local_e8);
        TSet<TTuple<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_a0,uStack_ac);
        local_90 = CONCAT11(local_90._1_1_,1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      }
LAB_1461b52b9:
      uStack_b0 = uStack_b0 & ~auStack_c0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_c0);
      uVar16 = (ulonglong)uStack_ac;
    } while ((int)uStack_ac < *(int *)(auStack_c0._8_8_ + 0x18));
    iVar27 = 1;
    if (((char)local_90 != '\0') && (local_90._1_1_ != '\0')) {
      uVar26 = *(int *)&(local_98->Elements).field_0x8 - *(int *)&(local_98->Elements).field_0x34;
      if (3 < uVar26) {
        uVar16 = (ulonglong)((uVar26 >> 1) + 7) * 2 + 1;
        lVar20 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar27 = 1 << ((byte)lVar20 & 0x1f);
      }
      if (((0 < (int)uVar26) && (local_98->HashSize < iVar27)) || (iVar27 < local_98->HashSize)) {
        local_98->HashSize = iVar27;
        TSet<TTuple<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>,FDefaultSetAllocator>
        ::Rehash(local_98);
      }
    }
  }
  TSparseArrayBase<112,8,FDefaultSparseArrayAllocator>::Shrink
            ((TSparseArrayBase<112,8,FDefaultSparseArrayAllocator> *)&this->GroupMetaData);
  this->bEntriesInvalidated = true;
  return;
}

// HasActiveCaptureSource @ 1461b53c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::FPreAnimatedStateExtension::HasActiveCaptureSource(FPreAnimatedStateExtension *this)

{
  longlong lVar1;
  UMovieSceneEntitySystemLinker *pUVar2;
  undefined1 local_res10 [24];
  
  lVar1 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xee8);
  if (lVar1 != 0) {
    pUVar2 = (UMovieSceneEntitySystemLinker *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar1 + 0x1c));
    if (pUVar2 != this->Linker) {
      `UE::MovieScene::FPreAnimatedStateExtension::HasActiveCaptureSource'::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (*(char *)(lVar1 + 0x30) != '\0') {
      return true;
    }
  }
  return false;
}

// Initialize @ 1461b6320

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedStateExtension::Initialize
          (FPreAnimatedStateExtension *this,UMovieSceneEntitySystemLinker *param_1)

{
  this->Linker = param_1;
  TMulticastDelegateRegistration<void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
  ::AddRaw<UE::MovieScene::FPreAnimatedStateExtension>
            ((TMulticastDelegateRegistration<void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
              *)&(param_1->Events).AddReferencedObjects,
             (FPreAnimatedStateExtension *)&stack0x00000008,(pmf_bae92cd5)this);
  return;
}

// MetaDataExists @ 1461bea10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::FPreAnimatedStateExtension::MetaDataExists
          (FPreAnimatedStateExtension *this,FPreAnimatedStateEntry *param_1)

{
  int iVar1;
  FAggregatePreAnimatedStateMetaData *pFVar2;
  
  iVar1 = (param_1->GroupHandle).Value;
  if (iVar1 != -1) {
    pFVar2 = AlgoImpl::
             FindBy<TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_const_&,UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateCachedValueHandle_UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData::*>
                       ((TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                         *)(*(longlong *)&this->GroupMetaData + 0x10 + (longlong)iVar1 * 0x70),
                        &param_1->ValueHandle,(pdm_ea6cf2fe)0x0);
    return pFVar2 != (FAggregatePreAnimatedStateMetaData *)0x0;
  }
  pFVar2 = TMapBase<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>_>
           ::Find((TMapBase<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>_>
                   *)&this->UngroupedMetaData,&param_1->ValueHandle);
  return pFVar2 != (FAggregatePreAnimatedStateMetaData *)0x0;
}

// OnObjectsReplaced @ 1461c0200

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedStateExtension::OnObjectsReplaced
          (FPreAnimatedStateExtension *this,
          TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<UE::MovieScene::FPreAnimatedObjectGroupManager,1> local_18;
  
  FindGroupManager<UE::MovieScene::FPreAnimatedObjectGroupManager>(this,&local_18);
  if (local_18.Object != (FPreAnimatedObjectGroupManager *)0x0) {
    if (local_18.Object == (FPreAnimatedObjectGroupManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FPreAnimatedObjectGroupManager::OnObjectsReplaced(local_18.Object,param_1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// RegisterStorageInternal @ 1461c5320

FPreAnimatedStorageID __cdecl
UE::MovieScene::FPreAnimatedStateExtension::RegisterStorageInternal(void)

{
  uint *in_RCX;
  
  NextID = NextID + 1;
  *in_RCX = NextID;
  return (FPreAnimatedStorageID)(uint)in_RCX;
}

// RemoveMetaData @ 1461cace0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedStateExtension::RemoveMetaData
          (FPreAnimatedStateExtension *this,FPreAnimatedStateMetaData *param_1)

{
  ushort *puVar1;
  FPreAnimatedStorageGroupHandle FVar2;
  uint uVar3;
  uint uVar4;
  IPreAnimatedStorage *pIVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  FAggregatePreAnimatedStateMetaData *pFVar10;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar11;
  longlong lVar12;
  TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar13;
  longlong lVar14;
  int iVar15;
  FPreAnimatedStateCachedValueHandle *pFVar16;
  undefined1 *puVar17;
  ushort uVar18;
  FPreAnimatedStorageID local_res10 [2];
  UMovieSceneEntitySystemLinker *local_38;
  FRootInstanceHandle local_30;
  
  iVar15 = (param_1->Entry).GroupHandle.Value;
  pFVar16 = &(param_1->Entry).ValueHandle;
  if (iVar15 == -1) {
    pFVar10 = TMapBase<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>_>
              ::Find((TMapBase<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>_>
                      *)&this->UngroupedMetaData,pFVar16);
  }
  else {
    pFVar10 = AlgoImpl::
              FindBy<TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_&,UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateCachedValueHandle_UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData::*>
                        ((TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                          *)(*(longlong *)&this->GroupMetaData + 0x10 + (longlong)iVar15 * 0x70),
                         pFVar16,(pdm_ea6cf2fe)0x0);
  }
  if (pFVar10 == (FAggregatePreAnimatedStateMetaData *)0x0) {
    return;
  }
  uVar18 = pFVar10->NumContributors - 1;
  pFVar10->NumContributors = uVar18;
  if (param_1->bWantsRestoreState != false) {
    puVar1 = &pFVar10->NumRestoreContributors;
    *puVar1 = *puVar1 - 1;
    if (*puVar1 == 0) {
      local_res10[0].TypeID = (param_1->Entry).ValueHandle.TypeID.TypeID;
      pTVar11 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
                ::Find(&this->StorageImplementations,local_res10);
      if ((pTVar11 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                             ,0x148,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pIVar5 = pTVar11->Object;
      pTVar6 = (pTVar11->SharedReferenceCount).ReferenceController;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_38 = this->Linker;
      local_30 = param_1->RootInstanceHandle;
      if ((pIVar5 == (IPreAnimatedStorage *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      cVar9 = (**(code **)(*(longlong *)pIVar5 + 0x20))
                        (pIVar5,(param_1->Entry).ValueHandle.StorageIndex.Value,2,uVar18 != 0,
                         &local_38);
      if (cVar9 == '\0') {
        FVar2.Value = (param_1->Entry).GroupHandle.Value;
        if (FVar2.Value == -1) {
          if (*(int *)&(this->UngroupedMetaData).field_0x8 !=
              *(int *)&(this->UngroupedMetaData).field_0x34) {
            puVar17 = *(undefined1 **)&(this->UngroupedMetaData).field_0x40;
            uVar3 = (param_1->Entry).ValueHandle.TypeID.TypeID;
            uVar4 = (param_1->Entry).ValueHandle.StorageIndex.Value;
            if (puVar17 == (undefined1 *)0x0) {
              puVar17 = &(this->UngroupedMetaData).field_0x38;
            }
            iVar15 = *(int *)(puVar17 +
                             ((longlong)(int)(uVar3 ^ uVar4) &
                             (longlong)*(int *)&(this->UngroupedMetaData).field_0x48 - 1U) * 4);
            if (iVar15 != -1) {
              lVar12 = *(longlong *)&(this->UngroupedMetaData).field_0x0;
              while ((lVar14 = (longlong)iVar15, *(uint *)(lVar12 + lVar14 * 0x24) != uVar3 ||
                     (*(uint *)(lVar12 + 4 + lVar14 * 0x24) != uVar4))) {
                iVar15 = *(int *)(lVar12 + 0x1c + lVar14 * 0x24);
                if (iVar15 == -1) {
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTVar6);
                  return;
                }
              }
              TSet<TTuple<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>,FDefaultSetAllocator>
              ::RemoveByIndex((TSet<TTuple<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>,FDefaultSetAllocator>
                               *)&this->UngroupedMetaData,iVar15);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar6);
          return;
        }
        lVar12 = *(longlong *)&this->GroupMetaData + (longlong)FVar2.Value * 0x70;
        if (*(int *)(lVar12 + 0x68) == 1) {
          FreeGroupInternal(this,FVar2);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar6);
          return;
        }
        pTVar13 = *(TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    **)(lVar12 + 0x60);
        if (*(TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              **)(lVar12 + 0x60) ==
            (TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
             *)0x0) {
          pTVar13 = (TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                     *)(lVar12 + 0x10);
        }
        TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
        ::RemoveAt((TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)(lVar12 + 0x10),(int)(((longlong)pFVar10 - (longlong)pTVar13) / 0x14),No);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        return;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    }
  }
  if (uVar18 == 0) {
    pFVar10->bWantedRestore = false;
    pFVar10->TerminalInstanceHandle = *(FInstanceHandle *)&param_1->RootInstanceHandle;
  }
  return;
}

// RemoveWeakCaptureSource @ 1461cbd40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedStateExtension::RemoveWeakCaptureSource
          (FPreAnimatedStateExtension *this,
          TWeakPtr<UE::MovieScene::IPreAnimatedCaptureSource,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TWeakPtr<UE::MovieScene::IPreAnimatedCaptureSource,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  pTVar4 = (TWeakPtr<UE::MovieScene::IPreAnimatedCaptureSource,1> *)
           (this->WeakExternalCaptureSources).AllocatorInstance.Data;
  if (((pTVar4 <= param_1) && (param_1 < pTVar4 + (this->WeakExternalCaptureSources).ArrayMax)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar3 = (this->WeakExternalCaptureSources).ArrayNum;
  if (iVar3 != 0) {
    iVar12 = 0;
    pTVar4 = (TWeakPtr<UE::MovieScene::IPreAnimatedCaptureSource,1> *)
             (this->WeakExternalCaptureSources).AllocatorInstance.Data;
    bVar8 = TWeakPtr<UE::MovieScene::IPreAnimatedCaptureSource,1>::
            UEOpEquals<UE::MovieScene::IPreAnimatedCaptureSource>(pTVar4,param_1);
    bVar8 = !bVar8;
    iVar10 = 0;
    do {
      iVar7 = iVar10;
      do {
        iVar7 = iVar7 + 1;
        if (iVar3 <= iVar7) break;
        bVar9 = TWeakPtr<UE::MovieScene::IPreAnimatedCaptureSource,1>::
                UEOpEquals<UE::MovieScene::IPreAnimatedCaptureSource>(pTVar4 + iVar7,param_1);
      } while (bVar8 == !bVar9);
      iVar11 = iVar7 - iVar10;
      if (bVar8 == false) {
        DestructItems<TWeakPtr<UE::MovieScene::IPreAnimatedCaptureSource,1>,int>
                  (pTVar4 + iVar10,iVar11);
      }
      else {
        if (iVar12 != iVar10) {
          memmove(pTVar4 + iVar12,pTVar4 + iVar10,(longlong)iVar11 << 4);
        }
        iVar12 = iVar12 + iVar11;
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar10 = iVar7;
    } while (iVar7 < iVar3);
    (this->WeakExternalCaptureSources).ArrayNum = iVar12;
  }
  pTVar5 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x0001461cbedd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      return;
    }
  }
  return;
}

// ReplaceObjectForGroup @ 1461cc340

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedStateExtension::ReplaceObjectForGroup
          (FPreAnimatedStateExtension *this,FPreAnimatedStorageGroupHandle param_1,
          FObjectKey *param_2,FObjectKey *param_3)

{
  uint *puVar1;
  uint uVar2;
  IPreAnimatedStorage *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar7;
  uint *puVar8;
  uint *puVar9;
  FPreAnimatedStorageID local_res8 [2];
  undefined1 local_res10 [8];
  FObjectKey *local_res18;
  
  puVar9 = *(uint **)((longlong)param_1.Value * 0x70 + 0x60 + *(longlong *)&this->GroupMetaData);
  puVar8 = (uint *)(*(longlong *)&this->GroupMetaData + 0x10 + (longlong)param_1.Value * 0x70);
  if (puVar9 == (uint *)0x0) {
    puVar9 = puVar8;
  }
  uVar2 = puVar8[0x16];
  puVar1 = puVar9 + (longlong)(int)uVar2 * 5;
  local_res18 = param_2;
  while( true ) {
    if (puVar8[0x16] != uVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (puVar9 == puVar1) break;
    local_res8[0].TypeID = *puVar9;
    pTVar7 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
             ::Find(&this->StorageImplementations,local_res8);
    if (pTVar7 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x148,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pIVar3 = pTVar7->Object;
    pTVar4 = (pTVar7->SharedReferenceCount).ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pIVar3 == (IPreAnimatedStorage *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    (**(code **)(*(longlong *)pIVar3 + 0x18))(pIVar3,puVar9[1],local_res18,param_3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    puVar9 = puVar9 + 5;
  }
  return;
}

// RestoreGlobalState @ 1461ce2d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedStateExtension::RestoreGlobalState
          (FPreAnimatedStateExtension *this,FRestoreStateParams *param_1)

{
  TArray<TWeakPtr<UE::MovieScene::IPreAnimatedCaptureSource,1>,TSizedDefaultAllocator<32>_> *this_00
  ;
  FPreAnimatedEntityCaptureSource *pFVar1;
  FPreAnimatedTrackInstanceCaptureSources *pFVar2;
  FPreAnimatedTrackInstanceInputCaptureSources *pFVar3;
  FPreAnimatedTemplateCaptureSources *pFVar4;
  FPreAnimatedEvaluationHookCaptureSources *pFVar5;
  FScriptContainerElement *pFVar6;
  UMovieSceneEntitySystemLinker *pUVar7;
  longlong *plVar8;
  code *pcVar9;
  atomic<int> aVar10;
  bool bVar11;
  atomic<int> aVar12;
  uint uVar13;
  TReferenceControllerBase<1> *pTVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  undefined1 local_res10 [8];
  FPreAnimatedStateMetaData *local_88;
  undefined8 local_80;
  FPreAnimatedStateMetaData *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  code *local_68;
  UMovieSceneEntitySystemLinker **local_60;
  UMovieSceneEntitySystemLinker *local_58;
  undefined8 uStack_50;
  TArrayView<UE::MovieScene::FPreAnimatedStateMetaData,int> local_48;
  
  pFVar1 = (this->EntityCaptureSource).Ptr;
  local_88 = (FPreAnimatedStateMetaData *)0x0;
  local_80 = 0;
  if (pFVar1 != (FPreAnimatedEntityCaptureSource *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x18))(pFVar1,param_1,&local_88);
  }
  pFVar2 = (this->TrackInstanceCaptureSource).Ptr;
  if (pFVar2 != (FPreAnimatedTrackInstanceCaptureSources *)0x0) {
    (**(code **)(*(longlong *)pFVar2 + 0x18))(pFVar2,param_1,&local_88);
  }
  pFVar3 = (this->TrackInstanceInputCaptureSource).Ptr;
  if (pFVar3 != (FPreAnimatedTrackInstanceInputCaptureSources *)0x0) {
    (**(code **)(*(longlong *)pFVar3 + 0x18))(pFVar3,param_1,&local_88);
  }
  pFVar4 = (this->TemplateCaptureSource).Ptr;
  if (pFVar4 != (FPreAnimatedTemplateCaptureSources *)0x0) {
    (**(code **)(*(longlong *)pFVar4 + 0x18))(pFVar4,param_1,&local_88);
  }
  pFVar5 = (this->EvaluationHookCaptureSource).Ptr;
  if (pFVar5 != (FPreAnimatedEvaluationHookCaptureSources *)0x0) {
    (**(code **)(*(longlong *)pFVar5 + 0x18))(pFVar5,param_1,&local_88);
  }
  iVar16 = (this->WeakExternalCaptureSources).ArrayNum;
  uVar15 = iVar16 - 1;
  if (-1 < (int)uVar15) {
    this_00 = &this->WeakExternalCaptureSources;
    lVar17 = (longlong)(int)uVar15 << 4;
    do {
      uVar13 = 0;
      if ((int)uVar15 < (this->WeakExternalCaptureSources).ArrayNum) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar6 = (this_00->AllocatorInstance).Data;
      pTVar14 = *(TReferenceControllerBase<1> **)(pFVar6 + lVar17 + 8);
      if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
LAB_1461ce424:
        uVar13 = 0;
        if (iVar16 <= (this->WeakExternalCaptureSources).ArrayNum) {
          uVar13 = ~uVar15 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        TArray<TWeakPtr<UE::MovieScene::IPreAnimatedCaptureSource,1>,TSizedDefaultAllocator<32>_>::
        RemoveAtSwapImpl(this_00,uVar15,1);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_00->AllocatorInstance,(this->WeakExternalCaptureSources).ArrayNum,
                   &(this->WeakExternalCaptureSources).ArrayMax);
      }
      else {
        aVar10 = pTVar14->SharedReferenceCount;
        do {
          if (aVar10 == (atomic<int>)0x0) {
            pTVar14 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_1461ce424;
          }
          LOCK();
          aVar12 = pTVar14->SharedReferenceCount;
          bVar11 = aVar10 == aVar12;
          if (bVar11) {
            pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar10 + 1);
            aVar12 = aVar10;
          }
          UNLOCK();
          aVar10 = aVar12;
        } while (!bVar11);
        plVar8 = *(longlong **)(pFVar6 + lVar17);
        if (plVar8 == (longlong *)0x0) goto LAB_1461ce424;
        (**(code **)(*plVar8 + 0x18))(plVar8,param_1,&local_88);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      iVar16 = iVar16 + -1;
      lVar17 = lVar17 + -0x10;
      uVar15 = uVar15 - 1;
    } while (-1 < (int)uVar15);
  }
  local_58 = param_1->Linker;
  uStack_50 = *(undefined8 *)&param_1->TerminalInstanceHandle;
  iVar16 = (int)local_80;
  local_60 = &local_58;
  local_68 = Core::Private::Function::
             TFunctionRefCaller<`UE::MovieScene::FPreAnimatedStateExtension::RestoreGlobalState'::__l2::<lambda_1>,void,UE::MovieScene::IPreAnimatedStorage_&,UE::MovieScene::FPreAnimatedStorageIndex>
             ::Call;
  local_78 = local_88;
  if (((int)local_80 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iStack_70 = iVar16;
  local_48._12_4_ = uStack_6c;
  local_48.ArrayNum = iVar16;
  local_48.DataPtr = local_78;
  HandleMetaDataToRemove
            (this,param_1,&local_48,
             (TFunctionRef<void___cdecl(UE::MovieScene::IPreAnimatedStorage_&,UE::MovieScene::FPreAnimatedStorageIndex)>
              *)&local_68);
  if ((param_1->TerminalInstanceHandle).InstanceID != 0xffff) {
    pUVar7 = this->Linker;
    if (((pUVar7->InstanceRegistry).Ptr == (FInstanceRegistry *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InstanceRegistry.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                            ,0x96,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    bVar11 = FInstanceRegistry::IsHandleValid
                       ((pUVar7->InstanceRegistry).Ptr,param_1->TerminalInstanceHandle);
    if ((bVar11) ||
       (local_res10[0] = bVar11,
       bVar11 = `UE::MovieScene::FPreAnimatedStateExtension::RestoreGlobalState'::__l25::<lambda_2>
                ::operator()(local_res10), bVar11)) {
      pUVar7 = this->Linker;
      if (((pUVar7->InstanceRegistry).Ptr == (FInstanceRegistry *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InstanceRegistry.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                              ,0x96,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FSequenceInstance::InvalidateCachedData
                ((FSequenceInstance *)
                 ((ulonglong)(param_1->TerminalInstanceHandle).InstanceID * 0x140 +
                 *(longlong *)&((pUVar7->InstanceRegistry).Ptr)->Instances),All);
    }
  }
  if (local_88 != (FPreAnimatedStateMetaData *)0x0) {
    FMemory::Free(local_88);
  }
  return;
}

// RestoreStateForGroup @ 1461cfa90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedStateExtension::RestoreStateForGroup
          (FPreAnimatedStateExtension *this,FPreAnimatedStorageGroupHandle param_1,
          FRestoreStateParams *param_2)

{
  longlong lVar1;
  IPreAnimatedStorage *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  FPreAnimatedStorageID local_res10 [2];
  
  uVar9 = *(int *)((longlong)param_1.Value * 0x70 + 0x68 + *(longlong *)&this->GroupMetaData) - 1;
  if (-1 < (int)uVar9) {
    lVar1 = (longlong)param_1.Value * 0x70 + *(longlong *)&this->GroupMetaData;
    lVar10 = (longlong)(int)uVar9 * 0x14;
    do {
      uVar6 = 0;
      if ((int)uVar9 < *(int *)(lVar1 + 0x68)) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar8 = lVar1 + 0x10;
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        lVar8 = *(longlong *)(lVar1 + 0x60);
      }
      local_res10[0].TypeID = *(uint *)(lVar8 + lVar10);
      pTVar7 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
               ::Find(&this->StorageImplementations,local_res10);
      if ((pTVar7 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                             ,0x148,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pIVar2 = pTVar7->Object;
      pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pIVar2 == (IPreAnimatedStorage *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(*(longlong *)pIVar2 + 0x20))
                (pIVar2,*(undefined4 *)(lVar8 + 4 + lVar10),1,3,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      lVar10 = lVar10 + -0x14;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  return;
}

// SavePreAnimatedState @ 1461d0820

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedStateExtension::SavePreAnimatedState
          (FPreAnimatedStateExtension *this,UObject *param_1,FMovieSceneAnimTypeID param_2,
          IMovieScenePreAnimatedTokenProducer *param_3)

{
  bool bVar1;
  
  bVar1 = HasActiveCaptureSource(this);
  if ((bVar1) || (this->NumRequestsForGlobalState != 0)) {
    SavePreAnimatedStateDirectly(this,param_1,param_2,param_3);
  }
  return;
}

// SavePreAnimatedState @ 1461d0880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedStateExtension::SavePreAnimatedState
          (FPreAnimatedStateExtension *this,FMovieSceneAnimTypeID param_1,
          IMovieScenePreAnimatedGlobalTokenProducer *param_2)

{
  bool bVar1;
  
  bVar1 = HasActiveCaptureSource(this);
  if ((bVar1) || (this->NumRequestsForGlobalState != 0)) {
    SavePreAnimatedStateDirectly(this,param_1,param_2);
  }
  return;
}

// SavePreAnimatedStateDirectly @ 1461d08d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedStateExtension::SavePreAnimatedStateDirectly
          (FPreAnimatedStateExtension *this,UObject *param_1,FMovieSceneAnimTypeID param_2,
          IMovieScenePreAnimatedTokenProducer *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  byte bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TPreAnimatedStateGroupManager<FObjectKey> *this_00;
  code *pcVar5;
  atomic<int> aVar6;
  FAggregatePreAnimatedStateMetaData *pFVar7;
  longlong lVar8;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *pTVar9;
  undefined8 *puVar10;
  TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits> *this_01;
  char cVar11;
  bool bVar12;
  undefined1 auStackY_128 [32];
  FSharedReferencer<1> local_f0 [2];
  FPreAnimatedStorageIndex local_e0 [2];
  FPreAnimatedStorageIndex local_d8 [2];
  FWeakObjectPtr local_d0;
  FPreAnimatedStateEntry local_c8;
  undefined1 local_b8 [8];
  FWeakObjectPtr local_b0;
  FWeakObjectPtr local_a8;
  FWeakObjectPtr local_a0;
  ulong64 local_98;
  TSharedPtr<UE::MovieScene::FAnimTypePreAnimatedStateObjectStorage,1> local_90;
  UObject *local_80;
  UObject *local_78;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> local_70;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_f0[0].ReferenceController =
       (this->WeakGenericObjectStorage).WeakReferenceCount.ReferenceController;
  if (local_f0[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = (local_f0[0].ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        local_f0[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1461d0951;
      }
      LOCK();
      aVar6 = (local_f0[0].ReferenceController)->SharedReferenceCount;
      bVar12 = aVar2 == aVar6;
      if (bVar12) {
        (local_f0[0].ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar6;
    } while (!bVar12);
  }
  if ((local_f0[0].ReferenceController == (TReferenceControllerBase<1> *)0x0) ||
     (this_01 = (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits> *)
                (this->WeakGenericObjectStorage).Object,
     this_01 == (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits> *)0x0)) {
LAB_1461d0951:
    GetOrCreateStorage<UE::MovieScene::FAnimTypePreAnimatedStateObjectStorage>
              (this,&local_90,
               (TPreAnimatedStorageID<UE::MovieScene::FAnimTypePreAnimatedStateObjectStorage>)
               FAnimTypePreAnimatedStateObjectStorage::StorageID);
    this_01 = (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits> *)
              local_90.Object;
    local_90.Object = (FAnimTypePreAnimatedStateObjectStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_f0,&local_90.SharedReferenceCount)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_90.SharedReferenceCount.ReferenceController);
    (this->WeakGenericObjectStorage).Object = (FAnimTypePreAnimatedStateObjectStorage *)this_01;
    if (local_f0[0].ReferenceController !=
        (this->WeakGenericObjectStorage).WeakReferenceCount.ReferenceController) {
      if (local_f0[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_f0[0].ReferenceController)->WeakReferenceCount =
             (atomic<int>)((int)(local_f0[0].ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar4 = (this->WeakGenericObjectStorage).WeakReferenceCount.ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
      (this->WeakGenericObjectStorage).WeakReferenceCount.ReferenceController =
           local_f0[0].ReferenceController;
    }
    if ((this_01 == (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits> *)0x0)
       && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_a0.ObjectIndex = 0;
  local_a0.ObjectSerialNumber = 0;
  if (param_1 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_1);
    }
    local_d0.ObjectIndex = 0;
    local_d0.ObjectSerialNumber = 0;
    local_80 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_d0,(FObjectPtr)&local_80);
    local_a0 = local_d0;
  }
  local_98 = param_2.ID;
  if ((*(longlong *)&this_01->Traits == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00 = *(TPreAnimatedStateGroupManager<FObjectKey> **)&this_01->Traits;
  local_a8.ObjectIndex = 0;
  local_a8.ObjectSerialNumber = 0;
  if (param_1 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_1);
    }
    local_b0.ObjectIndex = 0;
    local_b0.ObjectSerialNumber = 0;
    local_78 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_78);
    local_a8 = local_b0;
  }
  TPreAnimatedStateGroupManager<FObjectKey>::MakeGroupForKey(this_00,(FObjectKey *)local_b8);
  TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits>::GetOrCreateStorageIndex
            (this_01,(TTuple<FObjectKey,FMovieSceneAnimTypeID> *)(local_b8 + 4));
  local_c8.GroupHandle.Value = local_b8._0_4_;
  local_c8.ValueHandle.TypeID.TypeID = (uint)FAnimTypePreAnimatedStateObjectStorage::StorageID;
  local_c8.ValueHandle.StorageIndex.Value = local_b8._4_4_;
  AddSourceMetaData(this,&local_c8);
  if (local_c8.GroupHandle.Value == -1) {
    pFVar7 = TMapBase<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>_>
             ::Find((TMapBase<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>_>
                     *)&this->UngroupedMetaData,&local_c8.ValueHandle);
  }
  else {
    pFVar7 = AlgoImpl::
             FindBy<TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_const_&,UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateCachedValueHandle_UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData::*>
                       ((TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                         *)(*(longlong *)&this->GroupMetaData +
                           (longlong)local_c8.GroupHandle.Value * 0x70 + 0x10),&local_c8.ValueHandle
                        ,(pdm_ea6cf2fe)0x0);
  }
  if (pFVar7 == (FAggregatePreAnimatedStateMetaData *)0x0) {
    bVar12 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<1044199200692109443>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateExtension.cpp"
                        ,0x83,"Aggregate");
    if (bVar12) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    cVar11 = '\0';
  }
  else {
    cVar11 = (pFVar7->NumRestoreContributors != 0) + '\x01';
  }
  if ((this_01 == (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits> *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_d8[0].Value = local_b8._4_4_;
  if ((local_b8._4_4_ == -1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StorageIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                          ,0x1b6,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar8 = (longlong)(int)local_b8._4_4_ * 0x40 + *(longlong *)&this_01->PreAnimatedStorage;
  if (cVar11 == '\x01') {
    bVar12 = (*(byte *)(lVar8 + 0x38) & 1) == 0;
  }
  else {
    if ((cVar11 != '\x02') || ((*(byte *)(lVar8 + 0x38) & 3) == 1)) goto LAB_1461d0ece;
    pTVar9 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
             ::Find(&this_01->TransientPreAnimatedStorage,local_d8);
    bVar12 = pTVar9 == (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)0x0;
  }
  if (!bVar12) goto LAB_1461d0ece;
  (**(code **)((longlong)*param_3 + 0x10))(param_3,&local_70,param_1);
  if (local_70.bIsValid) {
    if ((this_01 == (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits> *)0x0)
       && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((local_b8._4_4_ == -1) ||
       ((*(byte *)((longlong)(int)local_b8._4_4_ * 0x40 + 0x38 +
                  *(longlong *)&this_01->PreAnimatedStorage) & 1) == 0)) {
      (**(code **)((longlong)*param_3 + 8))(param_3);
    }
    if ((this_01 == (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits> *)0x0)
       && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_e0[0].Value = local_b8._4_4_;
    if ((local_b8._4_4_ == -1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StorageIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                            ,0x195,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar8 = (longlong)local_e0[0].Value * 0x40 + *(longlong *)&this_01->PreAnimatedStorage;
    if (cVar11 == '\x01') {
      if (((*(byte *)(lVar8 + 0x38) & 1) != 0) &&
         (bVar12 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<3111672766223352219>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                              ,0x19b,"!CachedData.bInitialized"), bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar3 = *(byte *)(lVar8 + 0x30);
      if ((bVar3 & 1) != 0) {
        puVar10 = (undefined8 *)(lVar8 + 0x10);
        if ((bVar3 & 2) == 0) {
          puVar10 = *(undefined8 **)(lVar8 + 0x10);
        }
        *(byte *)(lVar8 + 0x30) = bVar3 & 0xfe;
        (**(code **)*puVar10)(puVar10,0);
        if ((*(byte *)(lVar8 + 0x30) & 2) == 0) {
          FMemory::Free(*(void **)(lVar8 + 0x10));
        }
      }
      if (local_70.bIsValid) {
        *(byte *)(lVar8 + 0x30) = *(byte *)(lVar8 + 0x30) | 1;
        local_70._32_1_ = local_70._32_1_ & 0xfe;
        *(byte *)(lVar8 + 0x30) =
             *(byte *)(lVar8 + 0x30) ^ (local_70._32_1_ ^ *(byte *)(lVar8 + 0x30)) & 2;
        *(undefined8 *)(lVar8 + 0x10) = local_70.Data.Pad._0_8_;
        *(undefined8 *)(lVar8 + 0x18) = local_70.Data.Pad._8_8_;
        *(undefined8 *)(lVar8 + 0x20) = local_70.Data.Pad._16_8_;
        *(undefined8 *)(lVar8 + 0x28) = local_70.Data.Pad._24_8_;
      }
      *(byte *)(lVar8 + 0x38) = *(byte *)(lVar8 + 0x38) | 3;
    }
    else if (cVar11 == '\x02') {
      if ((*(byte *)(lVar8 + 0x38) & 1) != 0) {
        pTVar9 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                 ::Find(&this_01->TransientPreAnimatedStorage,local_e0);
        if ((pTVar9 != (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)0x0) &&
           (bVar12 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<3111672766223352226>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                                ,0x1a2,
                                "!CachedData.bInitialized || !TransientPreAnimatedStorage.Contains(StorageIndex)"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((*(byte *)(lVar8 + 0x38) & 1) != 0) {
          TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
          ::
          Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,TInlineValue<IMovieScenePreAnimatedToken,32,8>_>
                    (&this_01->TransientPreAnimatedStorage,local_e0,&local_70);
          goto LAB_1461d0ea1;
        }
      }
      bVar3 = *(byte *)(lVar8 + 0x30);
      if ((bVar3 & 1) != 0) {
        puVar10 = (undefined8 *)(lVar8 + 0x10);
        if ((bVar3 & 2) == 0) {
          puVar10 = *(undefined8 **)(lVar8 + 0x10);
        }
        *(byte *)(lVar8 + 0x30) = bVar3 & 0xfe;
        (**(code **)*puVar10)(puVar10,0);
        if ((*(byte *)(lVar8 + 0x30) & 2) == 0) {
          FMemory::Free(*(void **)(lVar8 + 0x10));
        }
      }
      if (local_70.bIsValid) {
        *(byte *)(lVar8 + 0x30) = *(byte *)(lVar8 + 0x30) | 1;
        local_70._32_1_ = local_70._32_1_ & 0xfe;
        *(byte *)(lVar8 + 0x30) =
             *(byte *)(lVar8 + 0x30) ^ (*(byte *)(lVar8 + 0x30) ^ local_70._32_1_) & 2;
        *(undefined8 *)(lVar8 + 0x10) = local_70.Data.Pad._0_8_;
        *(undefined8 *)(lVar8 + 0x18) = local_70.Data.Pad._8_8_;
        *(undefined8 *)(lVar8 + 0x20) = local_70.Data.Pad._16_8_;
        *(undefined8 *)(lVar8 + 0x28) = local_70.Data.Pad._24_8_;
      }
      *(byte *)(lVar8 + 0x38) = *(byte *)(lVar8 + 0x38) | 1;
    }
  }
LAB_1461d0ea1:
  if (local_70.bIsValid) {
    pTVar9 = &local_70;
    if (!local_70.bInline) {
      pTVar9 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)local_70.Data.Pad._0_8_;
    }
    local_70.bIsValid = false;
    (**(code **)&(*(TInlineValue<IMovieScenePreAnimatedToken,32,8> **)(pTVar9->Data).Pad)->Data)
              (pTVar9,0);
    if (!local_70.bInline) {
      FMemory::Free((void *)local_70.Data.Pad._0_8_);
    }
  }
LAB_1461d0ece:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f0[0].ReferenceController);
  return;
}

// SavePreAnimatedStateDirectly @ 1461d0f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedStateExtension::SavePreAnimatedStateDirectly
          (FPreAnimatedStateExtension *this,FMovieSceneAnimTypeID param_1,
          IMovieScenePreAnimatedGlobalTokenProducer *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  byte bVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  atomic<int> aVar6;
  FAggregatePreAnimatedStateMetaData *pFVar7;
  longlong lVar8;
  TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *pTVar9;
  undefined8 *puVar10;
  TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits> *this_00;
  char cVar11;
  bool bVar12;
  undefined1 auStackY_e8 [32];
  FSharedReferencer<1> local_b0 [2];
  FPreAnimatedStorageIndex local_a0 [2];
  FPreAnimatedStorageIndex local_98 [2];
  FPreAnimatedStateEntry local_90;
  FMovieSceneAnimTypeID local_80;
  TSharedPtr<UE::MovieScene::FAnimTypePreAnimatedStateRootStorage,1> local_78;
  ulong64 local_68;
  TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *local_60;
  uchar auStack_58 [8];
  uchar local_50 [8];
  uchar auStack_48 [8];
  byte local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  cVar11 = '\0';
  local_b0[0].ReferenceController =
       (this->WeakGenericRootStorage).WeakReferenceCount.ReferenceController;
  if (local_b0[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = (local_b0[0].ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        local_b0[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1461d0f8b;
      }
      LOCK();
      aVar6 = (local_b0[0].ReferenceController)->SharedReferenceCount;
      bVar12 = aVar2 == aVar6;
      if (bVar12) {
        (local_b0[0].ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar6;
    } while (!bVar12);
  }
  if ((local_b0[0].ReferenceController == (TReferenceControllerBase<1> *)0x0) ||
     (this_00 = (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits> *)
                (this->WeakGenericRootStorage).Object,
     this_00 == (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits> *)0x0)) {
LAB_1461d0f8b:
    GetOrCreateStorage<UE::MovieScene::FAnimTypePreAnimatedStateRootStorage>
              (this,&local_78,
               (TPreAnimatedStorageID<UE::MovieScene::FAnimTypePreAnimatedStateRootStorage>)
               FAnimTypePreAnimatedStateRootStorage::StorageID);
    this_00 = (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits> *)
              local_78.Object;
    local_78.Object = (FAnimTypePreAnimatedStateRootStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_b0,&local_78.SharedReferenceCount)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    (this->WeakGenericRootStorage).Object = (FAnimTypePreAnimatedStateRootStorage *)this_00;
    if (local_b0[0].ReferenceController !=
        (this->WeakGenericRootStorage).WeakReferenceCount.ReferenceController) {
      if (local_b0[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_b0[0].ReferenceController)->WeakReferenceCount =
             (atomic<int>)((int)(local_b0[0].ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar4 = (this->WeakGenericRootStorage).WeakReferenceCount.ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
      (this->WeakGenericRootStorage).WeakReferenceCount.ReferenceController =
           local_b0[0].ReferenceController;
    }
    if ((this_00 == (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits> *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_68 = param_1.ID;
  TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits>::GetOrCreateStorageIndex
            (this_00,&local_80);
  local_90.ValueHandle.TypeID.TypeID = (uint)FAnimTypePreAnimatedStateRootStorage::StorageID;
  local_90.ValueHandle.StorageIndex.Value = (int)local_80.ID;
  local_90.GroupHandle.Value = -1;
  AddSourceMetaData(this,&local_90);
  if (local_90.GroupHandle.Value == -1) {
    pFVar7 = TMapBase<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>_>
             ::Find((TMapBase<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>_>
                     *)&this->UngroupedMetaData,&local_90.ValueHandle);
  }
  else {
    pFVar7 = AlgoImpl::
             FindBy<TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_const_&,UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateCachedValueHandle_UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData::*>
                       ((TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                         *)((longlong)local_90.GroupHandle.Value * 0x70 +
                           *(longlong *)&this->GroupMetaData + 0x10),&local_90.ValueHandle,
                        (pdm_ea6cf2fe)0x0);
  }
  if (pFVar7 == (FAggregatePreAnimatedStateMetaData *)0x0) {
    bVar12 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<1044199200692109443>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateExtension.cpp"
                        ,0x83,"Aggregate");
    if (bVar12) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    cVar11 = (pFVar7->NumRestoreContributors != 0) + '\x01';
  }
  if ((this_00 == (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits> *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_98[0].Value = (int)local_80.ID;
  if (((int)local_80.ID == -1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StorageIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                          ,0x1b6,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar8 = (longlong)(int)local_80.ID * 0x38 + *(longlong *)&this_00->PreAnimatedStorage;
  if (cVar11 == '\x01') {
    bVar12 = (*(byte *)(lVar8 + 0x30) & 1) == 0;
  }
  else {
    if ((cVar11 != '\x02') || ((*(byte *)(lVar8 + 0x30) & 3) == 1)) goto LAB_1461d1400;
    pTVar9 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
             ::Find(&this_00->TransientPreAnimatedStorage,local_98);
    bVar12 = pTVar9 == (TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *)0x0;
  }
  if (!bVar12) goto LAB_1461d1400;
  (**(code **)((longlong)*param_2 + 0x10))(param_2);
  if ((local_40 & 1) != 0) {
    if ((this_00 == (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits> *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((int)local_80.ID == -1) ||
       ((*(byte *)((longlong)(int)local_80.ID * 0x38 + 0x30 +
                  *(longlong *)&this_00->PreAnimatedStorage) & 1) == 0)) {
      (**(code **)((longlong)*param_2 + 8))(param_2);
    }
    if ((this_00 == (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits> *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_a0[0].Value = (int)local_80.ID;
    if (((int)local_80.ID == -1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StorageIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                            ,0x195,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar8 = (longlong)local_a0[0].Value * 0x38 + *(longlong *)&this_00->PreAnimatedStorage;
    if (cVar11 == '\x01') {
      if (((*(byte *)(lVar8 + 0x30) & 1) != 0) &&
         (bVar12 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<3111672766223352219>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                              ,0x19b,"!CachedData.bInitialized"), bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar3 = *(byte *)(lVar8 + 0x28);
      if ((bVar3 & 1) != 0) {
        puVar10 = (undefined8 *)(lVar8 + 8);
        if ((bVar3 & 2) == 0) {
          puVar10 = *(undefined8 **)(lVar8 + 8);
        }
        *(byte *)(lVar8 + 0x28) = bVar3 & 0xfe;
        (**(code **)*puVar10)(puVar10,0);
        if ((*(byte *)(lVar8 + 0x28) & 2) == 0) {
          FMemory::Free(*(void **)(lVar8 + 8));
        }
      }
      if ((local_40 & 1) != 0) {
        *(byte *)(lVar8 + 0x28) = *(byte *)(lVar8 + 0x28) | 1;
        local_40 = local_40 & 0xfe;
        *(byte *)(lVar8 + 0x28) = *(byte *)(lVar8 + 0x28) ^ (local_40 ^ *(byte *)(lVar8 + 0x28)) & 2
        ;
        *(TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> **)(lVar8 + 8) = local_60;
        *(uchar (*) [8])(lVar8 + 0x10) = auStack_58;
        *(uchar (*) [8])(lVar8 + 0x18) = local_50;
        *(uchar (*) [8])(lVar8 + 0x20) = auStack_48;
      }
      *(byte *)(lVar8 + 0x30) = *(byte *)(lVar8 + 0x30) | 3;
    }
    else if (cVar11 == '\x02') {
      if ((*(byte *)(lVar8 + 0x30) & 1) != 0) {
        pTVar9 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                 ::Find(&this_00->TransientPreAnimatedStorage,local_a0);
        if ((pTVar9 != (TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *)0x0) &&
           (bVar12 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<3111672766223352226>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                                ,0x1a2,
                                "!CachedData.bInitialized || !TransientPreAnimatedStorage.Contains(StorageIndex)"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((*(byte *)(lVar8 + 0x30) & 1) != 0) {
          TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
          ::
          Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>
                    (&this_00->TransientPreAnimatedStorage,local_a0,
                     (TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *)&local_60);
          goto LAB_1461d13d3;
        }
      }
      bVar3 = *(byte *)(lVar8 + 0x28);
      if ((bVar3 & 1) != 0) {
        puVar10 = (undefined8 *)(lVar8 + 8);
        if ((bVar3 & 2) == 0) {
          puVar10 = *(undefined8 **)(lVar8 + 8);
        }
        *(byte *)(lVar8 + 0x28) = bVar3 & 0xfe;
        (**(code **)*puVar10)(puVar10,0);
        if ((*(byte *)(lVar8 + 0x28) & 2) == 0) {
          FMemory::Free(*(void **)(lVar8 + 8));
        }
      }
      if ((local_40 & 1) != 0) {
        *(byte *)(lVar8 + 0x28) = *(byte *)(lVar8 + 0x28) | 1;
        local_40 = local_40 & 0xfe;
        *(byte *)(lVar8 + 0x28) = *(byte *)(lVar8 + 0x28) ^ (*(byte *)(lVar8 + 0x28) ^ local_40) & 2
        ;
        *(TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> **)(lVar8 + 8) = local_60;
        *(uchar (*) [8])(lVar8 + 0x10) = auStack_58;
        *(uchar (*) [8])(lVar8 + 0x18) = local_50;
        *(uchar (*) [8])(lVar8 + 0x20) = auStack_48;
      }
      *(byte *)(lVar8 + 0x30) = *(byte *)(lVar8 + 0x30) | 1;
    }
  }
LAB_1461d13d3:
  if ((local_40 & 1) != 0) {
    pTVar9 = (TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *)&local_60;
    if ((local_40 & 2) == 0) {
      pTVar9 = local_60;
    }
    local_40 = local_40 & 0xfe;
    (**(code **)((*(TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> **)(pTVar9->Data).Pad)->
                Data).Pad)(pTVar9,0);
    if ((local_40 & 2) == 0) {
      FMemory::Free(local_60);
    }
  }
LAB_1461d1400:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0[0].ReferenceController);
  return;
}

// UpdateMetaData @ 1461e0dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedStateExtension::UpdateMetaData
          (FPreAnimatedStateExtension *this,FPreAnimatedStateMetaData *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FAggregatePreAnimatedStateMetaData *pFVar4;
  FPreAnimatedStateCachedValueHandle *pFVar5;
  
  iVar1 = (param_1->Entry).GroupHandle.Value;
  pFVar5 = &(param_1->Entry).ValueHandle;
  if (iVar1 == -1) {
    pFVar4 = TMapBase<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>_>
             ::Find((TMapBase<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>_>
                     *)&this->UngroupedMetaData,pFVar5);
  }
  else {
    pFVar4 = AlgoImpl::
             FindBy<TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_&,UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateCachedValueHandle_UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData::*>
                       ((TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                         *)(*(longlong *)&this->GroupMetaData + 0x10 + (longlong)iVar1 * 0x70),
                        pFVar5,(pdm_ea6cf2fe)0x0);
  }
  if (pFVar4 == (FAggregatePreAnimatedStateMetaData *)0x0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1044199200692109536>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateExtension.cpp"
                       ,0xe0,"Aggregate");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if (param_1->bWantsRestoreState != false) {
      pFVar4->bWantedRestore = true;
      pFVar4->NumRestoreContributors = pFVar4->NumRestoreContributors + 1;
      return;
    }
    pFVar4->NumRestoreContributors = pFVar4->NumRestoreContributors - 1;
  }
  return;
}

// operator() @ 1504e5ea0

bool __thiscall
`UE::MovieScene::FPreAnimatedStateExtension::AddSourceMetaData'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1044199200692110133>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1044199200692110133>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e5fe0

bool __thiscall
`UE::MovieScene::FPreAnimatedStateExtension::HasActiveCaptureSource'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1044199200692110123>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1044199200692110123>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e64b0

bool __thiscall
`UE::MovieScene::FPreAnimatedStateExtension::RestoreGlobalState'::__l25::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1044199200692109699>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1044199200692109699>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

