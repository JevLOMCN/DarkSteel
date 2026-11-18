// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 52

// StaticClass @ 14b4393d0

UClass * __cdecl UDS_CCSAIManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CCSAIManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CCSAIManager",
               &Z_Registration_Info_UClass_UDS_CCSAIManager.InnerSingleton,
               StaticRegisterNativesUDS_CCSAIManager,0x1d0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CCSAIManager>,
               InternalVTableHelperCtorCaller<UDS_CCSAIManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CCSAIManager.InnerSingleton;
}

// UDS_CCSAIManager @ 14b43ba00

UDS_CCSAIManager * __thiscall
UDS_CCSAIManager::UDS_CCSAIManager(UDS_CCSAIManager *this,FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  undefined8 local_res8;
  
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_CCSAIManager__6B_;
  (this->CCSAI_LoginWidget).field0_0x0.DebugPtr = (UDS_CCSAI_LoginWidget *)0x0;
  (this->AIService).field0_0x0.DebugPtr = (ACCSAIService *)0x0;
  ::FString::FString(&this->AIServerAddr,"");
  ::FString::FString(&this->GameServerAddr,"");
  (this->AIServerLoginInfo).SelectedCharID = 0;
  (this->AIServerLoginInfo).DeckCharID.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AIServerLoginInfo).DeckCharID.ArrayNum = 0;
  (this->AIServerLoginInfo).DeckCharID.ArrayMax = 0;
  (this->AIServerLoginInfo).bIsLeader = false;
  (this->AIServerLoginInfo).GameID = -1;
  (this->AIServerLoginInfo).bIsRequestRaidPartyDungeonStart = false;
  (this->AIServerLoginInfo).bIsDungeonIn = false;
  (this->AIServerLoginInfo).DungeonInTime.Ticks = 0;
  (this->AICmdProcessInfo).bIsActivated = false;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->AICmdProcessInfo).CameraYaw = 0.0;
  local_res8 = 0;
  (this->AICmdProcessInfo).MoveInputVector.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  *(undefined8 *)&(this->AICmdProcessInfo).VirtualKeyMap = 0;
  *(undefined8 *)&(this->AICmdProcessInfo).VirtualKeyMap.field_0x8 = 0;
  *(undefined8 *)&(this->AICmdProcessInfo).VirtualKeyMap.field_0x20 = 0;
  *(undefined4 *)&(this->AICmdProcessInfo).VirtualKeyMap.field_0x28 = 0;
  *(undefined4 *)&(this->AICmdProcessInfo).VirtualKeyMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->AICmdProcessInfo).VirtualKeyMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AICmdProcessInfo).VirtualKeyMap.field_0x34 = 0;
  *(undefined8 *)&(this->AICmdProcessInfo).VirtualKeyMap.field_0x40 = 0;
  *(undefined4 *)&(this->AICmdProcessInfo).VirtualKeyMap.field_0x48 = 0;
  (this->RegisterCharEntityToAIServerTimer).Handle = 0;
  (this->RequestEnterDungeonTimer).Handle = 0;
  this->bIsAIPlayMode = false;
  (this->AutoUseSkillList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AutoUseSkillList).ArrayNum = 0;
  (this->AutoUseSkillList).ArrayMax = 0;
  (this->AbleSkillList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AbleSkillList).ArrayNum = 0;
  (this->AbleSkillList).ArrayMax = 0;
  (this->AbleVirtualKeyList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AbleVirtualKeyList).ArrayNum = 0;
  (this->AbleVirtualKeyList).ArrayMax = 0;
  this->AbleNormalAttackSkillID = 0;
  this->CharacterBaseTable = (FDS_CharacterBaseTableRow *)0x0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->CharStateData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->AirWalkAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->AirWalkAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->NormalAttackControlAbility).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->NormalAttackControlAbility).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->SkillDataSet).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->SkillDataSet).WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->SkillDataMap = 0;
  *(undefined8 *)&(this->SkillDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->SkillDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->SkillDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->SkillDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SkillDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SkillDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->SkillDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->SkillDataMap).field_0x48 = 0;
  return this;
}

// UDS_CCSAIManager @ 14b43bbe0

UDS_CCSAIManager * __thiscall
UDS_CCSAIManager::UDS_CCSAIManager(UDS_CCSAIManager *this,FObjectInitializer *param_1)

{
  TVector2<double> TVar1;
  undefined8 local_res8;
  
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_CCSAIManager__6B_;
  (this->CCSAI_LoginWidget).field0_0x0.DebugPtr = (UDS_CCSAI_LoginWidget *)0x0;
  (this->AIService).field0_0x0.DebugPtr = (ACCSAIService *)0x0;
  ::FString::FString(&this->AIServerAddr,"");
  ::FString::FString(&this->GameServerAddr,"");
  (this->AIServerLoginInfo).SelectedCharID = 0;
  (this->AIServerLoginInfo).DeckCharID.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AIServerLoginInfo).DeckCharID.ArrayNum = 0;
  (this->AIServerLoginInfo).DeckCharID.ArrayMax = 0;
  (this->AIServerLoginInfo).bIsLeader = false;
  (this->AIServerLoginInfo).GameID = -1;
  (this->AIServerLoginInfo).bIsRequestRaidPartyDungeonStart = false;
  (this->AIServerLoginInfo).bIsDungeonIn = false;
  (this->AIServerLoginInfo).DungeonInTime.Ticks = 0;
  (this->AICmdProcessInfo).bIsActivated = false;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->AICmdProcessInfo).CameraYaw = 0.0;
  local_res8 = 0;
  (this->AICmdProcessInfo).MoveInputVector.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  *(undefined8 *)&(this->AICmdProcessInfo).VirtualKeyMap = 0;
  *(undefined8 *)&(this->AICmdProcessInfo).VirtualKeyMap.field_0x8 = 0;
  *(undefined8 *)&(this->AICmdProcessInfo).VirtualKeyMap.field_0x20 = 0;
  *(undefined4 *)&(this->AICmdProcessInfo).VirtualKeyMap.field_0x28 = 0;
  *(undefined4 *)&(this->AICmdProcessInfo).VirtualKeyMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->AICmdProcessInfo).VirtualKeyMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AICmdProcessInfo).VirtualKeyMap.field_0x34 = 0;
  *(undefined8 *)&(this->AICmdProcessInfo).VirtualKeyMap.field_0x40 = 0;
  *(undefined4 *)&(this->AICmdProcessInfo).VirtualKeyMap.field_0x48 = 0;
  (this->RegisterCharEntityToAIServerTimer).Handle = 0;
  (this->RequestEnterDungeonTimer).Handle = 0;
  this->bIsAIPlayMode = false;
  (this->AutoUseSkillList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AutoUseSkillList).ArrayNum = 0;
  (this->AutoUseSkillList).ArrayMax = 0;
  (this->AbleSkillList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AbleSkillList).ArrayNum = 0;
  (this->AbleSkillList).ArrayMax = 0;
  (this->AbleVirtualKeyList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AbleVirtualKeyList).ArrayNum = 0;
  (this->AbleVirtualKeyList).ArrayMax = 0;
  this->AbleNormalAttackSkillID = 0;
  this->CharacterBaseTable = (FDS_CharacterBaseTableRow *)0x0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->CharStateData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->AirWalkAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->AirWalkAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->NormalAttackControlAbility).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->NormalAttackControlAbility).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->SkillDataSet).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->SkillDataSet).WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->SkillDataMap = 0;
  *(undefined8 *)&(this->SkillDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->SkillDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->SkillDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->SkillDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SkillDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SkillDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->SkillDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->SkillDataMap).field_0x48 = 0;
  return this;
}

// ~UDS_CCSAIManager @ 14b43cb90

void __thiscall UDS_CCSAIManager::~UDS_CCSAIManager(UDS_CCSAIManager *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDS_CCSAIManager__6B_;
  *(undefined4 *)&(this->SkillDataMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SkillDataMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SkillDataMap);
  pFVar2 = (this->AbleVirtualKeyList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->AbleSkillList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->AutoUseSkillList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->AICmdProcessInfo).VirtualKeyMap.field_0x48 = 0;
  pvVar1 = *(void **)&(this->AICmdProcessInfo).VirtualKeyMap.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_ECCS_AIInputType,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_ECCS_AIInputType,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AICmdProcessInfo).VirtualKeyMap);
  pFVar2 = (this->AIServerLoginInfo).DeckCharID.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->GameServerAddr).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->AIServerAddr).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b43dcc0

UClass * __cdecl UDS_CCSAIManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CCSAIManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CCSAIManager",
               &Z_Registration_Info_UClass_UDS_CCSAIManager.InnerSingleton,
               StaticRegisterNativesUDS_CCSAIManager,0x1d0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CCSAIManager>,
               InternalVTableHelperCtorCaller<UDS_CCSAIManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CCSAIManager.InnerSingleton;
}

// StaticRegisterNativesUDS_CCSAIManager @ 14b43e7d0

void __cdecl UDS_CCSAIManager::StaticRegisterNativesUDS_CCSAIManager(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UDS_CCSAIManager_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// __VTableCtorCaller @ 14b43f470

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_CCSAIManager::__VTableCtorCaller(FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UDS_ManagerBase *this;
  undefined8 local_res10;
  
  local_res10 = 0;
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = GetPrivateStaticClass();
  this = (UDS_ManagerBase *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_ManagerBase *)0x0) {
    UDS_ManagerBase::UDS_ManagerBase(this,param_1);
    this->_padding_ = (longlong)&___7UDS_CCSAIManager__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    ::FString::FString((FString *)&this[1]._padding_,"");
    ::FString::FString((FString *)&this[1]._padding_,"");
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
    this[2]._padding_ = -1;
    *(undefined2 *)&this[2].bIsBeingDestroyed = 0;
    this[3]._padding_ = 0;
    *(undefined1 *)&this[3]._padding_ = 0;
    TVar1 = UE::Math::TVector2<double>::ZeroVector;
    *(undefined4 *)&this[3]._padding_ = 0;
    local_res10 = 0;
    *(TVector2<double>_u_0 *)&this[3]._padding_ = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
    *(undefined8 *)&this[3].bIsBeingDestroyed = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    *(undefined4 *)&this[4]._padding_ = 0;
    *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[4].bIsBeingDestroyed = 0xffffffff;
    *(undefined4 *)&this[4].field_0x2c = 0;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5].bIsBeingDestroyed = false;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    *(undefined8 *)&this[6].bIsBeingDestroyed = 0;
    *(undefined4 *)&this[7]._padding_ = 0;
    this[7]._padding_ = 0;
    this[7]._padding_ = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&this[7]._padding_,(FObjectPtr)&local_res10);
    local_res10 = 0;
    this[7]._padding_ = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&this[7]._padding_,(FObjectPtr)&local_res10);
    local_res10 = 0;
    this[7]._padding_ = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&this[7]._padding_,(FObjectPtr)&local_res10);
    local_res10 = 0;
    *(undefined8 *)&this[7].bIsBeingDestroyed = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&this[7].bIsBeingDestroyed,(FObjectPtr)&local_res10)
    ;
    this[8]._padding_ = 0;
    this[8]._padding_ = 0;
    this[8]._padding_ = 0;
    *(undefined4 *)&this[8].bIsBeingDestroyed = 0;
    *(undefined4 *)&this[8].field_0x2c = 0x80;
    *(undefined4 *)&this[9]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0;
    this[9]._padding_ = 0;
    *(undefined4 *)&this[9]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// execOnGameServerConnected @ 14b440580

void __cdecl
UDS_CCSAIManager::execOnGameServerConnected(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnGameServerConnected((UDS_CCSAIManager *)param_1,local_res10[0] != 0);
  return;
}

// execOnRecv_AICommand @ 14b440610

void __cdecl UDS_CCSAIManager::execOnRecv_AICommand(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector2<double>_u_0 *pTVar2;
  TVector2<double>_u_0 local_38;
  undefined4 local_28;
  void *local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = (void *)0x0;
  local_38 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pTVar2 = &local_38;
  if ((TVector2<double>_u_0 *)param_2->MostRecentPropertyAddress != (TVector2<double>_u_0 *)0x0) {
    pTVar2 = (TVector2<double>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnRecv_AICommand((UDS_CCSAIManager *)param_1,(FCCS_AICmd *)&pTVar2->_s_0);
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  return;
}

// execOnRecv_CharEntityRegistrationResponse @ 14b4406d0

void __cdecl
UDS_CCSAIManager::execOnRecv_CharEntityRegistrationResponse
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FCCS_CharEntityRegistrationResponse *pFVar2;
  FCCS_CharEntityRegistrationResponse local_38;
  
  local_38.messageType = CharEntityRegistrationResponse;
  local_38.gameId = 0;
  local_38.bSuccess = false;
  local_38.errorCode = 0;
  local_38.errorMessage.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.errorMessage.Data.ArrayNum = 0;
  local_38.errorMessage.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar2 = &local_38;
  if ((FCCS_CharEntityRegistrationResponse *)param_2->MostRecentPropertyAddress !=
      (FCCS_CharEntityRegistrationResponse *)0x0) {
    pFVar2 = (FCCS_CharEntityRegistrationResponse *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnRecv_CharEntityRegistrationResponse((UDS_CCSAIManager *)param_1,pFVar2);
  if (local_38.errorMessage.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.errorMessage.Data.AllocatorInstance.Data);
  }
  return;
}

// execOnRecv_LoginRequest @ 14b440790

void __cdecl
UDS_CCSAIManager::execOnRecv_LoginRequest(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FCCS_LoginRequest *pFVar2;
  FCCS_LoginRequest local_28;
  
  local_28.messageType = LoginRequest;
  local_28.selectedCharId = 0;
  local_28.deckCharId.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.deckCharId.ArrayNum = 0;
  local_28.deckCharId.ArrayMax = 0;
  local_28.isLeader = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar2 = &local_28;
  if ((FCCS_LoginRequest *)param_2->MostRecentPropertyAddress != (FCCS_LoginRequest *)0x0) {
    pFVar2 = (FCCS_LoginRequest *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnRecv_LoginRequest((UDS_CCSAIManager *)param_1,pFVar2);
  if (local_28.deckCharId.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.deckCharId.AllocatorInstance.Data);
  }
  return;
}

// execOnRecv_LogoutRequest @ 14b440850

void __cdecl
UDS_CCSAIManager::execOnRecv_LogoutRequest(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FCCS_LogoutRequest *pFVar2;
  FCCS_LogoutRequest local_res10 [8];
  
  local_res10[0].messageType = LogoutRequest;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pFVar2 = local_res10;
  if ((FCCS_LogoutRequest *)param_2->MostRecentPropertyAddress != (FCCS_LogoutRequest *)0x0) {
    pFVar2 = (FCCS_LogoutRequest *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnRecv_LogoutRequest((UDS_CCSAIManager *)param_1,pFVar2);
  return;
}

// execRegisterCharEntityToAIServer @ 14b440a40

void __cdecl
UDS_CCSAIManager::execRegisterCharEntityToAIServer(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RegisterCharEntityToAIServer((UDS_CCSAIManager *)param_1);
  return;
}

// execRequestEnterDungeon @ 14b440af0

void __cdecl
UDS_CCSAIManager::execRequestEnterDungeon(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RequestEnterDungeon((UDS_CCSAIManager *)param_1);
  return;
}

// CheckRaidPartyMemberState @ 14ba96ba0

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

void __thiscall UDS_CCSAIManager::CheckRaidPartyMemberState(UDS_CCSAIManager *this)

{
  EDS_DungeonType EVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FDS_RaidPartyRepo *this_00;
  UDS_LogManager *pUVar10;
  UObject *pUVar11;
  FDS_DungeonBaseTableRow *pFVar12;
  ForAnyElementType _Str;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStackY_448 [32];
  FWeakObjectPtr local_400;
  FString local_3f8;
  longlong local_3e8;
  FString local_3e0;
  FString local_3d0;
  FString local_3c0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_448;
  if ((this->AIServerLoginInfo).GameID < 0) {
    return;
  }
  if ((this->AIServerLoginInfo).bIsLeader == false) {
    return;
  }
  if ((this->AIServerLoginInfo).bIsRequestRaidPartyDungeonStart == true) {
    return;
  }
  this_00 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar7 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(this_00);
  if (!bVar7) {
    return;
  }
  UDS_PlayerData::GetMainPlayerData();
  bVar7 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_400,(void *)0x0);
  if (bVar7) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 != (UDS_LogManager *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      local_3a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_3a8,"UDS_CCSAIManager::CheckRaidPartyMemberState",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar10,1,Warning,local_3a8.Ptr,0x31a,L"[CCSAI] playerData is nullptr.");
      if ((void *)local_3a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3a8._padding_);
      }
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1484106909542776037>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CCSAIManager.cpp"
                       ,0x31b,"false");
    if (!bVar7) {
      return;
    }
code_r0x00014ba96f38:
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar11 = FWeakObjectPtr::Get(&local_400);
  fVar6 = __real_447a0000;
  uVar13 = 0;
  lVar3 = *(longlong *)&pUVar11[6].field_0x8;
  iVar9 = (this_00->RaidPartyInfo).Members.ArrayNum;
  if (0 < iVar9) {
    lVar15 = 0;
    lVar14 = 0;
    local_3e8 = (longlong)iVar9;
    do {
      uVar8 = 0;
      if ((int)uVar13 < (this_00->RaidPartyInfo).Members.ArrayNum) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this_00->RaidPartyInfo).Members.AllocatorInstance.Data;
      if (GEngine != (UEngine *)0x0) {
        ::FString::PrintfImpl(&local_3d0,L"[%s %d] %s");
        UEngine::AddOnScreenDebugMessage
                  (GEngine,uVar13 + 3000,fVar6,FColor::Cyan,&local_3d0,true,
                   &UE::Math::TVector2<double>::UnitVector);
        if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
        }
      }
      if ((*(longlong *)(pFVar4 + lVar14 + 8) != lVar3) &&
         (pFVar4[lVar14 + 0x2c] != (FScriptContainerElement)0x2)) {
        return;
      }
      uVar13 = uVar13 + 1;
      lVar15 = lVar15 + 1;
      lVar14 = lVar14 + 0x160;
    } while (lVar15 < local_3e8);
  }
  iVar9 = DS_CommonDataHelper::AiGymDungeonId();
  pFVar12 = FDS_DungeonBaseTableRow::Get((longlong)iVar9,true);
  if (pFVar12 == (FDS_DungeonBaseTableRow *)0x0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 != (UDS_LogManager *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      local_288._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_288,"UDS_CCSAIManager::CheckRaidPartyMemberState",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar10,1,Warning,local_288.Ptr,0x341,L"[CCSAI] dungeonBaseTable is nullptr. (%d)")
      ;
      if ((void *)local_288._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_288._padding_);
      }
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1484106909542775998>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CCSAIManager.cpp"
                       ,0x342,"false");
    if (!bVar7) {
      return;
    }
    goto code_r0x00014ba96f38;
  }
  ::FString::FString(&local_3f8,"");
  UKismetSystemLibrary::GetCommandLine(&local_3e0);
  ::FString::FString(&local_3c0,"MemberNeedCount=");
  bVar7 = UKismetSystemLibrary::ParseParamValue(&local_3e0,&local_3c0,&local_3f8);
  if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
  }
  if (bVar7) {
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_3f8.Data.ArrayNum != 0) {
      _Str.Data = local_3f8.Data.AllocatorInstance.Data;
    }
    iVar9 = _wtoi((wchar_t *)_Str.Data);
    if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
    }
    if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
    }
    if (iVar9 != 0) goto LAB_14ba9700b;
  }
  else {
    if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
    }
    if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
    }
  }
  EVar1 = pFVar12->DungeonType;
  if (((EVar1 == Normal) || (EVar1 == Heroic)) || (iVar9 = 0xc, EVar1 != Raid)) {
    iVar9 = 4;
  }
LAB_14ba9700b:
  iVar2 = (this_00->RaidPartyInfo).Members.ArrayNum;
  if (iVar2 < iVar9) {
    iVar9 = s_memberCount;
    if ((s_memberCount != iVar2) &&
       (pUVar10 = UDS_LogManager::GetInst(), iVar9 = iVar2, pUVar10 != (UDS_LogManager *)0x0)) {
      pUVar10 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_CCSAIManager::CheckRaidPartyMemberState",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar10,1,Display,local_168.Ptr,0x364,
                 L"[CCSAI] Not enough party members to enter the dungeon. (Cur:%d, Need:%d)");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
  }
  else {
    (this->AIServerLoginInfo).bIsRequestRaidPartyDungeonStart = true;
    FDS_RaidPartyService::RequestRaidPartyDungeonStart();
    iVar9 = s_memberCount;
  }
  s_memberCount = iVar9;
  return;
}

// ClearLogFile @ 14ba981e0

void __thiscall UDS_CCSAIManager::ClearLogFile(UDS_CCSAIManager *this)

{
  FString *pFVar1;
  IFileManager *pIVar2;
  ForAnyElementType FVar3;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  pFVar1 = FPaths::ProjectSavedDir();
  ::operator/(&local_28,pFVar1,L"Logs/AI/AILog.txt");
  pIVar2 = IFileManager::Get();
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.DataPtr = L"";
  FFileHelper::SaveStringToFile(&local_18,(wchar_t *)FVar3.Data,ForceUTF8,pIVar2,0);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// ClearRegisterCharEntityToAIServerTimer @ 14ba986d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_CCSAIManager::ClearRegisterCharEntityToAIServerTimer(UDS_CCSAIManager *this)

{
  FTimerHandle *pFVar1;
  FTimerManager *this_00;
  FTimerData *pFVar2;
  
  pFVar1 = &this->RegisterCharEntityToAIServerTimer;
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

// ClearRequestEnterDungeonTimer @ 14ba98730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_CCSAIManager::ClearRequestEnterDungeonTimer(UDS_CCSAIManager *this)

{
  FTimerHandle *pFVar1;
  FTimerManager *this_00;
  FTimerData *pFVar2;
  
  pFVar1 = &this->RequestEnterDungeonTimer;
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

// ConnectToAIServer @ 14ba98bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_CCSAIManager::ConnectToAIServer(UDS_CCSAIManager *this)

{
  FScriptContainerElement *pFVar1;
  ACCSAIService *pAVar2;
  code *pcVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  char *pcVar6;
  UDS_CCSAIManager *pUVar7;
  UObject *pUVar8;
  UFunction *pUVar9;
  char *pcVar10;
  FString *pFVar11;
  FWeakObjectPtr *pFVar12;
  char *pcVar13;
  UDS_CCSAIManager *pUVar14;
  FWeakObjectPtr *pFVar15;
  undefined1 auStackY_8a8 [32];
  <lambda_1> local_865;
  undefined1 local_864;
  undefined1 local_863;
  undefined1 local_862;
  <lambda_1> local_861;
  undefined1 local_860;
  undefined1 local_85f;
  undefined1 local_85e;
  FString local_858;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_848;
  FWeakObjectPtr local_840;
  FName local_838;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_830;
  FWeakObjectPtr local_828;
  FName local_820;
  TScriptDelegate<FNotThreadSafeDelegateMode> local_818;
  TScriptDelegate<FNotThreadSafeDelegateMode> local_800;
  FString local_7e8;
  FName local_7d8;
  FName local_7d0;
  FName local_7c8;
  FName local_7c0;
  FName local_7b8;
  UDS_CCSAIManager *local_7b0;
  FName *local_7a8;
  FName local_7a0;
  UDS_CCSAIManager *local_798;
  FName *local_790;
  FName local_788;
  UDS_CCSAIManager *local_780;
  FName *local_778;
  FName local_770;
  FName local_768;
  FName *local_760;
  UDS_CCSAIManager *local_758;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_750;
  FString local_740;
  FString local_730;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_720;
  FDestructionSentinel local_710;
  FDestructionSentinel local_6f8;
  char local_6e0 [8];
  char local_6d8 [8];
  char local_6d0 [8];
  FReadAccessScope local_6c8;
  FReadAccessScope local_6b0;
  FReadAccessScope local_698;
  FReadAccessScope local_680;
  FReadAccessScope local_668;
  FReadAccessScope local_650;
  FReadAccessScope local_638;
  FReadAccessScope local_620;
  FReadAccessScope local_608;
  FReadAccessScope local_5f0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_8a8;
  if ((this->AIService).field0_0x0.DebugPtr == (ACCSAIService *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_5d8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_5d8,"UDS_CCSAIManager::ConnectToAIServer",0x23,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_5d8.Ptr,0x1c8,L"[CCSAI] AIService is nullptr.");
      if ((void *)local_5d8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_5d8._padding_);
      }
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1484106909542776375>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CCSAIManager.cpp"
                       ,0x1c9,"false");
    if (!bVar4) {
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar11 = &this->AIServerAddr;
  if (1 < (this->AIServerAddr).Data.ArrayNum) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_4b8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_4b8,"UDS_CCSAIManager::ConnectToAIServer",0x23,Yes);
    UDS_LogManager::PrintLog
              (pUVar5,1,Warning,local_4b8.Ptr,0x1d0,
               L"[CCSAI] You are already connected to AIServer.");
    if ((void *)local_4b8._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_4b8._padding_);
    return;
  }
  ::FString::FString(&local_858,"");
  UKismetSystemLibrary::GetCommandLine(&local_730);
  ::FString::FString(&local_740,"AIServer=");
  bVar4 = UKismetSystemLibrary::ParseParamValue(&local_730,&local_740,&local_858);
  if (local_740.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_740.Data.AllocatorInstance.Data);
  }
  if (!bVar4) {
    ::FString::operator=(&local_858,L"212.129.230.156:34000");
  }
  if (local_730.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_730.Data.AllocatorInstance.Data);
  }
  pUVar14 = (UDS_CCSAIManager *)0x0;
  if (pFVar11 != &local_858) {
    pFVar1 = (pFVar11->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar11->Data).AllocatorInstance.Data = local_858.Data.AllocatorInstance.Data;
    (this->AIServerAddr).Data.ArrayNum = local_858.Data.ArrayNum;
    (this->AIServerAddr).Data.ArrayMax = local_858.Data.ArrayMax;
    local_858.Data.ArrayNum = 0;
    local_858.Data.ArrayMax = 0;
    local_858.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_858.Data.AllocatorInstance.Data);
  }
  pUVar5 = UDS_LogManager::GetInst();
  if (pUVar5 != (UDS_LogManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    local_398._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_398,"UDS_CCSAIManager::ConnectToAIServer",0x23,Yes);
    UDS_LogManager::PrintLog
              (pUVar5,1,Display,local_398.Ptr,0x1d5,L"[CCSAI] Request ConnectToAIServer. (%s)");
    if ((void *)local_398._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_398._padding_);
    }
  }
  bVar4 = ACCSAIService::ConnectToServer((this->AIService).field0_0x0.DebugPtr,pFVar11,true);
  if (!bVar4) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_CCSAIManager::ConnectToAIServer",0x23,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_158.Ptr,0x1ed,L"[CCSAI] ConnectToAIServer failed.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    ::FString::FString(&local_7e8,"");
    pFVar11 = &this->AIServerAddr;
    if (pFVar11 != &local_7e8) {
      pFVar1 = (pFVar11->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (pFVar11->Data).AllocatorInstance.Data = local_7e8.Data.AllocatorInstance.Data;
      (this->AIServerAddr).Data.ArrayNum = local_7e8.Data.ArrayNum;
      (this->AIServerAddr).Data.ArrayMax = local_7e8.Data.ArrayMax;
      local_7e8.Data.ArrayNum = 0;
      local_7e8.Data.ArrayMax = 0;
      local_7e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_7e8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
    return;
  }
  pUVar5 = UDS_LogManager::GetInst();
  if (pUVar5 != (UDS_LogManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    local_278._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_278,"UDS_CCSAIManager::ConnectToAIServer",0x23,Yes);
    UDS_LogManager::PrintLog
              (pUVar5,1,Display,local_278.Ptr,0x1d8,L"[CCSAI] ConnectToAIServer succeeded.");
    if ((void *)local_278._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_278._padding_);
    }
  }
  pAVar2 = (this->AIService).field0_0x0.DebugPtr;
  pcVar6 = strstr("&UDS_CCSAIManager::OnRecv_LoginRequest","::");
  pcVar13 = &DAT_00000002;
  if (pcVar6 == (char *)0x0) {
LAB_14ba98f8a:
    pcVar10 = &DAT_00000002;
LAB_14ba98f8d:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    do {
      pcVar10 = pcVar6;
      pcVar6 = strstr(pcVar10 + 1,"::");
    } while (pcVar6 != (char *)0x0);
    if (pcVar10 == (char *)0x0) goto LAB_14ba98f8a;
    pcVar10 = pcVar10 + 2;
    if (*pcVar10 == '0') goto LAB_14ba98f8d;
  }
  ::FName::FName(&local_768,pcVar10);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pAVar2->OnLoginRequestReceived,&local_6c8);
  pFVar12 = *(FWeakObjectPtr **)&(pAVar2->OnLoginRequestReceived).field_0x8;
  pFVar15 = pFVar12 + (longlong)*(int *)&(pAVar2->OnLoginRequestReceived).field_0x10 * 2;
  for (; pFVar12 != pFVar15; pFVar12 = pFVar12 + 2) {
    if (((*(FName *)(pFVar12 + 1) == local_768) && (this != (UDS_CCSAIManager *)0x0)) &&
       (pUVar7 = (UDS_CCSAIManager *)FWeakObjectPtr::GetEvenIfUnreachable(pFVar12), this == pUVar7))
    {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_6c8);
      if (pFVar12 == (FWeakObjectPtr *)0x0) goto LAB_14ba9903b;
      goto LAB_14ba99220;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_6c8);
LAB_14ba9903b:
  pAVar2 = (this->AIService).field0_0x0.DebugPtr;
  pcVar6 = strstr("&UDS_CCSAIManager::OnRecv_LoginRequest","::");
  if (pcVar6 == (char *)0x0) {
LAB_14ba990a1:
    pcVar10 = &DAT_00000002;
LAB_14ba990a4:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    do {
      pcVar10 = pcVar6;
      pcVar6 = strstr(pcVar10 + 1,"::");
    } while (pcVar6 != (char *)0x0);
    if (pcVar10 == (char *)0x0) goto LAB_14ba990a1;
    pcVar10 = pcVar10 + 2;
    if (*pcVar10 == '0') goto LAB_14ba990a4;
  }
  ::FName::FName(&local_770,pcVar10);
  local_830.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_758 = this;
  if (this == (UDS_CCSAIManager *)0x0) {
    local_758 = pUVar14;
  }
  local_828.ObjectIndex = 0;
  local_828.ObjectSerialNumber = 0;
  local_820.ComparisonIndex.Value = 0;
  local_820.Number = 0;
  local_7d8 = local_770;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_758 != (UDS_CCSAIManager *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_758);
  }
  FWeakObjectPtr::operator=(&local_828,(FObjectPtr)&local_758);
  local_820 = local_7d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_830,&local_6b0);
  if ((local_820 == (FName)0x0) ||
     (pUVar8 = FWeakObjectPtr::Get(&local_828), pUVar8 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_6b0);
LAB_14ba9917c:
    local_760 = &local_7d8;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,FCCS_LoginRequest_const_&>::
    __Internal_BindDynamic<UDS_CCSAIManager>'::__l2::<lambda_1>::operator()(&local_760);
  }
  else {
    pUVar9 = UObject::FindFunction(pUVar8,local_820);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_6b0);
    if (pUVar9 == (UFunction *)0x0) goto LAB_14ba9917c;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_830,&local_608);
  local_720.Object = local_828;
  local_720.FunctionName = local_820;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_608);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pAVar2->OnLoginRequestReceived,(FWriteAccessScope *)&local_710);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pAVar2->OnLoginRequestReceived).field_0x8,&local_865,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pAVar2->OnLoginRequestReceived
             ,&local_720);
  if (local_710.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_710.Accessor,&local_710);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_830.AccessDetector);
LAB_14ba99220:
  pAVar2 = (this->AIService).field0_0x0.DebugPtr;
  pcVar6 = strstr("&UDS_CCSAIManager::OnRecv_LogoutRequest","::");
  if (pcVar6 == (char *)0x0) {
LAB_14ba9926a:
    pcVar10 = &DAT_00000002;
LAB_14ba9926d:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    do {
      pcVar10 = pcVar6;
      pcVar6 = strstr(pcVar10 + 1,"::");
    } while (pcVar6 != (char *)0x0);
    if (pcVar10 == (char *)0x0) goto LAB_14ba9926a;
    pcVar10 = pcVar10 + 2;
    if (*pcVar10 == '0') goto LAB_14ba9926d;
  }
  ::FName::FName(&local_7b8,pcVar10);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pAVar2->OnLogoutRequestReceived,&local_698);
  pFVar12 = *(FWeakObjectPtr **)&(pAVar2->OnLogoutRequestReceived).field_0x8;
  pFVar15 = pFVar12 + (longlong)*(int *)&(pAVar2->OnLogoutRequestReceived).field_0x10 * 2;
  for (; pFVar12 != pFVar15; pFVar12 = pFVar12 + 2) {
    local_864 = 0;
    if ((*(FName *)(pFVar12 + 1) == local_7b8) && (local_863 = 0, this != (UDS_CCSAIManager *)0x0))
    {
      local_862 = 0;
      pUVar7 = (UDS_CCSAIManager *)FWeakObjectPtr::GetEvenIfUnreachable(pFVar12);
      if (this == pUVar7) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_698);
        if (pFVar12 == (FWeakObjectPtr *)0x0) goto LAB_14ba9931f;
        goto LAB_14ba9948d;
      }
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_698);
LAB_14ba9931f:
  pAVar2 = (this->AIService).field0_0x0.DebugPtr;
  local_7d0 = UE::Delegates::Private::GetTrimmedMemberFunctionName(local_6e0);
  local_848.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_840.ObjectIndex = 0;
  local_840.ObjectSerialNumber = 0;
  local_7b0 = this;
  if (this == (UDS_CCSAIManager *)0x0) {
    local_7b0 = pUVar14;
  }
  local_838.ComparisonIndex.Value = 0;
  local_838.Number = 0;
  local_7d0 = *(FName *)local_7d0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_7b0 != (UDS_CCSAIManager *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_7b0);
  }
  FWeakObjectPtr::operator=(&local_840,(FObjectPtr)&local_7b0);
  local_838 = local_7d0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_848,&local_680);
  if ((local_838 == (FName)0x0) ||
     (pUVar8 = FWeakObjectPtr::Get(&local_840), pUVar8 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_680);
LAB_14ba993f0:
    local_7a8 = &local_7d0;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,FCCS_LogoutRequest_const_&>::
    __Internal_BindDynamic<UDS_CCSAIManager>'::__l2::<lambda_1>::operator()(&local_7a8);
  }
  else {
    pUVar9 = UObject::FindFunction(pUVar8,local_838);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_680);
    if (pUVar9 == (UFunction *)0x0) goto LAB_14ba993f0;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_848,&local_5f0);
  local_750.Object = local_840;
  local_750.FunctionName = local_838;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_5f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pAVar2->OnLogoutRequestReceived,(FWriteAccessScope *)&local_6f8);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pAVar2->OnLogoutRequestReceived).field_0x8,&local_861,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &pAVar2->OnLogoutRequestReceived,&local_750);
  if (local_6f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6f8.Accessor,&local_6f8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_848.AccessDetector);
LAB_14ba9948d:
  pAVar2 = (this->AIService).field0_0x0.DebugPtr;
  pcVar6 = strstr("&UDS_CCSAIManager::OnRecv_CharEntityRegistrationResponse","::");
  if (pcVar6 == (char *)0x0) {
LAB_14ba994da:
    pcVar10 = &DAT_00000002;
LAB_14ba994dd:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    do {
      pcVar10 = pcVar6;
      pcVar6 = strstr(pcVar10 + 1,"::");
    } while (pcVar6 != (char *)0x0);
    if (pcVar10 == (char *)0x0) goto LAB_14ba994da;
    pcVar10 = pcVar10 + 2;
    if (*pcVar10 == '0') goto LAB_14ba994dd;
  }
  ::FName::FName(&local_7a0,pcVar10);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pAVar2->OnCharEntityRegistrationResponse,&local_668);
  pFVar12 = *(FWeakObjectPtr **)&(pAVar2->OnCharEntityRegistrationResponse).field_0x8;
  pFVar15 = pFVar12 + (longlong)*(int *)&(pAVar2->OnCharEntityRegistrationResponse).field_0x10 * 2;
  for (; pFVar12 != pFVar15; pFVar12 = pFVar12 + 2) {
    local_860 = 0;
    if ((*(FName *)(pFVar12 + 1) == local_7a0) && (local_85f = 0, this != (UDS_CCSAIManager *)0x0))
    {
      local_85e = 0;
      pUVar7 = (UDS_CCSAIManager *)FWeakObjectPtr::GetEvenIfUnreachable(pFVar12);
      if (this == pUVar7) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_668);
        if (pFVar12 == (FWeakObjectPtr *)0x0) goto LAB_14ba9958f;
        goto LAB_14ba9967d;
      }
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_668);
LAB_14ba9958f:
  pAVar2 = (this->AIService).field0_0x0.DebugPtr;
  local_7c8 = UE::Delegates::Private::GetTrimmedMemberFunctionName(local_6d8);
  local_818._padding_ = 0;
  local_818.Object.ObjectIndex = 0;
  local_818.Object.ObjectSerialNumber = 0;
  local_798 = this;
  if (this == (UDS_CCSAIManager *)0x0) {
    local_798 = pUVar14;
  }
  local_818.FunctionName.ComparisonIndex.Value = 0;
  local_818.FunctionName.Number = 0;
  local_7c8 = *(FName *)local_7c8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_798 != (UDS_CCSAIManager *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_798);
  }
  FWeakObjectPtr::operator=(&local_818.Object,(FObjectPtr)&local_798);
  local_818.FunctionName = local_7c8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_818,&local_650);
  if ((local_818.FunctionName == (FName)0x0) ||
     (pUVar8 = FWeakObjectPtr::Get(&local_818.Object), pUVar8 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_650);
LAB_14ba99653:
    local_790 = &local_7c8;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,FCCS_CharEntityRegistrationResponse_const_&>
    ::__Internal_BindDynamic<UDS_CCSAIManager>'::__l2::<lambda_1>::operator()(&local_790);
  }
  else {
    pUVar9 = UObject::FindFunction(pUVar8,local_818.FunctionName);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_650);
    if (pUVar9 == (UFunction *)0x0) goto LAB_14ba99653;
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Add
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &pAVar2->OnCharEntityRegistrationResponse,&local_818);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_818);
LAB_14ba9967d:
  pAVar2 = (this->AIService).field0_0x0.DebugPtr;
  pcVar6 = strstr("&UDS_CCSAIManager::OnRecv_AICommand","::");
  if (pcVar6 == (char *)0x0) {
LAB_14ba996ca:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    do {
      pcVar10 = pcVar6;
      pcVar6 = strstr(pcVar10 + 1,"::");
    } while (pcVar6 != (char *)0x0);
    if ((pcVar10 == (char *)0x0) || (pcVar13 = pcVar10 + 2, pcVar10[2] == '0')) goto LAB_14ba996ca;
  }
  ::FName::FName(&local_788,pcVar13);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pAVar2->OnAICommandReceived,
             &local_638);
  pFVar12 = *(FWeakObjectPtr **)&(pAVar2->OnAICommandReceived).field_0x8;
  pFVar15 = pFVar12 + (longlong)*(int *)&(pAVar2->OnAICommandReceived).field_0x10 * 2;
  for (; pFVar12 != pFVar15; pFVar12 = pFVar12 + 2) {
    if (((*(FName *)(pFVar12 + 1) == local_788) && (this != (UDS_CCSAIManager *)0x0)) &&
       (pUVar7 = (UDS_CCSAIManager *)FWeakObjectPtr::GetEvenIfUnreachable(pFVar12), this == pUVar7))
    {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_638);
      if (pFVar12 != (FWeakObjectPtr *)0x0) {
        return;
      }
      goto LAB_14ba99771;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_638);
LAB_14ba99771:
  pAVar2 = (this->AIService).field0_0x0.DebugPtr;
  local_7c0 = UE::Delegates::Private::GetTrimmedMemberFunctionName(local_6d0);
  local_800._padding_ = 0;
  local_800.Object.ObjectIndex = 0;
  local_800.Object.ObjectSerialNumber = 0;
  local_800.FunctionName.ComparisonIndex.Value = 0;
  local_800.FunctionName.Number = 0;
  local_7c0 = *(FName *)local_7c0;
  local_780 = this;
  if (this == (UDS_CCSAIManager *)0x0) {
    local_780 = pUVar14;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_780 != (UDS_CCSAIManager *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_780);
  }
  FWeakObjectPtr::operator=(&local_800.Object,(FObjectPtr)&local_780);
  local_800.FunctionName = local_7c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_800,&local_620);
  if ((local_800.FunctionName == (FName)0x0) ||
     (pUVar8 = FWeakObjectPtr::Get(&local_800.Object), pUVar8 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_620);
  }
  else {
    pUVar9 = UObject::FindFunction(pUVar8,local_800.FunctionName);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_620);
    if (pUVar9 != (UFunction *)0x0) goto LAB_14ba9987a;
  }
  local_778 = &local_7c0;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,FCCS_AICmd_const_&>::
  __Internal_BindDynamic<UDS_CCSAIManager>'::__l2::<lambda_1>::operator()(&local_778);
LAB_14ba9987a:
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Add
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pAVar2->OnAICommandReceived,
             &local_800);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_800);
  return;
}

// ConnectToGameServer @ 14ba99980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_CCSAIManager::ConnectToGameServer(UDS_CCSAIManager *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  IFileManager *pIVar6;
  UDS_NetworkManager *pUVar7;
  UDS_LogManager *pUVar8;
  char *pcVar9;
  UDS_CCSAIManager *pUVar10;
  UObject *this_00;
  UFunction *pUVar11;
  ForAnyElementType FVar12;
  char *pcVar13;
  FWeakObjectPtr *this_01;
  char *pcVar14;
  FWeakObjectPtr *pFVar15;
  undefined1 auStackY_548 [32];
  <lambda_1> local_505 [5];
  FString local_500;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_4f0;
  FWeakObjectPtr local_4e8;
  FName local_4e0;
  FString local_4d8;
  FName local_4c8;
  UDS_NetworkManager *local_4c0;
  FString local_4b8;
  FString local_4a8;
  FName local_498;
  FName local_490;
  UDS_CCSAIManager *local_488;
  FName *local_480;
  FString local_478;
  wchar_t *local_468;
  undefined4 uStack_460;
  uint uStack_45c;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_458;
  FString local_448;
  FString local_438;
  FString local_428;
  FDestructionSentinel local_418;
  TStringView<wchar_t> local_3f8;
  FReadAccessScope local_3e8;
  FReadAccessScope local_3d0;
  FReadAccessScope local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_548;
  pFVar5 = FPaths::ProjectSavedDir();
  ::operator/(&local_478,pFVar5,L"Logs/AI/AILog.txt");
  pIVar6 = IFileManager::Get();
  local_468 = L"";
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_478.Data.ArrayNum != 0) {
    FVar12.Data = local_478.Data.AllocatorInstance.Data;
  }
  iVar4 = 0;
  uStack_460 = 0;
  local_3f8._8_8_ = (ulonglong)uStack_45c << 0x20;
  local_3f8.DataPtr = L"";
  FFileHelper::SaveStringToFile(&local_3f8,(wchar_t *)FVar12.Data,ForceUTF8,pIVar6,0);
  if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.Data.AllocatorInstance.Data);
  }
  pUVar7 = UDS_NetworkManager::GetInst();
  local_4c0 = pUVar7;
  if (pUVar7 == (UDS_NetworkManager *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_398._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_398,"UDS_CCSAIManager::ConnectToGameServer",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar8,1,Warning,local_398.Ptr,0x254,L"[CCSAI] netMng is nullptr.");
      if ((void *)local_398._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_398._padding_);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1484106909542776235>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CCSAIManager.cpp"
                       ,0x255,"false");
    if (!bVar3) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar9 = strstr("&UDS_CCSAIManager::OnGameServerConnected","::");
  pcVar14 = &DAT_00000002;
  if (pcVar9 == (char *)0x0) {
LAB_14ba99b3b:
    pcVar13 = &DAT_00000002;
LAB_14ba99b3e:
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
      pcVar13 = pcVar9;
      pcVar9 = strstr(pcVar13 + 1,"::");
    } while (pcVar9 != (char *)0x0);
    if (pcVar13 == (char *)0x0) goto LAB_14ba99b3b;
    pcVar13 = pcVar13 + 2;
    if (*pcVar13 == '0') goto LAB_14ba99b3e;
  }
  ::FName::FName(&local_498,pcVar13);
  if ((this == (UDS_CCSAIManager *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4af,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar7->OnConnectResult,
             &local_3e8);
  this_01 = *(FWeakObjectPtr **)&(pUVar7->OnConnectResult).field_0x8;
  pFVar15 = this_01 + (longlong)*(int *)&(pUVar7->OnConnectResult).field_0x10 * 2;
  for (; this_01 != pFVar15; this_01 = this_01 + 2) {
    if (((*(FName *)(this_01 + 1) == local_498) && (this != (UDS_CCSAIManager *)0x0)) &&
       (pUVar10 = (UDS_CCSAIManager *)FWeakObjectPtr::GetEvenIfUnreachable(this_01), this == pUVar10
       )) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_3e8);
      pUVar7 = local_4c0;
      if (this_01 != (FWeakObjectPtr *)0x0) goto LAB_14ba99d9a;
      goto LAB_14ba99c0c;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_3e8);
LAB_14ba99c0c:
  pcVar9 = strstr("&UDS_CCSAIManager::OnGameServerConnected","::");
  if (pcVar9 == (char *)0x0) {
LAB_14ba99c5a:
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
      pcVar13 = pcVar9;
      pcVar9 = strstr(pcVar13 + 1,"::");
    } while (pcVar9 != (char *)0x0);
    if ((pcVar13 == (char *)0x0) || (pcVar14 = pcVar13 + 2, pcVar13[2] == '0')) goto LAB_14ba99c5a;
  }
  ::FName::FName(&local_490,pcVar14);
  if ((this == (UDS_CCSAIManager *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_4f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_4e8.ObjectIndex = 0;
  local_4e8.ObjectSerialNumber = 0;
  local_4e0.ComparisonIndex.Value = 0;
  local_4e0.Number = 0;
  local_4c8 = local_490;
  if ((this == (UDS_CCSAIManager *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_488 = this;
  if (this == (UDS_CCSAIManager *)0x0) {
    local_488 = (UDS_CCSAIManager *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_488 != (UDS_CCSAIManager *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_488);
  }
  FWeakObjectPtr::operator=(&local_4e8,(FObjectPtr)&local_488);
  local_4e0 = local_4c8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_4f0,&local_3d0);
  if ((local_4e0 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_4e8), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_3d0);
  }
  else {
    pUVar11 = UObject::FindFunction(this_00,local_4e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_3d0);
    if (pUVar11 != (UFunction *)0x0) goto LAB_14ba99e73;
  }
  local_480 = &local_4c8;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,bool>::
  __Internal_BindDynamic<UDS_CCSAIManager>'::__l2::<lambda_1>::operator()(&local_480);
LAB_14ba99e73:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_4f0,&local_3b8);
  local_458.Object = local_4e8;
  local_458.FunctionName = local_4e0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_3b8);
  pUVar7 = local_4c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_4c0->OnConnectResult,
             (FWriteAccessScope *)&local_418);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pUVar7->OnConnectResult).field_0x8,local_505,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar7->OnConnectResult,
             &local_458);
  if (local_418.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_418.Accessor,&local_418);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_4f0.AccessDetector);
LAB_14ba99d9a:
  ::FString::FString(&local_500,"");
  UKismetSystemLibrary::GetCommandLine(&local_438);
  ::FString::FString(&local_448,"GameServer=");
  bVar3 = UKismetSystemLibrary::ParseParamValue(&local_438,&local_448,&local_500);
  if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    ::FString::operator=(&local_500,L"20.41.116.92:32101");
  }
  if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_438.Data.AllocatorInstance.Data);
  }
  pFVar5 = &this->GameServerAddr;
  if (pFVar5 != &local_500) {
    pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_500.Data.AllocatorInstance.Data;
    (this->GameServerAddr).Data.ArrayNum = local_500.Data.ArrayNum;
    (this->GameServerAddr).Data.ArrayMax = local_500.Data.ArrayMax;
    local_500.Data.ArrayNum = 0;
    local_500.Data.ArrayMax = 0;
    local_500.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_500.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_500.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_4b8,"");
  ::FString::FString(&local_4a8,"");
  ::FString::FString(&local_428,L":");
  bVar3 = ::FString::Split(pFVar5,&local_428,&local_4b8,&local_4a8);
  if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_428.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_4a8.Data.ArrayNum != 0) {
      FVar12.Data = local_4a8.Data.AllocatorInstance.Data;
    }
    iVar4 = _wtoi((wchar_t *)FVar12.Data);
  }
  pUVar8 = UDS_LogManager::GetInst();
  if (pUVar8 != (UDS_LogManager *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    local_278._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_278,"UDS_CCSAIManager::ConnectToGameServer",0x25,Yes);
    UDS_LogManager::PrintLog
              (pUVar8,1,Display,local_278.Ptr,0x268,L"[CCSAI] Request ConnectToGameServer. (%s:%d)")
    ;
    if ((void *)local_278._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_278._padding_);
    }
  }
  bVar3 = UDS_NetworkManager::Connect(pUVar7,&local_4b8,iVar4);
  if (!bVar3) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_CCSAIManager::ConnectToGameServer",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_158.Ptr,0x26b,L"[CCSAI] ConnectToGameServer failed.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1484106909542776212>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CCSAIManager.cpp"
                       ,0x26c,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ::FString::FString(&local_4d8,"");
    if (pFVar5 != &local_4d8) {
      pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (pFVar5->Data).AllocatorInstance.Data = local_4d8.Data.AllocatorInstance.Data;
      (this->GameServerAddr).Data.ArrayNum = local_4d8.Data.ArrayNum;
      (this->GameServerAddr).Data.ArrayMax = local_4d8.Data.ArrayMax;
      local_4d8.Data.ArrayNum = 0;
      local_4d8.Data.ArrayMax = 0;
      local_4d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
    }
  }
  if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
  }
  if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
  }
  return;
}

// Created @ 14ba9d170

void __thiscall UDS_CCSAIManager::Created(UDS_CCSAIManager *this)

{
  int iVar1;
  FString local_18;
  
  *(undefined1 *)&this->_padding_ = 0;
  UKismetSystemLibrary::GetCommandLine(&local_18);
  iVar1 = ::FString::Find(&local_18,L"-AIPlay",7,IgnoreCase,FromStart,-1);
  if (iVar1 != -1) {
    this->bIsAIPlayMode = true;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// DestroyAIService @ 14ba9ddb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_CCSAIManager::DestroyAIService(UDS_CCSAIManager *this)

{
  ACCSAIService *pAVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  FString *pFVar8;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FString local_48;
  
  pAVar1 = (this->AIService).field0_0x0.DebugPtr;
  if ((pAVar1 == (ACCSAIService *)0x0) || ((this->AIServerAddr).Data.ArrayNum < 2))
  goto LAB_14ba9e08e;
  pcVar5 = strstr("&UDS_CCSAIManager::OnRecv_LoginRequest","::");
  pcVar7 = &DAT_00000002;
  if (pcVar5 == (char *)0x0) {
LAB_14ba9de3a:
    pcVar6 = &DAT_00000002;
LAB_14ba9de3d:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    do {
      pcVar6 = pcVar5;
      pcVar5 = strstr(pcVar6 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if (pcVar6 == (char *)0x0) goto LAB_14ba9de3a;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14ba9de3d;
  }
  ::FName::FName(&local_res8,pcVar6);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Remove
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pAVar1->OnLoginRequestReceived
             ,(UObject *)this,local_res8);
  pAVar1 = (this->AIService).field0_0x0.DebugPtr;
  pcVar5 = strstr("&UDS_CCSAIManager::OnRecv_LogoutRequest","::");
  if (pcVar5 == (char *)0x0) {
LAB_14ba9deda:
    pcVar6 = &DAT_00000002;
LAB_14ba9dedd:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    do {
      pcVar6 = pcVar5;
      pcVar5 = strstr(pcVar6 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if (pcVar6 == (char *)0x0) goto LAB_14ba9deda;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14ba9dedd;
  }
  ::FName::FName(&local_res10,pcVar6);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Remove
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &pAVar1->OnLogoutRequestReceived,(UObject *)this,local_res10);
  pAVar1 = (this->AIService).field0_0x0.DebugPtr;
  pcVar5 = strstr("&UDS_CCSAIManager::OnRecv_CharEntityRegistrationResponse","::");
  if (pcVar5 == (char *)0x0) {
LAB_14ba9df7b:
    pcVar6 = &DAT_00000002;
LAB_14ba9df7e:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    do {
      pcVar6 = pcVar5;
      pcVar5 = strstr(pcVar6 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if (pcVar6 == (char *)0x0) goto LAB_14ba9df7b;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14ba9df7e;
  }
  ::FName::FName(&local_res18,pcVar6);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Remove
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &pAVar1->OnCharEntityRegistrationResponse,(UObject *)this,local_res18);
  pAVar1 = (this->AIService).field0_0x0.DebugPtr;
  pcVar5 = strstr("&UDS_CCSAIManager::OnRecv_AICommand","::");
  if (pcVar5 == (char *)0x0) {
LAB_14ba9e02a:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    do {
      pcVar6 = pcVar5;
      pcVar5 = strstr(pcVar6 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if ((pcVar6 == (char *)0x0) || (pcVar7 = pcVar6 + 2, pcVar6[2] == '0')) goto LAB_14ba9e02a;
  }
  ::FName::FName(&local_res20,pcVar7);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Remove
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pAVar1->OnAICommandReceived,
             (UObject *)this,local_res20);
LAB_14ba9e08e:
  pAVar1 = (this->AIService).field0_0x0.DebugPtr;
  if (pAVar1 != (ACCSAIService *)0x0) {
    AActor::Destroy((AActor *)pAVar1,false,true);
    (this->AIService).field0_0x0.DebugPtr = (ACCSAIService *)0x0;
  }
  ::FString::FString(&local_48,"");
  pFVar8 = &this->AIServerAddr;
  if (pFVar8 != &local_48) {
    pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar8->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    (this->AIServerAddr).Data.ArrayNum = local_48.Data.ArrayNum;
    (this->AIServerAddr).Data.ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// ExecuteCheatFromCommandLine @ 14ba9eca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_CCSAIManager::ExecuteCheatFromCommandLine(UDS_CCSAIManager *this)

{
  bool bVar1;
  int iVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  ForAnyElementType _Str;
  undefined1 auStackY_1b8 [32];
  FString local_188;
  FString local_178;
  FWeakObjectPtr local_168;
  FString local_160;
  void *local_150 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  ADS_PlayerController::GetPlayerController();
  bVar1 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> *)&local_168,(void *)0x0);
  if (bVar1) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_CCSAIManager::ExecuteCheatFromCommandLine",0x2d,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x431,L"pc is nullptr.");
    local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_138._padding_;
  }
  else {
    UKismetSystemLibrary::GetCommandLine(&local_160);
    local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::FString::FString(&local_188,"");
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    local_178.Data.AllocatorInstance.Data = local_188.Data.AllocatorInstance.Data;
    local_178.Data.ArrayNum = local_188.Data.ArrayNum;
    local_178.Data.ArrayMax = local_188.Data.ArrayMax;
    ::FString::FString(&local_188,"Level=");
    bVar1 = UKismetSystemLibrary::ParseParamValue(&local_160,&local_188,&local_178);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    if (bVar1) {
      _Str.Data = (FScriptContainerElement *)L"";
      if (local_178.Data.ArrayNum != 0) {
        _Str.Data = local_178.Data.AllocatorInstance.Data;
      }
      iVar2 = _wtoi((wchar_t *)_Str.Data);
      if (0 < iVar2) {
        ::FString::PrintfImpl(&local_188,L"DS.Chat Charlevel %d");
        pUVar4 = FWeakObjectPtr::Get(&local_168);
        (**(code **)(*(longlong *)pUVar4 + 0xe00))(pUVar4,local_150,&local_188,1);
        if (local_150[0] != (void *)0x0) {
          FMemory::Free(local_150[0]);
        }
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
      }
    }
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
  }
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  return;
}

// GetAIServerAddrFromCommandLine @ 14baa34b0

FString * __thiscall
UDS_CCSAIManager::GetAIServerAddrFromCommandLine
          (UDS_CCSAIManager *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  FString local_28;
  FString local_18;
  
  ::FString::FString(__return_storage_ptr__,"");
  UKismetSystemLibrary::GetCommandLine(&local_18);
  ::FString::FString(&local_28,"AIServer=");
  bVar1 = UKismetSystemLibrary::ParseParamValue(&local_18,&local_28,__return_storage_ptr__);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (!bVar1) {
    ::FString::operator=(__return_storage_ptr__,L"212.129.230.156:34000");
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetGameServerAddrFromCommandLine @ 14baaada0

FString * __thiscall
UDS_CCSAIManager::GetGameServerAddrFromCommandLine
          (UDS_CCSAIManager *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  FString local_28;
  FString local_18;
  
  ::FString::FString(__return_storage_ptr__,"");
  UKismetSystemLibrary::GetCommandLine(&local_18);
  ::FString::FString(&local_28,"GameServer=");
  bVar1 = UKismetSystemLibrary::ParseParamValue(&local_18,&local_28,__return_storage_ptr__);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (!bVar1) {
    ::FString::operator=(__return_storage_ptr__,L"20.41.116.92:32101");
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetInst @ 14baab360

UDS_CCSAIManager * __cdecl UDS_CCSAIManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_CCSAIManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_CCSAIManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_CCSAIManager_NoRegister();
  pUVar3 = (UDS_CCSAIManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_CCSAIManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_CCSAIManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_CCSAIManager *)0x0;
}

// GetMemberNeedCountFromCommandLine @ 14baad880

int __thiscall UDS_CCSAIManager::GetMemberNeedCountFromCommandLine(UDS_CCSAIManager *this)

{
  bool bVar1;
  int iVar2;
  ForAnyElementType _Str;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_38,"");
  UKismetSystemLibrary::GetCommandLine(&local_18);
  ::FString::FString(&local_28,"MemberNeedCount=");
  bVar1 = UKismetSystemLibrary::ParseParamValue(&local_18,&local_28,&local_38);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar1) {
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      _Str.Data = local_38.Data.AllocatorInstance.Data;
    }
    iVar2 = _wtoi((wchar_t *)_Str.Data);
  }
  else {
    iVar2 = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return iVar2;
}

// Init @ 14bab38b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_CCSAIManager::Init(UDS_CCSAIManager *this)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  UDS_LogManager *pUVar7;
  int iVar8;
  int *piVar9;
  ForAnyElementType FVar10;
  undefined1 auStackY_1a8 [32];
  undefined1 local_178;
  undefined1 local_177 [7];
  TArray<FDS_SkillConditionTableRow_const_*,TSizedDefaultAllocator<32>_> local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (this->bIsAIPlayMode == false) {
    SpawnAIService(this);
    (this->AutoUseSkillList).ArrayNum = 0;
    if ((this->AutoUseSkillList).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->AutoUseSkillList).AllocatorInstance,0,
                 &(this->AutoUseSkillList).ArrayMax);
    }
    FDS_SkillConditionTableRow::GetAll(&local_170);
    iVar8 = local_170.ArrayNum;
    pFVar1 = local_170.AllocatorInstance.Data + (longlong)iVar8 * 8;
    FVar10.Data = local_170.AllocatorInstance.Data;
    while( true ) {
      if (local_170.ArrayNum != iVar8) {
        local_178 = 0;
        `TCheckedPointerIterator<FDS_SkillConditionTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_178);
      }
      if (FVar10.Data == pFVar1) goto LAB_14bab3a6d;
      lVar4 = *(longlong *)FVar10.Data;
      if (lVar4 == 0) break;
      piVar9 = *(int **)(lVar4 + 0x1b0);
      iVar3 = *(int *)(lVar4 + 0x1b8);
      piVar2 = piVar9 + iVar3;
      while( true ) {
        if (*(int *)(lVar4 + 0x1b8) != iVar3) {
          local_177[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_177);
        }
        if (piVar9 == piVar2) break;
        if (*piVar9 != 0) {
          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                    (&this->AutoUseSkillList,piVar9);
        }
        piVar9 = piVar9 + 1;
      }
      FVar10.Data = FVar10.Data + 8;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_CCSAIManager::InitAutoUseSkillList",0x26,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_158.Ptr,0x1a9,L"[CCSAI] skillConditionTable is nullptr.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1484106909542776406>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CCSAIManager.cpp"
                       ,0x1aa,"false");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
LAB_14bab3a6d:
    if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.AllocatorInstance.Data);
    }
  }
  return;
}

// InitAutoUseSkillList @ 14bab3f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_CCSAIManager::InitAutoUseSkillList(UDS_CCSAIManager *this)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  UDS_LogManager *pUVar7;
  int iVar8;
  int *piVar9;
  ForAnyElementType FVar10;
  undefined1 auStackY_1a8 [32];
  undefined1 local_178;
  undefined1 local_177 [7];
  TArray<FDS_SkillConditionTableRow_const_*,TSizedDefaultAllocator<32>_> local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  (this->AutoUseSkillList).ArrayNum = 0;
  if ((this->AutoUseSkillList).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->AutoUseSkillList).AllocatorInstance,0,
               &(this->AutoUseSkillList).ArrayMax);
  }
  FDS_SkillConditionTableRow::GetAll(&local_170);
  iVar8 = local_170.ArrayNum;
  pFVar1 = local_170.AllocatorInstance.Data + (longlong)iVar8 * 8;
  FVar10.Data = local_170.AllocatorInstance.Data;
  while( true ) {
    if (local_170.ArrayNum != iVar8) {
      local_178 = 0;
      `TCheckedPointerIterator<FDS_SkillConditionTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_178);
    }
    if (FVar10.Data == pFVar1) goto LAB_14bab40ad;
    lVar4 = *(longlong *)FVar10.Data;
    if (lVar4 == 0) break;
    piVar9 = *(int **)(lVar4 + 0x1b0);
    iVar3 = *(int *)(lVar4 + 0x1b8);
    piVar2 = piVar9 + iVar3;
    while( true ) {
      if (*(int *)(lVar4 + 0x1b8) != iVar3) {
        local_177[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_177);
      }
      if (piVar9 == piVar2) break;
      if (*piVar9 != 0) {
        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                  (&this->AutoUseSkillList,piVar9);
      }
      piVar9 = piVar9 + 1;
    }
    FVar10.Data = FVar10.Data + 8;
  }
  pUVar7 = UDS_LogManager::GetInst();
  if (pUVar7 != (UDS_LogManager *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_CCSAIManager::InitAutoUseSkillList",0x26,Yes);
    UDS_LogManager::PrintLog
              (pUVar7,1,Warning,local_158.Ptr,0x1a9,L"[CCSAI] skillConditionTable is nullptr.");
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
  }
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_1484106909542776406>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CCSAIManager.cpp"
                     ,0x1aa,"false");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14bab40ad:
  if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.AllocatorInstance.Data);
  }
  return;
}

// InitSkillDataMap @ 14bab5de0

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

void __thiscall UDS_CCSAIManager::InitSkillDataMap(UDS_CCSAIManager *this)

{
  TMap<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
  *this_00;
  FScriptContainerElement *pFVar1;
  uint uVar2;
  void *pvVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FDS_CharacterBaseTableRow *pFVar9;
  UDS_LogManager *pUVar10;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar11;
  TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr> TVar12;
  FDS_EntityBase *pFVar13;
  UDS_AbilitySystemComponent *pUVar14;
  FGameplayTag *pFVar15;
  TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr> this_01;
  UClass *pUVar16;
  TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr> TVar17;
  UDS_SkillDataSet *this_02;
  TMap<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
  *pTVar18;
  atomic<unsigned_char> *paVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  FScriptContainerElement *pFVar22;
  undefined1 auStackY_938 [32];
  EDS_AbilityTagType local_8f7 [7];
  ulong64 local_8f0;
  uint local_8e8 [2];
  uint local_8e0 [2];
  FWeakObjectPtr local_8d8;
  FWeakObjectPtr local_8d0;
  FWeakObjectPtr local_8c8;
  FWeakObjectPtr local_8c0;
  FWeakObjectPtr local_8b8;
  undefined8 local_8b0;
  undefined8 local_8a8;
  undefined8 local_8a0;
  undefined8 local_898;
  UObject *local_890;
  undefined1 local_888 [8];
  ulong64 local_880;
  FGameplayTag local_878;
  undefined1 local_870 [8];
  undefined1 local_868 [72];
  undefined4 local_820;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_818;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_6f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_938;
  if ((this->AIServerLoginInfo).GameID < 0) {
    return;
  }
  (this->AbleSkillList).ArrayNum = 0;
  if ((this->AbleSkillList).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->AbleSkillList).AllocatorInstance,0,&(this->AbleSkillList).ArrayMax);
  }
  (this->AbleVirtualKeyList).ArrayNum = 0;
  if ((this->AbleVirtualKeyList).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->AbleVirtualKeyList).AllocatorInstance,0,
               &(this->AbleVirtualKeyList).ArrayMax);
  }
  this->AbleNormalAttackSkillID = 0;
  this->CharacterBaseTable = (FDS_CharacterBaseTableRow *)0x0;
  local_8d8.ObjectIndex = 0;
  local_8d8.ObjectSerialNumber = 0;
  local_8b0 = 0;
  FWeakObjectPtr::operator=(&local_8d8,(FObjectPtr)&local_8b0);
  (this->CharStateData).WeakPtr = local_8d8;
  local_8d0.ObjectIndex = 0;
  local_8d0.ObjectSerialNumber = 0;
  local_8a8 = 0;
  FWeakObjectPtr::operator=(&local_8d0,(FObjectPtr)&local_8a8);
  (this->AirWalkAbilityData).WeakPtr = local_8d0;
  local_8c8.ObjectIndex = 0;
  local_8c8.ObjectSerialNumber = 0;
  local_8a0 = 0;
  FWeakObjectPtr::operator=(&local_8c8,(FObjectPtr)&local_8a0);
  (this->NormalAttackControlAbility).WeakPtr = local_8c8;
  local_8c0.ObjectIndex = 0;
  local_8c0.ObjectSerialNumber = 0;
  local_898 = 0;
  FWeakObjectPtr::operator=(&local_8c0,(FObjectPtr)&local_898);
  this_00 = &this->SkillDataMap;
  (this->SkillDataSet).WeakPtr = local_8c0;
  TSet<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
           *)this_00);
  iVar7 = UDS_PlayerData::GetMainPlayerCurrentCharID();
  local_8f0 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
  pFVar9 = FDS_CharacterBaseTableRow::Get((longlong)iVar7,true);
  this->CharacterBaseTable = pFVar9;
  if (pFVar9 == (FDS_CharacterBaseTableRow *)0x0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 != (UDS_LogManager *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      local_818._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_818,"UDS_CCSAIManager::InitSkillDataMap",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar10,1,Warning,local_818.Ptr,0x467,
                 L"[CCSAI] CharacterBaseTable is nullptr. (%d)");
      if ((void *)local_818._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_818._padding_);
      }
    }
    iVar7 = 0x468;
    paVar19 = &bGEnsureHasExecuted<_1484106909542775704>;
  }
  else {
    TVar11 = UDS_CharStateData::GetData((ulong64)local_888);
                    /* WARNING: Load size is inaccurate */
    (this->CharStateData).WeakPtr = *TVar11.WeakPtr;
    bVar6 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      (&this->CharStateData,(void *)0x0);
    if (bVar6) {
      pUVar10 = UDS_LogManager::GetInst();
      if (pUVar10 != (UDS_LogManager *)0x0) {
        pUVar10 = UDS_LogManager::GetInst();
        local_6f8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_6f8,"UDS_CCSAIManager::InitSkillDataMap",0x22,Yes);
        UDS_LogManager::PrintLog
                  (pUVar10,1,Warning,local_6f8.Ptr,0x46f,L"[CCSAI] CharStateData is nullptr.");
        if ((void *)local_6f8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_6f8._padding_);
        }
      }
      iVar7 = 0x470;
      paVar19 = &bGEnsureHasExecuted<_1484106909542775696>;
    }
    else {
      TVar12 = UDS_AbilityDataSet::GetAbilityData<UDS_AirWalkAbilityData>
                         (&local_880,(EDS_AbilityTagType *)&local_8f0);
                    /* WARNING: Load size is inaccurate */
      (this->AirWalkAbilityData).WeakPtr = *TVar12.WeakPtr;
      bVar6 = TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr>::UEOpEquals
                        (&this->AirWalkAbilityData,(void *)0x0);
      if (bVar6) {
        pUVar10 = UDS_LogManager::GetInst();
        if (pUVar10 != (UDS_LogManager *)0x0) {
          pUVar10 = UDS_LogManager::GetInst();
          local_5d8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_5d8,"UDS_CCSAIManager::InitSkillDataMap",0x22,Yes);
          UDS_LogManager::PrintLog
                    (pUVar10,1,Warning,local_5d8.Ptr,0x477,L"[CCSAI] AirWalkAbilityData is nullptr."
                    );
          if ((void *)local_5d8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_5d8._padding_);
          }
        }
        iVar7 = 0x478;
        paVar19 = &bGEnsureHasExecuted<_1484106909542775688>;
      }
      else {
        pFVar13 = FDS_EntityBase::GetEntityBase(&local_8f0);
        if (pFVar13 == (FDS_EntityBase *)0x0) {
          pUVar10 = UDS_LogManager::GetInst();
          if (pUVar10 != (UDS_LogManager *)0x0) {
            pUVar10 = UDS_LogManager::GetInst();
            local_4b8._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_4b8,"UDS_CCSAIManager::InitSkillDataMap",0x22,Yes);
            UDS_LogManager::PrintLog
                      (pUVar10,1,Warning,local_4b8.Ptr,0x47f,L"[CCSAI] entityBase is nullptr.");
            if ((void *)local_4b8._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_4b8._padding_);
            }
          }
          iVar7 = 0x480;
          paVar19 = &bGEnsureHasExecuted<_1484106909542775680>;
        }
        else {
          (**(code **)(pFVar13->_padding_ + 0x178))(pFVar13);
          bVar6 = TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr> *)&local_8b8
                             ,(void *)0x0);
          if (bVar6) {
            pUVar10 = UDS_LogManager::GetInst();
            if (pUVar10 != (UDS_LogManager *)0x0) {
              pUVar10 = UDS_LogManager::GetInst();
              local_398._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_398,"UDS_CCSAIManager::InitSkillDataMap",0x22,Yes);
              UDS_LogManager::PrintLog
                        (pUVar10,1,Warning,local_398.Ptr,0x487,L"[CCSAI] asc is nullptr.");
              if ((void *)local_398._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_398._padding_);
              }
            }
            iVar7 = 0x488;
            paVar19 = &bGEnsureHasExecuted<_1484106909542775672>;
          }
          else {
            pUVar14 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_8b8);
            local_8f7[0] = NormalAttack;
            pFVar15 = FDS_GameplayTags::GetAbilityTag(local_8f7);
            UDS_AbilitySystemComponent::ForcedAddAbilityByTag(pUVar14,pFVar15);
            pUVar14 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_8b8);
            local_8f7[1] = 0xe;
            FDS_GameplayTags::GetAbilityTag(local_8f7 + 1);
            this_01 = UDS_AbilitySystemComponent::GetAbilityByTag(pUVar14,&local_878);
            local_890 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
            if (local_890 == (UObject *)0x0) {
LAB_14bab6402:
              local_890 = (UObject *)0x0;
            }
            else {
              pUVar16 = Z_Construct_UClass_UDS_NormalAttackControlAbility_NoRegister();
              iVar7 = (int)pUVar16->_padding_;
              if ((*(int *)(*(longlong *)&local_890->field_0x10 + 0x38) < iVar7) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&local_890->field_0x10 + 0x30) + (longlong)iVar7 * 8)
                  != &pUVar16->_padding_)) goto LAB_14bab6402;
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_890 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(local_890);
            }
            FWeakObjectPtr::operator=
                      (&(this->NormalAttackControlAbility).WeakPtr,(FObjectPtr)&local_890);
            bVar6 = TWeakObjectPtr<UDS_NormalAttackControlAbility,FWeakObjectPtr>::UEOpEquals
                              (&this->NormalAttackControlAbility,(void *)0x0);
            if (!bVar6) {
              TVar17 = TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)local_870);
                    /* WARNING: Load size is inaccurate */
              (this->SkillDataSet).WeakPtr = *TVar17.WeakPtr;
              bVar6 = TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr>::UEOpEquals
                                (&this->SkillDataSet,(void *)0x0);
              if (!bVar6) {
                this_02 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&(this->SkillDataSet).WeakPtr);
                pTVar18 = UDS_SkillDataSet::GetAllSkillData
                                    (this_02,(TMap<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
                                              *)local_868);
                if (this_00 != pTVar18) {
                  if (*(void **)&this_00->field_0x0 != (void *)0x0) {
                    FMemory::Free(*(void **)&this_00->field_0x0);
                  }
                  *(undefined8 *)&this_00->field_0x0 = *(undefined8 *)&pTVar18->field_0x0;
                  puVar20 = &(this->SkillDataMap).field_0x10;
                  *(undefined8 *)&pTVar18->field_0x0 = 0;
                  *(undefined4 *)&(this->SkillDataMap).field_0x8 =
                       *(undefined4 *)(&pTVar18->field_0x0 + 8);
                  *(undefined4 *)&(this->SkillDataMap).field_0xc =
                       *(undefined4 *)(&pTVar18->field_0x0 + 0xc);
                  *(undefined8 *)(&pTVar18->field_0x0 + 8) = 0;
                  if (puVar20 != &pTVar18->field_0x0 + 0x10) {
                    if (*(longlong *)(&pTVar18->field_0x0 + 0x20) == 0) {
                      memmove(puVar20,&pTVar18->field_0x0 + 0x10,0x10);
                    }
                    pvVar3 = *(void **)&(this->SkillDataMap).field_0x20;
                    if (pvVar3 != (void *)0x0) {
                      FMemory::Free(pvVar3);
                    }
                    *(undefined8 *)&(this->SkillDataMap).field_0x20 =
                         *(undefined8 *)(&pTVar18->field_0x0 + 0x20);
                    *(undefined8 *)(&pTVar18->field_0x0 + 0x20) = 0;
                    *(undefined4 *)&(this->SkillDataMap).field_0x28 =
                         *(undefined4 *)(&pTVar18->field_0x0 + 0x28);
                    *(undefined4 *)&(this->SkillDataMap).field_0x2c =
                         *(undefined4 *)(&pTVar18->field_0x0 + 0x2c);
                    *(undefined8 *)(&pTVar18->field_0x0 + 0x28) = 0;
                  }
                  *(undefined4 *)&(this->SkillDataMap).field_0x30 =
                       *(undefined4 *)(&pTVar18->field_0x0 + 0x30);
                  *(undefined4 *)&(this->SkillDataMap).field_0x34 =
                       *(undefined4 *)(&pTVar18->field_0x0 + 0x34);
                  *(undefined4 *)(&pTVar18->field_0x0 + 0x30) = 0xffffffff;
                  *(undefined4 *)(&pTVar18->field_0x0 + 0x34) = 0;
                  if (*(longlong *)(&pTVar18->field_0x38 + 8) == 0) {
                    *(undefined4 *)&(this->SkillDataMap).field_0x38 =
                         *(undefined4 *)&pTVar18->field_0x38;
                  }
                  pvVar3 = *(void **)&(this->SkillDataMap).field_0x40;
                  if (pvVar3 != (void *)0x0) {
                    FMemory::Free(pvVar3);
                  }
                  *(undefined8 *)&(this->SkillDataMap).field_0x40 =
                       *(undefined8 *)(&pTVar18->field_0x38 + 8);
                  *(undefined8 *)(&pTVar18->field_0x38 + 8) = 0;
                  *(undefined4 *)&(this->SkillDataMap).field_0x48 =
                       *(undefined4 *)&pTVar18->field_0x48;
                  *(undefined4 *)&pTVar18->field_0x48 = 0;
                }
                local_820 = 0;
                if ((void *)local_868._64_8_ != (void *)0x0) {
                  FMemory::Free((void *)local_868._64_8_);
                }
                TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          ((TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)local_868);
                uVar2 = this->CharacterBaseTable->ID_AirDashSkill;
                if (*(int *)&(this->SkillDataMap).field_0x8 !=
                    *(int *)&(this->SkillDataMap).field_0x34) {
                  puVar20 = *(undefined1 **)&(this->SkillDataMap).field_0x40;
                  if (puVar20 == (undefined1 *)0x0) {
                    puVar20 = &(this->SkillDataMap).field_0x38;
                  }
                  iVar7 = *(int *)(puVar20 +
                                  (ulonglong)(*(int *)&(this->SkillDataMap).field_0x48 - 1U & uVar2)
                                  * 4);
                  if (iVar7 != -1) {
                    do {
                      if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar7 * 0x14) ==
                          uVar2) {
                        local_8e8[0] = this->CharacterBaseTable->ID_AirDashSkill;
                        if (*(int *)&(this->SkillDataMap).field_0x8 !=
                            *(int *)&(this->SkillDataMap).field_0x34) {
                          TSet<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                          ::RemoveImpl<int>((TSet<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                                             *)&this->SkillDataMap,local_8e8[0],(int *)local_8e8);
                        }
                        break;
                      }
                      iVar7 = *(int *)(*(longlong *)&this_00->field_0x0 + 0xc +
                                      (longlong)iVar7 * 0x14);
                    } while (iVar7 != -1);
                  }
                }
                pFVar22 = (this->AutoUseSkillList).AllocatorInstance.Data;
                iVar7 = (this->AutoUseSkillList).ArrayNum;
                pFVar1 = pFVar22 + (longlong)iVar7 * 4;
                do {
                  while( true ) {
                    if ((this->AutoUseSkillList).ArrayNum != iVar7) {
                      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                                (local_8f7 + 2);
                    }
                    if (pFVar22 == pFVar1) {
                      return;
                    }
                    uVar2 = *(uint *)pFVar22;
                    if (*(int *)&(this->SkillDataMap).field_0x8 !=
                        *(int *)&(this->SkillDataMap).field_0x34) break;
LAB_14bab67e7:
                    pFVar22 = pFVar22 + 4;
                  }
                  puVar20 = *(undefined1 **)&(this->SkillDataMap).field_0x40;
                  puVar21 = &(this->SkillDataMap).field_0x38;
                  if (puVar20 != (undefined1 *)0x0) {
                    puVar21 = puVar20;
                  }
                  iVar8 = *(int *)(puVar21 +
                                  (ulonglong)(*(int *)&(this->SkillDataMap).field_0x48 - 1U & uVar2)
                                  * 4);
                  if (iVar8 == -1) goto LAB_14bab67e7;
                  lVar4 = *(longlong *)&(this->SkillDataMap).field_0x0;
                  do {
                    if (*(uint *)(lVar4 + (longlong)iVar8 * 0x14) == uVar2) {
                      local_8e0[0] = uVar2;
                      if (*(int *)&(this->SkillDataMap).field_0x8 !=
                          *(int *)&(this->SkillDataMap).field_0x34) {
                        TSet<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                        ::RemoveImpl<int>((TSet<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                                           *)&this->SkillDataMap,uVar2,(int *)local_8e0);
                      }
                      goto LAB_14bab67e7;
                    }
                    iVar8 = *(int *)(lVar4 + 0xc + (longlong)iVar8 * 0x14);
                  } while (iVar8 != -1);
                  pFVar22 = pFVar22 + 4;
                } while( true );
              }
              pUVar10 = UDS_LogManager::GetInst();
              if (pUVar10 != (UDS_LogManager *)0x0) {
                pUVar10 = UDS_LogManager::GetInst();
                local_158._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_158,"UDS_CCSAIManager::InitSkillDataMap",0x22,Yes);
                UDS_LogManager::PrintLog
                          (pUVar10,1,Warning,local_158.Ptr,0x499,L"[CCSAI] SkillDataSet is nullptr."
                          );
                if ((void *)local_158._padding_ != (void *)0x0) {
                  FMemory::Free((void *)local_158._padding_);
                }
              }
              bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_1484106909542775654>,false,
                                 "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CCSAIManager.cpp"
                                 ,0x49a,"false");
              if (!bVar6) {
                return;
              }
              goto code_r0x00014bab65bb;
            }
            pUVar10 = UDS_LogManager::GetInst();
            if (pUVar10 != (UDS_LogManager *)0x0) {
              pUVar10 = UDS_LogManager::GetInst();
              local_278._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_278,"UDS_CCSAIManager::InitSkillDataMap",0x22,Yes);
              UDS_LogManager::PrintLog
                        (pUVar10,1,Warning,local_278.Ptr,0x491,
                         L"[CCSAI] NormalAttackControlAbility is nullptr.");
              if ((void *)local_278._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_278._padding_);
              }
            }
            iVar7 = 0x492;
            paVar19 = &bGEnsureHasExecuted<_1484106909542775662>;
          }
        }
      }
    }
  }
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar19,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CCSAIManager.cpp"
                     ,iVar7,"false");
  if (!bVar6) {
    return;
  }
code_r0x00014bab65bb:
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// OnChangeChar @ 14babe380

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
UDS_CCSAIManager::OnChangeChar
          (UDS_CCSAIManager *this,FDS_EntityBase *param_1,FDS_EntityBase *param_2)

{
  TMap<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
  *this_00;
  FScriptContainerElement *pFVar1;
  uint uVar2;
  void *pvVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FDS_CharacterBaseTableRow *pFVar9;
  UDS_LogManager *pUVar10;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar11;
  TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr> TVar12;
  FDS_EntityBase *pFVar13;
  UDS_AbilitySystemComponent *pUVar14;
  FGameplayTag *pFVar15;
  TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr> this_01;
  UClass *pUVar16;
  TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr> TVar17;
  UDS_SkillDataSet *this_02;
  TMap<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
  *pTVar18;
  atomic<unsigned_char> *paVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  FScriptContainerElement *pFVar22;
  undefined1 auStackY_938 [32];
  EDS_AbilityTagType aEStack_8f7 [7];
  ulong64 uStack_8f0;
  uint auStack_8e8 [2];
  uint auStack_8e0 [2];
  FWeakObjectPtr FStack_8d8;
  FWeakObjectPtr FStack_8d0;
  FWeakObjectPtr FStack_8c8;
  FWeakObjectPtr FStack_8c0;
  FWeakObjectPtr FStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  UObject *pUStack_890;
  undefined1 auStack_888 [8];
  ulong64 uStack_880;
  FGameplayTag FStack_878;
  undefined1 auStack_870 [8];
  undefined1 auStack_868 [72];
  undefined4 uStack_820;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_818;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_6f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_5d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_158;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_938;
  if ((this->AIServerLoginInfo).GameID < 0) {
    return;
  }
  (this->AbleSkillList).ArrayNum = 0;
  if ((this->AbleSkillList).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->AbleSkillList).AllocatorInstance,0,&(this->AbleSkillList).ArrayMax);
  }
  (this->AbleVirtualKeyList).ArrayNum = 0;
  if ((this->AbleVirtualKeyList).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->AbleVirtualKeyList).AllocatorInstance,0,
               &(this->AbleVirtualKeyList).ArrayMax);
  }
  this->AbleNormalAttackSkillID = 0;
  this->CharacterBaseTable = (FDS_CharacterBaseTableRow *)0x0;
  FStack_8d8.ObjectIndex = 0;
  FStack_8d8.ObjectSerialNumber = 0;
  uStack_8b0 = 0;
  FWeakObjectPtr::operator=(&FStack_8d8,(FObjectPtr)&uStack_8b0);
  (this->CharStateData).WeakPtr = FStack_8d8;
  FStack_8d0.ObjectIndex = 0;
  FStack_8d0.ObjectSerialNumber = 0;
  uStack_8a8 = 0;
  FWeakObjectPtr::operator=(&FStack_8d0,(FObjectPtr)&uStack_8a8);
  (this->AirWalkAbilityData).WeakPtr = FStack_8d0;
  FStack_8c8.ObjectIndex = 0;
  FStack_8c8.ObjectSerialNumber = 0;
  uStack_8a0 = 0;
  FWeakObjectPtr::operator=(&FStack_8c8,(FObjectPtr)&uStack_8a0);
  (this->NormalAttackControlAbility).WeakPtr = FStack_8c8;
  FStack_8c0.ObjectIndex = 0;
  FStack_8c0.ObjectSerialNumber = 0;
  uStack_898 = 0;
  FWeakObjectPtr::operator=(&FStack_8c0,(FObjectPtr)&uStack_898);
  this_00 = &this->SkillDataMap;
  (this->SkillDataSet).WeakPtr = FStack_8c0;
  TSet<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
           *)this_00);
  iVar7 = UDS_PlayerData::GetMainPlayerCurrentCharID();
  uStack_8f0 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
  pFVar9 = FDS_CharacterBaseTableRow::Get((longlong)iVar7,true);
  this->CharacterBaseTable = pFVar9;
  if (pFVar9 == (FDS_CharacterBaseTableRow *)0x0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 != (UDS_LogManager *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      TStack_818._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_818,"UDS_CCSAIManager::InitSkillDataMap",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar10,1,Warning,TStack_818.Ptr,0x467,
                 L"[CCSAI] CharacterBaseTable is nullptr. (%d)");
      if ((void *)TStack_818._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_818._padding_);
      }
    }
    iVar7 = 0x468;
    paVar19 = &bGEnsureHasExecuted<_1484106909542775704>;
  }
  else {
    TVar11 = UDS_CharStateData::GetData((ulong64)auStack_888);
                    /* WARNING: Load size is inaccurate */
    (this->CharStateData).WeakPtr = *TVar11.WeakPtr;
    bVar6 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      (&this->CharStateData,(void *)0x0);
    if (bVar6) {
      pUVar10 = UDS_LogManager::GetInst();
      if (pUVar10 != (UDS_LogManager *)0x0) {
        pUVar10 = UDS_LogManager::GetInst();
        TStack_6f8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_6f8,"UDS_CCSAIManager::InitSkillDataMap",0x22,Yes);
        UDS_LogManager::PrintLog
                  (pUVar10,1,Warning,TStack_6f8.Ptr,0x46f,L"[CCSAI] CharStateData is nullptr.");
        if ((void *)TStack_6f8._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_6f8._padding_);
        }
      }
      iVar7 = 0x470;
      paVar19 = &bGEnsureHasExecuted<_1484106909542775696>;
    }
    else {
      TVar12 = UDS_AbilityDataSet::GetAbilityData<UDS_AirWalkAbilityData>
                         (&uStack_880,(EDS_AbilityTagType *)&uStack_8f0);
                    /* WARNING: Load size is inaccurate */
      (this->AirWalkAbilityData).WeakPtr = *TVar12.WeakPtr;
      bVar6 = TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr>::UEOpEquals
                        (&this->AirWalkAbilityData,(void *)0x0);
      if (bVar6) {
        pUVar10 = UDS_LogManager::GetInst();
        if (pUVar10 != (UDS_LogManager *)0x0) {
          pUVar10 = UDS_LogManager::GetInst();
          TStack_5d8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_5d8,"UDS_CCSAIManager::InitSkillDataMap",0x22,Yes);
          UDS_LogManager::PrintLog
                    (pUVar10,1,Warning,TStack_5d8.Ptr,0x477,
                     L"[CCSAI] AirWalkAbilityData is nullptr.");
          if ((void *)TStack_5d8._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_5d8._padding_);
          }
        }
        iVar7 = 0x478;
        paVar19 = &bGEnsureHasExecuted<_1484106909542775688>;
      }
      else {
        pFVar13 = FDS_EntityBase::GetEntityBase(&uStack_8f0);
        if (pFVar13 == (FDS_EntityBase *)0x0) {
          pUVar10 = UDS_LogManager::GetInst();
          if (pUVar10 != (UDS_LogManager *)0x0) {
            pUVar10 = UDS_LogManager::GetInst();
            TStack_4b8._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&TStack_4b8,"UDS_CCSAIManager::InitSkillDataMap",0x22,Yes);
            UDS_LogManager::PrintLog
                      (pUVar10,1,Warning,TStack_4b8.Ptr,0x47f,L"[CCSAI] entityBase is nullptr.");
            if ((void *)TStack_4b8._padding_ != (void *)0x0) {
              FMemory::Free((void *)TStack_4b8._padding_);
            }
          }
          iVar7 = 0x480;
          paVar19 = &bGEnsureHasExecuted<_1484106909542775680>;
        }
        else {
          (**(code **)(pFVar13->_padding_ + 0x178))(pFVar13);
          bVar6 = TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr> *)
                             &FStack_8b8,(void *)0x0);
          if (bVar6) {
            pUVar10 = UDS_LogManager::GetInst();
            if (pUVar10 != (UDS_LogManager *)0x0) {
              pUVar10 = UDS_LogManager::GetInst();
              TStack_398._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&TStack_398,"UDS_CCSAIManager::InitSkillDataMap",0x22,Yes);
              UDS_LogManager::PrintLog
                        (pUVar10,1,Warning,TStack_398.Ptr,0x487,L"[CCSAI] asc is nullptr.");
              if ((void *)TStack_398._padding_ != (void *)0x0) {
                FMemory::Free((void *)TStack_398._padding_);
              }
            }
            iVar7 = 0x488;
            paVar19 = &bGEnsureHasExecuted<_1484106909542775672>;
          }
          else {
            pUVar14 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get(&FStack_8b8);
            aEStack_8f7[0] = NormalAttack;
            pFVar15 = FDS_GameplayTags::GetAbilityTag(aEStack_8f7);
            UDS_AbilitySystemComponent::ForcedAddAbilityByTag(pUVar14,pFVar15);
            pUVar14 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get(&FStack_8b8);
            aEStack_8f7[1] = 0xe;
            FDS_GameplayTags::GetAbilityTag(aEStack_8f7 + 1);
            this_01 = UDS_AbilitySystemComponent::GetAbilityByTag(pUVar14,&FStack_878);
            pUStack_890 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
            if (pUStack_890 == (UObject *)0x0) {
LAB_14bab6402:
              pUStack_890 = (UObject *)0x0;
            }
            else {
              pUVar16 = Z_Construct_UClass_UDS_NormalAttackControlAbility_NoRegister();
              iVar7 = (int)pUVar16->_padding_;
              if ((*(int *)(*(longlong *)&pUStack_890->field_0x10 + 0x38) < iVar7) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&pUStack_890->field_0x10 + 0x30) +
                   (longlong)iVar7 * 8) != &pUVar16->_padding_)) goto LAB_14bab6402;
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUStack_890 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(pUStack_890);
            }
            FWeakObjectPtr::operator=
                      (&(this->NormalAttackControlAbility).WeakPtr,(FObjectPtr)&pUStack_890);
            bVar6 = TWeakObjectPtr<UDS_NormalAttackControlAbility,FWeakObjectPtr>::UEOpEquals
                              (&this->NormalAttackControlAbility,(void *)0x0);
            if (!bVar6) {
              TVar17 = TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)auStack_870);
                    /* WARNING: Load size is inaccurate */
              (this->SkillDataSet).WeakPtr = *TVar17.WeakPtr;
              bVar6 = TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr>::UEOpEquals
                                (&this->SkillDataSet,(void *)0x0);
              if (!bVar6) {
                this_02 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&(this->SkillDataSet).WeakPtr);
                pTVar18 = UDS_SkillDataSet::GetAllSkillData
                                    (this_02,(TMap<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
                                              *)auStack_868);
                if (this_00 != pTVar18) {
                  if (*(void **)&this_00->field_0x0 != (void *)0x0) {
                    FMemory::Free(*(void **)&this_00->field_0x0);
                  }
                  *(undefined8 *)&this_00->field_0x0 = *(undefined8 *)&pTVar18->field_0x0;
                  puVar20 = &(this->SkillDataMap).field_0x10;
                  *(undefined8 *)&pTVar18->field_0x0 = 0;
                  *(undefined4 *)&(this->SkillDataMap).field_0x8 =
                       *(undefined4 *)(&pTVar18->field_0x0 + 8);
                  *(undefined4 *)&(this->SkillDataMap).field_0xc =
                       *(undefined4 *)(&pTVar18->field_0x0 + 0xc);
                  *(undefined8 *)(&pTVar18->field_0x0 + 8) = 0;
                  if (puVar20 != &pTVar18->field_0x0 + 0x10) {
                    if (*(longlong *)(&pTVar18->field_0x0 + 0x20) == 0) {
                      memmove(puVar20,&pTVar18->field_0x0 + 0x10,0x10);
                    }
                    pvVar3 = *(void **)&(this->SkillDataMap).field_0x20;
                    if (pvVar3 != (void *)0x0) {
                      FMemory::Free(pvVar3);
                    }
                    *(undefined8 *)&(this->SkillDataMap).field_0x20 =
                         *(undefined8 *)(&pTVar18->field_0x0 + 0x20);
                    *(undefined8 *)(&pTVar18->field_0x0 + 0x20) = 0;
                    *(undefined4 *)&(this->SkillDataMap).field_0x28 =
                         *(undefined4 *)(&pTVar18->field_0x0 + 0x28);
                    *(undefined4 *)&(this->SkillDataMap).field_0x2c =
                         *(undefined4 *)(&pTVar18->field_0x0 + 0x2c);
                    *(undefined8 *)(&pTVar18->field_0x0 + 0x28) = 0;
                  }
                  *(undefined4 *)&(this->SkillDataMap).field_0x30 =
                       *(undefined4 *)(&pTVar18->field_0x0 + 0x30);
                  *(undefined4 *)&(this->SkillDataMap).field_0x34 =
                       *(undefined4 *)(&pTVar18->field_0x0 + 0x34);
                  *(undefined4 *)(&pTVar18->field_0x0 + 0x30) = 0xffffffff;
                  *(undefined4 *)(&pTVar18->field_0x0 + 0x34) = 0;
                  if (*(longlong *)(&pTVar18->field_0x38 + 8) == 0) {
                    *(undefined4 *)&(this->SkillDataMap).field_0x38 =
                         *(undefined4 *)&pTVar18->field_0x38;
                  }
                  pvVar3 = *(void **)&(this->SkillDataMap).field_0x40;
                  if (pvVar3 != (void *)0x0) {
                    FMemory::Free(pvVar3);
                  }
                  *(undefined8 *)&(this->SkillDataMap).field_0x40 =
                       *(undefined8 *)(&pTVar18->field_0x38 + 8);
                  *(undefined8 *)(&pTVar18->field_0x38 + 8) = 0;
                  *(undefined4 *)&(this->SkillDataMap).field_0x48 =
                       *(undefined4 *)&pTVar18->field_0x48;
                  *(undefined4 *)&pTVar18->field_0x48 = 0;
                }
                uStack_820 = 0;
                if ((void *)auStack_868._64_8_ != (void *)0x0) {
                  FMemory::Free((void *)auStack_868._64_8_);
                }
                TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          ((TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)auStack_868);
                uVar2 = this->CharacterBaseTable->ID_AirDashSkill;
                if (*(int *)&(this->SkillDataMap).field_0x8 !=
                    *(int *)&(this->SkillDataMap).field_0x34) {
                  puVar20 = *(undefined1 **)&(this->SkillDataMap).field_0x40;
                  if (puVar20 == (undefined1 *)0x0) {
                    puVar20 = &(this->SkillDataMap).field_0x38;
                  }
                  iVar7 = *(int *)(puVar20 +
                                  (ulonglong)(*(int *)&(this->SkillDataMap).field_0x48 - 1U & uVar2)
                                  * 4);
                  if (iVar7 != -1) {
                    do {
                      if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar7 * 0x14) ==
                          uVar2) {
                        auStack_8e8[0] = this->CharacterBaseTable->ID_AirDashSkill;
                        if (*(int *)&(this->SkillDataMap).field_0x8 !=
                            *(int *)&(this->SkillDataMap).field_0x34) {
                          TSet<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                          ::RemoveImpl<int>((TSet<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                                             *)&this->SkillDataMap,auStack_8e8[0],(int *)auStack_8e8
                                           );
                        }
                        break;
                      }
                      iVar7 = *(int *)(*(longlong *)&this_00->field_0x0 + 0xc +
                                      (longlong)iVar7 * 0x14);
                    } while (iVar7 != -1);
                  }
                }
                pFVar22 = (this->AutoUseSkillList).AllocatorInstance.Data;
                iVar7 = (this->AutoUseSkillList).ArrayNum;
                pFVar1 = pFVar22 + (longlong)iVar7 * 4;
                do {
                  while( true ) {
                    if ((this->AutoUseSkillList).ArrayNum != iVar7) {
                      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                                (aEStack_8f7 + 2);
                    }
                    if (pFVar22 == pFVar1) {
                      return;
                    }
                    uVar2 = *(uint *)pFVar22;
                    if (*(int *)&(this->SkillDataMap).field_0x8 !=
                        *(int *)&(this->SkillDataMap).field_0x34) break;
LAB_14bab67e7:
                    pFVar22 = pFVar22 + 4;
                  }
                  puVar20 = *(undefined1 **)&(this->SkillDataMap).field_0x40;
                  puVar21 = &(this->SkillDataMap).field_0x38;
                  if (puVar20 != (undefined1 *)0x0) {
                    puVar21 = puVar20;
                  }
                  iVar8 = *(int *)(puVar21 +
                                  (ulonglong)(*(int *)&(this->SkillDataMap).field_0x48 - 1U & uVar2)
                                  * 4);
                  if (iVar8 == -1) goto LAB_14bab67e7;
                  lVar4 = *(longlong *)&(this->SkillDataMap).field_0x0;
                  do {
                    if (*(uint *)(lVar4 + (longlong)iVar8 * 0x14) == uVar2) {
                      auStack_8e0[0] = uVar2;
                      if (*(int *)&(this->SkillDataMap).field_0x8 !=
                          *(int *)&(this->SkillDataMap).field_0x34) {
                        TSet<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                        ::RemoveImpl<int>((TSet<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                                           *)&this->SkillDataMap,uVar2,(int *)auStack_8e0);
                      }
                      goto LAB_14bab67e7;
                    }
                    iVar8 = *(int *)(lVar4 + 0xc + (longlong)iVar8 * 0x14);
                  } while (iVar8 != -1);
                  pFVar22 = pFVar22 + 4;
                } while( true );
              }
              pUVar10 = UDS_LogManager::GetInst();
              if (pUVar10 != (UDS_LogManager *)0x0) {
                pUVar10 = UDS_LogManager::GetInst();
                TStack_158._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&TStack_158,"UDS_CCSAIManager::InitSkillDataMap",0x22,Yes);
                UDS_LogManager::PrintLog
                          (pUVar10,1,Warning,TStack_158.Ptr,0x499,
                           L"[CCSAI] SkillDataSet is nullptr.");
                if ((void *)TStack_158._padding_ != (void *)0x0) {
                  FMemory::Free((void *)TStack_158._padding_);
                }
              }
              bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_1484106909542775654>,false,
                                 "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CCSAIManager.cpp"
                                 ,0x49a,"false");
              if (!bVar6) {
                return;
              }
              goto code_r0x00014bab65bb;
            }
            pUVar10 = UDS_LogManager::GetInst();
            if (pUVar10 != (UDS_LogManager *)0x0) {
              pUVar10 = UDS_LogManager::GetInst();
              TStack_278._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&TStack_278,"UDS_CCSAIManager::InitSkillDataMap",0x22,Yes);
              UDS_LogManager::PrintLog
                        (pUVar10,1,Warning,TStack_278.Ptr,0x491,
                         L"[CCSAI] NormalAttackControlAbility is nullptr.");
              if ((void *)TStack_278._padding_ != (void *)0x0) {
                FMemory::Free((void *)TStack_278._padding_);
              }
            }
            iVar7 = 0x492;
            paVar19 = &bGEnsureHasExecuted<_1484106909542775662>;
          }
        }
      }
    }
  }
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar19,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CCSAIManager.cpp"
                     ,iVar7,"false");
  if (!bVar6) {
    return;
  }
code_r0x00014bab65bb:
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// OnGameServerConnected @ 14babf630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_CCSAIManager::OnGameServerConnected(UDS_CCSAIManager *this,bool param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_3b8 [32];
  FString local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  if (param_1) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_378._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_378,"UDS_CCSAIManager::OnGameServerConnected",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Display,local_378.Ptr,0x277,L"[CCSAI] ConnectToGameServer succeeded.");
      if ((void *)local_378._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_378._padding_);
      }
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_258._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_258,"UDS_CCSAIManager::OnGameServerConnected",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Display,local_258.Ptr,0x282,L"[CCSAI] Request RequestJoinGameServer.");
      if ((void *)local_258._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_258._padding_);
      }
    }
    FDS_LoginService::RequestJoinGameServer();
  }
  else {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_CCSAIManager::OnGameServerConnected",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_138.Ptr,0x27b,L"[CCSAI] ConnectToGameServer failed.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1484106909542776196>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CCSAIManager.cpp"
                       ,0x27c,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    ::FString::FString(&local_388,"");
    pFVar1 = &this->GameServerAddr;
    if (pFVar1 != &local_388) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_388.Data.AllocatorInstance.Data;
      (this->GameServerAddr).Data.ArrayNum = local_388.Data.ArrayNum;
      (this->GameServerAddr).Data.ArrayMax = local_388.Data.ArrayMax;
      local_388.Data.ArrayNum = 0;
      local_388.Data.ArrayMax = 0;
      local_388.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnLoadResourceCompleted @ 14babfa60

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

void __thiscall UDS_CCSAIManager::OnLoadResourceCompleted(UDS_CCSAIManager *this)

{
  code *pcVar1;
  bool bVar2;
  FTimerManager *pFVar3;
  FTimerData *pFVar4;
  FDS_RaidPartyRepo *this_00;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (this->bIsAIPlayMode == false) {
    if ((this->RegisterCharEntityToAIServerTimer).Handle != 0) {
      pFVar3 = FDS_TimerManager::Get((UObject *)0x0);
      pFVar4 = FTimerManager::FindTimer(pFVar3,&this->RegisterCharEntityToAIServerTimer);
      if (pFVar4 != (FTimerData *)0x0) {
        FTimerManager::InternalClearTimer
                  (pFVar3,(FTimerHandle)(this->RegisterCharEntityToAIServerTimer).Handle);
      }
      (this->RegisterCharEntityToAIServerTimer).Handle = 0;
    }
    pFVar3 = FDS_TimerManager::Get((UObject *)0x0);
    FTimerManager::SetTimer<UDS_CCSAIManager>
              (pFVar3,&this->RegisterCharEntityToAIServerTimer,this,(pmf_17ca9015)0x14bac3fe0,
               __real_3f800000,true,__real_bf800000);
  }
  else {
    (this->AIServerLoginInfo).GameID = 1;
    if ((this->AIServerLoginInfo).bIsLeader == false) {
      this_00 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      bVar2 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(this_00);
      if (bVar2) {
        FDS_RaidPartyService::RequestRaidPartyMemberUpdateState(Ready);
      }
      else {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_CCSAIManager::OnLoadResourceCompleted",0x29,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,local_138.Ptr,0x29a,L"[CCSAI] raidPartyRepo is invalid.");
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1484106909542776165>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CCSAIManager.cpp"
                           ,0x29b,"false");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
  }
  return;
}

// OnRecv_AICommand @ 14bac0ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_CCSAIManager::OnRecv_AICommand(UDS_CCSAIManager *this,FCCS_AICmd *param_1)

{
  FCCS_AICmdProcessInfo *this_00;
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  UDS_LogManager *pUVar5;
  UEnum *this_01;
  ulonglong uVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1b8 [4];
  uint local_1b4;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  dVar4 = __real_3ff00068db8b8000;
  uVar3 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar2 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  this_00 = &this->AICmdProcessInfo;
  this_00->bIsActivated = true;
  uVar1 = *(undefined8 *)&(param_1->moveInputVector).field0_0x0;
  if (((double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & uVar3,(uint)uVar1 & uVar2) <= dVar4) &&
     (uVar1 = *(undefined8 *)((longlong)&(param_1->moveInputVector).field0_0x0 + 8),
     (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & uVar3,(uint)uVar1 & uVar2) <= dVar4)) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      ::FString::PrintfImpl(&local_1b0,L"X=%3.3f Y=%3.3f");
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"UDS_CCSAIManager::OnRecv_AICommand",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Display,local_178.Ptr,0x3b1,L"[CCSAI] SetMoveInputVector. (%s)");
      if ((void *)local_178._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
      if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
      }
    }
    FCCS_AICmdProcessInfo::SetMoveInputVector(this_00,&param_1->moveInputVector);
  }
  if ((__real_b8d1b717 <= param_1->cameraYaw) && (param_1->cameraYaw <= ___real_43b40003)) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"UDS_CCSAIManager::OnRecv_AICommand",0x22,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Display,local_178.Ptr,0x3ba,L"[CCSAI] SetCameraYaw. (%f)");
      if ((void *)local_178._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
    }
    FCCS_AICmdProcessInfo::SetCameraYaw(this_00,&param_1->cameraYaw);
  }
  local_1b4 = (param_1->inputList).ArrayNum;
  uVar6 = (ulonglong)(int)local_1b4;
  pFVar9 = (param_1->inputList).AllocatorInstance.Data;
  FVar8.Data = pFVar9 + uVar6 * 2;
  local_1b0.Data.AllocatorInstance.Data = FVar8.Data;
  while( true ) {
    if ((param_1->inputList).ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<FCCS_AIInput_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1b8);
    }
    if (pFVar9 == FVar8.Data) break;
    this_01 = StaticEnum<enum_ECCS_AIInputType>();
    if (this_01 == (UEnum *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_178._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_178,"UDS_CCSAIManager::OnRecv_AICommand",0x22,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_178.Ptr,0x3c3,L"[CCSAI] enumPtr is nullptr.");
        if ((void *)local_178._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_178._padding_);
        }
      }
      return;
    }
    UEnum::GetNameStringByValue(this_01,&local_190,(ulonglong)(byte)pFVar9[1]);
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      pwVar7 = L"true";
      if (*pFVar9 == (FScriptContainerElement)0x0) {
        pwVar7 = L"false";
      }
      ::FString::FString(&local_1a0,pwVar7);
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"UDS_CCSAIManager::OnRecv_AICommand",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Display,local_178.Ptr,0x3c8,L"[CCSAI] SetVirtualKey. (%s: %s)");
      if ((void *)local_178._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
      FVar8.Data = local_1b0.Data.AllocatorInstance.Data;
      if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        FVar8.Data = local_1b0.Data.AllocatorInstance.Data;
      }
    }
    FCCS_AICmdProcessInfo::SetVirtualKey(this_00,(ECCS_AIInputType *)(pFVar9 + 1),(bool *)pFVar9);
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
    uVar6 = (ulonglong)local_1b4;
    pFVar9 = pFVar9 + 2;
  }
  return;
}

// OnRecv_CharEntityRegistrationResponse @ 14bac1300

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
UDS_CCSAIManager::OnRecv_CharEntityRegistrationResponse
          (UDS_CCSAIManager *this,FCCS_CharEntityRegistrationResponse *param_1)

{
  code *pcVar1;
  bool bVar2;
  FTimerManager *this_00;
  FTimerData *pFVar3;
  UDS_LogManager *pUVar4;
  FDS_RaidPartyRepo *this_01;
  undefined1 auStackY_4f8 [32];
  undefined1 local_4b8 [272];
  FTimerHandle local_3a8;
  wchar_t *local_3a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_4f8;
  if ((this->RegisterCharEntityToAIServerTimer).Handle != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar3 = FTimerManager::FindTimer(this_00,&this->RegisterCharEntityToAIServerTimer);
    if (pFVar3 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer
                (this_00,(FTimerHandle)(this->RegisterCharEntityToAIServerTimer).Handle);
    }
    (this->RegisterCharEntityToAIServerTimer).Handle = 0;
  }
  if (param_1->errorCode == 0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_3a8.Handle = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_4b8 + 0x10),
                 "UDS_CCSAIManager::OnRecv_CharEntityRegistrationResponse",0x37,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Display,local_3a0,0x2dc,
                 L"[CCSAI] RegisterCharEntityToAIServer succeeded. (GameID: %llu)");
      if ((void *)local_3a8.Handle != (void *)0x0) {
        FMemory::Free((void *)local_3a8.Handle);
      }
    }
    (this->AIServerLoginInfo).GameID = param_1->gameId;
    if ((this->AIServerLoginInfo).bIsLeader == false) {
      this_01 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      bVar2 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(this_01);
      if (!bVar2) {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_388._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_388,"UDS_CCSAIManager::OnRecv_CharEntityRegistrationResponse",0x37,Yes);
          UDS_LogManager::PrintLog
                    (pUVar4,1,Warning,local_388.Ptr,0x2e6,L"[CCSAI] raidPartyRepo is invalid.");
          if ((void *)local_388._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_388._padding_);
          }
        }
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1484106909542776089>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CCSAIManager.cpp"
                           ,0x2e7,"false");
        if (!bVar2) {
          return;
        }
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FDS_RaidPartyService::RequestRaidPartyMemberUpdateState(Ready);
    }
    TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_CCSAIManager>
              ((TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
                *)&ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,
               (UDS_CCSAIManager *)local_4b8,(pmf_2b2e0c6b)this);
    InitSkillDataMap(this);
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_268._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_268,"UDS_CCSAIManager::OnRecv_CharEntityRegistrationResponse",0x37,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_268.Ptr,0x2f6,
                 L"[CCSAI] RegisterCharEntityToAIServer failed. (ErrorCode: %d)");
      if ((void *)local_268._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_268._padding_);
      }
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_CCSAIManager::OnRecv_CharEntityRegistrationResponse",0x37,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0x2f7,L"[CCSAI] ErrorMsg: %s");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  return;
}

// OnRecv_DungeonIn @ 14bac1650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_CCSAIManager::OnRecv_DungeonIn(UDS_CCSAIManager *this)

{
  bool bVar1;
  int iVar2;
  FDateTime FVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  ForAnyElementType _Str;
  undefined1 auStackY_1b8 [32];
  FString local_188;
  FString local_178;
  FWeakObjectPtr local_168;
  FString local_160;
  void *local_150 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  (this->AIServerLoginInfo).bIsDungeonIn = true;
  FVar3 = UDS_TimeUtilManager::GetCurrentServerDateTime();
                    /* WARNING: Load size is inaccurate */
  (this->AIServerLoginInfo).DungeonInTime.Ticks = *FVar3.Ticks;
  ADS_PlayerController::GetPlayerController();
  bVar1 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> *)&local_168,(void *)0x0);
  if (bVar1) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_CCSAIManager::ExecuteCheatFromCommandLine",0x2d,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x431,L"pc is nullptr.");
    local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_138._padding_;
  }
  else {
    UKismetSystemLibrary::GetCommandLine(&local_160);
    local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::FString::FString(&local_188,"");
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    local_178.Data.AllocatorInstance.Data = local_188.Data.AllocatorInstance.Data;
    local_178.Data.ArrayNum = local_188.Data.ArrayNum;
    local_178.Data.ArrayMax = local_188.Data.ArrayMax;
    ::FString::FString(&local_188,"Level=");
    bVar1 = UKismetSystemLibrary::ParseParamValue(&local_160,&local_188,&local_178);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    if (bVar1) {
      _Str.Data = (FScriptContainerElement *)L"";
      if (local_178.Data.ArrayNum != 0) {
        _Str.Data = local_178.Data.AllocatorInstance.Data;
      }
      iVar2 = _wtoi((wchar_t *)_Str.Data);
      if (0 < iVar2) {
        ::FString::PrintfImpl(&local_188,L"DS.Chat Charlevel %d");
        pUVar5 = FWeakObjectPtr::Get(&local_168);
        (**(code **)(*(longlong *)pUVar5 + 0xe00))(pUVar5,local_150,&local_188,1);
        if (local_150[0] != (void *)0x0) {
          FMemory::Free(local_150[0]);
        }
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
      }
    }
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
  }
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  return;
}

// OnRecv_LoginRequest @ 14bac1870

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
UDS_CCSAIManager::OnRecv_LoginRequest(UDS_CCSAIManager *this,FCCS_LoginRequest *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  UDS_LogManager *pUVar7;
  FTimerManager *pFVar8;
  FTimerData *pFVar9;
  FScriptContainerElement *pFVar10;
  wchar_t *pwVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStackY_1c8 [32];
  FString local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pUVar7 = UDS_LogManager::GetInst();
  uVar12 = 0;
  if (pUVar7 != (UDS_LogManager *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    pwVar11 = L"true";
    if (param_1->isLeader == false) {
      pwVar11 = L"false";
    }
    ::FString::FString(&local_178,pwVar11);
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_CCSAIManager::OnRecv_LoginRequest",0x25,Yes);
    UDS_LogManager::PrintLog
              (pUVar7,1,Display,local_168.Ptr,0x1fa,
               L"[CCSAI] OnRecv_LoginRequest. (SelectedCharID: %d, DeckCharID.Num(): %d, IsLeader: %s)"
              );
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
  }
  if (this->bIsAIPlayMode == false) {
    FCCS_AIServerLoginInfo::ResetLoginInfo(&this->AIServerLoginInfo);
    FCCS_AICmdProcessInfo::ResetProcessInfo(&this->AICmdProcessInfo);
  }
  if ((this->RegisterCharEntityToAIServerTimer).Handle != 0) {
    pFVar8 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar9 = FTimerManager::FindTimer(pFVar8,&this->RegisterCharEntityToAIServerTimer);
    if (pFVar9 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer
                (pFVar8,(FTimerHandle)(this->RegisterCharEntityToAIServerTimer).Handle);
    }
    (this->RegisterCharEntityToAIServerTimer).Handle = 0;
  }
  if ((this->RequestEnterDungeonTimer).Handle != 0) {
    pFVar8 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar9 = FTimerManager::FindTimer(pFVar8,&this->RequestEnterDungeonTimer);
    if (pFVar9 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer
                (pFVar8,(FTimerHandle)(this->RequestEnterDungeonTimer).Handle);
    }
    (this->RequestEnterDungeonTimer).Handle = 0;
  }
  piVar1 = &(this->AIServerLoginInfo).DeckCharID.ArrayMax;
  (this->AIServerLoginInfo).SelectedCharID = param_1->selectedCharId;
  iVar5 = *piVar1;
  (this->AIServerLoginInfo).DeckCharID.ArrayNum = 0;
  if (iVar5 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->AIServerLoginInfo).DeckCharID.AllocatorInstance,0,piVar1);
  }
  iVar5 = (this->AIServerLoginInfo).DeckCharID.ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->AIServerLoginInfo).DeckCharID.AllocatorInstance,piVar1);
  }
  (this->AIServerLoginInfo).DeckCharID.ArrayNum = iVar5 + 1;
  *(int *)((this->AIServerLoginInfo).DeckCharID.AllocatorInstance.Data + (longlong)iVar5 * 4) =
       (this->AIServerLoginInfo).SelectedCharID;
  lVar13 = (longlong)(param_1->deckCharId).ArrayNum;
  uVar15 = uVar12;
  if (0 < lVar13) {
    do {
      uVar14 = (uint)uVar15;
      uVar6 = 0;
      if ((int)uVar14 < (param_1->deckCharId).ArrayNum) {
        uVar6 = ~uVar14 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = (this->AIServerLoginInfo).DeckCharID.AllocatorInstance.Data;
      pFVar2 = pFVar10 + (longlong)(this->AIServerLoginInfo).DeckCharID.ArrayNum * 4;
      if (pFVar10 != pFVar2) {
        do {
          if (*(int *)pFVar10 == *(int *)((param_1->deckCharId).AllocatorInstance.Data + uVar12 * 4)
             ) goto LAB_14bac1b6f;
          pFVar10 = pFVar10 + 4;
        } while (pFVar10 != pFVar2);
      }
      uVar6 = 0;
      if ((int)uVar14 < (param_1->deckCharId).ArrayNum) {
        uVar6 = ~uVar14 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->deckCharId).AllocatorInstance.Data;
      piVar1 = &(this->AIServerLoginInfo).DeckCharID.ArrayMax;
      iVar5 = (this->AIServerLoginInfo).DeckCharID.ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->AIServerLoginInfo).DeckCharID.AllocatorInstance,piVar1);
      }
      pFVar10 = (this->AIServerLoginInfo).DeckCharID.AllocatorInstance.Data;
      (this->AIServerLoginInfo).DeckCharID.ArrayNum = iVar5 + 1;
      *(undefined4 *)(pFVar10 + (longlong)iVar5 * 4) = *(undefined4 *)(pFVar2 + uVar12 * 4);
LAB_14bac1b6f:
      uVar12 = uVar12 + 1;
      uVar15 = (ulonglong)(uVar14 + 1);
    } while ((longlong)uVar12 < lVar13);
  }
  (this->AIServerLoginInfo).bIsLeader = param_1->isLeader;
  ConnectToGameServer(this);
  return;
}

// OnRecv_LogoutRequest @ 14bac1bc0

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
UDS_CCSAIManager::OnRecv_LogoutRequest(UDS_CCSAIManager *this,FCCS_LogoutRequest *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  FTimerManager *pFVar5;
  FTimerData *pFVar6;
  ADS_PlayerController *pAVar7;
  UDS_NetworkManager *this_00;
  undefined1 auStackY_3e8 [32];
  FWeakObjectPtr local_3b8;
  TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> local_3b0;
  TVector<double>_u_0 local_3a8;
  undefined1 local_390;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  pUVar4 = UDS_LogManager::GetInst();
  if (pUVar4 != (UDS_LogManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    local_388._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_388,"UDS_CCSAIManager::OnRecv_LogoutRequest",0x26,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Display,local_388.Ptr,0x221,L"[CCSAI] OnRecv_LogoutRequest.");
    if ((void *)local_388._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_388._padding_);
    }
  }
  (this->AIServerLoginInfo).SelectedCharID = 0;
  piVar1 = &(this->AIServerLoginInfo).DeckCharID.ArrayMax;
  (this->AIServerLoginInfo).DeckCharID.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->AIServerLoginInfo).DeckCharID.AllocatorInstance,0,piVar1);
  }
  (this->AIServerLoginInfo).bIsLeader = false;
  (this->AIServerLoginInfo).GameID = -1;
  (this->AIServerLoginInfo).bIsRequestRaidPartyDungeonStart = false;
  (this->AIServerLoginInfo).bIsDungeonIn = false;
  (this->AIServerLoginInfo).DungeonInTime.Ticks = 0;
  FCCS_AICmdProcessInfo::ResetProcessInfo(&this->AICmdProcessInfo);
  if ((this->RegisterCharEntityToAIServerTimer).Handle != 0) {
    pFVar5 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar6 = FTimerManager::FindTimer(pFVar5,&this->RegisterCharEntityToAIServerTimer);
    if (pFVar6 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer
                (pFVar5,(FTimerHandle)(this->RegisterCharEntityToAIServerTimer).Handle);
    }
    (this->RegisterCharEntityToAIServerTimer).Handle = 0;
  }
  if ((this->RequestEnterDungeonTimer).Handle != 0) {
    pFVar5 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar6 = FTimerManager::FindTimer(pFVar5,&this->RequestEnterDungeonTimer);
    if (pFVar6 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer
                (pFVar5,(FTimerHandle)(this->RequestEnterDungeonTimer).Handle);
    }
    (this->RequestEnterDungeonTimer).Handle = 0;
  }
  ADS_PlayerController::GetPlayerController();
  bVar3 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> *)&local_3b8,(void *)0x0);
  if (!bVar3) {
    local_390 = 2;
    local_3a8._0_16_ = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    local_3a8._s_0.Z = 0.0;
    pAVar7 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_3b8);
    ADS_PlayerController::Input_MoveEnd(pAVar7,(FInputActionValue *)&local_3a8._s_0);
    pAVar7 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_3b8);
    ADS_PlayerController::ResetInputFlag(pAVar7);
  }
  FCCS_AICmdProcessInfo::UpdateProcessInfo(&this->AICmdProcessInfo);
  UDS_PlayerData::GetMainPlayerData();
  bVar3 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals(&local_3b0,(void *)0x0);
  if (bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_268._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_268,"UDS_CCSAIManager::OnRecv_LogoutRequest",0x26,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_268.Ptr,0x23b,L"[CCSAI] playerData is nullptr.");
      if ((void *)local_268._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_268._padding_);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1484106909542776260>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CCSAIManager.cpp"
                       ,0x23c,"false");
    if (bVar3) {
code_r0x00014bac1f48:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,this);
    this_00 = UDS_NetworkManager::GetInst();
    if (this_00 == (UDS_NetworkManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_CCSAIManager::OnRecv_LogoutRequest",0x26,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0x244,L"[CCSAI] netMng is nullptr.")
        ;
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1484106909542776251>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CCSAIManager.cpp"
                         ,0x245,"false");
      if (bVar3) goto code_r0x00014bac1f48;
    }
    else {
      UDS_NetworkManager::Disconnect(this_00,None);
    }
  }
  return;
}

// OnRecv_RaidPartyDungeonStartNotify @ 14bac1f80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_CCSAIManager::OnRecv_RaidPartyDungeonStartNotify(UDS_CCSAIManager *this)

{
  FTimerManager *pFVar1;
  FTimerData *pFVar2;
  
  if ((this->AIServerLoginInfo).bIsLeader == true) {
    RequestEnterDungeon(this);
    return;
  }
  if ((this->RequestEnterDungeonTimer).Handle != 0) {
    pFVar1 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar2 = FTimerManager::FindTimer(pFVar1,&this->RequestEnterDungeonTimer);
    if (pFVar2 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer
                (pFVar1,(FTimerHandle)(this->RequestEnterDungeonTimer).Handle);
    }
    (this->RequestEnterDungeonTimer).Handle = 0;
  }
  pFVar1 = FDS_TimerManager::Get((UObject *)0x0);
  FTimerManager::SetTimer<UDS_CCSAIManager>
            (pFVar1,&this->RequestEnterDungeonTimer,this,(pmf_17ca9015)0x14bac8940,__real_40a00000,
             false,__real_bf800000);
  return;
}

// OpenLoginWidget @ 14bac2ef0

void __thiscall UDS_CCSAIManager::OpenLoginWidget(UDS_CCSAIManager *this)

{
  UDS_CCSAI_LoginWidget::ShowWidget(true);
  return;
}

// PreDestroyed @ 14bac31d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_CCSAIManager::PreDestroyed(UDS_CCSAIManager *this)

{
  ACCSAIService *pAVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  FString *pFVar8;
  FName FStackX_8;
  FName FStackX_10;
  FName FStackX_18;
  FName FStackX_20;
  FString FStack_48;
  
  *(undefined1 *)&this->_padding_ = 1;
  if (this->bIsAIPlayMode != false) {
    return;
  }
  pAVar1 = (this->AIService).field0_0x0.DebugPtr;
  if ((pAVar1 == (ACCSAIService *)0x0) || ((this->AIServerAddr).Data.ArrayNum < 2))
  goto LAB_14ba9e08e;
  pcVar5 = strstr("&UDS_CCSAIManager::OnRecv_LoginRequest","::");
  pcVar7 = &DAT_00000002;
  if (pcVar5 == (char *)0x0) {
LAB_14ba9de3a:
    pcVar6 = &DAT_00000002;
LAB_14ba9de3d:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    do {
      pcVar6 = pcVar5;
      pcVar5 = strstr(pcVar6 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if (pcVar6 == (char *)0x0) goto LAB_14ba9de3a;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14ba9de3d;
  }
  ::FName::FName(&FStackX_8,pcVar6);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Remove
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pAVar1->OnLoginRequestReceived
             ,(UObject *)this,FStackX_8);
  pAVar1 = (this->AIService).field0_0x0.DebugPtr;
  pcVar5 = strstr("&UDS_CCSAIManager::OnRecv_LogoutRequest","::");
  if (pcVar5 == (char *)0x0) {
LAB_14ba9deda:
    pcVar6 = &DAT_00000002;
LAB_14ba9dedd:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    do {
      pcVar6 = pcVar5;
      pcVar5 = strstr(pcVar6 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if (pcVar6 == (char *)0x0) goto LAB_14ba9deda;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14ba9dedd;
  }
  ::FName::FName(&FStackX_10,pcVar6);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Remove
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &pAVar1->OnLogoutRequestReceived,(UObject *)this,FStackX_10);
  pAVar1 = (this->AIService).field0_0x0.DebugPtr;
  pcVar5 = strstr("&UDS_CCSAIManager::OnRecv_CharEntityRegistrationResponse","::");
  if (pcVar5 == (char *)0x0) {
LAB_14ba9df7b:
    pcVar6 = &DAT_00000002;
LAB_14ba9df7e:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    do {
      pcVar6 = pcVar5;
      pcVar5 = strstr(pcVar6 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if (pcVar6 == (char *)0x0) goto LAB_14ba9df7b;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14ba9df7e;
  }
  ::FName::FName(&FStackX_18,pcVar6);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Remove
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &pAVar1->OnCharEntityRegistrationResponse,(UObject *)this,FStackX_18);
  pAVar1 = (this->AIService).field0_0x0.DebugPtr;
  pcVar5 = strstr("&UDS_CCSAIManager::OnRecv_AICommand","::");
  if (pcVar5 == (char *)0x0) {
LAB_14ba9e02a:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    do {
      pcVar6 = pcVar5;
      pcVar5 = strstr(pcVar6 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if ((pcVar6 == (char *)0x0) || (pcVar7 = pcVar6 + 2, pcVar6[2] == '0')) goto LAB_14ba9e02a;
  }
  ::FName::FName(&FStackX_20,pcVar7);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Remove
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pAVar1->OnAICommandReceived,
             (UObject *)this,FStackX_20);
LAB_14ba9e08e:
  pAVar1 = (this->AIService).field0_0x0.DebugPtr;
  if (pAVar1 != (ACCSAIService *)0x0) {
    AActor::Destroy((AActor *)pAVar1,false,true);
    (this->AIService).field0_0x0.DebugPtr = (ACCSAIService *)0x0;
  }
  ::FString::FString(&FStack_48,"");
  pFVar8 = &this->AIServerAddr;
  if (pFVar8 != &FStack_48) {
    pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar8->Data).AllocatorInstance.Data = FStack_48.Data.AllocatorInstance.Data;
    (this->AIServerAddr).Data.ArrayNum = FStack_48.Data.ArrayNum;
    (this->AIServerAddr).Data.ArrayMax = FStack_48.Data.ArrayMax;
    FStack_48.Data.ArrayNum = 0;
    FStack_48.Data.ArrayMax = 0;
    FStack_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
  }
  return;
}

// PrintDungeonInTime @ 14bac31f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_CCSAIManager::PrintDungeonInTime(UDS_CCSAIManager *this)

{
  longlong local_res8;
  FTimespan local_res10 [3];
  FString local_28;
  FString local_18;
  
  if ((this->AIServerLoginInfo).bIsDungeonIn != false) {
    UDS_TimeUtilManager::GetCurrentServerDateTime();
    local_res10[0].Ticks = local_res8 - (this->AIServerLoginInfo).DungeonInTime.Ticks;
    UDS_TimeUtilManager::ConvertStringFromTimespan(&local_28,local_res10,HourSec,false);
    if (GEngine != (UEngine *)0x0) {
      ::FString::PrintfImpl(&local_18,L"%s");
      UEngine::AddOnScreenDebugMessage
                (GEngine,0xfa1,__real_447a0000,FColor::Cyan,&local_18,true,
                 &UE::Math::TVector2<double>::UnitVector);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// RegisterCharEntityToAIServer @ 14bac3fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_CCSAIManager::RegisterCharEntityToAIServer(UDS_CCSAIManager *this)

{
  ACCSAIService *this_00;
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  undefined1 auStackY_628 [32];
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_5e8;
  float local_5d8 [2];
  FWeakObjectPtr local_5d0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_628;
  this_00 = (this->AIService).field0_0x0.DebugPtr;
  if (this_00 == (ACCSAIService *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_5c8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_5c8,"UDS_CCSAIManager::RegisterCharEntityToAIServer",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_5c8.Ptr,0x2b0,L"[CCSAI] AIService is nullptr.");
      if ((void *)local_5c8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_5c8._padding_);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1484106909542776143>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CCSAIManager.cpp"
                       ,0x2b1,"false");
    if (bVar3) {
code_r0x00014bac4171:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    bVar3 = ACCSAIService::IsConnected(this_00);
    if (bVar3) {
      local_5d8[0] = 0.0;
      FCCS_AICmdProcessInfo::SetCameraYaw(&this->AICmdProcessInfo,local_5d8);
      local_5e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_5e8.ArrayNum = 0;
      local_5e8.ArrayMax = 0;
      UDS_PlayerData::GetMainPlayerData();
      bVar3 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_5d0,(void *)0x0);
      if (bVar3) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_388._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_388,"UDS_CCSAIManager::RegisterCharEntityToAIServer",0x2e,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,local_388.Ptr,0x2c5,L"[CCSAI] playerData is nullptr.");
          if ((void *)local_388._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_388._padding_);
          }
        }
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1484106909542776122>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CCSAIManager.cpp"
                           ,0x2c6,"false");
        if (bVar3) {
code_r0x00014bac43f3:
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        pUVar6 = FWeakObjectPtr::Get(&local_5d0);
        uVar1 = *(undefined8 *)&pUVar6[8].field_0x10;
        iVar4 = local_5e8.ArrayNum;
        if (local_5e8.ArrayNum == local_5e8.ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_5e8.AllocatorInstance,&local_5e8.ArrayMax);
        }
        local_5e8.ArrayNum = iVar4 + 1;
        *(undefined8 *)(local_5e8.AllocatorInstance.Data + (longlong)iVar4 * 8) = uVar1;
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_268._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_268,"UDS_CCSAIManager::RegisterCharEntityToAIServer",0x2e,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Display,local_268.Ptr,0x2cc,
                     L"[CCSAI] Request RegisterCharEntityToAIServer. (charEntityIDs.Num(): %d)");
          if ((void *)local_268._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_268._padding_);
          }
        }
        bVar3 = ACCSAIService::RegisterCharEntityID
                          ((this->AIService).field0_0x0.DebugPtr,&local_5e8);
        if (!bVar3) {
          pUVar5 = UDS_LogManager::GetInst();
          if (pUVar5 != (UDS_LogManager *)0x0) {
            pUVar5 = UDS_LogManager::GetInst();
            local_148._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_148,"UDS_CCSAIManager::RegisterCharEntityToAIServer",0x2e,Yes);
            UDS_LogManager::PrintLog
                      (pUVar5,1,Warning,local_148.Ptr,0x2cf,
                       L"[CCSAI] RegisterCharEntityToAIServer failed.");
            if ((void *)local_148._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_148._padding_);
            }
          }
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_1484106909542776112>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CCSAIManager.cpp"
                             ,0x2d0,"false");
          if (bVar3) goto code_r0x00014bac43f3;
        }
      }
      if (local_5e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5e8.AllocatorInstance.Data);
      }
    }
    else {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_4a8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_4a8,"UDS_CCSAIManager::RegisterCharEntityToAIServer",0x2e,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_4a8.Ptr,0x2b7,L"[CCSAI] AIService is not connected.");
        if ((void *)local_4a8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_4a8._padding_);
        }
      }
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1484106909542776136>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CCSAIManager.cpp"
                         ,0x2b8,"false");
      if (bVar3) goto code_r0x00014bac4171;
    }
  }
  return;
}

// RequestEnterDungeon @ 14bac8940

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

void __thiscall UDS_CCSAIManager::RequestEnterDungeon(UDS_CCSAIManager *this)

{
  FTimerHandle *pFVar1;
  FTimerManager *this_00;
  FTimerData *pFVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pFVar1 = &this->RequestEnterDungeonTimer;
  if (pFVar1->Handle != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar2 = FTimerManager::FindTimer(this_00,pFVar1);
    if (pFVar2 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_00,(FTimerHandle)pFVar1->Handle);
    }
    pFVar1->Handle = 0;
  }
  pUVar3 = UDS_LogManager::GetInst();
  if (pUVar3 != (UDS_LogManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_CCSAIManager::RequestEnterDungeon",0x25,Yes);
    UDS_LogManager::PrintLog
              (pUVar3,1,Display,local_138.Ptr,899,L"[CCSAI] RequestRaidPartyInDungeon.");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  FDS_RaidPartyService::RequestRaidPartyInDungeon();
  return;
}

// Reset @ 14bac9640

void __thiscall UDS_CCSAIManager::Reset(UDS_CCSAIManager *this)

{
  return;
}

// SpawnAIService @ 14bace740

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

void __thiscall UDS_CCSAIManager::SpawnAIService(UDS_CCSAIManager *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UWorld *this_00;
  UClass *pUVar4;
  ACCSAIService *pAVar5;
  FString *pFVar6;
  UDS_LogManager *pUVar7;
  longlong *plVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  undefined1 auStackY_1f8 [32];
  FString local_1c8;
  FString local_1b8;
  undefined1 local_1a8 [112];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if ((this->AIService).field0_0x0.DebugPtr == (ACCSAIService *)0x0) {
    FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_1a8);
    local_1a8[0x30] = AlwaysSpawn;
    this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    pUVar4 = Z_Construct_UClass_ACCSAIService_NoRegister();
    pAVar5 = (ACCSAIService *)
             UWorld::SpawnActor(this_00,pUVar4,(TVector<double> *)0x0,(TRotator<double> *)0x0,
                                (FActorSpawnParameters *)local_1a8);
    if (pAVar5 == (ACCSAIService *)0x0) {
      pAVar5 = (ACCSAIService *)0x0;
    }
    else {
      pUVar4 = Z_Construct_UClass_ACCSAIService_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(pAVar5->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        pFVar6 = GetTypeName<ACCSAIService>(&local_1c8);
        pwVar10 = L"";
        if ((pFVar6->Data).ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
        }
        pFVar6 = GetFullNameForCastLogError<AActor>(&local_1b8,(AActor *)pAVar5);
        if ((pFVar6->Data).ArrayNum != 0) {
          pwVar10 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar10,pwVar9);
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar5 != (ACCSAIService *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar5);
    }
    (this->AIService).field0_0x0.DebugPtr = pAVar5;
    if (local_1a8._64_8_ != 0) {
      plVar8 = (longlong *)(local_1a8 + 0x50);
      if ((longlong *)local_1a8._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_1a8._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if ((this->AIService).field0_0x0.DebugPtr == (ACCSAIService *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_CCSAIManager::SpawnAIService",0x20,Yes);
        UDS_LogManager::PrintLog
                  (pUVar7,1,Warning,local_138.Ptr,0x3e9,L"[CCSAI] AIService is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1484106909542775830>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CCSAIManager.cpp"
                         ,0x3ea,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// StartLogin @ 14bacee20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_CCSAIManager::StartLogin(UDS_CCSAIManager *this)

{
  FScriptContainerElement *pFVar1;
  ACCSAIService *pAVar2;
  code *pcVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  char *pcVar6;
  UDS_CCSAIManager *pUVar7;
  UObject *pUVar8;
  UFunction *pUVar9;
  char *pcVar10;
  FString *pFVar11;
  FWeakObjectPtr *pFVar12;
  char *pcVar13;
  UDS_CCSAIManager *pUVar14;
  FWeakObjectPtr *pFVar15;
  undefined1 auStackY_8a8 [32];
  <lambda_1> <Stack_865;
  undefined1 uStack_864;
  undefined1 uStack_863;
  undefined1 uStack_862;
  <lambda_1> <Stack_861;
  undefined1 uStack_860;
  undefined1 uStack_85f;
  undefined1 uStack_85e;
  FString FStack_858;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_848;
  FWeakObjectPtr FStack_840;
  FName FStack_838;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_830;
  FWeakObjectPtr FStack_828;
  FName FStack_820;
  TScriptDelegate<FNotThreadSafeDelegateMode> TStack_818;
  TScriptDelegate<FNotThreadSafeDelegateMode> TStack_800;
  FString FStack_7e8;
  FName FStack_7d8;
  FName FStack_7d0;
  FName FStack_7c8;
  FName FStack_7c0;
  FName FStack_7b8;
  UDS_CCSAIManager *pUStack_7b0;
  FName *pFStack_7a8;
  FName FStack_7a0;
  UDS_CCSAIManager *pUStack_798;
  FName *pFStack_790;
  FName FStack_788;
  UDS_CCSAIManager *pUStack_780;
  FName *pFStack_778;
  FName FStack_770;
  FName FStack_768;
  FName *pFStack_760;
  UDS_CCSAIManager *pUStack_758;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> TStack_750;
  FString FStack_740;
  FString FStack_730;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> TStack_720;
  FDestructionSentinel FStack_710;
  FDestructionSentinel FStack_6f8;
  char acStack_6e0 [8];
  char acStack_6d8 [8];
  char acStack_6d0 [8];
  FReadAccessScope FStack_6c8;
  FReadAccessScope FStack_6b0;
  FReadAccessScope FStack_698;
  FReadAccessScope FStack_680;
  FReadAccessScope FStack_668;
  FReadAccessScope FStack_650;
  FReadAccessScope FStack_638;
  FReadAccessScope FStack_620;
  FReadAccessScope FStack_608;
  FReadAccessScope FStack_5f0;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_5d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_158;
  ulonglong uStack_38;
  
  if (this->bIsAIPlayMode != false) {
    UDS_CCSAI_LoginWidget::ShowWidget(true);
    return;
  }
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_8a8;
  if ((this->AIService).field0_0x0.DebugPtr == (ACCSAIService *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      TStack_5d8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_5d8,"UDS_CCSAIManager::ConnectToAIServer",0x23,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,TStack_5d8.Ptr,0x1c8,L"[CCSAI] AIService is nullptr.");
      if ((void *)TStack_5d8._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_5d8._padding_);
      }
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1484106909542776375>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CCSAIManager.cpp"
                       ,0x1c9,"false");
    if (!bVar4) {
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar11 = &this->AIServerAddr;
  if (1 < (this->AIServerAddr).Data.ArrayNum) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    TStack_4b8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_4b8,"UDS_CCSAIManager::ConnectToAIServer",0x23,Yes);
    UDS_LogManager::PrintLog
              (pUVar5,1,Warning,TStack_4b8.Ptr,0x1d0,
               L"[CCSAI] You are already connected to AIServer.");
    if ((void *)TStack_4b8._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)TStack_4b8._padding_);
    return;
  }
  ::FString::FString(&FStack_858,"");
  UKismetSystemLibrary::GetCommandLine(&FStack_730);
  ::FString::FString(&FStack_740,"AIServer=");
  bVar4 = UKismetSystemLibrary::ParseParamValue(&FStack_730,&FStack_740,&FStack_858);
  if (FStack_740.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_740.Data.AllocatorInstance.Data);
  }
  if (!bVar4) {
    ::FString::operator=(&FStack_858,L"212.129.230.156:34000");
  }
  if (FStack_730.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_730.Data.AllocatorInstance.Data);
  }
  pUVar14 = (UDS_CCSAIManager *)0x0;
  if (pFVar11 != &FStack_858) {
    pFVar1 = (pFVar11->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar11->Data).AllocatorInstance.Data = FStack_858.Data.AllocatorInstance.Data;
    (this->AIServerAddr).Data.ArrayNum = FStack_858.Data.ArrayNum;
    (this->AIServerAddr).Data.ArrayMax = FStack_858.Data.ArrayMax;
    FStack_858.Data.ArrayNum = 0;
    FStack_858.Data.ArrayMax = 0;
    FStack_858.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (FStack_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_858.Data.AllocatorInstance.Data);
  }
  pUVar5 = UDS_LogManager::GetInst();
  if (pUVar5 != (UDS_LogManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    TStack_398._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_398,"UDS_CCSAIManager::ConnectToAIServer",0x23,Yes);
    UDS_LogManager::PrintLog
              (pUVar5,1,Display,TStack_398.Ptr,0x1d5,L"[CCSAI] Request ConnectToAIServer. (%s)");
    if ((void *)TStack_398._padding_ != (void *)0x0) {
      FMemory::Free((void *)TStack_398._padding_);
    }
  }
  bVar4 = ACCSAIService::ConnectToServer((this->AIService).field0_0x0.DebugPtr,pFVar11,true);
  if (!bVar4) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      TStack_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_158,"UDS_CCSAIManager::ConnectToAIServer",0x23,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,TStack_158.Ptr,0x1ed,L"[CCSAI] ConnectToAIServer failed.");
      if ((void *)TStack_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_158._padding_);
      }
    }
    ::FString::FString(&FStack_7e8,"");
    pFVar11 = &this->AIServerAddr;
    if (pFVar11 != &FStack_7e8) {
      pFVar1 = (pFVar11->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (pFVar11->Data).AllocatorInstance.Data = FStack_7e8.Data.AllocatorInstance.Data;
      (this->AIServerAddr).Data.ArrayNum = FStack_7e8.Data.ArrayNum;
      (this->AIServerAddr).Data.ArrayMax = FStack_7e8.Data.ArrayMax;
      FStack_7e8.Data.ArrayNum = 0;
      FStack_7e8.Data.ArrayMax = 0;
      FStack_7e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (FStack_7e8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(FStack_7e8.Data.AllocatorInstance.Data);
    return;
  }
  pUVar5 = UDS_LogManager::GetInst();
  if (pUVar5 != (UDS_LogManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    TStack_278._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_278,"UDS_CCSAIManager::ConnectToAIServer",0x23,Yes);
    UDS_LogManager::PrintLog
              (pUVar5,1,Display,TStack_278.Ptr,0x1d8,L"[CCSAI] ConnectToAIServer succeeded.");
    if ((void *)TStack_278._padding_ != (void *)0x0) {
      FMemory::Free((void *)TStack_278._padding_);
    }
  }
  pAVar2 = (this->AIService).field0_0x0.DebugPtr;
  pcVar6 = strstr("&UDS_CCSAIManager::OnRecv_LoginRequest","::");
  pcVar13 = &DAT_00000002;
  if (pcVar6 == (char *)0x0) {
LAB_14ba98f8a:
    pcVar10 = &DAT_00000002;
LAB_14ba98f8d:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    do {
      pcVar10 = pcVar6;
      pcVar6 = strstr(pcVar10 + 1,"::");
    } while (pcVar6 != (char *)0x0);
    if (pcVar10 == (char *)0x0) goto LAB_14ba98f8a;
    pcVar10 = pcVar10 + 2;
    if (*pcVar10 == '0') goto LAB_14ba98f8d;
  }
  ::FName::FName(&FStack_768,pcVar10);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pAVar2->OnLoginRequestReceived,&FStack_6c8);
  pFVar12 = *(FWeakObjectPtr **)&(pAVar2->OnLoginRequestReceived).field_0x8;
  pFVar15 = pFVar12 + (longlong)*(int *)&(pAVar2->OnLoginRequestReceived).field_0x10 * 2;
  for (; pFVar12 != pFVar15; pFVar12 = pFVar12 + 2) {
    if (((*(FName *)(pFVar12 + 1) == FStack_768) && (this != (UDS_CCSAIManager *)0x0)) &&
       (pUVar7 = (UDS_CCSAIManager *)FWeakObjectPtr::GetEvenIfUnreachable(pFVar12), this == pUVar7))
    {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_6c8);
      if (pFVar12 == (FWeakObjectPtr *)0x0) goto LAB_14ba9903b;
      goto LAB_14ba99220;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_6c8);
LAB_14ba9903b:
  pAVar2 = (this->AIService).field0_0x0.DebugPtr;
  pcVar6 = strstr("&UDS_CCSAIManager::OnRecv_LoginRequest","::");
  if (pcVar6 == (char *)0x0) {
LAB_14ba990a1:
    pcVar10 = &DAT_00000002;
LAB_14ba990a4:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    do {
      pcVar10 = pcVar6;
      pcVar6 = strstr(pcVar10 + 1,"::");
    } while (pcVar6 != (char *)0x0);
    if (pcVar10 == (char *)0x0) goto LAB_14ba990a1;
    pcVar10 = pcVar10 + 2;
    if (*pcVar10 == '0') goto LAB_14ba990a4;
  }
  ::FName::FName(&FStack_770,pcVar10);
  TStack_830.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  pUStack_758 = this;
  if (this == (UDS_CCSAIManager *)0x0) {
    pUStack_758 = pUVar14;
  }
  FStack_828.ObjectIndex = 0;
  FStack_828.ObjectSerialNumber = 0;
  FStack_820.ComparisonIndex.Value = 0;
  FStack_820.Number = 0;
  FStack_7d8 = FStack_770;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUStack_758 != (UDS_CCSAIManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUStack_758);
  }
  FWeakObjectPtr::operator=(&FStack_828,(FObjectPtr)&pUStack_758);
  FStack_820 = FStack_7d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&TStack_830,&FStack_6b0);
  if ((FStack_820 == (FName)0x0) ||
     (pUVar8 = FWeakObjectPtr::Get(&FStack_828), pUVar8 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&FStack_6b0);
LAB_14ba9917c:
    pFStack_760 = &FStack_7d8;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,FCCS_LoginRequest_const_&>::
    __Internal_BindDynamic<UDS_CCSAIManager>'::__l2::<lambda_1>::operator()(&pFStack_760);
  }
  else {
    pUVar9 = UObject::FindFunction(pUVar8,FStack_820);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&FStack_6b0);
    if (pUVar9 == (UFunction *)0x0) goto LAB_14ba9917c;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&TStack_830,&FStack_608);
  TStack_720.Object = FStack_828;
  TStack_720.FunctionName = FStack_820;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_608);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pAVar2->OnLoginRequestReceived,(FWriteAccessScope *)&FStack_710);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pAVar2->OnLoginRequestReceived).field_0x8,&<Stack_865,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pAVar2->OnLoginRequestReceived
             ,&TStack_720);
  if (FStack_710.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_710.Accessor,&FStack_710);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_830.AccessDetector);
LAB_14ba99220:
  pAVar2 = (this->AIService).field0_0x0.DebugPtr;
  pcVar6 = strstr("&UDS_CCSAIManager::OnRecv_LogoutRequest","::");
  if (pcVar6 == (char *)0x0) {
LAB_14ba9926a:
    pcVar10 = &DAT_00000002;
LAB_14ba9926d:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    do {
      pcVar10 = pcVar6;
      pcVar6 = strstr(pcVar10 + 1,"::");
    } while (pcVar6 != (char *)0x0);
    if (pcVar10 == (char *)0x0) goto LAB_14ba9926a;
    pcVar10 = pcVar10 + 2;
    if (*pcVar10 == '0') goto LAB_14ba9926d;
  }
  ::FName::FName(&FStack_7b8,pcVar10);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pAVar2->OnLogoutRequestReceived,&FStack_698);
  pFVar12 = *(FWeakObjectPtr **)&(pAVar2->OnLogoutRequestReceived).field_0x8;
  pFVar15 = pFVar12 + (longlong)*(int *)&(pAVar2->OnLogoutRequestReceived).field_0x10 * 2;
  for (; pFVar12 != pFVar15; pFVar12 = pFVar12 + 2) {
    uStack_864 = 0;
    if ((*(FName *)(pFVar12 + 1) == FStack_7b8) && (uStack_863 = 0, this != (UDS_CCSAIManager *)0x0)
       ) {
      uStack_862 = 0;
      pUVar7 = (UDS_CCSAIManager *)FWeakObjectPtr::GetEvenIfUnreachable(pFVar12);
      if (this == pUVar7) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&FStack_698);
        if (pFVar12 == (FWeakObjectPtr *)0x0) goto LAB_14ba9931f;
        goto LAB_14ba9948d;
      }
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_698);
LAB_14ba9931f:
  pAVar2 = (this->AIService).field0_0x0.DebugPtr;
  FStack_7d0 = UE::Delegates::Private::GetTrimmedMemberFunctionName(acStack_6e0);
  TStack_848.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_840.ObjectIndex = 0;
  FStack_840.ObjectSerialNumber = 0;
  pUStack_7b0 = this;
  if (this == (UDS_CCSAIManager *)0x0) {
    pUStack_7b0 = pUVar14;
  }
  FStack_838.ComparisonIndex.Value = 0;
  FStack_838.Number = 0;
  FStack_7d0 = *(FName *)FStack_7d0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUStack_7b0 != (UDS_CCSAIManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUStack_7b0);
  }
  FWeakObjectPtr::operator=(&FStack_840,(FObjectPtr)&pUStack_7b0);
  FStack_838 = FStack_7d0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&TStack_848,&FStack_680);
  if ((FStack_838 == (FName)0x0) ||
     (pUVar8 = FWeakObjectPtr::Get(&FStack_840), pUVar8 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&FStack_680);
LAB_14ba993f0:
    pFStack_7a8 = &FStack_7d0;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,FCCS_LogoutRequest_const_&>::
    __Internal_BindDynamic<UDS_CCSAIManager>'::__l2::<lambda_1>::operator()(&pFStack_7a8);
  }
  else {
    pUVar9 = UObject::FindFunction(pUVar8,FStack_838);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&FStack_680);
    if (pUVar9 == (UFunction *)0x0) goto LAB_14ba993f0;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&TStack_848,&FStack_5f0);
  TStack_750.Object = FStack_840;
  TStack_750.FunctionName = FStack_838;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_5f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pAVar2->OnLogoutRequestReceived,(FWriteAccessScope *)&FStack_6f8);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pAVar2->OnLogoutRequestReceived).field_0x8,&<Stack_861,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &pAVar2->OnLogoutRequestReceived,&TStack_750);
  if (FStack_6f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_6f8.Accessor,&FStack_6f8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_848.AccessDetector);
LAB_14ba9948d:
  pAVar2 = (this->AIService).field0_0x0.DebugPtr;
  pcVar6 = strstr("&UDS_CCSAIManager::OnRecv_CharEntityRegistrationResponse","::");
  if (pcVar6 == (char *)0x0) {
LAB_14ba994da:
    pcVar10 = &DAT_00000002;
LAB_14ba994dd:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    do {
      pcVar10 = pcVar6;
      pcVar6 = strstr(pcVar10 + 1,"::");
    } while (pcVar6 != (char *)0x0);
    if (pcVar10 == (char *)0x0) goto LAB_14ba994da;
    pcVar10 = pcVar10 + 2;
    if (*pcVar10 == '0') goto LAB_14ba994dd;
  }
  ::FName::FName(&FStack_7a0,pcVar10);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pAVar2->OnCharEntityRegistrationResponse,&FStack_668);
  pFVar12 = *(FWeakObjectPtr **)&(pAVar2->OnCharEntityRegistrationResponse).field_0x8;
  pFVar15 = pFVar12 + (longlong)*(int *)&(pAVar2->OnCharEntityRegistrationResponse).field_0x10 * 2;
  for (; pFVar12 != pFVar15; pFVar12 = pFVar12 + 2) {
    uStack_860 = 0;
    if ((*(FName *)(pFVar12 + 1) == FStack_7a0) && (uStack_85f = 0, this != (UDS_CCSAIManager *)0x0)
       ) {
      uStack_85e = 0;
      pUVar7 = (UDS_CCSAIManager *)FWeakObjectPtr::GetEvenIfUnreachable(pFVar12);
      if (this == pUVar7) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&FStack_668);
        if (pFVar12 == (FWeakObjectPtr *)0x0) goto LAB_14ba9958f;
        goto LAB_14ba9967d;
      }
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_668);
LAB_14ba9958f:
  pAVar2 = (this->AIService).field0_0x0.DebugPtr;
  FStack_7c8 = UE::Delegates::Private::GetTrimmedMemberFunctionName(acStack_6d8);
  TStack_818._padding_ = 0;
  TStack_818.Object.ObjectIndex = 0;
  TStack_818.Object.ObjectSerialNumber = 0;
  pUStack_798 = this;
  if (this == (UDS_CCSAIManager *)0x0) {
    pUStack_798 = pUVar14;
  }
  TStack_818.FunctionName.ComparisonIndex.Value = 0;
  TStack_818.FunctionName.Number = 0;
  FStack_7c8 = *(FName *)FStack_7c8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUStack_798 != (UDS_CCSAIManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUStack_798);
  }
  FWeakObjectPtr::operator=(&TStack_818.Object,(FObjectPtr)&pUStack_798);
  TStack_818.FunctionName = FStack_7c8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&TStack_818,&FStack_650);
  if ((TStack_818.FunctionName == (FName)0x0) ||
     (pUVar8 = FWeakObjectPtr::Get(&TStack_818.Object), pUVar8 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&FStack_650);
LAB_14ba99653:
    pFStack_790 = &FStack_7c8;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,FCCS_CharEntityRegistrationResponse_const_&>
    ::__Internal_BindDynamic<UDS_CCSAIManager>'::__l2::<lambda_1>::operator()(&pFStack_790);
  }
  else {
    pUVar9 = UObject::FindFunction(pUVar8,TStack_818.FunctionName);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&FStack_650);
    if (pUVar9 == (UFunction *)0x0) goto LAB_14ba99653;
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Add
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &pAVar2->OnCharEntityRegistrationResponse,&TStack_818);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&TStack_818);
LAB_14ba9967d:
  pAVar2 = (this->AIService).field0_0x0.DebugPtr;
  pcVar6 = strstr("&UDS_CCSAIManager::OnRecv_AICommand","::");
  if (pcVar6 == (char *)0x0) {
LAB_14ba996ca:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    do {
      pcVar10 = pcVar6;
      pcVar6 = strstr(pcVar10 + 1,"::");
    } while (pcVar6 != (char *)0x0);
    if ((pcVar10 == (char *)0x0) || (pcVar13 = pcVar10 + 2, pcVar10[2] == '0')) goto LAB_14ba996ca;
  }
  ::FName::FName(&FStack_788,pcVar13);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pAVar2->OnAICommandReceived,
             &FStack_638);
  pFVar12 = *(FWeakObjectPtr **)&(pAVar2->OnAICommandReceived).field_0x8;
  pFVar15 = pFVar12 + (longlong)*(int *)&(pAVar2->OnAICommandReceived).field_0x10 * 2;
  for (; pFVar12 != pFVar15; pFVar12 = pFVar12 + 2) {
    if (((*(FName *)(pFVar12 + 1) == FStack_788) && (this != (UDS_CCSAIManager *)0x0)) &&
       (pUVar7 = (UDS_CCSAIManager *)FWeakObjectPtr::GetEvenIfUnreachable(pFVar12), this == pUVar7))
    {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_638);
      if (pFVar12 != (FWeakObjectPtr *)0x0) {
        return;
      }
      goto LAB_14ba99771;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_638);
LAB_14ba99771:
  pAVar2 = (this->AIService).field0_0x0.DebugPtr;
  FStack_7c0 = UE::Delegates::Private::GetTrimmedMemberFunctionName(acStack_6d0);
  TStack_800._padding_ = 0;
  TStack_800.Object.ObjectIndex = 0;
  TStack_800.Object.ObjectSerialNumber = 0;
  TStack_800.FunctionName.ComparisonIndex.Value = 0;
  TStack_800.FunctionName.Number = 0;
  FStack_7c0 = *(FName *)FStack_7c0;
  pUStack_780 = this;
  if (this == (UDS_CCSAIManager *)0x0) {
    pUStack_780 = pUVar14;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUStack_780 != (UDS_CCSAIManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUStack_780);
  }
  FWeakObjectPtr::operator=(&TStack_800.Object,(FObjectPtr)&pUStack_780);
  TStack_800.FunctionName = FStack_7c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&TStack_800,&FStack_620);
  if ((TStack_800.FunctionName == (FName)0x0) ||
     (pUVar8 = FWeakObjectPtr::Get(&TStack_800.Object), pUVar8 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&FStack_620);
  }
  else {
    pUVar9 = UObject::FindFunction(pUVar8,TStack_800.FunctionName);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&FStack_620);
    if (pUVar9 != (UFunction *)0x0) goto LAB_14ba9987a;
  }
  pFStack_778 = &FStack_7c0;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,FCCS_AICmd_const_&>::
  __Internal_BindDynamic<UDS_CCSAIManager>'::__l2::<lambda_1>::operator()(&pFStack_778);
LAB_14ba9987a:
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Add
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pAVar2->OnAICommandReceived,
             &TStack_800);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&TStack_800);
  return;
}

// Update @ 14bad3020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_CCSAIManager::Update(UDS_CCSAIManager *this,float *param_1)

{
  ACCSAIService *this_00;
  bool bVar1;
  longlong local_res8;
  FTimespan local_res18 [2];
  FString local_28;
  FString local_18;
  
  if (this->bIsAIPlayMode == false) {
    this_00 = (this->AIService).field0_0x0.DebugPtr;
    if (this_00 == (ACCSAIService *)0x0) {
      return;
    }
    bVar1 = ACCSAIService::IsConnected(this_00);
    if (!bVar1) {
      return;
    }
    if ((this->AICmdProcessInfo).bIsActivated == true) {
      FCCS_AICmdProcessInfo::UpdateProcessInfo(&this->AICmdProcessInfo);
    }
    UpdateAbleList(this);
  }
  CheckRaidPartyMemberState(this);
  if ((this->AIServerLoginInfo).bIsDungeonIn != false) {
    UDS_TimeUtilManager::GetCurrentServerDateTime();
    local_res18[0].Ticks = local_res8 - (this->AIServerLoginInfo).DungeonInTime.Ticks;
    UDS_TimeUtilManager::ConvertStringFromTimespan(&local_28,local_res18,HourSec,false);
    if (GEngine != (UEngine *)0x0) {
      ::FString::PrintfImpl(&local_18,L"%s");
      UEngine::AddOnScreenDebugMessage
                (GEngine,0xfa1,__real_447a0000,FColor::Cyan,&local_18,true,
                 &UE::Math::TVector2<double>::UnitVector);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// UpdateAbleList @ 14bad3fc0

void __thiscall UDS_CCSAIManager::UpdateAbleList(UDS_CCSAIManager *this)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UDS_SendPacketManager *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  ForAnyElementType local_28;
  int local_20 [2];
  
  pTVar1 = &this->AbleSkillList;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20[0] = 0;
  local_20[1] = 0;
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)&local_28 == pTVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->AbleSkillList).ArrayNum;
  if (iVar6 != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar6,&local_28,local_20,local_20 + 1);
    memcpy(local_28.Data + (longlong)iVar5 * 4,(pTVar1->AllocatorInstance).Data,(longlong)iVar6 << 2
          );
  }
  pTVar2 = &this->AbleVirtualKeyList;
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)&local_28 == pTVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->AbleVirtualKeyList).ArrayNum;
  if (iVar6 != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar6,&local_28,local_20,local_20 + 1);
    memcpy(local_28.Data + (longlong)iVar5 * 4,(pTVar2->AllocatorInstance).Data,(longlong)iVar6 << 2
          );
  }
  UpdateAbleSkillList(this);
  UpdateAbleVirtualKeyList(this);
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  if (&local_38 == pTVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->AbleSkillList).ArrayNum;
  if (iVar6 != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar6,&local_38.AllocatorInstance,&local_38.ArrayNum,&local_38.ArrayMax);
    memcpy(local_38.AllocatorInstance.Data + (longlong)iVar5 * 4,(pTVar1->AllocatorInstance).Data,
           (longlong)iVar6 << 2);
  }
  if (&local_38 == pTVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->AbleVirtualKeyList).ArrayNum;
  if (iVar6 != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar6,&local_38.AllocatorInstance,&local_38.ArrayNum,&local_38.ArrayMax);
    memcpy(local_38.AllocatorInstance.Data + (longlong)iVar5 * 4,(pTVar2->AllocatorInstance).Data,
           (longlong)iVar6 << 2);
  }
  if (local_20[0] == local_38.ArrayNum) {
    if (local_20[0] == 0) goto LAB_14bad421e;
    iVar6 = memcmp(local_28.Data,local_38.AllocatorInstance.Data,(longlong)local_20[0] << 2);
    if (iVar6 == 0) goto LAB_14bad421e;
  }
  this_00 = UDS_SendPacketManager::GetInst();
  UDS_SendPacketManager::SendCharacterAvailableSkillRequest(this_00,&local_38);
LAB_14bad421e:
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// UpdateAbleSkillList @ 14bad4260

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

void __thiscall UDS_CCSAIManager::UpdateAbleSkillList(UDS_CCSAIManager *this)

{
  longlong lVar1;
  code *pcVar2;
  float fVar3;
  TMap<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
  *pTVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  UDS_NormalAttackControlAbility *this_00;
  UDS_LogManager *pUVar10;
  UObject *pUVar11;
  UDS_AirWalkAbilityData *this_01;
  UDS_CharStateData *this_02;
  UDS_SkillData *pUVar12;
  UDS_SkillDataSet *this_03;
  ulong64 uVar13;
  TArray<int,TSizedDefaultAllocator<32>_> *this_04;
  int *piVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint *puVar22;
  uint uVar23;
  undefined1 auStackY_628 [32];
  FWeakObjectPtr local_5e8;
  FWeakObjectPtr local_5e0;
  int local_5d8;
  int local_5d4;
  TArray<int,TSizedDefaultAllocator<32>_> local_5d0;
  FString local_5c0;
  FString local_5b0;
  FWeakObjectPtr local_5a0;
  FString local_598;
  FString local_588;
  int local_578;
  EDS_CharState local_570;
  TMap<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
  *local_568;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_560;
  TMap<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
  *local_540;
  uint uStack_538;
  uint uStack_534;
  undefined1 *local_530;
  undefined4 uStack_528;
  uint uStack_524;
  uint local_520;
  undefined4 uStack_51c;
  FString local_510;
  FString local_500 [2];
  undefined4 local_4d4;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_628;
  if (-1 < (this->AIServerLoginInfo).GameID) {
    if (((((this->CharacterBaseTable == (FDS_CharacterBaseTableRow *)0x0) ||
          (bVar5 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                             (&this->CharStateData,(void *)0x0), bVar5)) ||
         (bVar5 = TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr>::UEOpEquals
                            (&this->AirWalkAbilityData,(void *)0x0), bVar5)) ||
        ((bVar5 = TWeakObjectPtr<UDS_NormalAttackControlAbility,FWeakObjectPtr>::UEOpEquals
                            (&this->NormalAttackControlAbility,(void *)0x0), bVar5 ||
         (bVar5 = TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr>::UEOpEquals
                            (&this->SkillDataSet,(void *)0x0), bVar5)))) ||
       (*(int *)&(this->SkillDataMap).field_0x8 == *(int *)&(this->SkillDataMap).field_0x34)) {
      pUVar10 = UDS_LogManager::GetInst();
      if (pUVar10 != (UDS_LogManager *)0x0) {
        pUVar10 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_CCSAIManager::UpdateAbleSkillList",0x25,Yes);
        UDS_LogManager::PrintLog
                  (pUVar10,1,Warning,local_168.Ptr,0x4d4,
                   L"[CCSAI] There is no data required to create a list of available skills.");
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1484106909542775595>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CCSAIManager.cpp"
                         ,0x4d5,"false");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      this_00 = (UDS_NormalAttackControlAbility *)
                FWeakObjectPtr::Get(&(this->NormalAttackControlAbility).WeakPtr);
      iVar7 = UDS_NormalAttackControlAbility::GetAbleNormalAttackSkillID(this_00);
      this->AbleNormalAttackSkillID = iVar7;
      piVar14 = &(this->AbleSkillList).ArrayMax;
      uVar18 = 0;
      uVar19 = 0;
      uStack_538 = 0;
      (this->AbleSkillList).ArrayNum = 0;
      if (*piVar14 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->AbleSkillList).AllocatorInstance,0,piVar14);
      }
      local_568 = &this->SkillDataMap;
      local_5d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_560.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->SkillDataMap).field_0x10;
      local_5d0.ArrayNum = 0;
      local_5d0.ArrayMax = 0;
      uVar23 = *(uint *)&(this->SkillDataMap).field_0x28;
      uStack_534 = 1;
      uVar15 = uVar18;
      local_520 = uStack_538;
      if (uVar23 != 0) {
        puVar22 = *(uint **)&(this->SkillDataMap).field_0x20;
        uVar15 = (ulonglong)uVar23;
        if (puVar22 == (uint *)0x0) {
          puVar22 = (uint *)TStack_560.Array;
        }
        uVar8 = *puVar22;
        uVar20 = uVar18;
        uVar21 = uVar18;
        local_520 = uVar19;
        uStack_538 = uVar19;
        while (uVar8 == 0) {
          iVar7 = (int)uVar20;
          local_520 = (int)uVar21 + 0x20;
          uVar21 = (ulonglong)local_520;
          uStack_538 = iVar7 + 1;
          uVar20 = (ulonglong)uStack_538;
          if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_538)
          goto LAB_14bad440e;
          uVar8 = puVar22[(longlong)iVar7 + 1];
        }
        uStack_534 = -uVar8 & uVar8;
        uVar15 = (ulonglong)uStack_534 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        local_578 = (int)lVar17;
        uVar8 = (local_520 - 1) + local_578;
        if ((int)uVar23 < (int)uVar8) {
          uVar8 = uVar23;
        }
        uVar15 = (ulonglong)uVar8;
      }
LAB_14bad440e:
      uStack_528 = 0xffffffff;
      uStack_524 = (uint)uVar15;
      uStack_51c = local_4d4;
      TStack_560._padding_ = CONCAT44(uStack_534,uStack_538);
      TStack_560.UnvisitedBitMask = 0xffffffff;
      TStack_560._28_4_ = local_4d4;
      TStack_560.BaseBitIndex = local_520;
      local_540 = local_568;
      local_530 = (undefined1 *)TStack_560.Array;
      TStack_560.CurrentBitIndex = uStack_524;
      if ((int)uStack_524 < (int)uVar23) {
        do {
          pTVar4 = local_568;
          lVar17 = (longlong)(int)uVar15;
          local_5e8 = *(FWeakObjectPtr *)(*(longlong *)local_568 + 4 + (longlong)(int)uVar15 * 0x14)
          ;
          bVar5 = TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)&local_5e8,(void *)0x0)
          ;
          if (bVar5) {
            pUVar10 = UDS_LogManager::GetInst();
            if (pUVar10 != (UDS_LogManager *)0x0) {
              pUVar10 = UDS_LogManager::GetInst();
              local_4c8._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_4c8,"UDS_CCSAIManager::UpdateAbleSkillList",0x25,Yes);
              UDS_LogManager::PrintLog
                        (pUVar10,1,Warning,local_4c8.Ptr,0x4e4,L"[CCSAI] skillData is nullptr. (%d)"
                        );
              if ((void *)local_4c8._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_4c8._padding_);
              }
            }
            bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_1484106909542775579>,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CCSAIManager.cpp"
                               ,0x4e5,"false");
            if (bVar5) goto code_r0x00014bad48cd;
          }
          else {
            lVar1 = *(longlong *)pTVar4;
            pUVar11 = FWeakObjectPtr::Get(&local_5e8);
            cVar6 = (**(code **)(*(longlong *)pUVar11 + 0x2f8))(pUVar11);
            if (cVar6 == '\x01') {
              iVar7 = *(int *)(lVar1 + lVar17 * 0x14);
              if (this->CharacterBaseTable->ID_JumpSkill == iVar7) {
                pUVar11 = FWeakObjectPtr::Get(&(this->AirWalkAbilityData).WeakPtr);
                if ((pUVar11[4].field_0x20 != '\x01') &&
                   (pUVar11 = FWeakObjectPtr::Get(&(this->AirWalkAbilityData).WeakPtr),
                   pUVar11[4].field_0x20 != '\x02')) goto LAB_14bad493f;
                this_01 = (UDS_AirWalkAbilityData *)
                          FWeakObjectPtr::Get(&(this->AirWalkAbilityData).WeakPtr);
                bVar5 = UDS_AirWalkAbilityData::IsNextSkillPossible
                                  (this_01,*(int *)(lVar1 + lVar17 * 0x14));
              }
              else {
                if (this->CharacterBaseTable->ID_AirDashSkill == iVar7) {
                  pUVar10 = UDS_LogManager::GetInst();
                  if (pUVar10 != (UDS_LogManager *)0x0) {
                    pUVar10 = UDS_LogManager::GetInst();
                    local_3a8._padding_ = 0;
                    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                              (&local_3a8,"UDS_CCSAIManager::UpdateAbleSkillList",0x25,Yes);
                    UDS_LogManager::PrintLog
                              (pUVar10,1,Warning,local_3a8.Ptr,0x506,
                               L"[CCSAI] Try checking ID_AirDashSkill.");
                    if ((void *)local_3a8._padding_ != (void *)0x0) {
                      FMemory::Free((void *)local_3a8._padding_);
                    }
                  }
                  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<_1484106909542775545>,false,
                                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CCSAIManager.cpp"
                                     ,0x507,"false");
                  if (bVar5) goto code_r0x00014bad48cd;
                  goto LAB_14bad495f;
                }
                this_02 = (UDS_CharStateData *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
                local_570 = AirWalk;
                bVar5 = UDS_CharStateData::HasCharState(this_02,&local_570);
                bVar5 = !bVar5;
              }
              if (bVar5 != true) goto LAB_14bad493f;
              pUVar12 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_5e8);
              bVar5 = UDS_SkillData::IsPopupSkill(pUVar12);
              if (bVar5) {
                this_03 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&(this->SkillDataSet).WeakPtr);
                UDS_SkillDataSet::GetActivatedPopupSkill(this_03);
                bVar5 = TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals
                                  ((TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)&local_5a0,
                                   (void *)0x0);
                if ((bVar5) ||
                   (pUVar11 = FWeakObjectPtr::Get(&local_5a0),
                   *(int *)&pUVar11[2].field_0x1c != *(int *)(lVar1 + lVar17 * 0x14)))
                goto LAB_14bad493f;
              }
              pUVar11 = FWeakObjectPtr::Get(&local_5e8);
              if ((pUVar11[9].field_0x7 == '\0') &&
                 (this->AbleNormalAttackSkillID != *(int *)(lVar1 + lVar17 * 0x14)))
              goto LAB_14bad493f;
              pUVar11 = FWeakObjectPtr::Get(&local_5e8);
              cVar6 = pUVar11[9].field_0x8;
              if (cVar6 == '\x02') {
                pUVar12 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_5e8);
                iVar7 = *(int *)(lVar1 + lVar17 * 0x14);
                iVar9 = UDS_SkillData::GetMainSkillID(pUVar12);
                if (iVar7 == iVar9) {
                  pUVar11 = FWeakObjectPtr::Get(&local_5e8);
                  bVar5 = *(int *)(pUVar11 + 5) == 0;
                }
                else {
                  pUVar12 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_5e8);
                  iVar7 = UDS_SkillData::GetMainSkillID(pUVar12);
                  uVar13 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
                  UDS_SkillData::GetData((ulong64)&local_5e0,uVar13,SUB41(iVar7,0));
                  bVar5 = TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals
                                    ((TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)&local_5e0,
                                     (void *)0x0);
                  if (bVar5) {
                    pUVar10 = UDS_LogManager::GetInst();
                    if (pUVar10 != (UDS_LogManager *)0x0) {
                      pUVar10 = UDS_LogManager::GetInst();
                      pUVar12 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_5e8);
                      UDS_SkillData::GetMainSkillID(pUVar12);
                      local_288._padding_ = 0;
                      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                                (&local_288,"UDS_CCSAIManager::UpdateAbleSkillList",0x25,Yes);
                      UDS_LogManager::PrintLog
                                (pUVar10,1,Warning,local_288.Ptr,0x546,
                                 L"[CCSAI] mainSkillData is nullptr. (%d)");
                      if ((void *)local_288._padding_ != (void *)0x0) {
                        FMemory::Free((void *)local_288._padding_);
                      }
                    }
                    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                      (&bGEnsureHasExecuted<_1484106909542775481>,false,
                                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CCSAIManager.cpp"
                                       ,0x547,"false");
                    if (bVar5) {
code_r0x00014bad48cd:
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    goto LAB_14bad495f;
                  }
                  pUVar12 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_5e0);
                  pUVar11 = FWeakObjectPtr::Get(&local_5e0);
                  iVar7 = *(int *)(pUVar11 + 5);
                  iVar9 = UDS_SkillData::GetNextSubSkillID(pUVar12);
                  if (iVar7 != iVar9) goto LAB_14bad493f;
                  pUVar11 = FWeakObjectPtr::Get(&local_5e0);
                  bVar5 = *(int *)(pUVar11 + 5) == *(int *)(lVar1 + lVar17 * 0x14);
                }
joined_r0x00014bad4917:
                if (!bVar5) goto LAB_14bad493f;
              }
              else {
                if (cVar6 == '\x03') {
                  pUVar12 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_5e8);
                  bVar5 = UDS_SkillData::IsSkillActive(pUVar12);
                  bVar5 = !bVar5;
                  goto joined_r0x00014bad4917;
                }
                if (cVar6 == '\x05') {
                  pUVar12 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_5e8);
                  bVar5 = UDS_SkillData::IsSkillActive(pUVar12);
                  if (bVar5) {
                    pUVar12 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_5e8);
                    bVar5 = UDS_SkillData::CheckToggleEndWaitTime(pUVar12);
                    goto joined_r0x00014bad4917;
                  }
                }
              }
              pUVar11 = FWeakObjectPtr::Get(&local_5e8);
              piVar14 = &local_5d8;
              local_5d8 = *(int *)&pUVar11[2].field_0x1c;
              this_04 = &this->AbleSkillList;
            }
            else {
LAB_14bad493f:
              pUVar11 = FWeakObjectPtr::Get(&local_5e8);
              piVar14 = &local_5d4;
              local_5d4 = *(int *)&pUVar11[2].field_0x1c;
              this_04 = &local_5d0;
            }
            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>(this_04,piVar14);
          }
LAB_14bad495f:
          TStack_560.UnvisitedBitMask = TStack_560.UnvisitedBitMask & ~TStack_560._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_560);
          uVar15 = (ulonglong)(uint)TStack_560.CurrentBitIndex;
        } while (TStack_560.CurrentBitIndex < (TStack_560.Array)->NumBits);
      }
      if (GEngine != (UEngine *)0x0) {
        ::FString::FString(&local_588,"");
        iVar7 = (this->AbleSkillList).ArrayNum;
        if (0 < iVar7) {
          uVar15 = uVar18;
          uVar20 = uVar18;
          do {
            uVar8 = (uint)uVar15;
            uVar23 = uVar19;
            if ((int)uVar8 < (this->AbleSkillList).ArrayNum) {
              uVar23 = ~uVar8 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            local_5c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_5c0.Data.ArrayNum = 0;
            local_5c0.Data.ArrayMax = 0;
            ::FString::AppendInt
                      (&local_5c0,
                       *(int *)((this->AbleSkillList).AllocatorInstance.Data + uVar20 * 4));
            uVar23 = local_5c0.Data.ArrayNum - 1;
            if (local_5c0.Data.ArrayNum == 0) {
              uVar23 = uVar19;
            }
            ::FString::AppendChars
                      (&local_588,(wchar_t *)local_5c0.Data.AllocatorInstance.Data,uVar23);
            if (local_5c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_5c0.Data.AllocatorInstance.Data);
            }
            if (uVar8 != iVar7 - 1U) {
              ::FString::AppendChars(&local_588,L", ",2);
            }
            uVar15 = (ulonglong)(uVar8 + 1);
            uVar20 = uVar20 + 1;
          } while ((longlong)uVar20 < (longlong)iVar7);
        }
        ::FString::PrintfImpl(&local_510,L"[Able SkillList] %s");
        fVar3 = __real_447a0000;
        UEngine::AddOnScreenDebugMessage
                  (GEngine,0x1389,__real_447a0000,FColor::Yellow,&local_510,true,
                   &UE::Math::TVector2<double>::UnitVector);
        if (local_510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_510.Data.AllocatorInstance.Data);
        }
        ::FString::FString(&local_598,"");
        uVar15 = (ulonglong)local_5d0.ArrayNum;
        if (0 < local_5d0.ArrayNum) {
          uVar23 = local_5d0.ArrayNum - 1;
          uVar20 = uVar15;
          uVar21 = uVar18;
          while( true ) {
            uVar16 = (uint)uVar18;
            uVar8 = uVar19;
            if ((int)uVar16 < (int)uVar20) {
              uVar8 = ~uVar16 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            local_5b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_5b0.Data.ArrayNum = 0;
            local_5b0.Data.ArrayMax = 0;
            ::FString::AppendInt(&local_5b0,*(int *)(local_5d0.AllocatorInstance.Data + uVar21 * 4))
            ;
            uVar8 = local_5b0.Data.ArrayNum - 1;
            if (local_5b0.Data.ArrayNum == 0) {
              uVar8 = uVar19;
            }
            ::FString::AppendChars
                      (&local_598,(wchar_t *)local_5b0.Data.AllocatorInstance.Data,uVar8);
            if (local_5b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_5b0.Data.AllocatorInstance.Data);
            }
            if (uVar16 != uVar23) {
              ::FString::AppendChars(&local_598,L", ",2);
            }
            uVar18 = (ulonglong)(uVar16 + 1);
            uVar21 = uVar21 + 1;
            if ((longlong)uVar15 <= (longlong)uVar21) break;
            uVar20 = local_5d0._8_8_ & 0xffffffff;
          }
        }
        ::FString::PrintfImpl(local_500,L"[Unable SkillList] %s");
        UEngine::AddOnScreenDebugMessage
                  (GEngine,0x138a,fVar3,FColor::Red,local_500,true,
                   &UE::Math::TVector2<double>::UnitVector);
        if (local_500[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_500[0].Data.AllocatorInstance.Data);
        }
        if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_598.Data.AllocatorInstance.Data);
        }
        if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_588.Data.AllocatorInstance.Data);
        }
      }
      if (local_5d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5d0.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// UpdateAbleVirtualKeyList @ 14bad4d70

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

void __thiscall UDS_CCSAIManager::UpdateAbleVirtualKeyList(UDS_CCSAIManager *this)

{
  TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr> *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  void *_Src;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  UDS_SkillDataSet *pUVar8;
  UObject *pUVar9;
  FWeakObjectPtr *pFVar10;
  UDS_SkillData *pUVar11;
  ulong64 uVar12;
  UDS_QuickSlotDeckDataSet *this_01;
  UDS_QuickSlotDeckData *this_02;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> this_03;
  UDS_AirWalkAbilityData *pUVar13;
  UDS_LogManager *pUVar14;
  FScriptContainerElement *pFVar15;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar16;
  uint uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  ulonglong uVar20;
  EDS_AirWalkStep EVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  ForAnyElementType FVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  uint uVar29;
  undefined1 auStackY_318 [32];
  uint local_2d8;
  undefined1 local_2d4;
  undefined1 local_2d3;
  undefined1 local_2d2 [2];
  int local_2d0 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_2c8;
  TArray<int,TSizedDefaultAllocator<32>_> local_2b8;
  TArray<int,TSizedDefaultAllocator<32>_> local_2a8;
  FWeakObjectPtr local_298;
  FWeakObjectPtr local_290;
  TArray<int,TSizedDefaultAllocator<32>_> local_288;
  int local_278 [2];
  FWeakObjectPtr local_270;
  FString local_268;
  FString local_258;
  FWeakObjectPtr local_248;
  FWeakObjectPtr local_240;
  FWeakObjectPtr local_238;
  FString local_230;
  FString local_220;
  TSharedPtr<FDS_QuickSlotData,1> local_210;
  TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> local_200;
  UObject *local_1f8;
  ulong64 local_1f0;
  FString local_1e8;
  FString local_1d8 [2];
  undefined1 local_1b8 [72];
  int local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_318;
  if (-1 < (this->AIServerLoginInfo).GameID) {
    if ((this->CharacterBaseTable != (FDS_CharacterBaseTableRow *)0x0) &&
       (bVar6 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                          (&this->CharStateData,(void *)0x0), !bVar6)) {
      this_00 = &this->AirWalkAbilityData;
      bVar6 = TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0)
      ;
      if ((!bVar6) &&
         (((bVar6 = TWeakObjectPtr<UDS_NormalAttackControlAbility,FWeakObjectPtr>::UEOpEquals
                              (&this->NormalAttackControlAbility,(void *)0x0), !bVar6 &&
           (bVar6 = TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr>::UEOpEquals
                              (&this->SkillDataSet,(void *)0x0), !bVar6)) &&
          (*(int *)&(this->SkillDataMap).field_0x8 != *(int *)&(this->SkillDataMap).field_0x34)))) {
        uVar26 = 0;
        pTVar1 = &this->AbleVirtualKeyList;
        (this->AbleVirtualKeyList).ArrayNum = 0;
        if ((this->AbleVirtualKeyList).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&pTVar1->AllocatorInstance,0,&(this->AbleVirtualKeyList).ArrayMax);
        }
        local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2d8 = 1;
        local_2c8.ArrayNum = 0;
        local_2c8.ArrayMax = 0;
        do {
          if (((int)local_2d8 < 1) || (6 < (int)local_2d8)) {
            if (local_2d8 - 7 < 2) {
              local_2a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_2a8.ArrayNum = (this->CharacterBaseTable->ID_NormalAttack).ArrayNum;
              lVar24 = (longlong)local_2a8.ArrayNum;
              pFVar2 = (this->CharacterBaseTable->ID_NormalAttack).AllocatorInstance.Data;
              if (local_2a8.ArrayNum == 0) {
                local_2a8.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,local_2a8.ArrayNum,0,&local_2a8.AllocatorInstance,local_2a8.ArrayNum,
                           &local_2a8.ArrayMax);
                memcpy(local_2a8.AllocatorInstance.Data,pFVar2,lVar24 << 2);
              }
              TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                        (&local_2a8,&this->CharacterBaseTable->ID_JumpSkill);
              iVar7 = local_2a8.ArrayNum;
              uVar20 = (ulonglong)local_2a8.ArrayNum;
              pFVar2 = local_2a8.AllocatorInstance.Data + uVar20 * 4;
              FVar25.Data = local_2a8.AllocatorInstance.Data;
              while( true ) {
                if ((uint)uVar20 != iVar7) {
                  local_2d3 = 0;
                  `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                            (&local_2d3);
                  uVar20 = (ulonglong)(uint)local_2a8.ArrayNum;
                }
                if (FVar25.Data == pFVar2) break;
                pFVar15 = (this->AbleSkillList).AllocatorInstance.Data;
                pFVar3 = pFVar15 + (longlong)(this->AbleSkillList).ArrayNum * 4;
                if (pFVar15 != pFVar3) {
                  do {
                    pTVar16 = pTVar1;
                    if (*(int *)pFVar15 == *(int *)FVar25.Data) goto LAB_14bad528d;
                    pFVar15 = pFVar15 + 4;
                  } while (pFVar15 != pFVar3);
                }
                FVar25.Data = FVar25.Data + 4;
              }
              pTVar16 = &local_2c8;
LAB_14bad528d:
              TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                        (pTVar16,(int *)&local_2d8);
              if (local_2a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2a8.AllocatorInstance.Data);
              }
            }
            else {
              pTVar16 = pTVar1;
              if (local_2d8 == 9) {
                pUVar8 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&(this->SkillDataSet).WeakPtr);
                UDS_SkillDataSet::GetActivatedPopupSkill(pUVar8);
                bVar6 = TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals
                                  (&local_200,(void *)0x0);
                pTVar16 = &local_2c8;
                if (!bVar6) {
                  pTVar16 = pTVar1;
                }
              }
              else {
                if (local_2d8 == 10) {
                  local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_288.ArrayNum = 0;
                  local_288.ArrayMax = 0;
                  TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                            (&local_288,&this->CharacterBaseTable->ID_NotInputRoll);
                  TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                            (&local_288,&this->CharacterBaseTable->ID_InputRoll);
                  iVar7 = local_288.ArrayNum;
                  uVar20 = (ulonglong)local_288.ArrayNum;
                  pFVar2 = local_288.AllocatorInstance.Data + uVar20 * 4;
                  FVar25.Data = local_288.AllocatorInstance.Data;
                  while( true ) {
                    if ((int)uVar20 != iVar7) {
                      local_2d2[0] = 0;
                      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                                (local_2d2);
                      uVar20 = local_288._8_8_ & 0xffffffff;
                    }
                    if (FVar25.Data == pFVar2) break;
                    pFVar15 = (this->AbleSkillList).AllocatorInstance.Data;
                    pFVar3 = pFVar15 + (longlong)(this->AbleSkillList).ArrayNum * 4;
                    if (pFVar15 != pFVar3) {
                      do {
                        if (*(int *)pFVar15 == *(int *)FVar25.Data) goto LAB_14bad5384;
                        pFVar15 = pFVar15 + 4;
                      } while (pFVar15 != pFVar3);
                    }
                    FVar25.Data = FVar25.Data + 4;
                  }
                  pTVar16 = &local_2c8;
LAB_14bad5384:
                  TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                            (pTVar16,(int *)&local_2d8);
                  if (local_288.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_288.AllocatorInstance.Data);
                  }
                  goto LAB_14bad55b2;
                }
                if (local_2d8 - 0xb < 4) {
                  uVar17 = local_2d8 & 0xff;
                  local_2d0[0] = 0;
                  if (uVar17 == 0xb) {
                    local_2d0[0] = 1;
                  }
                  else if (uVar17 == 0xc) {
                    local_2d0[0] = 2;
                  }
                  else if (uVar17 == 0xd) {
                    local_2d0[0] = 3;
                  }
                  else if (uVar17 == 0xe) {
                    local_2d0[0] = 4;
                  }
                  TDS_DataSetGetter<UDS_QuickSlotDeckDataSet>::Get((ulong64)&local_240);
                  bVar6 = TWeakObjectPtr<UDS_QuickSlotDeckDataSet,FWeakObjectPtr>::UEOpEquals
                                    ((TWeakObjectPtr<UDS_QuickSlotDeckDataSet,FWeakObjectPtr> *)
                                     &local_240,(void *)0x0);
                  if (!bVar6) {
                    this_01 = (UDS_QuickSlotDeckDataSet *)FWeakObjectPtr::Get(&local_240);
                    UDS_QuickSlotDeckDataSet::GetCurrentQuickSlotDeckData(this_01);
                    bVar6 = TWeakObjectPtr<UDS_QuickSlotDeckData,FWeakObjectPtr>::UEOpEquals
                                      ((TWeakObjectPtr<UDS_QuickSlotDeckData,FWeakObjectPtr> *)
                                       &local_238,(void *)0x0);
                    if (!bVar6) {
                      this_02 = (UDS_QuickSlotDeckData *)FWeakObjectPtr::Get(&local_238);
                      UDS_QuickSlotDeckData::GetQuickSlotData(this_02,&local_210,local_2d0);
                      if (local_210.Object == (FDS_QuickSlotData *)0x0) {
LAB_14bad5461:
                        pTVar16 = &local_2c8;
                      }
                      else {
                        this_03 = FDS_QuickSlotData::GetQuickSlotItemData(local_210.Object);
                        pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_03.WeakPtr);
                        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                           (pUVar9 != (UObject *)0x0)) {
                          UE::GC::MarkAsReachable(pUVar9);
                        }
                        local_290.ObjectIndex = 0;
                        local_290.ObjectSerialNumber = 0;
                        local_1f8 = pUVar9;
                        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                           (pUVar9 != (UObject *)0x0)) {
                          UE::GC::MarkAsReachable(pUVar9);
                        }
                        FWeakObjectPtr::operator=(&local_290,(FObjectPtr)&local_1f8);
                        bVar6 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                                          ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_290
                                           ,(void *)0x0);
                        if (bVar6) goto LAB_14bad5461;
                        local_1f0 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
                        bVar6 = DS_ItemDataUtil::IsUsable
                                          ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_290,
                                           &local_1f0);
                        pTVar16 = &local_2c8;
                        if (bVar6) {
                          pTVar16 = pTVar1;
                        }
                      }
                      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                                (pTVar16,(int *)&local_2d8);
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline
                                (local_210.SharedReferenceCount.ReferenceController);
                      goto LAB_14bad55b2;
                    }
                  }
                }
                else if (local_2d8 - 0xf < 4) {
                  uVar17 = local_2d8 & 0xff;
                  if (uVar17 == 0xf) {
                    pUVar13 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
                    bVar6 = UDS_AirWalkAbilityData::IsNextStepPossible(pUVar13,Jump1);
                    if (bVar6) goto LAB_14bad559d;
                    pUVar13 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
                    EVar21 = Jump2;
                  }
                  else if (uVar17 == 0x10) {
                    pUVar13 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
                    EVar21 = Hovering;
                  }
                  else if (uVar17 == 0x11) {
                    pUVar13 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
                    EVar21 = AirDash;
                  }
                  else if (uVar17 == 0x12) {
                    pUVar13 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
                    EVar21 = UseSkillAirDash;
                  }
                  else {
                    pUVar13 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
                    EVar21 = Ready;
                  }
                  bVar6 = UDS_AirWalkAbilityData::IsNextStepPossible(pUVar13,EVar21);
                  if (bVar6) goto LAB_14bad559d;
                }
                else if (1 < local_2d8 - 0x13) goto LAB_14bad55b2;
                pTVar16 = &local_2c8;
              }
LAB_14bad559d:
              TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                        (pTVar16,(int *)&local_2d8);
            }
          }
          else {
            uVar20 = uVar26;
            switch(local_2d8 & 0xff) {
            case 1:
              uVar20 = 1;
              break;
            case 2:
              uVar20 = 2;
              break;
            case 3:
              uVar20 = 3;
              break;
            case 4:
              uVar20 = 4;
              break;
            case 5:
              uVar20 = 5;
              break;
            case 6:
              uVar20 = 6;
            }
            pUVar8 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&(this->SkillDataSet).WeakPtr);
            UDS_SkillDataSet::GetSkillSlotDataMap
                      (pUVar8,(TMap<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
                               *)local_1b8);
            if (local_1b8._8_4_ != local_1b8._52_4_) {
              puVar18 = local_1b8 + 0x38;
              if ((undefined1 *)local_1b8._64_8_ != (undefined1 *)0x0) {
                puVar18 = (undefined1 *)local_1b8._64_8_;
              }
              iVar7 = *(int *)(puVar18 + (local_170 - 1 & uVar20) * 4);
              while (iVar7 != -1) {
                lVar24 = local_1b8._0_8_ + (longlong)iVar7 * 0x14;
                if (*(int *)(local_1b8._0_8_ + (longlong)iVar7 * 0x14) == (int)uVar20) {
                  if (lVar24 != 0) {
                    local_298 = *(FWeakObjectPtr *)(lVar24 + 4);
                    goto LAB_14bad4f5f;
                  }
                  break;
                }
                iVar7 = *(int *)(lVar24 + 0xc);
              }
            }
            local_298.ObjectIndex = 0;
            local_298.ObjectSerialNumber = 0;
LAB_14bad4f5f:
            bVar6 = FWeakObjectPtr::IsValid(&local_298);
            if (!bVar6) {
              local_170 = 0;
              if ((undefined1 *)local_1b8._64_8_ != (undefined1 *)0x0) {
                FMemory::Free((void *)local_1b8._64_8_);
              }
              TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ((TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_1b8);
              goto LAB_14bad58b5;
            }
            pUVar9 = FWeakObjectPtr::Get(&local_298);
            uVar17 = *(uint *)&pUVar9[2].field_0x1c;
            if (*(int *)&(this->SkillDataMap).field_0x8 != *(int *)&(this->SkillDataMap).field_0x34)
            {
              puVar18 = *(undefined1 **)&(this->SkillDataMap).field_0x40;
              puVar19 = &(this->SkillDataMap).field_0x38;
              if (puVar18 != (undefined1 *)0x0) {
                puVar19 = puVar18;
              }
              iVar7 = *(int *)(puVar19 +
                              (ulonglong)(*(int *)&(this->SkillDataMap).field_0x48 - 1U & uVar17) *
                              4);
              if (iVar7 != -1) {
LAB_14bad4fc0:
                if (*(uint *)(*(longlong *)&this->SkillDataMap + (longlong)iVar7 * 0x14) != uVar17)
                goto code_r0x00014bad4fcc;
                pFVar10 = &TMapBase<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
                           ::FindChecked((TMapBase<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
                                          *)&this->SkillDataMap,uVar17)->WeakPtr;
                local_248 = *pFVar10;
                bVar6 = TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals
                                  ((TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)&local_248,
                                   (void *)0x0);
                if (!bVar6) {
                  pUVar11 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_248);
                  iVar7 = UDS_SkillData::GetMainSkillID(pUVar11);
                  uVar12 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
                  UDS_SkillData::GetData((ulong64)&local_270,uVar12,SUB41(iVar7,0));
                  bVar6 = TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals
                                    ((TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)&local_270,
                                     (void *)0x0);
                  if (!bVar6) {
                    pUVar9 = FWeakObjectPtr::Get(&local_270);
                    local_2b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_2b8.ArrayNum = *(int *)&pUVar9[3].field_0x10;
                    lVar24 = (longlong)local_2b8.ArrayNum;
                    _Src = *(void **)&pUVar9[3].field_0x8;
                    if (local_2b8.ArrayNum == 0) {
                      local_2b8.ArrayMax = 0;
                    }
                    else {
                      UE::Core::Private::
                      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (4,4,local_2b8.ArrayNum,0,&local_2b8.AllocatorInstance,
                                 local_2b8.ArrayNum,&local_2b8.ArrayMax);
                      memcpy(local_2b8.AllocatorInstance.Data,_Src,lVar24 << 2);
                    }
                    pUVar11 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_270);
                    local_278[0] = UDS_SkillData::GetMainSkillID(pUVar11);
                    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>
                              (&local_2b8,local_278);
                    iVar7 = local_2b8.ArrayNum;
                    uVar20 = (ulonglong)local_2b8.ArrayNum;
                    pFVar2 = local_2b8.AllocatorInstance.Data + uVar20 * 4;
                    FVar25.Data = local_2b8.AllocatorInstance.Data;
                    while( true ) {
                      if ((uint)uVar20 != iVar7) {
                        local_2d4 = 0;
                        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::
                        operator()(&local_2d4);
                        uVar20 = (ulonglong)(uint)local_2b8.ArrayNum;
                      }
                      if (FVar25.Data == pFVar2) break;
                      pFVar15 = (this->AbleSkillList).AllocatorInstance.Data;
                      pFVar3 = pFVar15 + (longlong)(this->AbleSkillList).ArrayNum * 4;
                      if (pFVar15 != pFVar3) {
                        do {
                          pTVar16 = pTVar1;
                          if (*(int *)pFVar15 == *(int *)FVar25.Data) goto LAB_14bad5174;
                          pFVar15 = pFVar15 + 4;
                        } while (pFVar15 != pFVar3);
                      }
                      FVar25.Data = FVar25.Data + 4;
                    }
                    pTVar16 = &local_2c8;
LAB_14bad5174:
                    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                              (pTVar16,(int *)&local_2d8);
                    if (local_2b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_2b8.AllocatorInstance.Data);
                    }
                    goto LAB_14bad4fe4;
                  }
                }
              }
            }
LAB_14bad4fd5:
            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                      (&local_2c8,(int *)&local_2d8);
LAB_14bad4fe4:
            local_170 = 0;
            if ((undefined1 *)local_1b8._64_8_ != (undefined1 *)0x0) {
              FMemory::Free((void *)local_1b8._64_8_);
            }
            TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_1b8);
          }
LAB_14bad55b2:
          local_2d8 = local_2d8 + 1;
          if (0x14 < (int)local_2d8) {
            if (GEngine != (UEngine *)0x0) {
              ::FString::FString(&local_220,"");
              iVar7 = (this->AbleVirtualKeyList).ArrayNum;
              uVar17 = 0;
              if (0 < iVar7) {
                uVar20 = uVar26;
                uVar27 = uVar26;
                do {
                  uVar22 = (uint)uVar20;
                  uVar29 = 0;
                  if ((int)uVar22 < (this->AbleVirtualKeyList).ArrayNum) {
                    uVar29 = ~uVar22 >> 0x1f;
                  }
                  if ((uVar29 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_268.Data.ArrayNum = 0;
                  local_268.Data.ArrayMax = 0;
                  ::FString::AppendInt
                            (&local_268,
                             *(int *)((this->AbleVirtualKeyList).AllocatorInstance.Data + uVar27 * 4
                                     ));
                  uVar29 = local_268.Data.ArrayNum - 1;
                  if (local_268.Data.ArrayNum == 0) {
                    uVar29 = uVar17;
                  }
                  ::FString::AppendChars
                            (&local_220,(wchar_t *)local_268.Data.AllocatorInstance.Data,uVar29);
                  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_268.Data.AllocatorInstance.Data);
                  }
                  if (uVar22 != iVar7 - 1U) {
                    ::FString::AppendChars(&local_220,L", ",2);
                  }
                  uVar20 = (ulonglong)(uVar22 + 1);
                  uVar27 = uVar27 + 1;
                } while ((longlong)uVar27 < (longlong)iVar7);
              }
              ::FString::PrintfImpl(&local_1e8,L"[Able KeyList] %s");
              fVar5 = __real_447a0000;
              UEngine::AddOnScreenDebugMessage
                        (GEngine,0x138b,__real_447a0000,FColor::Yellow,&local_1e8,true,
                         &UE::Math::TVector2<double>::UnitVector);
              if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
              }
              ::FString::FString(&local_230,"");
              uVar20 = (ulonglong)local_2c8.ArrayNum;
              if (0 < local_2c8.ArrayNum) {
                uVar29 = local_2c8.ArrayNum - 1;
                uVar27 = uVar20;
                uVar28 = uVar26;
                while( true ) {
                  uVar23 = (uint)uVar26;
                  uVar22 = uVar17;
                  if ((int)uVar23 < (int)uVar27) {
                    uVar22 = ~uVar23 >> 0x1f;
                  }
                  if ((uVar22 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_258.Data.ArrayNum = 0;
                  local_258.Data.ArrayMax = 0;
                  ::FString::AppendInt
                            (&local_258,*(int *)(local_2c8.AllocatorInstance.Data + uVar28 * 4));
                  uVar22 = local_258.Data.ArrayNum - 1;
                  if (local_258.Data.ArrayNum == 0) {
                    uVar22 = uVar17;
                  }
                  ::FString::AppendChars
                            (&local_230,(wchar_t *)local_258.Data.AllocatorInstance.Data,uVar22);
                  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_258.Data.AllocatorInstance.Data);
                  }
                  if (uVar23 != uVar29) {
                    ::FString::AppendChars(&local_230,L", ",2);
                  }
                  uVar26 = (ulonglong)(uVar23 + 1);
                  uVar28 = uVar28 + 1;
                  if ((longlong)uVar20 <= (longlong)uVar28) break;
                  uVar27 = local_2c8._8_8_ & 0xffffffff;
                }
              }
              ::FString::PrintfImpl(local_1d8,L"[Unable KeyList] %s");
              UEngine::AddOnScreenDebugMessage
                        (GEngine,0x138c,fVar5,FColor::Red,local_1d8,true,
                         &UE::Math::TVector2<double>::UnitVector);
              if (local_1d8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1d8[0].Data.AllocatorInstance.Data);
              }
              if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_230.Data.AllocatorInstance.Data);
              }
              if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_220.Data.AllocatorInstance.Data);
              }
            }
LAB_14bad58b5:
            if (local_2c8.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return;
            }
            FMemory::Free(local_2c8.AllocatorInstance.Data);
            return;
          }
        } while( true );
      }
    }
    pUVar14 = UDS_LogManager::GetInst();
    if (pUVar14 != (UDS_LogManager *)0x0) {
      pUVar14 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_CCSAIManager::UpdateAbleVirtualKeyList",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar14,1,Warning,local_168.Ptr,0x5b0,
                 L"[CCSAI] There is no data required to create a list of available virtual keys.");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1484106909542775375>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CCSAIManager.cpp"
                       ,0x5b1,"false");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
code_r0x00014bad4fcc:
  iVar7 = *(int *)(*(longlong *)&this->SkillDataMap + 0xc + (longlong)iVar7 * 0x14);
  if (iVar7 == -1) goto LAB_14bad4fd5;
  goto LAB_14bad4fc0;
}

// WriteLogToFile @ 14badbf00

void __thiscall UDS_CCSAIManager::WriteLogToFile(UDS_CCSAIManager *this,FString *param_1)

{
  FString *pFVar1;
  IFileManager *pIVar2;
  ForAnyElementType FVar3;
  FString local_38;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  pFVar1 = FPaths::ProjectSavedDir();
  ::operator/(&local_28,pFVar1,L"Logs/AI/AILog.txt");
  pIVar2 = IFileManager::Get();
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FString::ConcatFC(&local_38,param_1,L"\r\n");
  local_18.Size = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    local_18.Size = 0;
  }
  local_18.DataPtr = (wchar_t *)local_38.Data.AllocatorInstance.Data;
  FFileHelper::SaveStringToFile(&local_18,(wchar_t *)FVar3.Data,ForceUTF8,pIVar2,8);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

