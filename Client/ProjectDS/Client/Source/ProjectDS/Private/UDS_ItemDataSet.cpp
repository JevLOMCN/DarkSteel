// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 62

// StaticClass @ 14b4d2420

UClass * __cdecl UDS_ItemDataSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ItemDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ItemDataSet",
               &Z_Registration_Info_UClass_UDS_ItemDataSet.InnerSingleton,
               StaticRegisterNativesUDS_ItemDataSet,0x330,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_ItemDataSet>,InternalVTableHelperCtorCaller<UDS_ItemDataSet>
               ,local_res8,UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ItemDataSet.InnerSingleton;
}

// UDS_ItemDataSet @ 14b4d3a50

UDS_ItemDataSet * __thiscall
UDS_ItemDataSet::UDS_ItemDataSet(UDS_ItemDataSet *this,FVTableHelper *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ItemDataSet__6B_;
  (this->EquipmentItemCharacter).Object = (FDS_EquipmentItemCharacterData *)0x0;
  (this->EquipmentItemCharacter).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->DefaultInventorySlotCount = 0;
  *(undefined8 *)&(this->DefaultInventorySlotCount).field_0x8 = 0;
  *(undefined8 *)&(this->DefaultInventorySlotCount).field_0x20 = 0;
  *(undefined4 *)&(this->DefaultInventorySlotCount).field_0x28 = 0;
  *(undefined4 *)&(this->DefaultInventorySlotCount).field_0x2c = 0x80;
  *(undefined4 *)&(this->DefaultInventorySlotCount).field_0x34 = 0;
  *(undefined4 *)&(this->DefaultInventorySlotCount).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DefaultInventorySlotCount).field_0x40 = 0;
  *(undefined4 *)&(this->DefaultInventorySlotCount).field_0x48 = 0;
  *(undefined8 *)&this->ExtendedInventorySlotCount = 0;
  *(undefined8 *)&(this->ExtendedInventorySlotCount).field_0x8 = 0;
  *(undefined8 *)&(this->ExtendedInventorySlotCount).field_0x20 = 0;
  *(undefined4 *)&(this->ExtendedInventorySlotCount).field_0x28 = 0;
  *(undefined4 *)&(this->ExtendedInventorySlotCount).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExtendedInventorySlotCount).field_0x34 = 0;
  *(undefined4 *)&(this->ExtendedInventorySlotCount).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ExtendedInventorySlotCount).field_0x40 = 0;
  *(undefined4 *)&(this->ExtendedInventorySlotCount).field_0x48 = 0;
  *(undefined8 *)&this->UsedInventorySlotCount = 0;
  *(undefined8 *)&(this->UsedInventorySlotCount).field_0x8 = 0;
  *(undefined8 *)&(this->UsedInventorySlotCount).field_0x20 = 0;
  *(undefined4 *)&(this->UsedInventorySlotCount).field_0x28 = 0;
  *(undefined4 *)&(this->UsedInventorySlotCount).field_0x2c = 0x80;
  *(undefined4 *)&(this->UsedInventorySlotCount).field_0x34 = 0;
  *(undefined4 *)&(this->UsedInventorySlotCount).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->UsedInventorySlotCount).field_0x40 = 0;
  *(undefined4 *)&(this->UsedInventorySlotCount).field_0x48 = 0;
  *(undefined8 *)&this->InventoryWeight = 0;
  *(undefined8 *)&(this->InventoryWeight).field_0x8 = 0;
  *(undefined8 *)&(this->InventoryWeight).field_0x20 = 0;
  *(undefined4 *)&(this->InventoryWeight).field_0x28 = 0;
  *(undefined4 *)&(this->InventoryWeight).field_0x2c = 0x80;
  *(undefined4 *)&(this->InventoryWeight).field_0x34 = 0;
  *(undefined4 *)&(this->InventoryWeight).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->InventoryWeight).field_0x40 = 0;
  *(undefined4 *)&(this->InventoryWeight).field_0x48 = 0;
  *(undefined8 *)&this->OnChanged_IsEquipped = 0;
  *(undefined8 *)&(this->OnChanged_IsEquipped).field_0x8 = 0;
  *(undefined8 *)&(this->OnChanged_IsEquipped).field_0x10 = 0;
  *(undefined8 *)&this->OnChanged_ItemNewSymbol = 0;
  *(undefined8 *)&(this->OnChanged_ItemNewSymbol).field_0x8 = 0;
  *(undefined8 *)&(this->OnChanged_ItemNewSymbol).field_0x10 = 0;
  *(undefined8 *)&this->ItemTypeSymbolMap = 0;
  *(undefined8 *)&(this->ItemTypeSymbolMap).field_0x8 = 0;
  *(undefined8 *)&(this->ItemTypeSymbolMap).field_0x20 = 0;
  *(undefined4 *)&(this->ItemTypeSymbolMap).field_0x28 = 0;
  *(undefined4 *)&(this->ItemTypeSymbolMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ItemTypeSymbolMap).field_0x34 = 0;
  *(undefined4 *)&(this->ItemTypeSymbolMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ItemTypeSymbolMap).field_0x40 = 0;
  *(undefined4 *)&(this->ItemTypeSymbolMap).field_0x48 = 0;
  *(undefined8 *)&this->OnUpdateItemUseAction = 0;
  *(undefined8 *)&(this->OnUpdateItemUseAction).field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateItemUseAction).field_0x10 = 0;
  *(undefined8 *)&this->OnFinishItemUseAction = 0;
  *(undefined8 *)&(this->OnFinishItemUseAction).field_0x8 = 0;
  *(undefined8 *)&(this->OnFinishItemUseAction).field_0x10 = 0;
  *(undefined8 *)&this->ItemCooltimeData = 0;
  *(undefined8 *)&(this->ItemCooltimeData).field_0x8 = 0;
  *(undefined8 *)&(this->ItemCooltimeData).field_0x20 = 0;
  this->ActionCooltime = 0.0;
  *(undefined4 *)&(this->ItemCooltimeData).field_0x28 = 0;
  *(undefined4 *)&(this->ItemCooltimeData).field_0x2c = 0x80;
  *(undefined4 *)&(this->ItemCooltimeData).field_0x34 = 0;
  *(undefined4 *)&(this->ItemCooltimeData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ItemCooltimeData).field_0x40 = 0;
  *(undefined4 *)&(this->ItemCooltimeData).field_0x48 = 0;
  this->InventoryUpdateEntry = None;
  *(undefined8 *)&this->OnInventoryUpdate = 0;
  *(undefined8 *)&(this->OnInventoryUpdate).field_0x8 = 0;
  *(undefined8 *)&(this->OnInventoryUpdate).field_0x10 = 0;
  *(undefined8 *)&(this->OnInventoryUpdate).field_0x18 = 2;
  return this;
}

// ~UDS_ItemDataSet @ 14b4d4760

void __thiscall UDS_ItemDataSet::~UDS_ItemDataSet(UDS_ItemDataSet *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_ItemDataSet__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnInventoryUpdate).field_0x8,*(int *)&(this->OnInventoryUpdate).field_0x10);
  pvVar1 = *(void **)&(this->OnInventoryUpdate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInventoryUpdate);
  *(undefined4 *)&(this->ItemCooltimeData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ItemCooltimeData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UDS_ItemDataSet::FDS_CooltimeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UDS_ItemDataSet::FDS_CooltimeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UDS_ItemDataSet::FDS_CooltimeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ItemCooltimeData);
  pvVar1 = *(void **)&(this->OnFinishItemUseAction).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFinishItemUseAction);
  pvVar1 = *(void **)&(this->OnUpdateItemUseAction).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUpdateItemUseAction);
  *(undefined4 *)&(this->ItemTypeSymbolMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ItemTypeSymbolMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_ItemType,TWeakPtr<FDS_ItemTypeSymbolData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_ItemType,TWeakPtr<FDS_ItemTypeSymbolData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ItemTypeSymbolMap);
  pvVar1 = *(void **)&(this->OnChanged_ItemNewSymbol).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChanged_ItemNewSymbol);
  pvVar1 = *(void **)&(this->OnChanged_IsEquipped).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChanged_IsEquipped);
  *(undefined4 *)&(this->InventoryWeight).field_0x48 = 0;
  pvVar1 = *(void **)&(this->InventoryWeight).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_InventoryType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_InventoryType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->InventoryWeight);
  *(undefined4 *)&(this->UsedInventorySlotCount).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UsedInventorySlotCount).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_InventoryType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_InventoryType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->UsedInventorySlotCount);
  *(undefined4 *)&(this->ExtendedInventorySlotCount).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ExtendedInventorySlotCount).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_InventoryType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_InventoryType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ExtendedInventorySlotCount);
  *(undefined4 *)&(this->DefaultInventorySlotCount).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DefaultInventorySlotCount).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_InventoryType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_InventoryType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->DefaultInventorySlotCount);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EquipmentItemCharacter).SharedReferenceCount.ReferenceController);
  UDS_DataSetBase::~UDS_DataSetBase((UDS_DataSetBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4d52c0

UClass * __cdecl UDS_ItemDataSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ItemDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ItemDataSet",
               &Z_Registration_Info_UClass_UDS_ItemDataSet.InnerSingleton,
               StaticRegisterNativesUDS_ItemDataSet,0x330,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_ItemDataSet>,InternalVTableHelperCtorCaller<UDS_ItemDataSet>
               ,local_res8,UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ItemDataSet.InnerSingleton;
}

// StaticRegisterNativesUDS_ItemDataSet @ 14b4d5530

void __cdecl UDS_ItemDataSet::StaticRegisterNativesUDS_ItemDataSet(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UDS_ItemDataSet_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangedIsEquipped @ 14b4d6430

void __cdecl
UDS_ItemDataSet::execOnChangedIsEquipped(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedIsEquipped((UDS_ItemDataSet *)param_1,local_res10[0] != 0);
  return;
}

// execOnChangedNewSymbol @ 14b4d64c0

void __cdecl UDS_ItemDataSet::execOnChangedNewSymbol(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedNewSymbol((UDS_ItemDataSet *)param_1,local_res10[0] != 0);
  return;
}

// execUpdateDefaultMountInventorySlotCount @ 14b4d65e0

void __cdecl
UDS_ItemDataSet::execUpdateDefaultMountInventorySlotCount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataSetBase *local_res10;
  
  local_res10 = (UDS_DataSetBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UpdateDefaultMountInventorySlotCount((UDS_ItemDataSet *)param_1,local_res10);
  return;
}

// execUpdateInventoryWeight @ 14b4d6670

void __cdecl
UDS_ItemDataSet::execUpdateInventoryWeight(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UpdateInventoryWeight((UDS_ItemDataSet *)param_1);
  return;
}

// execUpdateUsedInventorySlotCount @ 14b4d6690

void __cdecl
UDS_ItemDataSet::execUpdateUsedInventorySlotCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UpdateUsedInventorySlotCount((UDS_ItemDataSet *)param_1);
  return;
}

// UDS_ItemDataSet @ 14ba91840

UDS_ItemDataSet * __thiscall
UDS_ItemDataSet::UDS_ItemDataSet(UDS_ItemDataSet *this,FObjectInitializer *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ItemDataSet__6B_;
  (this->EquipmentItemCharacter).Object = (FDS_EquipmentItemCharacterData *)0x0;
  (this->EquipmentItemCharacter).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->DefaultInventorySlotCount = 0;
  *(undefined8 *)&(this->DefaultInventorySlotCount).field_0x8 = 0;
  *(undefined8 *)&(this->DefaultInventorySlotCount).field_0x20 = 0;
  *(undefined4 *)&(this->DefaultInventorySlotCount).field_0x28 = 0;
  *(undefined4 *)&(this->DefaultInventorySlotCount).field_0x2c = 0x80;
  *(undefined4 *)&(this->DefaultInventorySlotCount).field_0x34 = 0;
  *(undefined4 *)&(this->DefaultInventorySlotCount).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DefaultInventorySlotCount).field_0x40 = 0;
  *(undefined4 *)&(this->DefaultInventorySlotCount).field_0x48 = 0;
  *(undefined8 *)&this->ExtendedInventorySlotCount = 0;
  *(undefined8 *)&(this->ExtendedInventorySlotCount).field_0x8 = 0;
  *(undefined8 *)&(this->ExtendedInventorySlotCount).field_0x20 = 0;
  *(undefined4 *)&(this->ExtendedInventorySlotCount).field_0x28 = 0;
  *(undefined4 *)&(this->ExtendedInventorySlotCount).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExtendedInventorySlotCount).field_0x34 = 0;
  *(undefined4 *)&(this->ExtendedInventorySlotCount).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ExtendedInventorySlotCount).field_0x40 = 0;
  *(undefined4 *)&(this->ExtendedInventorySlotCount).field_0x48 = 0;
  *(undefined8 *)&this->UsedInventorySlotCount = 0;
  *(undefined8 *)&(this->UsedInventorySlotCount).field_0x8 = 0;
  *(undefined8 *)&(this->UsedInventorySlotCount).field_0x20 = 0;
  *(undefined4 *)&(this->UsedInventorySlotCount).field_0x28 = 0;
  *(undefined4 *)&(this->UsedInventorySlotCount).field_0x2c = 0x80;
  *(undefined4 *)&(this->UsedInventorySlotCount).field_0x34 = 0;
  *(undefined4 *)&(this->UsedInventorySlotCount).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->UsedInventorySlotCount).field_0x40 = 0;
  *(undefined4 *)&(this->UsedInventorySlotCount).field_0x48 = 0;
  *(undefined8 *)&this->InventoryWeight = 0;
  *(undefined8 *)&(this->InventoryWeight).field_0x8 = 0;
  *(undefined8 *)&(this->InventoryWeight).field_0x20 = 0;
  *(undefined4 *)&(this->InventoryWeight).field_0x28 = 0;
  *(undefined4 *)&(this->InventoryWeight).field_0x2c = 0x80;
  *(undefined4 *)&(this->InventoryWeight).field_0x34 = 0;
  *(undefined4 *)&(this->InventoryWeight).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->InventoryWeight).field_0x40 = 0;
  *(undefined4 *)&(this->InventoryWeight).field_0x48 = 0;
  *(undefined8 *)&this->OnChanged_IsEquipped = 0;
  *(undefined8 *)&(this->OnChanged_IsEquipped).field_0x8 = 0;
  *(undefined8 *)&(this->OnChanged_IsEquipped).field_0x10 = 0;
  *(undefined8 *)&this->OnChanged_ItemNewSymbol = 0;
  *(undefined8 *)&(this->OnChanged_ItemNewSymbol).field_0x8 = 0;
  *(undefined8 *)&(this->OnChanged_ItemNewSymbol).field_0x10 = 0;
  *(undefined8 *)&this->ItemTypeSymbolMap = 0;
  *(undefined8 *)&(this->ItemTypeSymbolMap).field_0x8 = 0;
  *(undefined8 *)&(this->ItemTypeSymbolMap).field_0x20 = 0;
  *(undefined4 *)&(this->ItemTypeSymbolMap).field_0x28 = 0;
  *(undefined4 *)&(this->ItemTypeSymbolMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ItemTypeSymbolMap).field_0x34 = 0;
  *(undefined4 *)&(this->ItemTypeSymbolMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ItemTypeSymbolMap).field_0x40 = 0;
  *(undefined4 *)&(this->ItemTypeSymbolMap).field_0x48 = 0;
  *(undefined8 *)&this->OnUpdateItemUseAction = 0;
  *(undefined8 *)&(this->OnUpdateItemUseAction).field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateItemUseAction).field_0x10 = 0;
  *(undefined8 *)&this->OnFinishItemUseAction = 0;
  *(undefined8 *)&(this->OnFinishItemUseAction).field_0x8 = 0;
  *(undefined8 *)&(this->OnFinishItemUseAction).field_0x10 = 0;
  *(undefined8 *)&this->ItemCooltimeData = 0;
  *(undefined8 *)&(this->ItemCooltimeData).field_0x8 = 0;
  *(undefined8 *)&(this->ItemCooltimeData).field_0x20 = 0;
  this->ActionCooltime = 0.0;
  *(undefined4 *)&(this->ItemCooltimeData).field_0x28 = 0;
  *(undefined4 *)&(this->ItemCooltimeData).field_0x2c = 0x80;
  *(undefined4 *)&(this->ItemCooltimeData).field_0x34 = 0;
  *(undefined4 *)&(this->ItemCooltimeData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ItemCooltimeData).field_0x40 = 0;
  *(undefined4 *)&(this->ItemCooltimeData).field_0x48 = 0;
  this->InventoryUpdateEntry = None;
  *(undefined8 *)&this->OnInventoryUpdate = 0;
  *(undefined8 *)&(this->OnInventoryUpdate).field_0x8 = 0;
  *(undefined8 *)&(this->OnInventoryUpdate).field_0x10 = 0;
  *(undefined8 *)&(this->OnInventoryUpdate).field_0x18 = 2;
  return this;
}

// AddEquipmentItemData @ 14ba93a80

void __thiscall
UDS_ItemDataSet::AddEquipmentItemData(UDS_ItemDataSet *this,SqlItemEquipmentTable *param_1)

{
  long64 lVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  UDS_ItemData *pUVar5;
  UObject *pUVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  FWeakObjectPtr local_res8;
  FName local_res10;
  FName local_res18;
  code *local_48;
  undefined8 uStack_40;
  code *local_38;
  ulonglong uStack_30;
  
  lVar1 = (param_1->_impl_).item_uid_;
  uVar4 = UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
  UDS_ItemData::GetData((ulong64)&local_res8,uVar4,SUB81(lVar1,0));
  pUVar5 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res8);
  UDS_ItemData::UpdateEquipmentItemData(pUVar5,param_1);
  pUVar6 = FWeakObjectPtr::Get(&local_res8);
  pcVar7 = strstr("&UDS_ItemDataSet::OnChangedNewSymbol","::");
  pcVar9 = &DAT_00000002;
  if (pcVar7 == (char *)0x0) {
LAB_14ba93b2a:
    pcVar8 = &DAT_00000002;
LAB_14ba93b2d:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    do {
      pcVar8 = pcVar7;
      pcVar7 = strstr(pcVar8 + 1,"::");
    } while (pcVar7 != (char *)0x0);
    if (pcVar8 == (char *)0x0) goto LAB_14ba93b2a;
    pcVar8 = pcVar8 + 2;
    if (*pcVar8 == '0') goto LAB_14ba93b2d;
  }
  ::FName::FName(&local_res10,pcVar8);
  uStack_40 = (ulonglong)uStack_40._4_4_ << 0x20;
  local_48 = OnChangedNewSymbol;
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,bool_const_>::
  __Internal_AddUniqueDynamic<UDS_ItemDataSet>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,bool_const_> *)
             &pUVar6[7].field_0x18,this,(pmf_7dbc5f51 *)&local_48,local_res10);
  pUVar6 = FWeakObjectPtr::Get(&local_res8);
  pcVar7 = strstr("&UDS_ItemDataSet::OnChangedIsEquipped","::");
  if (pcVar7 != (char *)0x0) {
    do {
      pcVar8 = pcVar7;
      pcVar7 = strstr(pcVar8 + 1,"::");
    } while (pcVar7 != (char *)0x0);
    if ((pcVar8 != (char *)0x0) && (pcVar9 = pcVar8 + 2, pcVar8[2] != '0')) goto LAB_14ba93c29;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14ba93c29:
  ::FName::FName(&local_res18,pcVar9);
  local_48 = OnChangedIsEquipped;
  uStack_40 = uStack_40 & 0xffffffff00000000;
  local_38 = OnChangedIsEquipped;
  uStack_30 = uStack_40;
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,bool_const_>::
  __Internal_AddUniqueDynamic<UDS_ItemDataSet>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,bool_const_> *)
             (pUVar6 + 4),this,(pmf_7dbc5f51 *)&local_38,local_res18);
  pUVar5 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res8);
  UDS_ItemData::SetNewSymbol(pUVar5,true);
  this->InventoryUpdateEntry = this->InventoryUpdateEntry | Add;
  return;
}

// AddStackableItemData @ 14ba946f0

void __thiscall
UDS_ItemDataSet::AddStackableItemData(UDS_ItemDataSet *this,SqlItemStackableTable *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  UDS_ItemData *pUVar5;
  UObject *pUVar6;
  char *pcVar7;
  char *pcVar8;
  FWeakObjectPtr local_res8;
  FName local_res10;
  code *local_28;
  undefined8 uStack_20;
  
  iVar1 = (param_1->_impl_).item_id_;
  uVar4 = UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
  UDS_ItemData::GetData((ulong64)&local_res8,uVar4,SUB41(iVar1,0));
  pUVar5 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res8);
  UDS_ItemData::UpdateStackableItemData(pUVar5,param_1);
  pUVar6 = FWeakObjectPtr::Get(&local_res8);
  pcVar7 = strstr("&UDS_ItemDataSet::OnChangedNewSymbol","::");
  if (pcVar7 == (char *)0x0) {
LAB_14ba9478c:
    pcVar8 = &DAT_00000002;
  }
  else {
    do {
      pcVar8 = pcVar7;
      pcVar7 = strstr(pcVar8 + 1,"::");
    } while (pcVar7 != (char *)0x0);
    if (pcVar8 == (char *)0x0) goto LAB_14ba9478c;
    pcVar8 = pcVar8 + 2;
    if (*pcVar8 != '0') goto LAB_14ba947bf;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14ba947bf:
  ::FName::FName(&local_res10,pcVar8);
  uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
  local_28 = OnChangedNewSymbol;
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,bool_const_>::
  __Internal_AddUniqueDynamic<UDS_ItemDataSet>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,bool_const_> *)
             &pUVar6[7].field_0x18,this,(pmf_7dbc5f51 *)&local_28,local_res10);
  pUVar5 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res8);
  UDS_ItemData::SetNewSymbol(pUVar5,true);
  this->InventoryUpdateEntry = this->InventoryUpdateEntry | Add;
  return;
}

// CanUseItem @ 14ba959e0

bool __cdecl UDS_ItemDataSet::CanUseItem(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1)

{
  return false;
}

// Cancel @ 14ba95a30

void __thiscall UDS_ItemDataSet::Cancel(UDS_ItemDataSet *this,int param_1)

{
  return;
}

// CancelItemAction @ 14ba95a40

void __thiscall UDS_ItemDataSet::CancelItemAction(UDS_ItemDataSet *this)

{
  this->ActionCooltime = 0.0;
  FDS_DataSetDirtyDelegate_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFinishItemUseAction,
             (UDS_DataSetBase *)this);
  return;
}

// ClearNewSymbol @ 14ba983f0

void __thiscall UDS_ItemDataSet::ClearNewSymbol(UDS_ItemDataSet *this)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  UClass *pUVar8;
  longlong lVar9;
  int iVar10;
  FObjectPtr_u_0 this_00;
  uint uVar11;
  uint uVar12;
  longlong *plVar13;
  undefined1 local_res8 [8];
  int local_res10;
  FObjectPtr_u_0 local_90;
  longlong *local_88;
  int iStack_80;
  uint uStack_7c;
  longlong *local_78;
  undefined4 uStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  longlong *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar4 = (int)this->_padding_;
  plVar1 = &this->_padding_;
  iStack_80 = 0;
  plVar2 = &this->_padding_;
  local_68 = 0;
  uStack_7c = 1;
  iStack_6c = 0;
  if (iVar4 != 0) {
    plVar13 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar13 = plVar1;
    }
    uVar12 = (uint)*plVar13;
    while (uVar12 == 0) {
      lVar9 = (longlong)iStack_80;
      local_68 = local_68 + 0x20;
      iStack_80 = iStack_80 + 1;
      iStack_6c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_80) goto LAB_14ba9848e;
      uVar12 = *(uint *)((longlong)plVar13 + lVar9 * 4 + 4);
    }
    uStack_7c = -uVar12 & uVar12;
    uVar3 = (ulonglong)uStack_7c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iStack_6c = local_res10 + -1 + local_68;
    if (iVar4 < iStack_6c) {
      iStack_6c = iVar4;
    }
  }
LAB_14ba9848e:
  iStack_60 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
  uVar12 = (uint)this->_padding_;
  uStack_70 = 0xffffffff;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uStack_7c,iStack_80);
  TStack_50.CurrentBitIndex = iStack_6c;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_50._28_4_ = iStack_6c;
  TStack_50.BaseBitIndex = local_68;
  uStack_30 = CONCAT44(uStack_5c,iStack_60);
  local_88 = plVar2;
  local_78 = plVar1;
  iStack_64 = iStack_6c;
  local_58 = plVar2;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = (uint)this->_padding_;
  if (uVar12 != uVar5) {
    plVar13 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar13 = plVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)((longlong)plVar13 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14ba98590;
      uVar12 = *(uint *)((longlong)plVar13 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar5 < (int)uVar12) {
      uVar12 = uVar5;
    }
  }
LAB_14ba98590:
  do {
    plVar13 = local_58;
    if ((int)local_58[1] - *(int *)((longlong)local_58 + 0x34) != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TObjectPtr<UDS_DataBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_50.CurrentBitIndex == uVar12) &&
        (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar1)) && (plVar13 == plVar2))
    {
      return;
    }
    local_90 = (FObjectPtr_u_0)
               ((FObjectPtr_u_0 *)(*plVar13 + (longlong)TStack_50.CurrentBitIndex * 0x18 + 8))->
               Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14ba985f5:
      if ((UDS_ItemData *)local_90.Handle == (UDS_ItemData *)0x0) goto LAB_14ba98615;
      pUVar8 = Z_Construct_UClass_UDS_ItemData_NoRegister();
      bVar7 = FObjectPtr::IsA((FObjectPtr *)&local_90,pUVar8);
      this_00 = local_90;
      if (!bVar7) goto LAB_14ba98615;
    }
    else {
      if ((UDS_ItemData *)local_90.Handle != (UDS_ItemData *)0x0) {
        UE::GC::MarkAsReachable(local_90.Handle);
        goto LAB_14ba985f5;
      }
LAB_14ba98615:
      this_00.Handle = (UObject *)0x0;
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if ((UDS_ItemData *)this_00.Handle != (UDS_ItemData *)0x0) goto LAB_14ba98634;
    }
    else if ((UDS_ItemData *)this_00.Handle != (UDS_ItemData *)0x0) {
      UE::GC::MarkAsReachable(this_00.Handle);
LAB_14ba98634:
      UDS_ItemData::SetNewSymbol((UDS_ItemData *)this_00.Handle,false);
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  } while( true );
}

// CreateItemCharacterData @ 14ba9c640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UDS_ItemDataSet::CreateItemCharacterData(UDS_ItemDataSet *this)

{
  TSharedPtr<FDS_EquipmentItemCharacterData,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  UDS_EventManager *this_00;
  ulong64 uVar5;
  FDS_EquipmentItemCharacterData *pFVar6;
  FDS_EquipmentItemCharacterData *local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar4 = ::operator_new(0x130);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18 = ___xmm_00000000000000000000000000000010;
    pFVar6 = (FDS_EquipmentItemCharacterData *)&DAT_00000010;
    FStack_10.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFDS_EquipmentItemCharacterData___00_SharedPointerInternals__6B_
    ;
    pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[3]._padding_ = 0;
    pTVar4[5]._padding_ = 0;
    memset((void *)((longlong)&pTVar4[6]._padding_ + 4),0,0xcc);
    pTVar4[1]._padding_ =
         (longlong)&___7__FDS_FilteredEventDelegate___CBW4EDS_EquipSlotType____CB_J__6B_;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[2]._padding_ = 0;
    pTVar4[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[3].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar4[4]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar4[4]._padding_ + 4) = 0x80;
    pTVar4[4].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar4[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[5].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar4[6]._padding_ = 0;
    this_00 = UDS_EventManager::GetInst();
    if (this_00 != (UDS_EventManager *)0x0) {
      UDS_EventManager::RegisterCleanableDelegate(this_00,(FDS_IDelegateCleanable *)(pTVar4 + 1));
    }
    pTVar4[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[6].WeakReferenceCount = (atomic<int>)0x0;
    pFVar6 = (FDS_EquipmentItemCharacterData *)(pTVar4 + 1);
    pTVar4[7]._padding_ = 0;
    pTVar4[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[8]._padding_ = 2;
    pTVar4[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[9]._padding_ = 0;
    pTVar4[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[9].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0xb]._padding_ = 0;
    pTVar4[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0xb].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar4[0xc]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar4[0xc]._padding_ + 4) = 0;
    pTVar4[0xd]._padding_ = 0;
    pTVar4[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0xe]._padding_ = 0;
    pTVar4[0xe].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0xe].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0x10]._padding_ = 0;
    pTVar4[0x10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x10].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar4[0x11]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar4[0x11]._padding_ + 4) = 0;
    pTVar4[0x12]._padding_ = 0;
    pTVar4[0x12].SharedReferenceCount = (atomic<int>)0x0;
    if (pFVar6 == (FDS_EquipmentItemCharacterData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    FStack_10.ReferenceController = pTVar4;
    local_18 = pFVar6;
  }
  pTVar1 = &this->EquipmentItemCharacter;
  if (pTVar1 != (TSharedPtr<FDS_EquipmentItemCharacterData,1> *)&local_18) {
    pTVar1->Object = pFVar6;
    local_18 = (FDS_EquipmentItemCharacterData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->EquipmentItemCharacter).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (pTVar1->Object == (FDS_EquipmentItemCharacterData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar6 = pTVar1->Object;
  uVar5 = UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
  pFVar6->EntityID = uVar5;
  return;
}

// GetActionCooltime @ 14baa37a0

float __thiscall UDS_ItemDataSet::GetActionCooltime(UDS_ItemDataSet *this)

{
  return this->ActionCooltime;
}

// GetCharacterItemData @ 14baa5170

TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> __thiscall
UDS_ItemDataSet::GetCharacterItemData(UDS_ItemDataSet *this,EDS_EquipSlotType param_1)

{
  code *pcVar1;
  bool bVar2;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> TVar3;
  int in_register_00000014;
  FWeakObjectPtr FVar4;
  
  FVar4.ObjectSerialNumber = in_register_00000014;
  FVar4.ObjectIndex = param_1;
  if ((this->EquipmentItemCharacter).Object == (FDS_EquipmentItemCharacterData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.WeakPtr = (FWeakObjectPtr)(*pcVar1)();
      return (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)TVar3.WeakPtr;
    }
  }
  FDS_EquipmentItemCharacterData::GetEquippedItemData
            ((this->EquipmentItemCharacter).Object,(EDS_EquipSlotType *)FVar4);
  return (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)FVar4;
}

// GetDataListByItemType @ 14baa92e0

TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_ItemDataSet::GetDataListByItemType
          (UDS_ItemDataSet *this,
          TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,EDS_ItemType param_1)

{
  FObjectPtr_u_0 *pFVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  FObjectPtr_u_0 *this_00;
  UObject *local_res8;
  FWeakObjectPtr local_res10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = (FObjectPtr_u_0 *)this->_padding_;
  iVar2 = (int)this->_padding_;
  pFVar1 = this_00 + iVar2;
  do {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_DataBase>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (this_00 == pFVar1) {
      return __return_storage_ptr__;
    }
    if (this_00->Handle == (UObject *)0x0) {
LAB_14baa935b:
      pUVar6 = (UObject *)0x0;
    }
    else {
      pUVar5 = Z_Construct_UClass_UDS_ItemData_NoRegister();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
      if (!bVar3) goto LAB_14baa935b;
      pUVar6 = this_00->Handle;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res8 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res8);
    bVar3 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar3) {
      pUVar6 = FWeakObjectPtr::Get(&local_res10);
      if (*(EDS_ItemType *)&pUVar6[0x13].field_0x20 == param_1) {
        iVar4 = __return_storage_ptr__->ArrayNum;
        if (iVar4 == __return_storage_ptr__->ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar4 + 1;
        *(FWeakObjectPtr *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 8)
             = local_res10;
      }
    }
    this_00 = this_00 + 1;
  } while( true );
}

// GetDefaultInventorySlotCount @ 14baa9530

int __thiscall
UDS_ItemDataSet::GetDefaultInventorySlotCount(UDS_ItemDataSet *this,EDS_InventoryType param_1)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->DefaultInventorySlotCount).field_0x8 !=
      *(int *)&(this->DefaultInventorySlotCount).field_0x34) {
    puVar4 = *(undefined1 **)&(this->DefaultInventorySlotCount).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->DefaultInventorySlotCount).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + ((ulonglong)
                               (*(int *)&(this->DefaultInventorySlotCount).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->DefaultInventorySlotCount;
      do {
        if (*(EDS_InventoryType *)(lVar1 + (longlong)iVar2 * 0x10) == param_1) {
          piVar3 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                   ::FindChecked(&this->DefaultInventorySlotCount,param_1);
          return *piVar3;
        }
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  return 0;
}

// GetEquipmentItemCharacterData @ 14baa9e20

TSharedPtr<FDS_EquipmentItemCharacterData,1> * __thiscall
UDS_ItemDataSet::GetEquipmentItemCharacterData
          (UDS_ItemDataSet *this,
          TSharedPtr<FDS_EquipmentItemCharacterData,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->EquipmentItemCharacter).Object;
  pTVar1 = (this->EquipmentItemCharacter).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetEquippedItemDataList @ 14baa9f30

TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_ItemDataSet::GetEquippedItemDataList
          (UDS_ItemDataSet *this,
          TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FDS_EquipmentItemCharacterData *this_00;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ForAnyElementType FVar6;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = (this->EquipmentItemCharacter).Object;
  pTVar2 = (this->EquipmentItemCharacter).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 != (FDS_EquipmentItemCharacterData *)0x0) {
    FDS_EquipmentItemCharacterData::GetAllEquippedItemUIDList(this_00,&local_38);
    iVar5 = local_38.ArrayNum;
    pFVar1 = local_38.AllocatorInstance.Data + (longlong)iVar5 * 8;
    FVar6.Data = local_38.AllocatorInstance.Data;
    while( true ) {
      if (local_38.ArrayNum != iVar5) {
        `TCheckedPointerIterator<__int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar6.Data == pFVar1) break;
      GetItemDataByUID(this,(ulong64)&local_res10);
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
        *(FWeakObjectPtr *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 8)
             = local_res10;
      }
      FVar6.Data = FVar6.Data + 8;
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// GetExtendedInventorySlotCount @ 14baaa550

int __thiscall
UDS_ItemDataSet::GetExtendedInventorySlotCount(UDS_ItemDataSet *this,EDS_InventoryType param_1)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->ExtendedInventorySlotCount).field_0x8 !=
      *(int *)&(this->ExtendedInventorySlotCount).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ExtendedInventorySlotCount).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ExtendedInventorySlotCount).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + ((ulonglong)
                               (*(int *)&(this->ExtendedInventorySlotCount).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->ExtendedInventorySlotCount;
      do {
        if (*(EDS_InventoryType *)(lVar1 + (longlong)iVar2 * 0x10) == param_1) {
          piVar3 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                   ::FindChecked(&this->ExtendedInventorySlotCount,param_1);
          return *piVar3;
        }
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  return 0;
}

// GetInventoryWeight @ 14baaba20

int __thiscall UDS_ItemDataSet::GetInventoryWeight(UDS_ItemDataSet *this,EDS_InventoryType param_1)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->InventoryWeight).field_0x8 != *(int *)&(this->InventoryWeight).field_0x34) {
    puVar4 = *(undefined1 **)&(this->InventoryWeight).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->InventoryWeight).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + ((ulonglong)(*(int *)&(this->InventoryWeight).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->InventoryWeight;
      do {
        if (*(EDS_InventoryType *)(lVar1 + (longlong)iVar2 * 0x10) == param_1) {
          piVar3 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                   ::FindChecked(&this->InventoryWeight,param_1);
          return *piVar3;
        }
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  return 0;
}

// GetItemCooltimeOrigin @ 14baabb20

float __thiscall UDS_ItemDataSet::GetItemCooltimeOrigin(UDS_ItemDataSet *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  FDS_CooltimeData *pFVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->ItemCooltimeData).field_0x8 != *(int *)&(this->ItemCooltimeData).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ItemCooltimeData).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ItemCooltimeData).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->ItemCooltimeData).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->ItemCooltimeData;
      do {
        if (*(int *)(lVar1 + (longlong)iVar2 * 0x14) == param_1) {
          pFVar3 = TMapBase<int,UDS_ItemDataSet::FDS_CooltimeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UDS_ItemDataSet::FDS_CooltimeData,0>_>
                   ::FindChecked((TMapBase<int,UDS_ItemDataSet::FDS_CooltimeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UDS_ItemDataSet::FDS_CooltimeData,0>_>
                                  *)&this->ItemCooltimeData,param_1);
          return pFVar3->OriginCooltime;
        }
        iVar2 = *(int *)(lVar1 + 0xc + (longlong)iVar2 * 0x14);
      } while (iVar2 != -1);
    }
  }
  return 0.0;
}

// GetItemCooltimeRemain @ 14baabc20

float __thiscall UDS_ItemDataSet::GetItemCooltimeRemain(UDS_ItemDataSet *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  FDS_CooltimeData *pFVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->ItemCooltimeData).field_0x8 != *(int *)&(this->ItemCooltimeData).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ItemCooltimeData).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ItemCooltimeData).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->ItemCooltimeData).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->ItemCooltimeData;
      do {
        if (*(int *)(lVar1 + (longlong)iVar2 * 0x14) == param_1) {
          pFVar3 = TMapBase<int,UDS_ItemDataSet::FDS_CooltimeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UDS_ItemDataSet::FDS_CooltimeData,0>_>
                   ::FindChecked((TMapBase<int,UDS_ItemDataSet::FDS_CooltimeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UDS_ItemDataSet::FDS_CooltimeData,0>_>
                                  *)&this->ItemCooltimeData,param_1);
          return pFVar3->RemainCooltime;
        }
        iVar2 = *(int *)(lVar1 + 0xc + (longlong)iVar2 * 0x14);
      } while (iVar2 != -1);
    }
  }
  return 0.0;
}

// GetItemDataByTID @ 14baabee0

TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> __thiscall
UDS_ItemDataSet::GetItemDataByTID(UDS_ItemDataSet *this,int param_1)

{
  FObjectPtr_u_0 *pFVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  int in_register_00000014;
  FWeakObjectPtr this_00;
  FObjectPtr_u_0 *this_01;
  int in_R8D;
  UObject *local_res8;
  FWeakObjectPtr local_res20;
  
  this_00.ObjectSerialNumber = in_register_00000014;
  this_00.ObjectIndex = param_1;
  this_01 = (FObjectPtr_u_0 *)this->_padding_;
  iVar2 = (int)this->_padding_;
  pFVar1 = this_01 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_DataBase>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (this_01 == pFVar1) {
      *(undefined8 *)this_00 = 0;
      local_res8 = (UObject *)0x0;
      FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_res8);
      return (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)this_00;
    }
    pUVar5 = (UObject *)0x0;
    if (this_01->Handle != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_UDS_ItemData_NoRegister();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)this_01,pUVar4);
      if (bVar3) {
        pUVar5 = this_01->Handle;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_res8 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_res8);
    bVar3 = FWeakObjectPtr::IsValid(&local_res20);
    if ((bVar3) &&
       (pUVar5 = FWeakObjectPtr::Get(&local_res20), *(int *)&pUVar5[8].field_0x10 == in_R8D)) break;
    this_01 = this_01 + 1;
  }
  *(FWeakObjectPtr *)this_00 = local_res20;
  return (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)this_00;
}

// GetItemDataByUID @ 14baac0b0

TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> __thiscall
UDS_ItemDataSet::GetItemDataByUID(UDS_ItemDataSet *this,ulong64 param_1)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  FWeakObjectPtr local_res20;
  UObject *local_18 [2];
  
  UDS_DataSetBase::GetData((UDS_DataSetBase *)this,(ulong64)&local_res20);
  bVar2 = TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar2) {
    *(undefined8 *)param_1 = 0;
    local_18[0] = (UObject *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
    return (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res20);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_ItemData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14baac11a;
  }
  pUVar3 = (UObject *)0x0;
LAB_14baac11a:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(undefined8 *)param_1 = 0;
  local_18[0] = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  return (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetItemDataList @ 14baac1a0

TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_ItemDataSet::GetItemDataList
          (UDS_ItemDataSet *this,
          TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,EDS_InventoryType param_1)

{
  <lambda_1> local_res18 [16];
  
  GetItemDataList(this,__return_storage_ptr__);
  local_res18[0].InventoryType = param_1;
  TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
  RemoveAll<_UDS_ItemDataSet::GetItemDataList_::__l2::<lambda_1>_>
            (__return_storage_ptr__,local_res18);
  return __return_storage_ptr__;
}

// GetItemDataList @ 14baac1e0

TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_ItemDataSet::GetItemDataList
          (UDS_ItemDataSet *this,
          TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FObjectPtr_u_0 *pFVar1;
  int iVar2;
  FWeakObjectPtr *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar8;
  UObject *pUVar9;
  FObjectPtr_u_0 *this_00;
  undefined1 local_res8 [8];
  UObject *local_res10;
  FWeakObjectPtr local_48 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = (FObjectPtr_u_0 *)this->_padding_;
  iVar2 = (int)this->_padding_;
  pFVar1 = this_00 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UDS_DataBase>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar1) break;
    pUVar9 = (UObject *)0x0;
    if (this_00->Handle != (UObject *)0x0) {
      pUVar7 = Z_Construct_UClass_UDS_ItemData_NoRegister();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar7);
      if (bVar5) {
        pUVar9 = this_00->Handle;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    local_48[0].ObjectIndex = 0;
    local_48[0].ObjectSerialNumber = 0;
    local_res10 = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    FWeakObjectPtr::operator=(local_48,(FObjectPtr)&local_res10);
    bVar5 = FWeakObjectPtr::IsValid(local_48);
    if (bVar5) {
      pFVar3 = (FWeakObjectPtr *)(__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar3 <= local_48) && (local_48 < pFVar3 + __return_storage_ptr__->ArrayMax)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar4)();
        return pTVar8;
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      *(FWeakObjectPtr *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
           local_48[0];
    }
    this_00 = this_00 + 1;
  }
  return __return_storage_ptr__;
}

// GetItemTypeSymbol @ 14baac800

TWeakPtr<FDS_ItemTypeSymbolData,1> * __thiscall
UDS_ItemDataSet::GetItemTypeSymbol
          (UDS_ItemDataSet *this,TWeakPtr<FDS_ItemTypeSymbolData,1> *__return_storage_ptr__,
          EDS_ItemType param_1)

{
  TMap<EDS_ItemType,TWeakPtr<FDS_ItemTypeSymbolData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ItemType,TWeakPtr<FDS_ItemTypeSymbolData,1>,0>_>
  *this_00;
  TReferenceControllerBase<1> *pTVar1;
  int iVar2;
  TWeakPtr<FDS_ItemTypeSymbolData,1> *pTVar3;
  undefined1 *puVar4;
  
  this_00 = &this->ItemTypeSymbolMap;
  if (*(int *)&(this->ItemTypeSymbolMap).field_0x8 != *(int *)&(this->ItemTypeSymbolMap).field_0x34)
  {
    puVar4 = *(undefined1 **)&(this->ItemTypeSymbolMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ItemTypeSymbolMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->ItemTypeSymbolMap).field_0x48 + ~None & param_1) * 4)
    ;
    if (iVar2 != -1) {
      do {
        if (*(EDS_ItemType *)((longlong)iVar2 * 0x20 + *(longlong *)this_00) == param_1) {
          pTVar3 = TMapBase<enum_EDS_ItemType,TWeakPtr<FDS_ItemTypeSymbolData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemType,TWeakPtr<FDS_ItemTypeSymbolData,1>,0>_>
                   ::FindChecked(this_00,param_1);
          if (((pTVar3->Object != (FDS_ItemTypeSymbolData *)0x0) &&
              (pTVar1 = (pTVar3->WeakReferenceCount).ReferenceController,
              pTVar1 != (TReferenceControllerBase<1> *)0x0)) &&
             (0 < (int)pTVar1->SharedReferenceCount)) {
            pTVar3 = TMapBase<enum_EDS_ItemType,TWeakPtr<FDS_ItemTypeSymbolData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemType,TWeakPtr<FDS_ItemTypeSymbolData,1>,0>_>
                     ::FindChecked(this_00,param_1);
            __return_storage_ptr__->Object = pTVar3->Object;
            pTVar1 = (pTVar3->WeakReferenceCount).ReferenceController;
            (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar1;
            if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
              return __return_storage_ptr__;
            }
            LOCK();
            pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
            UNLOCK();
            return __return_storage_ptr__;
          }
          break;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 + *(longlong *)this_00);
      } while (iVar2 != -1);
    }
  }
  __return_storage_ptr__->Object = (FDS_ItemTypeSymbolData *)0x0;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetUsedInventorySlotCount @ 14bab1220

int __thiscall
UDS_ItemDataSet::GetUsedInventorySlotCount(UDS_ItemDataSet *this,EDS_InventoryType param_1)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->UsedInventorySlotCount).field_0x8 !=
      *(int *)&(this->UsedInventorySlotCount).field_0x34) {
    puVar4 = *(undefined1 **)&(this->UsedInventorySlotCount).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->UsedInventorySlotCount).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + ((ulonglong)(*(int *)&(this->UsedInventorySlotCount).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->UsedInventorySlotCount;
      do {
        if (*(EDS_InventoryType *)(lVar1 + (longlong)iVar2 * 0x10) == param_1) {
          piVar3 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                   ::FindChecked(&this->UsedInventorySlotCount,param_1);
          return *piVar3;
        }
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  return 0;
}

// HasDataByItemType @ 14bab2480

bool __thiscall UDS_ItemDataSet::HasDataByItemType(UDS_ItemDataSet *this,EDS_ItemType param_1)

{
  FObjectPtr_u_0 *pFVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FObjectPtr_u_0 *this_00;
  UObject *local_res8;
  FWeakObjectPtr local_res18;
  
  this_00 = (FObjectPtr_u_0 *)this->_padding_;
  iVar2 = (int)this->_padding_;
  pFVar1 = this_00 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_DataBase>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (this_00 == pFVar1) {
      return false;
    }
    pUVar5 = (UObject *)0x0;
    if (this_00->Handle != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_UDS_ItemData_NoRegister();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
      if (bVar3) {
        pUVar5 = this_00->Handle;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_res8 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res8);
    bVar3 = FWeakObjectPtr::IsValid(&local_res18);
    if ((bVar3) &&
       (pUVar5 = FWeakObjectPtr::Get(&local_res18),
       *(EDS_ItemType *)&pUVar5[0x13].field_0x20 == param_1)) break;
    this_00 = this_00 + 1;
  }
  return true;
}

// HasNewSymbolAllItem @ 14bab27a0

bool __thiscall UDS_ItemDataSet::HasNewSymbolAllItem(UDS_ItemDataSet *this)

{
  FObjectPtr_u_0 *pFVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FObjectPtr_u_0 *this_00;
  UObject *local_res8;
  FWeakObjectPtr local_res10;
  
  this_00 = (FObjectPtr_u_0 *)this->_padding_;
  iVar2 = (int)this->_padding_;
  pFVar1 = this_00 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_DataBase>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (this_00 == pFVar1) {
      return false;
    }
    pUVar5 = (UObject *)0x0;
    if (this_00->Handle != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_UDS_ItemData_NoRegister();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
      if (bVar3) {
        pUVar5 = this_00->Handle;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res8 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res8);
    bVar3 = FWeakObjectPtr::IsValid(&local_res10);
    if ((bVar3) &&
       (pUVar5 = FWeakObjectPtr::Get(&local_res10), *(longlong *)&pUVar5[0x19].field_0x20 != 0))
    break;
    this_00 = this_00 + 1;
  }
  return true;
}

// IsActionCooltimeInProgress @ 14bab6a30

bool __thiscall UDS_ItemDataSet::IsActionCooltimeInProgress(UDS_ItemDataSet *this)

{
  return 0.0 < this->ActionCooltime;
}

// IsCooltimeInProgress @ 14bab7730

bool __thiscall UDS_ItemDataSet::IsCooltimeInProgress(UDS_ItemDataSet *this,int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (*(int *)&(this->ItemCooltimeData).field_0x8 != *(int *)&(this->ItemCooltimeData).field_0x34) {
    puVar2 = *(undefined1 **)&(this->ItemCooltimeData).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->ItemCooltimeData).field_0x38;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)
                              (*(int *)&(this->ItemCooltimeData).field_0x48 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->ItemCooltimeData + (longlong)iVar1 * 0x14) == param_1)
        goto LAB_14bab778f;
        iVar1 = *(int *)(*(longlong *)&this->ItemCooltimeData + 0xc + (longlong)iVar1 * 0x14);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_14bab778f:
  return iVar1 != -1;
}

// IsEquippedItemByTID @ 14bab85a0

bool __thiscall UDS_ItemDataSet::IsEquippedItemByTID(UDS_ItemDataSet *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EquipmentItemCharacter).Object == (FDS_EquipmentItemCharacterData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = FDS_EquipmentItemCharacterData::IsEquippedByTID
                    ((this->EquipmentItemCharacter).Object,param_1);
  return bVar2;
}

// IsEquippedItemByUID @ 14bab8600

bool __thiscall UDS_ItemDataSet::IsEquippedItemByUID(UDS_ItemDataSet *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EquipmentItemCharacter).Object == (FDS_EquipmentItemCharacterData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = FDS_EquipmentItemCharacterData::IsEquippedByUID
                    ((this->EquipmentItemCharacter).Object,param_1);
  return bVar2;
}

// LoadEquipmentItemData @ 14babb4d0

void __thiscall
UDS_ItemDataSet::LoadEquipmentItemData(UDS_ItemDataSet *this,SqlItemEquipmentTable *param_1)

{
  long64 lVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  UDS_ItemData *pUVar5;
  UObject *pUVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  FWeakObjectPtr local_res8;
  FName local_res10;
  FName local_res18;
  code *local_48;
  undefined8 uStack_40;
  code *local_38;
  ulonglong uStack_30;
  
  lVar1 = (param_1->_impl_).item_uid_;
  uVar4 = UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
  UDS_ItemData::GetData((ulong64)&local_res8,uVar4,SUB81(lVar1,0));
  pUVar5 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res8);
  UDS_ItemData::UpdateEquipmentItemData(pUVar5,param_1);
  pUVar6 = FWeakObjectPtr::Get(&local_res8);
  pcVar7 = strstr("&UDS_ItemDataSet::OnChangedNewSymbol","::");
  pcVar9 = &DAT_00000002;
  if (pcVar7 == (char *)0x0) {
LAB_14babb57a:
    pcVar8 = &DAT_00000002;
LAB_14babb57d:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    do {
      pcVar8 = pcVar7;
      pcVar7 = strstr(pcVar8 + 1,"::");
    } while (pcVar7 != (char *)0x0);
    if (pcVar8 == (char *)0x0) goto LAB_14babb57a;
    pcVar8 = pcVar8 + 2;
    if (*pcVar8 == '0') goto LAB_14babb57d;
  }
  ::FName::FName(&local_res10,pcVar8);
  uStack_40 = (ulonglong)uStack_40._4_4_ << 0x20;
  local_48 = OnChangedNewSymbol;
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,bool_const_>::
  __Internal_AddUniqueDynamic<UDS_ItemDataSet>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,bool_const_> *)
             &pUVar6[7].field_0x18,this,(pmf_7dbc5f51 *)&local_48,local_res10);
  pUVar6 = FWeakObjectPtr::Get(&local_res8);
  pcVar7 = strstr("&UDS_ItemDataSet::OnChangedIsEquipped","::");
  if (pcVar7 != (char *)0x0) {
    do {
      pcVar8 = pcVar7;
      pcVar7 = strstr(pcVar8 + 1,"::");
    } while (pcVar7 != (char *)0x0);
    if ((pcVar8 != (char *)0x0) && (pcVar9 = pcVar8 + 2, pcVar8[2] != '0')) goto LAB_14babb679;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14babb679:
  ::FName::FName(&local_res18,pcVar9);
  local_48 = OnChangedIsEquipped;
  uStack_40 = uStack_40 & 0xffffffff00000000;
  local_38 = OnChangedIsEquipped;
  uStack_30 = uStack_40;
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,bool_const_>::
  __Internal_AddUniqueDynamic<UDS_ItemDataSet>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,bool_const_> *)
             (pUVar6 + 4),this,(pmf_7dbc5f51 *)&local_38,local_res18);
  pUVar5 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res8);
  UDS_ItemData::SetNewSymbol(pUVar5,false);
  this->InventoryUpdateEntry = this->InventoryUpdateEntry | Add;
  return;
}

// LoadStackableItemData @ 14babb700

void __thiscall
UDS_ItemDataSet::LoadStackableItemData(UDS_ItemDataSet *this,SqlItemStackableTable *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  UDS_ItemData *pUVar5;
  UObject *pUVar6;
  char *pcVar7;
  char *pcVar8;
  FWeakObjectPtr local_res8;
  FName local_res10;
  code *local_28;
  undefined8 uStack_20;
  
  iVar1 = (param_1->_impl_).item_id_;
  uVar4 = UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
  UDS_ItemData::GetData((ulong64)&local_res8,uVar4,SUB41(iVar1,0));
  pUVar5 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res8);
  UDS_ItemData::UpdateStackableItemData(pUVar5,param_1);
  pUVar6 = FWeakObjectPtr::Get(&local_res8);
  pcVar7 = strstr("&UDS_ItemDataSet::OnChangedNewSymbol","::");
  if (pcVar7 == (char *)0x0) {
LAB_14babb79c:
    pcVar8 = &DAT_00000002;
  }
  else {
    do {
      pcVar8 = pcVar7;
      pcVar7 = strstr(pcVar8 + 1,"::");
    } while (pcVar7 != (char *)0x0);
    if (pcVar8 == (char *)0x0) goto LAB_14babb79c;
    pcVar8 = pcVar8 + 2;
    if (*pcVar8 != '0') goto LAB_14babb7cf;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14babb7cf:
  ::FName::FName(&local_res10,pcVar8);
  uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
  local_28 = OnChangedNewSymbol;
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,bool_const_>::
  __Internal_AddUniqueDynamic<UDS_ItemDataSet>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,bool_const_> *)
             &pUVar6[7].field_0x18,this,(pmf_7dbc5f51 *)&local_28,local_res10);
  pUVar5 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res8);
  UDS_ItemData::SetNewSymbol(pUVar5,false);
  this->InventoryUpdateEntry = this->InventoryUpdateEntry | Add;
  return;
}

// OnAdded @ 14babc410

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_ItemDataSet::OnAdded(UDS_ItemDataSet *this)

{
  longlong *plVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  undefined1 *puVar4;
  longlong lVar5;
  code *pcVar6;
  UDS_ItemDataSet *pUVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  UClass *pUVar11;
  int *piVar12;
  UObject *pUVar13;
  char *pcVar14;
  UObject *this_00;
  UFunction *pUVar15;
  UDS_DataSetBase *pUVar16;
  ulonglong uVar17;
  ForElementType<FSetElementId> FVar18;
  uint uVar19;
  undefined1 *puVar20;
  UDS_ItemData *this_01;
  FName FVar21;
  char *pcVar22;
  ForAnyElementType FVar23;
  FName FVar24;
  uint uVar25;
  ulonglong uVar26;
  uint *puVar27;
  UDS_ItemDataSet *local_res8;
  undefined1 local_res10 [8];
  EDS_InventoryType local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_1b8 [8];
  FName local_1b0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1a8;
  FWeakObjectPtr local_1a0;
  FName local_198;
  FWeakObjectPtr local_190;
  uint local_188;
  UDS_ItemDataSet *local_180;
  FName local_178;
  FName *local_170;
  TArray<FDS_InventoryBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_168;
  TArray<FDS_InventoryTabTableRow_const_*,TSizedDefaultAllocator<32>_> local_158;
  longlong *local_148;
  undefined1 auStack_140 [16];
  uint uStack_130;
  uint uStack_12c;
  longlong local_128;
  TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataBase>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>,FDefaultSetAllocator>
  *pTStack_120;
  TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataBase>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>,FDefaultSetAllocator>
  *local_118;
  undefined2 local_110;
  undefined4 local_108;
  undefined1 local_104 [12];
  EDS_InventoryType *local_f8;
  longlong local_f0;
  FSparseArrayAllocationInfo local_e8;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_d8;
  FDestructionSentinel local_c8;
  FReadAccessScope local_b0;
  FReadAccessScope local_98;
  undefined1 local_80 [32];
  longlong local_60;
  TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataBase>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>,FDefaultSetAllocator>
  *pTStack_58;
  
  local_res8 = this;
  (**(code **)(this->_padding_ + 0x2c0))();
  CreateItemCharacterData(this);
  plVar1 = &this->_padding_;
  TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataBase>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_80,
             (TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataBase>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>,FDefaultSetAllocator>
              *)plVar1);
  local_110 = 0;
  stack0xfffffffffffffec8 = local_80._16_16_;
  local_148 = (longlong *)local_80._0_8_;
  auStack_140._0_8_ = local_80._8_8_;
  local_128 = local_60;
  pTStack_120 = pTStack_58;
  uVar17 = local_80._24_8_ >> 0x20;
  local_118 = (TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataBase>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>,FDefaultSetAllocator>
               *)plVar1;
  if ((int)local_80._28_4_ < *(int *)(local_80._16_8_ + 0x18)) {
    uVar26 = (ulonglong)local_80._28_4_;
    do {
      lVar2 = *local_148 + (longlong)(int)uVar17 * 0x18;
      this_01 = (UDS_ItemData *)0x0;
      if (*(longlong *)(*local_148 + 8 + (longlong)(int)uVar26 * 0x18) != 0) {
        pUVar11 = Z_Construct_UClass_UDS_ItemData_NoRegister();
        bVar8 = FObjectPtr::IsA((FObjectPtr *)(lVar2 + 8),pUVar11);
        if (bVar8) {
          this_01 = *(UDS_ItemData **)(lVar2 + 8);
        }
      }
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this_01 != (UDS_ItemData *)0x0) goto LAB_14babc4fb;
      }
      else if (this_01 != (UDS_ItemData *)0x0) {
        UE::GC::MarkAsReachable((UObject *)this_01);
LAB_14babc4fb:
        UDS_ItemData::IniItemTableData(this_01);
      }
      uStack_130 = uStack_130 & ~auStack_140._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_140);
      uVar17 = (ulonglong)uStack_12c;
      uVar26 = uVar17;
    } while ((int)uStack_12c < *(int *)(auStack_140._8_8_ + 0x18));
    if (((char)local_110 != '\0') && (local_110._1_1_ != '\0')) {
      uVar25 = *(int *)&(local_118->Elements).field_0x8 - *(int *)&(local_118->Elements).field_0x34;
      if (uVar25 < 4) {
        iVar9 = 1;
      }
      else {
        uVar17 = (ulonglong)((uVar25 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        local_108 = (undefined4)lVar2;
        iVar9 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar25) && (local_118->HashSize < iVar9)) || (iVar9 < local_118->HashSize)) {
        local_118->HashSize = iVar9;
        TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataBase>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>,FDefaultSetAllocator>
        ::Rehash(local_118);
      }
    }
  }
  FDS_InventoryBaseTableRow::GetAll(&local_168);
  iVar9 = local_168.ArrayNum;
  pFVar3 = local_168.AllocatorInstance.Data + (longlong)iVar9 * 8;
  FVar23.Data = local_168.AllocatorInstance.Data;
LAB_14babc5a0:
  do {
    if (local_168.ArrayNum != iVar9) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FDS_InventoryBaseTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (FVar23.Data == pFVar3) {
      if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.AllocatorInstance.Data);
      }
      if (NewSymbolIgnoreItemType.Elements._8_4_ != NewSymbolIgnoreItemType.Elements._52_4_) {
        TSet<enum_EDS_ItemType,DefaultKeyFuncs<enum_EDS_ItemType,0>,FDefaultSetAllocator>::
        UnhashElements(&NewSymbolIgnoreItemType);
        NewSymbolIgnoreItemType.Elements._8_4_ = 0;
        if ((int)NewSymbolIgnoreItemType.Elements._12_4_ < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,(ForAnyElementType *)&NewSymbolIgnoreItemType,0,
                     (int *)&NewSymbolIgnoreItemType.Elements.field_0xc);
        }
        NewSymbolIgnoreItemType.Elements._48_4_ = 0xffffffff;
        NewSymbolIgnoreItemType.Elements._52_4_ = 0;
        NewSymbolIgnoreItemType.Elements._40_4_ = 0;
      }
      FDS_InventoryTabTableRow::GetAll(&local_158);
      uVar17 = (ulonglong)local_158.ArrayNum;
      local_188 = local_158.ArrayNum;
      FVar21 = (FName)((longlong)local_158.AllocatorInstance.Data + uVar17 * 8);
      FVar24 = (FName)local_158.AllocatorInstance;
      local_178 = FVar21;
      while( true ) {
        local_1b0 = FVar24;
        if (local_158.ArrayNum != (uint)uVar17) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FDS_InventoryTabTableRow_const_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if (FVar24 == FVar21) break;
        lVar2 = *(longlong *)FVar24;
        if ((lVar2 != 0) && (*(char *)(lVar2 + 0x10) == '\x02')) {
          puVar27 = *(uint **)(lVar2 + 0x38);
          iVar9 = *(int *)(lVar2 + 0x40);
          local_180 = (UDS_ItemDataSet *)(puVar27 + iVar9);
          while( true ) {
            pUVar7 = local_180;
            if (*(int *)(lVar2 + 0x40) != iVar9) {
              local_1b8[0] = 0;
              `TCheckedPointerIterator<enum_EDS_ItemType_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_1b8);
            }
            iVar10 = NewSymbolIgnoreItemType.Elements._48_4_;
            FVar21 = local_178;
            FVar24 = local_1b0;
            if ((UDS_ItemDataSet *)puVar27 == pUVar7) break;
            if (NewSymbolIgnoreItemType.Elements._52_4_ == 0) {
              iVar10 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0xc,4,1,(ForAnyElementType *)&NewSymbolIgnoreItemType,
                                  (int *)&NewSymbolIgnoreItemType.Elements.field_0x8,
                                  (int *)&NewSymbolIgnoreItemType.Elements.field_0xc);
              TBitArray<FDefaultBitArrayAllocator>::Add
                        ((TBitArray<FDefaultBitArrayAllocator> *)
                         &NewSymbolIgnoreItemType.Elements.field_0x10,false);
            }
            else {
              NewSymbolIgnoreItemType.Elements._52_4_ = NewSymbolIgnoreItemType.Elements._52_4_ + -1
              ;
              NewSymbolIgnoreItemType.Elements._48_4_ =
                   *(int *)(NewSymbolIgnoreItemType.Elements._0_8_ + 4 +
                           (longlong)(int)NewSymbolIgnoreItemType.Elements._48_4_ * 0xc);
              if (NewSymbolIgnoreItemType.Elements._52_4_ != 0) {
                *(undefined4 *)
                 (NewSymbolIgnoreItemType.Elements._0_8_ +
                 (longlong)(int)NewSymbolIgnoreItemType.Elements._48_4_ * 0xc) = 0xffffffff;
              }
            }
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)&NewSymbolIgnoreItemType,&local_e8,iVar10);
            if (local_e8.Pointer != (uint *)0x0) {
              *(uint *)local_e8.Pointer = *puVar27;
              *(uint *)((longlong)local_e8.Pointer + 4) = 0xffffffff;
            }
            uVar25 = *(uint *)local_e8.Pointer;
            if ((NewSymbolIgnoreItemType.Elements._8_4_ - NewSymbolIgnoreItemType.Elements._52_4_ !=
                 1) && (NewSymbolIgnoreItemType.Elements._8_4_ !=
                        NewSymbolIgnoreItemType.Elements._52_4_)) {
              FVar18 = (ForElementType<FSetElementId>)0x154cf74c8;
              if (NewSymbolIgnoreItemType.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0)
              {
                FVar18 = NewSymbolIgnoreItemType.Hash.SecondaryData;
              }
              for (iVar10 = *(int *)((longlong)FVar18 +
                                    (ulonglong)(NewSymbolIgnoreItemType.HashSize - 1U & uVar25) * 4)
                  ; iVar10 != -1;
                  iVar10 = *(int *)(NewSymbolIgnoreItemType.Elements._0_8_ + 4 +
                                   (longlong)iVar10 * 0xc)) {
                if (*(uint *)(NewSymbolIgnoreItemType.Elements._0_8_ + (longlong)iVar10 * 0xc) ==
                    uVar25) {
                  if (iVar10 != -1) {
                    *(uint *)(NewSymbolIgnoreItemType.Elements._0_8_ + (longlong)iVar10 * 0xc) =
                         uVar25;
                    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::RemoveAtUninitialized
                              ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                *)&NewSymbolIgnoreItemType,local_e8.Index,1);
                    goto LAB_14babc9f8;
                  }
                  break;
                }
              }
            }
            uVar19 = NewSymbolIgnoreItemType.Elements._8_4_ -
                     NewSymbolIgnoreItemType.Elements._52_4_;
            if (uVar19 < 4) {
              iVar10 = 1;
            }
            else {
              uVar17 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
              lVar5 = 0x3f;
              if (uVar17 != 0) {
                for (; uVar17 >> lVar5 == 0; lVar5 = lVar5 + -1) {
                }
              }
              local_104._4_4_ = (undefined4)lVar5;
              iVar10 = 1 << ((byte)lVar5 & 0x1f);
            }
            if (((int)uVar19 < 1) || (iVar10 <= NewSymbolIgnoreItemType.HashSize)) {
              uVar25 = NewSymbolIgnoreItemType.HashSize - 1U & uVar25;
              *(uint *)((longlong)local_e8.Pointer + 8) = uVar25;
              FVar18 = (ForElementType<FSetElementId>)0x154cf74c8;
              if (NewSymbolIgnoreItemType.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0)
              {
                FVar18 = NewSymbolIgnoreItemType.Hash.SecondaryData;
              }
              uVar17 = (longlong)NewSymbolIgnoreItemType.HashSize - 1U & (longlong)(int)uVar25;
              *(uint *)((longlong)local_e8.Pointer + 4) = *(uint *)((longlong)FVar18 + uVar17 * 4);
              *(int *)((longlong)FVar18 + uVar17 * 4) = local_e8.Index;
            }
            else {
              NewSymbolIgnoreItemType.HashSize = iVar10;
              TSet<enum_EDS_ItemType,DefaultKeyFuncs<enum_EDS_ItemType,0>,FDefaultSetAllocator>::
              Rehash(&NewSymbolIgnoreItemType);
            }
LAB_14babc9f8:
            puVar27 = puVar27 + 1;
          }
        }
        uVar17 = (ulonglong)local_188;
        FVar24 = (FName)((longlong)FVar24 + 8);
      }
      if ((FName)local_158.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_158.AllocatorInstance.Data);
      }
      TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)&local_190);
      bVar8 = FWeakObjectPtr::IsValid(&local_190);
      if (!bVar8) {
        return;
      }
      pUVar13 = FWeakObjectPtr::Get(&local_190);
      pUVar7 = local_res8;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar13 + 1),
                 (UObject *)local_res8);
      pUVar13 = FWeakObjectPtr::Get(&local_190);
      pcVar14 = strstr("&UDS_ItemDataSet::UpdateDefaultMountInventorySlotCount","::");
      if (pcVar14 == (char *)0x0) {
LAB_14babcadd:
        pcVar22 = &DAT_00000002;
LAB_14babcae2:
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result && Result[2] != \'0\'",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                           ,0x1da,L"\'%hs\' does not look like a member function");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        do {
          pcVar22 = pcVar14;
          pcVar14 = strstr(pcVar22 + 1,"::");
        } while (pcVar14 != (char *)0x0);
        if (pcVar22 == (char *)0x0) goto LAB_14babcadd;
        pcVar22 = pcVar22 + 2;
        if (*pcVar22 == '0') goto LAB_14babcae2;
      }
      ::FName::FName(&local_178,pcVar22);
      local_1b0 = local_178;
      local_1a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_1a0.ObjectIndex = 0;
      local_1a0.ObjectSerialNumber = 0;
      local_198.ComparisonIndex.Value = 0;
      local_198.Number = 0;
      local_180 = pUVar7;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UDS_ItemDataSet *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      FWeakObjectPtr::operator=(&local_1a0,(FObjectPtr)&local_180);
      local_198 = local_1b0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_1a8,&local_b0);
      if ((local_198 == (FName)0x0) ||
         (this_00 = FWeakObjectPtr::Get(&local_1a0), this_00 == (UObject *)0x0)) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_b0);
      }
      else {
        pUVar15 = UObject::FindFunction(this_00,local_198);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_b0);
        if (pUVar15 != (UFunction *)0x0) goto LAB_14babcbcd;
      }
      local_170 = &local_1b0;
      `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
      __Internal_BindDynamic<UDS_ItemDataSet>'::__l2::<lambda_1>::operator()(&local_170);
LAB_14babcbcd:
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_1a8,&local_98);
      local_d8.Object = local_1a0;
      local_d8.FunctionName = local_198;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_98);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar13 + 1),
                 (FWriteAccessScope *)&local_c8);
      TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
      RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
                ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
                  *)&pUVar13[1].field_0x8,(<lambda_1> *)&local_res8,Default);
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar13 + 1),&local_d8);
      if (local_c8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1a8.AccessDetector);
      pUVar16 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_190);
      UpdateDefaultMountInventorySlotCount(pUVar7,pUVar16);
      return;
    }
    lVar2 = *(longlong *)FVar23.Data;
    if (lVar2 == 0) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2839815002972486489>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Item\\DS_ItemData.cpp"
                         ,0x4a7,"false");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (local_168.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_168.AllocatorInstance.Data);
      return;
    }
    local_res18[0] = *(EDS_InventoryType *)(lVar2 + 0x10);
    if (*(int *)&(this->DefaultInventorySlotCount).field_0x8 !=
        *(int *)&(this->DefaultInventorySlotCount).field_0x34) {
      puVar4 = *(undefined1 **)&(this->DefaultInventorySlotCount).field_0x40;
      puVar20 = &(this->DefaultInventorySlotCount).field_0x38;
      if (puVar4 != (undefined1 *)0x0) {
        puVar20 = puVar4;
      }
      iVar10 = *(int *)(puVar20 +
                       ((ulonglong)(*(int *)&(this->DefaultInventorySlotCount).field_0x48 - 1) &
                       (ulonglong)local_res18[0]) * 4);
      if (iVar10 != -1) {
        do {
          if (*(EDS_InventoryType *)
               (*(longlong *)&this->DefaultInventorySlotCount + (longlong)iVar10 * 0x10) ==
              local_res18[0]) {
            if (iVar10 != -1) {
              iVar10 = *(int *)(lVar2 + 0x14);
              piVar12 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                        ::FindChecked(&this->DefaultInventorySlotCount,local_res18[0]);
              FVar23.Data = FVar23.Data + 8;
              *piVar12 = iVar10;
              goto LAB_14babc5a0;
            }
            break;
          }
          iVar10 = *(int *)(*(longlong *)&this->DefaultInventorySlotCount + 8 +
                           (longlong)iVar10 * 0x10);
        } while (iVar10 != -1);
      }
    }
    local_f0 = lVar2 + 0x14;
    local_f8 = local_res18;
    TSet<TTuple<enum_EDS_InventoryType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_InventoryType_const_&,int_const_&>_>
              (&this->DefaultInventorySlotCount,
               (TPairInitializer<EDS_InventoryType_const_&,int_const_&> *)local_104,
               (bool *)&local_f8);
    FVar23.Data = FVar23.Data + 8;
  } while( true );
}

// OnChangedIsEquipped @ 14babe760

void __thiscall UDS_ItemDataSet::OnChangedIsEquipped(UDS_ItemDataSet *this,bool param_1)

{
  FDS_DataPropertyDelegate_bool_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnChanged_IsEquipped,
             param_1);
  return;
}

// OnChangedNewSymbol @ 14babe8a0

void __thiscall UDS_ItemDataSet::OnChangedNewSymbol(UDS_ItemDataSet *this,bool param_1)

{
  FDS_DataPropertyDelegate_bool_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnChanged_ItemNewSymbol,
             param_1);
  return;
}

// OnDirtyBroadcast @ 14babf490

void __thiscall UDS_ItemDataSet::OnDirtyBroadcast(UDS_ItemDataSet *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  EDS_InventoryUpdate EVar9;
  uint uVar10;
  longlong lVar11;
  FDestructionSentinel local_38;
  
  EVar9 = this->InventoryUpdateEntry;
  if ((EVar9 & Add) != None) {
    EVar9 = EVar9 | (Slot|Wieght);
    this->InventoryUpdateEntry = EVar9;
  }
  if ((EVar9 & Remove) != None) {
    EVar9 = EVar9 | (Slot|Wieght);
    this->InventoryUpdateEntry = EVar9;
  }
  if ((EVar9 & Update) != None) {
    EVar9 = EVar9 | (Slot|Wieght);
    this->InventoryUpdateEntry = EVar9;
  }
  if ((EVar9 & Wieght) != None) {
    UpdateInventoryWeight(this);
  }
  if ((this->InventoryUpdateEntry & Slot) != None) {
    UpdateUsedInventorySlotCount(this);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnInventoryUpdate,
             (FWriteAccessScope *)&local_38);
  puVar1 = &(this->OnInventoryUpdate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar10 = *(int *)&(this->OnInventoryUpdate).field_0x10 - 1;
  if (-1 < (int)uVar10) {
    lVar11 = (longlong)(int)uVar10 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar10 < *(int *)&(this->OnInventoryUpdate).field_0x10) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnInventoryUpdate).field_0x8;
      if (((*(int *)(lVar11 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar11 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar11 = lVar11 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  puVar1 = &(this->OnInventoryUpdate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnInventoryUpdate,false)
    ;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  this->InventoryUpdateEntry = None;
  UDS_DataSetBase::OnDirtyBroadcast((UDS_DataSetBase *)this);
  return;
}

// RefreshEquipmentItemData @ 14bac3ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ItemDataSet::RefreshEquipmentItemData(UDS_ItemDataSet *this,SqlItemEquipmentTable *param_1)

{
  long64 lVar1;
  bool bVar2;
  ulong64 uVar3;
  UDS_LogManager *pUVar4;
  UDS_ItemData *this_00;
  UObject *pUVar5;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  lVar1 = (param_1->_impl_).item_uid_;
  uVar3 = UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
  UDS_ItemData::GetData((ulong64)local_148,uVar3,SUB81(lVar1,0));
  bVar2 = FWeakObjectPtr::IsValid(local_148);
  if (bVar2) {
    this_00 = (UDS_ItemData *)FWeakObjectPtr::Get(local_148);
    UDS_ItemData::UpdateEquipmentItemData(this_00,param_1);
    pUVar5 = FWeakObjectPtr::Get(local_148);
    if ((pUVar5[0x1a].field_0x8 & 8) != 0) {
      this->InventoryUpdateEntry = this->InventoryUpdateEntry | Durability;
    }
    this->InventoryUpdateEntry = this->InventoryUpdateEntry | Update;
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_ItemDataSet::RefreshEquipmentItemData",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x673,L"itemData is nullptr. (%ld)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// RefreshStackableItemData @ 14bac3c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ItemDataSet::RefreshStackableItemData(UDS_ItemDataSet *this,SqlItemStackableTable *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> this_00;
  UObject *pUVar4;
  UClass *pUVar5;
  UDS_LogManager *pUVar6;
  int *piVar7;
  int *piVar8;
  UDS_ItemData *pUVar9;
  undefined1 auStackY_1a8 [32];
  EDS_InventoryType local_168 [8];
  FWeakObjectPtr local_160;
  UObject *local_158;
  undefined1 local_150 [8];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  this_00 = UDS_DataSetBase::GetData((UDS_DataSetBase *)this,(ulong64)local_150);
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_ItemData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14bac3c6e;
  }
  pUVar4 = (UObject *)0x0;
LAB_14bac3c6e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_160.ObjectIndex = 0;
  local_160.ObjectSerialNumber = 0;
  local_158 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_160,(FObjectPtr)&local_158);
  bVar3 = FWeakObjectPtr::IsValid(&local_160);
  if (bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&local_160);
    local_168[0] = PlayerNormal;
    piVar7 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
             ::FindOrAddImpl<enum_EDS_InventoryType_const_&>(&pUVar4[10].field_0x18,1,local_168);
    piVar8 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
             ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                       (&pUVar4[8].field_0x18,(uint)local_168[0],local_168);
    iVar1 = *piVar7;
    iVar2 = *piVar8;
    pUVar9 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_160);
    UDS_ItemData::UpdateStackableItemData(pUVar9,param_1);
    pUVar4 = FWeakObjectPtr::Get(&local_160);
    local_168[0] = PlayerNormal;
    piVar7 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
             ::FindOrAddImpl<enum_EDS_InventoryType_const_&>(&pUVar4[10].field_0x18,1,local_168);
    piVar8 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
             ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                       (&pUVar4[8].field_0x18,(uint)local_168[0],local_168);
    if (iVar1 + iVar2 < *piVar7 + *piVar8) {
      pUVar9 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_160);
      UDS_ItemData::SetNewSymbol(pUVar9,true);
    }
    this->InventoryUpdateEntry = this->InventoryUpdateEntry | Update;
  }
  else {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_ItemDataSet::RefreshStackableItemData",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_148.Ptr,0x643,L"itemData is nullptr. (%d)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  return;
}

// RemoveItemData @ 14bac7dd0

void __thiscall UDS_ItemDataSet::RemoveItemData(UDS_ItemDataSet *this,ulong64 *param_1)

{
  UDS_DataSetBase::RemoveData((UDS_DataSetBase *)this,*param_1);
  this->InventoryUpdateEntry = this->InventoryUpdateEntry | Remove;
  return;
}

// SetItemTypeSymbolMap @ 14bacd240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ItemDataSet::SetItemTypeSymbolMap
          (UDS_ItemDataSet *this,TSharedPtr<FDS_ItemTypeSymbolData,1> *param_1)

{
  atomic<int> *paVar1;
  TMap<EDS_ItemType,TWeakPtr<FDS_ItemTypeSymbolData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ItemType,TWeakPtr<FDS_ItemTypeSymbolData,1>,0>_>
  *this_00;
  atomic<int> aVar2;
  FDS_ItemTypeSymbolData *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  UDS_LogManager *pUVar5;
  longlong lVar6;
  TWeakPtr<FDS_ItemTypeSymbolData,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined1 auStackY_1b8 [32];
  uint uVar11;
  wchar_t *pwVar12;
  EDS_ItemType local_188;
  undefined1 local_184 [20];
  EDS_ItemType *local_170;
  undefined1 *local_168;
  TWeakPtr<FDS_ItemTypeSymbolData,1> local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pFVar3 = param_1->Object;
  if (pFVar3 == (FDS_ItemTypeSymbolData *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_ItemDataSet::SetItemTypeSymbolMap",0x25,Yes);
      pwVar12 = L"InSymbolData is nullptr.";
      uVar11 = 0x7a0;
LAB_14bacd2c9:
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,uVar11,pwVar12);
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    local_188 = pFVar3->ItemType;
    this_00 = &this->ItemTypeSymbolMap;
    if (*(int *)&(this->ItemTypeSymbolMap).field_0x8 !=
        *(int *)&(this->ItemTypeSymbolMap).field_0x34) {
      puVar9 = *(undefined1 **)&(this->ItemTypeSymbolMap).field_0x40;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &(this->ItemTypeSymbolMap).field_0x38;
      }
      iVar10 = *(int *)(puVar9 + (ulonglong)
                                 (*(int *)&(this->ItemTypeSymbolMap).field_0x48 + ~None & local_188)
                                 * 4);
      if (iVar10 != -1) {
        do {
          if (*(EDS_ItemType *)((longlong)iVar10 * 0x20 + *(longlong *)this_00) == local_188) {
            if (iVar10 != -1) {
              pTVar7 = TMapBase<enum_EDS_ItemType,TWeakPtr<FDS_ItemTypeSymbolData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemType,TWeakPtr<FDS_ItemTypeSymbolData,1>,0>_>
                       ::FindChecked(this_00,local_188);
              if (((pTVar7->Object != (FDS_ItemTypeSymbolData *)0x0) &&
                  (pTVar8 = (pTVar7->WeakReferenceCount).ReferenceController,
                  pTVar8 != (TReferenceControllerBase<1> *)0x0)) &&
                 (0 < (int)pTVar8->SharedReferenceCount)) {
                pUVar5 = UDS_LogManager::GetInst();
                if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14bacd3c0;
                pUVar5 = UDS_LogManager::GetInst();
                local_148._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_148,"UDS_ItemDataSet::SetItemTypeSymbolMap",0x25,Yes);
                pwVar12 = L"InItemTypeSymbolData is valid. check please.";
                uVar11 = 0x7a9;
                goto LAB_14bacd2c9;
              }
              pTVar8 = (param_1->SharedReferenceCount).ReferenceController;
              pFVar3 = param_1->Object;
              if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
                UNLOCK();
              }
              pTVar7 = TMapBase<enum_EDS_ItemType,TWeakPtr<FDS_ItemTypeSymbolData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemType,TWeakPtr<FDS_ItemTypeSymbolData,1>,0>_>
                       ::FindChecked(this_00,local_188);
              if (pTVar7 != &local_160) {
                pTVar4 = (pTVar7->WeakReferenceCount).ReferenceController;
                (pTVar7->WeakReferenceCount).ReferenceController = pTVar8;
                pTVar7->Object = pFVar3;
                pTVar8 = pTVar4;
                goto LAB_14bacd3a1;
              }
              if (pTVar8 == (TReferenceControllerBase<1> *)0x0) goto LAB_14bacd3c0;
              LOCK();
              paVar1 = &pTVar8->WeakReferenceCount;
              aVar2 = *paVar1;
              *paVar1 = (atomic<int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar2 != (atomic<int>)0x1) goto LAB_14bacd3c0;
              lVar6 = pTVar8->_padding_;
              goto LAB_14bacd3b8;
            }
            break;
          }
          iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + *(longlong *)this_00);
        } while (iVar10 != -1);
      }
    }
    local_184._12_8_ = (param_1->SharedReferenceCount).ReferenceController;
    if ((TReferenceControllerBase<1> *)local_184._12_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_184._12_8_)->WeakReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_184._12_8_)->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_170 = &local_188;
    local_168 = local_184 + 4;
    local_184._4_8_ = pFVar3;
    TSet<TTuple<enum_EDS_ItemType,TWeakPtr<FDS_ItemTypeSymbolData,1>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemType,TWeakPtr<FDS_ItemTypeSymbolData,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_ItemType_&,TWeakPtr<FDS_ItemTypeSymbolData,1>_&&>_>
              (this_00,(TPairInitializer<EDS_ItemType_&,TWeakPtr<FDS_ItemTypeSymbolData,1>_&&> *)
                       local_184,(bool *)&local_170);
    pTVar8 = (TReferenceControllerBase<1> *)local_184._12_8_;
LAB_14bacd3a1:
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar8->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        lVar6 = pTVar8->_padding_;
LAB_14bacd3b8:
        (**(code **)(lVar6 + 8))(pTVar8,1);
      }
    }
  }
LAB_14bacd3c0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Update @ 14bad3d80

void __thiscall UDS_ItemDataSet::Update(UDS_ItemDataSet *this,float *param_1)

{
  EDS_InventoryUpdate *pEVar1;
  TMap<int,UDS_ItemDataSet::FDS_CooltimeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UDS_ItemDataSet::FDS_CooltimeData,0>_>
  *pTVar2;
  float *pfVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  float fVar9;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<int,UDS_ItemDataSet::FDS_CooltimeData>,TDefaultMapHashableKeyFuncs<int,UDS_ItemDataSet::FDS_CooltimeData,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<int,UDS_ItemDataSet::FDS_CooltimeData>,TDefaultMapHashableKeyFuncs<int,UDS_ItemDataSet::FDS_CooltimeData,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<int,UDS_ItemDataSet::FDS_CooltimeData>,TDefaultMapHashableKeyFuncs<int,UDS_ItemDataSet::FDS_CooltimeData,0>,FDefaultSetAllocator>
  *local_28;
  char local_20;
  char cStack_1f;
  
  pEVar1 = &this->InventoryUpdateEntry;
  bVar4 = false;
  if (0.0 < this->ActionCooltime) {
    fVar9 = this->ActionCooltime - *param_1;
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    this->ActionCooltime = fVar9;
    if (fVar9 <= 0.0) {
      FDS_DataSetDirtyDelegate_DelegateWrapper
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &this->OnFinishItemUseAction,(UDS_DataSetBase *)this);
      *pEVar1 = *pEVar1 | ActionFinish;
    }
    else {
      FDS_DataSetDirtyDelegate_DelegateWrapper
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &this->OnUpdateItemUseAction,(UDS_DataSetBase *)this);
      *pEVar1 = *pEVar1 | Action;
    }
    bVar4 = true;
  }
  pTVar2 = &this->ItemCooltimeData;
  TSet<TTuple<int,UDS_ItemDataSet::FDS_CooltimeData>,TDefaultMapHashableKeyFuncs<int,UDS_ItemDataSet::FDS_CooltimeData,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<int,UDS_ItemDataSet::FDS_CooltimeData>,TDefaultMapHashableKeyFuncs<int,UDS_ItemDataSet::FDS_CooltimeData,0>,FDefaultSetAllocator>
              *)pTVar2);
  local_20 = '\0';
  cStack_1f = '\0';
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar7 = local_88._24_8_ >> 0x20;
  local_28 = (TSet<TTuple<int,UDS_ItemDataSet::FDS_CooltimeData>,TDefaultMapHashableKeyFuncs<int,UDS_ItemDataSet::FDS_CooltimeData,0>,FDefaultSetAllocator>
              *)pTVar2;
  if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      lVar6 = (longlong)(int)uVar7;
      *(float *)(*local_58 + 8 + lVar6 * 0x14) = *(float *)(*local_58 + 8 + lVar6 * 0x14) - *param_1
      ;
      pfVar3 = (float *)(*local_58 + 8 + lVar6 * 0x14);
      if (0.0 < *pfVar3 || *pfVar3 == 0.0) {
        *pEVar1 = *pEVar1 | Cooltime;
      }
      else {
        TSet<TTuple<int,UDS_ItemDataSet::FDS_CooltimeData>,TDefaultMapHashableKeyFuncs<int,UDS_ItemDataSet::FDS_CooltimeData,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_30,(int)uVar7);
        *pEVar1 = *pEVar1 | CooltimeFinish;
        local_20 = '\x01';
      }
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar7 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if ((local_20 != '\0') && (cStack_1f != '\0')) {
      uVar8 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar5 = 1;
      }
      else {
        uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar6 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar6 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_28->HashSize < iVar5)) || (iVar5 < local_28->HashSize)) {
        local_28->HashSize = iVar5;
        TSet<TTuple<int,UDS_ItemDataSet::FDS_CooltimeData>,TDefaultMapHashableKeyFuncs<int,UDS_ItemDataSet::FDS_CooltimeData,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  else if (!bVar4) {
    return;
  }
  UDS_DataSetBase::SetIsDirty((UDS_DataSetBase *)this,true);
  return;
}

// UpdateData @ 14bad6ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ItemDataSet::UpdateData(UDS_ItemDataSet *this,DbWorkItem *param_1)

{
  TMap<EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_InventoryType,int,0>_>
  *this_00;
  uint uVar1;
  int iVar2;
  Message *pMVar3;
  SqlEquipmentTable *pSVar4;
  SqlItemEquipmentTable *pSVar5;
  long64 lVar6;
  code *pcVar7;
  bool bVar8;
  int *piVar9;
  ulong64 uVar10;
  UDS_LogManager *pUVar11;
  UDS_ItemData *this_01;
  UObject *pUVar12;
  undefined1 *puVar13;
  int iVar14;
  undefined1 auStackY_1b8 [32];
  EDS_InventoryType local_178 [4];
  int local_174;
  DirtyFlag local_170 [2];
  FWeakObjectPtr local_168;
  TPairInitializer<EDS_InventoryType_const_&,int_const_&> local_160;
  int *local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_170[0] = (param_1->_impl_).dirty_flag_;
  uVar1 = (param_1->_impl_)._oneof_case_[0];
  if (uVar1 == 10) {
    pSVar5 = (SqlItemEquipmentTable *)(param_1->_impl_).Item_.characterlevel_;
    if (local_170[0] == DirtyFlag_None) {
      LoadEquipmentItemData(this,pSVar5);
    }
    else {
      uVar10 = (pSVar5->_impl_).item_uid_;
      if (local_170[0] == DirtyFlag_Delete) {
        UDS_DataSetBase::RemoveData((UDS_DataSetBase *)this,uVar10);
        this->InventoryUpdateEntry = this->InventoryUpdateEntry | Remove;
      }
      else {
        bVar8 = UDS_DataSetBase::HasData((UDS_DataSetBase *)this,uVar10);
        if (bVar8) {
          lVar6 = (pSVar5->_impl_).item_uid_;
          uVar10 = UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
          UDS_ItemData::GetData((ulong64)&local_168,uVar10,SUB81(lVar6,0));
          bVar8 = FWeakObjectPtr::IsValid(&local_168);
          if (bVar8) {
            this_01 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_168);
            UDS_ItemData::UpdateEquipmentItemData(this_01,pSVar5);
            pUVar12 = FWeakObjectPtr::Get(&local_168);
            if ((pUVar12[0x1a].field_0x8 & 8) != 0) {
              this->InventoryUpdateEntry = this->InventoryUpdateEntry | Durability;
            }
            this->InventoryUpdateEntry = this->InventoryUpdateEntry | Update;
          }
          else {
            pUVar11 = UDS_LogManager::GetInst();
            if (pUVar11 != (UDS_LogManager *)0x0) {
              pUVar11 = UDS_LogManager::GetInst();
              local_148._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_148,"UDS_ItemDataSet::RefreshEquipmentItemData",0x29,Yes);
              UDS_LogManager::PrintLog
                        (pUVar11,1,Warning,local_148.Ptr,0x673,L"itemData is nullptr. (%ld)");
              if ((void *)local_148._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_148._padding_);
              }
            }
          }
        }
        else {
          AddEquipmentItemData(this,pSVar5);
        }
      }
    }
    UDS_DataSetBase::SetIsDirty((UDS_DataSetBase *)this,true);
  }
  else if (uVar1 == 0xb) {
    UpdateStackableItemData
              (this,(SqlItemStackableTable *)(param_1->_impl_).Item_.characterlevel_,local_170);
  }
  else if (uVar1 == 0xc) {
    pSVar4 = (SqlEquipmentTable *)(param_1->_impl_).Item_.characterlevel_;
    if ((this->EquipmentItemCharacter).Object == (FDS_EquipmentItemCharacterData *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    FDS_EquipmentItemCharacterData::UpdateEquipmentData
              ((this->EquipmentItemCharacter).Object,pSVar4);
    this->InventoryUpdateEntry = this->InventoryUpdateEntry | Update;
    UDS_DataSetBase::SetIsDirty((UDS_DataSetBase *)this,true);
  }
  else if (uVar1 == 0x52) {
    pMVar3 = (param_1->_impl_).Item_.characterlevel_;
    this_00 = &this->ExtendedInventorySlotCount;
    local_178[0] = *(EDS_InventoryType *)(pMVar3 + 2);
    iVar2 = *(int *)&pMVar3[2].field_0x4;
    local_174 = iVar2;
    if (*(int *)&(this->ExtendedInventorySlotCount).field_0x8 !=
        *(int *)&(this->ExtendedInventorySlotCount).field_0x34) {
      puVar13 = *(undefined1 **)&(this->ExtendedInventorySlotCount).field_0x40;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = &(this->ExtendedInventorySlotCount).field_0x38;
      }
      iVar14 = *(int *)(puVar13 +
                       ((ulonglong)(*(int *)&(this->ExtendedInventorySlotCount).field_0x48 - 1) &
                       (ulonglong)local_178[0]) * 4);
      if (iVar14 != -1) {
        do {
          if (*(EDS_InventoryType *)(*(longlong *)this_00 + (longlong)iVar14 * 0x10) == local_178[0]
             ) {
            if (iVar14 != -1) {
              piVar9 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                       ::FindChecked(this_00,local_178[0]);
              *piVar9 = iVar2;
              goto LAB_14bad6bb0;
            }
            break;
          }
          iVar14 = *(int *)(*(longlong *)this_00 + 8 + (longlong)iVar14 * 0x10);
        } while (iVar14 != -1);
      }
    }
    local_160.Value = (int *)local_178;
    local_150 = &local_174;
    TSet<TTuple<enum_EDS_InventoryType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_InventoryType_const_&,int_const_&>_>
              (this_00,&local_160,(bool *)&local_160.Value);
LAB_14bad6bb0:
    this->InventoryUpdateEntry = this->InventoryUpdateEntry | InventoryExtend;
    UDS_DataSetBase::SetIsDirty((UDS_DataSetBase *)this,true);
  }
  return;
}

// UpdateDefaultMountInventorySlotCount @ 14bad71f0

void __thiscall
UDS_ItemDataSet::UpdateDefaultMountInventorySlotCount
          (UDS_ItemDataSet *this,UDS_DataSetBase *param_1)

{
  TMap<EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_InventoryType,int,0>_>
  *pTVar1;
  ulonglong uVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  longlong lVar6;
  UObject *pUVar7;
  FDS_MountBaseTableRow *this_00;
  FObjectPtr_u_0 *this_01;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  UDS_DataSetBase *pUVar11;
  UDS_DataSetBase *local_res10;
  int local_res18 [2];
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  UDS_DataSetBase **local_30;
  
  if (param_1 != (UDS_DataSetBase *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_MountDataSet_NoRegister();
    pUVar11 = (UDS_DataSetBase *)0x0;
    iVar9 = (int)pUVar4->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar9) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar9 * 8)
        != &pUVar4->_padding_)) {
      param_1 = pUVar11;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_DataSetBase *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_38.ObjectIndex = 0;
    local_38.ObjectSerialNumber = 0;
    local_res10 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_DataSetBase *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_res10);
    bVar3 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)&local_38,(void *)0x0);
    if (!bVar3) {
      pUVar5 = FWeakObjectPtr::Get(&local_38);
      if (*(longlong *)&pUVar5[4].field_0x20 == 0) {
        pTVar1 = &this->DefaultInventorySlotCount;
        local_res10 = (UDS_DataSetBase *)CONCAT71(local_res10._1_7_,6);
        if (*(int *)&(this->DefaultInventorySlotCount).field_0x8 !=
            *(int *)&(this->DefaultInventorySlotCount).field_0x34) {
          puVar8 = *(undefined1 **)&(this->DefaultInventorySlotCount).field_0x40;
          if (puVar8 == (undefined1 *)0x0) {
            puVar8 = &(this->DefaultInventorySlotCount).field_0x38;
          }
          iVar9 = *(int *)(puVar8 + (ulonglong)
                                    (*(int *)&(this->DefaultInventorySlotCount).field_0x48 - 1U & 6)
                                    * 4);
          if (iVar9 != -1) {
            lVar6 = *(longlong *)pTVar1;
            do {
              if (*(char *)(lVar6 + (longlong)iVar9 * 0x10) == '\x06') {
                if ((iVar9 != -1) && (lVar6 = (longlong)iVar9 * 0x10 + lVar6, lVar6 != 0))
                goto LAB_14bad7336;
                break;
              }
              iVar9 = *(int *)(lVar6 + 8 + (longlong)iVar9 * 0x10);
            } while (iVar9 != -1);
          }
        }
        local_30 = &local_res10;
        TSet<TTuple<enum_EDS_InventoryType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<enum_EDS_InventoryType_&&>_>
                  (pTVar1,(uint)local_res18,(TKeyInitializer<EDS_InventoryType_&&> *)&DAT_00000006,
                   (bool *)&local_30);
        lVar6 = (longlong)local_res18[0] * 0x10 + *(longlong *)pTVar1;
LAB_14bad7336:
        *(undefined4 *)(lVar6 + 4) = 0;
        return;
      }
      pUVar5 = FWeakObjectPtr::Get(&local_38);
      pUVar7 = FWeakObjectPtr::Get(&local_38);
      uVar2 = *(ulonglong *)&pUVar7[4].field_0x20;
      if (*(int *)&pUVar5[1].field_0x20 != *(int *)&pUVar5[2].field_0x24) {
        pUVar7 = *(UObject **)&pUVar5[3].field_0x8;
        if (*(UObject **)&pUVar5[3].field_0x8 == (UObject *)0x0) {
          pUVar7 = pUVar5 + 3;
        }
        iVar9 = *(int *)(&pUVar7->field_0x0 +
                        ((uVar2 >> 0x20) * 0x17 + uVar2 &
                        (ulonglong)(*(int *)&pUVar5[3].field_0x10 - 1)) * 4);
        if (iVar9 != -1) {
          do {
            if (*(ulonglong *)(*(longlong *)&pUVar5[1].field_0x18 + (longlong)iVar9 * 0x18) == uVar2
               ) {
              this_01 = (FObjectPtr_u_0 *)
                        TMapBase<unsigned___int64,TObjectPtr<UDS_DataBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>_>
                        ::FindChecked((TMapBase<unsigned___int64,TObjectPtr<UDS_DataBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>_>
                                       *)&pUVar5[1].field_0x18,uVar2);
              if (this_01->Handle != (UObject *)0x0) {
                pUVar4 = Z_Construct_UClass_UDS_MountData_NoRegister();
                bVar3 = FObjectPtr::IsA((FObjectPtr *)this_01,pUVar4);
                if (bVar3) {
                  pUVar11 = (UDS_DataSetBase *)this_01->Handle;
                }
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar11 != (UDS_DataSetBase *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar11);
              }
              local_res20.ObjectIndex = 0;
              local_res20.ObjectSerialNumber = 0;
              local_res10 = pUVar11;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar11 != (UDS_DataSetBase *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar11);
              }
              goto LAB_14bad73c1;
            }
            iVar9 = *(int *)(*(longlong *)&pUVar5[1].field_0x18 + 0x10 + (longlong)iVar9 * 0x18);
          } while (iVar9 != -1);
        }
      }
      local_res20.ObjectIndex = 0;
      local_res20.ObjectSerialNumber = 0;
      local_res10 = (UDS_DataSetBase *)0x0;
LAB_14bad73c1:
      FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_res10);
      bVar3 = TWeakObjectPtr<UDS_MountData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_MountData,FWeakObjectPtr> *)&local_res20,(void *)0x0);
      if (!bVar3) {
        pUVar5 = FWeakObjectPtr::Get(&local_res20);
        this_00 = FDS_MountBaseTableRow::GetRef((longlong)*(int *)&pUVar5[2].field_0x18,true);
        bVar3 = FDS_MountBaseTableRow::IsValid(this_00);
        if (bVar3) {
          iVar9 = this_00->InventorySlot;
          pTVar1 = &this->DefaultInventorySlotCount;
          local_res10 = (UDS_DataSetBase *)CONCAT71(local_res10._1_7_,6);
          if (*(int *)&(this->DefaultInventorySlotCount).field_0x8 !=
              *(int *)&(this->DefaultInventorySlotCount).field_0x34) {
            puVar8 = *(undefined1 **)&(this->DefaultInventorySlotCount).field_0x40;
            if (puVar8 == (undefined1 *)0x0) {
              puVar8 = &(this->DefaultInventorySlotCount).field_0x38;
            }
            iVar10 = *(int *)(puVar8 + (ulonglong)
                                       (*(int *)&(this->DefaultInventorySlotCount).field_0x48 - 1U &
                                       6) * 4);
            if (iVar10 != -1) {
              lVar6 = *(longlong *)pTVar1;
              do {
                if (*(char *)(lVar6 + (longlong)iVar10 * 0x10) == '\x06') {
                  if ((iVar10 != -1) && (lVar6 = (longlong)iVar10 * 0x10 + lVar6, lVar6 != 0))
                  goto LAB_14bad7522;
                  break;
                }
                iVar10 = *(int *)(lVar6 + 8 + (longlong)iVar10 * 0x10);
              } while (iVar10 != -1);
            }
          }
          local_30 = &local_res10;
          TSet<TTuple<enum_EDS_InventoryType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<enum_EDS_InventoryType_&&>_>
                    (pTVar1,(uint)local_res18,(TKeyInitializer<EDS_InventoryType_&&> *)&DAT_00000006
                     ,(bool *)&local_30);
          lVar6 = (longlong)local_res18[0] * 0x10 + *(longlong *)pTVar1;
LAB_14bad7522:
          *(int *)(lVar6 + 4) = iVar9;
        }
      }
    }
  }
  return;
}

// UpdateEquipmentData @ 14bad7b30

void __thiscall UDS_ItemDataSet::UpdateEquipmentData(UDS_ItemDataSet *this,EquipResponse *param_1)

{
  FDS_EquipmentItemCharacterData *pFVar1;
  code *pcVar2;
  bool bVar3;
  EDS_EquipSlotType local_res8 [2];
  int local_res10 [2];
  TPairInitializer<EDS_EquipSlotType_&,int_&> local_res18;
  EDS_EquipSlotType *local_28;
  int *local_20;
  
  if ((this->EquipmentItemCharacter).Object == (FDS_EquipmentItemCharacterData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->EquipmentItemCharacter).Object;
  local_res10[0] = (param_1->_impl_).item_id_;
  local_res8[0] = (uint)(byte)(param_1->_impl_).slot_type_ * 1000 + (param_1->_impl_).slot_index_;
  FDS_ItemBaseTableRow::GetRef((longlong)local_res10[0],true);
  local_28 = local_res8;
  local_20 = local_res10;
  TSet<TTuple<enum_EDS_EquipSlotType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_EquipSlotType,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_EquipSlotType_&,int_&>_>
            (&pFVar1->EquippedItemTIDMap,&local_res18,(bool *)&local_28);
  TMulticastDelegate<void___cdecl(enum_EDS_EquipSlotType,__int64),FDefaultDelegateUserPolicy>::
  Broadcast(&pFVar1->OnChangedEquipAllDelegate,local_res8[0],0);
  this->InventoryUpdateEntry = this->InventoryUpdateEntry | Update;
  UDS_DataSetBase::SetIsDirty((UDS_DataSetBase *)this,true);
  return;
}

// UpdateEquipmentData @ 14bad7c00

void __thiscall
UDS_ItemDataSet::UpdateEquipmentData(UDS_ItemDataSet *this,SpawnCharacterResponse *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EquipmentItemCharacter).Object == (FDS_EquipmentItemCharacterData *)0x0) {
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
  FDS_EquipmentItemCharacterData::UpdateEquipmentData((this->EquipmentItemCharacter).Object,param_1)
  ;
  this->InventoryUpdateEntry = this->InventoryUpdateEntry | Update;
  UDS_DataSetBase::SetIsDirty((UDS_DataSetBase *)this,true);
  return;
}

// UpdateEquipmentData @ 14bad7c80

void __thiscall
UDS_ItemDataSet::UpdateEquipmentData(UDS_ItemDataSet *this,SqlEquipmentTable *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EquipmentItemCharacter).Object == (FDS_EquipmentItemCharacterData *)0x0) {
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
  FDS_EquipmentItemCharacterData::UpdateEquipmentData((this->EquipmentItemCharacter).Object,param_1)
  ;
  this->InventoryUpdateEntry = this->InventoryUpdateEntry | Update;
  UDS_DataSetBase::SetIsDirty((UDS_DataSetBase *)this,true);
  return;
}

// UpdateEquipmentItemData @ 14bad7f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ItemDataSet::UpdateEquipmentItemData
          (UDS_ItemDataSet *this,SqlItemEquipmentTable *param_1,DirtyFlag *param_2)

{
  long64 lVar1;
  bool bVar2;
  ulong64 uVar3;
  UDS_LogManager *pUVar4;
  UDS_ItemData *this_00;
  UObject *pUVar5;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (*param_2 == DirtyFlag_None) {
    LoadEquipmentItemData(this,param_1);
  }
  else {
    uVar3 = (param_1->_impl_).item_uid_;
    if (*param_2 == DirtyFlag_Delete) {
      UDS_DataSetBase::RemoveData((UDS_DataSetBase *)this,uVar3);
      this->InventoryUpdateEntry = this->InventoryUpdateEntry | Remove;
    }
    else {
      bVar2 = UDS_DataSetBase::HasData((UDS_DataSetBase *)this,uVar3);
      if (bVar2) {
        lVar1 = (param_1->_impl_).item_uid_;
        uVar3 = UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
        UDS_ItemData::GetData((ulong64)local_158,uVar3,SUB81(lVar1,0));
        bVar2 = FWeakObjectPtr::IsValid(local_158);
        if (bVar2) {
          this_00 = (UDS_ItemData *)FWeakObjectPtr::Get(local_158);
          UDS_ItemData::UpdateEquipmentItemData(this_00,param_1);
          pUVar5 = FWeakObjectPtr::Get(local_158);
          if ((pUVar5[0x1a].field_0x8 & 8) != 0) {
            this->InventoryUpdateEntry = this->InventoryUpdateEntry | Durability;
          }
          this->InventoryUpdateEntry = this->InventoryUpdateEntry | Update;
        }
        else {
          pUVar4 = UDS_LogManager::GetInst();
          if (pUVar4 != (UDS_LogManager *)0x0) {
            pUVar4 = UDS_LogManager::GetInst();
            local_148._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_148,"UDS_ItemDataSet::RefreshEquipmentItemData",0x29,Yes);
            UDS_LogManager::PrintLog
                      (pUVar4,1,Warning,local_148.Ptr,0x673,L"itemData is nullptr. (%ld)");
            if ((void *)local_148._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_148._padding_);
            }
          }
        }
      }
      else {
        AddEquipmentItemData(this,param_1);
      }
    }
  }
  UDS_DataSetBase::SetIsDirty((UDS_DataSetBase *)this,true);
  return;
}

// UpdateInvenExtendInfoData @ 14bad8490

void __thiscall
UDS_ItemDataSet::UpdateInvenExtendInfoData(UDS_ItemDataSet *this,SqlInvenExtendInfoTable *param_1)

{
  TMap<EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_InventoryType,int,0>_>
  *this_00;
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  EDS_InventoryType local_res8 [8];
  int local_res10 [4];
  EDS_InventoryType *local_18;
  int *local_10;
  
  local_res8[0] = (EDS_InventoryType)(param_1->_impl_).extend_type_;
  this_00 = &this->ExtendedInventorySlotCount;
  iVar1 = (param_1->_impl_).extend_slot_count_;
  local_res10[0] = iVar1;
  if (*(int *)&(this->ExtendedInventorySlotCount).field_0x8 !=
      *(int *)&(this->ExtendedInventorySlotCount).field_0x34) {
    puVar3 = *(undefined1 **)&(this->ExtendedInventorySlotCount).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->ExtendedInventorySlotCount).field_0x38;
    }
    iVar4 = *(int *)(puVar3 + ((ulonglong)
                               (*(int *)&(this->ExtendedInventorySlotCount).field_0x48 - 1) &
                              (ulonglong)local_res8[0]) * 4);
    if (iVar4 != -1) {
      do {
        if (*(EDS_InventoryType *)(*(longlong *)this_00 + (longlong)iVar4 * 0x10) == local_res8[0])
        {
          if (iVar4 != -1) {
            piVar2 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                     ::FindChecked(this_00,local_res8[0]);
            *piVar2 = iVar1;
            goto LAB_14bad8524;
          }
          break;
        }
        iVar4 = *(int *)(*(longlong *)this_00 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  local_18 = local_res8;
  local_10 = local_res10;
  TSet<TTuple<enum_EDS_InventoryType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_InventoryType_const_&,int_const_&>_>
            (this_00,(TPairInitializer<EDS_InventoryType_const_&,int_const_&> *)(local_res10 + 2),
             (bool *)&local_18);
LAB_14bad8524:
  this->InventoryUpdateEntry = this->InventoryUpdateEntry | InventoryExtend;
  UDS_DataSetBase::SetIsDirty((UDS_DataSetBase *)this,true);
  return;
}

// UpdateInventoryWeight @ 14bad8560

void __thiscall UDS_ItemDataSet::UpdateInventoryWeight(UDS_ItemDataSet *this)

{
  TMap<EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_InventoryType,int,0>_>
  *this_00;
  FScriptContainerElement *pFVar1;
  void *_Src;
  undefined1 *puVar2;
  code *pcVar3;
  FObjectPtr_u_0 *pFVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  int *piVar9;
  int *piVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  int iVar13;
  FObjectPtr_u_0 FVar14;
  size_t _Size;
  ForAnyElementType FVar15;
  int iVar16;
  FObjectPtr_u_0 *pFVar17;
  FScriptContainerElement local_res10 [8];
  FScriptContainerElement local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_a8 [8];
  FWeakObjectPtr local_a0;
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  int local_88;
  uint local_84;
  FObjectPtr_u_0 local_80;
  FObjectPtr_u_0 *local_78;
  TPairInitializer<EDS_InventoryType_const_&,int_const_&> local_70;
  FObjectPtr_u_0 *local_60;
  FScriptContainerElement *local_58;
  int *local_50;
  
  this_00 = &this->InventoryWeight;
  bVar5 = 1 < *(int *)&(this->InventoryWeight).field_0x48;
  if (!bVar5) {
    TSet<TTuple<enum_EDS_InventoryType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  puVar2 = &(this->InventoryWeight).field_0xc;
  *(undefined4 *)&(this->InventoryWeight).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->InventoryWeight).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InventoryWeight).field_0x34 = 0;
  iVar13 = *(int *)&(this->InventoryWeight).field_0x2c;
  *(undefined4 *)&(this->InventoryWeight).field_0x28 = 0;
  if ((iVar13 < 0) || (0x80 < iVar13)) {
    *(undefined4 *)&(this->InventoryWeight).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->InventoryWeight).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->InventoryWeight).field_0x48 = 1;
    TSet<TTuple<enum_EDS_InventoryType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  local_84 = (uint)this->_padding_;
  uVar11 = (ulonglong)(int)local_84;
  pFVar17 = (FObjectPtr_u_0 *)this->_padding_;
  local_60 = pFVar17 + uVar11;
  do {
    pFVar4 = local_60;
    local_78 = pFVar17;
    if ((int)this->_padding_ != (int)uVar11) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UDS_DataBase>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar17 == pFVar4) {
      return;
    }
    local_80 = (FObjectPtr_u_0)pFVar17->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14bad8668:
      if (local_80.Handle == (UObject *)0x0) goto LAB_14bad8686;
      pUVar7 = Z_Construct_UClass_UDS_ItemData_NoRegister();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)&local_80,pUVar7);
      FVar14 = local_80;
      if (!bVar5) goto LAB_14bad8686;
    }
    else {
      if (local_80.Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_80.Handle);
        goto LAB_14bad8668;
      }
LAB_14bad8686:
      FVar14.Handle = (UObject *)0x0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar14.Handle != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(FVar14.Handle);
    }
    local_a0.ObjectIndex = 0;
    local_a0.ObjectSerialNumber = 0;
    local_70.Value = (int *)FVar14;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar14.Handle != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(FVar14.Handle);
    }
    FWeakObjectPtr::operator=(&local_a0,(FObjectPtr)&local_70.Value);
    bVar5 = FWeakObjectPtr::IsValid(&local_a0);
    if (!bVar5) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2839815002972485861>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Item\\DS_ItemData.cpp"
                         ,0x71b,"false");
      if (!bVar5) {
        return;
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar5 = DS_ItemDataUtil::IsExcludedFromInventory
                      ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_a0);
    if (!bVar5) {
      pUVar8 = FWeakObjectPtr::Get(&local_a0);
      local_98.Data = (FScriptContainerElement *)0x0;
      local_90 = *(int *)&pUVar8[0x18].field_0x18;
      _Size = (size_t)local_90;
      _Src = *(void **)&pUVar8[0x18].field_0x10;
      if (local_90 == 0) {
        local_8c = 0;
        iVar13 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_90,0,&local_98,local_90,&local_8c);
        memcpy(local_98.Data,_Src,_Size);
        iVar13 = local_90;
      }
      pFVar1 = local_98.Data + iVar13;
      FVar15.Data = local_98.Data;
      iVar16 = iVar13;
LAB_14bad8764:
      if (iVar16 != iVar13) {
        local_a8[0] = 0;
        `TCheckedPointerIterator<enum_EDS_InventoryType,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_a8);
      }
      if (FVar15.Data != pFVar1) {
        local_res18[0] = *FVar15.Data;
        pUVar8 = FWeakObjectPtr::Get(&local_a0);
        local_res10[0] = local_res18[0];
        piVar9 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                 ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                           (&pUVar8[10].field_0x18,(uint)(byte)local_res18[0],
                            (EDS_InventoryType *)local_res10);
        piVar10 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                  ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                            (&pUVar8[8].field_0x18,(uint)(byte)local_res10[0],
                             (EDS_InventoryType *)local_res10);
        iVar16 = (*piVar10 + *piVar9) * *(int *)&pUVar8[0x15].field_0x14;
        local_88 = iVar16;
        if (*(int *)&(this->InventoryWeight).field_0x8 !=
            *(int *)&(this->InventoryWeight).field_0x34) {
          puVar2 = *(undefined1 **)&(this->InventoryWeight).field_0x40;
          puVar12 = &(this->InventoryWeight).field_0x38;
          if (puVar2 != (undefined1 *)0x0) {
            puVar12 = puVar2;
          }
          iVar6 = *(int *)(puVar12 +
                          ((ulonglong)(*(int *)&(this->InventoryWeight).field_0x48 - 1) &
                          (ulonglong)(byte)local_res18[0]) * 4);
          if (iVar6 != -1) {
            do {
              if (*(FScriptContainerElement *)(*(longlong *)this_00 + (longlong)iVar6 * 0x10) ==
                  local_res18[0]) {
                if (iVar6 != -1) {
                  piVar9 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                           ::FindChecked(this_00,(EDS_InventoryType)local_res18[0]);
                  *piVar9 = *piVar9 + iVar16;
                  FVar15.Data = FVar15.Data + 1;
                  iVar16 = local_90;
                  goto LAB_14bad8764;
                }
                break;
              }
              iVar6 = *(int *)(*(longlong *)this_00 + (longlong)iVar6 * 0x10 + 8);
            } while (iVar6 != -1);
          }
        }
        local_58 = local_res18;
        local_50 = &local_88;
        TSet<TTuple<enum_EDS_InventoryType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<enum_EDS_InventoryType_const_&,int_const_&>_>
                  (this_00,&local_70,(bool *)&local_58);
        FVar15.Data = FVar15.Data + 1;
        iVar16 = local_90;
        goto LAB_14bad8764;
      }
      pFVar17 = local_78;
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data);
        pFVar17 = local_78;
      }
    }
    uVar11 = (ulonglong)local_84;
    pFVar17 = pFVar17 + 1;
  } while( true );
}

// UpdateStackableItemData @ 14bada930

void __thiscall
UDS_ItemDataSet::UpdateStackableItemData
          (UDS_ItemDataSet *this,SqlItemStackableTable *param_1,DirtyFlag *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  UDS_ItemData *pUVar5;
  UObject *pUVar6;
  char *pcVar7;
  char *pcVar8;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FName local_58;
  undefined4 uStack_50;
  uint uStack_4c;
  FName local_48;
  undefined4 uStack_40;
  uint uStack_3c;
  code *local_38;
  longlong lStack_30;
  code *local_28;
  longlong lStack_20;
  
  iVar1 = (param_1->_impl_).item_id_;
  if (*param_2 == DirtyFlag_None) {
    uVar4 = UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
    UDS_ItemData::GetData((ulong64)&local_res20,uVar4,SUB41(iVar1,0));
    pUVar5 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res20);
    UDS_ItemData::UpdateStackableItemData(pUVar5,param_1);
    pUVar6 = FWeakObjectPtr::Get(&local_res20);
    pcVar7 = strstr("&UDS_ItemDataSet::OnChangedNewSymbol","::");
    if (pcVar7 == (char *)0x0) {
LAB_14badab3b:
      pcVar8 = &DAT_00000002;
LAB_14badab40:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      do {
        pcVar8 = pcVar7;
        pcVar7 = strstr(pcVar8 + 1,"::");
      } while (pcVar7 != (char *)0x0);
      if (pcVar8 == (char *)0x0) goto LAB_14badab3b;
      pcVar8 = pcVar8 + 2;
      if (*pcVar8 == '0') goto LAB_14badab40;
    }
    ::FName::FName(&local_48,pcVar8);
    local_58 = (FName)OnChangedNewSymbol;
    uStack_50 = 0;
    lStack_20 = (ulonglong)uStack_4c << 0x20;
    local_28 = OnChangedNewSymbol;
    TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,bool_const_>::
    __Internal_AddUniqueDynamic<UDS_ItemDataSet>
              ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,bool_const_> *)
               &pUVar6[7].field_0x18,this,(pmf_7dbc5f51 *)&local_28,local_48);
    pUVar5 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res20);
    bVar3 = false;
  }
  else {
    if (*param_2 == DirtyFlag_Delete) {
      UDS_DataSetBase::RemoveData((UDS_DataSetBase *)this,(longlong)iVar1);
      this->InventoryUpdateEntry = this->InventoryUpdateEntry | Remove;
      goto LAB_14badabd2;
    }
    bVar3 = UDS_DataSetBase::HasData((UDS_DataSetBase *)this,(longlong)iVar1);
    if (bVar3) {
      RefreshStackableItemData(this,param_1);
      goto LAB_14badabd2;
    }
    iVar1 = (param_1->_impl_).item_id_;
    uVar4 = UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
    UDS_ItemData::GetData((ulong64)&local_res18,uVar4,SUB41(iVar1,0));
    pUVar5 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res18);
    UDS_ItemData::UpdateStackableItemData(pUVar5,param_1);
    pUVar6 = FWeakObjectPtr::Get(&local_res18);
    pcVar7 = strstr("&UDS_ItemDataSet::OnChangedNewSymbol","::");
    if (pcVar7 == (char *)0x0) {
LAB_14badaa0b:
      pcVar8 = &DAT_00000002;
LAB_14badaa10:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      do {
        pcVar8 = pcVar7;
        pcVar7 = strstr(pcVar8 + 1,"::");
      } while (pcVar7 != (char *)0x0);
      if (pcVar8 == (char *)0x0) goto LAB_14badaa0b;
      pcVar8 = pcVar8 + 2;
      if (*pcVar8 == '0') goto LAB_14badaa10;
    }
    ::FName::FName(&local_58,pcVar8);
    local_48 = (FName)OnChangedNewSymbol;
    uStack_40 = 0;
    lStack_30 = (ulonglong)uStack_3c << 0x20;
    local_38 = OnChangedNewSymbol;
    TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,bool_const_>::
    __Internal_AddUniqueDynamic<UDS_ItemDataSet>
              ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,bool_const_> *)
               &pUVar6[7].field_0x18,this,(pmf_7dbc5f51 *)&local_38,local_58);
    pUVar5 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res18);
    bVar3 = true;
  }
  UDS_ItemData::SetNewSymbol(pUVar5,bVar3);
  this->InventoryUpdateEntry = this->InventoryUpdateEntry | Add;
LAB_14badabd2:
  UDS_DataSetBase::SetIsDirty((UDS_DataSetBase *)this,true);
  return;
}

// UpdateUsedInventorySlotCount @ 14badaf80

void __thiscall UDS_ItemDataSet::UpdateUsedInventorySlotCount(UDS_ItemDataSet *this)

{
  TMap<EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_InventoryType,int,0>_>
  *this_00;
  FScriptContainerElement *pFVar1;
  void *_Src;
  undefined1 *puVar2;
  code *pcVar3;
  FObjectPtr_u_0 *pFVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  int *piVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  FObjectPtr_u_0 FVar14;
  size_t _Size;
  ForAnyElementType FVar15;
  FObjectPtr_u_0 *pFVar16;
  FScriptContainerElement local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FScriptContainerElement local_res20 [8];
  FWeakObjectPtr local_98;
  ForAnyElementType local_90;
  int local_88;
  int local_84;
  int local_80;
  uint local_7c;
  FObjectPtr_u_0 local_78;
  TPairInitializer<EDS_InventoryType_const_&,int_const_&> local_70;
  FObjectPtr_u_0 *local_60;
  FScriptContainerElement *local_58;
  int *local_50;
  
  this_00 = &this->UsedInventorySlotCount;
  bVar5 = 1 < *(int *)&(this->UsedInventorySlotCount).field_0x48;
  if (!bVar5) {
    TSet<TTuple<enum_EDS_InventoryType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  puVar2 = &(this->UsedInventorySlotCount).field_0xc;
  *(undefined4 *)&(this->UsedInventorySlotCount).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->UsedInventorySlotCount).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UsedInventorySlotCount).field_0x34 = 0;
  iVar12 = *(int *)&(this->UsedInventorySlotCount).field_0x2c;
  *(undefined4 *)&(this->UsedInventorySlotCount).field_0x28 = 0;
  if ((iVar12 < 0) || (0x80 < iVar12)) {
    *(undefined4 *)&(this->UsedInventorySlotCount).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->UsedInventorySlotCount).field_0x10,0)
    ;
  }
  if (bVar5) {
    *(undefined4 *)&(this->UsedInventorySlotCount).field_0x48 = 1;
    TSet<TTuple<enum_EDS_InventoryType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  local_7c = (uint)this->_padding_;
  uVar10 = (ulonglong)(int)local_7c;
  pFVar16 = (FObjectPtr_u_0 *)this->_padding_;
  local_60 = pFVar16 + uVar10;
  do {
    pFVar4 = local_60;
    if ((int)this->_padding_ != (int)uVar10) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UDS_DataBase>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar16 == pFVar4) {
      return;
    }
    local_78 = (FObjectPtr_u_0)pFVar16->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14badb082:
      if (local_78.Handle == (UObject *)0x0) goto LAB_14badb0a0;
      pUVar7 = Z_Construct_UClass_UDS_ItemData_NoRegister();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)&local_78,pUVar7);
      FVar14 = local_78;
      if (!bVar5) goto LAB_14badb0a0;
    }
    else {
      if (local_78.Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_78.Handle);
        goto LAB_14badb082;
      }
LAB_14badb0a0:
      FVar14.Handle = (UObject *)0x0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar14.Handle != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(FVar14.Handle);
    }
    local_98.ObjectIndex = 0;
    local_98.ObjectSerialNumber = 0;
    local_70.Value = (int *)FVar14;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar14.Handle != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(FVar14.Handle);
    }
    FWeakObjectPtr::operator=(&local_98,(FObjectPtr)&local_70.Value);
    bVar5 = FWeakObjectPtr::IsValid(&local_98);
    if (!bVar5) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2839815002972485891>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Item\\DS_ItemData.cpp"
                         ,0x6fd,"false");
      if (!bVar5) {
        return;
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar5 = DS_ItemDataUtil::IsExcludedFromInventory
                      ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_98);
    if (!bVar5) {
      pUVar8 = FWeakObjectPtr::Get(&local_98);
      local_90.Data = (FScriptContainerElement *)0x0;
      local_88 = *(int *)&pUVar8[0x18].field_0x18;
      _Size = (size_t)local_88;
      _Src = *(void **)&pUVar8[0x18].field_0x10;
      if (local_88 == 0) {
        local_84 = 0;
        iVar12 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_88,0,&local_90,local_88,&local_84);
        memcpy(local_90.Data,_Src,_Size);
        iVar12 = local_88;
      }
      pFVar1 = local_90.Data + iVar12;
      FVar15.Data = local_90.Data;
      iVar13 = iVar12;
LAB_14badb180:
      if (iVar13 != iVar12) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<enum_EDS_InventoryType,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (FVar15.Data != pFVar1) {
        local_res8[0] = *FVar15.Data;
        pUVar8 = FWeakObjectPtr::Get(&local_98);
        local_res20[0] = local_res8[0];
        piVar9 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                 ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                           (&pUVar8[0xc].field_0x18,(uint)(byte)local_res8[0],
                            (EDS_InventoryType *)local_res20);
        iVar13 = *piVar9;
        local_80 = iVar13;
        if (*(int *)&(this->UsedInventorySlotCount).field_0x8 !=
            *(int *)&(this->UsedInventorySlotCount).field_0x34) {
          puVar2 = *(undefined1 **)&(this->UsedInventorySlotCount).field_0x40;
          puVar11 = &(this->UsedInventorySlotCount).field_0x38;
          if (puVar2 != (undefined1 *)0x0) {
            puVar11 = puVar2;
          }
          iVar6 = *(int *)(puVar11 +
                          ((ulonglong)(*(int *)&(this->UsedInventorySlotCount).field_0x48 - 1) &
                          (ulonglong)(byte)local_res8[0]) * 4);
          if (iVar6 != -1) {
            do {
              if (*(FScriptContainerElement *)(*(longlong *)this_00 + (longlong)iVar6 * 0x10) ==
                  local_res8[0]) {
                if (iVar6 != -1) {
                  piVar9 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                           ::FindChecked(this_00,(EDS_InventoryType)local_res8[0]);
                  *piVar9 = *piVar9 + iVar13;
                  FVar15.Data = FVar15.Data + 1;
                  iVar13 = local_88;
                  goto LAB_14badb180;
                }
                break;
              }
              iVar6 = *(int *)(*(longlong *)this_00 + (longlong)iVar6 * 0x10 + 8);
            } while (iVar6 != -1);
          }
        }
        local_58 = local_res8;
        local_50 = &local_80;
        TSet<TTuple<enum_EDS_InventoryType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<enum_EDS_InventoryType_const_&,int_const_&>_>
                  (this_00,&local_70,(bool *)&local_58);
        FVar15.Data = FVar15.Data + 1;
        iVar13 = local_88;
        goto LAB_14badb180;
      }
      if (local_90.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data);
      }
    }
    uVar10 = (ulonglong)local_7c;
    pFVar16 = pFVar16 + 1;
  } while( true );
}

// Use @ 14badbb50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ItemDataSet::Use(UDS_ItemDataSet *this,int param_1)

{
  TMap<int,UDS_ItemDataSet::FDS_CooltimeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UDS_ItemDataSet::FDS_CooltimeData,0>_>
  *this_00;
  FWeakObjectPtr *pFVar1;
  EDS_CoolDownType EVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FDS_ItemBaseTableRow *this_01;
  UDS_LogManager *pUVar8;
  FDS_CooltimeData *pFVar9;
  FDS_TimeCoolDownTableRow *this_02;
  TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar10;
  UObject *pUVar11;
  longlong lVar12;
  undefined1 *puVar13;
  FWeakObjectPtr *pFVar14;
  ForAnyElementType FVar15;
  float fVar16;
  undefined1 auStackY_218 [32];
  uint local_1c8 [2];
  ForAnyElementType local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0 [4];
  uint local_1ac;
  int local_1a8 [2];
  FWeakObjectPtr local_1a0;
  FWeakObjectPtr local_198;
  uint *local_190;
  TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_1c8[0] = param_1;
  this_01 = FDS_ItemBaseTableRow::Get((longlong)param_1,true);
  if (this_01 == (FDS_ItemBaseTableRow *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"UDS_ItemDataSet::Use",0x14,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_178.Ptr,0x6a1,L"itemBaseTable is nullptr. (%d)");
      if ((void *)local_178._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
    }
  }
  else {
    if (this_01->ID_ItemAction < 1) {
      this_00 = &this->ItemCooltimeData;
      fVar16 = this_01->IndividualCoolTime;
      pFVar9 = TMapBase<int,UDS_ItemDataSet::FDS_CooltimeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UDS_ItemDataSet::FDS_CooltimeData,0>_>
               ::FindOrAddImpl<int_const_&>
                         ((TMapBase<int,UDS_ItemDataSet::FDS_CooltimeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UDS_ItemDataSet::FDS_CooltimeData,0>_>
                           *)this_00,local_1c8[0],(int *)local_1c8);
      pFVar9->OriginCooltime = fVar16;
      pFVar9->RemainCooltime = fVar16;
      this_02 = FDS_ItemBaseTableRow::ID_CoolDownTable(this_01);
      bVar5 = FDS_TimeCoolDownTableRow::IsValid(this_02);
      if (bVar5) {
        EVar2 = this_02->ID;
        pTVar10 = GetItemDataList(this,&local_188);
        local_1c0.Data = (FScriptContainerElement *)0x0;
        local_1b8 = 0;
        pFVar14 = (FWeakObjectPtr *)(pTVar10->AllocatorInstance).Data;
        pFVar1 = pFVar14 + pTVar10->ArrayNum;
        for (; pFVar14 != pFVar1; pFVar14 = pFVar14 + 1) {
          local_1a0 = *pFVar14;
          pUVar11 = FWeakObjectPtr::Get(&local_1a0);
          if (EVar2 == *(EDS_CoolDownType *)&pUVar11[0x17].field_0x20) {
            if (((local_1c0.Data <= pFVar14) &&
                (pFVar14 < (FWeakObjectPtr *)(local_1c0.Data + (longlong)local_1b8._4_4_ * 8))) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar6 = (int)local_1b8;
            if ((int)local_1b8 == local_1b8._4_4_) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,&local_1c0,(int *)((longlong)&local_1b8 + 4));
            }
            local_1b8 = CONCAT44(local_1b8._4_4_,iVar6 + 1);
            *(FWeakObjectPtr *)(local_1c0.Data + (longlong)iVar6 * 8) = *pFVar14;
          }
        }
        if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.AllocatorInstance.Data);
        }
        iVar6 = (int)local_1b8;
        fVar16 = this_02->CoolTime;
        pFVar1 = (FWeakObjectPtr *)(local_1c0.Data + (longlong)(int)local_1b8 * 8);
        FVar15.Data = local_1c0.Data;
        while( true ) {
          if ((int)local_1b8 != iVar6) {
            `TCheckedPointerIterator<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,0>::operator!='
            ::__l2::<lambda_1>::operator()(local_1b0);
          }
          if ((FWeakObjectPtr *)FVar15.Data == pFVar1) break;
          local_198 = *(FWeakObjectPtr *)FVar15.Data;
          pUVar11 = FWeakObjectPtr::Get(&local_198);
          local_1ac = *(uint *)&pUVar11[8].field_0x10;
          if (*(int *)&(this->ItemCooltimeData).field_0x8 !=
              *(int *)&(this->ItemCooltimeData).field_0x34) {
            puVar3 = *(undefined1 **)&(this->ItemCooltimeData).field_0x40;
            puVar13 = &(this->ItemCooltimeData).field_0x38;
            if (puVar3 != (undefined1 *)0x0) {
              puVar13 = puVar3;
            }
            iVar7 = *(int *)(puVar13 +
                            (ulonglong)
                            (*(int *)&(this->ItemCooltimeData).field_0x48 - 1U & local_1ac) * 4);
            if (iVar7 != -1) {
              do {
                lVar12 = *(longlong *)&this_00->field_0x0 + (longlong)iVar7 * 0x14;
                if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar7 * 0x14) ==
                    local_1ac) {
                  if (lVar12 != 0) goto LAB_14badbe7e;
                  break;
                }
                iVar7 = *(int *)(lVar12 + 0xc);
              } while (iVar7 != -1);
            }
          }
          local_190 = &local_1ac;
          TSet<TTuple<int,UDS_ItemDataSet::FDS_CooltimeData>,TDefaultMapHashableKeyFuncs<int,UDS_ItemDataSet::FDS_CooltimeData,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<int_&&>_>
                    ((TSet<TTuple<int,UDS_ItemDataSet::FDS_CooltimeData>,TDefaultMapHashableKeyFuncs<int,UDS_ItemDataSet::FDS_CooltimeData,0>,FDefaultSetAllocator>
                      *)this_00,(uint)local_1a8,(TKeyInitializer<int_&&> *)(ulonglong)local_1ac,
                     (bool *)&local_190);
          lVar12 = *(longlong *)&this_00->field_0x0 + (longlong)local_1a8[0] * 0x14;
LAB_14badbe7e:
          if (*(float *)(lVar12 + 8) <= fVar16 && fVar16 != *(float *)(lVar12 + 8)) {
            *(float *)(lVar12 + 4) = fVar16;
            *(float *)(lVar12 + 8) = fVar16;
          }
          FVar15.Data = FVar15.Data + 8;
        }
        if ((FWeakObjectPtr *)local_1c0.Data != (FWeakObjectPtr *)0x0) {
          FMemory::Free(local_1c0.Data);
        }
      }
      this->InventoryUpdateEntry = this->InventoryUpdateEntry | CooltimeStart;
    }
    else {
      fVar16 = DS_ItemDataUtil::GetActionCooltime(local_1c8[0]);
      this->InventoryUpdateEntry = this->InventoryUpdateEntry | ActionStart;
      this->ActionCooltime = fVar16;
    }
    UDS_DataSetBase::SetIsDirty((UDS_DataSetBase *)this,true);
  }
  return;
}

