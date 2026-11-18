// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// StaticClass @ 14b536590

UClass * __cdecl UDS_NpcBossCameraComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcBossCameraComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcBossCameraComponent",
               &Z_Registration_Info_UClass_UDS_NpcBossCameraComponent.InnerSingleton,
               StaticRegisterNativesUDS_NpcBossCameraComponent,0xbc0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_NpcBossCameraComponent>,
               InternalVTableHelperCtorCaller<UDS_NpcBossCameraComponent>,local_res8,
               UDS_CameraComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcBossCameraComponent.InnerSingleton;
}

// UDS_NpcBossCameraComponent @ 14b538a90

UDS_NpcBossCameraComponent * __thiscall
UDS_NpcBossCameraComponent::UDS_NpcBossCameraComponent
          (UDS_NpcBossCameraComponent *this,FVTableHelper *param_1)

{
  UDS_CameraComponent::UDS_CameraComponent((UDS_CameraComponent *)this,param_1);
  this->MeshOpacity = 0.2;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->CameraCommonData).CameraBattleCurvePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CameraCommonData).CameraBattleCurvePath.Data.ArrayNum = 0;
  (this->CameraCommonData).CameraBattleCurvePath.Data.ArrayMax = 0;
  (this->CameraCommonData).CameraZoomCurvePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CameraCommonData).CameraZoomCurvePath.Data.ArrayNum = 0;
  (this->CameraCommonData).CameraZoomCurvePath.Data.ArrayMax = 0;
  (this->CameraState).field0_0x0.DebugPtr = (UDS_CameraStateNpcBoss *)0x0;
  this->BossEntityID = 0;
  return this;
}

// ~UDS_NpcBossCameraComponent @ 14b539020

void __thiscall
UDS_NpcBossCameraComponent::~UDS_NpcBossCameraComponent(UDS_NpcBossCameraComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->CameraCommonData).CameraZoomCurvePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CameraCommonData).CameraBattleCurvePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_CameraComponent::~UDS_CameraComponent((UDS_CameraComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14b53a810

UClass * __cdecl UDS_NpcBossCameraComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcBossCameraComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcBossCameraComponent",
               &Z_Registration_Info_UClass_UDS_NpcBossCameraComponent.InnerSingleton,
               StaticRegisterNativesUDS_NpcBossCameraComponent,0xbc0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_NpcBossCameraComponent>,
               InternalVTableHelperCtorCaller<UDS_NpcBossCameraComponent>,local_res8,
               UDS_CameraComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcBossCameraComponent.InnerSingleton;
}

// StaticRegisterNativesUDS_NpcBossCameraComponent @ 14b53a9e0

void __cdecl UDS_NpcBossCameraComponent::StaticRegisterNativesUDS_NpcBossCameraComponent(void)

{
  return;
}

// UDS_NpcBossCameraComponent @ 14bc2b410

UDS_NpcBossCameraComponent * __thiscall
UDS_NpcBossCameraComponent::UDS_NpcBossCameraComponent
          (UDS_NpcBossCameraComponent *this,FObjectInitializer *param_1)

{
  UDS_CameraComponent::UDS_CameraComponent((UDS_CameraComponent *)this,param_1);
  this->MeshOpacity = 0.2;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->CameraCommonData).CameraBattleCurvePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CameraCommonData).CameraBattleCurvePath.Data.ArrayNum = 0;
  (this->CameraCommonData).CameraBattleCurvePath.Data.ArrayMax = 0;
  (this->CameraCommonData).CameraZoomCurvePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CameraCommonData).CameraZoomCurvePath.Data.ArrayNum = 0;
  (this->CameraCommonData).CameraZoomCurvePath.Data.ArrayMax = 0;
  (this->CameraState).field0_0x0.DebugPtr = (UDS_CameraStateNpcBoss *)0x0;
  this->BossEntityID = 0;
  return this;
}

// BeginPlay @ 14bc2e4e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_NpcBossCameraComponent::BeginPlay(UDS_NpcBossCameraComponent *this)

{
  UDS_EntityManager *pUVar1;
  
  UActorComponent::BeginPlay((UActorComponent *)this);
  pUVar1 = UDS_EntityManager::GetInst();
  if (pUVar1 != (UDS_EntityManager *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_NpcBossCameraComponent>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar1->OnSpawnEntityEvent,(UDS_NpcBossCameraComponent *)&stack0x00000010,
               (pmf_529a8efb *)this);
    TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_NpcBossCameraComponent>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar1->OnRemoveEntityEvent,(UDS_NpcBossCameraComponent *)&stack0x00000010,
               (pmf_529a8efb *)this);
  }
  return;
}

// EndPlay @ 14bc3a510

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_NpcBossCameraComponent::EndPlay(UDS_NpcBossCameraComponent *this,Type param_1)

{
  UDS_EntityManager *pUVar1;
  
  USceneComponent::EndPlay((USceneComponent *)this,param_1);
  pUVar1 = UDS_EntityManager::GetInst();
  if (pUVar1 != (UDS_EntityManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSpawnEntityEvent,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnRemoveEntityEvent,
               this);
  }
  return;
}

// InitializeCameraStateData @ 14bc49610

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_NpcBossCameraComponent::InitializeCameraStateData(UDS_NpcBossCameraComponent *this)

{
  int iVar1;
  code *pcVar2;
  UWorld *this_00;
  APlayerController *pAVar3;
  UClass *pUVar4;
  FDS_CameraParametersTableRow *pFVar5;
  UDS_LogManager *pUVar6;
  UDS_CameraStateNpcBoss *pUVar7;
  longlong *plVar8;
  undefined1 auStackY_218 [32];
  FWeakObjectPtr local_1d8;
  APlayerController *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_218;
  this_00 = *(UWorld **)&this->field_0xb0;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  pAVar3 = UWorld::GetFirstPlayerController(this_00);
  if (pAVar3 != (APlayerController *)0x0) {
    pUVar4 = Z_Construct_UClass_ADS_PlayerController_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pAVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      FDS_CameraCommonData::SetData(&this->CameraCommonData);
      pFVar5 = FDS_CameraParametersTableRow::Get(1,true);
      if (pFVar5 == (FDS_CameraParametersTableRow *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 != (UDS_LogManager *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_NpcBossCameraComponent::InitializeCameraStateData",0x35,Yes);
          UDS_LogManager::PrintLog
                    (pUVar6,1,Warning,local_148.Ptr,0x80,
                     L"FDS_CameraParametersTableRow is nullptr %d");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
      }
      else {
        pUVar7 = (this->CameraState).field0_0x0.DebugPtr;
        if (pUVar7 == (UDS_CameraStateNpcBoss *)0x0) {
          FObjectInitializer::AssertIfInConstructor
                    ((UObject *)this,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
          pUVar4 = Z_Construct_UClass_UDS_CameraStateNpcBoss_NoRegister();
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_1c8,pUVar4);
          local_1c8._8_8_ = this;
          pUVar7 = (UDS_CameraStateNpcBoss *)
                   StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
          if (local_1c8._64_8_ != 0) {
            plVar8 = (longlong *)(local_1c8 + 0x50);
            if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
              plVar8 = (longlong *)local_1c8._104_8_;
            }
            (**(code **)(*plVar8 + 0x10))();
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar7 != (UDS_CameraStateNpcBoss *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar7);
          }
          (this->CameraState).field0_0x0.DebugPtr = pUVar7;
        }
        UDS_CameraStateNpcBoss::SetBossEntityID(pUVar7,this->BossEntityID);
        pUVar7 = (this->CameraState).field0_0x0.DebugPtr;
        pcVar2 = *(code **)(pUVar7->_padding_ + 0x2b0);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pAVar3);
        }
        local_1d8.ObjectIndex = 0;
        local_1d8.ObjectSerialNumber = 0;
        local_1d0 = pAVar3;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pAVar3);
        }
        FWeakObjectPtr::operator=(&local_1d8,(FObjectPtr)&local_1d0);
        (*pcVar2)(pUVar7,local_1d8,pFVar5,&this->CameraCommonData);
        (**(code **)(((this->CameraState).field0_0x0.DebugPtr)->_padding_ + 0x2e8))();
      }
    }
  }
  return;
}

// OnRemoveEntity @ 14bc529f0

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
UDS_NpcBossCameraComponent::OnRemoveEntity(UDS_NpcBossCameraComponent *this,ulong64 *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UWorld *this_00;
  APlayerController *pAVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  ADS_CameraManager *this_01;
  FWeakObjectPtr local_res8;
  
  if ((this->BossEntityID != 0) && (this->BossEntityID == *param_1)) {
    this->BossEntityID = 0;
    ADS_MainCharacter::GetMainPlayer();
    bVar3 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar3) {
      this_00 = *(UWorld **)&this->field_0xb0;
      if (this_00 == (UWorld *)0x0) {
        this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      pAVar4 = UWorld::GetFirstPlayerController(this_00);
      if (pAVar4 != (APlayerController *)0x0) {
        pUVar5 = Z_Construct_UClass_ADS_PlayerController_NoRegister();
        iVar1 = (int)pUVar5->_padding_;
        if ((iVar1 <= *(int *)(pAVar4->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pAVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar5->_padding_)) {
          pcVar2 = *(code **)(pAVar4->_padding_ + 0xd78);
          pUVar6 = FWeakObjectPtr::Get(&local_res8);
          (*pcVar2)(pAVar4,pUVar6,0,0,0,0);
        }
      }
    }
    this_01 = ADS_CameraManager::GetInst();
    if (this_01 != (ADS_CameraManager *)0x0) {
      ADS_CameraManager::SetBossEntityID(this_01,this->BossEntityID);
      return;
    }
  }
  return;
}

// OnSetViewTarget @ 14bc52ec0

void __thiscall UDS_NpcBossCameraComponent::OnSetViewTarget(UDS_NpcBossCameraComponent *this)

{
  UDS_CameraStateNpcBoss *pUVar1;
  code *pcVar2;
  FWeakObjectPtr local_res8;
  UDS_CameraStateNpcBoss *local_res10;
  
  SetBossEntityID(this);
  SetMeshOpacity(this,this->MeshOpacity);
  (**(code **)(*(longlong *)this + 0x700))(this);
  pUVar1 = (this->CameraState).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_CameraStateNpcBoss *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x2f0))();
    pUVar1 = (this->CameraState).field0_0x0.DebugPtr;
    pcVar2 = *(code **)(pUVar1->_padding_ + 0x2c0);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar1 != (UDS_CameraStateNpcBoss *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 != (UDS_CameraStateNpcBoss *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_CameraStateNpcBoss *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    (*pcVar2)(pUVar1,local_res8,0xf);
  }
  return;
}

// OnSpawnEntity @ 14bc52fa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_NpcBossCameraComponent::OnSpawnEntity(UDS_NpcBossCameraComponent *this,ulong64 *param_1)

{
  int iVar1;
  code *pcVar2;
  EDS_AccountAuthority EVar3;
  bool bVar4;
  FDS_AuthData *this_00;
  UDS_EntityManager *this_01;
  FDS_EntityBase *pFVar5;
  UObject *pUVar6;
  FDS_NpcBaseTableRow *pFVar7;
  FWeakObjectPtr *this_02;
  UClass *pUVar8;
  UWorld *this_03;
  APlayerController *pAVar9;
  ADS_CameraManager *this_04;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UObject *local_18;
  undefined1 local_10 [8];
  
  this_00 = TDS_Singleton<FDS_AuthData>::GetInst();
  EVar3 = FDS_AuthData::GetAccountAuthority(this_00);
  if (EVar3 != GmInvisible) {
    return;
  }
  this_01 = UDS_EntityManager::GetInst();
  if (this_01 == (UDS_EntityManager *)0x0) {
    pFVar5 = (FDS_EntityBase *)0x0;
  }
  else {
    pFVar5 = UDS_EntityManager::FindEntityBase(this_01,*param_1);
  }
  if (pFVar5->EntityType != NPC) {
    return;
  }
  UDS_NPCBattleData::GetData((ulong64)&local_res20);
  bVar4 = FWeakObjectPtr::IsValid(&local_res20);
  if (!bVar4) {
    return;
  }
  pUVar6 = FWeakObjectPtr::Get(&local_res20);
  if ((byte)pUVar6[2].field_0x9 < 4) {
    return;
  }
  pFVar7 = FDS_NpcBaseTableRow::Get(pFVar5->TableID,true);
  if (pFVar7 == (FDS_NpcBaseTableRow *)0x0) {
    return;
  }
  this_02 = (FWeakObjectPtr *)(**(code **)(pFVar5->_padding_ + 0x150))(pFVar5,local_10);
  pUVar6 = FWeakObjectPtr::Get(this_02);
  if (pUVar6 != (UObject *)0x0) {
    pUVar8 = Z_Construct_UClass_ADS_NPCBoss_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar8->_padding_)) goto LAB_14bc5307e;
  }
  pUVar6 = (UObject *)0x0;
LAB_14bc5307e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_18 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_18);
  bVar4 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar4) {
    this->BossEntityID = *param_1;
    this_03 = *(UWorld **)&this->field_0xb0;
    if (this_03 == (UWorld *)0x0) {
      this_03 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    pAVar9 = UWorld::GetFirstPlayerController(this_03);
    if (pAVar9 != (APlayerController *)0x0) {
      pUVar8 = Z_Construct_UClass_ADS_PlayerController_NoRegister();
      iVar1 = (int)pUVar8->_padding_;
      if ((iVar1 <= *(int *)(pAVar9->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar9->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar8->_padding_)) {
        pcVar2 = *(code **)(pAVar9->_padding_ + 0xd78);
        pUVar6 = FWeakObjectPtr::Get(&local_res18);
        (*pcVar2)(pAVar9,pUVar6,0,0,0,0);
      }
    }
    this_04 = ADS_CameraManager::GetInst();
    if (this_04 != (ADS_CameraManager *)0x0) {
      ADS_CameraManager::SetBossEntityID(this_04,this->BossEntityID);
    }
    SetMeshOpacity(this,this->MeshOpacity);
  }
  return;
}

// OnUnsetViewTarget @ 14bc539d0

void __thiscall UDS_NpcBossCameraComponent::OnUnsetViewTarget(UDS_NpcBossCameraComponent *this)

{
  undefined1 auVar1 [16];
  
  if ((UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X != *(double *)&this->field_0xaa0) ||
     (UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y != *(double *)&this->field_0xaa8)) {
    auVar1._8_8_ = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
    auVar1._0_8_ = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined1 (*) [16])&this->field_0xaa0 = auVar1;
    UDS_CameraComponent::UpdateViewportOffset((UDS_CameraComponent *)this);
  }
  SetMeshOpacity(this,__real_3f800000);
  this->BossEntityID = 0;
  return;
}

// SetBossEntityID @ 14bc5cf50

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

void __thiscall UDS_NpcBossCameraComponent::SetBossEntityID(UDS_NpcBossCameraComponent *this)

{
  int iVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  UDS_EntityManager *pUVar6;
  FDS_EntityBase *pFVar7;
  UObject *pUVar8;
  FDS_NpcBaseTableRow *pFVar9;
  FWeakObjectPtr *this_00;
  UClass *pUVar10;
  ADS_CameraManager *this_01;
  UObject *pUVar11;
  uint uVar12;
  UObject *pUVar13;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  undefined1 local_48 [8];
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_40;
  
  pUVar6 = UDS_EntityManager::GetInst();
  if (pUVar6 != (UDS_EntityManager *)0x0) {
    UDS_EntityManager::GetEntityIDArray(pUVar6,&local_40,NPC);
    pUVar11 = (UObject *)0x0;
    pUVar8 = pUVar11;
    pUVar13 = pUVar11;
    if (0 < local_40.ArrayNum) {
      do {
        uVar12 = (uint)pUVar8;
        uVar5 = 0;
        if ((int)uVar12 < local_40.ArrayNum) {
          uVar5 = ~uVar12 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar3.Data = local_40.AllocatorInstance.Data;
        pUVar6 = UDS_EntityManager::GetInst();
        if ((pUVar6 != (UDS_EntityManager *)0x0) &&
           (pFVar7 = UDS_EntityManager::FindEntityBase
                               (pUVar6,*(ulong64 *)(FVar3.Data + (longlong)pUVar13)),
           pFVar7 != (FDS_EntityBase *)0x0)) {
          UDS_NPCBattleData::GetData((ulong64)&local_res18);
          bVar4 = FWeakObjectPtr::IsValid(&local_res18);
          if ((bVar4) &&
             ((pUVar8 = FWeakObjectPtr::Get(&local_res18), 3 < (byte)pUVar8[2].field_0x9 &&
              (pFVar9 = FDS_NpcBaseTableRow::Get(pFVar7->TableID,true),
              pFVar9 != (FDS_NpcBaseTableRow *)0x0)))) {
            this_00 = (FWeakObjectPtr *)(**(code **)(pFVar7->_padding_ + 0x150))(pFVar7,local_48);
            pUVar8 = FWeakObjectPtr::Get(this_00);
            if (pUVar8 == (UObject *)0x0) {
LAB_14bc5d0b8:
              pUVar8 = pUVar11;
            }
            else {
              pUVar10 = Z_Construct_UClass_ADS_NPCBoss_NoRegister();
              iVar1 = (int)pUVar10->_padding_;
              if ((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar1) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
                  &pUVar10->_padding_)) goto LAB_14bc5d0b8;
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar8);
            }
            local_res10.ObjectIndex = 0;
            local_res10.ObjectSerialNumber = 0;
            local_res20 = pUVar8;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar8);
            }
            FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
            bVar4 = FWeakObjectPtr::IsValid(&local_res10);
            if (bVar4) {
              uVar5 = 0;
              if ((int)uVar12 < local_40.ArrayNum) {
                uVar5 = ~uVar12 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              this->BossEntityID =
                   *(ulong64 *)(local_40.AllocatorInstance.Data + (longlong)(int)uVar12 * 8);
              break;
            }
          }
        }
        pUVar8 = (UObject *)(ulonglong)(uVar12 + 1);
        pUVar13 = (UObject *)&pUVar13->field_0x8;
      } while ((int)(uVar12 + 1) < local_40.ArrayNum);
    }
    this_01 = ADS_CameraManager::GetInst();
    if (this_01 != (ADS_CameraManager *)0x0) {
      ADS_CameraManager::SetBossEntityID(this_01,this->BossEntityID);
    }
    if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.AllocatorInstance.Data);
    }
  }
  return;
}

// SetMeshOpacity @ 14bc61230

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
UDS_NpcBossCameraComponent::SetMeshOpacity(UDS_NpcBossCameraComponent *this,float param_1)

{
  int iVar1;
  UDS_EntityManager *this_00;
  FDS_EntityBase *pFVar2;
  longlong lVar3;
  FName local_res18 [2];
  ForAnyElementType local_28;
  undefined8 local_20;
  
  this_00 = UDS_EntityManager::GetInst();
  if ((this_00 != (UDS_EntityManager *)0x0) &&
     (pFVar2 = UDS_EntityManager::FindEntityBase(this_00,this->BossEntityID),
     pFVar2 != (FDS_EntityBase *)0x0)) {
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20 = 0;
    ::FName::FName(local_res18,L"MaskedOpacity");
    iVar1 = (int)local_20;
    if ((int)local_20 == local_20._4_4_) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,&local_28,(int *)((longlong)&local_20 + 4));
    }
    lVar3 = (longlong)iVar1;
    local_20 = CONCAT44(local_20._4_4_,iVar1 + 1);
    *(uint *)(local_28.Data + lVar3 * 0xc) = local_res18[0].ComparisonIndex.Value.Value;
    *(uint *)(local_28.Data + lVar3 * 0xc + 4) = local_res18[0].Number;
    *(float *)(local_28.Data + lVar3 * 0xc + 8) = param_1;
    (**(code **)(pFVar2->_padding_ + 0x108))(pFVar2,&local_28);
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
  }
  return;
}

// SetViewTargetMainCharacter @ 14bc64e20

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
UDS_NpcBossCameraComponent::SetViewTargetMainCharacter(UDS_NpcBossCameraComponent *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UWorld *this_00;
  APlayerController *pAVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  FWeakObjectPtr local_res10 [3];
  
  ADS_MainCharacter::GetMainPlayer();
  bVar3 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar3) {
    this_00 = *(UWorld **)&this->field_0xb0;
    if (this_00 == (UWorld *)0x0) {
      this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    pAVar4 = UWorld::GetFirstPlayerController(this_00);
    if (pAVar4 != (APlayerController *)0x0) {
      pUVar5 = Z_Construct_UClass_ADS_PlayerController_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pAVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        pcVar2 = *(code **)(pAVar4->_padding_ + 0xd78);
        pUVar6 = FWeakObjectPtr::Get(local_res10);
        (*pcVar2)(pAVar4,pUVar6,0,0,0,0);
      }
    }
  }
  return;
}

// TickComponent @ 14bc67e10

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
UDS_NpcBossCameraComponent::TickComponent
          (UDS_NpcBossCameraComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  UDS_CameraStateNpcBoss *pUVar1;
  
  UDS_CameraComponent::TickComponent((UDS_CameraComponent *)this,param_1,param_2,param_3);
  pUVar1 = (this->CameraState).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_CameraStateNpcBoss *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x2e0))(pUVar1,param_1);
  }
  return;
}

