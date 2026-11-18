// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 32

// StaticClass @ 14b4495d0

UClass * __cdecl UDS_CheatManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CheatManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CheatManager",
               &Z_Registration_Info_UClass_UDS_CheatManager.InnerSingleton,
               StaticRegisterNativesUDS_CheatManager,0x310,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CheatManager>,
               InternalVTableHelperCtorCaller<UDS_CheatManager>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CheatManager.InnerSingleton;
}

// UDS_CheatManager @ 14b44e870

UDS_CheatManager * __thiscall
UDS_CheatManager::UDS_CheatManager(UDS_CheatManager *this,FVTableHelper *param_1)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_CheatManager__6B_;
  FDS_CheatManager_TargetInfo::FDS_CheatManager_TargetInfo(&this->TargetInfo);
  FDS_CheatManager_TargetInfo::FDS_CheatManager_TargetInfo(&this->UseTargetInfo);
  *(undefined8 *)&this->ChangedTargetInfoDelegate = 0;
  *(undefined8 *)&(this->ChangedTargetInfoDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedTargetInfoDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ChangedUseTargetInfoDelegate = 0;
  *(undefined8 *)&(this->ChangedUseTargetInfoDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedUseTargetInfoDelegate).field_0x10 = 0;
  (this->AggroInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggroInfoList).ArrayNum = 0;
  (this->AggroInfoList).ArrayMax = 0;
  *(undefined8 *)&this->ChangedAggroInfoListDelegate = 0;
  *(undefined8 *)&(this->ChangedAggroInfoListDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedAggroInfoListDelegate).field_0x10 = 0;
  ::FString::FString(&this->LastNPCSkillUseCommand,"");
  this->bIsUIModeFixed = false;
  return this;
}

// UDS_CheatManager @ 14b44e920

UDS_CheatManager * __thiscall UDS_CheatManager::UDS_CheatManager(UDS_CheatManager *this)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this);
  this->_padding_ = (longlong)&___7UDS_CheatManager__6B_;
  FDS_CheatManager_TargetInfo::FDS_CheatManager_TargetInfo(&this->TargetInfo);
  FDS_CheatManager_TargetInfo::FDS_CheatManager_TargetInfo(&this->UseTargetInfo);
  *(undefined8 *)&this->ChangedTargetInfoDelegate = 0;
  *(undefined8 *)&(this->ChangedTargetInfoDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedTargetInfoDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ChangedUseTargetInfoDelegate = 0;
  *(undefined8 *)&(this->ChangedUseTargetInfoDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedUseTargetInfoDelegate).field_0x10 = 0;
  (this->AggroInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggroInfoList).ArrayNum = 0;
  (this->AggroInfoList).ArrayMax = 0;
  *(undefined8 *)&this->ChangedAggroInfoListDelegate = 0;
  *(undefined8 *)&(this->ChangedAggroInfoListDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedAggroInfoListDelegate).field_0x10 = 0;
  ::FString::FString(&this->LastNPCSkillUseCommand,"");
  this->bIsUIModeFixed = false;
  return this;
}

// ~UDS_CheatManager @ 14b450b20

void __thiscall UDS_CheatManager::~UDS_CheatManager(UDS_CheatManager *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UDS_CheatManager__6B_;
  pFVar1 = (this->LastNPCSkillUseCommand).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->ChangedAggroInfoListDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangedAggroInfoListDelegate);
  DestructItems<FDS_CheatManager_AggroInfo,int>
            ((FDS_CheatManager_AggroInfo *)(this->AggroInfoList).AllocatorInstance.Data,
             (this->AggroInfoList).ArrayNum);
  pFVar1 = (this->AggroInfoList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->ChangedUseTargetInfoDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangedUseTargetInfoDelegate);
  pvVar2 = *(void **)&(this->ChangedTargetInfoDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangedTargetInfoDelegate);
  FDS_CheatManager_TargetInfo::~FDS_CheatManager_TargetInfo(&this->UseTargetInfo);
  FDS_CheatManager_TargetInfo::~FDS_CheatManager_TargetInfo(&this->TargetInfo);
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  return;
}

// FDS_ChangedAggroInfoListDelegate_DelegateWrapper @ 14b4538c0

void __cdecl
UDS_CheatManager::FDS_ChangedAggroInfoListDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FDS_ChangedTargetInfoDelegate_DelegateWrapper @ 14b4538d0

void __cdecl
UDS_CheatManager::FDS_ChangedTargetInfoDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// GetPrivateStaticClass @ 14b4546a0

UClass * __cdecl UDS_CheatManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CheatManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CheatManager",
               &Z_Registration_Info_UClass_UDS_CheatManager.InnerSingleton,
               StaticRegisterNativesUDS_CheatManager,0x310,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CheatManager>,
               InternalVTableHelperCtorCaller<UDS_CheatManager>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CheatManager.InnerSingleton;
}

// StaticRegisterNativesUDS_CheatManager @ 14b4551b0

void __cdecl UDS_CheatManager::StaticRegisterNativesUDS_CheatManager(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_UDS_CheatManager_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execClearVariables @ 14b456e60

void __cdecl UDS_CheatManager::execClearVariables(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ClearVariables((UDS_CheatManager *)param_1);
  return;
}

// execGetPlayerController @ 14b456e80

void __cdecl
UDS_CheatManager::execGetPlayerController(UObject *param_1,FFrame *param_2,void *param_3)

{
  ADS_PlayerController *pAVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pAVar1 = GetPlayerController((UDS_CheatManager *)param_1);
  *(ADS_PlayerController **)param_3 = pAVar1;
  return;
}

// execRequestAggroList @ 14b456f40

void __cdecl UDS_CheatManager::execRequestAggroList(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = RequestAggroList((UDS_CheatManager *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execRequestLastNPCSkillUseCommand @ 14b456f80

void __cdecl
UDS_CheatManager::execRequestLastNPCSkillUseCommand(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = RequestLastNPCSkillUseCommand((UDS_CheatManager *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execRequestNPCSkillUse @ 14b456fc0

void __cdecl
UDS_CheatManager::execRequestNPCSkillUse(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FProperty *pFVar2;
  bool bVar3;
  int *piVar4;
  bool *pbVar5;
  bool local_res10 [8];
  int local_res18 [2];
  
  local_res18[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  piVar1 = (int *)param_2->MostRecentPropertyAddress;
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  piVar4 = local_res18;
  if (piVar1 != (int *)0x0) {
    piVar4 = piVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar5 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar5 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = RequestNPCSkillUse((UDS_CheatManager *)param_1,piVar4,pbVar5);
  *(bool *)param_3 = bVar3;
  return;
}

// execSearchTarget @ 14b4570c0

void __cdecl UDS_CheatManager::execSearchTarget(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SearchTarget((UDS_CheatManager *)param_1);
  return;
}

// execSearchUseTarget @ 14b4570e0

void __cdecl UDS_CheatManager::execSearchUseTarget(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SearchUseTarget((UDS_CheatManager *)param_1);
  return;
}

// execUpdateTargetTickInfo @ 14b457100

void __cdecl
UDS_CheatManager::execUpdateTargetTickInfo(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float *pfVar2;
  float local_res10 [2];
  
  local_res10[0] = 0.0;
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
  pfVar2 = local_res10;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar2 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UpdateTargetTickInfo((UDS_CheatManager *)param_1,pfVar2);
  return;
}

// execUpdateUseTargetTickInfo @ 14b4571a0

void __cdecl
UDS_CheatManager::execUpdateUseTargetTickInfo(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float *pfVar2;
  float local_res10 [2];
  
  local_res10[0] = 0.0;
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
  pfVar2 = local_res10;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar2 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UpdateUseTargetTickInfo((UDS_CheatManager *)param_1,pfVar2);
  return;
}

// ClearVariables @ 14ba98790

void __thiscall UDS_CheatManager::ClearVariables(UDS_CheatManager *this)

{
  int *piVar1;
  FString *pFVar2;
  int iVar3;
  FDS_CheatManager_AggroInfo *pFVar4;
  FScriptContainerElement *pFVar5;
  FString local_18;
  
  FDS_CheatManager_TargetInfo::ResetInfo(&this->TargetInfo);
  FDS_CheatManager_TargetInfo::ResetInfo(&this->UseTargetInfo);
  piVar1 = &(this->AggroInfoList).ArrayMax;
  pFVar4 = (FDS_CheatManager_AggroInfo *)(this->AggroInfoList).AllocatorInstance.Data;
  iVar3 = (this->AggroInfoList).ArrayNum;
  if ((this->AggroInfoList).ArrayMax < 0) {
    DestructItems<FDS_CheatManager_AggroInfo,int>(pFVar4,iVar3);
    (this->AggroInfoList).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->AggroInfoList).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FDS_CheatManager_AggroInfo,int>(pFVar4,iVar3);
    (this->AggroInfoList).ArrayNum = 0;
  }
  FDS_ChangedTargetInfoDelegate_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->ChangedTargetInfoDelegate);
  FDS_ChangedTargetInfoDelegate_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->ChangedUseTargetInfoDelegate);
  FDS_ChangedAggroInfoListDelegate_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->ChangedAggroInfoListDelegate);
  ::FString::FString(&local_18,"");
  pFVar2 = &this->LastNPCSkillUseCommand;
  if (pFVar2 != &local_18) {
    pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar2->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (this->LastNPCSkillUseCommand).Data.ArrayNum = local_18.Data.ArrayNum;
    (this->LastNPCSkillUseCommand).Data.ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// Deinitialize @ 14ba9dc70

void __thiscall UDS_CheatManager::Deinitialize(UDS_CheatManager *this)

{
  return;
}

// GetInst @ 14baab3d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDS_CheatManager * __cdecl UDS_CheatManager::GetInst(void)

{
  int iVar1;
  bool bVar2;
  UEngine *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UDS_CheatManager *pUVar6;
  
  pUVar3 = GEngine;
  pUVar4 = Z_Construct_UClass_UDS_CheatManager_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 != (UClass *)0x0) goto LAB_14baab406;
  }
  else if (pUVar4 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_14baab406:
    pUVar5 = Z_Construct_UClass_UDS_CheatManager_NoRegister();
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
      if (bVar2) goto LAB_14baab436;
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_14baab436:
  pUVar6 = (UDS_CheatManager *)
           FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&pUVar3->EngineSubsystemCollection,pUVar4);
  return pUVar6;
}

// GetPlayerController @ 14baaeae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ADS_PlayerController * __thiscall UDS_CheatManager::GetPlayerController(UDS_CheatManager *this)

{
  int iVar1;
  UWorld *this_00;
  ADS_PlayerController *pAVar2;
  UClass *pUVar3;
  
  this_00 = UDS_GameInstance::GetGameInstanceWorld();
  if (this_00 == (UWorld *)0x0) {
    return (ADS_PlayerController *)0x0;
  }
  pAVar2 = (ADS_PlayerController *)UWorld::GetFirstPlayerController(this_00);
  if (pAVar2 != (ADS_PlayerController *)0x0) {
    pUVar3 = Z_Construct_UClass_ADS_PlayerController_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pAVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pAVar2;
    }
  }
  return (ADS_PlayerController *)0x0;
}

// Initialize @ 14bab68d0

void __thiscall
UDS_CheatManager::Initialize(UDS_CheatManager *this,FSubsystemCollectionBase *param_1)

{
  return;
}

// ReceiveShowAggroListResponse @ 14bac3680

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
UDS_CheatManager::ReceiveShowAggroListResponse
          (UDS_CheatManager *this,ShowAggroListResponse *param_1)

{
  int *piVar1;
  TArray<FDS_CheatManager_AggroInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *this_00;
  uint uVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  FDS_EntityBase *pFVar7;
  ulonglong uVar8;
  longlong lVar9;
  FIdentityFunctor local_res8;
  ulong64 local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_b8;
  FName local_b0;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  undefined4 local_58;
  
  pTVar2 = &this->AggroInfoList;
  lVar9 = 0;
  DestructItems<FDS_CheatManager_AggroInfo,int>
            ((FDS_CheatManager_AggroInfo *)(pTVar2->AllocatorInstance).Data,
             (this->AggroInfoList).ArrayNum);
  piVar1 = &(this->AggroInfoList).ArrayMax;
  (this->AggroInfoList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  if ((param_1->_impl_).entity_id_ == (this->TargetInfo).TargetEntityID) {
    uVar3 = *(uint *)&(param_1->_impl_).aggro_list_.field_0x8;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if (*piVar1 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,uVar3,&pTVar2->AllocatorInstance,(this->AggroInfoList).ArrayNum,piVar1);
    }
    if (0 < (int)uVar3) {
      do {
        uVar8 = *(ulonglong *)&(param_1->_impl_).aggro_list_;
        if ((uVar8 & 1) != 0) {
          uVar8 = *(ulonglong *)(uVar8 + 7 + lVar9 * 8);
        }
        local_res10 = *(ulong64 *)(uVar8 + 0x18);
        if (*(int *)(uVar8 + 0x24) == 0) {
          UDS_PlayerData::GetData((ulong64)&local_res18,local_res10,false);
          bVar4 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_res18,
                             (void *)0x0);
          if (!bVar4) {
            pUVar6 = FWeakObjectPtr::Get(&local_res18);
            local_res10 = *(ulong64 *)&pUVar6[8].field_0x10;
            goto LAB_14bac3792;
          }
        }
        else {
LAB_14bac3792:
          pFVar7 = FDS_EntityBase::GetEntityBase(&local_res10);
          if (pFVar7 != (FDS_EntityBase *)0x0) {
            (**(code **)(pFVar7->_padding_ + 0x150))(pFVar7);
            bVar4 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_res20,(void *)0x0);
            if (!bVar4) {
              UDS_EntityDataSet::GetEntityDataSet((ulong64)&local_b8);
              bVar4 = TWeakObjectPtr<UDS_EntityDataSet,FWeakObjectPtr>::UEOpEquals
                                ((TWeakObjectPtr<UDS_EntityDataSet,FWeakObjectPtr> *)&local_b8,
                                 (void *)0x0);
              if (!bVar4) {
                ::FString::FString(&local_78,"");
                ::FString::FString(&local_68,"");
                local_58 = 0;
                pUVar6 = FWeakObjectPtr::Get(&local_res20);
                local_b0.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
                local_b0.Number = *(uint *)&pUVar6->field_0x1c;
                ::FName::ToString(&local_b0,&local_88);
                pUVar6 = FWeakObjectPtr::Get(&local_b8);
                (**(code **)(*(longlong *)pUVar6 + 0x2d0))(pUVar6);
                ::FString::PrintfImpl(&local_a8,L"%s (%s)");
                if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_78.Data.AllocatorInstance.Data);
                }
                local_78.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
                local_78.Data.ArrayNum = local_a8.Data.ArrayNum;
                local_78.Data.ArrayMax = local_a8.Data.ArrayMax;
                local_a8.Data.ArrayNum = 0;
                local_a8.Data.ArrayMax = 0;
                local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_88.Data.AllocatorInstance.Data);
                }
                ::FString::PrintfImpl(&local_98,L"%llu");
                if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_68.Data.AllocatorInstance.Data);
                }
                local_68.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
                local_68.Data.ArrayNum = local_98.Data.ArrayNum;
                local_68.Data.ArrayMax = local_98.Data.ArrayMax;
                local_58 = *(undefined4 *)(uVar8 + 0x20);
                iVar5 = (this->AggroInfoList).ArrayNum;
                local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_98.Data.ArrayNum = 0;
                local_98.Data.ArrayMax = 0;
                if (iVar5 == *piVar1) {
                  iVar5 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x828,&pTVar2->AllocatorInstance,piVar1);
                }
                (this->AggroInfoList).ArrayNum = iVar5 + 1;
                this_00 = (pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x28;
                ::FString::FString((FString *)this_00,&local_78);
                ::FString::FString((FString *)(this_00 + 0x10),&local_68);
                *(undefined4 *)(this_00 + 0x20) = local_58;
                if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_68.Data.AllocatorInstance.Data);
                }
                if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_78.Data.AllocatorInstance.Data);
                }
              }
            }
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)uVar3);
    }
    local_res8 = SUB81(this,0);
    AlgoImpl::
    IntroSortInternal<FDS_CheatManager_AggroInfo,int,FIdentityFunctor,TDereferenceWrapper<FDS_CheatManager_AggroInfo,_UDS_CheatManager::ReceiveShowAggroListResponse_::__l2::<lambda_1>_>_>
              ((FDS_CheatManager_AggroInfo *)(pTVar2->AllocatorInstance).Data,
               (this->AggroInfoList).ArrayNum,local_res8,(<lambda_1> *)&local_res10);
    FDS_ChangedAggroInfoListDelegate_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->ChangedAggroInfoListDelegate);
  }
  return;
}

// RequestAggroList @ 14bac8440

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

bool __thiscall UDS_CheatManager::RequestAggroList(UDS_CheatManager *this)

{
  ulong64 *puVar1;
  FDS_EntityBase *pFVar2;
  FDS_NpcBaseTableRow *pFVar3;
  FDS_NpcBattleTableRow *pFVar4;
  ADS_PlayerController *pAVar5;
  FString local_28;
  void *local_18 [2];
  
  puVar1 = &(this->TargetInfo).TargetEntityID;
  if (*puVar1 != 0) {
    pFVar2 = FDS_EntityBase::GetEntityBase(puVar1);
    if ((pFVar2 != (FDS_EntityBase *)0x0) && (pFVar2->EntityType == NPC)) {
      pFVar3 = FDS_NpcBaseTableRow::Get(pFVar2->TableID,true);
      if ((pFVar3 != (FDS_NpcBaseTableRow *)0x0) && (0 < pFVar3->ID_NpcBattle)) {
        pFVar4 = FDS_NpcBattleTableRow::Get((longlong)pFVar3->ID_NpcBattle,true);
        if (pFVar4 != (FDS_NpcBattleTableRow *)0x0) {
          pAVar5 = GetPlayerController(this);
          if (pAVar5 != (ADS_PlayerController *)0x0) {
            ::FString::PrintfImpl(&local_28,L"DS.Chat ShowTargetAggro %llu");
            (**(code **)(pAVar5->_padding_ + 0xe00))(pAVar5,local_18,&local_28,1);
            if (local_18[0] != (void *)0x0) {
              FMemory::Free(local_18[0]);
            }
            if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_28.Data.AllocatorInstance.Data);
            }
            return true;
          }
        }
      }
    }
  }
  return false;
}

// RequestLastNPCSkillUseCommand @ 14bac8a50

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

bool __thiscall UDS_CheatManager::RequestLastNPCSkillUseCommand(UDS_CheatManager *this)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_CharStateData *this_00;
  ADS_PlayerController *pAVar3;
  ulong64 *puVar4;
  FWeakObjectPtr local_res8;
  EDS_CharState local_res10;
  void *local_18 [2];
  
  if ((1 < (this->LastNPCSkillUseCommand).Data.ArrayNum) &&
     (puVar4 = &(this->TargetInfo).TargetEntityID, *puVar4 != 0)) {
    pFVar2 = FDS_EntityBase::GetEntityBase(puVar4);
    if (pFVar2 != (FDS_EntityBase *)0x0) {
      UDS_CharStateData::GetData((ulong64)&local_res8);
      bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_res8,(void *)0x0
                        );
      if (!bVar1) {
        this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res8);
        local_res10 = Skill;
        bVar1 = UDS_CharStateData::HasCharState(this_00,&local_res10);
        if (!bVar1) {
          pAVar3 = GetPlayerController(this);
          if (pAVar3 != (ADS_PlayerController *)0x0) {
            (**(code **)(pAVar3->_padding_ + 0xe00))
                      (pAVar3,local_18,&this->LastNPCSkillUseCommand,1);
            if (local_18[0] != (void *)0x0) {
              FMemory::Free(local_18[0]);
            }
            return true;
          }
        }
      }
    }
  }
  return false;
}

// RequestNPCSkillUse @ 14bac8b30

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
UDS_CheatManager::RequestNPCSkillUse(UDS_CheatManager *this,int *param_1,bool *param_2)

{
  FScriptContainerElement *pFVar1;
  UWorld *this_00;
  APlayerController *pAVar2;
  UClass *pUVar3;
  wchar_t *pwVar4;
  FString *pFVar5;
  int iVar6;
  FString local_28;
  void *local_18 [2];
  
  this_00 = UDS_GameInstance::GetGameInstanceWorld();
  if (this_00 == (UWorld *)0x0) {
    return false;
  }
  pAVar2 = UWorld::GetFirstPlayerController(this_00);
  if (pAVar2 != (APlayerController *)0x0) {
    pUVar3 = Z_Construct_UClass_ADS_PlayerController_NoRegister();
    iVar6 = (int)pUVar3->_padding_;
    if ((iVar6 <= *(int *)(pAVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar6 * 8)
        == &pUVar3->_padding_)) goto LAB_14bac8b99;
  }
  pAVar2 = (APlayerController *)0x0;
LAB_14bac8b99:
  if (pAVar2 == (APlayerController *)0x0) {
    return false;
  }
  pwVar4 = L"false";
  if (*param_2 != false) {
    pwVar4 = L"true";
  }
  iVar6 = *param_1;
  ::FString::PrintfImpl(&local_28,L"DS.Chat NPCSkillUse %llu %llu %d %s");
  pFVar5 = &this->LastNPCSkillUseCommand;
  if (pFVar5 != &local_28) {
    pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    (this->LastNPCSkillUseCommand).Data.ArrayNum = local_28.Data.ArrayNum;
    (this->LastNPCSkillUseCommand).Data.ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  (**(code **)(pAVar2->_padding_ + 0xe00))(pAVar2,local_18,pFVar5,1,iVar6,pwVar4);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return true;
}

// SearchTarget @ 14baca5a0

void __thiscall UDS_CheatManager::SearchTarget(UDS_CheatManager *this)

{
  bool bVar1;
  
  bVar1 = SearchUtil(this,&this->TargetInfo);
  if (bVar1) {
    FDS_ChangedTargetInfoDelegate_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->ChangedTargetInfoDelegate);
    return;
  }
  return;
}

// SearchUseTarget @ 14baca5e0

void __thiscall UDS_CheatManager::SearchUseTarget(UDS_CheatManager *this)

{
  bool bVar1;
  
  bVar1 = SearchUtil(this,&this->UseTargetInfo);
  if (bVar1) {
    FDS_ChangedTargetInfoDelegate_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->ChangedUseTargetInfoDelegate);
    return;
  }
  return;
}

// SearchUtil @ 14baca620

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
UDS_CheatManager::SearchUtil(UDS_CheatManager *this,FDS_CheatManager_TargetInfo *param_1)

{
  ulong64 uVar1;
  int iVar2;
  int iVar3;
  UWorld *this_00;
  APlayerController *this_01;
  UClass *pUVar4;
  FDS_EntityBase *pFVar5;
  bool bVar6;
  FWeakObjectPtr local_res10;
  AActor *local_res18 [2];
  TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>_> local_158 [2];
  undefined8 local_138;
  undefined4 uStack_130;
  undefined1 uStack_12c;
  undefined2 uStack_12b;
  undefined1 uStack_129;
  FHitResult local_128;
  
  uVar1 = param_1->TargetEntityID;
  FDS_CheatManager_TargetInfo::ResetInfo(param_1);
  this_00 = UDS_GameInstance::GetGameInstanceWorld();
  if (this_00 == (UWorld *)0x0) {
    return false;
  }
  this_01 = UWorld::GetFirstPlayerController(this_00);
  if (this_01 == (APlayerController *)0x0) {
LAB_14baca68e:
    this_01 = (APlayerController *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_ADS_PlayerController_NoRegister();
    iVar3 = (int)pUVar4->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar4->_padding_)) goto LAB_14baca68e;
  }
  if (this_01 == (APlayerController *)0x0) {
    return false;
  }
  local_158[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158[0].ArrayNum = 0;
  local_158[0].ArrayMax = 0;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x101,&local_158[0].AllocatorInstance,&local_158[0].ArrayMax);
  iVar3 = iVar2 + 1;
  local_158[0].AllocatorInstance.Data[iVar2] = (FScriptContainerElement)0x6;
  if (iVar3 == local_158[0].ArrayMax) {
    local_158[0].ArrayNum = iVar3;
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&local_158[0].AllocatorInstance,&local_158[0].ArrayMax);
  }
  local_158[0].ArrayNum = iVar3 + 1;
  local_158[0].AllocatorInstance.Data[iVar3] = (FScriptContainerElement)0x8;
  if (local_158[0].ArrayNum == local_158[0].ArrayMax) {
    local_158[0].ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x101,&local_158[0].AllocatorInstance,&local_158[0].ArrayMax);
  }
  iVar3 = local_158[0].ArrayNum + 1;
  local_158[0].AllocatorInstance.Data[local_158[0].ArrayNum] = (FScriptContainerElement)0x7;
  if (iVar3 == local_158[0].ArrayMax) {
    local_158[0].ArrayNum = iVar3;
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&local_158[0].AllocatorInstance,&local_158[0].ArrayMax);
  }
  local_158[0].ArrayNum = iVar3 + 1;
  local_158[0].AllocatorInstance.Data[iVar3] = (FScriptContainerElement)0x9;
  memset(&local_128,0,0x100);
  uStack_12b = 0;
  local_128.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_128.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_128.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_128.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  uStack_129 = 0;
  local_138 = 0;
  uStack_130 = 0xffffffff;
  uStack_12c = 0;
  local_128.HitObjectHandle.InstanceIndex = -1;
  local_128.HitObjectHandle.ResolutionStatus = Invalid;
  local_128.HitObjectHandle._29_3_ = 0;
  local_128.Time = 1.0;
  local_128.MyItem = -1;
  local_128.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  APlayerController::GetHitResultUnderCursorForObjects(this_01,local_158,true,&local_128);
  if (local_128.bBlockingHit != 0) {
    local_res18[0] = FActorInstanceHandle::FetchActor(&local_128.HitObjectHandle);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
    pFVar5 = FDS_EntityBase::GetEntityBaseFromActor
                       ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res10);
    if (pFVar5 == (FDS_EntityBase *)0x0) {
      bVar6 = false;
      goto LAB_14baca877;
    }
    param_1->TargetEntityID = pFVar5->EntityID;
    FDS_CheatManager_TargetInfo::UpdateFixedInfo(param_1);
    if (param_1->TargetEntityID != 0) {
      FDS_EntityBase::GetEntityBase(&param_1->TargetEntityID);
    }
    FDS_CheatManager_TargetInfo::UpdateSkillInfo(param_1);
  }
  bVar6 = uVar1 != param_1->TargetEntityID;
LAB_14baca877:
  if (local_158[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158[0].AllocatorInstance.Data);
    return bVar6;
  }
  return bVar6;
}

// ShouldCreateSubsystem @ 14bace710

bool __thiscall UDS_CheatManager::ShouldCreateSubsystem(UDS_CheatManager *this,UObject *param_1)

{
  return false;
}

// UpdateTargetTickInfo @ 14badae80

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

void __thiscall UDS_CheatManager::UpdateTargetTickInfo(UDS_CheatManager *this,float *param_1)

{
  UDS_EntityManager *this_00;
  ulong64 *puVar1;
  
  puVar1 = &(this->TargetInfo).TargetEntityID;
  if (*puVar1 == 0) {
    return;
  }
  this_00 = UDS_EntityManager::GetInst();
  if (this_00 == (UDS_EntityManager *)0x0) {
    return;
  }
  UDS_EntityManager::FindEntityBase(this_00,*puVar1);
  return;
}

// UpdateUseTargetTickInfo @ 14badaf60

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

void __thiscall UDS_CheatManager::UpdateUseTargetTickInfo(UDS_CheatManager *this,float *param_1)

{
  UDS_EntityManager *this_00;
  ulong64 *puVar1;
  
  puVar1 = &(this->UseTargetInfo).TargetEntityID;
  if (*puVar1 == 0) {
    return;
  }
  this_00 = UDS_EntityManager::GetInst();
  if (this_00 == (UDS_EntityManager *)0x0) {
    return;
  }
  UDS_EntityManager::FindEntityBase(this_00,*puVar1);
  return;
}

