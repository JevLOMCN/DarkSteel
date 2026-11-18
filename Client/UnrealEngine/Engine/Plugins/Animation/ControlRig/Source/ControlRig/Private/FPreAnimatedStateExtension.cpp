// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// GetOrCreateStorage<UE::MovieScene::FPreAnimatedControlRigParameterStorage> @ 14a39bef0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FPreAnimatedControlRigParameterStorage,1> * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::
GetOrCreateStorage<UE::MovieScene::FPreAnimatedControlRigParameterStorage>
          (FPreAnimatedStateExtension *this,
          TSharedPtr<UE::MovieScene::FPreAnimatedControlRigParameterStorage,1>
          *__return_storage_ptr__,
          TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedControlRigParameterStorage> param_1)

{
  FSharedReferencer<1> *this_00;
  FPreAnimatedControlRigParameterStorage *pFVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar4;
  TSharedRef<UE::MovieScene::FPreAnimatedControlRigParameterStorage,1> *pTVar5;
  TSharedPtr<UE::MovieScene::FPreAnimatedControlRigParameterStorage,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  FPreAnimatedStorageID local_res8 [2];
  FPreAnimatedStorageID local_res18 [4];
  TSharedPtr<UE::MovieScene::FPreAnimatedControlRigParameterStorage,1> local_58;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> local_48;
  TSharedRef<UE::MovieScene::FPreAnimatedControlRigParameterStorage,1> local_38;
  
  local_res8[0].TypeID = (uint)param_1;
  pTVar4 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res8);
  this_00 = &__return_storage_ptr__->SharedReferenceCount;
  if (pTVar4 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (FPreAnimatedControlRigParameterStorage *)0x0;
  }
  else {
    pTVar7 = (pTVar4->SharedReferenceCount).ReferenceController;
    pFVar1 = (FPreAnimatedControlRigParameterStorage *)pTVar4->Object;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      __return_storage_ptr__->Object = pFVar1;
      this_00->ReferenceController = pTVar7;
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      goto LAB_14a39bf53;
    }
    __return_storage_ptr__->Object = pFVar1;
  }
  this_00->ReferenceController = pTVar7;
LAB_14a39bf53:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (__return_storage_ptr__->Object == (FPreAnimatedControlRigParameterStorage *)0x0) {
    pTVar5 = MakeShared<UE::MovieScene::FPreAnimatedControlRigParameterStorage,1>(&local_38);
    local_58.SharedReferenceCount.ReferenceController =
         (pTVar5->SharedReferenceCount).ReferenceController;
    local_58.Object = pTVar5->Object;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__ != &local_58) {
      __return_storage_ptr__->Object = local_58.Object;
      local_58.Object = (FPreAnimatedControlRigParameterStorage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (this_00,&local_58.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    if (__return_storage_ptr__->Object == (FPreAnimatedControlRigParameterStorage *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TSharedPtr<UE::MovieScene::FPreAnimatedControlRigParameterStorage,1> *)(*pcVar2)()
        ;
        return pTVar6;
      }
    }
    (**(code **)(*(longlong *)__return_storage_ptr__->Object + 0x10))
              (__return_storage_ptr__->Object,param_1,this);
    pTVar7 = this_00->ReferenceController;
    pFVar1 = __return_storage_ptr__->Object;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_res18[0].TypeID = (uint)param_1;
    pTVar4 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
             ::Find(&this->StorageImplementations,local_res18);
    if (pTVar4 != (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!StorageImplementations.Contains(InStorageID)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateExtension.h"
                         ,0x71,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TSharedPtr<UE::MovieScene::FPreAnimatedControlRigParameterStorage,1> *)(*pcVar2)()
        ;
        return pTVar6;
      }
    }
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48.Object = (IPreAnimatedStorage *)pFVar1;
    local_48.SharedReferenceCount.ReferenceController = pTVar7;
    TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
    ::
    Emplace<UE::MovieScene::FPreAnimatedStorageID_const_&,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>
              (&this->StorageImplementations,local_res18,&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  return __return_storage_ptr__;
}

// GetOrCreateStorage<UE::MovieScene::FPreAnimatedControlRigStorage> @ 14a39c0b0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FPreAnimatedControlRigStorage,1> * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::
GetOrCreateStorage<UE::MovieScene::FPreAnimatedControlRigStorage>
          (FPreAnimatedStateExtension *this,
          TSharedPtr<UE::MovieScene::FPreAnimatedControlRigStorage,1> *__return_storage_ptr__,
          TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedControlRigStorage> param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<UE::MovieScene::FPreAnimatedControlRigStorage,1> *pTVar8;
  FPreAnimatedControlRigStorage *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  FPreAnimatedStorageID local_res8 [2];
  FPreAnimatedStorageID local_res18 [2];
  TSharedPtr<UE::MovieScene::FPreAnimatedControlRigStorage,1> local_48;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> local_38;
  
  local_res8[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res8);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) {
    __return_storage_ptr__->Object = (FPreAnimatedControlRigStorage *)0x0;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7 = (pTVar6->SharedReferenceCount).ReferenceController;
    pFVar9 = (FPreAnimatedControlRigStorage *)pTVar6->Object;
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
  if (__return_storage_ptr__->Object != (FPreAnimatedControlRigStorage *)0x0) {
    return __return_storage_ptr__;
  }
  pTVar7 = ::operator_new(0xe8);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = (FPreAnimatedControlRigStorage *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pFVar9 = (FPreAnimatedControlRigStorage *)(pTVar7 + 1);
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFPreAnimatedControlRigStorage_MovieScene_UE___00_SharedPointerInternals__6B_
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
    pTVar7[1]._padding_ = (longlong)&___7FPreAnimatedControlRigStorage_MovieScene_UE__6B_;
    pTVar10 = pTVar7;
    if (pFVar9 == (FPreAnimatedControlRigStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedControlRigStorage,1> *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_14a39c2c0;
    }
  }
  if (((*(longlong *)&pFVar9->field_0x8 == 0) || (*(longlong *)&pFVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->field_0x10 + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FPreAnimatedControlRigStorage **)&pFVar9->field_0x8 = pFVar9;
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
LAB_14a39c2c0:
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pFVar9;
  local_48.SharedReferenceCount.ReferenceController = pTVar10;
  if (__return_storage_ptr__ != &local_48) {
    __return_storage_ptr__->Object = pFVar9;
    local_48.Object = (FPreAnimatedControlRigStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&local_48.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if ((__return_storage_ptr__->Object == (FPreAnimatedControlRigStorage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedControlRigStorage,1> *)(*pcVar4)();
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
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedControlRigStorage,1> *)(*pcVar4)();
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

