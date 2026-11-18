// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 5

// ~TPreAnimatedStateGroupManager<FObjectKey> @ 146183bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateGroupManager<FObjectKey>::
~TPreAnimatedStateGroupManager<FObjectKey>(TPreAnimatedStateGroupManager<FObjectKey> *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  *(undefined4 *)&(this->StorageGroupsToKey).field_0x48 = 0;
  pvVar3 = *(void **)&(this->StorageGroupsToKey).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedStorageGroupHandle,FObjectKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedStorageGroupHandle,FObjectKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedStorageGroupHandle,FObjectKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StorageGroupsToKey);
  *(undefined4 *)&(this->StorageGroupsByKey).field_0x48 = 0;
  pvVar3 = *(void **)&(this->StorageGroupsByKey).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StorageGroupsByKey);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  this->_padding_ = (longlong)&___7IPreAnimatedStateGroupManager_MovieScene_UE__6B_;
  return;
}

// GatherStaleStorageGroups @ 1461af3c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateGroupManager<FObjectKey>::GatherStaleStorageGroups
          (TPreAnimatedStateGroupManager<FObjectKey> *this,
          TArray<UE::MovieScene::FPreAnimatedStorageGroupHandle,TSizedDefaultAllocator<32>_>
          *param_1)

{
  return;
}

// InitializeGroupManager @ 1461b64a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateGroupManager<FObjectKey>::InitializeGroupManager
          (TPreAnimatedStateGroupManager<FObjectKey> *this,FPreAnimatedStateExtension *param_1)

{
  this->Extension = param_1;
  return;
}

// MakeGroupForKey @ 1461bddc0

/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedStorageGroupHandle __thiscall
UE::MovieScene::TPreAnimatedStateGroupManager<FObjectKey>::MakeGroupForKey
          (TPreAnimatedStateGroupManager<FObjectKey> *this,FObjectKey *param_1)

{
  TSparseArray<UE::MovieScene::FPreAnimatedStateExtension::FPreAnimatedGroupMetaData,FDefaultSparseArrayAllocator>
  *this_00;
  int iVar1;
  FPreAnimatedStateExtension *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  int iVar6;
  int iVar7;
  TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  FObjectKey *in_R8;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  undefined1 local_e8 [8];
  FSparseArrayAllocationInfo local_e0;
  bool local_d0 [8];
  FObjectKey *local_c8;
  FObjectKey *local_c0 [5];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  pTVar8 = TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle,0>,FDefaultSetAllocator>
                   *)&this->StorageGroupsByKey,in_R8);
  if (pTVar8 == (TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle> *)0x0) {
    param_1->ObjectIndex = -1;
  }
  else {
    iVar6 = *(int *)&pTVar8->field_0x8;
    param_1->ObjectIndex = iVar6;
    if (iVar6 != -1) {
      return (FPreAnimatedStorageGroupHandle)(int)param_1;
    }
  }
  pTVar9 = (TReferenceControllerBase<1> *)this->_padding_;
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  pFVar2 = this->Extension;
  pTVar10 = pTVar9;
  pTVar12 = pTVar11;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar9->SharedReferenceCount;
    do {
      pTVar10 = pTVar11;
      pTVar12 = (TReferenceControllerBase<1> *)0x0;
      if (aVar4 == (atomic<int>)0x0) goto LAB_1461bde78;
      LOCK();
      aVar5 = pTVar9->SharedReferenceCount;
      bVar13 = aVar4 == aVar5;
      if (bVar13) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar13);
    pTVar10 = pTVar9;
    pTVar12 = (TReferenceControllerBase<1> *)this->_padding_;
  }
LAB_1461bde78:
  pTVar9 = (TReferenceControllerBase<1> *)&pTVar12->SharedReferenceCount;
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
    pTVar9 = pTVar11;
  }
  if ((pTVar9 != (TReferenceControllerBase<1> *)&this->_padding_) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("SharedThis.Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x67f,L""), bVar13)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return (FPreAnimatedStorageGroupHandle)iVar6;
  }
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar13) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return (FPreAnimatedStorageGroupHandle)iVar6;
    }
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar13) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return (FPreAnimatedStorageGroupHandle)iVar6;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  this_00 = &pFVar2->GroupMetaData;
  iVar6 = *(int *)&(pFVar2->GroupMetaData).field_0x34;
  if (iVar6 == 0) {
    iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x70,8,1,(ForAnyElementType *)this_00,
                       (int *)&(pFVar2->GroupMetaData).field_0x8,
                       (int *)&(pFVar2->GroupMetaData).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(pFVar2->GroupMetaData).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(pFVar2->GroupMetaData).field_0x30;
    iVar6 = iVar6 + -1;
    iVar1 = *(int *)((longlong)iVar7 * 0x70 + 4 + *(longlong *)&this_00->field_0x0);
    *(int *)&(pFVar2->GroupMetaData).field_0x30 = iVar1;
    *(int *)&(pFVar2->GroupMetaData).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x70 + *(longlong *)&this_00->field_0x0) = 0xffffffff;
    }
  }
  TSparseArrayBase<112,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<112,8,FDefaultSparseArrayAllocator> *)this_00,&local_e0,iVar7);
  pTVar9 = pTVar10;
  if (local_e0.Pointer != (undefined8 *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
    *(undefined8 *)((longlong)local_e0.Pointer + 0x60) = 0;
    *(TReferenceControllerBase<1> **)local_e0.Pointer = pTVar12;
    *(TReferenceControllerBase<1> **)((longlong)local_e0.Pointer + 8) = pTVar10;
    *(undefined8 *)((longlong)local_e0.Pointer + 0x10) = local_98;
    *(undefined8 *)((longlong)local_e0.Pointer + 0x18) = uStack_90;
    *(undefined8 *)((longlong)local_e0.Pointer + 0x20) = local_88;
    *(undefined8 *)((longlong)local_e0.Pointer + 0x28) = uStack_80;
    *(undefined8 *)((longlong)local_e0.Pointer + 0x30) = local_78;
    *(undefined8 *)((longlong)local_e0.Pointer + 0x38) = uStack_70;
    *(undefined8 *)((longlong)local_e0.Pointer + 0x40) = local_68;
    *(undefined8 *)((longlong)local_e0.Pointer + 0x48) = uStack_60;
    *(undefined8 *)((longlong)local_e0.Pointer + 0x50) = local_58;
    *(undefined8 *)((longlong)local_e0.Pointer + 0x58) = uStack_50;
    if (*(void **)((longlong)local_e0.Pointer + 0x60) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)local_e0.Pointer + 0x60));
    }
    *(undefined8 *)((longlong)local_e0.Pointer + 0x60) = 0;
    *(undefined4 *)((longlong)local_e0.Pointer + 0x68) = 0;
    *(undefined4 *)((longlong)local_e0.Pointer + 0x6c) = 4;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  param_1->ObjectIndex = local_e0.Index;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  local_c8 = param_1;
  TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FObjectKey_const_&,UE::MovieScene::FPreAnimatedStorageGroupHandle_const_&>_>
            ((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle,0>,FDefaultSetAllocator>
              *)&this->StorageGroupsByKey,
             (TPairInitializer<FObjectKey_const_&,UE::MovieScene::FPreAnimatedStorageGroupHandle_const_&>
              *)local_e8,local_d0);
  local_c0[0] = param_1;
  TSet<TTuple<UE::MovieScene::FPreAnimatedStorageGroupHandle,FObjectKey>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStorageGroupHandle,FObjectKey,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::MovieScene::FPreAnimatedStorageGroupHandle_const_&,FObjectKey_const_&>_>
            ((TSet<TTuple<UE::MovieScene::FPreAnimatedStorageGroupHandle,FObjectKey>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStorageGroupHandle,FObjectKey,0>,FDefaultSetAllocator>
              *)&this->StorageGroupsToKey,
             (TPairInitializer<UE::MovieScene::FPreAnimatedStorageGroupHandle_const_&,FObjectKey_const_&>
              *)(local_e8 + 4),(bool *)local_c0);
  return (FPreAnimatedStorageGroupHandle)(int)param_1;
}

// OnGroupDestroyed @ 1461bf500

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateGroupManager<FObjectKey>::OnGroupDestroyed
          (TPreAnimatedStateGroupManager<FObjectKey> *this,FPreAnimatedStorageGroupHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  FObjectKey local_res8;
  FPreAnimatedStorageGroupHandle local_res10 [2];
  
  local_res10[0].Value = param_1.Value;
  if (*(int *)&(this->StorageGroupsToKey).field_0x8 !=
      *(int *)&(this->StorageGroupsToKey).field_0x34) {
    puVar5 = *(undefined1 **)&(this->StorageGroupsToKey).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->StorageGroupsToKey).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->StorageGroupsToKey).field_0x48 - 1U & param_1.Value)
                              * 4);
    if (iVar3 != -1) {
      do {
        lVar6 = *(longlong *)&this->StorageGroupsToKey + (longlong)iVar3 * 0x14;
        if (*(int *)(*(longlong *)&this->StorageGroupsToKey + (longlong)iVar3 * 0x14) ==
            param_1.Value) {
          if (lVar6 == 0) goto LAB_1461bf56d;
          goto LAB_1461bf597;
        }
        iVar3 = *(int *)(lVar6 + 0xc);
      } while (iVar3 != -1);
    }
  }
  lVar6 = 0;
LAB_1461bf56d:
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1461bf597:
  local_res8 = *(FObjectKey *)(lVar6 + 4);
  if (*(int *)&(this->StorageGroupsByKey).field_0x8 !=
      *(int *)&(this->StorageGroupsByKey).field_0x34) {
    uVar4 = local_res8.ObjectSerialNumber;
    uVar8 = local_res8.ObjectIndex - uVar4 ^ uVar4 >> 0xd;
    uVar7 = (-0x61c88647 - uVar8) - uVar4 ^ uVar8 << 8;
    uVar4 = (uVar4 - uVar7) - uVar8 ^ uVar7 >> 0xd;
    uVar8 = (uVar8 - uVar4) - uVar7 ^ uVar4 >> 0xc;
    uVar7 = (uVar7 - uVar8) - uVar4 ^ uVar8 << 0x10;
    uVar4 = (uVar4 - uVar7) - uVar8 ^ uVar7 >> 5;
    uVar8 = (uVar8 - uVar4) - uVar7 ^ uVar4 >> 3;
    uVar7 = (uVar7 - uVar8) - uVar4 ^ uVar8 << 10;
    TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle,0>,FDefaultSetAllocator>
    ::RemoveImpl<FObjectKey>
              ((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle,0>,FDefaultSetAllocator>
                *)&this->StorageGroupsByKey,(uVar4 - uVar7) - uVar8 ^ uVar7 >> 0xf,&local_res8);
  }
  if (*(int *)&(this->StorageGroupsToKey).field_0x8 !=
      *(int *)&(this->StorageGroupsToKey).field_0x34) {
    TSet<TTuple<UE::MovieScene::FPreAnimatedStorageGroupHandle,FObjectKey>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStorageGroupHandle,FObjectKey,0>,FDefaultSetAllocator>
    ::RemoveImpl<UE::MovieScene::FPreAnimatedStorageGroupHandle>
              ((TSet<TTuple<UE::MovieScene::FPreAnimatedStorageGroupHandle,FObjectKey>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStorageGroupHandle,FObjectKey,0>,FDefaultSetAllocator>
                *)&this->StorageGroupsToKey,param_1.Value,local_res10);
  }
  return;
}

