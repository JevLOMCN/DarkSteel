// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 62

// StaticClass @ 14b557e80

UClass * __cdecl UDS_PhasingManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PhasingManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PhasingManager",
               &Z_Registration_Info_UClass_UDS_PhasingManager.InnerSingleton,
               StaticRegisterNativesUDS_PhasingManager,0x2b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_PhasingManager>,
               InternalVTableHelperCtorCaller<UDS_PhasingManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PhasingManager.InnerSingleton;
}

// UDS_PhasingManager @ 14b55a5d0

UDS_PhasingManager * __thiscall
UDS_PhasingManager::UDS_PhasingManager(UDS_PhasingManager *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_PhasingManager__6B_;
  *(undefined8 *)&this->QuestPhasingInfoMap = 0;
  *(undefined8 *)&(this->QuestPhasingInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->QuestPhasingInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->QuestPhasingInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->QuestPhasingInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->QuestPhasingInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->QuestPhasingInfoMap).field_0x34 = 0;
  *(undefined8 *)&(this->QuestPhasingInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->QuestPhasingInfoMap).field_0x48 = 0;
  *(undefined8 *)&this->PhasingVolumeMap = 0;
  *(undefined8 *)&(this->PhasingVolumeMap).field_0x8 = 0;
  *(undefined8 *)&(this->PhasingVolumeMap).field_0x20 = 0;
  *(undefined4 *)&(this->PhasingVolumeMap).field_0x28 = 0;
  *(undefined4 *)&(this->PhasingVolumeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->PhasingVolumeMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PhasingVolumeMap).field_0x34 = 0;
  *(undefined8 *)&(this->PhasingVolumeMap).field_0x40 = 0;
  *(undefined4 *)&(this->PhasingVolumeMap).field_0x48 = 0;
  (this->PhasingVolumeTable).field0_0x0.DebugPtr = (UDataTable *)0x0;
  (this->PhasingVolumeBP).field0_0x0.DebugPtr = (UObject *)0x0;
  *(undefined8 *)&this->PhasingVolumeTableRowMap = 0;
  *(undefined8 *)&(this->PhasingVolumeTableRowMap).field_0x8 = 0;
  *(undefined8 *)&(this->PhasingVolumeTableRowMap).field_0x20 = 0;
  *(undefined4 *)&(this->PhasingVolumeTableRowMap).field_0x28 = 0;
  *(undefined4 *)&(this->PhasingVolumeTableRowMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->PhasingVolumeTableRowMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PhasingVolumeTableRowMap).field_0x34 = 0;
  *(undefined8 *)&(this->PhasingVolumeTableRowMap).field_0x40 = 0;
  *(undefined4 *)&(this->PhasingVolumeTableRowMap).field_0x48 = 0;
  (this->ScriptMissionInfo).ScriptMissionID = 0;
  *(undefined8 *)&(this->ScriptMissionInfo).MissionProgressCountMap = 0;
  *(undefined8 *)&(this->ScriptMissionInfo).MissionProgressCountMap.field_0x8 = 0;
  *(undefined8 *)&(this->ScriptMissionInfo).MissionProgressCountMap.field_0x20 = 0;
  *(undefined4 *)&(this->ScriptMissionInfo).MissionProgressCountMap.field_0x28 = 0;
  *(undefined4 *)&(this->ScriptMissionInfo).MissionProgressCountMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->ScriptMissionInfo).MissionProgressCountMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ScriptMissionInfo).MissionProgressCountMap.field_0x34 = 0;
  *(undefined8 *)&(this->ScriptMissionInfo).MissionProgressCountMap.field_0x40 = 0;
  *(undefined4 *)&(this->ScriptMissionInfo).MissionProgressCountMap.field_0x48 = 0;
  (this->PhasingVolume_EnterSphereCollisionOverlapped).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=
            (&(this->PhasingVolume_EnterSphereCollisionOverlapped).WeakPtr,(FObjectPtr)&local_res8);
  this->QuestID_ServerRequested = 0;
  (this->CheckAbleEnterPhasingTimer).Handle = 0;
  this->bIsTempPhasingVolume = false;
  this->PhasingID_InProgress = 0;
  (this->PhasingVolume_InProgress).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->PhasingVolume_InProgress).WeakPtr,(FObjectPtr)&local_res8);
  this->bIsPhasingVolumeEndOverlap = false;
  (this->PhasingVolumeEndOverlappedActor).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=
            (&(this->PhasingVolumeEndOverlappedActor).WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->ScriptBlockingWallInfoMap = 0;
  this->PhasingTimeLimitSec = -1.0;
  *(undefined8 *)&(this->ScriptBlockingWallInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->ScriptBlockingWallInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->ScriptBlockingWallInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->ScriptBlockingWallInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ScriptBlockingWallInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ScriptBlockingWallInfoMap).field_0x34 = 0;
  *(undefined8 *)&(this->ScriptBlockingWallInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->ScriptBlockingWallInfoMap).field_0x48 = 0;
  *(undefined8 *)&this->PhasingStartOrEndDelegate = 0;
  *(undefined8 *)&(this->PhasingStartOrEndDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->PhasingStartOrEndDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->PhasingStartOrEndDelegate).field_0x18 = 2;
  *(undefined8 *)&this->PhasingScriptMissionStartDelegate = 0;
  *(undefined8 *)&(this->PhasingScriptMissionStartDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->PhasingScriptMissionStartDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->PhasingScriptMissionStartDelegate).field_0x18 = 2;
  *(undefined8 *)&this->PhasingScriptMissionUpdateDelegate = 0;
  *(undefined8 *)&(this->PhasingScriptMissionUpdateDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->PhasingScriptMissionUpdateDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->PhasingScriptMissionUpdateDelegate).field_0x18 = 2;
  *(undefined8 *)&this->ChangedPhasingTimeLimitSecDelegate = 0;
  *(undefined8 *)&(this->ChangedPhasingTimeLimitSecDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedPhasingTimeLimitSecDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ChangedPhasingTimeLimitSecDelegate).field_0x18 = 2;
  *(undefined8 *)&this->ChangedScriptBlockingWallInfoDelegate = 0;
  *(undefined8 *)&(this->ChangedScriptBlockingWallInfoDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedScriptBlockingWallInfoDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ChangedScriptBlockingWallInfoDelegate).field_0x18 = 2;
  return this;
}

// UDS_PhasingManager @ 14b55a870

UDS_PhasingManager * __thiscall
UDS_PhasingManager::UDS_PhasingManager(UDS_PhasingManager *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_PhasingManager__6B_;
  *(undefined8 *)&this->QuestPhasingInfoMap = 0;
  *(undefined8 *)&(this->QuestPhasingInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->QuestPhasingInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->QuestPhasingInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->QuestPhasingInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->QuestPhasingInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->QuestPhasingInfoMap).field_0x34 = 0;
  *(undefined8 *)&(this->QuestPhasingInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->QuestPhasingInfoMap).field_0x48 = 0;
  *(undefined8 *)&this->PhasingVolumeMap = 0;
  *(undefined8 *)&(this->PhasingVolumeMap).field_0x8 = 0;
  *(undefined8 *)&(this->PhasingVolumeMap).field_0x20 = 0;
  *(undefined4 *)&(this->PhasingVolumeMap).field_0x28 = 0;
  *(undefined4 *)&(this->PhasingVolumeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->PhasingVolumeMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PhasingVolumeMap).field_0x34 = 0;
  *(undefined8 *)&(this->PhasingVolumeMap).field_0x40 = 0;
  *(undefined4 *)&(this->PhasingVolumeMap).field_0x48 = 0;
  (this->PhasingVolumeTable).field0_0x0.DebugPtr = (UDataTable *)0x0;
  (this->PhasingVolumeBP).field0_0x0.DebugPtr = (UObject *)0x0;
  *(undefined8 *)&this->PhasingVolumeTableRowMap = 0;
  *(undefined8 *)&(this->PhasingVolumeTableRowMap).field_0x8 = 0;
  *(undefined8 *)&(this->PhasingVolumeTableRowMap).field_0x20 = 0;
  *(undefined4 *)&(this->PhasingVolumeTableRowMap).field_0x28 = 0;
  *(undefined4 *)&(this->PhasingVolumeTableRowMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->PhasingVolumeTableRowMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PhasingVolumeTableRowMap).field_0x34 = 0;
  *(undefined8 *)&(this->PhasingVolumeTableRowMap).field_0x40 = 0;
  *(undefined4 *)&(this->PhasingVolumeTableRowMap).field_0x48 = 0;
  (this->ScriptMissionInfo).ScriptMissionID = 0;
  *(undefined8 *)&(this->ScriptMissionInfo).MissionProgressCountMap = 0;
  *(undefined8 *)&(this->ScriptMissionInfo).MissionProgressCountMap.field_0x8 = 0;
  *(undefined8 *)&(this->ScriptMissionInfo).MissionProgressCountMap.field_0x20 = 0;
  *(undefined4 *)&(this->ScriptMissionInfo).MissionProgressCountMap.field_0x28 = 0;
  *(undefined4 *)&(this->ScriptMissionInfo).MissionProgressCountMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->ScriptMissionInfo).MissionProgressCountMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ScriptMissionInfo).MissionProgressCountMap.field_0x34 = 0;
  *(undefined8 *)&(this->ScriptMissionInfo).MissionProgressCountMap.field_0x40 = 0;
  *(undefined4 *)&(this->ScriptMissionInfo).MissionProgressCountMap.field_0x48 = 0;
  (this->PhasingVolume_EnterSphereCollisionOverlapped).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=
            (&(this->PhasingVolume_EnterSphereCollisionOverlapped).WeakPtr,(FObjectPtr)&local_res8);
  this->QuestID_ServerRequested = 0;
  (this->CheckAbleEnterPhasingTimer).Handle = 0;
  this->bIsTempPhasingVolume = false;
  this->PhasingID_InProgress = 0;
  (this->PhasingVolume_InProgress).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->PhasingVolume_InProgress).WeakPtr,(FObjectPtr)&local_res8);
  this->bIsPhasingVolumeEndOverlap = false;
  (this->PhasingVolumeEndOverlappedActor).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=
            (&(this->PhasingVolumeEndOverlappedActor).WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->ScriptBlockingWallInfoMap = 0;
  this->PhasingTimeLimitSec = -1.0;
  *(undefined8 *)&(this->ScriptBlockingWallInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->ScriptBlockingWallInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->ScriptBlockingWallInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->ScriptBlockingWallInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ScriptBlockingWallInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ScriptBlockingWallInfoMap).field_0x34 = 0;
  *(undefined8 *)&(this->ScriptBlockingWallInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->ScriptBlockingWallInfoMap).field_0x48 = 0;
  *(undefined8 *)&this->PhasingStartOrEndDelegate = 0;
  *(undefined8 *)&(this->PhasingStartOrEndDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->PhasingStartOrEndDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->PhasingStartOrEndDelegate).field_0x18 = 2;
  *(undefined8 *)&this->PhasingScriptMissionStartDelegate = 0;
  *(undefined8 *)&(this->PhasingScriptMissionStartDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->PhasingScriptMissionStartDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->PhasingScriptMissionStartDelegate).field_0x18 = 2;
  *(undefined8 *)&this->PhasingScriptMissionUpdateDelegate = 0;
  *(undefined8 *)&(this->PhasingScriptMissionUpdateDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->PhasingScriptMissionUpdateDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->PhasingScriptMissionUpdateDelegate).field_0x18 = 2;
  *(undefined8 *)&this->ChangedPhasingTimeLimitSecDelegate = 0;
  *(undefined8 *)&(this->ChangedPhasingTimeLimitSecDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedPhasingTimeLimitSecDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ChangedPhasingTimeLimitSecDelegate).field_0x18 = 2;
  *(undefined8 *)&this->ChangedScriptBlockingWallInfoDelegate = 0;
  *(undefined8 *)&(this->ChangedScriptBlockingWallInfoDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedScriptBlockingWallInfoDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ChangedScriptBlockingWallInfoDelegate).field_0x18 = 2;
  return this;
}

// ~UDS_PhasingManager @ 14b55b7b0

void __thiscall UDS_PhasingManager::~UDS_PhasingManager(UDS_PhasingManager *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_PhasingManager__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangedScriptBlockingWallInfoDelegate).field_0x8,
             *(int *)&(this->ChangedScriptBlockingWallInfoDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ChangedScriptBlockingWallInfoDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangedScriptBlockingWallInfoDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangedPhasingTimeLimitSecDelegate).field_0x8,
             *(int *)&(this->ChangedPhasingTimeLimitSecDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ChangedPhasingTimeLimitSecDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangedPhasingTimeLimitSecDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PhasingScriptMissionUpdateDelegate).field_0x8,
             *(int *)&(this->PhasingScriptMissionUpdateDelegate).field_0x10);
  pvVar1 = *(void **)&(this->PhasingScriptMissionUpdateDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PhasingScriptMissionUpdateDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PhasingScriptMissionStartDelegate).field_0x8,
             *(int *)&(this->PhasingScriptMissionStartDelegate).field_0x10);
  pvVar1 = *(void **)&(this->PhasingScriptMissionStartDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PhasingScriptMissionStartDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PhasingStartOrEndDelegate).field_0x8,
             *(int *)&(this->PhasingStartOrEndDelegate).field_0x10);
  pvVar1 = *(void **)&(this->PhasingStartOrEndDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PhasingStartOrEndDelegate);
  *(undefined4 *)&(this->ScriptBlockingWallInfoMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ScriptBlockingWallInfoMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_ScriptBlockingWallInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDS_ScriptBlockingWallInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDS_ScriptBlockingWallInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ScriptBlockingWallInfoMap);
  *(undefined4 *)&(this->ScriptMissionInfo).MissionProgressCountMap.field_0x48 = 0;
  pvVar1 = *(void **)&(this->ScriptMissionInfo).MissionProgressCountMap.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->ScriptMissionInfo).MissionProgressCountMap);
  *(undefined4 *)&(this->PhasingVolumeTableRowMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PhasingVolumeTableRowMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FWN_PhasingVolumeInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FWN_PhasingVolumeInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FWN_PhasingVolumeInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PhasingVolumeTableRowMap);
  *(undefined4 *)&(this->PhasingVolumeMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PhasingVolumeMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PhasingVolumeMap);
  *(undefined4 *)&(this->QuestPhasingInfoMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->QuestPhasingInfoMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_QuestPhasingInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDS_QuestPhasingInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDS_QuestPhasingInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->QuestPhasingInfoMap);
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b55d120

UClass * __cdecl UDS_PhasingManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PhasingManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PhasingManager",
               &Z_Registration_Info_UClass_UDS_PhasingManager.InnerSingleton,
               StaticRegisterNativesUDS_PhasingManager,0x2b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_PhasingManager>,
               InternalVTableHelperCtorCaller<UDS_PhasingManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PhasingManager.InnerSingleton;
}

// StaticRegisterNativesUDS_PhasingManager @ 14b55d390

void __cdecl UDS_PhasingManager::StaticRegisterNativesUDS_PhasingManager(void)

{
  return;
}

// CheckAbleEnterPhasing @ 14baf6550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_PhasingManager::CheckAbleEnterPhasing(UDS_PhasingManager *this)

{
  bool bVar1;
  int iVar2;
  UDS_LogManager *pUVar3;
  FDS_EntityBase *pFVar4;
  UObject *pUVar5;
  AWN_PhasingVolume *pAVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStackY_1b8 [32];
  uint uVar9;
  wchar_t *pwVar10;
  int local_178 [2];
  FWeakObjectPtr local_170;
  TVector<double>_u_0 local_168;
  double local_150;
  double local_148;
  double local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  undefined1 extraout_var [12];
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (0 < this->PhasingID_InProgress) {
    return;
  }
  if (this->QuestID_ServerRequested != 0) {
    return;
  }
  bVar1 = TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>::UEOpEquals
                    (&this->PhasingVolume_EnterSphereCollisionOverlapped,(void *)0x0);
  if (bVar1) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_PhasingManager::CheckAbleEnterPhasing",0x29,Yes);
    pwVar10 = L"PhasingVolume_EnterSphereCollisionOverlapped is nullptr.";
    uVar9 = 0x3c9;
  }
  else {
    pFVar4 = FDS_EntityBase::GetMainPlayerEntityBase(true);
    if (pFVar4 == (FDS_EntityBase *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_PhasingManager::CheckAbleEnterPhasing",0x29,Yes);
      pwVar10 = L"mainPlayerEntityBase is nullptr.";
      uVar9 = 0x3d1;
    }
    else {
      (**(code **)(pFVar4->_padding_ + 0x78))(pFVar4);
      bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_170,(void *)0x0);
      if (!bVar1) {
        pUVar5 = FWeakObjectPtr::Get(&local_170);
        (**(code **)(*(longlong *)pUVar5 + 0x338))(pUVar5,&local_150);
        pAVar6 = (AWN_PhasingVolume *)
                 FWeakObjectPtr::Get(&(this->PhasingVolume_EnterSphereCollisionOverlapped).WeakPtr);
        AWN_PhasingVolume::GetEnterSphereCollisionCenterPos
                  (pAVar6,(TVector<double> *)&local_168._s_0);
        pAVar6 = (AWN_PhasingVolume *)
                 FWeakObjectPtr::Get(&(this->PhasingVolume_EnterSphereCollisionOverlapped).WeakPtr);
        auVar7._0_4_ = AWN_PhasingVolume::GetEnterSphereCollisionRadius(pAVar6);
        auVar7._4_12_ = extraout_var;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (local_168._s_0.Y - local_148) * (local_168._s_0.Y - local_148) +
                       (local_168._s_0.X - local_150) * (local_168._s_0.X - local_150) +
                       (local_168._s_0.Z - local_140) * (local_168._s_0.Z - local_140);
        auVar8 = sqrtpd(auVar7,auVar8);
        if (auVar7._0_4_ <= (float)auVar8._0_8_) {
          return;
        }
        pAVar6 = (AWN_PhasingVolume *)
                 FWeakObjectPtr::Get(&(this->PhasingVolume_EnterSphereCollisionOverlapped).WeakPtr);
        iVar2 = AWN_PhasingVolume::GetPhasingId(pAVar6);
        local_178[0] = GetQuestIDByPhasingID(this,iVar2);
        local_178[1] = 1;
        bVar1 = FDS_PhasingService::RequestPhasingPosition((PhasingType *)(local_178 + 1),local_178)
        ;
        if (bVar1) {
          this->QuestID_ServerRequested = local_178[0];
          return;
        }
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_PhasingManager::CheckAbleEnterPhasing",0x29,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_138.Ptr,0x3e9,
                   L"Failed to RequestPhasingPosition(PhasingType_Quest, %d).");
        goto LAB_14baf683c;
      }
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_PhasingManager::CheckAbleEnterPhasing",0x29,Yes);
      pwVar10 = L"mainPlayerMovementCore is nullptr.";
      uVar9 = 0x3d8;
    }
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar9,pwVar10);
LAB_14baf683c:
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// ClearCheckAbleEnterPhasingTimer @ 14baf9200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_PhasingManager::ClearCheckAbleEnterPhasingTimer(UDS_PhasingManager *this)

{
  FTimerHandle *pFVar1;
  FTimerManager *this_00;
  FTimerData *pFVar2;
  
  pFVar1 = &this->CheckAbleEnterPhasingTimer;
  if (pFVar1->Handle != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar2 = FTimerManager::FindTimer(this_00,pFVar1);
    if (pFVar2 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_00,(FTimerHandle)pFVar1->Handle);
    }
    pFVar1->Handle = 0;
  }
  return;
}

// ClearPhasingVolumeBP @ 14baf9260

void __thiscall UDS_PhasingManager::ClearPhasingVolumeBP(UDS_PhasingManager *this)

{
  (this->PhasingVolumeBP).field0_0x0.DebugPtr = (UObject *)0x0;
  return;
}

// ClearPhasingVolumeMap @ 14baf9280

void __thiscall UDS_PhasingManager::ClearPhasingVolumeMap(UDS_PhasingManager *this)

{
  undefined1 *puVar1;
  TMap<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>,0>_>
  *this_00;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->PhasingVolumeMap;
  bVar3 = 1 < *(int *)&(this->PhasingVolumeMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->PhasingVolumeMap).field_0xc;
  *(undefined4 *)&(this->PhasingVolumeMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->PhasingVolumeMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PhasingVolumeMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->PhasingVolumeMap).field_0x2c;
  *(undefined4 *)&(this->PhasingVolumeMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->PhasingVolumeMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PhasingVolumeMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->PhasingVolumeMap).field_0x48 = 1;
    TSet<TTuple<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// ClearPhasingVolumeTable @ 14baf9330

void __thiscall UDS_PhasingManager::ClearPhasingVolumeTable(UDS_PhasingManager *this)

{
  undefined1 *puVar1;
  TMap<int,FWN_PhasingVolumeInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FWN_PhasingVolumeInfo_*,0>_>
  *this_00;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->PhasingVolumeTableRowMap;
  (this->PhasingVolumeTable).field0_0x0.DebugPtr = (UDataTable *)0x0;
  bVar3 = 1 < *(int *)&(this->PhasingVolumeTableRowMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<int,FWN_PhasingVolumeInfo_*>,TDefaultMapHashableKeyFuncs<int,FWN_PhasingVolumeInfo_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,FWN_PhasingVolumeInfo_*>,TDefaultMapHashableKeyFuncs<int,FWN_PhasingVolumeInfo_*,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->PhasingVolumeTableRowMap).field_0xc;
  *(undefined4 *)&(this->PhasingVolumeTableRowMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->PhasingVolumeTableRowMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PhasingVolumeTableRowMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->PhasingVolumeTableRowMap).field_0x2c;
  *(undefined4 *)&(this->PhasingVolumeTableRowMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->PhasingVolumeTableRowMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PhasingVolumeTableRowMap).field_0x10,
               0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->PhasingVolumeTableRowMap).field_0x48 = 1;
    TSet<TTuple<int,FWN_PhasingVolumeInfo_*>,TDefaultMapHashableKeyFuncs<int,FWN_PhasingVolumeInfo_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,FWN_PhasingVolumeInfo_*>,TDefaultMapHashableKeyFuncs<int,FWN_PhasingVolumeInfo_*,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// ClearQuestPhasingInfoMap @ 14baf9870

void __thiscall UDS_PhasingManager::ClearQuestPhasingInfoMap(UDS_PhasingManager *this)

{
  TMap<int,FDS_QuestPhasingInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_QuestPhasingInfo,0>_>
  *this_00;
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->QuestPhasingInfoMap;
  bVar3 = 1 < *(int *)&(this->QuestPhasingInfoMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<int,FDS_QuestPhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestPhasingInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,FDS_QuestPhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestPhasingInfo,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_QuestPhasingInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,FDS_QuestPhasingInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->QuestPhasingInfoMap).field_0x8);
  puVar1 = &(this->QuestPhasingInfoMap).field_0xc;
  *(undefined4 *)&(this->QuestPhasingInfoMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->QuestPhasingInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->QuestPhasingInfoMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->QuestPhasingInfoMap).field_0x2c;
  *(undefined4 *)&(this->QuestPhasingInfoMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->QuestPhasingInfoMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->QuestPhasingInfoMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->QuestPhasingInfoMap).field_0x48 = 1;
    TSet<TTuple<int,FDS_QuestPhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestPhasingInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,FDS_QuestPhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestPhasingInfo,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// ClearScriptBlockingWallInfo @ 14baf9930

void __thiscall UDS_PhasingManager::ClearScriptBlockingWallInfo(UDS_PhasingManager *this)

{
  undefined1 *puVar1;
  TMap<int,FDS_ScriptBlockingWallInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ScriptBlockingWallInfo,0>_>
  *this_00;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  bool local_res8 [8];
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<int,FDS_ScriptBlockingWallInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ScriptBlockingWallInfo,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<int,FDS_ScriptBlockingWallInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ScriptBlockingWallInfo,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<int,FDS_ScriptBlockingWallInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ScriptBlockingWallInfo,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  this_00 = &this->ScriptBlockingWallInfoMap;
  TSet<TTuple<int,FDS_ScriptBlockingWallInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ScriptBlockingWallInfo,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<int,FDS_ScriptBlockingWallInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ScriptBlockingWallInfo,0>,FDefaultSetAllocator>
              *)this_00);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar5 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<int,FDS_ScriptBlockingWallInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ScriptBlockingWallInfo,0>,FDefaultSetAllocator>
              *)this_00;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    local_res8[0] = false;
    do {
      SetScriptBlockingWallInfo(this,(int *)(*local_48 + (longlong)(int)uVar5 * 0x14),local_res8);
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar5 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar6 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar6 < 4) {
        iVar4 = 1;
      }
      else {
        uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar4 = 1 << ((byte)lVar3 & 0x1f);
      }
      if (((0 < (int)uVar6) && (local_18->HashSize < iVar4)) || (iVar4 < local_18->HashSize)) {
        local_18->HashSize = iVar4;
        TSet<TTuple<int,FDS_ScriptBlockingWallInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ScriptBlockingWallInfo,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  bVar2 = 1 < *(int *)&(this->ScriptBlockingWallInfoMap).field_0x48;
  if (!bVar2) {
    TSet<TTuple<int,FDS_ScriptBlockingWallInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ScriptBlockingWallInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,FDS_ScriptBlockingWallInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ScriptBlockingWallInfo,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->ScriptBlockingWallInfoMap).field_0xc;
  *(undefined4 *)&(this->ScriptBlockingWallInfoMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ScriptBlockingWallInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ScriptBlockingWallInfoMap).field_0x34 = 0;
  iVar4 = *(int *)&(this->ScriptBlockingWallInfoMap).field_0x2c;
  *(undefined4 *)&(this->ScriptBlockingWallInfoMap).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->ScriptBlockingWallInfoMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ScriptBlockingWallInfoMap).field_0x10
               ,0);
  }
  if (bVar2) {
    *(undefined4 *)&(this->ScriptBlockingWallInfoMap).field_0x48 = 1;
    TSet<TTuple<int,FDS_ScriptBlockingWallInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ScriptBlockingWallInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,FDS_ScriptBlockingWallInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ScriptBlockingWallInfo,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// Created @ 14bb01dd0

void __thiscall UDS_PhasingManager::Created(UDS_PhasingManager *this)

{
  UDS_QuestEvent *pUVar1;
  
  *(undefined1 *)&this->_padding_ = 0;
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnAddQuestDataDelegate
               ,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_PhasingManager>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnAddQuestDataDelegate,(UDS_PhasingManager *)&stack0x00000008,
               (pmf_1bb61a68)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnRemoveQuestDataDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_PhasingManager>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnRemoveQuestDataDelegate,(UDS_PhasingManager *)&stack0x00000008,
               (pmf_1bb61a68)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdateQuestDataDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_PhasingManager>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdateQuestDataDelegate,(UDS_PhasingManager *)&stack0x00000008,
               (pmf_1bb61a68)this);
  }
  return;
}

// DestroyPhasingVolumeActor @ 14bb02930

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UDS_PhasingManager::DestroyPhasingVolumeActor(UDS_PhasingManager *this,int param_1)

{
  undefined1 *puVar1;
  TMap<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>,0>_>
  *this_00;
  bool bVar2;
  int iVar3;
  uint uVar4;
  FWeakObjectPtr *pFVar5;
  UObject *pUVar6;
  AWN_PhasingVolume *this_01;
  AActor *this_02;
  undefined1 *puVar7;
  FWeakObjectPtr local_res8;
  uint local_res10 [2];
  FWeakObjectPtr local_res18 [2];
  
  this_00 = &this->PhasingVolumeMap;
  if (*(int *)&(this->PhasingVolumeMap).field_0x8 != *(int *)&(this->PhasingVolumeMap).field_0x34) {
    puVar1 = &(this->PhasingVolumeMap).field_0x38;
    puVar7 = *(undefined1 **)&(this->PhasingVolumeMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = puVar1;
    }
    iVar3 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->PhasingVolumeMap).field_0x48 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      while (*(int *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar3 * 0x14) != param_1) {
        iVar3 = *(int *)(*(longlong *)&this_00->field_0x0 + 0xc + (longlong)iVar3 * 0x14);
        if (iVar3 == -1) {
          return true;
        }
      }
      pFVar5 = &TMapBase<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>,0>_>
                ::FindChecked((TMapBase<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>,0>_>
                               *)this_00,param_1)->WeakPtr;
      local_res18[0] = *pFVar5;
      bVar2 = TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr> *)local_res18,(void *)0x0
                        );
      if (bVar2) {
        return false;
      }
      local_res8 = local_res18[0];
      bVar2 = TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr> *)&local_res8,(void *)0x0
                        );
      if (!bVar2) {
        pUVar6 = FWeakObjectPtr::Get(&local_res8);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar6 + 0x13),this);
        pUVar6 = FWeakObjectPtr::Get(&local_res8);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar6[0x13].field_0x20,
                   this);
        pUVar6 = FWeakObjectPtr::Get(&local_res8);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar6[0x14].field_0x18,
                   this);
        pUVar6 = FWeakObjectPtr::Get(&local_res8);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar6[0x15].field_0x10,
                   this);
        this_01 = (AWN_PhasingVolume *)FWeakObjectPtr::Get(&local_res8);
        uVar4 = AWN_PhasingVolume::GetPhasingId(this_01);
        if (*(int *)&(this->PhasingVolumeMap).field_0x8 !=
            *(int *)&(this->PhasingVolumeMap).field_0x34) {
          puVar7 = *(undefined1 **)&(this->PhasingVolumeMap).field_0x40;
          if (puVar7 == (undefined1 *)0x0) {
            puVar7 = puVar1;
          }
          iVar3 = *(int *)(puVar7 + (ulonglong)
                                    (*(int *)&(this->PhasingVolumeMap).field_0x48 - 1U & uVar4) * 4)
          ;
          if (iVar3 != -1) {
            do {
              if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar3 * 0x14) == uVar4) {
                local_res10[0] = uVar4;
                TSet<TTuple<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                ::RemoveImpl<int>((TSet<TTuple<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                                   *)this_00,uVar4,(int *)local_res10);
                break;
              }
              iVar3 = *(int *)(*(longlong *)&this_00->field_0x0 + 0xc + (longlong)iVar3 * 0x14);
            } while (iVar3 != -1);
          }
        }
      }
      this_02 = (AActor *)FWeakObjectPtr::Get(local_res18);
      AActor::Destroy(this_02,false,true);
    }
  }
  return true;
}

// EnterBreach @ 14bb03710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UDS_PhasingManager::EnterBreach(UDS_PhasingManager *this,ulong64 *param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FDS_EntityBase *this_00;
  UDS_LogManager *pUVar6;
  FDS_PartyRepo *pFVar7;
  FDS_PartyRepo *pFVar8;
  UDS_DataManager *pUVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar12;
  void *pvVar13;
  undefined1 auStackY_458 [32];
  undefined1 local_418 [8];
  FDelegateAllocation local_410;
  UDS_PhasingManager *local_400;
  FDestructionSentinel local_3f8;
  FDestructionSentinel local_3e0;
  FDelegateAllocation *local_3c8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_3c0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_458;
  this_00 = FDS_EntityBase::GetEntityBase(param_1);
  if (this_00 == (FDS_EntityBase *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_3a8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_3a8,"UDS_PhasingManager::EnterBreach",0x1f,Yes);
    UDS_LogManager::PrintLog
              (pUVar6,1,Warning,local_3a8.Ptr,0x1e2,L"breachEntity is nullptr. (%llu)");
    pvVar13 = (void *)local_3a8._padding_;
  }
  else {
    bVar3 = FDS_EntityBase::IsBreach(this_00);
    if ((bVar3) || (bVar3 = FDS_EntityBase::IsGate(this_00), bVar3)) {
      bVar3 = FDS_EntityBase::IsGate(this_00);
      pFVar8 = (FDS_PartyRepo *)0x0;
      if (bVar3) {
        pFVar7 = TDS_Singleton<FDS_PartyRepo>::Inst;
        if (TDS_Singleton<FDS_PartyRepo>::Inst == (FDS_PartyRepo *)0x0) {
          pFVar7 = ::operator_new(0xe0);
          if (pFVar7 != (FDS_PartyRepo *)0x0) {
            memset(pFVar7,0,0xe0);
            pFVar8 = FDS_PartyRepo::FDS_PartyRepo(pFVar7);
          }
          TDS_Singleton<FDS_PartyRepo>::Inst = pFVar8;
          pUVar9 = UDS_DataManager::GetInst();
          pFVar7 = TDS_Singleton<FDS_PartyRepo>::Inst;
          if (pUVar9 == (UDS_DataManager *)0x0) {
            if (TDS_Singleton<FDS_PartyRepo>::Inst != (FDS_PartyRepo *)0x0) {
              FDS_PartyInfo::~FDS_PartyInfo(&TDS_Singleton<FDS_PartyRepo>::Inst->PartyInfo);
              ::operator_delete(pFVar7,0xe0);
            }
            TDS_Singleton<FDS_PartyRepo>::Inst = (FDS_PartyRepo *)0x0;
            bVar3 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4219184397653377064>,true,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_Singleton.h"
                               ,0x28,"false");
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            pFVar7 = &TDS_Singleton<FDS_PartyRepo>::Empty;
          }
          else {
            iVar5 = (pUVar9->RepoArray).ArrayNum;
            piVar1 = &(pUVar9->RepoArray).ArrayMax;
            if (iVar5 == *piVar1) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&(pUVar9->RepoArray).AllocatorInstance,piVar1);
            }
            (pUVar9->RepoArray).ArrayNum = iVar5 + 1;
            *(FDS_PartyRepo **)((pUVar9->RepoArray).AllocatorInstance.Data + (longlong)iVar5 * 8) =
                 pFVar8;
            pFVar7 = TDS_Singleton<FDS_PartyRepo>::Inst;
          }
        }
        bVar3 = FDS_PartyRepo::IsPartyJoined(pFVar7);
        if (!bVar3) {
          local_418 = (undefined1  [8])0x0;
          local_410.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_410.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_418,
                     (FWriteAccessScope *)&local_3e0);
          local_3c8 = &local_410;
          puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_410);
          if (puVar10 != (undefined8 *)0x0) {
            *puVar10 = &
                       ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy___KH__6B_
            ;
            puVar10[1] = *param_1;
            *(int *)(puVar10 + 2) = param_2;
            uVar11 = FDelegateHandle::GenerateNewID();
            puVar10[3] = uVar11;
            *puVar10 = &
                       ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_PhasingManager____A6AXXZUFDefaultDelegateUserPolicy___KH__6B_
            ;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this != (UDS_PhasingManager *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar10[4] = 0;
            local_400 = this;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this != (UDS_PhasingManager *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 4),(FObjectPtr)&local_400);
            puVar10[5] = OnPartyCreateForBreach;
          }
          if (local_3e0.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3e0.Accessor,&local_3e0);
          }
          pTVar12 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                              (&local_3c0,
                               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_418
                              );
          FDS_PartyService::RequestPartyCreate(pTVar12);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_418,
                     (FWriteAccessScope *)&local_3f8);
          if ((local_410.DelegateSize != 0) &&
             (local_410.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_410.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_410,0,0,0x10);
            local_410.DelegateSize = 0;
          }
          if (local_3f8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3f8.Accessor,&local_3f8);
          }
          if (local_410.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_410.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_418);
          return false;
        }
      }
      bVar3 = FDS_PhasingService::RequestBreachEnter(param_1,param_2);
      if (bVar3) {
        return true;
      }
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar6 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_PhasingManager::EnterBreach",0x1f,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_168.Ptr,0x1f7,L"Failed to RequestBreachEnter(%llu).");
      pvVar13 = (void *)local_168._padding_;
    }
    else {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar6 = UDS_LogManager::GetInst();
      local_288._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_288,"UDS_PhasingManager::EnterBreach",0x1f,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_288.Ptr,0x1e8,L"breachEntity is not Breach. (%llu)");
      pvVar13 = (void *)local_288._padding_;
    }
  }
  if (pvVar13 != (void *)0x0) {
    FMemory::Free(pvVar13);
  }
  return false;
}

// EnterInn @ 14bb03b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall UDS_PhasingManager::EnterInn(UDS_PhasingManager *this,ulong64 *param_1,int param_2)

{
  bool bVar1;
  FDS_EntityBase *this_00;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_178 [32];
  uint uVar3;
  wchar_t *pwVar4;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = FDS_EntityBase::GetEntityBase(param_1);
  if (this_00 == (FDS_EntityBase *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_PhasingManager::EnterInn",0x1c,Yes);
    pwVar4 = L"innEntity is nullptr. (%llu)";
    uVar3 = 0x21a;
  }
  else {
    bVar1 = FDS_EntityBase::IsInn(this_00);
    if (bVar1) {
      bVar1 = FDS_PhasingService::RequestInnEnter(param_1,param_2);
      if (bVar1) {
        return true;
      }
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_PhasingManager::EnterInn",0x1c,Yes);
      pwVar4 = L"Failed to RequestInnEnter(%llu).";
      uVar3 = 0x226;
    }
    else {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_PhasingManager::EnterInn",0x1c,Yes);
      pwVar4 = L"innEntity is not Inn. (%llu)";
      uVar3 = 0x220;
    }
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar3,pwVar4);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// GetInst @ 14bb0bda0

UDS_PhasingManager * __cdecl UDS_PhasingManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_PhasingManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_PhasingManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_PhasingManager_NoRegister();
  pUVar3 = (UDS_PhasingManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_PhasingManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_PhasingManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_PhasingManager *)0x0;
}

// GetPhasingIDInProgress @ 14bb0d420

int __thiscall UDS_PhasingManager::GetPhasingIDInProgress(UDS_PhasingManager *this)

{
  return this->PhasingID_InProgress;
}

// GetPhasingTimeLimitSec @ 14bb0d430

double __thiscall UDS_PhasingManager::GetPhasingTimeLimitSec(UDS_PhasingManager *this)

{
  return this->PhasingTimeLimitSec;
}

// GetQuestIDByPhasingID @ 14bb0e440

int __thiscall UDS_PhasingManager::GetQuestIDByPhasingID(UDS_PhasingManager *this,int param_1)

{
  TSet<TTuple<int,FDS_QuestObjectivePhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestObjectivePhasingInfo,0>,FDefaultSetAllocator>
  *pTVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_b0 [16];
  uint uStack_a0;
  uint uStack_9c;
  longlong local_98;
  TSet<TTuple<int,FDS_QuestPhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestPhasingInfo,0>,FDefaultSetAllocator>
  *pTStack_90;
  TSet<TTuple<int,FDS_QuestObjectivePhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestObjectivePhasingInfo,0>,FDefaultSetAllocator>
  *local_88;
  undefined2 local_80;
  longlong *local_78;
  undefined1 auStack_70 [16];
  uint uStack_60;
  uint uStack_5c;
  longlong local_58;
  TSet<TTuple<int,FDS_QuestPhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestPhasingInfo,0>,FDefaultSetAllocator>
  *pTStack_50;
  TSet<TTuple<int,FDS_QuestPhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestPhasingInfo,0>,FDefaultSetAllocator>
  *local_48;
  undefined2 local_40;
  undefined1 local_38 [32];
  longlong local_18;
  TSet<TTuple<int,FDS_QuestPhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestPhasingInfo,0>,FDefaultSetAllocator>
  *pTStack_10;
  
  TSet<TTuple<int,FDS_QuestPhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestPhasingInfo,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_38,
             (TSet<TTuple<int,FDS_QuestPhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestPhasingInfo,0>,FDefaultSetAllocator>
              *)&this->QuestPhasingInfoMap);
  local_40 = 0;
  stack0xffffffffffffff98 = local_38._16_16_;
  local_78 = (longlong *)local_38._0_8_;
  auStack_70._0_8_ = local_38._8_8_;
  local_58 = local_18;
  pTStack_50 = pTStack_10;
  uVar5 = local_38._24_8_ >> 0x20;
  if (local_38._28_4_ < *(int *)(local_38._16_8_ + 0x18)) {
    iVar6 = 1;
    local_48 = (TSet<TTuple<int,FDS_QuestPhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestPhasingInfo,0>,FDefaultSetAllocator>
                *)&this->QuestPhasingInfoMap;
    do {
      lVar8 = (longlong)(int)uVar5 * 0x68 + *local_78;
      pTVar1 = (TSet<TTuple<int,FDS_QuestObjectivePhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestObjectivePhasingInfo,0>,FDefaultSetAllocator>
                *)(lVar8 + 0x10);
      TSet<TTuple<int,FDS_QuestObjectivePhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestObjectivePhasingInfo,0>,FDefaultSetAllocator>
      ::TIterator::TIterator((TIterator *)local_38,pTVar1);
      uVar2 = local_38._0_8_;
      local_80 = 0;
      stack0xffffffffffffff58 = local_38._16_16_;
      auStack_b0._0_8_ = local_38._8_8_;
      local_98 = local_18;
      pTStack_90 = pTStack_10;
      uVar5 = local_38._24_8_ >> 0x20;
      local_88 = pTVar1;
      if (local_38._28_4_ < *(int *)(local_38._16_8_ + 0x18)) {
        do {
          if (*(int *)(*(longlong *)uVar2 + 8 + (longlong)(int)uVar5 * 0x14) == param_1) {
            iVar3 = *(int *)(lVar8 + 8);
            if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
              uVar7 = *(int *)&(local_88->Elements).field_0x8 -
                      *(int *)&(local_88->Elements).field_0x34;
              if (uVar7 < 4) {
                iVar4 = 1;
              }
              else {
                uVar5 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
                lVar8 = 0x3f;
                if (uVar5 != 0) {
                  for (; uVar5 >> lVar8 == 0; lVar8 = lVar8 + -1) {
                  }
                }
                iVar4 = 1 << ((byte)lVar8 & 0x1f);
              }
              if (((0 < (int)uVar7) && (local_88->HashSize < iVar4)) || (iVar4 < local_88->HashSize)
                 ) {
                local_88->HashSize = iVar4;
                TSet<TTuple<int,FDS_QuestObjectivePhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestObjectivePhasingInfo,0>,FDefaultSetAllocator>
                ::Rehash(local_88);
              }
            }
            if ((char)local_40 == '\0') {
              return iVar3;
            }
            if (local_40._1_1_ == '\0') {
              return iVar3;
            }
            uVar7 = *(int *)&(local_48->Elements).field_0x8 -
                    *(int *)&(local_48->Elements).field_0x34;
            if (3 < uVar7) {
              uVar5 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
              lVar8 = 0x3f;
              if (uVar5 != 0) {
                for (; uVar5 >> lVar8 == 0; lVar8 = lVar8 + -1) {
                }
              }
              iVar6 = 1 << ((byte)lVar8 & 0x1f);
            }
            if ((((int)uVar7 < 1) || (iVar6 <= local_48->HashSize)) && (local_48->HashSize <= iVar6)
               ) {
              return iVar3;
            }
            local_48->HashSize = iVar6;
            TSet<TTuple<int,FDS_QuestPhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestPhasingInfo,0>,FDefaultSetAllocator>
            ::Rehash(local_48);
            return iVar3;
          }
          uStack_a0 = uStack_a0 & ~auStack_b0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_b0);
          uVar5 = (ulonglong)uStack_9c;
        } while ((int)uStack_9c < *(int *)(auStack_b0._8_8_ + 0x18));
        if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
          uVar7 = *(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34
          ;
          if (uVar7 < 4) {
            iVar3 = 1;
          }
          else {
            uVar5 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
            lVar8 = 0x3f;
            if (uVar5 != 0) {
              for (; uVar5 >> lVar8 == 0; lVar8 = lVar8 + -1) {
              }
            }
            iVar3 = 1 << ((byte)lVar8 & 0x1f);
          }
          if (((0 < (int)uVar7) && (local_88->HashSize < iVar3)) || (iVar3 < local_88->HashSize)) {
            local_88->HashSize = iVar3;
            TSet<TTuple<int,FDS_QuestObjectivePhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestObjectivePhasingInfo,0>,FDefaultSetAllocator>
            ::Rehash(local_88);
          }
        }
      }
      uStack_60 = uStack_60 & ~auStack_70._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_70);
      uVar5 = (ulonglong)uStack_5c;
    } while ((int)uStack_5c < *(int *)(auStack_70._8_8_ + 0x18));
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      uVar7 = *(int *)&(local_48->Elements).field_0x8 - *(int *)&(local_48->Elements).field_0x34;
      if (3 < uVar7) {
        uVar5 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
        lVar8 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iVar6 = 1 << ((byte)lVar8 & 0x1f);
      }
      if (((0 < (int)uVar7) && (local_48->HashSize < iVar6)) || (iVar6 < local_48->HashSize)) {
        local_48->HashSize = iVar6;
        TSet<TTuple<int,FDS_QuestPhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestPhasingInfo,0>,FDefaultSetAllocator>
        ::Rehash(local_48);
      }
    }
  }
  return 0;
}

// GetScriptBlockingWallInfo @ 14bb10570

bool __thiscall
UDS_PhasingManager::GetScriptBlockingWallInfo
          (UDS_PhasingManager *this,int *param_1,FDS_ScriptBlockingWallInfo *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  FDS_ScriptBlockingWallInfo *pFVar4;
  undefined1 *puVar5;
  
  uVar1 = *param_1;
  if (*(int *)&(this->ScriptBlockingWallInfoMap).field_0x8 !=
      *(int *)&(this->ScriptBlockingWallInfoMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->ScriptBlockingWallInfoMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ScriptBlockingWallInfoMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->ScriptBlockingWallInfoMap).field_0x48 - 1U & uVar1) *
                              4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&this->ScriptBlockingWallInfoMap;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar3 * 0x14) == uVar1) {
          pFVar4 = TMapBase<int,FDS_ScriptBlockingWallInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ScriptBlockingWallInfo,0>_>
                   ::FindChecked((TMapBase<int,FDS_ScriptBlockingWallInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ScriptBlockingWallInfo,0>_>
                                  *)&this->ScriptBlockingWallInfoMap,uVar1);
          *param_2 = *pFVar4;
          return true;
        }
        iVar3 = *(int *)(lVar2 + 0xc + (longlong)iVar3 * 0x14);
      } while (iVar3 != -1);
    }
  }
  return false;
}

// GetScriptMissionID @ 14bb105f0

int __thiscall UDS_PhasingManager::GetScriptMissionID(UDS_PhasingManager *this)

{
  return (this->ScriptMissionInfo).ScriptMissionID;
}

// GetScriptMissionProgressCount @ 14bb10600

int __thiscall
UDS_PhasingManager::GetScriptMissionProgressCount(UDS_PhasingManager *this,int param_1)

{
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_00;
  longlong lVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  
  this_00 = &(this->ScriptMissionInfo).MissionProgressCountMap;
  if (*(int *)&(this->ScriptMissionInfo).MissionProgressCountMap.field_0x8 !=
      *(int *)&(this->ScriptMissionInfo).MissionProgressCountMap.field_0x34) {
    puVar4 = *(undefined1 **)&(this->ScriptMissionInfo).MissionProgressCountMap.field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ScriptMissionInfo).MissionProgressCountMap.field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->ScriptMissionInfo).MissionProgressCountMap.field_0x48
                               - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)this_00;
      do {
        if (*(int *)(lVar1 + (longlong)iVar2 * 0x10) == param_1) {
          piVar3 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
                   FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                *)this_00,param_1);
          return *piVar3;
        }
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  return 0;
}

// HasPhasingTimeLimitSec @ 14bb113c0

bool __thiscall UDS_PhasingManager::HasPhasingTimeLimitSec(UDS_PhasingManager *this)

{
  double dVar1;
  
  dVar1 = this->PhasingTimeLimitSec - __real_bff0000000000000;
  return __real_3e45798ee2308c3a <
         (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
}

// Init @ 14bb13c00

void __thiscall UDS_PhasingManager::Init(UDS_PhasingManager *this)

{
  LoadPhasingVolumeTable(this);
  PreloadPhasingVolumeBP(this);
  return;
}

// IsPhasingInProgress @ 14bb16000

bool __thiscall UDS_PhasingManager::IsPhasingInProgress(UDS_PhasingManager *this)

{
  return 0 < this->PhasingID_InProgress;
}

// LoadPhasingVolumeTable @ 14bb17880

void __thiscall UDS_PhasingManager::LoadPhasingVolumeTable(UDS_PhasingManager *this)

{
  FName *pFVar1;
  int iVar2;
  UDataTable *this_00;
  UClass *pUVar3;
  ulonglong uVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType FVar6;
  FName local_res8 [2];
  TArray<FWN_PhasingVolumeInfo_*,TSizedDefaultAllocator<32>_> local_58;
  undefined1 local_48 [16];
  FSoftObjectPath local_38;
  
  if ((this->PhasingVolumeTable).field0_0x0.DebugPtr != (UDataTable *)0x0) {
    return;
  }
  local_res8[0] = (FName)((ulonglong)local_res8[0] & 0xffffffffffffff00);
  UDS_CommonSetting::GetClientTablePath(&local_38,(EDS_ClientResourceType *)local_res8);
  if (local_38.AssetPath.PackageName == (FName)0x0) goto LAB_14bb17a0d;
  this_00 = (UDataTable *)FSoftObjectPath::TryLoad(&local_38,(FUObjectSerializeContext *)0x0);
  if (this_00 == (UDataTable *)0x0) {
LAB_14bb178ff:
    this_00 = (UDataTable *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UDataTable_NoRegister();
    iVar2 = (int)pUVar3->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar3->_padding_)) goto LAB_14bb178ff;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (this_00 == (UDataTable *)0x0)) {
    (this->PhasingVolumeTable).field0_0x0.DebugPtr = this_00;
    if (this_00 == (UDataTable *)0x0) goto LAB_14bb17a0d;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)this_00);
    (this->PhasingVolumeTable).field0_0x0.DebugPtr = this_00;
  }
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  local_res8[0] = (FName)this_00->_padding_;
  ::FName::ToString(local_res8,(FString *)local_48);
  pFVar5 = (FScriptContainerElement *)L"";
  if (local_48._8_4_ != 0) {
    pFVar5 = (FScriptContainerElement *)local_48._0_8_;
  }
  UDataTable::GetAllRows<FWN_PhasingVolumeInfo>(this_00,(wchar_t *)pFVar5,&local_58);
  if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_48._0_8_);
  }
  TSet<TTuple<int,FWN_PhasingVolumeInfo_*>,TDefaultMapHashableKeyFuncs<int,FWN_PhasingVolumeInfo_*,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<int,FWN_PhasingVolumeInfo_*>,TDefaultMapHashableKeyFuncs<int,FWN_PhasingVolumeInfo_*,0>,FDefaultSetAllocator>
             *)&this->PhasingVolumeTableRowMap,local_58.ArrayNum);
  iVar2 = local_58.ArrayNum;
  uVar4 = (ulonglong)local_58.ArrayNum;
  pFVar1 = (FName *)(local_58.AllocatorInstance.Data + uVar4 * 8);
  FVar6.Data = local_58.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar4 != iVar2) {
      `TCheckedPointerIterator<FWN_PhasingVolumeInfo_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (((FName *)FVar6.Data == pFVar1) ||
       (local_res8[0] = *(FName *)FVar6.Data, local_res8[0] == (FName)0x0)) break;
    local_48._0_8_ = (longlong)local_res8[0] + 8;
    local_48._8_8_ = local_res8;
    TSet<TTuple<int,FWN_PhasingVolumeInfo_*>,TDefaultMapHashableKeyFuncs<int,FWN_PhasingVolumeInfo_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_&,FWN_PhasingVolumeInfo_*_&>_>
              ((TSet<TTuple<int,FWN_PhasingVolumeInfo_*>,TDefaultMapHashableKeyFuncs<int,FWN_PhasingVolumeInfo_*,0>,FDefaultSetAllocator>
                *)&this->PhasingVolumeTableRowMap,
               (TPairInitializer<int_&,FWN_PhasingVolumeInfo_*_&> *)(local_res8 + 1),
               (bool *)local_48);
    uVar4 = local_58._8_8_ & 0xffffffff;
    FVar6.Data = FVar6.Data + 8;
  }
  if ((FName *)local_58.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
LAB_14bb17a0d:
  if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// OnAddQuestData @ 14bb1a630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_PhasingManager::OnAddQuestData(UDS_PhasingManager *this,int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  bool bVar8;
  UDS_QuestManager *pUVar9;
  UDS_LogManager *pUVar10;
  UDS_DataSetBase *this_00;
  ulong64 uVar11;
  FDS_QuestBaseTableRow *pFVar12;
  FDS_QuestObjectiveTableRow *pFVar13;
  UDS_QuestData *this_01;
  FDS_QuestPhasingInfo *pFVar14;
  undefined1 *puVar15;
  FDS_QuestObjectivePhasingInfo *pFVar16;
  FDS_QuestObjectivePhasingInfo *pFVar17;
  int iVar18;
  undefined1 auStackY_278 [32];
  uint local_238 [2];
  FWeakObjectPtr local_230;
  undefined1 local_228 [8];
  FWeakObjectPtr local_220;
  undefined1 local_218 [16];
  FDS_QuestObjectivePhasingInfo *local_208;
  uint *local_200;
  uint *local_1f8;
  FDS_QuestObjectivePhasingInfo *local_1f0;
  FWeakObjectPtr *local_1e8;
  uint local_1d8 [2];
  ForAnyElementType local_1d0;
  undefined8 local_1c8;
  TBitArray<FDefaultBitArrayAllocator> local_1c0;
  undefined8 uStack_1a0;
  void *local_190;
  undefined4 local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_238[0] = param_1;
  pUVar9 = UDS_QuestManager::GetInst();
  uVar7 = local_238[0];
  if (pUVar9 == (UDS_QuestManager *)0x0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar10 = UDS_LogManager::GetInst();
    local_178._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_178,"UDS_PhasingManager::OnAddQuestData",0x22,Yes);
    UDS_LogManager::PrintLog(pUVar10,1,Warning,local_178.Ptr,0x11b,L"questMng is nullptr.");
    if ((void *)local_178._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_178._padding_);
    return;
  }
  TDS_DataSetGetter<UDS_QuestDataSet>::Get((ulong64)&local_220);
  bVar8 = FWeakObjectPtr::IsValid(&local_220);
  if (bVar8) {
    this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_220);
    uVar11 = UDS_DataSetBase::GetEntityID(this_00);
    UDS_QuestData::GetData((ulong64)(local_218 + 8),uVar11,SUB41(uVar7,0));
    bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_218 + 8));
    if (bVar8) {
      local_230.ObjectIndex = local_218._8_4_;
      local_230.ObjectSerialNumber = local_218._12_4_;
      goto LAB_14bb1a76f;
    }
  }
  local_230.ObjectIndex = 0;
  local_230.ObjectSerialNumber = 0;
  local_218._0_8_ = (int *)0x0;
  FWeakObjectPtr::operator=(&local_230,(FObjectPtr)local_218);
LAB_14bb1a76f:
  bVar8 = TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr> *)&local_230,(void *)0x0);
  if (bVar8) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 != (UDS_LogManager *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"UDS_PhasingManager::OnAddQuestData",0x22,Yes);
      UDS_LogManager::PrintLog(pUVar10,1,Warning,local_178.Ptr,0x122,L"questData is nullptr. (%d)");
      if ((void *)local_178._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
    }
  }
  else {
    pFVar12 = FDS_QuestBaseTableRow::Get((longlong)(int)local_238[0],true);
    uVar6 = _UNK_150631d98;
    uVar4 = ___xmm_00000000ffffffff0000008000000000;
    if (pFVar12 == (FDS_QuestBaseTableRow *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      if (pUVar10 != (UDS_LogManager *)0x0) {
        pUVar10 = UDS_LogManager::GetInst();
        local_178._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_178,"UDS_PhasingManager::OnAddQuestData",0x22,Yes);
        UDS_LogManager::PrintLog
                  (pUVar10,1,Warning,local_178.Ptr,0x129,L"questBaseTableRow is nullptr. (%d)");
        if ((void *)local_178._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_178._padding_);
        }
      }
    }
    else {
      pFVar16 = (FDS_QuestObjectivePhasingInfo *)
                (pFVar12->ID_QuestObjectiveId).AllocatorInstance.Data;
      iVar1 = (pFVar12->ID_QuestObjectiveId).ArrayNum;
      pFVar17 = (FDS_QuestObjectivePhasingInfo *)(&pFVar16->QuestObjectiveID + iVar1);
      local_208 = pFVar17;
      while( true ) {
        if ((pFVar12->ID_QuestObjectiveId).ArrayNum != iVar1) {
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_228);
        }
        if (pFVar16 == pFVar17) {
          return;
        }
        pFVar13 = FDS_QuestObjectiveTableRow::Get((longlong)pFVar16->QuestObjectiveID,true);
        if (pFVar13 == (FDS_QuestObjectiveTableRow *)0x0) break;
        if (pFVar13->QuestDefineType == PhasingClearProgressEnter) {
          this_01 = (UDS_QuestData *)FWeakObjectPtr::Get(&local_230);
          bVar8 = UDS_QuestData::IsGoalQuestObjective(this_01,pFVar16->QuestObjectiveID);
          uVar5 = ___xmm_00000000ffffffff0000008000000000;
          if (!bVar8) {
            if (*(int *)&(this->QuestPhasingInfoMap).field_0x8 !=
                *(int *)&(this->QuestPhasingInfoMap).field_0x34) {
              puVar2 = *(undefined1 **)&(this->QuestPhasingInfoMap).field_0x40;
              puVar15 = &(this->QuestPhasingInfoMap).field_0x38;
              if (puVar2 != (undefined1 *)0x0) {
                puVar15 = puVar2;
              }
              iVar18 = *(int *)(puVar15 +
                               (ulonglong)
                               (*(int *)&(this->QuestPhasingInfoMap).field_0x48 - 1U & local_238[0])
                               * 4);
              if (iVar18 != -1) {
                do {
                  if (*(uint *)((longlong)iVar18 * 0x68 + *(longlong *)&this->QuestPhasingInfoMap)
                      == local_238[0]) {
                    if (iVar18 != -1) goto LAB_14bb1aa74;
                    break;
                  }
                  iVar18 = *(int *)((longlong)iVar18 * 0x68 + 0x60 +
                                   *(longlong *)&this->QuestPhasingInfoMap);
                } while (iVar18 != -1);
              }
            }
            local_200 = local_238;
            local_1d8[0] = local_238[0];
            local_1f8 = local_1d8;
            local_1d0.Data = (FScriptContainerElement *)0x0;
            local_1c8 = 0;
            local_1c0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
            ___xmm_00000000ffffffff0000008000000000 = (int)uVar4;
            _UNK_150631d94 = SUB84(uVar4,4);
            local_1c0.NumBits = ___xmm_00000000ffffffff0000008000000000;
            local_1c0.MaxBits = _UNK_150631d94;
            uStack_1a0 = uVar6;
            local_190 = (void *)0x0;
            local_188 = 0;
            ___xmm_00000000ffffffff0000008000000000 = uVar5;
            TSet<TTuple<int,FDS_QuestPhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestPhasingInfo,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<int_const_&,FDS_QuestPhasingInfo_&>_>
                      ((TSet<TTuple<int,FDS_QuestPhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestPhasingInfo,0>,FDefaultSetAllocator>
                        *)&this->QuestPhasingInfoMap,
                       (TPairInitializer<int_const_&,FDS_QuestPhasingInfo_&> *)local_218,
                       (bool *)&local_200);
            local_188 = 0;
            if (local_190 != (void *)0x0) {
              FMemory::Free(local_190);
            }
            uVar3 = local_1c8 >> 0x20;
            local_1c8 = local_1c8 & 0xffffffff00000000;
            if ((int)uVar3 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x14,4,0,&local_1d0,0,(int *)((longlong)&local_1c8 + 4));
            }
            iVar18 = local_1c0.MaxBits;
            uStack_1a0 = 0xffffffff;
            local_1c0._24_8_ = (ulonglong)(uint)local_1c0.MaxBits << 0x20;
            if (0x80 < (uint)iVar18) {
              local_1c0.NumBits = 0;
              local_1c0.MaxBits = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_1c0,0);
            }
            if (local_1c0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FMemory::Free((void *)local_1c0.AllocatorInstance.SecondaryData);
            }
            if (local_1d0.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1d0.Data);
            }
LAB_14bb1aa74:
            pFVar14 = TMapBase<int,FDS_QuestPhasingInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_QuestPhasingInfo,0>_>
                      ::FindChecked((TMapBase<int,FDS_QuestPhasingInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_QuestPhasingInfo,0>_>
                                     *)&this->QuestPhasingInfoMap,local_238[0]);
            local_220.ObjectIndex = pFVar16->QuestObjectiveID;
            local_220.ObjectSerialNumber = pFVar13->QuestDefineTarget;
            local_1e8 = &local_220;
            local_1f0 = pFVar16;
            TSet<TTuple<int,FDS_QuestObjectivePhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestObjectivePhasingInfo,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<int_const_&,FDS_QuestObjectivePhasingInfo_&>_>
                      ((TSet<TTuple<int,FDS_QuestObjectivePhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestObjectivePhasingInfo,0>,FDefaultSetAllocator>
                        *)&pFVar14->QuestObjectivePhasingInfoMap,
                       (TPairInitializer<int_const_&,FDS_QuestObjectivePhasingInfo_&> *)
                       (local_218 + 8),(bool *)&local_1f0);
            SpawnPhasingVolumeActor
                      (this,local_220.ObjectSerialNumber,&pFVar13->ProgressCoordinate,
                       (float)pFVar13->QuestDefineParameter);
            pFVar17 = local_208;
          }
        }
        pFVar16 = (FDS_QuestObjectivePhasingInfo *)&pFVar16->PhasingID;
      }
      pUVar10 = UDS_LogManager::GetInst();
      if (pUVar10 != (UDS_LogManager *)0x0) {
        pUVar10 = UDS_LogManager::GetInst();
        local_178._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_178,"UDS_PhasingManager::OnAddQuestData",0x22,Yes);
        UDS_LogManager::PrintLog
                  (pUVar10,1,Warning,local_178.Ptr,0x133,
                   L"questObjectiveTableRow is nullptr. (QuestID:%d, QuestObjectiveID:%d)");
        if ((void *)local_178._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_178._padding_);
        }
      }
    }
  }
  return;
}

// OnCompletePreloadPhasingVolumeBP @ 14bb1cfe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_PhasingManager::OnCompletePreloadPhasingVolumeBP(UDS_PhasingManager *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_2b8 [32];
  EDS_ClientResourceType local_288 [8];
  FSoftObjectPath local_280;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_288[0] = Phasing;
  UDS_CommonSetting::GetClientBPPath(&local_280,local_288);
  if (local_280.AssetPath.PackageName == (FName)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_258._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_258,"UDS_PhasingManager::OnCompletePreloadPhasingVolumeBP",0x34,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_258.Ptr,0x391,L"phasingVolumeBPPath is Invalid.");
      if ((void *)local_258._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_258._padding_);
      }
    }
  }
  else {
    pUVar4 = FSoftObjectPath::ResolveObject(&local_280);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar4 == (UObject *)0x0)) {
      (this->PhasingVolumeBP).field0_0x0.DebugPtr = pUVar4;
      if (pUVar4 == (UObject *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_PhasingManager::OnCompletePreloadPhasingVolumeBP",0x34,Yes);
          UDS_LogManager::PrintLog
                    (pUVar3,1,Warning,local_138.Ptr,0x398,L"PhasingVolumeBP is nullptr.");
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8418862368108313703>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_PhasingManager.cpp"
                           ,0x399,"false");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else {
      UE::GC::MarkAsReachable(pUVar4);
      (this->PhasingVolumeBP).field0_0x0.DebugPtr = pUVar4;
    }
  }
  if (local_280.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// OnDespawnedPhasingVolume @ 14bb1d820

void __thiscall
UDS_PhasingManager::OnDespawnedPhasingVolume
          (UDS_PhasingManager *this,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr> param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  AWN_PhasingVolume *this_00;
  undefined1 *puVar5;
  FWeakObjectPtr local_res10;
  uint local_res18 [4];
  
  local_res10 = param_1.WeakPtr;
  bVar2 = TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (!bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar4 + 0x13),this);
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[0x13].field_0x20,this);
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[0x14].field_0x18,this);
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[0x15].field_0x10,this);
    this_00 = (AWN_PhasingVolume *)FWeakObjectPtr::Get(&local_res10);
    local_res18[0] = AWN_PhasingVolume::GetPhasingId(this_00);
    if (*(int *)&(this->PhasingVolumeMap).field_0x8 != *(int *)&(this->PhasingVolumeMap).field_0x34)
    {
      puVar5 = *(undefined1 **)&(this->PhasingVolumeMap).field_0x40;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &(this->PhasingVolumeMap).field_0x38;
      }
      iVar3 = *(int *)(puVar5 + (ulonglong)
                                (*(int *)&(this->PhasingVolumeMap).field_0x48 - 1U & local_res18[0])
                                * 4);
      if (iVar3 != -1) {
        lVar1 = *(longlong *)&(this->PhasingVolumeMap).field_0x0;
        while (*(uint *)(lVar1 + (longlong)iVar3 * 0x14) != local_res18[0]) {
          iVar3 = *(int *)(lVar1 + 0xc + (longlong)iVar3 * 0x14);
          if (iVar3 == -1) {
            return;
          }
        }
        TSet<TTuple<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::RemoveImpl<int>((TSet<TTuple<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                           *)&this->PhasingVolumeMap,local_res18[0],(int *)local_res18);
      }
    }
  }
  return;
}

// OnEnterSphereCollisionBeginOverlap @ 14bb1e070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_PhasingManager::OnEnterSphereCollisionBeginOverlap
          (UDS_PhasingManager *this,AActor *param_1,AWN_PhasingVolume *param_2)

{
  UDS_LogManager *pUVar1;
  FTimerManager *this_00;
  undefined1 auStackY_188 [32];
  AWN_PhasingVolume *local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (param_2 == (AWN_PhasingVolume *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_PhasingManager::OnEnterSphereCollisionBeginOverlap",0x36,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x193,L"Invalid PhasingVolume.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    local_148[0] = param_2;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=
              (&(this->PhasingVolume_EnterSphereCollisionOverlapped).WeakPtr,(FObjectPtr)local_148);
    if ((this->CheckAbleEnterPhasingTimer).Handle == 0) {
      this_00 = FDS_TimerManager::Get((UObject *)0x0);
      FTimerManager::SetTimer<UDS_PhasingManager>
                (this_00,&this->CheckAbleEnterPhasingTimer,this,(pmf_cc577572)0x14baf6550,
                 __real_3dcccccd,true,__real_bf800000);
    }
  }
  return;
}

// OnEnterSphereCollisionEndOverlap @ 14bb1e1d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_PhasingManager::OnEnterSphereCollisionEndOverlap
          (UDS_PhasingManager *this,AActor *param_1,AWN_PhasingVolume *param_2)

{
  FTimerManager *this_00;
  FTimerData *pFVar1;
  FWeakObjectPtr local_res8;
  undefined8 local_res20;
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res20 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
  (this->PhasingVolume_EnterSphereCollisionOverlapped).WeakPtr = local_res8;
  if ((this->CheckAbleEnterPhasingTimer).Handle != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar1 = FTimerManager::FindTimer(this_00,&this->CheckAbleEnterPhasingTimer);
    if (pFVar1 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer
                (this_00,(FTimerHandle)(this->CheckAbleEnterPhasingTimer).Handle);
    }
    (this->CheckAbleEnterPhasingTimer).Handle = 0;
  }
  return;
}

// OnOpenPhasingComplete @ 14bb20040

void __thiscall
UDS_PhasingManager::OnOpenPhasingComplete
          (UDS_PhasingManager *this,UDS_UserWidget *param_1,bool param_2,
          EDS_PhasingContentsType param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  bool bVar3;
  FDS_ViewModelContext *pFVar4;
  UScriptStruct *pUVar5;
  UDS_ViewModelContextManager *this_00;
  FDS_ViewModelContext *pFVar6;
  FDS_ViewModelContext *pFVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  FWeakObjectPtr local_res10;
  UDS_UserWidget *local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_40;
  TSharedPtr<FDS_ViewModelContext,1> local_30;
  
  if (param_1 != (UDS_UserWidget *)0x0) {
    uVar2 = (ulonglong)param_2;
    pFVar4 = ::operator_new(0x48);
    pFVar7 = (FDS_ViewModelContext *)0x0;
    pFVar6 = pFVar7;
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar4->ViewModelTemplateKey = 0;
      *(undefined2 *)((longlong)&pFVar4[1]._padding_ + 1) = 0;
      *(undefined1 *)((longlong)&pFVar4[1]._padding_ + 3) = 0;
      *(undefined8 *)&pFVar4->DerivedStaticStruct = 0;
      (pFVar4->ViewModelName).ComparisonIndex = 0;
      (pFVar4->ViewModelName).Number = 0;
      pFVar4->_padding_ = (longlong)&___7FDS_ViewModelContext_PhasingCompleteAlarm__6B_;
      *(undefined1 *)&pFVar4[1]._padding_ = 0;
      *(undefined4 *)((longlong)&pFVar4[1]._padding_ + 4) = 0;
      *(undefined8 *)&pFVar4[1].DerivedStaticStruct = 0;
      pFVar4[1].ViewModelName.ComparisonIndex = 0;
      pFVar4[1].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar4[1].ViewModelTemplateKey = 0;
      pFVar4[2]._padding_ = 0;
      pFVar6 = pFVar4;
    }
    pFVar4 = ::operator_new(0x20);
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar4->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar4->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar4->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_PhasingCompleteAlarm__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar4->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar4->ViewModelTemplateKey = pFVar6;
      pFVar7 = pFVar4;
    }
    if ((pFVar6 == (FDS_ViewModelContext *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar5 = FDS_ViewModelContext_PhasingCompleteAlarm::StaticStruct();
    *(UScriptStruct **)&pFVar6->DerivedStaticStruct = pUVar5;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar7 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar7->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_40.Object = pFVar6;
      local_40.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
      UDS_ViewModelContextManager::RegisterContext(this_00,&local_40);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.SharedReferenceCount.ReferenceController);
    }
    pFVar6->ViewModelTemplateKey = W_Hud_PhasingCompleteAlarm;
    *(bool *)&pFVar6[1]._padding_ = param_2;
    uVar10 = (uint)param_2;
    if (param_3 == Breach) {
      lVar8 = (uVar2 ^ 1) + 0x5cc69;
      lVar9 = (uVar2 ^ 1) + 0x8d;
      iVar11 = (uVar10 ^ 1) + 0x3a983;
    }
    else if (param_3 == Gate) {
      lVar8 = (uVar2 ^ 1) + 0x5cc69;
      lVar9 = (uVar2 ^ 1) + 0x8d;
      iVar11 = (uVar10 ^ 1) + 0x3a985;
    }
    else if (param_3 == Quest) {
      lVar8 = (uVar2 ^ 1) + 0x8f;
      lVar9 = (uVar2 ^ 1) + 0xebaa;
      iVar11 = (uVar10 ^ 1) + 0x3a987;
    }
    else if (param_2) {
      lVar8 = 0x8f;
      lVar9 = 0x8d;
      iVar11 = 0x3a981;
    }
    else {
      lVar8 = 0x90;
      lVar9 = 0x8e;
      iVar11 = 0x3a982;
    }
    *(int *)((longlong)&pFVar6[1]._padding_ + 4) = iVar11;
    *(longlong *)&pFVar6[1].DerivedStaticStruct = lVar9;
    pFVar6[1].ViewModelName.ComparisonIndex = (FNameEntryId)(int)lVar8;
    pFVar6[1].ViewModelName.Number = (int)((ulonglong)lVar8 >> 0x20);
    if (pFVar7 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar7->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_30.Object = pFVar6;
    local_30.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_48 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_48);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10,&local_30,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar7);
  }
  return;
}

// OnOutSphereCollisionBeginOverlap @ 14bb20630

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_PhasingManager::OnOutSphereCollisionBeginOverlap
          (UDS_PhasingManager *this,AActor *param_1,AWN_PhasingVolume *param_2)

{
  bool bVar1;
  AWN_PhasingVolume *this_00;
  FWeakObjectPtr local_res8;
  undefined8 local_res20;
  
  bVar1 = TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>::UEOpEquals
                    (&this->PhasingVolume_InProgress,(void *)0x0);
  if (!bVar1) {
    this_00 = (AWN_PhasingVolume *)FWeakObjectPtr::Get(&(this->PhasingVolume_InProgress).WeakPtr);
    local_res8 = (FWeakObjectPtr)((ulonglong)local_res8 & 0xffffffffffffff00);
    AWN_PhasingVolume::ActivateBlockingBoxCollision(this_00,(bool *)&local_res8);
    this->bIsPhasingVolumeEndOverlap = false;
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res20 = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
    (this->PhasingVolumeEndOverlappedActor).WeakPtr = local_res8;
  }
  return;
}

// OnOutSphereCollisionEndOverlap @ 14bb206b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_PhasingManager::OnOutSphereCollisionEndOverlap
          (UDS_PhasingManager *this,AActor *param_1,AWN_PhasingVolume *param_2)

{
  bool bVar1;
  AWN_PhasingVolume *this_00;
  AActor *local_res8;
  
  bVar1 = TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>::UEOpEquals
                    (&this->PhasingVolume_InProgress,(void *)0x0);
  if (!bVar1) {
    this_00 = (AWN_PhasingVolume *)FWeakObjectPtr::Get(&(this->PhasingVolume_InProgress).WeakPtr);
    local_res8 = (AActor *)CONCAT71(local_res8._1_7_,1);
    AWN_PhasingVolume::ActivateBlockingBoxCollision(this_00,(bool *)&local_res8);
    this->bIsPhasingVolumeEndOverlap = true;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=
              (&(this->PhasingVolumeEndOverlappedActor).WeakPtr,(FObjectPtr)&local_res8);
  }
  return;
}

// OnPartyCreateForBreach @ 14bb20900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_PhasingManager::OnPartyCreateForBreach(UDS_PhasingManager *this,ulong64 param_1,int param_2)

{
  bool bVar1;
  FDS_EntityBase *this_00;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_188 [32];
  uint uVar3;
  wchar_t *pwVar4;
  ulong64 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_148[0] = param_1;
  this_00 = FDS_EntityBase::GetEntityBase(local_148);
  if (this_00 == (FDS_EntityBase *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_PhasingManager::OnPartyCreateForBreach",0x2a,Yes);
    pwVar4 = L"breachEntity is nullptr. (%llu)";
    uVar3 = 0x204;
  }
  else {
    bVar1 = FDS_EntityBase::IsGate(this_00);
    if (bVar1) {
      bVar1 = FDS_PhasingService::RequestBreachEnter(local_148,param_2);
      if (bVar1) {
        return;
      }
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_PhasingManager::OnPartyCreateForBreach",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x210,
                 L"Failed to RequestBreachEnter(%llu). InteractionID: %d");
      goto LAB_14bb20ab6;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_PhasingManager::OnPartyCreateForBreach",0x2a,Yes);
    pwVar4 = L"breachEntity is not Breach(Gate). (%llu)";
    uVar3 = 0x20a;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar3,pwVar4);
LAB_14bb20ab6:
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OnRemoveQuestData @ 14bb21c00

void __thiscall UDS_PhasingManager::OnRemoveQuestData(UDS_PhasingManager *this,int param_1)

{
  TMap<int,FDS_QuestPhasingInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_QuestPhasingInfo,0>_>
  *this_00;
  TMap<int,FDS_QuestObjectivePhasingInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_QuestObjectivePhasingInfo,0>_>
  *pTVar1;
  longlong lVar2;
  int iVar3;
  FDS_QuestPhasingInfo *pFVar4;
  UDS_PhasingManager *this_01;
  ulonglong uVar5;
  undefined1 *puVar6;
  uint uVar7;
  int local_res10 [2];
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<int,FDS_QuestObjectivePhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestObjectivePhasingInfo,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<int,FDS_QuestObjectivePhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestObjectivePhasingInfo,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<int,FDS_QuestObjectivePhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestObjectivePhasingInfo,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  this_00 = &this->QuestPhasingInfoMap;
  if (*(int *)&(this->QuestPhasingInfoMap).field_0x8 !=
      *(int *)&(this->QuestPhasingInfoMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->QuestPhasingInfoMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->QuestPhasingInfoMap).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->QuestPhasingInfoMap).field_0x48 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      while (*(int *)((longlong)iVar3 * 0x68 + *(longlong *)&this_00->field_0x0) != param_1) {
        iVar3 = *(int *)((longlong)iVar3 * 0x68 + 0x60 + *(longlong *)&this_00->field_0x0);
        if (iVar3 == -1) {
          return;
        }
      }
      pFVar4 = TMapBase<int,FDS_QuestPhasingInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_QuestPhasingInfo,0>_>
               ::FindChecked((TMapBase<int,FDS_QuestPhasingInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_QuestPhasingInfo,0>_>
                              *)this_00,param_1);
      pTVar1 = &pFVar4->QuestObjectivePhasingInfoMap;
      TSet<TTuple<int,FDS_QuestObjectivePhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestObjectivePhasingInfo,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_78,
                 (TSet<TTuple<int,FDS_QuestObjectivePhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestObjectivePhasingInfo,0>,FDefaultSetAllocator>
                  *)pTVar1);
      local_10 = 0;
      stack0xffffffffffffffc8 = local_78._16_16_;
      local_48 = (longlong *)local_78._0_8_;
      auStack_40._0_8_ = local_78._8_8_;
      local_28 = local_58;
      pTStack_20 = pTStack_50;
      uVar5 = local_78._24_8_ >> 0x20;
      local_18 = (TSet<TTuple<int,FDS_QuestObjectivePhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestObjectivePhasingInfo,0>,FDefaultSetAllocator>
                  *)pTVar1;
      if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
        do {
          lVar2 = *local_48;
          this_01 = GetInst();
          if (this_01 != (UDS_PhasingManager *)0x0) {
            DestroyPhasingVolumeActor(this_01,*(int *)(lVar2 + (longlong)(int)uVar5 * 0x14 + 8));
          }
          uStack_30 = uStack_30 & ~auStack_40._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
          uVar5 = (ulonglong)uStack_2c;
        } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
        if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
          uVar7 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34
          ;
          if (uVar7 < 4) {
            iVar3 = 1;
          }
          else {
            uVar5 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
            lVar2 = 0x3f;
            if (uVar5 != 0) {
              for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
              }
            }
            iVar3 = 1 << ((byte)lVar2 & 0x1f);
          }
          if (((0 < (int)uVar7) && (local_18->HashSize < iVar3)) || (iVar3 < local_18->HashSize)) {
            local_18->HashSize = iVar3;
            TSet<TTuple<int,FDS_QuestObjectivePhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestObjectivePhasingInfo,0>,FDefaultSetAllocator>
            ::Rehash(local_18);
          }
        }
      }
      if (*(int *)&(this->QuestPhasingInfoMap).field_0x8 !=
          *(int *)&(this->QuestPhasingInfoMap).field_0x34) {
        local_res10[0] = param_1;
        TSet<TTuple<int,FDS_QuestPhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestPhasingInfo,0>,FDefaultSetAllocator>
        ::RemoveImpl<int>((TSet<TTuple<int,FDS_QuestPhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestPhasingInfo,0>,FDefaultSetAllocator>
                           *)this_00,param_1,local_res10);
      }
    }
  }
  return;
}

// OnSpawnedPhasingVolume @ 14bb22f10

void __thiscall
UDS_PhasingManager::OnSpawnedPhasingVolume
          (UDS_PhasingManager *this,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UObject *pUVar2;
  AWN_PhasingVolume *pAVar3;
  FWeakObjectPtr local_res10;
  TPairInitializer<int_&,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>_&> local_res18;
  TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr> **local_18;
  FWeakObjectPtr *local_10;
  
  local_res10 = param_1.WeakPtr;
  bVar1 = TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res10);
    TMulticastDelegateRegistration<void___cdecl(AActor_*,AWN_PhasingVolume_*),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_PhasingManager>
              ((TMulticastDelegateRegistration<void___cdecl(AActor_*,AWN_PhasingVolume_*),FDefaultDelegateUserPolicy>
                *)(pUVar2 + 0x13),(UDS_PhasingManager *)&local_res18,(pmf_3b6fbc9d)this);
    pUVar2 = FWeakObjectPtr::Get(&local_res10);
    TMulticastDelegateRegistration<void___cdecl(AActor_*,AWN_PhasingVolume_*),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_PhasingManager>
              ((TMulticastDelegateRegistration<void___cdecl(AActor_*,AWN_PhasingVolume_*),FDefaultDelegateUserPolicy>
                *)&pUVar2[0x13].field_0x20,(UDS_PhasingManager *)&local_res18,(pmf_3b6fbc9d)this);
    pUVar2 = FWeakObjectPtr::Get(&local_res10);
    TMulticastDelegateRegistration<void___cdecl(AActor_*,AWN_PhasingVolume_*),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_PhasingManager>
              ((TMulticastDelegateRegistration<void___cdecl(AActor_*,AWN_PhasingVolume_*),FDefaultDelegateUserPolicy>
                *)&pUVar2[0x14].field_0x18,(UDS_PhasingManager *)&local_res18,(pmf_3b6fbc9d)this);
    pUVar2 = FWeakObjectPtr::Get(&local_res10);
    TMulticastDelegateRegistration<void___cdecl(AActor_*,AWN_PhasingVolume_*),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_PhasingManager>
              ((TMulticastDelegateRegistration<void___cdecl(AActor_*,AWN_PhasingVolume_*),FDefaultDelegateUserPolicy>
                *)&pUVar2[0x15].field_0x10,(UDS_PhasingManager *)&local_res18,(pmf_3b6fbc9d)this);
    pUVar2 = FWeakObjectPtr::Get(&local_res10);
    (**(code **)(*(longlong *)pUVar2 + 0x368))(pUVar2,1);
    pAVar3 = (AWN_PhasingVolume *)FWeakObjectPtr::Get(&local_res10);
    local_res18.Key._0_1_ = 1;
    AWN_PhasingVolume::ActivateEnterSphereCollisionOverlap(pAVar3,(bool *)&local_res18);
    pAVar3 = (AWN_PhasingVolume *)FWeakObjectPtr::Get(&local_res10);
    local_res18.Key._0_1_ = 0;
    AWN_PhasingVolume::ActivateOutSphereCollisionOverlap(pAVar3,(bool *)&local_res18);
    pAVar3 = (AWN_PhasingVolume *)FWeakObjectPtr::Get(&local_res10);
    local_res18.Key._0_1_ = 0;
    AWN_PhasingVolume::ActivateBlockingBoxCollision(pAVar3,(bool *)&local_res18);
    pAVar3 = (AWN_PhasingVolume *)FWeakObjectPtr::Get(&local_res10);
    local_res18.Value._0_4_ = AWN_PhasingVolume::GetPhasingId(pAVar3);
    local_18 = &local_res18.Value;
    local_10 = &local_res10;
    TSet<TTuple<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_&,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>_&>_>
              ((TSet<TTuple<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)&this->PhasingVolumeMap,&local_res18,(bool *)&local_18);
  }
  return;
}

// OnUpdateQuestData @ 14bb24e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_PhasingManager::OnUpdateQuestData(UDS_PhasingManager *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  UDS_QuestManager *pUVar5;
  UDS_LogManager *pUVar6;
  FDS_QuestPhasingInfo *pFVar7;
  UDS_QuestData *this_00;
  UDS_PhasingManager *this_01;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 auStackY_208 [32];
  FWeakObjectPtr local_1c8 [2];
  longlong *local_1b8;
  undefined1 auStack_1b0 [16];
  uint uStack_1a0;
  uint uStack_19c;
  longlong local_198;
  TSet<TTuple<int,FDS_QuestObjectivePhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestObjectivePhasingInfo,0>,FDefaultSetAllocator>
  *pTStack_190;
  TSet<TTuple<int,FDS_QuestObjectivePhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestObjectivePhasingInfo,0>,FDefaultSetAllocator>
  *local_188;
  char local_180;
  char cStack_17f;
  undefined1 local_178 [32];
  longlong local_158;
  TSet<TTuple<int,FDS_QuestObjectivePhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestObjectivePhasingInfo,0>,FDefaultSetAllocator>
  *pTStack_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if (*(int *)&(this->QuestPhasingInfoMap).field_0x8 !=
      *(int *)&(this->QuestPhasingInfoMap).field_0x34) {
    puVar8 = *(undefined1 **)&(this->QuestPhasingInfoMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->QuestPhasingInfoMap).field_0x38;
    }
    iVar9 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->QuestPhasingInfoMap).field_0x48 - 1U & param_1) * 4);
    if (iVar9 != -1) {
      lVar1 = *(longlong *)&this->QuestPhasingInfoMap;
      do {
        if (*(int *)((longlong)iVar9 * 0x68 + lVar1) == param_1) {
          pUVar5 = UDS_QuestManager::GetInst();
          if (pUVar5 == (UDS_QuestManager *)0x0) {
            pUVar6 = UDS_LogManager::GetInst();
            if (pUVar6 == (UDS_LogManager *)0x0) {
              return;
            }
            pUVar6 = UDS_LogManager::GetInst();
            local_148._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_148,"UDS_PhasingManager::OnUpdateQuestData",0x25,Yes);
            UDS_LogManager::PrintLog(pUVar6,1,Warning,local_148.Ptr,0x173,L"questMng is nullptr.");
          }
          else {
            UDS_QuestManager::GetQuestData((int)local_1c8);
            bVar4 = TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr> *)local_1c8,(void *)0x0
                              );
            if (!bVar4) {
              pFVar7 = TMapBase<int,FDS_QuestPhasingInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_QuestPhasingInfo,0>_>
                       ::FindChecked((TMapBase<int,FDS_QuestPhasingInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_QuestPhasingInfo,0>_>
                                      *)&this->QuestPhasingInfoMap,param_1);
              TSet<TTuple<int,FDS_QuestObjectivePhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestObjectivePhasingInfo,0>,FDefaultSetAllocator>
              ::TIterator::TIterator
                        ((TIterator *)local_178,
                         (TSet<TTuple<int,FDS_QuestObjectivePhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestObjectivePhasingInfo,0>,FDefaultSetAllocator>
                          *)&pFVar7->QuestObjectivePhasingInfoMap);
              local_180 = '\0';
              cStack_17f = '\0';
              stack0xfffffffffffffe58 = local_178._16_16_;
              local_1b8 = (longlong *)local_178._0_8_;
              auStack_1b0._0_8_ = local_178._8_8_;
              local_198 = local_158;
              pTStack_190 = pTStack_150;
              uVar10 = local_178._24_8_ >> 0x20;
              local_188 = (TSet<TTuple<int,FDS_QuestObjectivePhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestObjectivePhasingInfo,0>,FDefaultSetAllocator>
                           *)&pFVar7->QuestObjectivePhasingInfoMap;
              if (*(int *)(local_178._16_8_ + 0x18) <= local_178._28_4_) {
                return;
              }
              do {
                plVar3 = local_1b8;
                lVar2 = *local_1b8;
                this_00 = (UDS_QuestData *)FWeakObjectPtr::Get(local_1c8);
                lVar1 = (longlong)(int)uVar10 * 0x14;
                bVar4 = UDS_QuestData::IsGoalQuestObjective(this_00,*(int *)(lVar1 + lVar2));
                if (bVar4) {
                  lVar2 = *plVar3;
                  this_01 = GetInst();
                  if (this_01 != (UDS_PhasingManager *)0x0) {
                    DestroyPhasingVolumeActor(this_01,*(int *)(lVar2 + 8 + lVar1));
                  }
                  TSet<TTuple<int,FDS_QuestObjectivePhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestObjectivePhasingInfo,0>,FDefaultSetAllocator>
                  ::RemoveByIndex(pTStack_190,(int)uVar10);
                  local_180 = '\x01';
                }
                uStack_1a0 = uStack_1a0 & ~auStack_1b0._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1b0);
                uVar10 = (ulonglong)uStack_19c;
              } while ((int)uStack_19c < *(int *)(auStack_1b0._8_8_ + 0x18));
              if (local_180 == '\0') {
                return;
              }
              if (cStack_17f == '\0') {
                return;
              }
              iVar9 = 1;
              uVar11 = *(int *)&(local_188->Elements).field_0x8 -
                       *(int *)&(local_188->Elements).field_0x34;
              if (3 < uVar11) {
                uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
                lVar1 = 0x3f;
                if (uVar10 != 0) {
                  for (; uVar10 >> lVar1 == 0; lVar1 = lVar1 + -1) {
                  }
                }
                iVar9 = 1 << ((byte)lVar1 & 0x1f);
              }
              if ((((int)uVar11 < 1) || (iVar9 <= local_188->HashSize)) &&
                 (local_188->HashSize <= iVar9)) {
                return;
              }
              local_188->HashSize = iVar9;
              TSet<TTuple<int,FDS_QuestObjectivePhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestObjectivePhasingInfo,0>,FDefaultSetAllocator>
              ::Rehash(local_188);
              return;
            }
            pUVar6 = UDS_LogManager::GetInst();
            if (pUVar6 == (UDS_LogManager *)0x0) {
              return;
            }
            pUVar6 = UDS_LogManager::GetInst();
            local_148._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_148,"UDS_PhasingManager::OnUpdateQuestData",0x25,Yes);
            UDS_LogManager::PrintLog
                      (pUVar6,1,Warning,local_148.Ptr,0x17a,L"questData is nullptr. (%d)");
          }
          if ((void *)local_148._padding_ == (void *)0x0) {
            return;
          }
          FMemory::Free((void *)local_148._padding_);
          return;
        }
        iVar9 = *(int *)((longlong)iVar9 * 0x68 + 0x60 + lVar1);
      } while (iVar9 != -1);
    }
  }
  return;
}

// PhasingVolumeBlockingProcess @ 14bb26eb0

void __thiscall UDS_PhasingManager::PhasingVolumeBlockingProcess(UDS_PhasingManager *this)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  UObject *pUVar8;
  AWN_PhasingVolume *pAVar9;
  TVector<double> *pTVar10;
  float fVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_b0;
  double local_88;
  TVector<double> local_80 [5];
  
  bVar7 = TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>::UEOpEquals
                    (&this->PhasingVolume_InProgress,(void *)0x0);
  if ((!bVar7) &&
     (bVar7 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                        (&this->PhasingVolumeEndOverlappedActor,(void *)0x0), !bVar7)) {
    pUVar8 = FWeakObjectPtr::Get(&(this->PhasingVolumeEndOverlappedActor).WeakPtr);
    lVar1 = *(longlong *)(pUVar8 + 0xb);
    local_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    if (lVar1 != 0) {
      local_88 = *(double *)(lVar1 + 0x220);
      uVar13 = *(undefined4 *)(lVar1 + 0x210);
      uVar14 = *(undefined4 *)(lVar1 + 0x214);
      uVar15 = *(undefined4 *)(lVar1 + 0x218);
      uVar16 = *(undefined4 *)(lVar1 + 0x21c);
    }
    pAVar9 = (AWN_PhasingVolume *)FWeakObjectPtr::Get(&(this->PhasingVolume_InProgress).WeakPtr);
    pTVar10 = AWN_PhasingVolume::GetPhasingVolumeCenterPos(pAVar9,local_80);
    local_c8._s_0.Y = (double)CONCAT44(uVar16,uVar15) - (pTVar10->field0_0x0)._s_0.Y;
    local_c8._s_0.X = (double)CONCAT44(uVar14,uVar13) - (pTVar10->field0_0x0)._s_0.X;
    local_c8._s_0.Z = local_88 - (pTVar10->field0_0x0)._s_0.Z;
    dVar12 = local_c8._s_0.X * local_c8._s_0.X + local_c8._s_0.Y * local_c8._s_0.Y +
             local_c8._s_0.Z * local_c8._s_0.Z;
    if (__real_3e45798ee0000000 < dVar12) {
      dVar12 = __real_3ff0000000000000 / SQRT(dVar12);
      local_c8._s_0.X = local_c8._s_0.X * dVar12;
      local_c8._s_0.Y = dVar12 * local_c8._s_0.Y;
      local_c8._s_0.Z = dVar12 * local_c8._s_0.Z;
    }
    pAVar9 = (AWN_PhasingVolume *)FWeakObjectPtr::Get(&(this->PhasingVolume_InProgress).WeakPtr);
    fVar11 = AWN_PhasingVolume::GetBlockingBoxCollisionLocationOffset(pAVar9);
    dVar3 = (double)fVar11;
    dVar12 = dVar3 * local_c8._s_0.X;
    dVar2 = dVar3 * local_c8._s_0.Y;
    dVar3 = dVar3 * local_c8._s_0.Z;
    pAVar9 = (AWN_PhasingVolume *)FWeakObjectPtr::Get(&(this->PhasingVolume_InProgress).WeakPtr);
    pTVar10 = AWN_PhasingVolume::GetPhasingVolumeCenterPos(pAVar9,local_80);
    local_b0._s_0.X = dVar12 + (pTVar10->field0_0x0)._s_0.X;
    local_b0._s_0.Y = dVar2 + (pTVar10->field0_0x0)._s_0.Y;
    local_b0._s_0.Z = dVar3 + (pTVar10->field0_0x0)._s_0.Z;
    dVar6 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * __real_3fe6a09e6ecb41fe;
    dVar5 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X * __real_3fe6a09e6ecb41fe;
    dVar2 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z * __real_3fe6a09e6ecb41fe;
    dVar4 = dVar6 * local_c8._s_0.Z - dVar2 * local_c8._s_0.Y;
    dVar4 = dVar4 + dVar4;
    dVar3 = dVar2 * local_c8._s_0.X - dVar5 * local_c8._s_0.Z;
    dVar3 = dVar3 + dVar3;
    dVar12 = dVar5 * local_c8._s_0.Y - dVar6 * local_c8._s_0.X;
    dVar12 = dVar12 + dVar12;
    local_c8._s_0.X =
         (dVar12 * dVar6 - dVar3 * dVar2) + dVar4 * __real_3fe6a09e5e333598 + local_c8._s_0.X;
    local_c8._s_0.Y =
         (dVar4 * dVar2 - dVar12 * dVar5) + dVar3 * __real_3fe6a09e5e333598 + local_c8._s_0.Y;
    local_c8._s_0.Z =
         (dVar3 * dVar5 - dVar4 * dVar6) + dVar12 * __real_3fe6a09e5e333598 + local_c8._s_0.Z;
    pAVar9 = (AWN_PhasingVolume *)FWeakObjectPtr::Get(&(this->PhasingVolume_InProgress).WeakPtr);
    AWN_PhasingVolume::SetBlockingBoxCollisionTransform
              (pAVar9,(TVector<double> *)&local_b0._s_0,(TVector<double> *)&local_c8._s_0);
  }
  return;
}

// PreDestroyed @ 14bb27650

void __thiscall UDS_PhasingManager::PreDestroyed(UDS_PhasingManager *this)

{
  UDS_QuestEvent *pUVar1;
  
  *(undefined1 *)&this->_padding_ = 1;
  (**(code **)(this->_padding_ + 0x2d0))();
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnAddQuestDataDelegate
               ,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnRemoveQuestDataDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdateQuestDataDelegate,this);
  }
  return;
}

// PreloadPhasingVolumeBP @ 14bb276d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_PhasingManager::PreloadPhasingVolumeBP(UDS_PhasingManager *this)

{
  int iVar1;
  UDS_LogManager *pUVar2;
  UAssetManager *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStackY_248 [32];
  EDS_ClientResourceType local_1f8 [8];
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_1f0;
  undefined1 local_1e0 [8];
  FDelegateAllocation local_1d8;
  undefined1 local_1c8 [24];
  UDS_PhasingManager *local_1b0;
  FString local_1a8;
  undefined1 local_198 [16];
  char *local_188;
  FDelegateAllocation *local_180;
  FSoftObjectPath local_178;
  TSharedPtr<FStreamableHandle,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_1f8[0] = Phasing;
  UDS_CommonSetting::GetClientBPPath(&local_178,local_1f8);
  if (local_178.AssetPath.PackageName == (FName)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) goto LAB_14bb27a15;
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_PhasingManager::PreloadPhasingVolumeBP",0x2a,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Warning,local_148.Ptr,0x382,L"phasingVolumeBPPath is Invalid.");
    FVar6.Data = (FScriptContainerElement *)local_148._padding_;
  }
  else {
    local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f0.ArrayNum = 0;
    local_1f0.ArrayMax = 0;
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_1f0.AllocatorInstance,&local_1f0.ArrayMax);
    FVar6.Data = local_178.SubPathString.Data.AllocatorInstance.Data;
    local_1f0.ArrayNum = iVar1 + 1;
    *(FName *)&local_1f0.AllocatorInstance.Data[(longlong)iVar1 * 0x20].field_0x0 =
         local_178.AssetPath.PackageName;
    *(FName *)(local_1f0.AllocatorInstance.Data + (longlong)iVar1 * 0x20 + 8) =
         local_178.AssetPath.AssetName;
    pFVar7 = local_1f0.AllocatorInstance.Data + (longlong)iVar1 * 0x20 + 0x10;
    *(FScriptContainerElement **)pFVar7 = (FScriptContainerElement *)0x0;
    *(int *)(pFVar7 + 8) = local_178.SubPathString.Data.ArrayNum;
    if (local_178.SubPathString.Data.ArrayNum == 0) {
      *(int *)(pFVar7 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_178.SubPathString.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,
                 local_178.SubPathString.Data.ArrayNum,(int *)(pFVar7 + 0xc));
                    /* WARNING: Load size is inaccurate */
      memcpy(*pFVar7,FVar6.Data,(longlong)local_178.SubPathString.Data.ArrayNum);
    }
    pUVar3 = UAssetManager::Get();
    local_1c8._0_4_ = 0x389;
    local_1c8._4_4_ = 0x28;
    local_1c8._8_8_ =
         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_PhasingManager.cpp";
    local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8._16_8_ = "void __cdecl UDS_PhasingManager::PreloadPhasingVolumeBP(void)";
    local_1a8.Data.ArrayNum = 0;
    local_1a8.Data.ArrayMax = 0;
    local_1e0 = (undefined1  [8])0x0;
    local_1d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_1d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e0,
               (FWriteAccessScope *)local_198);
    local_180 = &local_1d8;
    puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_1d8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_PhasingManager____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_PhasingManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar4[3] = 0;
      local_1b0 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_PhasingManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_1b0);
      puVar4[4] = OnCompletePreloadPhasingVolumeBP;
    }
    if (local_188._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_198._8_8_,(FDestructionSentinel *)local_198);
    }
    local_198._4_4_ = local_1c8._4_4_;
    local_198._0_4_ = local_1c8._0_4_;
    local_198._8_8_ = local_1c8._8_8_;
    local_188 = (char *)local_1c8._16_8_;
    FStreamableManager::
    RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
              (&pUVar3->StreamableManager,&local_158,&local_1f0,
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_1e0,0,false,false,
               &local_1a8,(FSourceLocation *)local_198);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e0,
               (FWriteAccessScope *)local_1c8);
    if ((local_1d8.DelegateSize != 0) &&
       (local_1d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_1d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_1d8,0,0,0x10);
      local_1d8.DelegateSize = 0;
    }
    if (local_1c8[0x10] == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_1c8._8_8_,(FDestructionSentinel *)local_1c8);
    }
    if (local_1d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_1d8.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1e0);
    DestructItems<FSoftObjectPath,int>
              ((FSoftObjectPath *)local_1f0.AllocatorInstance.Data,local_1f0.ArrayNum);
    FVar6.Data = local_1f0.AllocatorInstance.Data;
  }
  if ((FSoftObjectPath *)FVar6.Data != (FSoftObjectPath *)0x0) {
    FMemory::Free(FVar6.Data);
  }
LAB_14bb27a15:
  if (local_178.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// ReceivePhasingEnd @ 14bb2b230

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
UDS_PhasingManager::ReceivePhasingEnd(UDS_PhasingManager *this,PhasingEndResponse *param_1)

{
  TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr> *this_00;
  bool bVar1;
  UObject *pUVar2;
  AWN_PhasingVolume *pAVar3;
  FTimerManager *this_01;
  FTimerData *pFVar4;
  FWeakObjectPtr local_res8;
  undefined8 local_res18 [2];
  
  this_00 = &this->PhasingVolume_InProgress;
  bVar1 = TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  if (!bVar1) {
    if (this->bIsTempPhasingVolume == true) {
      this->bIsTempPhasingVolume = false;
      DestroyPhasingVolumeActor(this,this->PhasingID_InProgress);
    }
    else {
      pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      (**(code **)(*(longlong *)pUVar2 + 0x368))(pUVar2,1);
      pAVar3 = (AWN_PhasingVolume *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_res8.ObjectIndex._0_1_ = 1;
      AWN_PhasingVolume::ActivateEnterSphereCollisionOverlap(pAVar3,(bool *)&local_res8);
      pAVar3 = (AWN_PhasingVolume *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_res8.ObjectIndex._0_1_ = 0;
      AWN_PhasingVolume::ActivateOutSphereCollisionOverlap(pAVar3,(bool *)&local_res8);
      pAVar3 = (AWN_PhasingVolume *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_res8 = (FWeakObjectPtr)((ulonglong)(uint7)local_res8._1_7_ << 8);
      AWN_PhasingVolume::ActivateBlockingBoxCollision(pAVar3,(bool *)&local_res8);
    }
  }
  local_res8 = __real_bff0000000000000;
  this->PhasingID_InProgress = 0;
  SetPhasingTimeLimitSec(this,(double *)&local_res8);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  (this->PhasingVolume_EnterSphereCollisionOverlapped).WeakPtr = local_res8;
  if ((this->CheckAbleEnterPhasingTimer).Handle != 0) {
    this_01 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar4 = FTimerManager::FindTimer(this_01,&this->CheckAbleEnterPhasingTimer);
    if (pFVar4 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer
                (this_01,(FTimerHandle)(this->CheckAbleEnterPhasingTimer).Handle);
    }
    (this->CheckAbleEnterPhasingTimer).Handle = 0;
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  this_00->WeakPtr = local_res8;
  this->bIsPhasingVolumeEndOverlap = false;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  (this->PhasingVolumeEndOverlappedActor).WeakPtr = local_res8;
  local_res8 = (FWeakObjectPtr)((ulonglong)local_res8 & 0xffffffffffffff00);
  TMulticastDelegate<void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>::Broadcast
            (&this->PhasingStartOrEndDelegate,(bool *)&local_res8);
  return;
}

// ReceivePhasingResultNotify @ 14bb2b3d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_PhasingManager::ReceivePhasingResultNotify
          (UDS_PhasingManager *this,PhasingResultNotify *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FDS_PhasingBaseTableRow *pFVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_WindowManager *this_00;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar6;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1a8 [8];
  FDelegateAllocation local_1a0;
  FWeakObjectPtr local_190;
  UDS_PhasingManager *local_188;
  FDestructionSentinel local_180;
  FDelegateAllocation *local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_188 = (UDS_PhasingManager *)UDS_WindowManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_188 != (UDS_PhasingManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_188);
  }
  local_190.ObjectIndex = 0;
  local_190.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_188 != (UDS_PhasingManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_188);
  }
  FWeakObjectPtr::operator=(&local_190,(FObjectPtr)&local_188);
  bVar1 = TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr> *)&local_190,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_PhasingManager::ReceivePhasingResultNotify",0x2e,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_158.Ptr,0x2e9,L"windowMng is nullptr.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    pFVar3 = FDS_PhasingBaseTableRow::Get((longlong)this->PhasingID_InProgress,true);
    if (pFVar3 == (FDS_PhasingBaseTableRow *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_PhasingManager::ReceivePhasingResultNotify",0x2e,Yes);
        UDS_LogManager::PrintLog
                  (pUVar2,1,Warning,local_158.Ptr,0x2f1,L"phasingBaseTable is nullptr. (%d)");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
    else {
      bVar1 = (param_1->_impl_).is_success_;
      local_1a8 = (undefined1  [8])0x0;
      local_1a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_1a0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a8,
                 (FWriteAccessScope *)&local_180);
      local_168 = &local_1a0;
      puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_1a0);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy___NW4EDS_PhasingContentsType____6B_
        ;
        *(bool *)(puVar4 + 1) = bVar1;
        *(EDS_PhasingContentsType *)((longlong)puVar4 + 9) = pFVar3->PhasingContentsType;
        uVar5 = FDelegateHandle::GenerateNewID();
        puVar4[2] = uVar5;
        *puVar4 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_PhasingManager____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy___NW4EDS_PhasingContentsType____6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar4[3] = 0;
        local_188 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_188);
        puVar4[4] = OnOpenPhasingComplete;
      }
      if (local_180.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
      }
      this_00 = (UDS_WindowManager *)FWeakObjectPtr::Get(&local_190);
      pTVar6 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
               TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                         ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          &local_180,
                          (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          local_1a8);
      UDS_WindowManager::OpenWindow(this_00,HUDPhasingComplete,pTVar6);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a8,
                 (FWriteAccessScope *)&local_180);
      if ((local_1a0.DelegateSize != 0) &&
         (local_1a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_1a0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_1a0,0,0,0x10);
        local_1a0.DelegateSize = 0;
      }
      if (local_180.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
      }
      if (local_1a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_1a0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1a8);
    }
  }
  return;
}

// ReceivePhasingStart @ 14bb2b740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_PhasingManager::ReceivePhasingStart(UDS_PhasingManager *this,PhasingStartResponse *param_1)

{
  TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr> *this_00;
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  FWeakObjectPtr *pFVar7;
  UObject *pUVar8;
  AWN_PhasingVolume *pAVar9;
  atomic<unsigned_char> *paVar10;
  undefined1 *puVar11;
  undefined1 auStackY_2c8 [32];
  bool local_288;
  bool local_287;
  bool local_286;
  bool local_285;
  FWeakObjectPtr local_284;
  undefined8 local_278 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  this->PhasingID_InProgress = 0;
  local_284.ObjectIndex = 0;
  local_284.ObjectSerialNumber = 0;
  local_278[0] = 0;
  FWeakObjectPtr::operator=(&local_284,(FObjectPtr)local_278);
  this_00 = &this->PhasingVolume_InProgress;
  this_00->WeakPtr = local_284;
  uVar1 = (param_1->_impl_).phasing_id_;
  if (*(int *)&(this->PhasingVolumeMap).field_0x8 != *(int *)&(this->PhasingVolumeMap).field_0x34) {
    puVar11 = *(undefined1 **)&(this->PhasingVolumeMap).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->PhasingVolumeMap).field_0x38;
    }
    iVar5 = *(int *)(puVar11 +
                    (ulonglong)(*(int *)&(this->PhasingVolumeMap).field_0x48 - 1U & uVar1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&this->PhasingVolumeMap;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar5 * 0x14) == uVar1) {
          pFVar7 = &TMapBase<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>,0>_>
                    ::FindChecked((TMapBase<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>,0>_>
                                   *)&this->PhasingVolumeMap,uVar1)->WeakPtr;
          this_00->WeakPtr = *pFVar7;
          bVar4 = TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
          if (!bVar4) {
            this->PhasingID_InProgress = uVar1;
            pUVar8 = FWeakObjectPtr::Get(&this_00->WeakPtr);
            (**(code **)(*(longlong *)pUVar8 + 0x368))(pUVar8,0);
            pAVar9 = (AWN_PhasingVolume *)FWeakObjectPtr::Get(&this_00->WeakPtr);
            local_288 = false;
            AWN_PhasingVolume::ActivateEnterSphereCollisionOverlap(pAVar9,&local_288);
            pAVar9 = (AWN_PhasingVolume *)FWeakObjectPtr::Get(&this_00->WeakPtr);
            local_287 = true;
            AWN_PhasingVolume::ActivateOutSphereCollisionOverlap(pAVar9,&local_287);
            pAVar9 = (AWN_PhasingVolume *)FWeakObjectPtr::Get(&this_00->WeakPtr);
            local_286 = false;
            AWN_PhasingVolume::ActivateBlockingBoxCollision(pAVar9,&local_286);
            local_285 = true;
            TMulticastDelegate<void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>::Broadcast
                      (&this->PhasingStartOrEndDelegate,&local_285);
            return;
          }
          pUVar6 = UDS_LogManager::GetInst();
          if (pUVar6 != (UDS_LogManager *)0x0) {
            pUVar6 = UDS_LogManager::GetInst();
            local_268._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_268,"UDS_PhasingManager::ReceivePhasingStart",0x27,Yes);
            UDS_LogManager::PrintLog
                      (pUVar6,1,Warning,local_268.Ptr,0x262,L"Invalid PhasingVolume. (%d)");
            if ((void *)local_268._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_268._padding_);
            }
          }
          iVar5 = 0x263;
          paVar10 = &bGEnsureHasExecuted<_8418862368108314013>;
          goto LAB_14bb2b884;
        }
        iVar5 = *(int *)(lVar2 + 0xc + (longlong)iVar5 * 0x14);
      } while (iVar5 != -1);
    }
  }
  pUVar6 = UDS_LogManager::GetInst();
  if (pUVar6 != (UDS_LogManager *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_PhasingManager::ReceivePhasingStart",0x27,Yes);
    UDS_LogManager::PrintLog
              (pUVar6,1,Warning,local_148.Ptr,0x25a,L"Couldn\'t find PhasingVolume. (%d)");
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  iVar5 = 0x25b;
  paVar10 = &bGEnsureHasExecuted<_8418862368108314021>;
LAB_14bb2b884:
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar10,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_PhasingManager.cpp"
                     ,iVar5,"false");
  if (!bVar4) {
    return;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// ReceiveScriptBlockingWallStateInfo @ 14bb2bdb0

void __thiscall
UDS_PhasingManager::ReceiveScriptBlockingWallStateInfo
          (UDS_PhasingManager *this,ScriptBlockingWallStateResponse *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  bool local_res10 [8];
  int local_res18 [4];
  
  lVar3 = (longlong)*(int *)&(param_1->_impl_).info_list_.field_0x8;
  lVar2 = 0;
  if (0 < lVar3) {
    do {
      uVar1 = *(ulonglong *)&(param_1->_impl_).info_list_;
      if ((uVar1 & 1) != 0) {
        uVar1 = *(ulonglong *)(uVar1 + 7 + lVar2 * 8);
      }
      local_res10[0] = *(bool *)(uVar1 + 0x1c);
      local_res18[0] = *(int *)(uVar1 + 0x18);
      SetScriptBlockingWallInfo(this,local_res18,local_res10);
      lVar2 = lVar2 + 1;
    } while (lVar2 < lVar3);
  }
  return;
}

// ReceiveScriptMissionTrackerStart @ 14bb2be20

void __thiscall
UDS_PhasingManager::ReceiveScriptMissionTrackerStart
          (UDS_PhasingManager *this,ScriptMissionTrackerStartResponse *param_1)

{
  undefined1 *puVar1;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_00;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  FDestructionSentinel local_38;
  
  this_00 = &(this->ScriptMissionInfo).MissionProgressCountMap;
  (this->ScriptMissionInfo).ScriptMissionID = 0;
  bVar5 = 1 < *(int *)&(this->ScriptMissionInfo).MissionProgressCountMap.field_0x48;
  if (!bVar5) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)this_00);
  }
  puVar1 = &(this->ScriptMissionInfo).MissionProgressCountMap.field_0xc;
  *(undefined4 *)&(this->ScriptMissionInfo).MissionProgressCountMap.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ScriptMissionInfo).MissionProgressCountMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ScriptMissionInfo).MissionProgressCountMap.field_0x34 = 0;
  iVar2 = *(int *)&(this->ScriptMissionInfo).MissionProgressCountMap.field_0x2c;
  *(undefined4 *)&(this->ScriptMissionInfo).MissionProgressCountMap.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ScriptMissionInfo).MissionProgressCountMap.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->ScriptMissionInfo).MissionProgressCountMap.field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->ScriptMissionInfo).MissionProgressCountMap.field_0x48 = 1;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Rehash
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               this_00);
  }
  (this->ScriptMissionInfo).ScriptMissionID = (param_1->_impl_).script_mission_tracker_id_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->PhasingScriptMissionStartDelegate,(FWriteAccessScope *)&local_38);
  puVar1 = &(this->PhasingScriptMissionStartDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar10 = *(int *)&(this->PhasingScriptMissionStartDelegate).field_0x10 - 1;
  if (-1 < (int)uVar10) {
    lVar11 = (longlong)(int)uVar10 << 4;
    bVar5 = false;
    do {
      uVar9 = 0;
      if ((int)uVar10 < *(int *)&(this->PhasingScriptMissionStartDelegate).field_0x10) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar3 = *(longlong *)&(this->PhasingScriptMissionStartDelegate).field_0x8;
      if (((*(int *)(lVar11 + 8 + lVar3) == 0) ||
          (plVar4 = *(longlong **)(lVar11 + lVar3), plVar4 == (longlong *)0x0)) ||
         (cVar8 = (**(code **)(*plVar4 + 0x68))(), cVar8 == '\0')) {
        bVar5 = true;
      }
      lVar11 = lVar11 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  puVar1 = &(this->PhasingScriptMissionStartDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->PhasingScriptMissionStartDelegate,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// ReceiveScriptMissionTrackerUpdate @ 14bb2bff0

void __thiscall
UDS_PhasingManager::ReceiveScriptMissionTrackerUpdate
          (UDS_PhasingManager *this,ScriptMissionTrackerUpdateResponse *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  longlong *plVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  RepeatedPtrField<server_msg::ScriptMissionTrackerInfo> *pRVar12;
  uint uVar13;
  longlong lVar14;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  TPairInitializer<int_&&,int_&&> local_78;
  undefined4 *local_68;
  FDestructionSentinel local_60;
  
  if ((this->ScriptMissionInfo).ScriptMissionID == (param_1->_impl_).script_mission_tracker_id_) {
    uVar3 = *(ulonglong *)&(param_1->_impl_).script_mission_tracker_info_list_;
    if ((uVar3 & 1) == 0) {
      pRVar12 = &(param_1->_impl_).script_mission_tracker_info_list_;
    }
    else {
      pRVar12 = (RepeatedPtrField<server_msg::ScriptMissionTrackerInfo> *)(uVar3 + 7);
    }
    iVar2 = *(int *)&(param_1->_impl_).script_mission_tracker_info_list_.field_0x8;
    plVar8 = (longlong *)&pRVar12->field_0x0;
    if (pRVar12 != (RepeatedPtrField<server_msg::ScriptMissionTrackerInfo> *)(plVar8 + iVar2)) {
      do {
        lVar14 = *(longlong *)pRVar12;
        local_res10[0] = *(undefined4 *)(lVar14 + 0x1c);
        local_res8[0] = *(int *)(lVar14 + 0x18);
        local_78.Value = local_res8;
        local_68 = local_res10;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_&&,int_&&>_>
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)&(this->ScriptMissionInfo).MissionProgressCountMap,&local_78,
                   (bool *)&local_78.Value);
        local_res18[0] = *(undefined4 *)(lVar14 + 0x1c);
        local_res20[0] = *(undefined4 *)(lVar14 + 0x18);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->PhasingScriptMissionUpdateDelegate,(FWriteAccessScope *)&local_60);
        puVar1 = &(this->PhasingScriptMissionUpdateDelegate).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar7 = false;
        uVar13 = *(int *)&(this->PhasingScriptMissionUpdateDelegate).field_0x10 - 1;
        if (-1 < (int)uVar13) {
          lVar14 = (longlong)(int)uVar13 << 4;
          bVar7 = false;
          do {
            uVar11 = 0;
            if ((int)uVar13 < *(int *)&(this->PhasingScriptMissionUpdateDelegate).field_0x10) {
              uVar11 = ~uVar13 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar4 = *(longlong *)&(this->PhasingScriptMissionUpdateDelegate).field_0x8;
            if (((*(int *)(lVar14 + 8 + lVar4) == 0) ||
                (plVar5 = *(longlong **)(lVar14 + lVar4), plVar5 == (longlong *)0x0)) ||
               (cVar10 = (**(code **)(*plVar5 + 0x68))(plVar5,local_res20,local_res18),
               cVar10 == '\0')) {
              bVar7 = true;
            }
            lVar14 = lVar14 + -0x10;
            uVar13 = uVar13 - 1;
          } while (-1 < (int)uVar13);
        }
        puVar1 = &(this->PhasingScriptMissionUpdateDelegate).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar7) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &this->PhasingScriptMissionUpdateDelegate,false);
        }
        if (local_60.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
        }
        pRVar12 = (RepeatedPtrField<server_msg::ScriptMissionTrackerInfo> *)&pRVar12->field_0x8;
      } while (pRVar12 != (RepeatedPtrField<server_msg::ScriptMissionTrackerInfo> *)(plVar8 + iVar2)
              );
    }
  }
  return;
}

// ReceiveScriptPhasingContinuousCallStartResponse @ 14bb2c210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_PhasingManager::ReceiveScriptPhasingContinuousCallStartResponse
          (UDS_PhasingManager *this,ScriptPhasingContinuousCallStartResponse *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  double *pdVar5;
  undefined1 auStackY_188 [32];
  double local_148;
  double local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  iVar1 = (param_1->_impl_).limit_sec_;
  if (iVar1 < 1) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_PhasingManager::ReceiveScriptPhasingContinuousCallStartResponse",
                 0x43,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x297,L"InMsg.limit_sec() is invalid. %d");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8418862368108313960>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_PhasingManager.cpp"
                       ,0x298,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pdVar5 = &local_148;
    local_148 = __real_bff0000000000000;
  }
  else {
    pdVar5 = &local_140;
    local_140 = (double)iVar1;
  }
  SetPhasingTimeLimitSec(this,pdVar5);
  return;
}

// ReceiveZoneEventNotifyResponse @ 14bb2c360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_PhasingManager::ReceiveZoneEventNotifyResponse
          (UDS_PhasingManager *this,ZoneEventNotifyResponse *param_1)

{
  char cVar1;
  FDS_EntityBase *this_00;
  UDS_LogManager *pUVar2;
  UDS_SmallTalkManager *this_01;
  UObject *pUVar3;
  UClass *pUVar4;
  longlong *plVar5;
  undefined1 auStackY_218 [32];
  EDS_AbilityTagType local_1d8 [8];
  UObject *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_218;
  this_00 = FDS_EntityBase::GetMainPlayerEntityBase(true);
  if (this_00 == (FDS_EntityBase *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = (longlong)this_00;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_PhasingManager::ReceiveZoneEventNotifyResponse",0x32,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_148.Ptr,699,L"mainPlayerEntityBase is nullptr.");
      if ((FDS_EntityBase *)local_148._padding_ != (FDS_EntityBase *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    cVar1 = (char)(param_1->_impl_).notify_type_;
    if (cVar1 == '\x01') {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_PhasingManager::ReceiveZoneEventNotifyResponse",0x32,Yes);
        UDS_LogManager::PrintLog
                  (pUVar2,1,Display,local_148.Ptr,0x2c4,L"Play CutScene(LevelSequencePlay). (%d)");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
      pUVar3 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar3,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar4 = Z_Construct_UClass_UDS_LevelSequencePlayAbilityContext_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_1c8,pUVar4);
      local_1c8._8_8_ = pUVar3;
      pUVar3 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
      if (local_1c8._64_8_ != 0) {
        plVar5 = (longlong *)(local_1c8 + 0x50);
        if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
          plVar5 = (longlong *)local_1c8._104_8_;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      *(int *)(pUVar3 + 1) = (param_1->_impl_).id_;
      local_1d0 = pUVar3;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      local_1d8[0] = LevelSequencePlay;
      FDS_EntityBase::TryActivateAbility
                (this_00,local_1d8,(TObjectPtr<UWN_AbilityContext>)&local_1d0);
    }
    else {
      if (cVar1 == '\x02') {
        this_01 = UDS_SmallTalkManager::GetInst();
        if (this_01 != (UDS_SmallTalkManager *)0x0) {
          pUVar2 = UDS_LogManager::GetInst();
          if (pUVar2 != (UDS_LogManager *)0x0) {
            pUVar2 = UDS_LogManager::GetInst();
            local_148._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_148,"UDS_PhasingManager::ReceiveZoneEventNotifyResponse",0x32,Yes);
            UDS_LogManager::PrintLog
                      (pUVar2,1,Display,local_148.Ptr,0x2d6,L"Play SmallTalkManager. (%d)");
            if ((void *)local_148._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_148._padding_);
            }
          }
          UDS_SmallTalkManager::PlaySmallTalk(this_01,(param_1->_impl_).id_);
          return;
        }
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar2 = UDS_LogManager::GetInst();
        local_148._padding_ = (longlong)this_01;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_PhasingManager::ReceiveZoneEventNotifyResponse",0x32,Yes);
        UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,0x2d2,L"smallTalkMng is nullptr.");
      }
      else {
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar2 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_PhasingManager::ReceiveZoneEventNotifyResponse",0x32,Yes);
        UDS_LogManager::PrintLog
                  (pUVar2,1,Warning,local_148.Ptr,0x2de,L"This type is not implemented yet. (%d)");
      }
      if ((UDS_SmallTalkManager *)local_148._padding_ != (UDS_SmallTalkManager *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  return;
}

// Reset @ 14bb32f30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_PhasingManager::Reset(UDS_PhasingManager *this)

{
  undefined1 *puVar1;
  TMap<int,FWN_PhasingVolumeInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FWN_PhasingVolumeInfo_*,0>_>
  *this_00;
  TMap<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>,0>_>
  *this_01;
  FTimerHandle *pFVar2;
  int iVar3;
  bool bVar4;
  FTimerManager *this_02;
  FTimerData *pFVar5;
  
  this_00 = &this->PhasingVolumeTableRowMap;
  (this->PhasingVolumeTable).field0_0x0.DebugPtr = (UDataTable *)0x0;
  bVar4 = 1 < *(int *)&(this->PhasingVolumeTableRowMap).field_0x48;
  if (!bVar4) {
    TSet<TTuple<int,FWN_PhasingVolumeInfo_*>,TDefaultMapHashableKeyFuncs<int,FWN_PhasingVolumeInfo_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,FWN_PhasingVolumeInfo_*>,TDefaultMapHashableKeyFuncs<int,FWN_PhasingVolumeInfo_*,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->PhasingVolumeTableRowMap).field_0xc;
  *(undefined4 *)&(this->PhasingVolumeTableRowMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->PhasingVolumeTableRowMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PhasingVolumeTableRowMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->PhasingVolumeTableRowMap).field_0x2c;
  *(undefined4 *)&(this->PhasingVolumeTableRowMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->PhasingVolumeTableRowMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PhasingVolumeTableRowMap).field_0x10,
               0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->PhasingVolumeTableRowMap).field_0x48 = 1;
    TSet<TTuple<int,FWN_PhasingVolumeInfo_*>,TDefaultMapHashableKeyFuncs<int,FWN_PhasingVolumeInfo_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,FWN_PhasingVolumeInfo_*>,TDefaultMapHashableKeyFuncs<int,FWN_PhasingVolumeInfo_*,0>,FDefaultSetAllocator>
              *)this_00);
  }
  (this->PhasingVolumeBP).field0_0x0.DebugPtr = (UObject *)0x0;
  bVar4 = 1 < *(int *)&(this->QuestPhasingInfoMap).field_0x48;
  if (!bVar4) {
    TSet<TTuple<int,FDS_QuestPhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestPhasingInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,FDS_QuestPhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestPhasingInfo,0>,FDefaultSetAllocator>
                      *)&this->QuestPhasingInfoMap);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_QuestPhasingInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,FDS_QuestPhasingInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->QuestPhasingInfoMap,0,*(int *)&(this->QuestPhasingInfoMap).field_0x8);
  puVar1 = &(this->QuestPhasingInfoMap).field_0xc;
  *(undefined4 *)&(this->QuestPhasingInfoMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,(ForAnyElementType *)&this->QuestPhasingInfoMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->QuestPhasingInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->QuestPhasingInfoMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->QuestPhasingInfoMap).field_0x2c;
  *(undefined4 *)&(this->QuestPhasingInfoMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->QuestPhasingInfoMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->QuestPhasingInfoMap).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->QuestPhasingInfoMap).field_0x48 = 1;
    TSet<TTuple<int,FDS_QuestPhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestPhasingInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,FDS_QuestPhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestPhasingInfo,0>,FDefaultSetAllocator>
              *)&this->QuestPhasingInfoMap);
  }
  this_01 = &this->PhasingVolumeMap;
  bVar4 = 1 < *(int *)&(this->PhasingVolumeMap).field_0x48;
  if (!bVar4) {
    TSet<TTuple<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  puVar1 = &(this->PhasingVolumeMap).field_0xc;
  *(undefined4 *)&(this->PhasingVolumeMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->PhasingVolumeMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PhasingVolumeMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->PhasingVolumeMap).field_0x2c;
  *(undefined4 *)&(this->PhasingVolumeMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->PhasingVolumeMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PhasingVolumeMap).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->PhasingVolumeMap).field_0x48 = 1;
    TSet<TTuple<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)this_01);
  }
  pFVar2 = &this->CheckAbleEnterPhasingTimer;
  if (pFVar2->Handle != 0) {
    this_02 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar5 = FTimerManager::FindTimer(this_02,pFVar2);
    if (pFVar5 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_02,(FTimerHandle)pFVar2->Handle);
    }
    pFVar2->Handle = 0;
  }
  return;
}

// ResponseBreachEnter @ 14bb33a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_PhasingManager::ResponseBreachEnter(UDS_PhasingManager *this,BreachEnterResponse *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_StuffPortalData *pUVar3;
  UDS_DataBase *this_00;
  FDS_StuffPortalTableRow *pFVar4;
  FDS_PhasingBaseTableRow *pFVar5;
  UDS_ContentManager *this_01;
  undefined1 auStackY_198 [32];
  uint uVar6;
  wchar_t *pwVar7;
  FWeakObjectPtr local_158;
  EDS_ContentsTabFrameType local_150 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  UDS_StuffPortalData::GetData((ulong64)&local_158);
  bVar1 = TWeakObjectPtr<UDS_StuffPortalData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_StuffPortalData,FWeakObjectPtr> *)&local_158,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_PhasingManager::ResponseBreachEnter",0x27,Yes);
    pwVar7 = L"stuffPortalData is nullptr. (%llu)";
    uVar6 = 0x309;
  }
  else {
    pUVar3 = (UDS_StuffPortalData *)FWeakObjectPtr::Get(&local_158);
    bVar1 = UDS_StuffPortalData::IsBreach(pUVar3);
    if (!bVar1) {
      pUVar3 = (UDS_StuffPortalData *)FWeakObjectPtr::Get(&local_158);
      bVar1 = UDS_StuffPortalData::IsGate(pUVar3);
      if (!bVar1) {
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar2 = UDS_LogManager::GetInst();
        this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_158);
        UDS_DataBase::GetEntityTableID(this_00);
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_PhasingManager::ResponseBreachEnter",0x27,Yes);
        pwVar7 = L"PortalType is not Breach. (%d)";
        uVar6 = 0x30f;
        goto LAB_14bb33ab1;
      }
    }
    pUVar3 = (UDS_StuffPortalData *)FWeakObjectPtr::Get(&local_158);
    pFVar4 = UDS_StuffPortalData::GetStuffPortalTable(pUVar3);
    if (pFVar4 == (FDS_StuffPortalTableRow *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_PhasingManager::ResponseBreachEnter",0x27,Yes);
      pwVar7 = L"stuffPortalTable is nullptr. (%llu)";
      uVar6 = 0x316;
    }
    else {
      pFVar5 = FDS_PhasingBaseTableRow::Get((longlong)pFVar4->ID_OpenValue,true);
      if (pFVar5 != (FDS_PhasingBaseTableRow *)0x0) {
        this->bIsTempPhasingVolume = true;
        SpawnPhasingVolumeActor(this,pFVar5->ID,&UE::Math::TVector<double>::ZeroVector,0.0);
        this_01 = UDS_ContentManager::GetInst();
        if (this_01 == (UDS_ContentManager *)0x0) {
          return;
        }
        local_150[0] = Breach;
        UDS_ContentManager::CloseContent(this_01,local_150);
        return;
      }
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_PhasingManager::ResponseBreachEnter",0x27,Yes);
      pwVar7 = L"phasingBaseTable is nullptr. (%d)";
      uVar6 = 0x31d;
    }
  }
LAB_14bb33ab1:
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,uVar6,pwVar7);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

// ResponseInnEnter @ 14bb34380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_PhasingManager::ResponseInnEnter(UDS_PhasingManager *this,InnEnterResponse *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_StuffPortalData *this_00;
  FDS_StuffPortalTableRow *pFVar3;
  FDS_PhasingBaseTableRow *pFVar4;
  undefined1 auStackY_188 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_StuffPortalData::GetData((ulong64)local_148);
  bVar1 = TWeakObjectPtr<UDS_StuffPortalData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_StuffPortalData,FWeakObjectPtr> *)local_148,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_PhasingManager::ResponseInnEnter",0x24,Yes);
    pwVar6 = L"stuffPortalData is nullptr. (%llu)";
    uVar5 = 0x332;
  }
  else {
    this_00 = (UDS_StuffPortalData *)FWeakObjectPtr::Get(local_148);
    pFVar3 = UDS_StuffPortalData::GetStuffPortalTable(this_00);
    if (pFVar3 == (FDS_StuffPortalTableRow *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_PhasingManager::ResponseInnEnter",0x24,Yes);
      pwVar6 = L"stuffPortalTable is nullptr. (%llu)";
      uVar5 = 0x339;
    }
    else if (pFVar3->PortalType == Inn) {
      pFVar4 = FDS_PhasingBaseTableRow::Get((longlong)pFVar3->ID_OpenValue,true);
      if (pFVar4 != (FDS_PhasingBaseTableRow *)0x0) {
        this->bIsTempPhasingVolume = true;
        SpawnPhasingVolumeActor(this,pFVar4->ID,&UE::Math::TVector<double>::ZeroVector,0.0);
        return;
      }
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_PhasingManager::ResponseInnEnter",0x24,Yes);
      pwVar6 = L"phasingBaseTable is nullptr. (%d)";
      uVar5 = 0x346;
    }
    else {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_PhasingManager::ResponseInnEnter",0x24,Yes);
      pwVar6 = L"PortalType is not Inn. (%d)";
      uVar5 = 0x33f;
    }
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar5,pwVar6);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// ResponsePhasingPosition_Failure @ 14bb345f0

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
UDS_PhasingManager::ResponsePhasingPosition_Failure
          (UDS_PhasingManager *this,EDS_ErrorCode param_1,Message *param_2)

{
  FTimerHandle *pFVar1;
  FTimerManager *this_00;
  FTimerData *pFVar2;
  
  pFVar1 = &this->CheckAbleEnterPhasingTimer;
  this->QuestID_ServerRequested = 0;
  if (pFVar1->Handle != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar2 = FTimerManager::FindTimer(this_00,pFVar1);
    if (pFVar2 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_00,(FTimerHandle)pFVar1->Handle);
    }
    pFVar1->Handle = 0;
  }
  return;
}

// ResponsePhasingPosition_Success @ 14bb34650

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
UDS_PhasingManager::ResponsePhasingPosition_Success
          (UDS_PhasingManager *this,PhasingPositionResponse *param_1)

{
  FTimerHandle *pFVar1;
  FTimerManager *this_00;
  FTimerData *pFVar2;
  
  pFVar1 = &this->CheckAbleEnterPhasingTimer;
  this->QuestID_ServerRequested = 0;
  if (pFVar1->Handle != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar2 = FTimerManager::FindTimer(this_00,pFVar1);
    if (pFVar2 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_00,(FTimerHandle)pFVar1->Handle);
    }
    pFVar1->Handle = 0;
  }
  return;
}

// SetCheckAbleEnterPhasingTimer @ 14bb35f10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_PhasingManager::SetCheckAbleEnterPhasingTimer(UDS_PhasingManager *this)

{
  FTimerManager *this_00;
  
  if ((this->CheckAbleEnterPhasingTimer).Handle == 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    FTimerManager::SetTimer<UDS_PhasingManager>
              (this_00,&this->CheckAbleEnterPhasingTimer,this,(pmf_cc577572)0x14baf6550,
               __real_3dcccccd,true,__real_bf800000);
  }
  return;
}

// SetPhasingTimeLimitSec @ 14bb36f90

void __thiscall UDS_PhasingManager::SetPhasingTimeLimitSec(UDS_PhasingManager *this,double *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  double dVar11;
  FDestructionSentinel local_38;
  
  dVar11 = this->PhasingTimeLimitSec - *param_1;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    this->PhasingTimeLimitSec = *param_1;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->ChangedPhasingTimeLimitSecDelegate,(FWriteAccessScope *)&local_38);
    puVar1 = &(this->ChangedPhasingTimeLimitSecDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar5 = false;
    uVar9 = *(int *)&(this->ChangedPhasingTimeLimitSecDelegate).field_0x10 - 1;
    if (-1 < (int)uVar9) {
      lVar10 = (longlong)(int)uVar9 << 4;
      bVar5 = false;
      do {
        uVar8 = 0;
        if ((int)uVar9 < *(int *)&(this->ChangedPhasingTimeLimitSecDelegate).field_0x10) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar2 = *(longlong *)&(this->ChangedPhasingTimeLimitSecDelegate).field_0x8;
        if (((*(int *)(lVar2 + 8 + lVar10) == 0) ||
            (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
          bVar5 = true;
        }
        lVar10 = lVar10 + -0x10;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
    puVar1 = &(this->ChangedPhasingTimeLimitSecDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->ChangedPhasingTimeLimitSecDelegate,false);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  return;
}

// SetScriptBlockingWallInfo @ 14bb37710

void __thiscall
UDS_PhasingManager::SetScriptBlockingWallInfo(UDS_PhasingManager *this,int *param_1,bool *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  FDS_ScriptBlockingWallInfo *pFVar9;
  uint uVar10;
  longlong lVar11;
  FDestructionSentinel local_38;
  
  pFVar9 = TMapBase<int,FDS_ScriptBlockingWallInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ScriptBlockingWallInfo,0>_>
           ::FindOrAddImpl<int_const_&>
                     ((TMapBase<int,FDS_ScriptBlockingWallInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ScriptBlockingWallInfo,0>_>
                       *)&this->ScriptBlockingWallInfoMap,*param_1,param_1);
  pFVar9->GroupID = *param_1;
  pFVar9->bIsActivated = *param_2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->ChangedScriptBlockingWallInfoDelegate,(FWriteAccessScope *)&local_38);
  puVar1 = &(this->ChangedScriptBlockingWallInfoDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar10 = *(int *)&(this->ChangedScriptBlockingWallInfoDelegate).field_0x10 - 1;
  if (-1 < (int)uVar10) {
    lVar11 = (longlong)(int)uVar10 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar10 < *(int *)&(this->ChangedScriptBlockingWallInfoDelegate).field_0x10) {
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
      lVar2 = *(longlong *)&(this->ChangedScriptBlockingWallInfoDelegate).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar11) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar11), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar11 = lVar11 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  puVar1 = &(this->ChangedScriptBlockingWallInfoDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->ChangedScriptBlockingWallInfoDelegate,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// SpawnPhasingVolumeActor @ 14bb392f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDS_PhasingManager::SpawnPhasingVolumeActor
          (UDS_PhasingManager *this,int param_1,TVector<double> *param_2,float param_3)

{
  longlong lVar1;
  FWN_PhasingVolumeInfo *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FWN_PhasingVolumeInfo **ppFVar6;
  UClass *pUVar7;
  UWorld *this_00;
  AWN_PhasingVolume *pAVar8;
  UObject *pUVar9;
  atomic<unsigned_char> *paVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined1 auStackY_1b8 [32];
  bool local_188;
  bool local_187;
  bool local_186 [6];
  FWeakObjectPtr local_180;
  float local_178 [2];
  int local_170 [2];
  FWeakObjectPtr local_168;
  TPairInitializer<int_&,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>_&> local_160;
  int *local_150;
  FWeakObjectPtr *local_148;
  undefined1 local_140 [16];
  undefined1 local_130 [24];
  undefined1 local_118 [112];
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (*(int *)&(this->PhasingVolumeMap).field_0x8 != *(int *)&(this->PhasingVolumeMap).field_0x34) {
    puVar12 = *(undefined1 **)&(this->PhasingVolumeMap).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->PhasingVolumeMap).field_0x38;
    }
    iVar13 = *(int *)(puVar12 +
                     (ulonglong)(*(int *)&(this->PhasingVolumeMap).field_0x48 - 1U & param_1) * 4);
    if (iVar13 != -1) {
      lVar1 = *(longlong *)&(this->PhasingVolumeMap).field_0x0;
      do {
        if (*(int *)(lVar1 + (longlong)iVar13 * 0x14) == param_1) {
          if (iVar13 != -1) {
            return true;
          }
          break;
        }
        iVar13 = *(int *)(lVar1 + 0xc + (longlong)iVar13 * 0x14);
      } while (iVar13 != -1);
    }
  }
  if (*(int *)&(this->PhasingVolumeTableRowMap).field_0x8 !=
      *(int *)&(this->PhasingVolumeTableRowMap).field_0x34) {
    puVar12 = *(undefined1 **)&(this->PhasingVolumeTableRowMap).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->PhasingVolumeTableRowMap).field_0x38;
    }
    iVar13 = *(int *)(puVar12 +
                     (ulonglong)
                     (*(int *)&(this->PhasingVolumeTableRowMap).field_0x48 - 1U & param_1) * 4);
    if (iVar13 != -1) {
      lVar1 = *(longlong *)&this->PhasingVolumeTableRowMap;
      do {
        if (*(int *)(lVar1 + (longlong)iVar13 * 0x18) == param_1) {
          local_178[0] = param_3;
          ppFVar6 = TMapBase<int,FWN_PhasingVolumeInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FWN_PhasingVolumeInfo_*,0>_>
                    ::FindChecked((TMapBase<int,FWN_PhasingVolumeInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FWN_PhasingVolumeInfo_*,0>_>
                                   *)&this->PhasingVolumeTableRowMap,param_1);
          pFVar2 = *ppFVar6;
          if (pFVar2 == (FWN_PhasingVolumeInfo *)0x0) {
            return false;
          }
          if ((this->PhasingVolumeBP).field0_0x0.DebugPtr == (UObject *)0x0) {
            iVar13 = 0xb1;
            paVar10 = &bGEnsureHasExecuted<_8418862368108314447>;
LAB_14bb3971a:
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (paVar10,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_PhasingManager.cpp"
                               ,iVar13,"false");
            if (!bVar4) {
              return false;
            }
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pUVar7 = Z_Construct_UClass_UClass_NoRegister();
          bVar4 = FObjectPtr::IsA((FObjectPtr *)&this->PhasingVolumeBP,pUVar7);
          if ((!bVar4) ||
             (pUVar7 = (UClass *)(this->PhasingVolumeBP).field0_0x0.DebugPtr,
             pUVar7 == (UClass *)0x0)) {
            iVar13 = 0xb8;
            paVar10 = &bGEnsureHasExecuted<_8418862368108314440>;
            goto LAB_14bb3971a;
          }
          local_a8.Rotation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          local_a8.Rotation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          local_a8.Scale3D.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          local_a8.Scale3D.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          local_a8.Translation.XY.m128d_f64 = *(double (*) [2])&(pFVar2->Location).field0_0x0;
          local_a8.Translation.ZW.m128d_f64[1] = 0.0;
          local_a8.Translation.ZW.m128d_f64[0] = (pFVar2->Location).field0_0x0._s_0.Z;
          this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
          FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_118);
          local_118[0x32] = local_118[0x32] | 4;
          local_118._48_2_ = 0x101;
          local_118._16_8_ = (AActor *)0x0;
          local_118._24_8_ = (APawn *)0x0;
          pAVar8 = (AWN_PhasingVolume *)
                   UWorld::SpawnActor(this_00,pUVar7,&local_a8,(FActorSpawnParameters *)local_118);
          if (pAVar8 != (AWN_PhasingVolume *)0x0) {
            pUVar7 = Z_Construct_UClass_AWN_PhasingVolume_NoRegister();
            iVar13 = (int)pUVar7->_padding_;
            if ((iVar13 <= *(int *)(pAVar8->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pAVar8->_padding_ + 0x30) + (longlong)iVar13 * 8) ==
                &pUVar7->_padding_)) goto LAB_14bb394fa;
          }
          pAVar8 = (AWN_PhasingVolume *)0x0;
LAB_14bb394fa:
          if (local_118._64_8_ != 0) {
            plVar11 = (longlong *)(local_118 + 0x50);
            if ((longlong *)local_118._104_8_ != (longlong *)0x0) {
              plVar11 = (longlong *)local_118._104_8_;
            }
            (**(code **)(*plVar11 + 0x10))();
          }
          if (pAVar8 == (AWN_PhasingVolume *)0x0) {
            return false;
          }
          AWN_PhasingVolume::SetPhasingId(pAVar8,&pFVar2->PhasingID);
          AWN_PhasingVolume::SetPhasingVolumeRadius(pAVar8,&pFVar2->Radius);
          if (local_178[0] <= __real_41c80000) {
            local_178[0] = 25.0;
          }
          AWN_PhasingVolume::SetEnterSphereCollisionTransform(pAVar8,param_2,local_178);
          UGameplayStatics::FinishSpawningActor((AActor *)pAVar8,&local_a8,MultiplyWithRoot);
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pAVar8);
          }
          local_168.ObjectIndex = 0;
          local_168.ObjectSerialNumber = 0;
          local_160.Value = (TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr> *)pAVar8;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pAVar8);
          }
          FWeakObjectPtr::operator=(&local_168,(FObjectPtr)&local_160.Value);
          local_180 = local_168;
          bVar4 = TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr> *)&local_180,
                             (void *)0x0);
          if (!bVar4) {
            pUVar9 = FWeakObjectPtr::Get(&local_180);
            TMulticastDelegateRegistration<void___cdecl(AActor_*,AWN_PhasingVolume_*),FDefaultDelegateUserPolicy>
            ::AddUObject<UDS_PhasingManager>
                      ((TMulticastDelegateRegistration<void___cdecl(AActor_*,AWN_PhasingVolume_*),FDefaultDelegateUserPolicy>
                        *)(pUVar9 + 0x13),(UDS_PhasingManager *)local_140,(pmf_3b6fbc9d)this);
            pUVar9 = FWeakObjectPtr::Get(&local_180);
            TMulticastDelegateRegistration<void___cdecl(AActor_*,AWN_PhasingVolume_*),FDefaultDelegateUserPolicy>
            ::AddUObject<UDS_PhasingManager>
                      ((TMulticastDelegateRegistration<void___cdecl(AActor_*,AWN_PhasingVolume_*),FDefaultDelegateUserPolicy>
                        *)&pUVar9[0x13].field_0x20,(UDS_PhasingManager *)(local_140 + 8),
                       (pmf_3b6fbc9d)this);
            pUVar9 = FWeakObjectPtr::Get(&local_180);
            TMulticastDelegateRegistration<void___cdecl(AActor_*,AWN_PhasingVolume_*),FDefaultDelegateUserPolicy>
            ::AddUObject<UDS_PhasingManager>
                      ((TMulticastDelegateRegistration<void___cdecl(AActor_*,AWN_PhasingVolume_*),FDefaultDelegateUserPolicy>
                        *)&pUVar9[0x14].field_0x18,(UDS_PhasingManager *)local_130,
                       (pmf_3b6fbc9d)this);
            pUVar9 = FWeakObjectPtr::Get(&local_180);
            TMulticastDelegateRegistration<void___cdecl(AActor_*,AWN_PhasingVolume_*),FDefaultDelegateUserPolicy>
            ::AddUObject<UDS_PhasingManager>
                      ((TMulticastDelegateRegistration<void___cdecl(AActor_*,AWN_PhasingVolume_*),FDefaultDelegateUserPolicy>
                        *)&pUVar9[0x15].field_0x10,(UDS_PhasingManager *)(local_130 + 8),
                       (pmf_3b6fbc9d)this);
            pUVar9 = FWeakObjectPtr::Get(&local_180);
            (**(code **)(*(longlong *)pUVar9 + 0x368))(pUVar9,1);
            pAVar8 = (AWN_PhasingVolume *)FWeakObjectPtr::Get(&local_180);
            local_188 = true;
            AWN_PhasingVolume::ActivateEnterSphereCollisionOverlap(pAVar8,&local_188);
            pAVar8 = (AWN_PhasingVolume *)FWeakObjectPtr::Get(&local_180);
            local_187 = false;
            AWN_PhasingVolume::ActivateOutSphereCollisionOverlap(pAVar8,&local_187);
            pAVar8 = (AWN_PhasingVolume *)FWeakObjectPtr::Get(&local_180);
            local_186[0] = false;
            AWN_PhasingVolume::ActivateBlockingBoxCollision(pAVar8,local_186);
            pAVar8 = (AWN_PhasingVolume *)FWeakObjectPtr::Get(&local_180);
            local_170[0] = AWN_PhasingVolume::GetPhasingId(pAVar8);
            local_150 = local_170;
            local_148 = &local_180;
            TSet<TTuple<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<int_&,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>_&>_>
                      ((TSet<TTuple<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                        *)&this->PhasingVolumeMap,&local_160,(bool *)&local_150);
          }
          return true;
        }
        iVar13 = *(int *)(lVar1 + 0x10 + (longlong)iVar13 * 0x18);
      } while (iVar13 != -1);
    }
  }
  return false;
}

// Update @ 14bb3f2b0

void __thiscall UDS_PhasingManager::Update(UDS_PhasingManager *this,float *param_1)

{
  double local_res8;
  
  if (this->bIsPhasingVolumeEndOverlap == true) {
    PhasingVolumeBlockingProcess(this);
  }
  if (0.0 < this->PhasingTimeLimitSec) {
    local_res8 = this->PhasingTimeLimitSec - (double)*param_1;
    if (local_res8 < 0.0) {
      local_res8 = 0.0;
    }
    SetPhasingTimeLimitSec(this,&local_res8);
  }
  return;
}

// UpdatePhasingTimeLimitSec @ 14bb3f4b0

void __thiscall
UDS_PhasingManager::UpdatePhasingTimeLimitSec(UDS_PhasingManager *this,float *param_1)

{
  double local_res8 [4];
  
  local_res8[0] = this->PhasingTimeLimitSec - (double)*param_1;
  if (local_res8[0] < 0.0) {
    local_res8[0] = 0.0;
  }
  SetPhasingTimeLimitSec(this,local_res8);
  return;
}

