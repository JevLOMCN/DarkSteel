// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 91

// StaticClass @ 14b4e4260

UClass * __cdecl ADS_MainCharacter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_MainCharacter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MainCharacter",
               &Z_Registration_Info_UClass_ADS_MainCharacter.InnerSingleton,
               StaticRegisterNativesADS_MainCharacter,0xab0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<ADS_MainCharacter>,
               InternalVTableHelperCtorCaller<ADS_MainCharacter>,local_res8,ACharacter::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_MainCharacter.InnerSingleton;
}

// ADS_MainCharacter @ 14b4e8250

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

ADS_MainCharacter * __thiscall
ADS_MainCharacter::ADS_MainCharacter(ADS_MainCharacter *this,FVTableHelper *param_1)

{
  ACharacter::ACharacter((ACharacter *)this,param_1);
  FDS_EntityBase::FDS_EntityBase((FDS_EntityBase *)&this->field_0x678);
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavAgentInterface__;
  *(undefined ***)&this->field_0x678 = &___7ADS_MainCharacter__6B_;
  (this->TempAnimBPObject).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->PartsComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartsComponents).ArrayNum = 0;
  (this->PartsComponents).ArrayMax = 0;
  (this->CustomizableSkmComponent).field0_0x0.DebugPtr = (UDS_CustomizableSkeletalComponent *)0x0;
  (this->AbilitySystemComponent).field0_0x0.DebugPtr = (UDS_AbilitySystemComponent *)0x0;
  (this->MovementCore).field0_0x0.DebugPtr = (UDS_MovementCore *)0x0;
  (this->SyncSendComponent).field0_0x0.DebugPtr = (UDS_SyncSendComponent *)0x0;
  (this->SyncRecvComponent).field0_0x0.DebugPtr = (UDS_SyncRecvComponent *)0x0;
  (this->TrajectoryComponent).field0_0x0.DebugPtr = (UDS_CharacterTrajectoryComponent *)0x0;
  (this->NameTagWidgetComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->InteractionComponent).field0_0x0.DebugPtr = (UDS_InteractionComponent *)0x0;
  (this->CameraBoom).field0_0x0.DebugPtr = (UDS_SpringArmComponent *)0x0;
  (this->FollowCamera).field0_0x0.DebugPtr = (UDS_MainCameraComponent *)0x0;
  (this->TeleportComponent).field0_0x0.DebugPtr = (UDS_MainCharacterTeleportComponent *)0x0;
  (this->StateComponent).field0_0x0.DebugPtr = (UDS_MainCharacterStateComponent *)0x0;
  (this->CollisionComponent).field0_0x0.DebugPtr = (UDS_MainCharacterCollisionComponent *)0x0;
  (this->SkmReactComponent).field0_0x0.DebugPtr = (UWN_SKMReactComponent *)0x0;
  (this->FallingHigherTimer).Handle = 0;
  this->bIsActorSequencerPlaying = false;
  (this->DefaultMaterialList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultMaterialList).ArrayNum = 0;
  (this->DefaultMaterialList).ArrayMax = 0;
  *(undefined8 *)&this->ChangeActorSequencerPlayDelegate = 0;
  *(undefined8 *)&(this->ChangeActorSequencerPlayDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangeActorSequencerPlayDelegate).field_0x10 = 0;
  this->PlayerRotationInterpSpeed = 10.0;
  *(undefined8 *)&(this->ChangeActorSequencerPlayDelegate).field_0x18 = 2;
  return this;
}

// ~ADS_MainCharacter @ 14b4e9610

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

void __thiscall ADS_MainCharacter::~ADS_MainCharacter(ADS_MainCharacter *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavAgentInterface__;
  *(undefined ***)&this->field_0x678 = &___7ADS_MainCharacter__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangeActorSequencerPlayDelegate).field_0x8,
             *(int *)&(this->ChangeActorSequencerPlayDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ChangeActorSequencerPlayDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangeActorSequencerPlayDelegate);
  pFVar2 = (this->DefaultMaterialList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PartsComponents).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FDS_EntityBase::~FDS_EntityBase((FDS_EntityBase *)&this->field_0x678);
  ACharacter::~ACharacter((ACharacter *)this);
  return;
}

// GetActor @ 14b4eadd0

TWeakObjectPtr<AActor,FWeakObjectPtr> __thiscall
ADS_MainCharacter::GetActor(ADS_MainCharacter *this)

{
  undefined1 *puVar1;
  FWeakObjectPtr in_RDX;
  undefined1 *local_res8;
  
  puVar1 = &this[-1].field_0x438;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (puVar1 != (undefined1 *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)puVar1);
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = puVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (puVar1 != (undefined1 *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)puVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<AActor,FWeakObjectPtr>)in_RDX;
}

// GetFluxSurfaceLocation @ 14b4eae40

TVector<double> * __thiscall
ADS_MainCharacter::GetFluxSurfaceLocation
          (ADS_MainCharacter *this,TVector<double> *__return_storage_ptr__)

{
  UFunction *this_00;
  UClass *pUVar1;
  double local_28;
  double dStack_20;
  double local_18;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_ADS_MainCharacter_GetFluxSurfaceLocation);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_18 = 0.0;
    local_28 = 0.0;
    dStack_20 = 0.0;
    (**(code **)(*(longlong *)this + 0x260))(this,this_00,&local_28);
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_28;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_20;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = local_18;
    return __return_storage_ptr__;
  }
  (**(code **)(*(longlong *)this + 0x9e8))(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetFluxSurfaceLocation_Implementation @ 14b4eaef0

TVector<double> * __thiscall
ADS_MainCharacter::GetFluxSurfaceLocation_Implementation
          (ADS_MainCharacter *this,TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetPlayerRotationInterpSpeed @ 14b4eaf20

float __thiscall ADS_MainCharacter::GetPlayerRotationInterpSpeed(ADS_MainCharacter *this)

{
  return *(float *)&this->field_0x3e8;
}

// GetPrivateStaticClass @ 14b4eaf30

UClass * __cdecl ADS_MainCharacter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_MainCharacter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MainCharacter",
               &Z_Registration_Info_UClass_ADS_MainCharacter.InnerSingleton,
               StaticRegisterNativesADS_MainCharacter,0xab0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<ADS_MainCharacter>,
               InternalVTableHelperCtorCaller<ADS_MainCharacter>,local_res8,ACharacter::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_MainCharacter.InnerSingleton;
}

// OnChangedPreset @ 14b4ebd50

void __thiscall ADS_MainCharacter::OnChangedPreset(ADS_MainCharacter *this)

{
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ADS_MainCharacter_OnChangedPreset);
                    /* WARNING: Could not recover jumptable at 0x00014b4ebd7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,0,*(code **)(*(longlong *)this + 0x260));
  return;
}

// OnChargingPowerJump @ 14b4ebd90

void __thiscall ADS_MainCharacter::OnChargingPowerJump(ADS_MainCharacter *this)

{
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ADS_MainCharacter_OnChargingPowerJump);
                    /* WARNING: Could not recover jumptable at 0x00014b4ebdbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,0,*(code **)(*(longlong *)this + 0x260));
  return;
}

// OnEndChargingPowerJump @ 14b4ebdd0

void __thiscall ADS_MainCharacter::OnEndChargingPowerJump(ADS_MainCharacter *this)

{
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_ADS_MainCharacter_OnEndChargingPowerJump);
                    /* WARNING: Could not recover jumptable at 0x00014b4ebdfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,0,*(code **)(*(longlong *)this + 0x260));
  return;
}

// OnEndPowerJump @ 14b4ebe10

void __thiscall ADS_MainCharacter::OnEndPowerJump(ADS_MainCharacter *this)

{
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ADS_MainCharacter_OnEndPowerJump);
                    /* WARNING: Could not recover jumptable at 0x00014b4ebe3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,0,*(code **)(*(longlong *)this + 0x260));
  return;
}

// OnEnterBreach @ 14b4ebe50

void __thiscall ADS_MainCharacter::OnEnterBreach(ADS_MainCharacter *this)

{
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ADS_MainCharacter_OnEnterBreach);
                    /* WARNING: Could not recover jumptable at 0x00014b4ebe7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,0,*(code **)(*(longlong *)this + 0x260));
  return;
}

// OnFootStep @ 14b4ebe90

void __thiscall ADS_MainCharacter::OnFootStep(ADS_MainCharacter *this,FName param_1)

{
  UFunction *pUVar1;
  FName local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ADS_MainCharacter_OnFootStep);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res8);
  return;
}

// OnStartAirDash @ 14b4ebed0

void __thiscall ADS_MainCharacter::OnStartAirDash(ADS_MainCharacter *this)

{
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ADS_MainCharacter_OnStartAirDash);
                    /* WARNING: Could not recover jumptable at 0x00014b4ebefd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,0,*(code **)(*(longlong *)this + 0x260));
  return;
}

// OnStartFlyingCrash @ 14b4ebf10

void __thiscall ADS_MainCharacter::OnStartFlyingCrash(ADS_MainCharacter *this)

{
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ADS_MainCharacter_OnStartFlyingCrash);
                    /* WARNING: Could not recover jumptable at 0x00014b4ebf3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,0,*(code **)(*(longlong *)this + 0x260));
  return;
}

// OnStartHovering @ 14b4ebf50

void __thiscall ADS_MainCharacter::OnStartHovering(ADS_MainCharacter *this)

{
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ADS_MainCharacter_OnStartHovering);
                    /* WARNING: Could not recover jumptable at 0x00014b4ebf7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,0,*(code **)(*(longlong *)this + 0x260));
  return;
}

// OnStartPowerJump @ 14b4ebf90

void __thiscall ADS_MainCharacter::OnStartPowerJump(ADS_MainCharacter *this)

{
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ADS_MainCharacter_OnStartPowerJump);
                    /* WARNING: Could not recover jumptable at 0x00014b4ebfbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,0,*(code **)(*(longlong *)this + 0x260));
  return;
}

// OnStopSequencePlay @ 14b4ebfd0

void __thiscall ADS_MainCharacter::OnStopSequencePlay(ADS_MainCharacter *this)

{
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ADS_MainCharacter_OnStopSequencePlay);
                    /* WARNING: Could not recover jumptable at 0x00014b4ebffd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,0,*(code **)(*(longlong *)this + 0x260));
  return;
}

// StartSpawnInEffect @ 14b4ec020

void __thiscall ADS_MainCharacter::StartSpawnInEffect(ADS_MainCharacter *this)

{
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ADS_MainCharacter_StartSpawnInEffect);
                    /* WARNING: Could not recover jumptable at 0x00014b4ec04d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,0,*(code **)(*(longlong *)this + 0x260));
  return;
}

// StaticRegisterNativesADS_MainCharacter @ 14b4ec060

void __cdecl ADS_MainCharacter::StaticRegisterNativesADS_MainCharacter(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_ADS_MainCharacter_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetFluxSurfaceLocation @ 14b4ed080

void __cdecl
ADS_MainCharacter::execGetFluxSurfaceLocation(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_28 [32];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x9e8))(param_1,local_28);
  uVar1 = puVar2[1];
  *(undefined8 *)param_3 = *puVar2;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar2[2];
  return;
}

// execGetFootStepProvider @ 14b4ed0d0

void __cdecl
ADS_MainCharacter::execGetFootStepProvider(UObject *param_1,FFrame *param_2,void *param_3)

{
  FName FVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar1 = GetFootStepProvider((ADS_MainCharacter *)param_1);
  *(undefined8 *)param_3 = *(undefined8 *)FVar1;
  return;
}

// execK2_SetActorSequencerPlaying @ 14b4ed370

void __cdecl
ADS_MainCharacter::execK2_SetActorSequencerPlaying(UObject *param_1,FFrame *param_2,void *param_3)

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
  SetActorSequencerPlaying((ADS_MainCharacter *)param_1,local_res10[0] != 0);
  return;
}

// execOnPhysicsVolumeChanged @ 14b4ed630

void __cdecl
ADS_MainCharacter::execOnPhysicsVolumeChanged(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  APhysicsVolume *local_res10;
  
  local_res10 = (APhysicsVolume *)0x0;
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
  OnPhysicsVolumeChanged((ADS_MainCharacter *)param_1,local_res10);
  return;
}

// ADS_MainCharacter @ 14bc29c20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

ADS_MainCharacter * __thiscall
ADS_MainCharacter::ADS_MainCharacter(ADS_MainCharacter *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  byte *pbVar2;
  longlong *plVar3;
  FName FVar4;
  UClass *pUVar5;
  FName *pFVar6;
  UDS_AbilitySystemComponent *pUVar7;
  UDS_CharacterTrajectoryComponent *pUVar8;
  UDS_ActorAttachedWidgetComponent *pUVar9;
  UDS_InteractionComponent *this_00;
  UDS_SpringArmComponent *pUVar10;
  UDS_MainCameraComponent *this_01;
  UWN_SKMReactComponent *pUVar11;
  UDS_MainCharacterTeleportComponent *pUVar12;
  UDS_MainCharacterStateComponent *pUVar13;
  UDS_MainCharacterCollisionComponent *pUVar14;
  UDS_CustomizableSkeletalComponent *this_02;
  FName local_res8;
  
  FVar4 = ACharacter::CharacterMovementComponentName;
  pUVar5 = Z_Construct_UClass_UDS_MainPlayerMovementComponent_NoRegister();
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar4);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar4,pUVar5,(TArrayView<FName_const_,int> *)0x0);
  ACharacter::ACharacter((ACharacter *)this,param_1);
  FDS_EntityBase::FDS_EntityBase((FDS_EntityBase *)&this->field_0x678);
  plVar3 = *(longlong **)&this->field_0x350;
  *(undefined ***)this = &_vftable__for__AActor__;
  (this->TempAnimBPObject).field0_0x0.DebugPtr = (UObject *)0x0;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavAgentInterface__;
  *(undefined ***)&this->field_0x678 = &___7ADS_MainCharacter__6B_;
  (this->PartsComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartsComponents).ArrayNum = 0;
  (this->PartsComponents).ArrayMax = 0;
  (this->CustomizableSkmComponent).field0_0x0.DebugPtr = (UDS_CustomizableSkeletalComponent *)0x0;
  (this->AbilitySystemComponent).field0_0x0.DebugPtr = (UDS_AbilitySystemComponent *)0x0;
  (this->MovementCore).field0_0x0.DebugPtr = (UDS_MovementCore *)0x0;
  (this->SyncSendComponent).field0_0x0.DebugPtr = (UDS_SyncSendComponent *)0x0;
  (this->SyncRecvComponent).field0_0x0.DebugPtr = (UDS_SyncRecvComponent *)0x0;
  (this->TrajectoryComponent).field0_0x0.DebugPtr = (UDS_CharacterTrajectoryComponent *)0x0;
  (this->NameTagWidgetComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->InteractionComponent).field0_0x0.DebugPtr = (UDS_InteractionComponent *)0x0;
  (this->CameraBoom).field0_0x0.DebugPtr = (UDS_SpringArmComponent *)0x0;
  (this->FollowCamera).field0_0x0.DebugPtr = (UDS_MainCameraComponent *)0x0;
  (this->TeleportComponent).field0_0x0.DebugPtr = (UDS_MainCharacterTeleportComponent *)0x0;
  (this->StateComponent).field0_0x0.DebugPtr = (UDS_MainCharacterStateComponent *)0x0;
  (this->CollisionComponent).field0_0x0.DebugPtr = (UDS_MainCharacterCollisionComponent *)0x0;
  (this->SkmReactComponent).field0_0x0.DebugPtr = (UWN_SKMReactComponent *)0x0;
  this->PlayerRotationInterpSpeed = 10.0;
  (this->FallingHigherTimer).Handle = 0;
  this->bIsActorSequencerPlaying = false;
  (this->DefaultMaterialList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultMaterialList).ArrayNum = 0;
  (this->DefaultMaterialList).ArrayMax = 0;
  *(undefined8 *)&this->ChangeActorSequencerPlayDelegate = 0;
  *(undefined8 *)&(this->ChangeActorSequencerPlayDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangeActorSequencerPlayDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ChangeActorSequencerPlayDelegate).field_0x18 = 2;
  if (plVar3 != (longlong *)0x0) {
    ::FName::FName(&local_res8,L"Player");
    *(uint *)&this->field_0x6d8 = local_res8.ComparisonIndex.Value;
    *(uint *)&this->field_0x6dc = local_res8.Number;
    (**(code **)(*plVar3 + 0x788))(plVar3,local_res8,1);
  }
  pFVar6 = ::FName::FName(&local_res8,L"AbilitySystemComponent");
  FVar4 = *pFVar6;
  pUVar5 = Z_Construct_UClass_UDS_AbilitySystemComponent_NoRegister();
  pUVar7 = (UDS_AbilitySystemComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar4,pUVar5,pUVar5,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (UDS_AbilitySystemComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->AbilitySystemComponent).field0_0x0.DebugPtr = pUVar7;
  pFVar6 = ::FName::FName(&local_res8,L"TrajectoryComponent");
  FVar4 = *pFVar6;
  pUVar5 = Z_Construct_UClass_UDS_CharacterTrajectoryComponent_NoRegister();
  pUVar8 = (UDS_CharacterTrajectoryComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar4,pUVar5,pUVar5,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar8 != (UDS_CharacterTrajectoryComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  (this->TrajectoryComponent).field0_0x0.DebugPtr = pUVar8;
  pFVar6 = ::FName::FName(&local_res8,L"NameTagWidgetComponent");
  FVar4 = *pFVar6;
  pUVar5 = Z_Construct_UClass_UDS_ActorAttachedWidgetComponent_NoRegister();
  pUVar9 = (UDS_ActorAttachedWidgetComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar4,pUVar5,pUVar5,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar9 == (UDS_ActorAttachedWidgetComponent *)0x0)) {
    (this->NameTagWidgetComponent).field0_0x0.DebugPtr = pUVar9;
    if (pUVar9 != (UDS_ActorAttachedWidgetComponent *)0x0) goto LAB_14bc29ea6;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
    (this->NameTagWidgetComponent).field0_0x0.DebugPtr = pUVar9;
LAB_14bc29ea6:
    (**(code **)(*(longlong *)pUVar9 + 0x788))(pUVar9,UCollisionProfile::NoCollision_ProfileName,1);
  }
  pFVar6 = ::FName::FName(&local_res8,L"InteractionComponent");
  FVar4 = *pFVar6;
  pUVar5 = Z_Construct_UClass_UDS_InteractionComponent_NoRegister();
  this_00 = (UDS_InteractionComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar4,pUVar5,pUVar5,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (this_00 == (UDS_InteractionComponent *)0x0)) {
    (this->InteractionComponent).field0_0x0.DebugPtr = this_00;
    if (this_00 != (UDS_InteractionComponent *)0x0) goto LAB_14bc29f1e;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)this_00);
    (this->InteractionComponent).field0_0x0.DebugPtr = this_00;
LAB_14bc29f1e:
    if (*(USceneComponent **)&this->field_0x1b8 != (USceneComponent *)0x0) {
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
      USceneComponent::SetupAttachment
                ((USceneComponent *)this_00,*(USceneComponent **)&this->field_0x1b8,(FName)0x0);
    }
  }
  pFVar6 = ::FName::FName(&local_res8,L"CameraBoom");
  FVar4 = *pFVar6;
  pUVar5 = Z_Construct_UClass_UDS_SpringArmComponent_NoRegister();
  pUVar10 = (UDS_SpringArmComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar4,pUVar5,pUVar5,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar10 == (UDS_SpringArmComponent *)0x0)) {
    (this->CameraBoom).field0_0x0.DebugPtr = pUVar10;
    if (pUVar10 != (UDS_SpringArmComponent *)0x0) goto LAB_14bc29f9c;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
    (this->CameraBoom).field0_0x0.DebugPtr = pUVar10;
LAB_14bc29f9c:
    if (*(USceneComponent **)&this->field_0x1b8 != (USceneComponent *)0x0) {
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
      USceneComponent::SetupAttachment
                ((USceneComponent *)pUVar10,*(USceneComponent **)&this->field_0x1b8,(FName)0x0);
      puVar1 = &((this->CameraBoom).field0_0x0.DebugPtr)->field_0x290;
      *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffd;
      *(undefined4 *)&((this->CameraBoom).field0_0x0.DebugPtr)->field_0x250 = 0x43c80000;
    }
  }
  pFVar6 = ::FName::FName(&local_res8,L"FollowCamera");
  FVar4 = *pFVar6;
  pUVar5 = Z_Construct_UClass_UDS_MainCameraComponent_NoRegister();
  this_01 = (UDS_MainCameraComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar4,pUVar5,pUVar5,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (this_01 == (UDS_MainCameraComponent *)0x0)) {
    (this->FollowCamera).field0_0x0.DebugPtr = this_01;
    if (this_01 == (UDS_MainCameraComponent *)0x0) goto LAB_14bc2a062;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)this_01);
    (this->FollowCamera).field0_0x0.DebugPtr = this_01;
  }
  pUVar10 = (this->CameraBoom).field0_0x0.DebugPtr;
  if (pUVar10 != (UDS_SpringArmComponent *)0x0) {
    USceneComponent::SetupAttachment
              ((USceneComponent *)this_01,(USceneComponent *)pUVar10,USpringArmComponent::SocketName
              );
    pbVar2 = (byte *)((longlong)&((this->FollowCamera).field0_0x0.DebugPtr)->_padding_ + 2);
    *pbVar2 = *pbVar2 & 0xfd;
  }
LAB_14bc2a062:
  pFVar6 = ::FName::FName(&local_res8,L"SKMReactComponent");
  FVar4 = *pFVar6;
  pUVar5 = Z_Construct_UClass_UWN_SKMReactComponent_NoRegister();
  pUVar11 = (UWN_SKMReactComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar4,pUVar5,pUVar5,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar11 != (UWN_SKMReactComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  (this->SkmReactComponent).field0_0x0.DebugPtr = pUVar11;
  pFVar6 = ::FName::FName(&local_res8,L"TeleportComponent");
  FVar4 = *pFVar6;
  pUVar5 = Z_Construct_UClass_UDS_MainCharacterTeleportComponent_NoRegister();
  pUVar12 = (UDS_MainCharacterTeleportComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar4,pUVar5,pUVar5,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar12 != (UDS_MainCharacterTeleportComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar12);
  }
  (this->TeleportComponent).field0_0x0.DebugPtr = pUVar12;
  pFVar6 = ::FName::FName(&local_res8,L"StateComponent");
  FVar4 = *pFVar6;
  pUVar5 = Z_Construct_UClass_UDS_MainCharacterStateComponent_NoRegister();
  pUVar13 = (UDS_MainCharacterStateComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar4,pUVar5,pUVar5,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 != (UDS_MainCharacterStateComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  (this->StateComponent).field0_0x0.DebugPtr = pUVar13;
  pFVar6 = ::FName::FName(&local_res8,L"CollisionComponent");
  FVar4 = *pFVar6;
  pUVar5 = Z_Construct_UClass_UDS_MainCharacterCollisionComponent_NoRegister();
  pUVar14 = (UDS_MainCharacterCollisionComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar4,pUVar5,pUVar5,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar14 != (UDS_MainCharacterCollisionComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  (this->CollisionComponent).field0_0x0.DebugPtr = pUVar14;
  pFVar6 = ::FName::FName(&local_res8,"CustomizableSkmComponent");
  FVar4 = *pFVar6;
  pUVar5 = Z_Construct_UClass_UDS_CustomizableSkeletalComponent_NoRegister();
  this_02 = (UDS_CustomizableSkeletalComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar4,pUVar5,pUVar5,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_02 != (UDS_CustomizableSkeletalComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_02);
  }
  (this->CustomizableSkmComponent).field0_0x0.DebugPtr = this_02;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)this_02,*(USceneComponent **)&this->field_0x340,(FName)0x0);
  ((this->CustomizableSkmComponent).field0_0x0.DebugPtr)->field_0x271 = 0;
  ((this->CustomizableSkmComponent).field0_0x0.DebugPtr)->field_0x272 = 0;
  return this;
}

// BaseChange @ 14bc2d840

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_MainCharacter::BaseChange(ADS_MainCharacter *this)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  UObject *pUVar4;
  FDS_EntityBase *pFVar5;
  FWeakObjectPtr FVar6;
  code *pcVar7;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_58;
  UObject *local_50;
  undefined8 local_48;
  UObject *local_40;
  UObject *local_38;
  undefined8 local_30;
  
  ACharacter::BaseChange((ACharacter *)this);
  local_50 = *(UObject **)&this->field_0x348;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_50 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_50);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_50 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_50);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_50);
  bVar1 = TWeakObjectPtr<UCharacterMovementComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UCharacterMovementComponent,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (bVar1) {
    bVar1 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2380957129612722791>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\DS_MainCharacter.cpp"
                       ,0x267,"false");
    if (bVar1) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    pUVar4 = FWeakObjectPtr::Get(&local_res8);
    cVar2 = (**(code **)(*(longlong *)&pUVar4[7].field_0x10 + 0xf0))();
    pUVar4 = FWeakObjectPtr::Get(&local_res8);
    cVar3 = (**(code **)(*(longlong *)&pUVar4[7].field_0x10 + 0xd8))();
    if (*(longlong *)&this->field_0x368 == 0) {
      if (cVar2 != '\0') {
        return;
      }
      if (cVar3 != '\0') {
        return;
      }
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      local_48 = 0;
      pcVar7 = *(code **)(*(longlong *)&this->field_0x678 + 0x1c8);
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_48);
      FVar6 = local_res18;
    }
    else {
      pUVar4 = *(UObject **)(*(longlong *)&this->field_0x368 + 0xa8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_40 = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_40);
      pFVar5 = FDS_EntityBase::GetEntityBaseFromActor
                         ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res10);
      if ((pFVar5 != (FDS_EntityBase *)0x0) && (pFVar5->EntityType == Transport)) {
        pcVar7 = *(code **)(*(longlong *)&this->field_0x678 + 0x1c8);
        local_38 = FWeakObjectPtr::Get(&local_res10);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_38);
        }
        local_res20.ObjectIndex = 0;
        local_res20.ObjectSerialNumber = 0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_38);
        }
        FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_38);
        (*pcVar7)(&this->field_0x678,local_res20);
        return;
      }
      local_58.ObjectIndex = 0;
      local_58.ObjectSerialNumber = 0;
      local_30 = 0;
      pcVar7 = *(code **)(*(longlong *)&this->field_0x678 + 0x1c8);
      FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_30);
      FVar6 = local_58;
    }
    (*pcVar7)(&this->field_0x678,FVar6);
  }
  return;
}

// BeginPlay @ 14bc2df00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall ADS_MainCharacter::BeginPlay(ADS_MainCharacter *this)

{
  TObjectPtr<UDS_MainCharacterCollisionComponent>_u_0 TVar1;
  UDS_AbilitySystemComponent *pUVar2;
  UWN_SKMReactComponent *pUVar3;
  code *pcVar4;
  bool bVar5;
  UDS_ZoneManager *pUVar6;
  UObject *pUVar7;
  UObject *pUVar8;
  UDS_EntityManager *this_00;
  UDS_ItemDataSet *this_01;
  UClass *pUVar9;
  UDS_MovementCore *pUVar10;
  UWorld *this_02;
  UWN_UDS_Subsystem *pUVar11;
  longlong *plVar12;
  undefined1 auStack_158 [32];
  TSharedPtr<FDS_EquipmentItemCharacterData,1> local_138;
  FWeakObjectPtr local_128;
  FWeakObjectPtr local_120;
  FWeakObjectPtr local_118;
  TObjectPtr<UDS_MainCharacterCollisionComponent>_u_0 local_110;
  UObject *local_108;
  UObject *local_100;
  code *local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  code *local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  FDS_EquipmentItemCharacterData *local_c8;
  undefined8 uStack_c0;
  code *local_b8;
  longlong lStack_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_158;
  ACharacter::BeginPlay((ACharacter *)this);
  pUVar6 = UDS_ZoneManager::GetInst();
  if ((pUVar6 != (UDS_ZoneManager *)0x0) &&
     (TVar1 = (TObjectPtr<UDS_MainCharacterCollisionComponent>_u_0)
              (this->CollisionComponent).field0_0x0.DebugPtr,
     TVar1.DebugPtr != (UDS_MainCharacterCollisionComponent *)0x0)) {
    local_138.Object =
         (FDS_EquipmentItemCharacterData *)
         UDS_MainCharacterCollisionComponent::OnChangedZoneDistrictID;
    local_138.SharedReferenceCount.ReferenceController._0_4_ = 0;
    local_138.SharedReferenceCount.ReferenceController._4_4_ = uStack_e0._4_4_;
    local_110 = TVar1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    uStack_c0._4_4_ = local_138.SharedReferenceCount.ReferenceController._4_4_;
    uStack_c0._0_4_ = local_138.SharedReferenceCount.ReferenceController._0_4_;
    local_c8 = local_138.Object;
    TMulticastDelegateRegistration<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_MainCharacterCollisionComponent>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>
                *)&pUVar6->ZoneDistrictChangedDelegate,
               (TObjectPtr<UDS_MainCharacterCollisionComponent>)&local_f8,
               (pmf_ac531fec *)&local_110.ObjectPtr);
  }
  pUVar7 = *(UObject **)&this->field_0x348;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  local_128.ObjectIndex = 0;
  local_128.ObjectSerialNumber = 0;
  local_108 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  FWeakObjectPtr::operator=(&local_128,(FObjectPtr)&local_108);
  bVar5 = TWeakObjectPtr<UCharacterMovementComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UCharacterMovementComponent,FWeakObjectPtr> *)&local_128,
                     (void *)0x0);
  if ((!bVar5) &&
     ((this->AbilitySystemComponent).field0_0x0.DebugPtr != (UDS_AbilitySystemComponent *)0x0)) {
    pUVar7 = FWeakObjectPtr::Get(&local_128);
    pUVar2 = (this->AbilitySystemComponent).field0_0x0.DebugPtr;
    FTickFunction::AddPrerequisite
              ((FTickFunction *)&pUVar7[1].field_0x10,(UObject *)pUVar2,
               (FTickFunction *)&pUVar2->_padding_);
  }
  ADS_PlayerController::GetPlayerController();
  bVar5 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> *)&local_120,(void *)0x0);
  if ((!bVar5) &&
     (pUVar2 = (this->AbilitySystemComponent).field0_0x0.DebugPtr,
     pUVar2 != (UDS_AbilitySystemComponent *)0x0)) {
    pUVar7 = FWeakObjectPtr::Get(&local_120);
    pUVar8 = FWeakObjectPtr::Get(&local_120);
    FTickFunction::AddPrerequisite
              ((FTickFunction *)&pUVar2->_padding_,pUVar8,(FTickFunction *)(pUVar7 + 1));
  }
  this_00 = UDS_EntityManager::GetInst();
  if (this_00 != (UDS_EntityManager *)0x0) {
    UDS_EntityManager::GetCurrentMainCharEntityID(this_00,true);
  }
  TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_118);
  bVar5 = FWeakObjectPtr::IsValid(&local_118);
  if (bVar5) {
    this_01 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_118);
    UDS_ItemDataSet::GetEquipmentItemCharacterData(this_01,&local_138);
    if (local_138.Object != (FDS_EquipmentItemCharacterData *)0x0) {
      if ((local_138.Object == (FDS_EquipmentItemCharacterData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uStack_f0 = 0;
      local_f8 = OnChangedEquipItem;
      lStack_b0 = (ulonglong)uStack_ec << 0x20;
      local_b8 = OnChangedEquipItem;
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_EquipSlotType,__int64),FDefaultDelegateUserPolicy>
      ::AddUObject<ADS_MainCharacter>
                (&(local_138.Object)->OnChangedEquipAllDelegate,(ADS_MainCharacter *)local_d8,
                 (pmf_c5e8c6dc *)this);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_138.SharedReferenceCount.ReferenceController._4_4_,
                        local_138.SharedReferenceCount.ReferenceController._0_4_));
  }
  pUVar3 = (this->SkmReactComponent).field0_0x0.DebugPtr;
  if (pUVar3 != (UWN_SKMReactComponent *)0x0) {
    local_100 = *(UObject **)&this->field_0x340;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_100 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_100);
    }
    FWeakObjectPtr::operator=(&(pUVar3->Mesh).WeakPtr,(FObjectPtr)&local_100);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->SkmReactComponent).field0_0x0.DebugPtr)->FootprintDelegate,this);
    local_138.Object = (FDS_EquipmentItemCharacterData *)OnFootStepEvent;
    local_138.SharedReferenceCount.ReferenceController._0_4_ = 0;
    uStack_e0 = (ulonglong)local_138.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    local_e8 = OnFootStepEvent;
    TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy>::
    AddUObject<ADS_MainCharacter>
              ((TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy> *)
               &((this->SkmReactComponent).field0_0x0.DebugPtr)->FootprintDelegate,
               (ADS_MainCharacter *)(local_d8 + 8),(pmf_d447d6f3 *)this);
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar9 = Z_Construct_UClass_UDS_MainPlayerMovementCore_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar9);
  local_a8._8_8_ = this;
  pUVar10 = (UDS_MovementCore *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar12 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UDS_MovementCore *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->MovementCore).field0_0x0.DebugPtr = pUVar10;
  (**(code **)(*(longlong *)&this->field_0x678 + 0x40))(&this->field_0x678);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&MainPlayerSpawnFinishedEventDelegate);
  this_02 = AActor::GetWorld((AActor *)this);
  if ((this_02 != (UWorld *)0x0) &&
     (pUVar11 = UWorld::GetSubsystem<UWN_UDS_Subsystem>(this_02),
     pUVar11 != (UWN_UDS_Subsystem *)0x0)) {
    pUVar11->bCanBlending = false;
  }
  (**(code **)(*(longlong *)&this->field_0x678 + 0x30))(&this->field_0x678);
  RefreshCOICoreAsync(this);
  return;
}

// CanApplySwimmingTag @ 14bc30150

bool __thiscall ADS_MainCharacter::CanApplySwimmingTag(ADS_MainCharacter *this)

{
  FWeakObjectPtr *pFVar1;
  bool bVar2;
  UDS_SkillDataSet *this_00;
  UObject *pUVar3;
  int iVar4;
  ForAnyElementType this_01;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_18;
  
  TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar2) {
    return true;
  }
  this_00 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_res10);
  UDS_SkillDataSet::GetCurrentActiveSkillList(this_00,&local_18);
  iVar4 = local_18.ArrayNum;
  pFVar1 = (FWeakObjectPtr *)(local_18.AllocatorInstance.Data + (longlong)iVar4 * 8);
  this_01.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if (local_18.ArrayNum != iVar4) {
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FWeakObjectPtr *)this_01.Data == pFVar1) break;
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.Data);
    if ((pUVar3 != (UObject *)0x0) && (pUVar3[9].field_0x11 == '\x01')) {
      bVar2 = false;
LAB_14bc301eb:
      if ((FWeakObjectPtr *)local_18.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      return bVar2;
    }
    this_01.Data = this_01.Data + 8;
  }
  bVar2 = true;
  goto LAB_14bc301eb;
}

// ChangeMaterial @ 14bc31130

void __thiscall
ADS_MainCharacter::ChangeMaterial(ADS_MainCharacter *this,UMaterialInterface *param_1)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  int iVar4;
  FWeakObjectPtr local_res8;
  
  (**(code **)(*(longlong *)this + 0x80))();
  bVar1 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (!bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&local_res8);
    iVar2 = (**(code **)(*(longlong *)pUVar3 + 0x810))(pUVar3);
    if ((iVar2 != 0) && (iVar4 = 0, 0 < iVar2)) {
      do {
        pUVar3 = FWeakObjectPtr::Get(&local_res8);
        (**(code **)(*(longlong *)pUVar3 + 0x6b8))(pUVar3,iVar4,param_1);
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
  }
  return;
}

// ClearFallingHigherTimer @ 14bc32910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADS_MainCharacter::ClearFallingHigherTimer(ADS_MainCharacter *this)

{
  FTimerManager *this_00;
  FTimerData *pFVar1;
  FTimerHandle local_res8;
  
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  local_res8.Handle = (this->FallingHigherTimer).Handle;
  pFVar1 = FTimerManager::FindTimer(this_00,&local_res8);
  if ((pFVar1 == (FTimerData *)0x0) || (pFVar1->Status == Paused)) {
    local_res8.Handle = (this->FallingHigherTimer).Handle;
    pFVar1 = FTimerManager::FindTimer(this_00,&local_res8);
    if (pFVar1 == (FTimerData *)0x0) {
      return;
    }
  }
  pFVar1 = FTimerManager::FindTimer(this_00,&this->FallingHigherTimer);
  if (pFVar1 != (FTimerData *)0x0) {
    FTimerManager::InternalClearTimer(this_00,(FTimerHandle)(this->FallingHigherTimer).Handle);
  }
  (this->FallingHigherTimer).Handle = 0;
  return;
}

// EndPlay @ 14bc3a0a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADS_MainCharacter::EndPlay(ADS_MainCharacter *this,Type param_1)

{
  UDS_AbilitySystemComponent *pUVar1;
  UDS_MainCharacterCollisionComponent *pUVar2;
  UDS_MovementCore *pUVar3;
  UObjectBase *this_00;
  UDS_SyncRecvComponent *pUVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  UObject *pUVar8;
  UObject *pUVar9;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_01;
  UDS_ZoneManager *pUVar10;
  char *pcVar11;
  char *pcVar12;
  EDS_StateTagType local_res8 [16];
  EDS_StateTagType local_res18 [8];
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_78;
  FWeakObjectPtr local_70;
  FWeakObjectPtr local_68;
  FWeakObjectPtr local_60;
  UDS_AbilitySystemComponent *local_58;
  UDS_AbilitySystemComponent *local_50;
  UObject *local_48;
  FName local_40;
  
  pUVar1 = (this->AbilitySystemComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_AbilitySystemComponent *)0x0) {
    local_res8[0] = RemoveEntity;
    if ((UE::GC::GIsIncrementalReachabilityPending) &&
       (UE::GC::MarkAsReachable((UObject *)pUVar1),
       UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    local_78.ObjectIndex = 0;
    local_78.ObjectSerialNumber = 0;
    local_58 = pUVar1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    FWeakObjectPtr::operator=(&local_78,(FObjectPtr)&local_58);
    UDS_AbilitySystemComponent::AddStateTag
              ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)local_78,local_res8);
    pUVar1 = (this->AbilitySystemComponent).field0_0x0.DebugPtr;
    local_res18[0] = RemoveEntity;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar1 != (UDS_AbilitySystemComponent *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 != (UDS_AbilitySystemComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
    }
    local_70.ObjectIndex = 0;
    local_70.ObjectSerialNumber = 0;
    local_50 = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_AbilitySystemComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    FWeakObjectPtr::operator=(&local_70,(FObjectPtr)&local_50);
    UDS_AbilitySystemComponent::RemoveStateTag
              ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)local_70,local_res18);
    local_48 = *(UObject **)&this->field_0x348;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_48);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_48);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_48);
    bVar7 = TWeakObjectPtr<UCharacterMovementComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UCharacterMovementComponent,FWeakObjectPtr> *)&local_res20,
                       (void *)0x0);
    if (!bVar7) {
      pUVar8 = FWeakObjectPtr::Get(&local_res20);
      pUVar1 = (this->AbilitySystemComponent).field0_0x0.DebugPtr;
      FTickFunction::RemovePrerequisite
                ((FTickFunction *)&pUVar8[1].field_0x10,(UObject *)pUVar1,
                 (FTickFunction *)&pUVar1->_padding_);
    }
    ADS_PlayerController::GetPlayerController();
    bVar7 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> *)&local_68,(void *)0x0)
    ;
    if (!bVar7) {
      pUVar1 = (this->AbilitySystemComponent).field0_0x0.DebugPtr;
      pUVar8 = FWeakObjectPtr::Get(&local_68);
      pUVar9 = FWeakObjectPtr::Get(&local_68);
      FTickFunction::RemovePrerequisite
                ((FTickFunction *)&pUVar1->_padding_,pUVar9,(FTickFunction *)(pUVar8 + 1));
    }
    this_01 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              UWN_AbilitySystemComponent::GetChangedTagEvent
                        ((UWN_AbilitySystemComponent *)
                         (this->AbilitySystemComponent).field0_0x0.DebugPtr);
    if (*(ulong64 *)&this->field_0x758 != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                (this_01,(FDelegateHandle)*(ulong64 *)&this->field_0x758);
    }
    UWN_AbilitySystemComponent::UninitializeComponent
              ((UWN_AbilitySystemComponent *)(this->AbilitySystemComponent).field0_0x0.DebugPtr);
  }
  pUVar10 = UDS_ZoneManager::GetInst();
  if ((pUVar10 != (UDS_ZoneManager *)0x0) &&
     (pUVar2 = (this->CollisionComponent).field0_0x0.DebugPtr,
     pUVar2 != (UDS_MainCharacterCollisionComponent *)0x0)) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar10->ZoneDistrictChangedDelegate,pUVar2);
  }
  pUVar3 = (this->MovementCore).field0_0x0.DebugPtr;
  if (pUVar3 != (UDS_MovementCore *)0x0) {
    (**(code **)(pUVar3->_padding_ + 0x2b8))();
  }
  this_00 = *(UObjectBase **)&this->field_0x1b8;
  if (this_00 == (UObjectBase *)0x0) goto LAB_14bc3a3f7;
  pcVar11 = strstr("&ADS_MainCharacter::OnPhysicsVolumeChanged","::");
  if (pcVar11 == (char *)0x0) {
LAB_14bc3a32b:
    pcVar12 = &DAT_00000002;
LAB_14bc3a330:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    do {
      pcVar12 = pcVar11;
      pcVar11 = strstr(pcVar12 + 1,"::");
    } while (pcVar11 != (char *)0x0);
    if (pcVar12 == (char *)0x0) goto LAB_14bc3a32b;
    pcVar12 = pcVar12 + 2;
    if (*pcVar12 == '0') goto LAB_14bc3a330;
  }
  ::FName::FName(&local_40,pcVar12);
  if (*(char *)((longlong)&this_00[10].NamePrivate.Name.Number + 1) != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `protected:_class_FName___cdecl_TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>::GetDelegateName(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `protected:_class_FName___cdecl_TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>::GetDelegateName(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                      ::__l2::DelegateFName,"PhysicsVolumeChangedDelegate");
      _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FVar6 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar7 = UObjectBase::IsValidLowLevelFast(this_00,false);
    if ((!bVar7) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("DelegateOwner->IsValidLowLevelFast(false)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                           ,0xd7,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar7 = FSparseDelegateStorage::Remove((UObject *)this_00,FVar6,(UObject *)this,local_40);
    *(bool *)((longlong)&this_00[10].NamePrivate.Name.Number + 1) = bVar7;
  }
LAB_14bc3a3f7:
  pUVar4 = (this->SyncRecvComponent).field0_0x0.DebugPtr;
  if (pUVar4 != (UDS_SyncRecvComponent *)0x0) {
    (**(code **)(pUVar4->_padding_ + 0x2b8))();
  }
  ADS_PlayerController::GetPlayerController();
  bVar7 = FWeakObjectPtr::IsValid(&local_60);
  if (bVar7) {
    pUVar8 = FWeakObjectPtr::Get(&local_60);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar8[0x30].field_0x10,this);
  }
  APawn::EndPlay((APawn *)this,param_1);
  return;
}

// GetAbilitySystemComponent @ 14bc3ee20

TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr> __thiscall
ADS_MainCharacter::GetAbilitySystemComponent(ADS_MainCharacter *this)

{
  UObject *pUVar1;
  FWeakObjectPtr in_RDX;
  UObject *local_res8;
  
  pUVar1 = *(UObject **)&this->field_0x380;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr>)in_RDX;
}

// GetAnimBPPath @ 14bc3f520

FSoftObjectPath * __thiscall
ADS_MainCharacter::GetAnimBPPath(ADS_MainCharacter *this,FSoftObjectPath *__return_storage_ptr__)

{
  FDS_ResourcePresetTableRow *this_00;
  FDS_ResourceAbpTableRow *pFVar1;
  
  this_00 = (FDS_ResourcePresetTableRow *)(**(code **)(*(longlong *)&this->field_0x678 + 0x28))();
  pFVar1 = FDS_ResourcePresetTableRow::ID_AbpLinkTable(this_00);
  FSoftObjectPath::FSoftObjectPath(__return_storage_ptr__,&pFVar1->AbpPath);
  return __return_storage_ptr__;
}

// GetCOICorePath @ 14bc3f7e0

FSoftObjectPath * __thiscall
ADS_MainCharacter::GetCOICorePath(ADS_MainCharacter *this,FSoftObjectPath *__return_storage_ptr__)

{
  FDS_ResourcePresetTableRow *this_00;
  FDS_ResourceMeshTableRow *pFVar1;
  
  this_00 = (FDS_ResourcePresetTableRow *)(**(code **)(*(longlong *)&this->field_0x678 + 0x28))();
  pFVar1 = FDS_ResourcePresetTableRow::ID_ResourceMeshTable(this_00);
  FSoftObjectPath::FSoftObjectPath(__return_storage_ptr__,&pFVar1->MeshPath);
  return __return_storage_ptr__;
}

// GetCameraBoom @ 14bc3f820

TWeakObjectPtr<UDS_SpringArmComponent,FWeakObjectPtr> __thiscall
ADS_MainCharacter::GetCameraBoom(ADS_MainCharacter *this)

{
  UDS_SpringArmComponent *pUVar1;
  FWeakObjectPtr in_RDX;
  UDS_SpringArmComponent *local_res8;
  
  pUVar1 = (this->CameraBoom).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UDS_SpringArmComponent *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_SpringArmComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UDS_SpringArmComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_SpringArmComponent,FWeakObjectPtr>)in_RDX;
}

// GetCapsuleComponent @ 14bc3fb40

TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr> __thiscall
ADS_MainCharacter::GetCapsuleComponent(ADS_MainCharacter *this)

{
  UObject *pUVar1;
  FWeakObjectPtr in_RDX;
  UObject *local_res8;
  
  pUVar1 = *(UObject **)&this[-1].field_0x788;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr>)in_RDX;
}

// GetCollisionComponent @ 14bc3ff80

TWeakObjectPtr<UDS_MainCharacterCollisionComponent,FWeakObjectPtr> __thiscall
ADS_MainCharacter::GetCollisionComponent(ADS_MainCharacter *this)

{
  UDS_MainCharacterCollisionComponent *pUVar1;
  FWeakObjectPtr in_RDX;
  UDS_MainCharacterCollisionComponent *local_res8;
  
  pUVar1 = (this->CollisionComponent).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UDS_MainCharacterCollisionComponent *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_MainCharacterCollisionComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UDS_MainCharacterCollisionComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_MainCharacterCollisionComponent,FWeakObjectPtr>)in_RDX;
}

// GetFollowCamera @ 14bc40b50

TWeakObjectPtr<UDS_MainCameraComponent,FWeakObjectPtr> __thiscall
ADS_MainCharacter::GetFollowCamera(ADS_MainCharacter *this)

{
  UDS_MainCameraComponent *pUVar1;
  FWeakObjectPtr in_RDX;
  UDS_MainCameraComponent *local_res8;
  
  pUVar1 = (this->FollowCamera).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UDS_MainCameraComponent *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_MainCameraComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UDS_MainCameraComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_MainCameraComponent,FWeakObjectPtr>)in_RDX;
}

// GetFootStepProvider @ 14bc40be0

FName __thiscall ADS_MainCharacter::GetFootStepProvider(ADS_MainCharacter *this)

{
  UEnum *this_00;
  FName in_RDX;
  ForAnyElementType FVar1;
  FString local_28;
  FString local_18;
  
  if ((this->CustomizableSkmComponent).field0_0x0.DebugPtr ==
      (UDS_CustomizableSkeletalComponent *)0x0) {
    *(undefined8 *)in_RDX = 0;
    return in_RDX;
  }
  this_00 = StaticEnum<enum_EDS_CoiParamType>();
  UEnum::GetNameStringByValue(this_00,&local_18,6);
  UWN_MCS_COICore::GetIntParameterSelectedOption
            ((UWN_MCS_COICore *)(this->CustomizableSkmComponent).field0_0x0.DebugPtr,&local_28,
             &local_18);
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar1.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FName::FName((FName *)in_RDX,(wchar_t *)FVar1.Data);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return in_RDX;
}

// GetInputData @ 14bc41810

TWeakObjectPtr<UDS_InputData,FWeakObjectPtr> __thiscall
ADS_MainCharacter::GetInputData(ADS_MainCharacter *this)

{
  FWeakObjectPtr in_RDX;
  
  TDS_DataSetGetter<UDS_InputData>::Get((ulong64)in_RDX);
  return (TWeakObjectPtr<UDS_InputData,FWeakObjectPtr>)in_RDX;
}

// GetInteractionComponent @ 14bc41880

TWeakObjectPtr<UDS_InteractionComponent,FWeakObjectPtr> __thiscall
ADS_MainCharacter::GetInteractionComponent(ADS_MainCharacter *this)

{
  UDS_InteractionComponent *pUVar1;
  FWeakObjectPtr in_RDX;
  UDS_InteractionComponent *local_res8;
  
  pUVar1 = (this->InteractionComponent).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UDS_InteractionComponent *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_InteractionComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UDS_InteractionComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_InteractionComponent,FWeakObjectPtr>)in_RDX;
}

// GetMainPlayer @ 14bc41f20

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

TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> __cdecl ADS_MainCharacter::GetMainPlayer(void)

{
  int iVar1;
  UDS_EntityManager *this;
  FDS_EntityBase *pFVar2;
  FWeakObjectPtr *this_00;
  UObject *pUVar3;
  UClass *pUVar4;
  FWeakObjectPtr in_RCX;
  UObject *local_res10;
  undefined1 local_res18 [8];
  
  this = UDS_EntityManager::GetInst();
  if (this == (UDS_EntityManager *)0x0) {
LAB_14bc41ff4:
    *(undefined8 *)in_RCX = 0;
    local_res10 = (UObject *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)&local_res10);
    return (TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>)in_RCX;
  }
  pFVar2 = UDS_EntityManager::GetCurrentMainCharEntityBase(this,false);
  if (pFVar2 == (FDS_EntityBase *)0x0) goto LAB_14bc41ff4;
  this_00 = (FWeakObjectPtr *)(**(code **)(pFVar2->_padding_ + 0x150))(pFVar2,local_res18);
  pUVar3 = FWeakObjectPtr::Get(this_00);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_ADS_MainCharacter_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14bc41fa0;
  }
  pUVar3 = (UObject *)0x0;
LAB_14bc41fa0:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(undefined8 *)in_RCX = 0;
  local_res10 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)&local_res10);
  return (TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>)in_RCX;
}

// GetMovementCore @ 14bc42270

TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> __thiscall
ADS_MainCharacter::GetMovementCore(ADS_MainCharacter *this)

{
  UObject *pUVar1;
  FWeakObjectPtr in_RDX;
  UObject *local_res8;
  
  pUVar1 = *(UObject **)&this->field_0x388;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>)in_RDX;
}

// GetNameTagUIComponent @ 14bc423a0

TWeakObjectPtr<UDS_WidgetComponent,FWeakObjectPtr> __thiscall
ADS_MainCharacter::GetNameTagUIComponent(ADS_MainCharacter *this)

{
  UObject *pUVar1;
  FWeakObjectPtr in_RDX;
  UObject *local_res8;
  
  pUVar1 = *(UObject **)&this->field_0x3a8;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_WidgetComponent,FWeakObjectPtr>)in_RDX;
}

// GetResourcePresetTableRow @ 14bc43660

FDS_ResourcePresetTableRow * __thiscall
ADS_MainCharacter::GetResourcePresetTableRow(ADS_MainCharacter *this)

{
  bool bVar1;
  UObject *pUVar2;
  FDS_CharacterBaseTableRow *this_00;
  FDS_ResourcePresetTableRow *pFVar3;
  FWeakObjectPtr local_res8 [4];
  
  UDS_CustomizeData::GetData((ulong64)local_res8,*(ulong64 *)&this->field_0x8,false);
  bVar1 = TWeakObjectPtr<UDS_CustomizeData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CustomizeData,FWeakObjectPtr> *)local_res8,(void *)0x0);
  if (bVar1) {
    return &FDS_ResourcePresetTableRow::DefaultObject;
  }
  pUVar2 = FWeakObjectPtr::Get(local_res8);
  this_00 = FDS_CharacterBaseTableRow::GetRef((longlong)*(int *)&pUVar2[2].field_0x8,true);
  pFVar3 = FDS_CharacterBaseTableRow::ID_ResourcePresetTable(this_00);
  return pFVar3;
}

// GetSkeletalMeshComponent @ 14bc43e10

TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> __thiscall
ADS_MainCharacter::GetSkeletalMeshComponent(ADS_MainCharacter *this)

{
  UObject *pUVar1;
  FWeakObjectPtr in_RDX;
  UObject *local_res8;
  
  pUVar1 = *(UObject **)&this[-1].field_0x778;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>)in_RDX;
}

// GetStateComponent @ 14bc44400

TWeakObjectPtr<UDS_MainCharacterStateComponent,FWeakObjectPtr> __thiscall
ADS_MainCharacter::GetStateComponent(ADS_MainCharacter *this)

{
  UDS_MainCharacterStateComponent *pUVar1;
  FWeakObjectPtr in_RDX;
  UDS_MainCharacterStateComponent *local_res8;
  
  pUVar1 = (this->StateComponent).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UDS_MainCharacterStateComponent *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_MainCharacterStateComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UDS_MainCharacterStateComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_MainCharacterStateComponent,FWeakObjectPtr>)in_RDX;
}

// GetSyncRecvComponent @ 14bc44540

TWeakObjectPtr<UDS_SyncRecvComponent,FWeakObjectPtr> __thiscall
ADS_MainCharacter::GetSyncRecvComponent(ADS_MainCharacter *this)

{
  UObject *pUVar1;
  FWeakObjectPtr in_RDX;
  UObject *local_res8;
  
  pUVar1 = *(UObject **)&this->field_0x398;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_SyncRecvComponent,FWeakObjectPtr>)in_RDX;
}

// GetTeleportComponent @ 14bc445d0

TWeakObjectPtr<UDS_MainCharacterTeleportComponent,FWeakObjectPtr> __thiscall
ADS_MainCharacter::GetTeleportComponent(ADS_MainCharacter *this)

{
  UDS_MainCharacterTeleportComponent *pUVar1;
  FWeakObjectPtr in_RDX;
  UDS_MainCharacterTeleportComponent *local_res8;
  
  pUVar1 = (this->TeleportComponent).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UDS_MainCharacterTeleportComponent *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_MainCharacterTeleportComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UDS_MainCharacterTeleportComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_MainCharacterTeleportComponent,FWeakObjectPtr>)in_RDX;
}

// GetTrajectoryComponent @ 14bc44720

TWeakObjectPtr<UDS_CharacterTrajectoryComponent,FWeakObjectPtr> __thiscall
ADS_MainCharacter::GetTrajectoryComponent(ADS_MainCharacter *this)

{
  UObject *pUVar1;
  FWeakObjectPtr in_RDX;
  UObject *local_res8;
  
  pUVar1 = *(UObject **)&this->field_0x3a0;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_CharacterTrajectoryComponent,FWeakObjectPtr>)in_RDX;
}

// OnAddInputFlag @ 14bc4c360

void __thiscall ADS_MainCharacter::OnAddInputFlag(ADS_MainCharacter *this,EDS_InputFlags *param_1)

{
  UFunction *pUVar1;
  
  if ((this->bIsActorSequencerPlaying != false) && (*param_1 == MOUSE_MOVE)) {
    pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ADS_MainCharacter_OnStopSequencePlay)
    ;
                    /* WARNING: Could not recover jumptable at 0x00014b4ebffd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,0,*(code **)(*(longlong *)this + 0x260));
    return;
  }
  return;
}

// OnAnimLoadComplete @ 14bc4c380

void __thiscall
ADS_MainCharacter::OnAnimLoadComplete
          (ADS_MainCharacter *this,FSoftObjectPath *param_1,UObject *param_2,FWN_EndOfRefs *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
    (this->TempAnimBPObject).field0_0x0.DebugPtr = param_2;
  }
  else {
    (this->TempAnimBPObject).field0_0x0.DebugPtr = param_2;
    if (param_2 == (UObject *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2380957129612723251>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\DS_MainCharacter.cpp"
                         ,0x433,"TempAnimBPObject");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->TaskCaller).SharedReferenceCount.ReferenceController);
  return;
}

// OnBindTeleportFinish @ 14bc4c410

void __thiscall
ADS_MainCharacter::OnBindTeleportFinish(ADS_MainCharacter *this,UObject *param_1,FName param_2)

{
  UDS_MainCharacterTeleportComponent *pUVar1;
  FName local_res18;
  
  pUVar1 = (this->TeleportComponent).field0_0x0.DebugPtr;
  if ((pUVar1 != (UDS_MainCharacterTeleportComponent *)0x0) && (param_1 != (UObject *)0x0)) {
    local_res18 = param_2;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUFunction<UObject>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnTeleportFinished,(UObject *)&stack0x00000008,(FName *)param_1);
  }
  return;
}

// OnBindTeleportStart @ 14bc4c450

void __thiscall
ADS_MainCharacter::OnBindTeleportStart(ADS_MainCharacter *this,UObject *param_1,FName param_2)

{
  UDS_MainCharacterTeleportComponent *pUVar1;
  FName local_res18;
  
  pUVar1 = (this->TeleportComponent).field0_0x0.DebugPtr;
  if ((pUVar1 != (UDS_MainCharacterTeleportComponent *)0x0) && (param_1 != (UObject *)0x0)) {
    local_res18 = param_2;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUFunction<UObject>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnTeleportStart,(UObject *)&stack0x00000008,(FName *)param_1);
  }
  return;
}

// OnCOICoreInitComplete @ 14bc4c490

void __thiscall
ADS_MainCharacter::OnCOICoreInitComplete
          (ADS_MainCharacter *this,FSoftObjectPath *param_1,UWN_MCS_COICore *param_2,bool param_3,
          FWN_EndOfRefs *param_4)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->TaskCaller).SharedReferenceCount.ReferenceController);
  return;
}

// OnCOIUpdateMeshComplete @ 14bc4c4b0

void __thiscall
ADS_MainCharacter::OnCOIUpdateMeshComplete
          (ADS_MainCharacter *this,uint param_1,UWN_MCS_COICore *param_2,
          EWN_MCS_MeshUpdateResult param_3)

{
  TObjectPtr<UObject> *this_00;
  bool bVar1;
  UClass *pUVar2;
  UAnimBlueprintGeneratedClass *pUVar3;
  IAnimClassInterface *pIVar4;
  
  RefreshPartsItem(this);
  this_00 = &this->TempAnimBPObject;
  if ((this_00->field0_0x0).DebugPtr != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UAnimBlueprint_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
    if ((bVar1) && ((UAnimBlueprint *)(this_00->field0_0x0).DebugPtr != (UAnimBlueprint *)0x0)) {
      pUVar3 = UAnimBlueprint::GetAnimBlueprintGeneratedClass
                         ((UAnimBlueprint *)(this_00->field0_0x0).DebugPtr);
      pIVar4 = (IAnimClassInterface *)&pUVar3->_padding_;
      if (pUVar3 == (UAnimBlueprintGeneratedClass *)0x0) {
        pIVar4 = (IAnimClassInterface *)0x0;
      }
      pUVar2 = IAnimClassInterface::GetActualAnimClass(pIVar4);
      (**(code **)(**(longlong **)&this->field_0x340 + 0xc70))
                (*(longlong **)&this->field_0x340,pUVar2);
    }
    if ((this_00->field0_0x0).DebugPtr != (UObject *)0x0) {
      pUVar2 = Z_Construct_UClass_UAnimBlueprintGeneratedClass_NoRegister();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
      if ((bVar1) && ((this_00->field0_0x0).DebugPtr != (UObject *)0x0)) {
        pUVar2 = IAnimClassInterface::GetActualAnimClass
                           ((IAnimClassInterface *)((this_00->field0_0x0).DebugPtr + 0x16));
        (**(code **)(**(longlong **)&this->field_0x340 + 0xc70))
                  (*(longlong **)&this->field_0x340,pUVar2);
      }
    }
  }
  return;
}

// OnChangedEquipItem @ 14bc4da50

void __thiscall
ADS_MainCharacter::OnChangedEquipItem
          (ADS_MainCharacter *this,EDS_EquipSlotType param_1,long64 param_2)

{
  UWN_SKMReactComponent *this_00;
  FName FVar1;
  
  RefreshItemEquip(this);
  UpdateCoiMesh(this);
  OnChangedPreset(this);
  this_00 = (this->SkmReactComponent).field0_0x0.DebugPtr;
  if (this_00 != (UWN_SKMReactComponent *)0x0) {
    FVar1 = GetFootStepProvider(this);
    UWN_SKMReactComponent::OnChangedPreset(this_00,(FName *)FVar1);
  }
  return;
}

// OnChangedTagCallback @ 14bc4de40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ADS_MainCharacter::OnChangedTagCallback(ADS_MainCharacter *this,FGameplayTag *param_1,bool param_2)

{
  UCapsuleComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UDS_CharStateData *this_00;
  FDS_CharStateInfo *pFVar5;
  undefined1 auStackY_2b8 [32];
  FWeakObjectPtr local_288;
  FDS_CharStateInfo local_280;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  UDS_CharStateData::GetData((ulong64)&local_288);
  bVar3 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_288,(void *)0x0);
  if (bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_268._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_268,"ADS_MainCharacter::OnChangedTagCallback",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_268.Ptr,0x242,L"charStateData is nullptr.");
      if ((void *)local_268._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_268._padding_);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2380957129612722755>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\DS_MainCharacter.cpp"
                       ,0x243,"false");
    if (bVar3) {
code_r0x00014bc4e032:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_288);
    UDS_CharStateData::OnChangedTagCallback(this_00,param_1,param_2);
    FWeakObjectPtr::Get(&local_288);
    pFVar5 = UDS_CharStateData::GetCharStateInfo(param_1);
    pUVar1 = *(UCapsuleComponent **)&this[-1].field_0x788;
    local_280.Tag.TagName = (pFVar5->Tag).TagName;
    local_280.State = pFVar5->State;
    local_280.DetailState = pFVar5->DetailState;
    local_280._20_4_ = *(undefined4 *)&pFVar5->field_0x14;
    if (pUVar1 == (UCapsuleComponent *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_148._padding_ = (longlong)pUVar1;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"ADS_MainCharacter::OnChangedTagCallback",0x27,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0x24d,L"capsuleComp is nullptr.");
        if ((UCapsuleComponent *)local_148._padding_ != (UCapsuleComponent *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2380957129612722766>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\DS_MainCharacter.cpp"
                         ,0x24e,"false");
      if (bVar3) goto code_r0x00014bc4e032;
    }
    else if (*(UDS_MainCharacterCollisionComponent **)&this->field_0x3d8 !=
             (UDS_MainCharacterCollisionComponent *)0x0) {
      UDS_MainCharacterCollisionComponent::UpdateCapsuleCollisionForAbnormal
                (*(UDS_MainCharacterCollisionComponent **)&this->field_0x3d8,pUVar1,&local_280,
                 param_2);
      UDS_MainCharacterCollisionComponent::UpdateCapsuleCollisionForInteraction
                (*(UDS_MainCharacterCollisionComponent **)&this->field_0x3d8,pUVar1,&local_280,
                 param_2);
      UDS_MainCharacterCollisionComponent::UpdateInteractionComponentForNPCTalk
                (*(UDS_MainCharacterCollisionComponent **)&this->field_0x3d8,param_1,param_2);
    }
  }
  return;
}

// OnCharacterLoadingComplete @ 14bc4e8b0

void __thiscall ADS_MainCharacter::OnCharacterLoadingComplete(ADS_MainCharacter *this)

{
  (**(code **)(*(longlong *)&this->field_0x678 + 0x48))();
  RefreshCustomize(this);
  RefreshItemEquip(this);
  UpdateCoiMesh(this);
  return;
}

// OnDefaultCollisionProfile @ 14bc4ef90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ADS_MainCharacter::OnDefaultCollisionProfile(ADS_MainCharacter *this)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  ADS_MainCharacter *this_00;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  UDS_ZoneManager *pUVar7;
  FDS_ZoneDistrictTableRow *this_01;
  int iVar8;
  undefined8 uVar9;
  FName FVar10;
  ForAnyElementType FVar11;
  undefined1 auStackY_1a8 [32];
  undefined1 auStack_178 [8];
  FWeakObjectPtr FStack_170;
  FWeakObjectPtr FStack_168;
  TArray<FDS_ZoneDistrictPropTableRow_const_*,TSizedDefaultAllocator<32>_> TStack_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_148;
  ulonglong uStack_28;
  
  lVar3 = *(longlong *)&this->field_0x3d8;
  if (lVar3 == 0) {
    return;
  }
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar3 + 0xc0));
  if (!bVar4) {
    return;
  }
  this_00 = (ADS_MainCharacter *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar3 + 0xc0));
  GetInteractionComponent(this_00);
  bVar4 = FWeakObjectPtr::IsValid(&FStack_168);
  if (!bVar4) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    TStack_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_148,"UDS_MainCharacterCollisionComponent::OnDefaultCollisionProfile",0x3e,Yes
              );
    UDS_LogManager::PrintLog(pUVar5,1,Warning,TStack_148.Ptr,0x38,L"interactionComp is nullptr.");
    if ((void *)TStack_148._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)TStack_148._padding_);
    return;
  }
  pUVar6 = FWeakObjectPtr::Get(&FStack_168);
  uVar2 = *(ulonglong *)&pUVar6[0x13].field_0x18;
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar3 + 0xc0));
  (**(code **)(*(longlong *)&pUVar6[0x29].field_0x10 + 0x160))(&pUVar6[0x29].field_0x10,&FStack_170)
  ;
  bVar4 = FWeakObjectPtr::IsValid(&FStack_170);
  if (!bVar4) {
    return;
  }
  pUVar7 = UDS_ZoneManager::GetInst();
  if (pUVar7 == (UDS_ZoneManager *)0x0) {
    return;
  }
  this_01 = FDS_ZoneDistrictTableRow::GetRef((longlong)(int)pUVar7->DistrictID,true);
  bVar4 = FDS_ZoneDistrictTableRow::IsValid(this_01);
  if (bVar4) {
    FDS_ZoneDistrictTableRow::ID_DistrictPropTables(this_01,&TStack_160);
    iVar8 = TStack_160.ArrayNum;
    pFVar1 = TStack_160.AllocatorInstance.Data + (longlong)iVar8 * 8;
    uVar9 = TStack_160._8_8_;
    FVar11.Data = TStack_160.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar9 != iVar8) {
        `TCheckedPointerIterator<FDS_ZoneDistrictPropTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(auStack_178);
        uVar9 = TStack_160._8_8_;
      }
      if (FVar11.Data == pFVar1) {
        if (TStack_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(TStack_160.AllocatorInstance.Data);
        }
        goto LAB_14bbfb021;
      }
      if ((*(longlong *)FVar11.Data != 0) && (*(int *)(*(longlong *)FVar11.Data + 8) == 0xc)) break;
      FVar11.Data = FVar11.Data + 8;
    }
    if (TStack_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_160.AllocatorInstance.Data);
    }
  }
  else {
LAB_14bbfb021:
    if ((uVar2 & 8) == 0) {
      pUVar6 = FWeakObjectPtr::Get(&FStack_170);
      FVar10 = *(FName *)(lVar3 + 200);
      goto LAB_14bbfafcc;
    }
  }
  pUVar6 = FWeakObjectPtr::Get(&FStack_170);
  FVar10 = ::COLLISION_PROFILE_PLAYER_IGNORE_COLLISION;
LAB_14bbfafcc:
  (**(code **)(*(longlong *)pUVar6 + 0x788))(pUVar6,FVar10,1);
  return;
}

// OnFootStepEvent @ 14bc4f190

void __thiscall ADS_MainCharacter::OnFootStepEvent(ADS_MainCharacter *this,FName param_1)

{
  UFunction *pUVar1;
  FName aFStackX_8 [4];
  
  aFStackX_8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ADS_MainCharacter_OnFootStep);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,aFStackX_8);
  return;
}

// OnHit @ 14bc4f1e0

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

void __thiscall ADS_MainCharacter::OnHit(ADS_MainCharacter *this,FDS_StruckInfo *param_1)

{
  FDS_EntityBase::OnHit((FDS_EntityBase *)this,param_1);
  TMulticastDelegate<void___cdecl(FDS_StruckInfo_const_&),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(FDS_StruckInfo_const_&),FDefaultDelegateUserPolicy> *)
             &this->field_0x290,param_1);
  return;
}

// OnInteractionBeginOverlap @ 14bc4fa20

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
ADS_MainCharacter::OnInteractionBeginOverlap
          (ADS_MainCharacter *this,TWeakObjectPtr<UDS_InteractionComponent,FWeakObjectPtr> param_1,
          FDS_EntityBase *param_2,EDS_InteractionType param_3,ulong64 param_4)

{
  if ((param_3 == Icon) &&
     (*(UDS_MainCharacterCollisionComponent **)&this->field_0x3d8 !=
      (UDS_MainCharacterCollisionComponent *)0x0)) {
    UDS_MainCharacterCollisionComponent::HandleInteractionBeginOverlap
              (*(UDS_MainCharacterCollisionComponent **)&this->field_0x3d8,param_4);
    return;
  }
  return;
}

// OnInteractionEndOverlap @ 14bc4fcb0

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
ADS_MainCharacter::OnInteractionEndOverlap
          (ADS_MainCharacter *this,TWeakObjectPtr<UDS_InteractionComponent,FWeakObjectPtr> param_1,
          FDS_EntityBase *param_2,EDS_InteractionType param_3,ulong64 param_4)

{
  if ((param_3 == Icon) &&
     (*(UDS_MainCharacterCollisionComponent **)&this->field_0x3d8 !=
      (UDS_MainCharacterCollisionComponent *)0x0)) {
    UDS_MainCharacterCollisionComponent::HandleInteractionEndOverlap
              (*(UDS_MainCharacterCollisionComponent **)&this->field_0x3d8,param_4);
    return;
  }
  return;
}

// OnMovementModeChanged @ 14bc502b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
ADS_MainCharacter::OnMovementModeChanged
          (ADS_MainCharacter *this,EMovementMode param_1,uchar param_2)

{
  FWeakObjectPtr *pFVar1;
  UDS_AbilitySystemComponent *pUVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  FTimerManager *pFVar7;
  UDS_SkillDataSet *this_00;
  UObject *pUVar8;
  FTimerData *pFVar9;
  UDS_LogManager *pUVar10;
  ForAnyElementType this_01;
  longlong *plVar11;
  float fVar12;
  undefined1 auStackY_2a8 [32];
  EDS_StateTagType local_268 [16];
  TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_258;
  FWeakObjectPtr local_248;
  FWeakObjectPtr local_240;
  FWeakObjectPtr local_238;
  FWeakObjectPtr local_230;
  FWeakObjectPtr local_228;
  FWeakObjectPtr local_220;
  FWeakObjectPtr local_218;
  FWeakObjectPtr local_210;
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  UDS_AbilitySystemComponent *local_1f0;
  UDS_AbilitySystemComponent *local_1e8;
  UDS_AbilitySystemComponent *local_1e0;
  UDS_AbilitySystemComponent *local_1d8;
  UDS_AbilitySystemComponent *local_1d0;
  UDS_AbilitySystemComponent *local_1c8;
  FTimerHandle local_1c0;
  FTimerHandle local_1b8;
  UDS_AbilitySystemComponent *local_1b0;
  UDS_AbilitySystemComponent *local_1a8;
  UDS_AbilitySystemComponent *local_1a0;
  undefined8 local_198 [2];
  code *local_188;
  longlong lStack_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  ACharacter::OnMovementModeChanged((ACharacter *)this,param_1,param_2);
  if ((this->AbilitySystemComponent).field0_0x0.DebugPtr == (UDS_AbilitySystemComponent *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2380957129612722579>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\DS_MainCharacter.cpp"
                       ,0x193,"false");
    if (!bVar5) {
      return;
    }
code_r0x00014bc50352:
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(longlong *)&this->field_0x348 == 0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2380957129612722582>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\DS_MainCharacter.cpp"
                       ,0x196,"false");
    if (!bVar5) {
      return;
    }
    goto code_r0x00014bc50352;
  }
  plVar11 = (longlong *)(*(longlong *)&this->field_0x348 + 0x128);
  cVar6 = (**(code **)(*plVar11 + 0xd8))(plVar11);
  if (cVar6 == '\x01') {
    pUVar2 = (this->AbilitySystemComponent).field0_0x0.DebugPtr;
    local_268[0] = AirWalk_Falling;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar2 != (UDS_AbilitySystemComponent *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (UDS_AbilitySystemComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
    }
    local_200.ObjectIndex = 0;
    local_200.ObjectSerialNumber = 0;
    local_1f0 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UDS_AbilitySystemComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1f0);
    bVar5 = UDS_AbilitySystemComponent::HasStateTag
                      ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)local_200,
                       local_268);
    if (!bVar5) {
      fVar12 = DS_CommonDataHelper::FallHigherTime();
      pFVar7 = FDS_TimerManager::Get((UObject *)0x0);
      local_258.AllocatorInstance.Data = (FScriptContainerElement *)SetFallingHigher;
      local_258.ArrayNum = 0;
      lStack_180 = (ulonglong)(uint)local_258.ArrayMax << 0x20;
      local_188 = SetFallingHigher;
      FTimerManager::SetTimer<ADS_MainCharacter>
                (pFVar7,&this->FallingHigherTimer,this,(pmf_7487d8cd *)&local_188,fVar12,false,
                 __real_bf800000);
      pUVar2 = (this->AbilitySystemComponent).field0_0x0.DebugPtr;
      local_268[1] = 0x2c;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar2 != (UDS_AbilitySystemComponent *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar2 != (UDS_AbilitySystemComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
      }
      local_248.ObjectIndex = 0;
      local_248.ObjectSerialNumber = 0;
      local_1e8 = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (UDS_AbilitySystemComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      FWeakObjectPtr::operator=(&local_248,(FObjectPtr)&local_1e8);
      UDS_AbilitySystemComponent::AddStateTag
                ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)local_248,local_268 + 1)
      ;
    }
  }
  cVar6 = (**(code **)(*plVar11 + 0xf0))(plVar11);
  if (cVar6 == '\x01') {
    pUVar2 = (this->AbilitySystemComponent).field0_0x0.DebugPtr;
    local_268[2] = 0x2e;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar2 != (UDS_AbilitySystemComponent *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (UDS_AbilitySystemComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
    }
    local_240.ObjectIndex = 0;
    local_240.ObjectSerialNumber = 0;
    local_1e0 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UDS_AbilitySystemComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    FWeakObjectPtr::operator=(&local_240,(FObjectPtr)&local_1e0);
    bVar5 = UDS_AbilitySystemComponent::HasStateTag
                      ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)local_240,
                       local_268 + 2);
    if (!bVar5) {
      pUVar2 = (this->AbilitySystemComponent).field0_0x0.DebugPtr;
      local_268[3] = 0x2e;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar2 != (UDS_AbilitySystemComponent *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar2 != (UDS_AbilitySystemComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
      }
      local_238.ObjectIndex = 0;
      local_238.ObjectSerialNumber = 0;
      local_1d8 = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (UDS_AbilitySystemComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      FWeakObjectPtr::operator=(&local_238,(FObjectPtr)&local_1d8);
      UDS_AbilitySystemComponent::AddStateTag
                ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)local_238,local_268 + 3)
      ;
    }
  }
  cVar6 = (**(code **)(*plVar11 + 0xe8))(plVar11);
  if (cVar6 == '\x01') {
    TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_1f8);
    bVar5 = FWeakObjectPtr::IsValid(&local_1f8);
    if (bVar5) {
      this_00 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_1f8);
      UDS_SkillDataSet::GetCurrentActiveSkillList(this_00,&local_258);
      iVar4 = local_258.ArrayNum;
      pFVar1 = (FWeakObjectPtr *)
               (local_258.AllocatorInstance.Data + (longlong)local_258.ArrayNum * 8);
      this_01.Data = local_258.AllocatorInstance.Data;
      while( true ) {
        if (local_258.ArrayNum != iVar4) {
          `TCheckedPointerIterator<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_268 + 9);
        }
        if ((FWeakObjectPtr *)this_01.Data == pFVar1) {
          if ((FWeakObjectPtr *)local_258.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
            FMemory::Free(local_258.AllocatorInstance.Data);
          }
          goto LAB_14bc506bc;
        }
        pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.Data);
        if ((pUVar8 != (UObject *)0x0) && (pUVar8[9].field_0x11 == '\x01')) break;
        this_01.Data = this_01.Data + 8;
      }
      if ((FWeakObjectPtr *)local_258.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
        FMemory::Free(local_258.AllocatorInstance.Data);
      }
    }
    else {
LAB_14bc506bc:
      pUVar2 = (this->AbilitySystemComponent).field0_0x0.DebugPtr;
      local_268[4] = 2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar2 != (UDS_AbilitySystemComponent *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar2 != (UDS_AbilitySystemComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
      }
      local_230.ObjectIndex = 0;
      local_230.ObjectSerialNumber = 0;
      local_1d0 = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (UDS_AbilitySystemComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      FWeakObjectPtr::operator=(&local_230,(FObjectPtr)&local_1d0);
      bVar5 = UDS_AbilitySystemComponent::HasStateTag
                        ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)local_230,
                         local_268 + 4);
      if (!bVar5) {
        pUVar2 = (this->AbilitySystemComponent).field0_0x0.DebugPtr;
        local_268[5] = 2;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar2 != (UDS_AbilitySystemComponent *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pUVar2);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar2 != (UDS_AbilitySystemComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar2);
          }
        }
        local_228.ObjectIndex = 0;
        local_228.ObjectSerialNumber = 0;
        local_1c8 = pUVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar2 != (UDS_AbilitySystemComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
        FWeakObjectPtr::operator=(&local_228,(FObjectPtr)&local_1c8);
        UDS_AbilitySystemComponent::AddStateTag
                  ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)local_228,
                   local_268 + 5);
      }
    }
  }
  cVar6 = (**(code **)(*plVar11 + 0xd8))();
  if (cVar6 != '\0') goto LAB_14bc508b6;
  pFVar7 = FDS_TimerManager::Get((UObject *)0x0);
  local_1c0.Handle = (this->FallingHigherTimer).Handle;
  pFVar9 = FTimerManager::FindTimer(pFVar7,&local_1c0);
  if ((pFVar9 == (FTimerData *)0x0) || (pFVar9->Status == Paused)) {
    local_1b8.Handle = (this->FallingHigherTimer).Handle;
    pFVar9 = FTimerManager::FindTimer(pFVar7,&local_1b8);
    if (pFVar9 != (FTimerData *)0x0) goto LAB_14bc50815;
  }
  else {
LAB_14bc50815:
    pFVar9 = FTimerManager::FindTimer(pFVar7,&this->FallingHigherTimer);
    if (pFVar9 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(pFVar7,(FTimerHandle)(this->FallingHigherTimer).Handle);
    }
    (this->FallingHigherTimer).Handle = 0;
  }
  pUVar2 = (this->AbilitySystemComponent).field0_0x0.DebugPtr;
  local_268[6] = 0x2c;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar2 != (UDS_AbilitySystemComponent *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UDS_AbilitySystemComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
  }
  local_220.ObjectIndex = 0;
  local_220.ObjectSerialNumber = 0;
  local_1b0 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UDS_AbilitySystemComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  FWeakObjectPtr::operator=(&local_220,(FObjectPtr)&local_1b0);
  UDS_AbilitySystemComponent::RemoveStateTag
            ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)local_220,local_268 + 6);
LAB_14bc508b6:
  cVar6 = (**(code **)(*plVar11 + 0xf0))(plVar11);
  if (cVar6 == '\0') {
    pUVar2 = (this->AbilitySystemComponent).field0_0x0.DebugPtr;
    local_268[7] = 0x2e;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar2 != (UDS_AbilitySystemComponent *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (UDS_AbilitySystemComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
    }
    local_218.ObjectIndex = 0;
    local_218.ObjectSerialNumber = 0;
    local_1a8 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UDS_AbilitySystemComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    FWeakObjectPtr::operator=(&local_218,(FObjectPtr)&local_1a8);
    UDS_AbilitySystemComponent::RemoveStateTag
              ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)local_218,local_268 + 7);
  }
  cVar6 = (**(code **)(*plVar11 + 0xe8))(plVar11);
  if (cVar6 == '\0') {
    pUVar2 = (this->AbilitySystemComponent).field0_0x0.DebugPtr;
    local_268[8] = 2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar2 != (UDS_AbilitySystemComponent *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (UDS_AbilitySystemComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
    }
    local_210.ObjectIndex = 0;
    local_210.ObjectSerialNumber = 0;
    local_1a0 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UDS_AbilitySystemComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    FWeakObjectPtr::operator=(&local_210,(FObjectPtr)&local_1a0);
    UDS_AbilitySystemComponent::RemoveStateTag
              ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)local_210,local_268 + 8);
  }
  cVar6 = (**(code **)(*plVar11 + 0xe0))(plVar11);
  if ((cVar6 == '\x01') && (*(longlong *)&this->field_0x368 == 0)) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 != (UDS_LogManager *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"ADS_MainCharacter::OnMovementModeChanged",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar10,1,Display,local_178.Ptr,0x1d3,L"IsMovingOnGround RemoveParent");
      if ((void *)local_178._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
    }
    local_208.ObjectIndex = 0;
    local_208.ObjectSerialNumber = 0;
    local_198[0] = 0;
    pcVar3 = *(code **)(*(longlong *)&this->field_0x678 + 0x1c8);
    FWeakObjectPtr::operator=(&local_208,(FObjectPtr)local_198);
    (*pcVar3)(&this->field_0x678,local_208);
  }
  return;
}

// OnPartsSystemComplete @ 14bc51070

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

void __thiscall ADS_MainCharacter::OnPartsSystemComplete(ADS_MainCharacter *this)

{
  undefined1 *this_00;
  longlong *plVar1;
  UWN_SKMReactComponent *this_01;
  code *pcVar2;
  bool bVar3;
  EDS_AccountAuthority EVar4;
  ADS_CameraManager *this_02;
  UDS_LogManager *pUVar5;
  FDS_UniqueBpTableRow *this_03;
  FDS_ResourceEtcTableRow *pFVar6;
  FName *pFVar7;
  FName FVar8;
  UDS_EventManager *this_04;
  UDS_CharacterUIEvent *pUVar9;
  FDS_AuthData *this_05;
  ADS_PlayerController *this_06;
  UWorld *this_07;
  UWN_UDS_Subsystem *pUVar10;
  UDS_CCSAIManager *this_08;
  UDS_DungeonPlayBuildManager *this_09;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *pTVar11;
  undefined1 auStackY_778 [32];
  EDS_AbilityTagType local_748 [8];
  float local_740;
  EDS_CameraFadeState local_73c;
  FWeakObjectPtr local_738;
  undefined8 local_730;
  undefined8 local_728;
  undefined8 local_720;
  undefined8 local_718;
  undefined8 local_710;
  FName local_708 [2];
  void *local_6f8 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_6e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_778;
  this_02 = ADS_CameraManager::GetInst();
  if (this_02 != (ADS_CameraManager *)0x0) {
    local_740 = 0.0;
    local_73c = FadeIn;
    ADS_CameraManager::RequestFade(this_02,&local_73c,&local_740);
  }
  UDS_LoadingData::EndLoading();
  this_00 = &this[-1].field_0x438;
  if (*(longlong *)&this->field_0x3a8 == 0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_6e8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_6e8,"ADS_MainCharacter::OnPartsSystemComplete",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_6e8.Ptr,0x2fc,L"NameTagWidgetComponent is nullptr.");
      if ((void *)local_6e8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_6e8._padding_);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2380957129612722941>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\DS_MainCharacter.cpp"
                       ,0x2fd,"false");
    if (bVar3) goto code_r0x00014bc5144d;
  }
  else {
    this_03 = FDS_UniqueBpTableRow::GetRef(4,true);
    pFVar6 = FDS_UniqueBpTableRow::ID_BpLinkTable(this_03);
    plVar1 = *(longlong **)&this->field_0x3a8;
    pcVar2 = *(code **)(*plVar1 + 0x508);
    pFVar7 = ::FName::FName(local_708,"NameTag");
    (*pcVar2)(plVar1,*(undefined8 *)&this[-1].field_0x778,
              &FAttachmentTransformRules::KeepRelativeTransform,*pFVar7);
    UDS_ActorAttachedWidgetComponent::Init
              (*(UDS_ActorAttachedWidgetComponent **)&this->field_0x3a8,&pFVar6->ResourcePath);
    if (*(UDS_CharacterTrajectoryComponent **)&this->field_0x3a0 ==
        (UDS_CharacterTrajectoryComponent *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_5c8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_5c8,"ADS_MainCharacter::OnPartsSystemComplete",0x28,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_5c8.Ptr,0x308,L"TrajectoryComponent is nullptr.");
        if ((void *)local_5c8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_5c8._padding_);
        }
      }
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2380957129612722953>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\DS_MainCharacter.cpp"
                         ,0x309,"false");
      if (bVar3) {
code_r0x00014bc5144d:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      UDS_CharacterTrajectoryComponent::Init
                (*(UDS_CharacterTrajectoryComponent **)&this->field_0x3a0);
      OnChangedPreset((ADS_MainCharacter *)this_00);
      this_01 = *(UWN_SKMReactComponent **)&this->field_0x3e0;
      if (this_01 != (UWN_SKMReactComponent *)0x0) {
        FVar8 = GetFootStepProvider((ADS_MainCharacter *)this_00);
        UWN_SKMReactComponent::OnChangedPreset(this_01,(FName *)FVar8);
      }
      (**(code **)(*(longlong *)this + 0x1f8))(this,this->field_0x351);
      TMulticastDelegate<void___cdecl(FDS_EntityBase_*),FDefaultDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(FDS_EntityBase_*),FDefaultDelegateUserPolicy> *)
                 &this->field_0x1f8,(FDS_EntityBase *)this);
      this_04 = UDS_EventManager::GetInst();
      if (this_04 != (UDS_EventManager *)0x0) {
        if ((char)this_04->_padding_ == '\x01') {
          pUVar5 = UDS_LogManager::GetInst();
          if (pUVar5 != (UDS_LogManager *)0x0) {
            pUVar5 = UDS_LogManager::GetInst();
            local_4a8._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_4a8,"UDS_EventManager::GetEvent",0x1a,Yes);
            UDS_LogManager::PrintLog
                      (pUVar5,1,Warning,local_4a8.Ptr,0x31,
                       L"Cannot access event during UDS_EventManager destruction.");
            if ((void *)local_4a8._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_4a8._padding_);
            }
          }
        }
        else {
          pUVar9 = UDS_EventManager::GetEventInternal<UDS_CharacterUIEvent>(this_04);
          if (pUVar9 != (UDS_CharacterUIEvent *)0x0) {
            bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               &pUVar9->OnChangedMainCharacter);
            if (bVar3) {
              TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                        (&(pUVar9->OnChangedMainCharacter).Delegate);
            }
            this_05 = TDS_Singleton<FDS_AuthData>::GetInst();
            EVar4 = FDS_AuthData::GetAccountAuthority(this_05);
            if (EVar4 == GmInvisible) {
              (**(code **)(*(longlong *)this_00 + 0x368))(this_00);
              ADS_PlayerController::GetPlayerController();
              bVar3 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                                ((TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> *)&local_738,
                                 (void *)0x0);
              if (!bVar3) {
                this_06 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_738);
                ADS_PlayerController::SetInputControlType(this_06,None,false);
              }
            }
            this_07 = AActor::GetWorld((AActor *)this_00);
            if ((this_07 != (UWorld *)0x0) &&
               (pUVar10 = UWorld::GetSubsystem<UWN_UDS_Subsystem>(this_07),
               pUVar10 != (UWN_UDS_Subsystem *)0x0)) {
              pUVar10->bCanBlending = true;
            }
            local_730 = 0;
            local_748[0] = BattleState;
            FDS_EntityBase::TryActivateAbility
                      ((FDS_EntityBase *)this,local_748,(TObjectPtr<UWN_AbilityContext>)&local_730);
            local_728 = 0;
            local_748[1] = 0x23;
            FDS_EntityBase::TryActivateAbility
                      ((FDS_EntityBase *)this,local_748 + 1,
                       (TObjectPtr<UWN_AbilityContext>)&local_728);
            local_720 = 0;
            local_748[2] = 5;
            FDS_EntityBase::TryActivateAbility
                      ((FDS_EntityBase *)this,local_748 + 2,
                       (TObjectPtr<UWN_AbilityContext>)&local_720);
            local_718 = 0;
            local_748[3] = 0x67;
            FDS_EntityBase::TryActivateAbility
                      ((FDS_EntityBase *)this,local_748 + 3,
                       (TObjectPtr<UWN_AbilityContext>)&local_718);
            local_710 = 0;
            local_748[4] = 0x6a;
            FDS_EntityBase::TryActivateAbility
                      ((FDS_EntityBase *)this,local_748 + 4,
                       (TObjectPtr<UWN_AbilityContext>)&local_710);
            bVar3 = UDS_GameInstance::GetIsCCSAIMode();
            if (bVar3) {
              this_08 = UDS_CCSAIManager::GetInst();
              if (this_08 == (UDS_CCSAIManager *)0x0) {
                pUVar5 = UDS_LogManager::GetInst();
                if (pUVar5 != (UDS_LogManager *)0x0) {
                  pUVar5 = UDS_LogManager::GetInst();
                  local_388._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_388,"ADS_MainCharacter::OnPartsSystemComplete",0x28,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar5,1,Warning,local_388.Ptr,0x34e,L"ccsAIMng is nullptr.");
                  if ((void *)local_388._padding_ != (void *)0x0) {
                    FMemory::Free((void *)local_388._padding_);
                  }
                }
                bVar3 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<2380957129612723023>,false,
                                   "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\DS_MainCharacter.cpp"
                                   ,0x34f,"false");
                if (bVar3) {
code_r0x00014bc51739:
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              else {
                UDS_CCSAIManager::OnLoadResourceCompleted(this_08);
              }
            }
            else {
              bVar3 = UDS_GameInstance::GetIsDungeonPlayBuild();
              if (bVar3) {
                this_09 = UDS_DungeonPlayBuildManager::GetInst();
                if (this_09 == (UDS_DungeonPlayBuildManager *)0x0) {
                  pUVar5 = UDS_LogManager::GetInst();
                  if (pUVar5 != (UDS_LogManager *)0x0) {
                    pUVar5 = UDS_LogManager::GetInst();
                    local_268._padding_ = 0;
                    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                              (&local_268,"ADS_MainCharacter::OnPartsSystemComplete",0x28,Yes);
                    UDS_LogManager::PrintLog
                              (pUVar5,1,Warning,local_268.Ptr,0x35c,
                               L"dungeonPlayBuildMng is nullptr.");
                    if ((void *)local_268._padding_ != (void *)0x0) {
                      FMemory::Free((void *)local_268._padding_);
                    }
                  }
                  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<2380957129612723037>,false,
                                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\DS_MainCharacter.cpp"
                                     ,0x35d,"false");
                  if (bVar3) goto code_r0x00014bc51739;
                }
                else {
                  UDS_DungeonPlayBuildManager::OnLoadResourceCompleted(this_09);
                }
              }
            }
            plVar1 = *(longlong **)&this[-1].field_0x778;
            if (plVar1 == (longlong *)0x0) {
              return;
            }
            pTVar11 = (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)
                      (**(code **)(*plVar1 + 0xa90))(plVar1,local_6f8);
            TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>::operator=
                      ((TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)
                       &this->field_0x400,pTVar11);
            if (local_6f8[0] == (void *)0x0) {
              return;
            }
            FMemory::Free(local_6f8[0]);
            return;
          }
        }
      }
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"ADS_MainCharacter::OnPartsSystemComplete",0x28,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_148.Ptr,0x31b,L"characterUIEvent is nullptr.");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2380957129612722972>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\DS_MainCharacter.cpp"
                         ,0x31c,"false");
      if (bVar3) goto code_r0x00014bc5144d;
    }
  }
  return;
}

// OnPhysicsVolumeChanged @ 14bc517d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ADS_MainCharacter::OnPhysicsVolumeChanged(ADS_MainCharacter *this,APhysicsVolume *param_1)

{
  undefined1 *puVar1;
  FDS_EventDelegate<APhysicsVolume_const_*> *this_00;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  UDS_EventManager *this_01;
  UDS_LogManager *pUVar9;
  UDS_SwimEvent *pUVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStackY_198 [32];
  FDestructionSentinel local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  if (((param_1 != (APhysicsVolume *)0x0) &&
      (local_28 = __security_cookie.value ^ (ulonglong)auStackY_198, param_1->bWaterVolume != 0)) &&
     (this_01 = UDS_EventManager::GetInst(), this_01 != (UDS_EventManager *)0x0)) {
    if ((char)this_01->_padding_ == '\x01') {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_EventManager::GetEvent",0x1a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar9,1,Warning,local_148.Ptr,0x31,
                   L"Cannot access event during UDS_EventManager destruction.");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      pUVar10 = UDS_EventManager::GetEventInternal<UDS_SwimEvent>(this_01);
      if (pUVar10 != (UDS_SwimEvent *)0x0) {
        this_00 = &pUVar10->OnWaterVolumeChanged;
        bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
        if (bVar5) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                     (FWriteAccessScope *)&local_168);
          puVar1 = &(pUVar10->OnWaterVolumeChanged).Delegate.field_0x1c;
          *(int *)puVar1 = *(int *)puVar1 + 1;
          bVar5 = false;
          uVar11 = *(int *)&(pUVar10->OnWaterVolumeChanged).Delegate.field_0x10 - 1;
          if (-1 < (int)uVar11) {
            lVar12 = (longlong)(int)uVar11 << 4;
            bVar5 = false;
            do {
              uVar8 = 0;
              if ((int)uVar11 < *(int *)&(pUVar10->OnWaterVolumeChanged).Delegate.field_0x10) {
                uVar8 = ~uVar11 >> 0x1f;
              }
              if ((uVar8 == 0) &&
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
              lVar2 = *(longlong *)&(pUVar10->OnWaterVolumeChanged).Delegate.field_0x8;
              if (((*(int *)(lVar12 + 8 + lVar2) == 0) ||
                  (plVar3 = *(longlong **)(lVar12 + lVar2), plVar3 == (longlong *)0x0)) ||
                 (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
                bVar5 = true;
              }
              lVar12 = lVar12 + -0x10;
              uVar11 = uVar11 - 1;
            } while (-1 < (int)uVar11);
          }
          puVar1 = &(pUVar10->OnWaterVolumeChanged).Delegate.field_0x1c;
          *(int *)puVar1 = *(int *)puVar1 + -1;
          if (bVar5) {
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
          }
          if (local_168.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
          }
        }
      }
    }
  }
  return;
}

// OnRemoveEntityTimerFinish @ 14bc52bd0

void __thiscall ADS_MainCharacter::OnRemoveEntityTimerFinish(ADS_MainCharacter *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_EntityManager *this_00;
  FWeakObjectPtr local_res10;
  UDS_EntityManager *local_res18 [2];
  
  local_res18[0] = UDS_EntityManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18[0] != (UDS_EntityManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18[0] != (UDS_EntityManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    this_00 = (UDS_EntityManager *)FWeakObjectPtr::Get(&local_res10);
    UDS_EntityManager::RemoveEntity(this_00,*(ulong64 *)&this->field_0x680,false);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2380957129612722535>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\DS_MainCharacter.cpp"
                       ,0x167,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnTeleport @ 14bc531a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADS_MainCharacter::OnTeleport
          (ADS_MainCharacter *this,TVector<double> *param_1,TRotator<double> *param_2,uint *param_3)

{
  double dVar1;
  UDS_MainCharacterTeleportComponent *pUVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  TQuat<double> *pTVar7;
  TWeakObjectPtr<UDS_IngameState,FWeakObjectPtr> TVar8;
  UDS_IngameState *this_00;
  ADS_StreamingSourceActor *this_01;
  UDS_ZoneManager *this_02;
  undefined1 auStackY_1c8 [32];
  uint uVar9;
  wchar_t *pwVar10;
  FWeakObjectPtr FStack_198;
  undefined1 auStack_190 [312];
  void *pvStack_58;
  wchar_t *pwStack_50;
  ulonglong uStack_38;
  
  pUVar2 = (this->TeleportComponent).field0_0x0.DebugPtr;
  if (pUVar2 == (UDS_MainCharacterTeleportComponent *)0x0) {
    return;
  }
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  bVar5 = FWeakObjectPtr::IsValid(&(pUVar2->OwnerCharacter).WeakPtr);
  if (bVar5) {
    *&(pUVar2->DestinationTransform).Rotation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(pUVar2->DestinationTransform).Rotation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(pUVar2->DestinationTransform).Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(pUVar2->DestinationTransform).Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(pUVar2->DestinationTransform).Scale3D.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(pUVar2->DestinationTransform).Scale3D.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    dVar3 = (param_1->field0_0x0)._s_0.Y;
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    (pUVar2->DestinationTransform).Translation.XY.m128d_f64[0] = (param_1->field0_0x0)._s_0.X;
    (pUVar2->DestinationTransform).Translation.XY.m128d_f64[1] = dVar3;
    (pUVar2->DestinationTransform).Translation.ZW.m128d_f64[0] = dVar1;
    (pUVar2->DestinationTransform).Translation.ZW.m128d_f64[1] = 0.0;
    pTVar7 = UE::Math::TRotator<double>::Quaternion(param_2,(TQuat<double> *)(auStack_190 + 0x18));
    dVar1 = pTVar7->Y;
    dVar3 = pTVar7->Z;
    dVar4 = pTVar7->W;
    (pUVar2->DestinationTransform).Rotation.XY.m128d_f64[0] = pTVar7->X;
    (pUVar2->DestinationTransform).Rotation.XY.m128d_f64[1] = dVar1;
    (pUVar2->DestinationTransform).Rotation.ZW.m128d_f64[0] = dVar3;
    (pUVar2->DestinationTransform).Rotation.ZW.m128d_f64[1] = dVar4;
    TVar8 = UDS_IngameState::GetInst();
                    /* WARNING: Load size is inaccurate */
    (pUVar2->IngameState).WeakPtr = *TVar8.WeakPtr;
    bVar5 = FWeakObjectPtr::IsValid(&(pUVar2->IngameState).WeakPtr);
    if (bVar5) {
      bVar5 = FWeakObjectPtr::IsValid(&(pUVar2->IngameState).WeakPtr);
      if (!bVar5) {
        return;
      }
      this_00 = (UDS_IngameState *)FWeakObjectPtr::Get(&(pUVar2->IngameState).WeakPtr);
      UDS_IngameState::GetStreamingSourceActor(this_00,(TTransform<double> *)auStack_190);
      bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)auStack_190);
      if (bVar5) {
        this_01 = (ADS_StreamingSourceActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)auStack_190);
        ::FName::FName((FName *)(auStack_190 + 8),"OnStreamingComplete");
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar2 != (UDS_MainCharacterTeleportComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
        FStack_198.ObjectIndex = 0;
        FStack_198.ObjectSerialNumber = 0;
        auStack_190._16_8_ = pUVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar2 != (UDS_MainCharacterTeleportComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
        FWeakObjectPtr::operator=(&FStack_198,(FObjectPtr)((longlong)auStack_190 + 0x10));
        ADS_StreamingSourceActor::BindStreamingCompleteNotify
                  (this_01,(TWeakObjectPtr<UObject,FWeakObjectPtr>)FStack_198,
                   (FName *)(auStack_190 + 8));
        FStack_198.ObjectIndex = *param_3;
        this_02 = UDS_ZoneManager::GetInst();
        if (this_02 != (UDS_ZoneManager *)0x0) {
          UDS_ZoneManager::SetIslandID(this_02,(uint *)&FStack_198);
          TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                    (&pUVar2->OnTeleportStart);
          return;
        }
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar6 = UDS_LogManager::GetInst();
        pvStack_58 = (void *)0x0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(auStack_190 + 0x38),
                   "UDS_MainCharacterTeleportComponent::SetupZoneManager",0x34,Yes);
        pwVar10 = L"ZoneManager is nullptr.";
        uVar9 = 0x70;
      }
      else {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar6 = UDS_LogManager::GetInst();
        pvStack_58 = (void *)0x0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(auStack_190 + 0x38),
                   "UDS_MainCharacterTeleportComponent::SetupStreamingSourceActor",0x3d,Yes);
        pwVar10 = L"streamingSourceActor is nullptr.";
        uVar9 = 99;
      }
    }
    else {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar6 = UDS_LogManager::GetInst();
      pvStack_58 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(auStack_190 + 0x38),
                 "UDS_MainCharacterTeleportComponent::SetupIngameState",0x34,Yes);
      pwVar10 = L"IngameState is nullptr.";
      uVar9 = 0x52;
    }
    UDS_LogManager::PrintLog(pUVar6,1,Warning,pwStack_50,uVar9,pwVar10);
    if (pvStack_58 != (void *)0x0) {
      FMemory::Free(pvStack_58);
    }
    return;
  }
  pUVar6 = UDS_LogManager::GetInst();
  if (pUVar6 == (UDS_LogManager *)0x0) {
    return;
  }
  pUVar6 = UDS_LogManager::GetInst();
  pvStack_58 = (void *)0x0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(auStack_190 + 0x38),
             "UDS_MainCharacterTeleportComponent::StartTeleport",0x31,Yes);
  UDS_LogManager::PrintLog(pUVar6,1,Warning,pwStack_50,0x2e,L"OwnerCharacter is nullptr.");
  if (pvStack_58 == (void *)0x0) {
    return;
  }
  FMemory::Free(pvStack_58);
  return;
}

// OnUnBindTeleportFinish @ 14bc538d0

void __thiscall ADS_MainCharacter::OnUnBindTeleportFinish(ADS_MainCharacter *this,UObject *param_1)

{
  UDS_MainCharacterTeleportComponent *pUVar1;
  
  pUVar1 = (this->TeleportComponent).field0_0x0.DebugPtr;
  if ((pUVar1 != (UDS_MainCharacterTeleportComponent *)0x0) && (param_1 != (UObject *)0x0)) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnTeleportFinished,
               param_1);
    return;
  }
  return;
}

// OnUnBindTeleportStart @ 14bc53900

void __thiscall ADS_MainCharacter::OnUnBindTeleportStart(ADS_MainCharacter *this,UObject *param_1)

{
  UDS_MainCharacterTeleportComponent *pUVar1;
  
  pUVar1 = (this->TeleportComponent).field0_0x0.DebugPtr;
  if ((pUVar1 != (UDS_MainCharacterTeleportComponent *)0x0) && (param_1 != (UObject *)0x0)) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnTeleportStart,
               param_1);
    return;
  }
  return;
}

// PostInitializeComponents @ 14bc55aa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_MainCharacter::PostInitializeComponents(ADS_MainCharacter *this)

{
  longlong lVar1;
  UDS_AbilitySystemComponent *this_00;
  code *pcVar2;
  bool bVar3;
  char *pcVar4;
  TMulticastDelegate<void___cdecl(FGameplayTag_const_&,bool),FDefaultDelegateUserPolicy> *this_01;
  FDelegateHandle FVar5;
  char *pcVar6;
  FName local_res8 [2];
  code *local_38;
  undefined8 uStack_30;
  code *local_28;
  undefined8 uStack_20;
  
  ACharacter::PostInitializeComponents((ACharacter *)this);
  lVar1 = *(longlong *)&this->field_0x1b8;
  if (lVar1 == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2380957129612722351>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\DS_MainCharacter.cpp"
                       ,0xaf,"false");
    if (!bVar3) {
      return;
    }
    goto code_r0x00014bc55c21;
  }
  pcVar4 = strstr("&ADS_MainCharacter::OnPhysicsVolumeChanged","::");
  if (pcVar4 == (char *)0x0) {
LAB_14bc55b5b:
    pcVar6 = &DAT_00000002;
LAB_14bc55b60:
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
      pcVar6 = pcVar4;
      pcVar4 = strstr(pcVar6 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar6 == (char *)0x0) goto LAB_14bc55b5b;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14bc55b60;
  }
  ::FName::FName(local_res8,pcVar6);
  uStack_30 = (ulonglong)uStack_30._4_4_ << 0x20;
  local_38 = OnPhysicsVolumeChanged;
  TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>
  ::__Internal_AddUniqueDynamic<ADS_MainCharacter>
            ((TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>
              *)(lVar1 + 0x1ad),this,(pmf_4d481bc1 *)&local_38,local_res8[0]);
  this_00 = (this->AbilitySystemComponent).field0_0x0.DebugPtr;
  if (this_00 == (UDS_AbilitySystemComponent *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2380957129612722354>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\DS_MainCharacter.cpp"
                       ,0xb2,"false");
    if (bVar3) {
code_r0x00014bc55c21:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    UWN_AbilitySystemComponent::InitializeComponent((UWN_AbilitySystemComponent *)this_00);
    this_01 = UWN_AbilitySystemComponent::GetChangedTagEvent
                        ((UWN_AbilitySystemComponent *)
                         (this->AbilitySystemComponent).field0_0x0.DebugPtr);
    uStack_30._0_4_ = 0x678;
    local_38 = FDS_EntityBase::_vcall__152__flat______;
    local_28 = FDS_EntityBase::_vcall__152__flat______;
    uStack_20 = uStack_30;
    FVar5 = TMulticastDelegateRegistration<void___cdecl(FGameplayTag_const_&,bool),FDefaultDelegateUserPolicy>
            ::AddUObject<ADS_MainCharacter>
                      ((TMulticastDelegateRegistration<void___cdecl(FGameplayTag_const_&,bool),FDefaultDelegateUserPolicy>
                        *)this_01,(ADS_MainCharacter *)(local_res8 + 1),(pmf_8b3f9fb7 *)this);
    *(undefined8 *)&this->field_0x758 = *(undefined8 *)FVar5.ID;
  }
  return;
}

// RefreshCOICoreAsync @ 14bc56330

void __thiscall ADS_MainCharacter::RefreshCOICoreAsync(ADS_MainCharacter *this)

{
  FScriptContainerElement *pFVar1;
  UWN_MCS_COICore *this_00;
  FName FVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined1 auVar5 [8];
  FSharedReferencer<1> FVar6;
  char cVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  FDS_ResourcePresetTableRow *pFVar11;
  FDS_ResourceMeshTableRow *pFVar12;
  FString *pFVar13;
  FName *pFVar14;
  TDelegate<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
  *pTVar15;
  FDS_ResourceAbpTableRow *pFVar16;
  TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy> *pTVar17;
  int iVar18;
  int iVar19;
  TReferenceControllerBase<1> *pTVar20;
  size_t sVar21;
  FName local_res8;
  undefined1 local_128 [16];
  ForAnyElementType local_118;
  undefined8 local_110;
  undefined1 local_108 [8];
  FSharedReferencer<1> FStack_100;
  undefined1 local_f8 [8];
  FSharedReferencer<1> FStack_f0;
  undefined1 local_e8 [16];
  ForAnyElementType local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [8];
  FDelegateAllocation local_b8;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  FScriptContainerElement *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  bool local_78;
  FSoftObjectPath local_68;
  FSoftObjectPath local_48;
  
  uVar4 = local_128._8_8_;
  pTVar20 = (TReferenceControllerBase<1> *)0x0;
  local_108 = (undefined1  [8])OnCharacterLoadingComplete;
  local_128._8_4_ = 0;
  local_128._12_4_ = 0;
  FStack_100.ReferenceController = (TReferenceControllerBase<1> *)(uVar4 & 0xffffffff00000000);
  local_128._0_4_ = 0;
  local_128._4_4_ = 0;
  local_118.Data = local_118.Data & 0xffffffff00000000;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_128,
             (FWriteAccessScope *)local_e8);
  local_d0 = (FDelegateAllocation *)(local_128 + 8);
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)(local_128 + 8));
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_MainCharacter____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ADS_MainCharacter *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar8[3] = 0;
    local_res8 = (FName)this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ADS_MainCharacter *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_res8);
    puVar8[4] = local_108;
    puVar8[5] = FStack_100.ReferenceController;
  }
  if (local_d8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_e8._8_8_,(FDestructionSentinel *)local_e8);
  }
  local_f8 = (undefined1  [8])0x0;
  FStack_f0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_128,
             (FReadAccessScope *)&local_88);
  if ((((int)local_118.Data == 0) || ((FName)local_128._8_8_ == (FName)0x0)) ||
     (cVar7 = (**(code **)(*(longlong *)local_128._8_8_ + 0x38))(), cVar7 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_88);
  if (bVar3) {
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_88,
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_128);
    pTVar10 = ::operator_new(0x30);
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pTVar10 + 1),
                 (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_88);
      pTVar10->SharedReferenceCount = (atomic<int>)0x1;
      pTVar10->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_XV<lambda_1>__4___0FWN_EndOfRefs__QEAA_AEBV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____Z__00_SharedPointerInternals__6B_
      ;
      pTVar10->WeakReferenceCount = (atomic<int>)0x1;
      pTVar10[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar10[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar20 = pTVar10;
    }
    local_108 = (undefined1  [8])0x0;
    FStack_100.ReferenceController = pTVar20;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_f0,&FStack_100);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_100.ReferenceController);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_88);
    if (pTStack_80 != (TReferenceControllerBase<1> *)0x0) {
      FMemory::Free(pTStack_80);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&local_88);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_128,
             (FWriteAccessScope *)&local_88);
  if (((int)local_118.Data != 0) && ((FName)local_128._8_8_ != (FName)0x0)) {
    (*(code *)**(undefined8 **)local_128._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)(local_128 + 8),0,0,0x10);
    local_118.Data = local_118.Data & 0xffffffff00000000;
  }
  if (local_78 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_80,(FDestructionSentinel *)&local_88);
  }
  if ((FName)local_128._8_8_ != (FName)0x0) {
    FMemory::Free((void *)local_128._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_128);
  local_108 = (undefined1  [8])OnCOICoreInitComplete;
  FStack_100.ReferenceController =
       (TReferenceControllerBase<1> *)(local_128._8_8_ & 0xffffffff00000000);
  local_a8 = (undefined1  [8])0x0;
  local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)local_e8);
  local_d0 = &local_a0;
  puVar8 = UE::Core::Private::DelegateAllocate(0x38,&local_a0);
  FVar6.ReferenceController = FStack_f0.ReferenceController;
  auVar5 = local_f8;
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSoftObjectPath__PEAVUWN_MCS_COICore___N_ZUFDefaultDelegateUserPolicy__VFWN_EndOfRefs____6B_
    ;
    puVar8[1] = local_f8;
    puVar8[2] = FStack_f0.ReferenceController;
    if (FStack_f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_f0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_f0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[3] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_MainCharacter____A6AXAEBUFSoftObjectPath__PEAVUWN_MCS_COICore___N_ZUFDefaultDelegateUserPolicy__VFWN_EndOfRefs____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ADS_MainCharacter *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar8[4] = 0;
    local_res8 = (FName)this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ADS_MainCharacter *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 4),(FObjectPtr)&local_res8);
    puVar8[5] = local_108;
    puVar8[6] = FStack_100.ReferenceController;
  }
  if (local_d8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_e8._8_8_,(FDestructionSentinel *)local_e8);
  }
  pFVar11 = (FDS_ResourcePresetTableRow *)
            (**(code **)(*(longlong *)&this->field_0x678 + 0x28))(&this->field_0x678);
  pFVar12 = FDS_ResourcePresetTableRow::ID_ResourceMeshTable(pFVar11);
  local_48.AssetPath.PackageName = (pFVar12->MeshPath).AssetPath.PackageName;
  local_48.AssetPath.AssetName = (pFVar12->MeshPath).AssetPath.AssetName;
  local_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.SubPathString.Data.ArrayNum = (pFVar12->MeshPath).SubPathString.Data.ArrayNum;
  sVar21 = (size_t)local_48.SubPathString.Data.ArrayNum;
  pFVar1 = (pFVar12->MeshPath).SubPathString.Data.AllocatorInstance.Data;
  if (local_48.SubPathString.Data.ArrayNum == 0) {
    local_48.SubPathString.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_48.SubPathString.Data.ArrayNum,0,
               (ForAnyElementType *)&local_48.SubPathString,local_48.SubPathString.Data.ArrayNum,
               &local_48.SubPathString.Data.ArrayMax);
    memcpy(local_48.SubPathString.Data.AllocatorInstance.Data,pFVar1,sVar21);
  }
  pFVar13 = FSoftObjectPath::ToString(&local_48,(FString *)&local_88);
  pFVar13 = FWN_SoftObjectUtils::GetObjectPath((FString *)local_108,pFVar13,false);
  local_128._0_4_ = 0;
  local_128._4_4_ = 0;
  local_128._8_4_ = 0;
  local_128._12_4_ = 0;
  local_118.Data = (FScriptContainerElement *)0x0;
  local_110._0_4_ = 0;
  local_110._4_4_ = 0;
  local_f8 = (undefined1  [8])(pFVar13->Data).AllocatorInstance.Data;
  iVar19 = (pFVar13->Data).ArrayNum;
  iVar18 = iVar19 + -1;
  if (iVar19 == 0) {
    iVar18 = 0;
  }
  FStack_f0.ReferenceController._0_4_ = iVar18;
  FSoftObjectPath::SetPath((FSoftObjectPath *)local_128,(TStringView<wchar_t> *)local_f8);
  if (local_108 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_108);
  }
  local_48.AssetPath.PackageName.ComparisonIndex.Value = local_128._0_4_;
  local_48.AssetPath.PackageName.Number = local_128._4_4_;
  local_48.AssetPath.AssetName.ComparisonIndex.Value = local_128._8_4_;
  local_48.AssetPath.AssetName.Number = local_128._12_4_;
  if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
  }
  local_48.SubPathString.Data.AllocatorInstance.Data = local_118.Data;
  local_48.SubPathString.Data.ArrayNum = (int)local_110;
  local_48.SubPathString.Data.ArrayMax = local_110._4_4_;
  local_110._0_4_ = 0;
  local_110._4_4_ = 0;
  local_118.Data = (FScriptContainerElement *)0x0;
  if ((atomic<unsigned___int64>)local_88 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free(local_88);
  }
  this_00 = (UWN_MCS_COICore *)(this->CustomizableSkmComponent).field0_0x0.DebugPtr;
  pFVar14 = ::FName::FName(&local_res8,"BaseBody");
  FVar2 = *pFVar14;
  pTVar15 = TDelegate<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
            ::
            TDelegate<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
                      ((TDelegate<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
                        *)local_128,
                       (TDelegate<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
                        *)local_a8);
  UWN_MCS_COICore::InitializeCOIAsync(this_00,pTVar15,&local_48,FVar2,false);
  pFVar11 = (FDS_ResourcePresetTableRow *)
            (**(code **)(*(longlong *)&this->field_0x678 + 0x28))(&this->field_0x678);
  pFVar16 = FDS_ResourcePresetTableRow::ID_AbpLinkTable(pFVar11);
  local_68.AssetPath.PackageName = (pFVar16->AbpPath).AssetPath.PackageName;
  local_68.AssetPath.AssetName = (pFVar16->AbpPath).AssetPath.AssetName;
  local_68.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.SubPathString.Data.ArrayNum = (pFVar16->AbpPath).SubPathString.Data.ArrayNum;
  sVar21 = (size_t)local_68.SubPathString.Data.ArrayNum;
  pFVar1 = (pFVar16->AbpPath).SubPathString.Data.AllocatorInstance.Data;
  if (local_68.SubPathString.Data.ArrayNum == 0) {
    local_68.SubPathString.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_68.SubPathString.Data.ArrayNum,0,
               (ForAnyElementType *)&local_68.SubPathString,local_68.SubPathString.Data.ArrayNum,
               &local_68.SubPathString.Data.ArrayMax);
    memcpy(local_68.SubPathString.Data.AllocatorInstance.Data,pFVar1,sVar21);
  }
  local_f8 = (undefined1  [8])OnAnimLoadComplete;
  FStack_f0.ReferenceController =
       (TReferenceControllerBase<1> *)(local_128._8_8_ & 0xffffffff00000000);
  local_c0 = (undefined1  [8])0x0;
  local_b8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c0,
             (FWriteAccessScope *)local_e8);
  local_d0 = &local_b8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x38,&local_b8);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSoftObjectPath__PEAVUObject___ZUFDefaultDelegateUserPolicy__VFWN_EndOfRefs____6B_
    ;
    puVar8[1] = auVar5;
    puVar8[2] = FVar6.ReferenceController;
    if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar6.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[3] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_MainCharacter____A6AXAEBUFSoftObjectPath__PEAVUObject___ZUFDefaultDelegateUserPolicy__VFWN_EndOfRefs____6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar8[4] = 0;
    local_res8 = (FName)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 4),(FObjectPtr)&local_res8);
    puVar8[5] = local_f8;
    puVar8[6] = FStack_f0.ReferenceController;
  }
  if (local_d8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_e8._8_8_,(FDestructionSentinel *)local_e8);
  }
  pFVar13 = FSoftObjectPath::ToString(&local_68,(FString *)local_128);
  pFVar13 = FWN_SoftObjectUtils::GetObjectPath((FString *)local_108,pFVar13,false);
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 0;
  local_e8._8_4_ = 0;
  local_e8._12_4_ = 0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = (FDelegateAllocation *)0x0;
  local_f8 = (undefined1  [8])(pFVar13->Data).AllocatorInstance.Data;
  iVar18 = (pFVar13->Data).ArrayNum;
  iVar19 = iVar18 + -1;
  if (iVar18 == 0) {
    iVar19 = 0;
  }
  FStack_f0.ReferenceController._0_4_ = iVar19;
  pTStack_80 = FStack_f0.ReferenceController;
  local_88 = (FScriptContainerElement *)local_f8;
  FSoftObjectPath::SetPath((FSoftObjectPath *)local_e8,(TStringView<wchar_t> *)&local_88);
  if (local_108 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_108);
  }
  local_68.AssetPath.PackageName.ComparisonIndex.Value = local_e8._0_4_;
  local_68.AssetPath.PackageName.Number = local_e8._4_4_;
  local_68.AssetPath.AssetName.ComparisonIndex.Value = local_e8._8_4_;
  local_68.AssetPath.AssetName.Number = local_e8._12_4_;
  if (local_68.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.SubPathString.Data.AllocatorInstance.Data);
  }
  local_68.SubPathString.Data.AllocatorInstance.Data = local_d8.Data;
  local_68.SubPathString.Data.ArrayNum = (int)local_d0;
  local_68.SubPathString.Data.ArrayMax = local_d0._4_4_;
  local_d0 = (FDelegateAllocation *)0x0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  if ((FName)local_128._0_8_ != (FName)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_c8._0_4_ = 0;
  local_c8._4_4_ = 0;
  local_d0 = (FDelegateAllocation *)0x0;
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 0;
  local_e8._8_4_ = 0;
  local_e8._12_4_ = 0;
  pTVar17 = TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>::
            TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                      ((TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                        *)local_128,
                       (TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                        *)local_c0);
  FSoftObjectPath::LoadAsync(&local_68,pTVar17,(FLoadAssetAsyncOptionalParams *)local_e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c0,
             (FWriteAccessScope *)local_128);
  if ((local_b8.DelegateSize != 0) &&
     (local_b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b8,0,0,0x10);
    local_b8.DelegateSize = 0;
  }
  if (local_118.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_128._8_8_,(FDestructionSentinel *)local_128);
  }
  if (local_b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c0);
  if (local_68.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)local_128);
  if ((local_a0.DelegateSize != 0) &&
     (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a0,0,0,0x10);
    local_a0.DelegateSize = 0;
  }
  if (local_118.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_128._8_8_,(FDestructionSentinel *)local_128);
  }
  if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  return;
}

// RefreshCustomize @ 14bc56c30

void __thiscall ADS_MainCharacter::RefreshCustomize(ADS_MainCharacter *this)

{
  UCustomizableObjectInstance *this_00;
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  longlong lVar5;
  FWeakObjectPtr local_res8;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  this_00 = *(UCustomizableObjectInstance **)
             &((this->CustomizableSkmComponent).field0_0x0.DebugPtr)->field_0x2b0;
  if (this_00 == (UCustomizableObjectInstance *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2380957129612723361>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\DS_MainCharacter.cpp"
                       ,0x4a1,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    UDS_CustomizeData::GetData((ulong64)&local_res8,*(ulong64 *)&this->field_0x680,false);
    bVar3 = TWeakObjectPtr<UDS_CustomizeData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CustomizeData,FWeakObjectPtr> *)&local_res8,(void *)0x0);
    if (!bVar3) {
      pUVar4 = FWeakObjectPtr::Get(&local_res8);
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = *(int *)&pUVar4[3].field_0x8;
      lVar5 = (longlong)local_48.Data.ArrayNum;
      pvVar1 = *(void **)(pUVar4 + 3);
      if (local_48.Data.ArrayNum == 0) {
        local_48.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_48,
                   local_48.Data.ArrayNum,&local_48.Data.ArrayMax);
        memcpy(local_48.Data.AllocatorInstance.Data,pvVar1,lVar5 * 2);
      }
      pUVar4 = FWeakObjectPtr::Get(&local_res8);
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = *(int *)&pUVar4[2].field_0x20;
      lVar5 = (longlong)local_58.Data.ArrayNum;
      pvVar1 = *(void **)&pUVar4[2].field_0x18;
      if (local_58.Data.ArrayNum == 0) {
        local_58.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_58,
                   local_58.Data.ArrayNum,&local_58.Data.ArrayMax);
        memcpy(local_58.Data.AllocatorInstance.Data,pvVar1,lVar5 * 2);
      }
      ::FString::FString(&local_38,"A_Head");
      UCustomizableObjectInstance::SetIntParameterSelectedOption(this_00,&local_38,&local_48,-1);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_28,"A_Hair");
      UCustomizableObjectInstance::SetIntParameterSelectedOption(this_00,&local_28,&local_58,-1);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// RefreshEntity @ 14bc57210

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

bool __thiscall ADS_MainCharacter::RefreshEntity(ADS_MainCharacter *this)

{
  undefined1 *this_00;
  UDS_MainCharacterStateComponent *pUVar1;
  AGameModeBase *pAVar2;
  longlong lVar3;
  code *pcVar4;
  FWeakObjectPtr FVar5;
  bool bVar6;
  undefined1 uVar7;
  UDS_LogManager *pUVar8;
  UObject *pUVar9;
  UDS_SkillDataSet *pUVar10;
  UClass *pUVar11;
  ADS_PlayerController *this_01;
  UWorld *pUVar12;
  atomic<unsigned_char> *paVar13;
  longlong *plVar14;
  int iVar15;
  undefined1 auStackY_798 [32];
  EDS_AbilityTagType local_758 [8];
  FWeakObjectPtr local_750;
  FWeakObjectPtr local_748;
  FWeakObjectPtr local_740;
  FWeakObjectPtr local_738;
  FWeakObjectPtr local_730;
  UObject *local_728;
  undefined1 *local_720;
  UObject *local_718;
  undefined8 local_710;
  undefined8 local_708 [2];
  TVector<double>_u_0 local_6f8;
  undefined1 local_6d8 [128];
  undefined1 local_658 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_798;
  bVar6 = FDS_EntityBase::RefreshEntity((FDS_EntityBase *)this);
  if (!bVar6) {
    return false;
  }
  UDS_PlayerData::GetData((ulong64)&local_750,UDS_PlayerData::MainPlayerEntityID,false);
  bVar6 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_750,(void *)0x0);
  if (bVar6) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_5d8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_5d8,"ADS_MainCharacter::RefreshEntity",0x20,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_5d8.Ptr,0x28f,L"playerData is nullptr. (%llu)");
      if ((void *)local_5d8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_5d8._padding_);
      }
    }
    iVar15 = 0x290;
    paVar13 = &bGEnsureHasExecuted<2380957129612722832>;
    goto LAB_14bc5731e;
  }
  pUVar1 = *(UDS_MainCharacterStateComponent **)&this->field_0x3d0;
  if (pUVar1 != (UDS_MainCharacterStateComponent *)0x0) {
    pUVar9 = FWeakObjectPtr::Get(&local_750);
    UDS_MainCharacterStateComponent::RegisterCharStateDelegate
              (pUVar1,*(ulong64 *)&pUVar9[8].field_0x10);
    pUVar1 = *(UDS_MainCharacterStateComponent **)&this->field_0x3d0;
    pUVar9 = FWeakObjectPtr::Get(&local_750);
    UDS_MainCharacterStateComponent::RegisterCharStatusDelegate
              (pUVar1,*(ulong64 *)&pUVar9[8].field_0x10);
  }
  FWeakObjectPtr::Get(&local_750);
  TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_740);
  bVar6 = TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr> *)&local_740,(void *)0x0);
  if (bVar6) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      FWeakObjectPtr::Get(&local_750);
      local_4b8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_4b8,"ADS_MainCharacter::RefreshEntity",0x20,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_4b8.Ptr,0x29f,L"skillDataSet is nullptr. (EntityID: %llu)");
      if ((void *)local_4b8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4b8._padding_);
      }
    }
    iVar15 = 0x2a0;
    paVar13 = &bGEnsureHasExecuted<2380957129612722848>;
    goto LAB_14bc5731e;
  }
  pUVar10 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_740);
  UDS_SkillDataSet::RefreshPopupSkillHelperList(pUVar10);
  pUVar10 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_740);
  UDS_SkillDataSet::RefreshSkillUseHelperList(pUVar10);
  plVar14 = *(longlong **)&this->field_0x388;
  if (plVar14 == (longlong *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_398._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_398,"ADS_MainCharacter::RefreshEntity",0x20,Yes);
      UDS_LogManager::PrintLog(pUVar8,1,Warning,local_398.Ptr,0x2a9,L"MovementCore is nullptr.");
      if ((void *)local_398._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_398._padding_);
      }
    }
    iVar15 = 0x2aa;
    paVar13 = &bGEnsureHasExecuted<2380957129612722858>;
    goto LAB_14bc5731e;
  }
  pUVar9 = *(UObject **)&this[-1].field_0x780;
  pcVar4 = *(code **)(*plVar14 + 0x2b0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  local_738.ObjectIndex = 0;
  local_738.ObjectSerialNumber = 0;
  local_728 = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  FWeakObjectPtr::operator=(&local_738,(FObjectPtr)&local_728);
  FVar5 = local_738;
  this_00 = &this[-1].field_0x438;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (undefined1 *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  local_730.ObjectIndex = 0;
  local_730.ObjectSerialNumber = 0;
  local_720 = this_00;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (undefined1 *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  FWeakObjectPtr::operator=(&local_730,(FObjectPtr)&local_720);
  (*pcVar4)(plVar14,local_730,FVar5);
  if (*(UCapsuleComponent **)&this[-1].field_0x788 == (UCapsuleComponent *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_278._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_278,"ADS_MainCharacter::RefreshEntity",0x20,Yes);
      UDS_LogManager::PrintLog(pUVar8,1,Warning,local_278.Ptr,0x2b3,L"capsuleComp is nullptr.");
      if ((void *)local_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
    }
    iVar15 = 0x2b4;
    paVar13 = &bGEnsureHasExecuted<2380957129612722868>;
    goto LAB_14bc5731e;
  }
  UCapsuleComponent::SetCapsuleSize
            (*(UCapsuleComponent **)&this[-1].field_0x788,*(float *)&this->field_0x5c,
             *(float *)&this->field_0x58,true);
  bVar6 = FDS_EntityBase::IsEntityScaled((FDS_EntityBase *)this);
  if (bVar6) {
    local_6f8._s_0.X = (double)*(undefined8 *)&this->field_0x40;
    local_6f8._s_0.Y = (double)*(undefined8 *)&this->field_0x48;
    local_6f8._s_0.Z = (double)*(undefined8 *)&this->field_0x50;
    USceneComponent::SetWorldScale3D
              (*(USceneComponent **)&this[-1].field_0x5f0,(TVector<double> *)&local_6f8._s_0);
  }
  pUVar9 = *(UObject **)&this[-1].field_0x728;
  if (pUVar9 == (UObject *)0x0) {
LAB_14bc5773f:
    pUVar9 = (UObject *)0x0;
  }
  else {
    pUVar11 = Z_Construct_UClass_ADS_PlayerController_NoRegister();
    iVar15 = (int)pUVar11->_padding_;
    if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar15) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar15 * 8) !=
        &pUVar11->_padding_)) goto LAB_14bc5773f;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  local_748.ObjectIndex = 0;
  local_748.ObjectSerialNumber = 0;
  local_718 = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  FWeakObjectPtr::operator=(&local_748,(FObjectPtr)&local_718);
  bVar6 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> *)&local_748,(void *)0x0);
  if (!bVar6) {
    this_01 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_748);
    ADS_PlayerController::Refresh(this_01);
    if (*(longlong **)&this->field_0x3c0 == (longlong *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      if (pUVar8 != (UDS_LogManager *)0x0) {
        pUVar8 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"ADS_MainCharacter::RefreshEntity",0x20,Yes);
        UDS_LogManager::PrintLog(pUVar8,1,Warning,local_158.Ptr,0x2cb,L"FollowCamera is nullptr.");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
      iVar15 = 0x2cc;
      paVar13 = &bGEnsureHasExecuted<2380957129612722892>;
LAB_14bc5731e:
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (paVar13,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\DS_MainCharacter.cpp"
                         ,iVar15,"false");
      if (!bVar6) {
        return false;
      }
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    (**(code **)(**(longlong **)&this->field_0x3c0 + 0x678))();
  }
  pUVar12 = AActor::GetWorld((AActor *)this_00);
  pAVar2 = (pUVar12->AuthorityGameMode).field0_0x0.DebugPtr;
  if (pAVar2 != (AGameModeBase *)0x0) {
    pUVar11 = Z_Construct_UClass_ADS_GameMode_NoRegister();
    lVar3 = pAVar2->_padding_;
    iVar15 = (int)pUVar11->_padding_;
    if ((iVar15 <= *(int *)(lVar3 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar15 * 8) ==
        &pUVar11->_padding_)) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this_00,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar11 = Z_Construct_UClass_UDS_SyncSendComponent_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_6d8,pUVar11);
      local_6d8._8_8_ = this_00;
      pUVar9 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_6d8);
      if (local_6d8._64_8_ != 0) {
        plVar14 = (longlong *)(local_6d8 + 0x50);
        if ((longlong *)local_6d8._104_8_ != (longlong *)0x0) {
          plVar14 = (longlong *)local_6d8._104_8_;
        }
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      *(UObject **)&this->field_0x390 = pUVar9;
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this_00,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar11 = Z_Construct_UClass_UDS_SyncRecvComponent_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_658,pUVar11);
      local_658._8_8_ = this_00;
      pUVar9 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_658);
      if (local_658._64_8_ != 0) {
        plVar14 = (longlong *)(local_658 + 0x50);
        if ((longlong *)local_658._104_8_ != (longlong *)0x0) {
          plVar14 = (longlong *)local_658._104_8_;
        }
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      *(UObject **)&this->field_0x398 = pUVar9;
    }
  }
  local_710 = 0;
  local_758[0] = FloatingText;
  FDS_EntityBase::TryActivateAbility
            ((FDS_EntityBase *)this,local_758,(TObjectPtr<UWN_AbilityContext>)&local_710);
  local_708[0] = 0;
  local_758[1] = 0x24;
  FDS_EntityBase::TryActivateAbility
            ((FDS_EntityBase *)this,local_758 + 1,(TObjectPtr<UWN_AbilityContext>)local_708);
  return true;
}

// RefreshItemEquip @ 14bc57b50

void __thiscall ADS_MainCharacter::RefreshItemEquip(ADS_MainCharacter *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  UCustomizableObjectInstance *this_00;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  UDS_EntityManager *this_01;
  UEnum *pUVar6;
  UDS_ItemDataSet *pUVar7;
  UObject *pUVar8;
  FDS_ItemBaseTableRow *this_02;
  FDS_ResourcePartsTableRow *pFVar9;
  FDS_CoiParameterTableRow *pFVar10;
  int iVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_a8;
  FString local_a0;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_90;
  TSharedPtr<FDS_EquipmentItemCharacterData,1> local_80;
  FString local_70;
  FString local_60 [2];
  
  this_00 = *(UCustomizableObjectInstance **)
             &((this->CustomizableSkmComponent).field0_0x0.DebugPtr)->field_0x2b0;
  if (this_00 == (UCustomizableObjectInstance *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2380957129612723313>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\DS_MainCharacter.cpp"
                       ,0x471,"false");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    this_01 = UDS_EntityManager::GetInst();
    if (this_01 != (UDS_EntityManager *)0x0) {
      UDS_EntityManager::GetCurrentMainCharEntityID(this_01,true);
    }
    iVar11 = ds_parts::EquipParamTypes.ArrayNum;
    pFVar1 = ds_parts::EquipParamTypes.AllocatorInstance.Data + iVar11;
    FVar14.Data = ds_parts::EquipParamTypes.AllocatorInstance.Data;
    while( true ) {
      if (ds_parts::EquipParamTypes.ArrayNum != iVar11) {
        local_res8[0] = local_res8[0] & 0xffffff00;
        `TCheckedPointerIterator<enum_EDS_CoiParamType_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (FVar14.Data == pFVar1) break;
      FVar2 = *FVar14.Data;
      pUVar6 = StaticEnum<enum_EDS_CoiParamType>();
      UEnum::GetNameStringByValue(pUVar6,&local_70,(ulonglong)(byte)FVar2);
      ::FString::FString(&local_a0,L"Default");
      UCustomizableObjectInstance::SetIntParameterSelectedOption(this_00,&local_70,&local_a0,-1);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      FVar14.Data = FVar14.Data + 1;
    }
    TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_res20);
    bVar5 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar5) {
      pUVar7 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_res20);
      UDS_ItemDataSet::GetEquipmentItemCharacterData(pUVar7,&local_80);
      if (local_80.Object != (FDS_EquipmentItemCharacterData *)0x0) {
        if ((local_80.Object == (FDS_EquipmentItemCharacterData *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FDS_EquipmentItemCharacterData::GetAllEquippedItemUIDList(local_80.Object,&local_90);
        local_res8[0] = local_90.ArrayNum;
        uVar12 = (ulonglong)(int)local_res8[0];
        local_a0.Data.AllocatorInstance.Data = local_90.AllocatorInstance.Data + uVar12 * 8;
        FVar14.Data = local_90.AllocatorInstance.Data;
        while( true ) {
          FVar4.Data = local_a0.Data.AllocatorInstance.Data;
          if (local_90.ArrayNum != (int)uVar12) {
            `TCheckedPointerIterator<__int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res10);
          }
          if (FVar14.Data == FVar4.Data) break;
          pUVar7 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_res20);
          UDS_ItemDataSet::GetItemDataByUID(pUVar7,(ulong64)&local_a8);
          bVar5 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_a8,(void *)0x0);
          if (!bVar5) {
            pUVar8 = FWeakObjectPtr::Get(&local_a8);
            this_02 = FDS_ItemBaseTableRow::GetRef((longlong)*(int *)&pUVar8[8].field_0x10,true);
            pFVar9 = FDS_ItemBaseTableRow::ID_ResourcePartsTable(this_02);
            pFVar13 = (pFVar9->ID_CoiParameter).AllocatorInstance.Data;
            iVar11 = (pFVar9->ID_CoiParameter).ArrayNum;
            pFVar1 = pFVar13 + (longlong)iVar11 * 4;
            while( true ) {
              if ((pFVar9->ID_CoiParameter).ArrayNum != iVar11) {
                `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_res18);
              }
              if (pFVar13 == pFVar1) break;
              pFVar10 = FDS_CoiParameterTableRow::GetRef((longlong)*(int *)pFVar13,true);
              pUVar6 = StaticEnum<enum_EDS_CoiParamType>();
              UEnum::GetNameStringByValue(pUVar6,local_60,(ulonglong)pFVar10->ParamType);
              UCustomizableObjectInstance::SetIntParameterSelectedOption
                        (this_00,local_60,&pFVar10->Value,-1);
              if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
              }
              pFVar13 = pFVar13 + 4;
            }
          }
          FVar14.Data = FVar14.Data + 8;
          uVar12 = (ulonglong)local_res8[0];
        }
        if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.AllocatorInstance.Data);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_80.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// RefreshPartsItem @ 14bc57e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_MainCharacter::RefreshPartsItem(ADS_MainCharacter *this)

{
  UObjectBase *this_00;
  void *_Src;
  code *pcVar1;
  ADS_MainCharacter *pAVar2;
  ADS_MainCharacter *pAVar3;
  bool bVar4;
  int iVar5;
  FUObjectItem *pFVar6;
  UDS_ItemDataSet *pUVar7;
  UObject *pUVar8;
  FDS_ItemBaseTableRow *this_01;
  FDS_ResourcePartsTableRow *pFVar9;
  FDS_ResourceMeshTableRow *pFVar10;
  UClass *pUVar11;
  UActorComponent *this_02;
  uint uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement *pFVar17;
  TArray<TObjectPtr<UDS_PartsComponent>,TSizedDefaultAllocator<32>_> *pTVar18;
  longlong lVar19;
  uint uVar20;
  undefined1 auStackY_198 [32];
  undefined1 local_148 [8];
  UActorComponent *local_140;
  ADS_MainCharacter *local_138;
  ForAnyElementType local_130;
  int local_128;
  int local_124;
  uint local_120;
  FWeakObjectPtr local_118;
  longlong local_110;
  FWeakObjectPtr local_108;
  undefined8 local_100;
  FScriptContainerElement *local_f8;
  FScriptContainerElement *local_f0;
  int *local_e8;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_e0;
  TSharedPtr<FDS_EquipmentItemCharacterData,1> local_d0;
  FName local_c0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  uVar20 = 0;
  pTVar18 = &this->PartsComponents;
  local_138 = this;
  if (0 < (this->PartsComponents).ArrayNum) {
    lVar19 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar20 < pTVar18->ArrayNum) {
        uVar12 = ~uVar20 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = *(UObjectBase **)((pTVar18->AllocatorInstance).Data + lVar19);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UObjectBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      (**(code **)(this_00->_padding_ + 0x518))
                (this_00,&FDetachmentTransformRules::KeepRelativeTransform);
      (**(code **)(this_00->_padding_ + 0x4a0))(this_00,0);
      pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
      if ((((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsRooted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                             ,0xb8,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      UObjectBase::AtomicallySetFlags(this_00,RF_MirroredGarbage);
      pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
      do {
        lVar15 = (pFVar6->field0_0x0).FlagsAndRefCount;
        uVar12 = (uint)((ulonglong)lVar15 >> 0x20);
        if ((uVar12 >> 0x15 & 1) != 0) break;
        if (((ulonglong)pFVar6 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (
                    L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                    );
        }
        LOCK();
        bVar4 = lVar15 == (pFVar6->field0_0x0).FlagsAndRefCount;
        if (bVar4) {
          (pFVar6->field0_0x0).FlagsAndRefCount =
               (longlong)(int)uVar12 << 0x20 | (longlong)(int)lVar15 | 0x20000000000000;
        }
        UNLOCK();
      } while (!bVar4);
      pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
      FUObjectItem::ClearRootFlags(pFVar6,Async);
      uVar20 = uVar20 + 1;
      lVar19 = lVar19 + 8;
      pTVar18 = &local_138->PartsComponents;
    } while ((int)uVar20 < (local_138->PartsComponents).ArrayNum);
  }
  pAVar2 = local_138;
  local_e8 = &pTVar18->ArrayMax;
  pTVar18->ArrayNum = 0;
  if (pTVar18->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar18->AllocatorInstance,0,local_e8);
  }
  TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_118);
  bVar4 = FWeakObjectPtr::IsValid(&local_118);
  if (bVar4) {
    pUVar7 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_118);
    UDS_ItemDataSet::GetEquipmentItemCharacterData(pUVar7,&local_d0);
    if (local_d0.Object != (FDS_EquipmentItemCharacterData *)0x0) {
      if ((local_d0.Object == (FDS_EquipmentItemCharacterData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FDS_EquipmentItemCharacterData::GetAllEquippedItemUIDList(local_d0.Object,&local_e0);
      pTVar18 = &pAVar2->PartsComponents;
      local_120 = local_e0.ArrayNum;
      uVar14 = (ulonglong)(int)local_120;
      pFVar17 = local_e0.AllocatorInstance.Data + uVar14 * 8;
      FVar16.Data = local_e0.AllocatorInstance.Data;
      local_f8 = pFVar17;
      while( true ) {
        local_f0 = FVar16.Data;
        if (local_e0.ArrayNum != (int)uVar14) {
          local_148[0] = 0;
          `TCheckedPointerIterator<__int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_148);
        }
        if (FVar16.Data == pFVar17) break;
        pUVar7 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_118);
        UDS_ItemDataSet::GetItemDataByUID(pUVar7,(ulong64)&local_108);
        bVar4 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_108,(void *)0x0);
        if (!bVar4) {
          pUVar8 = FWeakObjectPtr::Get(&local_108);
          this_01 = FDS_ItemBaseTableRow::GetRef((longlong)*(int *)&pUVar8[8].field_0x10,true);
          pFVar9 = FDS_ItemBaseTableRow::ID_ResourcePartsTable(this_01);
          uVar20 = 0;
          pFVar17 = local_f8;
          if (0 < (pFVar9->ID_ResourceMesh).ArrayNum) {
            lVar19 = 0;
            local_110 = 0;
            do {
              lVar15 = local_110;
              if (((int)uVar20 < 0) || ((pFVar9->SocketName).ArrayNum <= (int)uVar20)) {
                bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<2380957129612723415>,false,
                                   "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\DS_MainCharacter.cpp"
                                   ,0x4d7,"false");
                if (bVar4) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
              }
              else {
                uVar12 = 0;
                if ((int)uVar20 < (pFVar9->ID_ResourceMesh).ArrayNum) {
                  uVar12 = ~uVar20 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                pFVar10 = FDS_ResourceMeshTableRow::GetRef
                                    ((longlong)
                                     *(int *)((pFVar9->ID_ResourceMesh).AllocatorInstance.Data +
                                             lVar15),true);
                uVar12 = 0;
                if ((int)uVar20 < (pFVar9->SocketName).ArrayNum) {
                  uVar12 = ~uVar20 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                pFVar17 = (pFVar9->SocketName).AllocatorInstance.Data;
                local_130.Data = (FScriptContainerElement *)0x0;
                local_128 = *(int *)(pFVar17 + lVar19 + 8);
                lVar15 = (longlong)local_128;
                _Src = *(void **)(pFVar17 + lVar19);
                if (local_128 == 0) {
                  local_124 = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,local_128,0,&local_130,local_128,&local_124);
                  memcpy(local_130.Data,_Src,lVar15 * 2);
                }
                pAVar3 = local_138;
                local_100 = 0;
                FObjectInitializer::AssertIfInConstructor
                          ((UObject *)local_138,
                           L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                          );
                pUVar11 = Z_Construct_UClass_UDS_PartsComponent_NoRegister();
                FStaticConstructObjectParameters::FStaticConstructObjectParameters
                          ((FStaticConstructObjectParameters *)local_b8,pUVar11);
                local_b8._8_8_ = pAVar3;
                local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
                local_b8._56_8_ = (UPackage *)0x0;
                local_b8._16_4_ = 0;
                local_b8._20_4_ = 0;
                local_b8._24_4_ = RF_Transient;
                local_b8._40_8_ = (UObject *)0x0;
                local_b8[0x20] = false;
                this_02 = (UActorComponent *)
                          StaticConstructObject_Internal
                                    ((FStaticConstructObjectParameters *)local_b8);
                if (local_b8._64_8_ != 0) {
                  plVar13 = (longlong *)(local_b8 + 0x50);
                  if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
                    plVar13 = (longlong *)local_b8._104_8_;
                  }
                  (**(code **)(*plVar13 + 0x10))();
                }
                FSoftObjectPath::operator=
                          ((FSoftObjectPath *)&this_02[3]._padding_,&pFVar10->MeshPath);
                this_02->bWantsInitializeComponent = '\0';
                FVar16.Data = (FScriptContainerElement *)L"";
                if (local_128 != 0) {
                  FVar16.Data = local_130.Data;
                }
                pcVar1 = *(code **)(this_02->_padding_ + 0x508);
                ::FName::FName(&local_c0,(wchar_t *)FVar16.Data);
                (*pcVar1)(this_02,*(undefined8 *)&local_138->field_0x340,
                          &FAttachmentTransformRules::KeepRelativeTransform);
                UActorComponent::RegisterComponent(this_02);
                (**(code **)(this_02->_padding_ + 1000))(this_02);
                local_140 = this_02;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)this_02);
                }
                pFVar17 = (pTVar18->AllocatorInstance).Data;
                if (((pFVar17 <= (FScriptContainerElement *)&local_140) &&
                    ((FScriptContainerElement *)&local_140 <
                     pFVar17 + (longlong)(pAVar2->PartsComponents).ArrayMax * 8)) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar4)) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                iVar5 = (pAVar2->PartsComponents).ArrayNum;
                if (iVar5 == (pAVar2->PartsComponents).ArrayMax) {
                  iVar5 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x808,&pTVar18->AllocatorInstance,local_e8);
                }
                (pAVar2->PartsComponents).ArrayNum = iVar5 + 1;
                *(UActorComponent **)((pTVar18->AllocatorInstance).Data + (longlong)iVar5 * 8) =
                     local_140;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_140 != (UActorComponent *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)local_140);
                }
                if (local_130.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_130.Data);
                }
              }
              local_110 = local_110 + 4;
              uVar20 = uVar20 + 1;
              lVar19 = lVar19 + 0x10;
              FVar16.Data = local_f0;
              pFVar17 = local_f8;
            } while ((int)uVar20 < (pFVar9->ID_ResourceMesh).ArrayNum);
          }
        }
        FVar16.Data = FVar16.Data + 8;
        uVar14 = (ulonglong)local_120;
      }
      if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d0.SharedReferenceCount.ReferenceController);
  }
  return;
}

// RemoveEntity @ 14bc5a5c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADS_MainCharacter::RemoveEntity(ADS_MainCharacter *this,float param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  FTimerManager *this_00;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_EntityManager *this_01;
  FWeakObjectPtr local_res18;
  UDS_EntityManager *local_res20;
  undefined1 *local_68;
  FDelegateAllocation local_60;
  code *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_res20 = UDS_EntityManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res20 != (UDS_EntityManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res20 != (UDS_EntityManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  bVar3 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar3) {
    puVar1 = &this[-1].field_0x438;
    if (param_1 <= 0.0) {
      this_01 = (UDS_EntityManager *)FWeakObjectPtr::Get(&local_res18);
      UDS_EntityManager::RemoveEntity(this_01,*(ulong64 *)&this->field_0x8,false);
    }
    else {
      this->field_0x340 = 1;
      this_00 = FDS_TimerManager::Get((UObject *)0x0);
      uStack_40 = 0;
      local_48 = OnRemoveEntityTimerFinish;
      local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_60.DelegateSize = 0;
      puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &
                  ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        uVar5 = FDelegateHandle::GenerateNewID();
        puVar4[2] = uVar5;
        *puVar4 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_MainCharacter____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (puVar1 != (undefined1 *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)puVar1);
        }
        puVar4[3] = 0;
        local_68 = puVar1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (puVar1 != (undefined1 *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)puVar1);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_68);
        puVar4[4] = local_48;
        puVar4[5] = CONCAT44(uStack_3c,uStack_40);
      }
      FTimerManager::SetTimer
                (this_00,(FTimerHandle *)&this->field_0x348,
                 (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                 &local_60,param_1,false,__real_bf800000);
      if (local_60.DelegateSize != 0) {
        if (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          return;
        }
        (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_60,0,0,0x10);
        local_60.DelegateSize = 0;
      }
      if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_60.DelegateAllocator);
        return;
      }
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2380957129612722514>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\DS_MainCharacter.cpp"
                       ,0x152,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// ResetEntityOnCharacterSwitch @ 14bc5ab70

void __thiscall ADS_MainCharacter::ResetEntityOnCharacterSwitch(ADS_MainCharacter *this)

{
  bool bVar1;
  FGameplayTag *pFVar2;
  UObject *pUVar3;
  UDS_InputData *this_00;
  EDS_AbilityDeactivateType local_res8 [8];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FGameplayTagContainer local_28;
  
  if (*(longlong *)&this->field_0x380 != 0) {
    local_28.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.GameplayTags.ArrayNum = 0;
    local_28.GameplayTags.ArrayMax = 0;
    local_28.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ParentTags.ArrayNum = 0;
    local_28.ParentTags.ArrayMax = 0;
    local_res8[0] = 0x5c;
    pFVar2 = FDS_GameplayTags::GetAbilityTag(local_res8);
    FGameplayTagContainer::AddTag(&local_28,pFVar2);
    local_res8[0] = Cancel;
    UDS_AbilitySystemComponent::DeactivateAllAbility
              (*(UDS_AbilitySystemComponent **)&this->field_0x380,&local_28,local_res8);
    if (local_28.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.ParentTags.AllocatorInstance.Data);
    }
    if (local_28.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.GameplayTags.AllocatorInstance.Data);
    }
  }
  ADS_PlayerController::GetPlayerController();
  bVar1 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> *)&local_res10,(void *)0x0
                    );
  if (!bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&local_res10);
    (**(code **)(*(longlong *)pUVar3 + 0x6f8))(pUVar3);
  }
  (**(code **)(*(longlong *)this + 0x1b8))(this);
  bVar1 = TWeakObjectPtr<UDS_InputData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_InputData,FWeakObjectPtr> *)&local_res18,(void *)0x0);
  if (!bVar1) {
    this_00 = (UDS_InputData *)FWeakObjectPtr::Get(&local_res18);
    UDS_InputData::Reset(this_00);
  }
  if (*(UObject **)&this->field_0x390 != (UObject *)0x0) {
    UObject::ConditionalBeginDestroy(*(UObject **)&this->field_0x390);
    *(undefined8 *)&this->field_0x390 = 0;
  }
  if (*(UObject **)&this->field_0x398 != (UObject *)0x0) {
    UObject::ConditionalBeginDestroy(*(UObject **)&this->field_0x398);
    *(undefined8 *)&this->field_0x398 = 0;
  }
  if (*(UDS_MainCharacterStateComponent **)&this->field_0x3d0 !=
      (UDS_MainCharacterStateComponent *)0x0) {
    UDS_MainCharacterStateComponent::UnregisterCharStateDelegate
              (*(UDS_MainCharacterStateComponent **)&this->field_0x3d0);
    UDS_MainCharacterStateComponent::UnregisterCharStatusDelegate
              (*(UDS_MainCharacterStateComponent **)&this->field_0x3d0);
  }
  return;
}

// ResetToDefaultMaterial @ 14bc5b310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ADS_MainCharacter::ResetToDefaultMaterial(ADS_MainCharacter *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  UDS_LogManager *pUVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  (**(code **)(*(longlong *)this + 0x80))();
  bVar3 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)local_158,(void *)0x0)
  ;
  if (!bVar3) {
    iVar1 = *(int *)&this->field_0x408;
    pUVar5 = FWeakObjectPtr::Get(local_158);
    iVar4 = (**(code **)(*(longlong *)pUVar5 + 0x810))(pUVar5);
    if (iVar1 == iVar4) {
      uVar8 = 0;
      if (0 < iVar1) {
        lVar9 = 0;
        do {
          pUVar5 = FWeakObjectPtr::Get(local_158);
          pcVar2 = *(code **)(*(longlong *)pUVar5 + 0x6b8);
          uVar7 = 0;
          if ((int)uVar8 < *(int *)&this->field_0x408) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
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
          (*pcVar2)(pUVar5,uVar8,*(undefined8 *)(*(longlong *)&this->field_0x400 + lVar9 * 8));
          uVar8 = uVar8 + 1;
          lVar9 = lVar9 + 1;
        } while (lVar9 < iVar1);
      }
    }
    else {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"ADS_MainCharacter::ResetToDefaultMaterial",0x29,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,local_148.Ptr,0x3a2,L"defMatCount != curMatCount.");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
  }
  return;
}

// SetActorSequencerPlaying @ 14bc5c410

void __thiscall ADS_MainCharacter::SetActorSequencerPlaying(ADS_MainCharacter *this,bool param_1)

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
  FDestructionSentinel local_38;
  
  this->bIsActorSequencerPlaying = param_1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->ChangeActorSequencerPlayDelegate,(FWriteAccessScope *)&local_38);
  puVar1 = &(this->ChangeActorSequencerPlayDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->ChangeActorSequencerPlayDelegate).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->ChangeActorSequencerPlayDelegate).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
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
      lVar2 = *(longlong *)&(this->ChangeActorSequencerPlayDelegate).field_0x8;
      if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->ChangeActorSequencerPlayDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->ChangeActorSequencerPlayDelegate,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// SetCoiParamInt @ 14bc5d700

void __thiscall
ADS_MainCharacter::SetCoiParamInt
          (ADS_MainCharacter *this,FString *param_1,FString *param_2,bool param_3)

{
  UCustomizableObjectInstance *this_00;
  FScriptContainerElement *pFVar1;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  int local_18;
  EWN_MCS_MeshUpdatePolicy local_10;
  
  this_00 = *(UCustomizableObjectInstance **)
             &((this->CustomizableSkmComponent).field0_0x0.DebugPtr)->field_0x2b0;
  if (this_00 == (UCustomizableObjectInstance *)0x0) {
    pFVar1 = (param_2->Data).AllocatorInstance.Data;
  }
  else {
    UCustomizableObjectInstance::SetIntParameterSelectedOption(this_00,param_1,param_2,-1);
    if (param_3) {
      local_30._0_4_ = 0xffffffff;
      local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_20.Data = (FScriptContainerElement *)0x0;
      local_18 = 0;
      local_10 = Async_High;
      UWN_MCS_COICore::UpdateMeshAsync
                ((UWN_MCS_COICore *)(this->CustomizableSkmComponent).field0_0x0.DebugPtr,
                 (FWN_MCS_MeshUpdateParams *)local_30);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_28,(FWriteAccessScope *)&local_48);
      if ((local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_20.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
        local_18 = 0;
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
      if (FStack_20.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_20.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
    }
    pFVar1 = (param_2->Data).AllocatorInstance.Data;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// SetFallingHigher @ 14bc5e150

void __thiscall ADS_MainCharacter::SetFallingHigher(ADS_MainCharacter *this)

{
  UDS_AbilitySystemComponent *pUVar1;
  bool bVar2;
  EDS_StateTagType local_res8 [8];
  FWeakObjectPtr local_res10;
  UDS_AbilitySystemComponent *local_res18 [2];
  
  pUVar1 = (this->AbilitySystemComponent).field0_0x0.DebugPtr;
  local_res8[0] = AirWalk_FallingHigher;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UDS_AbilitySystemComponent *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_AbilitySystemComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18[0] = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UDS_AbilitySystemComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
  bVar2 = UDS_AbilitySystemComponent::HasStateTag
                    ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)local_res10,
                     local_res8);
  if (!bVar2) {
    pUVar1 = (this->AbilitySystemComponent).field0_0x0.DebugPtr;
    local_res8[0] = AirWalk_FallingHigher;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar1 != (UDS_AbilitySystemComponent *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 != (UDS_AbilitySystemComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18[0] = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_AbilitySystemComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
    UDS_AbilitySystemComponent::AddStateTag
              ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)local_res10,local_res8);
  }
  return;
}

// SetFallingHigherTimer @ 14bc5e270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADS_MainCharacter::SetFallingHigherTimer(ADS_MainCharacter *this)

{
  FTimerManager *this_00;
  float fVar1;
  code *local_28;
  undefined8 uStack_20;
  
  fVar1 = DS_CommonDataHelper::FallHigherTime();
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
  local_28 = SetFallingHigher;
  FTimerManager::SetTimer<ADS_MainCharacter>
            (this_00,&this->FallingHigherTimer,this,(pmf_7487d8cd *)&local_28,fVar1,false,
             __real_bf800000);
  return;
}

// SetParentEntity @ 14bc63000

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
ADS_MainCharacter::SetParentEntity
          (ADS_MainCharacter *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  undefined8 local_18 [2];
  
  local_res10 = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res10);
    pUVar3 = FWeakObjectPtr::Get(&local_res10);
    FTickFunction::AddPrerequisite
              ((FTickFunction *)&this[-1].field_0x460,pUVar3,(FTickFunction *)(pUVar2 + 1));
    local_res20 = (FWeakObjectPtr)FWeakObjectPtr::Get(&local_res10);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (FWeakObjectPtr)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (FWeakObjectPtr)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
    FDS_EntityBase::SetParentEntity
              ((FDS_EntityBase *)this,(TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res18);
    return;
  }
  (**(code **)(*(longlong *)this + 0x1d0))(this);
  bVar1 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_res18,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res18);
    pUVar3 = FWeakObjectPtr::Get(&local_res18);
    FTickFunction::RemovePrerequisite
              ((FTickFunction *)&this[-1].field_0x460,pUVar3,(FTickFunction *)(pUVar2 + 1));
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_18[0] = 0;
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_18);
  FDS_EntityBase::SetParentEntity
            ((FDS_EntityBase *)this,(TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res20);
  return;
}

// SetupPlayerInputComponent @ 14bc65840

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
ADS_MainCharacter::SetupPlayerInputComponent(ADS_MainCharacter *this,UInputComponent *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res18 [2];
  
  ACharacter::SetupPlayerInputComponent((ACharacter *)this,param_1);
  ADS_PlayerController::GetPlayerController();
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res18);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[0x30].field_0x10,this);
    pUVar2 = FWeakObjectPtr::Get(local_res18);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<ADS_MainCharacter>
              (&pUVar2[0x30].field_0x10,(ADS_MainCharacter *)(local_res18 + 1),(pmf_d9980f63 *)this)
    ;
  }
  return;
}

// Tick @ 14bc66950

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_MainCharacter::Tick(ADS_MainCharacter *this,float param_1)

{
  UDS_MovementCore *pUVar1;
  UDS_SyncSendComponent *this_00;
  UDS_SyncRecvComponent *pUVar2;
  float local_res10 [6];
  
  local_res10[0] = param_1;
  AActor::Tick((AActor *)this,param_1);
  pUVar1 = (this->MovementCore).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_MovementCore *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x2c0))(pUVar1,local_res10);
  }
  this_00 = (this->SyncSendComponent).field0_0x0.DebugPtr;
  if (this_00 != (UDS_SyncSendComponent *)0x0) {
    UDS_SyncSendComponent::Tick(this_00,local_res10[0]);
  }
  pUVar2 = (this->SyncRecvComponent).field0_0x0.DebugPtr;
  if (pUVar2 != (UDS_SyncRecvComponent *)0x0) {
    (**(code **)(pUVar2->_padding_ + 0x2c8))(pUVar2,local_res10[0]);
  }
  return;
}

// TryEscapeFromStuck @ 14bc687e0

void __thiscall ADS_MainCharacter::TryEscapeFromStuck(ADS_MainCharacter *this)

{
  UDS_MovementCore *pUVar1;
  bool bVar2;
  TVector<double> *pTVar3;
  TVector<double> local_78;
  TVector<double>_u_0 local_58;
  TVector<double> local_38;
  TVector<double> local_20;
  
  bVar2 = UDS_GameInstance::GetIsCCSAIMode();
  if ((!bVar2) && (bVar2 = UDS_GameInstance::GetIsDungeonPlayBuild(), !bVar2)) {
    return;
  }
  pUVar1 = (this->MovementCore).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_MovementCore *)0x0) {
    pTVar3 = UDS_MovementCore::GetActorHeadLocation(pUVar1,&local_20);
    local_58._s_0.X = (pTVar3->field0_0x0)._s_0.X;
    local_58._s_0.Y = (pTVar3->field0_0x0)._s_0.Y;
    local_58._s_0.Z = (pTVar3->field0_0x0)._s_0.Z;
    DS_Util::GetNPCFloorLocationByLocation
              (&local_38,(TVector<double> *)&local_58._s_0,__real_43160000,false);
    UDS_MovementCore::GetActorFootLocation((this->MovementCore).field0_0x0.DebugPtr,&local_78);
    if (local_78.field0_0x0._s_0.Z <
        local_38.field0_0x0._s_0.Z - (double)*(float *)&this->field_0x6d0) {
      pUVar1 = (this->MovementCore).field0_0x0.DebugPtr;
      local_78.field0_0x0._s_0.Z = (double)*(float *)&this->field_0x6d0 + local_38.field0_0x0._s_0.Z
      ;
      (**(code **)(pUVar1->_padding_ + 0x358))(pUVar1,&local_78);
    }
  }
  return;
}

// TryJump @ 14bc68b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_MainCharacter::TryJump(ADS_MainCharacter *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_CharStateData *this_00;
  UObject *pUVar4;
  UClass *pUVar5;
  longlong *plVar6;
  undefined1 auStackY_218 [32];
  EDS_AbilityTagType local_1e8 [8];
  FWeakObjectPtr local_1e0;
  FWeakObjectPtr local_1d8;
  EDS_CharState local_1d0;
  UObject *local_1c8 [2];
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_218;
  UDS_CharStateData::GetData((ulong64)&local_1e0);
  bVar2 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_1e0,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"ADS_MainCharacter::TryJump",0x1a,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x503,L"charStateData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2380957129612723460>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\DS_MainCharacter.cpp"
                       ,0x504,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_1e0);
    local_1d0 = Mount;
    bVar2 = UDS_CharStateData::HasCharState(this_00,&local_1d0);
    if (!bVar2) {
      (**(code **)(*(longlong *)&this->field_0x678 + 0x150))(&this->field_0x678,&local_1d8);
      bVar2 = FWeakObjectPtr::IsValid(&local_1d8);
      if (bVar2) {
        pUVar4 = FWeakObjectPtr::Get(&local_1d8);
        FObjectInitializer::AssertIfInConstructor
                  (pUVar4,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar5 = Z_Construct_UClass_UDS_AirWalkAbilityContext_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_1b8,pUVar5);
        local_1b8._8_8_ = pUVar4;
        pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
        if (local_1b8._64_8_ != 0) {
          plVar6 = (longlong *)(local_1b8 + 0x50);
          if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
            plVar6 = (longlong *)local_1b8._104_8_;
          }
          (**(code **)(*plVar6 + 0x10))();
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        *(undefined1 *)(pUVar4 + 1) = 0x2a;
        local_1c8[0] = pUVar4;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        local_1e8[0] = AirWalk_Process;
        FDS_EntityBase::TryActivateAbility
                  ((FDS_EntityBase *)&this->field_0x678,local_1e8,
                   (TObjectPtr<UWN_AbilityContext>)local_1c8);
      }
    }
  }
  return;
}

// UpdateCoiMesh @ 14bc6b590

void __thiscall ADS_MainCharacter::UpdateCoiMesh(ADS_MainCharacter *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  ADS_MainCharacter *local_res8;
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  bool local_78;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  undefined1 local_48 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_40;
  FDelegateAllocation FStack_38;
  EWN_MCS_MeshUpdatePolicy local_28;
  
  local_48._0_4_ = 0xffffffff;
  local_88 = OnCOIUpdateMeshComplete;
  local_40.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_38.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_38.DelegateSize = 0;
  local_28 = Async_High;
  uStack_80 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_40,(FWriteAccessScope *)&local_68);
  local_50 = &FStack_38;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,&FStack_38);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXIPEAVUWN_MCS_COICore__W4EWN_MCS_MeshUpdateResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_MainCharacter____A6AXIPEAVUWN_MCS_COICore__W4EWN_MCS_MeshUpdateResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ADS_MainCharacter *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar1[3] = 0;
    local_res8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ADS_MainCharacter *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res8);
    puVar1[4] = local_88;
    puVar1[5] = CONCAT44(uStack_7c,uStack_80);
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  UWN_MCS_COICore::UpdateMeshAsync
            ((UWN_MCS_COICore *)(this->CustomizableSkmComponent).field0_0x0.DebugPtr,
             (FWN_MCS_MeshUpdateParams *)local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_40,(FWriteAccessScope *)&local_88);
  if ((FStack_38.DelegateSize != 0) &&
     (FStack_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_38.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_38,0,0,0x10);
    FStack_38.DelegateSize = 0;
  }
  if (local_78 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7c,uStack_80),
               (FDestructionSentinel *)&local_88);
  }
  if (FStack_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_38.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_40.AccessDetector);
  return;
}

