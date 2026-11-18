// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// StaticClass @ 1483360e0

UClass * __cdecl ANoPawnPlayerController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_ANoPawnPlayerController.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NoPawnPlayerController",
               &Z_Registration_Info_UClass_ANoPawnPlayerController.InnerSingleton,
               StaticRegisterNativesANoPawnPlayerController,0x790,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<ANoPawnPlayerController>,
               InternalVTableHelperCtorCaller<ANoPawnPlayerController>,aFStackX_8,
               APlayerController::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANoPawnPlayerController.InnerSingleton;
}

// ANoPawnPlayerController @ 148348bf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ANoPawnPlayerController * __thiscall
ANoPawnPlayerController::ANoPawnPlayerController
          (ANoPawnPlayerController *this,FVTableHelper *param_1)

{
  APlayerController::APlayerController((APlayerController *)this,param_1);
  this->bEnableReplicationToConnection = true;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  this->_padding_ = (longlong)&___7ANoPawnPlayerController__6B_;
  return this;
}

// ANoPawnPlayerController @ 148348c40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ANoPawnPlayerController * __thiscall
ANoPawnPlayerController::ANoPawnPlayerController
          (ANoPawnPlayerController *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  float fVar2;
  
  APlayerController::APlayerController((APlayerController *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 8;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->bEnableReplicationToConnection = true;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  this->_padding_ = (longlong)&___7ANoPawnPlayerController__6B_;
  AActor::SetRole((AActor *)this,ROLE_Authority);
  fVar2 = __real_3dcccccd;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfd;
  AActor::SetNetUpdateFrequency((AActor *)this,fVar2);
  return this;
}

// ~ANoPawnPlayerController @ 14834cf00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ANoPawnPlayerController::~ANoPawnPlayerController(ANoPawnPlayerController *this)

{
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  this->_padding_ = (longlong)&___7ANoPawnPlayerController__6B_;
  APlayerController::~APlayerController((APlayerController *)this);
  return;
}

// GetNetConnection @ 148384590

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNetConnection * __thiscall ANoPawnPlayerController::GetNetConnection(ANoPawnPlayerController *this)

{
  return (UNetConnection *)this->_padding_;
}

// GetPrivateStaticClass @ 148386a50

UClass * __cdecl ANoPawnPlayerController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANoPawnPlayerController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NoPawnPlayerController",
               &Z_Registration_Info_UClass_ANoPawnPlayerController.InnerSingleton,
               StaticRegisterNativesANoPawnPlayerController,0x790,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<ANoPawnPlayerController>,
               InternalVTableHelperCtorCaller<ANoPawnPlayerController>,local_res8,
               APlayerController::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANoPawnPlayerController.InnerSingleton;
}

// GetViewTarget @ 14838b230

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall ANoPawnPlayerController::GetViewTarget(ANoPawnPlayerController *this)

{
  return (AActor *)this;
}

// PostInitializeComponents @ 14839a2a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ANoPawnPlayerController::PostInitializeComponents(ANoPawnPlayerController *this)

{
  USceneComponent *this_00;
  code *pcVar1;
  bool bVar2;
  UWorld *this_01;
  double *pdVar3;
  TRotator<double> TStack_48;
  undefined1 auStack_28 [32];
  
  AActor::PostInitializeComponents((AActor *)this);
  if ((this == (ANoPawnPlayerController *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Test",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                         ,0x760,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((uint)this->_padding_ >> 0x1e & 1) == 0) {
    this_01 = AActor::GetWorld((AActor *)this);
    UWorld::AddController(this_01,(AController *)this);
    this_00 = (USceneComponent *)this->_padding_;
    if ((this_00 != (USceneComponent *)0x0) && (this_00->bAbsoluteRotation != '\0')) {
      pdVar3 = (double *)(**(code **)(this->_padding_ + 0x7a8))(this,auStack_28);
      TStack_48.Pitch = *pdVar3;
      TStack_48.Yaw = pdVar3[1];
      TStack_48.Roll = pdVar3[2];
      USceneComponent::SetWorldRotation(this_00,&TStack_48,false,(FHitResult *)0x0,None);
    }
  }
  return;
}

// ServerEnableReplicationToConnection @ 1483a4660

void __thiscall
ANoPawnPlayerController::ServerEnableReplicationToConnection
          (ANoPawnPlayerController *this,bool param_1)

{
  UFunction *pUVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_ANoPawnPlayerController_ServerEnableReplicationToConnection);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// ServerEnableReplicationToConnection_Implementation @ 1483a46a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ANoPawnPlayerController::ServerEnableReplicationToConnection_Implementation
          (ANoPawnPlayerController *this,bool param_1)

{
  FName local_res8;
  FString local_18;
  
  if (4 < (byte)LogNet._0_1_) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    this->bEnableReplicationToConnection = param_1;
    return;
  }
  this->bEnableReplicationToConnection = param_1;
  return;
}

// ServerSetViewTargetPosition @ 1483a57b0

void __thiscall
ANoPawnPlayerController::ServerSetViewTargetPosition
          (ANoPawnPlayerController *this,TVector<double> *param_1)

{
  UFunction *pUVar1;
  double local_28;
  double dStack_20;
  double local_18;
  
  local_28 = (param_1->field0_0x0)._s_0.X;
  dStack_20 = (param_1->field0_0x0)._s_0.Y;
  local_18 = (param_1->field0_0x0)._s_0.Z;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_ANoPawnPlayerController_ServerSetViewTargetPosition);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_28);
  return;
}

// ServerSetViewTargetPosition_Implementation @ 1483a5800

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
ANoPawnPlayerController::ServerSetViewTargetPosition_Implementation
          (ANoPawnPlayerController *this,TVector<double> *param_1)

{
  AActor::SetActorLocation((AActor *)this,param_1,false,(FHitResult *)0x0,None);
  return;
}

// StaticRegisterNativesANoPawnPlayerController @ 1483af5a0

void __cdecl ANoPawnPlayerController::StaticRegisterNativesANoPawnPlayerController(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_ANoPawnPlayerController_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execServerEnableReplicationToConnection @ 1483c4b00

void __cdecl
ANoPawnPlayerController::execServerEnableReplicationToConnection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xf98))(param_1,local_res8[0] != 0);
  return;
}

// execServerSetViewTargetPosition @ 1483c5620

void __cdecl
ANoPawnPlayerController::execServerSetViewTargetPosition
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_18 = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 4000))(param_1,&local_28);
  return;
}

