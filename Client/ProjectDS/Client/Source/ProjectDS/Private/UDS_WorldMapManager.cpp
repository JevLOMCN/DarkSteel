// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 43

// StaticClass @ 14b768f50

UClass * __cdecl UDS_WorldMapManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WorldMapManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WorldMapManager",
               &Z_Registration_Info_UClass_UDS_WorldMapManager.InnerSingleton,
               StaticRegisterNativesUDS_WorldMapManager,0x388,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_WorldMapManager>,
               InternalVTableHelperCtorCaller<UDS_WorldMapManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WorldMapManager.InnerSingleton;
}

// UDS_WorldMapManager @ 14b76f110

UDS_WorldMapManager * __thiscall
UDS_WorldMapManager::UDS_WorldMapManager(UDS_WorldMapManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_WorldMapManager__6B_;
  *(undefined8 *)&(this->WorldMapWarpDeviceIconDatas).field_0x10 = 0;
  *(undefined8 *)&(this->WorldMapWarpDeviceIconDatas).field_0x18 = 0;
  *(undefined8 *)&(this->WorldMapWarpDeviceIconDatas).field_0x38 = 0;
  *(undefined8 *)&(this->WorldMapWarpDeviceIconDatas).field_0x48 = 0;
  *(undefined8 *)&this->WorldMapWarpDeviceIconDatas = 0;
  *(undefined8 *)&(this->WorldMapWarpDeviceIconDatas).field_0x8 = 0;
  *(undefined8 *)&(this->WorldMapWarpDeviceIconDatas).field_0x20 = 0;
  *(undefined4 *)&(this->WorldMapWarpDeviceIconDatas).field_0x28 = 0;
  *(undefined4 *)&(this->WorldMapWarpDeviceIconDatas).field_0x2c = 0x80;
  *(undefined4 *)&(this->WorldMapWarpDeviceIconDatas).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WorldMapWarpDeviceIconDatas).field_0x34 = 0;
  *(undefined8 *)&(this->WorldMapWarpDeviceIconDatas).field_0x40 = 0;
  *(undefined8 *)&(this->IndoorMapWarpDeviceIconDatas).field_0x10 = 0;
  *(undefined8 *)&(this->IndoorMapWarpDeviceIconDatas).field_0x18 = 0;
  *(undefined8 *)&(this->IndoorMapWarpDeviceIconDatas).field_0x38 = 0;
  *(undefined8 *)&(this->IndoorMapWarpDeviceIconDatas).field_0x48 = 0;
  *(undefined8 *)&this->IndoorMapWarpDeviceIconDatas = 0;
  *(undefined8 *)&(this->IndoorMapWarpDeviceIconDatas).field_0x8 = 0;
  *(undefined8 *)&(this->IndoorMapWarpDeviceIconDatas).field_0x20 = 0;
  *(undefined4 *)&(this->IndoorMapWarpDeviceIconDatas).field_0x28 = 0;
  *(undefined4 *)&(this->IndoorMapWarpDeviceIconDatas).field_0x2c = 0x80;
  *(undefined4 *)&(this->IndoorMapWarpDeviceIconDatas).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IndoorMapWarpDeviceIconDatas).field_0x34 = 0;
  *(undefined8 *)&(this->IndoorMapWarpDeviceIconDatas).field_0x40 = 0;
  *(undefined8 *)&(this->WorldMapNpcSpawnTableMap).field_0x10 = 0;
  *(undefined8 *)&(this->WorldMapNpcSpawnTableMap).field_0x18 = 0;
  *(undefined8 *)&(this->WorldMapNpcSpawnTableMap).field_0x38 = 0;
  *(undefined8 *)&(this->WorldMapNpcSpawnTableMap).field_0x48 = 0;
  *(undefined8 *)&this->WorldMapNpcSpawnTableMap = 0;
  *(undefined8 *)&(this->WorldMapNpcSpawnTableMap).field_0x8 = 0;
  *(undefined8 *)&(this->WorldMapNpcSpawnTableMap).field_0x20 = 0;
  *(undefined4 *)&(this->WorldMapNpcSpawnTableMap).field_0x28 = 0;
  *(undefined4 *)&(this->WorldMapNpcSpawnTableMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->WorldMapNpcSpawnTableMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WorldMapNpcSpawnTableMap).field_0x34 = 0;
  *(undefined8 *)&(this->WorldMapNpcSpawnTableMap).field_0x40 = 0;
  *(undefined8 *)&(this->IndoorMapNpcSpawnTableMap).field_0x10 = 0;
  *(undefined8 *)&(this->IndoorMapNpcSpawnTableMap).field_0x18 = 0;
  *(undefined8 *)&(this->IndoorMapNpcSpawnTableMap).field_0x38 = 0;
  *(undefined8 *)&(this->IndoorMapNpcSpawnTableMap).field_0x48 = 0;
  *(undefined8 *)&this->IndoorMapNpcSpawnTableMap = 0;
  *(undefined8 *)&(this->IndoorMapNpcSpawnTableMap).field_0x8 = 0;
  *(undefined8 *)&(this->IndoorMapNpcSpawnTableMap).field_0x20 = 0;
  *(undefined4 *)&(this->IndoorMapNpcSpawnTableMap).field_0x28 = 0;
  *(undefined4 *)&(this->IndoorMapNpcSpawnTableMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->IndoorMapNpcSpawnTableMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IndoorMapNpcSpawnTableMap).field_0x34 = 0;
  *(undefined8 *)&(this->IndoorMapNpcSpawnTableMap).field_0x40 = 0;
  *(undefined8 *)&(this->IslandQuestBaseNPCIDMap).field_0x10 = 0;
  *(undefined8 *)&(this->IslandQuestBaseNPCIDMap).field_0x18 = 0;
  *(undefined8 *)&(this->IslandQuestBaseNPCIDMap).field_0x38 = 0;
  *(undefined8 *)&(this->IslandQuestBaseNPCIDMap).field_0x48 = 0;
  *(undefined8 *)&this->IslandQuestBaseNPCIDMap = 0;
  *(undefined8 *)&(this->IslandQuestBaseNPCIDMap).field_0x8 = 0;
  *(undefined8 *)&(this->IslandQuestBaseNPCIDMap).field_0x20 = 0;
  *(undefined4 *)&(this->IslandQuestBaseNPCIDMap).field_0x28 = 0;
  *(undefined4 *)&(this->IslandQuestBaseNPCIDMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->IslandQuestBaseNPCIDMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IslandQuestBaseNPCIDMap).field_0x34 = 0;
  *(undefined8 *)&(this->IslandQuestBaseNPCIDMap).field_0x40 = 0;
  *(undefined8 *)&(this->IndoorQuestBaseNPCIDMap).field_0x10 = 0;
  *(undefined8 *)&(this->IndoorQuestBaseNPCIDMap).field_0x18 = 0;
  *(undefined8 *)&(this->IndoorQuestBaseNPCIDMap).field_0x38 = 0;
  *(undefined8 *)&(this->IndoorQuestBaseNPCIDMap).field_0x48 = 0;
  *(undefined8 *)&this->IndoorQuestBaseNPCIDMap = 0;
  *(undefined8 *)&(this->IndoorQuestBaseNPCIDMap).field_0x8 = 0;
  *(undefined8 *)&(this->IndoorQuestBaseNPCIDMap).field_0x20 = 0;
  *(undefined4 *)&(this->IndoorQuestBaseNPCIDMap).field_0x28 = 0;
  *(undefined4 *)&(this->IndoorQuestBaseNPCIDMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->IndoorQuestBaseNPCIDMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IndoorQuestBaseNPCIDMap).field_0x34 = 0;
  *(undefined8 *)&(this->IndoorQuestBaseNPCIDMap).field_0x40 = 0;
  (this->RangeOverIconList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RangeOverIconList).ArrayNum = 0;
  (this->RangeOverIconList).ArrayMax = 0;
  *(undefined8 *)&(this->BreachDataInfoMap).field_0x10 = 0;
  *(undefined8 *)&(this->BreachDataInfoMap).field_0x18 = 0;
  *(undefined8 *)&(this->BreachDataInfoMap).field_0x38 = 0;
  *(undefined8 *)&(this->BreachDataInfoMap).field_0x48 = 0;
  *(undefined8 *)&this->BreachDataInfoMap = 0;
  *(undefined8 *)&(this->BreachDataInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->BreachDataInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->BreachDataInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->BreachDataInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->BreachDataInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->BreachDataInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BreachDataInfoMap).field_0x40 = 0;
  *(undefined8 *)&(this->ZoneHasIslandIDMap).field_0x10 = 0;
  *(undefined8 *)&(this->ZoneHasIslandIDMap).field_0x18 = 0;
  *(undefined8 *)&(this->ZoneHasIslandIDMap).field_0x38 = 0;
  *(undefined8 *)&(this->ZoneHasIslandIDMap).field_0x48 = 0;
  *(undefined8 *)&this->ZoneHasIslandIDMap = 0;
  *(undefined8 *)&(this->ZoneHasIslandIDMap).field_0x8 = 0;
  *(undefined8 *)&(this->ZoneHasIslandIDMap).field_0x20 = 0;
  *(undefined4 *)&(this->ZoneHasIslandIDMap).field_0x28 = 0;
  *(undefined4 *)&(this->ZoneHasIslandIDMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ZoneHasIslandIDMap).field_0x34 = 0;
  *(undefined4 *)&(this->ZoneHasIslandIDMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ZoneHasIslandIDMap).field_0x40 = 0;
  (this->ZoneIslandTableRowArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ZoneIslandTableRowArray).ArrayNum = 0;
  (this->ZoneIslandTableRowArray).ArrayMax = 0;
  *(undefined8 *)&(this->DataTable_GC).field_0x10 = 0;
  *(undefined8 *)&(this->DataTable_GC).field_0x18 = 0;
  *(undefined8 *)&(this->DataTable_GC).field_0x38 = 0;
  *(undefined8 *)&(this->DataTable_GC).field_0x48 = 0;
  *(undefined8 *)&this->DataTable_GC = 0;
  *(undefined8 *)&(this->DataTable_GC).field_0x8 = 0;
  *(undefined8 *)&(this->DataTable_GC).field_0x20 = 0;
  *(undefined4 *)&(this->DataTable_GC).field_0x28 = 0;
  *(undefined4 *)&(this->DataTable_GC).field_0x2c = 0x80;
  *(undefined4 *)&(this->DataTable_GC).field_0x34 = 0;
  *(undefined4 *)&(this->DataTable_GC).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DataTable_GC).field_0x40 = 0;
  (this->IconSelectedObject).WeakPtr = (FWeakObjectPtr)0x0;
  this->RangeOverIconKey = 0;
  this->BreachRequestCount = 0;
  this->BreachResponseCount = 0;
  this->CurrentRequestIndex = 0;
  this->PlayerUID = 0;
  this->RegionIndex = 0;
  this->IsBreachDataAllLoad = false;
  this->IsLogin = false;
  this->IsValidContentsFocusPosition = false;
  this->IsValidLinkChatFocusPosition = false;
  this->WorldBossIslandID = 0;
  (this->ContentsFocusPosition).field0_0x0._s_0.X = 0.0;
  (this->ContentsFocusPosition).field0_0x0._s_0.Y = 0.0;
  return this;
}

// UDS_WorldMapManager @ 14b76f490

UDS_WorldMapManager * __thiscall
UDS_WorldMapManager::UDS_WorldMapManager(UDS_WorldMapManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_WorldMapManager__6B_;
  *(undefined8 *)&(this->WorldMapWarpDeviceIconDatas).field_0x10 = 0;
  *(undefined8 *)&(this->WorldMapWarpDeviceIconDatas).field_0x18 = 0;
  *(undefined8 *)&(this->WorldMapWarpDeviceIconDatas).field_0x38 = 0;
  *(undefined8 *)&(this->WorldMapWarpDeviceIconDatas).field_0x48 = 0;
  *(undefined8 *)&this->WorldMapWarpDeviceIconDatas = 0;
  *(undefined8 *)&(this->WorldMapWarpDeviceIconDatas).field_0x8 = 0;
  *(undefined8 *)&(this->WorldMapWarpDeviceIconDatas).field_0x20 = 0;
  *(undefined4 *)&(this->WorldMapWarpDeviceIconDatas).field_0x28 = 0;
  *(undefined4 *)&(this->WorldMapWarpDeviceIconDatas).field_0x2c = 0x80;
  *(undefined4 *)&(this->WorldMapWarpDeviceIconDatas).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WorldMapWarpDeviceIconDatas).field_0x34 = 0;
  *(undefined8 *)&(this->WorldMapWarpDeviceIconDatas).field_0x40 = 0;
  *(undefined8 *)&(this->IndoorMapWarpDeviceIconDatas).field_0x10 = 0;
  *(undefined8 *)&(this->IndoorMapWarpDeviceIconDatas).field_0x18 = 0;
  *(undefined8 *)&(this->IndoorMapWarpDeviceIconDatas).field_0x38 = 0;
  *(undefined8 *)&(this->IndoorMapWarpDeviceIconDatas).field_0x48 = 0;
  *(undefined8 *)&this->IndoorMapWarpDeviceIconDatas = 0;
  *(undefined8 *)&(this->IndoorMapWarpDeviceIconDatas).field_0x8 = 0;
  *(undefined8 *)&(this->IndoorMapWarpDeviceIconDatas).field_0x20 = 0;
  *(undefined4 *)&(this->IndoorMapWarpDeviceIconDatas).field_0x28 = 0;
  *(undefined4 *)&(this->IndoorMapWarpDeviceIconDatas).field_0x2c = 0x80;
  *(undefined4 *)&(this->IndoorMapWarpDeviceIconDatas).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IndoorMapWarpDeviceIconDatas).field_0x34 = 0;
  *(undefined8 *)&(this->IndoorMapWarpDeviceIconDatas).field_0x40 = 0;
  *(undefined8 *)&(this->WorldMapNpcSpawnTableMap).field_0x10 = 0;
  *(undefined8 *)&(this->WorldMapNpcSpawnTableMap).field_0x18 = 0;
  *(undefined8 *)&(this->WorldMapNpcSpawnTableMap).field_0x38 = 0;
  *(undefined8 *)&(this->WorldMapNpcSpawnTableMap).field_0x48 = 0;
  *(undefined8 *)&this->WorldMapNpcSpawnTableMap = 0;
  *(undefined8 *)&(this->WorldMapNpcSpawnTableMap).field_0x8 = 0;
  *(undefined8 *)&(this->WorldMapNpcSpawnTableMap).field_0x20 = 0;
  *(undefined4 *)&(this->WorldMapNpcSpawnTableMap).field_0x28 = 0;
  *(undefined4 *)&(this->WorldMapNpcSpawnTableMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->WorldMapNpcSpawnTableMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WorldMapNpcSpawnTableMap).field_0x34 = 0;
  *(undefined8 *)&(this->WorldMapNpcSpawnTableMap).field_0x40 = 0;
  *(undefined8 *)&(this->IndoorMapNpcSpawnTableMap).field_0x10 = 0;
  *(undefined8 *)&(this->IndoorMapNpcSpawnTableMap).field_0x18 = 0;
  *(undefined8 *)&(this->IndoorMapNpcSpawnTableMap).field_0x38 = 0;
  *(undefined8 *)&(this->IndoorMapNpcSpawnTableMap).field_0x48 = 0;
  *(undefined8 *)&this->IndoorMapNpcSpawnTableMap = 0;
  *(undefined8 *)&(this->IndoorMapNpcSpawnTableMap).field_0x8 = 0;
  *(undefined8 *)&(this->IndoorMapNpcSpawnTableMap).field_0x20 = 0;
  *(undefined4 *)&(this->IndoorMapNpcSpawnTableMap).field_0x28 = 0;
  *(undefined4 *)&(this->IndoorMapNpcSpawnTableMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->IndoorMapNpcSpawnTableMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IndoorMapNpcSpawnTableMap).field_0x34 = 0;
  *(undefined8 *)&(this->IndoorMapNpcSpawnTableMap).field_0x40 = 0;
  *(undefined8 *)&(this->IslandQuestBaseNPCIDMap).field_0x10 = 0;
  *(undefined8 *)&(this->IslandQuestBaseNPCIDMap).field_0x18 = 0;
  *(undefined8 *)&(this->IslandQuestBaseNPCIDMap).field_0x38 = 0;
  *(undefined8 *)&(this->IslandQuestBaseNPCIDMap).field_0x48 = 0;
  *(undefined8 *)&this->IslandQuestBaseNPCIDMap = 0;
  *(undefined8 *)&(this->IslandQuestBaseNPCIDMap).field_0x8 = 0;
  *(undefined8 *)&(this->IslandQuestBaseNPCIDMap).field_0x20 = 0;
  *(undefined4 *)&(this->IslandQuestBaseNPCIDMap).field_0x28 = 0;
  *(undefined4 *)&(this->IslandQuestBaseNPCIDMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->IslandQuestBaseNPCIDMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IslandQuestBaseNPCIDMap).field_0x34 = 0;
  *(undefined8 *)&(this->IslandQuestBaseNPCIDMap).field_0x40 = 0;
  *(undefined8 *)&(this->IndoorQuestBaseNPCIDMap).field_0x10 = 0;
  *(undefined8 *)&(this->IndoorQuestBaseNPCIDMap).field_0x18 = 0;
  *(undefined8 *)&(this->IndoorQuestBaseNPCIDMap).field_0x38 = 0;
  *(undefined8 *)&(this->IndoorQuestBaseNPCIDMap).field_0x48 = 0;
  *(undefined8 *)&this->IndoorQuestBaseNPCIDMap = 0;
  *(undefined8 *)&(this->IndoorQuestBaseNPCIDMap).field_0x8 = 0;
  *(undefined8 *)&(this->IndoorQuestBaseNPCIDMap).field_0x20 = 0;
  *(undefined4 *)&(this->IndoorQuestBaseNPCIDMap).field_0x28 = 0;
  *(undefined4 *)&(this->IndoorQuestBaseNPCIDMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->IndoorQuestBaseNPCIDMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IndoorQuestBaseNPCIDMap).field_0x34 = 0;
  *(undefined8 *)&(this->IndoorQuestBaseNPCIDMap).field_0x40 = 0;
  (this->RangeOverIconList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RangeOverIconList).ArrayNum = 0;
  (this->RangeOverIconList).ArrayMax = 0;
  *(undefined8 *)&(this->BreachDataInfoMap).field_0x10 = 0;
  *(undefined8 *)&(this->BreachDataInfoMap).field_0x18 = 0;
  *(undefined8 *)&(this->BreachDataInfoMap).field_0x38 = 0;
  *(undefined8 *)&(this->BreachDataInfoMap).field_0x48 = 0;
  *(undefined8 *)&this->BreachDataInfoMap = 0;
  *(undefined8 *)&(this->BreachDataInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->BreachDataInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->BreachDataInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->BreachDataInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->BreachDataInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->BreachDataInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BreachDataInfoMap).field_0x40 = 0;
  *(undefined8 *)&(this->ZoneHasIslandIDMap).field_0x10 = 0;
  *(undefined8 *)&(this->ZoneHasIslandIDMap).field_0x18 = 0;
  *(undefined8 *)&(this->ZoneHasIslandIDMap).field_0x38 = 0;
  *(undefined8 *)&(this->ZoneHasIslandIDMap).field_0x48 = 0;
  *(undefined8 *)&this->ZoneHasIslandIDMap = 0;
  *(undefined8 *)&(this->ZoneHasIslandIDMap).field_0x8 = 0;
  *(undefined8 *)&(this->ZoneHasIslandIDMap).field_0x20 = 0;
  *(undefined4 *)&(this->ZoneHasIslandIDMap).field_0x28 = 0;
  *(undefined4 *)&(this->ZoneHasIslandIDMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ZoneHasIslandIDMap).field_0x34 = 0;
  *(undefined4 *)&(this->ZoneHasIslandIDMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ZoneHasIslandIDMap).field_0x40 = 0;
  (this->ZoneIslandTableRowArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ZoneIslandTableRowArray).ArrayNum = 0;
  (this->ZoneIslandTableRowArray).ArrayMax = 0;
  *(undefined8 *)&(this->DataTable_GC).field_0x10 = 0;
  *(undefined8 *)&(this->DataTable_GC).field_0x18 = 0;
  *(undefined8 *)&(this->DataTable_GC).field_0x38 = 0;
  *(undefined8 *)&(this->DataTable_GC).field_0x48 = 0;
  *(undefined8 *)&this->DataTable_GC = 0;
  *(undefined8 *)&(this->DataTable_GC).field_0x8 = 0;
  *(undefined8 *)&(this->DataTable_GC).field_0x20 = 0;
  *(undefined4 *)&(this->DataTable_GC).field_0x28 = 0;
  *(undefined4 *)&(this->DataTable_GC).field_0x2c = 0x80;
  *(undefined4 *)&(this->DataTable_GC).field_0x34 = 0;
  *(undefined4 *)&(this->DataTable_GC).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DataTable_GC).field_0x40 = 0;
  (this->IconSelectedObject).WeakPtr = (FWeakObjectPtr)0x0;
  this->RangeOverIconKey = 0;
  this->BreachRequestCount = 0;
  this->BreachResponseCount = 0;
  this->CurrentRequestIndex = 0;
  this->PlayerUID = 0;
  this->RegionIndex = 0;
  this->IsBreachDataAllLoad = false;
  this->IsLogin = false;
  this->IsValidContentsFocusPosition = false;
  this->IsValidLinkChatFocusPosition = false;
  this->WorldBossIslandID = 0;
  (this->ContentsFocusPosition).field0_0x0._s_0.X = 0.0;
  (this->ContentsFocusPosition).field0_0x0._s_0.Y = 0.0;
  return this;
}

// ~UDS_WorldMapManager @ 14b771b80

void __thiscall UDS_WorldMapManager::~UDS_WorldMapManager(UDS_WorldMapManager *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDS_WorldMapManager__6B_;
  *(undefined4 *)&(this->DataTable_GC).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DataTable_GC).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UDataTable_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UDataTable_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UDataTable_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DataTable_GC);
  pFVar2 = (this->ZoneIslandTableRowArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->ZoneHasIslandIDMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ZoneHasIslandIDMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ZoneHasIslandIDMap);
  *(undefined4 *)&(this->BreachDataInfoMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BreachDataInfoMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BreachDataInfoMap);
  pFVar2 = (this->RangeOverIconList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->IndoorQuestBaseNPCIDMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->IndoorQuestBaseNPCIDMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->IndoorQuestBaseNPCIDMap);
  *(undefined4 *)&(this->IslandQuestBaseNPCIDMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->IslandQuestBaseNPCIDMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->IslandQuestBaseNPCIDMap);
  *(undefined4 *)&(this->IndoorMapNpcSpawnTableMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->IndoorMapNpcSpawnTableMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->IndoorMapNpcSpawnTableMap);
  *(undefined4 *)&(this->WorldMapNpcSpawnTableMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->WorldMapNpcSpawnTableMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WorldMapNpcSpawnTableMap);
  *(undefined4 *)&(this->IndoorMapWarpDeviceIconDatas).field_0x48 = 0;
  pvVar1 = *(void **)&(this->IndoorMapWarpDeviceIconDatas).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->IndoorMapWarpDeviceIconDatas);
  *(undefined4 *)&(this->WorldMapWarpDeviceIconDatas).field_0x48 = 0;
  pvVar1 = *(void **)&(this->WorldMapWarpDeviceIconDatas).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WorldMapWarpDeviceIconDatas);
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b775a60

UClass * __cdecl UDS_WorldMapManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WorldMapManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WorldMapManager",
               &Z_Registration_Info_UClass_UDS_WorldMapManager.InnerSingleton,
               StaticRegisterNativesUDS_WorldMapManager,0x388,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_WorldMapManager>,
               InternalVTableHelperCtorCaller<UDS_WorldMapManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WorldMapManager.InnerSingleton;
}

// StaticRegisterNativesUDS_WorldMapManager @ 14b777c60

void __cdecl UDS_WorldMapManager::StaticRegisterNativesUDS_WorldMapManager(void)

{
  return;
}

// AddRangeOverIconArray @ 14bb4f580

long64 __thiscall
UDS_WorldMapManager::AddRangeOverIconArray(UDS_WorldMapManager *this,long64 param_1,int param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  FDS_EventDelegate<__int64_const_,int_const_> *this_00;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  UDS_WorldMapEvent *pUVar13;
  long64 lVar14;
  uint uVar15;
  longlong lVar16;
  FDestructionSentinel local_48;
  
  pFVar12 = (this->RangeOverIconList).AllocatorInstance.Data;
  pFVar3 = pFVar12 + (longlong)(this->RangeOverIconList).ArrayNum * 8;
  for (; pFVar12 != pFVar3; pFVar12 = pFVar12 + 8) {
    if (*(longlong *)pFVar12 == param_1) {
      return 0;
    }
  }
  pUVar13 = UDS_WorldMapEvent::GetEvent();
  if (pUVar13 == (UDS_WorldMapEvent *)0x0) {
    return 0;
  }
  this->RangeOverIconKey = this->RangeOverIconKey + 1;
  this_00 = &pUVar13->RangeOverIconSpawnDelegate;
  lVar14 = this->RangeOverIconKey;
  bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
  if (bVar7) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_48);
    puVar1 = &(pUVar13->RangeOverIconSpawnDelegate).Delegate.field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar7 = false;
    uVar15 = *(int *)&(pUVar13->RangeOverIconSpawnDelegate).Delegate.field_0x10 - 1;
    if (-1 < (int)uVar15) {
      lVar16 = (longlong)(int)uVar15 << 4;
      bVar7 = false;
      do {
        uVar10 = 0;
        if ((int)uVar15 < *(int *)&(pUVar13->RangeOverIconSpawnDelegate).Delegate.field_0x10) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          lVar14 = (*pcVar6)();
          return lVar14;
        }
        lVar4 = *(longlong *)&(pUVar13->RangeOverIconSpawnDelegate).Delegate.field_0x8;
        if (((*(int *)(lVar16 + 8 + lVar4) == 0) ||
            (plVar5 = *(longlong **)(lVar16 + lVar4), plVar5 == (longlong *)0x0)) ||
           (cVar9 = (**(code **)(*plVar5 + 0x68))(plVar5,lVar14,param_2), cVar9 == '\0')) {
          bVar7 = true;
        }
        lVar16 = lVar16 + -0x10;
        uVar15 = uVar15 - 1;
      } while (-1 < (int)uVar15);
    }
    puVar1 = &(pUVar13->RangeOverIconSpawnDelegate).Delegate.field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar7) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
  }
  iVar11 = (this->RangeOverIconList).ArrayNum;
  piVar2 = &(this->RangeOverIconList).ArrayMax;
  if (iVar11 == *piVar2) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&(this->RangeOverIconList).AllocatorInstance,piVar2);
  }
  (this->RangeOverIconList).ArrayNum = iVar11 + 1;
  *(long64 *)((this->RangeOverIconList).AllocatorInstance.Data + (longlong)iVar11 * 8) =
       this->RangeOverIconKey;
  return this->RangeOverIconKey;
}

// BreachInfoContain @ 14bb51b20

bool __thiscall UDS_WorldMapManager::BreachInfoContain(UDS_WorldMapManager *this,int param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar13 = 0;
  puVar1 = &(this->BreachDataInfoMap).field_0x10;
  iVar4 = *(int *)&(this->BreachDataInfoMap).field_0x28;
  uVar8 = 1;
  iVar15 = 0;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&(this->BreachDataInfoMap).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14bb51bcd;
      uVar12 = puVar16[lVar11 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar9 = (int)lVar11 + -1 + iVar15;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_14bb51bcd:
  uVar12 = *(uint *)&(this->BreachDataInfoMap).field_0x28;
  uVar17 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar13);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->BreachDataInfoMap).field_0x8 -
                       *(int *)&(this->BreachDataInfoMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar8 = *(uint *)&(this->BreachDataInfoMap).field_0x28;
  if (uVar12 != uVar8) {
    puVar14 = *(undefined1 **)&(this->BreachDataInfoMap).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar13;
      uVar17 = uVar17 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14bb51cd0;
      uVar12 = *(uint *)(puVar14 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar12 = (int)lVar11 + -1 + uVar17;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_14bb51cd0:
  while( true ) {
    if (*(int *)&(this->BreachDataInfoMap).field_0x8 - *(int *)&(this->BreachDataInfoMap).field_0x34
        != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar11 = (longlong)TStack_60.CurrentBitIndex * 0x20 + *(longlong *)&this->BreachDataInfoMap;
    piVar10 = *(int **)(lVar11 + 8);
    piVar2 = piVar10 + *(int *)(lVar11 + 0x10);
    for (; piVar10 != piVar2; piVar10 = piVar10 + 1) {
      if (*piVar10 == param_1) {
        return true;
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return false;
}

// BroadCastRefrashAllIcon @ 14bb51d60

void __thiscall UDS_WorldMapManager::BroadCastRefrashAllIcon(UDS_WorldMapManager *this)

{
  bool bVar1;
  UDS_WorldMapEvent *pUVar2;
  
  if ((this->IsLogin == false) &&
     (pUVar2 = UDS_WorldMapEvent::GetEvent(), pUVar2 != (UDS_WorldMapEvent *)0x0)) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->RefrashMapAllIconDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->RefrashMapAllIconDelegate).Delegate);
      return;
    }
  }
  return;
}

// ConvertJsonToBreachData @ 14bb56760

void __thiscall
UDS_WorldMapManager::ConvertJsonToBreachData(UDS_WorldMapManager *this,FString *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  FString *this_01;
  ulonglong uVar2;
  FScriptContainerElement *_Src;
  undefined1 *puVar3;
  code *pcVar4;
  FJsonObject *pFVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  UDS_WorldMapEvent *pUVar11;
  byte bVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  ForAnyElementType FVar15;
  undefined1 *puVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  int iVar22;
  undefined1 local_res18 [8];
  uint local_res20 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_1a8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_198;
  ForAnyElementType local_188;
  undefined8 local_180;
  FString local_178;
  int local_168;
  uint uStack_164;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_160;
  uint local_158;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  TSharedPtr<FJsonObject,1> local_148;
  StackState local_138;
  TArray<int,TSizedDefaultAllocator<32>_> *local_100;
  undefined8 uStack_f8;
  TBitArray<FDefaultBitArrayAllocator> *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  int local_cc;
  TPairInitializer<int_&,TArray<int,TSizedDefaultAllocator<32>_>_&> local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  FString local_90;
  uint *local_80;
  ForAnyElementType *local_78;
  TSharedRef<TJsonReader<wchar_t>,1> local_70 [2];
  undefined4 local_44;
  
  TJsonReaderFactory<wchar_t>::Create(local_70,param_1);
  local_138.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.Object = (FJsonObject *)0x0;
  local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_138.Identifier.Data.ArrayNum = 0;
  local_138.Identifier.Data.ArrayMax = 0;
  local_138.Object.Object = (FJsonObject *)0x0;
  local_138.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_138.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Array.ArrayNum = 0;
  local_138.Array.ArrayMax = 0;
  bVar6 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    (local_70[0].Object,&local_138,None);
  if (bVar6) {
    bVar6 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_138,&local_148);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_138.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_138.Array.AllocatorInstance.Data,
               local_138.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_138.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_138.Array.AllocatorInstance.Data);
    }
    if (local_138.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Identifier.Data.AllocatorInstance.Data);
    }
    if ((bVar6) &&
       ((TArray<int,TSizedDefaultAllocator<32>_> *)local_148.Object !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0)) {
      if (((TArray<int,TSizedDefaultAllocator<32>_> *)local_148.Object ==
           (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar5 = local_148.Object;
      iVar8 = ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)local_148.Object + 0x20))->
              ArrayNum;
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)local_148.Object + 0x10);
      iVar19 = 0;
      uVar7 = 1;
      local_e0._0_4_ = 0;
      uStack_e8._4_4_ = iVar19;
      if (iVar8 != 0) {
        pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)
                  (((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)local_148.Object + 0x20))
                  ->AllocatorInstance).Data;
        if (pTVar21 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar21 = pTVar1;
        }
        uVar9 = *(uint *)(pTVar21->AllocatorInstance).InlineData;
        local_e0._0_4_ = 0;
        iVar19 = 0;
        while (uVar9 == 0) {
          lVar13 = (longlong)iVar19;
          local_e0._0_4_ = (int)local_e0 + 0x20;
          iVar19 = iVar19 + 1;
          uStack_e8._4_4_ = iVar8;
          if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14bb5691d;
          uVar9 = *(uint *)((longlong)(pTVar21->AllocatorInstance).InlineData + lVar13 * 4 + 4);
        }
        uVar7 = -uVar9 & uVar9;
        uVar2 = (ulonglong)uVar7 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_d0 = (int)lVar13;
        uStack_e8._4_4_ = (int)local_e0 + -1 + local_d0;
        if (iVar8 < uStack_e8._4_4_) {
          uStack_e8._4_4_ = iVar8;
        }
      }
LAB_14bb5691d:
      uVar9 = ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)local_148.Object + 0x20))->
              ArrayNum;
      bVar12 = (byte)uVar9 & 0x1f;
      iStack_d8 = *(int *)((longlong)local_148.Object + 8) -
                  *(int *)((longlong)
                           &(((TArray<int,TSizedDefaultAllocator<32>_> *)
                             ((longlong)local_148.Object + 0x30))->AllocatorInstance).Data + 4);
      uVar18 = uVar9 & 0xffffffe0;
      iVar22 = (int)uVar9 >> 5;
      uStack_164 = 1 << bVar12;
      uVar17 = -1 << bVar12;
      local_100 = (TArray<int,TSizedDefaultAllocator<32>_> *)local_148.Object;
      uStack_f8 = CONCAT44(uVar7,iVar19);
      uStack_e8._0_4_ = 0xffffffff;
      local_e0._4_4_ = local_44;
      local_c8.Value = (TArray<int,TSizedDefaultAllocator<32>_> *)local_148.Object;
      TStack_b8._padding_ = uStack_f8;
      uStack_98 = CONCAT44(uStack_d4,iStack_d8);
      TStack_b8.UnvisitedBitMask = 0xffffffff;
      TStack_b8.CurrentBitIndex = uStack_e8._4_4_;
      TStack_b8.BaseBitIndex = (int)local_e0;
      TStack_b8._28_4_ = local_44;
      local_168 = iVar22;
      pTStack_160 = pTVar1;
      local_158 = uVar17;
      uStack_154 = uVar9;
      uStack_150 = uVar18;
      TStack_b8.Array = pTVar1;
      if ((((int)uVar9 < 0) || (iVar8 < (int)uVar9)) &&
         (local_f0 = pTVar1,
         bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar21 = pTStack_160;
      uVar7 = ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)pFVar5 + 0x20))->ArrayNum;
      if (uVar9 != uVar7) {
        pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)
                  (((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)pFVar5 + 0x20))->
                  AllocatorInstance).Data;
        if (pTVar20 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar20 = pTVar1;
        }
        uVar17 = uVar17 & *(uint *)((longlong)(pTVar20->AllocatorInstance).InlineData +
                                   (longlong)iVar22 * 4);
        while (uVar17 == 0) {
          uStack_150 = uVar18 + 0x20;
          local_168 = iVar22 + 1;
          if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < local_168)
          goto LAB_14bb56a58;
          uVar17 = *(uint *)((longlong)(pTVar20->AllocatorInstance).InlineData +
                            (longlong)iVar22 * 4 + 4);
          local_158 = 0xffffffff;
          uVar18 = uStack_150;
          iVar22 = local_168;
        }
        uStack_164 = -uVar17 & uVar17;
        uVar2 = (ulonglong)uStack_164 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_cc = (int)lVar13;
        uStack_154 = local_cc + -1 + uVar18;
        if ((int)uVar7 < (int)uStack_154) {
LAB_14bb56a58:
          uStack_154 = uVar7;
        }
      }
      uVar7 = uStack_154;
      uStack_f8 = CONCAT44(uStack_164,local_168);
      uStack_e8 = CONCAT44(uStack_154,local_158);
      local_e0 = CONCAT44(uStack_14c,uStack_150);
      local_f0 = pTStack_160;
      while( true ) {
        pTVar10 = local_c8.Value;
        if ((local_c8.Value)->ArrayNum -
            *(int *)((longlong)&local_c8.Value[3].AllocatorInstance.Data + 4) != (int)uStack_98) {
          local_res18[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (((TStack_b8.CurrentBitIndex == uVar7) && (TStack_b8.Array == pTVar21)) &&
           (pTVar10 == (TArray<int,TSizedDefaultAllocator<32>_> *)pFVar5)) break;
        lVar13 = *(longlong *)&pTVar10->AllocatorInstance;
        this_01 = (FString *)(lVar13 + (longlong)TStack_b8.CurrentBitIndex * 0x28);
        if (*(int *)(lVar13 + 8 + (longlong)TStack_b8.CurrentBitIndex * 0x28) == 0) {
          pwVar14 = L"";
        }
        else {
          pwVar14 = (wchar_t *)(this_01->Data).AllocatorInstance.Data;
        }
        iVar8 = FGenericPlatformStricmp::Stricmp(pwVar14,"id");
        if (iVar8 == 0) {
          if ((this_01[1].Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FJsonValue::AsString((FJsonValue *)this_01[1].Data.AllocatorInstance.Data,&local_90);
          local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1a8.ArrayNum = 0;
          local_1a8.ArrayMax = 0;
          ::FString::ParseIntoArray(&local_90,&local_1a8,L"_",true);
          if (local_1a8.ArrayNum == 2) {
            if (*(int *)(local_1a8.AllocatorInstance.Data + 8) == 0) {
              pwVar14 = L"";
            }
            else {
              pwVar14 = *(wchar_t **)local_1a8.AllocatorInstance.Data;
            }
            _wtoi(pwVar14);
            if ((local_1a8.ArrayNum < 2) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (*(int *)(local_1a8.AllocatorInstance.Data + 0x18) == 0) {
              pwVar14 = L"";
            }
            else {
              pwVar14 = *(wchar_t **)(local_1a8.AllocatorInstance.Data + 0x10);
            }
            _wtoi(pwVar14);
          }
          DestructItems<FString,int>((FString *)local_1a8.AllocatorInstance.Data,local_1a8.ArrayNum)
          ;
          FVar15.Data = local_90.Data.AllocatorInstance.Data;
          if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.AllocatorInstance.Data);
            FVar15.Data = local_90.Data.AllocatorInstance.Data;
          }
LAB_14bb56e22:
          if (FVar15.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar15.Data);
          }
        }
        else {
          if ((this_01->Data).ArrayNum == 0) {
            pwVar14 = L"";
          }
          else {
            pwVar14 = (wchar_t *)(this_01->Data).AllocatorInstance.Data;
          }
          iVar8 = FGenericPlatformStricmp::Stricmp(pwVar14,"region_index");
          if ((iVar8 != 0) &&
             (iVar8 = ::FString::Find(this_01,L"_",1,IgnoreCase,FromStart,-1), iVar8 != -1)) {
            local_178.Data.ArrayNum = (this_01->Data).ArrayNum;
            lVar13 = (longlong)local_178.Data.ArrayNum;
            _Src = (this_01->Data).AllocatorInstance.Data;
            local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (local_178.Data.ArrayNum == 0) {
              local_178.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_178.Data.ArrayNum,0,(ForAnyElementType *)&local_178,
                         local_178.Data.ArrayNum,&local_178.Data.ArrayMax);
              memcpy(local_178.Data.AllocatorInstance.Data,_Src,lVar13 * 2);
            }
            local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_198.ArrayNum = 0;
            local_198.ArrayMax = 0;
            ::FString::ParseIntoArray(&local_178,&local_198,L"_",true);
            if (local_198.ArrayNum == 2) {
              if (*(int *)(local_198.AllocatorInstance.Data + 8) == 0) {
                pwVar14 = L"";
              }
              else {
                pwVar14 = *(wchar_t **)local_198.AllocatorInstance.Data;
              }
              uVar9 = _wtoi(pwVar14);
              if ((local_198.ArrayNum < 2) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (*(int *)(local_198.AllocatorInstance.Data + 0x18) == 0) {
                pwVar14 = L"";
              }
              else {
                pwVar14 = *(wchar_t **)(local_198.AllocatorInstance.Data + 0x10);
              }
              iVar8 = _wtoi(pwVar14);
              this_00 = &this->BreachDataInfoMap;
              local_res20[0] = uVar9;
              if (*(int *)&(this->BreachDataInfoMap).field_0x8 !=
                  *(int *)&(this->BreachDataInfoMap).field_0x34) {
                puVar3 = *(undefined1 **)&(this->BreachDataInfoMap).field_0x40;
                puVar16 = &(this->BreachDataInfoMap).field_0x38;
                if (puVar3 != (undefined1 *)0x0) {
                  puVar16 = puVar3;
                }
                iVar19 = *(int *)(puVar16 +
                                 (ulonglong)
                                 (*(int *)&(this->BreachDataInfoMap).field_0x48 - 1U & uVar9) * 4);
                if (iVar19 != -1) {
                  do {
                    if (*(uint *)((longlong)iVar19 * 0x20 + *(longlong *)&this_00->field_0x0) ==
                        uVar9) {
                      pTVar10 = TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                                ::FindChecked((TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                                               *)this_00,uVar9);
                      iVar19 = pTVar10->ArrayNum;
                      if (iVar19 == pTVar10->ArrayMax) {
                        iVar19 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x404,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
                      }
                      pTVar10->ArrayNum = iVar19 + 1;
                      *(int *)((pTVar10->AllocatorInstance).Data + (longlong)iVar19 * 4) = iVar8;
                      goto LAB_14bb56e00;
                    }
                    iVar19 = *(int *)((longlong)iVar19 * 0x20 + 0x18 +
                                     *(longlong *)&this_00->field_0x0);
                  } while (iVar19 != -1);
                }
              }
              local_188.Data = (FScriptContainerElement *)0x0;
              local_180 = 0;
              iVar19 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_188,(int *)((longlong)&local_180 + 4));
              local_180 = CONCAT44(local_180._4_4_,iVar19 + 1);
              *(int *)(local_188.Data + (longlong)iVar19 * 4) = iVar8;
              local_80 = local_res20;
              local_78 = &local_188;
              TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<int_&,TArray<int,TSizedDefaultAllocator<32>_>_&>_>
                        ((TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                          *)this_00,&local_c8,(bool *)&local_80);
              if (local_188.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_188.Data);
              }
            }
LAB_14bb56e00:
            DestructItems<FString,int>
                      ((FString *)local_198.AllocatorInstance.Data,local_198.ArrayNum);
            FVar15.Data = local_178.Data.AllocatorInstance.Data;
            if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_198.AllocatorInstance.Data);
              FVar15.Data = local_178.Data.AllocatorInstance.Data;
            }
            goto LAB_14bb56e22;
          }
        }
        TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
      }
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_138.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_138.Array.AllocatorInstance.Data,
               local_138.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_138.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_138.Array.AllocatorInstance.Data);
    }
    if (local_138.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Identifier.Data.AllocatorInstance.Data);
    }
  }
  this->BreachResponseCount = this->BreachResponseCount + 1;
  if (((this->BreachRequestCount == this->BreachResponseCount) &&
      (this->IsBreachDataAllLoad = true, this->IsLogin == false)) &&
     (pUVar11 = UDS_WorldMapEvent::GetEvent(), pUVar11 != (UDS_WorldMapEvent *)0x0)) {
    bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar11->RefrashMapAllIconDelegate);
    if (bVar6) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar11->RefrashMapAllIconDelegate).Delegate);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70[0].SharedReferenceCount.ReferenceController);
  return;
}

// GetBreachInfoArray @ 14bb639b0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UDS_WorldMapManager::GetBreachInfoArray
          (UDS_WorldMapManager *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          ,int param_1)

{
  longlong lVar1;
  FScriptContainerElement *_Src;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  int iVar4;
  
  if (*(int *)&(this->BreachDataInfoMap).field_0x8 != *(int *)&(this->BreachDataInfoMap).field_0x34)
  {
    puVar3 = *(undefined1 **)&(this->BreachDataInfoMap).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->BreachDataInfoMap).field_0x38;
    }
    iVar4 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->BreachDataInfoMap).field_0x48 - 1U & param_1) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&this->BreachDataInfoMap;
      do {
        if (*(int *)((longlong)iVar4 * 0x20 + lVar1) == param_1) {
          if (iVar4 != -1) {
            pTVar2 = TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                     ::FindChecked((TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                                    *)&this->BreachDataInfoMap,param_1);
            (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            iVar4 = pTVar2->ArrayNum;
            _Src = (pTVar2->AllocatorInstance).Data;
            __return_storage_ptr__->ArrayNum = iVar4;
            if (iVar4 != 0) {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar4,0,&__return_storage_ptr__->AllocatorInstance,iVar4,
                         &__return_storage_ptr__->ArrayMax);
              memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar4 << 2);
              return __return_storage_ptr__;
            }
            __return_storage_ptr__->ArrayMax = 0;
            return __return_storage_ptr__;
          }
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + lVar1);
      } while (iVar4 != -1);
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetDataTableGC @ 14bb64fa0

UDataTable * __thiscall UDS_WorldMapManager::GetDataTableGC(UDS_WorldMapManager *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  UDataTable **ppUVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->DataTable_GC).field_0x8 != *(int *)&(this->DataTable_GC).field_0x34) {
    puVar4 = *(undefined1 **)&(this->DataTable_GC).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->DataTable_GC).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->DataTable_GC).field_0x48 - 1U & param_1) *
                              4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->DataTable_GC;
      do {
        if (*(int *)(lVar1 + (longlong)iVar2 * 0x18) == param_1) {
          ppUVar3 = TMapBase<int,UDataTable_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UDataTable_*,0>_>
                    ::FindChecked((TMapBase<int,UDataTable_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UDataTable_*,0>_>
                                   *)&this->DataTable_GC,param_1);
          return *ppUVar3;
        }
        iVar2 = *(int *)(lVar1 + 0x10 + (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
  }
  return (UDataTable *)0x0;
}

// GetIndoorMapNpcSpawnTableArray @ 14bb65a00

TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
UDS_WorldMapManager::GetIndoorMapNpcSpawnTableArray
          (UDS_WorldMapManager *this,
          TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1)

{
  longlong lVar1;
  FScriptContainerElement *_Src;
  TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  int iVar4;
  
  if (*(int *)&(this->IndoorMapNpcSpawnTableMap).field_0x8 !=
      *(int *)&(this->IndoorMapNpcSpawnTableMap).field_0x34) {
    puVar3 = *(undefined1 **)&(this->IndoorMapNpcSpawnTableMap).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->IndoorMapNpcSpawnTableMap).field_0x38;
    }
    iVar4 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->IndoorMapNpcSpawnTableMap).field_0x48 - 1U & param_1)
                              * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&this->IndoorMapNpcSpawnTableMap;
      do {
        if (*(int *)((longlong)iVar4 * 0x20 + lVar1) == param_1) {
          if (iVar4 != -1) {
            pTVar2 = TMapBase<int,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>,0>_>
                     ::FindChecked((TMapBase<int,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>,0>_>
                                    *)&this->IndoorMapNpcSpawnTableMap,param_1);
            (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            iVar4 = pTVar2->ArrayNum;
            _Src = (pTVar2->AllocatorInstance).Data;
            __return_storage_ptr__->ArrayNum = iVar4;
            if (iVar4 != 0) {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar4,0,&__return_storage_ptr__->AllocatorInstance,iVar4,
                         &__return_storage_ptr__->ArrayMax);
              memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar4 << 3);
              return __return_storage_ptr__;
            }
            __return_storage_ptr__->ArrayMax = 0;
            return __return_storage_ptr__;
          }
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + lVar1);
      } while (iVar4 != -1);
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetIndoorMapWarpDeviceIconDatas @ 14bb65b10

TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_> * __thiscall
UDS_WorldMapManager::GetIndoorMapWarpDeviceIconDatas
          (UDS_WorldMapManager *this,
          TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1)

{
  longlong lVar1;
  FScriptContainerElement *_Src;
  TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  int iVar4;
  
  if (*(int *)&(this->IndoorMapWarpDeviceIconDatas).field_0x8 !=
      *(int *)&(this->IndoorMapWarpDeviceIconDatas).field_0x34) {
    puVar3 = *(undefined1 **)&(this->IndoorMapWarpDeviceIconDatas).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->IndoorMapWarpDeviceIconDatas).field_0x38;
    }
    iVar4 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->IndoorMapWarpDeviceIconDatas).field_0x48 - 1U &
                              param_1) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&this->IndoorMapWarpDeviceIconDatas;
      do {
        if (*(int *)((longlong)iVar4 * 0x20 + lVar1) == param_1) {
          if (iVar4 != -1) {
            pTVar2 = TMapBase<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>,0>_>
                     ::FindChecked((TMapBase<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>,0>_>
                                    *)&this->IndoorMapWarpDeviceIconDatas,param_1);
            (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            iVar4 = pTVar2->ArrayNum;
            _Src = (pTVar2->AllocatorInstance).Data;
            __return_storage_ptr__->ArrayNum = iVar4;
            if (iVar4 != 0) {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x30,8,iVar4,0,&__return_storage_ptr__->AllocatorInstance,iVar4,
                         &__return_storage_ptr__->ArrayMax);
              memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0x30);
              return __return_storage_ptr__;
            }
            __return_storage_ptr__->ArrayMax = 0;
            return __return_storage_ptr__;
          }
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + lVar1);
      } while (iVar4 != -1);
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetIndoorQuestBaseNPCIDArray @ 14bb65c20

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UDS_WorldMapManager::GetIndoorQuestBaseNPCIDArray
          (UDS_WorldMapManager *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          ,int param_1)

{
  longlong lVar1;
  FScriptContainerElement *_Src;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  int iVar4;
  
  if (*(int *)&(this->IndoorQuestBaseNPCIDMap).field_0x8 !=
      *(int *)&(this->IndoorQuestBaseNPCIDMap).field_0x34) {
    puVar3 = *(undefined1 **)&(this->IndoorQuestBaseNPCIDMap).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->IndoorQuestBaseNPCIDMap).field_0x38;
    }
    iVar4 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->IndoorQuestBaseNPCIDMap).field_0x48 - 1U & param_1) *
                              4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&this->IndoorQuestBaseNPCIDMap;
      do {
        if (*(int *)((longlong)iVar4 * 0x20 + lVar1) == param_1) {
          if (iVar4 != -1) {
            pTVar2 = TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                     ::FindChecked((TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                                    *)&this->IndoorQuestBaseNPCIDMap,param_1);
            (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            iVar4 = pTVar2->ArrayNum;
            _Src = (pTVar2->AllocatorInstance).Data;
            __return_storage_ptr__->ArrayNum = iVar4;
            if (iVar4 != 0) {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar4,0,&__return_storage_ptr__->AllocatorInstance,iVar4,
                         &__return_storage_ptr__->ArrayMax);
              memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar4 << 2);
              return __return_storage_ptr__;
            }
            __return_storage_ptr__->ArrayMax = 0;
            return __return_storage_ptr__;
          }
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + lVar1);
      } while (iVar4 != -1);
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetInst @ 14bb66560

UDS_WorldMapManager * __cdecl UDS_WorldMapManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_WorldMapManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_WorldMapManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_WorldMapManager_NoRegister();
  pUVar3 = (UDS_WorldMapManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_WorldMapManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_WorldMapManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_WorldMapManager *)0x0;
}

// GetIslandIDByZoneID @ 14bb66740

int __thiscall UDS_WorldMapManager::GetIslandIDByZoneID(UDS_WorldMapManager *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->ZoneHasIslandIDMap).field_0x8 !=
      *(int *)&(this->ZoneHasIslandIDMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ZoneHasIslandIDMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ZoneHasIslandIDMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->ZoneHasIslandIDMap).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->ZoneHasIslandIDMap;
      do {
        if (*(int *)(lVar1 + (longlong)iVar2 * 0x10) == param_1) {
          piVar3 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
                   FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                *)&this->ZoneHasIslandIDMap,param_1);
          return *piVar3;
        }
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  return 0;
}

// GetIslandQuestBaseNPCIDArray @ 14bb667c0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UDS_WorldMapManager::GetIslandQuestBaseNPCIDArray
          (UDS_WorldMapManager *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          ,int param_1)

{
  longlong lVar1;
  FScriptContainerElement *_Src;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  int iVar4;
  
  if (*(int *)&(this->IslandQuestBaseNPCIDMap).field_0x8 !=
      *(int *)&(this->IslandQuestBaseNPCIDMap).field_0x34) {
    puVar3 = *(undefined1 **)&(this->IslandQuestBaseNPCIDMap).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->IslandQuestBaseNPCIDMap).field_0x38;
    }
    iVar4 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->IslandQuestBaseNPCIDMap).field_0x48 - 1U & param_1) *
                              4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&this->IslandQuestBaseNPCIDMap;
      do {
        if (*(int *)((longlong)iVar4 * 0x20 + lVar1) == param_1) {
          if (iVar4 != -1) {
            pTVar2 = TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                     ::FindChecked((TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                                    *)&this->IslandQuestBaseNPCIDMap,param_1);
            (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            iVar4 = pTVar2->ArrayNum;
            _Src = (pTVar2->AllocatorInstance).Data;
            __return_storage_ptr__->ArrayNum = iVar4;
            if (iVar4 != 0) {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar4,0,&__return_storage_ptr__->AllocatorInstance,iVar4,
                         &__return_storage_ptr__->ArrayMax);
              memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar4 << 2);
              return __return_storage_ptr__;
            }
            __return_storage_ptr__->ArrayMax = 0;
            return __return_storage_ptr__;
          }
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + lVar1);
      } while (iVar4 != -1);
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetLinkChatFocusInfo @ 14bb668d0

void __thiscall
UDS_WorldMapManager::GetLinkChatFocusInfo
          (UDS_WorldMapManager *this,TVector<double> *param_1,int *param_2,bool *param_3)

{
  double dVar1;
  
  dVar1 = (this->LinkChatFocusPosition).field0_0x0._s_0.Y;
  (param_1->field0_0x0)._s_0.X = (this->LinkChatFocusPosition).field0_0x0._s_0.X;
  (param_1->field0_0x0)._s_0.Y = dVar1;
  (param_1->field0_0x0)._s_0.Z = (this->LinkChatFocusPosition).field0_0x0._s_0.Z;
  *param_2 = this->LinkChatFocusZoneID;
  *param_3 = this->LinkChatFocusIsIndoor;
  this->IsValidLinkChatFocusPosition = false;
  return;
}

// GetWarpDeviceLocation @ 14bb68490

TVector<double> * __thiscall
UDS_WorldMapManager::GetWarpDeviceLocation
          (UDS_WorldMapManager *this,TVector<double> *__return_storage_ptr__,int param_1,int param_2
          )

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  ForAnyElementType FVar8;
  undefined1 local_res18 [16];
  TArray<FDS_StuffSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> local_28;
  
  FDS_StuffSpawnTableRow::GetByIsland(&local_28,(longlong)param_1);
  iVar6 = local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)iVar6 * 8;
  uVar7 = local_28._8_8_;
  FVar8.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar7 != iVar6) {
      `TCheckedPointerIterator<FDS_StuffSpawnTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res18);
      uVar7 = local_28._8_8_;
    }
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (FVar8.Data == pFVar1) break;
    lVar3 = *(longlong *)FVar8.Data;
    if (((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x28))) && (**(int **)(lVar3 + 0x20) == param_2)) {
      dVar4 = *(double *)(lVar3 + 0x50);
      dVar2 = *(double *)(lVar3 + 0x58);
      (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)(lVar3 + 0x48);
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
LAB_14bb68525:
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    FVar8.Data = FVar8.Data + 8;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  goto LAB_14bb68525;
}

// GetWorldMapNpcSpawnTableArray @ 14bb69250

TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
UDS_WorldMapManager::GetWorldMapNpcSpawnTableArray
          (UDS_WorldMapManager *this,
          TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1)

{
  longlong lVar1;
  FScriptContainerElement *_Src;
  TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  int iVar4;
  
  if (*(int *)&(this->WorldMapNpcSpawnTableMap).field_0x8 !=
      *(int *)&(this->WorldMapNpcSpawnTableMap).field_0x34) {
    puVar3 = *(undefined1 **)&(this->WorldMapNpcSpawnTableMap).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->WorldMapNpcSpawnTableMap).field_0x38;
    }
    iVar4 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->WorldMapNpcSpawnTableMap).field_0x48 - 1U & param_1)
                              * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&this->WorldMapNpcSpawnTableMap;
      do {
        if (*(int *)((longlong)iVar4 * 0x20 + lVar1) == param_1) {
          if (iVar4 != -1) {
            pTVar2 = TMapBase<int,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>,0>_>
                     ::FindChecked((TMapBase<int,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>,0>_>
                                    *)&this->WorldMapNpcSpawnTableMap,param_1);
            (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            iVar4 = pTVar2->ArrayNum;
            _Src = (pTVar2->AllocatorInstance).Data;
            __return_storage_ptr__->ArrayNum = iVar4;
            if (iVar4 != 0) {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar4,0,&__return_storage_ptr__->AllocatorInstance,iVar4,
                         &__return_storage_ptr__->ArrayMax);
              memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar4 << 3);
              return __return_storage_ptr__;
            }
            __return_storage_ptr__->ArrayMax = 0;
            return __return_storage_ptr__;
          }
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + lVar1);
      } while (iVar4 != -1);
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetWorldMapWarpDeviceIconDatas @ 14bb69360

TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_> * __thiscall
UDS_WorldMapManager::GetWorldMapWarpDeviceIconDatas
          (UDS_WorldMapManager *this,
          TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1)

{
  longlong lVar1;
  FScriptContainerElement *_Src;
  TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  int iVar4;
  
  if (*(int *)&(this->WorldMapWarpDeviceIconDatas).field_0x8 !=
      *(int *)&(this->WorldMapWarpDeviceIconDatas).field_0x34) {
    puVar3 = *(undefined1 **)&(this->WorldMapWarpDeviceIconDatas).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->WorldMapWarpDeviceIconDatas).field_0x38;
    }
    iVar4 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->WorldMapWarpDeviceIconDatas).field_0x48 - 1U &
                              param_1) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&this->WorldMapWarpDeviceIconDatas;
      do {
        if (*(int *)((longlong)iVar4 * 0x20 + lVar1) == param_1) {
          if (iVar4 != -1) {
            pTVar2 = TMapBase<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>,0>_>
                     ::FindChecked((TMapBase<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>,0>_>
                                    *)&this->WorldMapWarpDeviceIconDatas,param_1);
            (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            iVar4 = pTVar2->ArrayNum;
            _Src = (pTVar2->AllocatorInstance).Data;
            __return_storage_ptr__->ArrayNum = iVar4;
            if (iVar4 != 0) {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x30,8,iVar4,0,&__return_storage_ptr__->AllocatorInstance,iVar4,
                         &__return_storage_ptr__->ArrayMax);
              memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0x30);
              return __return_storage_ptr__;
            }
            __return_storage_ptr__->ArrayMax = 0;
            return __return_storage_ptr__;
          }
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + lVar1);
      } while (iVar4 != -1);
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// Init @ 14bb6ab30

void __thiscall UDS_WorldMapManager::Init(UDS_WorldMapManager *this)

{
  SetZoneHasIslandIDMap(this);
  SetWarpDeviceTableData_Indoor(this);
  SetWarpDeviceTableData_WorldMap(this);
  SetNpcSpawnTableData_Indoor(this);
  SetNpcSpawnTableData_WorldMap(this);
  SetQuestBaseNPCIDData_WorldMap(this);
  SetQuestBaseNPCIDData_Indoor(this);
  return;
}

// IsContainsGCDataTableMap @ 14bb6ea50

bool __thiscall UDS_WorldMapManager::IsContainsGCDataTableMap(UDS_WorldMapManager *this,int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (*(int *)&(this->DataTable_GC).field_0x8 != *(int *)&(this->DataTable_GC).field_0x34) {
    puVar2 = *(undefined1 **)&(this->DataTable_GC).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->DataTable_GC).field_0x38;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)(*(int *)&(this->DataTable_GC).field_0x48 - 1U & param_1) *
                              4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->DataTable_GC + (longlong)iVar1 * 0x18) == param_1) {
          return true;
        }
        iVar1 = *(int *)(*(longlong *)&this->DataTable_GC + 0x10 + (longlong)iVar1 * 0x18);
      } while (iVar1 != -1);
    }
  }
  return false;
}

// IsIndoor @ 14bb6ecb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_WorldMapManager::IsIndoor(UDS_WorldMapManager *this,int param_1)

{
  FDS_ZoneBaseTableRow *pFVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (param_1 != 0) {
    pFVar1 = FDS_ZoneBaseTableRow::Get((longlong)param_1,true);
    if (pFVar1 != (FDS_ZoneBaseTableRow *)0x0) {
      return 0 < pFVar1->ID_MapIndoorGroup;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_WorldMapManager::IsIndoor",0x1d,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x1bc,L"FDS_ZoneBaseTableRow nullptr")
      ;
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return false;
}

// IsVaildLinkChatFocusInfo @ 14bb6fb50

bool __thiscall UDS_WorldMapManager::IsVaildLinkChatFocusInfo(UDS_WorldMapManager *this)

{
  return this->IsValidLinkChatFocusPosition;
}

// LoadBreachData @ 14bb6fe00

void __thiscall UDS_WorldMapManager::LoadBreachData(UDS_WorldMapManager *this,bool param_1)

{
  int *piVar1;
  TArray<FDS_ZoneIslandTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FDS_AuthData *pFVar4;
  TArray<FDS_ZoneIslandTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FDS_ZoneIslandTableRow_const_*,TSizedDefaultAllocator<32>_> local_18;
  
  this->IsLogin = param_1;
  TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)&this->BreachDataInfoMap);
  this->IsBreachDataAllLoad = false;
  pTVar2 = &this->ZoneIslandTableRowArray;
  this->BreachRequestCount = 0;
  this->BreachResponseCount = 0;
  this->CurrentRequestIndex = 0;
  piVar1 = &(this->ZoneIslandTableRowArray).ArrayMax;
  (this->ZoneIslandTableRowArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  pFVar4 = TDS_Singleton<FDS_AuthData>::GetInst();
  this->PlayerUID = pFVar4->PlayerUID;
  this->RegionIndex = pFVar4->RegionIndex;
  pTVar5 = FDS_ZoneIslandTableRow::GetAll(&local_18);
  if (pTVar2 != pTVar5) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ZoneIslandTableRowArray).ArrayNum = pTVar5->ArrayNum;
    *piVar1 = pTVar5->ArrayMax;
    pTVar5->ArrayNum = 0;
    pTVar5->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  this->BreachRequestCount = (this->ZoneIslandTableRowArray).ArrayNum;
  SendNextBreachRequest(this);
  return;
}

// OnResponseBreachListDB @ 14bb78330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_WorldMapManager::OnResponseBreachListDB
          (UDS_WorldMapManager *this,TSharedPtr<IHttpResponse,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_198 [32];
  void *local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (param_1->Object == (IHttpResponse *)0x0) {
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
  iVar3 = (**(code **)((longlong)*param_1->Object + 0x58))();
  if (iVar3 == 200) {
    if (param_1->Object == (IHttpResponse *)0x0) {
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
    pFVar4 = (FString *)(**(code **)((longlong)*param_1->Object + 0x60))(param_1->Object,local_158);
    ConvertJsonToBreachData(this,pFVar4);
  }
  else {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14bb784b8;
    pUVar5 = UDS_LogManager::GetInst();
    if (param_1->Object == (IHttpResponse *)0x0) {
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
    (**(code **)((longlong)*param_1->Object + 0x58))();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_WorldMapManager::OnResponseBreachListDB",0x2b,Yes);
    UDS_LogManager::PrintLog
              (pUVar5,1,Warning,local_148.Ptr,0x2eb,L"OnResponseBreachListDB ErrorCode = %d");
    local_158[0] = (void *)local_148._padding_;
  }
  if (local_158[0] != (void *)0x0) {
    FMemory::Free(local_158[0]);
  }
LAB_14bb784b8:
  SendNextBreachRequest(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnResponseFailBreachListDB @ 14bb784f0

bool __thiscall
UDS_WorldMapManager::OnResponseFailBreachListDB
          (UDS_WorldMapManager *this,TSharedPtr<IHttpResponse,1> *param_1)

{
  bool bVar1;
  UDS_WorldMapEvent *pUVar2;
  
  this->BreachRequestCount = this->BreachRequestCount + -1;
  if (this->BreachRequestCount == this->BreachResponseCount) {
    this->IsBreachDataAllLoad = true;
    if (this->IsLogin == false) {
      pUVar2 = UDS_WorldMapEvent::GetEvent();
      if (pUVar2 != (UDS_WorldMapEvent *)0x0) {
        bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                           &pUVar2->RefrashMapAllIconDelegate);
        if (bVar1) {
          TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                    (&(pUVar2->RefrashMapAllIconDelegate).Delegate);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_1->SharedReferenceCount).ReferenceController);
        return false;
      }
    }
  }
  else {
    SendNextBreachRequest(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// OpenWorldMapLinkChatPosFocusInfo @ 14bb7c070

void __thiscall
UDS_WorldMapManager::OpenWorldMapLinkChatPosFocusInfo
          (UDS_WorldMapManager *this,TVector<double> *param_1,int param_2,bool param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  UDS_ContentManager *this_00;
  EDS_ContentsTabFrameType local_res10 [6];
  undefined8 local_18 [3];
  
  if ((((UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X == (param_1->field0_0x0)._s_0.X) &&
       (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y == (param_1->field0_0x0)._s_0.Y)) &&
      (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z == (param_1->field0_0x0)._s_0.Z)) ||
     (param_2 == 0)) {
    this->IsValidLinkChatFocusPosition = false;
  }
  else {
    dVar2 = (param_1->field0_0x0)._s_0.X;
    dVar3 = (param_1->field0_0x0)._s_0.Y;
    this->IsValidContentsFocusPosition = true;
    this->IsValidLinkChatFocusPosition = true;
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    (this->LinkChatFocusPosition).field0_0x0._s_0.X = dVar2;
    (this->LinkChatFocusPosition).field0_0x0._s_0.Y = dVar3;
    this->LinkChatFocusZoneID = param_2;
    (this->LinkChatFocusPosition).field0_0x0._s_0.Z = dVar1;
    dVar2 = (this->LinkChatFocusPosition).field0_0x0._s_0.X;
    dVar1 = (this->LinkChatFocusPosition).field0_0x0._s_0.Y;
    this->LinkChatFocusIsIndoor = param_3;
    (this->ContentsFocusPosition).field0_0x0._s_0.X = dVar2;
    (this->ContentsFocusPosition).field0_0x0._s_0.Y = dVar1;
    this_00 = UDS_ContentManager::GetInst();
    if (this_00 != (UDS_ContentManager *)0x0) {
      local_18[0] = 0;
      local_res10[0] = Map;
      UDS_ContentManager::OpenContent
                (this_00,local_res10,(TObjectPtr<UDS_ContentArguments>)local_18);
      return;
    }
  }
  return;
}

// RemoveRangeOverIconArray @ 14bb83ed0

void __thiscall
UDS_WorldMapManager::RemoveRangeOverIconArray(UDS_WorldMapManager *this,long64 param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  UDS_WorldMapEvent *pUVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long64 local_res10;
  
  pFVar2 = (this->RangeOverIconList).AllocatorInstance.Data;
  pFVar5 = pFVar2;
  if (pFVar2 != pFVar2 + (longlong)(this->RangeOverIconList).ArrayNum * 8) {
    while (*(longlong *)pFVar5 != param_1) {
      pFVar5 = pFVar5 + 8;
      if (pFVar5 == pFVar2 + (longlong)(this->RangeOverIconList).ArrayNum * 8) {
        return;
      }
    }
    local_res10 = param_1;
    if (((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
        ((FScriptContainerElement *)&local_res10 <
         pFVar2 + (longlong)(this->RangeOverIconList).ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = (this->RangeOverIconList).ArrayNum;
    if (iVar1 != 0) {
      iVar11 = 0;
      pFVar2 = (this->RangeOverIconList).AllocatorInstance.Data;
      bVar4 = *(longlong *)pFVar2 != local_res10;
      lVar8 = 0;
      lVar7 = local_res10;
      iVar9 = 0;
      do {
        iVar10 = iVar9;
        do {
          lVar8 = lVar8 + 1;
          iVar10 = iVar10 + 1;
          if (iVar1 <= lVar8) break;
        } while (bVar4 == (*(longlong *)(pFVar2 + lVar8 * 8) != lVar7));
        if (bVar4 != false) {
          if (iVar11 != iVar9) {
            memmove(pFVar2 + (longlong)iVar11 * 8,pFVar2 + (longlong)iVar9 * 8,
                    (longlong)(iVar10 - iVar9) << 3);
            lVar7 = local_res10;
          }
          iVar11 = iVar11 + (iVar10 - iVar9);
        }
        bVar4 = (bool)(bVar4 ^ 1);
        iVar9 = iVar10;
      } while (lVar8 < iVar1);
      (this->RangeOverIconList).ArrayNum = iVar11;
    }
    pUVar6 = UDS_WorldMapEvent::GetEvent();
    if (pUVar6 != (UDS_WorldMapEvent *)0x0) {
      FDS_FilteredEventDelegate<__int64_const_>::Broadcast
                (&pUVar6->RangeOverIconDeleteDelegate,&local_res10);
    }
  }
  return;
}

// ResetContentsFocusPosition @ 14bb867c0

void __thiscall UDS_WorldMapManager::ResetContentsFocusPosition(UDS_WorldMapManager *this)

{
  this->IsValidContentsFocusPosition = false;
  return;
}

// SendNextBreachRequest @ 14bb88790

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_WorldMapManager::SendNextBreachRequest(UDS_WorldMapManager *this)

{
  uint uVar1;
  code *pcVar2;
  FDS_HttpRequest *pFVar3;
  bool bVar4;
  uint uVar5;
  FDS_HttpServer *pFVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  UDS_WorldMapManager *local_res8;
  UDS_WorldMapManager *local_res10;
  FString local_98;
  TSharedRef<FDS_HttpRequest,1> local_88;
  TSharedPtr<FDS_HttpRequest,1> local_78;
  FDestructionSentinel local_68;
  undefined1 *local_50;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  if ((((0 < this->PlayerUID) && (0 < this->RegionIndex)) &&
      (uVar1 = this->CurrentRequestIndex, -1 < (int)uVar1)) &&
     ((int)uVar1 < (this->ZoneIslandTableRowArray).ArrayNum)) {
    uVar5 = 0;
    if ((int)uVar1 < (this->ZoneIslandTableRowArray).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar6 = TDS_Singleton<FDS_HttpServer>::GetInst();
    FDS_Urls::GetGetBreach(&pFVar6->Urls);
    ::FString::PrintfImpl(&local_98,L"%s&player_uid=%lld&region_index=%d&island_id=%d");
    MakeShared<FDS_HttpRequest,1>(&local_88);
    pFVar3 = local_88.Object;
    ::FString::operator=(&(local_88.Object)->URL,&local_98);
    pFVar3->Verb = GET;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar3->SuccessDel,
               (FWriteAccessScope *)&local_68);
    local_50 = &(pFVar3->SuccessDel).field_0x8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_50);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_WorldMapManager____A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar7[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_res8);
      puVar7[4] = OnResponseBreachListDB;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar3->FailDel,
               (FWriteAccessScope *)&local_48);
    local_30 = &(pFVar3->FailDel).field_0x8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_30);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6A_NV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_WorldMapManager____A6A_NV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar7[3] = 0;
      local_res10 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_res10);
      puVar7[4] = OnResponseFailBreachListDB;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    pFVar6 = TDS_Singleton<FDS_HttpServer>::GetInst();
    local_78.Object = local_88.Object;
    local_78.SharedReferenceCount.ReferenceController =
         local_88.SharedReferenceCount.ReferenceController;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FDS_HttpServer::Request(pFVar6,&local_78);
    if (2 < (byte)DS_CommonLog._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&DS_CommonLog);
    }
    this->CurrentRequestIndex = this->CurrentRequestIndex + 1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetBreachDataInfo @ 14bb8a170

void __thiscall
UDS_WorldMapManager::SetBreachDataInfo(UDS_WorldMapManager *this,int param_1,int param_2)

{
  TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  int iVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  TPairInitializer<int_&,TArray<int,TSizedDefaultAllocator<32>_>_&> local_res8;
  ForAnyElementType local_28;
  undefined8 local_20;
  TArray<int,TSizedDefaultAllocator<32>_> **local_18;
  ForAnyElementType *local_10;
  
  this_00 = &this->BreachDataInfoMap;
  local_res8.Value._0_4_ = param_1;
  if (*(int *)&(this->BreachDataInfoMap).field_0x8 != *(int *)&(this->BreachDataInfoMap).field_0x34)
  {
    puVar3 = *(undefined1 **)&(this->BreachDataInfoMap).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->BreachDataInfoMap).field_0x38;
    }
    iVar1 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->BreachDataInfoMap).field_0x48 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)((longlong)iVar1 * 0x20 + *(longlong *)&this_00->field_0x0) == param_1) {
          pTVar2 = TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                   ::FindChecked((TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                                  *)this_00,param_1);
          iVar1 = pTVar2->ArrayNum;
          if (iVar1 == pTVar2->ArrayMax) {
            iVar1 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
          }
          pTVar2->ArrayNum = iVar1 + 1;
          *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar1 * 4) = param_2;
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + 0x18 + *(longlong *)&this_00->field_0x0);
      } while (iVar1 != -1);
    }
  }
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  iVar1 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x404,&local_28,(int *)((longlong)&local_20 + 4));
  local_20 = CONCAT44(local_20._4_4_,iVar1 + 1);
  *(int *)(local_28.Data + (longlong)iVar1 * 4) = param_2;
  local_18 = &local_res8.Value;
  local_10 = &local_28;
  TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_&,TArray<int,TSizedDefaultAllocator<32>_>_&>_>
            ((TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)this_00,&local_res8,(bool *)&local_18);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// SetContentsFocusPosition @ 14bb8a3f0

void __thiscall
UDS_WorldMapManager::SetContentsFocusPosition(UDS_WorldMapManager *this,TVector2<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  this->IsValidContentsFocusPosition = true;
  (this->ContentsFocusPosition).field0_0x0._s_0.X = dVar1;
  (this->ContentsFocusPosition).field0_0x0._s_0.Y = dVar2;
  return;
}

// SetDataTableGCMap @ 14bb8a410

void __thiscall
UDS_WorldMapManager::SetDataTableGCMap(UDS_WorldMapManager *this,int param_1,UDataTable *param_2)

{
  TPairInitializer<int_&,UDataTable_*_&> local_res8;
  UDataTable *local_res18 [2];
  UDataTable ***local_18;
  UDataTable **local_10;
  
  local_18 = &local_res8.Value;
  local_10 = local_res18;
  local_res8.Value._0_4_ = param_1;
  local_res18[0] = param_2;
  TSet<TTuple<int,UDataTable_*>,TDefaultMapHashableKeyFuncs<int,UDataTable_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_&,UDataTable_*_&>_>
            ((TSet<TTuple<int,UDataTable_*>,TDefaultMapHashableKeyFuncs<int,UDataTable_*,0>,FDefaultSetAllocator>
              *)&this->DataTable_GC,&local_res8,(bool *)&local_18);
  return;
}

// SetNpcSpawnTableData_WorldMap @ 14bb8b7b0

void __thiscall UDS_WorldMapManager::SetNpcSpawnTableData_WorldMap(UDS_WorldMapManager *this)

{
  undefined1 *puVar1;
  TMap<int,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  ForAnyElementType FVar11;
  undefined1 local_res10 [8];
  uint local_res18;
  ForAnyElementType local_90;
  undefined8 local_88;
  TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> local_80;
  TArray<FDS_ZoneIslandTableRow_const_*,TSizedDefaultAllocator<32>_> local_70;
  longlong local_60;
  ForAnyElementType *local_58;
  
  this_00 = &this->WorldMapNpcSpawnTableMap;
  bVar6 = 1 < *(int *)&(this->WorldMapNpcSpawnTableMap).field_0x48;
  if (!bVar6) {
    TSet<TTuple<int,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->WorldMapNpcSpawnTableMap).field_0x8);
  puVar1 = &(this->WorldMapNpcSpawnTableMap).field_0xc;
  *(undefined4 *)&(this->WorldMapNpcSpawnTableMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->WorldMapNpcSpawnTableMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WorldMapNpcSpawnTableMap).field_0x34 = 0;
  iVar8 = *(int *)&(this->WorldMapNpcSpawnTableMap).field_0x2c;
  *(undefined4 *)&(this->WorldMapNpcSpawnTableMap).field_0x28 = 0;
  if ((iVar8 < 0) || (0x80 < iVar8)) {
    *(undefined4 *)&(this->WorldMapNpcSpawnTableMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->WorldMapNpcSpawnTableMap).field_0x10,
               0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->WorldMapNpcSpawnTableMap).field_0x48 = 1;
    TSet<TTuple<int,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  FDS_ZoneIslandTableRow::GetAll(&local_70);
  uVar9 = (ulonglong)local_70.ArrayNum;
  local_res18 = local_70.ArrayNum;
  pFVar2 = local_70.AllocatorInstance.Data + uVar9 * 8;
  FVar11.Data = local_70.AllocatorInstance.Data;
  while( true ) {
    if (local_70.ArrayNum != (uint)uVar9) {
      `TCheckedPointerIterator<FDS_ZoneIslandTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (FVar11.Data == pFVar2) break;
    lVar4 = *(longlong *)FVar11.Data;
    if (lVar4 != 0) {
      local_90.Data = (FScriptContainerElement *)0x0;
      local_88 = 0;
      FDS_NpcSpawnTableRow::GetByIsland(&local_80,(longlong)*(int *)(lVar4 + 8));
      iVar8 = local_80.ArrayNum;
      pFVar3 = local_80.AllocatorInstance.Data + (longlong)iVar8 * 8;
      FVar10.Data = local_80.AllocatorInstance.Data;
      while( true ) {
        if (local_80.ArrayNum != iVar8) {
          `TCheckedPointerIterator<FDS_NpcSpawnTableRow_const_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (FVar10.Data == pFVar3) break;
        lVar5 = *(longlong *)FVar10.Data;
        iVar7 = *(int *)(lVar5 + 0x40);
        bVar6 = IsIndoor(this,iVar7);
        if ((!bVar6) && (iVar7 != 0)) {
          iVar7 = (int)local_88;
          if ((int)local_88 == local_88._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_90,(int *)((longlong)&local_88 + 4));
          }
          local_88 = CONCAT44(local_88._4_4_,iVar7 + 1);
          *(longlong *)(local_90.Data + (longlong)iVar7 * 8) = lVar5;
        }
        FVar10.Data = FVar10.Data + 8;
      }
      local_58 = &local_90;
      local_60 = lVar4 + 8;
      TSet<TTuple<int,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<int_const_&,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>_&>_>
                ((TSet<TTuple<int,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)this_00,
                 (TPairInitializer<int_const_&,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>_&>
                  *)&stack0x00000020,(bool *)&local_60);
      if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.AllocatorInstance.Data);
      }
      if (local_90.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data);
      }
    }
    uVar9 = (ulonglong)local_res18;
    FVar11.Data = FVar11.Data + 8;
  }
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  return;
}

// SetQuestBaseNPCIDData_Indoor @ 14bb8bf80

void __thiscall UDS_WorldMapManager::SetQuestBaseNPCIDData_Indoor(UDS_WorldMapManager *this)

{
  TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  longlong lVar1;
  void *_Src;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  ForAnyElementType FVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  undefined1 local_res10 [8];
  uint local_res18 [2];
  uint local_res20;
  ForAnyElementType local_b8;
  uint local_b0;
  int local_ac;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  uint local_98;
  FScriptContainerElement *local_90;
  FScriptContainerElement *local_88;
  TArray<FDS_QuestBaseNpcTableRow_const_*,TSizedDefaultAllocator<32>_> local_80;
  TArray<FDS_MapIndoorGroupTableRow_const_*,TSizedDefaultAllocator<32>_> local_70;
  TPairInitializer<int_&,TArray<int,TSizedDefaultAllocator<32>_>_&> local_60;
  uint *local_50;
  ForAnyElementType *local_48;
  
  FDS_MapIndoorGroupTableRow::GetAll(&local_70);
  FDS_QuestBaseNpcTableRow::GetAll(&local_80);
  uVar6 = (ulonglong)local_70.ArrayNum;
  local_98 = local_70.ArrayNum;
  pFVar9 = local_70.AllocatorInstance.Data + uVar6 * 8;
  FVar10.Data = local_70.AllocatorInstance.Data;
  local_88 = pFVar9;
  do {
    local_90 = FVar10.Data;
    if (local_70.ArrayNum != (uint)uVar6) {
      `TCheckedPointerIterator<FDS_MapIndoorGroupTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (FVar10.Data == pFVar9) {
      if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.AllocatorInstance.Data);
      }
      if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.AllocatorInstance.Data);
      }
      return;
    }
    lVar1 = *(longlong *)FVar10.Data;
    if (lVar1 != 0) {
      local_b0 = *(uint *)(lVar1 + 0x60);
      lVar8 = (longlong)(int)local_b0;
      _Src = *(void **)(lVar1 + 0x58);
      local_b8.Data = (FScriptContainerElement *)0x0;
      if (local_b0 == 0) {
        local_ac = 0;
        local_res20 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_b0,0,&local_b8,local_b0,&local_ac);
        memcpy(local_b8.Data,_Src,lVar8 << 2);
        local_res20 = local_b0;
      }
      uVar6 = (ulonglong)(int)local_res20;
      local_60.Value = (TArray<int,TSizedDefaultAllocator<32>_> *)(local_b8.Data + uVar6 * 4);
      FVar10.Data = local_b8.Data;
      uVar12 = local_res20;
      while( true ) {
        pTVar5 = local_60.Value;
        if (uVar12 != (uint)uVar6) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        iVar3 = local_80.ArrayNum;
        if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar10.Data == pTVar5) break;
        local_res18[0] =
             *(uint *)&(((TArray<int,TSizedDefaultAllocator<32>_> *)FVar10.Data)->AllocatorInstance)
                       .Data;
        pFVar9 = local_80.AllocatorInstance.Data + (longlong)local_80.ArrayNum * 8;
        FVar11.Data = local_80.AllocatorInstance.Data;
        uVar12 = local_res18[0];
LAB_14bb8c081:
        if (local_80.ArrayNum != iVar3) {
          `TCheckedPointerIterator<FDS_QuestBaseNpcTableRow_const_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
          uVar12 = local_res18[0];
        }
        if (FVar11.Data != pFVar9) {
          lVar1 = *(longlong *)FVar11.Data;
          if ((lVar1 != 0) && (*(uint *)(lVar1 + 0x20) == uVar12)) {
            this_00 = &this->IndoorQuestBaseNPCIDMap;
            if (*(int *)&(this->IndoorQuestBaseNPCIDMap).field_0x8 !=
                *(int *)&(this->IndoorQuestBaseNPCIDMap).field_0x34) {
              puVar2 = *(undefined1 **)&(this->IndoorQuestBaseNPCIDMap).field_0x40;
              puVar7 = &(this->IndoorQuestBaseNPCIDMap).field_0x38;
              if (puVar2 != (undefined1 *)0x0) {
                puVar7 = puVar2;
              }
              iVar4 = *(int *)(puVar7 + (ulonglong)
                                        (*(int *)&(this->IndoorQuestBaseNPCIDMap).field_0x48 - 1U &
                                        uVar12) * 4);
              if (iVar4 != -1) {
                do {
                  if (*(uint *)((longlong)iVar4 * 0x20 + *(longlong *)&this_00->field_0x0) == uVar12
                     ) {
                    pTVar5 = TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                             ::FindChecked((TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                                            *)this_00,uVar12);
                    iVar4 = pTVar5->ArrayNum;
                    if (iVar4 == pTVar5->ArrayMax) {
                      iVar4 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x404,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
                    }
                    pTVar5->ArrayNum = iVar4 + 1;
                    FVar11.Data = FVar11.Data + 8;
                    *(undefined4 *)((pTVar5->AllocatorInstance).Data + (longlong)iVar4 * 4) =
                         *(undefined4 *)(lVar1 + 8);
                    uVar12 = local_res18[0];
                    goto LAB_14bb8c081;
                  }
                  iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *(longlong *)&this_00->field_0x0)
                  ;
                } while (iVar4 != -1);
              }
            }
            local_a8.Data = (FScriptContainerElement *)0x0;
            local_a0 = 0;
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_a8,(int *)((longlong)&local_a0 + 4));
            local_a0 = CONCAT44(local_a0._4_4_,iVar4 + 1);
            *(undefined4 *)(local_a8.Data + (longlong)iVar4 * 4) = *(undefined4 *)(lVar1 + 8);
            local_50 = local_res18;
            local_48 = &local_a8;
            TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<int_&,TArray<int,TSizedDefaultAllocator<32>_>_&>_>
                      ((TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)this_00,&local_60,(bool *)&local_50);
            uVar12 = local_res18[0];
            if (local_a8.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data);
              uVar12 = local_res18[0];
            }
          }
          FVar11.Data = FVar11.Data + 8;
          goto LAB_14bb8c081;
        }
        FVar10.Data = (FScriptContainerElement *)
                      ((longlong)
                       &(((TArray<int,TSizedDefaultAllocator<32>_> *)FVar10.Data)->AllocatorInstance
                        ).Data + 4);
        uVar6 = (ulonglong)local_res20;
        uVar12 = local_b0;
      }
      pFVar9 = local_88;
      FVar10.Data = local_90;
      if (local_b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data);
        pFVar9 = local_88;
        FVar10.Data = local_90;
      }
    }
    uVar6 = (ulonglong)local_98;
    FVar10.Data = FVar10.Data + 8;
  } while( true );
}

// SetQuestBaseNPCIDData_WorldMap @ 14bb8c230

void __thiscall UDS_WorldMapManager::SetQuestBaseNPCIDData_WorldMap(UDS_WorldMapManager *this)

{
  int iVar1;
  void *_Src;
  undefined1 *puVar2;
  int iVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  uint uVar9;
  longlong lVar10;
  TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  undefined1 local_res10 [8];
  uint local_res18;
  uint local_res20;
  ForAnyElementType local_c8;
  uint local_c0;
  int local_bc;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  longlong local_a8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_a0;
  FScriptContainerElement *local_98;
  FScriptContainerElement *local_90;
  TArray<FDS_QuestBaseNpcTableRow_const_*,TSizedDefaultAllocator<32>_> local_88;
  TArray<FDS_ZoneIslandTableRow_const_*,TSizedDefaultAllocator<32>_> local_78;
  TPairInitializer<int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_&> local_68;
  uint *local_58;
  ForAnyElementType *local_50;
  
  FDS_ZoneIslandTableRow::GetAll(&local_78);
  FDS_QuestBaseNpcTableRow::GetAll(&local_88);
  uVar7 = (ulonglong)local_78.ArrayNum;
  local_res20 = local_78.ArrayNum;
  pFVar11 = local_78.AllocatorInstance.Data + uVar7 * 8;
  FVar12.Data = local_78.AllocatorInstance.Data;
  local_90 = pFVar11;
  do {
    local_98 = FVar12.Data;
    if (local_78.ArrayNum != (uint)uVar7) {
      `TCheckedPointerIterator<FDS_ZoneIslandTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (FVar12.Data == pFVar11) {
      if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.AllocatorInstance.Data);
      }
      if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      return;
    }
    lVar13 = *(longlong *)FVar12.Data;
    local_a8 = lVar13;
    if (lVar13 != 0) {
      local_c0 = *(uint *)(lVar13 + 0x58);
      lVar10 = (longlong)(int)local_c0;
      _Src = *(void **)(lVar13 + 0x50);
      local_a0 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
      local_c8.Data = (FScriptContainerElement *)0x0;
      if (local_c0 == 0) {
        local_bc = 0;
        local_res18 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_c0,0,&local_c8,local_c0,&local_bc);
        memcpy(local_c8.Data,_Src,lVar10 << 2);
        local_a0 = (TArray<int,TSizedDefaultAllocator<32>_> *)local_c8.Data;
        local_res18 = local_c0;
      }
      uVar7 = (ulonglong)(int)local_res18;
      local_68.Value =
           (TArray<int,TSizedDefaultAllocator<32>_> *)
           ((longlong)&(local_a0->AllocatorInstance).Data + uVar7 * 4);
      local_c8.Data = (FScriptContainerElement *)local_a0;
      uVar9 = local_res18;
      while( true ) {
        pTVar4 = local_68.Value;
        pTVar6 = local_a0;
        if (uVar9 != (uint)uVar7) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        iVar3 = local_88.ArrayNum;
        if (pTVar6 == pTVar4) break;
        iVar1 = *(int *)&(pTVar6->AllocatorInstance).Data;
        pFVar11 = local_88.AllocatorInstance.Data + (longlong)local_88.ArrayNum * 8;
        FVar12.Data = local_88.AllocatorInstance.Data;
LAB_14bb8c340:
        if (local_88.ArrayNum != iVar3) {
          `TCheckedPointerIterator<FDS_QuestBaseNpcTableRow_const_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (FVar12.Data != pFVar11) {
          lVar10 = *(longlong *)FVar12.Data;
          if ((lVar10 != 0) && (*(int *)(lVar10 + 0x20) == iVar1)) {
            this_00 = &this->IslandQuestBaseNPCIDMap;
            uVar9 = *(uint *)(lVar13 + 8);
            if (*(int *)&(this->IslandQuestBaseNPCIDMap).field_0x8 !=
                *(int *)&(this->IslandQuestBaseNPCIDMap).field_0x34) {
              puVar2 = *(undefined1 **)&(this->IslandQuestBaseNPCIDMap).field_0x40;
              puVar8 = &(this->IslandQuestBaseNPCIDMap).field_0x38;
              if (puVar2 != (undefined1 *)0x0) {
                puVar8 = puVar2;
              }
              iVar5 = *(int *)(puVar8 + (ulonglong)
                                        (*(int *)&(this->IslandQuestBaseNPCIDMap).field_0x48 - 1U &
                                        uVar9) * 4);
              if (iVar5 != -1) {
                do {
                  if (*(uint *)((longlong)iVar5 * 0x20 + *(longlong *)&this_00->field_0x0) == uVar9)
                  {
                    pTVar6 = TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                             ::FindChecked((TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                                            *)this_00,uVar9);
                    iVar5 = pTVar6->ArrayNum;
                    if (iVar5 == pTVar6->ArrayMax) {
                      iVar5 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x404,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
                    }
                    pTVar6->ArrayNum = iVar5 + 1;
                    FVar12.Data = FVar12.Data + 8;
                    *(undefined4 *)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 4) =
                         *(undefined4 *)(lVar10 + 8);
                    lVar13 = local_a8;
                    goto LAB_14bb8c340;
                  }
                  iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + *(longlong *)&this_00->field_0x0)
                  ;
                } while (iVar5 != -1);
              }
            }
            local_b8.Data = (FScriptContainerElement *)0x0;
            local_b0 = 0;
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_b8,(int *)((longlong)&local_b0 + 4));
            local_b0 = CONCAT44(local_b0._4_4_,iVar5 + 1);
            *(undefined4 *)(local_b8.Data + (longlong)iVar5 * 4) = *(undefined4 *)(lVar10 + 8);
            local_50 = &local_b8;
            local_58 = (uint *)(lVar13 + 8);
            TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_&>_>
                      ((TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)this_00,&local_68,(bool *)&local_58);
            lVar13 = local_a8;
            if (local_b8.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data);
              lVar13 = local_a8;
            }
          }
          FVar12.Data = FVar12.Data + 8;
          goto LAB_14bb8c340;
        }
        local_a0 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                   ((longlong)&(local_a0->AllocatorInstance).Data + 4);
        uVar7 = (ulonglong)local_res18;
        uVar9 = local_c0;
      }
      pFVar11 = local_90;
      FVar12.Data = local_98;
      if (local_c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data);
        pFVar11 = local_90;
        FVar12.Data = local_98;
      }
    }
    uVar7 = (ulonglong)local_res20;
    FVar12.Data = FVar12.Data + 8;
  } while( true );
}

// SetWarpDeviceTableData_WorldMap @ 14bb8dde0

void __thiscall UDS_WorldMapManager::SetWarpDeviceTableData_WorldMap(UDS_WorldMapManager *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TVector<double> *pTVar9;
  longlong lVar10;
  TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong lVar12;
  undefined1 *puVar13;
  ForAnyElementType FVar14;
  undefined1 local_res8 [16];
  ForAnyElementType local_b8;
  undefined8 local_b0;
  TArray<FDS_StuffWarpDeviceTableRow_const_*,TSizedDefaultAllocator<32>_> local_a8;
  uint *local_98;
  ForAnyElementType *local_90;
  TVector<double> local_88;
  longlong local_70;
  longlong lStack_68;
  longlong local_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  
  bVar7 = 1 < *(int *)&(this->WorldMapWarpDeviceIconDatas).field_0x48;
  if (!bVar7) {
    TSet<TTuple<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->WorldMapWarpDeviceIconDatas);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->WorldMapWarpDeviceIconDatas,0,
                    *(int *)&(this->WorldMapWarpDeviceIconDatas).field_0x8);
  puVar4 = &(this->WorldMapWarpDeviceIconDatas).field_0xc;
  *(undefined4 *)&(this->WorldMapWarpDeviceIconDatas).field_0x8 = 0;
  if (*(int *)puVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&this->WorldMapWarpDeviceIconDatas,0,(int *)puVar4);
  }
  *(undefined4 *)&(this->WorldMapWarpDeviceIconDatas).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WorldMapWarpDeviceIconDatas).field_0x34 = 0;
  iVar2 = *(int *)&(this->WorldMapWarpDeviceIconDatas).field_0x2c;
  *(undefined4 *)&(this->WorldMapWarpDeviceIconDatas).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->WorldMapWarpDeviceIconDatas).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->WorldMapWarpDeviceIconDatas).field_0x10,0);
  }
  if (bVar7) {
    *(undefined4 *)&(this->WorldMapWarpDeviceIconDatas).field_0x48 = 1;
    TSet<TTuple<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->WorldMapWarpDeviceIconDatas);
  }
  FDS_StuffWarpDeviceTableRow::GetAll(&local_a8);
  iVar2 = local_a8.ArrayNum;
  pFVar1 = local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayNum * 8;
  FVar14.Data = local_a8.AllocatorInstance.Data;
LAB_14bb8debf:
  do {
    if (local_a8.ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FDS_StuffWarpDeviceTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar14.Data == pFVar1) {
      if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.AllocatorInstance.Data);
      }
      return;
    }
    lVar12 = *(longlong *)FVar14.Data;
    if (lVar12 == 0) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_668534663467237202>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_WorldMapManager.cpp"
                         ,0xae,"false");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else if ((*(int *)(lVar12 + 0x30) != 0) &&
            (bVar7 = IsIndoor(this,*(int *)(lVar12 + 0x30)), !bVar7)) {
      pTVar9 = GetWarpDeviceLocation(this,&local_88,*(int *)(lVar12 + 0x2c),*(int *)(lVar12 + 0x44))
      ;
      uVar3 = *(uint *)(lVar12 + 0x2c);
      dStack_58 = (pTVar9->field0_0x0)._s_0.X;
      dStack_50 = (pTVar9->field0_0x0)._s_0.Y;
      dStack_48 = (pTVar9->field0_0x0)._s_0.Z;
      lStack_68 = (longlong)*(int *)(lVar12 + 0x28);
      local_60 = (longlong)*(int *)(lVar12 + 8);
      local_70 = (longlong)*(int *)(lVar12 + 0x44);
      if (*(int *)&(this->WorldMapWarpDeviceIconDatas).field_0x8 !=
          *(int *)&(this->WorldMapWarpDeviceIconDatas).field_0x34) {
        puVar4 = *(undefined1 **)&(this->WorldMapWarpDeviceIconDatas).field_0x40;
        puVar13 = &(this->WorldMapWarpDeviceIconDatas).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar13 = puVar4;
        }
        iVar8 = *(int *)(puVar13 +
                        (ulonglong)
                        (*(int *)&(this->WorldMapWarpDeviceIconDatas).field_0x48 - 1U & uVar3) * 4);
        if (iVar8 != -1) {
          do {
            if (*(uint *)((longlong)iVar8 * 0x20 + *(longlong *)&this->WorldMapWarpDeviceIconDatas)
                == uVar3) {
              pTVar11 = TMapBase<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>,0>_>
                        ::FindChecked((TMapBase<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>,0>_>
                                       *)&this->WorldMapWarpDeviceIconDatas,uVar3);
              iVar8 = pTVar11->ArrayNum;
              if (iVar8 == pTVar11->ArrayMax) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x830,&pTVar11->AllocatorInstance,&pTVar11->ArrayMax);
              }
              lVar12 = (longlong)iVar8;
              pTVar11->ArrayNum = iVar8 + 1;
              pFVar5 = (pTVar11->AllocatorInstance).Data;
              FVar14.Data = FVar14.Data + 8;
              *(longlong *)(pFVar5 + lVar12 * 0x30) = local_70;
              *(longlong *)(pFVar5 + lVar12 * 0x30 + 8) = lStack_68;
              *(longlong *)(pFVar5 + lVar12 * 0x30 + 0x10) = local_60;
              *(double *)(pFVar5 + lVar12 * 0x30 + 0x10 + 8) = dStack_58;
              *(double *)(pFVar5 + lVar12 * 0x30 + 0x20) = dStack_50;
              *(double *)(pFVar5 + lVar12 * 0x30 + 0x20 + 8) = dStack_48;
              goto LAB_14bb8debf;
            }
            iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 +
                            *(longlong *)&this->WorldMapWarpDeviceIconDatas);
          } while (iVar8 != -1);
        }
      }
      local_b8.Data = (FScriptContainerElement *)0x0;
      local_b0 = 0;
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&local_b8,(int *)((longlong)&local_b0 + 4));
      local_b0 = CONCAT44(local_b0._4_4_,iVar8 + 1);
      lVar10 = (longlong)iVar8;
      *(longlong *)(local_b8.Data + lVar10 * 0x30) = local_70;
      *(longlong *)(local_b8.Data + lVar10 * 0x30 + 8) = lStack_68;
      *(longlong *)(local_b8.Data + lVar10 * 0x30 + 0x10) = local_60;
      *(double *)(local_b8.Data + lVar10 * 0x30 + 0x10 + 8) = dStack_58;
      *(double *)(local_b8.Data + lVar10 * 0x30 + 0x20) = dStack_50;
      *(double *)(local_b8.Data + lVar10 * 0x30 + 0x20 + 8) = dStack_48;
      local_90 = &local_b8;
      local_98 = (uint *)(lVar12 + 0x2c);
      TSet<TTuple<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<int_const_&,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>_&>_>
                ((TSet<TTuple<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)&this->WorldMapWarpDeviceIconDatas,
                 (TPairInitializer<int_const_&,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>_&>
                  *)(local_res8 + 8),(bool *)&local_98);
      if (local_b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data);
      }
    }
    FVar14.Data = FVar14.Data + 8;
  } while( true );
}

// SetWorldBossIslandID @ 14bb8e420

void __thiscall UDS_WorldMapManager::SetWorldBossIslandID(UDS_WorldMapManager *this,int param_1)

{
  this->WorldBossIslandID = param_1;
  return;
}

// SetZoneHasIslandIDMap @ 14bb8e430

void __thiscall UDS_WorldMapManager::SetZoneHasIslandIDMap(UDS_WorldMapManager *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  void *_Src;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  uint local_res10 [2];
  TPairInitializer<int_&,int_const_&> local_res18;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  TArray<FDS_ZoneIslandTableRow_const_*,TSizedDefaultAllocator<32>_> local_58;
  uint *local_48;
  longlong local_40;
  
  FDS_ZoneIslandTableRow::GetAll(&local_58);
  iVar6 = local_58.ArrayNum;
  pFVar1 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 8;
  FVar11.Data = local_58.AllocatorInstance.Data;
  do {
    if (local_58.ArrayNum != iVar6) {
      `TCheckedPointerIterator<FDS_ZoneIslandTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (FVar11.Data == pFVar1) {
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      return;
    }
    lVar3 = *(longlong *)FVar11.Data;
    if (lVar3 != 0) {
      local_60 = *(int *)(lVar3 + 0x58);
      lVar10 = (longlong)local_60;
      _Src = *(void **)(lVar3 + 0x50);
      local_68.Data = (FScriptContainerElement *)0x0;
      if (local_60 == 0) {
        local_5c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_60,0,&local_68,local_60,&local_5c);
        memcpy(local_68.Data,_Src,lVar10 << 2);
      }
      iVar5 = local_60;
      pFVar2 = local_68.Data + (longlong)local_60 * 4;
      FVar9.Data = local_68.Data;
      while( true ) {
        if (local_60 != iVar5) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (FVar9.Data == pFVar2) break;
        local_res10[0] = *(uint *)FVar9.Data;
        if (*(int *)&(this->ZoneHasIslandIDMap).field_0x8 !=
            *(int *)&(this->ZoneHasIslandIDMap).field_0x34) {
          puVar4 = *(undefined1 **)&(this->ZoneHasIslandIDMap).field_0x40;
          puVar8 = &(this->ZoneHasIslandIDMap).field_0x38;
          if (puVar4 != (undefined1 *)0x0) {
            puVar8 = puVar4;
          }
          iVar7 = *(int *)(puVar8 + (ulonglong)
                                    (*(int *)&(this->ZoneHasIslandIDMap).field_0x48 - 1U &
                                    local_res10[0]) * 4);
          if (iVar7 != -1) {
            do {
              if (*(uint *)(*(longlong *)&this->ZoneHasIslandIDMap + (longlong)iVar7 * 0x10) ==
                  local_res10[0]) goto LAB_14bb8e5a7;
              iVar7 = *(int *)(*(longlong *)&this->ZoneHasIslandIDMap + 8 + (longlong)iVar7 * 0x10);
            } while (iVar7 != -1);
          }
        }
        local_48 = local_res10;
        local_40 = lVar3 + 8;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_&,int_const_&>_>
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)&this->ZoneHasIslandIDMap,&local_res18,(bool *)&local_48);
LAB_14bb8e5a7:
        FVar9.Data = FVar9.Data + 4;
      }
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
    }
    FVar11.Data = FVar11.Data + 8;
  } while( true );
}

// RemoveSelectedObj @ 14c03fd70

void __thiscall UDS_WorldMapManager::RemoveSelectedObj(UDS_WorldMapManager *this)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10 [3];
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  (this->IconSelectedObject).WeakPtr = local_res8;
  return;
}

