// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 66

// StaticClass @ 14b4d0b50

UClass * __cdecl UDS_ItemData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ItemData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ItemData",
               &Z_Registration_Info_UClass_UDS_ItemData.InnerSingleton,
               StaticRegisterNativesUDS_ItemData,0x420,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ItemData>,InternalVTableHelperCtorCaller<UDS_ItemData>,
               local_res8,UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ItemData.InnerSingleton;
}

// UDS_ItemData @ 14b4d37c0

UDS_ItemData * __thiscall UDS_ItemData::UDS_ItemData(UDS_ItemData *this,FVTableHelper *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ItemData__6B_;
  *(undefined8 *)&this->OnChanged_ItemLevel = 0;
  *(undefined8 *)&(this->OnChanged_ItemLevel).field_0x8 = 0;
  *(undefined8 *)&(this->OnChanged_ItemLevel).field_0x10 = 0;
  *(undefined8 *)&this->OnChanged_ItemExp = 0;
  *(undefined8 *)&(this->OnChanged_ItemExp).field_0x8 = 0;
  *(undefined8 *)&(this->OnChanged_ItemExp).field_0x10 = 0;
  *(undefined8 *)&this->OnChanged_CombatPower = 0;
  *(undefined8 *)&(this->OnChanged_CombatPower).field_0x8 = 0;
  *(undefined8 *)&(this->OnChanged_CombatPower).field_0x10 = 0;
  *(undefined8 *)&this->OnChanged_IsEquipped = 0;
  *(undefined8 *)&(this->OnChanged_IsEquipped).field_0x8 = 0;
  *(undefined8 *)&(this->OnChanged_IsEquipped).field_0x10 = 0;
  *(undefined8 *)&this->OnCooltimeStartAndFinishDelegate = 0;
  *(undefined8 *)&(this->OnCooltimeStartAndFinishDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnCooltimeStartAndFinishDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnCooltimeDelegate = 0;
  *(undefined8 *)&(this->OnCooltimeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnCooltimeDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnActionFinishDelegate = 0;
  *(undefined8 *)&(this->OnActionFinishDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnActionFinishDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnChanged_RemainCooltime = 0;
  *(undefined8 *)&(this->OnChanged_RemainCooltime).field_0x8 = 0;
  *(undefined8 *)&(this->OnChanged_RemainCooltime).field_0x10 = 0;
  *(undefined8 *)&this->OnChanged_ElapsedCooltime = 0;
  *(undefined8 *)&(this->OnChanged_ElapsedCooltime).field_0x8 = 0;
  *(undefined8 *)&(this->OnChanged_ElapsedCooltime).field_0x10 = 0;
  *(undefined8 *)&this->OnChanged_ItemNewSymbol = 0;
  *(undefined8 *)&(this->OnChanged_ItemNewSymbol).field_0x8 = 0;
  *(undefined8 *)&(this->OnChanged_ItemNewSymbol).field_0x10 = 0;
  *(undefined8 *)&this->StackCount_UnTradable = 0;
  *(undefined8 *)&(this->StackCount_UnTradable).field_0x8 = 0;
  *(undefined8 *)&(this->StackCount_UnTradable).field_0x20 = 0;
  this->ItemUID = 0;
  this->ItemTID = 0;
  *(undefined4 *)&(this->StackCount_UnTradable).field_0x28 = 0;
  *(undefined4 *)&(this->StackCount_UnTradable).field_0x2c = 0x80;
  *(undefined4 *)&(this->StackCount_UnTradable).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StackCount_UnTradable).field_0x34 = 0;
  *(undefined8 *)&(this->StackCount_UnTradable).field_0x40 = 0;
  *(undefined4 *)&(this->StackCount_UnTradable).field_0x48 = 0;
  *(undefined8 *)&this->StackCount_Tradable = 0;
  *(undefined8 *)&(this->StackCount_Tradable).field_0x8 = 0;
  *(undefined8 *)&(this->StackCount_Tradable).field_0x20 = 0;
  *(undefined4 *)&(this->StackCount_Tradable).field_0x28 = 0;
  *(undefined4 *)&(this->StackCount_Tradable).field_0x2c = 0x80;
  *(undefined4 *)&(this->StackCount_Tradable).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StackCount_Tradable).field_0x34 = 0;
  *(undefined8 *)&(this->StackCount_Tradable).field_0x40 = 0;
  *(undefined4 *)&(this->StackCount_Tradable).field_0x48 = 0;
  *(undefined8 *)&this->UsageInvenSlotCount = 0;
  *(undefined8 *)&(this->UsageInvenSlotCount).field_0x8 = 0;
  *(undefined8 *)&(this->UsageInvenSlotCount).field_0x20 = 0;
  *(undefined4 *)&(this->UsageInvenSlotCount).field_0x28 = 0;
  *(undefined4 *)&(this->UsageInvenSlotCount).field_0x2c = 0x80;
  *(undefined4 *)&(this->UsageInvenSlotCount).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UsageInvenSlotCount).field_0x34 = 0;
  *(undefined8 *)&(this->UsageInvenSlotCount).field_0x40 = 0;
  *(undefined4 *)&(this->UsageInvenSlotCount).field_0x48 = 0;
  *(undefined8 *)&this->bIsTrade = 0;
  *(undefined8 *)&(this->bIsTrade).field_0x8 = 0;
  *(undefined8 *)&(this->bIsTrade).field_0x20 = 0;
  this->IsQuantityDirty = false;
  *(undefined4 *)&(this->bIsTrade).field_0x28 = 0;
  *(undefined4 *)&(this->bIsTrade).field_0x2c = 0x80;
  *(undefined4 *)&(this->bIsTrade).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->bIsTrade).field_0x34 = 0;
  *(undefined8 *)&(this->bIsTrade).field_0x40 = 0;
  *(undefined4 *)&(this->bIsTrade).field_0x48 = 0;
  this->CombatPower = 0;
  this->PassiveSkillID = 0;
  this->PrefixID = 0;
  this->CurrentDurability = 0;
  this->bIsEquipped = false;
  this->bIsLock = false;
  this->bIsPlayingCooltime = false;
  this->RemainCooltime = 0.0;
  this->ElapsedCooltime = 0.0;
  this->CoolStartTime = 0.0;
  this->CoolEndTime = 0.0;
  this->SetEffectID = 0;
  FDS_ItemBaseTableRow::FDS_ItemBaseTableRow(&this->ItemBaseTable);
  (this->EnableInventoryTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EnableInventoryTypes).ArrayNum = 0;
  (this->EnableInventoryTypes).ArrayMax = 0;
  this->bIsAutoUse = false;
  (this->ItemTypeSymbolData).Object = (FDS_ItemTypeSymbolData *)0x0;
  (this->ItemTypeSymbolData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->ItemUpdateEntry = None;
  return this;
}

// ~UDS_ItemData @ 14b4d4540

void __thiscall UDS_ItemData::~UDS_ItemData(UDS_ItemData *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UDS_ItemData__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemTypeSymbolData).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->EnableInventoryTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ItemBaseTable).ID_Character.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->ItemBaseTable)._padding_ = (longlong)&___7FTableRowBase__6B_;
  *(undefined4 *)&(this->bIsTrade).field_0x48 = 0;
  pvVar2 = *(void **)&(this->bIsTrade).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_InventoryType,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_InventoryType,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->bIsTrade);
  *(undefined4 *)&(this->UsageInvenSlotCount).field_0x48 = 0;
  pvVar2 = *(void **)&(this->UsageInvenSlotCount).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_InventoryType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_InventoryType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->UsageInvenSlotCount);
  *(undefined4 *)&(this->StackCount_Tradable).field_0x48 = 0;
  pvVar2 = *(void **)&(this->StackCount_Tradable).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_InventoryType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_InventoryType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->StackCount_Tradable);
  *(undefined4 *)&(this->StackCount_UnTradable).field_0x48 = 0;
  pvVar2 = *(void **)&(this->StackCount_UnTradable).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_InventoryType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_InventoryType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->StackCount_UnTradable);
  pvVar2 = *(void **)&(this->OnChanged_ItemNewSymbol).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChanged_ItemNewSymbol);
  pvVar2 = *(void **)&(this->OnChanged_ElapsedCooltime).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChanged_ElapsedCooltime);
  pvVar2 = *(void **)&(this->OnChanged_RemainCooltime).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChanged_RemainCooltime);
  pvVar2 = *(void **)&(this->OnActionFinishDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnActionFinishDelegate);
  pvVar2 = *(void **)&(this->OnCooltimeDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCooltimeDelegate);
  pvVar2 = *(void **)&(this->OnCooltimeStartAndFinishDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCooltimeStartAndFinishDelegate);
  pvVar2 = *(void **)&(this->OnChanged_IsEquipped).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChanged_IsEquipped);
  pvVar2 = *(void **)&(this->OnChanged_CombatPower).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChanged_CombatPower);
  pvVar2 = *(void **)&(this->OnChanged_ItemExp).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChanged_ItemExp);
  pvVar2 = *(void **)&(this->OnChanged_ItemLevel).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChanged_ItemLevel);
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4d5200

UClass * __cdecl UDS_ItemData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ItemData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ItemData",
               &Z_Registration_Info_UClass_UDS_ItemData.InnerSingleton,
               StaticRegisterNativesUDS_ItemData,0x420,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ItemData>,InternalVTableHelperCtorCaller<UDS_ItemData>,
               local_res8,UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ItemData.InnerSingleton;
}

// StaticRegisterNativesUDS_ItemData @ 14b4d5520

void __cdecl UDS_ItemData::StaticRegisterNativesUDS_ItemData(void)

{
  return;
}

// UDS_ItemData @ 14ba91380

UDS_ItemData * __thiscall UDS_ItemData::UDS_ItemData(UDS_ItemData *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  TMap<EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_InventoryType,int,0>_>
  *this_00;
  TMap<EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_InventoryType,int,0>_>
  *this_01;
  TMap<EDS_InventoryType,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_InventoryType,bool,0>_>
  *this_02;
  
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this_00 = &this->StackCount_UnTradable;
  this_01 = &this->StackCount_Tradable;
  this_02 = &this->bIsTrade;
  this->_padding_ = (longlong)&___7UDS_ItemData__6B_;
  puVar1 = &(this->StackCount_UnTradable).field_0xc;
  *(undefined8 *)&this->OnChanged_ItemLevel = 0;
  puVar2 = &(this->StackCount_Tradable).field_0xc;
  *(undefined8 *)&(this->OnChanged_ItemLevel).field_0x8 = 0;
  puVar3 = &(this->bIsTrade).field_0xc;
  *(undefined8 *)&(this->OnChanged_ItemLevel).field_0x10 = 0;
  *(undefined8 *)&this->OnChanged_ItemExp = 0;
  *(undefined8 *)&(this->OnChanged_ItemExp).field_0x8 = 0;
  *(undefined8 *)&(this->OnChanged_ItemExp).field_0x10 = 0;
  *(undefined8 *)&this->OnChanged_CombatPower = 0;
  *(undefined8 *)&(this->OnChanged_CombatPower).field_0x8 = 0;
  *(undefined8 *)&(this->OnChanged_CombatPower).field_0x10 = 0;
  *(undefined8 *)&this->OnChanged_IsEquipped = 0;
  *(undefined8 *)&(this->OnChanged_IsEquipped).field_0x8 = 0;
  *(undefined8 *)&(this->OnChanged_IsEquipped).field_0x10 = 0;
  *(undefined8 *)&this->OnCooltimeStartAndFinishDelegate = 0;
  *(undefined8 *)&(this->OnCooltimeStartAndFinishDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnCooltimeStartAndFinishDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnCooltimeDelegate = 0;
  *(undefined8 *)&(this->OnCooltimeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnCooltimeDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnActionFinishDelegate = 0;
  *(undefined8 *)&(this->OnActionFinishDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnActionFinishDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnChanged_RemainCooltime = 0;
  *(undefined8 *)&(this->OnChanged_RemainCooltime).field_0x8 = 0;
  *(undefined8 *)&(this->OnChanged_RemainCooltime).field_0x10 = 0;
  *(undefined8 *)&this->OnChanged_ElapsedCooltime = 0;
  *(undefined8 *)&(this->OnChanged_ElapsedCooltime).field_0x8 = 0;
  *(undefined8 *)&(this->OnChanged_ElapsedCooltime).field_0x10 = 0;
  *(undefined8 *)&this->OnChanged_ItemNewSymbol = 0;
  *(undefined8 *)&(this->OnChanged_ItemNewSymbol).field_0x8 = 0;
  *(undefined8 *)&(this->OnChanged_ItemNewSymbol).field_0x10 = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined4 *)&(this->StackCount_UnTradable).field_0x8 = 0;
  *(undefined4 *)puVar1 = 0;
  *(undefined8 *)&(this->StackCount_UnTradable).field_0x20 = 0;
  *(undefined4 *)&(this->StackCount_UnTradable).field_0x28 = 0;
  *(undefined4 *)&(this->StackCount_UnTradable).field_0x2c = 0x80;
  *(undefined4 *)&(this->StackCount_UnTradable).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StackCount_UnTradable).field_0x34 = 0;
  *(undefined8 *)&(this->StackCount_UnTradable).field_0x40 = 0;
  *(undefined4 *)&(this->StackCount_UnTradable).field_0x48 = 0;
  *(undefined8 *)this_01 = 0;
  *(undefined4 *)&(this->StackCount_Tradable).field_0x8 = 0;
  *(undefined4 *)puVar2 = 0;
  *(undefined8 *)&(this->StackCount_Tradable).field_0x20 = 0;
  *(undefined4 *)&(this->StackCount_Tradable).field_0x28 = 0;
  *(undefined4 *)&(this->StackCount_Tradable).field_0x2c = 0x80;
  *(undefined4 *)&(this->StackCount_Tradable).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StackCount_Tradable).field_0x34 = 0;
  *(undefined8 *)&(this->StackCount_Tradable).field_0x40 = 0;
  *(undefined4 *)&(this->StackCount_Tradable).field_0x48 = 0;
  *(undefined8 *)&this->UsageInvenSlotCount = 0;
  *(undefined8 *)&(this->UsageInvenSlotCount).field_0x8 = 0;
  *(undefined8 *)&(this->UsageInvenSlotCount).field_0x20 = 0;
  *(undefined4 *)&(this->UsageInvenSlotCount).field_0x28 = 0;
  *(undefined4 *)&(this->UsageInvenSlotCount).field_0x2c = 0x80;
  *(undefined4 *)&(this->UsageInvenSlotCount).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UsageInvenSlotCount).field_0x34 = 0;
  *(undefined8 *)&(this->UsageInvenSlotCount).field_0x40 = 0;
  *(undefined4 *)&(this->UsageInvenSlotCount).field_0x48 = 0;
  this->IsQuantityDirty = false;
  *(undefined8 *)this_02 = 0;
  *(undefined4 *)&(this->bIsTrade).field_0x8 = 0;
  *(undefined4 *)puVar3 = 0;
  *(undefined8 *)&(this->bIsTrade).field_0x20 = 0;
  *(undefined4 *)&(this->bIsTrade).field_0x28 = 0;
  *(undefined4 *)&(this->bIsTrade).field_0x2c = 0x80;
  *(undefined4 *)&(this->bIsTrade).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->bIsTrade).field_0x34 = 0;
  *(undefined8 *)&(this->bIsTrade).field_0x40 = 0;
  *(undefined4 *)&(this->bIsTrade).field_0x48 = 0;
  this->CombatPower = 0;
  this->PassiveSkillID = 0;
  this->bIsEquipped = false;
  this->bIsLock = false;
  this->bIsPlayingCooltime = false;
  this->RemainCooltime = 0.0;
  this->ElapsedCooltime = 0.0;
  this->CoolStartTime = 0.0;
  this->CoolEndTime = 0.0;
  this->PrefixID = 0;
  this->CurrentDurability = 0;
  this->SetEffectID = 0;
  (this->ItemBaseTable)._padding_ = (longlong)&___7FDS_ItemBaseTableRow__6B_;
  (this->ItemBaseTable).ID = 0;
  (this->ItemBaseTable).DataStage = 0;
  (this->ItemBaseTable).ID_Name._padding_ = (longlong)&___7FDS_StringItemID__6B_;
  (this->ItemBaseTable).ID_Name.ID = 0;
  (this->ItemBaseTable).ID_Explain._padding_ = (longlong)&___7FDS_StringItemID__6B_;
  (this->ItemBaseTable).ID_Explain.ID = 0;
  (this->ItemBaseTable).ID_Icon = 0;
  (this->ItemBaseTable).IsEquip = false;
  (this->ItemBaseTable).MainType = None;
  (this->ItemBaseTable).ItemType = None;
  (this->ItemBaseTable).OrderValue = 0;
  (this->ItemBaseTable).ID_GradeType = None;
  (this->ItemBaseTable).SeasonGroup = 0;
  (this->ItemBaseTable).ID_Character.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ItemBaseTable).ID_Character.ArrayNum = 0;
  (this->ItemBaseTable).ID_Character.ArrayMax = 0;
  (this->ItemBaseTable).CharEquipType = None;
  (this->ItemBaseTable).RequireLevel = 0;
  (this->ItemBaseTable).ItemLevel = 0;
  (this->ItemBaseTable).IsLock = false;
  (this->ItemBaseTable).ID_ResourceParts = 0;
  (this->ItemBaseTable).StackCount = 0;
  (this->ItemBaseTable).MaxOwnedCount = 0;
  (this->ItemBaseTable).IsTradeTemper = false;
  (this->ItemBaseTable).IsSellAble = false;
  (this->ItemBaseTable).SellPrice = 0;
  (this->ItemBaseTable).Weight = 0;
  (this->ItemBaseTable).Durability = 0;
  (this->ItemBaseTable).ID_Repair = 0;
  (this->ItemBaseTable).ID_Restore = 0;
  (this->ItemBaseTable).ID_Dismantle = 0;
  (this->ItemBaseTable).ID_Ability = 0;
  (this->ItemBaseTable).ID_TemplateType = None;
  (this->ItemBaseTable).ID_Template = 0;
  (this->ItemBaseTable).ItemTypeValue = 0;
  (this->ItemBaseTable).IsEnchantAble = false;
  (this->ItemBaseTable).ID_ItemEnchant = 0;
  (this->ItemBaseTable).IsPrefixAble = false;
  (this->ItemBaseTable).ID_PrefixGroup = 0;
  (this->ItemBaseTable).PrefixProbability = 0;
  (this->ItemBaseTable).IsPassiveAble = false;
  (this->ItemBaseTable).ID_ItemPassiveGroup = 0;
  (this->ItemBaseTable).ItemPassiveProbability = 0;
  (this->ItemBaseTable).IsSetEffectAble = false;
  (this->ItemBaseTable).ID_SetEffectGroup = 0;
  (this->ItemBaseTable).SetEffectProbability = 0;
  (this->ItemBaseTable).ID_GemSocketList = 0;
  (this->ItemBaseTable).IsDestructionAble = false;
  (this->ItemBaseTable).IndividualCoolTime = 0.0;
  (this->ItemBaseTable).ID_CoolDown = None;
  (this->ItemBaseTable).IsRingCmdAble = false;
  (this->ItemBaseTable).ID_ItemAction = 0;
  (this->ItemBaseTable).ID_ItemCooking = 0;
  (this->ItemBaseTable).IsMountInventory = false;
  (this->ItemBaseTable).IsMountFoundAble = false;
  (this->EnableInventoryTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EnableInventoryTypes).ArrayNum = 0;
  (this->EnableInventoryTypes).ArrayMax = 0;
  this->bIsAutoUse = false;
  (this->ItemTypeSymbolData).Object = (FDS_ItemTypeSymbolData *)0x0;
  (this->ItemTypeSymbolData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->ItemUpdateEntry = None;
  this->ItemUID = 0;
  this->ItemTID = 0;
  if (*(int *)&(this->StackCount_UnTradable).field_0x8 !=
      *(int *)&(this->StackCount_UnTradable).field_0x34) {
    TSet<TTuple<enum_EDS_InventoryType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
    *(undefined4 *)&(this->StackCount_UnTradable).field_0x8 = 0;
    if (*(int *)puVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->StackCount_UnTradable).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->StackCount_UnTradable).field_0x34 = 0;
    *(undefined4 *)&(this->StackCount_UnTradable).field_0x28 = 0;
  }
  if (*(int *)&(this->StackCount_Tradable).field_0x8 !=
      *(int *)&(this->StackCount_Tradable).field_0x34) {
    TSet<TTuple<enum_EDS_InventoryType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>,FDefaultSetAllocator>
    ::UnhashElements(this_01);
    *(undefined4 *)&(this->StackCount_Tradable).field_0x8 = 0;
    if (*(int *)puVar2 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)this_01,0,(int *)puVar2);
    }
    *(undefined4 *)&(this->StackCount_Tradable).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->StackCount_Tradable).field_0x34 = 0;
    *(undefined4 *)&(this->StackCount_Tradable).field_0x28 = 0;
  }
  if (*(int *)&(this->bIsTrade).field_0x8 != *(int *)&(this->bIsTrade).field_0x34) {
    TSet<TTuple<enum_EDS_InventoryType,bool>,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,bool,0>,FDefaultSetAllocator>
    ::UnhashElements(this_02);
    *(undefined4 *)&(this->bIsTrade).field_0x8 = 0;
    if (*(int *)puVar3 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)this_02,0,(int *)puVar3);
    }
    *(undefined4 *)&(this->bIsTrade).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->bIsTrade).field_0x34 = 0;
    *(undefined4 *)&(this->bIsTrade).field_0x28 = 0;
  }
  this->CombatPower = 0;
  this->bIsEquipped = false;
  this->bIsPlayingCooltime = false;
  this->RemainCooltime = 0.0;
  this->ElapsedCooltime = 0.0;
  this->CoolStartTime = 0.0;
  this->CoolEndTime = 0.0;
  return this;
}

// Cancel @ 14ba959f0

void __thiscall UDS_ItemData::Cancel(UDS_ItemData *this)

{
  this->bIsPlayingCooltime = false;
  this->RemainCooltime = 0.0;
  this->CoolStartTime = 0.0;
  this->CoolEndTime = 0.0;
  this->ElapsedCooltime = 0.0;
  FDS_ItemDataCooltimeStart_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->OnCooltimeStartAndFinishDelegate,this);
  return;
}

// Created @ 14ba9d550

void __thiscall UDS_ItemData::Created(UDS_ItemData *this)

{
  return;
}

// Deleted @ 14ba9dc80

void __thiscall UDS_ItemData::Deleted(UDS_ItemData *this)

{
  return;
}

// EquipItem @ 14ba9e6a0

void __thiscall UDS_ItemData::EquipItem(UDS_ItemData *this,EDS_EquipSlotType param_1)

{
  FDS_DataPropertyDelegate_bool_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnChanged_IsEquipped,
             true);
  return;
}

// FindOrAddData @ 14baa1030

TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> __cdecl
UDS_ItemData::FindOrAddData(ulong64 param_1,ulong64 param_2)

{
  bool in_R8B;
  
  GetData(param_1,param_2,in_R8B);
  return (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// FinishCooltime @ 14baa1110

void __thiscall UDS_ItemData::FinishCooltime(UDS_ItemData *this)

{
  this->bIsPlayingCooltime = false;
  this->RemainCooltime = 0.0;
  this->CoolStartTime = 0.0;
  this->CoolEndTime = 0.0;
  this->ElapsedCooltime = 0.0;
  FDS_ItemDataCooltimeStart_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->OnCooltimeStartAndFinishDelegate,this);
  return;
}

// GetActionCooltime @ 14baa3780

float __thiscall UDS_ItemData::GetActionCooltime(UDS_ItemData *this)

{
  float fVar1;
  
  fVar1 = DS_ItemDataUtil::GetActionCooltime(this->ItemTID);
  return fVar1;
}

// GetCooltime @ 14baa6070

float __thiscall UDS_ItemData::GetCooltime(UDS_ItemData *this,EDS_ItemCooltimeType param_1)

{
  FDS_TimeCoolDownTableRow *pFVar1;
  
  if (param_1 == IndividualCooltime) {
    return (this->ItemBaseTable).IndividualCoolTime;
  }
  if (param_1 != GroupCooltime) {
    return 0.0;
  }
  pFVar1 = FDS_ItemBaseTableRow::ID_CoolDownTable(&this->ItemBaseTable);
  return pFVar1->CoolTime;
}

// GetCooltime @ 14baa60b0

float __thiscall UDS_ItemData::GetCooltime(UDS_ItemData *this)

{
  return (float)(this->CoolEndTime - this->CoolStartTime);
}

// GetData @ 14baa6c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> __cdecl
UDS_ItemData::GetData(ulong64 param_1,ulong64 param_2,bool param_3)

{
  int iVar1;
  bool bVar2;
  UDS_DataSetBase *pUVar3;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> TVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  longlong *plVar7;
  undefined7 in_register_00000081;
  char in_R9B;
  undefined1 auStack_f8 [32];
  FWeakObjectPtr local_d8;
  UObject *local_d0;
  FWeakObjectPtr local_c8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if (in_R9B == '\0') {
    TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_c8);
    bVar2 = TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> *)&local_c8,(void *)0x0);
    if (bVar2) goto LAB_14baa6ebf;
    pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
    TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_c0);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
    if (pUVar5 == (UObject *)0x0) {
LAB_14baa6ccb:
      pUVar5 = (UObject *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UDS_ItemData_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) goto LAB_14baa6ccb;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_d8.ObjectIndex = 0;
    local_d8.ObjectSerialNumber = 0;
    local_d0 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&local_d8,(FObjectPtr)&local_d0);
    bVar2 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_d8,(void *)0x0);
    if (!bVar2) {
      *(FWeakObjectPtr *)param_1 = local_d8;
      return (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
    }
  }
  else {
    TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_c8);
    bVar2 = TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> *)&local_c8,(void *)0x0);
    if (!bVar2) {
      pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
      TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_c0);
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
      if (pUVar5 == (UObject *)0x0) {
LAB_14baa6d95:
        pUVar5 = (UObject *)0x0;
      }
      else {
        pUVar6 = Z_Construct_UClass_UDS_ItemData_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) goto LAB_14baa6d95;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      local_d8.ObjectIndex = 0;
      local_d8.ObjectSerialNumber = 0;
      local_d0 = pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      FWeakObjectPtr::operator=(&local_d8,(FObjectPtr)&local_d0);
      bVar2 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_d8,(void *)0x0);
      if (!bVar2) {
        *(FWeakObjectPtr *)param_1 = local_d8;
        return (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pUVar5 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar5,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar6 = Z_Construct_UClass_UDS_ItemData_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_b8,pUVar6);
      local_b8._8_8_ = pUVar5;
      pUVar5 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
      if (local_b8._64_8_ != 0) {
        plVar7 = (longlong *)(local_b8 + 0x50);
        if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
          plVar7 = (longlong *)local_b8._104_8_;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (pUVar5 != (UObject *)0x0) {
        pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
        local_d0 = pUVar5;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        bVar2 = UDS_DataSetBase::AddData
                          (pUVar3,CONCAT71(in_register_00000081,param_3),
                           (TObjectPtr<UDS_DataBase>)&local_d0);
        if (bVar2) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          *(undefined8 *)param_1 = 0;
          local_d0 = pUVar5;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          goto LAB_14baa6ec6;
        }
      }
    }
  }
LAB_14baa6ebf:
  *(undefined8 *)param_1 = 0;
  local_d0 = (UObject *)0x0;
LAB_14baa6ec6:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_d0);
  return (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetDurabilityIconID @ 14baa9790

int __thiscall UDS_ItemData::GetDurabilityIconID(UDS_ItemData *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ForAnyElementType FVar10;
  undefined1 local_res8 [8];
  TArray<FDS_SustainPenaltyTableRow_const_*,TSizedDefaultAllocator<32>_> local_28;
  
  iVar8 = (this->ItemBaseTable).Durability;
  if (iVar8 < 1) {
    iVar8 = 1;
  }
  iVar2 = this->CurrentDurability;
  FDS_SustainPenaltyTableRow::GetAll(&local_28);
  iVar5 = local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
  FVar10.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if (local_28.ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FDS_SustainPenaltyTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar10.Data == pFVar1) break;
    lVar3 = *(longlong *)FVar10.Data;
    if ((((lVar3 != 0) &&
         (iVar9 = *(int *)(lVar3 + 0x10), iVar7 = DS_CommonDataHelper::ItemDurabilityPenaltyGroup(),
         iVar9 == iVar7)) &&
        (iVar9 = (int)((ulonglong)((longlong)iVar2 * 1000000) / (ulonglong)(longlong)iVar8),
        *(int *)(lVar3 + 0x18) <= iVar9)) && (iVar9 < *(int *)(lVar3 + 0x1c))) {
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      return *(int *)(lVar3 + 0x40);
    }
    FVar10.Data = FVar10.Data + 8;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2839815002972487000>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Item\\DS_ItemData.cpp"
                     ,0x2a8,"false");
  if (!bVar6) {
    return 0;
  }
  pcVar4 = (code *)swi(3);
  iVar8 = (*pcVar4)();
  return iVar8;
}

// GetDurabilityPartsPerMilion @ 14baa98a0

int __thiscall UDS_ItemData::GetDurabilityPartsPerMilion(UDS_ItemData *this)

{
  int iVar1;
  
  iVar1 = (this->ItemBaseTable).Durability;
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  return (int)((ulonglong)((longlong)this->CurrentDurability * 1000000) / (ulonglong)(longlong)iVar1
              );
}

// GetDurabilitySustainPenaltyTable @ 14baa98d0

FDS_SustainPenaltyTableRow * __thiscall
UDS_ItemData::GetDurabilitySustainPenaltyTable(UDS_ItemData *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FDS_SustainPenaltyTableRow *pFVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ForAnyElementType FVar8;
  undefined1 local_res8 [8];
  TArray<FDS_SustainPenaltyTableRow_const_*,TSizedDefaultAllocator<32>_> local_28;
  
  iVar2 = (this->ItemBaseTable).Durability;
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  iVar3 = this->CurrentDurability;
  FDS_SustainPenaltyTableRow::GetAll(&local_28);
  iVar5 = local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
  FVar8.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if (local_28.ArrayNum != iVar5) {
      `TCheckedPointerIterator<FDS_SustainPenaltyTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar8.Data == pFVar1) break;
    pFVar4 = *(FDS_SustainPenaltyTableRow **)FVar8.Data;
    if ((((pFVar4 != (FDS_SustainPenaltyTableRow *)0x0) &&
         (iVar7 = pFVar4->Group, iVar6 = DS_CommonDataHelper::ItemDurabilityPenaltyGroup(),
         iVar7 == iVar6)) &&
        (iVar7 = (int)((ulonglong)((longlong)iVar3 * 1000000) / (ulonglong)(longlong)iVar2),
        pFVar4->MinRate <= iVar7)) && (iVar7 < pFVar4->MaxRate)) {
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      return pFVar4;
    }
    FVar8.Data = FVar8.Data + 8;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return (FDS_SustainPenaltyTableRow *)0x0;
}

// GetEnableInventoryTypes @ 14baa9a30

TArray<EDS_InventoryType,TSizedDefaultAllocator<32>_> * __thiscall
UDS_ItemData::GetEnableInventoryTypes
          (UDS_ItemData *this,
          TArray<EDS_InventoryType,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->EnableInventoryTypes).ArrayNum;
  _Src = (this->EnableInventoryTypes).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1);
  return __return_storage_ptr__;
}

// GetEquipCharID @ 14baa9ba0

int __thiscall UDS_ItemData::GetEquipCharID(UDS_ItemData *this)

{
  return 1;
}

// GetEquippedGemTID @ 14baa9e50

int __thiscall UDS_ItemData::GetEquippedGemTID(UDS_ItemData *this,EDS_GemSocketIndex param_1)

{
  return this->GemTID[param_1];
}

// GetGemSocketTID @ 14baaae40

int __thiscall UDS_ItemData::GetGemSocketTID(UDS_ItemData *this,EDS_GemSocketIndex param_1)

{
  return this->GemSocketTID[param_1];
}

// GetItemEnchantTable @ 14baac3c0

FDS_ItemEnchantTableRow * __thiscall UDS_ItemData::GetItemEnchantTable(UDS_ItemData *this)

{
  FDS_ItemEnchantTableRow *pFVar1;
  
  pFVar1 = FDS_ItemEnchantTableRow::Get((longlong)(this->ItemBaseTable).ID_ItemEnchant,true);
  return pFVar1;
}

// GetItemName @ 14baac4f0

FString * __thiscall UDS_ItemData::GetItemName(UDS_ItemData *this,FString *__return_storage_ptr__)

{
  DS_ItemDataUtil::GetItemNameByTID(__return_storage_ptr__,this->ItemTID);
  return __return_storage_ptr__;
}

// GetSlotType @ 14bab01d0

EDS_SlotType __thiscall UDS_ItemData::GetSlotType(UDS_ItemData *this)

{
  EDS_SlotType EVar1;
  
  EVar1 = DS_ItemDataUtil::GetSlotType((this->ItemBaseTable).ItemType);
  return EVar1;
}

// GetStackCount_Total @ 14bab01f0

int __thiscall UDS_ItemData::GetStackCount_Total(UDS_ItemData *this,EDS_InventoryType param_1)

{
  int *piVar1;
  int *piVar2;
  EDS_InventoryType local_res10 [24];
  
  local_res10[0] = param_1;
  piVar1 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
           ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                     (&this->StackCount_Tradable,(uint)param_1,local_res10);
  piVar2 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
           ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                     (&this->StackCount_UnTradable,(uint)local_res10[0],local_res10);
  return *piVar1 + *piVar2;
}

// GetStackCount_UnTradable @ 14bab0250

int __thiscall UDS_ItemData::GetStackCount_UnTradable(UDS_ItemData *this,EDS_InventoryType param_1)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->StackCount_UnTradable).field_0x8 !=
      *(int *)&(this->StackCount_UnTradable).field_0x34) {
    puVar4 = *(undefined1 **)&(this->StackCount_UnTradable).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->StackCount_UnTradable).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + ((ulonglong)(*(int *)&(this->StackCount_UnTradable).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->StackCount_UnTradable;
      do {
        if (*(EDS_InventoryType *)(lVar1 + (longlong)iVar2 * 0x10) == param_1) {
          piVar3 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                   ::FindChecked(&this->StackCount_UnTradable,param_1);
          return *piVar3;
        }
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  return 0;
}

// GetUsageType @ 14bab1100

EDS_ItemUsageType __thiscall UDS_ItemData::GetUsageType(UDS_ItemData *this)

{
  FDS_ItemBaseTableRow *pFVar1;
  
  pFVar1 = FDS_ItemBaseTableRow::Get((longlong)this->ItemTID,true);
  if (pFVar1 == (FDS_ItemBaseTableRow *)0x0) {
    return Etc;
  }
  return (pFVar1->ID_ItemEnchant < 1) + EnchantScroll;
}

// IniItemTableData @ 14bab2c90

void __thiscall UDS_ItemData::IniItemTableData(UDS_ItemData *this)

{
  code *pcVar1;
  bool bVar2;
  FDS_ItemBaseTableRow *pFVar3;
  
  pFVar3 = FDS_ItemBaseTableRow::Get((longlong)this->ItemTID,true);
  if (pFVar3 == (FDS_ItemBaseTableRow *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2839815002972487028>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Item\\DS_ItemData.cpp"
                       ,0x28c,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    (this->ItemBaseTable).ID = pFVar3->ID;
    (this->ItemBaseTable).DataStage = pFVar3->DataStage;
    (this->ItemBaseTable).ID_Name.ID = (pFVar3->ID_Name).ID;
    (this->ItemBaseTable).ID_Explain.ID = (pFVar3->ID_Explain).ID;
    (this->ItemBaseTable).ID_Icon = pFVar3->ID_Icon;
    (this->ItemBaseTable).IsEquip = pFVar3->IsEquip;
    (this->ItemBaseTable).MainType = pFVar3->MainType;
    (this->ItemBaseTable).ItemType = pFVar3->ItemType;
    (this->ItemBaseTable).OrderValue = pFVar3->OrderValue;
    (this->ItemBaseTable).ID_GradeType = pFVar3->ID_GradeType;
    (this->ItemBaseTable).SeasonGroup = pFVar3->SeasonGroup;
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              (&(this->ItemBaseTable).ID_Character,&pFVar3->ID_Character);
    (this->ItemBaseTable).CharEquipType = pFVar3->CharEquipType;
    (this->ItemBaseTable).RequireLevel = pFVar3->RequireLevel;
    (this->ItemBaseTable).ItemLevel = pFVar3->ItemLevel;
    (this->ItemBaseTable).IsLock = pFVar3->IsLock;
    (this->ItemBaseTable).ID_ResourceParts = pFVar3->ID_ResourceParts;
    (this->ItemBaseTable).StackCount = pFVar3->StackCount;
    (this->ItemBaseTable).MaxOwnedCount = pFVar3->MaxOwnedCount;
    (this->ItemBaseTable).IsTradeTemper = pFVar3->IsTradeTemper;
    (this->ItemBaseTable).IsSellAble = pFVar3->IsSellAble;
    (this->ItemBaseTable).SellPrice = pFVar3->SellPrice;
    (this->ItemBaseTable).Weight = pFVar3->Weight;
    (this->ItemBaseTable).Durability = pFVar3->Durability;
    (this->ItemBaseTable).ID_Repair = pFVar3->ID_Repair;
    (this->ItemBaseTable).ID_Restore = pFVar3->ID_Restore;
    (this->ItemBaseTable).ID_Dismantle = pFVar3->ID_Dismantle;
    (this->ItemBaseTable).ID_Ability = pFVar3->ID_Ability;
    (this->ItemBaseTable).ID_TemplateType = pFVar3->ID_TemplateType;
    (this->ItemBaseTable).ID_Template = pFVar3->ID_Template;
    (this->ItemBaseTable).ItemTypeValue = pFVar3->ItemTypeValue;
    (this->ItemBaseTable).IsEnchantAble = pFVar3->IsEnchantAble;
    (this->ItemBaseTable).ID_ItemEnchant = pFVar3->ID_ItemEnchant;
    (this->ItemBaseTable).IsPrefixAble = pFVar3->IsPrefixAble;
    (this->ItemBaseTable).ID_PrefixGroup = pFVar3->ID_PrefixGroup;
    (this->ItemBaseTable).PrefixProbability = pFVar3->PrefixProbability;
    (this->ItemBaseTable).IsPassiveAble = pFVar3->IsPassiveAble;
    (this->ItemBaseTable).ID_ItemPassiveGroup = pFVar3->ID_ItemPassiveGroup;
    (this->ItemBaseTable).ItemPassiveProbability = pFVar3->ItemPassiveProbability;
    (this->ItemBaseTable).IsSetEffectAble = pFVar3->IsSetEffectAble;
    (this->ItemBaseTable).ID_SetEffectGroup = pFVar3->ID_SetEffectGroup;
    (this->ItemBaseTable).SetEffectProbability = pFVar3->SetEffectProbability;
    (this->ItemBaseTable).ID_GemSocketList = pFVar3->ID_GemSocketList;
    (this->ItemBaseTable).IsDestructionAble = pFVar3->IsDestructionAble;
    (this->ItemBaseTable).IndividualCoolTime = pFVar3->IndividualCoolTime;
    (this->ItemBaseTable).ID_CoolDown = pFVar3->ID_CoolDown;
    (this->ItemBaseTable).IsRingCmdAble = pFVar3->IsRingCmdAble;
    (this->ItemBaseTable).ID_ItemAction = pFVar3->ID_ItemAction;
    (this->ItemBaseTable).ID_ItemCooking = pFVar3->ID_ItemCooking;
    (this->ItemBaseTable).IsMountInventory = pFVar3->IsMountInventory;
    (this->ItemBaseTable).IsMountFoundAble = pFVar3->IsMountFoundAble;
    InitInventoryType(this);
    UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  }
  return;
}

// InitInventoryType @ 14bab5100

void __thiscall UDS_ItemData::InitInventoryType(UDS_ItemData *this)

{
  int *piVar1;
  TArray<EDS_InventoryType,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement local_18;
  FScriptContainerElement local_17;
  FScriptContainerElement local_16 [14];
  
  pTVar2 = &this->EnableInventoryTypes;
  piVar1 = &(this->EnableInventoryTypes).ArrayMax;
  (this->EnableInventoryTypes).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  local_18 = (FScriptContainerElement)0x1;
  if ((pFVar3 <= &local_18) && (&local_18 < pFVar3 + *piVar1)) {
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
  iVar6 = (this->EnableInventoryTypes).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->EnableInventoryTypes).ArrayNum = iVar6 + 1;
  local_17 = (FScriptContainerElement)0x3;
  (pTVar2->AllocatorInstance).Data[iVar6] = local_18;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= &local_17) && (&local_17 < pFVar3 + *piVar1)) {
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
  iVar6 = (this->EnableInventoryTypes).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->EnableInventoryTypes).ArrayNum = iVar6 + 1;
  (pTVar2->AllocatorInstance).Data[iVar6] = local_17;
  if ((this->ItemBaseTable).IsMountInventory != false) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    local_16[0] = (FScriptContainerElement)0x6;
    if ((pFVar3 <= local_16) && (local_16 < pFVar3 + *piVar1)) {
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
    iVar6 = (this->EnableInventoryTypes).ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->EnableInventoryTypes).ArrayNum = iVar6 + 1;
    (pTVar2->AllocatorInstance).Data[iVar6] = local_16[0];
  }
  return;
}

// IsAbleSell @ 14bab68e0

bool __thiscall UDS_ItemData::IsAbleSell(UDS_ItemData *this)

{
  bool bVar1;
  bool bVar2;
  TWeakObjectPtr<UDS_QuickSlotDeckDataSet,FWeakObjectPtr> this_00;
  UDS_QuickSlotDeckDataSet *this_01;
  UDS_QuickSlotDeckData *this_02;
  FWeakObjectPtr local_res8;
  undefined1 local_res10 [8];
  TSharedPtr<FDS_QuickSlotData,1> local_18;
  
  bVar1 = IsEquipped(this);
  this_00 = TDS_DataSetGetter<UDS_QuickSlotDeckDataSet>::Get((ulong64)local_res10);
  this_01 = (UDS_QuickSlotDeckDataSet *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (this_01 != (UDS_QuickSlotDeckDataSet *)0x0) {
    UDS_QuickSlotDeckDataSet::GetCurrentQuickSlotDeckData(this_01);
    bVar2 = TWeakObjectPtr<UDS_QuickSlotDeckData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_QuickSlotDeckData,FWeakObjectPtr> *)&local_res8,
                       (void *)0x0);
    if (!bVar2) {
      this_02 = (UDS_QuickSlotDeckData *)FWeakObjectPtr::Get(&local_res8);
      UDS_QuickSlotDeckData::GetQuickSlotDataByUID(this_02,&local_18,this->ItemUID);
      if (local_18.Object != (FDS_QuickSlotData *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
        bVar2 = true;
        goto LAB_14bab696b;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  bVar2 = false;
LAB_14bab696b:
  if ((((this->ItemBaseTable).IsSellAble == true) && (0 < (this->ItemBaseTable).SellPrice)) &&
     (!bVar1)) {
    return !bVar2;
  }
  return false;
}

// IsActionimeInProgress @ 14bab6a50

bool __thiscall UDS_ItemData::IsActionimeInProgress(UDS_ItemData *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res10 [3];
  
  TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)local_res10);
  bVar2 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(local_res10);
    return 0.0 < *(float *)&pUVar4[0x11].field_0x8;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8101333524654588569>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Item\\DS_ItemDataUtil.cpp"
                     ,0x299,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// IsAvailableEquipGem @ 14bab6d60

bool __thiscall UDS_ItemData::IsAvailableEquipGem(UDS_ItemData *this)

{
  FDS_ItemGemSocketTableRow *pFVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 1;
  do {
    if (this->GemSocketTID[uVar3 & 0xff] != 0) {
      pFVar1 = FDS_ItemGemSocketTableRow::Get((longlong)this->GemSocketTID[uVar3 & 0xff],false);
      if (pFVar1 != (FDS_ItemGemSocketTableRow *)0x0) {
        return true;
      }
    }
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
  } while ((int)uVar2 < 4);
  return false;
}

// IsAvailableGemSocket @ 14bab6dd0

bool __thiscall UDS_ItemData::IsAvailableGemSocket(UDS_ItemData *this,EDS_GemSocketIndex param_1)

{
  FDS_ItemGemSocketTableRow *pFVar1;
  
  if (this->GemSocketTID[param_1] == 0) {
    return false;
  }
  pFVar1 = FDS_ItemGemSocketTableRow::Get((longlong)this->GemSocketTID[param_1],false);
  return pFVar1 != (FDS_ItemGemSocketTableRow *)0x0;
}

// IsCooltimeInProgress @ 14bab7650

bool __thiscall UDS_ItemData::IsCooltimeInProgress(UDS_ItemData *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  UObject *pUVar6;
  undefined1 *puVar7;
  FWeakObjectPtr local_res8 [4];
  
  uVar1 = this->ItemTID;
  TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)local_res8);
  bVar3 = FWeakObjectPtr::IsValid(local_res8);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8101333524654588560>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Item\\DS_ItemDataUtil.cpp"
                       ,0x290,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    return false;
  }
  pUVar6 = FWeakObjectPtr::Get(local_res8);
  if (*(int *)&pUVar6[0x11].field_0x18 != *(int *)&pUVar6[0x12].field_0x1c) {
    puVar7 = *(undefined1 **)(pUVar6 + 0x13);
    if (*(undefined1 **)(pUVar6 + 0x13) == (undefined1 *)0x0) {
      puVar7 = &pUVar6[0x12].field_0x20;
    }
    iVar5 = *(int *)(puVar7 + (ulonglong)(*(int *)&pUVar6[0x13].field_0x8 - 1U & uVar1) * 4);
    if (iVar5 != -1) {
      do {
        if (*(uint *)(*(longlong *)&pUVar6[0x11].field_0x10 + (longlong)iVar5 * 0x14) == uVar1)
        goto LAB_14bab771c;
        iVar5 = *(int *)(*(longlong *)&pUVar6[0x11].field_0x10 + 0xc + (longlong)iVar5 * 0x14);
      } while (iVar5 != -1);
    }
  }
  iVar5 = -1;
LAB_14bab771c:
  return iVar5 != -1;
}

// IsEnchantAble @ 14bab7e50

bool __thiscall UDS_ItemData::IsEnchantAble(UDS_ItemData *this)

{
  return (this->ItemBaseTable).IsEnchantAble;
}

// IsEquipped @ 14bab7e60

bool __thiscall UDS_ItemData::IsEquipped(UDS_ItemData *this,int param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDS_EquipmentItemCharacterData *this_00;
  bool bVar3;
  TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> this_01;
  UObject *pUVar4;
  UClass *pUVar5;
  FWeakObjectPtr FStackX_10;
  UObject *apUStackX_18 [2];
  
  this_01 = UDS_DataBase::GetMyDataSet((UDS_DataBase *)this);
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_ItemDataSet_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14bab7ebc;
  }
  pUVar4 = (UObject *)0x0;
LAB_14bab7ebc:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FStackX_10.ObjectIndex = 0;
  FStackX_10.ObjectSerialNumber = 0;
  apUStackX_18[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&FStackX_10,(FObjectPtr)apUStackX_18);
  bVar3 = FWeakObjectPtr::IsValid(&FStackX_10);
  if (!bVar3) {
    return false;
  }
  pUVar4 = FWeakObjectPtr::Get(&FStackX_10);
  pTVar2 = *(TReferenceControllerBase<1> **)&pUVar4[4].field_0x18;
  this_00 = *(FDS_EquipmentItemCharacterData **)&pUVar4[4].field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 == (FDS_EquipmentItemCharacterData *)0x0) {
    bVar3 = false;
  }
  else {
    bVar3 = FDS_EquipmentItemCharacterData::IsEquippedByUID(this_00,this->ItemUID);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return bVar3;
}

// IsEquipped @ 14bab7e70

bool __thiscall UDS_ItemData::IsEquipped(UDS_ItemData *this)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDS_EquipmentItemCharacterData *this_00;
  bool bVar3;
  TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> this_01;
  UObject *pUVar4;
  UClass *pUVar5;
  FWeakObjectPtr local_res10;
  UObject *local_res18 [2];
  
  this_01 = UDS_DataBase::GetMyDataSet((UDS_DataBase *)this);
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_ItemDataSet_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14bab7ebc;
  }
  pUVar4 = (UObject *)0x0;
LAB_14bab7ebc:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar3) {
    return false;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_res10);
  pTVar2 = *(TReferenceControllerBase<1> **)&pUVar4[4].field_0x18;
  this_00 = *(FDS_EquipmentItemCharacterData **)&pUVar4[4].field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 == (FDS_EquipmentItemCharacterData *)0x0) {
    bVar3 = false;
  }
  else {
    bVar3 = FDS_EquipmentItemCharacterData::IsEquippedByUID(this_00,this->ItemUID);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return bVar3;
}

// IsItemUpdateEntry @ 14bab9bc0

bool __thiscall UDS_ItemData::IsItemUpdateEntry(UDS_ItemData *this,EDS_ItemUpdate param_1)

{
  return (this->ItemUpdateEntry & param_1) != None;
}

// IsMountInventory @ 14baba330

bool __thiscall UDS_ItemData::IsMountInventory(UDS_ItemData *this)

{
  return (this->ItemBaseTable).IsMountInventory;
}

// IsNewSymbol @ 14baba3c0

bool __thiscall UDS_ItemData::IsNewSymbol(UDS_ItemData *this)

{
  return (this->ItemTypeSymbolData).Object != (FDS_ItemTypeSymbolData *)0x0;
}

// IsRegisteredQuickSlot @ 14baba6d0

bool __thiscall UDS_ItemData::IsRegisteredQuickSlot(UDS_ItemData *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_QuickSlotDeckDataSet,FWeakObjectPtr> this_00;
  UDS_QuickSlotDeckDataSet *this_01;
  UDS_QuickSlotDeckData *this_02;
  FWeakObjectPtr local_res10;
  undefined1 local_res18 [16];
  TSharedPtr<FDS_QuickSlotData,1> local_18;
  
  this_00 = TDS_DataSetGetter<UDS_QuickSlotDeckDataSet>::Get((ulong64)local_res18);
  this_01 = (UDS_QuickSlotDeckDataSet *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (this_01 != (UDS_QuickSlotDeckDataSet *)0x0) {
    UDS_QuickSlotDeckDataSet::GetCurrentQuickSlotDeckData(this_01);
    bVar1 = TWeakObjectPtr<UDS_QuickSlotDeckData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_QuickSlotDeckData,FWeakObjectPtr> *)&local_res10,
                       (void *)0x0);
    if (!bVar1) {
      this_02 = (UDS_QuickSlotDeckData *)FWeakObjectPtr::Get(&local_res10);
      UDS_QuickSlotDeckData::GetQuickSlotDataByUID(this_02,&local_18,this->ItemUID);
      if (local_18.Object != (FDS_QuickSlotData *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
        return true;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  return false;
}

// IsTrade @ 14babb030

bool __thiscall UDS_ItemData::IsTrade(UDS_ItemData *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  bool *pbVar6;
  undefined1 *puVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  pFVar8 = (this->EnableInventoryTypes).AllocatorInstance.Data;
  iVar3 = (this->EnableInventoryTypes).ArrayNum;
  pFVar1 = pFVar8 + iVar3;
  do {
    while( true ) {
      if ((this->EnableInventoryTypes).ArrayNum != iVar3) {
        `TCheckedPointerIterator<enum_EDS_InventoryType,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar8 == pFVar1) {
        return false;
      }
      FVar2 = *pFVar8;
      if (*(int *)&(this->bIsTrade).field_0x8 != *(int *)&(this->bIsTrade).field_0x34) break;
LAB_14babb0f0:
      pFVar8 = pFVar8 + 1;
    }
    puVar4 = *(undefined1 **)&(this->bIsTrade).field_0x40;
    puVar7 = &(this->bIsTrade).field_0x38;
    if (puVar4 != (undefined1 *)0x0) {
      puVar7 = puVar4;
    }
    iVar5 = *(int *)(puVar7 + ((ulonglong)(*(int *)&(this->bIsTrade).field_0x48 - 1) &
                              (ulonglong)(byte)FVar2) * 4);
    if (iVar5 == -1) goto LAB_14babb0f0;
    do {
      if (*(FScriptContainerElement *)(*(longlong *)&this->bIsTrade + (longlong)iVar5 * 0xc) ==
          FVar2) {
        pbVar6 = TMapBase<enum_EDS_InventoryType,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,bool,0>_>
                 ::FindChecked(&this->bIsTrade,(EDS_InventoryType)FVar2);
        if (*pbVar6 != false) {
          return true;
        }
        goto LAB_14babb0f0;
      }
      iVar5 = *(int *)(*(longlong *)&this->bIsTrade + 4 + (longlong)iVar5 * 0xc);
    } while (iVar5 != -1);
    pFVar8 = pFVar8 + 1;
  } while( true );
}

// MakeItemEquipmentTable @ 14babbb50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ItemData::MakeItemEquipmentTable(UDS_ItemData *this,SqlItemEquipmentTable *param_1)

{
  RepeatedField<int> *pRVar1;
  FScriptContainerElement *pFVar2;
  int *piVar3;
  FScriptContainerElement FVar4;
  ulonglong uVar5;
  bool bVar6;
  int iVar7;
  bool *pbVar8;
  UDS_LogManager *pUVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  undefined1 auStackY_198 [32];
  undefined1 local_168 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  (param_1->_impl_).item_uid_ = this->ItemUID;
  (param_1->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0] | 2;
  uVar17 = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_).item_id_ = this->ItemTID;
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar17 | 4;
  (param_1->_impl_).passive_skill_id_ = this->PassiveSkillID;
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar17 | 0x404;
  (param_1->_impl_).prefix_ = this->PrefixID;
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar17 | 0x604;
  pFVar14 = (this->EnableInventoryTypes).AllocatorInstance.Data;
  iVar11 = (this->EnableInventoryTypes).ArrayNum;
  pFVar2 = pFVar14 + iVar11;
LAB_14babbbd0:
  do {
    if ((this->EnableInventoryTypes).ArrayNum != iVar11) {
      `TCheckedPointerIterator<enum_EDS_InventoryType,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_168);
    }
    if (pFVar14 == pFVar2) {
      bVar6 = false;
LAB_14babbc6e:
      (param_1->_impl_).is_trade_ = bVar6;
      pRVar1 = &(param_1->_impl_).item_gem_socket_tid_;
      (param_1->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0] | 0x40;
      if (pRVar1 == (RepeatedField<int> *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_ItemData::MakeItemEquipmentTable",0x24,Yes);
          UDS_LogManager::PrintLog
                    (pUVar9,1,Warning,local_158.Ptr,0x26c,L"item_gem_socket_tid == nullptr");
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
      }
      else {
        iVar7 = DS_CommonDataHelper::MaxGemSocket();
        uVar13 = (pRVar1->soo_rep_).field0_0x0.long_rep.elements_int;
        iVar18 = 2;
        iVar11 = 2;
        if ((uVar13 & 4) != 0) {
          iVar11 = (param_1->_impl_).item_gem_socket_tid_.soo_rep_.field0_0x0.long_rep.capacity;
        }
        if (iVar11 < iVar7) {
          if ((uVar13 & 4) == 0) {
            uVar17 = (uint)uVar13 & 3;
          }
          else {
            uVar17 = (param_1->_impl_).item_gem_socket_tid_.soo_rep_.field0_0x0.long_rep.size;
          }
          google::protobuf::RepeatedField<int>::Grow(pRVar1,(uVar13 & 4) == 0,uVar17,iVar7);
        }
        uVar16 = 0;
        uVar15 = 1;
        uVar13 = uVar16;
        if (iVar7 != 0) {
          do {
            uVar5 = (pRVar1->soo_rep_).field0_0x0.long_rep.elements_int;
            piVar3 = this->GemSocketTID + uVar15;
            if ((uVar5 & 4) == 0) {
              puVar10 = (undefined1 *)
                        ((longlong)&(param_1->_impl_).item_gem_socket_tid_.soo_rep_.field0_0x0 + 8);
            }
            else {
              puVar10 = (undefined1 *)(uVar5 & 0xfffffffffffffff8);
            }
            iVar11 = (int)uVar13;
            uVar15 = (ulonglong)(byte)((char)uVar15 + 1);
            uVar13 = uVar13 + 1;
            *(int *)(puVar10 + (longlong)iVar11 * 4) = *piVar3;
          } while (uVar13 < (ulonglong)(longlong)iVar7);
        }
        pRVar1 = &(param_1->_impl_).gem_tid_;
        if (pRVar1 == (RepeatedField<int> *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          if (pUVar9 != (UDS_LogManager *)0x0) {
            pUVar9 = UDS_LogManager::GetInst();
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"UDS_ItemData::MakeItemEquipmentTable",0x24,Yes);
            UDS_LogManager::PrintLog(pUVar9,1,Warning,local_158.Ptr,0x27b,L"gem_tid == nullptr");
            if ((void *)local_158._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_158._padding_);
            }
          }
        }
        else {
          uVar13 = (pRVar1->soo_rep_).field0_0x0.long_rep.elements_int;
          uVar15 = 1;
          if ((uVar13 & 4) != 0) {
            iVar18 = (param_1->_impl_).gem_tid_.soo_rep_.field0_0x0.long_rep.capacity;
          }
          if (iVar18 < iVar7) {
            if ((uVar13 & 4) == 0) {
              uVar17 = (uint)uVar13 & 3;
            }
            else {
              uVar17 = (param_1->_impl_).gem_tid_.soo_rep_.field0_0x0.long_rep.size;
            }
            google::protobuf::RepeatedField<int>::Grow(pRVar1,(uVar13 & 4) == 0,uVar17,iVar7);
          }
          if (iVar7 != 0) {
            do {
              uVar13 = (pRVar1->soo_rep_).field0_0x0.long_rep.elements_int;
              piVar3 = this->GemTID + uVar15;
              if ((uVar13 & 4) == 0) {
                puVar10 = (undefined1 *)
                          ((longlong)&(param_1->_impl_).gem_tid_.soo_rep_.field0_0x0 + 8);
              }
              else {
                puVar10 = (undefined1 *)(uVar13 & 0xfffffffffffffff8);
              }
              iVar11 = (int)uVar16;
              uVar15 = (ulonglong)(byte)((char)uVar15 + 1);
              uVar16 = uVar16 + 1;
              *(int *)(puVar10 + (longlong)iVar11 * 4) = *piVar3;
            } while (uVar16 < (ulonglong)(longlong)iVar7);
          }
          (param_1->_impl_).set_effect_tid_ = this->SetEffectID;
          (param_1->_impl_)._has_bits_.has_bits_[0] =
               (param_1->_impl_)._has_bits_.has_bits_[0] | 0x800;
        }
      }
      return;
    }
    FVar4 = *pFVar14;
    if (*(int *)&(this->bIsTrade).field_0x8 == *(int *)&(this->bIsTrade).field_0x34) {
LAB_14babbc60:
      pFVar14 = pFVar14 + 1;
      goto LAB_14babbbd0;
    }
    puVar10 = *(undefined1 **)&(this->bIsTrade).field_0x40;
    puVar12 = &(this->bIsTrade).field_0x38;
    if (puVar10 != (undefined1 *)0x0) {
      puVar12 = puVar10;
    }
    iVar18 = *(int *)(puVar12 +
                     ((ulonglong)(*(int *)&(this->bIsTrade).field_0x48 - 1) & (ulonglong)(byte)FVar4
                     ) * 4);
    if (iVar18 == -1) goto LAB_14babbc60;
    do {
      if (*(FScriptContainerElement *)(*(longlong *)&this->bIsTrade + (longlong)iVar18 * 0xc) ==
          FVar4) {
        pbVar8 = TMapBase<enum_EDS_InventoryType,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,bool,0>_>
                 ::FindChecked(&this->bIsTrade,(EDS_InventoryType)FVar4);
        if (*pbVar8 == false) goto LAB_14babbc60;
        bVar6 = true;
        goto LAB_14babbc6e;
      }
      iVar18 = *(int *)(*(longlong *)&this->bIsTrade + 4 + (longlong)iVar18 * 0xc);
    } while (iVar18 != -1);
    pFVar14 = pFVar14 + 1;
  } while( true );
}

// MakeItemStackableTable @ 14babc220

void __thiscall
UDS_ItemData::MakeItemStackableTable
          (UDS_ItemData *this,EDS_InventoryType param_1,SqlItemStackableTable *param_2)

{
  int iVar1;
  int *piVar2;
  EDS_InventoryType local_res10 [8];
  
  (param_2->_impl_).item_id_ = this->ItemTID;
  (param_2->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0] | 2;
  iVar1 = GetStackCount_UnTradable(this,param_1);
  (param_2->_impl_).quantity_ = iVar1;
  (param_2->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0] | 4;
  local_res10[0] = param_1;
  piVar2 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
           ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                     (&this->StackCount_Tradable,(uint)param_1,local_res10);
  (param_2->_impl_).quantity_trade_ = *piVar2;
  (param_2->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0] | 8;
  return;
}

// ResetData @ 14bac99c0

void __thiscall UDS_ItemData::ResetData(UDS_ItemData *this)

{
  this->ItemUID = 0;
  this->ItemTID = 0;
  TSet<TTuple<enum_EDS_InventoryType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>,FDefaultSetAllocator>
  ::Reset(&this->StackCount_UnTradable);
  TSet<TTuple<enum_EDS_InventoryType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>,FDefaultSetAllocator>
  ::Reset(&this->StackCount_Tradable);
  TSet<TTuple<enum_EDS_InventoryType,bool>,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,bool,0>,FDefaultSetAllocator>
  ::Reset(&this->bIsTrade);
  this->CombatPower = 0;
  this->bIsEquipped = false;
  this->bIsPlayingCooltime = false;
  this->RemainCooltime = 0.0;
  this->ElapsedCooltime = 0.0;
  this->CoolStartTime = 0.0;
  this->CoolEndTime = 0.0;
  return;
}

// SetCombatPower @ 14bacac60

void __thiscall UDS_ItemData::SetCombatPower(UDS_ItemData *this,int param_1)

{
  this->CombatPower = param_1;
  FDS_DataPropertyDelegate_int32_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnChanged_CombatPower,
             &this->CombatPower);
  return;
}

// SetDurability @ 14bacc400

void __thiscall UDS_ItemData::SetDurability(UDS_ItemData *this,int param_1)

{
  if (this->CurrentDurability != param_1) {
    this->ItemUpdateEntry = this->ItemUpdateEntry | Durability;
    this->CurrentDurability = param_1;
  }
  return;
}

// SetEquippedGemTID @ 14bacc4e0

void __thiscall
UDS_ItemData::SetEquippedGemTID(UDS_ItemData *this,EDS_GemSocketIndex param_1,int param_2)

{
  this->GemTID[param_1] = param_2;
  return;
}

// SetGemSocketTID @ 14baccaa0

void __thiscall
UDS_ItemData::SetGemSocketTID(UDS_ItemData *this,EDS_GemSocketIndex param_1,int param_2)

{
  this->GemSocketTID[param_1] = param_2;
  return;
}

// SetIsTrade @ 14bacd180

void __thiscall UDS_ItemData::SetIsTrade(UDS_ItemData *this,EDS_InventoryType param_1,bool param_2)

{
  TMap<EDS_InventoryType,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_InventoryType,bool,0>_>
  *this_00;
  bool *pbVar1;
  int iVar2;
  undefined1 *puVar3;
  TPairInitializer<EDS_InventoryType_const_&,bool_const_&> local_res8;
  undefined1 local_res18 [16];
  bool **local_18;
  undefined1 *local_10;
  
  this_00 = &this->bIsTrade;
  local_res8.Value._0_1_ = param_1;
  local_res18[0] = param_2;
  if (*(int *)&(this->bIsTrade).field_0x8 != *(int *)&(this->bIsTrade).field_0x34) {
    puVar3 = *(undefined1 **)&(this->bIsTrade).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->bIsTrade).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + ((ulonglong)(*(int *)&(this->bIsTrade).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar2 != -1) {
      do {
        if (*(EDS_InventoryType *)(*(longlong *)this_00 + (longlong)iVar2 * 0xc) == param_1) {
          if (iVar2 != -1) {
            pbVar1 = TMapBase<enum_EDS_InventoryType,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,bool,0>_>
                     ::FindChecked(this_00,param_1);
            *pbVar1 = param_2;
            return;
          }
          break;
        }
        iVar2 = *(int *)(*(longlong *)this_00 + 4 + (longlong)iVar2 * 0xc);
      } while (iVar2 != -1);
    }
  }
  local_18 = &local_res8.Value;
  local_10 = local_res18;
  TSet<TTuple<enum_EDS_InventoryType,bool>,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,bool,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_InventoryType_const_&,bool_const_&>_>
            (this_00,&local_res8,(bool *)&local_18);
  return;
}

// SetNewSymbol @ 14bacd7f0

void __thiscall UDS_ItemData::SetNewSymbol(UDS_ItemData *this,bool param_1)

{
  EDS_ItemType EVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  
  EVar1 = (this->ItemBaseTable).ItemType;
  if (NewSymbolIgnoreItemType.Elements._8_4_ != NewSymbolIgnoreItemType.Elements._52_4_) {
    FVar3 = (ForElementType<FSetElementId>)0x154cf74c8;
    if (NewSymbolIgnoreItemType.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar3 = NewSymbolIgnoreItemType.Hash.SecondaryData;
    }
    for (iVar2 = *(int *)((longlong)FVar3 +
                         (ulonglong)(NewSymbolIgnoreItemType.HashSize + ~None & EVar1) * 4);
        iVar2 != -1;
        iVar2 = *(int *)(NewSymbolIgnoreItemType.Elements._0_8_ + 4 + (longlong)iVar2 * 0xc)) {
      if (*(EDS_ItemType *)(NewSymbolIgnoreItemType.Elements._0_8_ + (longlong)iVar2 * 0xc) == EVar1
         ) {
        return;
      }
    }
  }
  if (((this->ItemTypeSymbolData).Object != (FDS_ItemTypeSymbolData *)0x0) != param_1) {
    UpdateItemTypeSymbolData(this,param_1);
    FDS_DataPropertyDelegate_bool_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->OnChanged_ItemNewSymbol,param_1);
  }
  return;
}

// SetPassiveSkillID @ 14bacdfb0

void __thiscall UDS_ItemData::SetPassiveSkillID(UDS_ItemData *this,int param_1)

{
  this->PassiveSkillID = param_1;
  return;
}

// SetPrefixID @ 14bacdff0

void __thiscall UDS_ItemData::SetPrefixID(UDS_ItemData *this,int param_1)

{
  this->PrefixID = param_1;
  return;
}

// SetStackCount_Tradable @ 14bace040

void __thiscall
UDS_ItemData::SetStackCount_Tradable(UDS_ItemData *this,EDS_InventoryType param_1,int param_2)

{
  int *piVar1;
  EDS_InventoryType local_res10 [8];
  
  local_res10[0] = param_1;
  piVar1 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
           ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                     (&this->StackCount_Tradable,(uint)param_1,local_res10);
  *piVar1 = param_2;
  piVar1 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
           ::FindChecked(&this->StackCount_Tradable,local_res10[0]);
  SetIsTrade(this,local_res10[0],0 < *piVar1);
  return;
}

// SetStackCount_UnTradable @ 14bace0b0

void __thiscall
UDS_ItemData::SetStackCount_UnTradable(UDS_ItemData *this,EDS_InventoryType param_1,int param_2)

{
  int *piVar1;
  EDS_InventoryType local_res10 [24];
  
  local_res10[0] = param_1;
  piVar1 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
           ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                     (&this->StackCount_UnTradable,(uint)param_1,local_res10);
  *piVar1 = param_2;
  return;
}

// StartCooltime @ 14baceda0

void __thiscall UDS_ItemData::StartCooltime(UDS_ItemData *this,float param_1)

{
  double dVar1;
  
  if (this->RemainCooltime <= (double)param_1) {
    this->RemainCooltime = (double)param_1;
    this->bIsPlayingCooltime = true;
    dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
    this->CoolStartTime = dVar1;
    this->ElapsedCooltime = 0.0;
    this->CoolEndTime = dVar1 + this->RemainCooltime;
    FDS_ItemDataCooltimeStart_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->OnCooltimeStartAndFinishDelegate,this);
    FDS_ItemDataCooltimeFinish_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnCooltimeDelegate,
               this);
    return;
  }
  return;
}

// UnEquipItem @ 14bad0050

void __thiscall UDS_ItemData::UnEquipItem(UDS_ItemData *this,EDS_EquipSlotType param_1)

{
  FDS_DataPropertyDelegate_bool_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnChanged_IsEquipped,
             false);
  return;
}

// Update @ 14bad3cd0

void __thiscall UDS_ItemData::Update(UDS_ItemData *this,float param_1)

{
  if (this->bIsPlayingCooltime == false) {
    return;
  }
  if (this->CoolEndTime <= this->ElapsedCooltime + this->CoolStartTime) {
    this->bIsPlayingCooltime = false;
    this->RemainCooltime = 0.0;
    this->CoolStartTime = 0.0;
    this->CoolEndTime = 0.0;
    this->ElapsedCooltime = 0.0;
    FDS_ItemDataCooltimeStart_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->OnCooltimeStartAndFinishDelegate,this);
    return;
  }
  this->ElapsedCooltime = (double)(float)((double)param_1 + this->ElapsedCooltime);
  this->RemainCooltime = (double)(float)(this->RemainCooltime - (double)param_1);
  FDS_ItemDataCooltimeFinish_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnCooltimeDelegate,this)
  ;
  return;
}

// UpdateCombatPower @ 14bad6610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ItemData::UpdateCombatPower(UDS_ItemData *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UDS_LogManager *pUVar5;
  FDS_ItemBaseTableRow *pFVar6;
  FDS_ItemAbilityTableRow *pFVar7;
  FDS_StatusTableRow *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  float fVar12;
  undefined1 auStackY_628 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_628;
  bVar3 = UObjectBase::IsValidLowLevel((UObjectBase *)this);
  if (bVar3) {
    pFVar6 = FDS_ItemBaseTableRow::Get((longlong)this->ItemTID,true);
    if (pFVar6 == (FDS_ItemBaseTableRow *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_4c8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_4c8,"UDS_ItemData::UpdateCombatPower",0x1f,Yes);
        UDS_LogManager::PrintLog(pUVar5,1,Warning,local_4c8.Ptr,0x3d7,L"itemBaseRow is nullptr.");
        if ((void *)local_4c8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_4c8._padding_);
        }
      }
    }
    else if (pFVar6->ID_Ability == 0) {
      this->CombatPower = 0;
      FDS_DataPropertyDelegate_int32_DelegateWrapper
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &this->OnChanged_CombatPower,&this->CombatPower);
    }
    else {
      pFVar7 = FDS_ItemAbilityTableRow::Get((longlong)pFVar6->ID_Ability,true);
      if (pFVar7 == (FDS_ItemAbilityTableRow *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_3a8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_3a8,"UDS_ItemData::UpdateCombatPower",0x1f,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,local_3a8.Ptr,0x3e4,L"itemAbilityRow is nullptr.");
          if ((void *)local_3a8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_3a8._padding_);
          }
        }
      }
      else {
        iVar1 = (pFVar7->StatusType).ArrayNum;
        if (iVar1 == (pFVar7->StatusValue).ArrayNum) {
          uVar9 = 0;
          fVar12 = 0.0;
          uVar11 = uVar9;
          if (0 < iVar1) {
            do {
              uVar10 = (uint)uVar9;
              uVar4 = 0;
              if ((int)uVar10 < (pFVar7->StatusType).ArrayNum) {
                uVar4 = ~uVar10 >> 0x1f;
              }
              if ((uVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar8 = FDS_StatusTableRow::Get
                                 ((longlong)
                                  *(int *)((pFVar7->StatusType).AllocatorInstance.Data + uVar11 * 4)
                                  ,true);
              if (pFVar8 == (FDS_StatusTableRow *)0x0) {
                pUVar5 = UDS_LogManager::GetInst();
                if (pUVar5 != (UDS_LogManager *)0x0) {
                  pUVar5 = UDS_LogManager::GetInst();
                  local_168._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_168,"UDS_ItemData::UpdateCombatPower",0x1f,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar5,1,Warning,local_168.Ptr,0x3f5,L"statusRow is nullptr.");
                  if ((void *)local_168._padding_ != (void *)0x0) {
                    FMemory::Free((void *)local_168._padding_);
                  }
                }
              }
              else {
                uVar4 = 0;
                if ((int)uVar10 < (pFVar7->StatusValue).ArrayNum) {
                  uVar4 = ~uVar10 >> 0x1f;
                }
                if ((uVar4 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                fVar12 = fVar12 + (float)*(int *)((pFVar7->StatusValue).AllocatorInstance.Data +
                                                 uVar11 * 4) * pFVar8->CombatPointCalculate;
              }
              uVar9 = (ulonglong)(uVar10 + 1);
              uVar11 = uVar11 + 1;
            } while ((int)(uVar10 + 1) < (pFVar7->StatusType).ArrayNum);
          }
          this->CombatPower = (int)fVar12;
          FDS_DataPropertyDelegate_int32_DelegateWrapper
                    ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                     &this->OnChanged_CombatPower,&this->CombatPower);
        }
        else {
          pUVar5 = UDS_LogManager::GetInst();
          if (pUVar5 != (UDS_LogManager *)0x0) {
            pUVar5 = UDS_LogManager::GetInst();
            local_288._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_288,"UDS_ItemData::UpdateCombatPower",0x1f,Yes);
            UDS_LogManager::PrintLog
                      (pUVar5,1,Warning,local_288.Ptr,0x3e9,
                       L"FDS_ItemAbilityTableRow. StatusType.Num() and StatusValue.Num() do not match. (%d)"
                      );
            if ((void *)local_288._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_288._padding_);
            }
          }
        }
      }
    }
  }
  else {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_5e8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_5e8,"UDS_ItemData::UpdateCombatPower",0x1f,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_5e8.Ptr,0x3d0,L"ItemData is nullptr.");
      if ((void *)local_5e8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_5e8._padding_);
      }
    }
  }
  return;
}

// UpdateEquipmentItemData @ 14bad7d00

void __thiscall
UDS_ItemData::UpdateEquipmentItemData(UDS_ItemData *this,SqlItemEquipmentTable *param_1)

{
  EDS_InventoryType EVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte bVar11;
  EDS_InventoryType local_res8 [8];
  
  lVar2 = (param_1->_impl_).item_uid_;
  uVar9 = 0;
  iVar3 = (param_1->_impl_).item_id_;
  this->ItemUpdateEntry = None;
  if ((lVar2 != this->ItemUID) || (iVar3 != this->ItemTID)) {
    (**(code **)(this->_padding_ + 0x2c8))();
    this->ItemUID = lVar2;
    this->ItemTID = iVar3;
    IniItemTableData(this);
  }
  EVar1 = (EDS_InventoryType)(param_1->_impl_).inventory_type_;
  TSet<TTuple<enum_EDS_InventoryType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>,FDefaultSetAllocator>
  ::Reset(&this->StackCount_UnTradable);
  TSet<TTuple<enum_EDS_InventoryType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>,FDefaultSetAllocator>
  ::Reset(&this->StackCount_Tradable);
  TSet<TTuple<enum_EDS_InventoryType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>,FDefaultSetAllocator>
  ::Reset(&this->UsageInvenSlotCount);
  TSet<TTuple<enum_EDS_InventoryType,bool>,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,bool,0>,FDefaultSetAllocator>
  ::Reset(&this->bIsTrade);
  local_res8[0] = EVar1;
  if ((param_1->_impl_).is_trade_ == false) {
    piVar5 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
             ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                       (&this->StackCount_UnTradable,(uint)EVar1,local_res8);
    *piVar5 = 1;
  }
  else {
    piVar5 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
             ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                       (&this->StackCount_Tradable,(uint)EVar1,local_res8);
    *piVar5 = 1;
    piVar5 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
             ::FindChecked(&this->StackCount_Tradable,local_res8[0]);
    SetIsTrade(this,local_res8[0],0 < *piVar5);
  }
  UpdateUsageInvenSlotCount(this,EVar1);
  this->PassiveSkillID = (param_1->_impl_).passive_skill_id_;
  this->PrefixID = (param_1->_impl_).prefix_;
  SetIsTrade(this,EVar1,(param_1->_impl_).is_trade_);
  iVar3 = DS_CommonDataHelper::MaxGemSocket();
  uVar8 = (ulonglong)iVar3;
  bVar11 = 1;
  uVar10 = uVar9;
  if (iVar3 != 0) {
    do {
      uVar6 = (param_1->_impl_).item_gem_socket_tid_.soo_rep_.field0_0x0.long_rep.elements_int;
      if ((uVar6 & 4) == 0) {
        uVar4 = (uint)uVar6 & 3;
      }
      else {
        uVar4 = (param_1->_impl_).item_gem_socket_tid_.soo_rep_.field0_0x0.long_rep.size;
      }
      if ((ulonglong)(longlong)(int)uVar4 <= uVar10) break;
      iVar3 = (int)uVar10;
      puVar7 = (undefined1 *)
               ((longlong)&(param_1->_impl_).item_gem_socket_tid_.soo_rep_.field0_0x0 + 8);
      if ((uVar6 & 4) != 0) {
        puVar7 = (undefined1 *)(uVar6 & 0xfffffffffffffff8);
      }
      uVar6 = (ulonglong)bVar11;
      bVar11 = bVar11 + 1;
      uVar10 = uVar10 + 1;
      this->GemSocketTID[uVar6] = *(int *)(puVar7 + (longlong)iVar3 * 4);
    } while (uVar10 < uVar8);
  }
  uVar10 = 1;
  if (uVar8 != 0) {
    do {
      uVar6 = (param_1->_impl_).gem_tid_.soo_rep_.field0_0x0.long_rep.elements_int;
      if ((uVar6 & 4) == 0) {
        uVar4 = (uint)uVar6 & 3;
      }
      else {
        uVar4 = (param_1->_impl_).gem_tid_.soo_rep_.field0_0x0.long_rep.size;
      }
      if ((ulonglong)(longlong)(int)uVar4 <= uVar9) break;
      iVar3 = (int)uVar9;
      puVar7 = (undefined1 *)((longlong)&(param_1->_impl_).gem_tid_.soo_rep_.field0_0x0 + 8);
      if ((uVar6 & 4) != 0) {
        puVar7 = (undefined1 *)(uVar6 & 0xfffffffffffffff8);
      }
      uVar9 = uVar9 + 1;
      this->GemTID[uVar10] = *(int *)(puVar7 + (longlong)iVar3 * 4);
      uVar10 = (ulonglong)(byte)((char)uVar10 + 1);
    } while (uVar9 < uVar8);
  }
  this->SetEffectID = (param_1->_impl_).set_effect_tid_;
  iVar3 = (param_1->_impl_).durability_;
  if (this->CurrentDurability != iVar3) {
    this->ItemUpdateEntry = this->ItemUpdateEntry | Durability;
    this->CurrentDurability = iVar3;
  }
  UpdateCombatPower(this);
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  return;
}

// UpdateItemTypeSymbolData @ 14bad88e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UDS_ItemData::UpdateItemTypeSymbolData(UDS_ItemData *this,bool param_1)

{
  atomic<int> *paVar1;
  UObject *this_00;
  TSharedPtr<FDS_ItemTypeSymbolData,1> *this_01;
  atomic<int> aVar2;
  EDS_ItemType EVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  atomic<int> aVar7;
  UObject *pUVar8;
  TWeakPtr<FDS_ItemTypeSymbolData,1> *pTVar9;
  FDS_ItemTypeSymbolData *pFVar10;
  UDS_ItemDataSet *this_02;
  TReferenceControllerBase<1> **ppTVar11;
  undefined1 *puVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  int iVar15;
  TReferenceControllerBase<1> *pTVar16;
  TReferenceControllerBase<1> *pTVar17;
  FWeakObjectPtr local_res18 [2];
  TSharedPtr<FDS_ItemTypeSymbolData,1> local_68;
  TReferenceControllerBase<1> *local_58;
  TReferenceControllerBase<1> *local_50;
  TSharedPtr<FDS_ItemTypeSymbolData,1> local_48;
  TReferenceControllerBase<1> *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  
  pTVar16 = (TReferenceControllerBase<1> *)0x0;
  TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)local_res18);
  bVar5 = TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> *)local_res18,(void *)0x0);
  if (!bVar5) {
    pUVar8 = FWeakObjectPtr::Get(local_res18);
    EVar3 = (this->ItemBaseTable).ItemType;
    this_00 = pUVar8 + 0xe;
    pTVar17 = pTVar16;
    pTVar14 = pTVar16;
    if (*(int *)&pUVar8[0xe].field_0x8 != *(int *)&pUVar8[0xf].field_0xc) {
      puVar12 = *(undefined1 **)&pUVar8[0xf].field_0x18;
      if (*(undefined1 **)&pUVar8[0xf].field_0x18 == (undefined1 *)0x0) {
        puVar12 = &pUVar8[0xf].field_0x10;
      }
      iVar6 = *(int *)(puVar12 + (ulonglong)(*(int *)&pUVar8[0xf].field_0x20 + ~None & EVar3) * 4);
      if (iVar6 != -1) {
        do {
          if (*(EDS_ItemType *)((longlong)iVar6 * 0x20 + *(longlong *)this_00) == EVar3) {
            pTVar9 = TMapBase<enum_EDS_ItemType,TWeakPtr<FDS_ItemTypeSymbolData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemType,TWeakPtr<FDS_ItemTypeSymbolData,1>,0>_>
                     ::FindChecked(this_00,EVar3);
            if (((pTVar9->Object != (FDS_ItemTypeSymbolData *)0x0) &&
                (pTVar13 = (pTVar9->WeakReferenceCount).ReferenceController,
                pTVar13 != (TReferenceControllerBase<1> *)0x0)) &&
               (0 < (int)pTVar13->SharedReferenceCount)) {
              pTVar9 = TMapBase<enum_EDS_ItemType,TWeakPtr<FDS_ItemTypeSymbolData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemType,TWeakPtr<FDS_ItemTypeSymbolData,1>,0>_>
                       ::FindChecked(this_00,EVar3);
              pTVar17 = (pTVar9->WeakReferenceCount).ReferenceController;
              pTVar14 = (TReferenceControllerBase<1> *)pTVar9->Object;
              if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
                UNLOCK();
              }
              if (((pTVar14 != (TReferenceControllerBase<1> *)0x0) &&
                  (pTVar17 != (TReferenceControllerBase<1> *)0x0)) &&
                 (0 < (int)pTVar17->SharedReferenceCount)) goto LAB_14bad8a92;
            }
            break;
          }
          iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + *(longlong *)this_00);
        } while (iVar6 != -1);
      }
    }
    this_01 = &this->ItemTypeSymbolData;
    if (this_01->Object == (FDS_ItemTypeSymbolData *)0x0) {
      local_68.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
      if (local_68.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
        local_68.Object = (FDS_ItemTypeSymbolData *)___xmm_00000000000000000000000000000010;
        pTVar14 = (TReferenceControllerBase<1> *)&DAT_00000010;
        local_68.SharedReferenceCount.ReferenceController = _UNK_150651568;
      }
      else {
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1
        ;
        pTVar14 = local_68.SharedReferenceCount.ReferenceController + 1;
        (local_68.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
        (local_68.SharedReferenceCount.ReferenceController)->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFDS_ItemTypeSymbolData___00_SharedPointerInternals__6B_
        ;
        *(undefined4 *)&local_68.SharedReferenceCount.ReferenceController[1]._padding_ = 0;
        if ((pTVar14 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        LOCK();
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
        pTVar16 = local_68.SharedReferenceCount.ReferenceController;
        local_68.Object = (FDS_ItemTypeSymbolData *)pTVar14;
      }
      if (this_01 != &local_68) {
        this_01->Object = (FDS_ItemTypeSymbolData *)pTVar14;
        local_68.Object = (FDS_ItemTypeSymbolData *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->ItemTypeSymbolData).SharedReferenceCount,&local_68.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
      EVar3 = (this->ItemBaseTable).ItemType;
      pFVar10 = TSharedPtr<FDS_ItemTypeSymbolData,1>::operator->(this_01);
      pFVar10->ItemType = EVar3;
      this_02 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(local_res18);
      local_48.Object = this_01->Object;
      local_48.SharedReferenceCount.ReferenceController =
           (this->ItemTypeSymbolData).SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ItemDataSet::SetItemTypeSymbolMap(this_02,&local_48);
    }
    else {
LAB_14bad8a92:
      pTVar13 = (TReferenceControllerBase<1> *)0x0;
      iVar6 = 0;
      if (param_1) {
        local_58 = (TReferenceControllerBase<1> *)0x0;
        local_50 = pTVar17;
        if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
LAB_14bad8ad7:
          ppTVar11 = &local_58;
          pTVar13 = pTVar16;
          iVar15 = 0;
          iVar6 = 1;
        }
        else {
          aVar2 = pTVar17->SharedReferenceCount;
          do {
            if (aVar2 == (atomic<int>)0x0) {
              local_50 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_14bad8ad7;
            }
            LOCK();
            aVar7 = pTVar17->SharedReferenceCount;
            bVar5 = aVar2 == aVar7;
            if (bVar5) {
              pTVar17->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
              aVar7 = aVar2;
            }
            UNLOCK();
            aVar2 = aVar7;
          } while (!bVar5);
          ppTVar11 = &local_58;
          pTVar13 = pTVar14;
          iVar15 = iVar6;
          iVar6 = 1;
          local_58 = pTVar14;
        }
      }
      else {
        ppTVar11 = &local_38;
        local_38 = (TReferenceControllerBase<1> *)0x0;
        pTStack_30 = (TReferenceControllerBase<1> *)0x0;
        iVar15 = 2;
      }
      if (&this->ItemTypeSymbolData != (TSharedPtr<FDS_ItemTypeSymbolData,1> *)ppTVar11) {
        (this->ItemTypeSymbolData).Object = (FDS_ItemTypeSymbolData *)pTVar13;
        *ppTVar11 = (TReferenceControllerBase<1> *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->ItemTypeSymbolData).SharedReferenceCount,
                   (FSharedReferencer<1> *)(ppTVar11 + 1));
      }
      if (iVar15 != 0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_30);
      }
      if (iVar6 != 0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50);
      }
    }
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar17->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar17->_padding_ + 8))(pTVar17,1);
      }
    }
  }
  return;
}

// UpdateStackableItemData @ 14bada580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ItemData::UpdateStackableItemData(UDS_ItemData *this,SqlItemStackableTable *param_1)

{
  TMap<EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_InventoryType,int,0>_>
  *this_00;
  TMap<EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_InventoryType,int,0>_>
  *this_01;
  int iVar1;
  int *piVar2;
  int *piVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_1d8 [32];
  EDS_InventoryType local_188 [8];
  int local_180;
  int local_17c;
  int local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  iVar1 = (param_1->_impl_).item_id_;
  this->ItemUpdateEntry = None;
  if (((longlong)iVar1 != this->ItemUID) || (iVar1 != this->ItemTID)) {
    (**(code **)(this->_padding_ + 0x2c8))();
    this->ItemUID = (longlong)iVar1;
    this->ItemTID = iVar1;
    IniItemTableData(this);
  }
  this_00 = &this->StackCount_Tradable;
  local_188[0] = PlayerNormal;
  piVar2 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
           ::FindOrAddImpl<enum_EDS_InventoryType_const_&>(this_00,1,local_188);
  this_01 = &this->StackCount_UnTradable;
  piVar3 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
           ::FindOrAddImpl<enum_EDS_InventoryType_const_&>(this_01,(uint)local_188[0],local_188);
  local_178 = *piVar2 + *piVar3;
  local_188[0] = PlayerWareHouse;
  piVar2 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
           ::FindOrAddImpl<enum_EDS_InventoryType_const_&>(this_00,3,local_188);
  piVar3 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
           ::FindOrAddImpl<enum_EDS_InventoryType_const_&>(this_01,(uint)local_188[0],local_188);
  local_17c = *piVar2 + *piVar3;
  local_188[0] = Mount;
  TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
  ::FindOrAddImpl<enum_EDS_InventoryType_const_&>(this_00,6,local_188);
  TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
  ::FindOrAddImpl<enum_EDS_InventoryType_const_&>(this_01,(uint)local_188[0],local_188);
  iVar1 = (param_1->_impl_).quantity_;
  local_188[0] = PlayerNormal;
  piVar2 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
           ::FindOrAddImpl<enum_EDS_InventoryType_const_&>(this_01,1,local_188);
  *piVar2 = iVar1;
  iVar1 = (param_1->_impl_).quantity_trade_;
  local_188[0] = PlayerNormal;
  piVar2 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
           ::FindOrAddImpl<enum_EDS_InventoryType_const_&>(this_00,1,local_188);
  *piVar2 = iVar1;
  piVar2 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
           ::FindChecked(this_00,local_188[0]);
  SetIsTrade(this,local_188[0],0 < *piVar2);
  iVar1 = (param_1->_impl_).ware_house_quantity_;
  local_188[0] = PlayerWareHouse;
  piVar2 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
           ::FindOrAddImpl<enum_EDS_InventoryType_const_&>(this_01,3,local_188);
  *piVar2 = iVar1;
  iVar1 = (param_1->_impl_).ware_house_quantity_trade_;
  local_188[0] = PlayerWareHouse;
  piVar2 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
           ::FindOrAddImpl<enum_EDS_InventoryType_const_&>(this_00,3,local_188);
  *piVar2 = iVar1;
  piVar2 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
           ::FindChecked(this_00,local_188[0]);
  SetIsTrade(this,local_188[0],0 < *piVar2);
  iVar1 = (param_1->_impl_).mount_quantity_;
  local_188[0] = Mount;
  piVar2 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
           ::FindOrAddImpl<enum_EDS_InventoryType_const_&>(this_01,6,local_188);
  *piVar2 = iVar1;
  iVar1 = (param_1->_impl_).mount_quantity_trade_;
  local_188[0] = Mount;
  piVar2 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
           ::FindOrAddImpl<enum_EDS_InventoryType_const_&>(this_00,6,local_188);
  *piVar2 = iVar1;
  piVar2 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
           ::FindChecked(this_00,local_188[0]);
  SetIsTrade(this,local_188[0],0 < *piVar2);
  local_188[0] = PlayerNormal;
  TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
  ::FindOrAddImpl<enum_EDS_InventoryType_const_&>(this_00,1,local_188);
  TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
  ::FindOrAddImpl<enum_EDS_InventoryType_const_&>(this_01,(uint)local_188[0],local_188);
  local_188[0] = PlayerWareHouse;
  piVar2 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
           ::FindOrAddImpl<enum_EDS_InventoryType_const_&>(this_00,3,local_188);
  piVar3 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
           ::FindOrAddImpl<enum_EDS_InventoryType_const_&>(this_01,(uint)local_188[0],local_188);
  local_180 = *piVar2 + *piVar3;
  local_188[0] = Mount;
  TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
  ::FindOrAddImpl<enum_EDS_InventoryType_const_&>(this_00,6,local_188);
  TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
  ::FindOrAddImpl<enum_EDS_InventoryType_const_&>(this_01,(uint)local_188[0],local_188);
  pUVar4 = UDS_LogManager::GetInst();
  if (pUVar4 != (UDS_LogManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_ItemData::UpdateStackableItemData",0x25,Yes);
    UDS_LogManager::PrintLog
              (pUVar4,1,Display,local_168.Ptr,0x429,
               L"[DropItem] UpdateStackableItemData - ItemID : %d, Inven : %d, WareHouse : %d, Mount : %d"
              );
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
  }
  UpdateUsageInvenSlotCount(this,PlayerNormal);
  UpdateUsageInvenSlotCount(this,PlayerWareHouse);
  UpdateUsageInvenSlotCount(this,Mount);
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  return;
}

// UpdateTableData @ 14badae70

void __thiscall UDS_ItemData::UpdateTableData(UDS_ItemData *this)

{
  code *pcVar1;
  bool bVar2;
  FDS_ItemBaseTableRow *pFVar3;
  
  pFVar3 = FDS_ItemBaseTableRow::Get((longlong)this->ItemTID,true);
  if (pFVar3 == (FDS_ItemBaseTableRow *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2839815002972487028>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Item\\DS_ItemData.cpp"
                       ,0x28c,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    (this->ItemBaseTable).ID = pFVar3->ID;
    (this->ItemBaseTable).DataStage = pFVar3->DataStage;
    (this->ItemBaseTable).ID_Name.ID = (pFVar3->ID_Name).ID;
    (this->ItemBaseTable).ID_Explain.ID = (pFVar3->ID_Explain).ID;
    (this->ItemBaseTable).ID_Icon = pFVar3->ID_Icon;
    (this->ItemBaseTable).IsEquip = pFVar3->IsEquip;
    (this->ItemBaseTable).MainType = pFVar3->MainType;
    (this->ItemBaseTable).ItemType = pFVar3->ItemType;
    (this->ItemBaseTable).OrderValue = pFVar3->OrderValue;
    (this->ItemBaseTable).ID_GradeType = pFVar3->ID_GradeType;
    (this->ItemBaseTable).SeasonGroup = pFVar3->SeasonGroup;
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              (&(this->ItemBaseTable).ID_Character,&pFVar3->ID_Character);
    (this->ItemBaseTable).CharEquipType = pFVar3->CharEquipType;
    (this->ItemBaseTable).RequireLevel = pFVar3->RequireLevel;
    (this->ItemBaseTable).ItemLevel = pFVar3->ItemLevel;
    (this->ItemBaseTable).IsLock = pFVar3->IsLock;
    (this->ItemBaseTable).ID_ResourceParts = pFVar3->ID_ResourceParts;
    (this->ItemBaseTable).StackCount = pFVar3->StackCount;
    (this->ItemBaseTable).MaxOwnedCount = pFVar3->MaxOwnedCount;
    (this->ItemBaseTable).IsTradeTemper = pFVar3->IsTradeTemper;
    (this->ItemBaseTable).IsSellAble = pFVar3->IsSellAble;
    (this->ItemBaseTable).SellPrice = pFVar3->SellPrice;
    (this->ItemBaseTable).Weight = pFVar3->Weight;
    (this->ItemBaseTable).Durability = pFVar3->Durability;
    (this->ItemBaseTable).ID_Repair = pFVar3->ID_Repair;
    (this->ItemBaseTable).ID_Restore = pFVar3->ID_Restore;
    (this->ItemBaseTable).ID_Dismantle = pFVar3->ID_Dismantle;
    (this->ItemBaseTable).ID_Ability = pFVar3->ID_Ability;
    (this->ItemBaseTable).ID_TemplateType = pFVar3->ID_TemplateType;
    (this->ItemBaseTable).ID_Template = pFVar3->ID_Template;
    (this->ItemBaseTable).ItemTypeValue = pFVar3->ItemTypeValue;
    (this->ItemBaseTable).IsEnchantAble = pFVar3->IsEnchantAble;
    (this->ItemBaseTable).ID_ItemEnchant = pFVar3->ID_ItemEnchant;
    (this->ItemBaseTable).IsPrefixAble = pFVar3->IsPrefixAble;
    (this->ItemBaseTable).ID_PrefixGroup = pFVar3->ID_PrefixGroup;
    (this->ItemBaseTable).PrefixProbability = pFVar3->PrefixProbability;
    (this->ItemBaseTable).IsPassiveAble = pFVar3->IsPassiveAble;
    (this->ItemBaseTable).ID_ItemPassiveGroup = pFVar3->ID_ItemPassiveGroup;
    (this->ItemBaseTable).ItemPassiveProbability = pFVar3->ItemPassiveProbability;
    (this->ItemBaseTable).IsSetEffectAble = pFVar3->IsSetEffectAble;
    (this->ItemBaseTable).ID_SetEffectGroup = pFVar3->ID_SetEffectGroup;
    (this->ItemBaseTable).SetEffectProbability = pFVar3->SetEffectProbability;
    (this->ItemBaseTable).ID_GemSocketList = pFVar3->ID_GemSocketList;
    (this->ItemBaseTable).IsDestructionAble = pFVar3->IsDestructionAble;
    (this->ItemBaseTable).IndividualCoolTime = pFVar3->IndividualCoolTime;
    (this->ItemBaseTable).ID_CoolDown = pFVar3->ID_CoolDown;
    (this->ItemBaseTable).IsRingCmdAble = pFVar3->IsRingCmdAble;
    (this->ItemBaseTable).ID_ItemAction = pFVar3->ID_ItemAction;
    (this->ItemBaseTable).ID_ItemCooking = pFVar3->ID_ItemCooking;
    (this->ItemBaseTable).IsMountInventory = pFVar3->IsMountInventory;
    (this->ItemBaseTable).IsMountFoundAble = pFVar3->IsMountFoundAble;
    InitInventoryType(this);
    UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  }
  return;
}

// UpdateUsageInvenSlotCount @ 14badaec0

void __thiscall
UDS_ItemData::UpdateUsageInvenSlotCount(UDS_ItemData *this,EDS_InventoryType param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  EDS_InventoryType local_res8 [8];
  EDS_InventoryType local_res10 [8];
  
  iVar1 = (this->ItemBaseTable).StackCount;
  iVar5 = 1;
  if (1 < iVar1) {
    iVar5 = iVar1;
  }
  local_res8[0] = param_1;
  local_res10[0] = param_1;
  piVar3 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
           ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                     (&this->StackCount_Tradable,(uint)param_1,local_res8);
  piVar4 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
           ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                     (&this->StackCount_UnTradable,(uint)local_res8[0],local_res8);
  iVar1 = *piVar4;
  iVar2 = *piVar3;
  piVar3 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
           ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                     (&this->UsageInvenSlotCount,(uint)local_res10[0],local_res10);
  *piVar3 = (iVar5 + -1 + iVar1 + iVar2) / iVar5;
  return;
}

