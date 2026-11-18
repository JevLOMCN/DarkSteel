// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 2

// GetOrCreateStorage<UE::MovieScene::FPreAnimatedWidgetMaterialParameterStorage> @ 1468ed590

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FPreAnimatedWidgetMaterialParameterStorage,1> * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::
GetOrCreateStorage<UE::MovieScene::FPreAnimatedWidgetMaterialParameterStorage>
          (FPreAnimatedStateExtension *this,
          TSharedPtr<UE::MovieScene::FPreAnimatedWidgetMaterialParameterStorage,1>
          *__return_storage_ptr__,
          TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedWidgetMaterialParameterStorage> param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<UE::MovieScene::FPreAnimatedWidgetMaterialParameterStorage,1> *pTVar8;
  FPreAnimatedWidgetMaterialParameterStorage *pFVar9;
  FPreAnimatedStorageID local_res8 [2];
  FPreAnimatedStorageID local_res18 [4];
  TSharedPtr<UE::MovieScene::FPreAnimatedWidgetMaterialParameterStorage,1> local_48;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> local_38;
  
  local_res8[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res8);
  if (pTVar6 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (FPreAnimatedWidgetMaterialParameterStorage *)0x0;
LAB_1468ed5e3:
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
  }
  else {
    pTVar7 = (pTVar6->SharedReferenceCount).ReferenceController;
    pFVar9 = (FPreAnimatedWidgetMaterialParameterStorage *)pTVar6->Object;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = pFVar9;
      goto LAB_1468ed5e3;
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
  if (__return_storage_ptr__->Object != (FPreAnimatedWidgetMaterialParameterStorage *)0x0) {
    return __return_storage_ptr__;
  }
  pTVar7 = ::operator_new(0xe8);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = (FPreAnimatedWidgetMaterialParameterStorage *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFPreAnimatedWidgetMaterialParameterStorage_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    memset(&pTVar7[1].SharedReferenceCount,0,0xd0);
    TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
    ::
    TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
              ((TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
                *)(pTVar7 + 1));
    pFVar9 = (FPreAnimatedWidgetMaterialParameterStorage *)(pTVar7 + 1);
    pTVar7[1]._padding_ =
         (longlong)&___7FPreAnimatedWidgetMaterialParameterStorage_MovieScene_UE__6B_;
    if (pFVar9 == (FPreAnimatedWidgetMaterialParameterStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedWidgetMaterialParameterStorage,1> *)
                 (*pcVar4)();
        return pTVar8;
      }
      goto LAB_1468ed6fb;
    }
  }
  if (((*(longlong *)&pFVar9->field_0x8 == 0) || (*(longlong *)&pFVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->field_0x10 + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FPreAnimatedWidgetMaterialParameterStorage **)&pFVar9->field_0x8 = pFVar9;
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
LAB_1468ed6fb:
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pFVar9;
  local_48.SharedReferenceCount.ReferenceController = pTVar7;
  if (__return_storage_ptr__ != &local_48) {
    __return_storage_ptr__->Object = pFVar9;
    local_48.Object = (FPreAnimatedWidgetMaterialParameterStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&local_48.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if ((__return_storage_ptr__->Object == (FPreAnimatedWidgetMaterialParameterStorage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedWidgetMaterialParameterStorage,1> *)(*pcVar4)()
    ;
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
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedWidgetMaterialParameterStorage,1> *)(*pcVar4)()
    ;
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

// GetOrCreateStorage<UE::MovieScene::FPreAnimatedWidgetMaterialSwitcherStorage> @ 1468ed840

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FPreAnimatedWidgetMaterialSwitcherStorage,1> * __thiscall
UE::MovieScene::FPreAnimatedStateExtension::
GetOrCreateStorage<UE::MovieScene::FPreAnimatedWidgetMaterialSwitcherStorage>
          (FPreAnimatedStateExtension *this,
          TSharedPtr<UE::MovieScene::FPreAnimatedWidgetMaterialSwitcherStorage,1>
          *__return_storage_ptr__,
          TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedWidgetMaterialSwitcherStorage> param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<UE::MovieScene::FPreAnimatedWidgetMaterialSwitcherStorage,1> *pTVar8;
  FPreAnimatedWidgetMaterialSwitcherStorage *pFVar9;
  FPreAnimatedStorageID local_res8 [2];
  FPreAnimatedStorageID local_res18 [4];
  TSharedPtr<UE::MovieScene::FPreAnimatedWidgetMaterialSwitcherStorage,1> local_48;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> local_38;
  
  local_res8[0].TypeID = (uint)param_1;
  pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           ::Find(&this->StorageImplementations,local_res8);
  if (pTVar6 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (FPreAnimatedWidgetMaterialSwitcherStorage *)0x0;
LAB_1468ed893:
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
  }
  else {
    pTVar7 = (pTVar6->SharedReferenceCount).ReferenceController;
    pFVar9 = (FPreAnimatedWidgetMaterialSwitcherStorage *)pTVar6->Object;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = pFVar9;
      goto LAB_1468ed893;
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
  if (__return_storage_ptr__->Object != (FPreAnimatedWidgetMaterialSwitcherStorage *)0x0) {
    return __return_storage_ptr__;
  }
  pTVar7 = ::operator_new(0xe8);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = (FPreAnimatedWidgetMaterialSwitcherStorage *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFPreAnimatedWidgetMaterialSwitcherStorage_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    memset(&pTVar7[1].SharedReferenceCount,0,0xd0);
    TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
    ::
    TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
              ((TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
                *)(pTVar7 + 1));
    pFVar9 = (FPreAnimatedWidgetMaterialSwitcherStorage *)(pTVar7 + 1);
    pTVar7[1]._padding_ =
         (longlong)&___7FPreAnimatedWidgetMaterialSwitcherStorage_MovieScene_UE__6B_;
    if (pFVar9 == (FPreAnimatedWidgetMaterialSwitcherStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedWidgetMaterialSwitcherStorage,1> *)
                 (*pcVar4)();
        return pTVar8;
      }
      goto LAB_1468ed9ab;
    }
  }
  if (((*(longlong *)&pFVar9->field_0x8 == 0) || (*(longlong *)&pFVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->field_0x10 + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FPreAnimatedWidgetMaterialSwitcherStorage **)&pFVar9->field_0x8 = pFVar9;
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
LAB_1468ed9ab:
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pFVar9;
  local_48.SharedReferenceCount.ReferenceController = pTVar7;
  if (__return_storage_ptr__ != &local_48) {
    __return_storage_ptr__->Object = pFVar9;
    local_48.Object = (FPreAnimatedWidgetMaterialSwitcherStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&local_48.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if ((__return_storage_ptr__->Object == (FPreAnimatedWidgetMaterialSwitcherStorage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedWidgetMaterialSwitcherStorage,1> *)(*pcVar4)();
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
    pTVar8 = (TSharedPtr<UE::MovieScene::FPreAnimatedWidgetMaterialSwitcherStorage,1> *)(*pcVar4)();
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

