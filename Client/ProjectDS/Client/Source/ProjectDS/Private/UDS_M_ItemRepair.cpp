// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 53

// StaticClass @ 14b51ab50

UClass * __cdecl UDS_M_ItemRepair::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemRepair.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemRepair",
               &Z_Registration_Info_UClass_UDS_M_ItemRepair.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemRepair,0x3a0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_ItemRepair>,
               InternalVTableHelperCtorCaller<UDS_M_ItemRepair>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemRepair.InnerSingleton;
}

// UDS_M_ItemRepair @ 14b521df0

UDS_M_ItemRepair * __thiscall
UDS_M_ItemRepair::UDS_M_ItemRepair(UDS_M_ItemRepair *this,FVTableHelper *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_ItemRepair__6B_;
  (this->RepairBagModel).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CoinDisplayModel).WeakPtr = (FWeakObjectPtr)0x0;
  (this->WaitCompleteListModel).WeakPtr = (FWeakObjectPtr)0x0;
  (this->BulkRepairTargetArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BulkRepairTargetArray).ArrayNum = 0;
  (this->BulkRepairTargetArray).ArrayMax = 0;
  (this->RegisteredRepairItemList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredRepairItemList).ArrayNum = 0;
  (this->RegisteredRepairItemList).ArrayMax = 0;
  *(undefined8 *)&this->TotalBulkMaterialsMap = 0;
  *(undefined8 *)&(this->TotalBulkMaterialsMap).field_0x8 = 0;
  *(undefined8 *)&(this->TotalBulkMaterialsMap).field_0x20 = 0;
  *(undefined4 *)&(this->TotalBulkMaterialsMap).field_0x28 = 0;
  *(undefined4 *)&(this->TotalBulkMaterialsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TotalBulkMaterialsMap).field_0x34 = 0;
  *(undefined4 *)&(this->TotalBulkMaterialsMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TotalBulkMaterialsMap).field_0x40 = 0;
  *(undefined4 *)&(this->TotalBulkMaterialsMap).field_0x48 = 0;
  *(undefined8 *)&this->TargetRepairSelectedMaterialsMap = 0;
  *(undefined8 *)&(this->TargetRepairSelectedMaterialsMap).field_0x8 = 0;
  *(undefined8 *)&(this->TargetRepairSelectedMaterialsMap).field_0x20 = 0;
  *(undefined4 *)&(this->TargetRepairSelectedMaterialsMap).field_0x28 = 0;
  *(undefined4 *)&(this->TargetRepairSelectedMaterialsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TargetRepairSelectedMaterialsMap).field_0x34 = 0;
  *(undefined4 *)&(this->TargetRepairSelectedMaterialsMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TargetRepairSelectedMaterialsMap).field_0x40 = 0;
  *(undefined4 *)&(this->TargetRepairSelectedMaterialsMap).field_0x48 = 0;
  *(undefined8 *)&this->TargetRepairRequiredMaterialsMap = 0;
  *(undefined8 *)&(this->TargetRepairRequiredMaterialsMap).field_0x8 = 0;
  *(undefined8 *)&(this->TargetRepairRequiredMaterialsMap).field_0x20 = 0;
  *(undefined4 *)&(this->TargetRepairRequiredMaterialsMap).field_0x28 = 0;
  *(undefined4 *)&(this->TargetRepairRequiredMaterialsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TargetRepairRequiredMaterialsMap).field_0x34 = 0;
  *(undefined4 *)&(this->TargetRepairRequiredMaterialsMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TargetRepairRequiredMaterialsMap).field_0x40 = 0;
  *(undefined4 *)&(this->TargetRepairRequiredMaterialsMap).field_0x48 = 0;
  this->NeededDurability = 0;
  (this->RestoreIngredientInfoArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RestoreIngredientInfoArray).ArrayNum = 0;
  (this->RestoreIngredientInfoArray).ArrayMax = 0;
  *(undefined8 *)&this->RepairMaterialInfoData = 0;
  *(undefined8 *)&(this->RepairMaterialInfoData).field_0x8 = 0;
  *(undefined8 *)&(this->RepairMaterialInfoData).field_0x20 = 0;
  *(undefined4 *)&(this->RepairMaterialInfoData).field_0x28 = 0;
  *(undefined4 *)&(this->RepairMaterialInfoData).field_0x2c = 0x80;
  *(undefined4 *)&(this->RepairMaterialInfoData).field_0x34 = 0;
  *(undefined4 *)&(this->RepairMaterialInfoData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RepairMaterialInfoData).field_0x40 = 0;
  *(undefined4 *)&(this->RepairMaterialInfoData).field_0x48 = 0;
  *(undefined8 *)&this->OnDimmedStateUpdated = 0;
  *(undefined8 *)&(this->OnDimmedStateUpdated).field_0x8 = 0;
  *(undefined4 *)&(this->OnDimmedStateUpdated).field_0x10 = 0;
  *(undefined8 *)&this->AvailableMaterialCounts = 0;
  *(undefined8 *)&(this->AvailableMaterialCounts).field_0x8 = 0;
  *(undefined8 *)&(this->AvailableMaterialCounts).field_0x20 = 0;
  *(undefined4 *)&(this->AvailableMaterialCounts).field_0x28 = 0;
  *(undefined4 *)&(this->AvailableMaterialCounts).field_0x2c = 0x80;
  *(undefined4 *)&(this->AvailableMaterialCounts).field_0x34 = 0;
  *(undefined4 *)&(this->AvailableMaterialCounts).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AvailableMaterialCounts).field_0x40 = 0;
  *(undefined4 *)&(this->AvailableMaterialCounts).field_0x48 = 0;
  return this;
}

// UDS_M_ItemRepair @ 14b521fc0

UDS_M_ItemRepair * __thiscall
UDS_M_ItemRepair::UDS_M_ItemRepair(UDS_M_ItemRepair *this,FObjectInitializer *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_ItemRepair__6B_;
  (this->RepairBagModel).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CoinDisplayModel).WeakPtr = (FWeakObjectPtr)0x0;
  (this->WaitCompleteListModel).WeakPtr = (FWeakObjectPtr)0x0;
  (this->BulkRepairTargetArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BulkRepairTargetArray).ArrayNum = 0;
  (this->BulkRepairTargetArray).ArrayMax = 0;
  (this->RegisteredRepairItemList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredRepairItemList).ArrayNum = 0;
  (this->RegisteredRepairItemList).ArrayMax = 0;
  *(undefined8 *)&this->TotalBulkMaterialsMap = 0;
  *(undefined8 *)&(this->TotalBulkMaterialsMap).field_0x8 = 0;
  *(undefined8 *)&(this->TotalBulkMaterialsMap).field_0x20 = 0;
  *(undefined4 *)&(this->TotalBulkMaterialsMap).field_0x28 = 0;
  *(undefined4 *)&(this->TotalBulkMaterialsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TotalBulkMaterialsMap).field_0x34 = 0;
  *(undefined4 *)&(this->TotalBulkMaterialsMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TotalBulkMaterialsMap).field_0x40 = 0;
  *(undefined4 *)&(this->TotalBulkMaterialsMap).field_0x48 = 0;
  *(undefined8 *)&this->TargetRepairSelectedMaterialsMap = 0;
  *(undefined8 *)&(this->TargetRepairSelectedMaterialsMap).field_0x8 = 0;
  *(undefined8 *)&(this->TargetRepairSelectedMaterialsMap).field_0x20 = 0;
  *(undefined4 *)&(this->TargetRepairSelectedMaterialsMap).field_0x28 = 0;
  *(undefined4 *)&(this->TargetRepairSelectedMaterialsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TargetRepairSelectedMaterialsMap).field_0x34 = 0;
  *(undefined4 *)&(this->TargetRepairSelectedMaterialsMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TargetRepairSelectedMaterialsMap).field_0x40 = 0;
  *(undefined4 *)&(this->TargetRepairSelectedMaterialsMap).field_0x48 = 0;
  *(undefined8 *)&this->TargetRepairRequiredMaterialsMap = 0;
  *(undefined8 *)&(this->TargetRepairRequiredMaterialsMap).field_0x8 = 0;
  *(undefined8 *)&(this->TargetRepairRequiredMaterialsMap).field_0x20 = 0;
  *(undefined4 *)&(this->TargetRepairRequiredMaterialsMap).field_0x28 = 0;
  *(undefined4 *)&(this->TargetRepairRequiredMaterialsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TargetRepairRequiredMaterialsMap).field_0x34 = 0;
  *(undefined4 *)&(this->TargetRepairRequiredMaterialsMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TargetRepairRequiredMaterialsMap).field_0x40 = 0;
  *(undefined4 *)&(this->TargetRepairRequiredMaterialsMap).field_0x48 = 0;
  this->NeededDurability = 0;
  (this->RestoreIngredientInfoArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RestoreIngredientInfoArray).ArrayNum = 0;
  (this->RestoreIngredientInfoArray).ArrayMax = 0;
  *(undefined8 *)&this->RepairMaterialInfoData = 0;
  *(undefined8 *)&(this->RepairMaterialInfoData).field_0x8 = 0;
  *(undefined8 *)&(this->RepairMaterialInfoData).field_0x20 = 0;
  *(undefined4 *)&(this->RepairMaterialInfoData).field_0x28 = 0;
  *(undefined4 *)&(this->RepairMaterialInfoData).field_0x2c = 0x80;
  *(undefined4 *)&(this->RepairMaterialInfoData).field_0x34 = 0;
  *(undefined4 *)&(this->RepairMaterialInfoData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RepairMaterialInfoData).field_0x40 = 0;
  *(undefined4 *)&(this->RepairMaterialInfoData).field_0x48 = 0;
  *(undefined8 *)&this->OnDimmedStateUpdated = 0;
  *(undefined8 *)&(this->OnDimmedStateUpdated).field_0x8 = 0;
  *(undefined4 *)&(this->OnDimmedStateUpdated).field_0x10 = 0;
  *(undefined8 *)&this->AvailableMaterialCounts = 0;
  *(undefined8 *)&(this->AvailableMaterialCounts).field_0x8 = 0;
  *(undefined8 *)&(this->AvailableMaterialCounts).field_0x20 = 0;
  *(undefined4 *)&(this->AvailableMaterialCounts).field_0x28 = 0;
  *(undefined4 *)&(this->AvailableMaterialCounts).field_0x2c = 0x80;
  *(undefined4 *)&(this->AvailableMaterialCounts).field_0x34 = 0;
  *(undefined4 *)&(this->AvailableMaterialCounts).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AvailableMaterialCounts).field_0x40 = 0;
  *(undefined4 *)&(this->AvailableMaterialCounts).field_0x48 = 0;
  return this;
}

// ~UDS_M_ItemRepair @ 14b523420

void __thiscall UDS_M_ItemRepair::~UDS_M_ItemRepair(UDS_M_ItemRepair *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDS_M_ItemRepair__6B_;
  *(undefined4 *)&(this->AvailableMaterialCounts).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AvailableMaterialCounts).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AvailableMaterialCounts);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDimmedStateUpdated);
  pvVar1 = *(void **)&(this->OnDimmedStateUpdated).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDimmedStateUpdated);
  *(undefined4 *)&(this->RepairMaterialInfoData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RepairMaterialInfoData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,FDS_MaterialSlotInfoArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64,FDS_MaterialSlotInfoArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64,FDS_MaterialSlotInfoArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RepairMaterialInfoData);
  pFVar2 = (this->RestoreIngredientInfoArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->TargetRepairRequiredMaterialsMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TargetRepairRequiredMaterialsMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_RequiredMaterialInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDS_RequiredMaterialInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDS_RequiredMaterialInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TargetRepairRequiredMaterialsMap);
  *(undefined4 *)&(this->TargetRepairSelectedMaterialsMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TargetRepairSelectedMaterialsMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_MaterialSlotInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDS_MaterialSlotInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDS_MaterialSlotInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TargetRepairSelectedMaterialsMap);
  *(undefined4 *)&(this->TotalBulkMaterialsMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TotalBulkMaterialsMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TotalBulkMaterialsMap);
  pFVar2 = (this->RegisteredRepairItemList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->BulkRepairTargetArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b526220

UClass * __cdecl UDS_M_ItemRepair::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemRepair.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemRepair",
               &Z_Registration_Info_UClass_UDS_M_ItemRepair.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemRepair,0x3a0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_ItemRepair>,
               InternalVTableHelperCtorCaller<UDS_M_ItemRepair>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemRepair.InnerSingleton;
}

// StaticRegisterNativesUDS_M_ItemRepair @ 14b527510

void __cdecl UDS_M_ItemRepair::StaticRegisterNativesUDS_M_ItemRepair(void)

{
  return;
}

// __VTableCtorCaller @ 14b529790

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_M_ItemRepair::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_ModelBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UDS_ModelBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_ModelBase *)0x0) {
    UDS_ModelBase::UDS_ModelBase(this,param_1);
    this->_padding_ = (longlong)&___7UDS_M_ItemRepair__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].ParentModel.field0_0x0.DebugPtr = (UDS_ModelBase *)0x0;
    this[1].ChildModelList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].ChildModelList.ArrayNum = 0;
    this[1].ChildModelList.ArrayMax = 0;
    *(undefined8 *)&this[1].DataContainer.DataMap = 0;
    *(undefined8 *)&this[1].DataContainer.DataMap.field_0x18 = 0;
    *(undefined4 *)&this[1].DataContainer.DataMap.field_0x20 = 0;
    *(undefined4 *)&this[1].DataContainer.DataMap.field_0x24 = 0x80;
    *(undefined4 *)&this[1].DataContainer.DataMap.field_0x28 = 0xffffffff;
    *(undefined4 *)&this[1].DataContainer.DataMap.field_0x2c = 0;
    *(undefined8 *)&this[1].DataContainer.DataMap.field_0x38 = 0;
    *(undefined4 *)&this[1].DataContainer.DataMap.field_0x40 = 0;
    *(undefined8 *)&this[1].DataContainer.DataMap.field_0x48 = 0;
    *(undefined8 *)&this[1].DataContainer.ListDataMap = 0;
    *(undefined8 *)&this[1].DataContainer.ListDataMap.field_0x18 = 0;
    *(undefined4 *)&this[1].DataContainer.ListDataMap.field_0x20 = 0;
    *(undefined4 *)&this[1].DataContainer.ListDataMap.field_0x24 = 0x80;
    *(undefined4 *)&this[1].DataContainer.ListDataMap.field_0x28 = 0xffffffff;
    *(undefined4 *)&this[1].DataContainer.ListDataMap.field_0x2c = 0;
    *(undefined8 *)&this[1].DataContainer.ListDataMap.field_0x38 = 0;
    *(undefined4 *)&this[1].DataContainer.ListDataMap.field_0x40 = 0;
    *(undefined8 *)&this[1].DataContainer.ListDataMap.field_0x48 = 0;
    this[1].IsDirty = false;
    *(undefined3 *)&this[1].field_0xe1 = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].ObjectData.field_0x10 = 0;
    *(undefined4 *)&this[1].ObjectData.field_0x18 = 0;
    *(undefined4 *)&this[1].ObjectData.field_0x1c = 0x80;
    *(undefined4 *)&this[1].ObjectData.field_0x20 = 0xffffffff;
    *(undefined4 *)&this[1].ObjectData.field_0x24 = 0;
    *(undefined8 *)&this[1].ObjectData.field_0x30 = 0;
    *(undefined4 *)&this[1].ObjectData.field_0x38 = 0;
    *(undefined4 *)&this[1].ObjectData.field_0x40 = 0;
    *(undefined8 *)&this[1].ObjectData.field_0x48 = 0;
    *(undefined8 *)&this[1].UpdateViewDelegate = 0;
    *(undefined8 *)&this[1].UpdateViewDelegate.field_0x8 = 0;
    *(undefined8 *)&this[1].UpdateViewDelegate.field_0x10 = 0;
    *(undefined8 *)&this[1].UpdateModelDelegate.field_0x8 = 0;
    *(undefined4 *)&this[1].UpdateModelDelegate.field_0x10 = 0;
    *(undefined4 *)&this[1].UpdateModelDelegate.field_0x14 = 0x80;
    *(undefined4 *)&this[1].UpdateModelDelegate.field_0x18 = 0xffffffff;
    *(undefined4 *)&this[1].UpdateModelDelegate.field_0x1c = 0;
    this[1].WidgetName.ComparisonIndex = 0;
    this[1].WidgetName.Number = 0;
    this[1].ViewModelTemplateKey = None;
    this[1].ViewModelContext.Object = (FDS_ViewModelContext_ModelBase *)0x0;
    this[1].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined4 *)&this[1].bPropagationEnabled = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2].ParentModel.field0_0x0 = 0;
    *(undefined4 *)((longlong)&this[2].ParentModel.field0_0x0 + 4) = 0x80;
    *(undefined4 *)&this[2].ChildModelList.AllocatorInstance.Data = 0xffffffff;
    *(undefined4 *)((longlong)&this[2].ChildModelList.AllocatorInstance.Data + 4) = 0;
    *(undefined8 *)&this[2].DataContainer.DataMap = 0;
    *(undefined4 *)&this[2].DataContainer.DataMap.field_0x8 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// AddTargetMaterialQuantity @ 14bce85c0

void __thiscall UDS_M_ItemRepair::AddTargetMaterialQuantity(UDS_M_ItemRepair *this,long64 param_1)

{
  TMap<int,FDS_MaterialSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>_>
  *this_00;
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  int local_res8 [2];
  int local_res10 [2];
  int *local_res18;
  
  this_00 = &this->TargetRepairSelectedMaterialsMap;
  local_res8[0] = (int)param_1;
  if (*(int *)&(this->TargetRepairSelectedMaterialsMap).field_0x8 !=
      *(int *)&(this->TargetRepairSelectedMaterialsMap).field_0x34) {
    puVar3 = *(undefined1 **)&(this->TargetRepairSelectedMaterialsMap).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->TargetRepairSelectedMaterialsMap).field_0x38;
    }
    iVar1 = *(int *)(puVar3 + ((ulonglong)
                               (*(int *)&(this->TargetRepairSelectedMaterialsMap).field_0x48 - 1) &
                              param_1 & 0xffffffffU) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x1c + *(longlong *)&this_00->field_0x0);
        if (*piVar2 == local_res8[0]) {
          if (piVar2 != (int *)0x0) goto LAB_14bce8660;
          break;
        }
        iVar1 = piVar2[5];
      } while (iVar1 != -1);
    }
  }
  local_res18 = local_res8;
  TSet<TTuple<int,FDS_MaterialSlotInfo>,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_&&>_>
            ((TSet<TTuple<int,FDS_MaterialSlotInfo>,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>,FDefaultSetAllocator>
              *)this_00,(uint)local_res10,(TKeyInitializer<int_&&> *)(param_1 & 0xffffffff),
             (bool *)&local_res18);
  piVar2 = (int *)((longlong)local_res10[0] * 0x1c + *(longlong *)&this_00->field_0x0);
LAB_14bce8660:
  piVar2[2] = piVar2[2] + 1;
  UpdateTargetRepairMaterialItems(this,false);
  return;
}

// CalculateAndReserveMaterials @ 14bcea510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UDS_M_ItemRepair::CalculateAndReserveMaterials
          (UDS_M_ItemRepair *this,TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  UObject *pUVar13;
  int *piVar14;
  byte bVar15;
  ulonglong uVar16;
  uint *puVar17;
  longlong lVar18;
  ForElementType<FSetElementId> FVar19;
  int iVar20;
  UDS_M_ItemRepair *pUVar21;
  TSparseSetElement<TTuple<__int64,FDS_MaterialSlotInfoArray>_> *pTVar22;
  uint uVar23;
  ForAnyElementType FVar24;
  TMap<__int64,FDS_MaterialSlotInfoArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>_>
  *this_00;
  FDS_RequiredMaterialInfo *pFVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  undefined1 auStackY_1d8 [32];
  undefined1 local_198;
  FIdentityFunctor local_197 [3];
  uint local_194;
  undefined1 local_190 [8];
  ForAnyElementType local_188;
  undefined8 local_180;
  ForAnyElementType local_178;
  undefined8 local_170;
  int local_168;
  UDS_M_ItemRepair *local_160;
  FWeakObjectPtr local_158;
  int local_150 [2];
  TArray<FDS_RequiredMaterialInfo,TSizedDefaultAllocator<32>_> local_148;
  longlong *local_138;
  uint uStack_130;
  uint uStack_12c;
  TBitArray<FDefaultBitArrayAllocator> *local_128;
  undefined4 uStack_120;
  uint uStack_11c;
  uint local_118;
  uint uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  FDS_RequiredMaterialInfo *local_108;
  longlong *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  FSparseArrayAllocationInfo local_d0;
  undefined1 local_b8 [32];
  uint *local_98;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  undefined1 local_80 [8];
  ForElementType<FSetElementId> local_78;
  int local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_160 = this;
  bVar9 = FWeakObjectPtr::IsValid(&param_1->WeakPtr);
  if (bVar9) {
    pUVar13 = FWeakObjectPtr::Get(&param_1->WeakPtr);
    (**(code **)(*(longlong *)pUVar13 + 0x3a0))(pUVar13,&local_158);
    bVar9 = FWeakObjectPtr::IsValid(&local_158);
    if (bVar9) {
      pUVar13 = FWeakObjectPtr::Get(&local_158);
      iVar27 = *(int *)&pUVar13[0x11].field_0x4;
      pUVar13 = FWeakObjectPtr::Get(&local_158);
      iVar12 = *(int *)&pUVar13[0x15].field_0x18;
      iVar27 = iVar12 - iVar27;
      if (0 < iVar27) {
        local_168 = iVar12;
        pUVar13 = FWeakObjectPtr::Get(&local_158);
        pUVar21 = local_160;
        GetRequiredMaterialsForRepairItem(local_160,&local_148,*(int *)&pUVar13[8].field_0x10,true);
        AlgoImpl::
        IntroSortInternal<FDS_RequiredMaterialInfo,int,FIdentityFunctor,TDereferenceWrapper<FDS_RequiredMaterialInfo,_UDS_M_ItemRepair::CalculateAndReserveMaterials_::__l2::<lambda_1>_>_>
                  ((FDS_RequiredMaterialInfo *)local_148.AllocatorInstance.Data,local_148.ArrayNum,
                   local_197[0],(<lambda_1> *)local_197);
        fVar7 = __real_bf000000;
        dVar6 = __real_3fe0000000000000;
        iVar26 = 0;
        uVar16 = (ulonglong)local_148.ArrayNum;
        local_b8._0_8_ = 0;
        pFVar25 = (FDS_RequiredMaterialInfo *)(local_148.AllocatorInstance.Data + uVar16 * 0x20);
        local_b8._8_8_ = 0;
        local_98 = (uint *)0x0;
        local_90 = 0;
        local_8c = 0x80;
        local_88 = 0xffffffff;
        local_84 = 0;
        local_78 = (ForElementType<FSetElementId>)0x0;
        local_70 = 0;
        local_194 = local_148.ArrayNum;
        FVar24.Data = local_148.AllocatorInstance.Data;
        while( true ) {
          if (local_148.ArrayNum != (uint)uVar16) {
            local_198 = 0;
            `TCheckedPointerIterator<FDS_RequiredMaterialInfo,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(&local_198);
          }
          uVar23 = local_90;
          if (((FDS_RequiredMaterialInfo *)FVar24.Data == pFVar25) || (iVar27 <= iVar26)) break;
          dVar5 = (double)(((longlong)iVar12 * ((FDS_RequiredMaterialInfo *)FVar24.Data)->RepairRate
                           ) / 10000);
          piVar14 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
                    FindOrAddImpl<int_const_&>
                              ((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                *)&pUVar21->AvailableMaterialCounts,
                               ((FDS_RequiredMaterialInfo *)FVar24.Data)->ItemTID,(int *)FVar24.Data
                              );
          iVar12 = (int)((longlong)ROUND((dVar5 + dVar5) - dVar6) >> 1);
          if ((0 < iVar12) && (iVar20 = *piVar14, pUVar21 = local_160, 0 < iVar20)) {
            iVar11 = -((int)ROUND(fVar7 - ((float)(iVar27 - iVar26) + (float)(iVar27 - iVar26)) /
                                          (float)iVar12) >> 1);
            if (iVar11 < iVar20) {
              iVar20 = iVar11;
            }
            if (0 < iVar20) {
              uVar23 = ((FDS_RequiredMaterialInfo *)FVar24.Data)->ItemTID;
              if (local_b8._8_4_ != local_84) {
                FVar19 = (ForElementType<FSetElementId>)local_80;
                if (local_78 != (ForElementType<FSetElementId>)0x0) {
                  FVar19 = local_78;
                }
                uVar28 = *(uint *)((longlong)FVar19 + (ulonglong)(local_70 - 1U & uVar23) * 4);
                while (uVar28 != 0xffffffff) {
                  puVar17 = (uint *)((longlong)(int)uVar28 * 0x10 + local_b8._0_8_);
                  if (*puVar17 == uVar23) {
                    if (puVar17 != (uint *)0x0) goto LAB_14bcea7b8;
                    break;
                  }
                  uVar28 = puVar17[2];
                }
              }
              local_108 = (FDS_RequiredMaterialInfo *)FVar24.Data;
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
              EmplaceByHash<TKeyInitializer<int_const_&>_>
                        ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                          *)local_b8,(uint)local_150,
                         (TKeyInitializer<int_const_&> *)(ulonglong)uVar23,(bool *)&local_108);
              puVar17 = (uint *)((longlong)local_150[0] * 0x10 + local_b8._0_8_);
LAB_14bcea7b8:
              puVar17[1] = puVar17[1] + iVar20;
              *piVar14 = *piVar14 - iVar20;
              iVar26 = iVar26 + iVar20 * iVar12;
              pUVar21 = local_160;
            }
          }
          FVar24.Data = FVar24.Data + 0x20;
          uVar16 = (ulonglong)local_194;
          iVar12 = local_168;
        }
        if (local_b8._8_4_ == local_84) {
          bVar9 = false;
        }
        else {
          local_180._0_4_ = 0;
          local_188.Data = (FScriptContainerElement *)0x0;
          uStack_130 = 0;
          local_180 = 0;
          uStack_12c = 1;
          local_118 = 0;
          uStack_11c = uStack_130;
          if (local_90 != 0) {
            puVar17 = (uint *)(local_b8 + 0x10);
            if (local_98 != (uint *)0x0) {
              puVar17 = local_98;
            }
            uVar28 = *puVar17;
            local_118 = (uint)local_180;
            uStack_130 = (uint)local_180;
            while (uVar28 == 0) {
              lVar18 = (longlong)(int)uStack_130;
              local_118 = local_118 + 0x20;
              uStack_130 = uStack_130 + 1;
              uStack_11c = local_90;
              if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 <
                  (int)uStack_130) goto LAB_14bcea882;
              uVar28 = puVar17[lVar18 + 1];
            }
            uStack_12c = -uVar28 & uVar28;
            uVar16 = (ulonglong)uStack_12c * 2 + 1;
            lVar18 = 0x3f;
            if (uVar16 != 0) {
              for (; uVar16 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            local_168 = (int)lVar18;
            uStack_11c = local_168 + -1 + local_118;
            if ((int)local_90 < (int)uStack_11c) {
              uStack_11c = local_90;
            }
          }
LAB_14bcea882:
          local_138 = (longlong *)local_b8;
          local_128 = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
          iStack_110 = local_b8._8_4_ - local_84;
          uVar28 = local_90 & 0xffffffe0;
          uStack_120 = 0xffffffff;
          TStack_f8.CurrentBitIndex = uStack_11c;
          TStack_f8.UnvisitedBitMask = 0xffffffff;
          TStack_f8._padding_ = CONCAT44(uStack_12c,uStack_130);
          iVar27 = (int)local_90 >> 5;
          TStack_f8._28_4_ = uStack_11c;
          TStack_f8.BaseBitIndex = local_118;
          uStack_d8 = CONCAT44(uStack_10c,iStack_110);
          bVar15 = (byte)local_90;
          uStack_114 = uStack_11c;
          local_100 = local_138;
          TStack_f8.Array = local_128;
          if ((int)local_90 < 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L"");
            if (bVar9) {
              pcVar4 = (code *)swi(3);
              uVar10 = (*pcVar4)();
              return (bool)uVar10;
            }
          }
          if (uVar23 != local_90) {
            puVar17 = (uint *)(local_b8 + 0x10);
            if (local_98 != (uint *)0x0) {
              puVar17 = local_98;
            }
            uVar23 = -1 << (bVar15 & 0x1f) & puVar17[iVar27];
            while (uVar23 == 0) {
              lVar18 = (longlong)iVar27;
              uVar28 = uVar28 + 0x20;
              iVar27 = iVar27 + 1;
              uVar23 = local_90;
              if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar27)
              goto LAB_14bcea98d;
              uVar23 = puVar17[lVar18 + 1];
            }
            uVar16 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
            lVar18 = 0x3f;
            if (uVar16 != 0) {
              for (; uVar16 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            uVar23 = (int)lVar18 + -1 + uVar28;
            if ((int)local_90 < (int)uVar23) {
              uVar23 = local_90;
            }
          }
LAB_14bcea98d:
          pTVar22 = (TSparseSetElement<TTuple<__int64,FDS_MaterialSlotInfoArray>_> *)0x0;
          uVar28 = (uint)local_180;
          while( true ) {
            plVar8 = local_100;
            if ((int)local_100[1] - *(int *)((longlong)local_100 + 0x34) != (int)uStack_d8) {
              `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_190);
              uVar28 = (uint)local_180;
            }
            pUVar21 = local_160;
            FVar24.Data = local_188.Data;
            if (((TStack_f8.CurrentBitIndex == uVar23) &&
                (TStack_f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10))) &&
               (plVar8 == (longlong *)local_b8)) break;
            lVar18 = *plVar8;
            uVar1 = *(undefined4 *)(lVar18 + (longlong)TStack_f8.CurrentBitIndex * 0x10);
            uVar2 = *(undefined4 *)(lVar18 + 4 + (longlong)TStack_f8.CurrentBitIndex * 0x10);
            if (uVar28 == local_180._4_4_) {
              uVar28 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x410,&local_188,(int *)((longlong)&local_180 + 4));
            }
            local_180 = CONCAT44(local_180._4_4_,uVar28 + 1);
            lVar18 = (longlong)(int)uVar28;
            *(undefined4 *)(local_188.Data + lVar18 * 0x10) = uVar1;
            *(undefined4 *)(local_188.Data + lVar18 * 0x10 + 4) = uVar2;
            *(undefined8 *)(local_188.Data + lVar18 * 0x10 + 8) = 0;
            TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
            uVar28 = (uint)local_180;
          }
          this_00 = &local_160->RepairMaterialInfoData;
          local_178.Data = (FScriptContainerElement *)0x0;
          local_170 = CONCAT44(local_170._4_4_,uVar28);
          if (uVar28 == 0) {
            local_170 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,uVar28,0,&local_178,uVar28,(int *)((longlong)&local_170 + 4));
            memcpy(local_178.Data,FVar24.Data,(longlong)(int)uVar28 << 4);
          }
          pUVar13 = FWeakObjectPtr::Get(&local_158);
          iVar27 = *(int *)&(pUVar21->RepairMaterialInfoData).field_0x34;
          uVar3 = *(undefined8 *)&pUVar13[8].field_0x8;
          if (iVar27 == 0) {
            iVar12 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x20,8,1,(ForAnyElementType *)this_00,
                                (int *)&(pUVar21->RepairMaterialInfoData).field_0x8,
                                (int *)&(pUVar21->RepairMaterialInfoData).field_0xc);
            TBitArray<FDefaultBitArrayAllocator>::Add
                      ((TBitArray<FDefaultBitArrayAllocator> *)
                       &(pUVar21->RepairMaterialInfoData).field_0x10,false);
          }
          else {
            iVar12 = *(int *)&(pUVar21->RepairMaterialInfoData).field_0x30;
            lVar18 = *(longlong *)&this_00->field_0x0;
            iVar26 = *(int *)((longlong)iVar12 * 0x20 + 4 + lVar18);
            iVar27 = iVar27 + -1;
            *(int *)&(pUVar21->RepairMaterialInfoData).field_0x30 = iVar26;
            *(int *)&(pUVar21->RepairMaterialInfoData).field_0x34 = iVar27;
            if (iVar27 != 0) {
              *(undefined4 *)((longlong)iVar26 * 0x20 + lVar18) = 0xffffffff;
            }
          }
          TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)this_00,&local_d0,iVar12);
          if (local_d0.Pointer !=
              (TSparseSetElement<TTuple<__int64,FDS_MaterialSlotInfoArray>_> *)0x0) {
            *(undefined8 *)((longlong)local_d0.Pointer + 8) = 0;
            *(undefined8 *)local_d0.Pointer = uVar3;
            *(FScriptContainerElement **)((longlong)local_d0.Pointer + 8) = local_178.Data;
            local_178.Data = (FScriptContainerElement *)0x0;
            *(undefined4 *)((longlong)local_d0.Pointer + 0x10) = (undefined4)local_170;
            *(undefined4 *)((longlong)local_d0.Pointer + 0x14) = local_170._4_4_;
            local_170 = 0;
            *(undefined4 *)((longlong)local_d0.Pointer + 0x18) = 0xffffffff;
            pTVar22 = local_d0.Pointer;
          }
          local_194 = local_d0.Index;
          uVar23 = (int)((ulonglong)*(undefined8 *)pTVar22 >> 0x20) * 0x17 +
                   (int)*(undefined8 *)pTVar22;
          bVar9 = TSet<TTuple<__int64,FDS_MaterialSlotInfoArray>,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>,FDefaultSetAllocator>
                  ::TryReplaceExisting
                            ((TSet<TTuple<__int64,FDS_MaterialSlotInfoArray>,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>,FDefaultSetAllocator>
                              *)this_00,uVar23,pTVar22,(int *)&local_194,(bool *)0x0);
          if (!bVar9) {
            TSet<TTuple<__int64,FDS_MaterialSlotInfoArray>,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>,FDefaultSetAllocator>
            ::RehashOrLink((TSet<TTuple<__int64,FDS_MaterialSlotInfoArray>,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>,FDefaultSetAllocator>
                            *)this_00,uVar23,pTVar22,local_194);
          }
          if (local_178.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_178.Data);
          }
          if (local_188.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.Data);
          }
          bVar9 = true;
        }
        local_70 = 0;
        if (local_78 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_78);
        }
        TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_b8);
        if ((FDS_RequiredMaterialInfo *)local_148.AllocatorInstance.Data ==
            (FDS_RequiredMaterialInfo *)0x0) {
          return bVar9;
        }
        FMemory::Free(local_148.AllocatorInstance.Data);
        return bVar9;
      }
    }
  }
  return false;
}

// ClearItemSlotUI @ 14bceb180

void __thiscall UDS_M_ItemRepair::ClearItemSlotUI(UDS_M_ItemRepair *this,long64 *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_M_InventoryBag *this_00;
  FWeakObjectPtr *this_01;
  UDS_M_ItemImplBase *this_02;
  UObject *pUVar3;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  undefined8 local_res20;
  TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_18;
  
  if (0 < *param_1) {
    bVar2 = FWeakObjectPtr::IsValid(&(this->RepairBagModel).WeakPtr);
    if (bVar2) {
      this_00 = (UDS_M_InventoryBag *)FWeakObjectPtr::Get(&(this->RepairBagModel).WeakPtr);
      UDS_M_InventoryBag::GetItemModelList(this_00,&local_18);
      this_01 = &TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                 ::FindByPredicate<_UDS_M_ItemRepair::ClearItemSlotUI_::__l2::<lambda_1>_>
                           (&local_18,(<lambda_1>)*param_1)->WeakPtr;
      if ((this_01 != (FWeakObjectPtr *)0x0) && (bVar2 = FWeakObjectPtr::IsValid(this_01), bVar2)) {
        local_res10 = *this_01;
        bVar2 = FWeakObjectPtr::IsValid(&local_res10);
        if (bVar2) {
          this_02 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&local_res10);
          UDS_M_ItemImplBase::SetSubtract(this_02,false);
          pUVar3 = FWeakObjectPtr::Get(&local_res10);
          local_res18.ObjectIndex = 0;
          local_res18.ObjectSerialNumber = 0;
          local_res20 = 0;
          pcVar1 = *(code **)(*(longlong *)pUVar3 + 0x2e0);
          FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
          (*pcVar1)(pUVar3,local_res18,1);
        }
      }
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// ClearRepairList @ 14bceb390

void __thiscall UDS_M_ItemRepair::ClearRepairList(UDS_M_ItemRepair *this)

{
  int *piVar1;
  undefined1 *puVar2;
  TMap<__int64,FDS_MaterialSlotInfoArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>_>
  *this_00;
  TMap<int,FDS_MaterialSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>_>
  *this_01;
  TMap<int,FDS_RequiredMaterialInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>_>
  *this_02;
  int iVar3;
  bool bVar4;
  
  piVar1 = &(this->BulkRepairTargetArray).ArrayMax;
  (this->BulkRepairTargetArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->BulkRepairTargetArray).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->RegisteredRepairItemList).ArrayMax;
  (this->RegisteredRepairItemList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->RegisteredRepairItemList).AllocatorInstance,0,piVar1);
  }
  this_00 = &this->RepairMaterialInfoData;
  bVar4 = 1 < *(int *)&(this->RepairMaterialInfoData).field_0x48;
  if (!bVar4) {
    TSet<TTuple<__int64,FDS_MaterialSlotInfoArray>,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<__int64,FDS_MaterialSlotInfoArray>,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,FDS_MaterialSlotInfoArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<__int64,FDS_MaterialSlotInfoArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->RepairMaterialInfoData).field_0x8);
  puVar2 = &(this->RepairMaterialInfoData).field_0xc;
  *(undefined4 *)&(this->RepairMaterialInfoData).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->RepairMaterialInfoData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RepairMaterialInfoData).field_0x34 = 0;
  iVar3 = *(int *)&(this->RepairMaterialInfoData).field_0x2c;
  *(undefined4 *)&(this->RepairMaterialInfoData).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->RepairMaterialInfoData).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->RepairMaterialInfoData).field_0x10,0)
    ;
  }
  if (bVar4) {
    *(undefined4 *)&(this->RepairMaterialInfoData).field_0x48 = 1;
    TSet<TTuple<__int64,FDS_MaterialSlotInfoArray>,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<__int64,FDS_MaterialSlotInfoArray>,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>,FDefaultSetAllocator>
              *)this_00);
  }
  this_01 = &this->TargetRepairSelectedMaterialsMap;
  bVar4 = 1 < *(int *)&(this->TargetRepairSelectedMaterialsMap).field_0x48;
  if (!bVar4) {
    TSet<TTuple<int,FDS_MaterialSlotInfo>,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,FDS_MaterialSlotInfo>,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  puVar2 = &(this->TargetRepairSelectedMaterialsMap).field_0xc;
  *(undefined4 *)&(this->TargetRepairSelectedMaterialsMap).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)this_01,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->TargetRepairSelectedMaterialsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TargetRepairSelectedMaterialsMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->TargetRepairSelectedMaterialsMap).field_0x2c;
  *(undefined4 *)&(this->TargetRepairSelectedMaterialsMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->TargetRepairSelectedMaterialsMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->TargetRepairSelectedMaterialsMap).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->TargetRepairSelectedMaterialsMap).field_0x48 = 1;
    TSet<TTuple<int,FDS_MaterialSlotInfo>,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,FDS_MaterialSlotInfo>,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>,FDefaultSetAllocator>
              *)this_01);
  }
  this_02 = &this->TargetRepairRequiredMaterialsMap;
  bVar4 = 1 < *(int *)&(this->TargetRepairRequiredMaterialsMap).field_0x48;
  if (!bVar4) {
    TSet<TTuple<int,FDS_RequiredMaterialInfo>,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,FDS_RequiredMaterialInfo>,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>,FDefaultSetAllocator>
                      *)this_02);
  }
  puVar2 = &(this->TargetRepairRequiredMaterialsMap).field_0xc;
  *(undefined4 *)&(this->TargetRepairRequiredMaterialsMap).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)this_02,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->TargetRepairRequiredMaterialsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TargetRepairRequiredMaterialsMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->TargetRepairRequiredMaterialsMap).field_0x2c;
  *(undefined4 *)&(this->TargetRepairRequiredMaterialsMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->TargetRepairRequiredMaterialsMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->TargetRepairRequiredMaterialsMap).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->TargetRepairRequiredMaterialsMap).field_0x48 = 1;
    TSet<TTuple<int,FDS_RequiredMaterialInfo>,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,FDS_RequiredMaterialInfo>,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>,FDefaultSetAllocator>
              *)this_02);
  }
  piVar1 = &(this->RestoreIngredientInfoArray).ArrayMax;
  (this->RestoreIngredientInfoArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->RestoreIngredientInfoArray).AllocatorInstance,0,piVar1);
  }
  FDS_DataContainer::SetData<int,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,RegisterItemUID,0);
  FDS_DataContainer::SetData<int,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,RegisterItemTID,0);
  FDS_DataContainer::SetData<int,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,RestoreTID,0);
  FDS_DataContainer::SetData<int,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,RestoreTID,0);
  FDS_DataContainer::SetData<int,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,RepairedDurabilityPercent,0);
  FDS_DataContainer::SetData<int,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,RepairMoneyValue,0);
  FDS_DataContainer::SetData<bool,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,HasEnoughRepairMaterials,false);
  FDS_DataContainer::SetData<bool,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,HasEnoughRepairMoney,false);
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// GetMaxMaterialQuantity @ 14bcf90f0

int __thiscall UDS_M_ItemRepair::GetMaxMaterialQuantity(UDS_M_ItemRepair *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  FDS_MaterialSlotInfo *pFVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->TargetRepairSelectedMaterialsMap).field_0x8 !=
      *(int *)&(this->TargetRepairSelectedMaterialsMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->TargetRepairSelectedMaterialsMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->TargetRepairSelectedMaterialsMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->TargetRepairSelectedMaterialsMap).field_0x48 - 1U &
                              param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->TargetRepairSelectedMaterialsMap;
      do {
        if (*(int *)((longlong)iVar2 * 0x1c + lVar1) == param_1) {
          pFVar3 = TMapBase<int,FDS_MaterialSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>_>
                   ::FindChecked((TMapBase<int,FDS_MaterialSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>_>
                                  *)&this->TargetRepairSelectedMaterialsMap,param_1);
          return pFVar3->AvaliableMaxQuantity;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x1c + 0x14 + lVar1);
      } while (iVar2 != -1);
    }
  }
  return 0;
}

// GetPlayerMaterialCounts @ 14bcf9a20

TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> * __thiscall
UDS_M_ItemRepair::GetPlayerMaterialCounts
          (UDS_M_ItemRepair *this,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
          *__return_storage_ptr__)

{
  FWeakObjectPtr *pFVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  UDS_ItemDataSet *this_00;
  UObject *pUVar5;
  uint *puVar6;
  int iVar7;
  UObject *pUVar8;
  int iVar9;
  undefined1 *puVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  uint uVar13;
  FWeakObjectPtr local_res10;
  uint local_res18 [2];
  int local_res20 [2];
  FWeakObjectPtr local_48;
  uint *local_40;
  TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_38;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  uVar13 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  DS_ItemDataUtil::GetItemDataSet();
  bVar3 = FWeakObjectPtr::IsValid(&local_48);
  if (bVar3) {
    this_00 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_48);
    UDS_ItemDataSet::GetItemDataList(this_00,&local_38);
    iVar7 = local_38.ArrayNum;
    pFVar1 = (FWeakObjectPtr *)(local_38.AllocatorInstance.Data + (longlong)iVar7 * 8);
    FVar11.Data = local_38.AllocatorInstance.Data;
    while( true ) {
      if (local_38.ArrayNum != iVar7) {
        `TCheckedPointerIterator<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_res10);
      }
      if ((FWeakObjectPtr *)FVar11.Data == pFVar1) break;
      local_res10 = *(FWeakObjectPtr *)FVar11.Data;
      bVar3 = FWeakObjectPtr::IsValid(&local_res10);
      if (bVar3) {
        pUVar5 = FWeakObjectPtr::Get(&local_res10);
        uVar12 = uVar13;
        if (*(int *)&pUVar5[8].field_0x20 != *(int *)&pUVar5[9].field_0x24) {
          pUVar8 = pUVar5 + 10;
          if (*(UObject **)&pUVar5[10].field_0x8 != (UObject *)0x0) {
            pUVar8 = *(UObject **)&pUVar5[10].field_0x8;
          }
          iVar9 = *(int *)(&pUVar8->field_0x0 +
                          (ulonglong)(*(int *)&pUVar5[10].field_0x10 - 1U & 1) * 4);
          if (iVar9 != -1) {
            lVar2 = *(longlong *)&pUVar5[8].field_0x18;
            do {
              if (*(char *)(lVar2 + (longlong)iVar9 * 0x10) == '\x01') {
                puVar6 = (uint *)TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                                 ::FindChecked(&pUVar5[8].field_0x18,PlayerNormal);
                uVar12 = *puVar6;
                break;
              }
              iVar9 = *(int *)(lVar2 + 8 + (longlong)iVar9 * 0x10);
            } while (iVar9 != -1);
          }
        }
        pUVar5 = FWeakObjectPtr::Get(&local_res10);
        local_res18[0] = *(uint *)&pUVar5[8].field_0x10;
        if (*(int *)&__return_storage_ptr__->field_0x8 !=
            *(int *)&__return_storage_ptr__->field_0x34) {
          puVar10 = &__return_storage_ptr__->field_0x38;
          if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
            puVar10 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
          }
          uVar4 = *(uint *)(puVar10 +
                           (ulonglong)
                           (*(int *)&__return_storage_ptr__->field_0x48 - 1U & local_res18[0]) * 4);
          if (uVar4 != 0xffffffff) {
            do {
              puVar6 = (uint *)((longlong)(int)uVar4 * 0x10 + *(longlong *)__return_storage_ptr__);
              if (*puVar6 == local_res18[0]) {
                if (puVar6 != (uint *)0x0) goto LAB_14bcf9bf1;
                break;
              }
              uVar4 = puVar6[2];
            } while (uVar4 != 0xffffffff);
          }
        }
        local_40 = local_res18;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        EmplaceByHash<TKeyInitializer<int_&&>_>
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)__return_storage_ptr__,(uint)local_res20,
                   (TKeyInitializer<int_&&> *)(ulonglong)local_res18[0],(bool *)&local_40);
        puVar6 = (uint *)((longlong)local_res20[0] * 0x10 + *(longlong *)__return_storage_ptr__);
LAB_14bcf9bf1:
        puVar6[1] = uVar12;
      }
      FVar11.Data = FVar11.Data + 8;
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetRegisteredBulkRepairItemList @ 14bcfa4f0

TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_M_ItemRepair::GetRegisteredBulkRepairItemList
          (UDS_M_ItemRepair *this,
          TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  FWeakObjectPtr *pFVar6;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar6 = (FWeakObjectPtr *)(this->RegisteredRepairItemList).AllocatorInstance.Data;
  iVar2 = (this->RegisteredRepairItemList).ArrayNum;
  pFVar1 = pFVar6 + iVar2;
  while( true ) {
    if ((this->RegisteredRepairItemList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar6 == pFVar1) break;
    local_res8 = *pFVar6;
    pUVar5 = FWeakObjectPtr::Get(&local_res8);
    (**(code **)(*(longlong *)pUVar5 + 0x3a0))(pUVar5,&local_res10);
    bVar3 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar3) {
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      *(FWeakObjectPtr *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_res10;
    }
    pFVar6 = pFVar6 + 1;
  }
  return __return_storage_ptr__;
}

// GetRegisteredBulkRepairItemMaterials @ 14bcfa5c0

TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> * __thiscall
UDS_M_ItemRepair::GetRegisteredBulkRepairItemMaterials
          (UDS_M_ItemRepair *this,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
          *__return_storage_ptr__)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::operator=
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             __return_storage_ptr__,
             (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->TotalBulkMaterialsMap);
  return __return_storage_ptr__;
}

// GetRepairMoneyValue @ 14bcfa850

long64 __thiscall UDS_M_ItemRepair::GetRepairMoneyValue(UDS_M_ItemRepair *this)

{
  undefined8 uVar1;
  uint uVar2;
  FName FVar3;
  FString *pFVar4;
  longlong lVar5;
  wchar_t *_Str;
  
  FVar3 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                    ((FDS_DataContainer *)&this->_padding_,RepairedDurabilityPercent);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  if ((pFVar4->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  lVar5 = _wtoi64(_Str);
  return lVar5;
}

// GetRequiredMaterialsForRepairItem @ 14bcfa8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FDS_RequiredMaterialInfo,TSizedDefaultAllocator<32>_> * __thiscall
UDS_M_ItemRepair::GetRequiredMaterialsForRepairItem
          (UDS_M_ItemRepair *this,
          TArray<FDS_RequiredMaterialInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  float fVar9;
  char cVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  FName FVar16;
  FString *pFVar17;
  FDS_ItemBaseTableRow *this_00;
  FDS_ItemRepairTableRow *this_01;
  longlong *plVar18;
  TArray<FDS_ItemBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar19;
  UDS_LogManager *pUVar20;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *pTVar21;
  TArray<FDS_RequiredMaterialInfo,TSizedDefaultAllocator<32>_> *pTVar22;
  wchar_t *_Str;
  ulonglong uVar23;
  ForElementType<FSetElementId> FVar24;
  uint *puVar25;
  uint uVar26;
  longlong *plVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong *plVar30;
  uint uVar31;
  undefined1 auStackY_2c8 [32];
  int local_294;
  FScriptContainerElement *local_280;
  undefined4 uStack_25c;
  undefined4 uStack_24c;
  undefined1 local_240 [8];
  TArray<FDS_ItemBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_238;
  TArray<FDS_ItemBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_228;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_218;
  undefined1 local_1c8 [72];
  undefined4 local_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FVar16 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                     ((FDS_DataContainer *)&this->_padding_,(EDS_ItemRepairData)local_240);
  uVar6 = *(undefined8 *)FVar16;
  uVar12 = ::GetTypeHash((FNameEntryId)(uint)uVar6);
  pFVar17 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)&this->_padding_,uVar12 + (int)((ulonglong)uVar6 >> 0x20),(FName *)FVar16)
  ;
  if ((pFVar17->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
  }
  iVar13 = _wtoi(_Str);
  cVar10 = (char)iVar13;
  if (cVar10 != '\0') {
    this_00 = FDS_ItemBaseTableRow::GetRef((longlong)param_1,true);
    bVar11 = FDS_ItemBaseTableRow::IsValid(this_00);
    if (bVar11) {
      this_01 = FDS_ItemRepairTableRow::GetRef((longlong)this_00->ID_Repair,true);
      bVar11 = FDS_ItemRepairTableRow::IsValid(this_01);
      if (bVar11) {
        lVar29 = 0x10;
        if (cVar10 != '\x14') {
          lVar29 = 0x40;
        }
        plVar30 = (longlong *)((longlong)&this_01->_padding_ + lVar29);
        lVar29 = 0x20;
        if (cVar10 != '\x14') {
          lVar29 = 0x50;
        }
        plVar27 = (longlong *)((longlong)&this_01->_padding_ + lVar29);
        lVar29 = 0x30;
        if (cVar10 != '\x14') {
          lVar29 = 0x60;
        }
        plVar18 = (longlong *)((longlong)&this_01->_padding_ + lVar29);
        if (cVar10 == '\x14') {
          pTVar19 = FDS_ItemRepairTableRow::ID_NpcRepairItemTables(this_01,&local_238);
          local_280 = (pTVar19->AllocatorInstance).Data;
          (pTVar19->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          local_294 = pTVar19->ArrayNum;
          pTVar19->ArrayNum = 0;
          pTVar19->ArrayMax = 0;
          if (local_238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_238.AllocatorInstance.Data);
          }
        }
        else {
          pTVar19 = FDS_ItemRepairTableRow::ID_CampRepairItemTables(this_01,&local_228);
          local_280 = (pTVar19->AllocatorInstance).Data;
          (pTVar19->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          local_294 = pTVar19->ArrayNum;
          pTVar19->ArrayNum = 0;
          pTVar19->ArrayMax = 0;
          if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_228.AllocatorInstance.Data);
          }
        }
        iVar13 = (int)plVar30[1];
        if (iVar13 == (int)plVar27[1]) {
          local_218.Elements._0_8_ = 0;
          local_218.Elements._8_8_ = 0;
          local_218.Elements._32_8_ = 0;
          local_218.Elements._40_4_ = 0;
          local_218.Elements._44_4_ = 0x80;
          local_218.Elements._48_4_ = 0xffffffff;
          local_218.Elements._52_4_ = 0;
          local_218.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          local_218.HashSize = 0;
          if (param_2) {
            pTVar21 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                       *)GetPlayerMaterialCounts
                                   (this,(TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                          *)local_1c8);
            if (&local_218 != pTVar21) {
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
              Move<TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>_>
                        (&local_218,pTVar21);
            }
            local_180 = 0;
            if ((void *)local_1c8._64_8_ != (void *)0x0) {
              FMemory::Free((void *)local_1c8._64_8_);
            }
            TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_1c8);
          }
          fVar9 = __real_322bcc76;
          uVar23 = 0;
          uVar28 = uVar23;
          if (0 < iVar13) {
            do {
              uVar26 = (uint)uVar23;
              uVar31 = ~uVar26 >> 0x1f;
              uVar12 = 0;
              if ((int)uVar26 < (int)plVar30[1]) {
                uVar12 = uVar31;
              }
              if ((uVar12 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar8 = (code *)swi(3);
                pTVar22 = (TArray<FDS_RequiredMaterialInfo,TSizedDefaultAllocator<32>_> *)
                          (*pcVar8)();
                return pTVar22;
              }
              uVar12 = *(uint *)(*plVar30 + uVar28 * 4);
              if (param_2) {
                if (local_218.Elements._8_4_ != local_218.Elements._52_4_) {
                  FVar24 = (ForElementType<FSetElementId>)&local_218.Hash;
                  if (local_218.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                    FVar24 = local_218.Hash.SecondaryData;
                  }
                  uVar14 = *(uint *)((longlong)FVar24 +
                                    (ulonglong)(local_218.HashSize - 1U & uVar12) * 4);
                  while (uVar14 != 0xffffffff) {
                    puVar25 = (uint *)((longlong)(int)uVar14 * 0x10 + local_218.Elements._0_8_);
                    if (*puVar25 == uVar12) {
                      if ((puVar25 != (uint *)0x0) && (0 < (int)puVar25[1])) goto LAB_14bcfac60;
                      break;
                    }
                    uVar14 = puVar25[2];
                  }
                }
              }
              else {
LAB_14bcfac60:
                if ((-1 < (int)uVar26) && ((int)uVar26 < local_294)) {
                  if (((int)uVar26 < 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar8 = (code *)swi(3);
                    pTVar22 = (TArray<FDS_RequiredMaterialInfo,TSizedDefaultAllocator<32>_> *)
                              (*pcVar8)();
                    return pTVar22;
                  }
                  if (*(longlong *)(local_280 + uVar28 * 8) != 0) {
                    if (((int)uVar26 < 0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar11)) {
                      pcVar8 = (code *)swi(3);
                      pTVar22 = (TArray<FDS_RequiredMaterialInfo,TSizedDefaultAllocator<32>_> *)
                                (*pcVar8)();
                      return pTVar22;
                    }
                    iVar2 = *(int *)(*(longlong *)(local_280 + uVar28 * 8) + 0x9c);
                    uVar14 = 0;
                    if ((int)uVar26 < (int)plVar27[1]) {
                      uVar14 = uVar31;
                    }
                    if ((uVar14 == 0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar11)) {
                      pcVar8 = (code *)swi(3);
                      pTVar22 = (TArray<FDS_RequiredMaterialInfo,TSizedDefaultAllocator<32>_> *)
                                (*pcVar8)();
                      return pTVar22;
                    }
                    iVar3 = *(int *)(*plVar27 + uVar28 * 4);
                    uVar14 = 0;
                    if ((int)uVar26 < (int)plVar18[1]) {
                      uVar14 = uVar31;
                    }
                    if ((uVar14 == 0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar11)) {
                      pcVar8 = (code *)swi(3);
                      pTVar22 = (TArray<FDS_RequiredMaterialInfo,TSizedDefaultAllocator<32>_> *)
                                (*pcVar8)();
                      return pTVar22;
                    }
                    uVar4 = *(undefined4 *)(*plVar18 + uVar28 * 4);
                    uVar14 = 0;
                    if ((int)uVar26 < (int)plVar27[1]) {
                      uVar14 = uVar31;
                    }
                    if ((uVar14 == 0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar11)) {
                      pcVar8 = (code *)swi(3);
                      pTVar22 = (TArray<FDS_RequiredMaterialInfo,TSizedDefaultAllocator<32>_> *)
                                (*pcVar8)();
                      return pTVar22;
                    }
                    iVar5 = *(int *)(*plVar27 + uVar28 * 4);
                    iVar15 = __return_storage_ptr__->ArrayNum;
                    if (iVar15 == __return_storage_ptr__->ArrayMax) {
                      iVar15 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x820,&__return_storage_ptr__->AllocatorInstance,
                                          &__return_storage_ptr__->ArrayMax);
                    }
                    __return_storage_ptr__->ArrayNum = iVar15 + 1;
                    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
                    pFVar1 = pFVar7 + (longlong)iVar15 * 0x20;
                    *(ulonglong *)pFVar1 = CONCAT44(uStack_25c,uVar12);
                    *(longlong *)(pFVar1 + 8) = (longlong)iVar5;
                    pFVar7 = pFVar7 + (longlong)iVar15 * 0x20 + 0x10;
                    *(ulonglong *)pFVar7 = CONCAT44(uStack_24c,uVar4);
                    *(longlong *)(pFVar7 + 8) =
                         (longlong)(int)(longlong)((float)iVar3 * (float)(longlong)iVar2 * fVar9);
                  }
                }
              }
              uVar23 = (ulonglong)(uVar26 + 1);
              uVar28 = uVar28 + 1;
            } while ((longlong)uVar28 < (longlong)iVar13);
          }
          local_218.HashSize = 0;
          if (local_218.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_218.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_218.Elements);
        }
        else {
          pUVar20 = UDS_LogManager::GetInst();
          if (pUVar20 != (UDS_LogManager *)0x0) {
            pUVar20 = UDS_LogManager::GetInst();
            local_178._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_178,"UDS_M_ItemRepair::GetRequiredMaterialsForRepairItem",0x33,Yes);
            UDS_LogManager::PrintLog
                      (pUVar20,1,Warning,local_178.Ptr,0x3ec,
                       L"Data error in [ItemRepairTableRow]: Required TIDs array size does not match EfficiencyRates array size"
                      );
            if ((void *)local_178._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_178._padding_);
            }
          }
        }
        if (local_280 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_280);
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRequiredMaterialsForRepairItem @ 14bcfaf10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TMap<int,FDS_RequiredMaterialInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>_>
* __thiscall
UDS_M_ItemRepair::GetRequiredMaterialsForRepairItem
          (UDS_M_ItemRepair *this,
          TMap<int,FDS_RequiredMaterialInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>_>
          *__return_storage_ptr__,int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  FDS_RequiredMaterialInfo *pFVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FName FVar11;
  FString *pFVar12;
  FDS_ItemBaseTableRow *this_00;
  FDS_ItemRepairTableRow *this_01;
  TArray<FDS_ItemBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar13;
  UDS_LogManager *pUVar14;
  TMap<int,FDS_RequiredMaterialInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>_>
  *pTVar15;
  wchar_t *_Str;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  longlong *plVar20;
  ulonglong uVar21;
  longlong *plVar22;
  undefined1 auStackY_288 [32];
  int local_258;
  undefined4 local_254;
  FScriptContainerElement *local_250;
  longlong *local_248;
  TPairInitializer<int_const_&,FDS_RequiredMaterialInfo_&&> local_240;
  longlong local_230;
  longlong local_228;
  undefined4 *local_220;
  undefined4 *local_218;
  undefined4 local_210 [2];
  longlong local_208;
  undefined4 local_200;
  longlong local_1f8;
  undefined1 local_1f0 [8];
  TArray<FDS_ItemBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_1e8;
  TArray<FDS_ItemBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_1d8;
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_1c8;
  void *local_188;
  undefined4 local_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_288;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  FVar11 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                     ((FDS_DataContainer *)&this->_padding_,(EDS_ItemRepairData)local_1f0);
  uVar2 = *(undefined8 *)FVar11;
  uVar9 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  pFVar12 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)&this->_padding_,uVar9 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar11);
  if ((pFVar12->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
  }
  iVar10 = _wtoi(_Str);
  cVar7 = (char)iVar10;
  if (cVar7 != '\0') {
    this_00 = FDS_ItemBaseTableRow::GetRef((longlong)param_1,true);
    bVar8 = FDS_ItemBaseTableRow::IsValid(this_00);
    if (bVar8) {
      this_01 = FDS_ItemRepairTableRow::GetRef((longlong)this_00->ID_Repair,true);
      bVar8 = FDS_ItemRepairTableRow::IsValid(this_01);
      if (bVar8) {
        lVar19 = 0x10;
        if (cVar7 != '\x14') {
          lVar19 = 0x40;
        }
        plVar20 = (longlong *)((longlong)&this_01->_padding_ + lVar19);
        lVar19 = 0x20;
        if (cVar7 != '\x14') {
          lVar19 = 0x50;
        }
        plVar22 = (longlong *)((longlong)&this_01->_padding_ + lVar19);
        lVar19 = 0x30;
        if (cVar7 != '\x14') {
          lVar19 = 0x60;
        }
        local_240.Value = (FDS_RequiredMaterialInfo *)((longlong)&this_01->_padding_ + lVar19);
        local_248 = plVar20;
        if (cVar7 == '\x14') {
          pTVar13 = FDS_ItemRepairTableRow::ID_NpcRepairItemTables(this_01,&local_1e8);
          pFVar3 = (pTVar13->AllocatorInstance).Data;
          (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          local_258 = pTVar13->ArrayNum;
          pTVar13->ArrayNum = 0;
          pTVar13->ArrayMax = 0;
          local_250 = pFVar3;
          if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e8.AllocatorInstance.Data);
            local_250 = pFVar3;
          }
        }
        else {
          pTVar13 = FDS_ItemRepairTableRow::ID_CampRepairItemTables(this_01,&local_1d8);
          pFVar3 = (pTVar13->AllocatorInstance).Data;
          (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          local_258 = pTVar13->ArrayNum;
          pTVar13->ArrayNum = 0;
          pTVar13->ArrayMax = 0;
          local_250 = pFVar3;
          if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.AllocatorInstance.Data);
            local_250 = pFVar3;
          }
        }
        pFVar3 = local_250;
        fVar5 = __real_322bcc76;
        uVar16 = 0;
        lVar19 = (longlong)(int)plVar20[1];
        if ((int)plVar20[1] == (int)plVar22[1]) {
          local_1c8._0_8_ = 0;
          local_1c8._8_8_ = 0;
          local_1c8._32_8_ = 0;
          local_1c8._40_4_ = 0;
          local_1c8._44_4_ = 0x80;
          local_1c8._48_4_ = 0xffffffff;
          local_1c8._52_4_ = 0;
          local_188 = (void *)0x0;
          uVar21 = uVar16;
          local_228 = lVar19;
          if (0 < lVar19) {
            do {
              uVar17 = (uint)uVar16;
              uVar18 = ~uVar17 >> 0x1f;
              uVar9 = 0;
              if ((int)uVar17 < (int)local_248[1]) {
                uVar9 = uVar18;
              }
              if ((uVar9 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar4 = (code *)swi(3);
                pTVar15 = (TMap<int,FDS_RequiredMaterialInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>_>
                           *)(*pcVar4)();
                return pTVar15;
              }
              local_254 = *(undefined4 *)(*local_248 + uVar21 * 4);
              if ((-1 < (int)uVar17) && ((int)uVar17 < local_258)) {
                if (((int)uVar17 < 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  pTVar15 = (TMap<int,FDS_RequiredMaterialInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>_>
                             *)(*pcVar4)();
                  return pTVar15;
                }
                if (*(longlong *)(pFVar3 + uVar21 * 8) != 0) {
                  if (((int)uVar17 < 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar4 = (code *)swi(3);
                    pTVar15 = (TMap<int,FDS_RequiredMaterialInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>_>
                               *)(*pcVar4)();
                    return pTVar15;
                  }
                  iVar10 = *(int *)(*(longlong *)(pFVar3 + uVar21 * 8) + 0x9c);
                  uVar9 = 0;
                  if ((int)uVar17 < (int)plVar22[1]) {
                    uVar9 = uVar18;
                  }
                  if ((uVar9 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar4 = (code *)swi(3);
                    pTVar15 = (TMap<int,FDS_RequiredMaterialInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>_>
                               *)(*pcVar4)();
                    return pTVar15;
                  }
                  pFVar6 = local_240.Value;
                  local_230 = (longlong)
                              ((float)*(int *)(*plVar22 + uVar21 * 4) * (float)(longlong)iVar10 *
                              fVar5);
                  uVar9 = 0;
                  if ((int)uVar17 < (int)(local_240.Value)->RepairEfficiency) {
                    uVar9 = uVar18;
                  }
                  if ((uVar9 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar4 = (code *)swi(3);
                    pTVar15 = (TMap<int,FDS_RequiredMaterialInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>_>
                               *)(*pcVar4)();
                    return pTVar15;
                  }
                  uVar1 = *(undefined4 *)(*(longlong *)pFVar6 + uVar21 * 4);
                  uVar9 = 0;
                  if ((int)uVar17 < (int)plVar22[1]) {
                    uVar9 = uVar18;
                  }
                  if ((uVar9 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar4 = (code *)swi(3);
                    pTVar15 = (TMap<int,FDS_RequiredMaterialInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>_>
                               *)(*pcVar4)();
                    return pTVar15;
                  }
                  local_208 = (longlong)*(int *)(*plVar22 + uVar21 * 4);
                  local_210[0] = local_254;
                  local_1f8 = (longlong)(int)local_230;
                  local_220 = &local_254;
                  local_218 = local_210;
                  local_200 = uVar1;
                  TSet<TTuple<int,FDS_RequiredMaterialInfo>,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<int_const_&,FDS_RequiredMaterialInfo_&&>_>
                            ((TSet<TTuple<int,FDS_RequiredMaterialInfo>,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>,FDefaultSetAllocator>
                              *)__return_storage_ptr__,&local_240,(bool *)&local_220);
                }
              }
              uVar16 = (ulonglong)(uVar17 + 1);
              uVar21 = uVar21 + 1;
            } while ((longlong)uVar21 < local_228);
          }
          local_180 = 0;
          if (local_188 != (void *)0x0) {
            FMemory::Free(local_188);
          }
          TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_1c8);
          pFVar3 = local_250;
        }
        else {
          pUVar14 = UDS_LogManager::GetInst();
          if (pUVar14 != (UDS_LogManager *)0x0) {
            pUVar14 = UDS_LogManager::GetInst();
            local_178._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_178,"UDS_M_ItemRepair::GetRequiredMaterialsForRepairItem",0x33,Yes);
            UDS_LogManager::PrintLog
                      (pUVar14,1,Warning,local_178.Ptr,0x430,
                       L"Data error in [ItemRepairTableRow]: Required TIDs array size does not match EfficiencyRates array size"
                      );
            if ((void *)local_178._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_178._padding_);
            }
          }
        }
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRequiredMaterialsForRestoreItem @ 14bcfb4a0

TArray<FDS_RequiredMaterialInfo,TSizedDefaultAllocator<32>_> * __thiscall
UDS_M_ItemRepair::GetRequiredMaterialsForRestoreItem
          (UDS_M_ItemRepair *this,
          TArray<FDS_RequiredMaterialInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FDS_ItemBaseTableRow *this_00;
  FDS_ItemRestoreTableRow *this_01;
  TArray<FDS_RequiredMaterialInfo,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined4 uStack_44;
  longlong lStack_30;
  
  uVar10 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = FDS_ItemBaseTableRow::GetRef((longlong)param_1,true);
  bVar5 = FDS_ItemBaseTableRow::IsValid(this_00);
  if (!bVar5) {
    return __return_storage_ptr__;
  }
  this_01 = FDS_ItemRestoreTableRow::GetRef((longlong)this_00->ID_Restore,true);
  bVar5 = FDS_ItemRestoreTableRow::IsValid(this_01);
  if (bVar5) {
    lVar11 = (longlong)(this_01->ID_IngredientItem).ArrayNum;
    uVar12 = uVar10;
    if (0 < lVar11) {
      do {
        uVar9 = (uint)uVar10;
        uVar6 = 0;
        if ((int)uVar9 < (this_01->ID_IngredientItem).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<FDS_RequiredMaterialInfo,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        uVar2 = *(undefined4 *)((this_01->ID_IngredientItem).AllocatorInstance.Data + uVar12 * 4);
        uVar6 = 0;
        if ((int)uVar9 < (this_01->IngredientItemValue).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<FDS_RequiredMaterialInfo,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        uVar6 = *(uint *)((this_01->IngredientItemValue).AllocatorInstance.Data + uVar12 * 4);
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == __return_storage_ptr__->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        uVar10 = (ulonglong)(uVar9 + 1);
        __return_storage_ptr__->ArrayNum = iVar7 + 1;
        uVar12 = uVar12 + 1;
        pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
        pFVar1 = pFVar3 + (longlong)iVar7 * 0x20;
        *(ulonglong *)pFVar1 = CONCAT44(uStack_44,uVar2);
        *(undefined8 *)(pFVar1 + 8) = 0;
        pFVar3 = pFVar3 + (longlong)iVar7 * 0x20 + 0x10;
        *(ulonglong *)pFVar3 = (ulonglong)uVar6 << 0x20;
        *(longlong *)(pFVar3 + 8) = lStack_30;
      } while ((longlong)uVar12 < lVar11);
    }
  }
  return __return_storage_ptr__;
}

// GetRestoreTime @ 14bcfb680

float __thiscall UDS_M_ItemRepair::GetRestoreTime(UDS_M_ItemRepair *this)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FName FVar5;
  FString *pFVar6;
  FDS_ItemBaseTableRow *this_00;
  FDS_ItemRestoreTableRow *this_01;
  wchar_t *_Str;
  
  FVar5 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                    ((FDS_DataContainer *)&this->_padding_,RepairedDurabilityPercent);
  uVar1 = *(undefined8 *)FVar5;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar6 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar5);
  if ((pFVar6->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  iVar4 = _wtoi(_Str);
  this_00 = FDS_ItemBaseTableRow::GetRef((longlong)iVar4,true);
  bVar2 = FDS_ItemBaseTableRow::IsValid(this_00);
  if (bVar2) {
    this_01 = FDS_ItemBaseTableRow::ID_RestoreTable(this_00);
    bVar2 = FDS_ItemRestoreTableRow::IsValid(this_01);
    if (bVar2) {
      return (float)this_01->RestoreTimeSec;
    }
  }
  return 0.0;
}

// GetTargetRepairDurability @ 14bcfd1e0

float __thiscall UDS_M_ItemRepair::GetTargetRepairDurability(UDS_M_ItemRepair *this)

{
  undefined8 uVar1;
  uint uVar2;
  FName FVar3;
  FString *pFVar4;
  wchar_t *_Str;
  float fVar5;
  longlong local_res8;
  
  FVar3 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_ItemRepairData)&local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  if ((pFVar4->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  local_res8 = _wtoi64(_Str);
  fVar5 = GetTargetRepairDurability
                    (this,&local_res8,&this->TargetRepairSelectedMaterialsMap,
                     &this->TargetRepairRequiredMaterialsMap);
  return fVar5;
}

// GetTargetRepairDurability @ 14bcfd280

float __thiscall
UDS_M_ItemRepair::GetTargetRepairDurability
          (UDS_M_ItemRepair *this,long64 *param_1,
          TMap<int,FDS_MaterialSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>_>
          *param_2,TMap<int,FDS_RequiredMaterialInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>_>
                   *param_3)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  long64 lVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  TMap<int,FDS_MaterialSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>_>
  *pTVar11;
  bool bVar12;
  UObject *pUVar13;
  FDS_RequiredMaterialInfo *pFVar14;
  longlong lVar15;
  undefined1 *puVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  float fVar22;
  undefined1 local_res10 [8];
  FWeakObjectPtr local_108;
  FWeakObjectPtr local_100;
  TMap<int,FDS_MaterialSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>_>
  *local_f8;
  int iStack_f0;
  uint uStack_ec;
  undefined1 *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  int local_c8;
  TMap<int,FDS_MaterialSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  
  fVar22 = 0.0;
  if ((*param_1 != 0) && (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34)) {
    DS_ItemDataUtil::GetItemDataByUID((long64)&local_100);
    bVar12 = FWeakObjectPtr::IsValid(&local_100);
    if (bVar12) {
      iVar3 = *(int *)&param_2->field_0x28;
      iStack_f0 = 0;
      uStack_ec = 1;
      puVar2 = &param_2->field_0x10;
      local_d8 = 0;
      iStack_dc = 0;
      if (iVar3 != 0) {
        puVar20 = *(uint **)&param_2->field_0x20;
        if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
          puVar20 = (uint *)puVar2;
        }
        uVar18 = *puVar20;
        while (uVar18 == 0) {
          lVar15 = (longlong)iStack_f0;
          local_d8 = local_d8 + 0x20;
          iStack_f0 = iStack_f0 + 1;
          iStack_dc = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f0) goto LAB_14bcfd3ae;
          uVar18 = puVar20[lVar15 + 1];
        }
        uStack_ec = -uVar18 & uVar18;
        uVar1 = (ulonglong)uStack_ec * 2 + 1;
        lVar15 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        local_c8 = (int)lVar15;
        iStack_dc = local_d8 + -1 + local_c8;
        if (iVar3 < iStack_dc) {
          iStack_dc = iVar3;
        }
      }
LAB_14bcfd3ae:
      uVar18 = *(uint *)&param_2->field_0x28;
      uVar21 = uVar18 & 0xffffffe0;
      iStack_d0 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
      uStack_e0 = 0xffffffff;
      TStack_b8._padding_ = CONCAT44(uStack_ec,iStack_f0);
      TStack_b8.CurrentBitIndex = iStack_dc;
      TStack_b8.UnvisitedBitMask = 0xffffffff;
      iVar17 = (int)uVar18 >> 5;
      TStack_b8._28_4_ = iStack_dc;
      TStack_b8.BaseBitIndex = local_d8;
      uStack_98 = CONCAT44(uStack_cc,iStack_d0);
      local_f8 = param_2;
      local_e8 = puVar2;
      iStack_d4 = iStack_dc;
      local_c0 = param_2;
      TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      if ((((int)uVar18 < 0) || (iVar3 < (int)uVar18)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar5 = (code *)swi(3);
        fVar22 = (float)(*pcVar5)();
        return fVar22;
      }
      fVar10 = __real_322bcc76;
      dVar9 = __real_4000000000000000;
      dVar8 = __real_3fe0000000000000;
      fVar7 = __real_38d1b717;
      uVar4 = *(uint *)&param_2->field_0x28;
      if (uVar18 != uVar4) {
        puVar16 = *(undefined1 **)&param_2->field_0x20;
        if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
          puVar16 = puVar2;
        }
        uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar17 * 4);
        while (uVar18 == 0) {
          lVar15 = (longlong)iVar17;
          uVar21 = uVar21 + 0x20;
          iVar17 = iVar17 + 1;
          uVar18 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
          goto LAB_14bcfd4f0;
          uVar18 = *(uint *)(puVar16 + lVar15 * 4 + 4);
        }
        uVar1 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
        lVar15 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar18 = (int)lVar15 + -1 + uVar21;
        if ((int)uVar4 < (int)uVar18) {
          uVar18 = uVar4;
        }
      }
LAB_14bcfd4f0:
      do {
        pTVar11 = local_c0;
        if (*(int *)&local_c0->field_0x8 - *(int *)&local_c0->field_0x34 != (int)uStack_98) {
          `TSparseArray<TSparseSetElement<TTuple<int,FDS_MaterialSlotInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (((TStack_b8.CurrentBitIndex == uVar18) &&
            (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
           (pTVar11 == param_2)) {
          return fVar22;
        }
        lVar15 = *(longlong *)pTVar11;
        uVar21 = *(uint *)((longlong)TStack_b8.CurrentBitIndex * 0x1c + lVar15);
        iVar3 = *(int *)((longlong)TStack_b8.CurrentBitIndex * 0x1c + 8 + lVar15);
        DS_ItemDataUtil::GetItemDataByTID((int)&local_108);
        bVar12 = FWeakObjectPtr::IsValid(&local_108);
        if (bVar12) {
          pUVar13 = FWeakObjectPtr::Get(&local_108);
          iVar17 = *(int *)&pUVar13[0x16].field_0xc;
          if (*(int *)&param_3->field_0x8 != *(int *)&param_3->field_0x34) {
            puVar16 = &param_3->field_0x38;
            if (*(undefined1 **)&param_3->field_0x40 != (undefined1 *)0x0) {
              puVar16 = *(undefined1 **)&param_3->field_0x40;
            }
            iVar19 = *(int *)(puVar16 + (ulonglong)(*(int *)&param_3->field_0x48 - 1U & uVar21) * 4)
            ;
            if (iVar19 != -1) {
              do {
                if (*(uint *)(*(longlong *)param_3 + (longlong)iVar19 * 0x30) == uVar21) {
                  if (iVar19 != -1) {
                    pFVar14 = TMapBase<int,FDS_RequiredMaterialInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>_>
                              ::FindChecked((TMapBase<int,FDS_RequiredMaterialInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>_>
                                             *)param_3,uVar21);
                    lVar6 = pFVar14->RepairEfficiency;
                    pUVar13 = FWeakObjectPtr::Get(&local_100);
                    fVar22 = fVar22 + (float)(((longlong)
                                               ROUND((double)((float)(longlong)
                                                                     ((float)(int)lVar6 *
                                                                      (float)iVar17 * fVar10) *
                                                              (float)*(int *)&pUVar13[0x15].
                                                                              field_0x18 * fVar7) *
                                                     dVar9 - dVar8) >> 1) * (longlong)iVar3);
                  }
                  break;
                }
                iVar19 = *(int *)(*(longlong *)param_3 + 0x28 + (longlong)iVar19 * 0x30);
              } while (iVar19 != -1);
            }
          }
        }
        TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
      } while( true );
    }
  }
  return 0.0;
}

// GetTargetRepairDurabilityPercent @ 14bcfd6e0

int __thiscall UDS_M_ItemRepair::GetTargetRepairDurabilityPercent(UDS_M_ItemRepair *this)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  uint uVar4;
  FName FVar5;
  FString *pFVar6;
  UObject *pUVar7;
  wchar_t *_Str;
  float fVar8;
  FWeakObjectPtr local_res8;
  longlong local_res10;
  
  FVar5 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_ItemRepairData)&local_res10);
  uVar2 = *(undefined8 *)FVar5;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  pFVar6 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar4 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar5);
  if ((pFVar6->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  local_res10 = _wtoi64(_Str);
  DS_ItemDataUtil::GetItemDataByUID((long64)&local_res8);
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar3) {
    return 0;
  }
  pUVar7 = FWeakObjectPtr::Get(&local_res8);
  iVar1 = *(int *)&pUVar7[0x15].field_0x18;
  fVar8 = GetTargetRepairDurability
                    (this,&local_res10,&this->TargetRepairSelectedMaterialsMap,
                     &this->TargetRepairRequiredMaterialsMap);
  return (int)ROUND((fVar8 * __real_42c80000 + fVar8 * __real_42c80000) / (float)iVar1 -
                    __real_3f000000) >> 1;
}

// GetViewModelContext @ 14bcff9a0

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_M_ItemRepair::GetViewModelContext
          (UDS_M_ItemRepair *this,
          TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__)

{
  *(undefined4 *)&this->_padding_ = 0x1e7;
  UDS_ModelBase::GetViewModelContext((UDS_ModelBase *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetWaitCompleteListCountString @ 14bcfffb0

FString * __thiscall
UDS_M_ItemRepair::GetWaitCompleteListCountString
          (UDS_M_ItemRepair *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  UDS_M_WaitCompleteList *this_00;
  FText *this_01;
  FString *pFVar2;
  FText local_18;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->WaitCompleteListModel).WeakPtr);
  if (!bVar1) {
    ::FString::FString(__return_storage_ptr__,"");
    return __return_storage_ptr__;
  }
  this_00 = (UDS_M_WaitCompleteList *)FWeakObjectPtr::Get(&(this->WaitCompleteListModel).WeakPtr);
  this_01 = UDS_M_WaitCompleteList::GetWaitCompleteCountText(this_00,&local_18);
  pFVar2 = FText::ToString(this_01);
  ::FString::FString(__return_storage_ptr__,pFVar2);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// HasAllRestoreMaterials @ 14bd003d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UDS_M_ItemRepair::HasAllRestoreMaterials(UDS_M_ItemRepair *this,int param_1,bool param_2)

{
  uint uVar1;
  FName FVar2;
  FString *pFVar3;
  uint *puVar4;
  wchar_t *_Str;
  undefined1 *puVar5;
  bool bVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined8 uVar12;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  TArray<FDS_RequiredMaterialInfo,TSizedDefaultAllocator<32>_> local_90;
  undefined1 local_80 [8];
  undefined1 local_78 [72];
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  GetPlayerMaterialCounts
            (this,(TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                  local_78);
  if (param_2) {
    FVar2 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                      ((FDS_DataContainer *)&this->_padding_,(EDS_ItemRepairData)local_80);
    uVar12 = *(undefined8 *)FVar2;
    uVar1 = ::GetTypeHash((FNameEntryId)(uint)uVar12);
    pFVar3 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)&this->_padding_,uVar1 + (int)((ulonglong)uVar12 >> 0x20),(FName *)FVar2)
    ;
    if ((pFVar3->Data).ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    param_1 = _wtoi(_Str);
  }
  GetRequiredMaterialsForRestoreItem(this,&local_90,param_1);
  iVar11 = local_90.ArrayNum;
  puVar10 = (undefined1 *)local_78._64_8_;
  if (iVar11 != 0) {
    pFVar8 = local_90.AllocatorInstance.Data + (longlong)iVar11 * 0x20;
    FVar7.Data = local_90.AllocatorInstance.Data;
    lVar9 = local_78._0_8_;
    uVar12 = local_90._8_8_;
    do {
      if ((int)uVar12 != iVar11) {
        `TCheckedPointerIterator<FDS_RequiredMaterialInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_98);
        lVar9 = local_78._0_8_;
        puVar10 = (undefined1 *)local_78._64_8_;
        uVar12 = local_90._8_8_;
      }
      if (FVar7.Data == pFVar8) break;
      if (local_78._8_4_ != local_78._52_4_) {
        puVar5 = local_78 + 0x38;
        if (puVar10 != (undefined1 *)0x0) {
          puVar5 = puVar10;
        }
        uVar1 = *(uint *)(puVar5 + (ulonglong)(local_30 - 1U & *(uint *)FVar7.Data) * 4);
        while (uVar1 != 0xffffffff) {
          puVar4 = (uint *)((longlong)(int)uVar1 * 0x10 + lVar9);
          if (*puVar4 == *(uint *)FVar7.Data) {
            if (puVar4 != (uint *)0x0) {
              uVar1 = puVar4[1];
              goto LAB_14bd00518;
            }
            break;
          }
          uVar1 = puVar4[2];
        }
      }
      uVar1 = 0;
LAB_14bd00518:
      if ((int)uVar1 < (int)*(uint *)(FVar7.Data + 0x14)) goto LAB_14bd00530;
      FVar7.Data = FVar7.Data + 0x20;
    } while( true );
  }
  bVar6 = true;
LAB_14bd00536:
  if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.AllocatorInstance.Data);
    puVar10 = (undefined1 *)local_78._64_8_;
  }
  local_30 = 0;
  if (puVar10 != (undefined1 *)0x0) {
    FMemory::Free(puVar10);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_78);
  return bVar6;
LAB_14bd00530:
  bVar6 = false;
  goto LAB_14bd00536;
}

// HasAnyRepairMaterial @ 14bd005b0

bool __thiscall UDS_M_ItemRepair::HasAnyRepairMaterial(UDS_M_ItemRepair *this,int param_1)

{
  bool bVar1;
  TArray<FDS_RequiredMaterialInfo,TSizedDefaultAllocator<32>_> local_28;
  TArray<FDS_RequiredMaterialInfo,TSizedDefaultAllocator<32>_> local_18;
  
  GetRequiredMaterialsForRepairItem(this,&local_18,param_1,false);
  if (local_18.ArrayNum == 0) {
    bVar1 = true;
  }
  else {
    GetRequiredMaterialsForRepairItem(this,&local_28,param_1,true);
    bVar1 = local_28.ArrayNum != 0;
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar1;
}

// InitNpcInfo @ 14bd03890

void __thiscall
UDS_M_ItemRepair::InitNpcInfo
          (UDS_M_ItemRepair *this,EDS_InteractionFunctionType param_1,ulong64 param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  UDS_ItemRepairEvent *pUVar6;
  undefined1 local_res8 [8];
  FString local_28;
  
  ::FString::PrintfImpl(&local_28,L"%llu");
  FVar4 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_ItemRepairData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if (pFVar5 != &local_28) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_28.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FDS_DataContainer::SetData<int,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,NpcFunctionType,(uint)param_1);
  FDS_DataContainer::SetData<int,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,RepairTabIndex,0);
  FDS_DataContainer::SetData<int,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,ManagementTabIndex,0);
  FDS_DataContainer::SetData<enum_EDS_ItemRepairType,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,ItemRepairType,BulkRepair);
  FDS_DataContainer::SetData<int,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,RegisterItemTID,0);
  FDS_DataContainer::SetData<int,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,RegisterItemUID,0);
  FDS_DataContainer::SetData<int,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,RestoreTID,0);
  FDS_DataContainer::SetData<int,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,RepairedDurabilityPercent,0);
  FDS_DataContainer::SetData<int,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,RepairMoneyValue,0);
  FDS_DataContainer::SetData<int,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,SelectedItemUID,0);
  FDS_DataContainer::SetData<bool,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,HasEnoughRepairMaterials,false);
  FDS_DataContainer::SetData<bool,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,HasEnoughRepairMoney,false);
  *(undefined1 *)&this->_padding_ = 1;
  ClearRepairList(this);
  pUVar6 = UDS_ItemRepairEvent::GetEvent();
  if (pUVar6 != (UDS_ItemRepairEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar6->OnReceiveRestoreCancelResult,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_M_ItemRepair>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar6->OnReceiveRestoreCancelResult,(UDS_M_ItemRepair *)local_res8,
               (pmf_bb595415)this);
  }
  return;
}

// OnClickedRepairButton @ 14bd0bc90

bool __thiscall UDS_M_ItemRepair::OnClickedRepairButton(UDS_M_ItemRepair *this)

{
  undefined8 uVar1;
  EDS_ItemRepairType EVar2;
  bool bVar3;
  uint uVar4;
  FName FVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  undefined1 local_res8 [8];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_38;
  
  EVar2 = FDS_DataContainer::GetData<enum_EDS_ItemRepairType,enum_EDS_ItemRepairData>
                    ((FDS_DataContainer *)&this->_padding_,ItemRepairType);
  FVar5 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_ItemRepairData)local_res8);
  uVar1 = *(undefined8 *)FVar5;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar6 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar4 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar5);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  bVar3 = FToBoolHelper::FromCStringWide(pwVar7);
  if (bVar3) {
    if ((EVar2 == BulkRepair) || (EVar2 == TargetRepair)) {
      bVar3 = TryToRepairItem(this);
      return bVar3;
    }
    if (EVar2 == Restore) {
      bVar3 = TryToRestoreItem(this);
      return bVar3;
    }
  }
  else {
    UDS_UIMessageManager::GetInst();
    local_38._0_8_ = 0;
    local_38._8_8_ = 0;
    local_38._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x9fc8,Alert_None_01,&local_38);
  }
  return false;
}

// OnDeInit @ 14bd0cd30

void __thiscall UDS_M_ItemRepair::OnDeInit(UDS_M_ItemRepair *this)

{
  UDS_ItemRepairEvent *pUVar1;
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (FWriteAccessScope *)&local_28);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_);
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (FWriteAccessScope *)&local_28);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_);
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  pUVar1 = UDS_ItemRepairEvent::GetEvent();
  if (pUVar1 != (UDS_ItemRepairEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnReceiveRestoreCancelResult,this);
  }
  return;
}

// OnEventRepairItemSlot @ 14bd0db40

void __thiscall
UDS_M_ItemRepair::OnEventRepairItemSlot
          (UDS_M_ItemRepair *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  int iVar1;
  bool bVar2;
  FWeakObjectPtr FVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  long64 lVar6;
  FWeakObjectPtr FVar7;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_28 [2];
  
  local_res10 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar2) {
    return;
  }
  FVar3 = (FWeakObjectPtr)FWeakObjectPtr::Get(&local_res10);
  FVar7.ObjectIndex = 0;
  FVar7.ObjectSerialNumber = 0;
  if (FVar3 == (FWeakObjectPtr)0x0) {
LAB_14bd0dba0:
    FVar3 = FVar7;
  }
  else {
    pUVar4 = Z_Construct_UClass_UDS_ModelEventItemBase_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)((longlong)FVar3 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)FVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) goto LAB_14bd0dba0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar3 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar3);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_28[0] = FVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar3 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar3);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_28);
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if (!bVar2) {
    return;
  }
  pUVar5 = FWeakObjectPtr::Get(&local_res10);
  FVar3 = (FWeakObjectPtr)FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar5 + 1));
  if (FVar3 != (FWeakObjectPtr)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)((longlong)FVar3 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)FVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14bd0dc3f;
  }
  FVar3 = FVar7;
LAB_14bd0dc3f:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar3 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar3);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_28[0] = FVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar3 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar3);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)local_28);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar2) {
    pUVar5 = FWeakObjectPtr::Get(&local_res20);
    if (*(int *)&pUVar5[5].field_0x8 == 9) {
      pUVar5 = FWeakObjectPtr::Get(&local_res18);
      (**(code **)(*(longlong *)pUVar5 + 0x3a0))(pUVar5,local_28);
      bVar2 = FWeakObjectPtr::IsValid(local_28);
      if (bVar2) {
        TryToRegisterRepairItem
                  (this,(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)&local_res18,
                   (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)local_28);
      }
    }
    else if (*(int *)&pUVar5[5].field_0x8 == 0xb) {
      FDS_DataContainer::AddListData<enum_EDS_ModelEventItemRepair,enum_EDS_ItemRepairData>
                ((FDS_DataContainer *)&this->_padding_,UpdateViewEvent,ClickedSubtractButton);
      pUVar5 = FWeakObjectPtr::Get(&local_res18);
      lVar6 = (**(code **)(*(longlong *)pUVar5 + 0x388))(pUVar5);
      UnregisterItem(this,lVar6);
      return;
    }
  }
  return;
}

// OnReceiveRestoreCancelResult @ 14bd0ff20

void __thiscall UDS_M_ItemRepair::OnReceiveRestoreCancelResult(UDS_M_ItemRepair *this)

{
  code *pcVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  pUVar2 = FWeakObjectPtr::Get(&(this->RepairBagModel).WeakPtr);
  (**(code **)(*(longlong *)pUVar2 + 0x2d8))(pUVar2);
  pUVar2 = FWeakObjectPtr::Get(&(this->RepairBagModel).WeakPtr);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  pcVar1 = *(code **)(*(longlong *)pUVar2 + 0x2e0);
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (*pcVar1)(pUVar2,local_res8,1);
  return;
}

// OnSelectTabEvent @ 14bd11010

void __thiscall
UDS_M_ItemRepair::OnSelectTabEvent(UDS_M_ItemRepair *this,EDS_ModelEventItemRepair param_1)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  FName FVar5;
  FString *pFVar6;
  UObject *pUVar7;
  wchar_t *_Str;
  EDS_ItemRepairData EVar8;
  wchar_t *_Str_00;
  bool bVar9;
  
  FVar5 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                    ((FDS_DataContainer *)&this->_padding_,RepairedDurabilityPercent);
  uVar1 = *(undefined8 *)FVar5;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar6 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar5);
  _Str_00 = L"";
  if ((pFVar6->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  iVar3 = _wtoi(_Str);
  FVar5 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                    ((FDS_DataContainer *)&this->_padding_,RepairedDurabilityPercent);
  uVar1 = *(undefined8 *)FVar5;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar6 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar5);
  if ((pFVar6->Data).ArrayNum != 0) {
    _Str_00 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  iVar4 = _wtoi(_Str_00);
  if (param_1 == ClickedBulkRepairTab) {
    bVar9 = iVar3 == 0;
    if (iVar3 != 0) {
      FDS_DataContainer::SetData<enum_EDS_ItemRepairType,enum_EDS_ItemRepairData>
                ((FDS_DataContainer *)&this->_padding_,ItemRepairType,BulkRepair);
      iVar3 = 0;
LAB_14bd11191:
      EVar8 = RepairTabIndex;
LAB_14bd11193:
      FDS_DataContainer::SetData<int,enum_EDS_ItemRepairData>
                ((FDS_DataContainer *)&this->_padding_,EVar8,iVar3);
    }
  }
  else if (param_1 == ClickedTargetRepairTab) {
    bVar9 = iVar3 == 1;
    if (!bVar9) {
      FDS_DataContainer::SetData<enum_EDS_ItemRepairType,enum_EDS_ItemRepairData>
                ((FDS_DataContainer *)&this->_padding_,ItemRepairType,TargetRepair);
      iVar3 = 1;
      goto LAB_14bd11191;
    }
  }
  else if (param_1 == ClickedInventoryBagTab) {
    bVar9 = iVar4 == 0;
    if (iVar4 != 0) {
      FDS_DataContainer::SetData<int,enum_EDS_ItemRepairData>
                ((FDS_DataContainer *)&this->_padding_,ManagementTabIndex,0);
      FDS_DataContainer::SetData<enum_EDS_ItemRepairType,enum_EDS_ItemRepairData>
                ((FDS_DataContainer *)&this->_padding_,ItemRepairType,BulkRepair);
      FDS_DataContainer::SetData<int,enum_EDS_ItemRepairData>
                ((FDS_DataContainer *)&this->_padding_,RepairTabIndex,0);
      pUVar7 = FWeakObjectPtr::Get(&(this->RepairBagModel).WeakPtr);
      (**(code **)(*(longlong *)pUVar7 + 0x2d8))(pUVar7);
    }
  }
  else {
    if (param_1 != ClickedWaitCompleteListTab) goto LAB_14bd111a1;
    bVar9 = iVar4 == 1;
    if (!bVar9) {
      FDS_DataContainer::SetData<enum_EDS_ItemRepairType,enum_EDS_ItemRepairData>
                ((FDS_DataContainer *)&this->_padding_,ItemRepairType,Restore);
      EVar8 = ManagementTabIndex;
      iVar3 = 1;
      goto LAB_14bd11193;
    }
  }
  if (bVar9) {
    return;
  }
LAB_14bd111a1:
  FDS_DataContainer::AddListData<enum_EDS_ModelEventItemRepair,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,UpdateViewEvent,ResetRegister);
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// OnUpdateDimmedState @ 14bd11570

void __thiscall
UDS_M_ItemRepair::OnUpdateDimmedState
          (UDS_M_ItemRepair *this,TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  UDS_M_ItemImplBase *this_00;
  FWeakObjectPtr local_res10;
  
  local_res10 = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    pUVar5 = FWeakObjectPtr::Get(&local_res10);
    pUVar6 = FWeakObjectPtr::Get(&local_res10);
    iVar3 = (**(code **)(*(longlong *)pUVar5 + 0x448))(pUVar5);
    iVar4 = (**(code **)(*(longlong *)pUVar6 + 0x450))(pUVar6);
    bVar1 = iVar4 <= iVar3;
    pUVar5 = FWeakObjectPtr::Get(&local_res10);
    iVar3 = (**(code **)(*(longlong *)pUVar5 + 0x448))(pUVar5);
    if (iVar3 == 100) {
      bVar1 = true;
    }
    else {
      pUVar5 = FWeakObjectPtr::Get(&local_res10);
      iVar3 = (**(code **)(*(longlong *)pUVar5 + 0x380))(pUVar5);
      bVar2 = HasAnyRepairMaterial(this,iVar3);
      if (!bVar2) {
        pUVar5 = FWeakObjectPtr::Get(&local_res10);
        iVar3 = (**(code **)(*(longlong *)pUVar5 + 0x448))(pUVar5);
        if (0 < iVar3) {
          bVar1 = true;
        }
      }
    }
    pUVar5 = FWeakObjectPtr::Get(&local_res10);
    iVar3 = (**(code **)(*(longlong *)pUVar5 + 0x380))(pUVar5);
    bVar2 = HasAllRestoreMaterials(this,iVar3,false);
    if (!bVar2) {
      pUVar5 = FWeakObjectPtr::Get(&local_res10);
      iVar3 = (**(code **)(*(longlong *)pUVar5 + 0x448))(pUVar5);
      if (iVar3 == 0) {
        bVar1 = true;
      }
    }
    this_00 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&local_res10);
    UDS_M_ItemImplBase::SetDimmed(this_00,bVar1);
  }
  return;
}

// OnUpdateModel @ 14bd14110

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UDS_M_ItemRepair::OnUpdateModel
          (UDS_M_ItemRepair *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  EDS_ItemRepairType EVar4;
  bool bVar5;
  EDS_ItemRepairType EVar6;
  uint uVar7;
  int iVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar9;
  FName FVar10;
  UClass *pUVar11;
  UObject *pUVar12;
  long64 lVar13;
  FString *pFVar14;
  wchar_t *pwVar15;
  EDS_ModelEventItemRepair EVar16;
  longlong *plVar17;
  FScriptContainerElement *pFVar18;
  FName FVar19;
  FName local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FName local_res20;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_78;
  TArray<EDS_ModelEventItemRepair,TSizedDefaultAllocator<32>_> local_60 [2];
  
  local_res10 = param_1.WeakPtr;
  FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,(EDS_ItemRepairData)&local_res8);
  FVar10 = local_res8;
  local_res20 = local_res8;
  uVar7 = ::GetTypeHash(local_res8.ComparisonIndex.Value);
  FVar19.ComparisonIndex.Value = 0;
  FVar19.Number = 0;
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    plVar17 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar17 = &this->_padding_;
    }
    iVar8 = *(int *)((longlong)plVar17 +
                    (ulonglong)((int)this->_padding_ - 1U & local_res20.Number + uVar7) * 4);
    if (iVar8 != -1) {
      do {
        if (*(FName *)((longlong)iVar8 * 0x20 + this->_padding_) == FVar10) {
          pTVar9 = TMapBase<FName,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                   ::FindChecked((TMapBase<FName,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                                  *)&this->_padding_,local_res8);
          DestructItems<FString,int>((FString *)(pTVar9->AllocatorInstance).Data,pTVar9->ArrayNum);
          pTVar9->ArrayNum = 0;
          if (pTVar9->ArrayMax != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,&pTVar9->AllocatorInstance,0,&pTVar9->ArrayMax);
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + this->_padding_);
      } while (iVar8 != -1);
    }
  }
  OnEventRepairItemSlot(this,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_res10);
  EVar4 = FDS_DataContainer::GetData<enum_EDS_ItemRepairType,enum_EDS_ItemRepairData>
                    ((FDS_DataContainer *)&this->_padding_,ItemRepairType);
  FVar10 = (FName)FWeakObjectPtr::Get(&local_res10);
  if (FVar10 == (FName)0x0) {
LAB_14bd14240:
    FVar10 = FVar19;
  }
  else {
    pUVar11 = Z_Construct_UClass_UDS_ModelEventItemRepair_NoRegister();
    iVar8 = (int)pUVar11->_padding_;
    if ((*(int *)(*(longlong *)((longlong)FVar10 + 0x10) + 0x38) < iVar8) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)FVar10 + 0x10) + 0x30) + (longlong)iVar8 * 8) !=
        &pUVar11->_padding_)) goto LAB_14bd14240;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar10 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar10);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res8 = FVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar10 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar10);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res8);
  bVar5 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar5) goto switchD_14bd142e4_caseD_6;
  pUVar12 = FWeakObjectPtr::Get(&local_res18);
  FDS_DataContainer::AddListData<enum_EDS_ModelEventItemRepair,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,UpdateViewEvent,
             *(EDS_ModelEventItemRepair *)&pUVar12[5].field_0x8);
  pUVar12 = FWeakObjectPtr::Get(&local_res18);
  switch(*(undefined4 *)&pUVar12[5].field_0x8) {
  case 1:
  case 2:
  case 3:
  case 4:
    pUVar12 = FWeakObjectPtr::Get(&local_res18);
    OnSelectTabEvent(this,*(EDS_ModelEventItemRepair *)&pUVar12[5].field_0x8);
    break;
  case 5:
    EVar6 = FDS_DataContainer::GetData<enum_EDS_ItemRepairType,enum_EDS_ItemRepairData>
                      ((FDS_DataContainer *)&this->_padding_,ItemRepairType);
    FVar10 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                       ((FDS_DataContainer *)&this->_padding_,(EDS_ItemRepairData)&local_res8);
    uVar2 = *(undefined8 *)FVar10;
    uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar14 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)&this->_padding_,(int)((ulonglong)uVar2 >> 0x20) + uVar7,(FName *)FVar10
                        );
    if ((pFVar14->Data).ArrayNum == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
    bVar5 = FToBoolHelper::FromCStringWide(pwVar15);
    if (!bVar5) {
      UDS_UIMessageManager::GetInst();
      local_78._0_8_ = (FScriptContainerElement *)0x0;
      local_78._8_8_ = 0;
      local_78._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x9fc8,Alert_None_01,&local_78);
      return;
    }
    if ((EVar6 == BulkRepair) || (EVar6 == TargetRepair)) {
      bVar5 = TryToRepairItem(this);
    }
    else {
      if (EVar6 != Restore) {
        return;
      }
      bVar5 = TryToRestoreItem(this);
    }
    if (bVar5 == false) {
      return;
    }
    if (EVar4 == BulkRepair) {
      EVar16 = ClickedBulkRepairTab;
LAB_14bd143f5:
      OnSelectTabEvent(this,EVar16);
    }
    else {
      if (EVar4 == TargetRepair) {
        EVar16 = ClickedTargetRepairTab;
        goto LAB_14bd143f5;
      }
      if (EVar4 == Restore) {
        EVar16 = ClickedWaitCompleteListTab;
        goto LAB_14bd143f5;
      }
    }
    FDS_DataContainer::AddListData<enum_EDS_ModelEventItemRepair,enum_EDS_ItemRepairData>
              ((FDS_DataContainer *)&this->_padding_,UpdateViewEvent,ResetRegister);
    break;
  case 7:
    lVar13 = FDS_DataContainer::GetData<__int64,enum_EDS_ItemRepairData>
                       ((FDS_DataContainer *)&this->_padding_,SelectedItemUID);
    UnregisterItem(this,lVar13);
    break;
  case 8:
    pUVar12 = FWeakObjectPtr::Get(&local_res18);
    RegisterBulkRepairItemListByGrade(this,pUVar12[5].field_0x19);
  }
switchD_14bd142e4_caseD_6:
  FDS_DataContainer::GetListData<enum_EDS_ModelEventItemRepair,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,local_60,UpdateViewEvent);
  FDS_DataContainer::GetListData<enum_EDS_ModelEventItemRepair,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,
             (TArray<EDS_ModelEventItemRepair,TSizedDefaultAllocator<32>_> *)&local_78,
             UpdateViewEvent);
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  FDS_DataContainer::GetListData<enum_EDS_ModelEventItemRepair,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,
             (TArray<EDS_ModelEventItemRepair,TSizedDefaultAllocator<32>_> *)&local_78,
             UpdateViewEvent);
  uVar3 = local_78._8_4_;
  pFVar1 = (FScriptContainerElement *)(local_78._0_8_ + (longlong)(int)local_78._8_4_ * 4);
  pFVar18 = (FScriptContainerElement *)local_78._0_8_;
  do {
    while( true ) {
      if (local_78._8_4_ != uVar3) {
        `TCheckedPointerIterator<enum_EDS_ModelEventItemRepair,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_res8);
      }
      if (pFVar18 == pFVar1) {
        if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_78._0_8_);
        }
        TMulticastDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
        ::Broadcast((TMulticastDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                     *)&this->_padding_,
                    (TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_res10);
        if (local_60[0].AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_60[0].AllocatorInstance.Data);
        return;
      }
      iVar8 = *(int *)pFVar18;
      if ((iVar8 != 9) && (iVar8 != 10)) break;
      UpdateRepairModel(this);
LAB_14bd144ac:
      pFVar18 = pFVar18 + 4;
    }
    if (iVar8 != 0xb) goto LAB_14bd144ac;
    UnregisterItemAll(this);
    pFVar18 = pFVar18 + 4;
  } while( true );
}

// PreInitBindViewModel @ 14bd16dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_M_ItemRepair::PreInitBindViewModel(UDS_M_ItemRepair *this)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  UDS_M_InventoryBag *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FDS_DataContainer *pFVar8;
  UObject *pUVar9;
  FName *pFVar10;
  UClass *pUVar11;
  UDS_ModelBase *pUVar12;
  UDS_M_WaitCompleteList *this_00;
  longlong *plVar13;
  undefined1 auStackY_328 [32];
  UDS_M_InventoryBag *local_2f8;
  UDS_M_ItemRepair *local_2f0;
  UDS_ModelBase *local_2e8;
  UDS_ModelBase *local_2e0;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_2d8;
  TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_2c0;
  FDestructionSentinel local_2a8;
  undefined1 *local_290;
  FName local_288;
  FName local_280;
  FDS_DataContainer local_278;
  undefined1 local_1d8 [128];
  undefined1 local_158 [128];
  undefined1 local_d8 [32];
  void *local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  void *local_98;
  undefined4 local_90;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_328;
  pUVar5 = NewObject<UDS_M_InventoryBag>((UObject *)this);
  UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,(UDS_ModelBase *)pUVar5);
  local_2f8 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UDS_M_InventoryBag *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  FWeakObjectPtr::operator=(&(this->RepairBagModel).WeakPtr,(FObjectPtr)&local_2f8);
  bVar4 = FWeakObjectPtr::IsValid(&(this->RepairBagModel).WeakPtr);
  if (bVar4) {
    local_d8._0_8_ = (FScriptContainerElement *)0x0;
    local_d8._8_8_ = 0;
    local_b8 = (void *)0x0;
    local_b0 = 0;
    local_a4 = 0;
    local_98 = (void *)0x0;
    local_90 = 0;
    local_88._0_8_ = (FScriptContainerElement *)0x0;
    local_88._8_8_ = 0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_54 = 0;
    local_48 = (void *)0x0;
    local_40 = 0;
    local_ac = 0x80;
    local_a8 = 0xffffffff;
    local_5c = 0x80;
    local_58 = 0xffffffff;
    FDS_DataContainer::SetData<enum_EDS_BagGroupType,enum_EDS_InventoryBagData>
              ((FDS_DataContainer *)local_d8,BagGroupType,ItemRepairRestoreInventory);
    FDS_DataContainer::SetData<enum_EDS_SortingType,enum_EDS_InventoryBagData>
              ((FDS_DataContainer *)local_d8,SortType,Repair);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnDimmedStateUpdated
               ,(FWriteAccessScope *)&local_2a8);
    local_290 = &(this->OnDimmedStateUpdated).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_290);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_ItemImplBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_M_ItemRepair____A6AXU__TWeakObjectPtr_VUDS_M_ItemImplBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_M_ItemRepair *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_2f0 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_M_ItemRepair *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_2f0);
      puVar6[4] = OnUpdateDimmedState;
    }
    if (local_2a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2a8.Accessor,&local_2a8);
    }
    pUVar5 = (UDS_M_InventoryBag *)FWeakObjectPtr::Get(&(this->RepairBagModel).WeakPtr);
    local_2d8._0_8_ = 0;
    local_2d8._8_8_ = 0;
    local_2d8._16_4_ = 0;
    TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
    ::CopyFrom<FDefaultDelegateUserPolicy>(&local_2d8,&this->OnDimmedStateUpdated);
    local_2c0._16_8_ = 0;
    local_2c0._0_8_ = 0;
    local_2c0._8_8_ = 0;
    pFVar8 = FDS_DataContainer::FDS_DataContainer(&local_278,(FDS_DataContainer *)local_d8);
    UDS_M_InventoryBag::InitModel(pUVar5,pFVar8,&local_2c0,&local_2d8);
    pUVar9 = FWeakObjectPtr::Get(&(this->RepairBagModel).WeakPtr);
    pFVar10 = ::FName::FName(&local_288,L"CharacterBag");
    uVar3 = pFVar10->Number;
    *(uint *)&pUVar9[9].field_0x10 = (pFVar10->ComparisonIndex).Value;
    *(uint *)&pUVar9[9].field_0x14 = uVar3;
    local_40 = 0;
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_88,0,local_88._8_4_);
    iVar2 = SUB84(local_88._8_8_,4);
    local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
    }
    local_58 = 0xffffffff;
    local_54 = 0;
    local_60 = 0;
    if (0x80 < local_5c) {
      local_5c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
    }
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_88._0_8_);
    }
    local_90 = 0;
    if (local_98 != (void *)0x0) {
      FMemory::Free(local_98);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_d8,0,local_d8._8_4_);
    iVar2 = SUB84(local_d8._8_8_,4);
    local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
    }
    local_a4 = 0;
    local_b0 = 0;
    local_a8 = 0xffffffff;
    if (0x80 < local_ac) {
      local_ac = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
    }
    if (local_b8 != (void *)0x0) {
      FMemory::Free(local_b8);
    }
    if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_d8._0_8_);
    }
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar11 = Z_Construct_UClass_UDS_M_MoneyDisplay_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1d8,pUVar11);
    local_1d8._8_8_ = this;
    pUVar12 = (UDS_ModelBase *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1d8);
    if (local_1d8._64_8_ != 0) {
      plVar13 = (longlong *)(local_1d8 + 0x50);
      if ((longlong *)local_1d8._104_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_1d8._104_8_;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,pUVar12);
    local_2e8 = pUVar12;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UDS_ModelBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    FWeakObjectPtr::operator=(&(this->CoinDisplayModel).WeakPtr,(FObjectPtr)&local_2e8);
    bVar4 = FWeakObjectPtr::IsValid(&(this->CoinDisplayModel).WeakPtr);
    if (bVar4) {
      pUVar9 = FWeakObjectPtr::Get(&(this->CoinDisplayModel).WeakPtr);
      pUVar9[10].field_0x20 = 3;
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar11 = Z_Construct_UClass_UDS_M_WaitCompleteList_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_158,pUVar11);
      local_158._8_8_ = this;
      pUVar12 = (UDS_ModelBase *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_158);
      if (local_158._64_8_ != 0) {
        plVar13 = (longlong *)(local_158 + 0x50);
        if ((longlong *)local_158._104_8_ != (longlong *)0x0) {
          plVar13 = (longlong *)local_158._104_8_;
        }
        (**(code **)(*plVar13 + 0x10))();
      }
      UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,pUVar12);
      local_2e0 = pUVar12;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UDS_ModelBase *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar12);
      }
      FWeakObjectPtr::operator=(&(this->WaitCompleteListModel).WeakPtr,(FObjectPtr)&local_2e0);
      bVar4 = FWeakObjectPtr::IsValid(&(this->WaitCompleteListModel).WeakPtr);
      if (bVar4) {
        this_00 = (UDS_M_WaitCompleteList *)
                  FWeakObjectPtr::Get(&(this->WaitCompleteListModel).WeakPtr);
        uVar7 = FDS_DataContainer::GetData<unsigned___int64,enum_EDS_ItemRepairData>
                          ((FDS_DataContainer *)&this->_padding_,NpcEntityID);
        UDS_M_WaitCompleteList::InitModel(this_00,uVar7,ItemRestore);
        pUVar9 = FWeakObjectPtr::Get(&(this->WaitCompleteListModel).WeakPtr);
        pFVar10 = ::FName::FName(&local_280,L"WaitCompleteList");
        uVar3 = pFVar10->Number;
        *(uint *)&pUVar9[9].field_0x10 = (pFVar10->ComparisonIndex).Value;
        *(uint *)&pUVar9[9].field_0x14 = uVar3;
      }
      else {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<344140477999611973>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemRepair.cpp"
                           ,0x45,"false");
        if (bVar4) goto code_r0x00014bd173c9;
      }
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<344140477999611966>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemRepair.cpp"
                         ,0x3e,"false");
      if (bVar4) goto code_r0x00014bd173c9;
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<344140477999611952>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemRepair.cpp"
                       ,0x30,"false");
    if (bVar4) {
code_r0x00014bd173c9:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// RegisterBulkRepairItemListByGrade @ 14bd178e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_M_ItemRepair::RegisterBulkRepairItemListByGrade(UDS_M_ItemRepair *this,EDS_GradeType param_1)

{
  int *piVar1;
  FWeakObjectPtr *pFVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  FWeakObjectPtr *pFVar8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *pTVar9;
  UDS_M_ItemImplBase *pUVar10;
  UDS_M_InventoryBag *this_00;
  FWeakObjectPtr *pFVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  ForElementType<FSetElementId> FVar15;
  FWeakObjectPtr FVar16;
  code *pcVar17;
  ForAnyElementType FVar18;
  TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar19;
  int iVar20;
  int iVar21;
  undefined1 auStack_1f8 [32];
  FWeakObjectPtr *local_1d8;
  FWeakObjectPtr *local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7;
  undefined1 local_1a6;
  EDS_GradeType local_1a5;
  ForAnyElementType local_1a0;
  undefined8 local_198;
  int local_190;
  UDS_M_ItemRepair *local_188;
  uint local_180;
  FWeakObjectPtr local_178;
  FWeakObjectPtr local_170;
  FWeakObjectPtr local_168;
  TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_160;
  TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> local_150;
  undefined8 local_148;
  long64 local_140;
  TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *local_138;
  FWeakObjectPtr *local_130;
  FWeakObjectPtr local_128;
  FWeakObjectPtr local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  TSet<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  local_d8;
  undefined1 local_88 [72];
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  local_1a5 = param_1;
  local_188 = this;
  bVar4 = TWeakObjectPtr<UDS_M_InventoryBag,FWeakObjectPtr>::UEOpEquals
                    (&this->RepairBagModel,(void *)0x0);
  if (bVar4) {
    return;
  }
  pTVar19 = &this->BulkRepairTargetArray;
  pFVar11 = (FWeakObjectPtr *)(pTVar19->AllocatorInstance).Data;
  iVar12 = (this->BulkRepairTargetArray).ArrayNum;
  local_d8.Elements._0_8_ = 0;
  local_d8.Elements._8_8_ = 0;
  local_d8.Elements._32_8_ = 0;
  pFVar2 = pFVar11 + iVar12;
  local_d8.Elements._40_4_ = 0;
  local_d8.Elements._44_4_ = 0x80;
  local_d8.Elements._48_4_ = 0xffffffff;
  local_d8.Elements._52_4_ = 0;
  local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_d8.HashSize = 0;
  local_1a0.Data = (FScriptContainerElement *)0x0;
  local_198 = 0;
  local_138 = pTVar19;
LAB_14bd179a0:
  do {
    if ((this->BulkRepairTargetArray).ArrayNum != iVar12) {
      local_1a8 = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(&local_1a8);
    }
    if (pFVar11 == pFVar2) {
      if ((this->BulkRepairTargetArray).ArrayNum == 0) {
        pTVar9 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)GetPlayerMaterialCounts
                              (this,(TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                     *)local_88);
        if ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
            &this->AvailableMaterialCounts != pTVar9) {
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Move<TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>_>
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)&this->AvailableMaterialCounts,pTVar9);
        }
        local_40 = 0;
        if ((void *)local_88._64_8_ != (void *)0x0) {
          FMemory::Free((void *)local_88._64_8_);
        }
        TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_88);
      }
      uVar13 = (ulonglong)(int)(uint)local_198;
      local_180 = (uint)local_198;
      local_130 = (FWeakObjectPtr *)(local_1a0.Data + uVar13 * 8);
      FVar18.Data = local_1a0.Data;
      do {
        pFVar2 = local_130;
        if ((uint)local_198 != (int)uVar13) {
          local_1a7 = 0;
          `TCheckedPointerIterator<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_1a7);
        }
        if ((FWeakObjectPtr *)FVar18.Data == pFVar2) {
          this_00 = (UDS_M_InventoryBag *)FWeakObjectPtr::Get(&(this->RepairBagModel).WeakPtr);
          UDS_M_InventoryBag::GetItemModelList(this_00,&local_160);
          iVar12 = local_160.ArrayNum;
          pFVar2 = (FWeakObjectPtr *)(local_160.AllocatorInstance.Data + (longlong)iVar12 * 8);
          FVar18.Data = local_160.AllocatorInstance.Data;
          do {
            if (local_160.ArrayNum != iVar12) {
              local_1a6 = 0;
              `TCheckedPointerIterator<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,int,0>::
              operator!='::__l2::<lambda_1>::operator()(&local_1a6);
            }
            if ((FWeakObjectPtr *)FVar18.Data == pFVar2) {
              if ((FWeakObjectPtr *)local_160.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
                FMemory::Free(local_160.AllocatorInstance.Data);
              }
              if ((this->BulkRepairTargetArray).ArrayNum == 0) {
                FDS_DataContainer::
                AddListData<enum_EDS_ModelEventItemRepair,enum_EDS_ItemRepairData>
                          ((FDS_DataContainer *)&this->_padding_,UpdateViewEvent,ResetRegister);
              }
              else {
                UpdateBulkRepairMaterialItems(this);
              }
              if ((FWeakObjectPtr *)local_1a0.Data != (FWeakObjectPtr *)0x0) {
                FMemory::Free(local_1a0.Data);
              }
              local_d8.HashSize = 0;
              if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_d8.Hash.SecondaryData);
              }
              TSparseArray<TSparseSetElement<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_d8.Elements);
              return;
            }
            bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)FVar18.Data);
            if (bVar4) {
              pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)FVar18.Data);
              pFVar11 = (FWeakObjectPtr *)
                        (**(code **)(*(longlong *)pUVar7 + 0x3a0))(pUVar7,local_f8);
              bVar4 = FWeakObjectPtr::IsValid(pFVar11);
              if (bVar4) {
                FVar16 = *(FWeakObjectPtr *)FVar18.Data;
                if (local_d8.Elements._8_4_ != local_d8.Elements._52_4_) {
                  FVar15 = (ForElementType<FSetElementId>)&local_d8.Hash;
                  if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                    FVar15 = local_d8.Hash.SecondaryData;
                  }
                  for (iVar6 = *(int *)((longlong)FVar15 +
                                       (ulonglong)
                                       (local_d8.HashSize - 1U &
                                       (FVar16.ObjectSerialNumber ^ FVar16.ObjectIndex)) * 4);
                      iVar6 != -1;
                      iVar6 = *(int *)(local_d8.Elements._0_8_ + 8 + (longlong)iVar6 * 0x10)) {
                    local_120 = *(FWeakObjectPtr *)
                                 (local_d8.Elements._0_8_ + (longlong)iVar6 * 0x10);
                    local_128 = FVar16;
                    bVar4 = TWeakObjectPtr<UDS_M_ItemImplBase_const_,FWeakObjectPtr>::
                            UEOpEquals<UDS_M_ItemImplBase_const_,bool>
                                      ((TWeakObjectPtr<UDS_M_ItemImplBase_const_,FWeakObjectPtr> *)
                                       &local_120,
                                       (TWeakObjectPtr<UDS_M_ItemImplBase_const_,FWeakObjectPtr> *)
                                       &local_128);
                    if (bVar4) goto LAB_14bd1813c;
                  }
                }
                pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)FVar18.Data);
                pFVar11 = (FWeakObjectPtr *)
                          (**(code **)(*(longlong *)pUVar7 + 0x3a0))(pUVar7,local_f0);
                pUVar7 = FWeakObjectPtr::Get(pFVar11);
                if (*(EDS_GradeType *)(pUVar7 + 0x14) == local_1a5) {
                  pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)FVar18.Data);
                  pFVar11 = (FWeakObjectPtr *)
                            (**(code **)(*(longlong *)pUVar7 + 0x3a0))(pUVar7,local_e8);
                  pUVar7 = FWeakObjectPtr::Get(pFVar11);
                  iVar6 = *(int *)&pUVar7[0x11].field_0x4;
                  if (0 < iVar6) {
                    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)FVar18.Data);
                    pFVar11 = (FWeakObjectPtr *)
                              (**(code **)(*(longlong *)pUVar7 + 0x3a0))(pUVar7,local_e0);
                    pUVar7 = FWeakObjectPtr::Get(pFVar11);
                    if (iVar6 < *(int *)&pUVar7[0x15].field_0x18) {
                      bVar4 = CalculateAndReserveMaterials
                                        (this,(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)
                                              FVar18.Data);
                      if (bVar4) {
                        pFVar11 = (FWeakObjectPtr *)(pTVar19->AllocatorInstance).Data;
                        if ((pFVar11 <= FVar18.Data) && (FVar18.Data < pFVar11 + pTVar19->ArrayMax))
                        {
                          local_1c0 = (longlong)pTVar19->ArrayNum;
                          local_1b8 = 8;
                          local_1d8 = (FWeakObjectPtr *)FVar18.Data;
                          local_1d0 = pFVar11;
                          local_1c8 = (longlong)pTVar19->ArrayMax;
                          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            );
                          if (bVar4) {
                            pcVar17 = (code *)swi(3);
                            (*pcVar17)();
                            return;
                          }
                        }
                        iVar6 = pTVar19->ArrayNum;
                        if (iVar6 == pTVar19->ArrayMax) {
                          iVar6 = UE::Core::Private::
                                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                            (0x408,&pTVar19->AllocatorInstance,&pTVar19->ArrayMax);
                        }
                        pTVar19->ArrayNum = iVar6 + 1;
                        piVar1 = &(this->RegisteredRepairItemList).ArrayMax;
                        *(FWeakObjectPtr *)((pTVar19->AllocatorInstance).Data + (longlong)iVar6 * 8)
                             = *(FWeakObjectPtr *)FVar18.Data;
                        iVar6 = (this->RegisteredRepairItemList).ArrayNum;
                        if (iVar6 == *piVar1) {
                          iVar6 = UE::Core::Private::
                                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                            (0x408,&(this->RegisteredRepairItemList).
                                                    AllocatorInstance,piVar1);
                        }
                        (this->RegisteredRepairItemList).ArrayNum = iVar6 + 1;
                        *(FWeakObjectPtr *)
                         ((this->RegisteredRepairItemList).AllocatorInstance.Data +
                         (longlong)iVar6 * 8) = *(FWeakObjectPtr *)FVar18.Data;
                        pUVar10 = (UDS_M_ItemImplBase *)
                                  FWeakObjectPtr::Get((FWeakObjectPtr *)FVar18.Data);
                        UDS_M_ItemImplBase::SetSubtract(pUVar10,true);
                        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)FVar18.Data);
                        local_170.ObjectIndex = 0;
                        local_170.ObjectSerialNumber = 0;
                        local_118 = 0;
                        pcVar17 = *(code **)(*(longlong *)pUVar7 + 0x2e0);
                        FWeakObjectPtr::operator=(&local_170,(FObjectPtr)&local_118);
                        FVar16 = local_170;
                      }
                      else {
                        pUVar10 = (UDS_M_ItemImplBase *)
                                  FWeakObjectPtr::Get((FWeakObjectPtr *)FVar18.Data);
                        UDS_M_ItemImplBase::SetSubtract(pUVar10,false);
                        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)FVar18.Data);
                        local_168.ObjectIndex = 0;
                        local_168.ObjectSerialNumber = 0;
                        local_110 = 0;
                        pcVar17 = *(code **)(*(longlong *)pUVar7 + 0x2e0);
                        FWeakObjectPtr::operator=(&local_168,(FObjectPtr)&local_110);
                        FVar16 = local_168;
                      }
                      (*pcVar17)(pUVar7,FVar16,1);
                    }
                  }
                }
              }
            }
LAB_14bd1813c:
            FVar18.Data = FVar18.Data + 8;
          } while( true );
        }
        bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)FVar18.Data);
        if (bVar4) {
          pUVar10 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)FVar18.Data);
          UDS_M_ItemImplBase::SetSubtract(pUVar10,false);
          pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)FVar18.Data);
          local_148 = 0;
          local_178.ObjectIndex = 0;
          local_178.ObjectSerialNumber = 0;
          pcVar17 = *(code **)(*(longlong *)pUVar7 + 0x2e0);
          FWeakObjectPtr::operator=(&local_178,(FObjectPtr)&local_148);
          (*pcVar17)(pUVar7,local_178,1);
          ReleaseReservedMaterials
                    (this,(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)FVar18.Data);
        }
        pFVar2 = (FWeakObjectPtr *)(pTVar19->AllocatorInstance).Data;
        if ((pFVar2 <= FVar18.Data) && (FVar18.Data < pFVar2 + pTVar19->ArrayMax)) {
          local_1c0 = (longlong)pTVar19->ArrayNum;
          local_1b8 = 8;
          local_1d8 = (FWeakObjectPtr *)FVar18.Data;
          local_1d0 = pFVar2;
          local_1c8 = (longlong)pTVar19->ArrayMax;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
        }
        iVar12 = pTVar19->ArrayNum;
        if (iVar12 != 0) {
          pFVar3 = (pTVar19->AllocatorInstance).Data;
          iVar20 = 0;
          iVar6 = 0;
          bVar4 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::
                  UEOpEquals<UDS_M_ItemImplBase,bool>
                            ((TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)pFVar3,
                             (TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)FVar18.Data);
          bVar4 = !bVar4;
          iVar21 = iVar6;
joined_r0x00014bd17c5b:
          do {
            local_190 = iVar21;
            iVar6 = iVar6 + 1;
            if (iVar6 < iVar12) {
              bVar5 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::
                      UEOpEquals<UDS_M_ItemImplBase,bool>
                                ((TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)
                                 (pFVar3 + (longlong)iVar6 * 8),
                                 (TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)FVar18.Data);
              iVar21 = local_190;
              if (bVar4 == !bVar5) goto joined_r0x00014bd17c5b;
            }
            iVar21 = iVar6 - local_190;
            if (bVar4 != false) {
              if (iVar20 != local_190) {
                memmove(pFVar3 + (longlong)iVar20 * 8,pFVar3 + (longlong)local_190 * 8,
                        (longlong)iVar21 << 3);
              }
              iVar20 = iVar20 + iVar21;
            }
            bVar4 = (bool)(bVar4 ^ 1);
            iVar21 = iVar6;
          } while (iVar6 < iVar12);
          (local_188->BulkRepairTargetArray).ArrayNum = iVar20;
          this = local_188;
        }
        pFVar2 = (FWeakObjectPtr *)(this->RegisteredRepairItemList).AllocatorInstance.Data;
        if ((pFVar2 <= FVar18.Data) &&
           (lVar14 = (longlong)(this->RegisteredRepairItemList).ArrayMax,
           FVar18.Data < pFVar2 + lVar14)) {
          local_1c0 = (longlong)(this->RegisteredRepairItemList).ArrayNum;
          local_1b8 = 8;
          local_1d8 = (FWeakObjectPtr *)FVar18.Data;
          local_1d0 = pFVar2;
          local_1c8 = lVar14;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
        }
        iVar12 = (this->RegisteredRepairItemList).ArrayNum;
        if (iVar12 != 0) {
          pFVar3 = (this->RegisteredRepairItemList).AllocatorInstance.Data;
          iVar20 = 0;
          iVar6 = 0;
          bVar4 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::
                  UEOpEquals<UDS_M_ItemImplBase,bool>
                            ((TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)pFVar3,
                             (TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)FVar18.Data);
          bVar4 = !bVar4;
          iVar21 = iVar6;
joined_r0x00014bd17d6a:
          do {
            local_190 = iVar21;
            iVar6 = iVar6 + 1;
            if (iVar6 < iVar12) {
              bVar5 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::
                      UEOpEquals<UDS_M_ItemImplBase,bool>
                                ((TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)
                                 (pFVar3 + (longlong)iVar6 * 8),
                                 (TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)FVar18.Data);
              iVar21 = local_190;
              if (bVar4 == !bVar5) goto joined_r0x00014bd17d6a;
            }
            iVar21 = iVar6 - local_190;
            if (bVar4 != false) {
              if (iVar20 != local_190) {
                memmove(pFVar3 + (longlong)iVar20 * 8,pFVar3 + (longlong)local_190 * 8,
                        (longlong)iVar21 << 3);
              }
              iVar20 = iVar20 + iVar21;
            }
            bVar4 = (bool)(bVar4 ^ 1);
            iVar21 = iVar6;
          } while (iVar6 < iVar12);
          (local_188->RegisteredRepairItemList).ArrayNum = iVar20;
          this = local_188;
        }
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)FVar18.Data);
        local_140 = (**(code **)(*(longlong *)pUVar7 + 0x388))(pUVar7);
        if (*(int *)&(this->RepairMaterialInfoData).field_0x8 !=
            *(int *)&(this->RepairMaterialInfoData).field_0x34) {
          TSet<TTuple<__int64,FDS_MaterialSlotInfoArray>,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>,FDefaultSetAllocator>
          ::RemoveImpl<__int64>
                    ((TSet<TTuple<__int64,FDS_MaterialSlotInfoArray>,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>,FDefaultSetAllocator>
                      *)&this->RepairMaterialInfoData,
                     (int)((ulonglong)local_140 >> 0x20) * 0x17 + (int)local_140,&local_140);
        }
        FVar18.Data = FVar18.Data + 8;
        uVar13 = (ulonglong)local_180;
        pTVar19 = local_138;
      } while( true );
    }
    bVar4 = FWeakObjectPtr::IsValid(pFVar11);
    if (bVar4) {
      pUVar7 = FWeakObjectPtr::Get(pFVar11);
      pFVar8 = (FWeakObjectPtr *)(**(code **)(*(longlong *)pUVar7 + 0x3a0))(pUVar7,local_108);
      bVar4 = FWeakObjectPtr::IsValid(pFVar8);
      if (bVar4) {
        pUVar7 = FWeakObjectPtr::Get(pFVar11);
        pFVar8 = (FWeakObjectPtr *)(**(code **)(*(longlong *)pUVar7 + 0x3a0))(pUVar7,local_100);
        pUVar7 = FWeakObjectPtr::Get(pFVar8);
        if (*(EDS_GradeType *)(pUVar7 + 0x14) == param_1) {
          TSet<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::Emplace<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>_const_&>
                    (&local_d8,&local_150,(bool *)pFVar11);
          pFVar11 = pFVar11 + 1;
          goto LAB_14bd179a0;
        }
      }
    }
    if (local_1a0.Data <= pFVar11) {
      if (pFVar11 < (FWeakObjectPtr *)(local_1a0.Data + (longlong)local_198._4_4_ * 8)) {
        local_1c0 = (longlong)(int)(uint)local_198;
        local_1b8 = 8;
        local_1d0 = (FWeakObjectPtr *)local_1a0.Data;
        local_1d8 = pFVar11;
        local_1c8 = (longlong)local_198._4_4_;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
      }
    }
    iVar6 = (uint)local_198;
    if ((uint)local_198 == local_198._4_4_) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&local_1a0,(int *)((longlong)&local_198 + 4));
    }
    local_198 = CONCAT44(local_198._4_4_,iVar6 + 1);
    FVar16 = *pFVar11;
    pFVar11 = pFVar11 + 1;
    *(FWeakObjectPtr *)(local_1a0.Data + (longlong)iVar6 * 8) = FVar16;
  } while( true );
}

// ReleaseReservedMaterials @ 14bd1a6a0

void __thiscall
UDS_M_ItemRepair::ReleaseReservedMaterials
          (UDS_M_ItemRepair *this,TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  longlong lVar6;
  FDS_MaterialSlotInfoArray *pFVar7;
  int *piVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 *puVar11;
  undefined1 local_res10 [8];
  
  bVar3 = FWeakObjectPtr::IsValid(&param_1->WeakPtr);
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&param_1->WeakPtr);
    lVar6 = (**(code **)(*(longlong *)pUVar5 + 0x388))(pUVar5);
    if (*(int *)&(this->RepairMaterialInfoData).field_0x8 !=
        *(int *)&(this->RepairMaterialInfoData).field_0x34) {
      puVar11 = *(undefined1 **)&(this->RepairMaterialInfoData).field_0x40;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &(this->RepairMaterialInfoData).field_0x38;
      }
      iVar4 = *(int *)(puVar11 +
                      ((lVar6 >> 0x20) * 0x17 + lVar6 &
                      (ulonglong)(*(int *)&(this->RepairMaterialInfoData).field_0x48 - 1)) * 4);
      if (iVar4 != -1) {
        lVar2 = *(longlong *)&this->RepairMaterialInfoData;
        while (*(longlong *)((longlong)iVar4 * 0x20 + lVar2) != lVar6) {
          iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + lVar2);
          if (iVar4 == -1) {
            return;
          }
        }
        pFVar7 = TMapBase<__int64,FDS_MaterialSlotInfoArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>_>
                 ::FindChecked((TMapBase<__int64,FDS_MaterialSlotInfoArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>_>
                                *)&this->RepairMaterialInfoData,lVar6);
        iVar4 = (pFVar7->SelectedMaterialArray).ArrayNum;
        pFVar9 = (pFVar7->SelectedMaterialArray).AllocatorInstance.Data;
        pFVar10 = pFVar9 + (longlong)iVar4 * 0x10;
        while( true ) {
          if ((pFVar7->SelectedMaterialArray).ArrayNum != iVar4) {
            `TCheckedPointerIterator<FDS_MaterialSlotInfo_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res10);
          }
          if (pFVar9 == pFVar10) break;
          uVar1 = *(uint *)(pFVar9 + 4);
          piVar8 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
                   FindOrAddImpl<int_const_&>
                             ((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                               *)&this->AvailableMaterialCounts,*(uint *)pFVar9,(int *)pFVar9);
          *piVar8 = *piVar8 + uVar1;
          pFVar9 = pFVar9 + 0x10;
        }
      }
    }
  }
  return;
}

// ResetItemRepair @ 14bd1c700

void __thiscall UDS_M_ItemRepair::ResetItemRepair(UDS_M_ItemRepair *this)

{
  FDS_DataContainer::SetData<int,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,RepairTabIndex,0);
  FDS_DataContainer::SetData<int,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,ManagementTabIndex,0);
  FDS_DataContainer::SetData<enum_EDS_ItemRepairType,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,ItemRepairType,BulkRepair);
  FDS_DataContainer::SetData<int,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,RegisterItemTID,0);
  FDS_DataContainer::SetData<int,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,RegisterItemUID,0);
  FDS_DataContainer::SetData<int,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,RestoreTID,0);
  FDS_DataContainer::SetData<int,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,RepairedDurabilityPercent,0);
  FDS_DataContainer::SetData<int,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,RepairMoneyValue,0);
  FDS_DataContainer::SetData<int,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,SelectedItemUID,0);
  FDS_DataContainer::SetData<bool,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,HasEnoughRepairMaterials,false);
  FDS_DataContainer::SetData<bool,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,HasEnoughRepairMoney,false);
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// SelectBulkRepairItem @ 14bd1cb20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UDS_M_ItemRepair::SelectBulkRepairItem(UDS_M_ItemRepair *this,long64 *param_1)

{
  int *piVar1;
  TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UDS_M_InventoryBag *this_00;
  FWeakObjectPtr *pFVar7;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *pTVar8;
  UDS_M_ItemImplBase *this_01;
  UObject *pUVar9;
  longlong lVar10;
  FScriptContainerElement *this_02;
  undefined1 auStack_108 [32];
  FWeakObjectPtr *local_e8;
  FWeakObjectPtr *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  FWeakObjectPtr local_b8;
  FWeakObjectPtr local_b0;
  undefined8 local_a8;
  TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_a0;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_90;
  undefined1 local_78 [72];
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  this_00 = (UDS_M_InventoryBag *)FWeakObjectPtr::Get(&(this->RepairBagModel).WeakPtr);
  UDS_M_InventoryBag::GetItemModelList(this_00,&local_a0);
  pFVar7 = &TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
            FindByPredicate<_UDS_M_ItemRepair::SelectBulkRepairItem_::__l2::<lambda_1>_>
                      (&local_a0,(<lambda_1>)*param_1)->WeakPtr;
  if (pFVar7 != (FWeakObjectPtr *)0x0) {
    local_b8 = *pFVar7;
    pTVar2 = &this->BulkRepairTargetArray;
    this_02 = (pTVar2->AllocatorInstance).Data;
    pFVar3 = this_02 + (longlong)(this->BulkRepairTargetArray).ArrayNum * 8;
    for (; this_02 != pFVar3; this_02 = this_02 + 8) {
      bVar5 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals<UDS_M_ItemImplBase,bool>
                        ((TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)this_02,
                         (TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)&local_b8);
      if (bVar5) goto LAB_14bd1cd84;
    }
    if (*(int *)&(this->AvailableMaterialCounts).field_0x8 ==
        *(int *)&(this->AvailableMaterialCounts).field_0x34) {
      pTVar8 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               GetPlayerMaterialCounts
                         (this,(TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                *)local_78);
      if ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
          &this->AvailableMaterialCounts != pTVar8) {
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Move<TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>_>
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)&this->AvailableMaterialCounts,pTVar8);
      }
      local_30 = 0;
      if ((void *)local_78._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_78._64_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_78);
    }
    bVar5 = CalculateAndReserveMaterials
                      (this,(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)&local_b8);
    if (bVar5) {
      pFVar7 = (FWeakObjectPtr *)(pTVar2->AllocatorInstance).Data;
      if ((pFVar7 <= &local_b8) &&
         (lVar10 = (longlong)(this->BulkRepairTargetArray).ArrayMax, &local_b8 < pFVar7 + lVar10)) {
        local_d0 = (longlong)(this->BulkRepairTargetArray).ArrayNum;
        local_c8 = 8;
        local_e8 = &local_b8;
        local_e0 = pFVar7;
        local_d8 = lVar10;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = (this->BulkRepairTargetArray).ArrayNum;
      piVar1 = &(this->BulkRepairTargetArray).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar2->AllocatorInstance,piVar1);
      }
      piVar1 = &(this->RegisteredRepairItemList).ArrayMax;
      (this->BulkRepairTargetArray).ArrayNum = iVar6 + 1;
      *(FWeakObjectPtr *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_b8;
      iVar6 = (this->RegisteredRepairItemList).ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(this->RegisteredRepairItemList).AllocatorInstance,piVar1);
      }
      (this->RegisteredRepairItemList).ArrayNum = iVar6 + 1;
      *(FWeakObjectPtr *)
       ((this->RegisteredRepairItemList).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_b8;
      this_01 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&local_b8);
      UDS_M_ItemImplBase::SetSubtract(this_01,true);
      pUVar9 = FWeakObjectPtr::Get(&local_b8);
      local_a8 = 0;
      local_b0.ObjectIndex = 0;
      local_b0.ObjectSerialNumber = 0;
      pcVar4 = *(code **)(*(longlong *)pUVar9 + 0x2e0);
      FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_a8);
      (*pcVar4)(pUVar9,local_b0,1);
      UpdateBulkRepairMaterialItems(this);
    }
    else {
      UDS_UIMessageManager::GetInst();
      local_90._0_8_ = 0;
      local_90._8_8_ = 0;
      local_90._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x9fc7,Alert_None_01,&local_90);
    }
  }
LAB_14bd1cd84:
  if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.AllocatorInstance.Data);
  }
  return;
}

// SelectRestoreItem @ 14bd1cdc0

void __thiscall UDS_M_ItemRepair::SelectRestoreItem(UDS_M_ItemRepair *this,long64 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FName FVar6;
  FString *pFVar7;
  UDS_M_InventoryBag *this_00;
  FWeakObjectPtr *pFVar8;
  UDS_M_ItemImplBase *this_01;
  UObject *pUVar9;
  FDS_ItemBaseTableRow *this_02;
  wchar_t *_Str;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  undefined8 local_res20;
  TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_38;
  
  FVar6 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_ItemRepairData)&local_res10);
  uVar1 = *(undefined8 *)FVar6;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar7 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar4 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar6);
  if ((pFVar7->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  local_res10 = (FWeakObjectPtr)_wtoi64(_Str);
  if (local_res10 != (FWeakObjectPtr)*param_1) {
    ClearItemSlotUI(this,(long64 *)&local_res10);
    DS_ItemDataUtil::GetItemDataByUID((long64)&local_res18);
    bVar3 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar3) {
      this_00 = (UDS_M_InventoryBag *)FWeakObjectPtr::Get(&(this->RepairBagModel).WeakPtr);
      UDS_M_InventoryBag::GetItemModelList(this_00,&local_38);
      pFVar8 = &TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                ::FindByPredicate<_UDS_M_ItemRepair::SelectRestoreItem_::__l2::<lambda_1>_>
                          (&local_38,(<lambda_1>)*param_1)->WeakPtr;
      if (pFVar8 != (FWeakObjectPtr *)0x0) {
        local_res8 = *pFVar8;
        bVar3 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)&local_res8,
                           (void *)0x0);
        if (!bVar3) {
          this_01 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&local_res8);
          UDS_M_ItemImplBase::SetSubtract(this_01,true);
          pUVar9 = FWeakObjectPtr::Get(&local_res8);
          local_res10.ObjectIndex = 0;
          local_res10.ObjectSerialNumber = 0;
          local_res20 = 0;
          pcVar2 = *(code **)(*(longlong *)pUVar9 + 0x2e0);
          FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
          (*pcVar2)(pUVar9,local_res10,1);
          pUVar9 = FWeakObjectPtr::Get(&local_res8);
          iVar5 = (**(code **)(*(longlong *)pUVar9 + 0x380))(pUVar9);
          this_02 = FDS_ItemBaseTableRow::GetRef((longlong)iVar5,true);
          bVar3 = FDS_ItemBaseTableRow::IsValid(this_02);
          if (bVar3) {
            FDS_DataContainer::SetData<__int64,enum_EDS_ItemRepairData>
                      ((FDS_DataContainer *)&this->_padding_,RegisterItemUID,*param_1);
            pUVar9 = FWeakObjectPtr::Get(&local_res8);
            iVar5 = (**(code **)(*(longlong *)pUVar9 + 0x380))(pUVar9);
            FDS_DataContainer::SetData<int,enum_EDS_ItemRepairData>
                      ((FDS_DataContainer *)&this->_padding_,RegisterItemTID,iVar5);
            FDS_DataContainer::SetData<int,enum_EDS_ItemRepairData>
                      ((FDS_DataContainer *)&this->_padding_,RestoreTID,this_02->ID_Restore);
            FDS_DataContainer::SetData<enum_EDS_ItemRepairType,enum_EDS_ItemRepairData>
                      ((FDS_DataContainer *)&this->_padding_,ItemRepairType,Restore);
            UpdateRestoreMaterialItems(this);
          }
        }
      }
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SelectTargetRepairItem @ 14bd1cfa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UDS_M_ItemRepair::SelectTargetRepairItem(UDS_M_ItemRepair *this,long64 *param_1)

{
  longlong *this_00;
  undefined1 *puVar1;
  TMap<int,FDS_RequiredMaterialInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>_>
  *this_01;
  TMap<int,FDS_MaterialSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>_>
  *this_02;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  TMap<int,FDS_RequiredMaterialInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>_>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  FName FVar9;
  FString *pFVar10;
  UObject *pUVar11;
  UDS_M_InventoryBag *this_03;
  FWeakObjectPtr *pFVar12;
  UDS_M_ItemImplBase *this_04;
  TSet<TTuple<int,FDS_RequiredMaterialInfo>,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>,FDefaultSetAllocator>
  *pTVar13;
  wchar_t *_Str;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 auStackY_1b8 [32];
  undefined1 local_188 [8];
  FWeakObjectPtr local_180;
  FWeakObjectPtr local_178;
  FWeakObjectPtr local_170;
  undefined4 local_168;
  undefined8 local_164;
  undefined4 local_15c;
  TMap<int,FDS_RequiredMaterialInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>_>
  *local_158;
  int iStack_150;
  uint uStack_14c;
  undefined1 *local_148;
  undefined4 uStack_140;
  int iStack_13c;
  int local_138;
  int iStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  int local_128;
  undefined1 local_124 [20];
  long64 *local_110;
  FDS_DataContainer *local_108;
  UDS_M_ItemRepair *local_100;
  TMap<int,FDS_RequiredMaterialInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>_>
  *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  undefined4 *local_c8;
  undefined4 *local_c0;
  TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [72];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  this_00 = &this->_padding_;
  local_110 = param_1;
  local_108 = (FDS_DataContainer *)this_00;
  local_100 = this;
  FVar9 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                    ((FDS_DataContainer *)this_00,(EDS_ItemRepairData)local_a8);
  uVar4 = *(undefined8 *)FVar9;
  uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  pFVar10 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)this_00,uVar8 + (int)((ulonglong)uVar4 >> 0x20),(FName *)FVar9);
  if ((pFVar10->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  local_124._4_8_ = _wtoi64(_Str);
  if (local_124._4_8_ != *param_1) {
    ClearItemSlotUI(this,(long64 *)(local_124 + 4));
    DS_ItemDataUtil::GetItemDataByUID((long64)&local_180);
    bVar7 = FWeakObjectPtr::IsValid(&local_180);
    if (bVar7) {
      pUVar11 = FWeakObjectPtr::Get(&local_180);
      iVar17 = *(int *)&pUVar11[0x15].field_0x18;
      pUVar11 = FWeakObjectPtr::Get(&local_180);
      this->NeededDurability = iVar17 - *(int *)&pUVar11[0x11].field_0x4;
      this_03 = (UDS_M_InventoryBag *)FWeakObjectPtr::Get(&(this->RepairBagModel).WeakPtr);
      UDS_M_InventoryBag::GetItemModelList(this_03,&local_b8);
      pFVar12 = &TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                 ::FindByPredicate<_UDS_M_ItemRepair::SelectTargetRepairItem_::__l2::<lambda_1>_>
                           (&local_b8,(<lambda_1>)*param_1)->WeakPtr;
      if (pFVar12 != (FWeakObjectPtr *)0x0) {
        local_170 = *pFVar12;
        this_04 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&local_170);
        UDS_M_ItemImplBase::SetSubtract(this_04,true);
        pUVar11 = FWeakObjectPtr::Get(&local_170);
        local_124._12_8_ = 0;
        local_178.ObjectIndex = 0;
        local_178.ObjectSerialNumber = 0;
        pcVar5 = *(code **)(*(longlong *)pUVar11 + 0x2e0);
        FWeakObjectPtr::operator=(&local_178,(FObjectPtr)((longlong)local_124 + 0xc));
        (*pcVar5)(pUVar11);
        this_01 = &this->TargetRepairRequiredMaterialsMap;
        bVar7 = 1 < *(int *)&(this->TargetRepairRequiredMaterialsMap).field_0x48;
        if (!bVar7) {
          TSet<TTuple<int,FDS_RequiredMaterialInfo>,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>,FDefaultSetAllocator>
          ::UnhashElements((TSet<TTuple<int,FDS_RequiredMaterialInfo>,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>,FDefaultSetAllocator>
                            *)this_01);
        }
        puVar1 = &(this->TargetRepairRequiredMaterialsMap).field_0xc;
        iVar17 = 0;
        *(undefined4 *)&(this->TargetRepairRequiredMaterialsMap).field_0x8 = 0;
        if (*(int *)puVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
        }
        *(undefined4 *)&(this->TargetRepairRequiredMaterialsMap).field_0x30 = 0xffffffff;
        *(undefined4 *)&(this->TargetRepairRequiredMaterialsMap).field_0x34 = 0;
        iVar3 = *(int *)&(this->TargetRepairRequiredMaterialsMap).field_0x2c;
        *(undefined4 *)&(this->TargetRepairRequiredMaterialsMap).field_0x28 = 0;
        if ((iVar3 < 0) || (0x80 < iVar3)) {
          *(undefined4 *)&(this->TargetRepairRequiredMaterialsMap).field_0x2c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)
                     &(this->TargetRepairRequiredMaterialsMap).field_0x10,0);
        }
        uVar8 = 1;
        if (bVar7) {
          *(undefined4 *)&(this->TargetRepairRequiredMaterialsMap).field_0x48 = 1;
          TSet<TTuple<int,FDS_RequiredMaterialInfo>,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>,FDefaultSetAllocator>
          ::Rehash((TSet<TTuple<int,FDS_RequiredMaterialInfo>,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>,FDefaultSetAllocator>
                    *)this_01);
        }
        pUVar11 = FWeakObjectPtr::Get(&local_180);
        pTVar13 = (TSet<TTuple<int,FDS_RequiredMaterialInfo>,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>,FDefaultSetAllocator>
                   *)GetRequiredMaterialsForRepairItem
                               (this,(TMap<int,FDS_RequiredMaterialInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>_>
                                      *)local_98,*(int *)&pUVar11[8].field_0x10);
        if ((TSet<TTuple<int,FDS_RequiredMaterialInfo>,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>,FDefaultSetAllocator>
             *)this_01 != pTVar13) {
          TSet<TTuple<int,FDS_RequiredMaterialInfo>,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>,FDefaultSetAllocator>
          ::
          Move<TSet<TTuple<int,FDS_RequiredMaterialInfo>,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>,FDefaultSetAllocator>_>
                    ((TSet<TTuple<int,FDS_RequiredMaterialInfo>,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>,FDefaultSetAllocator>
                      *)this_01,pTVar13);
        }
        local_50 = 0;
        if ((void *)local_98._64_8_ != (void *)0x0) {
          FMemory::Free((void *)local_98._64_8_);
        }
        TSparseArray<TSparseSetElement<TTuple<int,FDS_RequiredMaterialInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<int,FDS_RequiredMaterialInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<int,FDS_RequiredMaterialInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_98);
        this_02 = &this->TargetRepairSelectedMaterialsMap;
        bVar7 = 1 < *(int *)&(this->TargetRepairSelectedMaterialsMap).field_0x48;
        if (!bVar7) {
          TSet<TTuple<int,FDS_MaterialSlotInfo>,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>,FDefaultSetAllocator>
          ::UnhashElements((TSet<TTuple<int,FDS_MaterialSlotInfo>,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>,FDefaultSetAllocator>
                            *)this_02);
        }
        puVar1 = &(this->TargetRepairSelectedMaterialsMap).field_0xc;
        *(undefined4 *)&(this->TargetRepairSelectedMaterialsMap).field_0x8 = 0;
        if (*(int *)puVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1c,4,0,(ForAnyElementType *)this_02,0,(int *)puVar1);
        }
        *(undefined4 *)&(this->TargetRepairSelectedMaterialsMap).field_0x30 = 0xffffffff;
        *(undefined4 *)&(this->TargetRepairSelectedMaterialsMap).field_0x34 = 0;
        iVar3 = *(int *)&(this->TargetRepairSelectedMaterialsMap).field_0x2c;
        *(undefined4 *)&(this->TargetRepairSelectedMaterialsMap).field_0x28 = 0;
        if ((iVar3 < 0) || (0x80 < iVar3)) {
          *(undefined4 *)&(this->TargetRepairSelectedMaterialsMap).field_0x2c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)
                     &(this->TargetRepairSelectedMaterialsMap).field_0x10,0);
        }
        if (bVar7) {
          *(undefined4 *)&(this->TargetRepairSelectedMaterialsMap).field_0x48 = 1;
          TSet<TTuple<int,FDS_MaterialSlotInfo>,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>,FDefaultSetAllocator>
          ::Rehash((TSet<TTuple<int,FDS_MaterialSlotInfo>,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>,FDefaultSetAllocator>
                    *)this_02);
        }
        puVar1 = &(this->TargetRepairRequiredMaterialsMap).field_0x10;
        iVar3 = *(int *)&(this->TargetRepairRequiredMaterialsMap).field_0x28;
        local_138 = 0;
        iStack_13c = local_138;
        if (iVar3 != 0) {
          puVar19 = *(uint **)&(this->TargetRepairRequiredMaterialsMap).field_0x20;
          if (puVar19 == (uint *)0x0) {
            puVar19 = (uint *)puVar1;
          }
          uVar16 = *puVar19;
          local_138 = 0;
          iVar17 = 0;
          while (uVar16 == 0) {
            lVar14 = (longlong)iVar17;
            local_138 = local_138 + 0x20;
            iVar17 = iVar17 + 1;
            iStack_13c = iVar3;
            if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14bd1d2ed;
            uVar16 = puVar19[lVar14 + 1];
          }
          uVar8 = -uVar16 & uVar16;
          uVar2 = (ulonglong)uVar8 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          local_128 = (int)lVar14;
          iStack_13c = local_128 + -1 + local_138;
          if (iVar3 < iStack_13c) {
            iStack_13c = iVar3;
          }
        }
LAB_14bd1d2ed:
        uVar16 = *(uint *)&(this->TargetRepairRequiredMaterialsMap).field_0x28;
        iStack_130 = *(int *)&(this->TargetRepairRequiredMaterialsMap).field_0x8 -
                     *(int *)&(this->TargetRepairRequiredMaterialsMap).field_0x34;
        uVar20 = uVar16 & 0xffffffe0;
        uStack_140 = 0xffffffff;
        TStack_f0._padding_ = CONCAT44(uVar8,iVar17);
        TStack_f0.CurrentBitIndex = iStack_13c;
        TStack_f0.UnvisitedBitMask = 0xffffffff;
        iVar15 = (int)uVar16 >> 5;
        TStack_f0._28_4_ = iStack_13c;
        TStack_f0.BaseBitIndex = local_138;
        uStack_d0 = CONCAT44(uStack_12c,iStack_130);
        local_158 = this_01;
        iStack_150 = iVar17;
        uStack_14c = uVar8;
        local_148 = puVar1;
        iStack_134 = iStack_13c;
        local_f8 = this_01;
        TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
        if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar8 = *(uint *)&(this->TargetRepairRequiredMaterialsMap).field_0x28;
        if (uVar16 != uVar8) {
          puVar18 = *(undefined1 **)&(this->TargetRepairRequiredMaterialsMap).field_0x20;
          if (puVar18 == (undefined1 *)0x0) {
            puVar18 = puVar1;
          }
          uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar15 * 4);
          while (uVar16 == 0) {
            lVar14 = (longlong)iVar15;
            uVar20 = uVar20 + 0x20;
            iVar15 = iVar15 + 1;
            uVar16 = uVar8;
            if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
            goto LAB_14bd1d400;
            uVar16 = *(uint *)(puVar18 + lVar14 * 4 + 4);
          }
          uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
          lVar14 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          uVar16 = (int)lVar14 + -1 + uVar20;
          if ((int)uVar8 < (int)uVar16) {
            uVar16 = uVar8;
          }
        }
LAB_14bd1d400:
        while( true ) {
          pTVar6 = local_f8;
          if (*(int *)(&local_f8->field_0x0 + 8) - *(int *)(&local_f8->field_0x0 + 0x34) !=
              (int)uStack_d0) {
            `TSparseArray<TSparseSetElement<TTuple<int,FDS_RequiredMaterialInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_188);
          }
          if (((TStack_f0.CurrentBitIndex == uVar16) &&
              (TStack_f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
             (pTVar6 == this_01)) break;
          local_164 = 0;
          local_c8 = (undefined4 *)
                     ((longlong)TStack_f0.CurrentBitIndex * 0x30 + *(longlong *)&pTVar6->field_0x0);
          local_15c = 0;
          local_168 = *local_c8;
          local_c0 = &local_168;
          TSet<TTuple<int,FDS_MaterialSlotInfo>,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<int_const_&,FDS_MaterialSlotInfo_&&>_>
                    ((TSet<TTuple<int,FDS_MaterialSlotInfo>,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>,FDefaultSetAllocator>
                      *)this_02,(TPairInitializer<int_const_&,FDS_MaterialSlotInfo_&&> *)local_124,
                     (bool *)&local_c8);
          TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
        }
        FDS_DataContainer::SetData<__int64,enum_EDS_ItemRepairData>
                  (local_108,RegisterItemUID,*local_110);
        pUVar11 = FWeakObjectPtr::Get(&local_170);
        iVar17 = (**(code **)(*(longlong *)pUVar11 + 0x380))(pUVar11);
        FDS_DataContainer::SetData<int,enum_EDS_ItemRepairData>(local_108,RegisterItemTID,iVar17);
        UpdateTargetRepairMaterialItems(local_100,true);
      }
      if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SetTargetRepairMaterialQuantity @ 14bd22340

void __thiscall
UDS_M_ItemRepair::SetTargetRepairMaterialQuantity(UDS_M_ItemRepair *this,long64 param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  FDS_MaterialSlotInfo *pFVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->TargetRepairSelectedMaterialsMap).field_0x8 !=
      *(int *)&(this->TargetRepairSelectedMaterialsMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->TargetRepairSelectedMaterialsMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->TargetRepairSelectedMaterialsMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + ((ulonglong)
                               (*(int *)&(this->TargetRepairSelectedMaterialsMap).field_0x48 - 1) &
                              param_1 & 0xffffffffU) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->TargetRepairSelectedMaterialsMap;
      while (*(int *)((longlong)iVar2 * 0x1c + lVar1) != (int)param_1) {
        iVar2 = *(int *)((longlong)iVar2 * 0x1c + 0x14 + lVar1);
        if (iVar2 == -1) {
          return;
        }
      }
      pFVar3 = TMapBase<int,FDS_MaterialSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>_>
               ::FindChecked((TMapBase<int,FDS_MaterialSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>_>
                              *)&this->TargetRepairSelectedMaterialsMap,(int)param_1);
      pFVar3->UsedQuantity = param_2;
      UpdateTargetRepairMaterialItems(this,false);
    }
  }
  return;
}

// TryToRegisterRepairItem @ 14bd23c50

void __thiscall
UDS_M_ItemRepair::TryToRegisterRepairItem
          (UDS_M_ItemRepair *this,TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *param_1,
          TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long64 lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UDS_UIMessageManager *pUVar7;
  FName FVar8;
  FString *pFVar9;
  UObject *pUVar10;
  UDS_DataBase *this_00;
  ulong64 uVar11;
  wchar_t *_Str;
  long64 local_res20;
  FWeakObjectPtr local_38;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_30;
  
  pUVar7 = UDS_UIMessageManager::GetInst();
  if (pUVar7 == (UDS_UIMessageManager *)0x0) {
    return;
  }
  FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_ItemRepairData)&local_res20);
  uVar2 = *(undefined8 *)FVar8;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar5 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar8);
  if ((pFVar9->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  iVar6 = _wtoi(_Str);
  pUVar10 = FWeakObjectPtr::Get(&param_2->WeakPtr);
  iVar1 = *(int *)&pUVar10[0x11].field_0x4;
  pUVar10 = FWeakObjectPtr::Get(&param_2->WeakPtr);
  if (iVar1 < *(int *)&pUVar10[0x15].field_0x18) {
    pUVar10 = FWeakObjectPtr::Get(&param_2->WeakPtr);
    local_res20 = *(long64 *)&pUVar10[8].field_0x8;
    if (iVar1 != 0) {
      pUVar10 = FWeakObjectPtr::Get(&param_2->WeakPtr);
      if (*(int *)&pUVar10[0x15].field_0x1c < 1) {
        pUVar10 = FWeakObjectPtr::Get(&param_2->WeakPtr);
        if (0 < *(int *)&pUVar10[0x15].field_0x20) {
          local_30._0_8_ = 0;
          local_30._8_8_ = 0;
          local_30._16_4_ = 0;
          UDS_UIMessageManager::OpenMsgByStringUi(0x9fce,Alert_None_01,&local_30);
          return;
        }
        local_30._0_8_ = 0;
        local_30._8_8_ = 0;
        local_30._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x9fc5,Alert_None_01,&local_30);
        return;
      }
      if (iVar6 == 0) {
        pUVar10 = FWeakObjectPtr::Get(&param_2->WeakPtr);
        bVar4 = HasAnyRepairMaterial(this,*(int *)&pUVar10[8].field_0x10);
        if (!bVar4) {
          UDS_UIMessageManager::GetInst();
          local_30._0_8_ = 0;
          local_30._8_8_ = 0;
          local_30._16_4_ = 0;
          UDS_UIMessageManager::OpenMsgByStringUi(0x9fc7,Alert_None_01,&local_30);
          return;
        }
        SelectBulkRepairItem(this,&local_res20);
        return;
      }
      if (iVar6 != 1) {
        return;
      }
      SelectTargetRepairItem(this,&local_res20);
      return;
    }
    if (iVar6 == 0) {
      local_30._0_8_ = 0;
      local_30._8_8_ = 0;
      local_30._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x9fc6,Alert_None_01,&local_30);
      return;
    }
    pUVar10 = FWeakObjectPtr::Get(&param_2->WeakPtr);
    if (0 < *(int *)&pUVar10[0x15].field_0x20) {
      UDS_PlayerData::GetData((ulong64)&local_38,UDS_PlayerData::MainPlayerEntityID,false);
      bVar4 = FWeakObjectPtr::IsValid(&local_38);
      if (!bVar4) {
        return;
      }
      pUVar10 = FWeakObjectPtr::Get(&param_2->WeakPtr);
      lVar3 = *(long64 *)&pUVar10[8].field_0x8;
      this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_38);
      uVar11 = UDS_DataBase::GetEntityID(this_00);
      bVar4 = DS_ItemDataUtil::IsEquippedItem(uVar11,lVar3);
      if (bVar4) {
        UDS_UIMessageManager::GetInst();
        local_30._0_8_ = 0;
        local_30._8_8_ = 0;
        local_30._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x9ff5,Alert_None_01,&local_30);
        return;
      }
      SelectRestoreItem(this,&local_res20);
      return;
    }
  }
  local_30._0_8_ = 0;
  local_30._8_8_ = 0;
  local_30._16_4_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi(0x9fc4,Alert_None_01,&local_30);
  return;
}

// TryToRepairItem @ 14bd23ee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall UDS_M_ItemRepair::TryToRepairItem(UDS_M_ItemRepair *this)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  TSparseArray<TSparseSetElement<TTuple<__int64,FDS_MaterialSlotInfoArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar5;
  TSparseArray<TSparseSetElement<TTuple<__int64,FDS_MaterialSlotInfoArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  UDS_M_MoneyDisplay *this_00;
  UObject *pUVar9;
  ulong64 uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  longlong lVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  ulonglong local_res10;
  undefined1 local_res18 [8];
  int local_res20;
  FWeakObjectPtr local_158;
  TSparseArray<TSparseSetElement<TTuple<__int64,FDS_MaterialSlotInfoArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_150;
  TMap<__int64,FDS_MaterialSlotInfoArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>_>
  *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  undefined1 *local_138;
  undefined4 uStack_130;
  int iStack_12c;
  int local_128;
  int iStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  TBitArray<FDefaultBitArrayAllocator> *local_118;
  TSparseArray<TSparseSetElement<TTuple<__int64,FDS_MaterialSlotInfoArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_e0;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_c8;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_b0;
  undefined1 local_98 [64];
  undefined8 local_58;
  int local_50 [4];
  
  UDS_PlayerData::GetMainPlayerData();
  bVar7 = FWeakObjectPtr::IsValid(&local_158);
  if (!bVar7) {
    return false;
  }
  this_00 = (UDS_M_MoneyDisplay *)FWeakObjectPtr::Get(&(this->CoinDisplayModel).WeakPtr);
  bVar7 = UDS_M_MoneyDisplay::HasEnoughMoney(this_00);
  if (!bVar7) {
    UDS_UIMessageManager::GetInst();
    local_e0._0_8_ = 0;
    local_e0._8_8_ = 0;
    local_e0._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x9fc8,Alert_None_01,&local_e0);
    return false;
  }
  iStack_120 = *(int *)&(this->RepairMaterialInfoData).field_0x8;
  iVar12 = *(int *)&(this->RepairMaterialInfoData).field_0x34;
  if (iStack_120 == iVar12) {
    UDS_UIMessageManager::GetInst();
    local_c8._0_8_ = 0;
    local_c8._8_8_ = 0;
    local_c8._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x9ffb,Alert_None_01,&local_c8);
    bVar7 = false;
  }
  else {
    local_150 = (TSparseArray<TSparseSetElement<TTuple<__int64,FDS_MaterialSlotInfoArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->RepairMaterialInfoData;
    pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->RepairMaterialInfoData).field_0x10;
    iVar15 = 0;
    iStack_140 = 0;
    local_res10 = CONCAT44(local_res10._4_4_,1);
    iVar2 = *(int *)&(this->RepairMaterialInfoData).field_0x28;
    local_128 = 0;
    iStack_12c = 0;
    if (iVar2 != 0) {
      puVar17 = *(uint **)&(this->RepairMaterialInfoData).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)pTVar20;
      }
      uVar13 = *puVar17;
      while (uVar13 == 0) {
        lVar11 = (longlong)iStack_140;
        local_128 = local_128 + 0x20;
        iStack_140 = iStack_140 + 1;
        iStack_12c = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_140) goto LAB_14bd24087;
        uVar13 = puVar17[lVar11 + 1];
      }
      local_res10 = (ulonglong)(-uVar13 & uVar13);
      uVar1 = local_res10 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_res20 = (int)lVar11;
      iStack_12c = local_128 + -1 + local_res20;
      if (iVar2 < iStack_12c) {
        iStack_12c = iVar2;
      }
    }
LAB_14bd24087:
    iStack_120 = iStack_120 - iVar12;
    uStack_13c = (undefined4)local_res10;
    uVar13 = *(uint *)&(this->RepairMaterialInfoData).field_0x28;
    uStack_130 = 0xffffffff;
    uVar18 = uVar13 & 0xffffffe0;
    TStack_108._padding_ = CONCAT44(uStack_13c,iStack_140);
    TStack_108.CurrentBitIndex = iStack_12c;
    TStack_108.UnvisitedBitMask = 0xffffffff;
    TStack_108._28_4_ = iStack_12c;
    TStack_108.BaseBitIndex = local_128;
    uStack_e8 = CONCAT44(uStack_11c,iStack_120);
    iVar12 = (int)uVar13 >> 5;
    local_148 = (TMap<__int64,FDS_MaterialSlotInfoArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>_>
                 *)local_150;
    local_138 = (undefined1 *)pTVar20;
    iStack_124 = iStack_12c;
    local_118 = pTVar20;
    local_110 = local_150;
    TStack_108.Array = pTVar20;
    if ((((int)uVar13 < 0) || (iVar2 < (int)uVar13)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    pTVar5 = local_150;
    uVar3 = *(uint *)&(this->RepairMaterialInfoData).field_0x28;
    if (uVar13 != uVar3) {
      puVar16 = *(undefined1 **)&(this->RepairMaterialInfoData).field_0x20;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = (undefined1 *)pTVar20;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar12 * 4);
      while (uVar13 == 0) {
        lVar11 = (longlong)iVar12;
        uVar18 = uVar18 + 0x20;
        iVar12 = iVar12 + 1;
        uVar13 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_14bd241a0;
        uVar13 = *(uint *)(puVar16 + lVar11 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar13 = (int)lVar11 + -1 + uVar18;
      if ((int)uVar3 < (int)uVar13) {
        uVar13 = uVar3;
      }
    }
LAB_14bd241a0:
    while( true ) {
      pTVar6 = local_110;
      if (*(int *)&local_110->field_0x8 - *(int *)&local_110->field_0x34 != (int)uStack_e8) {
        `TSparseArray<TSparseSetElement<TTuple<__int64,FDS_MaterialSlotInfoArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_res10);
      }
      if (((TStack_108.CurrentBitIndex == uVar13) && (TStack_108.Array == pTVar20)) &&
         (pTVar6 == pTVar5)) break;
      lVar19 = (longlong)TStack_108.CurrentBitIndex * 0x20 + *(longlong *)pTVar6;
      iVar12 = *(int *)(lVar19 + 0x10);
      lVar11 = *(longlong *)(lVar19 + 8);
      lVar14 = (longlong)iVar12 * 0x10 + lVar11;
      while( true ) {
        if (*(int *)(lVar19 + 0x10) != iVar12) {
          `TCheckedPointerIterator<FDS_MaterialSlotInfo_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res18);
        }
        if (lVar11 == lVar14) break;
        iVar15 = iVar15 + *(int *)(lVar11 + 4);
        lVar11 = lVar11 + 0x10;
      }
      TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
      pTVar20 = local_118;
    }
    if (iVar15 < 1) {
      UDS_UIMessageManager::GetInst();
      local_b0._0_8_ = 0;
      local_b0._8_8_ = 0;
      local_b0._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x9ffb,Alert_None_01,&local_b0);
      bVar7 = false;
    }
    else {
      pUVar9 = FWeakObjectPtr::Get(&local_158);
      pTVar5 = local_150;
      iVar12 = *(int *)&pUVar9[9].field_0x10;
      local_98._0_8_ = 0;
      local_98._8_8_ = 0;
      local_98._32_8_ = 0;
      local_58 = 0;
      local_50[0] = 0;
      local_98._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      local_98._48_8_ = _UNK_150631d98;
      if ((TSparseArray<TSparseSetElement<TTuple<__int64,FDS_MaterialSlotInfoArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)local_98 != local_150) {
        UE::Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(local_98 + 0x38),local_50,
                   (ForElementType<FSetElementId> *)(local_150 + 1),*(int *)&local_150[1].field_0x10
                  );
        TSparseArray<TSparseSetElement<TTuple<__int64,FDS_MaterialSlotInfoArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=((TSparseArray<TSparseSetElement<TTuple<__int64,FDS_MaterialSlotInfoArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,pTVar5);
      }
      uVar10 = FDS_DataContainer::GetData<unsigned___int64,enum_EDS_ItemRepairData>
                         ((FDS_DataContainer *)&this->_padding_,NpcEntityID);
      FDS_ItemRepairService::SendItemRepair
                (uVar10,(TMap<__int64,FDS_MaterialSlotInfoArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>_>
                         *)local_98,iVar12);
      bVar7 = true;
    }
  }
  return bVar7;
}

// TryToRestoreItem @ 14bd24330

bool __thiscall UDS_M_ItemRepair::TryToRestoreItem(UDS_M_ItemRepair *this)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  UObject *pUVar5;
  UEnum *this_00;
  FString *pFVar6;
  UDS_M_MoneyDisplay *this_01;
  long64 lVar7;
  UDS_DataBase *this_02;
  ulong64 uVar8;
  longlong lVar9;
  FName *pFVar10;
  wchar_t *_Str;
  undefined4 local_res8 [2];
  TPairInitializer<int_const_&,FName_const_&> local_res10;
  FWeakObjectPtr local_res20;
  FName local_58;
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined4 local_40;
  
  iVar2 = DS_WaitCompleteDataUtil::GetWaitCompleteDataCount(ItemRestore);
  pUVar5 = FWeakObjectPtr::Get(&(this->WaitCompleteListModel).WeakPtr);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListData>(EDS_WaitCompleteListData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListData>(EDS_WaitCompleteListData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListData>(EDS_WaitCompleteListData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_WaitCompleteListData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListData>(EDS_WaitCompleteListData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  _Str = L"";
  local_res8[0] = 2;
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListData>(EDS_WaitCompleteListData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListData>(EDS_WaitCompleteListData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar9 = 0x154cf7d58;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListData>(EDS_WaitCompleteListData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar9 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListData>(EDS_WaitCompleteListData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar4 = *(int *)(lVar9 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListData>(EDS_WaitCompleteListData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - 1 & 2) * 4);
    while (iVar4 != -1) {
      lVar9 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListData>(EDS_WaitCompleteListData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar4 * 0x14;
      if (*(int *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListData>(EDS_WaitCompleteListData)___ptr64'
                   ::__l2::EnumNameCache._0_8_ + (longlong)iVar4 * 0x14) == 2) {
        pFVar10 = (FName *)(lVar9 + 4);
        if (lVar9 == 0) {
          pFVar10 = (FName *)0x0;
        }
        if (pFVar10 != (FName *)0x0) {
          local_res10.Value = *(FName **)pFVar10;
          goto LAB_14bd2446e;
        }
        break;
      }
      iVar4 = *(int *)(lVar9 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_WaitCompleteListData>();
  if (this_00 == (UEnum *)0x0) {
    ::FName::FName((FName *)&local_res10.Value,L"");
  }
  else {
    UEnum::GetNameByValue(this_00,(long64)&local_58);
    local_50 = (undefined1  [8])local_res8;
    local_48 = &local_58;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListData>(EDS_WaitCompleteListData)___ptr64'
                   ::__l2::EnumNameCache,&local_res10,(bool *)local_50);
    local_res10.Value = (FName *)local_58;
  }
LAB_14bd2446e:
  pFVar10 = local_res10.Value;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)local_res10.Value);
  pFVar6 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&pUVar5[1].field_0x18,uVar3 + (uint)((ulonglong)pFVar10 >> 0x20),
                      (FName *)&local_res10.Value);
  if ((pFVar6->Data).ArrayNum != 0) {
    _Str = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  iVar4 = _wtoi(_Str);
  if (iVar2 < iVar4) {
    bVar1 = HasAllRestoreMaterials(this,0,true);
    if (!bVar1) {
      UDS_UIMessageManager::GetInst();
      local_50 = (undefined1  [8])0x0;
      local_48 = (FName *)0x0;
      local_40 = 0;
      UDS_UIMessageManager::OpenMsgByStringUi
                (0x9fd0,Alert_None_01,
                 (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                  *)local_50);
      return false;
    }
    this_01 = (UDS_M_MoneyDisplay *)FWeakObjectPtr::Get(&(this->CoinDisplayModel).WeakPtr);
    bVar1 = UDS_M_MoneyDisplay::HasEnoughMoney(this_01);
    if (!bVar1) {
      UDS_UIMessageManager::GetInst();
      local_50 = (undefined1  [8])0x0;
      local_48 = (FName *)0x0;
      local_40 = 0;
      UDS_UIMessageManager::OpenMsgByStringUi
                (0x9fcf,Alert_None_01,
                 (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                  *)local_50);
      return false;
    }
    lVar7 = FDS_DataContainer::GetData<__int64,enum_EDS_ItemRepairData>
                      ((FDS_DataContainer *)&this->_padding_,RegisterItemUID);
    UDS_PlayerData::GetData((ulong64)&local_res20,UDS_PlayerData::MainPlayerEntityID,false);
    bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_res20,(void *)0x0);
    if (!bVar1) {
      this_02 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_res20);
      uVar8 = UDS_DataBase::GetEntityID(this_02);
      bVar1 = DS_ItemDataUtil::IsEquippedItem(uVar8,lVar7);
      if (bVar1) {
        UDS_UIMessageManager::GetInst();
        local_50 = (undefined1  [8])0x0;
        local_48 = (FName *)0x0;
        local_40 = 0;
        UDS_UIMessageManager::OpenMsgByStringUi
                  (0x9ff5,Alert_None_01,
                   (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                    *)local_50);
        return false;
      }
      pUVar5 = FWeakObjectPtr::Get(&local_res20);
      iVar2 = *(int *)&pUVar5[9].field_0x10;
      uVar8 = FDS_DataContainer::GetData<unsigned___int64,enum_EDS_ItemRepairData>
                        ((FDS_DataContainer *)&this->_padding_,NpcEntityID);
      FDS_ItemRepairService::SendRegisterRestoreWaitComplete(uVar8,lVar7,iVar2);
      pUVar5 = FWeakObjectPtr::Get(&(this->RepairBagModel).WeakPtr);
      (**(code **)(*(longlong *)pUVar5 + 0x2d8))(pUVar5);
      return true;
    }
  }
  else {
    UDS_UIMessageManager::GetInst();
    local_50 = (undefined1  [8])0x0;
    local_48 = (FName *)0x0;
    local_40 = 0;
    UDS_UIMessageManager::OpenMsgByStringUi
              (0x9fd1,Alert_None_01,
               (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                *)local_50);
  }
  return false;
}

// UnregisterItem @ 14bd26590

void __thiscall UDS_M_ItemRepair::UnregisterItem(UDS_M_ItemRepair *this,long64 param_1)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  EDS_ItemRepairType EVar3;
  bool bVar4;
  UObject *pUVar5;
  longlong lVar6;
  FWeakObjectPtr *pFVar7;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  local_res10 = (FWeakObjectPtr)param_1;
  EVar3 = FDS_DataContainer::GetData<enum_EDS_ItemRepairType,enum_EDS_ItemRepairData>
                    ((FDS_DataContainer *)&this->_padding_,ItemRepairType);
  if (param_1 < 1) {
    return;
  }
  ClearItemSlotUI(this,(long64 *)&local_res10);
  if (EVar3 == BulkRepair) {
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    pFVar7 = (FWeakObjectPtr *)(this->BulkRepairTargetArray).AllocatorInstance.Data;
    iVar2 = (this->BulkRepairTargetArray).ArrayNum;
    pFVar1 = pFVar7 + iVar2;
    do {
      if ((this->BulkRepairTargetArray).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_res10);
      }
      if (pFVar7 == pFVar1) goto LAB_14bd2666b;
      local_res10 = *pFVar7;
      bVar4 = FWeakObjectPtr::IsValid(&local_res10);
      if (bVar4) {
        pUVar5 = FWeakObjectPtr::Get(&local_res10);
        lVar6 = (**(code **)(*(longlong *)pUVar5 + 0x388))(pUVar5);
        if (lVar6 == param_1) goto LAB_14bd26661;
      }
      pFVar7 = pFVar7 + 1;
    } while( true );
  }
LAB_14bd266f2:
  ClearRepairList(this);
  FDS_DataContainer::AddListData<enum_EDS_ModelEventItemRepair,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,UpdateViewEvent,ResetRegister);
  return;
LAB_14bd26661:
  local_res8 = local_res10;
LAB_14bd2666b:
  bVar4 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar4) {
    ReleaseReservedMaterials(this,(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)&local_res8);
    TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::Remove
              (&this->BulkRepairTargetArray,
               (TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)&local_res8);
    TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::Remove
              (&this->RegisteredRepairItemList,
               (TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)&local_res8);
    local_res10 = (FWeakObjectPtr)param_1;
    if (*(int *)&(this->RepairMaterialInfoData).field_0x8 !=
        *(int *)&(this->RepairMaterialInfoData).field_0x34) {
      TSet<TTuple<__int64,FDS_MaterialSlotInfoArray>,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>,FDefaultSetAllocator>
      ::RemoveImpl<__int64>
                ((TSet<TTuple<__int64,FDS_MaterialSlotInfoArray>,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>,FDefaultSetAllocator>
                  *)&this->RepairMaterialInfoData,
                 (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1,(long64 *)&local_res10);
    }
  }
  if ((this->BulkRepairTargetArray).ArrayNum != 0) {
    UpdateBulkRepairMaterialItems(this);
    return;
  }
  ClearRepairList(this);
  goto LAB_14bd266f2;
}

// UnregisterItemAll @ 14bd26730

void __thiscall UDS_M_ItemRepair::UnregisterItemAll(UDS_M_ItemRepair *this)

{
  undefined1 *puVar1;
  TMap<__int64,FDS_MaterialSlotInfoArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>_>
  *this_00;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_01;
  FWeakObjectPtr *pFVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  FName FVar7;
  FString *pFVar8;
  UObject *pUVar9;
  wchar_t *_Str;
  FWeakObjectPtr *pFVar10;
  FWeakObjectPtr local_res8;
  long64 local_res10;
  
  FDS_DataContainer::GetData<enum_EDS_ItemRepairType,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,ItemRepairType);
  FVar7 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_ItemRepairData)&local_res8);
  uVar4 = *(undefined8 *)FVar7;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  pFVar8 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar6 + (int)((ulonglong)uVar4 >> 0x20),(FName *)FVar7);
  if ((pFVar8->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  local_res8 = (FWeakObjectPtr)_wtoi64(_Str);
  ClearItemSlotUI(this,(long64 *)&local_res8);
  pFVar10 = (FWeakObjectPtr *)(this->BulkRepairTargetArray).AllocatorInstance.Data;
  iVar3 = (this->BulkRepairTargetArray).ArrayNum;
  pFVar2 = pFVar10 + iVar3;
  while( true ) {
    if ((this->BulkRepairTargetArray).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar10 == pFVar2) break;
    local_res8 = *pFVar10;
    bVar5 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar5) {
      pUVar9 = FWeakObjectPtr::Get(&local_res8);
      local_res10 = (**(code **)(*(longlong *)pUVar9 + 0x388))(pUVar9);
      ClearItemSlotUI(this,&local_res10);
    }
    pFVar10 = pFVar10 + 1;
  }
  this_00 = &this->RepairMaterialInfoData;
  bVar5 = 1 < *(int *)&(this->RepairMaterialInfoData).field_0x48;
  if (!bVar5) {
    TSet<TTuple<__int64,FDS_MaterialSlotInfoArray>,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<__int64,FDS_MaterialSlotInfoArray>,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,FDS_MaterialSlotInfoArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<__int64,FDS_MaterialSlotInfoArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->RepairMaterialInfoData).field_0x8);
  puVar1 = &(this->RepairMaterialInfoData).field_0xc;
  *(undefined4 *)&(this->RepairMaterialInfoData).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->RepairMaterialInfoData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RepairMaterialInfoData).field_0x34 = 0;
  iVar3 = *(int *)&(this->RepairMaterialInfoData).field_0x2c;
  *(undefined4 *)&(this->RepairMaterialInfoData).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->RepairMaterialInfoData).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->RepairMaterialInfoData).field_0x10,0)
    ;
  }
  if (bVar5) {
    *(undefined4 *)&(this->RepairMaterialInfoData).field_0x48 = 1;
    TSet<TTuple<__int64,FDS_MaterialSlotInfoArray>,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<__int64,FDS_MaterialSlotInfoArray>,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>,FDefaultSetAllocator>
              *)this_00);
  }
  this_01 = &this->AvailableMaterialCounts;
  bVar5 = 1 < *(int *)&(this->AvailableMaterialCounts).field_0x48;
  if (!bVar5) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)this_01);
  }
  puVar1 = &(this->AvailableMaterialCounts).field_0xc;
  *(undefined4 *)&(this->AvailableMaterialCounts).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AvailableMaterialCounts).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AvailableMaterialCounts).field_0x34 = 0;
  iVar3 = *(int *)&(this->AvailableMaterialCounts).field_0x2c;
  *(undefined4 *)&(this->AvailableMaterialCounts).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->AvailableMaterialCounts).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AvailableMaterialCounts).field_0x10,0
              );
  }
  if (bVar5) {
    *(undefined4 *)&(this->AvailableMaterialCounts).field_0x48 = 1;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Rehash
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               this_01);
  }
  FDS_DataContainer::SetData<int,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,RepairMoneyValue,0);
  ClearRepairList(this);
  return;
}

// UpdateBulkRepairMaterialItems @ 14bd26e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UDS_M_ItemRepair::UpdateBulkRepairMaterialItems(UDS_M_ItemRepair *this)

{
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_00;
  FWeakObjectPtr *pFVar1;
  ulonglong uVar2;
  code *pcVar3;
  TMap<__int64,FDS_MaterialSlotInfoArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>_>
  *pTVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UObject *pUVar8;
  int *piVar9;
  uint *puVar10;
  longlong lVar11;
  uint *puVar12;
  undefined1 *puVar13;
  int iVar14;
  FWeakObjectPtr *this_01;
  uint uVar15;
  longlong *plVar16;
  uint uVar17;
  uint *puVar18;
  undefined1 *puVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  uint *puVar21;
  long64 lVar22;
  undefined1 auStackY_138 [32];
  undefined1 local_108;
  undefined1 local_107 [3];
  uint local_104;
  TMap<__int64,FDS_MaterialSlotInfoArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>_>
  *local_100;
  int iStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  UDS_M_ItemRepair *local_c8;
  TMap<__int64,FDS_MaterialSlotInfoArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  undefined1 local_88 [72];
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  this_00 = &this->TotalBulkMaterialsMap;
  bVar5 = 1 < *(int *)&(this->TotalBulkMaterialsMap).field_0x48;
  local_c8 = this;
  if (!bVar5) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)this_00);
  }
  puVar13 = &(this->TotalBulkMaterialsMap).field_0xc;
  *(undefined4 *)&(this->TotalBulkMaterialsMap).field_0x8 = 0;
  if (*(int *)puVar13 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this_00,0,(int *)puVar13);
  }
  *(undefined4 *)&(this->TotalBulkMaterialsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TotalBulkMaterialsMap).field_0x34 = 0;
  iVar7 = *(int *)&(this->TotalBulkMaterialsMap).field_0x2c;
  *(undefined4 *)&(this->TotalBulkMaterialsMap).field_0x28 = 0;
  if ((iVar7 < 0) || (0x80 < iVar7)) {
    *(undefined4 *)&(this->TotalBulkMaterialsMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->TotalBulkMaterialsMap).field_0x10,0);
  }
  uVar6 = 1;
  if (bVar5) {
    *(undefined4 *)&(this->TotalBulkMaterialsMap).field_0x48 = 1;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Rehash
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               this_00);
  }
  iStack_f8 = 0;
  iVar7 = *(int *)&(this->RepairMaterialInfoData).field_0x28;
  local_100 = &this->RepairMaterialInfoData;
  local_e0 = 0;
  iStack_e4 = 0;
  if (iVar7 != 0) {
    puVar18 = *(uint **)&(this->RepairMaterialInfoData).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)&(this->RepairMaterialInfoData).field_0x10;
    }
    uVar17 = *puVar18;
    iStack_f8 = 0;
    local_e0 = 0;
    while (uVar17 == 0) {
      lVar11 = (longlong)iStack_f8;
      local_e0 = local_e0 + 0x20;
      iStack_f8 = iStack_f8 + 1;
      iStack_e4 = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8) goto LAB_14bd26f85;
      uVar17 = puVar18[lVar11 + 1];
    }
    uVar6 = -uVar17 & uVar17;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_d0 = (int)lVar11;
    iStack_e4 = local_e0 + -1 + local_d0;
    if (iVar7 < iStack_e4) {
      iStack_e4 = iVar7;
    }
  }
LAB_14bd26f85:
  local_f0 = &(this->RepairMaterialInfoData).field_0x10;
  uVar17 = *(uint *)&(this->RepairMaterialInfoData).field_0x28;
  iStack_d8 = *(int *)&(this->RepairMaterialInfoData).field_0x8 -
              *(int *)&(this->RepairMaterialInfoData).field_0x34;
  uVar15 = uVar17 & 0xffffffe0;
  TStack_b8._padding_ = CONCAT44(uVar6,iStack_f8);
  uStack_e8 = 0xffffffff;
  TStack_b8.CurrentBitIndex = iStack_e4;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar17 >> 5;
  TStack_b8._28_4_ = iStack_e4;
  TStack_b8.BaseBitIndex = local_e0;
  uStack_98 = CONCAT44(uStack_d4,iStack_d8);
  local_104 = uVar17;
  uStack_f4 = uVar6;
  iStack_dc = iStack_e4;
  local_c0 = local_100;
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_f0;
  if ((((int)uVar17 < 0) || (iVar7 < (int)uVar17)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->RepairMaterialInfoData).field_0x10;
  uVar6 = *(uint *)&(this->RepairMaterialInfoData).field_0x28;
  lVar22 = 0;
  if (uVar17 != uVar6) {
    puVar13 = *(undefined1 **)&(this->RepairMaterialInfoData).field_0x20;
    puVar19 = (undefined1 *)pTVar20;
    if (puVar13 != (undefined1 *)0x0) {
      puVar19 = puVar13;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar14 * 4);
    while (uVar17 == 0) {
      lVar11 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      uVar17 = uVar6;
      local_104 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14bd270b0;
      uVar17 = *(uint *)(puVar19 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar17 = (int)lVar11 + -1 + uVar15;
    lVar22 = 0;
    local_104 = uVar17;
    if ((int)uVar6 < (int)uVar17) {
      uVar17 = uVar6;
      local_104 = uVar6;
    }
  }
LAB_14bd270b0:
  pTVar4 = local_c0;
  if (*(int *)&local_c0->field_0x8 - *(int *)&local_c0->field_0x34 != (int)uStack_98) {
    `TSparseArray<TSparseSetElement<TTuple<__int64,FDS_MaterialSlotInfoArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_108);
    pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->RepairMaterialInfoData).field_0x10;
  }
  if (((TStack_b8.CurrentBitIndex == uVar17) && (TStack_b8.Array == pTVar20)) &&
     (pTVar4 == &this->RepairMaterialInfoData)) {
    FDS_DataContainer::SetData<__int64,enum_EDS_ItemRepairData>
              ((FDS_DataContainer *)&this->_padding_,RepairMoneyValue,lVar22);
    UpdateHasEnoughMaterials(this);
    *(undefined1 *)&this->_padding_ = 1;
    FDS_DataContainer::AddListData<enum_EDS_ModelEventItemRepair,enum_EDS_ItemRepairData>
              ((FDS_DataContainer *)&this->_padding_,UpdateViewEvent,UpdatedRepairModel);
    return;
  }
  plVar16 = (longlong *)((longlong)TStack_b8.CurrentBitIndex * 0x20 + *(longlong *)pTVar4);
  this_01 = (FWeakObjectPtr *)(this->BulkRepairTargetArray).AllocatorInstance.Data;
  pFVar1 = this_01 + (this->BulkRepairTargetArray).ArrayNum;
  for (; this_01 != pFVar1; this_01 = this_01 + 1) {
    bVar5 = FWeakObjectPtr::IsValid(this_01);
    if (bVar5) {
      pUVar8 = FWeakObjectPtr::Get(this_01);
      lVar11 = (**(code **)(*(longlong *)pUVar8 + 0x388))(pUVar8);
      if (lVar11 == *plVar16) {
        if ((this_01 != (FWeakObjectPtr *)0x0) && (bVar5 = FWeakObjectPtr::IsValid(this_01), bVar5))
        {
          pUVar8 = FWeakObjectPtr::Get(this_01);
          iVar7 = (**(code **)(*(longlong *)pUVar8 + 0x380))(pUVar8);
          GetRequiredMaterialsForRepairItem
                    (this,(TMap<int,FDS_RequiredMaterialInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>_>
                           *)local_88,iVar7);
          lVar11 = plVar16[2];
          puVar18 = (uint *)plVar16[1];
          puVar21 = puVar18 + (longlong)(int)lVar11 * 4;
          goto LAB_14bd271a0;
        }
        break;
      }
    }
  }
  goto LAB_14bd27272;
LAB_14bd271a0:
  if ((int)plVar16[2] != (int)lVar11) {
    `TCheckedPointerIterator<FDS_MaterialSlotInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_107);
  }
  if (puVar18 != puVar21) {
    uVar6 = puVar18[1];
    piVar9 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
             FindOrAddImpl<int_const_&>
                       ((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                         *)this_00,*puVar18,(int *)puVar18);
    *piVar9 = *piVar9 + uVar6;
    if (local_88._8_4_ == local_88._52_4_) {
LAB_14bd27244:
      puVar18 = puVar18 + 4;
    }
    else {
      puVar13 = local_88 + 0x38;
      if ((undefined1 *)local_88._64_8_ != (undefined1 *)0x0) {
        puVar13 = (undefined1 *)local_88._64_8_;
      }
      uVar6 = *(uint *)(puVar13 + (ulonglong)(local_40 - 1U & *puVar18) * 4);
      if (uVar6 == 0xffffffff) goto LAB_14bd27244;
      do {
        puVar10 = (uint *)((longlong)(int)uVar6 * 0x30 + local_88._0_8_);
        if (*puVar10 == *puVar18) {
          puVar12 = puVar10 + 2;
          if (puVar10 == (uint *)0x0) {
            puVar12 = (uint *)0x0;
          }
          if (puVar12 != (uint *)0x0) {
            lVar22 = lVar22 + (longlong)(int)puVar12[4] * (longlong)(int)puVar18[1];
          }
          goto LAB_14bd27244;
        }
        uVar6 = puVar10[10];
      } while (uVar6 != 0xffffffff);
      puVar18 = puVar18 + 4;
    }
    goto LAB_14bd271a0;
  }
  local_40 = 0;
  if ((undefined1 *)local_88._64_8_ != (undefined1 *)0x0) {
    FMemory::Free((void *)local_88._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_RequiredMaterialInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDS_RequiredMaterialInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDS_RequiredMaterialInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  this = local_c8;
  uVar17 = local_104;
LAB_14bd27272:
  TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->RepairMaterialInfoData).field_0x10;
  goto LAB_14bd270b0;
}

// UpdateHasEnoughMaterials @ 14bd27640

void __thiscall UDS_M_ItemRepair::UpdateHasEnoughMaterials(UDS_M_ItemRepair *this)

{
  longlong *this_00;
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  TMap<int,FDS_MaterialSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>_>
  *pTVar5;
  EDS_ItemRepairType EVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FName FVar10;
  FString *pFVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  float fVar19;
  undefined1 local_res8 [8];
  int local_res10;
  longlong local_res18;
  longlong local_res20;
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  TMap<int,FDS_MaterialSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>_>
  *local_a8;
  uint uStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TMap<int,FDS_MaterialSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  this_00 = &this->_padding_;
  EVar6 = FDS_DataContainer::GetData<enum_EDS_ItemRepairType,enum_EDS_ItemRepairData>
                    ((FDS_DataContainer *)this_00,ItemRepairType);
  FVar10 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                     ((FDS_DataContainer *)this_00,(EDS_ItemRepairData)local_b8);
  uVar3 = *(undefined8 *)FVar10;
  uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  pFVar11 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)this_00,uVar8 + (int)((ulonglong)uVar3 >> 0x20),(FName *)FVar10);
  if ((pFVar11->Data).ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
  }
  lVar12 = _wtoi64(pwVar13);
  local_res18 = lVar12;
  local_res20 = lVar12;
  FVar10 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                     ((FDS_DataContainer *)this_00,(EDS_ItemRepairData)local_b0);
  uVar3 = *(undefined8 *)FVar10;
  uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  pFVar11 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)this_00,uVar8 + (int)((ulonglong)uVar3 >> 0x20),(FName *)FVar10);
  if ((pFVar11->Data).ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
  }
  iVar9 = _wtoi(pwVar13);
  if (EVar6 != None) {
    if (EVar6 == BulkRepair) {
      if (((this->RegisteredRepairItemList).ArrayNum != 0) &&
         (*(int *)&(this->RepairMaterialInfoData).field_0x8 !=
          *(int *)&(this->RepairMaterialInfoData).field_0x34)) {
        bVar7 = true;
        goto LAB_14bd27998;
      }
    }
    else if (EVar6 == TargetRepair) {
      uVar14 = 0;
      local_a8 = &this->TargetRepairSelectedMaterialsMap;
      uVar8 = *(uint *)&(this->TargetRepairSelectedMaterialsMap).field_0x28;
      local_98 = &(this->TargetRepairSelectedMaterialsMap).field_0x10;
      uStack_9c = 1;
      uStack_a0 = uVar14;
      uStack_8c = uVar14;
      local_88 = uVar14;
      if (uVar8 != 0) {
        puVar17 = *(uint **)&(this->TargetRepairSelectedMaterialsMap).field_0x20;
        if (puVar17 == (uint *)0x0) {
          puVar17 = (uint *)local_98;
        }
        uVar15 = *puVar17;
        while (uVar15 == 0) {
          lVar12 = (longlong)(int)uStack_a0;
          local_88 = local_88 + 0x20;
          uStack_a0 = uStack_a0 + 1;
          uStack_8c = uVar8;
          if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_a0)
          goto LAB_14bd277e5;
          uVar15 = puVar17[lVar12 + 1];
        }
        uStack_9c = -uVar15 & uVar15;
        uVar2 = (ulonglong)uStack_9c * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_res10 = (int)lVar12;
        uStack_8c = (local_88 - 1) + local_res10;
        if ((int)uVar8 < (int)uStack_8c) {
          uStack_8c = uVar8;
        }
      }
LAB_14bd277e5:
      uVar15 = *(uint *)&(this->TargetRepairSelectedMaterialsMap).field_0x28;
      puVar1 = &(this->TargetRepairSelectedMaterialsMap).field_0x10;
      uVar18 = uVar15 & 0xffffffe0;
      iStack_80 = *(int *)&(this->TargetRepairSelectedMaterialsMap).field_0x8 -
                  *(int *)&(this->TargetRepairSelectedMaterialsMap).field_0x34;
      uStack_90 = 0xffffffff;
      TStack_70._padding_ = CONCAT44(uStack_9c,uStack_a0);
      iVar9 = (int)uVar15 >> 5;
      TStack_70._28_4_ = uStack_8c;
      TStack_70.BaseBitIndex = local_88;
      uStack_50 = CONCAT44(uStack_7c,iStack_80);
      TStack_70.UnvisitedBitMask = 0xffffffff;
      uStack_84 = uStack_8c;
      local_78 = local_a8;
      TStack_70.CurrentBitIndex = uStack_8c;
      TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_98;
      if (((int)uVar15 < 0) || ((int)uVar8 < (int)uVar15)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar8 = *(uint *)&(this->TargetRepairSelectedMaterialsMap).field_0x28;
      if (uVar15 != uVar8) {
        puVar16 = *(undefined1 **)&(this->TargetRepairSelectedMaterialsMap).field_0x20;
        if (puVar16 == (undefined1 *)0x0) {
          puVar16 = puVar1;
        }
        uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar9 * 4);
        while (uVar15 == 0) {
          lVar12 = (longlong)iVar9;
          uVar18 = uVar18 + 0x20;
          iVar9 = iVar9 + 1;
          uVar15 = uVar8;
          if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
          goto LAB_14bd278eb;
          uVar15 = *(uint *)(puVar16 + lVar12 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        uVar15 = (int)lVar12 + -1 + uVar18;
        if ((int)uVar8 < (int)uVar15) {
          uVar15 = uVar8;
        }
      }
LAB_14bd278eb:
      while( true ) {
        pTVar5 = local_78;
        if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
          `TSparseArray<TSparseSetElement<TTuple<int,FDS_MaterialSlotInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (((TStack_70.CurrentBitIndex == uVar15) &&
            (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar5 == &this->TargetRepairSelectedMaterialsMap)) break;
        uVar14 = uVar14 + *(int *)((longlong)TStack_70.CurrentBitIndex * 0x1c + 8 +
                                  *(longlong *)pTVar5);
        TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
      }
      fVar19 = GetTargetRepairDurability
                         (this,&local_res18,&this->TargetRepairSelectedMaterialsMap,
                          &this->TargetRepairRequiredMaterialsMap);
      if (((local_res20 != 0) && (0 < (int)uVar14)) && (0.0 < fVar19)) {
        bVar7 = true;
        goto LAB_14bd27998;
      }
    }
    else if (EVar6 == Restore) {
      bVar7 = HasAllRestoreMaterials(this,iVar9,false);
      if ((lVar12 != 0) && (bVar7)) {
        bVar7 = true;
        goto LAB_14bd27998;
      }
    }
  }
  bVar7 = false;
LAB_14bd27998:
  FDS_DataContainer::SetData<bool,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,HasEnoughRepairMaterials,bVar7);
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// UpdateRepairModel @ 14bd28ce0

void __thiscall UDS_M_ItemRepair::UpdateRepairModel(UDS_M_ItemRepair *this)

{
  undefined8 uVar1;
  code *pcVar2;
  EDS_ItemRepairType EVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  UDS_M_MoneyDisplay *pUVar7;
  FName FVar8;
  FString *pFVar9;
  longlong lVar10;
  TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr> TVar11;
  UDS_MoneyData *this_00;
  UObject *pUVar12;
  wchar_t *_Str;
  int iVar13;
  wchar_t *_Str_00;
  float fVar14;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  undefined8 local_res20;
  longlong local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  
  EVar3 = FDS_DataContainer::GetData<enum_EDS_ItemRepairType,enum_EDS_ItemRepairData>
                    ((FDS_DataContainer *)&this->_padding_,ItemRepairType);
  if ((EVar3 != BulkRepair) && (EVar3 != TargetRepair)) {
    if (EVar3 == Restore) {
      FDS_DataContainer::SetData<int,enum_EDS_ItemRepairData>
                ((FDS_DataContainer *)&this->_padding_,RepairedDurabilityPercent,100);
    }
    goto LAB_14bd28ff9;
  }
  pUVar7 = (UDS_M_MoneyDisplay *)FWeakObjectPtr::Get(&(this->CoinDisplayModel).WeakPtr);
  FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_ItemRepairData)local_50);
  uVar1 = *(undefined8 *)FVar8;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar6 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar8);
  _Str_00 = L"";
  if ((pFVar9->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  lVar10 = _wtoi64(_Str);
  pUVar7->MoneyValue = lVar10;
  pUVar7->MoneyType = Copper;
  if (pUVar7->MoneyDisplayType == DisplayMoneyData) {
    UDS_MoneyData::GetData((EDS_MoneyType)&local_res10);
    bVar4 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar4) {
      pUVar12 = FWeakObjectPtr::Get(&local_res10);
      pUVar7->MoneyValue = *(long64 *)&pUVar12[2].field_0x10;
      goto LAB_14bd28e1b;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7248021869100531767>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_MoneyDisplay.cpp"
                       ,0x37,"moneyData.IsValid()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
LAB_14bd28e1b:
    bVar4 = FWeakObjectPtr::IsValid(&(pUVar7->MoneyData).WeakPtr);
    if (bVar4) {
      pUVar12 = FWeakObjectPtr::Get(&(pUVar7->MoneyData).WeakPtr);
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar12 + 1),
                 (UObject *)pUVar7);
    }
    TVar11 = UDS_MoneyData::GetData((EDS_MoneyType)local_48);
                    /* WARNING: Load size is inaccurate */
    (pUVar7->MoneyData).WeakPtr = *TVar11.WeakPtr;
    UDS_M_MoneyDisplay::BindMoneyData(pUVar7);
    if (pUVar7->MoneyType == None) {
      bVar4 = true;
    }
    else {
      bVar5 = FWeakObjectPtr::IsValid(&(pUVar7->MoneyData).WeakPtr);
      bVar4 = false;
      if (bVar5) {
        this_00 = (UDS_MoneyData *)FWeakObjectPtr::Get(&(pUVar7->MoneyData).WeakPtr);
        bVar4 = UDS_MoneyData::CheckEnoughMoney(this_00,pUVar7->MoneyValue);
      }
    }
    pUVar7->IsMoneyEnough = bVar4;
  }
  pUVar12 = FWeakObjectPtr::Get(&(this->CoinDisplayModel).WeakPtr);
  iVar13 = 0;
  local_res20 = 0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  pcVar2 = *(code **)(*(longlong *)pUVar12 + 0x2e0);
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
  (*pcVar2)(pUVar12,local_res8,1);
  pUVar7 = (UDS_M_MoneyDisplay *)FWeakObjectPtr::Get(&(this->CoinDisplayModel).WeakPtr);
  bVar4 = UDS_M_MoneyDisplay::HasEnoughMoney(pUVar7);
  FDS_DataContainer::SetData<bool,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,HasEnoughRepairMoney,bVar4);
  FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_ItemRepairData)local_40);
  uVar1 = *(undefined8 *)FVar8;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar6 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar8);
  if ((pFVar9->Data).ArrayNum != 0) {
    _Str_00 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  local_58 = _wtoi64(_Str_00);
  DS_ItemDataUtil::GetItemDataByUID((long64)&local_res18);
  bVar4 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar4) {
    pUVar12 = FWeakObjectPtr::Get(&local_res18);
    iVar13 = *(int *)&pUVar12[0x15].field_0x18;
    fVar14 = GetTargetRepairDurability
                       (this,&local_58,&this->TargetRepairSelectedMaterialsMap,
                        &this->TargetRepairRequiredMaterialsMap);
    iVar13 = (int)ROUND((fVar14 * __real_42c80000 + fVar14 * __real_42c80000) / (float)iVar13 -
                        __real_3f000000) >> 1;
  }
  FDS_DataContainer::SetData<int,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&this->_padding_,RepairedDurabilityPercent,iVar13);
LAB_14bd28ff9:
  UpdateHasEnoughMaterials(this);
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// UpdateRestoreMaterialItems @ 14bd29020

void __thiscall UDS_M_ItemRepair::UpdateRestoreMaterialItems(UDS_M_ItemRepair *this)

{
  longlong *this_00;
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  FName FVar11;
  FString *pFVar12;
  longlong lVar13;
  FDS_ItemRestoreTableRow *this_01;
  wchar_t *_Str;
  longlong lVar14;
  longlong lVar15;
  TArray<FDS_MaterialSlotInfo,TSizedDefaultAllocator<32>_> *pTVar16;
  undefined1 local_res8 [8];
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  this_00 = &this->_padding_;
  FVar11 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                     ((FDS_DataContainer *)this_00,(EDS_ItemRepairData)local_res8);
  uVar4 = *(undefined8 *)FVar11;
  uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  pFVar12 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)this_00,uVar8 + (int)((ulonglong)uVar4 >> 0x20),(FName *)FVar11);
  if ((pFVar12->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
  }
  lVar13 = _wtoi64(_Str);
  this_01 = FDS_ItemRestoreTableRow::GetRef(lVar13,true);
  bVar7 = FDS_ItemRestoreTableRow::IsValid(this_01);
  if (bVar7) {
    pTVar16 = &this->RestoreIngredientInfoArray;
    piVar1 = &(this->RestoreIngredientInfoArray).ArrayMax;
    (this->RestoreIngredientInfoArray).ArrayNum = 0;
    if ((this->RestoreIngredientInfoArray).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&pTVar16->AllocatorInstance,0,piVar1);
    }
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = (this_01->ID_IngredientItem).ArrayNum;
    lVar13 = (longlong)local_30;
    pFVar5 = (this_01->ID_IngredientItem).AllocatorInstance.Data;
    if (local_30 == 0) {
      local_2c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_30,0,&local_38,local_30,&local_2c);
      memcpy(local_38.Data,pFVar5,lVar13 << 2);
    }
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = (this_01->IngredientItemValue).ArrayNum;
    lVar13 = (longlong)local_40;
    pFVar5 = (this_01->IngredientItemValue).AllocatorInstance.Data;
    if (local_40 == 0) {
      local_3c = 0;
      iVar10 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_40,0,&local_48,local_40,&local_3c);
      memcpy(local_48.Data,pFVar5,lVar13 << 2);
      iVar10 = local_40;
    }
    lVar13 = (longlong)local_30;
    uVar8 = 0;
    if (0 < lVar13) {
      lVar15 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar8 < iVar10) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar2 = *(undefined4 *)(local_48.Data + lVar15 * 4);
        uVar9 = 0;
        if ((int)uVar8 < local_30) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar3 = *(undefined4 *)(local_38.Data + lVar15 * 4);
        iVar10 = (this->RestoreIngredientInfoArray).ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,&pTVar16->AllocatorInstance,piVar1);
        }
        (this->RestoreIngredientInfoArray).ArrayNum = iVar10 + 1;
        uVar8 = uVar8 + 1;
        lVar14 = (longlong)iVar10;
        lVar15 = lVar15 + 1;
        pFVar5 = (pTVar16->AllocatorInstance).Data;
        *(undefined4 *)(pFVar5 + lVar14 * 0x10) = uVar3;
        *(undefined4 *)(pFVar5 + lVar14 * 0x10 + 4) = uVar2;
        *(undefined8 *)(pFVar5 + lVar14 * 0x10 + 8) = 0;
        iVar10 = local_40;
      } while (lVar15 < lVar13);
    }
    FDS_DataContainer::SetData<__int64,enum_EDS_ItemRepairData>
              ((FDS_DataContainer *)this_00,RepairMoneyValue,0);
    FDS_DataContainer::AddListData<enum_EDS_ModelEventItemRepair,enum_EDS_ItemRepairData>
              ((FDS_DataContainer *)this_00,UpdateViewEvent,UpdatedRepairModel);
    FDS_DataContainer::SetData<enum_EDS_ItemRepairType,enum_EDS_ItemRepairData>
              ((FDS_DataContainer *)this_00,ItemRepairType,Restore);
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
  }
  return;
}

// UpdateTargetRepairMaterialItems @ 14bd29a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_M_ItemRepair::UpdateTargetRepairMaterialItems(UDS_M_ItemRepair *this,bool param_1)

{
  ForAnyElementType *pFVar1;
  TMap<__int64,FDS_MaterialSlotInfoArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>_>
  *this_00;
  TMap<int,FDS_MaterialSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>_>
  *pTVar2;
  int iVar3;
  undefined8 uVar4;
  void *pvVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  UDS_M_ItemRepair *this_01;
  bool bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  FName FVar15;
  FString *pFVar16;
  longlong lVar17;
  FDS_RequiredMaterialInfo *pFVar18;
  UObject *pUVar19;
  FDS_MaterialSlotInfo *pFVar20;
  TTuple<int,int> *pTVar21;
  wchar_t *pwVar22;
  longlong *plVar23;
  ulonglong uVar24;
  longlong lVar25;
  uint uVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  int iVar29;
  undefined1 *puVar30;
  uint *puVar31;
  void *_Dst;
  FWeakObjectPtr FVar32;
  longlong lVar33;
  float fVar34;
  float fVar35;
  double dVar36;
  undefined1 auStackY_1e8 [32];
  char local_1b8;
  byte local_1b7;
  uint local_1b4;
  int local_1b0;
  FWeakObjectPtr local_1a8;
  int local_1a0;
  longlong local_198;
  UDS_M_ItemRepair *local_190;
  FWeakObjectPtr local_188;
  TMap<int,FDS_MaterialSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>_>
  *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  uint uStack_164;
  int local_160;
  uint uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  longlong local_150;
  TMap<int,FDS_MaterialSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>_>
  *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined8 uStack_120;
  FSparseArrayAllocationInfo local_118;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_e8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_1b7 = param_1;
  local_190 = this;
  FVar15 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                     ((FDS_DataContainer *)&this->_padding_,(EDS_ItemRepairData)local_108);
  uVar4 = *(undefined8 *)FVar15;
  uVar12 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  pFVar16 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)&this->_padding_,uVar12 + (int)((ulonglong)uVar4 >> 0x20),(FName *)FVar15)
  ;
  if ((pFVar16->Data).ArrayNum == 0) {
    pwVar22 = L"";
  }
  else {
    pwVar22 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
  }
  lVar17 = _wtoi64(pwVar22);
  if ((0 < lVar17) &&
     (*(int *)&(this->TargetRepairSelectedMaterialsMap).field_0x8 !=
      *(int *)&(this->TargetRepairSelectedMaterialsMap).field_0x34)) {
    GetPlayerMaterialCounts
              (this,(TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                    &local_e8);
    this_00 = &this->RepairMaterialInfoData;
    bVar11 = 1 < *(int *)&(this->RepairMaterialInfoData).field_0x48;
    if (!bVar11) {
      TSet<TTuple<__int64,FDS_MaterialSlotInfoArray>,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<__int64,FDS_MaterialSlotInfoArray>,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    puVar30 = &(this->RepairMaterialInfoData).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<__int64,FDS_MaterialSlotInfoArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<__int64,FDS_MaterialSlotInfoArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->RepairMaterialInfoData).field_0x8);
    puVar28 = &(this->RepairMaterialInfoData).field_0xc;
    *(undefined4 *)puVar30 = 0;
    if (*(int *)puVar28 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar28);
    }
    *(undefined4 *)&(this->RepairMaterialInfoData).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->RepairMaterialInfoData).field_0x34 = 0;
    iVar29 = *(int *)&(this->RepairMaterialInfoData).field_0x2c;
    *(undefined4 *)&(this->RepairMaterialInfoData).field_0x28 = 0;
    if ((iVar29 < 0) || (0x80 < iVar29)) {
      *(undefined4 *)&(this->RepairMaterialInfoData).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->RepairMaterialInfoData).field_0x10,
                 0);
    }
    FVar32.ObjectIndex = 1;
    FVar32.ObjectSerialNumber = 0;
    uVar14 = 1;
    uVar12 = 1;
    local_1a8.ObjectIndex = 1;
    local_1a8.ObjectSerialNumber = 0;
    if (bVar11) {
      *(undefined4 *)&(this->RepairMaterialInfoData).field_0x48 = 1;
      TSet<TTuple<__int64,FDS_MaterialSlotInfoArray>,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<__int64,FDS_MaterialSlotInfoArray>,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>,FDefaultSetAllocator>
                *)this_00);
    }
    iVar29 = *(int *)&(this->RepairMaterialInfoData).field_0x34;
    local_1b4 = (int)((ulonglong)lVar17 >> 0x20) * 0x17 + (int)lVar17;
    if (*(int *)puVar30 != iVar29) {
      puVar27 = *(undefined1 **)&(this->RepairMaterialInfoData).field_0x40;
      if (puVar27 == (undefined1 *)0x0) {
        puVar27 = &(this->RepairMaterialInfoData).field_0x38;
      }
      iVar13 = *(int *)(puVar27 +
                       (ulonglong)
                       (*(int *)&(this->RepairMaterialInfoData).field_0x48 - 1U & local_1b4) * 4);
      if (iVar13 != -1) {
        do {
          plVar23 = (longlong *)((longlong)iVar13 * 0x20 + *(longlong *)&this_00->field_0x0);
          if (*plVar23 == lVar17) {
            if (plVar23 != (longlong *)0x0) goto LAB_14bd29e2c;
            break;
          }
          iVar13 = (int)plVar23[3];
        } while (iVar13 != -1);
      }
    }
    if (iVar29 == 0) {
      iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x20,8,1,(ForAnyElementType *)this_00,(int *)puVar30,(int *)puVar28);
      TBitArray<FDefaultBitArrayAllocator>::Add
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->RepairMaterialInfoData).field_0x10,
                 false);
    }
    else {
      iVar13 = *(int *)&(this->RepairMaterialInfoData).field_0x30;
      iVar3 = *(int *)((longlong)iVar13 * 0x20 + 4 + *(longlong *)&this_00->field_0x0);
      *(int *)&(this->RepairMaterialInfoData).field_0x30 = iVar3;
      *(int *)&(this->RepairMaterialInfoData).field_0x34 = iVar29 + -1;
      if (iVar29 + -1 != 0) {
        *(undefined4 *)((longlong)iVar3 * 0x20 + *(longlong *)&this_00->field_0x0) = 0xffffffff;
      }
    }
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,&local_118,iVar13);
    if (local_118.Pointer == (longlong *)0x0) {
      plVar23 = (longlong *)0x0;
    }
    else {
      *(longlong *)local_118.Pointer = lVar17;
      *(longlong *)((longlong)local_118.Pointer + 8) = 0;
      *(longlong *)((longlong)local_118.Pointer + 0x10) = 0;
      *(undefined4 *)((longlong)local_118.Pointer + 0x18) = 0xffffffff;
      plVar23 = local_118.Pointer;
    }
    iVar29 = *(int *)&(this->RepairMaterialInfoData).field_0x34;
    uVar12 = uVar14;
    if ((*(int *)puVar30 - iVar29 != 1) && (*(int *)puVar30 != iVar29)) {
      puVar28 = *(undefined1 **)&(this->RepairMaterialInfoData).field_0x40;
      if (puVar28 == (undefined1 *)0x0) {
        puVar28 = &(this->RepairMaterialInfoData).field_0x38;
      }
      iVar29 = *(int *)(puVar28 +
                       (ulonglong)
                       (*(int *)&(this->RepairMaterialInfoData).field_0x48 - 1U & local_1b4) * 4);
      if (iVar29 != -1) {
        lVar17 = *(longlong *)&this_00->field_0x0;
        do {
          if (*(longlong *)((longlong)iVar29 * 0x20 + lVar17) == *plVar23) {
            local_1b8 = iVar29 != -1;
            if ((bool)local_1b8) {
              _Dst = (void *)((longlong)iVar29 * 0x20 + lVar17);
              pvVar5 = *(void **)((longlong)_Dst + 8);
              if (pvVar5 != (void *)0x0) {
                FMemory::Free(pvVar5);
              }
              memmove(_Dst,plVar23,0x18);
              FVar32 = local_1a8;
              TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this_00,local_118.Index,local_1a8.ObjectIndex);
              local_118.Index = iVar29;
            }
            uVar12 = FVar32.ObjectIndex;
            if (local_1b8 != '\0') goto LAB_14bd29e22;
            break;
          }
          iVar29 = *(int *)((longlong)iVar29 * 0x20 + 0x18 + lVar17);
        } while (iVar29 != -1);
      }
    }
    uVar26 = *(int *)puVar30 - *(int *)&(this->RepairMaterialInfoData).field_0x34;
    uVar14 = uVar12;
    if (3 < uVar26) {
      uVar24 = (ulonglong)((uVar26 >> 1) + 7) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_1b0 = (int)lVar17;
      uVar14 = uVar12 << ((byte)lVar17 & 0x1f);
    }
    if (((int)uVar26 < 1) || ((int)uVar14 <= *(int *)&(this->RepairMaterialInfoData).field_0x48)) {
      uVar14 = *(int *)&(this->RepairMaterialInfoData).field_0x48 - 1U & local_1b4;
      *(uint *)((longlong)plVar23 + 0x1c) = uVar14;
      puVar30 = *(undefined1 **)&(this->RepairMaterialInfoData).field_0x40;
      if (puVar30 == (undefined1 *)0x0) {
        puVar30 = &(this->RepairMaterialInfoData).field_0x38;
      }
      uVar24 = (longlong)*(int *)&(this->RepairMaterialInfoData).field_0x48 - 1U &
               (longlong)(int)uVar14;
      *(undefined4 *)(plVar23 + 3) = *(undefined4 *)(puVar30 + uVar24 * 4);
      *(int *)(puVar30 + uVar24 * 4) = local_118.Index;
    }
    else {
      *(uint *)&(this->RepairMaterialInfoData).field_0x48 = uVar14;
      TSet<TTuple<__int64,FDS_MaterialSlotInfoArray>,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<__int64,FDS_MaterialSlotInfoArray>,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>,FDefaultSetAllocator>
                *)this_00);
    }
LAB_14bd29e22:
    plVar23 = (longlong *)((longlong)local_118.Index * 0x20 + *(longlong *)&this_00->field_0x0);
LAB_14bd29e2c:
    pFVar1 = (ForAnyElementType *)(plVar23 + 1);
    *(undefined4 *)(plVar23 + 2) = 0;
    if (*(int *)((longlong)plVar23 + 0x14) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,pFVar1,0,(int *)((longlong)plVar23 + 0x14));
    }
    this_01 = local_190;
    local_198 = 0;
    FVar15 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                       ((FDS_DataContainer *)&local_190->_padding_,RegisterItemUID);
    uVar4 = *(undefined8 *)FVar15;
    uVar14 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
    pFVar16 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)&this_01->_padding_,uVar14 + (int)((ulonglong)uVar4 >> 0x20),
                         (FName *)FVar15);
    if ((pFVar16->Data).ArrayNum == 0) {
      pwVar22 = L"";
    }
    else {
      pwVar22 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
    }
    local_150 = _wtoi64(pwVar22);
    pTVar2 = &this_01->TargetRepairSelectedMaterialsMap;
    fVar34 = GetTargetRepairDurability
                       (this_01,&local_150,pTVar2,&this_01->TargetRepairRequiredMaterialsMap);
    local_1a0 = this_01->NeededDurability - (int)fVar34;
    if (local_1a0 < 0) {
      local_1a0 = 0;
    }
    DS_ItemDataUtil::GetItemDataByUID((long64)&local_188);
    local_170 = &(this_01->TargetRepairSelectedMaterialsMap).field_0x10;
    uVar14 = *(uint *)&(this_01->TargetRepairSelectedMaterialsMap).field_0x28;
    iStack_178 = 0;
    local_160 = 0;
    uStack_164 = 0;
    if (uVar14 != 0) {
      puVar31 = *(uint **)&(this_01->TargetRepairSelectedMaterialsMap).field_0x20;
      if (puVar31 == (uint *)0x0) {
        puVar31 = (uint *)local_170;
      }
      uVar26 = *puVar31;
      local_160 = 0;
      while (uVar26 == 0) {
        lVar17 = (longlong)iStack_178;
        local_160 = local_160 + 0x20;
        iStack_178 = iStack_178 + 1;
        uStack_164 = uVar14;
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_178)
        goto LAB_14bd29f7f;
        uVar26 = puVar31[lVar17 + 1];
      }
      uVar12 = -uVar26 & uVar26;
      uVar24 = (ulonglong)uVar12 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      uStack_164 = local_160 + -1 + (int)lVar17;
      local_190 = (UDS_M_ItemRepair *)CONCAT44(local_190._4_4_,(int)lVar17);
      if ((int)uVar14 < (int)uStack_164) {
        uStack_164 = uVar14;
      }
    }
LAB_14bd29f7f:
    uVar14 = *(uint *)&(this_01->TargetRepairSelectedMaterialsMap).field_0x28;
    iStack_158 = *(int *)&(this_01->TargetRepairSelectedMaterialsMap).field_0x8 -
                 *(int *)&(this_01->TargetRepairSelectedMaterialsMap).field_0x34;
    uVar26 = uVar14 & 0xffffffe0;
    uStack_168 = 0xffffffff;
    TStack_140._padding_ = CONCAT44(uVar12,iStack_178);
    iVar29 = (int)uVar14 >> 5;
    TStack_140._28_4_ = uStack_164;
    TStack_140.BaseBitIndex = local_160;
    uStack_120 = CONCAT44(uStack_154,iStack_158);
    TStack_140.UnvisitedBitMask = 0xffffffff;
    local_1b4 = uVar14;
    local_180 = pTVar2;
    uStack_174 = uVar12;
    uStack_15c = uStack_164;
    local_148 = pTVar2;
    TStack_140.CurrentBitIndex = uStack_164;
    TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_170;
    if ((int)uVar14 < 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    fVar10 = __real_322bcc76;
    fVar9 = __real_bf000000;
    dVar8 = __real_3fe0000000000000;
    fVar34 = __real_38d1b717;
    uVar12 = *(uint *)&(this_01->TargetRepairSelectedMaterialsMap).field_0x28;
    if (uVar14 != uVar12) {
      puVar30 = *(undefined1 **)&(this_01->TargetRepairSelectedMaterialsMap).field_0x20;
      puVar28 = &(this_01->TargetRepairSelectedMaterialsMap).field_0x10;
      if (puVar30 != (undefined1 *)0x0) {
        puVar28 = puVar30;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar28 + (longlong)iVar29 * 4);
      while (uVar14 == 0) {
        lVar17 = (longlong)iVar29;
        uVar26 = uVar26 + 0x20;
        iVar29 = iVar29 + 1;
        uVar14 = uVar12;
        local_1b4 = uVar12;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar29)
        goto LAB_14bd2a0c9;
        uVar14 = *(uint *)(puVar28 + lVar17 * 4 + 4);
      }
      uVar24 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      uVar14 = (uVar26 - 1) + (int)lVar17;
      local_1b4 = uVar14;
      if ((int)uVar12 < (int)uVar14) {
        uVar14 = uVar12;
        local_1b4 = uVar12;
      }
    }
LAB_14bd2a0c9:
    while( true ) {
      pTVar2 = local_148;
      if (*(int *)&local_148->field_0x8 - *(int *)&local_148->field_0x34 != (int)uStack_120) {
        `TSparseArray<TSparseSetElement<TTuple<int,FDS_MaterialSlotInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1b8);
      }
      if (((TStack_140.CurrentBitIndex == uVar14) &&
          (TStack_140.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)
           &(this_01->TargetRepairSelectedMaterialsMap).field_0x10)) &&
         (pTVar2 == &this_01->TargetRepairSelectedMaterialsMap)) break;
      lVar17 = *(longlong *)pTVar2;
      lVar33 = (longlong)TStack_140.CurrentBitIndex * 0x1c;
      iVar29 = (int)plVar23[2];
      iVar13 = *(int *)(lVar33 + 8 + lVar17);
      uVar12 = *(uint *)(lVar33 + lVar17);
      local_1b0 = iVar13;
      if (iVar29 == *(int *)((longlong)plVar23 + 0x14)) {
        iVar29 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,pFVar1,(int *)((longlong)plVar23 + 0x14));
      }
      *(int *)(plVar23 + 2) = iVar29 + 1;
      lVar25 = (longlong)iVar29;
      pFVar6 = pFVar1->Data;
      *(uint *)(pFVar6 + lVar25 * 0x10) = uVar12;
      *(int *)(pFVar6 + lVar25 * 0x10 + 4) = iVar13;
      *(undefined8 *)(pFVar6 + lVar25 * 0x10 + 8) = 0;
      if (*(int *)&(this_01->TargetRepairRequiredMaterialsMap).field_0x8 !=
          *(int *)&(this_01->TargetRepairRequiredMaterialsMap).field_0x34) {
        puVar30 = *(undefined1 **)&(this_01->TargetRepairRequiredMaterialsMap).field_0x40;
        puVar28 = &(this_01->TargetRepairRequiredMaterialsMap).field_0x38;
        if (puVar30 != (undefined1 *)0x0) {
          puVar28 = puVar30;
        }
        iVar29 = *(int *)(puVar28 +
                         (ulonglong)
                         (*(int *)&(this_01->TargetRepairRequiredMaterialsMap).field_0x48 - 1U &
                         uVar12) * 4);
        if (iVar29 != -1) {
          do {
            if (*(uint *)(*(longlong *)&this_01->TargetRepairRequiredMaterialsMap +
                         (longlong)iVar29 * 0x30) == uVar12) {
              if (iVar29 != -1) {
                pFVar18 = TMapBase<int,FDS_RequiredMaterialInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>_>
                          ::FindChecked((TMapBase<int,FDS_RequiredMaterialInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>_>
                                         *)&this_01->TargetRepairRequiredMaterialsMap,uVar12);
                lVar25 = pFVar18->RepairEfficiency;
                local_198 = local_198 + (longlong)pFVar18->RepairCostPerOne * (longlong)iVar13;
                DS_ItemDataUtil::GetItemDataByTID((int)&local_1a8);
                bVar11 = FWeakObjectPtr::IsValid(&local_1a8);
                if (bVar11) {
                  bVar11 = FWeakObjectPtr::IsValid(&local_188);
                  if (bVar11) {
                    pUVar19 = FWeakObjectPtr::Get(&local_1a8);
                    iVar29 = *(int *)&pUVar19[0x16].field_0xc;
                    pUVar19 = FWeakObjectPtr::Get(&local_188);
                    dVar36 = (double)((float)(longlong)
                                             ((float)(longlong)iVar29 * (float)lVar25 * fVar10) *
                                      (float)*(int *)&pUVar19[0x15].field_0x18 * fVar34);
                    iVar29 = (int)((longlong)ROUND((dVar36 + dVar36) - dVar8) >> 1);
                    if (iVar29 < 1) {
                      pFVar20 = TMapBase<int,FDS_MaterialSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>_>
                                ::FindChecked((TMapBase<int,FDS_MaterialSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>_>
                                               *)&this_01->TargetRepairSelectedMaterialsMap,uVar12);
                      pFVar20->AvaliableMaxQuantity = 0;
                    }
                    else {
                      fVar35 = (float)(iVar29 * local_1b0 + local_1a0);
                      iVar29 = -((int)ROUND(fVar9 - (fVar35 + fVar35) / (float)iVar29) >> 1);
                      pTVar21 = TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                                ::Find(&local_e8,uVar12);
                      if (pTVar21 == (TTuple<int,int> *)0x0) {
                        iVar13 = 0;
                      }
                      else {
                        iVar13 = *(int *)&pTVar21->field_0x4;
                      }
                      if (iVar13 < iVar29) {
                        iVar29 = iVar13;
                      }
                      *(int *)(lVar33 + 0xc + lVar17) = iVar29;
                    }
                  }
                }
              }
              break;
            }
            iVar29 = *(int *)(*(longlong *)&this_01->TargetRepairRequiredMaterialsMap + 0x28 +
                             (longlong)iVar29 * 0x30);
          } while (iVar29 != -1);
        }
      }
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
      uVar14 = local_1b4;
    }
    FVar15 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                       ((FDS_DataContainer *)&this_01->_padding_,(EDS_ItemRepairData)local_f8);
    uVar4 = *(undefined8 *)FVar15;
    uVar12 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
    pFVar16 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)&this_01->_padding_,uVar12 + (int)((ulonglong)uVar4 >> 0x20),
                         (FName *)FVar15);
    if ((pFVar16->Data).ArrayNum == 0) {
      pwVar22 = L"";
    }
    else {
      pwVar22 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
    }
    _wtoi64(pwVar22);
    FDS_DataContainer::SetData<__int64,enum_EDS_ItemRepairData>
              ((FDS_DataContainer *)&this_01->_padding_,RepairMoneyValue,local_198);
    FDS_DataContainer::AddListData<enum_EDS_ModelEventItemRepair,enum_EDS_ItemRepairData>
              ((FDS_DataContainer *)&this_01->_padding_,UpdateViewEvent,
               local_1b7 + ChangedMaterialQuantity);
    FDS_DataContainer::SetData<enum_EDS_ItemRepairType,enum_EDS_ItemRepairData>
              ((FDS_DataContainer *)&this_01->_padding_,ItemRepairType,TargetRepair);
    *(undefined1 *)&this_01->_padding_ = 1;
    local_e8.HashSize = 0;
    if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_e8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_e8.Elements);
  }
  return;
}

