// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 29

// StaticClass @ 14b76add0

UClass * __cdecl UDS_WorldBossManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WorldBossManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WorldBossManager",
               &Z_Registration_Info_UClass_UDS_WorldBossManager.InnerSingleton,
               StaticRegisterNativesUDS_WorldBossManager,0x230,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_WorldBossManager>,
               InternalVTableHelperCtorCaller<UDS_WorldBossManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WorldBossManager.InnerSingleton;
}

// UDS_WorldBossManager @ 14b76df90

UDS_WorldBossManager * __thiscall
UDS_WorldBossManager::UDS_WorldBossManager(UDS_WorldBossManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_WorldBossManager__6B_;
  *(undefined8 *)&this->AlarmTimerHandleMap = 0;
  *(undefined8 *)&(this->AlarmTimerHandleMap).field_0x8 = 0;
  *(undefined8 *)&(this->AlarmTimerHandleMap).field_0x20 = 0;
  *(undefined4 *)&(this->AlarmTimerHandleMap).field_0x28 = 0;
  *(undefined4 *)&(this->AlarmTimerHandleMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AlarmTimerHandleMap).field_0x34 = 0;
  *(undefined4 *)&(this->AlarmTimerHandleMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AlarmTimerHandleMap).field_0x40 = 0;
  *(undefined4 *)&(this->AlarmTimerHandleMap).field_0x48 = 0;
  *(undefined8 *)&this->WorldBossInfoMap = 0;
  *(undefined8 *)&(this->WorldBossInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->WorldBossInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->WorldBossInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->WorldBossInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->WorldBossInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->WorldBossInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->WorldBossInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->WorldBossInfoMap).field_0x48 = 0;
  *(undefined8 *)&this->WorldBossStateInfoMap = 0;
  *(undefined8 *)&(this->WorldBossStateInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->WorldBossStateInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->WorldBossStateInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->WorldBossStateInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->WorldBossStateInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->WorldBossStateInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->WorldBossStateInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->WorldBossStateInfoMap).field_0x48 = 0;
  *(undefined8 *)&this->NotiMessageInfoMap = 0;
  *(undefined8 *)&(this->NotiMessageInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->NotiMessageInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->NotiMessageInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->NotiMessageInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NotiMessageInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->NotiMessageInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NotiMessageInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->NotiMessageInfoMap).field_0x48 = 0;
  *(undefined8 *)&(this->WorldBossStateInfoMapByIslandNumber).field_0x10 = 0;
  *(undefined8 *)&(this->WorldBossStateInfoMapByIslandNumber).field_0x18 = 0;
  *(undefined8 *)&(this->WorldBossStateInfoMapByIslandNumber).field_0x38 = 0;
  *(undefined8 *)&(this->WorldBossStateInfoMapByIslandNumber).field_0x48 = 0;
  *(undefined8 *)&this->WorldBossStateInfoMapByIslandNumber = 0;
  *(undefined8 *)&(this->WorldBossStateInfoMapByIslandNumber).field_0x8 = 0;
  *(undefined8 *)&(this->WorldBossStateInfoMapByIslandNumber).field_0x20 = 0;
  *(undefined4 *)&(this->WorldBossStateInfoMapByIslandNumber).field_0x28 = 0;
  *(undefined4 *)&(this->WorldBossStateInfoMapByIslandNumber).field_0x2c = 0x80;
  *(undefined4 *)&(this->WorldBossStateInfoMapByIslandNumber).field_0x34 = 0;
  *(undefined4 *)&(this->WorldBossStateInfoMapByIslandNumber).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->WorldBossStateInfoMapByIslandNumber).field_0x40 = 0;
  *(undefined8 *)&this->PendingAlarmInfo = 0;
  *(undefined8 *)&(this->PendingAlarmInfo).field_0x8 = 0;
  *(undefined8 *)&(this->PendingAlarmInfo).field_0x20 = 0;
  *(undefined4 *)&(this->PendingAlarmInfo).field_0x28 = 0;
  *(undefined4 *)&(this->PendingAlarmInfo).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingAlarmInfo).field_0x34 = 0;
  *(undefined4 *)&(this->PendingAlarmInfo).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PendingAlarmInfo).field_0x40 = 0;
  *(undefined4 *)&(this->PendingAlarmInfo).field_0x48 = 0;
  (this->DefaultWorldBossStateInfoObject).BossID = 0;
  (this->DefaultWorldBossStateInfoObject).Status = None;
  *(undefined3 *)&(this->DefaultWorldBossStateInfoObject).field_0x5 = 0;
  (this->DefaultWorldBossStateInfoObject).NextEventTime.Ticks = 0;
  *(undefined8 *)&(this->DefaultWorldBossStateInfoObject).IsExist = 0;
  return this;
}

// UDS_WorldBossManager @ 14b76e160

UDS_WorldBossManager * __thiscall
UDS_WorldBossManager::UDS_WorldBossManager(UDS_WorldBossManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_WorldBossManager__6B_;
  *(undefined8 *)&this->AlarmTimerHandleMap = 0;
  *(undefined8 *)&(this->AlarmTimerHandleMap).field_0x8 = 0;
  *(undefined8 *)&(this->AlarmTimerHandleMap).field_0x20 = 0;
  *(undefined4 *)&(this->AlarmTimerHandleMap).field_0x28 = 0;
  *(undefined4 *)&(this->AlarmTimerHandleMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AlarmTimerHandleMap).field_0x34 = 0;
  *(undefined4 *)&(this->AlarmTimerHandleMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AlarmTimerHandleMap).field_0x40 = 0;
  *(undefined4 *)&(this->AlarmTimerHandleMap).field_0x48 = 0;
  *(undefined8 *)&this->WorldBossInfoMap = 0;
  *(undefined8 *)&(this->WorldBossInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->WorldBossInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->WorldBossInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->WorldBossInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->WorldBossInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->WorldBossInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->WorldBossInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->WorldBossInfoMap).field_0x48 = 0;
  *(undefined8 *)&this->WorldBossStateInfoMap = 0;
  *(undefined8 *)&(this->WorldBossStateInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->WorldBossStateInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->WorldBossStateInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->WorldBossStateInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->WorldBossStateInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->WorldBossStateInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->WorldBossStateInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->WorldBossStateInfoMap).field_0x48 = 0;
  *(undefined8 *)&this->NotiMessageInfoMap = 0;
  *(undefined8 *)&(this->NotiMessageInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->NotiMessageInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->NotiMessageInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->NotiMessageInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NotiMessageInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->NotiMessageInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NotiMessageInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->NotiMessageInfoMap).field_0x48 = 0;
  *(undefined8 *)&(this->WorldBossStateInfoMapByIslandNumber).field_0x10 = 0;
  *(undefined8 *)&(this->WorldBossStateInfoMapByIslandNumber).field_0x18 = 0;
  *(undefined8 *)&(this->WorldBossStateInfoMapByIslandNumber).field_0x38 = 0;
  *(undefined8 *)&(this->WorldBossStateInfoMapByIslandNumber).field_0x48 = 0;
  *(undefined8 *)&this->WorldBossStateInfoMapByIslandNumber = 0;
  *(undefined8 *)&(this->WorldBossStateInfoMapByIslandNumber).field_0x8 = 0;
  *(undefined8 *)&(this->WorldBossStateInfoMapByIslandNumber).field_0x20 = 0;
  *(undefined4 *)&(this->WorldBossStateInfoMapByIslandNumber).field_0x28 = 0;
  *(undefined4 *)&(this->WorldBossStateInfoMapByIslandNumber).field_0x2c = 0x80;
  *(undefined4 *)&(this->WorldBossStateInfoMapByIslandNumber).field_0x34 = 0;
  *(undefined4 *)&(this->WorldBossStateInfoMapByIslandNumber).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->WorldBossStateInfoMapByIslandNumber).field_0x40 = 0;
  *(undefined8 *)&this->PendingAlarmInfo = 0;
  *(undefined8 *)&(this->PendingAlarmInfo).field_0x8 = 0;
  *(undefined8 *)&(this->PendingAlarmInfo).field_0x20 = 0;
  *(undefined4 *)&(this->PendingAlarmInfo).field_0x28 = 0;
  *(undefined4 *)&(this->PendingAlarmInfo).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingAlarmInfo).field_0x34 = 0;
  *(undefined4 *)&(this->PendingAlarmInfo).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PendingAlarmInfo).field_0x40 = 0;
  *(undefined4 *)&(this->PendingAlarmInfo).field_0x48 = 0;
  (this->DefaultWorldBossStateInfoObject).BossID = 0;
  (this->DefaultWorldBossStateInfoObject).Status = None;
  *(undefined3 *)&(this->DefaultWorldBossStateInfoObject).field_0x5 = 0;
  (this->DefaultWorldBossStateInfoObject).NextEventTime.Ticks = 0;
  *(undefined8 *)&(this->DefaultWorldBossStateInfoObject).IsExist = 0;
  return this;
}

// ~UDS_WorldBossManager @ 14b770f30

void __thiscall UDS_WorldBossManager::~UDS_WorldBossManager(UDS_WorldBossManager *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_WorldBossManager__6B_;
  *(undefined4 *)&(this->PendingAlarmInfo).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PendingAlarmInfo).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FPendingBossAlarmInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FPendingBossAlarmInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FPendingBossAlarmInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingAlarmInfo);
  *(undefined4 *)&(this->WorldBossStateInfoMapByIslandNumber).field_0x48 = 0;
  pvVar1 = *(void **)&(this->WorldBossStateInfoMapByIslandNumber).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WorldBossStateInfoMapByIslandNumber);
  *(undefined4 *)&(this->NotiMessageInfoMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NotiMessageInfoMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_WorldBossNotifyType,FDS_WorldBossNotiMessageInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_WorldBossNotifyType,FDS_WorldBossNotiMessageInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->NotiMessageInfoMap);
  *(undefined4 *)&(this->WorldBossStateInfoMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->WorldBossStateInfoMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_WorldBossStateInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDS_WorldBossStateInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDS_WorldBossStateInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WorldBossStateInfoMap);
  *(undefined4 *)&(this->WorldBossInfoMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->WorldBossInfoMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_WorldBossInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDS_WorldBossInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDS_WorldBossInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WorldBossInfoMap);
  *(undefined4 *)&(this->AlarmTimerHandleMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AlarmTimerHandleMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_WorldBossAlarmTimers>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDS_WorldBossAlarmTimers>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDS_WorldBossAlarmTimers>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AlarmTimerHandleMap);
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b775820

UClass * __cdecl UDS_WorldBossManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WorldBossManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WorldBossManager",
               &Z_Registration_Info_UClass_UDS_WorldBossManager.InnerSingleton,
               StaticRegisterNativesUDS_WorldBossManager,0x230,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_WorldBossManager>,
               InternalVTableHelperCtorCaller<UDS_WorldBossManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WorldBossManager.InnerSingleton;
}

// StaticRegisterNativesUDS_WorldBossManager @ 14b777c30

void __cdecl UDS_WorldBossManager::StaticRegisterNativesUDS_WorldBossManager(void)

{
  return;
}

// __VTableCtorCaller @ 14b77a390

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_WorldBossManager::__VTableCtorCaller(FVTableHelper *param_1)

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
    this->_padding_ = (longlong)&___7UDS_WorldBossManager__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].bIsBeingDestroyed = 0;
    *(undefined4 *)&this[1].field_0x2c = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined8 *)&this[2].bIsBeingDestroyed = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[3]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0;
    this[4]._padding_ = 0;
    *(undefined4 *)&this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[5]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5].bIsBeingDestroyed = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    *(undefined4 *)&this[6].bIsBeingDestroyed = 0;
    *(undefined4 *)&this[6].field_0x2c = 0x80;
    *(undefined4 *)&this[7]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[7]._padding_ + 4) = 0;
    this[7]._padding_ = 0;
    *(undefined4 *)&this[7]._padding_ = 0;
    this[8]._padding_ = 0;
    this[8]._padding_ = 0;
    *(undefined8 *)&this[8].bIsBeingDestroyed = 0;
    this[9]._padding_ = 0;
    this[7]._padding_ = 0;
    *(undefined8 *)&this[7].bIsBeingDestroyed = 0;
    this[8]._padding_ = 0;
    *(undefined4 *)&this[8]._padding_ = 0;
    *(undefined4 *)((longlong)&this[8]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[8]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[8]._padding_ + 4) = 0;
    this[9]._padding_ = 0;
    this[9]._padding_ = 0;
    this[9]._padding_ = 0;
    this[10]._padding_ = 0;
    *(undefined4 *)&this[10]._padding_ = 0;
    *(undefined4 *)((longlong)&this[10]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[10]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[10]._padding_ + 4) = 0;
    this[10]._padding_ = 0;
    *(undefined4 *)&this[10].bIsBeingDestroyed = 0;
    this[0xb]._padding_ = 0;
    this[0xb]._padding_ = 0;
    this[0xb]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// Destroyed @ 14bb5da50

void __thiscall UDS_WorldBossManager::Destroyed(UDS_WorldBossManager *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014bb5da53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2d0))();
  return;
}

// GetAlarmTimerHandle @ 14bb63440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FTimerHandle * __thiscall
UDS_WorldBossManager::GetAlarmTimerHandle
          (UDS_WorldBossManager *this,int param_1,EDS_WorldBossNotifyType param_2)

{
  int iVar1;
  UDS_LogManager *pUVar2;
  int *piVar3;
  undefined1 *puVar4;
  FTimerHandle *pFVar5;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (*(int *)&(this->AlarmTimerHandleMap).field_0x8 !=
      *(int *)&(this->AlarmTimerHandleMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->AlarmTimerHandleMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->AlarmTimerHandleMap).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->AlarmTimerHandleMap).field_0x48 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar3 = (int *)((longlong)iVar1 * 0x20 + *(longlong *)&this->AlarmTimerHandleMap);
        if (*piVar3 == param_1) {
          pFVar5 = (FTimerHandle *)(piVar3 + 2);
          if (piVar3 == (int *)0x0) {
            pFVar5 = (FTimerHandle *)0x0;
          }
          if (pFVar5 != (FTimerHandle *)0x0) {
            if (param_2 == PreAppear) {
              return pFVar5;
            }
            if (param_2 != PreDisAppear) {
              return (FTimerHandle *)0x0;
            }
            return pFVar5 + 1;
          }
          break;
        }
        iVar1 = piVar3[6];
      } while (iVar1 != -1);
    }
  }
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 != (UDS_LogManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_WorldBossManager::GetAlarmTimerHandle",0x29,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Warning,local_138.Ptr,0x223,L"AlarmTimerHandleMap not found for ID: %d");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return (FTimerHandle *)0x0;
}

// GetAlarmTimerHandle @ 14bb63590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FTimerHandle * __thiscall
UDS_WorldBossManager::GetAlarmTimerHandle
          (UDS_WorldBossManager *this,int param_1,EDS_WorldBossNotifyType param_2)

{
  int iVar1;
  UDS_LogManager *pUVar2;
  int *piVar3;
  undefined1 *puVar4;
  FTimerHandle *pFVar5;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (*(int *)&(this->AlarmTimerHandleMap).field_0x8 !=
      *(int *)&(this->AlarmTimerHandleMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->AlarmTimerHandleMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->AlarmTimerHandleMap).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->AlarmTimerHandleMap).field_0x48 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar3 = (int *)((longlong)iVar1 * 0x20 + *(longlong *)&this->AlarmTimerHandleMap);
        if (*piVar3 == param_1) {
          pFVar5 = (FTimerHandle *)(piVar3 + 2);
          if (piVar3 == (int *)0x0) {
            pFVar5 = (FTimerHandle *)0x0;
          }
          if (pFVar5 != (FTimerHandle *)0x0) {
            if (param_2 == PreAppear) {
              return pFVar5;
            }
            if (param_2 != PreDisAppear) {
              return (FTimerHandle *)0x0;
            }
            return pFVar5 + 1;
          }
          break;
        }
        iVar1 = piVar3[6];
      } while (iVar1 != -1);
    }
  }
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 != (UDS_LogManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_WorldBossManager::GetAlarmTimerHandle",0x29,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Warning,local_138.Ptr,0x208,L"AlarmTimerHandleMap not found for ID: %d");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return (FTimerHandle *)0x0;
}

// GetDisplayTime_Seconds @ 14bb65030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

double __thiscall
UDS_WorldBossManager::GetDisplayTime_Seconds
          (UDS_WorldBossManager *this,EDS_WorldBossNotifyType param_1,int param_2)

{
  TMap<int,FDS_WorldBossInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossInfo,0>_>
  *this_00;
  int iVar1;
  UDS_LogManager *pUVar2;
  FDS_WorldBossInfo *pFVar3;
  undefined1 *puVar4;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar5 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 auVar6 [16];
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = &this->WorldBossInfoMap;
  if (*(int *)&(this->WorldBossInfoMap).field_0x8 != *(int *)&(this->WorldBossInfoMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->WorldBossInfoMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->WorldBossInfoMap).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->WorldBossInfoMap).field_0x48 - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*(longlong *)this_00 + (longlong)iVar1 * 0x30) == param_2) {
          if (param_1 == PreAppear) {
            pFVar3 = TMapBase<int,FDS_WorldBossInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossInfo,0>_>
                     ::FindChecked((TMapBase<int,FDS_WorldBossInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossInfo,0>_>
                                    *)this_00,param_2);
            auVar5._0_8_ = (double)pFVar3->AppearAlarmTime_Seconds * __real_416312d000000000 +
                           __real_3fe0000000000000;
            auVar5._8_8_ = 0;
            auVar5 = roundpd(extraout_XMM0,auVar5,1);
            return (double)(longlong)auVar5._0_8_ * __real_3e7ad7f29abcaf48;
          }
          if (param_1 != PreDisAppear) {
            return 0.0;
          }
          pFVar3 = TMapBase<int,FDS_WorldBossInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossInfo,0>_>
                   ::FindChecked((TMapBase<int,FDS_WorldBossInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossInfo,0>_>
                                  *)this_00,param_2);
          auVar6._0_8_ = (double)pFVar3->DeleteAlarmTime_Seconds * __real_416312d000000000 +
                         __real_3fe0000000000000;
          auVar6._8_8_ = 0;
          auVar5 = roundpd(extraout_XMM0_00,auVar6,1);
          return (double)(longlong)auVar5._0_8_ * __real_3e7ad7f29abcaf48;
        }
        iVar1 = *(int *)(*(longlong *)this_00 + 0x28 + (longlong)iVar1 * 0x30);
      } while (iVar1 != -1);
    }
  }
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 != (UDS_LogManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_WorldBossManager::GetDisplayTime_Seconds",0x2c,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Warning,local_138.Ptr,0x3a,L"WorldBossInfo not found for ID: %d");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return 0.0;
}

// GetInst @ 14bb66500

UDS_WorldBossManager * __cdecl UDS_WorldBossManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_WorldBossManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this != (UDS_GameInstance *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_WorldBossManager_NoRegister();
    pUVar3 = (UDS_WorldBossManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
    if (pUVar3 != (UDS_WorldBossManager *)0x0) {
      pUVar2 = Z_Construct_UClass_UDS_WorldBossManager_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        return pUVar3;
      }
    }
  }
  return (UDS_WorldBossManager *)0x0;
}

// GetRateTime_Seconds @ 14bb673e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

double __thiscall
UDS_WorldBossManager::GetRateTime_Seconds
          (UDS_WorldBossManager *this,EDS_WorldBossNotifyType param_1,int param_2,int param_3)

{
  TMap<int,FDS_WorldBossInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossInfo,0>_>
  *this_00;
  code *pcVar1;
  TStringConversion<TStringConvert<char,wchar_t>,128> *pTVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  UDS_TimeUtilManager *pUVar7;
  UDS_GameInstance *pUVar8;
  FDS_WorldBossInfo *pFVar9;
  FDateTime FVar10;
  FDS_TimeSchedulerTableRow *this_01;
  FDateTime *pFVar11;
  void *pvVar12;
  undefined1 *puVar13;
  ForElementType<FSetElementId> FVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  FString *pFVar17;
  longlong lVar18;
  TStringConversion<TStringConvert<char,wchar_t>,128> *pTVar19;
  double dVar20;
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 auVar21 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 extraout_XMM0_02 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStackY_488 [32];
  ForAnyElementType local_448;
  int local_440;
  int local_43c;
  ForAnyElementType local_438;
  int local_430;
  int local_42c;
  TArray<FString,TSizedDefaultAllocator<32>_> local_428;
  undefined4 local_418;
  undefined4 local_414;
  ForAnyElementType local_410;
  int local_408;
  int local_404;
  ForAnyElementType local_400;
  int local_3f8;
  int local_3f4;
  undefined1 local_3f0 [12];
  undefined1 local_3e4 [12];
  undefined4 *local_3d8;
  ForAnyElementType *local_3d0;
  undefined4 *local_3c8;
  ForAnyElementType *local_3c0;
  FDateTime local_3a8 [2];
  undefined1 local_398 [32];
  void *local_378;
  undefined4 local_370;
  uint local_36c;
  undefined4 local_368;
  int local_364;
  undefined1 local_360 [8];
  ForElementType<FSetElementId> local_358;
  int local_350;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_488;
  this_00 = &this->WorldBossInfoMap;
  if (*(int *)&(this->WorldBossInfoMap).field_0x8 != *(int *)&(this->WorldBossInfoMap).field_0x34) {
    puVar13 = *(undefined1 **)&(this->WorldBossInfoMap).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->WorldBossInfoMap).field_0x38;
    }
    iVar5 = *(int *)(puVar13 +
                    (ulonglong)(*(int *)&(this->WorldBossInfoMap).field_0x48 - 1U & param_2) * 4);
    if (iVar5 != -1) {
      while (*(int *)(*(longlong *)this_00 + (longlong)iVar5 * 0x30) != param_2) {
        iVar5 = *(int *)(*(longlong *)this_00 + 0x28 + (longlong)iVar5 * 0x30);
        if (iVar5 == -1) goto LAB_14bb6747c;
      }
      pUVar7 = UDS_TimeUtilManager::GetInst();
      if ((pUVar7 == (UDS_TimeUtilManager *)0x0) || (((uint)pUVar7->_padding_ >> 0x1e & 1) != 0)) {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 == (UDS_LogManager *)0x0) {
          return 0.0;
        }
        pUVar6 = UDS_LogManager::GetInst();
        local_288._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_288,"UDS_WorldBossManager::GetRateTime_Seconds",0x29,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,local_288.Ptr,0x59,L"UDS_TimeUtilManager is InValid");
        pvVar12 = (void *)local_288._padding_;
        goto LAB_14bb674f1;
      }
      if (param_1 != PreAppear) {
        if (param_1 != PreDisAppear) {
          return 0.0;
        }
        auVar21._0_8_ = (double)param_3 * __real_416312d000000000 + __real_3fe0000000000000;
        auVar21._8_8_ = 0;
        auVar21 = roundpd(extraout_XMM0,auVar21,1);
        pFVar9 = TMapBase<int,FDS_WorldBossInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossInfo,0>_>
                 ::FindChecked((TMapBase<int,FDS_WorldBossInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossInfo,0>_>
                                *)this_00,param_2);
        auVar22._0_8_ =
             (double)pFVar9->DeleteAlarmTime_Seconds * __real_416312d000000000 +
             __real_3fe0000000000000;
        auVar22._8_8_ = 0;
        auVar22 = roundpd(extraout_XMM0_02,auVar22,1);
        UDS_TimeUtilManager::GetCurrentServerDateTime();
        return (double)((longlong)auVar21._0_8_ - (longlong)auVar22._0_8_) * __real_3e7ad7f29abcaf48
        ;
      }
      pUVar8 = UDS_GameInstance::GetInst();
      if (((pUVar8 == (UDS_GameInstance *)0x0) || (((uint)pUVar8->_padding_ >> 0x1e & 1) != 0)) ||
         (bVar4 = UDS_GameInstance::GetIsWorldBossTestMode(), !bVar4)) {
        pFVar9 = TMapBase<int,FDS_WorldBossInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossInfo,0>_>
                 ::FindChecked((TMapBase<int,FDS_WorldBossInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossInfo,0>_>
                                *)this_00,param_2);
        this_01 = FDS_TimeSchedulerTableRow::GetRef((longlong)pFVar9->SpawnScheduleID,true);
        bVar4 = FDS_TimeSchedulerTableRow::IsValid(this_01);
        pFVar16 = (FScriptContainerElement *)0x0;
        if (bVar4) {
          local_428.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_428.ArrayNum = 0;
          local_428.ArrayMax = 0;
          ::FString::ParseIntoArray(&this_01->RepeatTime,&local_428,L" ",true);
          FVar3.Data = local_428.AllocatorInstance.Data;
          iVar5 = local_428.ArrayNum;
          local_400.Data = (FScriptContainerElement *)0x0;
          local_3f8 = local_428.ArrayNum;
          if (local_428.ArrayNum == 0) {
            local_3f4 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,local_428.ArrayNum,0,&local_400,local_428.ArrayNum,&local_3f4);
            ConstructItems<FString,FString,int>(local_400.Data,(FString *)FVar3.Data,iVar5);
          }
          UDS_TimeUtilManager::GetCronExpressionTime
                    ((TArray<FString,TSizedDefaultAllocator<32>_> *)local_3f0,None);
          DestructItems<FString,int>((FString *)local_428.AllocatorInstance.Data,local_428.ArrayNum)
          ;
          pFVar16 = (FScriptContainerElement *)local_3f0._0_8_;
          if (local_428.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_428.AllocatorInstance.Data);
            pFVar16 = (FScriptContainerElement *)local_3f0._0_8_;
          }
        }
        pFVar9 = TMapBase<int,FDS_WorldBossInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossInfo,0>_>
                 ::FindChecked((TMapBase<int,FDS_WorldBossInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossInfo,0>_>
                                *)this_00,param_2);
        auVar24._0_8_ =
             (double)pFVar9->AppearAlarmTime_Seconds * __real_416312d000000000 +
             __real_3fe0000000000000;
        auVar24._8_8_ = 0;
        auVar21 = roundpd(extraout_XMM0_01,auVar24,1);
        dVar20 = UDS_TimeUtilManager::GetCurrentServerTime();
        dVar20 = dVar20 * __real_416312d000000000;
        pFVar11 = FDateTime::FDateTime(local_3a8,0x7b2,1,1,0,0,0,0);
        return (double)(longlong)
                       (pFVar16 + ((-(longlong)auVar21._0_8_ - (longlong)dVar20) - pFVar11->Ticks))
               * __real_3e7ad7f29abcaf48;
      }
      local_36c = 0x80;
      local_398._0_8_ = (FScriptContainerElement *)0x0;
      local_398._8_8_ = 0;
      local_378 = (void *)0x0;
      local_370 = 0;
      local_364 = 0;
      local_358 = (ForElementType<FSetElementId>)0x0;
      local_350 = 0;
      local_368 = 0xffffffff;
      ::FString::FString(&local_348,"0");
      ::FString::FString(&local_338,"*/20");
      ::FString::FString(&local_328,"*");
      ::FString::FString(&local_318,"*");
      ::FString::FString(&local_308,"*");
      ::FString::FString(&local_2f8,"*");
      lVar15 = 6;
      local_448.Data = (FScriptContainerElement *)0x0;
      local_440 = 6;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,6,0,&local_448,6,&local_43c);
      ConstructItems<FString,FString,int>(local_448.Data,&local_348,6);
      local_3d8 = &local_418;
      local_418 = 1;
      local_3d0 = &local_448;
      TSet<TTuple<int,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_&&,TArray<FString,TSizedDefaultAllocator<32>_>_&&>_>
                ((TSet<TTuple<int,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)local_398,
                 (TPairInitializer<int_&&,TArray<FString,TSizedDefaultAllocator<32>_>_&&> *)
                 (local_3f0 + 8),(bool *)&local_3d8);
      DestructItems<FString,int>((FString *)local_448.Data,local_440);
      if (local_448.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_448.Data);
      }
      pFVar17 = &local_2e8;
      lVar18 = 6;
      do {
        pFVar16 = pFVar17[-1].Data.AllocatorInstance.Data;
        pFVar17 = pFVar17 + -1;
        lVar18 = lVar18 + -1;
        if (pFVar16 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar16);
        }
      } while (lVar18 != 0);
      ::FString::FString(&local_2e8,"0");
      ::FString::FString(&local_2d8,"10/20");
      ::FString::FString(&local_2c8,"*");
      ::FString::FString(&local_2b8,"*");
      ::FString::FString(&local_2a8,"*");
      ::FString::FString(&local_298,"*");
      local_438.Data = (FScriptContainerElement *)0x0;
      local_430 = 6;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,6,0,&local_438,6,&local_42c);
      ConstructItems<FString,FString,int>(local_438.Data,&local_2e8,6);
      local_3c8 = &local_414;
      local_414 = 2;
      local_3c0 = &local_438;
      TSet<TTuple<int,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_&&,TArray<FString,TSizedDefaultAllocator<32>_>_&&>_>
                ((TSet<TTuple<int,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)local_398,
                 (TPairInitializer<int_&&,TArray<FString,TSizedDefaultAllocator<32>_>_&&> *)
                 local_3e4,(bool *)&local_3c8);
      DestructItems<FString,int>((FString *)local_438.Data,local_430);
      if (local_438.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_438.Data);
      }
      pTVar19 = &local_288;
      do {
        pTVar2 = pTVar19 + -1;
        pTVar19 = (TStringConversion<TStringConvert<char,wchar_t>,128> *)&pTVar19[-1].Ptr;
        lVar15 = lVar15 + -1;
        if (pTVar2->Ptr != (wchar_t *)0x0) {
          FMemory::Free(pTVar2->Ptr);
        }
      } while (lVar15 != 0);
      pFVar16 = (FScriptContainerElement *)0x0;
      if (local_398._8_4_ != local_364) {
        FVar14 = (ForElementType<FSetElementId>)local_360;
        if (local_358 != (ForElementType<FSetElementId>)0x0) {
          FVar14 = local_358;
        }
        iVar5 = *(int *)((longlong)FVar14 + (ulonglong)(local_350 - 1U & param_2) * 4);
        while (pFVar16 = (FScriptContainerElement *)0x0, iVar5 != -1) {
          pFVar16 = (FScriptContainerElement *)(local_398._0_8_ + (longlong)iVar5 * 0x20);
          if (*(int *)pFVar16 == param_2) {
            if (pFVar16 != (FScriptContainerElement *)0x0) goto LAB_14bb67850;
            break;
          }
          iVar5 = *(int *)(pFVar16 + 0x18);
        }
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        dVar20 = (double)(*pcVar1)();
        return dVar20;
      }
LAB_14bb67850:
      local_410.Data = (FScriptContainerElement *)0x0;
      iVar5 = *(int *)(pFVar16 + 0x10);
      pFVar17 = *(FString **)(pFVar16 + 8);
      local_408 = iVar5;
      if (iVar5 == 0) {
        local_404 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar5,0,&local_410,iVar5,&local_404);
        ConstructItems<FString,FString,int>(local_410.Data,pFVar17,iVar5);
      }
      UDS_TimeUtilManager::GetCronExpressionTime
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)(local_3e4 + 4),
                 (EDS_TimeZoneType)&local_410);
      pFVar9 = TMapBase<int,FDS_WorldBossInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossInfo,0>_>
               ::FindChecked((TMapBase<int,FDS_WorldBossInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossInfo,0>_>
                              *)this_00,param_2);
      auVar23._0_8_ =
           (double)pFVar9->AppearAlarmTime_Seconds * __real_416312d000000000 +
           __real_3fe0000000000000;
      auVar23._8_8_ = 0;
      auVar21 = roundpd(extraout_XMM0_00,auVar23,1);
      UDS_TimeUtilManager::GetCurrentServerDateTime();
      FVar10 = UDS_TimeUtilManager::GetCurrentServerDateTime();
      local_350 = 0;
      dVar20 = (double)(local_3e4._4_8_ + (-(longlong)auVar21._0_8_ - *(longlong *)FVar10.Ticks)) *
               __real_3e7ad7f29abcaf48;
      if (local_358 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_358);
      }
      TSparseArray<TSparseSetElement<TTuple<int,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_398,0,local_398._8_4_);
      iVar5 = SUB84(local_398._8_8_,4);
      local_398._8_8_ = local_398._8_8_ & 0xffffffff00000000;
      if (iVar5 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)local_398,0,(int *)(local_398 + 0xc));
      }
      local_368 = 0xffffffff;
      local_364 = 0;
      local_370 = 0;
      if (0x80 < local_36c) {
        local_36c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_398 + 0x10),0);
      }
      if (local_378 != (void *)0x0) {
        FMemory::Free(local_378);
      }
      if ((FScriptContainerElement *)local_398._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_398._0_8_);
        return dVar20;
      }
      return dVar20;
    }
  }
LAB_14bb6747c:
  pUVar6 = UDS_LogManager::GetInst();
  if (pUVar6 != (UDS_LogManager *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_WorldBossManager::GetRateTime_Seconds",0x29,Yes);
    UDS_LogManager::PrintLog
              (pUVar6,1,Warning,local_168.Ptr,0x52,L"WorldBossInfo not found for ID: %d");
    pvVar12 = (void *)local_168._padding_;
LAB_14bb674f1:
    if (pvVar12 != (void *)0x0) {
      FMemory::Free(pvVar12);
    }
  }
  return 0.0;
}

// GetStateInfoArrayByIslandNumber @ 14bb67eb0

TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_> * __thiscall
UDS_WorldBossManager::GetStateInfoArrayByIslandNumber(UDS_WorldBossManager *this,int param_1)

{
  int iVar1;
  TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined1 *puVar4;
  TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_> *pTVar5;
  
  pTVar5 = (TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_> *)0x0;
  pTVar2 = pTVar5;
  if (*(int *)&(this->WorldBossStateInfoMapByIslandNumber).field_0x8 !=
      *(int *)&(this->WorldBossStateInfoMapByIslandNumber).field_0x34) {
    puVar4 = *(undefined1 **)&(this->WorldBossStateInfoMapByIslandNumber).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->WorldBossStateInfoMapByIslandNumber).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->WorldBossStateInfoMapByIslandNumber).field_0x48 - 1U
                              & param_1) * 4);
    if (iVar1 != -1) {
      do {
        pTVar2 = (TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_> *)
                 ((longlong)iVar1 * 0x20 + *(longlong *)&this->WorldBossStateInfoMapByIslandNumber);
        if (*(int *)&(pTVar2->AllocatorInstance).Data == param_1) break;
        iVar1 = pTVar2[1].ArrayNum;
        pTVar2 = pTVar5;
      } while (iVar1 != -1);
    }
  }
  pTVar3 = (TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_> *)&pTVar2->ArrayNum;
  if (pTVar2 == (TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = pTVar5;
  }
  return pTVar3;
}

// GetWorldBossStateInfo @ 14bb69110

FDS_WorldBossStateInfo * __thiscall
UDS_WorldBossManager::GetWorldBossStateInfo(UDS_WorldBossManager *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  FDS_WorldBossStateInfo *pFVar3;
  FDS_WorldBossStateInfo *pFVar4;
  undefined1 *puVar5;
  
  if (*(int *)&(this->WorldBossStateInfoMap).field_0x8 !=
      *(int *)&(this->WorldBossStateInfoMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->WorldBossStateInfoMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->WorldBossStateInfoMap).field_0x38;
    }
    iVar2 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->WorldBossStateInfoMap).field_0x48 - 1U & param_1) * 4
                    );
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->WorldBossStateInfoMap + (longlong)iVar2 * 0x28;
        if (*(int *)(*(longlong *)&this->WorldBossStateInfoMap + (longlong)iVar2 * 0x28) == param_1)
        {
          pFVar4 = (FDS_WorldBossStateInfo *)(lVar1 + 8);
          if (lVar1 == 0) {
            pFVar4 = (FDS_WorldBossStateInfo *)0x0;
          }
          pFVar3 = &this->DefaultWorldBossStateInfoObject;
          if (pFVar4 != (FDS_WorldBossStateInfo *)0x0) {
            pFVar3 = pFVar4;
          }
          return pFVar3;
        }
        iVar2 = *(int *)(lVar1 + 0x20);
      } while (iVar2 != -1);
    }
  }
  return &this->DefaultWorldBossStateInfoObject;
}

// Init @ 14bb6a9d0

void __thiscall UDS_WorldBossManager::Init(UDS_WorldBossManager *this)

{
  TMap<EDS_WorldBossNotifyType,FDS_WorldBossNotiMessageInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_WorldBossNotifyType,FDS_WorldBossNotiMessageInfo,0>_>
  *this_00;
  undefined1 local_res8 [16];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_18;
  undefined4 *local_10;
  
  local_18 = local_res8;
  local_28 = 0x5a619;
  this_00 = &this->NotiMessageInfoMap;
  local_10 = &local_28;
  local_24 = 0x13b6;
  local_20 = 0x5a5b5;
  local_res8[0] = 1;
  TSet<TTuple<enum_EDS_WorldBossNotifyType,FDS_WorldBossNotiMessageInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_WorldBossNotifyType,FDS_WorldBossNotiMessageInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WorldBossNotifyType_&&,FDS_WorldBossNotiMessageInfo_&&>_>
            (this_00,(TPairInitializer<EDS_WorldBossNotifyType_&&,FDS_WorldBossNotiMessageInfo_&&> *
                     )(local_res8 + 8),(bool *)&local_18);
  local_18 = local_res8;
  local_28 = 0x5a61a;
  local_10 = &local_28;
  local_24 = 0x13b6;
  local_20 = 0x5a5b6;
  local_res8[0] = 2;
  TSet<TTuple<enum_EDS_WorldBossNotifyType,FDS_WorldBossNotiMessageInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_WorldBossNotifyType,FDS_WorldBossNotiMessageInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WorldBossNotifyType_&&,FDS_WorldBossNotiMessageInfo_&&>_>
            (this_00,(TPairInitializer<EDS_WorldBossNotifyType_&&,FDS_WorldBossNotiMessageInfo_&&> *
                     )(local_res8 + 8),(bool *)&local_18);
  local_18 = local_res8;
  local_28 = 0x5a61b;
  local_10 = &local_28;
  local_24 = 0x13b6;
  local_20 = 0x5a5b7;
  local_res8[0] = 5;
  TSet<TTuple<enum_EDS_WorldBossNotifyType,FDS_WorldBossNotiMessageInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_WorldBossNotifyType,FDS_WorldBossNotiMessageInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WorldBossNotifyType_&&,FDS_WorldBossNotiMessageInfo_&&>_>
            (this_00,(TPairInitializer<EDS_WorldBossNotifyType_&&,FDS_WorldBossNotiMessageInfo_&&> *
                     )(local_res8 + 8),(bool *)&local_18);
  local_18 = local_res8;
  local_28 = 0x5a61c;
  local_10 = &local_28;
  local_24 = 0x13b6;
  local_20 = 0x5a5b8;
  local_res8[0] = 3;
  TSet<TTuple<enum_EDS_WorldBossNotifyType,FDS_WorldBossNotiMessageInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_WorldBossNotifyType,FDS_WorldBossNotiMessageInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WorldBossNotifyType_&&,FDS_WorldBossNotiMessageInfo_&&>_>
            (this_00,(TPairInitializer<EDS_WorldBossNotifyType_&&,FDS_WorldBossNotiMessageInfo_&&> *
                     )(local_res8 + 8),(bool *)&local_18);
  local_18 = local_res8;
  local_28 = 0x5a61d;
  local_10 = &local_28;
  local_24 = 0x13b6;
  local_20 = 0x5a5b9;
  local_res8[0] = 4;
  TSet<TTuple<enum_EDS_WorldBossNotifyType,FDS_WorldBossNotiMessageInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_WorldBossNotifyType,FDS_WorldBossNotiMessageInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WorldBossNotifyType_&&,FDS_WorldBossNotiMessageInfo_&&>_>
            (this_00,(TPairInitializer<EDS_WorldBossNotifyType_&&,FDS_WorldBossNotiMessageInfo_&&> *
                     )(local_res8 + 8),(bool *)&local_18);
  return;
}

// IsAlarmTimerActive @ 14bb6e220

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

bool __thiscall
UDS_WorldBossManager::IsAlarmTimerActive
          (UDS_WorldBossManager *this,int param_1,EDS_WorldBossNotifyType param_2)

{
  int iVar1;
  UDS_LogManager *pUVar2;
  FTimerManager *this_00;
  FTimerData *pFVar3;
  int *piVar4;
  undefined1 *puVar5;
  ulong64 *puVar6;
  undefined1 auStackY_188 [32];
  FTimerHandle local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (*(int *)&(this->AlarmTimerHandleMap).field_0x8 !=
      *(int *)&(this->AlarmTimerHandleMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->AlarmTimerHandleMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->AlarmTimerHandleMap).field_0x38;
    }
    iVar1 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->AlarmTimerHandleMap).field_0x48 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar4 = (int *)((longlong)iVar1 * 0x20 + *(longlong *)&this->AlarmTimerHandleMap);
        if (*piVar4 == param_1) {
          puVar6 = (ulong64 *)(piVar4 + 2);
          if (piVar4 == (int *)0x0) {
            puVar6 = (ulong64 *)0x0;
          }
          if (puVar6 != (ulong64 *)0x0) {
            if (param_2 != PreAppear) {
              if (param_2 != PreDisAppear) {
                return false;
              }
              puVar6 = puVar6 + 1;
              if (puVar6 == (ulong64 *)0x0) {
                return false;
              }
            }
            if (*puVar6 == 0) {
              return false;
            }
            this_00 = FDS_TimerManager::Get((UObject *)0x0);
            local_148[0].Handle = *puVar6;
            pFVar3 = FTimerManager::FindTimer(this_00,local_148);
            if (pFVar3 == (FTimerData *)0x0) {
              return false;
            }
            if (pFVar3->Status == Paused) {
              return false;
            }
            return true;
          }
          break;
        }
        iVar1 = piVar4[6];
      } while (iVar1 != -1);
    }
  }
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 != (UDS_LogManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_WorldBossManager::GetAlarmTimerHandle",0x29,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Warning,local_138.Ptr,0x208,L"AlarmTimerHandleMap not found for ID: %d");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return false;
}

// OnPostLoadingCallback @ 14bb76900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_WorldBossManager::OnPostLoadingCallback(UDS_WorldBossManager *this,EDS_LoadingPhase param_1)

{
  TMap<int,FPendingBossAlarmInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingBossAlarmInfo,0>_>
  *this_00;
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined3 uVar8;
  double dVar9;
  double dVar10;
  TMap<int,FPendingBossAlarmInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingBossAlarmInfo,0>_>
  *pTVar11;
  bool bVar12;
  UDS_TimeUtilManager *pUVar13;
  FDateTime *pFVar14;
  FDS_WorldBossStateInfo *pFVar15;
  UDS_LoadingEvent *pUVar16;
  UDS_LogManager *pUVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  undefined1 *puVar22;
  uint *puVar23;
  uint uVar24;
  undefined1 auStackY_298 [32];
  undefined1 local_258 [8];
  TMap<int,FPendingBossAlarmInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingBossAlarmInfo,0>_>
  *local_250;
  int iStack_248;
  uint uStack_244;
  undefined1 *local_240;
  undefined4 uStack_238;
  int iStack_234;
  int local_230;
  int iStack_22c;
  int iStack_228;
  undefined4 uStack_224;
  int local_220;
  TMap<int,FPendingBossAlarmInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingBossAlarmInfo,0>_>
  *local_218;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_210;
  undefined8 uStack_1f0;
  FDS_WorldBossStateInfo local_1e8;
  FDateTime local_1d0 [3];
  longlong local_1b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1a8;
  ulonglong local_88;
  
  if (param_1 == Finish) {
    local_88 = __security_cookie.value ^ (ulonglong)auStackY_298;
    pUVar13 = UDS_TimeUtilManager::GetInst();
    if ((pUVar13 != (UDS_TimeUtilManager *)0x0) && (((uint)pUVar13->_padding_ >> 0x1e & 1) == 0)) {
      local_240 = &(this->PendingAlarmInfo).field_0x10;
      iVar20 = *(int *)&(this->PendingAlarmInfo).field_0x28;
      iStack_248 = 0;
      this_00 = &this->PendingAlarmInfo;
      local_230 = 0;
      uStack_244 = 1;
      iVar19 = 0;
      iStack_234 = local_230;
      if (iVar20 != 0) {
        puVar23 = *(uint **)&(this->PendingAlarmInfo).field_0x20;
        if (puVar23 == (uint *)0x0) {
          puVar23 = (uint *)local_240;
        }
        uVar21 = *puVar23;
        local_230 = 0;
        while (uVar21 == 0) {
          lVar18 = (longlong)iStack_248;
          local_230 = local_230 + 0x20;
          iStack_248 = iStack_248 + 1;
          if ((int)(iVar20 + -1 + (iVar20 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_248) {
            iVar19 = *(int *)&(this->PendingAlarmInfo).field_0x28;
            iStack_234 = iVar20;
            goto LAB_14bb76a25;
          }
          uVar21 = puVar23[lVar18 + 1];
        }
        iVar19 = *(int *)&(this->PendingAlarmInfo).field_0x28;
        uStack_244 = -uVar21 & uVar21;
        uVar2 = (ulonglong)uStack_244 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_220 = (int)lVar18;
        iStack_234 = local_230 + -1 + local_220;
        if (iVar19 < iStack_234) {
          iStack_234 = iVar20;
        }
      }
LAB_14bb76a25:
      uVar21 = *(uint *)&(this->PendingAlarmInfo).field_0x28;
      uVar24 = uVar21 & 0xffffffe0;
      iStack_228 = *(int *)&(this->PendingAlarmInfo).field_0x8 -
                   *(int *)&(this->PendingAlarmInfo).field_0x34;
      uStack_238 = 0xffffffff;
      TStack_210._padding_ = CONCAT44(uStack_244,iStack_248);
      TStack_210.CurrentBitIndex = iStack_234;
      TStack_210.UnvisitedBitMask = 0xffffffff;
      iVar20 = (int)uVar21 >> 5;
      TStack_210._28_4_ = iStack_234;
      TStack_210.BaseBitIndex = local_230;
      uStack_1f0 = CONCAT44(uStack_224,iStack_228);
      local_250 = this_00;
      iStack_22c = iStack_234;
      local_218 = this_00;
      TStack_210.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_240;
      if ((((int)uVar21 < 0) || (iVar19 < (int)uVar21)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      dVar10 = __real_416312d000000000;
      dVar9 = __real_3e7ad7f29abcaf48;
      uVar3 = *(uint *)&(this->PendingAlarmInfo).field_0x28;
      if (uVar21 != uVar3) {
        puVar22 = *(undefined1 **)&(this->PendingAlarmInfo).field_0x20;
        if (puVar22 == (undefined1 *)0x0) {
          puVar22 = &(this->PendingAlarmInfo).field_0x10;
        }
        uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar20 * 4);
        while (uVar21 == 0) {
          lVar18 = (longlong)iVar20;
          uVar24 = uVar24 + 0x20;
          iVar20 = iVar20 + 1;
          uVar21 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
          goto LAB_14bb76b70;
          uVar21 = *(uint *)(puVar22 + lVar18 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
        lVar18 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar21 = (int)lVar18 + -1 + uVar24;
        if ((int)uVar3 < (int)uVar21) {
          uVar21 = uVar3;
        }
      }
LAB_14bb76b70:
      while( true ) {
        pTVar11 = local_218;
        if (*(int *)(&local_218->field_0x0 + 8) - *(int *)(&local_218->field_0x0 + 0x34) !=
            (int)uStack_1f0) {
          `TSparseArray<TSparseSetElement<TTuple<int,FPendingBossAlarmInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_258);
        }
        if (((TStack_210.CurrentBitIndex == uVar21) &&
            (TStack_210.Array ==
             (TBitArray<FDefaultBitArrayAllocator> *)&(this->PendingAlarmInfo).field_0x10)) &&
           (pTVar11 == this_00)) {
          bVar12 = 1 < *(int *)&(this->PendingAlarmInfo).field_0x48;
          if (!bVar12) {
            TSet<TTuple<int,FPendingBossAlarmInfo>,TDefaultMapHashableKeyFuncs<int,FPendingBossAlarmInfo,0>,FDefaultSetAllocator>
            ::UnhashElements((TSet<TTuple<int,FPendingBossAlarmInfo>,TDefaultMapHashableKeyFuncs<int,FPendingBossAlarmInfo,0>,FDefaultSetAllocator>
                              *)this_00);
          }
          puVar22 = &(this->PendingAlarmInfo).field_0xc;
          *(undefined4 *)&(this->PendingAlarmInfo).field_0x8 = 0;
          if (*(int *)puVar22 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar22);
          }
          *(undefined4 *)&(this->PendingAlarmInfo).field_0x30 = 0xffffffff;
          *(undefined4 *)&(this->PendingAlarmInfo).field_0x34 = 0;
          iVar20 = *(int *)&(this->PendingAlarmInfo).field_0x2c;
          *(undefined4 *)&(this->PendingAlarmInfo).field_0x28 = 0;
          if ((iVar20 < 0) || (0x80 < iVar20)) {
            *(undefined4 *)&(this->PendingAlarmInfo).field_0x2c = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PendingAlarmInfo).field_0x10,
                       0);
          }
          if (bVar12) {
            *(undefined4 *)&(this->PendingAlarmInfo).field_0x48 = 1;
            TSet<TTuple<int,FPendingBossAlarmInfo>,TDefaultMapHashableKeyFuncs<int,FPendingBossAlarmInfo,0>,FDefaultSetAllocator>
            ::Rehash((TSet<TTuple<int,FPendingBossAlarmInfo>,TDefaultMapHashableKeyFuncs<int,FPendingBossAlarmInfo,0>,FDefaultSetAllocator>
                      *)this_00);
          }
          pUVar16 = UDS_LoadingEvent::GetEvent();
          if (pUVar16 == (UDS_LoadingEvent *)0x0) {
            return;
          }
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &pUVar16->LoadingPhaseDelegate,this);
          return;
        }
        lVar18 = *(longlong *)&pTVar11->field_0x0;
        local_1b8 = *(longlong *)((longlong)TStack_210.CurrentBitIndex * 0x20 + 0x10 + lVar18);
        puVar1 = (undefined8 *)((longlong)TStack_210.CurrentBitIndex * 0x20 + lVar18);
        dVar6 = (double)puVar1[1];
        iVar20 = (int)*puVar1;
        dVar5 = UDS_TimeUtilManager::GetCurrentServerTime();
        pFVar14 = FDateTime::FDateTime(local_1d0,0x7b2,1,1,0,0,0,0);
        dVar6 = dVar6 - (double)(pFVar14->Ticks + ((longlong)(dVar5 * dVar10) - local_1b8)) * dVar9;
        if (dVar6 <= 0.0) {
          return;
        }
        pFVar15 = TMapBase<int,FDS_WorldBossStateInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossStateInfo,0>_>
                  ::FindChecked((TMapBase<int,FDS_WorldBossStateInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossStateInfo,0>_>
                                 *)&this->WorldBossStateInfoMap,iVar20);
        if (pFVar15->Status == NotSpawned) break;
        pFVar15 = TMapBase<int,FDS_WorldBossStateInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossStateInfo,0>_>
                  ::FindChecked((TMapBase<int,FDS_WorldBossStateInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossStateInfo,0>_>
                                 *)&this->WorldBossStateInfoMap,iVar20);
        uVar7 = pFVar15->BossID;
        uVar8 = *(undefined3 *)&pFVar15->field_0x5;
        local_1e8.NextEventTime.Ticks = (pFVar15->NextEventTime).Ticks;
        local_1e8.IsExist = pFVar15->IsExist;
        local_1e8._17_7_ = *(undefined7 *)&pFVar15->field_0x11;
        local_1e8.Status = NotSpawned;
        local_1e8.BossID = uVar7;
        local_1e8._5_3_ = uVar8;
        SetAlarmTimer(this,PreDisAppear,&local_1e8,dVar6);
        TStack_210.UnvisitedBitMask = TStack_210.UnvisitedBitMask & ~TStack_210._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_210);
      }
      return;
    }
    pUVar17 = UDS_LogManager::GetInst();
    if (pUVar17 != (UDS_LogManager *)0x0) {
      pUVar17 = UDS_LogManager::GetInst();
      local_1a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_1a8,"UDS_WorldBossManager::OnPostLoadingCallback",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar17,1,Warning,local_1a8.Ptr,0x119,L"UDS_TimeUtilManager is InValid.");
      if ((void *)local_1a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_1a8._padding_);
      }
    }
  }
  return;
}

// ProcessBossEvent @ 14bb7e6f0

void __thiscall
UDS_WorldBossManager::ProcessBossEvent
          (UDS_WorldBossManager *this,EDS_WorldBossNotifyType param_1,
          FDS_WorldBossStateInfo *param_2,int param_3)

{
  longlong lVar1;
  double dVar2;
  undefined4 uVar3;
  undefined3 uVar4;
  int iVar5;
  longlong lVar6;
  UDS_WorldBossEvent *pUVar7;
  uint uVar8;
  undefined1 *puVar9;
  FDS_WorldBossStateInfo local_28;
  
  uVar8 = param_2->BossID;
  if (*(int *)&(this->WorldBossStateInfoMap).field_0x8 !=
      *(int *)&(this->WorldBossStateInfoMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->WorldBossStateInfoMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->WorldBossStateInfoMap).field_0x38;
    }
    iVar5 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->WorldBossStateInfoMap).field_0x48 - 1U & uVar8) * 4);
    if (iVar5 != -1) {
      do {
        lVar1 = *(longlong *)&this->WorldBossStateInfoMap + (longlong)iVar5 * 0x28;
        if (*(uint *)(*(longlong *)&this->WorldBossStateInfoMap + (longlong)iVar5 * 0x28) == uVar8)
        {
          lVar6 = lVar1 + 8;
          if (lVar1 == 0) {
            lVar6 = 0;
          }
          if (lVar6 == 0) {
            return;
          }
          if (param_1 == PreAppear) {
            dVar2 = GetDisplayTime_Seconds(this,PreAppear,uVar8);
            ShowMessage(this,uVar8,PreAppear,
                        (int)((longlong)
                              ROUND(dVar2 * __real_3fa1111111111111 + __real_3fe0000000000000) >> 1)
                       );
            uVar8 = param_2->BossID;
          }
          else {
            if (param_1 == Appear) {
              ShowMessage(this,uVar8,Appear,-1);
              SetAlarmTimer(this,PreDisAppear,param_2,(double)param_3);
              goto LAB_14bb7e8b8;
            }
            if (param_1 != PreDisAppear) {
              if (param_1 != DisAppear) {
                if (param_1 != Dead) goto LAB_14bb7e8b8;
                RemoveAlarmTimer(this,uVar8,PreDisAppear);
              }
              ShowMessage(this,uVar8,param_1,-1);
              uVar3 = param_2->BossID;
              uVar4 = *(undefined3 *)&param_2->field_0x5;
              local_28.NextEventTime.Ticks = (param_2->NextEventTime).Ticks;
              local_28.IsExist = param_2->IsExist;
              local_28._17_7_ = *(undefined7 *)&param_2->field_0x11;
              local_28.Status = Upcoming;
              local_28.BossID = uVar3;
              local_28._5_3_ = uVar4;
              SetAlarmTimer(this,PreAppear,&local_28,(double)param_3);
              goto LAB_14bb7e8b8;
            }
            dVar2 = GetDisplayTime_Seconds(this,PreDisAppear,uVar8);
            ShowMessage(this,uVar8,PreDisAppear,
                        (int)((longlong)
                              ROUND(dVar2 * __real_3fa1111111111111 + __real_3fe0000000000000) >> 1)
                       );
          }
          RemoveAlarmTimer(this,uVar8,param_1);
LAB_14bb7e8b8:
          SetWorldBossEvent(this,param_2);
          pUVar7 = UDS_WorldBossEvent::GetEvent();
          if (pUVar7 == (UDS_WorldBossEvent *)0x0) {
            return;
          }
          FDS_EventDelegate<enum_EDS_WorldBossNotifyType_const_,FDS_WorldBossStateInfo_const_&>::
          Broadcast(&pUVar7->OnChangedWorldBossNotify,param_1,param_2);
          return;
        }
        iVar5 = *(int *)(lVar1 + 0x20);
      } while (iVar5 != -1);
    }
  }
  return;
}

// RegisterBossEventPostLoading @ 14bb802e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_WorldBossManager::RegisterBossEventPostLoading
          (UDS_WorldBossManager *this,double param_1,int param_2)

{
  TMap<int,FDS_WorldBossStateInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossStateInfo,0>_>
  *this_00;
  int iVar1;
  UDS_LogManager *pUVar2;
  FDS_WorldBossStateInfo *pFVar3;
  UDS_WorldBossEvent *pUVar4;
  UDS_TimeUtilManager *pUVar5;
  FDateTime *pFVar6;
  UDS_LoadingEvent *pUVar7;
  undefined1 *puVar8;
  double dVar9;
  undefined1 auStackY_1b8 [32];
  int local_178 [2];
  undefined1 local_170 [24];
  int *local_158;
  undefined1 *local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  this_00 = &this->WorldBossStateInfoMap;
  local_178[0] = param_2;
  if (*(int *)&(this->WorldBossStateInfoMap).field_0x8 !=
      *(int *)&(this->WorldBossStateInfoMap).field_0x34) {
    puVar8 = *(undefined1 **)&(this->WorldBossStateInfoMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->WorldBossStateInfoMap).field_0x38;
    }
    iVar1 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->WorldBossStateInfoMap).field_0x48 - 1U & param_2) * 4
                    );
    if (iVar1 != -1) {
      do {
        if (*(int *)(*(longlong *)this_00 + (longlong)iVar1 * 0x28) == param_2) {
          pFVar3 = TMapBase<int,FDS_WorldBossStateInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossStateInfo,0>_>
                   ::FindChecked((TMapBase<int,FDS_WorldBossStateInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossStateInfo,0>_>
                                  *)this_00,param_2);
          SetWorldBossEvent(this,pFVar3);
          pUVar4 = UDS_WorldBossEvent::GetEvent();
          if (pUVar4 != (UDS_WorldBossEvent *)0x0) {
            pFVar3 = TMapBase<int,FDS_WorldBossStateInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossStateInfo,0>_>
                     ::FindChecked((TMapBase<int,FDS_WorldBossStateInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossStateInfo,0>_>
                                    *)this_00,local_178[0]);
            FDS_EventDelegate<enum_EDS_WorldBossNotifyType_const_,FDS_WorldBossStateInfo_const_&>::
            Broadcast(&pUVar4->OnChangedWorldBossNotify,Appear,pFVar3);
          }
          pUVar5 = UDS_TimeUtilManager::GetInst();
          if ((pUVar5 != (UDS_TimeUtilManager *)0x0) && (((uint)pUVar5->_padding_ >> 0x1e & 1) == 0)
             ) {
            dVar9 = UDS_TimeUtilManager::GetCurrentServerTime();
            dVar9 = dVar9 * __real_416312d000000000;
            pFVar6 = FDateTime::FDateTime((FDateTime *)local_170,0x7b2,1,1,0,0,0,0);
            local_170._16_8_ = pFVar6->Ticks + (longlong)dVar9;
            local_158 = local_178;
            local_150 = local_170 + 8;
            local_170._8_8_ = param_1;
            TSet<TTuple<int,FPendingBossAlarmInfo>,TDefaultMapHashableKeyFuncs<int,FPendingBossAlarmInfo,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<int_const_&,FPendingBossAlarmInfo_&&>_>
                      ((TSet<TTuple<int,FPendingBossAlarmInfo>,TDefaultMapHashableKeyFuncs<int,FPendingBossAlarmInfo,0>,FDefaultSetAllocator>
                        *)&this->PendingAlarmInfo,
                       (TPairInitializer<int_const_&,FPendingBossAlarmInfo_&&> *)local_170,
                       (bool *)(local_170 + 0x18));
            pUVar7 = UDS_LoadingEvent::GetEvent();
            if (pUVar7 == (UDS_LoadingEvent *)0x0) {
              return;
            }
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar7->LoadingPhaseDelegate,this);
            TMulticastDelegateRegistration<void___cdecl(enum_EDS_LoadingPhase),FDefaultDelegateUserPolicy>
            ::AddUObject<UDS_WorldBossManager>
                      (&pUVar7->LoadingPhaseDelegate,(UDS_WorldBossManager *)local_170,
                       (pmf_1627be14)this);
            return;
          }
          pUVar2 = UDS_LogManager::GetInst();
          if (pUVar2 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar2 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_170 + 0x28),
                     "UDS_WorldBossManager::RegisterBossEventPostLoading",0x32,Yes);
          UDS_LogManager::PrintLog
                    (pUVar2,1,Warning,local_148.Ptr,0x102,L"UDS_TimeUtilManager is InValid.");
          goto LAB_14bb803d9;
        }
        iVar1 = *(int *)(*(longlong *)this_00 + 0x20 + (longlong)iVar1 * 0x28);
      } while (iVar1 != -1);
    }
  }
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 != (UDS_LogManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_170 + 0x28),
               "UDS_WorldBossManager::RegisterBossEventPostLoading",0x32,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Warning,local_148.Ptr,0xf3,L"WorldBossStateInfoMap not found for ID: %d");
LAB_14bb803d9:
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  return;
}

// RemoveAlarmTimer @ 14bb837f0

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

void __thiscall
UDS_WorldBossManager::RemoveAlarmTimer
          (UDS_WorldBossManager *this,int param_1,EDS_WorldBossNotifyType param_2)

{
  int iVar1;
  UDS_LogManager *pUVar2;
  FTimerManager *this_00;
  FTimerData *pFVar3;
  int *piVar4;
  undefined1 *puVar5;
  FTimerHandle *pFVar6;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (*(int *)&(this->AlarmTimerHandleMap).field_0x8 !=
      *(int *)&(this->AlarmTimerHandleMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->AlarmTimerHandleMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->AlarmTimerHandleMap).field_0x38;
    }
    iVar1 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->AlarmTimerHandleMap).field_0x48 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar4 = (int *)((longlong)iVar1 * 0x20 + *(longlong *)&this->AlarmTimerHandleMap);
        if (*piVar4 == param_1) {
          pFVar6 = (FTimerHandle *)(piVar4 + 2);
          if (piVar4 == (int *)0x0) {
            pFVar6 = (FTimerHandle *)0x0;
          }
          if (pFVar6 != (FTimerHandle *)0x0) {
            if (param_2 != PreAppear) {
              if (param_2 != PreDisAppear) {
                return;
              }
              pFVar6 = pFVar6 + 1;
              if (pFVar6 == (FTimerHandle *)0x0) {
                return;
              }
            }
            if (pFVar6->Handle == 0) {
              return;
            }
            this_00 = FDS_TimerManager::Get((UObject *)0x0);
            pFVar3 = FTimerManager::FindTimer(this_00,pFVar6);
            if (pFVar3 != (FTimerData *)0x0) {
              FTimerManager::InternalClearTimer(this_00,(FTimerHandle)pFVar6->Handle);
            }
            pFVar6->Handle = 0;
            return;
          }
          break;
        }
        iVar1 = piVar4[6];
      } while (iVar1 != -1);
    }
  }
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 != (UDS_LogManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_WorldBossManager::GetAlarmTimerHandle",0x29,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Warning,local_138.Ptr,0x223,L"AlarmTimerHandleMap not found for ID: %d");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// Reset @ 14bb864c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_WorldBossManager::Reset(UDS_WorldBossManager *this)

{
  undefined1 *puVar1;
  TMap<int,FDS_WorldBossAlarmTimers,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossAlarmTimers,0>_>
  *this_00;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FTimerManager *pFVar8;
  FTimerData *pFVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->AlarmTimerHandleMap).field_0x28;
  puVar1 = &(this->AlarmTimerHandleMap).field_0x10;
  iVar12 = 0;
  this_00 = &this->AlarmTimerHandleMap;
  iVar14 = 0;
  uVar6 = 1;
  iVar7 = iVar14;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->AlarmTimerHandleMap).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    iVar14 = 0;
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14bb8656d;
      uVar11 = puVar15[lVar10 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iVar7 = local_res10 + -1 + iVar14;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bb8656d:
  uVar11 = *(uint *)&(this->AlarmTimerHandleMap).field_0x28;
  uVar16 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar12);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->AlarmTimerHandleMap).field_0x8 -
                       *(int *)&(this->AlarmTimerHandleMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->AlarmTimerHandleMap).field_0x28;
  if (uVar11 != uVar6) {
    puVar13 = *(undefined1 **)&(this->AlarmTimerHandleMap).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14bb86670;
      uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar11 = (int)lVar10 + -1 + uVar16;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_14bb86670:
  while( true ) {
    if (*(int *)&(this->AlarmTimerHandleMap).field_0x8 -
        *(int *)&(this->AlarmTimerHandleMap).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,FDS_WorldBossAlarmTimers>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar10 = (longlong)TStack_60.CurrentBitIndex * 0x20 + *(longlong *)&this_00->field_0x0;
    pFVar8 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar9 = FTimerManager::FindTimer(pFVar8,(FTimerHandle *)(lVar10 + 8));
    if (pFVar9 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(pFVar8,(FTimerHandle)*(ulong64 *)(lVar10 + 8));
    }
    *(undefined8 *)(lVar10 + 8) = 0;
    pFVar8 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar9 = FTimerManager::FindTimer(pFVar8,(FTimerHandle *)(lVar10 + 0x10));
    if (pFVar9 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(pFVar8,(FTimerHandle)*(ulong64 *)(lVar10 + 0x10));
    }
    *(undefined8 *)(lVar10 + 0x10) = 0;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  bVar5 = 1 < *(int *)&(this->AlarmTimerHandleMap).field_0x48;
  if (!bVar5) {
    TSet<TTuple<int,FDS_WorldBossAlarmTimers>,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossAlarmTimers,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,FDS_WorldBossAlarmTimers>,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossAlarmTimers,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->AlarmTimerHandleMap).field_0xc;
  *(undefined4 *)&(this->AlarmTimerHandleMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AlarmTimerHandleMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AlarmTimerHandleMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->AlarmTimerHandleMap).field_0x2c;
  *(undefined4 *)&(this->AlarmTimerHandleMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->AlarmTimerHandleMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AlarmTimerHandleMap).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->AlarmTimerHandleMap).field_0x48 = 1;
    TSet<TTuple<int,FDS_WorldBossAlarmTimers>,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossAlarmTimers,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,FDS_WorldBossAlarmTimers>,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossAlarmTimers,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// SetAlarmTimer @ 14bb89d90

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

void __thiscall
UDS_WorldBossManager::SetAlarmTimer
          (UDS_WorldBossManager *this,EDS_WorldBossNotifyType param_1,
          FDS_WorldBossStateInfo *param_2,double param_3)

{
  uint *puVar1;
  long64 lVar2;
  uint uVar3;
  UDS_LogManager *pUVar4;
  UDS_TimeUtilManager *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FTimerManager *pFVar8;
  FTimerData *pFVar9;
  ForElementType<TAlignedBytes<16,16>_> FVar10;
  undefined1 *puVar11;
  uint *puVar12;
  FTimerHandle *pFVar13;
  undefined1 auStackY_1d8 [32];
  FTimerHandle local_198;
  FDelegateAllocation local_190;
  undefined1 local_180 [264];
  ForElementType<TAlignedBytes<16,16>_> local_78;
  wchar_t *local_70;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (0.0 < param_3) {
    local_180._0_4_ = param_2->BossID;
    FVar10 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    if (*(int *)&(this->AlarmTimerHandleMap).field_0x8 !=
        *(int *)&(this->AlarmTimerHandleMap).field_0x34) {
      puVar11 = *(undefined1 **)&(this->AlarmTimerHandleMap).field_0x40;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &(this->AlarmTimerHandleMap).field_0x38;
      }
      uVar3 = *(uint *)(puVar11 +
                       (ulonglong)
                       (*(int *)&(this->AlarmTimerHandleMap).field_0x48 - 1U & local_180._0_4_) * 4)
      ;
      if (uVar3 != 0xffffffff) {
        do {
          puVar12 = (uint *)((longlong)(int)uVar3 * 0x20 + *(longlong *)&this->AlarmTimerHandleMap);
          if (*puVar12 == local_180._0_4_) {
            if (puVar12 != (uint *)0x0) goto LAB_14bb89edd;
            break;
          }
          uVar3 = puVar12[6];
        } while (uVar3 != 0xffffffff);
      }
    }
    local_198.Handle = (ulong64)local_180;
    TSet<TTuple<int,FDS_WorldBossAlarmTimers>,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossAlarmTimers,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<int_const_&>_>
              ((TSet<TTuple<int,FDS_WorldBossAlarmTimers>,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossAlarmTimers,0>,FDefaultSetAllocator>
                *)&this->AlarmTimerHandleMap,(int)local_180 + 4,
               (TKeyInitializer<int_const_&> *)(ulonglong)(uint)local_180._0_4_,(bool *)&local_198);
    puVar12 = (uint *)((longlong)(int)local_180._4_4_ * 0x20 +
                      *(longlong *)&this->AlarmTimerHandleMap);
LAB_14bb89edd:
    local_190.DelegateSize = 0;
    puVar1 = puVar12 + 2;
    local_190.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    if (param_1 == PreAppear) {
      pUVar5 = UDS_TimeUtilManager::GetInst();
      if (pUVar5 != (UDS_TimeUtilManager *)0x0) {
        UDS_TimeUtilManager::GetCurrentServerTime();
        FDateTime::FDateTime((FDateTime *)&local_198,0x7b2,1,1,0,0,0,0);
      }
    }
    else {
      if (param_1 != PreDisAppear) goto LAB_14bb8a12b;
      pUVar5 = UDS_TimeUtilManager::GetInst();
      puVar12 = puVar1;
      if (pUVar5 != (UDS_TimeUtilManager *)0x0) {
        UDS_TimeUtilManager::GetCurrentServerTime();
        FDateTime::FDateTime((FDateTime *)&local_198,0x7b2,1,1,0,0,0,0);
      }
    }
    pFVar13 = (FTimerHandle *)(puVar12 + 2);
    puVar6 = UE::Core::Private::DelegateAllocate(0x48,&local_190);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__W4EDS_WorldBossNotifyType__UFDS_WorldBossStateInfo__H__6B_
      ;
      *(EDS_WorldBossNotifyType *)(puVar6 + 1) = param_1;
      lVar2 = (param_2->NextEventTime).Ticks;
      puVar6[2] = *(undefined8 *)param_2;
      puVar6[3] = lVar2;
      puVar6[4] = *(undefined8 *)&param_2->IsExist;
      *(undefined4 *)(puVar6 + 5) = 0;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[6] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_WorldBossManager____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__W4EDS_WorldBossNotifyType__UFDS_WorldBossStateInfo__H__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_WorldBossManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[7] = 0;
      local_198.Handle = (ulong64)this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_WorldBossManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 7),(FObjectPtr)&local_198);
      puVar6[8] = ProcessBossEvent;
    }
    if (pFVar13 == (FTimerHandle *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_78 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_180 + 8),
                   "UDS_WorldBossManager::SetAlarmTimer",0x23,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,local_70,0xb6,L"newTimerHandle is nullptr.");
        if (local_78 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_78);
        }
      }
    }
    else {
      pFVar8 = FDS_TimerManager::Get((UObject *)0x0);
      local_198.Handle = pFVar13->Handle;
      pFVar9 = FTimerManager::FindTimer(pFVar8,&local_198);
      if ((pFVar9 != (FTimerData *)0x0) && (pFVar9->Status != Paused)) {
        pFVar8 = FDS_TimerManager::Get((UObject *)0x0);
        FTimerManager::ClearTimer(pFVar8,pFVar13);
      }
      pFVar8 = FDS_TimerManager::Get((UObject *)0x0);
      FTimerManager::SetTimer
                (pFVar8,pFVar13,
                 (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                 &local_190,(float)param_3,false,__real_bf800000);
    }
    FVar10 = local_190.DelegateAllocator;
    if (local_190.DelegateSize != 0) {
      if (local_190.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        return;
      }
      (*(code *)**(undefined8 **)local_190.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_190,0,0,0x10);
      local_190.DelegateSize = 0;
      FVar10 = local_190.DelegateAllocator;
    }
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_78 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_180 + 8),
               "UDS_WorldBossManager::SetAlarmTimer",0x23,Yes);
    UDS_LogManager::PrintLog
              (pUVar4,1,Warning,local_70,0x8c,
               L"[ WorldBoss ID : %d ] Timer rate(% .2f) is invalid.Timer will not be set.");
    FVar10 = local_78;
  }
LAB_14bb8a12b:
  if (FVar10 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FVar10);
  }
  return;
}

// SetSelectedWorldBossID @ 14bb8c6a0

void __thiscall UDS_WorldBossManager::SetSelectedWorldBossID(UDS_WorldBossManager *this,int param_1)

{
  int iVar1;
  bool bVar2;
  UDS_WorldBossEvent *pUVar3;
  
  if (this->SelectedWorldBossID != param_1) {
    this->SelectedWorldBossID = param_1;
    pUVar3 = UDS_WorldBossEvent::GetEvent();
    if (pUVar3 != (UDS_WorldBossEvent *)0x0) {
      iVar1 = this->SelectedWorldBossID;
      bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar3->OnSelectedWorldBoss);
      if (bVar2) {
        TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar3->OnSelectedWorldBoss).Delegate,iVar1);
      }
    }
  }
  return;
}

// SetWorldBossEvent @ 14bb8e1b0

void __thiscall
UDS_WorldBossManager::SetWorldBossEvent(UDS_WorldBossManager *this,FDS_WorldBossStateInfo *param_1)

{
  FDS_EventDelegate<EDS_WorldBossSpawnStatus_const_&,int_const_> *this_00;
  FScriptContainerElement *pFVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  long64 lVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  FDS_WorldBossInfo *pFVar12;
  TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_> *pTVar13;
  UDS_WorldBossEvent *pUVar14;
  undefined1 *puVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  TPairInitializer<int_const_&,FDS_WorldBossStateInfo_const_&> local_res18;
  FDS_WorldBossStateInfo *local_68;
  FDS_WorldBossStateInfo *local_60;
  FDestructionSentinel local_58;
  
  uVar2 = param_1->BossID;
  local_68 = param_1;
  local_60 = param_1;
  TSet<TTuple<int,FDS_WorldBossStateInfo>,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossStateInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,FDS_WorldBossStateInfo_const_&>_>
            ((TSet<TTuple<int,FDS_WorldBossStateInfo>,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossStateInfo,0>,FDefaultSetAllocator>
              *)&this->WorldBossStateInfoMap,&local_res18,(bool *)&local_68);
  if (*(int *)&(this->WorldBossInfoMap).field_0x8 != *(int *)&(this->WorldBossInfoMap).field_0x34) {
    puVar15 = *(undefined1 **)&(this->WorldBossInfoMap).field_0x40;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(this->WorldBossInfoMap).field_0x38;
    }
    iVar10 = *(int *)(puVar15 +
                     (ulonglong)(*(int *)&(this->WorldBossInfoMap).field_0x48 - 1U & uVar2) * 4);
    if (iVar10 != -1) {
      lVar18 = *(longlong *)&this->WorldBossInfoMap;
      do {
        if (*(uint *)(lVar18 + (longlong)iVar10 * 0x30) == uVar2) {
          pFVar12 = TMapBase<int,FDS_WorldBossInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossInfo,0>_>
                    ::FindChecked((TMapBase<int,FDS_WorldBossInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossInfo,0>_>
                                   *)&this->WorldBossInfoMap,uVar2);
          local_res10[0] = pFVar12->IslandNumber;
          pTVar13 = TMapBase<int,TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_>,0>_>
                    ::FindOrAddImpl<int_const_&>
                              ((TMapBase<int,TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_>,0>_>
                                *)&this->WorldBossStateInfoMapByIslandNumber,local_res10[0],
                               (int *)local_res10);
          iVar10 = pTVar13->ArrayNum;
          pFVar17 = (pTVar13->AllocatorInstance).Data;
          pFVar1 = pFVar17 + (longlong)iVar10 * 0x18;
          goto LAB_14bb8e288;
        }
        iVar10 = *(int *)(lVar18 + 0x28 + (longlong)iVar10 * 0x30);
      } while (iVar10 != -1);
    }
  }
LAB_14bb8e304:
  pUVar14 = UDS_WorldBossEvent::GetEvent();
  if (pUVar14 != (UDS_WorldBossEvent *)0x0) {
    this_00 = &pUVar14->OnChangedWorldBossStatus;
    bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
    if (bVar7) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_58);
      puVar15 = &(pUVar14->OnChangedWorldBossStatus).Delegate.field_0x1c;
      *(int *)puVar15 = *(int *)puVar15 + 1;
      bVar7 = false;
      uVar16 = *(int *)&(pUVar14->OnChangedWorldBossStatus).Delegate.field_0x10 - 1;
      if (-1 < (int)uVar16) {
        lVar18 = (longlong)(int)uVar16 << 4;
        bVar7 = false;
        do {
          uVar11 = 0;
          if ((int)uVar16 < *(int *)&(pUVar14->OnChangedWorldBossStatus).Delegate.field_0x10) {
            uVar11 = ~uVar16 >> 0x1f;
          }
          if ((uVar11 == 0) &&
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
          lVar3 = *(longlong *)&(pUVar14->OnChangedWorldBossStatus).Delegate.field_0x8;
          if (((*(int *)(lVar18 + 8 + lVar3) == 0) ||
              (plVar4 = *(longlong **)(lVar18 + lVar3), plVar4 == (longlong *)0x0)) ||
             (cVar9 = (**(code **)(*plVar4 + 0x68))(plVar4,&param_1->Status,uVar2), cVar9 == '\0'))
          {
            bVar7 = true;
          }
          lVar18 = lVar18 + -0x10;
          uVar16 = uVar16 - 1;
        } while (-1 < (int)uVar16);
      }
      puVar15 = &(pUVar14->OnChangedWorldBossStatus).Delegate.field_0x1c;
      *(int *)puVar15 = *(int *)puVar15 + -1;
      if (bVar7) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
      }
      if (local_58.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
      }
    }
  }
  return;
LAB_14bb8e288:
  if (pTVar13->ArrayNum != iVar10) {
    local_res8[0] = 0;
    `TCheckedPointerIterator<FDS_WorldBossStateInfo,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_res8);
  }
  if (pFVar17 == pFVar1) {
    iVar10 = pTVar13->ArrayNum;
    if (iVar10 == pTVar13->ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
    }
    pTVar13->ArrayNum = iVar10 + 1;
    lVar6 = (param_1->NextEventTime).Ticks;
    pFVar17 = (pTVar13->AllocatorInstance).Data;
    pFVar1 = pFVar17 + (longlong)iVar10 * 0x18;
    *(undefined8 *)pFVar1 = *(undefined8 *)param_1;
    *(long64 *)(pFVar1 + 8) = lVar6;
    *(undefined8 *)(pFVar17 + (longlong)iVar10 * 0x18 + 0x10) = *(undefined8 *)&param_1->IsExist;
    goto LAB_14bb8e304;
  }
  if (*(int *)pFVar17 == param_1->BossID) goto LAB_14bb8e2b4;
  pFVar17 = pFVar17 + 0x18;
  goto LAB_14bb8e288;
LAB_14bb8e2b4:
  lVar6 = (param_1->NextEventTime).Ticks;
  *(undefined8 *)pFVar17 = *(undefined8 *)param_1;
  *(long64 *)(pFVar17 + 8) = lVar6;
  *(undefined8 *)(pFVar17 + 0x10) = *(undefined8 *)&param_1->IsExist;
  goto LAB_14bb8e304;
}

// ShowMessage @ 14bb8e770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_WorldBossManager::ShowMessage
          (UDS_WorldBossManager *this,int param_1,EDS_WorldBossNotifyType param_2,int param_3)

{
  TMap<EDS_WorldBossNotifyType,FDS_WorldBossNotiMessageInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_WorldBossNotifyType,FDS_WorldBossNotiMessageInfo,0>_>
  *this_00;
  int iVar1;
  int iVar2;
  FDS_WorldBossInfo *pFVar3;
  FText *pFVar4;
  FString *pFVar5;
  FDS_WorldBossNotiMessageInfo *pFVar6;
  undefined1 *puVar7;
  FStringFormatArg *pFVar8;
  TMap<int,FDS_WorldBossInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossInfo,0>_>
  *this_01;
  undefined1 auStackY_1b8 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_188;
  undefined1 local_178 [8];
  FDS_WorldBossNotiMessageInfo *local_170;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  FDS_Text local_148;
  FDS_Text local_f8;
  undefined1 local_a8 [32];
  void *local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  void *local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  this_00 = &this->NotiMessageInfoMap;
  if (*(int *)&(this->NotiMessageInfoMap).field_0x8 ==
      *(int *)&(this->NotiMessageInfoMap).field_0x34) {
    return;
  }
  puVar7 = *(undefined1 **)&(this->NotiMessageInfoMap).field_0x40;
  if (puVar7 == (undefined1 *)0x0) {
    puVar7 = &(this->NotiMessageInfoMap).field_0x38;
  }
  iVar2 = *(int *)(puVar7 + ((ulonglong)(*(int *)&(this->NotiMessageInfoMap).field_0x48 - 1) &
                            (ulonglong)param_2) * 4);
  if (iVar2 == -1) {
    return;
  }
  while (*(EDS_WorldBossNotifyType *)(*(longlong *)this_00 + (longlong)iVar2 * 0x18) != param_2) {
    iVar2 = *(int *)(*(longlong *)this_00 + 0x10 + (longlong)iVar2 * 0x18);
    if (iVar2 == -1) {
      return;
    }
  }
  this_01 = &this->WorldBossInfoMap;
  if (*(int *)&(this->WorldBossInfoMap).field_0x8 == *(int *)&(this->WorldBossInfoMap).field_0x34) {
    return;
  }
  puVar7 = *(undefined1 **)&(this->WorldBossInfoMap).field_0x40;
  if (puVar7 == (undefined1 *)0x0) {
    puVar7 = &(this->WorldBossInfoMap).field_0x38;
  }
  iVar2 = *(int *)(puVar7 + (ulonglong)(*(int *)&(this->WorldBossInfoMap).field_0x48 - 1U & param_1)
                            * 4);
  if (iVar2 == -1) {
    return;
  }
  while (*(int *)(*(longlong *)this_01 + (longlong)iVar2 * 0x30) != param_1) {
    iVar2 = *(int *)(*(longlong *)this_01 + 0x28 + (longlong)iVar2 * 0x30);
    if (iVar2 == -1) {
      return;
    }
  }
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_74 = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_7c = 0x80;
  local_78 = 0xffffffff;
  local_168._8_8_ =
       TMapBase<enum_EDS_WorldBossNotifyType,FDS_WorldBossNotiMessageInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WorldBossNotifyType,FDS_WorldBossNotiMessageInfo,0>_>
       ::FindChecked(this_00,param_2);
  local_168._0_8_ = local_158;
  local_158._0_4_ = 4;
  local_168._8_8_ = &((FDS_WorldBossNotiMessageInfo *)local_168._8_8_)->IconID;
  TSet<TTuple<enum_EDS_MessageArgsType,__int64>,TDefaultMapHashableKeyFuncs<enum_EDS_MessageArgsType,__int64,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_MessageArgsType_&&,int_&>_>
            (local_a8,(TPairInitializer<EDS_MessageArgsType_&&,int_&> *)(local_158 + 4),
             (bool *)local_168);
  local_168._8_8_ =
       TMapBase<enum_EDS_WorldBossNotifyType,FDS_WorldBossNotiMessageInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WorldBossNotifyType,FDS_WorldBossNotiMessageInfo,0>_>
       ::FindChecked(this_00,param_2);
  local_168._0_8_ = local_158;
  local_158._0_4_ = 3;
  TSet<TTuple<enum_EDS_MessageArgsType,__int64>,TDefaultMapHashableKeyFuncs<enum_EDS_MessageArgsType,__int64,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_MessageArgsType_&&,int_&>_>
            (local_a8,(TPairInitializer<EDS_MessageArgsType_&&,int_&> *)(local_158 + 4),
             (bool *)local_168);
  pFVar3 = TMapBase<int,FDS_WorldBossInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossInfo,0>_>
           ::FindChecked((TMapBase<int,FDS_WorldBossInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossInfo,0>_>
                          *)this_01,param_1);
  iVar2 = pFVar3->ZoneStringID;
  pFVar3 = TMapBase<int,FDS_WorldBossInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossInfo,0>_>
           ::FindChecked((TMapBase<int,FDS_WorldBossInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossInfo,0>_>
                          *)this_01,param_1);
  iVar1 = pFVar3->NpcStringID;
  local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.ArrayNum = 0;
  local_188.ArrayMax = 0;
  local_f8.StringTableType = None;
  local_f8.StringTableID = 0;
  local_f8.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_f8.StringEnumTableNameID.Number = 0;
  local_f8.DateTime.Ticks = 0;
  local_f8.TimeSpan.Ticks = 0;
  local_f8.TimeExpressionType = None;
  local_f8.IsExpression = false;
  local_f8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.UniqueString.Data.ArrayNum = 0;
  local_f8.UniqueString.Data.ArrayMax = 0;
  local_f8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.FormatArgs.ArrayNum = 0;
  local_f8.FormatArgs.ArrayMax = 0;
  local_148.StringTableType = None;
  local_148.StringTableID = 0;
  local_148.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_148.StringEnumTableNameID.Number = 0;
  local_148.DateTime.Ticks = 0;
  local_148.TimeSpan.Ticks = 0;
  local_148.TimeExpressionType = None;
  local_148.IsExpression = false;
  local_148.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.UniqueString.Data.ArrayNum = 0;
  local_148.UniqueString.Data.ArrayMax = 0;
  local_148.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.FormatArgs.ArrayNum = 0;
  local_148.FormatArgs.ArrayMax = 0;
  if (-1 < iVar2) {
    FDS_Text::SetTextFromStringTable(&local_f8,StringWorld,(longlong)iVar2);
  }
  if (-1 < iVar1) {
    FDS_Text::SetTextFromStringTable(&local_148,StringWorld,(longlong)iVar1);
  }
  if (param_2 == PreAppear) {
    pFVar4 = FDS_Text::GetText(&local_f8,(FText *)local_168);
    pFVar5 = FText::ToString(pFVar4);
    iVar2 = local_188.ArrayNum;
    if (local_188.ArrayNum == local_188.ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_188.AllocatorInstance,&local_188.ArrayMax);
    }
    local_188.ArrayNum = iVar2 + 1;
    pFVar8 = (FStringFormatArg *)(local_188.AllocatorInstance.Data + (longlong)iVar2 * 0x20);
    pFVar5 = ::FString::FString((FString *)local_178,pFVar5);
    FStringFormatArg::FStringFormatArg(pFVar8,pFVar5);
    if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 0x10))();
    }
    if (-1 < param_3) {
      local_178 = (undefined1  [8])0x0;
      local_170 = (FDS_WorldBossNotiMessageInfo *)0x0;
      ::FString::AppendInt((FString *)local_178,param_3);
      iVar2 = local_188.ArrayNum;
      if (local_188.ArrayNum == local_188.ArrayMax) {
        iVar2 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&local_188.AllocatorInstance,&local_188.ArrayMax);
      }
      local_188.ArrayNum = iVar2 + 1;
      local_168._0_8_ = local_178;
      local_168._8_8_ = local_170;
      local_178 = (undefined1  [8])0x0;
      local_170 = (FDS_WorldBossNotiMessageInfo *)0x0;
      FStringFormatArg::FStringFormatArg
                ((FStringFormatArg *)(local_188.AllocatorInstance.Data + (longlong)iVar2 * 0x20),
                 (FString *)local_168);
      if (local_178 != (undefined1  [8])0x0) {
        FMemory::Free((void *)local_178);
      }
    }
LAB_14bb8ec4b:
    pFVar4 = FDS_Text::GetText(&local_148,(FText *)local_168);
    pFVar5 = FText::ToString(pFVar4);
    iVar2 = local_188.ArrayNum;
    if (local_188.ArrayNum == local_188.ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_188.AllocatorInstance,&local_188.ArrayMax);
    }
    local_188.ArrayNum = iVar2 + 1;
    pFVar8 = (FStringFormatArg *)(local_188.AllocatorInstance.Data + (longlong)iVar2 * 0x20);
    pFVar5 = ::FString::FString((FString *)local_178,pFVar5);
    FStringFormatArg::FStringFormatArg(pFVar8,pFVar5);
    if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 0x10))();
    }
  }
  else {
    if (param_2 == Appear) {
LAB_14bb8e9c6:
      pFVar4 = FDS_Text::GetText(&local_f8,(FText *)local_168);
      pFVar5 = FText::ToString(pFVar4);
      iVar2 = local_188.ArrayNum;
      if (local_188.ArrayNum == local_188.ArrayMax) {
        iVar2 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&local_188.AllocatorInstance,&local_188.ArrayMax);
      }
      local_188.ArrayNum = iVar2 + 1;
      pFVar8 = (FStringFormatArg *)(local_188.AllocatorInstance.Data + (longlong)iVar2 * 0x20);
      pFVar5 = ::FString::FString((FString *)local_178,pFVar5);
      FStringFormatArg::FStringFormatArg(pFVar8,pFVar5);
      if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 0x10))();
      }
      goto LAB_14bb8ec4b;
    }
    if (param_2 != PreDisAppear) {
      if ((param_2 != DisAppear) && (param_2 != Dead)) goto LAB_14bb8ece1;
      goto LAB_14bb8e9c6;
    }
    pFVar4 = FDS_Text::GetText(&local_148,(FText *)local_168);
    pFVar5 = FText::ToString(pFVar4);
    iVar2 = local_188.ArrayNum;
    if (local_188.ArrayNum == local_188.ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_188.AllocatorInstance,&local_188.ArrayMax);
    }
    local_188.ArrayNum = iVar2 + 1;
    pFVar8 = (FStringFormatArg *)(local_188.AllocatorInstance.Data + (longlong)iVar2 * 0x20);
    pFVar5 = ::FString::FString((FString *)local_178,pFVar5);
    FStringFormatArg::FStringFormatArg(pFVar8,pFVar5);
    if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 0x10))();
    }
    if (-1 < param_3) {
      local_178 = (undefined1  [8])0x0;
      local_170 = (FDS_WorldBossNotiMessageInfo *)0x0;
      ::FString::AppendInt((FString *)local_178,param_3);
      iVar2 = local_188.ArrayNum;
      if (local_188.ArrayNum == local_188.ArrayMax) {
        iVar2 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&local_188.AllocatorInstance,&local_188.ArrayMax);
      }
      local_188.ArrayNum = iVar2 + 1;
      local_168._0_8_ = local_178;
      local_168._8_8_ = local_170;
      local_178 = (undefined1  [8])0x0;
      local_170 = (FDS_WorldBossNotiMessageInfo *)0x0;
      FStringFormatArg::FStringFormatArg
                ((FStringFormatArg *)(local_188.AllocatorInstance.Data + (longlong)iVar2 * 0x20),
                 (FString *)local_168);
      if (local_178 != (undefined1  [8])0x0) {
        FMemory::Free((void *)local_178);
      }
    }
  }
  pFVar6 = TMapBase<enum_EDS_WorldBossNotifyType,FDS_WorldBossNotiMessageInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WorldBossNotifyType,FDS_WorldBossNotiMessageInfo,0>_>
           ::FindChecked(this_00,param_2);
  UDS_UIMessageManager::OpenMsgByStringUi
            ((longlong)pFVar6->MessageStringID,Warning_None_01,&local_188,
             (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
              *)local_a8);
LAB_14bb8ece1:
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_148.FormatArgs.AllocatorInstance.Data,
             local_148.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_148.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
  {
    FMemory::Free(local_148.FormatArgs.AllocatorInstance.Data);
  }
  if (local_148.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.UniqueString.Data.AllocatorInstance.Data);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_f8.FormatArgs.AllocatorInstance.Data,
             local_f8.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_f8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_f8.FormatArgs.AllocatorInstance.Data);
  }
  if (local_f8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.UniqueString.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_188.AllocatorInstance.Data,local_188.ArrayNum);
  if ((FStringFormatArg *)local_188.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_188.AllocatorInstance.Data);
  }
  local_60 = 0;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  iVar2 = SUB84(local_a8._8_8_,4);
  local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
  }
  local_78 = 0xffffffff;
  local_74 = 0;
  local_80 = 0;
  if (0x80 < local_7c) {
    local_7c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if ((FScriptContainerElement *)local_a8._0_8_ == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free((void *)local_a8._0_8_);
  return;
}

// UpdateStateInfoMapByIslandNumber @ 14bb97f60

void __thiscall
UDS_WorldBossManager::UpdateStateInfoMapByIslandNumber
          (UDS_WorldBossManager *this,int param_1,FDS_WorldBossStateInfo *param_2)

{
  FScriptContainerElement *pFVar1;
  long64 lVar2;
  int iVar3;
  TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  int local_res10 [2];
  
  local_res10[0] = param_1;
  pTVar4 = TMapBase<int,TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<int_const_&>
                     ((TMapBase<int,TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->WorldBossStateInfoMapByIslandNumber,param_1,local_res10);
  iVar3 = pTVar4->ArrayNum;
  pFVar5 = (pTVar4->AllocatorInstance).Data;
  pFVar1 = pFVar5 + (longlong)iVar3 * 0x18;
  while( true ) {
    if (pTVar4->ArrayNum != iVar3) {
      `TCheckedPointerIterator<FDS_WorldBossStateInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    if (*(int *)pFVar5 == param_2->BossID) {
      lVar2 = (param_2->NextEventTime).Ticks;
      *(undefined8 *)pFVar5 = *(undefined8 *)param_2;
      *(long64 *)(pFVar5 + 8) = lVar2;
      *(undefined8 *)(pFVar5 + 0x10) = *(undefined8 *)&param_2->IsExist;
      return;
    }
    pFVar5 = pFVar5 + 0x18;
  }
  iVar3 = pTVar4->ArrayNum;
  if (iVar3 == pTVar4->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar3 + 1;
  lVar2 = (param_2->NextEventTime).Ticks;
  pFVar5 = (pTVar4->AllocatorInstance).Data;
  pFVar1 = pFVar5 + (longlong)iVar3 * 0x18;
  *(undefined8 *)pFVar1 = *(undefined8 *)param_2;
  *(long64 *)(pFVar1 + 8) = lVar2;
  *(undefined8 *)(pFVar5 + (longlong)iVar3 * 0x18 + 0x10) = *(undefined8 *)&param_2->IsExist;
  return;
}

// UpdateWorldBossInfo @ 14bb99810

void __thiscall
UDS_WorldBossManager::UpdateWorldBossInfo(UDS_WorldBossManager *this,FDS_WorldBossInfo *param_1)

{
  TPairInitializer<int_const_&,FDS_WorldBossInfo_const_&> local_res8 [2];
  FDS_WorldBossInfo *local_18;
  FDS_WorldBossInfo *local_10;
  
  local_18 = param_1;
  local_10 = param_1;
  TSet<TTuple<int,FDS_WorldBossInfo>,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,FDS_WorldBossInfo_const_&>_>
            ((TSet<TTuple<int,FDS_WorldBossInfo>,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossInfo,0>,FDefaultSetAllocator>
              *)&this->WorldBossInfoMap,local_res8,(bool *)&local_18);
  return;
}

// UpdateWorldBossStateInfo @ 14bb99840

void __thiscall
UDS_WorldBossManager::UpdateWorldBossStateInfo
          (UDS_WorldBossManager *this,FDS_WorldBossStateInfo *param_1)

{
  TPairInitializer<int_const_&,FDS_WorldBossStateInfo_const_&> local_res8 [2];
  FDS_WorldBossStateInfo *local_18;
  FDS_WorldBossStateInfo *local_10;
  
  local_18 = param_1;
  local_10 = param_1;
  TSet<TTuple<int,FDS_WorldBossStateInfo>,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossStateInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,FDS_WorldBossStateInfo_const_&>_>
            ((TSet<TTuple<int,FDS_WorldBossStateInfo>,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossStateInfo,0>,FDefaultSetAllocator>
              *)&this->WorldBossStateInfoMap,local_res8,(bool *)&local_18);
  return;
}

