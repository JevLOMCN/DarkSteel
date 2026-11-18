// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 68

// StaticClass @ 14b760900

UClass * __cdecl UDS_WindowManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WindowManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WindowManager",
               &Z_Registration_Info_UClass_UDS_WindowManager.InnerSingleton,
               StaticRegisterNativesUDS_WindowManager,0x210,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_WindowManager>,
               InternalVTableHelperCtorCaller<UDS_WindowManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WindowManager.InnerSingleton;
}

// UDS_WindowManager @ 14b764a80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_WindowManager * __thiscall
UDS_WindowManager::UDS_WindowManager(UDS_WindowManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_WindowManager__6B_;
  (this->RootWidget).WeakPtr = (FWeakObjectPtr)0x0;
  FGeometry::FGeometry(&this->RootWidgetGeometry);
  (this->WindowFrameSource).field0_0x0.DebugPtr = (UDS_W_WindowFrame *)0x0;
  *(undefined8 *)&this->WindowInfoMap = 0;
  *(undefined8 *)&(this->WindowInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->WindowInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->WindowInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->WindowInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->WindowInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WindowInfoMap).field_0x34 = 0;
  *(undefined8 *)&(this->WindowInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->WindowInfoMap).field_0x48 = 0;
  (this->WindowInfoArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WindowInfoArray).ArrayNum = 0;
  (this->WindowInfoArray).ArrayMax = 0;
  *(undefined8 *)&this->WindowGroupInfoMap = 0;
  *(undefined8 *)&(this->WindowGroupInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->WindowGroupInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->WindowGroupInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->WindowGroupInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->WindowGroupInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WindowGroupInfoMap).field_0x34 = 0;
  *(undefined8 *)&(this->WindowGroupInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->WindowGroupInfoMap).field_0x48 = 0;
  (this->WindowGroupInfoArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WindowGroupInfoArray).ArrayNum = 0;
  (this->WindowGroupInfoArray).ArrayMax = 0;
  *(undefined8 *)&this->WindowLayerGroupInfoMap = 0;
  *(undefined8 *)&(this->WindowLayerGroupInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->WindowLayerGroupInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->WindowLayerGroupInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->WindowLayerGroupInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->WindowLayerGroupInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WindowLayerGroupInfoMap).field_0x34 = 0;
  *(undefined8 *)&(this->WindowLayerGroupInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->WindowLayerGroupInfoMap).field_0x48 = 0;
  (this->OpenedWindowInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OpenedWindowInfoList).ArrayNum = 0;
  (this->OpenedWindowInfoList).ArrayMax = 0;
  (this->CompositeTableDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompositeTableDatas).ArrayNum = 0;
  (this->CompositeTableDatas).ArrayMax = 0;
  (this->CurrentCompositeTableData).field0_0x0.DebugPtr = (UDS_CompositeTableData *)0x0;
  *(undefined8 *)&this->GameViewportResizedDelegate = 0;
  *(undefined8 *)&(this->GameViewportResizedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->GameViewportResizedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->GameViewportResizedDelegate).field_0x18 = 2;
  *(undefined8 *)&this->WindowOpenCloseDelegate = 0;
  *(undefined8 *)&(this->WindowOpenCloseDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->WindowOpenCloseDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->WindowOpenCloseDelegate).field_0x18 = 2;
  *(undefined8 *)&this->CloseAllWindowDelegate = 0;
  *(undefined8 *)&(this->CloseAllWindowDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->CloseAllWindowDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->CloseAllWindowDelegate).field_0x18 = 2;
  return this;
}

// UDS_WindowManager @ 14b764c30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_WindowManager * __thiscall
UDS_WindowManager::UDS_WindowManager(UDS_WindowManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_WindowManager__6B_;
  (this->RootWidget).WeakPtr = (FWeakObjectPtr)0x0;
  FGeometry::FGeometry(&this->RootWidgetGeometry);
  (this->WindowFrameSource).field0_0x0.DebugPtr = (UDS_W_WindowFrame *)0x0;
  *(undefined8 *)&this->WindowInfoMap = 0;
  *(undefined8 *)&(this->WindowInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->WindowInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->WindowInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->WindowInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->WindowInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WindowInfoMap).field_0x34 = 0;
  *(undefined8 *)&(this->WindowInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->WindowInfoMap).field_0x48 = 0;
  (this->WindowInfoArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WindowInfoArray).ArrayNum = 0;
  (this->WindowInfoArray).ArrayMax = 0;
  *(undefined8 *)&this->WindowGroupInfoMap = 0;
  *(undefined8 *)&(this->WindowGroupInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->WindowGroupInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->WindowGroupInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->WindowGroupInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->WindowGroupInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WindowGroupInfoMap).field_0x34 = 0;
  *(undefined8 *)&(this->WindowGroupInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->WindowGroupInfoMap).field_0x48 = 0;
  (this->WindowGroupInfoArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WindowGroupInfoArray).ArrayNum = 0;
  (this->WindowGroupInfoArray).ArrayMax = 0;
  *(undefined8 *)&this->WindowLayerGroupInfoMap = 0;
  *(undefined8 *)&(this->WindowLayerGroupInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->WindowLayerGroupInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->WindowLayerGroupInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->WindowLayerGroupInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->WindowLayerGroupInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WindowLayerGroupInfoMap).field_0x34 = 0;
  *(undefined8 *)&(this->WindowLayerGroupInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->WindowLayerGroupInfoMap).field_0x48 = 0;
  (this->OpenedWindowInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OpenedWindowInfoList).ArrayNum = 0;
  (this->OpenedWindowInfoList).ArrayMax = 0;
  (this->CompositeTableDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompositeTableDatas).ArrayNum = 0;
  (this->CompositeTableDatas).ArrayMax = 0;
  (this->CurrentCompositeTableData).field0_0x0.DebugPtr = (UDS_CompositeTableData *)0x0;
  *(undefined8 *)&this->GameViewportResizedDelegate = 0;
  *(undefined8 *)&(this->GameViewportResizedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->GameViewportResizedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->GameViewportResizedDelegate).field_0x18 = 2;
  *(undefined8 *)&this->WindowOpenCloseDelegate = 0;
  *(undefined8 *)&(this->WindowOpenCloseDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->WindowOpenCloseDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->WindowOpenCloseDelegate).field_0x18 = 2;
  *(undefined8 *)&this->CloseAllWindowDelegate = 0;
  *(undefined8 *)&(this->CloseAllWindowDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->CloseAllWindowDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->CloseAllWindowDelegate).field_0x18 = 2;
  return this;
}

// ~UDS_WindowManager @ 14b7654a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_WindowManager::~UDS_WindowManager(UDS_WindowManager *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDS_WindowManager__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->CloseAllWindowDelegate).field_0x8,
             *(int *)&(this->CloseAllWindowDelegate).field_0x10);
  pvVar1 = *(void **)&(this->CloseAllWindowDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CloseAllWindowDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->WindowOpenCloseDelegate).field_0x8,
             *(int *)&(this->WindowOpenCloseDelegate).field_0x10);
  pvVar1 = *(void **)&(this->WindowOpenCloseDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->WindowOpenCloseDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->GameViewportResizedDelegate).field_0x8,
             *(int *)&(this->GameViewportResizedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->GameViewportResizedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->GameViewportResizedDelegate);
  pFVar2 = (this->CompositeTableDatas).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->OpenedWindowInfoList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->WindowLayerGroupInfoMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->WindowLayerGroupInfoMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_WindowLayerGroupType,FDS_WindowLayerGroupInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_WindowLayerGroupType,FDS_WindowLayerGroupInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->WindowLayerGroupInfoMap);
  pFVar2 = (this->WindowGroupInfoArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->WindowGroupInfoMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->WindowGroupInfoMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_WindowGroupInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_WindowGroupInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_WindowGroupInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WindowGroupInfoMap);
  pFVar2 = (this->WindowInfoArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->WindowInfoMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->WindowInfoMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_WindowInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_WindowInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_WindowInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WindowInfoMap);
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b766be0

UClass * __cdecl UDS_WindowManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WindowManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WindowManager",
               &Z_Registration_Info_UClass_UDS_WindowManager.InnerSingleton,
               StaticRegisterNativesUDS_WindowManager,0x210,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_WindowManager>,
               InternalVTableHelperCtorCaller<UDS_WindowManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WindowManager.InnerSingleton;
}

// StaticRegisterNativesUDS_WindowManager @ 14b766e10

void __cdecl UDS_WindowManager::StaticRegisterNativesUDS_WindowManager(void)

{
  return;
}

// __VTableCtorCaller @ 14b767a80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_WindowManager::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_ManagerBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UDS_ManagerBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_ManagerBase *)0x0) {
    UDS_ManagerBase::UDS_ManagerBase(this,param_1);
    this->_padding_ = (longlong)&___7UDS_WindowManager__6B_;
    this[1]._padding_ = 0;
    FGeometry::FGeometry((FGeometry *)&this[1]._padding_);
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[3]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0;
    *(undefined8 *)&this[3].bIsBeingDestroyed = 0;
    *(undefined4 *)&this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[5]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0;
    *(undefined8 *)&this[5].bIsBeingDestroyed = 0;
    *(undefined4 *)&this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[7]._padding_ = 0;
    *(undefined4 *)&this[7]._padding_ = 0;
    *(undefined4 *)((longlong)&this[7]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[7]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[7]._padding_ + 4) = 0;
    *(undefined8 *)&this[7].bIsBeingDestroyed = 0;
    *(undefined4 *)&this[8]._padding_ = 0;
    this[8]._padding_ = 0;
    this[8]._padding_ = 0;
    this[8]._padding_ = 0;
    this[8]._padding_ = 0;
    *(undefined8 *)&this[8].bIsBeingDestroyed = 0;
    this[9]._padding_ = 0;
    this[9]._padding_ = 0;
    this[9]._padding_ = 0;
    this[9]._padding_ = 2;
    this[9]._padding_ = 0;
    *(undefined8 *)&this[9].bIsBeingDestroyed = 0;
    this[10]._padding_ = 0;
    this[10]._padding_ = 2;
    this[10]._padding_ = 0;
    this[10]._padding_ = 0;
    this[10]._padding_ = 0;
    *(undefined8 *)&this[10].bIsBeingDestroyed = 2;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// operator() @ 14bb4dea0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`UDS_WindowManager::SortingOpenedWindowInfo'::__l2::<lambda_1>::operator()
          (void *this,TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr> param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  UObject *pUVar7;
  UObject *pUVar8;
  UDS_W_WindowFrame *pUVar9;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  
  local_res10 = param_1.WeakPtr;
  local_res18[0] = param_2.WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if ((!bVar3) || (bVar3 = FWeakObjectPtr::IsValid(local_res18), !bVar3)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<353616502999484519>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_WindowManager.cpp"
                       ,0x867,"false");
    if (!bVar3) {
      return false;
    }
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pUVar7 = FWeakObjectPtr::Get(&local_res10);
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pUVar7[5].field_0x8);
  if (!bVar3) {
    return false;
  }
  pUVar7 = FWeakObjectPtr::Get(local_res18);
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pUVar7[5].field_0x8);
  if (!bVar3) {
    return false;
  }
  pUVar7 = FWeakObjectPtr::Get(&local_res10);
  pUVar8 = FWeakObjectPtr::Get(local_res18);
  if (*(char *)(pUVar7 + 2) != *(char *)(pUVar8 + 2)) {
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    bVar1 = *(byte *)(pUVar7 + 2);
    pUVar7 = FWeakObjectPtr::Get(local_res18);
    return *(byte *)(pUVar7 + 2) < bVar1;
  }
  pUVar7 = FWeakObjectPtr::Get(&local_res10);
  pUVar9 = (UDS_W_WindowFrame *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar7[5].field_0x8);
  iVar5 = UDS_W_WindowFrame::GetZOrder(pUVar9);
  pUVar7 = FWeakObjectPtr::Get(local_res18);
  pUVar9 = (UDS_W_WindowFrame *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar7[5].field_0x8);
  iVar6 = UDS_W_WindowFrame::GetZOrder(pUVar9);
  return iVar6 < iVar5;
}

// AddOpenedWindowInfo @ 14bb4f4f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_WindowManager::AddOpenedWindowInfo
          (UDS_WindowManager *this,TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr> param_1)

{
  int *piVar1;
  TArray<TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *this_00;
  FWeakObjectPtr local_res10;
  
  pTVar2 = &this->OpenedWindowInfoList;
  this_00 = (pTVar2->AllocatorInstance).Data;
  pFVar3 = this_00 + (longlong)(this->OpenedWindowInfoList).ArrayNum * 8;
  local_res10 = param_1.WeakPtr;
  while( true ) {
    if (this_00 == pFVar3) {
      iVar5 = (this->OpenedWindowInfoList).ArrayNum;
      piVar1 = &(this->OpenedWindowInfoList).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->OpenedWindowInfoList).ArrayNum = iVar5 + 1;
      *(FWeakObjectPtr *)((pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_res10;
      return;
    }
    bVar4 = TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::UEOpEquals<UDS_WindowInfoBase,bool>
                      ((TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr> *)this_00,
                       (TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr> *)&local_res10);
    if (bVar4) break;
    this_00 = this_00 + 8;
  }
  return;
}

// AsyncLoadWindow @ 14bb51170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_WindowManager::AsyncLoadWindow
          (UDS_WindowManager *this,int param_1,
          TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *param_2)

{
  int *piVar1;
  longlong lVar2;
  TObjectPtr<UDS_WindowInfo>_u_0 TVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  UClass *pUVar6;
  UEnum *this_00;
  TObjectPtr<UDS_WindowInfo> *pTVar7;
  UAssetManager *pUVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  undefined1 *puVar11;
  undefined1 auStackY_248 [32];
  undefined1 local_1f8 [8];
  FDelegateAllocation local_1f0;
  TObjectPtr<UDS_WindowInfo>_u_0 local_1d8;
  TReferenceControllerBase<1> *pTStack_1d0;
  TObjectPtr<UDS_WindowInfo>_u_0 local_1c8;
  FMRSWRecursiveAccessDetector *pFStack_1c0;
  char *local_1b8;
  undefined1 local_1a8 [32];
  TObjectPtr<UDS_WindowInfo>_u_0 local_188;
  TReferenceControllerBase<1> *pTStack_180;
  FDestructionSentinel local_178;
  FDelegateAllocation *local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  if (*(int *)&(this->WindowInfoMap).field_0x8 != *(int *)&(this->WindowInfoMap).field_0x34) {
    puVar11 = *(undefined1 **)&(this->WindowInfoMap).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->WindowInfoMap).field_0x38;
    }
    iVar4 = *(int *)(puVar11 +
                    (ulonglong)(*(int *)&(this->WindowInfoMap).field_0x48 - 1U & param_1) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&this->WindowInfoMap;
      do {
        if (*(int *)(lVar2 + (longlong)iVar4 * 0x18) == param_1) {
          pTVar7 = TMapBase<int,TObjectPtr<UDS_WindowInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowInfo>,0>_>
                   ::FindChecked((TMapBase<int,TObjectPtr<UDS_WindowInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowInfo>,0>_>
                                  *)&this->WindowInfoMap,param_1);
          TVar3.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar7->field0_0x0).DebugPtr;
          if (TVar3.DebugPtr != (UDS_WindowInfo *)0x0) {
            iVar4 = (int)(TVar3.DebugPtr)->_padding_;
            piVar1 = (int *)((longlong)&(TVar3.DebugPtr)->_padding_ + 4);
            if (iVar4 == *piVar1) {
              iVar4 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x818,(ForAnyElementType *)&(TVar3.DebugPtr)->_padding_,piVar1);
            }
            *(int *)&(TVar3.DebugPtr)->_padding_ = iVar4 + 1;
            TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
            TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                      ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                       ((TVar3.DebugPtr)->_padding_ + (longlong)iVar4 * 0x18),param_2);
            pUVar8 = UAssetManager::Get();
            local_1a8._0_4_ = 0x50b;
            local_1a8._4_4_ = 0x28;
            local_1d8.DebugPtr = (UDS_WindowInfo *)0x0;
            local_1a8._8_8_ =
                 "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_WindowManager.cpp"
            ;
            pTStack_1d0 = (TReferenceControllerBase<1> *)0x0;
            local_1a8._16_8_ =
                 "bool __cdecl UDS_WindowManager::AsyncLoadWindow(int,const class TDelegate<void __cdecl(class UDS_UserWidget *),struct FDefaultDelegateUserPolicy> &)"
            ;
            local_1f8 = (undefined1  [8])0x0;
            local_1f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            local_1f0.DelegateSize = 0;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1f8,
                       (FWriteAccessScope *)&local_178);
            local_160 = &local_1f0;
            puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_1f0);
            if (puVar9 != (undefined8 *)0x0) {
              *puVar9 = &
                        ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar10 = FDelegateHandle::GenerateNewID();
              puVar9[2] = uVar10;
              *puVar9 = &
                        ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_WindowInfo____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
              ;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
              }
              puVar9[3] = 0;
              local_1c8.ObjectPtr.field0_0x0 = TVar3.ObjectPtr.field0_0x0;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
              }
              FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_1c8);
              puVar9[4] = UDS_WindowInfo::RequestAsyncLoadWindowCallback;
            }
            if (local_178.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
            }
            local_1c8._4_4_ = local_1a8._4_4_;
            local_1c8._0_4_ = local_1a8._0_4_;
            pFStack_1c0 = (FMRSWRecursiveAccessDetector *)local_1a8._8_8_;
            local_1b8 = (char *)local_1a8._16_8_;
            FStreamableManager::
            RequestAsyncLoad<FSoftObjectPath_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
                      (&pUVar8->StreamableManager,
                       (TSharedPtr<FStreamableHandle,1> *)&local_188.ObjectPtr,
                       (FSoftObjectPath *)&(TVar3.DebugPtr)->_padding_,
                       (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_1f8,100,
                       false,false,(FString *)&local_1d8.ObjectPtr,
                       (FSourceLocation *)&local_1c8.ObjectPtr);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_180);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1f8,
                       (FWriteAccessScope *)local_1a8);
            if ((local_1f0.DelegateSize != 0) &&
               (local_1f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
              (*(code *)**(undefined8 **)local_1f0.DelegateAllocator)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&local_1f0,0,0,0x10);
              local_1f0.DelegateSize = 0;
            }
            if (local_1a8[0x10] == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                        ((FMRSWRecursiveAccessDetector *)local_1a8._8_8_,
                         (FDestructionSentinel *)local_1a8);
            }
            if (local_1f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free((void *)local_1f0.DelegateAllocator);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_1f8);
            return true;
          }
          pUVar5 = UDS_LogManager::GetInst();
          if (pUVar5 == (UDS_LogManager *)0x0) {
            return false;
          }
          pUVar5 = UDS_LogManager::GetInst();
          GetWindowIDToString((FString *)&local_1d8.ObjectPtr,param_1);
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_WindowManager::AsyncLoadWindow",0x22,Yes);
          UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,0x504,L"info is nullptr. %s(%d)");
          local_1c8 = local_1d8;
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
            local_1c8 = local_1d8;
          }
          goto LAB_14bb515a9;
        }
        iVar4 = *(int *)(lVar2 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  pUVar5 = UDS_LogManager::GetInst();
  if (pUVar5 != (UDS_LogManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    pTStack_1d0 = (TReferenceControllerBase<1> *)CONCAT44(pTStack_1d0._4_4_,0x22);
    local_1d8.DebugPtr = (UDS_WindowInfo *)0x152785500;
    pUVar6 = Z_Construct_UClass_UEnum_NoRegister();
    local_188.DebugPtr = local_1d8.DebugPtr;
    pTStack_180 = pTStack_1d0;
    this_00 = (UEnum *)StaticFindObject(pUVar6,(UObject *)0x0,
                                        (TStringView<wchar_t> *)&local_188.ObjectPtr,None);
    if (this_00 == (UEnum *)0x0) {
      ::FString::FString((FString *)&local_1c8.ObjectPtr,L"Invalid WindowID");
    }
    else {
      UEnum::GetNameStringByValue(this_00,(FString *)&local_1c8.ObjectPtr,(longlong)param_1);
    }
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_WindowManager::AsyncLoadWindow",0x22,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,0x4fd,L"Invalid InWindowID. %s(%d)");
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
LAB_14bb515a9:
    if (local_1c8.DebugPtr != (UDS_WindowInfo *)0x0) {
      FMemory::Free(local_1c8.DebugPtr);
    }
  }
  return false;
}

// AsyncLoadWindow @ 14bb515e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_WindowManager::AsyncLoadWindow
          (UDS_WindowManager *this,EDS_WindowWidget param_1,
          TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *param_2)

{
  int *piVar1;
  longlong lVar2;
  TObjectPtr<UDS_WindowInfo>_u_0 TVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  UClass *pUVar6;
  UEnum *this_00;
  TObjectPtr<UDS_WindowInfo> *pTVar7;
  UAssetManager *pUVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  undefined1 *puVar11;
  undefined1 auStackY_248 [32];
  undefined1 auStack_1f8 [8];
  FDelegateAllocation FStack_1f0;
  TObjectPtr<UDS_WindowInfo>_u_0 TStack_1d8;
  TReferenceControllerBase<1> *pTStack_1d0;
  TObjectPtr<UDS_WindowInfo>_u_0 TStack_1c8;
  FMRSWRecursiveAccessDetector *pFStack_1c0;
  char *pcStack_1b8;
  undefined1 auStack_1a8 [32];
  TObjectPtr<UDS_WindowInfo>_u_0 TStack_188;
  TReferenceControllerBase<1> *pTStack_180;
  FDestructionSentinel FStack_178;
  FDelegateAllocation *pFStack_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_158;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  if (*(int *)&(this->WindowInfoMap).field_0x8 != *(int *)&(this->WindowInfoMap).field_0x34) {
    puVar11 = *(undefined1 **)&(this->WindowInfoMap).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->WindowInfoMap).field_0x38;
    }
    iVar4 = *(int *)(puVar11 +
                    (ulonglong)(*(int *)&(this->WindowInfoMap).field_0x48 - Login & param_1) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&this->WindowInfoMap;
      do {
        if (*(EDS_WindowWidget *)(lVar2 + (longlong)iVar4 * 0x18) == param_1) {
          pTVar7 = TMapBase<int,TObjectPtr<UDS_WindowInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowInfo>,0>_>
                   ::FindChecked((TMapBase<int,TObjectPtr<UDS_WindowInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowInfo>,0>_>
                                  *)&this->WindowInfoMap,param_1);
          TVar3.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar7->field0_0x0).DebugPtr;
          if (TVar3.DebugPtr != (UDS_WindowInfo *)0x0) {
            iVar4 = (int)(TVar3.DebugPtr)->_padding_;
            piVar1 = (int *)((longlong)&(TVar3.DebugPtr)->_padding_ + 4);
            if (iVar4 == *piVar1) {
              iVar4 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x818,(ForAnyElementType *)&(TVar3.DebugPtr)->_padding_,piVar1);
            }
            *(int *)&(TVar3.DebugPtr)->_padding_ = iVar4 + 1;
            TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
            TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                      ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                       ((TVar3.DebugPtr)->_padding_ + (longlong)iVar4 * 0x18),param_2);
            pUVar8 = UAssetManager::Get();
            auStack_1a8._0_4_ = 0x50b;
            auStack_1a8._4_4_ = 0x28;
            TStack_1d8.DebugPtr = (UDS_WindowInfo *)0x0;
            auStack_1a8._8_8_ =
                 "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_WindowManager.cpp"
            ;
            pTStack_1d0 = (TReferenceControllerBase<1> *)0x0;
            auStack_1a8._16_8_ =
                 "bool __cdecl UDS_WindowManager::AsyncLoadWindow(int,const class TDelegate<void __cdecl(class UDS_UserWidget *),struct FDefaultDelegateUserPolicy> &)"
            ;
            auStack_1f8 = (undefined1  [8])0x0;
            FStack_1f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            FStack_1f0.DelegateSize = 0;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_1f8,
                       (FWriteAccessScope *)&FStack_178);
            pFStack_160 = &FStack_1f0;
            puVar9 = UE::Core::Private::DelegateAllocate(0x28,&FStack_1f0);
            if (puVar9 != (undefined8 *)0x0) {
              *puVar9 = &
                        ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar10 = FDelegateHandle::GenerateNewID();
              puVar9[2] = uVar10;
              *puVar9 = &
                        ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_WindowInfo____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
              ;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
              }
              puVar9[3] = 0;
              TStack_1c8.ObjectPtr.field0_0x0 = TVar3.ObjectPtr.field0_0x0;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
              }
              FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&TStack_1c8);
              puVar9[4] = UDS_WindowInfo::RequestAsyncLoadWindowCallback;
            }
            if (FStack_178.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_178.Accessor,&FStack_178);
            }
            TStack_1c8._4_4_ = auStack_1a8._4_4_;
            TStack_1c8._0_4_ = auStack_1a8._0_4_;
            pFStack_1c0 = (FMRSWRecursiveAccessDetector *)auStack_1a8._8_8_;
            pcStack_1b8 = (char *)auStack_1a8._16_8_;
            FStreamableManager::
            RequestAsyncLoad<FSoftObjectPath_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
                      (&pUVar8->StreamableManager,
                       (TSharedPtr<FStreamableHandle,1> *)&TStack_188.ObjectPtr,
                       (FSoftObjectPath *)&(TVar3.DebugPtr)->_padding_,
                       (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_1f8,100,
                       false,false,(FString *)&TStack_1d8.ObjectPtr,
                       (FSourceLocation *)&TStack_1c8.ObjectPtr);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_180);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_1f8,
                       (FWriteAccessScope *)auStack_1a8);
            if ((FStack_1f0.DelegateSize != 0) &&
               (FStack_1f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
              (*(code *)**(undefined8 **)FStack_1f0.DelegateAllocator)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&FStack_1f0,0,0,0x10);
              FStack_1f0.DelegateSize = 0;
            }
            if (auStack_1a8[0x10] == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                        ((FMRSWRecursiveAccessDetector *)auStack_1a8._8_8_,
                         (FDestructionSentinel *)auStack_1a8);
            }
            if (FStack_1f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free((void *)FStack_1f0.DelegateAllocator);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)auStack_1f8);
            return true;
          }
          pUVar5 = UDS_LogManager::GetInst();
          if (pUVar5 == (UDS_LogManager *)0x0) {
            return false;
          }
          pUVar5 = UDS_LogManager::GetInst();
          GetWindowIDToString((FString *)&TStack_1d8.ObjectPtr,param_1);
          TStack_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_158,"UDS_WindowManager::AsyncLoadWindow",0x22,Yes);
          UDS_LogManager::PrintLog(pUVar5,1,Warning,TStack_158.Ptr,0x504,L"info is nullptr. %s(%d)")
          ;
          TStack_1c8 = TStack_1d8;
          if ((void *)TStack_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_158._padding_);
            TStack_1c8 = TStack_1d8;
          }
          goto LAB_14bb515a9;
        }
        iVar4 = *(int *)(lVar2 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  pUVar5 = UDS_LogManager::GetInst();
  if (pUVar5 != (UDS_LogManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    pTStack_1d0 = (TReferenceControllerBase<1> *)CONCAT44(pTStack_1d0._4_4_,0x22);
    TStack_1d8.DebugPtr = (UDS_WindowInfo *)0x152785500;
    pUVar6 = Z_Construct_UClass_UEnum_NoRegister();
    TStack_188.DebugPtr = TStack_1d8.DebugPtr;
    pTStack_180 = pTStack_1d0;
    this_00 = (UEnum *)StaticFindObject(pUVar6,(UObject *)0x0,
                                        (TStringView<wchar_t> *)&TStack_188.ObjectPtr,None);
    if (this_00 == (UEnum *)0x0) {
      ::FString::FString((FString *)&TStack_1c8.ObjectPtr,L"Invalid WindowID");
    }
    else {
      UEnum::GetNameStringByValue(this_00,(FString *)&TStack_1c8.ObjectPtr,(longlong)(int)param_1);
    }
    TStack_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_158,"UDS_WindowManager::AsyncLoadWindow",0x22,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,TStack_158.Ptr,0x4fd,L"Invalid InWindowID. %s(%d)");
    if ((void *)TStack_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)TStack_158._padding_);
    }
LAB_14bb515a9:
    if (TStack_1c8.DebugPtr != (UDS_WindowInfo *)0x0) {
      FMemory::Free(TStack_1c8.DebugPtr);
    }
  }
  return false;
}

// ClearWindowInfos @ 14bb55340

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_WindowManager::ClearWindowInfos(UDS_WindowManager *this)

{
  int *piVar1;
  undefined1 *puVar2;
  TMap<int,TObjectPtr<UDS_WindowGroupInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowGroupInfo>,0>_>
  *this_00;
  FScriptContainerElement *pFVar3;
  int iVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar6 = (this->WindowInfoArray).AllocatorInstance.Data;
  iVar4 = (this->WindowInfoArray).ArrayNum;
  pFVar3 = pFVar6 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->WindowInfoArray).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TObjectPtr<UDS_WindowInfo>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar3) break;
    if (*(longlong **)pFVar6 != (longlong *)0x0) {
      (**(code **)(**(longlong **)pFVar6 + 0x2d0))();
      *(longlong *)pFVar6 = 0;
    }
    pFVar6 = pFVar6 + 8;
  }
  bVar5 = 1 < *(int *)&(this->WindowInfoMap).field_0x48;
  if (!bVar5) {
    TSet<TTuple<int,TObjectPtr<UDS_WindowInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowInfo>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,TObjectPtr<UDS_WindowInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowInfo>,0>,FDefaultSetAllocator>
                      *)&this->WindowInfoMap);
  }
  puVar2 = &(this->WindowInfoMap).field_0xc;
  *(undefined4 *)&(this->WindowInfoMap).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->WindowInfoMap,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->WindowInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WindowInfoMap).field_0x34 = 0;
  iVar4 = *(int *)&(this->WindowInfoMap).field_0x2c;
  *(undefined4 *)&(this->WindowInfoMap).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->WindowInfoMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->WindowInfoMap).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->WindowInfoMap).field_0x48 = 1;
    TSet<TTuple<int,TObjectPtr<UDS_WindowInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowInfo>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,TObjectPtr<UDS_WindowInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowInfo>,0>,FDefaultSetAllocator>
              *)&this->WindowInfoMap);
  }
  piVar1 = &(this->WindowInfoArray).ArrayMax;
  (this->WindowInfoArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->WindowInfoArray).AllocatorInstance,0,piVar1);
  }
  pFVar6 = (this->WindowGroupInfoArray).AllocatorInstance.Data;
  iVar4 = (this->WindowGroupInfoArray).ArrayNum;
  pFVar3 = pFVar6 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->WindowGroupInfoArray).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TObjectPtr<UDS_WindowGroupInfo>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar6 == pFVar3) break;
    if (*(UDS_WindowGroupInfo **)pFVar6 != (UDS_WindowGroupInfo *)0x0) {
      UDS_WindowGroupInfo::Clear(*(UDS_WindowGroupInfo **)pFVar6);
      *(undefined8 *)pFVar6 = 0;
    }
    pFVar6 = pFVar6 + 8;
  }
  this_00 = &this->WindowGroupInfoMap;
  bVar5 = 1 < *(int *)&(this->WindowGroupInfoMap).field_0x48;
  if (!bVar5) {
    TSet<TTuple<int,TObjectPtr<UDS_WindowGroupInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowGroupInfo>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,TObjectPtr<UDS_WindowGroupInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowGroupInfo>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar2 = &(this->WindowGroupInfoMap).field_0xc;
  *(undefined4 *)&(this->WindowGroupInfoMap).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->WindowGroupInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WindowGroupInfoMap).field_0x34 = 0;
  iVar4 = *(int *)&(this->WindowGroupInfoMap).field_0x2c;
  *(undefined4 *)&(this->WindowGroupInfoMap).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->WindowGroupInfoMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->WindowGroupInfoMap).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->WindowGroupInfoMap).field_0x48 = 1;
    TSet<TTuple<int,TObjectPtr<UDS_WindowGroupInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowGroupInfo>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,TObjectPtr<UDS_WindowGroupInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowGroupInfo>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  piVar1 = &(this->WindowGroupInfoArray).ArrayMax;
  (this->WindowGroupInfoArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->WindowGroupInfoArray).AllocatorInstance,0,piVar1);
  }
  return;
}

// CloseAllWindow @ 14bb556c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_WindowManager::CloseAllWindow(UDS_WindowManager *this)

{
  int *piVar1;
  FWeakObjectPtr *pFVar2;
  FScriptContainerElement *_Src;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ForAnyElementType this_00;
  uint *puVar9;
  float *pfVar10;
  undefined1 local_res8 [8];
  float local_res10 [2];
  uint local_res18 [2];
  float local_res20 [2];
  FWeakObjectPtr local_68;
  UObject *local_60;
  ForAnyElementType local_58;
  int local_50;
  int local_4c [3];
  
  local_50 = (this->OpenedWindowInfoList).ArrayNum;
  lVar8 = (longlong)local_50;
  _Src = (this->OpenedWindowInfoList).AllocatorInstance.Data;
  local_58.Data = (FScriptContainerElement *)0x0;
  if (local_50 == 0) {
    local_4c[0] = 0;
    iVar6 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_50,0,&local_58,local_50,local_4c);
    memcpy(local_58.Data,_Src,lVar8 << 3);
    iVar6 = local_50;
  }
  pFVar2 = (FWeakObjectPtr *)(local_58.Data + (longlong)iVar6 * 8);
  this_00.Data = local_58.Data;
  iVar7 = iVar6;
  do {
    if (iVar7 != iVar6) {
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FWeakObjectPtr *)this_00.Data == pFVar2) {
      piVar1 = &(this->OpenedWindowInfoList).ArrayMax;
      (this->OpenedWindowInfoList).ArrayNum = 0;
      if (*piVar1 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&(this->OpenedWindowInfoList).AllocatorInstance,0,piVar1);
      }
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->CloseAllWindowDelegate);
      if ((FWeakObjectPtr *)local_58.Data != (FWeakObjectPtr *)0x0) {
        FMemory::Free(local_58.Data);
      }
      return;
    }
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00.Data);
    if (bVar3) {
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.Data);
      if (*(int *)(pUVar4 + 1) != 0xb) {
        pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.Data);
        if (pUVar4[2].field_0x1 == '\x01') {
          local_res10[0] = 0.0;
          local_res18[0] = 0;
          pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.Data);
          pfVar10 = local_res10;
          puVar9 = local_res18;
        }
        else {
          pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.Data);
          if (pUVar4[2].field_0x1 != '\x02') goto LAB_14bb55871;
          pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.Data);
          if (pUVar4 == (UObject *)0x0) {
LAB_14bb557ed:
            pUVar4 = (UObject *)0x0;
          }
          else {
            pUVar5 = Z_Construct_UClass_UDS_MultipleWindowInfo_NoRegister();
            iVar7 = (int)pUVar5->_padding_;
            if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar7) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
                &pUVar5->_padding_)) goto LAB_14bb557ed;
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar4);
          }
          local_68.ObjectIndex = 0;
          local_68.ObjectSerialNumber = 0;
          local_60 = pUVar4;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar4);
          }
          FWeakObjectPtr::operator=(&local_68,(FObjectPtr)&local_60);
          bVar3 = FWeakObjectPtr::IsValid(&local_68);
          if (!bVar3) goto LAB_14bb55871;
          local_res20[0] = 0.0;
          pUVar4 = FWeakObjectPtr::Get(&local_68);
          puVar9 = (uint *)&pUVar4[9].field_0x20;
          pUVar4 = FWeakObjectPtr::Get(&local_68);
          pfVar10 = local_res20;
        }
        CloseWindow(this,*(int *)(pUVar4 + 1),puVar9,pfVar10);
      }
    }
LAB_14bb55871:
    this_00.Data = this_00.Data + 8;
    iVar7 = local_50;
  } while( true );
}

// CloseCommonCenterLoading @ 14bb558f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UDS_WindowManager::CloseCommonCenterLoading(void)

{
  UDS_WindowManager *this;
  float local_res8 [2];
  uint local_res10 [6];
  
  this = GetInst();
  if (this == (UDS_WindowManager *)0x0) {
    return false;
  }
  local_res8[0] = 0.0;
  local_res10[0] = 0;
  CloseWindow(this,0x387,local_res10,local_res8);
  return true;
}

// CloseWindow @ 14bb55dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_WindowManager::CloseWindow(UDS_WindowManager *this,int param_1,uint *param_2,float *param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  UDS_LogManager *pUVar4;
  UClass *pUVar5;
  UEnum *this_00;
  UObject *pUVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  FTimerManager *pFVar9;
  UDS_WindowInfo *this_01;
  ForElementType<TAlignedBytes<16,16>_> FVar10;
  wchar_t *_Str;
  double dVar11;
  float fVar12;
  undefined1 auStackY_248 [32];
  bool local_208;
  bool local_207 [7];
  FWeakObjectPtr local_200;
  undefined1 local_1f8 [8];
  FDelegateAllocation local_1f0;
  FDelegateAllocation local_1e0;
  uint local_1d0 [2];
  FWeakObjectPtr local_1c8;
  FString local_1c0;
  UDS_WindowManager *local_1b0;
  UDS_WindowManager *local_1a8 [2];
  wchar_t *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  TStringView<wchar_t> local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_248;
  GetWindowInfo(this,(int)&local_200);
  bVar2 = FWeakObjectPtr::IsValid(&local_200);
  if (!bVar2) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    iStack_190 = 0x22;
    local_198 = L"/Script/ProjectDS.EDS_WindowWidget";
    pUVar5 = Z_Construct_UClass_UEnum_NoRegister();
    local_188._12_4_ = uStack_18c;
    local_188.Size = iStack_190;
    local_188.DataPtr = local_198;
    this_00 = (UEnum *)StaticFindObject(pUVar5,(UObject *)0x0,&local_188,None);
    if (this_00 == (UEnum *)0x0) {
      ::FString::FString(&local_1c0,L"Invalid WindowID");
    }
    else {
      UEnum::GetNameStringByValue(this_00,&local_1c0,(longlong)param_1);
    }
    local_178._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_178,"UDS_WindowManager::CloseWindow",0x1e,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_178.Ptr,0x5cd,L"info is invaild. %s(%d)");
    if ((void *)local_178._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_178._padding_);
    }
    if (local_1c0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
    return;
  }
  fVar12 = *param_3;
  if (fVar12 <= 0.0) {
    pUVar6 = FWeakObjectPtr::Get(&local_200);
    if (*(int *)&pUVar6[4].field_0x20 == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)&pUVar6[4].field_0x18;
    }
    dVar11 = _wtof(_Str);
    fVar12 = (float)dVar11;
  }
  pUVar6 = FWeakObjectPtr::Get(&local_200);
  if (pUVar6[2].field_0x1 == '\x01') {
    pUVar6 = FWeakObjectPtr::Get(&local_200);
    if (pUVar6[8].field_0x24 != '\0') {
      pUVar6 = FWeakObjectPtr::Get(&local_200);
      pUVar6[8].field_0x25 = 1;
      return;
    }
    if (fVar12 <= 0.0) {
      local_1d0[0] = 0;
      ExecuteClose(this,(TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr>)local_200,local_1d0);
      return;
    }
    pUVar6 = FWeakObjectPtr::Get(&local_200);
    cVar3 = (**(code **)(*(longlong *)pUVar6 + 0x2c0))(pUVar6,0);
    if (cVar3 == '\0') {
      return;
    }
    local_208 = false;
    TMulticastDelegate<void___cdecl(enum_EDS_WindowWidget,bool_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&this->WindowOpenCloseDelegate,param_1,&local_208);
    local_1f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_1f0.DelegateSize = 0;
    puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_1f0);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__HI__6B_
      ;
      *(int *)(puVar7 + 1) = param_1;
      *(uint *)((longlong)puVar7 + 0xc) = *param_2;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_WindowManager____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__HI__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_WindowManager *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar7[3] = 0;
      local_1b0 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_WindowManager *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_1b0);
      puVar7[4] = OnCloseDelayCallback;
    }
    pFVar9 = FDS_TimerManager::Get((UObject *)0x0);
    pUVar6 = FWeakObjectPtr::Get(&local_200);
    FTimerManager::SetTimer
              (pFVar9,(FTimerHandle *)&pUVar6[8].field_0x10,
               (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
               &local_1f0,fVar12,false,__real_bf800000);
    FVar10 = local_1f0.DelegateAllocator;
    if (local_1f0.DelegateSize != 0) {
      if (local_1f0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        return;
      }
      (*(code *)**(undefined8 **)local_1f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_1f0,0,0,0x10);
      local_1f0.DelegateSize = 0;
      FVar10 = local_1f0.DelegateAllocator;
    }
  }
  else {
    pUVar6 = FWeakObjectPtr::Get(&local_200);
    if (pUVar6[2].field_0x1 != '\x02') {
      return;
    }
    if (*param_2 == 0) {
      `UDS_WindowManager::CloseWindow'::__l28::<lambda_1>::operator()(local_1f8);
      return;
    }
    if (fVar12 <= 0.0) {
      ExecuteClose(this,(TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr>)local_200,param_2);
      return;
    }
    this_01 = (UDS_WindowInfo *)FWeakObjectPtr::Get(&local_200);
    UDS_WindowInfo::GetMultipleWindowInfo(this_01,(uint *)&local_1c8);
    bVar2 = FWeakObjectPtr::IsValid(&local_1c8);
    if (!bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<353616502999483901>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_WindowManager.cpp"
                         ,0x5fd,"false");
      if (!bVar2) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar6 = FWeakObjectPtr::Get(&local_1c8);
    cVar3 = (**(code **)(*(longlong *)pUVar6 + 0x2c0))(pUVar6,0);
    if (cVar3 == '\0') {
      return;
    }
    local_207[0] = false;
    TMulticastDelegate<void___cdecl(enum_EDS_WindowWidget,bool_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&this->WindowOpenCloseDelegate,param_1,local_207);
    local_1e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_1e0.DelegateSize = 0;
    puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_1e0);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__HI__6B_
      ;
      *(int *)(puVar7 + 1) = param_1;
      *(uint *)((longlong)puVar7 + 0xc) = *param_2;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_WindowManager____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__HI__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_WindowManager *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar7[3] = 0;
      local_1a8[0] = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_WindowManager *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)local_1a8);
      puVar7[4] = OnCloseDelayCallback;
    }
    pFVar9 = FDS_TimerManager::Get((UObject *)0x0);
    pUVar6 = FWeakObjectPtr::Get(&local_1c8);
    FTimerManager::SetTimer
              (pFVar9,(FTimerHandle *)&pUVar6[8].field_0x10,
               (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
               &local_1e0,fVar12,false,__real_bf800000);
    FVar10 = local_1e0.DelegateAllocator;
    if (local_1e0.DelegateSize != 0) {
      if (local_1e0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        return;
      }
      (*(code *)**(undefined8 **)local_1e0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_1e0,0,0,0x10);
      local_1e0.DelegateSize = 0;
      FVar10 = local_1e0.DelegateAllocator;
    }
  }
  if (FVar10 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FVar10);
  }
  return;
}

// CloseWindow @ 14bb56340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_WindowManager::CloseWindow
          (UDS_WindowManager *this,EDS_WindowWidget param_1,uint *param_2,float *param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  UDS_LogManager *pUVar4;
  UClass *pUVar5;
  UEnum *this_00;
  UObject *pUVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  FTimerManager *pFVar9;
  UDS_WindowInfo *this_01;
  ForElementType<TAlignedBytes<16,16>_> FVar10;
  wchar_t *_Str;
  double dVar11;
  float fVar12;
  undefined1 auStackY_248 [32];
  bool bStack_208;
  bool abStack_207 [7];
  FWeakObjectPtr FStack_200;
  undefined1 auStack_1f8 [8];
  FDelegateAllocation FStack_1f0;
  FDelegateAllocation FStack_1e0;
  uint auStack_1d0 [2];
  FWeakObjectPtr FStack_1c8;
  FString FStack_1c0;
  UDS_WindowManager *pUStack_1b0;
  UDS_WindowManager *apUStack_1a8 [2];
  wchar_t *pwStack_198;
  int iStack_190;
  undefined4 uStack_18c;
  TStringView<wchar_t> TStack_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_178;
  ulonglong uStack_58;
  
  uStack_58 = __security_cookie.value ^ (ulonglong)auStackY_248;
  GetWindowInfo(this,(int)&FStack_200);
  bVar2 = FWeakObjectPtr::IsValid(&FStack_200);
  if (!bVar2) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    iStack_190 = 0x22;
    pwStack_198 = L"/Script/ProjectDS.EDS_WindowWidget";
    pUVar5 = Z_Construct_UClass_UEnum_NoRegister();
    TStack_188._12_4_ = uStack_18c;
    TStack_188.Size = iStack_190;
    TStack_188.DataPtr = pwStack_198;
    this_00 = (UEnum *)StaticFindObject(pUVar5,(UObject *)0x0,&TStack_188,None);
    if (this_00 == (UEnum *)0x0) {
      ::FString::FString(&FStack_1c0,L"Invalid WindowID");
    }
    else {
      UEnum::GetNameStringByValue(this_00,&FStack_1c0,(longlong)(int)param_1);
    }
    TStack_178._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_178,"UDS_WindowManager::CloseWindow",0x1e,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,TStack_178.Ptr,0x5cd,L"info is invaild. %s(%d)");
    if ((void *)TStack_178._padding_ != (void *)0x0) {
      FMemory::Free((void *)TStack_178._padding_);
    }
    if (FStack_1c0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(FStack_1c0.Data.AllocatorInstance.Data);
    return;
  }
  fVar12 = *param_3;
  if (fVar12 <= 0.0) {
    pUVar6 = FWeakObjectPtr::Get(&FStack_200);
    if (*(int *)&pUVar6[4].field_0x20 == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)&pUVar6[4].field_0x18;
    }
    dVar11 = _wtof(_Str);
    fVar12 = (float)dVar11;
  }
  pUVar6 = FWeakObjectPtr::Get(&FStack_200);
  if (pUVar6[2].field_0x1 == '\x01') {
    pUVar6 = FWeakObjectPtr::Get(&FStack_200);
    if (pUVar6[8].field_0x24 != '\0') {
      pUVar6 = FWeakObjectPtr::Get(&FStack_200);
      pUVar6[8].field_0x25 = 1;
      return;
    }
    if (fVar12 <= 0.0) {
      auStack_1d0[0] = 0;
      ExecuteClose(this,(TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr>)FStack_200,auStack_1d0);
      return;
    }
    pUVar6 = FWeakObjectPtr::Get(&FStack_200);
    cVar3 = (**(code **)(*(longlong *)pUVar6 + 0x2c0))(pUVar6,0);
    if (cVar3 == '\0') {
      return;
    }
    bStack_208 = false;
    TMulticastDelegate<void___cdecl(enum_EDS_WindowWidget,bool_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&this->WindowOpenCloseDelegate,param_1,&bStack_208);
    FStack_1f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_1f0.DelegateSize = 0;
    puVar7 = UE::Core::Private::DelegateAllocate(0x28,&FStack_1f0);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__HI__6B_
      ;
      *(EDS_WindowWidget *)(puVar7 + 1) = param_1;
      *(uint *)((longlong)puVar7 + 0xc) = *param_2;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_WindowManager____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__HI__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_WindowManager *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar7[3] = 0;
      pUStack_1b0 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_WindowManager *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&pUStack_1b0);
      puVar7[4] = OnCloseDelayCallback;
    }
    pFVar9 = FDS_TimerManager::Get((UObject *)0x0);
    pUVar6 = FWeakObjectPtr::Get(&FStack_200);
    FTimerManager::SetTimer
              (pFVar9,(FTimerHandle *)&pUVar6[8].field_0x10,
               (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
               &FStack_1f0,fVar12,false,__real_bf800000);
    FVar10 = FStack_1f0.DelegateAllocator;
    if (FStack_1f0.DelegateSize != 0) {
      if (FStack_1f0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        return;
      }
      (*(code *)**(undefined8 **)FStack_1f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&FStack_1f0,0,0,0x10);
      FStack_1f0.DelegateSize = 0;
      FVar10 = FStack_1f0.DelegateAllocator;
    }
  }
  else {
    pUVar6 = FWeakObjectPtr::Get(&FStack_200);
    if (pUVar6[2].field_0x1 != '\x02') {
      return;
    }
    if (*param_2 == 0) {
      `UDS_WindowManager::CloseWindow'::__l28::<lambda_1>::operator()(auStack_1f8);
      return;
    }
    if (fVar12 <= 0.0) {
      ExecuteClose(this,(TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr>)FStack_200,param_2);
      return;
    }
    this_01 = (UDS_WindowInfo *)FWeakObjectPtr::Get(&FStack_200);
    UDS_WindowInfo::GetMultipleWindowInfo(this_01,(uint *)&FStack_1c8);
    bVar2 = FWeakObjectPtr::IsValid(&FStack_1c8);
    if (!bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<353616502999483901>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_WindowManager.cpp"
                         ,0x5fd,"false");
      if (!bVar2) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar6 = FWeakObjectPtr::Get(&FStack_1c8);
    cVar3 = (**(code **)(*(longlong *)pUVar6 + 0x2c0))(pUVar6,0);
    if (cVar3 == '\0') {
      return;
    }
    abStack_207[0] = false;
    TMulticastDelegate<void___cdecl(enum_EDS_WindowWidget,bool_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&this->WindowOpenCloseDelegate,param_1,abStack_207);
    FStack_1e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_1e0.DelegateSize = 0;
    puVar7 = UE::Core::Private::DelegateAllocate(0x28,&FStack_1e0);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__HI__6B_
      ;
      *(EDS_WindowWidget *)(puVar7 + 1) = param_1;
      *(uint *)((longlong)puVar7 + 0xc) = *param_2;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_WindowManager____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__HI__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_WindowManager *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar7[3] = 0;
      apUStack_1a8[0] = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_WindowManager *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)apUStack_1a8);
      puVar7[4] = OnCloseDelayCallback;
    }
    pFVar9 = FDS_TimerManager::Get((UObject *)0x0);
    pUVar6 = FWeakObjectPtr::Get(&FStack_1c8);
    FTimerManager::SetTimer
              (pFVar9,(FTimerHandle *)&pUVar6[8].field_0x10,
               (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
               &FStack_1e0,fVar12,false,__real_bf800000);
    FVar10 = FStack_1e0.DelegateAllocator;
    if (FStack_1e0.DelegateSize != 0) {
      if (FStack_1e0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        return;
      }
      (*(code *)**(undefined8 **)FStack_1e0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&FStack_1e0,0,0,0x10);
      FStack_1e0.DelegateSize = 0;
      FVar10 = FStack_1e0.DelegateAllocator;
    }
  }
  if (FVar10 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FVar10);
  }
  return;
}

// CloseWindowGroup @ 14bb56350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_WindowManager::CloseWindowGroup(UDS_WindowManager *this,int param_1)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  longlong lVar3;
  TObjectPtr<UDS_WindowGroupInfo> this_00;
  bool bVar4;
  char cVar5;
  int iVar6;
  UDS_LogManager *pUVar7;
  UClass *pUVar8;
  UEnum *this_01;
  TObjectPtr<UDS_WindowGroupInfo>_u_0 *pTVar9;
  UObject *pUVar10;
  UDS_GameInstance *this_02;
  UDS_ManagerBase *pUVar11;
  undefined1 *puVar12;
  FWeakObjectPtr *pFVar13;
  undefined1 auStackY_1c8 [32];
  bool local_188 [8];
  undefined1 local_180 [8];
  FString local_178;
  TStringView<wchar_t> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if (*(int *)&(this->WindowGroupInfoMap).field_0x8 !=
      *(int *)&(this->WindowGroupInfoMap).field_0x34) {
    puVar12 = *(undefined1 **)&(this->WindowGroupInfoMap).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->WindowGroupInfoMap).field_0x38;
    }
    iVar6 = *(int *)(puVar12 +
                    (ulonglong)(*(int *)&(this->WindowGroupInfoMap).field_0x48 - 1U & param_1) * 4);
    if (iVar6 != -1) {
      lVar3 = *(longlong *)&this->WindowGroupInfoMap;
      do {
        if (*(int *)(lVar3 + (longlong)iVar6 * 0x18) == param_1) {
          pTVar9 = &TMapBase<int,TObjectPtr<UDS_WindowGroupInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowGroupInfo>,0>_>
                    ::FindChecked((TMapBase<int,TObjectPtr<UDS_WindowGroupInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowGroupInfo>,0>_>
                                   *)&this->WindowGroupInfoMap,param_1)->field0_0x0;
          this_00.field0_0x0 = (TObjectPtr<UDS_WindowGroupInfo>_u_0)pTVar9->DebugPtr;
          if (this_00.field0_0x0 != (UDS_WindowGroupInfo *)0x0) {
            pFVar13 = (FWeakObjectPtr *)
                      (((TArray<TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                         *)((longlong)this_00.field0_0x0 + 0x78))->AllocatorInstance).Data;
            iVar6 = *(int *)((longlong)this_00.field0_0x0 + 0x80);
            local_188[0] = false;
            pFVar1 = pFVar13 + iVar6;
            goto LAB_14bb56510;
          }
          pUVar7 = UDS_LogManager::GetInst();
          if (pUVar7 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar7 = UDS_LogManager::GetInst();
          GetWindowGroupIDToString((FString *)&local_168,(EDS_WindowWidgetGroup)param_1);
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_WindowManager::CloseWindowGroup",0x23,Yes);
          UDS_LogManager::PrintLog(pUVar7,1,Warning,local_158.Ptr,0x65a,L"info is nullptr. %s(%d)");
          local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_168.DataPtr;
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
            local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_168.DataPtr;
          }
          goto LAB_14bb56699;
        }
        iVar6 = *(int *)(lVar3 + 0x10 + (longlong)iVar6 * 0x18);
      } while (iVar6 != -1);
    }
  }
  pUVar7 = UDS_LogManager::GetInst();
  if (pUVar7 != (UDS_LogManager *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    local_168.Size = 0x27;
    local_168.DataPtr = L"/Script/ProjectDS.EDS_WindowWidgetGroup";
    pUVar8 = Z_Construct_UClass_UEnum_NoRegister();
    this_01 = (UEnum *)StaticFindObject(pUVar8,(UObject *)0x0,&local_168,None);
    if (this_01 == (UEnum *)0x0) {
      ::FString::FString(&local_178,L"Invalid WindowGroupID");
    }
    else {
      UEnum::GetNameStringByValue(this_01,&local_178,(ulonglong)(uint)param_1 & 0xff);
    }
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_WindowManager::CloseWindowGroup",0x23,Yes);
    UDS_LogManager::PrintLog
              (pUVar7,1,Warning,local_158.Ptr,0x653,L"Invalid InWindowGroupID. %s(%d)");
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
LAB_14bb56699:
    if ((FWeakObjectPtr)local_178.Data.AllocatorInstance.Data != (FWeakObjectPtr)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
  }
  return;
LAB_14bb56510:
  if (*(int *)((longlong)this_00.field0_0x0 + 0x80) != iVar6) {
    `TCheckedPointerIterator<TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr>,int,0>::operator!='::__l2
    ::<lambda_1>::operator()(local_180);
  }
  if (pFVar13 == pFVar1) {
    if (local_188[0] != false) {
      return;
    }
    UDS_WindowGroupInfo::Clear((UDS_WindowGroupInfo *)this_00.field0_0x0);
    return;
  }
  local_178.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar13;
  bVar4 = TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr> *)&local_178,(void *)0x0);
  if (!bVar4) {
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_178);
    cVar5 = (**(code **)(*(longlong *)pUVar10 + 0x2b8))(pUVar10);
    if ((cVar5 != '\0') &&
       (this_02 = UDS_GameInstance::GetInst(), this_02 != (UDS_GameInstance *)0x0)) {
      pUVar8 = Z_Construct_UClass_UDS_WindowManager_NoRegister();
      pUVar11 = UDS_GameInstance::GetManager(this_02,(FName)pUVar8->_padding_);
      if (pUVar11 == (UDS_ManagerBase *)0x0) {
LAB_14bb565b4:
        pUVar11 = (UDS_ManagerBase *)0x0;
      }
      else {
        pUVar8 = Z_Construct_UClass_UDS_WindowManager_NoRegister();
        iVar2 = (int)pUVar8->_padding_;
        if ((*(int *)(pUVar11->_padding_ + 0x38) < iVar2) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar8->_padding_)) goto LAB_14bb565b4;
      }
      if (pUVar11 != (UDS_ManagerBase *)0x0) {
        pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_178);
        TMulticastDelegate<void___cdecl(enum_EDS_WindowWidget,bool_const_&),FDefaultDelegateUserPolicy>
        ::Broadcast(&pUVar11[9]._padding_,*(EDS_WindowWidget *)(pUVar10 + 1),local_188);
      }
    }
  }
  pFVar13 = pFVar13 + 1;
  goto LAB_14bb56510;
}

// CloseWindowGroup @ 14bb566d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_WindowManager::CloseWindowGroup(UDS_WindowManager *this,EDS_WindowWidgetGroup param_1)

{
  CloseWindowGroup(this,(uint)param_1);
  return;
}

// CreateRootWidget @ 14bb5c030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_WindowManager::CreateRootWidget(UDS_WindowManager *this)

{
  TWeakObjectPtr<UDS_W_Root,FWeakObjectPtr> *this_00;
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_GameInstance *this_01;
  UObject *pUVar4;
  FString *pFVar5;
  UClass *pUVar6;
  FName FVar7;
  UWorld *pUVar8;
  UUserWidget *this_02;
  void *pvVar9;
  undefined1 auStackY_1d8 [32];
  uint uVar10;
  wchar_t *pwVar11;
  FWeakObjectPtr local_1a8;
  FString local_1a0;
  undefined1 local_188 [24];
  longlong local_170;
  void *local_168;
  longlong local_160;
  FString local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  this_00 = &this->RootWidget;
  bVar2 = TWeakObjectPtr<UDS_W_Root,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  if (!bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_WindowManager::CreateRootWidget",0x23,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x99f,L"RootWidget already exists.");
    if ((void *)local_148._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_148._padding_);
    return;
  }
  this_01 = UDS_GameInstance::GetInst();
  if (this_01 == (UDS_GameInstance *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_WindowManager::CreateRootWidget",0x23,Yes);
    pwVar11 = L"gameInst is nullptr.";
    uVar10 = 0x9a6;
  }
  else {
    UDS_CommonSetting::GetInst();
    bVar2 = FWeakObjectPtr::IsValid(&local_1a8);
    if (bVar2) {
      pUVar4 = FWeakObjectPtr::Get(&local_1a8);
      pFVar5 = FSoftObjectPath::ToString((FSoftObjectPath *)&pUVar4[5].field_0x8,&local_158);
      pFVar5 = FWN_SoftObjectUtils::GetObjectPath(&local_1a0,pFVar5,false);
      local_188._16_8_ = 0;
      local_170 = 0;
      local_168 = (void *)0x0;
      local_160 = 0;
      local_188._0_8_ = (pFVar5->Data).AllocatorInstance.Data;
      iVar1 = (pFVar5->Data).ArrayNum;
      local_188._8_4_ = iVar1 + -1;
      if (iVar1 == 0) {
        local_188._8_4_ = 0;
      }
      FSoftObjectPath::SetPath
                ((FSoftObjectPath *)(local_188 + 0x10),(TStringView<wchar_t> *)local_188);
      if ((UDS_W_Root *)local_1a0.Data.AllocatorInstance.Data != (UDS_W_Root *)0x0) {
        FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      if (local_188._16_8_ == 0) {
        pUVar3 = UDS_LogManager::GetInst();
        pvVar9 = local_168;
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_WindowManager::CreateRootWidget",0x23,Yes);
          UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x9b4,L"rootPath is nullptr.");
          pvVar9 = local_168;
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
            pvVar9 = local_168;
          }
        }
        goto LAB_14bb5c4c5;
      }
      pUVar4 = FSoftObjectPath::TryLoad
                         ((FSoftObjectPath *)(local_188 + 0x10),(FUObjectSerializeContext *)0x0);
      if (pUVar4 == (UObject *)0x0) {
LAB_14bb5c444:
        pUVar3 = UDS_LogManager::GetInst();
        pvVar9 = local_168;
        if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14bb5c4c5;
        pUVar3 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_WindowManager::CreateRootWidget",0x23,Yes);
        pwVar11 = L"Failed to TryLoad.";
        uVar10 = 0x9c9;
      }
      else {
        pUVar6 = Z_Construct_UClass_UClass_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) goto LAB_14bb5c444;
        FVar7 = DS_Util::GetUniqueClassName((UClass *)local_188);
        FVar7 = *(FName *)FVar7;
        local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)pUVar4;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        pUVar8 = UGameInstance::GetWorld((UGameInstance *)this_01);
        local_1a0.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)
             CreateWidget<UDS_W_Root,UWorld_*>(pUVar8,(TSubclassOf<UUserWidget>)&local_1a0,FVar7);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UDS_W_Root *)local_1a0.Data.AllocatorInstance.Data != (UDS_W_Root *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_1a0.Data.AllocatorInstance.Data);
        }
        FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_1a0);
        bVar2 = TWeakObjectPtr<UDS_W_Root,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
        if (!bVar2) {
          this_02 = (UUserWidget *)FWeakObjectPtr::Get(&this_00->WeakPtr);
          UUserWidget::AddToViewport(this_02,1);
          pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          (**(code **)(*(longlong *)pUVar4 + 0x2c0))(pUVar4,4);
          pvVar9 = local_168;
          goto LAB_14bb5c4c5;
        }
        pUVar3 = UDS_LogManager::GetInst();
        pvVar9 = local_168;
        if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14bb5c4c5;
        pUVar3 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_WindowManager::CreateRootWidget",0x23,Yes);
        pwVar11 = L"Failed to CreateWidget.";
        uVar10 = 0x9c3;
      }
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,uVar10,pwVar11);
      pvVar9 = local_168;
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
        pvVar9 = local_168;
      }
      goto LAB_14bb5c4c5;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_WindowManager::CreateRootWidget",0x23,Yes);
    pwVar11 = L"UDS_CommonSetting is nullptr.";
    uVar10 = 0x9ad;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,uVar10,pwVar11);
  pvVar9 = (void *)local_148._padding_;
LAB_14bb5c4c5:
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  return;
}

// CreateWindowFrameSource @ 14bb5c500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_WindowManager::CreateWindowFrameSource(UDS_WindowManager *this)

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_GameInstance *this_00;
  UObject *pUVar4;
  FString *pFVar5;
  UClass *pUVar6;
  FName FVar7;
  UWorld *pUVar8;
  UDS_W_WindowFrame *pUVar9;
  void *pvVar10;
  undefined1 auStackY_1d8 [32];
  uint uVar11;
  wchar_t *pwVar12;
  FWeakObjectPtr local_1a8 [2];
  undefined1 local_198 [24];
  longlong local_180;
  void *local_178;
  longlong local_170;
  FString local_168;
  FString local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if ((this->WindowFrameSource).field0_0x0.DebugPtr != (UDS_W_WindowFrame *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_WindowManager::CreateWindowFrameSource",0x2a,Yes);
    UDS_LogManager::PrintLog
              (pUVar3,1,Warning,local_148.Ptr,0x9dc,L"WindowFrameSource already exists.");
    if ((void *)local_148._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_148._padding_);
    return;
  }
  this_00 = UDS_GameInstance::GetInst();
  if (this_00 == (UDS_GameInstance *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_WindowManager::CreateWindowFrameSource",0x2a,Yes);
    pwVar12 = L"gameInst is nullptr.";
    uVar11 = 0x9e3;
  }
  else {
    UDS_CommonSetting::GetInst();
    bVar2 = FWeakObjectPtr::IsValid(local_1a8);
    if (bVar2) {
      pUVar4 = FWeakObjectPtr::Get(local_1a8);
      pFVar5 = FSoftObjectPath::ToString((FSoftObjectPath *)(pUVar4 + 6),&local_158);
      pFVar5 = FWN_SoftObjectUtils::GetObjectPath(&local_168,pFVar5,false);
      local_198._16_8_ = 0;
      local_180 = 0;
      local_178 = (void *)0x0;
      local_170 = 0;
      local_198._0_8_ = (pFVar5->Data).AllocatorInstance.Data;
      iVar1 = (pFVar5->Data).ArrayNum;
      local_198._8_4_ = iVar1 + -1;
      if (iVar1 == 0) {
        local_198._8_4_ = 0;
      }
      FSoftObjectPath::SetPath
                ((FSoftObjectPath *)(local_198 + 0x10),(TStringView<wchar_t> *)local_198);
      if ((UObject *)local_168.Data.AllocatorInstance.Data != (UObject *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      if (local_198._16_8_ == 0) {
        pUVar3 = UDS_LogManager::GetInst();
        pvVar10 = local_178;
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_WindowManager::CreateWindowFrameSource",0x2a,Yes);
          UDS_LogManager::PrintLog
                    (pUVar3,1,Warning,local_148.Ptr,0x9f1,L"windowFramePath is nullptr.");
          pvVar10 = local_178;
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
            pvVar10 = local_178;
          }
        }
        goto LAB_14bb5c952;
      }
      pUVar4 = FSoftObjectPath::TryLoad
                         ((FSoftObjectPath *)(local_198 + 0x10),(FUObjectSerializeContext *)0x0);
      if (pUVar4 == (UObject *)0x0) {
LAB_14bb5c8d1:
        pUVar3 = UDS_LogManager::GetInst();
        pvVar10 = local_178;
        if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14bb5c952;
        pUVar3 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_WindowManager::CreateWindowFrameSource",0x2a,Yes);
        pwVar12 = L"Failed to TryLoad.";
        uVar11 = 0xa01;
      }
      else {
        pUVar6 = Z_Construct_UClass_UClass_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) goto LAB_14bb5c8d1;
        FVar7 = DS_Util::GetUniqueClassName((UClass *)local_198);
        FVar7 = *(FName *)FVar7;
        local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)pUVar4;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        pUVar8 = UGameInstance::GetWorld((UGameInstance *)this_00);
        pUVar9 = CreateWidget<UDS_W_WindowFrame,UWorld_*>
                           (pUVar8,(TSubclassOf<UUserWidget>)&local_168,FVar7);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar9 != (UDS_W_WindowFrame *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar9);
          (this->WindowFrameSource).field0_0x0.DebugPtr = pUVar9;
          pvVar10 = local_178;
          goto LAB_14bb5c952;
        }
        (this->WindowFrameSource).field0_0x0.DebugPtr = pUVar9;
        pvVar10 = local_178;
        if ((pUVar9 != (UDS_W_WindowFrame *)0x0) ||
           (pUVar3 = UDS_LogManager::GetInst(), pvVar10 = local_178, pUVar3 == (UDS_LogManager *)0x0
           )) goto LAB_14bb5c952;
        pUVar3 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_WindowManager::CreateWindowFrameSource",0x2a,Yes);
        pwVar12 = L"Failed to CreateWidget.";
        uVar11 = 0x9fb;
      }
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,uVar11,pwVar12);
      pvVar10 = local_178;
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
        pvVar10 = local_178;
      }
      goto LAB_14bb5c952;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_WindowManager::CreateWindowFrameSource",0x2a,Yes);
    pwVar12 = L"UDS_CommonSetting is nullptr.";
    uVar11 = 0x9ea;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,uVar11,pwVar12);
  pvVar10 = (void *)local_148._padding_;
LAB_14bb5c952:
  if (pvVar10 != (void *)0x0) {
    FMemory::Free(pvVar10);
  }
  return;
}

// Created @ 14bb5cbf0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_WindowManager::Created(UDS_WindowManager *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  FSlateApplication *this_00;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  UDS_InputEvent *pUVar7;
  FNavigationConfig *pFVar8;
  TSharedRef<FNavigationConfig,1> local_28;
  
  *(undefined1 *)&this->_padding_ = 0;
  pTVar6 = ::operator_new(0x160);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pFVar8 = (FNavigationConfig *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFDS_NavigationConfig___00_SharedPointerInternals__6B_
    ;
    FDS_NavigationConfig::FDS_NavigationConfig((FDS_NavigationConfig *)(pTVar6 + 1));
    pFVar8 = (FNavigationConfig *)(pTVar6 + 1);
    if (pFVar8 == (FNavigationConfig *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_14bb5ccd3;
    }
  }
  if (((*(longlong *)&pFVar8->_padding_ == 0) || (pFVar8->_padding_ == 0)) ||
     (*(int *)(pFVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FNavigationConfig **)&pFVar8->_padding_ = pFVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pFVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar8->_padding_;
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
      pFVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14bb5ccd3:
  if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentApplication.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                       ,0x141,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = IsInGameThread();
  if (!bVar5) {
    bVar5 = IsInSlateThread();
    if (!bVar5) {
      bVar5 = (*IsInAsyncLoadingThread)();
      if (!bVar5) {
        bVar5 = IsInParallelLoadingThread();
        if (!bVar5) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread() || IsInSlateThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                             ,0x142,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
    }
  }
  if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this_00 = FSlateApplication::CurrentApplication.Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = pFVar8;
  local_28.SharedReferenceCount.ReferenceController = pTVar6;
  FSlateApplication::SetNavigationConfig(this_00,&local_28);
  TMulticastDelegateRegistration<void___cdecl(enum_EDS_WindowWidget,bool_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_WindowManager>
            (&this->WindowOpenCloseDelegate,(UDS_WindowManager *)&stack0x00000008,(pmf_d6236d61)this
            );
  pUVar7 = UDS_InputEvent::GetEvent();
  if (pUVar7 != (UDS_InputEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar7->OnChangeInputDeviceType,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_InputDeviceType_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_WindowManager>
              (&pUVar7->OnChangeInputDeviceType,(UDS_WindowManager *)&stack0x00000010,
               (pmf_b9fe6198)this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// DestroyRootWidget @ 14bb5d780

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_WindowManager::DestroyRootWidget(UDS_WindowManager *this)

{
  TWeakObjectPtr<UDS_W_Root,FWeakObjectPtr> *this_00;
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8;
  undefined8 local_res10 [3];
  
  this_00 = &this->RootWidget;
  bVar1 = TWeakObjectPtr<UDS_W_Root,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x2d0))(pUVar2);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  this_00->WeakPtr = local_res8;
  return;
}

// DestroyWindowFrameSource @ 14bb5d840

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_WindowManager::DestroyWindowFrameSource(UDS_WindowManager *this)

{
  (this->WindowFrameSource).field0_0x0.DebugPtr = (UDS_W_WindowFrame *)0x0;
  return;
}

// Destroyed @ 14bb5d980

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_WindowManager::Destroyed(UDS_WindowManager *this)

{
  UGameViewportClient *this_00;
  UEngine *pUVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  FSceneViewport *pFVar5;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  ClearWindowInfos(this);
  (this->WindowFrameSource).field0_0x0.DebugPtr = (UDS_W_WindowFrame *)0x0;
  bVar2 = TWeakObjectPtr<UDS_W_Root,FWeakObjectPtr>::UEOpEquals(&this->RootWidget,(void *)0x0);
  if (!bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->RootWidget).WeakPtr);
    (**(code **)(*(longlong *)pUVar3 + 0x2d0))(pUVar3);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->RootWidget).WeakPtr = local_res8;
  pUVar1 = GEngine;
  if ((GEngine->GameViewport).field0_0x0.DebugPtr != (UGameViewportClient *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_CommonGameViewportClient_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&pUVar1->GameViewport,pUVar4);
    if ((bVar2) &&
       (this_00 = (pUVar1->GameViewport).field0_0x0.DebugPtr, this_00 != (UGameViewportClient *)0x0)
       ) {
      pFVar5 = UGameViewportClient::GetGameViewport(this_00);
      if (pFVar5 != (FSceneViewport *)0x0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &FViewport::ViewportResizedEvent,this);
      }
    }
  }
  return;
}

// DuplicateWindowFrameSource @ 14bb5de20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr> __thiscall
UDS_WindowManager::DuplicateWindowFrameSource(UDS_WindowManager *this)

{
  UDS_GameInstance *this_00;
  FName FVar1;
  UWorld *pUVar2;
  UDS_W_WindowFrame *pUVar3;
  FWeakObjectPtr in_RDX;
  UDS_W_WindowFrame *local_res8;
  
  if ((this->WindowFrameSource).field0_0x0.DebugPtr == (UDS_W_WindowFrame *)0x0) {
    *(undefined8 *)in_RDX = 0;
    local_res8 = (UDS_W_WindowFrame *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
    return (TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr>)in_RDX;
  }
  this_00 = UDS_GameInstance::GetInst();
  if (this_00 == (UDS_GameInstance *)0x0) {
    *(undefined8 *)in_RDX = 0;
    local_res8 = (UDS_W_WindowFrame *)this_00;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
    return (TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr>)in_RDX;
  }
  FVar1 = DS_Util::GetUniqueClassName((UClass *)&stack0x00000018);
  FVar1 = *(FName *)FVar1;
  local_res8 = (UDS_W_WindowFrame *)((this->WindowFrameSource).field0_0x0.DebugPtr)->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res8 != (UDS_W_WindowFrame *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar2 = UGameInstance::GetWorld((UGameInstance *)this_00);
  pUVar3 = CreateWidget<UDS_W_WindowFrame,UWorld_*>
                     (pUVar2,(TSubclassOf<UUserWidget>)&local_res8,FVar1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDS_W_WindowFrame *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDS_W_WindowFrame *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr>)in_RDX;
}

// ExecuteClose @ 14bb5f210

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_WindowManager::ExecuteClose
          (UDS_WindowManager *this,TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr> param_1,
          uint *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  UObject *pUVar4;
  UDS_WindowInfo *pUVar5;
  FWeakObjectPtr local_res10 [2];
  bool local_res20 [8];
  bool local_18 [8];
  FWeakObjectPtr local_10;
  
  local_res10[0] = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(local_res10);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<353616502999483923>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_WindowManager.cpp"
                       ,0x613,"false");
    if (!bVar2) {
      return;
    }
code_r0x00014bb5f359:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar4 = FWeakObjectPtr::Get(local_res10);
  if (pUVar4[2].field_0x1 == '\x01') {
    RemoveOpenedWindowInfo(this,(TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>)local_res10[0]);
    pUVar4 = FWeakObjectPtr::Get(local_res10);
    pUVar4[8].field_0x21 = 0;
    pUVar4 = FWeakObjectPtr::Get(local_res10);
    cVar3 = (**(code **)(*(longlong *)pUVar4 + 0x2b8))(pUVar4,0);
    if (cVar3 != '\0') {
      local_res20[0] = false;
      pUVar4 = FWeakObjectPtr::Get(local_res10);
      TMulticastDelegate<void___cdecl(enum_EDS_WindowWidget,bool_const_&),FDefaultDelegateUserPolicy>
      ::Broadcast(&this->WindowOpenCloseDelegate,*(EDS_WindowWidget *)(pUVar4 + 1),local_res20);
      return;
    }
  }
  else {
    pUVar4 = FWeakObjectPtr::Get(local_res10);
    if (pUVar4[2].field_0x1 == '\x02') {
      pUVar5 = (UDS_WindowInfo *)FWeakObjectPtr::Get(local_res10);
      UDS_WindowInfo::GetMultipleWindowInfo(pUVar5,(uint *)&local_10);
      bVar2 = FWeakObjectPtr::IsValid(&local_10);
      if (bVar2) {
        RemoveOpenedWindowInfo(this,(TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>)local_10);
        pUVar4 = FWeakObjectPtr::Get(&local_10);
        cVar3 = (**(code **)(*(longlong *)pUVar4 + 0x2b8))(pUVar4,0);
        if (cVar3 != '\0') {
          local_18[0] = false;
          pUVar4 = FWeakObjectPtr::Get(local_res10);
          TMulticastDelegate<void___cdecl(enum_EDS_WindowWidget,bool_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&this->WindowOpenCloseDelegate,*(EDS_WindowWidget *)(pUVar4 + 1),local_18);
        }
        pUVar5 = (UDS_WindowInfo *)FWeakObjectPtr::Get(local_res10);
        UDS_WindowInfo::RemoveMultipleWindowInfo(pUVar5,param_2);
        pUVar4 = FWeakObjectPtr::Get(local_res10);
        if (*(int *)&pUVar4[10].field_0x8 < 1) {
          pUVar4 = FWeakObjectPtr::Get(local_res10);
          (**(code **)(*(longlong *)pUVar4 + 0x2d0))(pUVar4);
        }
      }
      else {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<353616502999483942>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_WindowManager.cpp"
                           ,0x626,"false");
        if (bVar2) goto code_r0x00014bb5f359;
      }
    }
  }
  return;
}

// GetClosableWindowInfoTotalCount @ 14bb63b90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_WindowManager::GetClosableWindowInfoTotalCount(UDS_WindowManager *this)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  FWeakObjectPtr *this_00;
  int iVar5;
  undefined1 local_res8 [8];
  
  this_00 = (FWeakObjectPtr *)(this->OpenedWindowInfoList).AllocatorInstance.Data;
  iVar2 = (this->OpenedWindowInfoList).ArrayNum;
  iVar5 = 0;
  pFVar1 = this_00 + iVar2;
  while( true ) {
    if ((this->OpenedWindowInfoList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar1) break;
    bVar3 = FWeakObjectPtr::IsValid(this_00);
    if (bVar3) {
      pUVar4 = FWeakObjectPtr::Get(this_00);
      bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pUVar4[5].field_0x8);
      if (bVar3) {
        pUVar4 = FWeakObjectPtr::Get(this_00);
        if (pUVar4[8].field_0x20 != '\0') {
          pUVar4 = FWeakObjectPtr::Get(this_00);
          if (*(char *)(pUVar4 + 2) != '\0') {
            iVar5 = iVar5 + 1;
          }
        }
      }
    }
    this_00 = this_00 + 1;
  }
  return iVar5;
}

// GetCurrentClosableWindowInfo @ 14bb64a00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr> __thiscall
UDS_WindowManager::GetCurrentClosableWindowInfo(UDS_WindowManager *this)

{
  FWeakObjectPtr *pFVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UObject *pUVar7;
  UDS_W_WindowFrame *pUVar8;
  FWeakObjectPtr in_RDX;
  FWeakObjectPtr *this_00;
  byte bVar9;
  undefined1 local_res8 [8];
  
  *(undefined8 *)in_RDX = 0;
  this_00 = (FWeakObjectPtr *)(this->OpenedWindowInfoList).AllocatorInstance.Data;
  iVar3 = (this->OpenedWindowInfoList).ArrayNum;
  pFVar1 = this_00 + iVar3;
  bVar9 = 0;
LAB_14bb64a36:
  do {
    if ((this->OpenedWindowInfoList).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar1) {
      return (TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>)in_RDX;
    }
    bVar4 = FWeakObjectPtr::IsValid(this_00);
    if (bVar4) {
      pUVar7 = FWeakObjectPtr::Get(this_00);
      bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pUVar7[5].field_0x8);
      if (bVar4) {
        pUVar7 = FWeakObjectPtr::Get(this_00);
        if (pUVar7[8].field_0x20 != '\0') {
          pUVar7 = FWeakObjectPtr::Get(this_00);
          bVar2 = *(byte *)(pUVar7 + 2);
          if (bVar2 != 0) {
            if (bVar9 < bVar2) {
              *(FWeakObjectPtr *)in_RDX = *this_00;
              this_00 = this_00 + 1;
              bVar9 = bVar2;
              goto LAB_14bb64a36;
            }
            if (bVar9 == bVar2) {
              bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)in_RDX);
              if (bVar4) {
                pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)in_RDX);
                bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pUVar7[5].field_0x8);
                if (bVar4) {
                  pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)in_RDX);
                  pUVar8 = (UDS_W_WindowFrame *)
                           FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar7[5].field_0x8);
                  iVar5 = UDS_W_WindowFrame::GetZOrder(pUVar8);
                  pUVar7 = FWeakObjectPtr::Get(this_00);
                  pUVar8 = (UDS_W_WindowFrame *)
                           FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar7[5].field_0x8);
                  iVar6 = UDS_W_WindowFrame::GetZOrder(pUVar8);
                  if (iVar5 < iVar6) {
                    *(FWeakObjectPtr *)in_RDX = *this_00;
                  }
                }
              }
            }
          }
        }
      }
    }
    this_00 = this_00 + 1;
  } while( true );
}

// GetCurrentInputEventWindowInfos @ 14bb64be0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_WindowManager::GetCurrentInputEventWindowInfos
          (UDS_WindowManager *this,
          TArray<TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar6;
  UObject *pUVar7;
  FWeakObjectPtr *this_00;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = (FWeakObjectPtr *)(this->OpenedWindowInfoList).AllocatorInstance.Data;
  iVar2 = (this->OpenedWindowInfoList).ArrayNum;
  pFVar1 = this_00 + iVar2;
  do {
    if ((this->OpenedWindowInfoList).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar1) {
      return __return_storage_ptr__;
    }
    bVar4 = FWeakObjectPtr::IsValid(this_00);
    if (bVar4) {
      pUVar7 = FWeakObjectPtr::Get(this_00);
      if (pUVar7[6].field_0x10 != '\0') {
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        *(FWeakObjectPtr *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8)
             = *this_00;
        pUVar7 = FWeakObjectPtr::Get(this_00);
        if (pUVar7[6].field_0x10 == '\x01') {
          return __return_storage_ptr__;
        }
      }
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<353616502999484327>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_WindowManager.cpp"
                         ,0x7a7,"false");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                  *)(*pcVar3)();
        return pTVar6;
      }
    }
    this_00 = this_00 + 1;
  } while( true );
}

// GetInst @ 14bb66490

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_WindowManager * __cdecl UDS_WindowManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_WindowManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_WindowManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_WindowManager_NoRegister();
  pUVar3 = (UDS_WindowManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_WindowManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_WindowManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_WindowManager *)0x0;
}

// GetRootWidget @ 14bb67cc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TWeakObjectPtr<UDS_W_Root,FWeakObjectPtr> __thiscall
UDS_WindowManager::GetRootWidget(UDS_WindowManager *this)

{
  FWeakObjectPtr in_RDX;
  
  *(FWeakObjectPtr *)in_RDX = (this->RootWidget).WeakPtr;
  return (TWeakObjectPtr<UDS_W_Root,FWeakObjectPtr>)in_RDX;
}

// GetRootWidgetGeometry @ 14bb67ce0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FGeometry * __thiscall UDS_WindowManager::GetRootWidgetGeometry(UDS_WindowManager *this)

{
  bool bVar1;
  UWidget *this_00;
  FGeometry *pFVar2;
  
  bVar1 = TWeakObjectPtr<UDS_W_Root,FWeakObjectPtr>::UEOpEquals(&this->RootWidget,(void *)0x0);
  if (!bVar1) {
    this_00 = (UWidget *)FWeakObjectPtr::Get(&(this->RootWidget).WeakPtr);
    pFVar2 = UWidget::GetCachedGeometry(this_00);
    FGeometry::operator=(&this->RootWidgetGeometry,pFVar2);
  }
  return &this->RootWidgetGeometry;
}

// GetWindowGroupIDToString @ 14bb68810

FString * __cdecl
UDS_WindowManager::GetWindowGroupIDToString
          (FString *__return_storage_ptr__,EDS_WindowWidgetGroup param_1)

{
  UClass *pUVar1;
  UEnum *this;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = L"/Script/ProjectDS.EDS_WindowWidgetGroup";
  local_18.Size = 0x27;
  pUVar1 = Z_Construct_UClass_UEnum_NoRegister();
  this = (UEnum *)StaticFindObject(pUVar1,(UObject *)0x0,&local_18,None);
  if (this != (UEnum *)0x0) {
    UEnum::GetNameStringByValue(this,__return_storage_ptr__,(ulonglong)param_1);
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"Invalid WindowGroupID");
  return __return_storage_ptr__;
}

// GetWindowGroupInfo @ 14bb688a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TWeakObjectPtr<UDS_WindowGroupInfo,FWeakObjectPtr> __thiscall
UDS_WindowManager::GetWindowGroupInfo(UDS_WindowManager *this,int param_1)

{
  longlong lVar1;
  UDS_WindowGroupInfo *pUVar2;
  int iVar3;
  TObjectPtr<UDS_WindowGroupInfo> *pTVar4;
  int in_register_00000014;
  FWeakObjectPtr this_00;
  uint in_R8D;
  undefined1 *puVar5;
  UDS_WindowGroupInfo *local_res8;
  
  this_00.ObjectSerialNumber = in_register_00000014;
  this_00.ObjectIndex = param_1;
  if (*(int *)&(this->WindowGroupInfoMap).field_0x8 !=
      *(int *)&(this->WindowGroupInfoMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->WindowGroupInfoMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->WindowGroupInfoMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->WindowGroupInfoMap).field_0x48 - 1U & in_R8D) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->WindowGroupInfoMap;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar3 * 0x18) == in_R8D) {
          pTVar4 = TMapBase<int,TObjectPtr<UDS_WindowGroupInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowGroupInfo>,0>_>
                   ::FindChecked((TMapBase<int,TObjectPtr<UDS_WindowGroupInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowGroupInfo>,0>_>
                                  *)&this->WindowGroupInfoMap,in_R8D);
          pUVar2 = (pTVar4->field0_0x0).DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (pUVar2 != (UDS_WindowGroupInfo *)0x0) {
              UE::GC::MarkAsReachable((UObject *)pUVar2);
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar2 != (UDS_WindowGroupInfo *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar2);
            }
          }
          *(undefined8 *)this_00 = 0;
          local_res8 = pUVar2;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar2 != (UDS_WindowGroupInfo *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar2);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_res8);
          return (TWeakObjectPtr<UDS_WindowGroupInfo,FWeakObjectPtr>)this_00;
        }
        iVar3 = *(int *)(lVar1 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  *(undefined8 *)this_00 = 0;
  local_res8 = (UDS_WindowGroupInfo *)0x0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_WindowGroupInfo,FWeakObjectPtr>)this_00;
}

// GetWindowGroupInfo @ 14bb689a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TWeakObjectPtr<UDS_WindowGroupInfo,FWeakObjectPtr> __thiscall
UDS_WindowManager::GetWindowGroupInfo(UDS_WindowManager *this,EDS_WindowWidgetGroup param_1)

{
  longlong lVar1;
  UDS_WindowGroupInfo *pUVar2;
  int iVar3;
  TObjectPtr<UDS_WindowGroupInfo> *pTVar4;
  undefined7 in_register_00000011;
  FWeakObjectPtr this_00;
  undefined1 *puVar5;
  byte in_R8B;
  UDS_WindowGroupInfo *local_res8;
  
  this_00._1_7_ = in_register_00000011;
  this_00.ObjectIndex._0_1_ = param_1;
  if (*(int *)&(this->WindowGroupInfoMap).field_0x8 !=
      *(int *)&(this->WindowGroupInfoMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->WindowGroupInfoMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->WindowGroupInfoMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + ((ulonglong)(*(int *)&(this->WindowGroupInfoMap).field_0x48 - 1) &
                              (ulonglong)in_R8B) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->WindowGroupInfoMap;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar3 * 0x18) == (uint)in_R8B) {
          pTVar4 = TMapBase<int,TObjectPtr<UDS_WindowGroupInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowGroupInfo>,0>_>
                   ::FindChecked((TMapBase<int,TObjectPtr<UDS_WindowGroupInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowGroupInfo>,0>_>
                                  *)&this->WindowGroupInfoMap,(uint)in_R8B);
          pUVar2 = (pTVar4->field0_0x0).DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (pUVar2 != (UDS_WindowGroupInfo *)0x0) {
              UE::GC::MarkAsReachable((UObject *)pUVar2);
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar2 != (UDS_WindowGroupInfo *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar2);
            }
          }
          *(undefined8 *)this_00 = 0;
          local_res8 = pUVar2;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar2 != (UDS_WindowGroupInfo *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar2);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_res8);
          return (TWeakObjectPtr<UDS_WindowGroupInfo,FWeakObjectPtr>)this_00;
        }
        iVar3 = *(int *)(lVar1 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  *(undefined8 *)this_00 = 0;
  local_res8 = (UDS_WindowGroupInfo *)0x0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_WindowGroupInfo,FWeakObjectPtr>)this_00;
}

// GetWindowIDToString @ 14bb68ad0

FString * __cdecl
UDS_WindowManager::GetWindowIDToString(FString *__return_storage_ptr__,EDS_WindowWidget param_1)

{
  UClass *pUVar1;
  UEnum *this;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = L"/Script/ProjectDS.EDS_WindowWidget";
  local_18.Size = 0x22;
  pUVar1 = Z_Construct_UClass_UEnum_NoRegister();
  this = (UEnum *)StaticFindObject(pUVar1,(UObject *)0x0,&local_18,None);
  if (this != (UEnum *)0x0) {
    UEnum::GetNameStringByValue(this,__return_storage_ptr__,(longlong)(int)param_1);
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"Invalid WindowID");
  return __return_storage_ptr__;
}

// GetWindowInfo @ 14bb68b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr> __thiscall
UDS_WindowManager::GetWindowInfo(UDS_WindowManager *this,int param_1)

{
  longlong lVar1;
  UDS_WindowInfo *pUVar2;
  int iVar3;
  UDS_LogManager *pUVar4;
  TObjectPtr<UDS_WindowInfo> *pTVar5;
  int in_register_00000014;
  FWeakObjectPtr this_00;
  undefined1 *puVar6;
  uint in_R8D;
  undefined1 auStackY_198 [32];
  UDS_WindowInfo *local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  this_00.ObjectSerialNumber = in_register_00000014;
  this_00.ObjectIndex = param_1;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (*(int *)&(this->WindowInfoMap).field_0x8 != *(int *)&(this->WindowInfoMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->WindowInfoMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->WindowInfoMap).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)(*(int *)&(this->WindowInfoMap).field_0x48 - 1U & in_R8D) *
                              4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->WindowInfoMap;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar3 * 0x18) == in_R8D) {
          pTVar5 = TMapBase<int,TObjectPtr<UDS_WindowInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowInfo>,0>_>
                   ::FindChecked((TMapBase<int,TObjectPtr<UDS_WindowInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowInfo>,0>_>
                                  *)&this->WindowInfoMap,in_R8D);
          pUVar2 = (pTVar5->field0_0x0).DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (pUVar2 != (UDS_WindowInfo *)0x0) {
              UE::GC::MarkAsReachable((UObject *)pUVar2);
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar2 != (UDS_WindowInfo *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar2);
            }
          }
          *(undefined8 *)this_00 = 0;
          local_158[0] = pUVar2;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar2 != (UDS_WindowInfo *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar2);
          }
          goto LAB_14bb68c5e;
        }
        iVar3 = *(int *)(lVar1 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  pUVar4 = UDS_LogManager::GetInst();
  if (pUVar4 != (UDS_LogManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_WindowManager::GetWindowInfo",0x20,Yes);
    UDS_LogManager::PrintLog
              (pUVar4,1,Warning,local_148.Ptr,0x6a5,L"Not Found WindowInfo. WindowID - %d");
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  *(undefined8 *)this_00 = 0;
  local_158[0] = (UDS_WindowInfo *)0x0;
LAB_14bb68c5e:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)local_158);
  return (TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr>)this_00;
}

// GetWindowInfo @ 14bb68d10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr> __thiscall
UDS_WindowManager::GetWindowInfo(UDS_WindowManager *this,EDS_WindowWidget param_1)

{
  FWeakObjectPtr FVar1;
  int in_register_00000014;
  
  FVar1.ObjectSerialNumber = in_register_00000014;
  FVar1.ObjectIndex = param_1;
  GetWindowInfo(this,param_1);
  return (TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr>)FVar1;
}

// GetWindowLayerGroupInfo @ 14bb68d30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_WindowLayerGroupInfo * __thiscall
UDS_WindowManager::GetWindowLayerGroupInfo(UDS_WindowManager *this,EDS_WindowLayerGroupType param_1)

{
  longlong lVar1;
  int iVar2;
  FDS_WindowLayerGroupInfo *pFVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->WindowLayerGroupInfoMap).field_0x8 !=
      *(int *)&(this->WindowLayerGroupInfoMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->WindowLayerGroupInfoMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->WindowLayerGroupInfoMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + ((ulonglong)(*(int *)&(this->WindowLayerGroupInfoMap).field_0x48 - 1)
                              & (ulonglong)param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->WindowLayerGroupInfoMap;
      do {
        if (*(EDS_WindowLayerGroupType *)(lVar1 + (longlong)iVar2 * 0x28) == param_1) {
          pFVar3 = TMapBase<enum_EDS_WindowLayerGroupType,FDS_WindowLayerGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WindowLayerGroupType,FDS_WindowLayerGroupInfo,0>_>
                   ::FindChecked(&this->WindowLayerGroupInfoMap,param_1);
          return pFVar3;
        }
        iVar2 = *(int *)(lVar1 + 0x20 + (longlong)iVar2 * 0x28);
      } while (iVar2 != -1);
    }
  }
  return (FDS_WindowLayerGroupInfo *)0x0;
}

// GetWindowLayerGroupInfoMap @ 14bb68da0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TMap<EDS_WindowLayerGroupType,FDS_WindowLayerGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_WindowLayerGroupType,FDS_WindowLayerGroupInfo,0>_>
* __thiscall UDS_WindowManager::GetWindowLayerGroupInfoMap(UDS_WindowManager *this)

{
  return &this->WindowLayerGroupInfoMap;
}

// GetWindowWidgetsComparePathDifferences @ 14bb68e10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UDS_WindowManager::GetWindowWidgetsComparePathDifferences
          (UDS_WindowManager *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TObjectPtr<UDS_CompositeTableData> param_1,TObjectPtr<UDS_CompositeTableData> param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  FSoftObjectPath *pFVar10;
  longlong lVar11;
  uint *puVar12;
  int iVar13;
  ForElementType<unsigned_int> FVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined1 local_res10 [8];
  int local_res18;
  ForElementType<unsigned_int> local_res20;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  uVar6 = 1;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar15 = 0;
  lVar2 = *(longlong *)param_1.field0_0x0;
  iVar8 = *(int *)(lVar2 + 0x58);
  local_res20 = (ForElementType<unsigned_int>)(lVar2 + 0x40);
  lVar3 = *(longlong *)param_2.field0_0x0;
  iVar13 = 0;
  iVar7 = iVar15;
  if (iVar8 != 0) {
    FVar14 = *(ForElementType<unsigned_int> *)(lVar2 + 0x50);
    if (*(ForElementType<unsigned_int> *)(lVar2 + 0x50) == (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_res20;
    }
    uVar16 = *(uint *)FVar14;
    iVar13 = 0;
    iVar15 = 0;
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar15;
      iVar13 = iVar13 + 0x20;
      iVar15 = iVar15 + 1;
      iVar7 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14bb68ece;
      uVar16 = ((uint *)((longlong)FVar14 + 4))[lVar11];
    }
    uVar6 = -uVar16 & uVar16;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    iVar7 = iVar13 + -1 + local_res18;
    if (iVar8 < iVar7) {
      iVar7 = iVar8;
    }
  }
LAB_14bb68ece:
  uVar16 = *(uint *)(lVar2 + 0x58);
  TStack_68.CurrentBitIndex = iVar7;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  uVar17 = uVar16 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar6,iVar15);
  iVar15 = (int)uVar16 >> 5;
  TStack_68._28_4_ = iVar7;
  TStack_68.BaseBitIndex = iVar13;
  uStack_48 = CONCAT44(uStack_74,*(int *)(lVar2 + 0x38) - *(int *)(lVar2 + 100));
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_res20;
  if ((((int)uVar16 < 0) || (iVar8 < (int)uVar16)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar9;
  }
  uVar6 = *(int *)((longlong)local_res20 + 0x18);
  if (uVar16 != uVar6) {
    FVar14 = *(ForElementType<unsigned_int> *)((longlong)local_res20 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_res20 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_res20;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)((longlong)FVar14 + (longlong)iVar15 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar15;
      uVar17 = uVar17 + 0x20;
      iVar15 = iVar15 + 1;
      uVar16 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14bb68ff0;
      uVar16 = ((uint *)((longlong)FVar14 + 4))[lVar11];
    }
    uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar16 = (int)lVar11 + -1 + uVar17;
    if ((int)uVar6 < (int)uVar16) {
      uVar16 = uVar6;
    }
  }
LAB_14bb68ff0:
  do {
    if (*(int *)(lVar2 + 0x38) - *(int *)(lVar2 + 100) != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<int,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_68.CurrentBitIndex == uVar16) &&
       ((ForElementType<unsigned_int>)TStack_68.Array == local_res20)) {
      return __return_storage_ptr__;
    }
    puVar12 = (uint *)(*(longlong *)(lVar2 + 0x30) + (longlong)TStack_68.CurrentBitIndex * 0x30);
    uVar6 = *puVar12;
    if (*(int *)(lVar3 + 0x38) != *(int *)(lVar3 + 100)) {
      lVar11 = lVar3 + 0x68;
      if (*(longlong *)(lVar3 + 0x70) != 0) {
        lVar11 = *(longlong *)(lVar3 + 0x70);
      }
      iVar8 = *(int *)(lVar11 + (ulonglong)(*(int *)(lVar3 + 0x78) - 1U & uVar6) * 4);
      if (iVar8 != -1) {
        do {
          if (*(uint *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar8 * 0x30) == uVar6) {
            pFVar10 = TMapBase<int,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FSoftObjectPath,0>_>
                      ::FindChecked((TMapBase<int,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FSoftObjectPath,0>_>
                                     *)(lVar3 + 0x30),uVar6);
            bVar5 = FSoftObjectPath::operator==((FSoftObjectPath *)(puVar12 + 2),pFVar10);
            if (!bVar5) {
              iVar8 = __return_storage_ptr__->ArrayNum;
              if (iVar8 == __return_storage_ptr__->ArrayMax) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&__return_storage_ptr__->AllocatorInstance,
                                   &__return_storage_ptr__->ArrayMax);
              }
              __return_storage_ptr__->ArrayNum = iVar8 + 1;
              *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 4) =
                   *puVar12;
            }
            break;
          }
          iVar8 = *(int *)(*(longlong *)(lVar3 + 0x30) + 0x28 + (longlong)iVar8 * 0x30);
        } while (iVar8 != -1);
      }
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// Init @ 14bb6a850

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_WindowManager::Init(UDS_WindowManager *this)

{
  UGameViewportClient *this_00;
  UEngine *pUVar1;
  bool bVar2;
  UClass *pUVar3;
  FSceneViewport *pFVar4;
  UDS_WindowManager *pUVar5;
  UObject *pUVar6;
  FWeakObjectPtr local_res10 [3];
  
  InitWindowInfos(this);
  CreateRootWidget(this);
  CreateWindowFrameSource(this);
  pUVar1 = GEngine;
  if ((GEngine->GameViewport).field0_0x0.DebugPtr != (UGameViewportClient *)0x0) {
    pUVar3 = Z_Construct_UClass_UDS_CommonGameViewportClient_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&pUVar1->GameViewport,pUVar3);
    if ((bVar2) &&
       (this_00 = (pUVar1->GameViewport).field0_0x0.DebugPtr, this_00 != (UGameViewportClient *)0x0)
       ) {
      pFVar4 = UGameViewportClient::GetGameViewport(this_00);
      if (pFVar4 != (FSceneViewport *)0x0) {
        TMulticastDelegateRegistration<void___cdecl(FViewport_*,unsigned_int),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_WindowManager>
                  ((TMulticastDelegateRegistration<void___cdecl(FViewport_*,unsigned_int),FDefaultDelegateUserPolicy>
                    *)&FViewport::ViewportResizedEvent,(UDS_WindowManager *)local_res10,
                   (pmf_255c43be)this);
      }
    }
  }
  pUVar5 = GetInst();
  if (pUVar5 != (UDS_WindowManager *)0x0) {
    GetWindowInfo(pUVar5,(int)local_res10);
    bVar2 = FWeakObjectPtr::IsValid(local_res10);
    if (bVar2) {
      pUVar6 = FWeakObjectPtr::Get(local_res10);
      pUVar6[6].field_0x10 = 2;
    }
  }
  pUVar5 = GetInst();
  if (pUVar5 != (UDS_WindowManager *)0x0) {
    GetWindowInfo(pUVar5,(int)local_res10);
    bVar2 = FWeakObjectPtr::IsValid(local_res10);
    if (bVar2) {
      pUVar6 = FWeakObjectPtr::Get(local_res10);
      pUVar6[6].field_0x10 = 2;
    }
  }
  pUVar5 = GetInst();
  if (pUVar5 != (UDS_WindowManager *)0x0) {
    GetWindowInfo(pUVar5,(int)local_res10);
    bVar2 = FWeakObjectPtr::IsValid(local_res10);
    if (bVar2) {
      pUVar6 = FWeakObjectPtr::Get(local_res10);
      pUVar6[6].field_0x10 = 2;
    }
  }
  pUVar5 = GetInst();
  if (pUVar5 != (UDS_WindowManager *)0x0) {
    GetWindowInfo(pUVar5,(int)local_res10);
    bVar2 = FWeakObjectPtr::IsValid(local_res10);
    if (bVar2) {
      pUVar6 = FWeakObjectPtr::Get(local_res10);
      pUVar6[6].field_0x10 = 2;
    }
  }
  return;
}

// InitWindowInfo @ 14bb6c640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_WindowManager::InitWindowInfo
          (UDS_WindowManager *this,TObjectPtr<UDS_WindowInfo> param_1,
          FDS_WindowBaseTableRow *param_2)

{
  longlong lVar1;
  double dVar2;
  FAnchors *pFVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_188 [32];
  FAnchors local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if ((*(longlong *)param_1.field0_0x0 == 0) || (param_2 == (FDS_WindowBaseTableRow *)0x0)) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_WindowManager::InitWindowInfo",0x21,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x96f,L"InInfo or InTableRow is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    *(EDS_WindowWidget *)(*(longlong *)param_1.field0_0x0 + 0x28) = param_2->ID;
    *(int *)(*(longlong *)param_1.field0_0x0 + 0x188) = param_2->TestID;
    FDS_WindowBaseTableRow::operator=
              ((FDS_WindowBaseTableRow *)(*(longlong *)param_1.field0_0x0 + 0x30),param_2);
    *(undefined1 *)(*(longlong *)param_1.field0_0x0 + 0x160) =
         *(undefined1 *)(*(longlong *)param_1.field0_0x0 + 0x78);
    lVar1 = *(longlong *)param_1.field0_0x0;
    if ((*(int *)(lVar1 + 0x28) == 0) && (*(int *)(lVar1 + 0x188) < 0)) {
      *(int *)(lVar1 + 0x28) = *(int *)(lVar1 + 0x188);
    }
    lVar1 = *(longlong *)param_1.field0_0x0;
    if (*(char *)(lVar1 + 0x51) == '\x01') {
      dVar2 = (param_2->DefaultPosition).field0_0x0._s_0.Y;
      *(double *)(lVar1 + 0x108) = (param_2->DefaultPosition).field0_0x0._s_0.X;
      *(double *)(lVar1 + 0x110) = dVar2;
    }
    lVar1 = *(longlong *)param_1.field0_0x0;
    if (*(char *)(lVar1 + 0x51) == '\x01') {
      dVar2 = (param_2->DefaultSize).field0_0x0._s_0.Y;
      *(double *)(lVar1 + 0x118) = (param_2->DefaultSize).field0_0x0._s_0.X;
      *(double *)(lVar1 + 0x120) = dVar2;
    }
    lVar1 = *(longlong *)param_1.field0_0x0;
    pFVar3 = UDS_W_WindowFrame::GetAnchor(&local_158,param_2->WindowAnchorType);
    if (*(char *)(lVar1 + 0x51) == '\x01') {
      dVar2 = (pFVar3->Minimum).field0_0x0._s_0.Y;
      *(double *)(lVar1 + 0x128) = (pFVar3->Minimum).field0_0x0._s_0.X;
      *(double *)(lVar1 + 0x130) = dVar2;
      dVar2 = (pFVar3->Maximum).field0_0x0._s_0.Y;
      *(double *)(lVar1 + 0x138) = (pFVar3->Maximum).field0_0x0._s_0.X;
      *(double *)(lVar1 + 0x140) = dVar2;
    }
  }
  return;
}

// InitWindowInfos @ 14bb6c7c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_WindowManager::InitWindowInfos(UDS_WindowManager *this)

{
  TArray<EDS_WindowWidget,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<TObjectPtr<UDS_CompositeTableData>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TObjectPtr<UDS_WindowInfo>,TSizedDefaultAllocator<32>_> *pTVar3;
  TMap<int,TObjectPtr<UDS_WindowGroupInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowGroupInfo>,0>_>
  *this_00;
  TArray<TObjectPtr<UDS_WindowGroupInfo>,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  uint *puVar6;
  int *piVar7;
  byte bVar8;
  EDS_WindowWidget EVar9;
  longlong lVar10;
  UDS_CompositeTableData *pUVar11;
  FDS_WindowBaseTableRow *pFVar12;
  FScriptContainerElement *pFVar13;
  TObjectPtr<UDS_WindowGroupInfo> TVar14;
  code *pcVar15;
  UDS_WindowManager *pUVar16;
  bool bVar17;
  int iVar18;
  uint uVar19;
  UDS_LogManager *pUVar20;
  UObject *pUVar21;
  UDataTable *pUVar22;
  UClass *pUVar23;
  FString *pFVar24;
  UDS_WindowGroupInfo *pUVar25;
  TTuple<FName,__int64> *pTVar26;
  TObjectPtr<UDS_WindowGroupInfo>_u_0 *pTVar27;
  TObjectPtr<UDS_WindowInfo>_u_0 *pTVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong *plVar31;
  void *pvVar32;
  undefined1 *puVar33;
  undefined1 *puVar34;
  int iVar35;
  ForElementType<FSetElementId> FVar36;
  ForAnyElementType FVar37;
  TSet<TTuple<int,TObjectPtr<UDS_WindowInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowInfo>,0>,FDefaultSetAllocator>
  *pTVar38;
  uint uVar39;
  uint *puVar40;
  UDS_WindowManager *pUVar41;
  ForElementType<FSetElementId> FVar42;
  undefined1 auStackY_1388 [32];
  undefined1 local_1340;
  undefined1 local_133f;
  undefined1 local_133e;
  undefined1 local_133d;
  undefined1 local_133c;
  byte local_133b [3];
  uint local_1338;
  uint local_1334;
  FString local_1330;
  UDS_WindowManager *local_1320;
  uint local_1318 [2];
  FScriptContainerElement *local_1310;
  UDS_WindowGroupInfo *local_1308;
  TSet<TTuple<int,TObjectPtr<UDS_WindowInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowInfo>,0>,FDefaultSetAllocator>
  *local_1300;
  FString local_12f8;
  TArray<FDS_WindowBaseTableRow_*,TSizedDefaultAllocator<32>_> local_12e8;
  undefined4 local_12d8 [2];
  FWeakObjectPtr local_12d0;
  UObject *local_12c8;
  TArray<FDS_WindowBaseTableRow_*,TSizedDefaultAllocator<32>_> local_12c0;
  TArray<FDS_WindowGroupTableRow_const_*,TSizedDefaultAllocator<32>_> local_12b0;
  FWeakObjectPtr local_12a0;
  FString local_1298;
  undefined1 local_1288 [8];
  undefined1 local_1280 [8];
  FName local_1278;
  FName local_1270;
  UObject *local_1268;
  FName local_1260;
  FString local_1258;
  FString local_1248;
  void *local_1238;
  undefined8 local_1230;
  int local_1228;
  FString local_1220;
  uint *local_1210;
  UObject **local_1208;
  uint *local_1200;
  UDS_WindowGroupInfo **local_11f8;
  wchar_t *local_11e8;
  int iStack_11e0;
  undefined4 uStack_11dc;
  byte *local_11d8;
  void **local_11d0;
  undefined4 *local_11c8;
  longlong local_11c0;
  FString local_11b8;
  TStringView<wchar_t> local_11a8;
  FName local_1198;
  FName FStack_1190;
  TTuple<FName,__int64> local_1188;
  undefined1 local_1178 [128];
  undefined1 local_10f8 [128];
  undefined1 local_1078 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_ff8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_ed8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_db8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_c98;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_b78;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_a58;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_938;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_818;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_6f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1388;
  local_1334 = 0;
  local_1320 = this;
  ClearWindowInfos(this);
  ADS_PlayerController::GetPlayerController();
  bVar17 = FWeakObjectPtr::IsValid(&local_12a0);
  if (!bVar17) {
    pUVar20 = UDS_LogManager::GetInst();
    if (pUVar20 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar20 = UDS_LogManager::GetInst();
    local_ff8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_ff8,"UDS_WindowManager::InitWindowInfos",0x22,Yes);
    UDS_LogManager::PrintLog(pUVar20,1,Warning,local_ff8.Ptr,0x884,L"playerController is Invalid.");
    if ((void *)local_ff8._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_ff8._padding_);
    return;
  }
  UDS_CommonSetting::GetInst();
  bVar17 = FWeakObjectPtr::IsValid(&local_12d0);
  if (!bVar17) {
    pUVar20 = UDS_LogManager::GetInst();
    if (pUVar20 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar20 = UDS_LogManager::GetInst();
    local_ed8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_ed8,"UDS_WindowManager::InitWindowInfos",0x22,Yes);
    UDS_LogManager::PrintLog(pUVar20,1,Warning,local_ed8.Ptr,0x88b,L"UDS_CommonSetting is Invalid.")
    ;
    if ((void *)local_ed8._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_ed8._padding_);
    return;
  }
  pTVar2 = &this->CompositeTableDatas;
  pUVar21 = FWeakObjectPtr::Get(&local_12d0);
  uVar39 = *(uint *)&pUVar21[7].field_0x20;
  if ((int)uVar39 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar39);
  }
  piVar7 = &(this->CompositeTableDatas).ArrayMax;
  (this->CompositeTableDatas).ArrayNum = 0;
  if ((this->CompositeTableDatas).ArrayMax < (int)uVar39) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar39,&pTVar2->AllocatorInstance,0,piVar7);
  }
  local_1300 = (TSet<TTuple<int,TObjectPtr<UDS_WindowInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowInfo>,0>,FDefaultSetAllocator>
                *)FWeakObjectPtr::Get(&local_12d0);
  uVar29 = (ulonglong)local_1300[3].HashSize;
  FVar42 = local_1300[3].Hash.SecondaryData;
  FVar36 = (ForElementType<FSetElementId>)(uVar29 * 0x20 + (longlong)FVar42);
  local_1310 = (FScriptContainerElement *)CONCAT44(local_1310._4_4_,local_1300[3].HashSize);
  pUVar41 = this;
  while( true ) {
    uVar39 = 0;
    if (local_1300[3].HashSize != (int)uVar29) {
      local_1340 = 0;
      `TCheckedPointerIterator<FSoftObjectPath,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1340);
    }
    if (FVar42 == FVar36) break;
    if ((*(longlong *)FVar42 != 0) &&
       (pUVar22 = (UDataTable *)
                  FSoftObjectPath::TryLoad
                            ((FSoftObjectPath *)FVar42,(FUObjectSerializeContext *)0x0),
       pUVar22 != (UDataTable *)0x0)) {
      pUVar23 = Z_Construct_UClass_UDataTable_NoRegister();
      iVar18 = (int)pUVar23->_padding_;
      if ((iVar18 <= *(int *)(pUVar22->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar18 * 8) ==
          &pUVar23->_padding_)) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)pUVar41,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar23 = Z_Construct_UClass_UDS_CompositeTableData_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_1178,pUVar23);
        local_1178._8_8_ = pUVar41;
        pUVar21 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1178);
        if (local_1178._64_8_ != 0) {
          plVar31 = (longlong *)(local_1178 + 0x50);
          if ((longlong *)local_1178._104_8_ != (longlong *)0x0) {
            plVar31 = (longlong *)local_1178._104_8_;
          }
          (**(code **)(*plVar31 + 0x10))();
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar22);
        }
        *(UDataTable **)(pUVar21 + 1) = pUVar22;
        local_12c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_12c0.ArrayNum = 0;
        local_12c0.ArrayMax = 0;
        local_1278 = (FName)pUVar22->_padding_;
        ::FName::ToString(&local_1278,&local_1258);
        FVar37.Data = (FScriptContainerElement *)L"";
        if (local_1258.Data.ArrayNum != 0) {
          FVar37.Data = local_1258.Data.AllocatorInstance.Data;
        }
        UDataTable::GetAllRows<FDS_WindowBaseTableRow>(pUVar22,(wchar_t *)FVar37.Data,&local_12c0);
        if (local_1258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1258.Data.AllocatorInstance.Data);
        }
        iVar18 = local_12c0.ArrayNum;
        pFVar5 = local_12c0.AllocatorInstance.Data + (longlong)local_12c0.ArrayNum * 8;
        FVar37.Data = local_12c0.AllocatorInstance.Data;
        while( true ) {
          if (local_12c0.ArrayNum != iVar18) {
            local_133f = 0;
            `TCheckedPointerIterator<FDS_WindowBaseTableRow_*,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(&local_133f);
          }
          if (FVar37.Data == pFVar5) break;
          lVar10 = *(longlong *)FVar37.Data;
          if (lVar10 != 0) {
            local_12d8[0] = *(undefined4 *)(lVar10 + 8);
            local_11c8 = local_12d8;
            local_11c0 = lVar10 + 0x50;
            TSet<TTuple<int,FSoftObjectPath>,TDefaultMapHashableKeyFuncs<int,FSoftObjectPath,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<int_&&,FSoftObjectPath_&>_>
                      ((TSet<TTuple<int,FSoftObjectPath>,TDefaultMapHashableKeyFuncs<int,FSoftObjectPath,0>,FDefaultSetAllocator>
                        *)&pUVar21[1].field_0x8,
                       (TPairInitializer<int_&&,FSoftObjectPath_&> *)local_1288,(bool *)&local_11c8)
            ;
          }
          FVar37.Data = FVar37.Data + 8;
        }
        iVar18 = (this->CompositeTableDatas).ArrayNum;
        if (iVar18 == *piVar7) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar2->AllocatorInstance,piVar7);
        }
        (this->CompositeTableDatas).ArrayNum = iVar18 + 1;
        *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar18 * 8) = pUVar21;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar21 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar21);
        }
        pUVar41 = local_1320;
        if (local_12c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_12c0.AllocatorInstance.Data);
          pUVar41 = local_1320;
        }
      }
    }
    FVar42 = (ForElementType<FSetElementId>)((longlong)FVar42 + 0x20);
    uVar29 = (ulonglong)local_1310 & 0xffffffff;
  }
  pUVar21 = FWeakObjectPtr::Get(&local_12a0);
  bVar8 = pUVar21[0x36].field_0x8;
  if ((((bVar8 == 0) || (bVar8 == 3)) || (uVar39 = bVar8 - 1, -1 < (int)uVar39)) &&
     ((int)uVar39 < (pUVar41->CompositeTableDatas).ArrayNum)) {
    uVar19 = 0;
    if ((int)uVar39 < (this->CompositeTableDatas).ArrayNum) {
      uVar19 = ~uVar39 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    pFVar5 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar39 * 8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar21 = *(UObject **)pFVar5, pUVar21 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar21);
    }
    pUVar11 = *(UDS_CompositeTableData **)pFVar5;
    (pUVar41->CurrentCompositeTableData).field0_0x0.DebugPtr = pUVar11;
    if ((pUVar11 == (UDS_CompositeTableData *)0x0) ||
       ((pUVar11->CompositeTable).field0_0x0.DebugPtr == (UDataTable *)0x0)) {
      pUVar20 = UDS_LogManager::GetInst();
      if (pUVar20 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar20 = UDS_LogManager::GetInst();
      local_278._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_278,"UDS_WindowManager::InitWindowInfos",0x22,Yes);
      UDS_LogManager::PrintLog(pUVar20,1,Warning,local_278.Ptr,0x8c5,L"CompositeTable is nullptr.");
      local_12b0.AllocatorInstance.Data = (FScriptContainerElement *)local_278._padding_;
    }
    else {
      local_12e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_12e8.ArrayNum = 0;
      local_12e8.ArrayMax = 0;
      pUVar22 = (pUVar11->CompositeTable).field0_0x0.DebugPtr;
      local_1270 = (FName)pUVar22->_padding_;
      ::FName::ToString(&local_1270,&local_1248);
      FVar37.Data = (FScriptContainerElement *)L"";
      if (local_1248.Data.ArrayNum != 0) {
        FVar37.Data = local_1248.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_WindowBaseTableRow>(pUVar22,(wchar_t *)FVar37.Data,&local_12e8);
      if (local_1248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1248.Data.AllocatorInstance.Data);
      }
      iVar18 = local_12e8.ArrayNum;
      uVar29 = local_12e8._8_8_ & 0xffffffff;
      pTVar38 = (TSet<TTuple<int,TObjectPtr<UDS_WindowInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowInfo>,0>,FDefaultSetAllocator>
                 *)&pUVar41->WindowInfoMap;
      local_1300 = pTVar38;
      TSet<TTuple<int,TObjectPtr<UDS_WindowInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowInfo>,0>,FDefaultSetAllocator>
      ::Reserve(pTVar38,local_12e8.ArrayNum);
      pTVar3 = &pUVar41->WindowInfoArray;
      if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar29);
      }
      piVar7 = &(pUVar41->WindowInfoArray).ArrayMax;
      if ((pUVar41->WindowInfoArray).ArrayMax < iVar18) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar18,&pTVar3->AllocatorInstance,(pUVar41->WindowInfoArray).ArrayNum,piVar7)
        ;
      }
      uVar30 = (ulonglong)local_12e8.ArrayNum;
      local_1310 = (FScriptContainerElement *)CONCAT44(local_1310._4_4_,local_12e8.ArrayNum);
      pFVar5 = local_12e8.AllocatorInstance.Data + uVar30 * 8;
      uVar29 = uVar30;
      FVar37.Data = local_12e8.AllocatorInstance.Data;
      uVar39 = local_1334;
      while( true ) {
        if ((int)uVar30 != (int)uVar29) {
          local_133e = 0;
          `TCheckedPointerIterator<FDS_WindowBaseTableRow_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_133e);
        }
        if (FVar37.Data == pFVar5) {
          if (local_12e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_12e8.AllocatorInstance.Data);
          }
          FDS_WindowGroupTableRow::GetAll(&local_12b0);
          iVar18 = local_12b0.ArrayNum;
          pUVar41 = local_1320;
          uVar29 = (ulonglong)(uint)local_12b0.ArrayNum;
          this_00 = &local_1320->WindowGroupInfoMap;
          TSet<TTuple<int,TObjectPtr<UDS_WindowGroupInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowGroupInfo>,0>,FDefaultSetAllocator>
          ::Reserve((TSet<TTuple<int,TObjectPtr<UDS_WindowGroupInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowGroupInfo>,0>,FDefaultSetAllocator>
                     *)this_00,local_12b0.ArrayNum);
          pTVar4 = &pUVar41->WindowGroupInfoArray;
          if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum(uVar29);
          }
          if ((pUVar41->WindowGroupInfoArray).ArrayMax < iVar18) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar18,&pTVar4->AllocatorInstance,
                       (pUVar41->WindowGroupInfoArray).ArrayNum,
                       &(pUVar41->WindowGroupInfoArray).ArrayMax);
          }
          uVar30 = (ulonglong)local_12b0.ArrayNum;
          local_1334 = local_12b0.ArrayNum;
          local_1310 = local_12b0.AllocatorInstance.Data + uVar30 * 8;
          uVar29 = uVar30;
          FVar37.Data = local_12b0.AllocatorInstance.Data;
          goto LAB_14bb6d442;
        }
        pFVar12 = *(FDS_WindowBaseTableRow **)FVar37.Data;
        if (pFVar12 == (FDS_WindowBaseTableRow *)0x0) break;
        bVar17 = UDS_GameInstance::GetIsDungeonPlayBuild();
        if ((!bVar17) ||
           ((((EVar9 = pFVar12->ID, EVar9 != CheatKeyBtn && (EVar9 != HUDTotalMenu)) &&
             (EVar9 != TrackerList)) && (EVar9 != BtnParty)))) {
          local_1260 = (pFVar12->WidgetPath).AssetPath.PackageName;
          local_1198 = local_1260;
          FStack_1190 = (pFVar12->WidgetPath).AssetPath.AssetName;
          if (local_1260 == (FName)0x0) {
            uVar39 = uVar39 | 1;
            pFVar24 = &local_1298;
            local_1298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1298.Data.ArrayNum = 0;
            local_1298.Data.ArrayMax = 0;
          }
          else {
            uVar39 = uVar39 | 2;
            pFVar24 = ::FName::ToString(&local_1260,&local_11b8);
          }
          local_1330.Data.AllocatorInstance.Data = (pFVar24->Data).AllocatorInstance.Data;
          (pFVar24->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1330.Data.ArrayNum = (pFVar24->Data).ArrayNum;
          local_1330.Data.ArrayMax = (pFVar24->Data).ArrayMax;
          (pFVar24->Data).ArrayNum = 0;
          (pFVar24->Data).ArrayMax = 0;
          if (((uVar39 & 2) != 0) &&
             (uVar39 = uVar39 & 0xfffffffd,
             local_11b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_11b8.Data.AllocatorInstance.Data);
          }
          if (((uVar39 & 1) != 0) &&
             (uVar39 = uVar39 & 0xfffffffe,
             local_1298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_1298.Data.AllocatorInstance.Data);
          }
          EVar9 = pFVar12->ID;
          ::FString::FString(&local_1220,L"EDS_WindowWidget");
          DS_Util::GetEnumToString(&local_12f8,&local_1220,(longlong)(int)EVar9);
          if (local_1220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1220.Data.AllocatorInstance.Data);
          }
          if (local_1330.Data.ArrayNum < 2) {
            pUVar20 = UDS_LogManager::GetInst();
            if (pUVar20 != (UDS_LogManager *)0x0) {
              pUVar20 = UDS_LogManager::GetInst();
              local_db8._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_db8,"UDS_WindowManager::InitWindowInfos",0x22,Yes);
              UDS_LogManager::PrintLog
                        (pUVar20,1,Display,local_db8.Ptr,0x8ec,
                         L"[WindowBase] WidgetPath is Empty. // Enum - (%s)");
              if ((void *)local_db8._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_db8._padding_);
              }
            }
          }
          else {
            bVar17 = FPackageName::DoesPackageExist(&local_1330,(FString *)0x0,true);
            pUVar16 = local_1320;
            if (bVar17) {
              FObjectInitializer::AssertIfInConstructor
                        ((UObject *)local_1320,
                         L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                        );
              pUVar23 = Z_Construct_UClass_UDS_WindowInfo_NoRegister();
              FStaticConstructObjectParameters::FStaticConstructObjectParameters
                        ((FStaticConstructObjectParameters *)local_10f8,pUVar23);
              local_10f8._8_8_ = pUVar16;
              pUVar21 = StaticConstructObject_Internal
                                  ((FStaticConstructObjectParameters *)local_10f8);
              if (local_10f8._64_8_ != 0) {
                plVar31 = (longlong *)(local_10f8 + 0x50);
                if ((longlong *)local_10f8._104_8_ != (longlong *)0x0) {
                  plVar31 = (longlong *)local_10f8._104_8_;
                }
                (**(code **)(*plVar31 + 0x10))();
              }
              local_12c8 = pUVar21;
              if (pUVar21 == (UObject *)0x0) {
                pUVar20 = UDS_LogManager::GetInst();
                if (pUVar20 != (UDS_LogManager *)0x0) {
                  pUVar20 = UDS_LogManager::GetInst();
                  local_b78._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_b78,"UDS_WindowManager::InitWindowInfos",0x22,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar20,1,Warning,local_b78.Ptr,0x8f9,
                             L"[WindowBase] Failed to NewObject.");
                  pvVar32 = (void *)local_b78._padding_;
LAB_14bb6d0d5:
                  if (pvVar32 != (void *)0x0) {
                    FMemory::Free(pvVar32);
                  }
                }
              }
              else {
                local_1268 = pUVar21;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable(pUVar21);
                }
                InitWindowInfo(local_1320,(TObjectPtr<UDS_WindowInfo>)&local_1268,pFVar12);
                local_1338 = *(uint *)(local_12c8 + 1);
                if ((local_1338 == 0) &&
                   (local_1338 = *(uint *)&local_12c8[9].field_0x20, local_1338 == 0)) {
                  pUVar20 = UDS_LogManager::GetInst();
                  if (pUVar20 != (UDS_LogManager *)0x0) {
                    pUVar20 = UDS_LogManager::GetInst();
                    local_a58._padding_ = 0;
                    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                              (&local_a58,"UDS_WindowManager::InitWindowInfos",0x22,Yes);
                    UDS_LogManager::PrintLog
                              (pUVar20,1,Warning,local_a58.Ptr,0x902,L"[WindowBase] IntKey is 0.");
                    pvVar32 = (void *)local_a58._padding_;
                    goto LAB_14bb6d0d5;
                  }
                }
                else {
                  if (*(int *)&(pTVar38->Elements).field_0x8 !=
                      *(int *)&(pTVar38->Elements).field_0x34) {
                    FVar42 = (pTVar38->Hash).SecondaryData;
                    FVar36 = (ForElementType<FSetElementId>)&pTVar38->Hash;
                    if (FVar42 != (ForElementType<FSetElementId>)0x0) {
                      FVar36 = FVar42;
                    }
                    iVar18 = *(int *)((longlong)FVar36 +
                                     (ulonglong)(pTVar38->HashSize - 1U & local_1338) * 4);
                    if (iVar18 != -1) {
                      do {
                        if (*(uint *)(*(longlong *)&pTVar38->Elements + (longlong)iVar18 * 0x18) ==
                            local_1338) {
                          pUVar20 = UDS_LogManager::GetInst();
                          if (pUVar20 == (UDS_LogManager *)0x0) goto LAB_14bb6d1e2;
                          pUVar20 = UDS_LogManager::GetInst();
                          local_938._padding_ = 0;
                          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                                    (&local_938,"UDS_WindowManager::InitWindowInfos",0x22,Yes);
                          UDS_LogManager::PrintLog
                                    (pUVar20,1,Warning,local_938.Ptr,0x908,
                                     L"[WindowBase] Duplicate IntKey. (%d)");
                          pvVar32 = (void *)local_938._padding_;
                          goto LAB_14bb6d0d5;
                        }
                        iVar18 = *(int *)(*(longlong *)&pTVar38->Elements + 0x10 +
                                         (longlong)iVar18 * 0x18);
                      } while (iVar18 != -1);
                    }
                  }
                  local_1210 = &local_1338;
                  local_1208 = &local_12c8;
                  TSet<TTuple<int,TObjectPtr<UDS_WindowInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowInfo>,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<int_&,UDS_WindowInfo_*_&>_>
                            (pTVar38,(TPairInitializer<int_&,UDS_WindowInfo_*_&> *)(local_1288 + 4),
                             (bool *)&local_1210);
                  iVar18 = (pUVar41->WindowInfoArray).ArrayNum;
                  if (iVar18 == *piVar7) {
                    iVar18 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,&pTVar3->AllocatorInstance,piVar7);
                  }
                  pFVar13 = (pTVar3->AllocatorInstance).Data;
                  (pUVar41->WindowInfoArray).ArrayNum = iVar18 + 1;
                  *(UObject **)(pFVar13 + (longlong)iVar18 * 8) = local_12c8;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (local_12c8 != (UObject *)0x0)) {
                    UE::GC::MarkAsReachable(local_12c8);
                  }
                }
              }
            }
            else {
              pUVar20 = UDS_LogManager::GetInst();
              if (pUVar20 != (UDS_LogManager *)0x0) {
                pUVar20 = UDS_LogManager::GetInst();
                local_c98._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_c98,"UDS_WindowManager::InitWindowInfos",0x22,Yes);
                UDS_LogManager::PrintLog
                          (pUVar20,1,Warning,local_c98.Ptr,0x8f2,
                           L"[WindowBase] Invalid WidgetPath. (%s) // Enum - (%s)");
                pTVar38 = local_1300;
                if ((void *)local_c98._padding_ != (void *)0x0) {
                  FMemory::Free((void *)local_c98._padding_);
                  pTVar38 = local_1300;
                }
              }
            }
          }
LAB_14bb6d1e2:
          if (local_12f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_12f8.Data.AllocatorInstance.Data);
          }
          if (local_1330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1330.Data.AllocatorInstance.Data);
          }
        }
        uVar30 = local_12e8._8_8_ & 0xffffffff;
        FVar37.Data = FVar37.Data + 8;
        uVar29 = (ulonglong)local_1310 & 0xffffffff;
      }
      pUVar20 = UDS_LogManager::GetInst();
      local_12b0.AllocatorInstance.Data = local_12e8.AllocatorInstance.Data;
      if (pUVar20 != (UDS_LogManager *)0x0) {
        pUVar20 = UDS_LogManager::GetInst();
        local_818._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_818,"UDS_WindowManager::InitWindowInfos",0x22,Yes);
        UDS_LogManager::PrintLog
                  (pUVar20,1,Warning,local_818.Ptr,0x8d4,L"[WindowBase] tableRow is nullptr.");
        local_12b0.AllocatorInstance.Data = local_12e8.AllocatorInstance.Data;
        if ((void *)local_818._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_818._padding_);
          local_12b0.AllocatorInstance.Data = local_12e8.AllocatorInstance.Data;
        }
      }
    }
  }
  else {
    pUVar20 = UDS_LogManager::GetInst();
    if (pUVar20 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar20 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_WindowManager::InitWindowInfos",0x22,Yes);
    UDS_LogManager::PrintLog
              (pUVar20,1,Warning,local_158.Ptr,0x8be,L"CompositeTable is Invalid. Index - %d");
    local_12b0.AllocatorInstance.Data = (FScriptContainerElement *)local_158._padding_;
  }
  goto LAB_14bb6dbeb;
LAB_14bb6d442:
  pFVar5 = local_1310;
  if ((int)uVar30 != (int)uVar29) {
    local_133d = 0;
    `TCheckedPointerIterator<FDS_WindowGroupTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
    operator()(&local_133d);
  }
  if (FVar37.Data == pFVar5) {
    if (local_12b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_12b0.AllocatorInstance.Data);
    }
    if (*(int *)&(pUVar41->WindowGroupInfoMap).field_0x8 ==
        *(int *)&(pUVar41->WindowGroupInfoMap).field_0x34) goto LAB_14bb6d92c;
    puVar33 = *(undefined1 **)&(pUVar41->WindowGroupInfoMap).field_0x40;
    if (puVar33 == (undefined1 *)0x0) {
      puVar33 = &(pUVar41->WindowGroupInfoMap).field_0x38;
    }
    iVar18 = *(int *)(puVar33 +
                     (ulonglong)(*(int *)&(pUVar41->WindowGroupInfoMap).field_0x48 - 1U & 1) * 4);
    if (iVar18 == -1) goto LAB_14bb6d92c;
    goto LAB_14bb6d910;
  }
  if (*(longlong *)FVar37.Data == 0) {
    pUVar20 = UDS_LogManager::GetInst();
    if (pUVar20 == (UDS_LogManager *)0x0) goto LAB_14bb6dbeb;
    pUVar20 = UDS_LogManager::GetInst();
    local_398._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_398,"UDS_WindowManager::InitWindowInfos",0x22,Yes);
    UDS_LogManager::PrintLog
              (pUVar20,1,Warning,local_398.Ptr,0x91d,L"[WindowGroup] tableRow is nullptr.");
    pvVar32 = (void *)local_398._padding_;
    goto LAB_14bb6d8b3;
  }
  pUVar21 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar21,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar23 = Z_Construct_UClass_UDS_WindowGroupInfo_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1078,pUVar23);
  local_1078._8_8_ = pUVar21;
  pUVar25 = (UDS_WindowGroupInfo *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1078);
  if (local_1078._64_8_ != 0) {
    plVar31 = (longlong *)(local_1078 + 0x50);
    if ((longlong *)local_1078._104_8_ != (longlong *)0x0) {
      plVar31 = (longlong *)local_1078._104_8_;
    }
    (**(code **)(*plVar31 + 0x10))();
  }
  local_1308 = pUVar25;
  if (pUVar25 == (UDS_WindowGroupInfo *)0x0) goto LAB_14bb6d7cb;
  pUVar25->WindowGroupID = *(EDS_WindowWidgetGroup *)(*(longlong *)FVar37.Data + 8);
  pUVar25->TestID = *(int *)(*(longlong *)FVar37.Data + 0x30);
  lVar10 = *(longlong *)FVar37.Data;
  (pUVar25->WindowGroupTableRow).ID = *(EDS_WindowWidgetGroup *)(lVar10 + 8);
  (pUVar25->WindowGroupTableRow).DataStage = *(int *)(lVar10 + 0xc);
  ::FString::operator=(&(pUVar25->WindowGroupTableRow).Version,(FString *)(lVar10 + 0x10));
  pTVar1 = &(pUVar25->WindowGroupTableRow).ID_WindowWidget;
  if (pTVar1 != (TArray<EDS_WindowWidget,TSizedDefaultAllocator<32>_> *)(lVar10 + 0x20)) {
    iVar18 = *(int *)(lVar10 + 0x28);
    piVar7 = &(pUVar25->WindowGroupTableRow).ID_WindowWidget.ArrayMax;
    pvVar32 = *(void **)(lVar10 + 0x20);
    iVar35 = *piVar7;
    (pUVar25->WindowGroupTableRow).ID_WindowWidget.ArrayNum = iVar18;
    if ((iVar18 == 0) && (iVar35 == 0)) {
      *piVar7 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar18,iVar35,&pTVar1->AllocatorInstance,iVar18,piVar7);
      if (iVar18 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pvVar32,(longlong)iVar18 << 2);
      }
    }
  }
  (pUVar25->WindowGroupTableRow).TestID = *(int *)(lVar10 + 0x30);
  local_1318[0] = (uint)local_1308->WindowGroupID;
  if (local_1308->WindowGroupID == None) {
    local_1318[0] = local_1308->TestID;
  }
  if (local_1318[0] == 0) {
    pUVar20 = UDS_LogManager::GetInst();
    if (pUVar20 != (UDS_LogManager *)0x0) {
      pUVar20 = UDS_LogManager::GetInst();
      local_6f8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_6f8,"UDS_WindowManager::InitWindowInfos",0x22,Yes);
      UDS_LogManager::PrintLog(pUVar20,1,Warning,local_6f8.Ptr,0x92f,L"[WindowGroup] IntKey is 0.");
      if ((void *)local_6f8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_6f8._padding_);
      }
    }
  }
  else {
    if (*(int *)&(pUVar41->WindowGroupInfoMap).field_0x8 !=
        *(int *)&(pUVar41->WindowGroupInfoMap).field_0x34) {
      puVar33 = *(undefined1 **)&(pUVar41->WindowGroupInfoMap).field_0x40;
      puVar34 = &(pUVar41->WindowGroupInfoMap).field_0x38;
      if (puVar33 != (undefined1 *)0x0) {
        puVar34 = puVar33;
      }
      iVar18 = *(int *)(puVar34 +
                       (ulonglong)
                       (*(int *)&(pUVar41->WindowGroupInfoMap).field_0x48 - 1U & local_1318[0]) * 4)
      ;
      if (iVar18 != -1) {
        do {
          if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar18 * 0x18) == local_1318[0]
             ) {
            pUVar20 = UDS_LogManager::GetInst();
            if (pUVar20 != (UDS_LogManager *)0x0) {
              pUVar20 = UDS_LogManager::GetInst();
              local_5d8._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_5d8,"UDS_WindowManager::InitWindowInfos",0x22,Yes);
              UDS_LogManager::PrintLog
                        (pUVar20,1,Warning,local_5d8.Ptr,0x935,
                         L"[WindowGroup] Duplicate IntKey. (%d)");
              if ((void *)local_5d8._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_5d8._padding_);
              }
            }
            goto LAB_14bb6d721;
          }
          iVar18 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar18 * 0x18);
        } while (iVar18 != -1);
      }
    }
    UDS_WindowGroupInfo::InitInfo(local_1308);
    local_1200 = local_1318;
    local_11f8 = &local_1308;
    TSet<TTuple<int,TObjectPtr<UDS_WindowGroupInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowGroupInfo>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_&,UDS_WindowGroupInfo_*_&>_>
              ((TSet<TTuple<int,TObjectPtr<UDS_WindowGroupInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowGroupInfo>,0>,FDefaultSetAllocator>
                *)this_00,(TPairInitializer<int_&,UDS_WindowGroupInfo_*_&> *)local_1280,
               (bool *)&local_1200);
    iVar18 = (pUVar41->WindowGroupInfoArray).ArrayNum;
    if (iVar18 == (pUVar41->WindowGroupInfoArray).ArrayMax) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar4->AllocatorInstance,&(pUVar41->WindowGroupInfoArray).ArrayMax
                         );
    }
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    (pUVar41->WindowGroupInfoArray).ArrayNum = iVar18 + 1;
    *(UDS_WindowGroupInfo **)(pFVar5 + (longlong)iVar18 * 8) = local_1308;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_1308 != (UDS_WindowGroupInfo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_1308);
    }
  }
LAB_14bb6d721:
  uVar30 = (ulonglong)(uint)local_12b0.ArrayNum;
  uVar29 = (ulonglong)local_1334;
  FVar37.Data = FVar37.Data + 8;
  goto LAB_14bb6d442;
  while (iVar18 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar18 * 0x18),
        iVar18 != -1) {
LAB_14bb6d910:
    if (*(int *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar18 * 0x18) == 1) {
      pTVar27 = &TMapBase<int,TObjectPtr<UDS_WindowGroupInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowGroupInfo>,0>_>
                 ::FindChecked((TMapBase<int,TObjectPtr<UDS_WindowGroupInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowGroupInfo>,0>_>
                                *)this_00,1)->field0_0x0;
      pTVar38 = local_1300;
      TVar14.field0_0x0 = (TObjectPtr<UDS_WindowGroupInfo>_u_0)pTVar27->DebugPtr;
      if (TVar14.field0_0x0 != (UDS_WindowGroupInfo *)0x0) {
        puVar40 = *(uint **)((longlong)TVar14.field0_0x0 + 0x68);
        iVar18 = *(int *)((longlong)TVar14.field0_0x0 + 0x70);
        puVar6 = puVar40 + iVar18;
        goto LAB_14bb6da67;
      }
      break;
    }
  }
  goto LAB_14bb6d92c;
LAB_14bb6da67:
  if (*(int *)((longlong)TVar14.field0_0x0 + 0x70) != iVar18) {
    local_133c = 0;
    `TCheckedPointerIterator<enum_EDS_WindowWidget,int,0>::operator!='::__l2::<lambda_1>::operator()
              (&local_133c);
  }
  if (puVar40 != puVar6) {
    uVar39 = *puVar40;
    if (*(int *)&(pTVar38->Elements).field_0x8 == *(int *)&(pTVar38->Elements).field_0x34) {
LAB_14bb6dafe:
      puVar40 = puVar40 + 1;
    }
    else {
      FVar42 = (pTVar38->Hash).SecondaryData;
      FVar36 = (ForElementType<FSetElementId>)&pTVar38->Hash;
      if (FVar42 != (ForElementType<FSetElementId>)0x0) {
        FVar36 = FVar42;
      }
      iVar35 = *(int *)((longlong)FVar36 + (ulonglong)(pTVar38->HashSize - 1U & uVar39) * 4);
      if (iVar35 == -1) goto LAB_14bb6dafe;
      do {
        if (*(uint *)(*(longlong *)&pTVar38->Elements + (longlong)iVar35 * 0x18) == uVar39) {
          pTVar28 = &TMapBase<int,TObjectPtr<UDS_WindowInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowInfo>,0>_>
                     ::FindChecked((TMapBase<int,TObjectPtr<UDS_WindowInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowInfo>,0>_>
                                    *)pTVar38,uVar39)->field0_0x0;
          if (pTVar28->DebugPtr != (UDS_WindowInfo *)0x0) {
            pTVar28 = &TMapBase<int,TObjectPtr<UDS_WindowInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowInfo>,0>_>
                       ::FindChecked((TMapBase<int,TObjectPtr<UDS_WindowInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowInfo>,0>_>
                                      *)pTVar38,uVar39)->field0_0x0;
            *(undefined1 *)((longlong)pTVar28->DebugPtr + 0x162) = 1;
          }
          goto LAB_14bb6dafe;
        }
        iVar35 = *(int *)(*(longlong *)&pTVar38->Elements + 0x10 + (longlong)iVar35 * 0x18);
      } while (iVar35 != -1);
      puVar40 = puVar40 + 1;
    }
    goto LAB_14bb6da67;
  }
LAB_14bb6d92c:
  iStack_11e0 = 0x2a;
  local_11e8 = L"/Script/ProjectDS.EDS_WindowLayerGroupType";
  pUVar23 = Z_Construct_UClass_UEnum_NoRegister();
  local_11a8._12_4_ = uStack_11dc;
  local_11a8.Size = iStack_11e0;
  local_11a8.DataPtr = local_11e8;
  pUVar21 = StaticFindObject(pUVar23,(UObject *)0x0,&local_11a8,None);
  pUVar41 = local_1320;
  if (pUVar21 == (UObject *)0x0) {
    return;
  }
  iVar18 = *(int *)(pUVar21 + 2);
  iVar35 = 0;
  if (iVar18 < 1) {
    return;
  }
  do {
    if ((*(int *)(pUVar21 + 2) <= iVar35) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Names.IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                            ,0xb2d,L""), bVar17)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    pTVar26 = UEnum::FNameData::operator[]((FNameData *)&pUVar21[1].field_0x18,&local_1188,iVar35);
    local_133b[0] = pTVar26->field_0x8;
    if (local_133b[0] == 0x2e) {
      return;
    }
    local_1228 = (uint)local_133b[0] * 1000;
    local_11d8 = local_133b;
    local_11d0 = &local_1238;
    local_1238 = (void *)0x0;
    local_1230 = 0;
    TSet<TTuple<enum_EDS_WindowLayerGroupType,FDS_WindowLayerGroupInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowLayerGroupType,FDS_WindowLayerGroupInfo,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_WindowLayerGroupType_&,FDS_WindowLayerGroupInfo_&&>_>
              (&pUVar41->WindowLayerGroupInfoMap,
               (TPairInitializer<EDS_WindowLayerGroupType_&,FDS_WindowLayerGroupInfo_&&> *)
               (local_1280 + 4),(bool *)&local_11d8);
    if (local_1238 != (void *)0x0) {
      FMemory::Free(local_1238);
    }
    iVar35 = iVar35 + 1;
  } while (iVar35 < iVar18);
  return;
LAB_14bb6d7cb:
  pUVar20 = UDS_LogManager::GetInst();
  if (pUVar20 != (UDS_LogManager *)0x0) {
    pUVar20 = UDS_LogManager::GetInst();
    local_4b8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_4b8,"UDS_WindowManager::InitWindowInfos",0x22,Yes);
    UDS_LogManager::PrintLog
              (pUVar20,1,Warning,local_4b8.Ptr,0x924,L"[WindowGroup] Failed to NewObject.");
    pvVar32 = (void *)local_4b8._padding_;
LAB_14bb6d8b3:
    if (pvVar32 != (void *)0x0) {
      FMemory::Free(pvVar32);
    }
  }
LAB_14bb6dbeb:
  if (local_12b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_12b0.AllocatorInstance.Data);
  }
  return;
}

// LoadWindowInfos @ 14bb70490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_WindowManager::LoadWindowInfos(UDS_WindowManager *this,FString *param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  uint uVar5;
  int iVar6;
  UDS_HudManager *this_00;
  UObject *pUVar7;
  UDS_LogManager *pUVar8;
  wchar_t *pwVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  FScriptContainerElement *this_01;
  ForAnyElementType FVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStackY_258 [32];
  TArray<FString,TSizedDefaultAllocator<32>_> local_218;
  FWeakObjectPtr local_208;
  TArray<FString,TSizedDefaultAllocator<32>_> local_200;
  UDS_WindowManager *local_1f0;
  FString local_1e8;
  FString local_1d8;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1a8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_1f0 = this;
  ::FString::FString(&local_1d8,L",");
  ::FString::FString(&local_1e8,"");
  if ((param_1->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FFileHelper::LoadFileToString(&local_1e8,pwVar9,None,0);
  local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_200.ArrayNum = 0;
  local_200.ArrayMax = 0;
  ::FString::ParseIntoArray(&local_1e8,&local_200,L"\r\n",true);
  uVar10 = (ulonglong)local_200.ArrayNum;
  uVar14 = 0;
  if (0 < local_200.ArrayNum) {
    lVar13 = 0;
    lVar15 = 0;
    uVar11 = uVar10;
    do {
      uVar5 = 0;
      if ((int)uVar14 < (int)uVar11) {
        uVar5 = ~uVar14 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_01 = local_200.AllocatorInstance.Data + lVar15;
      if (uVar14 == 0) {
        this_00 = UDS_HudManager::GetInst();
        this = local_1f0;
        if (this_00 != (UDS_HudManager *)0x0) {
          if (*(int *)(this_01 + 8) == 0) {
            pwVar9 = L"";
          }
          else {
            pwVar9 = *(wchar_t **)this_01;
          }
          dVar16 = _wtof(pwVar9);
          UDS_HudManager::SetUIScale(this_00,(float)dVar16);
          this = local_1f0;
        }
      }
      else {
        local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar12.Data = (FScriptContainerElement *)L"";
        if (local_1d8.Data.ArrayNum != 0) {
          FVar12.Data = local_1d8.Data.AllocatorInstance.Data;
        }
        local_218.ArrayNum = 0;
        local_218.ArrayMax = 0;
        ::FString::ParseIntoArray((FString *)this_01,&local_218,(wchar_t *)FVar12.Data,true);
        if (local_218.ArrayNum != 9) {
          pUVar8 = UDS_LogManager::GetInst();
          if (pUVar8 != (UDS_LogManager *)0x0) {
            pUVar8 = UDS_LogManager::GetInst();
            local_1a8._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_1a8,"UDS_WindowManager::LoadWindowInfos",0x22,Yes);
            UDS_LogManager::PrintLog
                      (pUVar8,1,Warning,local_1a8.Ptr,0x738,L"Failed to LoadWindowInfos(). %s");
            if ((void *)local_1a8._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_1a8._padding_);
            }
          }
          DestructItems<FString,int>((FString *)local_218.AllocatorInstance.Data,local_218.ArrayNum)
          ;
          if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_218.AllocatorInstance.Data);
          }
          break;
        }
        if (*(int *)(local_218.AllocatorInstance.Data + 8) == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = *(wchar_t **)local_218.AllocatorInstance.Data;
        }
        iVar6 = _wtoi(pwVar9);
        if ((local_218.ArrayNum < 2) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(int *)(local_218.AllocatorInstance.Data + 0x18) == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = *(wchar_t **)(local_218.AllocatorInstance.Data + 0x10);
        }
        dVar16 = _wtof(pwVar9);
        if ((local_218.ArrayNum < 3) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(int *)(local_218.AllocatorInstance.Data + 0x28) == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = *(wchar_t **)(local_218.AllocatorInstance.Data + 0x20);
        }
        dVar17 = _wtof(pwVar9);
        if ((local_218.ArrayNum < 4) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(int *)(local_218.AllocatorInstance.Data + 0x38) == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = *(wchar_t **)(local_218.AllocatorInstance.Data + 0x30);
        }
        dVar18 = _wtof(pwVar9);
        if ((local_218.ArrayNum < 5) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(int *)(local_218.AllocatorInstance.Data + 0x48) == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = *(wchar_t **)(local_218.AllocatorInstance.Data + 0x40);
        }
        dVar19 = _wtof(pwVar9);
        if ((local_218.ArrayNum < 6) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(int *)(local_218.AllocatorInstance.Data + 0x58) == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = *(wchar_t **)(local_218.AllocatorInstance.Data + 0x50);
        }
        dVar20 = _wtof(pwVar9);
        local_1c8 = (double)(float)dVar20;
        if ((local_218.ArrayNum < 7) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(int *)(local_218.AllocatorInstance.Data + 0x68) == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = *(wchar_t **)(local_218.AllocatorInstance.Data + 0x60);
        }
        dVar20 = _wtof(pwVar9);
        dStack_1c0 = (double)(float)dVar20;
        if ((local_218.ArrayNum < 8) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(int *)(local_218.AllocatorInstance.Data + 0x78) == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = *(wchar_t **)(local_218.AllocatorInstance.Data + 0x70);
        }
        dVar20 = _wtof(pwVar9);
        local_1b8 = (double)(float)dVar20;
        if ((local_218.ArrayNum < 9) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(int *)(local_218.AllocatorInstance.Data + 0x88) == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = *(wchar_t **)(local_218.AllocatorInstance.Data + 0x80);
        }
        dVar20 = _wtof(pwVar9);
        dStack_1b0 = (double)(float)dVar20;
        GetWindowInfo(this,(int)&local_208);
        bVar4 = TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr> *)&local_208,(void *)0x0);
        if (!bVar4) {
          pUVar7 = FWeakObjectPtr::Get(&local_208);
          *(int *)(pUVar7 + 1) = iVar6;
          pUVar7 = FWeakObjectPtr::Get(&local_208);
          auVar2._8_4_ = SUB84((double)(float)dVar17,0);
          auVar2._0_8_ = (double)(float)dVar16;
          auVar2._12_4_ = (int)((ulonglong)(double)(float)dVar17 >> 0x20);
          *(undefined1 (*) [16])&pUVar7[6].field_0x18 = auVar2;
          pUVar7 = FWeakObjectPtr::Get(&local_208);
          auVar3._8_4_ = SUB84((double)(float)dVar19,0);
          auVar3._0_8_ = (double)(float)dVar18;
          auVar3._12_4_ = (int)((ulonglong)(double)(float)dVar19 >> 0x20);
          *(undefined1 (*) [16])(pUVar7 + 7) = auVar3;
          pUVar7 = FWeakObjectPtr::Get(&local_208);
          *(double *)&pUVar7[7].field_0x10 = local_1c8;
          *(double *)&pUVar7[7].field_0x18 = dStack_1c0;
          *(double *)&pUVar7[7].field_0x20 = local_1b8;
          *(double *)(pUVar7 + 8) = dStack_1b0;
        }
        DestructItems<FString,int>((FString *)local_218.AllocatorInstance.Data,local_218.ArrayNum);
        if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_218.AllocatorInstance.Data);
        }
      }
      uVar11 = local_200._8_8_ & 0xffffffff;
      uVar14 = uVar14 + 1;
      lVar13 = lVar13 + 1;
      lVar15 = lVar15 + 0x10;
    } while (lVar13 < (longlong)uVar10);
  }
  DestructItems<FString,int>((FString *)local_200.AllocatorInstance.Data,local_200.ArrayNum);
  if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.AllocatorInstance.Data);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  return;
}

// OnChangeInputDeviceType @ 14bb71b50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_WindowManager::OnChangeInputDeviceType(UDS_WindowManager *this,EDS_InputDeviceType *param_1)

{
  EDS_InputDeviceType EVar1;
  UDS_CompositeTableData *pUVar2;
  UDataTable *this_00;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  EDS_GameStateType EVar8;
  UObject *pUVar9;
  FName *pFVar10;
  UScriptStruct *pUVar11;
  FDS_WindowBaseTableRow *pFVar12;
  ADS_GameMode *this_01;
  UDS_HudManager *pUVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar16;
  ulonglong uVar17;
  ForAnyElementType FVar18;
  FScriptContainerElement *pFVar19;
  ForAnyElementType FVar20;
  undefined1 local_res20 [8];
  FWeakObjectPtr local_118;
  undefined1 local_110 [8];
  FDelegateAllocation local_108;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  FString local_e8;
  FWeakObjectPtr local_d8;
  FScriptContainerElement *local_d0;
  TArray<int,TSizedDefaultAllocator<32>_> local_c8;
  UDS_CompositeTableData *local_b8;
  UDS_CompositeTableData *local_b0;
  UObject *local_a8;
  UDS_HudManager *local_a0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDelegateAllocation *local_68;
  FName local_60;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> local_58;
  
  ADS_GameMode::GetInst();
  bVar5 = FWeakObjectPtr::IsValid(&local_d8);
  if (bVar5) {
    EVar1 = *param_1;
    if ((((EVar1 != None) && (EVar1 != Max)) && (local_f0 = EVar1 - 1, -1 < (int)local_f0)) &&
       ((int)local_f0 < (this->CompositeTableDatas).ArrayNum)) {
      local_ec = ~local_f0 >> 0x1f;
      uVar7 = 0;
      if ((int)local_f0 < (this->CompositeTableDatas).ArrayNum) {
        uVar7 = local_ec;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar2 = *(UDS_CompositeTableData **)
                ((this->CompositeTableDatas).AllocatorInstance.Data + (ulonglong)EVar1 * 8 + -8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (UDS_CompositeTableData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      if ((this->CurrentCompositeTableData).field0_0x0.DebugPtr != pUVar2) {
        local_b8 = pUVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar2 != (UDS_CompositeTableData *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
        local_b0 = (this->CurrentCompositeTableData).field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_b0 != (UDS_CompositeTableData *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_b0);
        }
        GetWindowWidgetsComparePathDifferences
                  (this,&local_c8,(TObjectPtr<UDS_CompositeTableData>)&local_b0,
                   (TObjectPtr<UDS_CompositeTableData>)&local_b8);
        local_f4 = local_c8.ArrayNum;
        uVar17 = (ulonglong)(int)local_f4;
        pFVar19 = local_c8.AllocatorInstance.Data + uVar17 * 4;
        FVar20.Data = local_c8.AllocatorInstance.Data;
        local_d0 = pFVar19;
        while( true ) {
          if (local_c8.ArrayNum != (int)uVar17) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res20);
          }
          if (FVar20.Data == pFVar19) break;
          GetWindowInfo(this,(int)&local_118);
          bVar5 = FWeakObjectPtr::IsValid(&local_118);
          if (((bVar5) && (pUVar9 = FWeakObjectPtr::Get(&local_118), pUVar9[8].field_0x22 != '\0'))
             && (pUVar9 = FWeakObjectPtr::Get(&local_118), pUVar9[2].field_0x1 == '\x01')) {
            pUVar9 = FWeakObjectPtr::Get(&local_118);
            cVar6 = (**(code **)(*(longlong *)pUVar9 + 0x2c8))(pUVar9);
            if (cVar6 != '\0') {
              local_f8 = 0;
              ExecuteClose(this,(TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr>)local_118,&local_f8);
            }
            this_00 = (pUVar2->CompositeTable).field0_0x0.DebugPtr;
            local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_e8.Data.ArrayNum = 0;
            local_e8.Data.ArrayMax = 0;
            ::FString::AppendInt(&local_e8,*(int *)FVar20.Data);
            FVar18.Data = (FScriptContainerElement *)L"";
            if (local_e8.Data.ArrayNum != 0) {
              FVar18.Data = local_e8.Data.AllocatorInstance.Data;
            }
            pFVar10 = ::FName::FName(&local_60,(wchar_t *)FVar18.Data);
            FVar3 = *pFVar10;
            pUVar11 = FDS_WindowBaseTableRow::StaticStruct();
            pFVar12 = (FDS_WindowBaseTableRow *)
                      UDataTable::FindRowInternal(this_00,pUVar11,FVar3,L"",true);
            if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
            }
            local_a8 = FWeakObjectPtr::Get(&local_118);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8 != (UObject *)0x0)
               ) {
              UE::GC::MarkAsReachable(local_a8);
            }
            InitWindowInfo(this,(TObjectPtr<UDS_WindowInfo>)&local_a8,pFVar12);
            this_01 = (ADS_GameMode *)FWeakObjectPtr::Get(&local_d8);
            EVar8 = ADS_GameMode::GetCurGameStateType(this_01);
            pFVar19 = local_d0;
            if (EVar8 == IngameState) {
              pUVar13 = UDS_HudManager::GetInst();
              local_110 = (undefined1  [8])0x0;
              local_108.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
              local_108.DelegateSize = 0;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_110,
                         (FWriteAccessScope *)&local_80);
              local_68 = &local_108;
              puVar14 = UE::Core::Private::DelegateAllocate(0x28,&local_108);
              if (puVar14 != (undefined8 *)0x0) {
                *puVar14 = &
                           ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
                ;
                uVar15 = FDelegateHandle::GenerateNewID();
                puVar14[2] = uVar15;
                *puVar14 = &
                           ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_HudManager____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
                ;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar13 != (UDS_HudManager *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)pUVar13);
                }
                puVar14[3] = 0;
                local_a0 = pUVar13;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar13 != (UDS_HudManager *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)pUVar13);
                }
                FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar14 + 3),(FObjectPtr)&local_a0);
                puVar14[4] = UDS_HudManager::BindHUDViewModel;
              }
              if (local_80.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
              }
              pTVar16 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                        TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                  (&local_58,
                                   (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                    *)local_110);
              pUVar9 = FWeakObjectPtr::Get(&local_118);
              OpenWindow(this,*(EDS_WindowWidget *)(pUVar9 + 1),pTVar16);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_110,
                         (FWriteAccessScope *)&local_98);
              if ((local_108.DelegateSize != 0) &&
                 (local_108.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
                (*(code *)**(undefined8 **)local_108.DelegateAllocator)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          ((ForAnyElementType *)&local_108,0,0,0x10);
                local_108.DelegateSize = 0;
              }
              if (local_98.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
              }
              if (local_108.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
                FMemory::Free((void *)local_108.DelegateAllocator);
              }
              FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                        ((FMRSWRecursiveAccessDetector *)local_110);
              pFVar19 = local_d0;
            }
          }
          FVar20.Data = FVar20.Data + 4;
          uVar17 = (ulonglong)local_f4;
        }
        uVar7 = 0;
        if ((int)local_f0 < (this->CompositeTableDatas).ArrayNum) {
          uVar7 = local_ec;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar19 = (this->CompositeTableDatas).AllocatorInstance.Data;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar9 = *(UObject **)(pFVar19 + (ulonglong)EVar1 * 8 + -8), pUVar9 != (UObject *)0x0))
        {
          UE::GC::MarkAsReachable(pUVar9);
        }
        (this->CurrentCompositeTableData).field0_0x0 =
             *(TObjectPtr<UDS_CompositeTableData>_u_0 *)(pFVar19 + (ulonglong)EVar1 * 8 + -8);
        if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// OnCloseDelayCallback @ 14bb722d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_WindowManager::OnCloseDelayCallback(UDS_WindowManager *this,int param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_WindowInfo *this_00;
  FWeakObjectPtr *this_01;
  uint local_res18 [2];
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_18 [2];
  
  local_res18[0] = param_2;
  GetWindowInfo(this,(int)&local_res20);
  pUVar3 = FWeakObjectPtr::Get(&local_res20);
  this_01 = &local_res20;
  if (pUVar3[2].field_0x1 != '\x01') {
    pUVar3 = FWeakObjectPtr::Get(this_01);
    if (pUVar3[2].field_0x1 != '\x02') goto LAB_14bb7237a;
    this_00 = (UDS_WindowInfo *)FWeakObjectPtr::Get(&local_res20);
    UDS_WindowInfo::GetMultipleWindowInfo(this_00,(uint *)local_18);
    bVar2 = FWeakObjectPtr::IsValid(local_18);
    if (!bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<353616502999485038>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_WindowManager.cpp"
                         ,0xa6e,"false");
      if (!bVar2) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this_01 = local_18;
  }
  pUVar3 = FWeakObjectPtr::Get(this_01);
  if (pUVar3[8].field_0x21 != '\0') {
    return;
  }
LAB_14bb7237a:
  ExecuteClose(this,(TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr>)local_res20,local_res18);
  return;
}

// OnInputActionCanceled @ 14bb738a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_WindowManager::OnInputActionCanceled
          (UDS_WindowManager *this,EDS_KeyActionType *param_1,FDS_InputEventParams *param_2)

{
  undefined1 *puVar1;
  FDS_EventDelegate<bool_const_&,EDS_KeyActionType_const_&,EDS_WindowWidget_const_&> *this_00;
  EDS_KeyActionType EVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  EDS_KeyActionType *pEVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  UDS_LogManager *pUVar11;
  UDS_EventManager *this_01;
  UDS_InputEvent *pUVar12;
  UObject *pUVar13;
  ulonglong uVar14;
  uint uVar15;
  FWeakObjectPtr *pFVar16;
  longlong lVar17;
  ForAnyElementType this_02;
  undefined1 auStackY_338 [32];
  undefined1 local_2f8;
  undefined1 local_2f7 [7];
  FWeakObjectPtr *local_2f0;
  uint local_2e8;
  FWeakObjectPtr *local_2e0;
  TArray<TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_2d8;
  EDS_KeyActionType *local_2c8;
  FString local_2c0;
  FString local_2b0;
  FDestructionSentinel local_2a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_338;
  EVar2 = *param_1;
  local_2c8 = param_1;
  ::FString::FString(&local_2b0,L"EDS_KeyActionType");
  DS_Util::GetEnumToString(&local_2c0,&local_2b0,(longlong)(int)EVar2);
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  pUVar11 = UDS_LogManager::GetInst();
  if (pUVar11 != (UDS_LogManager *)0x0) {
    pUVar11 = UDS_LogManager::GetInst();
    local_288._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_288,"UDS_WindowManager::OnInputActionCanceled",0x28,Yes);
    UDS_LogManager::PrintLog(pUVar11,1,Display,local_288.Ptr,0x83b,L"Canceled %s");
    if ((void *)local_288._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_288._padding_);
    }
  }
  GetCurrentInputEventWindowInfos(this,&local_2d8);
  local_2e8 = local_2d8.ArrayNum;
  uVar14 = (ulonglong)(int)local_2e8;
  local_2f0 = (FWeakObjectPtr *)(local_2d8.AllocatorInstance.Data + uVar14 * 8);
  pFVar16 = local_2f0;
  this_02.Data = local_2d8.AllocatorInstance.Data;
  do {
    while( true ) {
      local_2e0 = (FWeakObjectPtr *)this_02.Data;
      if (local_2d8.ArrayNum != (int)uVar14) {
        local_2f8 = 0;
        `TCheckedPointerIterator<TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_2f8);
      }
      if ((FWeakObjectPtr *)this_02.Data == pFVar16) {
        if ((FWeakObjectPtr *)local_2d8.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
          FMemory::Free(local_2d8.AllocatorInstance.Data);
        }
        if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
        }
        return;
      }
      bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_02.Data);
      if ((bVar7) && (this_01 = UDS_EventManager::GetInst(), this_01 != (UDS_EventManager *)0x0))
      break;
LAB_14bb73bc4:
      this_02.Data = this_02.Data + 8;
      uVar14 = (ulonglong)local_2e8;
    }
    if ((char)this_01->_padding_ != '\x01') {
      pUVar12 = UDS_EventManager::GetEventInternal<UDS_InputEvent>(this_01);
      if (pUVar12 != (UDS_InputEvent *)0x0) {
        this_00 = &pUVar12->OnInputUIEvent;
        pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.Data);
        local_2f7[0] = 0;
        bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
        if (bVar7) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                     (FWriteAccessScope *)&local_2a0);
          pEVar6 = local_2c8;
          puVar1 = &(pUVar12->OnInputUIEvent).Delegate.field_0x1c;
          *(int *)puVar1 = *(int *)puVar1 + 1;
          bVar7 = false;
          uVar15 = *(int *)&(pUVar12->OnInputUIEvent).Delegate.field_0x10 - 1;
          if (-1 < (int)uVar15) {
            lVar17 = (longlong)(int)uVar15 << 4;
            do {
              uVar10 = 0;
              if ((int)uVar15 < *(int *)&(pUVar12->OnInputUIEvent).Delegate.field_0x10) {
                uVar10 = ~uVar15 >> 0x1f;
              }
              if ((uVar10 == 0) &&
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
              lVar3 = *(longlong *)&(pUVar12->OnInputUIEvent).Delegate.field_0x8;
              if (((*(int *)(lVar17 + 8 + lVar3) == 0) ||
                  (plVar4 = *(longlong **)(lVar17 + lVar3), plVar4 == (longlong *)0x0)) ||
                 (cVar9 = (**(code **)(*plVar4 + 0x68))(plVar4,local_2f7,pEVar6,pUVar13 + 1),
                 cVar9 == '\0')) {
                bVar7 = true;
              }
              lVar17 = lVar17 + -0x10;
              uVar15 = uVar15 - 1;
              this_02.Data = (FScriptContainerElement *)local_2e0;
            } while (-1 < (int)uVar15);
          }
          puVar1 = &(pUVar12->OnInputUIEvent).Delegate.field_0x1c;
          *(int *)puVar1 = *(int *)puVar1 + -1;
          if (bVar7) {
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
          }
          pFVar16 = local_2f0;
          if (local_2a0.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2a0.Accessor,&local_2a0);
            pFVar16 = local_2f0;
          }
        }
      }
      goto LAB_14bb73bc4;
    }
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 == (UDS_LogManager *)0x0) goto LAB_14bb73bc4;
    pUVar11 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_EventManager::GetEvent",0x1a,Yes);
    UDS_LogManager::PrintLog
              (pUVar11,1,Warning,local_168.Ptr,0x31,
               L"Cannot access event during UDS_EventManager destruction.");
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
    this_02.Data = this_02.Data + 8;
    uVar14 = (ulonglong)local_2e8;
    pFVar16 = local_2f0;
  } while( true );
}

// OnInputActionCompleted @ 14bb73c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_WindowManager::OnInputActionCompleted
          (UDS_WindowManager *this,EDS_KeyActionType *param_1,FDS_InputEventParams *param_2)

{
  undefined1 *puVar1;
  FDS_EventDelegate<bool_const_&,EDS_KeyActionType_const_&,EDS_WindowWidget_const_&> *this_00;
  EDS_KeyActionType EVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  EDS_KeyActionType *pEVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  UDS_LogManager *pUVar11;
  ADS_PlayerController *this_01;
  UObject *pUVar12;
  UDS_EventManager *this_02;
  UDS_InputEvent *pUVar13;
  ulonglong uVar14;
  uint uVar15;
  FWeakObjectPtr *pFVar16;
  longlong lVar17;
  ForAnyElementType this_03;
  undefined1 auStackY_348 [32];
  undefined1 local_308;
  undefined1 local_307 [7];
  FWeakObjectPtr *local_300;
  EDS_KeyActionType *local_2f8;
  uint local_2f0;
  FWeakObjectPtr local_2e8;
  FWeakObjectPtr *local_2e0;
  TArray<TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_2d8;
  FDS_InputEventParams *local_2c8;
  FString local_2c0;
  FString local_2b0;
  FDestructionSentinel local_2a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_348;
  EVar2 = *param_1;
  local_2f8 = param_1;
  local_2c8 = param_2;
  ::FString::FString(&local_2b0,L"EDS_KeyActionType");
  DS_Util::GetEnumToString(&local_2c0,&local_2b0,(longlong)(int)EVar2);
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  pUVar11 = UDS_LogManager::GetInst();
  if (pUVar11 != (UDS_LogManager *)0x0) {
    pUVar11 = UDS_LogManager::GetInst();
    local_288._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_288,"UDS_WindowManager::OnInputActionCompleted",0x29,Yes);
    UDS_LogManager::PrintLog(pUVar11,1,Display,local_288.Ptr,0x822,L"Completed %s");
    param_1 = local_2f8;
    if ((void *)local_288._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_288._padding_);
      param_1 = local_2f8;
    }
  }
  GetCurrentInputEventWindowInfos(this,&local_2d8);
  local_2f0 = local_2d8.ArrayNum;
  uVar14 = (ulonglong)(int)local_2f0;
  pFVar16 = (FWeakObjectPtr *)(local_2d8.AllocatorInstance.Data + uVar14 * 8);
  this_03.Data = local_2d8.AllocatorInstance.Data;
  local_300 = pFVar16;
  do {
    local_2e0 = (FWeakObjectPtr *)this_03.Data;
    if (local_2d8.ArrayNum != (int)uVar14) {
      local_308 = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(&local_308);
    }
    if ((FWeakObjectPtr *)this_03.Data == pFVar16) {
      if ((FWeakObjectPtr *)local_2d8.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
        FMemory::Free(local_2d8.AllocatorInstance.Data);
      }
      if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
      }
      return;
    }
    bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_03.Data);
    if (bVar7) {
      ADS_PlayerController::GetPlayerController();
      bVar7 = FWeakObjectPtr::IsValid(&local_2e8);
      if (bVar7) {
        this_01 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_2e8);
        bVar7 = ADS_PlayerController::IsLongPressKey(this_01,*param_1);
        if (!bVar7) {
          pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_03.Data);
          TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType_const_&,FDS_InputEventParams_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&pUVar12[5].field_0x18,param_1,param_2);
        }
      }
      this_02 = UDS_EventManager::GetInst();
      if (this_02 != (UDS_EventManager *)0x0) {
        if ((char)this_02->_padding_ == '\x01') {
          pUVar11 = UDS_LogManager::GetInst();
          if (pUVar11 != (UDS_LogManager *)0x0) {
            pUVar11 = UDS_LogManager::GetInst();
            local_168._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_168,"UDS_EventManager::GetEvent",0x1a,Yes);
            UDS_LogManager::PrintLog
                      (pUVar11,1,Warning,local_168.Ptr,0x31,
                       L"Cannot access event during UDS_EventManager destruction.");
            pFVar16 = local_300;
            if ((void *)local_168._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_168._padding_);
              pFVar16 = local_300;
            }
          }
        }
        else {
          pUVar13 = UDS_EventManager::GetEventInternal<UDS_InputEvent>(this_02);
          if (pUVar13 != (UDS_InputEvent *)0x0) {
            this_00 = &pUVar13->OnInputUIEvent;
            pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_03.Data);
            local_307[0] = 0;
            bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
            if (bVar7) {
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                         (FWriteAccessScope *)&local_2a0);
              pEVar6 = local_2f8;
              puVar1 = &(pUVar13->OnInputUIEvent).Delegate.field_0x1c;
              *(int *)puVar1 = *(int *)puVar1 + 1;
              bVar7 = false;
              uVar15 = *(int *)&(pUVar13->OnInputUIEvent).Delegate.field_0x10 - 1;
              if (-1 < (int)uVar15) {
                lVar17 = (longlong)(int)uVar15 << 4;
                do {
                  uVar10 = 0;
                  if ((int)uVar15 < *(int *)&(pUVar13->OnInputUIEvent).Delegate.field_0x10) {
                    uVar10 = ~uVar15 >> 0x1f;
                  }
                  if ((uVar10 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  lVar3 = *(longlong *)&(pUVar13->OnInputUIEvent).Delegate.field_0x8;
                  if (((*(int *)(lVar17 + 8 + lVar3) == 0) ||
                      (plVar4 = *(longlong **)(lVar17 + lVar3), plVar4 == (longlong *)0x0)) ||
                     (cVar9 = (**(code **)(*plVar4 + 0x68))(plVar4,local_307,pEVar6,pUVar12 + 1),
                     cVar9 == '\0')) {
                    bVar7 = true;
                  }
                  lVar17 = lVar17 + -0x10;
                  uVar15 = uVar15 - 1;
                  this_03.Data = (FScriptContainerElement *)local_2e0;
                  param_2 = local_2c8;
                } while (-1 < (int)uVar15);
              }
              puVar1 = &(pUVar13->OnInputUIEvent).Delegate.field_0x1c;
              *(int *)puVar1 = *(int *)puVar1 + -1;
              if (bVar7) {
                TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
              }
              pFVar16 = local_300;
              if (local_2a0.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2a0.Accessor,&local_2a0);
                pFVar16 = local_300;
              }
            }
          }
        }
      }
    }
    this_03.Data = this_03.Data + 8;
    uVar14 = (ulonglong)local_2f0;
    param_1 = local_2f8;
  } while( true );
}

// OnInputActionStarted @ 14bb74000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_WindowManager::OnInputActionStarted
          (UDS_WindowManager *this,EDS_KeyActionType *param_1,FDS_InputEventParams *param_2)

{
  undefined1 *puVar1;
  FDS_EventDelegate<bool_const_&,EDS_KeyActionType_const_&,EDS_WindowWidget_const_&> *this_00;
  EDS_KeyActionType EVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  EDS_KeyActionType *pEVar6;
  FWeakObjectPtr *pFVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  UDS_LogManager *pUVar12;
  ADS_PlayerController *this_01;
  UObject *pUVar13;
  UDS_EventManager *this_02;
  UDS_InputEvent *pUVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  ForAnyElementType this_03;
  undefined1 auStackY_468 [32];
  undefined1 local_428;
  undefined1 local_427 [3];
  uint local_424;
  FWeakObjectPtr local_420;
  EDS_KeyActionType *local_418;
  FDS_InputEventParams *local_410;
  FWeakObjectPtr *local_408;
  TArray<TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_400;
  FWeakObjectPtr *local_3f0;
  FString local_3e8;
  FString local_3d8;
  FDestructionSentinel local_3c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_468;
  EVar2 = *param_1;
  local_418 = param_1;
  local_410 = param_2;
  ::FString::FString(&local_3d8,L"EDS_KeyActionType");
  DS_Util::GetEnumToString(&local_3e8,&local_3d8,(longlong)(int)EVar2);
  if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
  }
  pUVar12 = UDS_LogManager::GetInst();
  if (pUVar12 != (UDS_LogManager *)0x0) {
    pUVar12 = UDS_LogManager::GetInst();
    local_3a8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_3a8,"UDS_WindowManager::OnInputActionStarted",0x27,Yes);
    UDS_LogManager::PrintLog(pUVar12,1,Display,local_3a8.Ptr,0x7bf,L"Started %s");
    if ((void *)local_3a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_3a8._padding_);
    }
  }
  GetCurrentInputEventWindowInfos(this,&local_400);
  local_424 = local_400.ArrayNum;
  uVar15 = (ulonglong)(int)local_424;
  local_3f0 = (FWeakObjectPtr *)(local_400.AllocatorInstance.Data + uVar15 * 8);
  this_03.Data = local_400.AllocatorInstance.Data;
  do {
    pFVar7 = local_3f0;
    local_408 = (FWeakObjectPtr *)this_03.Data;
    if (local_400.ArrayNum != (int)uVar15) {
      local_428 = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(&local_428);
    }
    if ((FWeakObjectPtr *)this_03.Data == pFVar7) {
      if ((FWeakObjectPtr *)local_400.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
        FMemory::Free(local_400.AllocatorInstance.Data);
      }
      if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
      }
      return;
    }
    bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_03.Data);
    if (bVar8) {
      pUVar12 = UDS_LogManager::GetInst();
      if (pUVar12 != (UDS_LogManager *)0x0) {
        pUVar12 = UDS_LogManager::GetInst();
        FWeakObjectPtr::Get((FWeakObjectPtr *)this_03.Data);
        local_288._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_288,"UDS_WindowManager::OnInputActionStarted",0x27,Yes);
        UDS_LogManager::PrintLog
                  (pUVar12,1,Display,local_288.Ptr,0x7c6,L"Started CurrentWindowInfo %d");
        if ((void *)local_288._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_288._padding_);
        }
      }
      ADS_PlayerController::GetPlayerController();
      bVar8 = FWeakObjectPtr::IsValid(&local_420);
      if (bVar8) {
        this_01 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_420);
        bVar8 = ADS_PlayerController::IsLongPressKey(this_01,*param_1);
        if (!bVar8) {
          pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_03.Data);
          TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType_const_&,FDS_InputEventParams_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&pUVar13[5].field_0x18,param_1,param_2);
        }
      }
      this_02 = UDS_EventManager::GetInst();
      if (this_02 != (UDS_EventManager *)0x0) {
        if ((char)this_02->_padding_ == '\x01') {
          pUVar12 = UDS_LogManager::GetInst();
          if (pUVar12 != (UDS_LogManager *)0x0) {
            pUVar12 = UDS_LogManager::GetInst();
            local_168._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_168,"UDS_EventManager::GetEvent",0x1a,Yes);
            UDS_LogManager::PrintLog
                      (pUVar12,1,Warning,local_168.Ptr,0x31,
                       L"Cannot access event during UDS_EventManager destruction.");
            if ((void *)local_168._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_168._padding_);
            }
          }
        }
        else {
          pUVar14 = UDS_EventManager::GetEventInternal<UDS_InputEvent>(this_02);
          if (pUVar14 != (UDS_InputEvent *)0x0) {
            this_00 = &pUVar14->OnInputUIEvent;
            pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_03.Data);
            local_427[0] = 1;
            bVar8 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
            if (bVar8) {
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                         (FWriteAccessScope *)&local_3c8);
              pEVar6 = local_418;
              puVar1 = &(pUVar14->OnInputUIEvent).Delegate.field_0x1c;
              *(int *)puVar1 = *(int *)puVar1 + 1;
              bVar8 = false;
              uVar16 = *(int *)&(pUVar14->OnInputUIEvent).Delegate.field_0x10 - 1;
              if (-1 < (int)uVar16) {
                lVar17 = (longlong)(int)uVar16 << 4;
                bVar8 = false;
                do {
                  uVar11 = 0;
                  if ((int)uVar16 < *(int *)&(pUVar14->OnInputUIEvent).Delegate.field_0x10) {
                    uVar11 = ~uVar16 >> 0x1f;
                  }
                  if ((uVar11 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  lVar3 = *(longlong *)&(pUVar14->OnInputUIEvent).Delegate.field_0x8;
                  if (((*(int *)(lVar17 + 8 + lVar3) == 0) ||
                      (plVar4 = *(longlong **)(lVar17 + lVar3), plVar4 == (longlong *)0x0)) ||
                     (cVar10 = (**(code **)(*plVar4 + 0x68))(plVar4,local_427,pEVar6,pUVar13 + 1),
                     cVar10 == '\0')) {
                    bVar8 = true;
                  }
                  lVar17 = lVar17 + -0x10;
                  uVar16 = uVar16 - 1;
                  this_03.Data = (FScriptContainerElement *)local_408;
                  param_1 = local_418;
                } while (-1 < (int)uVar16);
              }
              puVar1 = &(pUVar14->OnInputUIEvent).Delegate.field_0x1c;
              *(int *)puVar1 = *(int *)puVar1 + -1;
              if (bVar8) {
                TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
              }
              param_2 = local_410;
              if (local_3c8.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3c8.Accessor,&local_3c8);
                param_2 = local_410;
              }
            }
          }
        }
      }
    }
    this_03.Data = this_03.Data + 8;
    uVar15 = (ulonglong)local_424;
  } while( true );
}

// OnInputActionTriggered @ 14bb74460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_WindowManager::OnInputActionTriggered
          (UDS_WindowManager *this,EDS_KeyActionType *param_1,FDS_InputEventParams *param_2)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  EDS_GameStateType EVar4;
  int iVar5;
  int iVar6;
  UDS_LogManager *pUVar7;
  ADS_PlayerController *pAVar8;
  ADS_GameMode *pAVar9;
  UObject *pUVar10;
  UDS_W_WindowFrame *pUVar11;
  UClass *pUVar12;
  ulonglong uVar13;
  FWeakObjectPtr FVar14;
  ForAnyElementType this_00;
  byte bVar15;
  FWeakObjectPtr this_01;
  FWeakObjectPtr *pFVar16;
  undefined1 auStackY_1e8 [32];
  uint uVar17;
  wchar_t *pwVar18;
  undefined1 local_1b8 [8];
  FWeakObjectPtr local_1b0;
  FWeakObjectPtr local_1a8;
  UObject *local_1a0;
  FDS_InputEventParams *local_198;
  FWeakObjectPtr local_190;
  FWeakObjectPtr local_188;
  TArray<TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_198 = param_2;
  if (*param_1 != IA_UI_Escape) goto LAB_14bb7484e;
  ADS_GameMode::GetInst();
  bVar3 = FWeakObjectPtr::IsValid(&local_188);
  if (bVar3) {
    ADS_PlayerController::GetPlayerController();
    bVar3 = FWeakObjectPtr::IsValid(&local_190);
    if (bVar3) {
      pAVar8 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_190);
      bVar3 = ADS_PlayerController::IsGameOptionKeyChanging(pAVar8);
      if (bVar3) {
        return;
      }
      pAVar9 = (ADS_GameMode *)FWeakObjectPtr::Get(&local_188);
      EVar4 = ADS_GameMode::GetCurGameStateType(pAVar9);
      if (EVar4 != LoginState) {
        pAVar9 = (ADS_GameMode *)FWeakObjectPtr::Get(&local_188);
        EVar4 = ADS_GameMode::GetCurGameStateType(pAVar9);
        if (EVar4 == IngameState) {
          this_01 = (FWeakObjectPtr)(this->OpenedWindowInfoList).AllocatorInstance.Data;
          iVar2 = (this->OpenedWindowInfoList).ArrayNum;
          local_1b0.ObjectIndex = 0;
          local_1b0.ObjectSerialNumber = 0;
          FVar14 = (FWeakObjectPtr)((longlong)this_01 + (longlong)iVar2 * 8);
          bVar15 = 0;
          local_1a8 = FVar14;
          while( true ) {
            if ((this->OpenedWindowInfoList).ArrayNum != iVar2) {
              `TCheckedPointerIterator<TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_1b8);
            }
            if (this_01 == FVar14) break;
            bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_01);
            if (bVar3) {
              pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
              bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pUVar10[5].field_0x8);
              if ((!bVar3) ||
                 (pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01),
                 pUVar10[8].field_0x20 == '\0')) goto LAB_14bb74721;
              pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
              bVar1 = *(byte *)(pUVar10 + 2);
              if (bVar1 == 0) goto LAB_14bb74721;
              if (bVar1 <= bVar15) {
                if ((bVar15 == bVar1) && (bVar3 = FWeakObjectPtr::IsValid(&local_1b0), bVar3)) {
                  pUVar10 = FWeakObjectPtr::Get(&local_1b0);
                  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pUVar10[5].field_0x8);
                  if (bVar3) {
                    pUVar10 = FWeakObjectPtr::Get(&local_1b0);
                    pUVar11 = (UDS_W_WindowFrame *)
                              FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar10[5].field_0x8);
                    iVar5 = UDS_W_WindowFrame::GetZOrder(pUVar11);
                    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
                    pUVar11 = (UDS_W_WindowFrame *)
                              FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar10[5].field_0x8);
                    iVar6 = UDS_W_WindowFrame::GetZOrder(pUVar11);
                    FVar14 = local_1a8;
                    if (iVar5 < iVar6) {
                      local_1b0 = *(FWeakObjectPtr *)this_01;
                    }
                  }
                }
                goto LAB_14bb74721;
              }
              local_1b0 = *(FWeakObjectPtr *)this_01;
              this_01 = (FWeakObjectPtr)((longlong)this_01 + 8);
              bVar15 = bVar1;
            }
            else {
LAB_14bb74721:
              this_01 = (FWeakObjectPtr)((longlong)this_01 + 8);
            }
          }
          bVar3 = FWeakObjectPtr::IsValid(&local_1b0);
          param_2 = local_198;
          if (bVar3) {
            pUVar10 = FWeakObjectPtr::Get(&local_1b0);
            bVar3 = UObjectBaseUtility::IsA<UDS_MultipleWindowInfo>((UObjectBaseUtility *)pUVar10);
            if (bVar3) {
              pUVar10 = FWeakObjectPtr::Get(&local_1b0);
              if (pUVar10 == (UObject *)0x0) {
LAB_14bb74793:
                pUVar10 = (UObject *)0x0;
              }
              else {
                pUVar12 = Z_Construct_UClass_UDS_MultipleWindowInfo_NoRegister();
                iVar2 = (int)pUVar12->_padding_;
                if ((*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar2) ||
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar2 * 8)
                    != &pUVar12->_padding_)) goto LAB_14bb74793;
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar10 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUVar10);
              }
              local_1a8.ObjectIndex = 0;
              local_1a8.ObjectSerialNumber = 0;
              local_1a0 = pUVar10;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar10 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUVar10);
              }
              FWeakObjectPtr::operator=(&local_1a8,(FObjectPtr)&local_1a0);
              bVar3 = FWeakObjectPtr::IsValid(&local_1a8);
              param_2 = local_198;
              if (!bVar3) goto LAB_14bb7484e;
              local_1a0 = (UObject *)((ulonglong)local_1a0 & 0xffffffff00000000);
              pUVar10 = FWeakObjectPtr::Get(&local_1a8);
              pFVar16 = (FWeakObjectPtr *)&pUVar10[9].field_0x20;
              pUVar10 = FWeakObjectPtr::Get(&local_1b0);
            }
            else {
              pUVar10 = FWeakObjectPtr::Get(&local_1b0);
              param_2 = local_198;
              if (pUVar10[8].field_0x23 != '\0') goto LAB_14bb7484e;
              local_1a0 = (UObject *)((ulonglong)local_1a0 & 0xffffffff00000000);
              local_1a8 = (FWeakObjectPtr)((ulonglong)local_1a8 & 0xffffffff00000000);
              pUVar10 = FWeakObjectPtr::Get(&local_1b0);
              pFVar16 = &local_1a8;
            }
            CloseWindow(this,*(int *)(pUVar10 + 1),(uint *)pFVar16,(float *)&local_1a0);
            param_2 = local_198;
          }
        }
      }
LAB_14bb7484e:
      GetCurrentInputEventWindowInfos(this,&local_180);
      iVar2 = local_180.ArrayNum;
      uVar13 = (ulonglong)local_180.ArrayNum;
      pFVar16 = (FWeakObjectPtr *)(local_180.AllocatorInstance.Data + uVar13 * 8);
      this_00.Data = local_180.AllocatorInstance.Data;
      while( true ) {
        if ((uint)uVar13 != iVar2) {
          `TCheckedPointerIterator<TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_1b8);
        }
        if ((FWeakObjectPtr *)this_00.Data == pFVar16) break;
        bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00.Data);
        if (bVar3) {
          ADS_PlayerController::GetPlayerController();
          bVar3 = FWeakObjectPtr::IsValid(&local_190);
          if (bVar3) {
            pAVar8 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_190);
            bVar3 = ADS_PlayerController::IsLongPressKey(pAVar8,*param_1);
            if (!bVar3) {
              pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.Data);
              TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType_const_&,FDS_InputEventParams_const_&),FDefaultDelegateUserPolicy>
              ::Broadcast(&pUVar10[5].field_0x18,param_1,param_2);
            }
          }
        }
        uVar13 = (ulonglong)(uint)local_180.ArrayNum;
        this_00.Data = this_00.Data + 8;
      }
      goto LAB_14bb748ea;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_WindowManager::OnInputActionTriggered",0x29,Yes);
    pwVar18 = L"ADS_PlayerController is invalid.";
    uVar17 = 0x7e5;
  }
  else {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_WindowManager::OnInputActionTriggered",0x29,Yes);
    pwVar18 = L"gameMode is invalid.";
    uVar17 = 0x7de;
  }
  UDS_LogManager::PrintLog(pUVar7,1,Warning,local_168.Ptr,uVar17,pwVar18);
  local_180.AllocatorInstance.Data = (FScriptContainerElement *)local_168._padding_;
LAB_14bb748ea:
  if ((FWeakObjectPtr *)local_180.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
    FMemory::Free(local_180.AllocatorInstance.Data);
  }
  return;
}

// OnViewportResized @ 14bb790d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_WindowManager::OnViewportResized(UDS_WindowManager *this,FViewport *param_1,uint param_2)

{
  undefined1 *puVar1;
  UGameViewportClient *this_00;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  UEngine *pUVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  UClass *pUVar10;
  FSceneViewport *pFVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 local_res10 [8];
  FDestructionSentinel local_38;
  
  pUVar5 = GEngine;
  if ((param_1 != (FViewport *)0x0) &&
     ((GEngine->GameViewport).field0_0x0.DebugPtr != (UGameViewportClient *)0x0)) {
    pUVar10 = Z_Construct_UClass_UDS_CommonGameViewportClient_NoRegister();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&pUVar5->GameViewport,pUVar10);
    if ((bVar6) &&
       (((this_00 = (pUVar5->GameViewport).field0_0x0.DebugPtr,
         this_00 != (UGameViewportClient *)0x0 &&
         (pFVar11 = UGameViewportClient::GetGameViewport(this_00), pFVar11 != (FSceneViewport *)0x0)
         ) && (param_1 == (FViewport *)&pFVar11->_padding_)))) {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,local_res10);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->GameViewportResizedDelegate,(FWriteAccessScope *)&local_38);
      puVar1 = &(this->GameViewportResizedDelegate).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar6 = false;
      uVar12 = *(int *)&(this->GameViewportResizedDelegate).field_0x10 - 1;
      if (-1 < (int)uVar12) {
        lVar13 = (longlong)(int)uVar12 << 4;
        bVar6 = false;
        do {
          uVar9 = 0;
          if ((int)uVar12 < *(int *)&(this->GameViewportResizedDelegate).field_0x10) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar2 = *(longlong *)&(this->GameViewportResizedDelegate).field_0x8;
          if (((*(int *)(lVar2 + 8 + lVar13) == 0) ||
              (plVar3 = *(longlong **)(lVar2 + lVar13), plVar3 == (longlong *)0x0)) ||
             (cVar8 = (**(code **)(*plVar3 + 0x68))(), cVar8 == '\0')) {
            bVar6 = true;
          }
          lVar13 = lVar13 + -0x10;
          uVar12 = uVar12 - 1;
        } while (-1 < (int)uVar12);
      }
      puVar1 = &(this->GameViewportResizedDelegate).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar6) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &this->GameViewportResizedDelegate,false);
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
    }
  }
  return;
}

// OnWindowOpenCloseDelegate @ 14bb79270

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_WindowManager::OnWindowOpenCloseDelegate
          (UDS_WindowManager *this,EDS_WindowWidget param_1,bool *param_2)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  FWeakObjectPtr *this_00;
  ForAnyElementType this_01;
  uint uVar8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  float local_68;
  uint local_64;
  FWeakObjectPtr local_60;
  FWeakObjectPtr local_58;
  UObject *local_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  
  if (*param_2 == false) {
    GetWindowInfo(this,(int)&local_58);
    bVar4 = FWeakObjectPtr::IsValid(&local_58);
    if (bVar4) {
      pUVar6 = FWeakObjectPtr::Get(&local_58);
      if (pUVar6[3].field_0x1 == '\x01') {
        this_00 = (FWeakObjectPtr *)(this->OpenedWindowInfoList).AllocatorInstance.Data;
        iVar2 = (this->OpenedWindowInfoList).ArrayNum;
        pFVar1 = this_00 + iVar2;
        local_48.Data = (FScriptContainerElement *)0x0;
        local_40 = 0;
        while( true ) {
          if ((this->OpenedWindowInfoList).ArrayNum != iVar2) {
            `TCheckedPointerIterator<TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_res18);
          }
          if (this_00 == pFVar1) break;
          bVar4 = FWeakObjectPtr::IsValid(this_00);
          if ((bVar4) && (pUVar6 = FWeakObjectPtr::Get(this_00), pUVar6[3].field_0x1 == '\x02')) {
            iVar5 = (int)local_40;
            if ((int)local_40 == local_40._4_4_) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,&local_48,(int *)((longlong)&local_40 + 4));
            }
            local_40 = CONCAT44(local_40._4_4_,iVar5 + 1);
            *(FWeakObjectPtr *)(local_48.Data + (longlong)iVar5 * 8) = *this_00;
          }
          this_00 = this_00 + 1;
        }
        iVar2 = (int)local_40;
        pFVar1 = (FWeakObjectPtr *)(local_48.Data + (longlong)(int)local_40 * 8);
        this_01.Data = local_48.Data;
        do {
          while( true ) {
            if ((int)local_40 != iVar2) {
              `TCheckedPointerIterator<TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_res20);
            }
            if ((FWeakObjectPtr *)this_01.Data == pFVar1) {
              if ((FWeakObjectPtr *)local_48.Data == (FWeakObjectPtr *)0x0) {
                return;
              }
              FMemory::Free(local_48.Data);
              return;
            }
            bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_01.Data);
            if (bVar4) break;
LAB_14bb794c0:
            this_01.Data = this_01.Data + 8;
          }
          pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.Data);
          if (pUVar6[8].field_0x24 == '\0') {
            uVar8 = 0;
            pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.Data);
            if (pUVar6[2].field_0x1 == '\x02') {
              pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.Data);
              if (pUVar6 == (UObject *)0x0) {
LAB_14bb7943a:
                pUVar6 = (UObject *)0x0;
              }
              else {
                pUVar7 = Z_Construct_UClass_UDS_MultipleWindowInfo_NoRegister();
                iVar5 = (int)pUVar7->_padding_;
                if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar5) ||
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar5 * 8)
                    != &pUVar7->_padding_)) goto LAB_14bb7943a;
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)
                 ) {
                UE::GC::MarkAsReachable(pUVar6);
              }
              local_60.ObjectIndex = 0;
              local_60.ObjectSerialNumber = 0;
              local_50 = pUVar6;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)
                 ) {
                UE::GC::MarkAsReachable(pUVar6);
              }
              FWeakObjectPtr::operator=(&local_60,(FObjectPtr)&local_50);
              bVar4 = FWeakObjectPtr::IsValid(&local_60);
              if (bVar4) {
                pUVar6 = FWeakObjectPtr::Get(&local_60);
                uVar8 = *(uint *)&pUVar6[9].field_0x20;
              }
            }
            local_68 = 0.0;
            local_64 = uVar8;
            pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.Data);
            CloseWindow(this,*(int *)(pUVar6 + 1),&local_64,&local_68);
            goto LAB_14bb794c0;
          }
          pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.Data);
          this_01.Data = this_01.Data + 8;
          pUVar6[8].field_0x25 = 1;
        } while( true );
      }
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<353616502999484972>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_WindowManager.cpp"
                         ,0xa2c,"false");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  return;
}

// OpenCommonCenterLoading @ 14bb795e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UDS_WindowManager::OpenCommonCenterLoading
          (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *param_1)

{
  bool bVar1;
  char cVar2;
  UDS_WindowManager *this;
  UObject *pUVar3;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar4;
  FWeakObjectPtr local_res10 [3];
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> local_28;
  
  this = GetInst();
  if (this == (UDS_WindowManager *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
    if (*(void **)&param_1->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&param_1->field_0x8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)param_1);
    return false;
  }
  GetWindowInfo(this,(int)local_res10);
  bVar1 = TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (!bVar1) {
    pUVar3 = FWeakObjectPtr::Get(local_res10);
    cVar2 = (**(code **)(*(longlong *)pUVar3 + 0x2c8))(pUVar3);
    if (cVar2 == '\0') {
      pTVar4 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
               TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                         (&local_28,param_1);
      bVar1 = OpenWindow(this,CommonCenterLoading,pTVar4);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
      if (*(void **)&param_1->field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&param_1->field_0x8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)param_1);
      return bVar1;
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return true;
}

// OpenWindow @ 14bb7abf0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_WindowManager::OpenWindow
          (UDS_WindowManager *this,int param_1,
          TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *param_2)

{
  bool bVar1;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar2;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> local_28;
  
  pTVar2 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>(&local_28,param_2);
  bVar1 = OpenWindow(this,param_1,pTVar2);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return bVar1;
}

// OpenWindow @ 14bb7ac60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_WindowManager::OpenWindow
          (UDS_WindowManager *this,EDS_WindowWidget param_1,
          TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *param_2)

{
  longlong *plVar1;
  int iVar2;
  UObject *pUVar3;
  bool bVar4;
  char cVar5;
  UDS_CCSAIManager *pUVar6;
  UDS_LogManager *pUVar7;
  UClass *pUVar8;
  UEnum *this_00;
  UObject *pUVar9;
  UDS_UserWidget *pUVar10;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar11;
  longlong *plVar12;
  undefined1 auStackY_1e8 [32];
  uint uVar13;
  wchar_t *pwVar14;
  bool local_1a8 [8];
  FWeakObjectPtr local_1a0;
  FWeakObjectPtr local_198;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> local_190;
  TStringView<wchar_t> local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_178.DataPtr = (wchar_t *)this;
  bVar4 = UDS_GameInstance::GetIsCCSAIMode();
  if (((!bVar4) || (pUVar6 = UDS_CCSAIManager::GetInst(), pUVar6 == (UDS_CCSAIManager *)0x0)) ||
     (pUVar6 = UDS_CCSAIManager::GetInst(), pUVar6->bIsAIPlayMode != false)) {
    GetWindowInfo(this,(int)&local_1a0);
    bVar4 = FWeakObjectPtr::IsValid(&local_1a0);
    if (bVar4) {
      pUVar9 = FWeakObjectPtr::Get(&local_1a0);
      if (*(char *)(pUVar9 + 2) != '\0') {
        pUVar9 = FWeakObjectPtr::Get(&local_1a0);
        if (pUVar9[2].field_0x1 == '\x01') {
          pUVar9 = FWeakObjectPtr::Get(&local_1a0);
          pUVar9[8].field_0x25 = 0;
          pUVar9 = FWeakObjectPtr::Get(&local_1a0);
          pUVar9[8].field_0x21 = 1;
          pUVar9 = FWeakObjectPtr::Get(&local_1a0);
          cVar5 = (**(code **)(*(longlong *)pUVar9 + 0x2b8))(pUVar9,1);
          if (cVar5 != '\0') {
            pUVar9 = FWeakObjectPtr::Get(&local_1a0);
            pUVar10 = (UDS_UserWidget *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar9[5].field_0x10)
            ;
            TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::ExecuteIfBound
                      (param_2,pUVar10);
            local_1a8[0] = true;
            TMulticastDelegate<void___cdecl(enum_EDS_WindowWidget,bool_const_&),FDefaultDelegateUserPolicy>
            ::Broadcast(&this->WindowOpenCloseDelegate,param_1,local_1a8);
            TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
            ~TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>(param_2);
            return true;
          }
          pTVar11 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                    TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                              (&local_190,param_2);
        }
        else {
          pUVar9 = FWeakObjectPtr::Get(&local_1a0);
          if (pUVar9[2].field_0x1 != '\x02') {
            TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
            ~TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>(param_2);
            return false;
          }
          pUVar9 = FWeakObjectPtr::Get(&local_1a0);
          plVar12 = *(longlong **)(pUVar9 + 10);
          iVar2 = *(int *)&pUVar9[10].field_0x8;
          plVar1 = plVar12 + iVar2;
          while( true ) {
            if (*(int *)&pUVar9[10].field_0x8 != iVar2) {
              `TCheckedPointerIterator<TObjectPtr<UDS_MultipleWindowInfo>,int,0>::operator!='::__l2
              ::<lambda_1>::operator()(local_1a8);
            }
            if (plVar12 == plVar1) {
              local_198.ObjectIndex = 0;
              local_198.ObjectSerialNumber = 0;
              local_190._0_8_ = (UObject *)0x0;
              goto LAB_14bb7b058;
            }
            if (((*plVar12 != 0) &&
                (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*plVar12 + 0xd0)), bVar4)) &&
               (pUVar3 = (UObject *)*plVar12, pUVar3[8].field_0x21 == '\0')) break;
            plVar12 = plVar12 + 1;
          }
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (pUVar3 != (UObject *)0x0) {
              UE::GC::MarkAsReachable(pUVar3);
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar3);
            }
          }
          local_198.ObjectIndex = 0;
          local_198.ObjectSerialNumber = 0;
          local_190._0_8_ = pUVar3;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar3);
          }
LAB_14bb7b058:
          FWeakObjectPtr::operator=(&local_198,(FObjectPtr)&local_190);
          bVar4 = TWeakObjectPtr<UDS_MultipleWindowInfo,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_MultipleWindowInfo,FWeakObjectPtr> *)&local_198,
                             (void *)0x0);
          if (!bVar4) {
            pUVar9 = FWeakObjectPtr::Get(&local_198);
            cVar5 = (**(code **)(*(longlong *)pUVar9 + 0x2b8))(pUVar9,1);
            if (cVar5 != '\0') {
              pUVar9 = FWeakObjectPtr::Get(&local_198);
              pUVar10 = (UDS_UserWidget *)
                        FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar9[5].field_0x10);
              TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::ExecuteIfBound
                        (param_2,pUVar10);
              local_1a8[0] = true;
              TMulticastDelegate<void___cdecl(enum_EDS_WindowWidget,bool_const_&),FDefaultDelegateUserPolicy>
              ::Broadcast((TMulticastDelegate<void___cdecl(EDS_WindowWidget,bool_const_&),FDefaultDelegateUserPolicy>
                           *)((longlong)local_178.DataPtr + 0x1d0),param_1,local_1a8);
              TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
              ~TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>(param_2);
              return true;
            }
          }
          pTVar11 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                    TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                              (&local_190,param_2);
          this = (UDS_WindowManager *)local_178.DataPtr;
        }
        bVar4 = OpenWindowAsyncLoad(this,(TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr>)local_1a0,
                                    pTVar11);
        TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
        ~TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>(param_2);
        return bVar4;
      }
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 == (UDS_LogManager *)0x0) goto LAB_14bb7ae70;
      pUVar7 = UDS_LogManager::GetInst();
      GetWindowIDToString((FString *)&local_190,param_1);
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_WindowManager::OpenWindow",0x1d,Yes);
      pwVar14 = L"WindowLayerGroupType is None. %s(%d)";
      uVar13 = 0x52e;
    }
    else {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 == (UDS_LogManager *)0x0) goto LAB_14bb7ae70;
      pUVar7 = UDS_LogManager::GetInst();
      local_178.Size = 0x22;
      local_178.DataPtr = L"/Script/ProjectDS.EDS_WindowWidget";
      pUVar8 = Z_Construct_UClass_UEnum_NoRegister();
      this_00 = (UEnum *)StaticFindObject(pUVar8,(UObject *)0x0,&local_178,None);
      if (this_00 == (UEnum *)0x0) {
        ::FString::FString((FString *)&local_190,L"Invalid WindowID");
      }
      else {
        UEnum::GetNameStringByValue(this_00,(FString *)&local_190,(longlong)(int)param_1);
      }
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_WindowManager::OpenWindow",0x1d,Yes);
      pwVar14 = L"info is invalid. %s(%d)";
      uVar13 = 0x527;
    }
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_168.Ptr,uVar13,pwVar14);
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
    if ((UObject *)local_190._0_8_ != (UObject *)0x0) {
      FMemory::Free((void *)local_190._0_8_);
    }
  }
LAB_14bb7ae70:
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return false;
}

// OpenWindowAsyncLoad @ 14bb7b140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDS_WindowManager::OpenWindowAsyncLoad
          (UDS_WindowManager *this,TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr> param_1,
          TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *param_2)

{
  ForAnyElementType FVar1;
  double dVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  UAssetManager *pUVar8;
  LARGE_INTEGER LVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  UDS_WindowInfoBase *pUVar12;
  FTimerManager *this_00;
  UObject *pUVar13;
  wchar_t *_Str;
  double dVar14;
  FWeakObjectPtr local_res10 [3];
  undefined1 auStackY_288 [32];
  LARGE_INTEGER local_238;
  LARGE_INTEGER local_230;
  undefined1 auStack_228 [12];
  uint uStack_21c;
  undefined1 local_218 [8];
  FDelegateAllocation local_210;
  LARGE_INTEGER local_1f8;
  ForElementType<TAlignedBytes<16,16>_> FStack_1f0;
  char *local_1e8;
  FDelegateAllocation *local_1e0;
  LARGE_INTEGER local_1d8;
  FMRSWRecursiveAccessDetector *pFStack_1d0;
  char *local_1c8;
  TSharedPtr<FStreamableHandle,1> local_1b8;
  FDestructionSentinel local_1a8;
  undefined1 *local_190;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_188;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_288;
  local_res10[0] = param_1.WeakPtr;
  bVar4 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar4) {
    pUVar7 = FWeakObjectPtr::Get(local_res10);
    if (pUVar7[2].field_0x1 == '\x01') {
      pUVar7 = FWeakObjectPtr::Get(local_res10);
      FVar1.Data = *(FScriptContainerElement **)(pUVar7 + 9);
      if (*(int *)&pUVar7[9].field_0xc < 0) {
        DestructItems<TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>,int>
                  ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                   FVar1.Data,*(int *)&pUVar7[9].field_0x8);
        *(undefined4 *)&pUVar7[9].field_0x8 = 0;
        if (*(int *)&pUVar7[9].field_0xc != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,(ForAnyElementType *)(pUVar7 + 9),0,(int *)&pUVar7[9].field_0xc);
        }
      }
      else {
        DestructItems<TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>,int>
                  ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                   FVar1.Data,*(int *)&pUVar7[9].field_0x8);
        *(undefined4 *)&pUVar7[9].field_0x8 = 0;
      }
      pUVar7 = FWeakObjectPtr::Get(local_res10);
      iVar5 = *(int *)&pUVar7[9].field_0x8;
      if (iVar5 == *(int *)&pUVar7[9].field_0xc) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(pUVar7 + 9),(int *)&pUVar7[9].field_0xc);
      }
      *(int *)&pUVar7[9].field_0x8 = iVar5 + 1;
      TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                 (*(FScriptContainerElement **)(pUVar7 + 9) + (longlong)iVar5 * 0x18),param_2);
      pUVar7 = FWeakObjectPtr::Get(local_res10);
      if (pUVar7[8].field_0x24 == '\0') {
        pUVar7 = FWeakObjectPtr::Get(local_res10);
        pUVar7[8].field_0x24 = 1;
        QueryPerformanceCounter(&local_238);
        dVar14 = (double)local_238.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                 __real_4170000000000000;
        pUVar7 = FWeakObjectPtr::Get(local_res10);
        *(double *)&pUVar7[8].field_0x18 = dVar14;
        AddOpenedWindowInfo(this,(TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>)local_res10[0]);
        pUVar8 = UAssetManager::Get();
        local_230.QuadPart = 0x2a0000056a;
        auStack_228._0_8_ =
             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_WindowManager.cpp";
        local_1d8.QuadPart = 0;
        stack0xfffffffffffffde0 =
             "bool __cdecl UDS_WindowManager::OpenWindowAsyncLoad(struct TWeakObjectPtr<class UDS_WindowInfo,struct FWeakObjectPtr>,class TDelegate<void __cdecl(class UDS_UserWidget *),struct FDefaultDelegateUserPolicy>)"
        ;
        pFStack_1d0 = (FMRSWRecursiveAccessDetector *)0x0;
        LVar9 = (LARGE_INTEGER)FWeakObjectPtr::Get(local_res10);
        local_218 = (undefined1  [8])0x0;
        local_210.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_210.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_218,
                   (FWriteAccessScope *)&local_1f8.s);
        local_1e0 = &local_210;
        puVar10 = UE::Core::Private::DelegateAllocate(0x28,&local_210);
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = &
                     ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar11 = FDelegateHandle::GenerateNewID();
          puVar10[2] = uVar11;
          *puVar10 = &
                     ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_WindowInfo____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             ((UObject *)LVar9.QuadPart != (UObject *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)LVar9);
          }
          puVar10[3] = 0;
          local_238 = LVar9;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             ((UObject *)LVar9.QuadPart != (UObject *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)LVar9);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_238);
          puVar10[4] = UDS_WindowInfoBase::RequestOpenWindowCallback;
        }
        if ((char)local_1e8 == '\0') {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    ((FMRSWRecursiveAccessDetector *)FStack_1f0,(FDestructionSentinel *)&local_1f8.s
                    );
        }
        local_1f8 = local_230;
        FStack_1f0 = (ForElementType<TAlignedBytes<16,16>_>)auStack_228._0_8_;
        local_1e8 = stack0xfffffffffffffde0;
        pUVar7 = FWeakObjectPtr::Get(local_res10);
        FStreamableManager::
        RequestAsyncLoad<FSoftObjectPath_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
                  (&pUVar8->StreamableManager,&local_1b8,(FSoftObjectPath *)&pUVar7[3].field_0x8,
                   (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_218,100,false,
                   false,(FString *)&local_1d8.s,(FSourceLocation *)&local_1f8.s);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1b8.SharedReferenceCount.ReferenceController);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_218,
                   (FWriteAccessScope *)&local_1f8.s);
        if ((local_210.DelegateSize != 0) &&
           (local_210.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (**(code **)*(longlong *)local_210.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_210,0,0,0x10);
          local_210.DelegateSize = 0;
        }
        if ((char)local_1e8 == '\0') {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    ((FMRSWRecursiveAccessDetector *)FStack_1f0,(FDestructionSentinel *)&local_1f8.s
                    );
        }
        if (local_210.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_210.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_218);
      }
      else {
        pUVar7 = FWeakObjectPtr::Get(local_res10);
        if (*(int *)&pUVar7[4].field_0x10 == 0) {
          _Str = L"";
        }
        else {
          _Str = *(wchar_t **)&pUVar7[4].field_0x8;
        }
        dVar14 = _wtof(_Str);
        if (0.0 < (float)dVar14) {
          dVar2 = FWindowsPlatformTime::Seconds();
          pUVar7 = FWeakObjectPtr::Get(local_res10);
          *(double *)&pUVar7[8].field_0x18 = dVar2;
          pUVar7 = FWeakObjectPtr::Get(local_res10);
          if (pUVar7[8].field_0x26 != '\0') {
            pUVar12 = (UDS_WindowInfoBase *)FWeakObjectPtr::Get(local_res10);
            pUVar12->bIsOpeningDelayed = true;
            this_00 = FDS_TimerManager::Get((UObject *)0x0);
            FTimerManager::SetTimer<UDS_WindowInfoBase>
                      (this_00,&pUVar12->OnOpenTimerHandle,pUVar12,(pmf_6e18e858)0x14bb749a0,
                       (float)dVar14,false,__real_bf800000);
          }
        }
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
      if (*(void **)&param_2->field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&param_2->field_0x8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)param_2);
      return true;
    }
    pUVar7 = FWeakObjectPtr::Get(local_res10);
    if (pUVar7[2].field_0x1 == '\x02') {
      pUVar7 = FWeakObjectPtr::Get(local_res10);
      pUVar13 = GetTransientPackageAsObject();
      LVar9 = (LARGE_INTEGER)NewObject<UDS_MultipleWindowInfo>(pUVar13);
      *(undefined4 *)(LVar9.QuadPart + 0x28) = *(undefined4 *)(pUVar7 + 1);
      FDS_WindowBaseTableRow::operator=
                ((FDS_WindowBaseTableRow *)(LVar9.QuadPart + 0x30),
                 (FDS_WindowBaseTableRow *)&pUVar7[1].field_0x8);
      *(undefined1 *)(LVar9.QuadPart + 0x160) = pUVar7[8].field_0x20;
      *(undefined1 *)(LVar9.QuadPart + 0x100) = pUVar7[6].field_0x10;
      lVar3 = *(longlong *)&pUVar7[6].field_0x20;
      *(longlong *)(LVar9.QuadPart + 0x108) = *(longlong *)&pUVar7[6].field_0x18;
      *(longlong *)(LVar9.QuadPart + 0x110) = lVar3;
      lVar3 = *(longlong *)&pUVar7[7].field_0x8;
      *(longlong *)(LVar9.QuadPart + 0x118) = *(longlong *)(pUVar7 + 7);
      *(longlong *)(LVar9.QuadPart + 0x120) = lVar3;
      lVar3 = *(longlong *)&pUVar7[7].field_0x18;
      *(longlong *)(LVar9.QuadPart + 0x128) = *(longlong *)&pUVar7[7].field_0x10;
      *(longlong *)(LVar9.QuadPart + 0x130) = lVar3;
      lVar3 = *(longlong *)(pUVar7 + 8);
      *(longlong *)(LVar9.QuadPart + 0x138) = *(longlong *)&pUVar7[7].field_0x20;
      *(longlong *)(LVar9.QuadPart + 0x140) = lVar3;
      iVar5 = *(int *)&pUVar7[10].field_0x18;
      if (iVar5 == *(int *)&pUVar7[10].field_0x1c) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)&pUVar7[10].field_0x10,
                           (int *)&pUVar7[10].field_0x1c);
      }
      *(int *)&pUVar7[10].field_0x18 = iVar5 + 1;
      ((LARGE_INTEGER *)(*(longlong *)&pUVar7[10].field_0x10 + (longlong)iVar5 * 8))->QuadPart =
           (LONGLONG)LVar9;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (UE::GC::MarkAsReachable((UObject *)LVar9),
         UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable((UObject *)LVar9);
      }
      local_238.s.LowPart = 0;
      local_238.s.HighPart = 0;
      local_1d8 = LVar9;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)LVar9);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_238.s,(FObjectPtr)&local_1d8);
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_238.s);
      pUVar7[8].field_0x24 = 1;
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_238.s);
      iVar5 = *(int *)&pUVar7[9].field_0x8;
      if (iVar5 == *(int *)&pUVar7[9].field_0xc) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(pUVar7 + 9),(int *)&pUVar7[9].field_0xc);
      }
      *(int *)&pUVar7[9].field_0x8 = iVar5 + 1;
      TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                 (*(FScriptContainerElement **)(pUVar7 + 9) + (longlong)iVar5 * 0x18),param_2);
      QueryPerformanceCounter(&local_1d8);
      dVar14 = (double)local_1d8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
               __real_4170000000000000;
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_238.s);
      *(double *)&pUVar7[8].field_0x18 = dVar14;
      AddOpenedWindowInfo(this,(TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>)local_238.s);
      pUVar8 = UAssetManager::Get();
      local_1f8.QuadPart = 0x2900000583;
      FStack_1f0 = (ForElementType<TAlignedBytes<16,16>_>)0x152784ea0;
      local_1b8.Object = (FStreamableHandle *)0x0;
      local_1e8 = 
      "bool __cdecl UDS_WindowManager::OpenWindowAsyncLoad(struct TWeakObjectPtr<class UDS_WindowInfo,struct FWeakObjectPtr>,class TDelegate<void __cdecl(class UDS_UserWidget *),struct FDefaultDelegateUserPolicy>)"
      ;
      local_1b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      LVar9 = (LARGE_INTEGER)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_238.s);
      local_230.QuadPart = 0;
      auStack_228._0_8_ = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      stack0xfffffffffffffde0 = (char *)((ulonglong)uStack_21c << 0x20);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_230.s,
                 (FWriteAccessScope *)&local_1a8);
      local_190 = auStack_228;
      puVar10 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)auStack_228);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar10[2] = uVar11;
        *puVar10 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_MultipleWindowInfo____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UDS_MultipleWindowInfo *)LVar9.QuadPart != (UDS_MultipleWindowInfo *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)LVar9);
        }
        puVar10[3] = 0;
        local_1d8 = LVar9;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UDS_MultipleWindowInfo *)LVar9.QuadPart != (UDS_MultipleWindowInfo *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)LVar9);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_1d8);
        puVar10[4] = UDS_WindowInfoBase::RequestOpenWindowCallback;
      }
      if (local_1a8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
      }
      local_1d8 = local_1f8;
      pFStack_1d0 = (FMRSWRecursiveAccessDetector *)FStack_1f0;
      local_1c8 = local_1e8;
      pUVar7 = FWeakObjectPtr::Get(local_res10);
      FStreamableManager::
      RequestAsyncLoad<FSoftObjectPath_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
                (&pUVar8->StreamableManager,(TSharedPtr<FStreamableHandle,1> *)local_218,
                 (FSoftObjectPath *)&pUVar7[3].field_0x8,
                 (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_230.s,100,false,
                 false,(FString *)&local_1b8,(FSourceLocation *)&local_1d8.s);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_210.DelegateAllocator);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_230.s,
                 (FWriteAccessScope *)&local_1f8.s);
      if ((auStack_228._8_4_ != 0) &&
         ((ForElementType<TAlignedBytes<16,16>_>)auStack_228._0_8_ !=
          (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)auStack_228._0_8_)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)auStack_228,0,0,0x10);
        stack0xfffffffffffffde0 = (char *)((ulonglong)stack0xfffffffffffffde0 & 0xffffffff00000000);
      }
      if ((char)local_1e8 == '\0') {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)FStack_1f0,(FDestructionSentinel *)&local_1f8.s);
      }
      if ((ForElementType<TAlignedBytes<16,16>_>)auStack_228._0_8_ !=
          (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)auStack_228._0_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)&local_230.s);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
      if (*(void **)&param_2->field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&param_2->field_0x8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)param_2);
      return true;
    }
  }
  else {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_188._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_188,"UDS_WindowManager::OpenWindowAsyncLoad",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_188.Ptr,0x55a,L"InWindowInfo is invalid.");
      if ((void *)local_188._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_188._padding_);
      }
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return false;
}

// OpenWindowGroup @ 14bb7ba10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_WindowManager::OpenWindowGroup
          (UDS_WindowManager *this,int param_1,
          TDelegate<void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
          *param_2)

{
  int *piVar1;
  EDS_WindowWidget EVar2;
  longlong lVar3;
  UDS_WindowGroupInfo *pUVar4;
  bool bVar5;
  int iVar6;
  UDS_LogManager *pUVar7;
  UClass *pUVar8;
  UEnum *this_00;
  TObjectPtr<UDS_WindowGroupInfo> *pTVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  undefined1 auStackY_228 [32];
  uint uVar17;
  wchar_t *pwVar18;
  undefined1 local_1e8 [8];
  FDelegateAllocation local_1e0;
  undefined1 local_1d0 [8];
  FString local_1c8;
  uint local_1b8;
  TStringView<wchar_t> local_1a8;
  FDestructionSentinel local_198;
  FDelegateAllocation *local_180;
  UDS_WindowGroupInfo *local_178 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1a8.DataPtr = (wchar_t *)this;
  if (*(int *)&(this->WindowGroupInfoMap).field_0x8 !=
      *(int *)&(this->WindowGroupInfoMap).field_0x34) {
    puVar14 = *(undefined1 **)&(this->WindowGroupInfoMap).field_0x40;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->WindowGroupInfoMap).field_0x38;
    }
    iVar6 = *(int *)(puVar14 +
                    (ulonglong)(*(int *)&(this->WindowGroupInfoMap).field_0x48 - 1U & param_1) * 4);
    if (iVar6 != -1) {
      lVar3 = *(longlong *)&this->WindowGroupInfoMap;
      do {
        if (*(int *)(lVar3 + (longlong)iVar6 * 0x18) == param_1) {
          pTVar9 = TMapBase<int,TObjectPtr<UDS_WindowGroupInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowGroupInfo>,0>_>
                   ::FindChecked((TMapBase<int,TObjectPtr<UDS_WindowGroupInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowGroupInfo>,0>_>
                                  *)&this->WindowGroupInfoMap,param_1);
          pUVar4 = (pTVar9->field0_0x0).DebugPtr;
          if (pUVar4 != (UDS_WindowGroupInfo *)0x0) {
            bVar5 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
            if (bVar5) {
              iVar6 = (pUVar4->OpenWindowGroupCallback).ArrayNum;
              piVar1 = &(pUVar4->OpenWindowGroupCallback).ArrayMax;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&(pUVar4->OpenWindowGroupCallback).AllocatorInstance,piVar1
                                  );
              }
              (pUVar4->OpenWindowGroupCallback).ArrayNum = iVar6 + 1;
              TDelegate<void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
              ::
              TDelegate<void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
                        ((TDelegate<void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
                          *)((pUVar4->OpenWindowGroupCallback).AllocatorInstance.Data +
                            (longlong)iVar6 * 0x18),param_2);
            }
            if (pUVar4->bIsAsyncLoading != true) {
              pUVar4->bIsAsyncLoading = true;
              local_1b8 = (pUVar4->WindowIDArray).ArrayNum;
              uVar13 = (ulonglong)(int)local_1b8;
              pFVar16 = (pUVar4->WindowIDArray).AllocatorInstance.Data;
              FVar15.Data = pFVar16 + uVar13 * 4;
              local_1c8.Data.AllocatorInstance.Data = FVar15.Data;
              while( true ) {
                if ((pUVar4->WindowIDArray).ArrayNum != (int)uVar13) {
                  `TCheckedPointerIterator<enum_EDS_WindowWidget,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_1d0);
                }
                if (pFVar16 == FVar15.Data) break;
                EVar2 = *(EDS_WindowWidget *)pFVar16;
                if (EVar2 != None) {
                  local_1e8 = (undefined1  [8])0x0;
                  local_1e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
                  local_1e0.DelegateSize = 0;
                  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e8,
                             (FWriteAccessScope *)&local_198);
                  local_180 = &local_1e0;
                  puVar10 = UE::Core::Private::DelegateAllocate(0x28,&local_1e0);
                  if (puVar10 != (undefined8 *)0x0) {
                    *puVar10 = &
                               ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
                    ;
                    uVar11 = FDelegateHandle::GenerateNewID();
                    puVar10[2] = uVar11;
                    *puVar10 = &
                               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_WindowGroupInfo____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
                    ;
                    if (UE::GC::GIsIncrementalReachabilityPending != false) {
                      UE::GC::MarkAsReachable((UObject *)pUVar4);
                    }
                    puVar10[3] = 0;
                    local_178[0] = pUVar4;
                    if (UE::GC::GIsIncrementalReachabilityPending != false) {
                      UE::GC::MarkAsReachable((UObject *)pUVar4);
                    }
                    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)local_178)
                    ;
                    puVar10[4] = UDS_WindowGroupInfo::RequestOpenWindowCallback;
                    this = (UDS_WindowManager *)local_1a8.DataPtr;
                  }
                  if (local_198.bDestroyed == false) {
                    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_198.Accessor,&local_198);
                  }
                  pTVar12 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                            TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                      ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                        *)&local_198,
                                       (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                        *)local_1e8);
                  bVar5 = OpenWindow(this,EVar2,pTVar12);
                  if (!bVar5) {
                    pUVar7 = UDS_LogManager::GetInst();
                    if (pUVar7 != (UDS_LogManager *)0x0) {
                      pUVar7 = UDS_LogManager::GetInst();
                      GetWindowIDToString(&local_1c8,EVar2);
                      local_168._padding_ = 0;
                      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                                (&local_168,"UDS_WindowManager::OpenWindowGroup",0x22,Yes);
                      UDS_LogManager::PrintLog
                                (pUVar7,1,Warning,local_168.Ptr,0x5ba,
                                 L"Failed to OpenWindow. %s(%d)");
                      if ((void *)local_168._padding_ != (void *)0x0) {
                        FMemory::Free((void *)local_168._padding_);
                      }
                      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
                      }
                    }
                    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e8,
                               (FWriteAccessScope *)&local_198);
                    if ((local_1e0.DelegateSize != 0) &&
                       (local_1e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0))
                    {
                      (*(code *)**(undefined8 **)local_1e0.DelegateAllocator)();
                      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                                ((ForAnyElementType *)&local_1e0,0,0,0x10);
                      local_1e0.DelegateSize = 0;
                    }
                    if (local_198.bDestroyed == false) {
                      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                                (local_198.Accessor,&local_198);
                    }
                    if (local_1e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
                      FMemory::Free((void *)local_1e0.DelegateAllocator);
                    }
                    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                              ((FMRSWRecursiveAccessDetector *)local_1e8);
                    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
                    if (*(void **)&param_2->field_0x8 != (void *)0x0) {
                      FMemory::Free(*(void **)&param_2->field_0x8);
                    }
                    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                              ((FMRSWRecursiveAccessDetector *)param_2);
                    return false;
                  }
                  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e8,
                             (FWriteAccessScope *)&local_198);
                  if ((local_1e0.DelegateSize != 0) &&
                     (local_1e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
                    (*(code *)**(undefined8 **)local_1e0.DelegateAllocator)();
                    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                              ((ForAnyElementType *)&local_1e0,0,0,0x10);
                    local_1e0.DelegateSize = 0;
                  }
                  if (local_198.bDestroyed == false) {
                    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_198.Accessor,&local_198);
                  }
                  if (local_1e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
                    FMemory::Free((void *)local_1e0.DelegateAllocator);
                  }
                  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                            ((FMRSWRecursiveAccessDetector *)local_1e8);
                  FVar15.Data = local_1c8.Data.AllocatorInstance.Data;
                }
                uVar13 = (ulonglong)local_1b8;
                pFVar16 = pFVar16 + 4;
              }
            }
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
            if (*(void **)&param_2->field_0x8 != (void *)0x0) {
              FMemory::Free(*(void **)&param_2->field_0x8);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)param_2);
            return true;
          }
          pUVar7 = UDS_LogManager::GetInst();
          if (pUVar7 == (UDS_LogManager *)0x0) goto LAB_14bb7bfd1;
          pUVar7 = UDS_LogManager::GetInst();
          GetWindowGroupIDToString(&local_1c8,(EDS_WindowWidgetGroup)param_1);
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_WindowManager::OpenWindowGroup",0x22,Yes);
          pwVar18 = L"info is nullptr. %s(%d)";
          uVar17 = 0x59c;
          goto LAB_14bb7bf97;
        }
        iVar6 = *(int *)(lVar3 + 0x10 + (longlong)iVar6 * 0x18);
      } while (iVar6 != -1);
    }
  }
  pUVar7 = UDS_LogManager::GetInst();
  if (pUVar7 != (UDS_LogManager *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    local_1a8.Size = 0x27;
    local_1a8.DataPtr = L"/Script/ProjectDS.EDS_WindowWidgetGroup";
    pUVar8 = Z_Construct_UClass_UEnum_NoRegister();
    this_00 = (UEnum *)StaticFindObject(pUVar8,(UObject *)0x0,&local_1a8,None);
    if (this_00 == (UEnum *)0x0) {
      ::FString::FString(&local_1c8,L"Invalid WindowGroupID");
    }
    else {
      UEnum::GetNameStringByValue(this_00,&local_1c8,(ulonglong)(uint)param_1 & 0xff);
    }
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_WindowManager::OpenWindowGroup",0x22,Yes);
    pwVar18 = L"Invalid InWindowGroupID. %s(%d)";
    uVar17 = 0x595;
LAB_14bb7bf97:
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_168.Ptr,uVar17,pwVar18);
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
  }
LAB_14bb7bfd1:
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return false;
}

// OpenWindowGroup @ 14bb7c000

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_WindowManager::OpenWindowGroup
          (UDS_WindowManager *this,EDS_WindowWidgetGroup param_1,
          TDelegate<void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
          *param_2)

{
  bool bVar1;
  TDelegate<void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
  *pTVar2;
  TDelegate<void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
  local_28;
  
  pTVar2 = TDelegate<void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
           ::
           TDelegate<void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
                     (&local_28,param_2);
  bVar1 = OpenWindowGroup(this,(uint)param_1,pTVar2);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return bVar1;
}

// PreDestroyed @ 14bb7e600

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_WindowManager::PreDestroyed(UDS_WindowManager *this)

{
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// RemoveOpenedWindowInfo @ 14bb83bf0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_WindowManager::RemoveOpenedWindowInfo
          (UDS_WindowManager *this,TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr> param_1)

{
  int iVar1;
  FWeakObjectPtr *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *this_00;
  int iVar9;
  FWeakObjectPtr local_res10;
  
  this_00 = (this->OpenedWindowInfoList).AllocatorInstance.Data;
  pFVar3 = this_00 + (longlong)(this->OpenedWindowInfoList).ArrayNum * 8;
  local_res10 = param_1.WeakPtr;
  if (this_00 != pFVar3) {
    while (bVar6 = TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::
                   UEOpEquals<UDS_WindowInfoBase,bool>
                             ((TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr> *)this_00,
                              (TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr> *)&local_res10),
          !bVar6) {
      this_00 = this_00 + 8;
      if (this_00 == pFVar3) {
        return;
      }
    }
    pFVar2 = (FWeakObjectPtr *)(this->OpenedWindowInfoList).AllocatorInstance.Data;
    if (((pFVar2 <= &local_res10) && (&local_res10 < pFVar2 + (this->OpenedWindowInfoList).ArrayMax)
        ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar1 = (this->OpenedWindowInfoList).ArrayNum;
    if (iVar1 != 0) {
      iVar9 = 0;
      pFVar3 = (this->OpenedWindowInfoList).AllocatorInstance.Data;
      bVar6 = TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::UEOpEquals<UDS_WindowInfoBase,bool>
                        ((TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr> *)pFVar3,
                         (TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr> *)&local_res10);
      bVar6 = !bVar6;
      iVar8 = 0;
      do {
        iVar5 = iVar8;
        do {
          iVar5 = iVar5 + 1;
          if (iVar1 <= iVar5) break;
          bVar7 = TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::
                  UEOpEquals<UDS_WindowInfoBase,bool>
                            ((TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr> *)
                             (pFVar3 + (longlong)iVar5 * 8),
                             (TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr> *)&local_res10);
        } while (bVar6 == !bVar7);
        if (bVar6 != false) {
          if (iVar9 != iVar8) {
            memmove(pFVar3 + (longlong)iVar9 * 8,pFVar3 + (longlong)iVar8 * 8,
                    (longlong)(iVar5 - iVar8) << 3);
          }
          iVar9 = iVar9 + (iVar5 - iVar8);
        }
        bVar6 = (bool)(bVar6 ^ 1);
        iVar8 = iVar5;
      } while (iVar5 < iVar1);
      (this->OpenedWindowInfoList).ArrayNum = iVar9;
    }
  }
  return;
}

// Reset @ 14bb864b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_WindowManager::Reset(UDS_WindowManager *this)

{
  int *piVar1;
  FWeakObjectPtr *pFVar2;
  FScriptContainerElement *_Src;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ForAnyElementType this_00;
  uint *puVar9;
  float *pfVar10;
  undefined1 auStackX_8 [8];
  float afStackX_10 [2];
  uint auStackX_18 [2];
  float afStackX_20 [2];
  FWeakObjectPtr FStack_68;
  UObject *pUStack_60;
  ForAnyElementType FStack_58;
  int iStack_50;
  int aiStack_4c [3];
  
  iStack_50 = (this->OpenedWindowInfoList).ArrayNum;
  lVar8 = (longlong)iStack_50;
  _Src = (this->OpenedWindowInfoList).AllocatorInstance.Data;
  FStack_58.Data = (FScriptContainerElement *)0x0;
  if (iStack_50 == 0) {
    aiStack_4c[0] = 0;
    iVar6 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iStack_50,0,&FStack_58,iStack_50,aiStack_4c);
    memcpy(FStack_58.Data,_Src,lVar8 << 3);
    iVar6 = iStack_50;
  }
  pFVar2 = (FWeakObjectPtr *)(FStack_58.Data + (longlong)iVar6 * 8);
  this_00.Data = FStack_58.Data;
  iVar7 = iVar6;
  do {
    if (iVar7 != iVar6) {
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if ((FWeakObjectPtr *)this_00.Data == pFVar2) {
      piVar1 = &(this->OpenedWindowInfoList).ArrayMax;
      (this->OpenedWindowInfoList).ArrayNum = 0;
      if (*piVar1 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&(this->OpenedWindowInfoList).AllocatorInstance,0,piVar1);
      }
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->CloseAllWindowDelegate);
      if ((FWeakObjectPtr *)FStack_58.Data != (FWeakObjectPtr *)0x0) {
        FMemory::Free(FStack_58.Data);
      }
      return;
    }
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00.Data);
    if (bVar3) {
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.Data);
      if (*(int *)(pUVar4 + 1) != 0xb) {
        pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.Data);
        if (pUVar4[2].field_0x1 == '\x01') {
          afStackX_10[0] = 0.0;
          auStackX_18[0] = 0;
          pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.Data);
          pfVar10 = afStackX_10;
          puVar9 = auStackX_18;
        }
        else {
          pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.Data);
          if (pUVar4[2].field_0x1 != '\x02') goto LAB_14bb55871;
          pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.Data);
          if (pUVar4 == (UObject *)0x0) {
LAB_14bb557ed:
            pUVar4 = (UObject *)0x0;
          }
          else {
            pUVar5 = Z_Construct_UClass_UDS_MultipleWindowInfo_NoRegister();
            iVar7 = (int)pUVar5->_padding_;
            if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar7) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
                &pUVar5->_padding_)) goto LAB_14bb557ed;
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar4);
          }
          FStack_68.ObjectIndex = 0;
          FStack_68.ObjectSerialNumber = 0;
          pUStack_60 = pUVar4;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar4);
          }
          FWeakObjectPtr::operator=(&FStack_68,(FObjectPtr)&pUStack_60);
          bVar3 = FWeakObjectPtr::IsValid(&FStack_68);
          if (!bVar3) goto LAB_14bb55871;
          afStackX_20[0] = 0.0;
          pUVar4 = FWeakObjectPtr::Get(&FStack_68);
          puVar9 = (uint *)&pUVar4[9].field_0x20;
          pUVar4 = FWeakObjectPtr::Get(&FStack_68);
          pfVar10 = afStackX_20;
        }
        CloseWindow(this,*(int *)(pUVar4 + 1),puVar9,pfVar10);
      }
    }
LAB_14bb55871:
    this_00.Data = this_00.Data + 8;
    iVar7 = iStack_50;
  } while( true );
}

// SaveWindowInfos @ 14bb87a80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_WindowManager::SaveWindowInfos(UDS_WindowManager *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  UDS_HudManager *this_00;
  IFileManager *pIVar3;
  wchar_t *pwVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  undefined1 local_res18 [16];
  FString local_188;
  FString local_178;
  FString local_168;
  TStringView<wchar_t> local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  this_00 = UDS_HudManager::GetInst();
  if (this_00 != (UDS_HudManager *)0x0) {
    ::FString::FString(&local_178,L",");
    ::FString::FString(&local_148,"");
    fVar10 = UDS_HudManager::GetUIScale(this_00);
    ::FString::SanitizeFloat(&local_38,(double)fVar10,1);
    ::FString::ConcatFC(&local_168,&local_38,L"\r\n");
    iVar6 = local_168.Data.ArrayNum + -1;
    if (local_168.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    ::FString::AppendChars(&local_148,(wchar_t *)local_168.Data.AllocatorInstance.Data,iVar6);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    pFVar5 = (this->WindowInfoArray).AllocatorInstance.Data;
    iVar6 = (this->WindowInfoArray).ArrayNum;
    pFVar1 = pFVar5 + (longlong)iVar6 * 8;
    while( true ) {
      if ((this->WindowInfoArray).ArrayNum != iVar6) {
        `TCheckedPointerIterator<TObjectPtr<UDS_WindowInfo>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar5 == pFVar1) break;
      lVar2 = *(longlong *)pFVar5;
      if ((lVar2 != 0) && (*(char *)(lVar2 + 0x51) == '\x01')) {
        local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_168.Data.ArrayNum = 0;
        local_168.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_168,*(int *)(lVar2 + 0x28));
        ::FString::SanitizeFloat((FString *)&local_158,*(double *)(*(longlong *)pFVar5 + 0x108),1);
        ::FString::SanitizeFloat(&local_48,*(double *)(*(longlong *)pFVar5 + 0x110),1);
        ::FString::SanitizeFloat(&local_58,*(double *)(*(longlong *)pFVar5 + 0x118),1);
        ::FString::SanitizeFloat(&local_68,*(double *)(*(longlong *)pFVar5 + 0x120),1);
        ::FString::SanitizeFloat(&local_78,*(double *)(*(longlong *)pFVar5 + 0x128),1);
        ::FString::SanitizeFloat(&local_88,*(double *)(*(longlong *)pFVar5 + 0x130),1);
        ::FString::SanitizeFloat(&local_98,*(double *)(*(longlong *)pFVar5 + 0x138),1);
        ::FString::SanitizeFloat(&local_a8,*(double *)(*(longlong *)pFVar5 + 0x140),1);
        ::FString::FString(&local_188,"");
        ::FString::ConcatFF(&local_138,&local_168,&local_178);
        iVar7 = 0;
        iVar8 = local_138.Data.ArrayNum + -1;
        if (local_138.Data.ArrayNum == 0) {
          iVar8 = iVar7;
        }
        ::FString::AppendChars(&local_188,(wchar_t *)local_138.Data.AllocatorInstance.Data,iVar8);
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        ::FString::ConcatFF(&local_128,(FString *)&local_158,&local_178);
        iVar8 = local_128.Data.ArrayNum + -1;
        if (local_128.Data.ArrayNum == 0) {
          iVar8 = iVar7;
        }
        ::FString::AppendChars(&local_188,(wchar_t *)local_128.Data.AllocatorInstance.Data,iVar8);
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
        ::FString::ConcatFF(&local_118,&local_48,&local_178);
        iVar8 = local_118.Data.ArrayNum + -1;
        if (local_118.Data.ArrayNum == 0) {
          iVar8 = iVar7;
        }
        ::FString::AppendChars(&local_188,(wchar_t *)local_118.Data.AllocatorInstance.Data,iVar8);
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
        ::FString::ConcatFF(&local_108,&local_58,&local_178);
        iVar8 = local_108.Data.ArrayNum + -1;
        if (local_108.Data.ArrayNum == 0) {
          iVar8 = iVar7;
        }
        ::FString::AppendChars(&local_188,(wchar_t *)local_108.Data.AllocatorInstance.Data,iVar8);
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        ::FString::ConcatFF(&local_f8,&local_68,&local_178);
        iVar9 = 0;
        iVar8 = local_f8.Data.ArrayNum + -1;
        if (local_f8.Data.ArrayNum == 0) {
          iVar8 = iVar9;
        }
        ::FString::AppendChars(&local_188,(wchar_t *)local_f8.Data.AllocatorInstance.Data,iVar8);
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        ::FString::ConcatFF(&local_e8,&local_78,&local_178);
        iVar8 = local_e8.Data.ArrayNum + -1;
        if (local_e8.Data.ArrayNum == 0) {
          iVar8 = iVar9;
        }
        ::FString::AppendChars(&local_188,(wchar_t *)local_e8.Data.AllocatorInstance.Data,iVar8);
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        ::FString::ConcatFF(&local_d8,&local_88,&local_178);
        iVar8 = local_d8.Data.ArrayNum + -1;
        if (local_d8.Data.ArrayNum == 0) {
          iVar8 = iVar9;
        }
        ::FString::AppendChars(&local_188,(wchar_t *)local_d8.Data.AllocatorInstance.Data,iVar8);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        ::FString::ConcatFF(&local_c8,&local_98,&local_178);
        iVar8 = local_c8.Data.ArrayNum + -1;
        if (local_c8.Data.ArrayNum == 0) {
          iVar8 = iVar9;
        }
        ::FString::AppendChars(&local_188,(wchar_t *)local_c8.Data.AllocatorInstance.Data,iVar8);
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        ::FString::ConcatFC(&local_b8,&local_a8,L"\r\n");
        iVar8 = local_b8.Data.ArrayNum + -1;
        if (local_b8.Data.ArrayNum == 0) {
          iVar8 = iVar7;
        }
        ::FString::AppendChars(&local_188,(wchar_t *)local_b8.Data.AllocatorInstance.Data,iVar8);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        iVar8 = local_188.Data.ArrayNum + -1;
        if (local_188.Data.ArrayNum == 0) {
          iVar8 = 0;
        }
        ::FString::AppendChars(&local_148,(wchar_t *)local_188.Data.AllocatorInstance.Data,iVar8);
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_158.DataPtr != (wchar_t *)0x0) {
          FMemory::Free(local_158.DataPtr);
        }
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
      }
      pFVar5 = pFVar5 + 8;
    }
    pIVar3 = IFileManager::Get();
    if ((param_1->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    local_158.Size = local_148.Data.ArrayNum + -1;
    if (local_148.Data.ArrayNum == 0) {
      local_158.Size = 0;
    }
    local_158.DataPtr = (wchar_t *)local_148.Data.AllocatorInstance.Data;
    FFileHelper::SaveStringToFile(&local_158,pwVar4,AutoDetect,pIVar3,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SortingOpenedWindowInfo @ 14bb90c40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_WindowManager::SortingOpenedWindowInfo(UDS_WindowManager *this)

{
  FIdentityFunctor local_res8 [32];
  
  AlgoImpl::
  StableSortInternal<TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>,_UDS_WindowManager::SortingOpenedWindowInfo_::__l2::<lambda_1>_>_>
            ((TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr> *)
             (this->OpenedWindowInfoList).AllocatorInstance.Data,
             (this->OpenedWindowInfoList).ArrayNum,local_res8[0],(<lambda_1> *)local_res8);
  return;
}

// SyncCreateWidget @ 14bb926e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDS_UserWidget * __thiscall
UDS_WindowManager::SyncCreateWidget(UDS_WindowManager *this,TSoftClassPtr<UDS_UserWidget> *param_1)

{
  int iVar1;
  void *pvVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UWorld *pUVar6;
  UDS_UserWidget *pUVar7;
  UObject *local_res18;
  
  pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)param_1);
  if (pUVar4 == (UObject *)0x0) {
    if (*(longlong *)&(param_1->SoftObjectPtr).field_0x8 == 0) goto LAB_14bb927e9;
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8,
               (FUObjectSerializeContext *)0x0);
    pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)param_1);
  }
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      pUVar5 = Z_Construct_UClass_UDS_UserWidget_NoRegister();
      if (pUVar5 != (UClass *)0x0) {
        iVar1 = (int)pUVar5->_padding_;
        if ((*(int *)&pUVar4[1].field_0x10 < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar4[1].field_0x8 + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          local_res18 = pUVar4;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar4);
          }
          pUVar6 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
          pUVar7 = CreateWidget<UDS_UserWidget,UWorld_*>
                             (pUVar6,(TSubclassOf<UUserWidget>)&local_res18,(FName)0x0);
          pvVar2 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
          if (pvVar2 != (void *)0x0) {
            FMemory::Free(pvVar2);
          }
          return pUVar7;
        }
      }
    }
  }
LAB_14bb927e9:
  pvVar2 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  return (UDS_UserWidget *)0x0;
}

// ToggleVisibleWindow @ 14bb92ef0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_WindowManager::ToggleVisibleWindow
          (UDS_WindowManager *this,EDS_WindowWidget param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res20;
  
  if (param_1 != None) {
    GetWindowInfo(this,(int)&local_res20);
    bVar2 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar2) {
      pUVar3 = FWeakObjectPtr::Get(&local_res20);
      (**(code **)(*(longlong *)pUVar3 + 0x2c0))(pUVar3,param_2);
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<353616502999483969>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_WindowManager.cpp"
                         ,0x641,"windowInfo.IsValid()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// Update @ 14bb96290

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_WindowManager::Update(UDS_WindowManager *this,float *param_1)

{
  return;
}

// operator() @ 15056c740

bool __thiscall `UDS_WindowManager::CloseWindow'::__l28::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<353616502999483888>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<353616502999483888>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

