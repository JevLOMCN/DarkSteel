// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 102

// StaticClass @ 14b49d300

UClass * __cdecl UDS_GameInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GameInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UGameInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GameInstance",
               &Z_Registration_Info_UClass_UDS_GameInstance.InnerSingleton,
               StaticRegisterNativesUDS_GameInstance,0x3f8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Game",InternalConstructor<UDS_GameInstance>,
               InternalVTableHelperCtorCaller<UDS_GameInstance>,local_res8,
               UGameInstance::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GameInstance.InnerSingleton;
}

// UDS_GameInstance @ 14b49fcc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDS_GameInstance * __thiscall
UDS_GameInstance::UDS_GameInstance(UDS_GameInstance *this,FVTableHelper *param_1)

{
  UGameInstance::UGameInstance((UGameInstance *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FExec__;
  *(undefined8 *)&this->OnGameInstTick = 0;
  *(undefined8 *)&(this->OnGameInstTick).field_0x8 = 0;
  *(undefined8 *)&(this->OnGameInstTick).field_0x10 = 0;
  *(undefined8 *)&this->OnLoadDataAssetComplete = 0;
  *(undefined8 *)&(this->OnLoadDataAssetComplete).field_0x8 = 0;
  *(undefined8 *)&(this->OnLoadDataAssetComplete).field_0x10 = 0;
  (this->CommonSetting).field0_0x0.DebugPtr = (UDS_CommonSetting *)0x0;
  (this->ViewerSetting).field0_0x0.DebugPtr = (UDS_ViewerSetting *)0x0;
  (this->FloatingTextDataAsset).field0_0x0.DebugPtr = (UDS_FloatingTextDataAsset *)0x0;
  (this->NameTagDataAsset).field0_0x0.DebugPtr = (UDS_NameTagDataAsset *)0x0;
  (this->DepthOfFieldDataAsset).field0_0x0.DebugPtr = (UDS_DepthOfFieldDataAsset *)0x0;
  (this->InputMappingDataAsset).field0_0x0.DebugPtr = (UDS_InputMappingDataAsset *)0x0;
  *(undefined8 *)&this->TickDelegate = 0;
  *(undefined8 *)&(this->TickDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->TickDelegate).field_0x10 = 0;
  (this->TickDelegateHandle).Object = (FElement *)0x0;
  (this->TickDelegateHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->ManagerMap = 0;
  *(undefined8 *)&(this->ManagerMap).field_0x8 = 0;
  *(undefined8 *)&(this->ManagerMap).field_0x20 = 0;
  this->bIsShutdown = false;
  *(undefined4 *)&(this->ManagerMap).field_0x28 = 0;
  *(undefined4 *)&(this->ManagerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ManagerMap).field_0x34 = 0;
  *(undefined4 *)&(this->ManagerMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ManagerMap).field_0x40 = 0;
  *(undefined4 *)&(this->ManagerMap).field_0x48 = 0;
  (this->ManagerArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManagerArray).ArrayNum = 0;
  (this->ManagerArray).ArrayMax = 0;
  (this->AccountLocalSave).field0_0x0.DebugPtr = (UDS_AccountLocalSave *)0x0;
  (this->CharLocalSave).field0_0x0.DebugPtr = (UDS_CharLocalSave *)0x0;
  (this->WalletLocalSave).field0_0x0.DebugPtr = (UDS_WalletLocalSave *)0x0;
  (this->QuestLocalSave).field0_0x0.DebugPtr = (UDS_QuestLocalSave *)0x0;
  (this->WorldMapLocalSave).field0_0x0.DebugPtr = (UDS_WorldMapLocalSave *)0x0;
  (this->TotalMenuLocalSave).field0_0x0.DebugPtr = (UDS_TotalMenuLocalSave *)0x0;
  (this->ServerInfoObject).field0_0x0.DebugPtr = (UDS_SyncServer *)0x0;
  *(undefined8 *)&this->OnShowGameTimeChanged = 0;
  *(undefined8 *)&(this->OnShowGameTimeChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnShowGameTimeChanged).field_0x10 = 0;
  *(undefined8 *)&this->Delegate_ShowNameTagDebugChanged = 0;
  *(undefined8 *)&(this->Delegate_ShowNameTagDebugChanged).field_0x8 = 0;
  *(undefined8 *)&(this->Delegate_ShowNameTagDebugChanged).field_0x10 = 0;
  *(undefined8 *)&(this->Delegate_ShowNameTagDebugChanged).field_0x18 = 2;
  this->bCreateManagers = false;
  this->bInitManagers = false;
  this->ShowSyncDebug = false;
  this->UseClientAbnormal = false;
  this->AutoPlayer = false;
  this->ShowGameTime = false;
  this->ShowNameTagDebug = false;
  this->PrintEntityVisble = false;
  this->bLevelTriggerDebug = false;
  this->bFocusedWidgetDebug = false;
  this->bIsDoNotActionMode = false;
  this->ShowFloorLineTrace = false;
  this->IsForceMonsterAttackMode = false;
  this->SourceForceMonsterAttackEntityID = 0;
  this->DestForceMonsterAttackEntityID = 0;
  this->SaveForceMonsterAttackEntityID = 0;
  this->ForceMonsterCount = 0;
  this->DebugEntityID = 0xffffffffffffffff;
  this->DelayMoveSync = 1.0;
  this->UseSkillCoolTime = true;
  this->TestSkillMove = true;
  this->PrintCollisionType = -1;
  this->IsTriggerCoreDebug = false;
  this->PlayerCollisionBlock = true;
  this->FixedSkillLocation = false;
  this->ForceTransportWarpFail = false;
  this->CharacterCollisionBlockDebug = false;
  this->bIsAIGymMode = false;
  this->bIsWorldBossTestMode = false;
  this->bIsCCSAIMode = false;
  (this->JumpTargetPlayerName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->JumpTargetPlayerName).Data.ArrayNum = 0;
  (this->JumpTargetPlayerName).Data.ArrayMax = 0;
  this->JumpTargetPlayerUID = 0;
  (this->TimerHandle_JumpToPlayer).Handle = 0;
  this->bIsDungeonPlayBuild = false;
  this->bIsShowInteractionRange = false;
  (this->PreloadedObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreloadedObjects).ArrayNum = 0;
  (this->PreloadedObjects).ArrayMax = 0;
  this->bUseNewRotateAbility = false;
  return this;
}

// ~UDS_GameInstance @ 14b4a08c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_GameInstance::~UDS_GameInstance(UDS_GameInstance *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FExec__;
  pFVar3 = (this->PreloadedObjects).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->JumpTargetPlayerName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->Delegate_ShowNameTagDebugChanged).field_0x8,
             *(int *)&(this->Delegate_ShowNameTagDebugChanged).field_0x10);
  pvVar4 = *(void **)&(this->Delegate_ShowNameTagDebugChanged).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Delegate_ShowNameTagDebugChanged);
  pvVar4 = *(void **)&(this->OnShowGameTimeChanged).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnShowGameTimeChanged);
  pFVar3 = (this->ManagerArray).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->ManagerMap).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ManagerMap).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UDS_ManagerBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UDS_ManagerBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UDS_ManagerBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ManagerMap);
  pTVar5 = (this->TickDelegateHandle).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->TickDelegate);
  pvVar4 = *(void **)&(this->TickDelegate).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->TickDelegate);
  pvVar4 = *(void **)&(this->OnLoadDataAssetComplete).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLoadDataAssetComplete);
  pvVar4 = *(void **)&(this->OnGameInstTick).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGameInstTick);
  UGameInstance::~UGameInstance((UGameInstance *)this);
  return;
}

// FDS_GameInstTickDelegate_DelegateWrapper @ 14b4a1640

void __cdecl
UDS_GameInstance::FDS_GameInstTickDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,float param_2)

{
  float local_res10 [6];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FDS_LoadDataAssetCompleteDelegate_DelegateWrapper @ 14b4a1660

void __cdecl
UDS_GameInstance::FDS_LoadDataAssetCompleteDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// GetPrivateStaticClass @ 14b4a1760

UClass * __cdecl UDS_GameInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GameInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UGameInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GameInstance",
               &Z_Registration_Info_UClass_UDS_GameInstance.InnerSingleton,
               StaticRegisterNativesUDS_GameInstance,0x3f8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Game",InternalConstructor<UDS_GameInstance>,
               InternalVTableHelperCtorCaller<UDS_GameInstance>,local_res8,
               UGameInstance::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GameInstance.InnerSingleton;
}

// StaticRegisterNativesUDS_GameInstance @ 14b4a1c30

void __cdecl UDS_GameInstance::StaticRegisterNativesUDS_GameInstance(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xd;
  local_18.DataPtr = Z_Construct_UClass_UDS_GameInstance_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execDS_ENABLE_DISPLAY_LOG @ 14b4a24c0

void __cdecl
UDS_GameInstance::execDS_ENABLE_DISPLAY_LOG(UObject *param_1,FFrame *param_2,void *param_3)

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
  DS_ENABLE_DISPLAY_LOG((UDS_GameInstance *)param_1,local_res10[0] != 0);
  return;
}

// execDS_ENABLE_ERROR_LOG @ 14b4a2550

void __cdecl
UDS_GameInstance::execDS_ENABLE_ERROR_LOG(UObject *param_1,FFrame *param_2,void *param_3)

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
  DS_ENABLE_ERROR_LOG((UDS_GameInstance *)param_1,local_res10[0] != 0);
  return;
}

// execDS_ENABLE_LOG @ 14b4a25e0

void __cdecl UDS_GameInstance::execDS_ENABLE_LOG(UObject *param_1,FFrame *param_2,void *param_3)

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
  DS_ENABLE_LOG((UDS_GameInstance *)param_1,local_res10[0] != 0);
  return;
}

// execDS_ENABLE_WARNING_LOG @ 14b4a2670

void __cdecl
UDS_GameInstance::execDS_ENABLE_WARNING_LOG(UObject *param_1,FFrame *param_2,void *param_3)

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
  DS_ENABLE_WARNING_LOG((UDS_GameInstance *)param_1,local_res10[0] != 0);
  return;
}

// execDS_Login @ 14b4a2700

void __cdecl UDS_GameInstance::execDS_Login(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  longlong lVar2;
  void *local_28;
  undefined8 local_20;
  FString local_18;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  _Src = local_28;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = (longlong)(int)local_20;
  local_18.Data.ArrayNum = (int)local_20;
  if ((int)local_20 == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_20,0,(ForAnyElementType *)&local_18,(int)local_20,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  DS_Login((UDS_GameInstance *)param_1,&local_18);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execJPRO_TEST @ 14b4a2810

void __cdecl UDS_GameInstance::execJPRO_TEST(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  JPRO_TEST((UDS_GameInstance *)param_1,local_res10[0]);
  return;
}

// execJumpToPlayer @ 14b4a28a0

void __cdecl UDS_GameInstance::execJumpToPlayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  JumpToPlayer((UDS_GameInstance *)param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execOnCompleteLoadDataAssets @ 14b4a2940

void __cdecl
UDS_GameInstance::execOnCompleteLoadDataAssets(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSoftObjectPath *pFVar2;
  int iVar3;
  FSoftObjectPath *local_28;
  undefined8 local_20;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_18;
  
  local_28 = (FSoftObjectPath *)0x0;
  local_20 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar2 = local_28;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar3 = (int)local_20;
  local_18.ArrayNum = (int)local_20;
  if ((int)local_20 == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,(int)local_20,0,&local_18.AllocatorInstance,(int)local_20,&local_18.ArrayMax);
    ConstructItems<FSoftObjectPath,FSoftObjectPath,int>
              (local_18.AllocatorInstance.Data,pFVar2,iVar3);
  }
  OnCompleteLoadDataAssets((UDS_GameInstance *)param_1,&local_18);
  DestructItems<FSoftObjectPath,int>(local_28,(int)local_20);
  if (local_28 != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execSET_WORLDBOSS_TEST_TABLE @ 14b4a2a80

void __cdecl
UDS_GameInstance::execSET_WORLDBOSS_TEST_TABLE(UObject *param_1,FFrame *param_2,void *param_3)

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
  SET_WORLDBOSS_TEST_TABLE((UDS_GameInstance *)param_1,local_res10[0] != 0);
  return;
}

// execSetIsShowInteractionRange @ 14b4a2b10

void __cdecl
UDS_GameInstance::execSetIsShowInteractionRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x18].field_0x19 = local_res8[0] != 0;
  return;
}

// execShowDungeonDebugWidget @ 14b4a2ba0

void __cdecl
UDS_GameInstance::execShowDungeonDebugWidget(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ShowDungeonDebugWidget((UDS_GameInstance *)param_1,local_res10[0]);
  return;
}

// execStopJumpToPlayer @ 14b4a2c30

void __cdecl UDS_GameInstance::execStopJumpToPlayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  StopJumpToPlayer((UDS_GameInstance *)param_1);
  return;
}

// execUseNewRotateAbility @ 14b4a2c50

void __cdecl
UDS_GameInstance::execUseNewRotateAbility(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x19].field_0x8 = local_res8[0] != 0;
  return;
}

// UDS_GameInstance @ 14b9997e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDS_GameInstance * __thiscall
UDS_GameInstance::UDS_GameInstance(UDS_GameInstance *this,FObjectInitializer *param_1)

{
  UGameInstance::UGameInstance((UGameInstance *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FExec__;
  *(undefined8 *)&this->OnGameInstTick = 0;
  *(undefined8 *)&(this->OnGameInstTick).field_0x8 = 0;
  *(undefined8 *)&(this->OnGameInstTick).field_0x10 = 0;
  *(undefined8 *)&this->OnLoadDataAssetComplete = 0;
  *(undefined8 *)&(this->OnLoadDataAssetComplete).field_0x8 = 0;
  *(undefined8 *)&(this->OnLoadDataAssetComplete).field_0x10 = 0;
  (this->CommonSetting).field0_0x0.DebugPtr = (UDS_CommonSetting *)0x0;
  (this->ViewerSetting).field0_0x0.DebugPtr = (UDS_ViewerSetting *)0x0;
  (this->FloatingTextDataAsset).field0_0x0.DebugPtr = (UDS_FloatingTextDataAsset *)0x0;
  (this->NameTagDataAsset).field0_0x0.DebugPtr = (UDS_NameTagDataAsset *)0x0;
  (this->DepthOfFieldDataAsset).field0_0x0.DebugPtr = (UDS_DepthOfFieldDataAsset *)0x0;
  (this->InputMappingDataAsset).field0_0x0.DebugPtr = (UDS_InputMappingDataAsset *)0x0;
  *(undefined8 *)&this->TickDelegate = 0;
  *(undefined8 *)&(this->TickDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->TickDelegate).field_0x10 = 0;
  (this->TickDelegateHandle).Object = (FElement *)0x0;
  (this->TickDelegateHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->ManagerMap = 0;
  *(undefined8 *)&(this->ManagerMap).field_0x8 = 0;
  *(undefined8 *)&(this->ManagerMap).field_0x20 = 0;
  this->bIsShutdown = false;
  *(undefined4 *)&(this->ManagerMap).field_0x28 = 0;
  *(undefined4 *)&(this->ManagerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ManagerMap).field_0x34 = 0;
  *(undefined4 *)&(this->ManagerMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ManagerMap).field_0x40 = 0;
  *(undefined4 *)&(this->ManagerMap).field_0x48 = 0;
  (this->ManagerArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManagerArray).ArrayNum = 0;
  (this->ManagerArray).ArrayMax = 0;
  (this->AccountLocalSave).field0_0x0.DebugPtr = (UDS_AccountLocalSave *)0x0;
  (this->CharLocalSave).field0_0x0.DebugPtr = (UDS_CharLocalSave *)0x0;
  (this->WalletLocalSave).field0_0x0.DebugPtr = (UDS_WalletLocalSave *)0x0;
  (this->QuestLocalSave).field0_0x0.DebugPtr = (UDS_QuestLocalSave *)0x0;
  (this->WorldMapLocalSave).field0_0x0.DebugPtr = (UDS_WorldMapLocalSave *)0x0;
  (this->TotalMenuLocalSave).field0_0x0.DebugPtr = (UDS_TotalMenuLocalSave *)0x0;
  (this->ServerInfoObject).field0_0x0.DebugPtr = (UDS_SyncServer *)0x0;
  *(undefined8 *)&this->OnShowGameTimeChanged = 0;
  *(undefined8 *)&(this->OnShowGameTimeChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnShowGameTimeChanged).field_0x10 = 0;
  *(undefined8 *)&this->Delegate_ShowNameTagDebugChanged = 0;
  *(undefined8 *)&(this->Delegate_ShowNameTagDebugChanged).field_0x8 = 0;
  *(undefined8 *)&(this->Delegate_ShowNameTagDebugChanged).field_0x10 = 0;
  *(undefined8 *)&(this->Delegate_ShowNameTagDebugChanged).field_0x18 = 2;
  this->bCreateManagers = false;
  this->bInitManagers = false;
  this->ShowSyncDebug = false;
  this->UseClientAbnormal = false;
  this->AutoPlayer = false;
  this->ShowGameTime = false;
  this->ShowNameTagDebug = false;
  this->PrintEntityVisble = false;
  this->bLevelTriggerDebug = false;
  this->bFocusedWidgetDebug = false;
  this->bIsDoNotActionMode = false;
  this->ShowFloorLineTrace = false;
  this->IsForceMonsterAttackMode = false;
  this->SourceForceMonsterAttackEntityID = 0;
  this->DestForceMonsterAttackEntityID = 0;
  this->SaveForceMonsterAttackEntityID = 0;
  this->ForceMonsterCount = 0;
  this->DebugEntityID = 0xffffffffffffffff;
  this->DelayMoveSync = 1.0;
  this->UseSkillCoolTime = true;
  this->TestSkillMove = true;
  this->PrintCollisionType = -1;
  this->IsTriggerCoreDebug = false;
  this->PlayerCollisionBlock = true;
  this->FixedSkillLocation = false;
  this->ForceTransportWarpFail = false;
  this->CharacterCollisionBlockDebug = false;
  this->bIsAIGymMode = false;
  this->bIsWorldBossTestMode = false;
  this->bIsCCSAIMode = false;
  (this->JumpTargetPlayerName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->JumpTargetPlayerName).Data.ArrayNum = 0;
  (this->JumpTargetPlayerName).Data.ArrayMax = 0;
  this->JumpTargetPlayerUID = 0;
  (this->TimerHandle_JumpToPlayer).Handle = 0;
  this->bIsDungeonPlayBuild = false;
  this->bIsShowInteractionRange = false;
  (this->PreloadedObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreloadedObjects).ArrayNum = 0;
  (this->PreloadedObjects).ArrayMax = 0;
  this->bUseNewRotateAbility = false;
  return this;
}

// CheckCommandLine @ 14b99c8e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_GameInstance::CheckCommandLine(UDS_GameInstance *this)

{
  int iVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_178 [32];
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UKismetSystemLibrary::GetCommandLine(&local_148);
  iVar1 = ::FString::Find(&local_148,L"-AIServer",9,IgnoreCase,FromStart,-1);
  if (iVar1 == -1) {
    iVar1 = ::FString::Find(&local_148,L"-AIPlay",7,IgnoreCase,FromStart,-1);
    if (iVar1 == -1) {
      iVar1 = ::FString::Find(&local_148,L"-DungeonServer",0xe,IgnoreCase,FromStart,-1);
      if (iVar1 != -1) {
        this->bIsDungeonPlayBuild = true;
      }
      goto LAB_14b99c9a0;
    }
  }
  this->bIsCCSAIMode = true;
LAB_14b99c9a0:
  iVar1 = ::FString::Find(&local_148,L"-WorldBossServer",0x10,IgnoreCase,FromStart,-1);
  if (iVar1 != -1) {
    this->bIsWorldBossTestMode = true;
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_GameInstance::SetIsWorldBossTestMode",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x4e4,L"World Boss Test Mode has been enabled.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  return;
}

// ClearManagers @ 14b99cc90

void __thiscall UDS_GameInstance::ClearManagers(UDS_GameInstance *this)

{
  undefined1 *puVar1;
  int *piVar2;
  TMap<FName,TObjectPtr<UDS_ManagerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UDS_ManagerBase>,0>_>
  *this_00;
  FScriptContainerElement *pFVar3;
  int iVar4;
  UObject *pUVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  FDS_DataRepoManager *pFVar10;
  FDS_DataRepoManager *pFVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  undefined1 local_res8 [8];
  
  if (this->bCreateManagers != false) {
    pFVar11 = (FDS_DataRepoManager *)0x0;
    uVar12 = (this->ManagerArray).ArrayNum - 1;
    uVar14 = (ulonglong)(int)uVar12;
    if (-1 < (int)uVar12) {
      lVar16 = uVar14 * 8;
      do {
        uVar13 = (uint)uVar14;
        uVar9 = 0;
        if ((int)uVar13 < (this->ManagerArray).ArrayNum) {
          uVar9 = ~uVar13 >> 0x1f;
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
        pUVar5 = *(UObject **)((this->ManagerArray).AllocatorInstance.Data + lVar16);
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar5 != (UObject *)0x0) goto LAB_14b99cd62;
        }
        else if (pUVar5 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar5);
LAB_14b99cd62:
          (**(code **)(*(longlong *)pUVar5 + 0x2b8))(pUVar5);
        }
        lVar16 = lVar16 + -8;
        uVar14 = (ulonglong)(uVar13 - 1);
      } while (-1 < (int)(uVar13 - 1));
    }
    if (-1 < (int)uVar12) {
      lVar16 = (longlong)(int)uVar12 * 8;
      do {
        uVar9 = 0;
        if ((int)uVar12 < (this->ManagerArray).ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
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
        pUVar5 = *(UObject **)((this->ManagerArray).AllocatorInstance.Data + lVar16);
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar5 != (UObject *)0x0) goto LAB_14b99ce12;
        }
        else if (pUVar5 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar5);
LAB_14b99ce12:
          (**(code **)(*(longlong *)pUVar5 + 0x2c0))(pUVar5);
        }
        lVar16 = lVar16 + -8;
        uVar12 = uVar12 - 1;
      } while (-1 < (int)uVar12);
    }
    this_00 = &this->ManagerMap;
    bVar7 = 1 < *(int *)&(this->ManagerMap).field_0x48;
    if (!bVar7) {
      TSet<TTuple<FName,TObjectPtr<UDS_ManagerBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UDS_ManagerBase>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FName,TObjectPtr<UDS_ManagerBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UDS_ManagerBase>,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    puVar1 = &(this->ManagerMap).field_0xc;
    *(undefined4 *)&(this->ManagerMap).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->ManagerMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->ManagerMap).field_0x34 = 0;
    iVar4 = *(int *)&(this->ManagerMap).field_0x2c;
    *(undefined4 *)&(this->ManagerMap).field_0x28 = 0;
    if ((iVar4 < 0) || (0x80 < iVar4)) {
      *(undefined4 *)&(this->ManagerMap).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ManagerMap).field_0x10,0);
    }
    if (bVar7) {
      *(undefined4 *)&(this->ManagerMap).field_0x48 = 1;
      TSet<TTuple<FName,TObjectPtr<UDS_ManagerBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UDS_ManagerBase>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FName,TObjectPtr<UDS_ManagerBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UDS_ManagerBase>,0>,FDefaultSetAllocator>
                *)this_00);
    }
    piVar2 = &(this->ManagerArray).ArrayMax;
    (this->ManagerArray).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->ManagerArray).AllocatorInstance,0,piVar2);
    }
    pFVar10 = TDS_Singleton<FDS_DataRepoManager>::Inst;
    if (TDS_Singleton<FDS_DataRepoManager>::Inst == (FDS_DataRepoManager *)0x0) {
      pFVar10 = ::operator_new(0x18);
      if (pFVar10 != (FDS_DataRepoManager *)0x0) {
        (pFVar10->RepoArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pFVar10->_padding_ = (longlong)&___7FDS_DataRepoManager__6B_;
        (pFVar10->RepoArray).ArrayNum = 0;
        (pFVar10->RepoArray).ArrayMax = 0;
        pFVar11 = pFVar10;
      }
      pcVar6 = *(code **)(pFVar11->_padding_ + 8);
      pFVar10 = pFVar11;
      TDS_Singleton<FDS_DataRepoManager>::Inst = pFVar11;
      if ((pcVar6 != TDS_Singleton<FDS_DataRepoManager>::Init) &&
         (cVar8 = (*pcVar6)(pFVar11), pFVar10 = TDS_Singleton<FDS_DataRepoManager>::Inst,
         cVar8 == '\0')) {
        if (TDS_Singleton<FDS_DataRepoManager>::Inst != (FDS_DataRepoManager *)0x0) {
          (**(code **)(TDS_Singleton<FDS_DataRepoManager>::Inst->_padding_ + 0x18))
                    (TDS_Singleton<FDS_DataRepoManager>::Inst,1);
        }
        TDS_Singleton<FDS_DataRepoManager>::Inst = (FDS_DataRepoManager *)0x0;
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4219184397653377064>,true,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_Singleton.h"
                           ,0x28,"false");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar10 = &TDS_Singleton<FDS_DataRepoManager>::Empty;
      }
    }
    pFVar15 = (pFVar10->RepoArray).AllocatorInstance.Data;
    iVar4 = (pFVar10->RepoArray).ArrayNum;
    pFVar3 = pFVar15 + (longlong)iVar4 * 8;
    while( true ) {
      if ((pFVar10->RepoArray).ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_SingletonInterface_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar15 == pFVar3) break;
      (**(code **)**(undefined8 **)pFVar15)();
      pFVar15 = pFVar15 + 8;
    }
    piVar2 = &(pFVar10->RepoArray).ArrayMax;
    (pFVar10->RepoArray).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(pFVar10->RepoArray).AllocatorInstance,0,piVar2);
    }
    this->bCreateManagers = false;
    this->bInitManagers = false;
  }
  return;
}

// ConsoleCommand @ 14b99d610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UDS_GameInstance::ConsoleCommand(FString *param_1)

{
  longlong *plVar1;
  UGameViewportClient *pUVar2;
  UConsole *pUVar3;
  code *UNRECOVERED_JUMPTABLE;
  UDS_GameInstance *pUVar4;
  FOutputDeviceRedirector *pFVar5;
  undefined8 uVar6;
  wchar_t *pwVar7;
  
  pUVar4 = StaticInstance;
  if (StaticInstance == (UDS_GameInstance *)0x0) {
    return;
  }
  pUVar2 = (GEngine->GameViewport).field0_0x0.DebugPtr;
  if ((pUVar2 != (UGameViewportClient *)0x0) &&
     (pUVar3 = (pUVar2->ViewportConsole).field0_0x0.DebugPtr, pUVar3 != (UConsole *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x000147bf54ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar3->_padding_ + 0x2c0))(pUVar3,param_1);
    return;
  }
  plVar1 = &GEngine->_padding_;
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 8);
  pFVar5 = GetGlobalLogSingleton();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  if (pUVar4->_padding_ == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(pUVar4->_padding_ + 0x2c0);
  }
                    /* WARNING: Could not recover jumptable at 0x000147bf5529. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,uVar6,pwVar7,pFVar5);
  return;
}

// CreateDefaultManagers @ 14b9a0210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall UDS_GameInstance::CreateDefaultManagers(UDS_GameInstance *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  UClass *pUVar6;
  longlong *plVar7;
  undefined1 auStackY_218 [32];
  UObject *local_1e8;
  TPairInitializer<FName_&&,UDS_ManagerBase_*_&> local_1e0;
  undefined8 *local_1d0;
  UObject **local_1c8;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pUVar5 = UDS_LogManager::GetInst();
  if (pUVar5 != (UDS_LogManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_GameInstance::CreateDefaultManagers",0x27,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Display,local_138.Ptr,0x127,L"Creating UDS_LogManager.");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = Z_Construct_UClass_UDS_LogManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar6);
  local_1b8._8_8_ = this;
  local_1e8 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar7 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (local_1e8 == (UObject *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_GameInstance::CreateDefaultManagers",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_138.Ptr,0x127,L"Failed to create UDS_LogManager.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar3 = false;
  }
  else {
    pUVar6 = Z_Construct_UClass_UDS_LogManager_NoRegister();
    local_1e0._4_8_ = pUVar6->_padding_;
    local_1d0 = (undefined8 *)((longlong)&local_1e0.Key + 4);
    local_1c8 = &local_1e8;
    TSet<TTuple<FName,TObjectPtr<UDS_ManagerBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UDS_ManagerBase>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_&&,UDS_ManagerBase_*_&>_>
              ((TSet<TTuple<FName,TObjectPtr<UDS_ManagerBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UDS_ManagerBase>,0>,FDefaultSetAllocator>
                *)&this->ManagerMap,&local_1e0,(bool *)&local_1d0);
    iVar4 = (this->ManagerArray).ArrayNum;
    piVar1 = &(this->ManagerArray).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->ManagerArray).AllocatorInstance,piVar1);
    }
    pFVar2 = (this->ManagerArray).AllocatorInstance.Data;
    (this->ManagerArray).ArrayNum = iVar4 + 1;
    *(UObject **)(pFVar2 + (longlong)iVar4 * 8) = local_1e8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1e8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_1e8);
    }
    (**(code **)(*(longlong *)local_1e8 + 0x2b0))();
    bVar3 = true;
  }
  return bVar3;
}

// DS_ENABLE_DISPLAY_LOG @ 14b9a6190

void __thiscall UDS_GameInstance::DS_ENABLE_DISPLAY_LOG(UDS_GameInstance *this,bool param_1)

{
  UDS_LogManager *pUVar1;
  
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1->bEnable_DisplayLog = param_1;
  }
  return;
}

// DS_ENABLE_ERROR_LOG @ 14b9a61c0

void __thiscall UDS_GameInstance::DS_ENABLE_ERROR_LOG(UDS_GameInstance *this,bool param_1)

{
  UDS_LogManager *pUVar1;
  
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1->bEnable_WarningLog = param_1;
  }
  return;
}

// DS_ENABLE_LOG @ 14b9a61f0

void __thiscall UDS_GameInstance::DS_ENABLE_LOG(UDS_GameInstance *this,bool param_1)

{
  UDS_LogManager *pUVar1;
  
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1->bEnable_DisplayLog = param_1;
    pUVar1->bEnable_WarningLog = param_1;
    pUVar1->bEnable_ErrorLog = param_1;
  }
  return;
}

// DS_ENABLE_WARNING_LOG @ 14b9a6220

void __thiscall UDS_GameInstance::DS_ENABLE_WARNING_LOG(UDS_GameInstance *this,bool param_1)

{
  UDS_LogManager *pUVar1;
  
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1->bEnable_WarningLog = param_1;
  }
  return;
}

// DS_Login @ 14b9a6250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_GameInstance::DS_Login(UDS_GameInstance *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FModuleManager *pFVar3;
  FName *pFVar4;
  IModuleInterface *pIVar5;
  UDS_LogManager *pUVar6;
  undefined1 auStackY_178 [32];
  FName local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar3 = FModuleManager::Get();
  pFVar4 = ::FName::FName(local_148,"DS_Login");
  bVar2 = FModuleManager::IsModuleLoaded(pFVar3,*pFVar4);
  if (bVar2) {
    pFVar3 = FModuleManager::Get();
    pFVar4 = ::FName::FName(local_148,"DS_Login");
    pIVar5 = FModuleManager::GetModule(pFVar3,*pFVar4);
    if (pIVar5 != (IModuleInterface *)0x0) {
      (**(code **)((longlong)*pIVar5 + 0x58))(pIVar5,param_1,1);
      (**(code **)((longlong)*pIVar5 + 0x68))(pIVar5);
      goto LAB_14b9a6366;
    }
  }
  pUVar6 = UDS_LogManager::GetInst();
  if (pUVar6 != (UDS_LogManager *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_GameInstance::DS_Login",0x1a,Yes);
    UDS_LogManager::PrintLog(pUVar6,1,Warning,local_138.Ptr,0x32b,L"LoginModule is nullptr.");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
LAB_14b9a6366:
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// GetAccountLocalSave @ 14b9ac2f0

TWeakObjectPtr<UDS_AccountLocalSave,FWeakObjectPtr> __thiscall
UDS_GameInstance::GetAccountLocalSave(UDS_GameInstance *this)

{
  TObjectPtr<UDS_AccountLocalSave> *pTVar1;
  UDS_AccountLocalSave *pUVar2;
  FWeakObjectPtr in_RDX;
  UDS_AccountLocalSave *local_res8;
  
  pTVar1 = &this->AccountLocalSave;
  if ((pTVar1->field0_0x0).DebugPtr == (UDS_AccountLocalSave *)0x0) {
    UDS_AccountLocalSave::Load(pTVar1);
  }
  pUVar2 = (pTVar1->field0_0x0).DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar2 != (UDS_AccountLocalSave *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UDS_AccountLocalSave *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UDS_AccountLocalSave *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_AccountLocalSave,FWeakObjectPtr>)in_RDX;
}

// GetCharLocalSave @ 14b9aded0

TWeakObjectPtr<UDS_CharLocalSave,FWeakObjectPtr> __thiscall
UDS_GameInstance::GetCharLocalSave(UDS_GameInstance *this)

{
  TObjectPtr<UDS_CharLocalSave> *pTVar1;
  UDS_CharLocalSave *pUVar2;
  FWeakObjectPtr in_RDX;
  UDS_CharLocalSave *local_res8;
  
  pTVar1 = &this->CharLocalSave;
  if ((pTVar1->field0_0x0).DebugPtr == (UDS_CharLocalSave *)0x0) {
    UDS_CharLocalSave::Load(pTVar1);
  }
  pUVar2 = (pTVar1->field0_0x0).DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar2 != (UDS_CharLocalSave *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UDS_CharLocalSave *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UDS_CharLocalSave *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_CharLocalSave,FWeakObjectPtr>)in_RDX;
}

// GetDebugEntityID @ 14b9ae0b0

ulong64 __cdecl UDS_GameInstance::GetDebugEntityID(void)

{
  if (StaticInstance == (UDS_GameInstance *)0x0) {
    return 0;
  }
  return StaticInstance->DebugEntityID;
}

// GetDelayMoveSync @ 14b9ae0d0

float __cdecl UDS_GameInstance::GetDelayMoveSync(void)

{
  if (StaticInstance == (UDS_GameInstance *)0x0) {
    return 0.0;
  }
  return StaticInstance->DelayMoveSync;
}

// GetDoNotActionMode @ 14b9ae0f0

bool __cdecl UDS_GameInstance::GetDoNotActionMode(void)

{
  if (StaticInstance != (UDS_GameInstance *)0x0) {
    return StaticInstance->bIsDoNotActionMode;
  }
  return false;
}

// GetGameInstanceWorld @ 14b9ae110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __cdecl UDS_GameInstance::GetGameInstanceWorld(void)

{
  UWorld *pUVar1;
  
  if (StaticInstance == (UDS_GameInstance *)0x0) {
    return (UWorld *)0x0;
  }
  pUVar1 = UGameInstance::GetWorld((UGameInstance *)StaticInstance);
  return pUVar1;
}

// GetInst @ 14b9af160

UDS_GameInstance * __cdecl UDS_GameInstance::GetInst(void)

{
  return StaticInstance;
}

// GetIsAIGymMode @ 14b9afa30

bool __cdecl UDS_GameInstance::GetIsAIGymMode(void)

{
  if (StaticInstance != (UDS_GameInstance *)0x0) {
    return StaticInstance->bIsAIGymMode;
  }
  return false;
}

// GetIsCCSAIMode @ 14b9afa60

bool __cdecl UDS_GameInstance::GetIsCCSAIMode(void)

{
  if (StaticInstance != (UDS_GameInstance *)0x0) {
    return StaticInstance->bIsCCSAIMode;
  }
  return false;
}

// GetIsDungeonPlayBuild @ 14b9afa80

bool __cdecl UDS_GameInstance::GetIsDungeonPlayBuild(void)

{
  if (StaticInstance != (UDS_GameInstance *)0x0) {
    return StaticInstance->bIsDungeonPlayBuild;
  }
  return false;
}

// GetIsWorldBossTestMode @ 14b9afae0

bool __cdecl UDS_GameInstance::GetIsWorldBossTestMode(void)

{
  if (StaticInstance != (UDS_GameInstance *)0x0) {
    return StaticInstance->bIsWorldBossTestMode;
  }
  return false;
}

// GetLocalIPAddress @ 14b9b0010

FString * __thiscall
UDS_GameInstance::GetLocalIPAddress(UDS_GameInstance *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  FScriptContainerElement *pFVar3;
  FName *pFVar4;
  ISocketSubsystem *pIVar5;
  FOutputDeviceRedirector *pFVar6;
  longlong *plVar7;
  FString *pFVar8;
  undefined1 local_res10 [8];
  FName local_res18;
  void *local_18;
  TReferenceControllerBase<1> *local_10;
  
  ::FString::FString(__return_storage_ptr__,L"");
  local_res10[0] = 0;
  pFVar4 = ::FName::FName(&local_res18,L"WINDOWS");
  pIVar5 = ISocketSubsystem::Get(pFVar4);
  pcVar1 = *(code **)(pIVar5->_padding_ + 0xe0);
  pFVar6 = GetGlobalLogSingleton();
  plVar7 = (longlong *)(*pcVar1)(pIVar5,&local_18,pFVar6,local_res10);
  pTVar2 = (TReferenceControllerBase<1> *)plVar7[1];
  plVar7 = (longlong *)*plVar7;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  if (plVar7 != (longlong *)0x0) {
    pFVar8 = (FString *)(**(code **)(*plVar7 + 0x80))(plVar7,&local_18,0);
    if (__return_storage_ptr__ != pFVar8) {
      pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
      (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar8->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar8->Data).ArrayMax;
      (pFVar8->Data).ArrayNum = 0;
      (pFVar8->Data).ArrayMax = 0;
    }
    if (local_18 != (void *)0x0) {
      FMemory::Free(local_18);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// GetManager @ 14b9b0530

UDS_ManagerBase * __thiscall UDS_GameInstance::GetManager(UDS_GameInstance *this,FName param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  FObjectPtr_u_0 *pFVar4;
  undefined1 *puVar5;
  
  uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->ManagerMap).field_0x8 != *(int *)&(this->ManagerMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->ManagerMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ManagerMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->ManagerMap).field_0x48 - 1U & param_1.Number + uVar2)
                              * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->ManagerMap;
      do {
        if (*(FName *)(lVar1 + (longlong)iVar3 * 0x18) == param_1) {
          pFVar4 = (FObjectPtr_u_0 *)
                   TMapBase<FName,TObjectPtr<UDS_ManagerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UDS_ManagerBase>,0>_>
                   ::FindChecked((TMapBase<FName,TObjectPtr<UDS_ManagerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UDS_ManagerBase>,0>_>
                                  *)&this->ManagerMap,param_1);
          return (UDS_ManagerBase *)(FObjectPtr)pFVar4->Handle;
        }
        iVar3 = *(int *)(lVar1 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  return (UDS_ManagerBase *)0x0;
}

// GetPrintCollisionType @ 14b9b10a0

int __cdecl UDS_GameInstance::GetPrintCollisionType(void)

{
  if (StaticInstance == (UDS_GameInstance *)0x0) {
    return 0;
  }
  return StaticInstance->PrintCollisionType;
}

// GetQuestLocalSave @ 14b9b1160

TWeakObjectPtr<UDS_QuestLocalSave,FWeakObjectPtr> __thiscall
UDS_GameInstance::GetQuestLocalSave(UDS_GameInstance *this)

{
  TObjectPtr<UDS_QuestLocalSave> *pTVar1;
  UDS_QuestLocalSave *pUVar2;
  FWeakObjectPtr in_RDX;
  UDS_QuestLocalSave *local_res8;
  
  pTVar1 = &this->QuestLocalSave;
  if ((pTVar1->field0_0x0).DebugPtr == (UDS_QuestLocalSave *)0x0) {
    UDS_QuestLocalSave::Load(pTVar1);
  }
  pUVar2 = (pTVar1->field0_0x0).DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar2 != (UDS_QuestLocalSave *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UDS_QuestLocalSave *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UDS_QuestLocalSave *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_QuestLocalSave,FWeakObjectPtr>)in_RDX;
}

// GetServerInfoObject @ 14b9b3d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TWeakObjectPtr<UDS_SyncServer,FWeakObjectPtr> __thiscall
UDS_GameInstance::GetServerInfoObject(UDS_GameInstance *this)

{
  UDS_SyncServer *pUVar1;
  UDS_LogManager *pUVar2;
  FWeakObjectPtr in_RDX;
  undefined1 auStackY_178 [32];
  UDS_SyncServer *local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pUVar1 = (this->ServerInfoObject).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_SyncServer *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_GameInstance::GetServerInfoObject",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x299,L"serverInfoObject is nullptr.")
      ;
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    *(undefined8 *)in_RDX = 0;
    local_148[0] = (UDS_SyncServer *)0x0;
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
    }
    *(undefined8 *)in_RDX = 0;
    local_148[0] = pUVar1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)local_148);
  return (TWeakObjectPtr<UDS_SyncServer,FWeakObjectPtr>)in_RDX;
}

// GetTotalMenuLocalSave @ 14b9b4250

TWeakObjectPtr<UDS_TotalMenuLocalSave,FWeakObjectPtr> __thiscall
UDS_GameInstance::GetTotalMenuLocalSave(UDS_GameInstance *this)

{
  TObjectPtr<UDS_TotalMenuLocalSave> *pTVar1;
  UDS_TotalMenuLocalSave *pUVar2;
  FWeakObjectPtr in_RDX;
  UDS_TotalMenuLocalSave *local_res8;
  
  pTVar1 = &this->TotalMenuLocalSave;
  if ((pTVar1->field0_0x0).DebugPtr == (UDS_TotalMenuLocalSave *)0x0) {
    UDS_TotalMenuLocalSave::Load(pTVar1);
  }
  pUVar2 = (pTVar1->field0_0x0).DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar2 != (UDS_TotalMenuLocalSave *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UDS_TotalMenuLocalSave *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UDS_TotalMenuLocalSave *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_TotalMenuLocalSave,FWeakObjectPtr>)in_RDX;
}

// GetViewModelCollection @ 14b9b4590

UMVVMViewModelCollectionObject * __cdecl UDS_GameInstance::GetViewModelCollection(void)

{
  int iVar1;
  bool bVar2;
  UDS_GameInstance *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  USubsystem *pUVar6;
  
  pUVar3 = StaticInstance;
  if (StaticInstance == (UDS_GameInstance *)0x0) {
    return (UMVVMViewModelCollectionObject *)0x0;
  }
  pUVar4 = Z_Construct_UClass_UMVVMGameSubsystem_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 != (UClass *)0x0) goto LAB_14b9b45cc;
  }
  else if (pUVar4 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_14b9b45cc:
    pUVar5 = Z_Construct_UClass_UMVVMGameSubsystem_NoRegister();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_14b9b45fc;
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_14b9b45fc:
  pUVar6 = FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&pUVar3->_padding_,pUVar4);
  if (pUVar6 == (USubsystem *)0x0) {
    return (UMVVMViewModelCollectionObject *)0x0;
  }
  return (UMVVMViewModelCollectionObject *)pUVar6[1]._padding_;
}

// GetWalletLocalSave @ 14b9b4640

TWeakObjectPtr<UDS_WalletLocalSave,FWeakObjectPtr> __thiscall
UDS_GameInstance::GetWalletLocalSave(UDS_GameInstance *this)

{
  TObjectPtr<UDS_WalletLocalSave> *pTVar1;
  UDS_WalletLocalSave *pUVar2;
  FWeakObjectPtr in_RDX;
  UDS_WalletLocalSave *local_res8;
  
  pTVar1 = &this->WalletLocalSave;
  if ((pTVar1->field0_0x0).DebugPtr == (UDS_WalletLocalSave *)0x0) {
    UDS_WalletLocalSave::Load(pTVar1);
  }
  pUVar2 = (pTVar1->field0_0x0).DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar2 != (UDS_WalletLocalSave *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UDS_WalletLocalSave *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UDS_WalletLocalSave *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_WalletLocalSave,FWeakObjectPtr>)in_RDX;
}

// GetWorldMapLocalSave @ 14b9b4770

TWeakObjectPtr<UDS_WorldMapLocalSave,FWeakObjectPtr> __thiscall
UDS_GameInstance::GetWorldMapLocalSave(UDS_GameInstance *this)

{
  TObjectPtr<UDS_WorldMapLocalSave> *pTVar1;
  UDS_WorldMapLocalSave *pUVar2;
  FWeakObjectPtr in_RDX;
  UDS_WorldMapLocalSave *local_res8;
  
  pTVar1 = &this->WorldMapLocalSave;
  if ((pTVar1->field0_0x0).DebugPtr == (UDS_WorldMapLocalSave *)0x0) {
    UDS_WorldMapLocalSave::Load(pTVar1);
  }
  pUVar2 = (pTVar1->field0_0x0).DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar2 != (UDS_WorldMapLocalSave *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UDS_WorldMapLocalSave *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UDS_WorldMapLocalSave *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_WorldMapLocalSave,FWeakObjectPtr>)in_RDX;
}

// Init @ 14b9b5e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_GameInstance::Init(UDS_GameInstance *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  atomic<unsigned___int64> *paVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  FTSTicker *this_00;
  TWeakPtr<FTSTicker::FElement,1> *pTVar9;
  UDS_LogManager *pUVar10;
  undefined1 auStackY_1e8 [32];
  FDestructionSentinel local_1b8;
  undefined1 local_198 [8];
  FDelegateAllocation local_190;
  undefined1 local_180 [24];
  FMRSWRecursiveAccessDetector *local_168;
  char local_160;
  FDelegateAllocation *local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  StaticInstance = this;
  this->bIsShutdown = false;
  UGameInstance::Init((UGameInstance *)this);
  local_1b8.Accessor._0_4_ = 0;
  local_1b8._0_8_ = OnBeginTearingDown;
  TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>::
  AddUObject<UDS_GameInstance>
            ((TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy> *)
             &FWorldDelegates::OnWorldBeginTearDown,(UDS_GameInstance *)local_180,
             (pmf_e2faa36d *)this);
  local_1b8._0_8_ = Tick;
  local_1b8.Accessor = (FMRSWRecursiveAccessDetector *)((ulonglong)local_1b8.Accessor._4_4_ << 0x20)
  ;
  local_198 = (undefined1  [8])0x0;
  local_190.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_190.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_198,
             (FWriteAccessScope *)(local_180 + 0x10));
  local_158 = &local_190;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,&local_190);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_GameInstance____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar7[3] = 0;
    local_180._0_8_ = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)local_180);
    puVar7[4] = local_1b8._0_8_;
    puVar7[5] = local_1b8.Accessor;
  }
  if (local_160 == '\0') {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              (local_168,(FDestructionSentinel *)(local_180 + 0x10));
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->TickDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_198);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_198,
             (FWriteAccessScope *)&local_1b8);
  if ((local_190.DelegateSize != 0) &&
     (local_190.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_190.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_190,0,0,0x10);
    local_190.DelegateSize = 0;
  }
  if (local_1b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b8.Accessor,&local_1b8);
  }
  if (local_190.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_190.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_198);
  this_00 = FTSTicker::GetCoreTicker();
  pTVar9 = FTSTicker::AddTicker
                     (this_00,(TWeakPtr<FTSTicker::FElement,1> *)&local_1b8,&this->TickDelegate,0.0)
  ;
  if (&this->TickDelegateHandle != pTVar9) {
    (this->TickDelegateHandle).Object = pTVar9->Object;
    pTVar9->Object = (FElement *)0x0;
    pTVar3 = (this->TickDelegateHandle).WeakReferenceCount.ReferenceController;
    (this->TickDelegateHandle).WeakReferenceCount.ReferenceController =
         (pTVar9->WeakReferenceCount).ReferenceController;
    (pTVar9->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))();
      }
    }
  }
  if ((TReferenceControllerBase<1> *)local_1b8.Accessor != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar4 = (atomic<unsigned___int64> *)((longlong)local_1b8.Accessor + 0xc);
    iVar6 = *(int *)paVar4;
    *(int *)paVar4 = *(int *)paVar4 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)((longlong)(local_1b8.Accessor)->State + 8))();
    }
  }
  FDS_TimerManager::Initialize((FTimerManager *)this->_padding_);
  TDS_Singleton<FDS_HttpServer>::GetInst();
  CreateDefaultManagers(this);
  bVar5 = IsValidLauncherKey(this);
  if (bVar5) {
    UKismetSystemLibrary::GetCommandLine((FString *)local_180);
    iVar6 = ::FString::Find((FString *)local_180,L"-AIServer",9,IgnoreCase,FromStart,-1);
    if ((iVar6 == -1) &&
       (iVar6 = ::FString::Find((FString *)local_180,L"-AIPlay",7,IgnoreCase,FromStart,-1),
       iVar6 == -1)) {
      iVar6 = ::FString::Find((FString *)local_180,L"-DungeonServer",0xe,IgnoreCase,FromStart,-1);
      if (iVar6 != -1) {
        this->bIsDungeonPlayBuild = true;
      }
    }
    else {
      this->bIsCCSAIMode = true;
    }
    iVar6 = ::FString::Find((FString *)local_180,L"-WorldBossServer",0x10,IgnoreCase,FromStart,-1);
    if (iVar6 != -1) {
      this->bIsWorldBossTestMode = true;
      pUVar10 = UDS_LogManager::GetInst();
      if (pUVar10 != (UDS_LogManager *)0x0) {
        pUVar10 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_GameInstance::SetIsWorldBossTestMode",0x28,Yes);
        UDS_LogManager::PrintLog
                  (pUVar10,1,Warning,local_148.Ptr,0x4e4,L"World Boss Test Mode has been enabled.");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    if ((UDS_GameInstance *)local_180._0_8_ != (UDS_GameInstance *)0x0) {
      FMemory::Free((void *)local_180._0_8_);
    }
    OnCompletedPakDownloaderProcess(this);
    return;
  }
  FWindowsPlatformMisc::RequestExit(true,(wchar_t *)0x0);
  return;
}

// InitManagers @ 14b9b65c0

void __thiscall UDS_GameInstance::InitManagers(UDS_GameInstance *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  UDS_NetworkManager *pUVar4;
  UDS_ContentManager *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FScriptContainerElement *pFVar8;
  UDS_ContentManager *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  if (this->bInitManagers != true) {
    iVar2 = (this->ManagerArray).ArrayNum;
    pFVar8 = (this->ManagerArray).AllocatorInstance.Data;
    pFVar1 = pFVar8 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->ManagerArray).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UDS_ManagerBase>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar8 == pFVar1) break;
      pUVar3 = *(UObject **)pFVar8;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar3 != (UObject *)0x0) goto LAB_14b9b6637;
      }
      else if (pUVar3 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar3);
LAB_14b9b6637:
        (**(code **)(*(longlong *)pUVar3 + 0x2c8))(pUVar3);
      }
      pFVar8 = pFVar8 + 8;
    }
    pUVar4 = UDS_NetworkManager::GetInst();
    if (pUVar4 != (UDS_NetworkManager *)0x0) {
      pUVar5 = UDS_ContentManager::GetInst();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &pUVar4->SendValidCheckDel,(FWriteAccessScope *)&local_38);
      local_20 = &(pUVar4->SendValidCheckDel).field_0x8;
      puVar6 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_20);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &
                  ___7__TCommonDelegateInstanceState___A6A_NAEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[2] = uVar7;
        *puVar6 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_ContentManager____A6A_NAEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar5 != (UDS_ContentManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        puVar6[3] = 0;
        local_res8 = pUVar5;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar5 != (UDS_ContentManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res8);
        puVar6[4] = UDS_ContentManager::CheckValidPacket;
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
    }
    this->bInitManagers = true;
  }
  return;
}

// IsAutoPlayer @ 14b9b6f70

bool __cdecl UDS_GameInstance::IsAutoPlayer(void)

{
  if (StaticInstance == (UDS_GameInstance *)0x0) {
    return false;
  }
  return StaticInstance->AutoPlayer;
}

// IsCharacterCollisionBlockDebug @ 14b9b6f90

bool __cdecl UDS_GameInstance::IsCharacterCollisionBlockDebug(void)

{
  if (StaticInstance != (UDS_GameInstance *)0x0) {
    return StaticInstance->CharacterCollisionBlockDebug;
  }
  return false;
}

// IsClientAbnormal @ 14b9b6fb0

bool __cdecl UDS_GameInstance::IsClientAbnormal(void)

{
  if (StaticInstance == (UDS_GameInstance *)0x0) {
    return false;
  }
  return StaticInstance->UseClientAbnormal;
}

// IsFixedSkillLocation @ 14b9b7460

bool __cdecl UDS_GameInstance::IsFixedSkillLocation(void)

{
  if (StaticInstance != (UDS_GameInstance *)0x0) {
    return StaticInstance->FixedSkillLocation;
  }
  return false;
}

// IsForceTransportWarpFail @ 14b9b7480

bool __cdecl UDS_GameInstance::IsForceTransportWarpFail(void)

{
  if (StaticInstance != (UDS_GameInstance *)0x0) {
    return StaticInstance->ForceTransportWarpFail;
  }
  return false;
}

// IsNameTagDebug @ 14b9b75d0

bool __cdecl UDS_GameInstance::IsNameTagDebug(void)

{
  if (StaticInstance == (UDS_GameInstance *)0x0) {
    return false;
  }
  return StaticInstance->ShowNameTagDebug;
}

// IsPlayerCollisionBlock @ 14b9b7630

bool __cdecl UDS_GameInstance::IsPlayerCollisionBlock(void)

{
  if (StaticInstance != (UDS_GameInstance *)0x0) {
    return StaticInstance->PlayerCollisionBlock;
  }
  return false;
}

// IsPrintEntityVisble @ 14b9b7650

bool __cdecl UDS_GameInstance::IsPrintEntityVisble(void)

{
  if (StaticInstance != (UDS_GameInstance *)0x0) {
    return StaticInstance->PrintEntityVisble;
  }
  return false;
}

// IsShowGameTime @ 14b9b79b0

bool __cdecl UDS_GameInstance::IsShowGameTime(void)

{
  if (StaticInstance == (UDS_GameInstance *)0x0) {
    return false;
  }
  return StaticInstance->ShowGameTime;
}

// IsShowSyncDebug @ 14b9b79d0

bool __cdecl UDS_GameInstance::IsShowSyncDebug(void)

{
  if (StaticInstance == (UDS_GameInstance *)0x0) {
    return false;
  }
  return StaticInstance->ShowSyncDebug;
}

// IsTestSkillMove @ 14b9b7af0

bool __cdecl UDS_GameInstance::IsTestSkillMove(void)

{
  if (StaticInstance == (UDS_GameInstance *)0x0) {
    return false;
  }
  return StaticInstance->TestSkillMove;
}

// IsUseSkillCoolTime @ 14b9b7b10

bool __cdecl UDS_GameInstance::IsUseSkillCoolTime(void)

{
  if (StaticInstance == (UDS_GameInstance *)0x0) {
    return false;
  }
  return StaticInstance->UseSkillCoolTime;
}

// IsValidLauncherKey @ 14b9b7db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_GameInstance::IsValidLauncherKey(UDS_GameInstance *this)

{
  bool bVar1;
  int iVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_1b8 [32];
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  UKismetSystemLibrary::GetCommandLine(&local_148);
  ::FString::FString(&local_158,"");
  ::FString::FString(&local_178,"LauncherKey=");
  bVar1 = UKismetSystemLibrary::ParseParamValue(&local_148,&local_178,&local_158);
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (bVar1) {
    FDS_AESUtil::Decrypt(&local_178,&local_158);
    local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.Data.ArrayNum = 0;
    local_168.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_168,0);
    if (local_178.Data.ArrayNum == local_168.Data.ArrayNum) {
      if (1 < local_178.Data.ArrayNum) {
        iVar2 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_178.Data.AllocatorInstance.Data,
                           (wchar_t *)local_168.Data.AllocatorInstance.Data);
        bVar1 = iVar2 == 0;
        goto LAB_14b9b7e8d;
      }
    }
    else {
      bVar1 = local_178.Data.ArrayNum + local_168.Data.ArrayNum == 1;
LAB_14b9b7e8d:
      if (!bVar1) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_GameInstance::IsValidLauncherKey",0x24,Yes);
          UDS_LogManager::PrintLog
                    (pUVar3,1,Warning,local_138.Ptr,0x57f,L"Invalid LauncherKey. (%s)");
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        bVar1 = false;
        goto LAB_14b9b7f78;
      }
    }
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
  }
  bVar1 = true;
LAB_14b9b7f78:
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// IsValidLocation @ 14b9b7fd0

bool __cdecl UDS_GameInstance::IsValidLocation(TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  if ((((__real_c290000000000000 < dVar1) && (dVar1 < __real_4290000000000000)) &&
      (dVar1 = (param_1->field0_0x0)._s_0.Y, __real_c290000000000000 < dVar1)) &&
     (((dVar1 < __real_4290000000000000 &&
       (dVar1 = (param_1->field0_0x0)._s_0.Z, __real_c290000000000000 < dVar1)) &&
      (dVar1 < __real_4290000000000000)))) {
    return true;
  }
  return false;
}

// JPRO_TEST @ 14b9b8020

void __thiscall UDS_GameInstance::JPRO_TEST(UDS_GameInstance *this,int param_1)

{
  return;
}

// JumpToPlayer @ 14b9b8030

void __thiscall UDS_GameInstance::JumpToPlayer(UDS_GameInstance *this,FString *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar4;
  UDS_GameInstance *local_res8;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  bool local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  StopJumpToPlayer(this);
  ::FString::operator=(&this->JumpTargetPlayerName,param_1);
  iVar1 = (this->JumpTargetPlayerName).Data.ArrayNum;
  this->JumpTargetPlayerUID = 0;
  if (1 < iVar1) {
    uStack_70 = 0;
    local_78 = OnSearchPlayers;
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_GameInstance____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
      puVar2[4] = local_78;
      puVar2[5] = CONCAT44(uStack_6c,uStack_70);
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    pTVar4 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_78,
                        (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58);
    FDS_PlayerRepo::RequestSearchPlayersByName(&this->JumpTargetPlayerName,pTVar4);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_78);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_68 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_6c,uStack_70),
                 (FDestructionSentinel *)&local_78);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  return;
}

// LoadDataAssets @ 14b9b9780

/* WARNING: Removing unreachable block (ram,0x00014b9b9c29) */
/* WARNING: Removing unreachable block (ram,0x00014b9b9a57) */
/* WARNING: Removing unreachable block (ram,0x00014b9b9885) */
/* WARNING: Removing unreachable block (ram,0x00014b9b996e) */
/* WARNING: Removing unreachable block (ram,0x00014b9b9b40) */
/* WARNING: Removing unreachable block (ram,0x00014b9b9d12) */

void __thiscall UDS_GameInstance::LoadDataAssets(UDS_GameInstance *this)

{
  ForAnyElementType FVar1;
  int iVar2;
  FString *pFVar3;
  atomic<unsigned___int64> *paVar4;
  UAssetManager *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  UDS_GameInstance *local_res10;
  undefined1 local_d8 [16];
  ForAnyElementType local_c8;
  undefined8 local_c0;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_b8;
  undefined1 local_a8 [8];
  undefined8 uStack_a0;
  undefined1 local_98 [8];
  FDelegateAllocation FStack_90;
  undefined1 local_78 [16];
  FName local_68;
  FName FStack_60;
  FScriptContainerElement *local_58;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  pFVar3 = ::FString::FString((FString *)local_98,L"/Game/DataAsset/DA_CommonSetting");
  pFVar3 = FWN_SoftObjectUtils::GetObjectPath((FString *)&local_68,pFVar3,false);
  local_d8._0_4_ = 0;
  local_d8._4_4_ = 0;
  local_d8._8_4_ = 0;
  local_d8._12_4_ = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0._0_4_ = 0;
  local_c0._4_4_ = 0;
  local_a8 = (undefined1  [8])(pFVar3->Data).AllocatorInstance.Data;
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar10 = 0;
  uStack_a0._0_4_ = iVar2 + -1;
  if (iVar2 == 0) {
    uStack_a0._0_4_ = iVar10;
  }
  FSoftObjectPath::SetPath((FSoftObjectPath *)local_d8,(TStringView<wchar_t> *)local_a8);
  if (local_68 != (FName)0x0) {
    FMemory::Free((void *)local_68);
  }
  iVar2 = local_b8.ArrayNum;
  if (local_b8.ArrayNum == local_b8.ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
  }
  local_b8.ArrayNum = iVar2 + 1;
  pFVar9 = local_b8.AllocatorInstance.Data + (longlong)iVar2 * 0x20;
  *(undefined8 *)&pFVar9->field_0x0 = local_d8._0_8_;
  *(undefined8 *)(pFVar9 + 8) = local_d8._8_8_;
  *(undefined8 *)(pFVar9 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar9 + 0x10) = local_c8.Data;
  *(int *)(pFVar9 + 0x18) = (int)local_c0;
  *(int *)(pFVar9 + 0x1c) = local_c0._4_4_;
  local_c0._0_4_ = 0;
  local_c0._4_4_ = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  if ((atomic<unsigned___int64>)local_98 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_98);
  }
  pFVar3 = ::FString::FString((FString *)local_78,L"/Game/DataAsset/DA_ViewerSetting");
  paVar4 = (atomic<unsigned___int64> *)
           FWN_SoftObjectUtils::GetObjectPath((FString *)&local_68,pFVar3,false);
  local_d8._0_4_ = 0;
  local_d8._4_4_ = 0;
  local_d8._8_4_ = 0;
  local_d8._12_4_ = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0._0_4_ = 0;
  local_c0._4_4_ = 0;
  local_a8 = *(undefined1 (*) [8])paVar4;
  iVar2 = *(int *)(paVar4 + 1) + -1;
  if (*(int *)(paVar4 + 1) == 0) {
    iVar2 = iVar10;
  }
  uStack_a0._0_4_ = iVar2;
  FStack_90.DelegateAllocator = uStack_a0;
  local_98 = local_a8;
  FSoftObjectPath::SetPath((FSoftObjectPath *)local_d8,(TStringView<wchar_t> *)local_98);
  if (local_68 != (FName)0x0) {
    FMemory::Free((void *)local_68);
  }
  iVar2 = local_b8.ArrayNum;
  if (local_b8.ArrayNum == local_b8.ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
  }
  local_b8.ArrayNum = iVar2 + 1;
  pFVar9 = local_b8.AllocatorInstance.Data + (longlong)iVar2 * 0x20;
  *(undefined8 *)&pFVar9->field_0x0 = local_d8._0_8_;
  *(undefined8 *)(pFVar9 + 8) = local_d8._8_8_;
  *(undefined8 *)(pFVar9 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar9 + 0x10) = local_c8.Data;
  *(int *)(pFVar9 + 0x18) = (int)local_c0;
  *(int *)(pFVar9 + 0x1c) = local_c0._4_4_;
  local_c0._0_4_ = 0;
  local_c0._4_4_ = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  pFVar3 = ::FString::FString((FString *)&local_68,L"/Game/DataAsset/DA_FloatingTextDataAsset");
  pFVar3 = FWN_SoftObjectUtils::GetObjectPath((FString *)local_98,pFVar3,false);
  local_d8._0_4_ = 0;
  local_d8._4_4_ = 0;
  local_d8._8_4_ = 0;
  local_d8._12_4_ = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0._0_4_ = 0;
  local_c0._4_4_ = 0;
  local_a8 = (undefined1  [8])(pFVar3->Data).AllocatorInstance.Data;
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar8 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar8 = iVar10;
  }
  uStack_a0 = (ForElementType<TAlignedBytes<16,16>_>)CONCAT44(uStack_a0._4_4_,iVar8);
  local_78._8_8_ = uStack_a0;
  local_78._0_8_ = local_a8;
  FSoftObjectPath::SetPath((FSoftObjectPath *)local_d8,(TStringView<wchar_t> *)local_78);
  if ((atomic<unsigned___int64>)local_98 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_98);
  }
  iVar2 = local_b8.ArrayNum;
  if (local_b8.ArrayNum == local_b8.ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
  }
  local_b8.ArrayNum = iVar2 + 1;
  pFVar9 = local_b8.AllocatorInstance.Data + (longlong)iVar2 * 0x20;
  *(undefined8 *)&pFVar9->field_0x0 = local_d8._0_8_;
  *(undefined8 *)(pFVar9 + 8) = local_d8._8_8_;
  *(undefined8 *)(pFVar9 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar9 + 0x10) = local_c8.Data;
  *(int *)(pFVar9 + 0x18) = (int)local_c0;
  *(int *)(pFVar9 + 0x1c) = local_c0._4_4_;
  local_c0._0_4_ = 0;
  local_c0._4_4_ = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  if (local_68 != (FName)0x0) {
    FMemory::Free((void *)local_68);
  }
  pFVar3 = ::FString::FString((FString *)&local_68,L"/Game/DataAsset/DA_NameTagDataAsset");
  pFVar3 = FWN_SoftObjectUtils::GetObjectPath((FString *)local_98,pFVar3,false);
  local_d8._0_4_ = 0;
  local_d8._4_4_ = 0;
  local_d8._8_4_ = 0;
  local_d8._12_4_ = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0._0_4_ = 0;
  local_c0._4_4_ = 0;
  local_a8 = (undefined1  [8])(pFVar3->Data).AllocatorInstance.Data;
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar8 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar8 = iVar10;
  }
  uStack_a0 = (ForElementType<TAlignedBytes<16,16>_>)CONCAT44(uStack_a0._4_4_,iVar8);
  local_78._8_8_ = uStack_a0;
  local_78._0_8_ = local_a8;
  FSoftObjectPath::SetPath((FSoftObjectPath *)local_d8,(TStringView<wchar_t> *)local_78);
  if ((atomic<unsigned___int64>)local_98 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_98);
  }
  iVar2 = local_b8.ArrayNum;
  if (local_b8.ArrayNum == local_b8.ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
  }
  local_b8.ArrayNum = iVar2 + 1;
  pFVar9 = local_b8.AllocatorInstance.Data + (longlong)iVar2 * 0x20;
  *(undefined8 *)&pFVar9->field_0x0 = local_d8._0_8_;
  *(undefined8 *)(pFVar9 + 8) = local_d8._8_8_;
  *(undefined8 *)(pFVar9 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar9 + 0x10) = local_c8.Data;
  *(int *)(pFVar9 + 0x18) = (int)local_c0;
  *(int *)(pFVar9 + 0x1c) = local_c0._4_4_;
  local_c0._0_4_ = 0;
  local_c0._4_4_ = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  if (local_68 != (FName)0x0) {
    FMemory::Free((void *)local_68);
  }
  pFVar3 = ::FString::FString((FString *)&local_68,L"/Game/DataAsset/DA_DepthOfFieldDataAsset");
  pFVar3 = FWN_SoftObjectUtils::GetObjectPath((FString *)local_98,pFVar3,false);
  local_d8._0_4_ = 0;
  local_d8._4_4_ = 0;
  local_d8._8_4_ = 0;
  local_d8._12_4_ = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0._0_4_ = 0;
  local_c0._4_4_ = 0;
  local_a8 = (undefined1  [8])(pFVar3->Data).AllocatorInstance.Data;
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar8 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar8 = iVar10;
  }
  uStack_a0 = (ForElementType<TAlignedBytes<16,16>_>)CONCAT44(uStack_a0._4_4_,iVar8);
  local_78._8_8_ = uStack_a0;
  local_78._0_8_ = local_a8;
  FSoftObjectPath::SetPath((FSoftObjectPath *)local_d8,(TStringView<wchar_t> *)local_78);
  if ((atomic<unsigned___int64>)local_98 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_98);
  }
  iVar2 = local_b8.ArrayNum;
  if (local_b8.ArrayNum == local_b8.ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
  }
  local_b8.ArrayNum = iVar2 + 1;
  pFVar9 = local_b8.AllocatorInstance.Data + (longlong)iVar2 * 0x20;
  *(undefined8 *)&pFVar9->field_0x0 = local_d8._0_8_;
  *(undefined8 *)(pFVar9 + 8) = local_d8._8_8_;
  *(undefined8 *)(pFVar9 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar9 + 0x10) = local_c8.Data;
  *(int *)(pFVar9 + 0x18) = (int)local_c0;
  *(int *)(pFVar9 + 0x1c) = local_c0._4_4_;
  local_c0._0_4_ = 0;
  local_c0._4_4_ = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  if (local_68 != (FName)0x0) {
    FMemory::Free((void *)local_68);
  }
  pFVar3 = ::FString::FString((FString *)&local_68,L"/Game/DataAsset/DA_InputMappingDataAsset");
  pFVar3 = FWN_SoftObjectUtils::GetObjectPath((FString *)local_98,pFVar3,false);
  local_d8._0_4_ = 0;
  local_d8._4_4_ = 0;
  local_d8._8_4_ = 0;
  local_d8._12_4_ = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0._0_4_ = 0;
  local_c0._4_4_ = 0;
  local_a8 = (undefined1  [8])(pFVar3->Data).AllocatorInstance.Data;
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar8 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar8 = iVar10;
  }
  uStack_a0 = (ForElementType<TAlignedBytes<16,16>_>)CONCAT44(uStack_a0._4_4_,iVar8);
  local_78._8_8_ = uStack_a0;
  local_78._0_8_ = local_a8;
  FSoftObjectPath::SetPath((FSoftObjectPath *)local_d8,(TStringView<wchar_t> *)local_78);
  if ((atomic<unsigned___int64>)local_98 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_98);
  }
  iVar2 = local_b8.ArrayNum;
  if (local_b8.ArrayNum == local_b8.ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
  }
  local_b8.ArrayNum = iVar2 + 1;
  pFVar9 = local_b8.AllocatorInstance.Data + (longlong)iVar2 * 0x20;
  *(undefined8 *)&pFVar9->field_0x0 = local_d8._0_8_;
  *(undefined8 *)(pFVar9 + 8) = local_d8._8_8_;
  *(undefined8 *)(pFVar9 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar9 + 0x10) = local_c8.Data;
  *(int *)(pFVar9 + 0x18) = (int)local_c0;
  *(int *)(pFVar9 + 0x1c) = local_c0._4_4_;
  local_c0._0_4_ = 0;
  local_c0._4_4_ = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  if (local_68 != (FName)0x0) {
    FMemory::Free((void *)local_68);
  }
  pUVar5 = UAssetManager::Get();
  local_d8._0_4_ = 0x229;
  local_d8._4_4_ = 0x28;
  local_d8._8_8_ =
       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\GameMode\\DS_GameInstance.cpp";
  local_a8 = (undefined1  [8])0x0;
  local_c8.Data = (FScriptContainerElement *)0x152767070;
  uStack_a0._0_4_ = 0;
  uStack_a0._4_4_ = 0;
  local_68 = (FName)OnCompleteLoadDataAssets;
  FStack_60 = (FName)(local_78._8_8_ & 0xffffffff00000000);
  local_98 = (undefined1  [8])0x0;
  FStack_90.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_90.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_98,
             (FWriteAccessScope *)&local_48);
  local_30 = &FStack_90;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,&FStack_90);
  FVar1.Data = local_b8.AllocatorInstance.Data;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TArray_UFSoftObjectPath__V__TSizedDefaultAllocator__0CA_______6B_
    ;
    puVar6[1] = 0;
    iVar2 = local_b8.ArrayNum;
    *(int *)(puVar6 + 2) = local_b8.ArrayNum;
    if (local_b8.ArrayNum == 0) {
      *(int *)((longlong)puVar6 + 0x14) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,local_b8.ArrayNum,0,(ForAnyElementType *)(puVar6 + 1),local_b8.ArrayNum,
                 (int *)((longlong)puVar6 + 0x14));
      ConstructItems<FSoftObjectPath,FSoftObjectPath,int>
                (((ForAnyElementType *)(puVar6 + 1))->Data,(FSoftObjectPath *)FVar1.Data,iVar2);
    }
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[3] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_GameInstance____A6AXXZUFDefaultDelegateUserPolicy__V__TArray_UFSoftObjectPath__V__TSizedDefaultAllocator__0CA_______6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_GameInstance *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar6[4] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_GameInstance *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 4),(FObjectPtr)&local_res10);
    *(FName *)(puVar6 + 5) = local_68;
    puVar6[6] = FStack_60;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_68.ComparisonIndex.Value = local_d8._0_4_;
  local_68.Number = local_d8._4_4_;
  FStack_60.ComparisonIndex.Value = local_d8._8_4_;
  FStack_60.Number = local_d8._12_4_;
  local_58 = local_c8.Data;
  FStreamableManager::
  RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
            (&pUVar5->StreamableManager,(TSharedPtr<FStreamableHandle,1> *)local_78,&local_b8,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_98,0,false,false,
             (FString *)local_a8,(FSourceLocation *)&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_78._8_8_);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_98,
             (FWriteAccessScope *)local_d8);
  if ((FStack_90.DelegateSize != 0) &&
     (FStack_90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_90.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_90,0,0,0x10);
    FStack_90.DelegateSize = 0;
  }
  if (local_c8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_d8._8_8_,(FDestructionSentinel *)local_d8);
  }
  if (FStack_90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_90.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_98);
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
  if ((FSoftObjectPath *)local_b8.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  return;
}

// LoadServerInfo @ 14b9baaf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_GameInstance::LoadServerInfo(UDS_GameInstance *this)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_SyncServer *this_00;
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *this_01;
  undefined8 *puVar3;
  ulong64 uVar4;
  longlong *plVar5;
  undefined1 auStack_f8 [32];
  code *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  UDS_GameInstance *local_c8;
  FDestructionSentinel local_c0;
  undefined1 *local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  this_00 = (this->ServerInfoObject).field0_0x0.DebugPtr;
  if (this_00 == (UDS_SyncServer *)0x0) {
    pUVar1 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_SyncServer_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar2);
    local_98._8_8_ = pUVar1;
    this_00 = (UDS_SyncServer *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar5 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UDS_SyncServer *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    (this->ServerInfoObject).field0_0x0.DebugPtr = this_00;
    if (this_00 == (UDS_SyncServer *)0x0) {
      return;
    }
  }
  this_01 = UDS_SyncServer::GetHttpRequestResultDelegate(this_00);
  uStack_d0 = 0;
  local_d8 = LoadServerInfoComplete;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,
             (FWriteAccessScope *)&local_c0);
  local_a8 = &this_01->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_a8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_GameInstance____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar3[3] = 0;
    local_c8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_c8);
    puVar3[4] = local_d8;
    puVar3[5] = CONCAT44(uStack_cc,uStack_d0);
  }
  if (local_c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
  }
  UDS_SyncServer::Load((this->ServerInfoObject).field0_0x0.DebugPtr);
  return;
}

// LoadServerInfoComplete @ 14b9bacc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_GameInstance::LoadServerInfoComplete(UDS_GameInstance *this,bool param_1)

{
  ulonglong uVar1;
  int iVar2;
  UDS_SyncServer *this_00;
  longlong lVar3;
  UDS_GameInstance *pUVar4;
  bool bVar5;
  ADS_GameMode *this_01;
  TWeakObjectPtr<UDS_GameStateBase,FWeakObjectPtr> this_02;
  UDS_AccountLocalSave *pUVar6;
  UClass *pUVar7;
  UDS_LogManager *pUVar8;
  UDS_LoginState *pUVar9;
  TMap<int,FDS_ServerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ServerInfo,0>_>
  *pTVar10;
  UObject *pUVar11;
  FString *pFVar12;
  FDS_HttpServer *pFVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint *puVar19;
  undefined1 auStackY_268 [32];
  uint uVar20;
  wchar_t *pwVar21;
  FWeakObjectPtr local_238;
  FWeakObjectPtr local_230;
  UDS_AccountLocalSave *local_228;
  FWeakObjectPtr local_220;
  FString local_218;
  undefined1 local_208 [72];
  undefined4 local_1c0;
  undefined1 local_1b8 [72];
  undefined4 local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_268;
  ADS_GameMode::GetInst();
  bVar5 = TWeakObjectPtr<ADS_GameMode,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_GameMode,FWeakObjectPtr> *)&local_220,(void *)0x0);
  if (bVar5) {
    local_238.ObjectIndex = 0;
    local_238.ObjectSerialNumber = 0;
    local_228 = (UDS_AccountLocalSave *)0x0;
    goto LAB_14b9badb0;
  }
  this_01 = (ADS_GameMode *)FWeakObjectPtr::Get(&local_220);
  this_02 = ADS_GameMode::GetGameState(this_01,(EDS_GameStateType)&local_218);
  pUVar6 = (UDS_AccountLocalSave *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.WeakPtr);
  if (pUVar6 == (UDS_AccountLocalSave *)0x0) {
LAB_14b9bad65:
    pUVar6 = (UDS_AccountLocalSave *)0x0;
  }
  else {
    pUVar7 = Z_Construct_UClass_UDS_LoginState_NoRegister();
    iVar16 = (int)pUVar7->_padding_;
    if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar16) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar16 * 8)
        != &pUVar7->_padding_)) goto LAB_14b9bad65;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UDS_AccountLocalSave *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  local_238.ObjectIndex = 0;
  local_238.ObjectSerialNumber = 0;
  local_228 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UDS_AccountLocalSave *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
LAB_14b9badb0:
  iVar16 = 0;
  FWeakObjectPtr::operator=(&local_238,(FObjectPtr)&local_228);
  bVar5 = FWeakObjectPtr::IsValid(&local_238);
  pUVar4 = StaticInstance;
  if (bVar5) {
    if (param_1) {
      if (StaticInstance == (UDS_GameInstance *)0x0) {
        local_230 = (FWeakObjectPtr)StaticInstance;
        local_228 = (UDS_AccountLocalSave *)0x0;
      }
      else {
        if ((StaticInstance->AccountLocalSave).field0_0x0.DebugPtr == (UDS_AccountLocalSave *)0x0) {
          UDS_AccountLocalSave::Load(&StaticInstance->AccountLocalSave);
        }
        pUVar6 = (pUVar4->AccountLocalSave).field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar6 != (UDS_AccountLocalSave *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pUVar6);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar6 != (UDS_AccountLocalSave *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar6);
          }
        }
        local_230.ObjectIndex = 0;
        local_230.ObjectSerialNumber = 0;
        local_228 = pUVar6;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar6 != (UDS_AccountLocalSave *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar6);
        }
      }
      FWeakObjectPtr::operator=(&local_230,(FObjectPtr)&local_228);
      bVar5 = TWeakObjectPtr<UDS_AccountLocalSave,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_AccountLocalSave,FWeakObjectPtr> *)&local_230,
                         (void *)0x0);
      if (bVar5) {
        pUVar8 = UDS_LogManager::GetInst();
        if (pUVar8 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar8 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_GameInstance::LoadServerInfoComplete",0x28,Yes);
        pwVar21 = L"AccountLocalSave is nullptr.";
        uVar20 = 0x2c6;
      }
      else {
        pTVar10 = UDS_SyncServer::GetServerInfos
                            ((this->ServerInfoObject).field0_0x0.DebugPtr,
                             (TMap<int,FDS_ServerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ServerInfo,0>_>
                              *)local_208);
        iVar2 = *(int *)&pTVar10->field_0x8;
        iVar17 = *(int *)&pTVar10->field_0x34;
        iVar18 = 0;
        local_1c0 = 0;
        if ((void *)local_208._64_8_ != (void *)0x0) {
          FMemory::Free((void *)local_208._64_8_);
        }
        TSparseArray<TSparseSetElement<TTuple<int,FDS_ServerInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<int,FDS_ServerInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<int,FDS_ServerInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_208);
        if (iVar2 != iVar17) {
          pUVar11 = FWeakObjectPtr::Get(&local_230);
          if (0 < *(int *)&pUVar11[5].field_0x10 - *(int *)&pUVar11[6].field_0x14) {
            pUVar11 = FWeakObjectPtr::Get(&local_230);
            iVar2 = *(int *)&pUVar11[4].field_0x20;
            bVar5 = UDS_SyncServer::SetSelectedChannel
                              ((this->ServerInfoObject).field0_0x0.DebugPtr,iVar2);
            if (bVar5) {
              UDS_SyncServer::GetServerInfo
                        ((this->ServerInfoObject).field0_0x0.DebugPtr,(FDS_ServerInfo *)local_1b8,
                         iVar2);
              if ((local_1b8._16_4_ != 0) && (local_1b8._16_4_ != 1)) {
                pFVar12 = UDS_SyncServer::GetServerInfoURL
                                    ((this->ServerInfoObject).field0_0x0.DebugPtr,&local_218);
                pFVar13 = TDS_Singleton<FDS_HttpServer>::GetInst();
                FDS_HttpServer::LoadUrls(pFVar13,pFVar12);
                if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_218.Data.AllocatorInstance.Data);
                }
                pUVar9 = (UDS_LoginState *)FWeakObjectPtr::Get(&local_238);
                UDS_LoginState::RestartModule(pUVar9);
                FDS_ServerInfo::~FDS_ServerInfo((FDS_ServerInfo *)local_1b8);
                return;
              }
              FDS_ServerInfo::~FDS_ServerInfo((FDS_ServerInfo *)local_1b8);
            }
          }
          this_00 = (this->ServerInfoObject).field0_0x0.DebugPtr;
          pTVar10 = UDS_SyncServer::GetServerInfos
                              (this_00,(TMap<int,FDS_ServerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ServerInfo,0>_>
                                        *)local_1b8);
          iVar2 = *(int *)&pTVar10->field_0x28;
          local_208._28_4_ = iVar18;
          if (iVar2 != 0) {
            puVar19 = *(uint **)&pTVar10->field_0x20;
            if (*(uint **)&pTVar10->field_0x20 == (uint *)0x0) {
              puVar19 = (uint *)&pTVar10->field_0x10;
            }
            uVar20 = *puVar19;
            iVar17 = iVar18;
            iVar15 = iVar16;
            while (uVar20 == 0) {
              iVar15 = iVar15 + 1;
              iVar17 = iVar17 + 0x20;
              local_208._28_4_ = iVar2;
              if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15)
              goto LAB_14b9bb18b;
              uVar20 = puVar19[iVar15];
            }
            uVar1 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
            lVar3 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
              }
            }
            local_208._28_4_ = (int)lVar3 + -1 + iVar17;
            if (iVar2 < (int)local_208._28_4_) {
              local_208._28_4_ = iVar2;
            }
          }
LAB_14b9bb18b:
          local_208._24_4_ = 0xffffffff;
          UDS_SyncServer::SetSelectedChannel
                    (this_00,*(int *)((longlong)(int)local_208._28_4_ * 0x78 + *(longlong *)pTVar10)
                    );
          local_170 = 0;
          if ((void *)local_1b8._64_8_ != (void *)0x0) {
            FMemory::Free((void *)local_1b8._64_8_);
          }
          TSparseArray<TSparseSetElement<TTuple<int,FDS_ServerInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,FDS_ServerInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<int,FDS_ServerInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_1b8);
          pTVar10 = UDS_SyncServer::GetServerInfos
                              ((this->ServerInfoObject).field0_0x0.DebugPtr,
                               (TMap<int,FDS_ServerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ServerInfo,0>_>
                                *)local_1b8);
          iVar2 = *(int *)&pTVar10->field_0x28;
          local_208._28_4_ = iVar18;
          if (iVar2 != 0) {
            puVar19 = *(uint **)&pTVar10->field_0x20;
            if (*(uint **)&pTVar10->field_0x20 == (uint *)0x0) {
              puVar19 = (uint *)&pTVar10->field_0x10;
            }
            uVar20 = *puVar19;
            while (uVar20 == 0) {
              iVar16 = iVar16 + 1;
              iVar18 = iVar18 + 0x20;
              local_208._28_4_ = iVar2;
              if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16)
              goto LAB_14b9bb25b;
              uVar20 = puVar19[iVar16];
            }
            uVar1 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
            lVar3 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
              }
            }
            local_208._28_4_ = (int)lVar3 + -1 + iVar18;
            if (iVar2 < (int)local_208._28_4_) {
              local_208._28_4_ = iVar2;
            }
          }
LAB_14b9bb25b:
          lVar3 = *(longlong *)pTVar10;
          local_208._24_4_ = 0xffffffff;
          lVar14 = (longlong)(int)local_208._28_4_;
          pFVar13 = TDS_Singleton<FDS_HttpServer>::GetInst();
          FDS_HttpServer::LoadUrls(pFVar13,(FString *)(lVar3 + lVar14 * 0x78 + 0x10));
          local_170 = 0;
          if ((void *)local_1b8._64_8_ != (void *)0x0) {
            FMemory::Free((void *)local_1b8._64_8_);
          }
          TSparseArray<TSparseSetElement<TTuple<int,FDS_ServerInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,FDS_ServerInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<int,FDS_ServerInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_1b8);
          pUVar9 = (UDS_LoginState *)FWeakObjectPtr::Get(&local_238);
          UDS_LoginState::RestartModule(pUVar9);
          return;
        }
        pUVar8 = UDS_LogManager::GetInst();
        if (pUVar8 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar8 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_GameInstance::LoadServerInfoComplete",0x28,Yes);
        pwVar21 = L"ServerInfo is empty.";
        uVar20 = 0x2cd;
      }
    }
    else {
      pUVar9 = (UDS_LoginState *)FWeakObjectPtr::Get(&local_238);
      UDS_LoginState::RestartModule(pUVar9);
      pUVar8 = UDS_LogManager::GetInst();
      if (pUVar8 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar8 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_GameInstance::LoadServerInfoComplete",0x28,Yes);
      pwVar21 = L"LoadServerInfoComplete is failed.";
      uVar20 = 0x2be;
    }
  }
  else {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar8 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_GameInstance::LoadServerInfoComplete",0x28,Yes);
    pwVar21 = L"LoginState is nullptr.";
    uVar20 = 0x2b8;
  }
  UDS_LogManager::PrintLog(pUVar8,1,Warning,local_148.Ptr,uVar20,pwVar21);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

// LoadUrls @ 14b9bb2f0

void __thiscall UDS_GameInstance::LoadUrls(UDS_GameInstance *this,FString *param_1)

{
  FDS_HttpServer *this_00;
  
  this_00 = TDS_Singleton<FDS_HttpServer>::GetInst();
  FDS_HttpServer::LoadUrls(this_00,param_1);
  return;
}

// LogInToDDCStorage @ 14b9bb320

void __thiscall UDS_GameInstance::LogInToDDCStorage(UDS_GameInstance *this)

{
  return;
}

// OnBeginTearingDown @ 14b9bc640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_GameInstance::OnBeginTearingDown(UDS_GameInstance *this,UWorld *param_1)

{
  UWorld *pUVar1;
  
  pUVar1 = UGameInstance::GetWorld((UGameInstance *)this);
  if (pUVar1 != (UWorld *)0x0) {
    pUVar1 = UGameInstance::GetWorld((UGameInstance *)this);
    if (pUVar1 == param_1) {
      ResetManagers(this);
    }
  }
  return;
}

// OnCompleteLoadDataAssets @ 14b9bcd80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_GameInstance::OnCompleteLoadDataAssets
          (UDS_GameInstance *this,TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UDS_NameTagDataAsset *pUVar4;
  UDS_LogManager *pUVar5;
  UClass *pUVar6;
  FSoftObjectPath *this_00;
  FSoftObjectPath *pFVar7;
  undefined1 auStackY_1c8 [32];
  undefined1 local_188 [8];
  FString local_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  this_00 = (FSoftObjectPath *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  pFVar7 = this_00 + iVar1;
LAB_14b9bcdd6:
  do {
    while( true ) {
      if (param_1->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FSoftObjectPath,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_188);
      }
      if (this_00 == pFVar7) {
        FDS_LoadDataAssetCompleteDelegate_DelegateWrapper
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                   &this->OnLoadDataAssetComplete);
        DestructItems<FSoftObjectPath,int>
                  ((FSoftObjectPath *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
        pFVar3 = (param_1->AllocatorInstance).Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        return;
      }
      pUVar4 = (UDS_NameTagDataAsset *)FSoftObjectPath::ResolveObject(this_00);
      if (pUVar4 == (UDS_NameTagDataAsset *)0x0) break;
      pUVar6 = Z_Construct_UClass_UDS_CommonSetting_NoRegister();
      iVar2 = (int)pUVar6->_padding_;
      if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar6->_padding_)) {
        pUVar6 = Z_Construct_UClass_UDS_ViewerSetting_NoRegister();
        iVar2 = (int)pUVar6->_padding_;
        if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar2) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar6->_padding_)) {
          pUVar6 = Z_Construct_UClass_UDS_FloatingTextDataAsset_NoRegister();
          iVar2 = (int)pUVar6->_padding_;
          if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar2) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
              &pUVar6->_padding_)) {
            pUVar6 = Z_Construct_UClass_UDS_NameTagDataAsset_NoRegister();
            iVar2 = (int)pUVar6->_padding_;
            if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar2) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
                &pUVar6->_padding_)) {
              pUVar6 = Z_Construct_UClass_UDS_DepthOfFieldDataAsset_NoRegister();
              iVar2 = (int)pUVar6->_padding_;
              if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar2) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
                  &pUVar6->_padding_)) {
                pUVar6 = Z_Construct_UClass_UDS_InputMappingDataAsset_NoRegister();
                iVar2 = (int)pUVar6->_padding_;
                if ((iVar2 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar2 * 8)
                    == &pUVar6->_padding_)) {
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable((UObject *)pUVar4);
                  }
                  (this->InputMappingDataAsset).field0_0x0.DebugPtr =
                       (UDS_InputMappingDataAsset *)pUVar4;
                }
                goto LAB_14b9bd04e;
              }
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pUVar4);
              }
              (this->DepthOfFieldDataAsset).field0_0x0.DebugPtr =
                   (UDS_DepthOfFieldDataAsset *)pUVar4;
              this_00 = this_00 + 1;
            }
            else {
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pUVar4);
              }
              (this->NameTagDataAsset).field0_0x0.DebugPtr = pUVar4;
              this_00 = this_00 + 1;
            }
          }
          else {
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar4);
            }
            (this->FloatingTextDataAsset).field0_0x0.DebugPtr = (UDS_FloatingTextDataAsset *)pUVar4;
            this_00 = this_00 + 1;
          }
        }
        else {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar4);
          }
          (this->ViewerSetting).field0_0x0.DebugPtr = (UDS_ViewerSetting *)pUVar4;
          this_00 = this_00 + 1;
        }
      }
      else {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        (this->CommonSetting).field0_0x0.DebugPtr = (UDS_CommonSetting *)pUVar4;
        this_00 = this_00 + 1;
      }
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      FSoftObjectPath::ToString(this_00,&local_180);
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_GameInstance::OnCompleteLoadDataAssets",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_168.Ptr,0x233,L"Failed to load data asset. %s");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
        this_00 = this_00 + 1;
        goto LAB_14b9bcdd6;
      }
    }
LAB_14b9bd04e:
    this_00 = this_00 + 1;
  } while( true );
}

// OnCompletedPakDownloaderProcess @ 14b9bd2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_GameInstance::OnCompletedPakDownloaderProcess(UDS_GameInstance *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UDS_SyncServer *this_00;
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *this_01;
  undefined8 *puVar5;
  ulong64 uVar6;
  longlong *plVar7;
  undefined1 auStackY_238 [32];
  uint uStack_1fc;
  UDS_GameInstance *local_1f8;
  FDestructionSentinel local_1f0;
  undefined1 *local_1d8;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 != (UDS_LogManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_GameInstance::OnCompletedPakDownloaderProcess",0x31,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Display,local_148.Ptr,0x115,
               L"UDS_GameInstance::OnCompletedPakDownloaderProcess");
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  bVar1 = CreateManagers(this);
  this->bCreateManagers = bVar1;
  if (bVar1) {
    LoadDataAssets(this);
    this_00 = (this->ServerInfoObject).field0_0x0.DebugPtr;
    if (this_00 == (UDS_SyncServer *)0x0) {
      pUVar3 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar3,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar4 = Z_Construct_UClass_UDS_SyncServer_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_1c8,pUVar4);
      local_1c8._8_8_ = pUVar3;
      this_00 = (UDS_SyncServer *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
      if (local_1c8._64_8_ != 0) {
        plVar7 = (longlong *)(local_1c8 + 0x50);
        if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
          plVar7 = (longlong *)local_1c8._104_8_;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UDS_SyncServer *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      (this->ServerInfoObject).field0_0x0.DebugPtr = this_00;
      if (this_00 == (UDS_SyncServer *)0x0) {
        return;
      }
    }
    this_01 = UDS_SyncServer::GetHttpRequestResultDelegate(this_00);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,
               (FWriteAccessScope *)&local_1f0);
    local_1d8 = &this_01->field_0x8;
    puVar5 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_1d8);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_GameInstance____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar5[3] = 0;
      local_1f8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_1f8);
      puVar5[4] = LoadServerInfoComplete;
      puVar5[5] = (ulonglong)uStack_1fc << 0x20;
    }
    if (local_1f0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f0.Accessor,&local_1f0);
    }
    UDS_SyncServer::Load((this->ServerInfoObject).field0_0x0.DebugPtr);
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_GameInstance::OnCompletedPakDownloaderProcess",0x31,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,0x11a,L"Failed to CreateManagers().");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  return;
}

// OnSearchPlayers @ 14b9be670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_GameInstance::OnSearchPlayers(UDS_GameInstance *this)

{
  uint uVar1;
  int *piVar2;
  longlong lVar3;
  FTimerManager *this_00;
  code *pcVar4;
  int iVar5;
  FDS_PlayerRepo *pFVar6;
  UDS_DataManager *pUVar7;
  size_t sVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  ulonglong uVar11;
  FDS_PlayerRepo *pFVar12;
  uchar *_Str;
  ForAnyElementType FVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  bool bVar17;
  undefined1 auStackY_238 [32];
  undefined1 local_208;
  undefined1 local_207;
  undefined1 local_206;
  undefined1 local_205;
  undefined1 local_204;
  ForAnyElementType local_200;
  int local_1f8;
  FDelegateAllocation local_1f0;
  uint local_1e0;
  FString local_1d8;
  UDS_GameInstance *local_1c8 [2];
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined1 local_1a8;
  undefined8 local_1a0;
  FTimerUnifiedDelegate local_198;
  FScriptContainerElement local_158 [256];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pFVar12 = (FDS_PlayerRepo *)0x0;
  pFVar6 = TDS_Singleton<FDS_PlayerRepo>::Inst;
  if (TDS_Singleton<FDS_PlayerRepo>::Inst == (FDS_PlayerRepo *)0x0) {
    pFVar6 = ::operator_new(0x28);
    if (pFVar6 != (FDS_PlayerRepo *)0x0) {
      (pFVar6->SearchedPlayerNameList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar6->_padding_ = (longlong)&___7FDS_PlayerRepo__6B_;
      (pFVar6->SearchedPlayerNameList).ArrayNum = 0;
      (pFVar6->SearchedPlayerNameList).ArrayMax = 0;
      (pFVar6->PlayerList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar6->PlayerList).ArrayNum = 0;
      (pFVar6->PlayerList).ArrayMax = 0;
      pFVar12 = pFVar6;
    }
    TDS_Singleton<FDS_PlayerRepo>::Inst = pFVar12;
    pUVar7 = UDS_DataManager::GetInst();
    pFVar6 = TDS_Singleton<FDS_PlayerRepo>::Inst;
    if (pUVar7 == (UDS_DataManager *)0x0) {
      if (TDS_Singleton<FDS_PlayerRepo>::Inst != (FDS_PlayerRepo *)0x0) {
        DestructItems<misc::Player,int>
                  ((Player *)
                   (TDS_Singleton<FDS_PlayerRepo>::Inst->PlayerList).AllocatorInstance.Data,
                   (TDS_Singleton<FDS_PlayerRepo>::Inst->PlayerList).ArrayNum);
        pFVar14 = (pFVar6->PlayerList).AllocatorInstance.Data;
        if (pFVar14 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar14);
        }
        DestructItems<FString,int>
                  ((FString *)(pFVar6->SearchedPlayerNameList).AllocatorInstance.Data,
                   (pFVar6->SearchedPlayerNameList).ArrayNum);
        pFVar14 = (pFVar6->SearchedPlayerNameList).AllocatorInstance.Data;
        if (pFVar14 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar14);
        }
        ::operator_delete(pFVar6,0x28);
      }
      TDS_Singleton<FDS_PlayerRepo>::Inst = (FDS_PlayerRepo *)0x0;
      bVar17 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4219184397653377064>,true,
                          "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_Singleton.h"
                          ,0x28,"false");
      if (bVar17) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar6 = &TDS_Singleton<FDS_PlayerRepo>::Empty;
    }
    else {
      iVar5 = (pUVar7->RepoArray).ArrayNum;
      piVar2 = &(pUVar7->RepoArray).ArrayMax;
      if (iVar5 == *piVar2) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(pUVar7->RepoArray).AllocatorInstance,piVar2);
      }
      (pUVar7->RepoArray).ArrayNum = iVar5 + 1;
      *(FDS_PlayerRepo **)((pUVar7->RepoArray).AllocatorInstance.Data + (longlong)iVar5 * 8) =
           pFVar12;
      pFVar6 = TDS_Singleton<FDS_PlayerRepo>::Inst;
    }
  }
  local_1e0 = (pFVar6->PlayerList).ArrayNum;
  uVar11 = (ulonglong)(int)local_1e0;
  if (local_1e0 == 0) {
    return;
  }
  pFVar14 = (pFVar6->PlayerList).AllocatorInstance.Data;
  pFVar16 = pFVar14 + uVar11 * 0x90;
  do {
    if ((pFVar6->PlayerList).ArrayNum != (int)uVar11) {
      local_208 = 0;
      `TCheckedPointerIterator<misc::Player_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_208);
    }
    if (pFVar14 == pFVar16) {
      return;
    }
    _Str = (uchar *)(*(ulonglong *)(pFVar14 + 0x18) & 0xfffffffffffffffc);
    if (0xf < *(ulonglong *)(_Str + 0x18)) {
      _Str = *(uchar **)_Str;
    }
    local_58.Data = (FScriptContainerElement *)0x0;
    if (_Str == (uchar *)0x0) {
      local_48 = 0;
      local_50 = (FScriptContainerElement *)0x0;
    }
    else {
      sVar8 = strlen((char *)_Str);
      local_48 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,_Str,(int)sVar8);
      uVar1 = local_48 + 1;
      uVar15 = uVar1;
      if (uVar1 < 0x81) {
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          uVar15 = 0;
          goto LAB_14b9be866;
        }
      }
      else {
LAB_14b9be866:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar15,2);
      }
      local_50 = local_158;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        local_50 = local_58.Data;
      }
      UE::Core::Private::Convert((wchar_t *)local_50,uVar1,_Str,(int)sVar8 + 1);
    }
    ::FString::FString(&local_1d8,(wchar_t *)local_50);
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    FVar13.Data = local_1d8.Data.AllocatorInstance.Data;
    iVar5 = (this->JumpTargetPlayerName).Data.ArrayNum;
    if (iVar5 == local_1d8.Data.ArrayNum) {
      if (iVar5 < 2) break;
      iVar5 = wcscmp((wchar_t *)(this->JumpTargetPlayerName).Data.AllocatorInstance.Data,
                     (wchar_t *)local_1d8.Data.AllocatorInstance.Data);
      bVar17 = iVar5 == 0;
    }
    else {
      bVar17 = iVar5 + local_1d8.Data.ArrayNum == 1;
    }
    if (bVar17) break;
    if (FVar13.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar13.Data);
    }
    uVar11 = (ulonglong)local_1e0;
    pFVar14 = pFVar14 + 0x90;
  } while( true );
  lVar3 = *(longlong *)(pFVar14 + 0x50);
  this->JumpTargetPlayerUID = lVar3;
  if (lVar3 < 1) goto LAB_14b9bebed;
  UpdateJumpToPlayer(this);
  uStack_1b0 = 0;
  local_1b8 = UpdateJumpToPlayer;
  uStack_1ac = local_1a0._4_4_;
  local_1a8 = 0;
  local_1a0 = &local_1f0;
  local_1f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1f0.DelegateSize = 0;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,&local_1f0);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_GameInstance____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_1c8[0] = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)local_1c8);
    *(undefined4 *)(puVar9 + 4) = (undefined4)local_1b8;
    *(undefined4 *)((longlong)puVar9 + 0x24) = local_1b8._4_4_;
    *(undefined4 *)(puVar9 + 5) = uStack_1b0;
    *(undefined4 *)((longlong)puVar9 + 0x2c) = uStack_1ac;
  }
  this_00 = (FTimerManager *)this->_padding_;
  local_198.VariantDelegate._0_8_ = (FScriptContainerElement *)0x0;
  local_198.VariantDelegate._8_4_ = 0;
  local_200.Data = (FScriptContainerElement *)0x0;
  local_1f8 = 0;
  local_207 = 0;
  pFVar14 = (FScriptContainerElement *)0x0;
  FVar13.Data = (FScriptContainerElement *)0x0;
  iVar5 = 0;
  if ((local_1f0.DelegateSize != 0) &&
     (pFVar14 = (FScriptContainerElement *)0x0, FVar13.Data = (FScriptContainerElement *)0x0,
     iVar5 = 0, local_1f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)local_1f0.DelegateAllocator + 0x48))();
    pFVar14 = (FScriptContainerElement *)(ulonglong)(uint)local_198.VariantDelegate._8_4_;
    FVar13.Data = local_200.Data;
    iVar5 = local_1f8;
  }
  local_1f8 = 0;
  local_206 = 0;
  local_205 = 0;
  local_200.Data = (FScriptContainerElement *)0x0;
  if ((int)pFVar14 == 0) {
LAB_14b9bea91:
    if ((FScriptContainerElement *)local_198.VariantDelegate._0_8_ != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free((void *)local_198.VariantDelegate._0_8_);
    }
  }
  else if ((FScriptContainerElement *)local_198.VariantDelegate._0_8_ !=
           (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_198.VariantDelegate._0_8_)(local_198.VariantDelegate._0_8_);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_198,0,0,0x10);
    local_198.VariantDelegate._8_4_ = 0;
    goto LAB_14b9bea91;
  }
  local_204 = 0;
  local_198.VariantDelegate._0_8_ = FVar13.Data;
  local_198.VariantDelegate._8_4_ = iVar5;
  if (local_1f8 == 0) {
LAB_14b9beae1:
    if (local_200.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data);
    }
  }
  else if (local_200.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_200.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_200,0,0,0x10);
    local_1f8 = 0;
    goto LAB_14b9beae1;
  }
  local_198.VariantDelegate.TypeIndex = 1;
  FTimerManager::InternalSetTimer
            (this_00,&this->TimerHandle_JumpToPlayer,&local_198,__real_3f800000,true,__real_bf800000
            );
  uVar11 = (ulonglong)local_198.VariantDelegate.TypeIndex;
  if ((3 < local_198.VariantDelegate.TypeIndex) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L""), bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar11] ==
      UE::Core::Private::
      TDestructorCaller<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>_>::
      Destruct) {
    if (local_198.VariantDelegate._8_4_ != 0) {
      if ((FScriptContainerElement *)local_198.VariantDelegate._0_8_ ==
          (FScriptContainerElement *)0x0) goto LAB_14b9beba7;
      (*(code *)**(undefined8 **)local_198.VariantDelegate._0_8_)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_198,0,0,0x10);
      local_198.VariantDelegate._8_4_ = 0;
    }
    if ((FScriptContainerElement *)local_198.VariantDelegate._0_8_ != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free((void *)local_198.VariantDelegate._0_8_);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar11])(&local_198);
  }
LAB_14b9beba7:
  if (local_1f0.DelegateSize != 0) {
    FVar13.Data = local_1d8.Data.AllocatorInstance.Data;
    if (local_1f0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)
    goto LAB_14b9bebed;
    (*(code *)**(undefined8 **)local_1f0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1f0,0,0,0x10);
    local_1f0.DelegateSize = 0;
  }
  FVar13.Data = local_1d8.Data.AllocatorInstance.Data;
  if (local_1f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_1f0.DelegateAllocator);
    FVar13.Data = local_1d8.Data.AllocatorInstance.Data;
  }
LAB_14b9bebed:
  if (FVar13.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar13.Data);
  }
  return;
}

// ResetManagers @ 14b9c3090

void __thiscall UDS_GameInstance::ResetManagers(UDS_GameInstance *this)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  if (this->bInitManagers != false) {
    uVar6 = (this->ManagerArray).ArrayNum - 1;
    if (-1 < (int)uVar6) {
      lVar5 = (longlong)(int)uVar6 * 8;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (this->ManagerArray).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pUVar1 = *(UObject **)((this->ManagerArray).AllocatorInstance.Data + lVar5);
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar1 != (UObject *)0x0) goto LAB_14b9c3151;
        }
        else if (pUVar1 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar1);
LAB_14b9c3151:
          (**(code **)(*(longlong *)pUVar1 + 0x2d0))(pUVar1);
        }
        lVar5 = lVar5 + -8;
        uVar6 = uVar6 - 1;
      } while (-1 < (int)uVar6);
    }
    this->bInitManagers = false;
  }
  return;
}

// SET_WORLDBOSS_TEST_TABLE @ 14b9c35c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_GameInstance::SET_WORLDBOSS_TEST_TABLE(UDS_GameInstance *this,bool param_1)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  uint uVar2;
  wchar_t *pwVar3;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this->bIsWorldBossTestMode = param_1;
  if (param_1) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_GameInstance::SetIsWorldBossTestMode",0x28,Yes);
    pwVar3 = L"World Boss Test Mode has been enabled.";
    uVar2 = 0x4e4;
  }
  else {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_GameInstance::SetIsWorldBossTestMode",0x28,Yes);
    pwVar3 = L"World Boss Test Mode has been disabled.";
    uVar2 = 0x4e8;
  }
  UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,uVar2,pwVar3);
  if ((void *)TStack_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)TStack_138._padding_);
  }
  return;
}

// SetAutoPlayer @ 14b9c40a0

void __cdecl UDS_GameInstance::SetAutoPlayer(bool param_1)

{
  if (StaticInstance != (UDS_GameInstance *)0x0) {
    StaticInstance->AutoPlayer = param_1;
  }
  return;
}

// SetCharacterCollisionBlockDebug @ 14b9c41a0

void __cdecl UDS_GameInstance::SetCharacterCollisionBlockDebug(bool param_1)

{
  if (StaticInstance != (UDS_GameInstance *)0x0) {
    StaticInstance->CharacterCollisionBlockDebug = param_1;
  }
  return;
}

// SetClientAbnormal @ 14b9c41c0

void __cdecl UDS_GameInstance::SetClientAbnormal(bool param_1)

{
  if (StaticInstance != (UDS_GameInstance *)0x0) {
    StaticInstance->UseClientAbnormal = param_1;
  }
  return;
}

// SetDebugEntityID @ 14b9c41e0

void __cdecl UDS_GameInstance::SetDebugEntityID(ulong64 param_1)

{
  if (StaticInstance != (UDS_GameInstance *)0x0) {
    StaticInstance->DebugEntityID = param_1;
  }
  return;
}

// SetDoNotActionMode @ 14b9c4200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_GameInstance::SetDoNotActionMode(bool param_1)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (StaticInstance != (UDS_GameInstance *)0x0) {
    StaticInstance->bIsDoNotActionMode = param_1;
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_GameInstance::SetDoNotActionMode",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Display,local_138.Ptr,0x448,L"DoNotActionMode %s.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// SetFixedSkillLocation @ 14b9c4330

void __cdecl UDS_GameInstance::SetFixedSkillLocation(bool param_1)

{
  if (StaticInstance != (UDS_GameInstance *)0x0) {
    StaticInstance->FixedSkillLocation = param_1;
  }
  return;
}

// SetForceTransportWarpFail @ 14b9c4350

void __cdecl UDS_GameInstance::SetForceTransportWarpFail(bool param_1)

{
  if (StaticInstance != (UDS_GameInstance *)0x0) {
    StaticInstance->ForceTransportWarpFail = param_1;
  }
  return;
}

// SetIsWorldBossTestMode @ 14b9c46d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_GameInstance::SetIsWorldBossTestMode(UDS_GameInstance *this,bool param_1)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  uint uVar2;
  wchar_t *pwVar3;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this->bIsWorldBossTestMode = param_1;
  if (param_1) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_GameInstance::SetIsWorldBossTestMode",0x28,Yes);
    pwVar3 = L"World Boss Test Mode has been enabled.";
    uVar2 = 0x4e4;
  }
  else {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_GameInstance::SetIsWorldBossTestMode",0x28,Yes);
    pwVar3 = L"World Boss Test Mode has been disabled.";
    uVar2 = 0x4e8;
  }
  UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,uVar2,pwVar3);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// SetNameTagDebug @ 14b9c4950

void __cdecl UDS_GameInstance::SetNameTagDebug(bool param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  UDS_GameInstance *pUVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  FDestructionSentinel local_38;
  
  pUVar6 = StaticInstance;
  if (StaticInstance != (UDS_GameInstance *)0x0) {
    StaticInstance->ShowNameTagDebug = param_1;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pUVar6->Delegate_ShowNameTagDebugChanged,(FWriteAccessScope *)&local_38);
    puVar1 = &(pUVar6->Delegate_ShowNameTagDebugChanged).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar5 = false;
    uVar10 = *(int *)&(pUVar6->Delegate_ShowNameTagDebugChanged).field_0x10 - 1;
    if (-1 < (int)uVar10) {
      lVar11 = (longlong)(int)uVar10 << 4;
      bVar5 = false;
      do {
        uVar9 = 0;
        if ((int)uVar10 < *(int *)&(pUVar6->Delegate_ShowNameTagDebugChanged).field_0x10) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar2 = *(longlong *)&(pUVar6->Delegate_ShowNameTagDebugChanged).field_0x8;
        if (((*(int *)(lVar11 + 8 + lVar2) == 0) ||
            (plVar3 = *(longlong **)(lVar11 + lVar2), plVar3 == (longlong *)0x0)) ||
           (cVar8 = (**(code **)(*plVar3 + 0x68))(), cVar8 == '\0')) {
          bVar5 = true;
        }
        lVar11 = lVar11 + -0x10;
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
    }
    puVar1 = &(pUVar6->Delegate_ShowNameTagDebugChanged).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pUVar6->Delegate_ShowNameTagDebugChanged,false);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  return;
}

// SetPlayerCollisionBlock @ 14b9c4bc0

void __cdecl UDS_GameInstance::SetPlayerCollisionBlock(bool param_1)

{
  if (StaticInstance != (UDS_GameInstance *)0x0) {
    StaticInstance->PlayerCollisionBlock = param_1;
  }
  return;
}

// SetPrintCollisionType @ 14b9c4c30

void __cdecl UDS_GameInstance::SetPrintCollisionType(int param_1)

{
  if (StaticInstance != (UDS_GameInstance *)0x0) {
    StaticInstance->PrintCollisionType = param_1;
  }
  return;
}

// SetPrintEntityVisble @ 14b9c4c50

void __cdecl UDS_GameInstance::SetPrintEntityVisble(bool param_1)

{
  if (StaticInstance != (UDS_GameInstance *)0x0) {
    StaticInstance->PrintEntityVisble = param_1;
  }
  return;
}

// SetShowGameTime @ 14b9c5460

void __cdecl UDS_GameInstance::SetShowGameTime(bool param_1)

{
  UDS_GameInstance *pUVar1;
  
  pUVar1 = StaticInstance;
  if (StaticInstance != (UDS_GameInstance *)0x0) {
    FDS_DataPropertyDelegate_bool_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &StaticInstance->OnShowGameTimeChanged,param_1);
    pUVar1->ShowGameTime = param_1;
  }
  return;
}

// SetShowSyncDebug @ 14b9c54b0

void __cdecl UDS_GameInstance::SetShowSyncDebug(bool param_1)

{
  if (StaticInstance != (UDS_GameInstance *)0x0) {
    StaticInstance->ShowSyncDebug = param_1;
  }
  return;
}

// SetTestSkillMove @ 14b9c5630

void __cdecl UDS_GameInstance::SetTestSkillMove(bool param_1)

{
  if (StaticInstance != (UDS_GameInstance *)0x0) {
    StaticInstance->TestSkillMove = param_1;
  }
  return;
}

// SetUseSkillCoolTime @ 14b9c5650

void __cdecl UDS_GameInstance::SetUseSkillCoolTime(bool param_1)

{
  if (StaticInstance != (UDS_GameInstance *)0x0) {
    StaticInstance->UseSkillCoolTime = param_1;
  }
  return;
}

// ShowDungeonDebugWidget @ 14b9c5780

void __thiscall UDS_GameInstance::ShowDungeonDebugWidget(UDS_GameInstance *this,int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  UDS_DungeonPlayBuild_DebugScreen *pUVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    pUVar1 = UDS_DungeonPlayBuild_DebugScreen::GetInst();
    if (pUVar1 == (UDS_DungeonPlayBuild_DebugScreen *)0x0) {
      return;
    }
    uVar2 = 1;
  }
  else {
    pUVar1 = UDS_DungeonPlayBuild_DebugScreen::GetInst();
    if (pUVar1 == (UDS_DungeonPlayBuild_DebugScreen *)0x0) {
      return;
    }
    uVar2 = 4;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(pUVar1->_padding_ + 0x2c0);
                    /* WARNING: Could not recover jumptable at 0x00014b9c57b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pUVar1,uVar2,UNRECOVERED_JUMPTABLE);
  return;
}

// Shutdown @ 14b9c5880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_GameInstance::Shutdown(UDS_GameInstance *this)

{
  FDS_HttpServer *this_00;
  TWeakPtr<FTSTicker::FElement,1> local_18;
  
  FTSTicker::GetCoreTicker();
  local_18.Object = (this->TickDelegateHandle).Object;
  local_18.WeakReferenceCount.ReferenceController =
       (this->TickDelegateHandle).WeakReferenceCount.ReferenceController;
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker(&local_18);
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &FWorldDelegates::OnWorldBeginTearDown,this);
  ClearManagers(this);
  this_00 = TDS_Singleton<FDS_HttpServer>::GetInst();
  FDS_HttpServer::DeInit(this_00);
  StaticInstance = (UDS_GameInstance *)0x0;
  this->bIsShutdown = true;
  FDS_TimerManager::Shutdown();
  UGameInstance::Shutdown((UGameInstance *)this);
  return;
}

// StopJumpToPlayer @ 14b9c69f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_GameInstance::StopJumpToPlayer(UDS_GameInstance *this)

{
  FString *pFVar1;
  FTimerHandle *pFVar2;
  FScriptContainerElement *pFVar3;
  FTimerManager *this_00;
  FTimerData *pFVar4;
  undefined8 local_18 [2];
  
  pFVar1 = &this->JumpTargetPlayerName;
  if (pFVar1 != (FString *)local_18) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->JumpTargetPlayerName).Data.ArrayNum = 0;
    (this->JumpTargetPlayerName).Data.ArrayMax = 0;
  }
  pFVar2 = &this->TimerHandle_JumpToPlayer;
  this->JumpTargetPlayerUID = 0;
  if (pFVar2->Handle != 0) {
    this_00 = (FTimerManager *)this->_padding_;
    pFVar4 = FTimerManager::FindTimer(this_00,pFVar2);
    if (pFVar4 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_00,(FTimerHandle)pFVar2->Handle);
    }
    pFVar2->Handle = 0;
  }
  return;
}

// Tick @ 14b9c7b00

bool __thiscall UDS_GameInstance::Tick(UDS_GameInstance *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  float local_res8 [2];
  undefined1 local_res10 [8];
  
  FDS_GameInstTickDelegate_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnGameInstTick,param_1);
  if (this->bInitManagers != false) {
    iVar2 = (this->ManagerArray).ArrayNum;
    pFVar4 = (this->ManagerArray).AllocatorInstance.Data;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    local_res8[0] = param_1;
    while( true ) {
      if ((this->ManagerArray).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UDS_ManagerBase>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar4 == pFVar1) break;
      pUVar3 = *(UObject **)pFVar4;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar3 != (UObject *)0x0) goto LAB_14b9c7b97;
      }
      else if (pUVar3 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar3);
LAB_14b9c7b97:
        (**(code **)(*(longlong *)pUVar3 + 0x2d8))(pUVar3,local_res8);
      }
      pFVar4 = pFVar4 + 8;
    }
  }
  return true;
}

// ToggleShowSyncDebug @ 14b9c7bf0

void __cdecl UDS_GameInstance::ToggleShowSyncDebug(void)

{
  if (StaticInstance != (UDS_GameInstance *)0x0) {
    StaticInstance->ShowSyncDebug = StaticInstance->ShowSyncDebug == false;
  }
  return;
}

// UpdateJumpToPlayer @ 14b9c8ff0

void __thiscall UDS_GameInstance::UpdateJumpToPlayer(UDS_GameInstance *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10 [3];
  FString local_18;
  
  if (((this->JumpTargetPlayerName).Data.ArrayNum < 2) || (this->JumpTargetPlayerUID < 1)) {
    StopJumpToPlayer(this);
  }
  else {
    UDS_LoadingData::GetInst();
    bVar1 = TWeakObjectPtr<UDS_LoadingData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_LoadingData,FWeakObjectPtr> *)&local_res8,(void *)0x0);
    if ((!bVar1) && (pUVar2 = FWeakObjectPtr::Get(&local_res8), *(int *)(pUVar2 + 1) == 0)) {
      UDS_PlayerData::GetDataByPlayerUID((long64)local_res10);
      bVar1 = FWeakObjectPtr::IsValid(local_res10);
      if (!bVar1) {
        ::FString::PrintfImpl(&local_18,L"jumptoplayer %s");
        FDS_ChatService::SendChatMessage(None,&local_18);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
          return;
        }
      }
    }
  }
  return;
}

// UpdateManagers @ 14b9c90c0

void __thiscall UDS_GameInstance::UpdateManagers(UDS_GameInstance *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  float local_res10 [2];
  
  if (this->bInitManagers != false) {
    iVar2 = (this->ManagerArray).ArrayNum;
    pFVar4 = (this->ManagerArray).AllocatorInstance.Data;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    local_res10[0] = param_1;
    while( true ) {
      if ((this->ManagerArray).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UDS_ManagerBase>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar4 == pFVar1) break;
      pUVar3 = *(UObject **)pFVar4;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar3 != (UObject *)0x0) goto LAB_14b9c9138;
      }
      else if (pUVar3 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar3);
LAB_14b9c9138:
        (**(code **)(*(longlong *)pUVar3 + 0x2d8))(pUVar3,local_res10);
      }
      pFVar4 = pFVar4 + 8;
    }
  }
  return;
}

