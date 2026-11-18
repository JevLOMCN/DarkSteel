// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 6

// StaticClass @ 146f82bb0

UClass * __cdecl AGridPathAIController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGridPathAIController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"GridPathAIController",
               &Z_Registration_Info_UClass_AGridPathAIController.InnerSingleton,
               StaticRegisterNativesAGridPathAIController,0x400,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AGridPathAIController>,
               InternalVTableHelperCtorCaller<AGridPathAIController>,local_res8,
               AAIController::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGridPathAIController.InnerSingleton;
}

// AGridPathAIController @ 146f90470

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AGridPathAIController * __thiscall
AGridPathAIController::AGridPathAIController(AGridPathAIController *this,FVTableHelper *param_1)

{
  AAIController::AAIController((AAIController *)this,param_1);
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavAgentInterface__;
  *(undefined ***)&this->field_0x370 = &_vftable__for__IAIPerceptionListenerInterface__;
  *(undefined ***)&this->field_0x378 = &_vftable__for__IGameplayTaskOwnerInterface__;
  *(undefined ***)&this->field_0x380 = &_vftable__for__IGenericTeamAgentInterface__;
  *(undefined ***)&this->field_0x388 = &_vftable__for__IVisualLoggerDebugSnapshotInterface__;
  return this;
}

// AGridPathAIController @ 146f904e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AGridPathAIController * __thiscall
AGridPathAIController::AGridPathAIController
          (AGridPathAIController *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  FName local_res8;
  
  pFVar2 = ::FName::FName(&local_res8,L"PathFollowingComponent");
  FVar1 = *pFVar2;
  pUVar3 = UGridPathFollowingComponent::StaticClass();
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar1,pUVar3,(TArrayView<FName_const_,int> *)0x0);
  AAIController::AAIController((AAIController *)this,param_1);
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavAgentInterface__;
  *(undefined ***)&this->field_0x370 = &_vftable__for__IAIPerceptionListenerInterface__;
  *(undefined ***)&this->field_0x378 = &_vftable__for__IGameplayTaskOwnerInterface__;
  *(undefined ***)&this->field_0x380 = &_vftable__for__IGenericTeamAgentInterface__;
  *(undefined ***)&this->field_0x388 = &_vftable__for__IVisualLoggerDebugSnapshotInterface__;
  return this;
}

// ~AGridPathAIController @ 146f966c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AGridPathAIController::~AGridPathAIController(AGridPathAIController *this)

{
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavAgentInterface__;
  *(undefined ***)&this->field_0x370 = &_vftable__for__IAIPerceptionListenerInterface__;
  *(undefined ***)&this->field_0x378 = &_vftable__for__IGameplayTaskOwnerInterface__;
  *(undefined ***)&this->field_0x380 = &_vftable__for__IGenericTeamAgentInterface__;
  *(undefined ***)&this->field_0x388 = &_vftable__for__IVisualLoggerDebugSnapshotInterface__;
  AAIController::~AAIController((AAIController *)this);
  return;
}

// GetPrivateStaticClass @ 146fb33e0

UClass * __cdecl AGridPathAIController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGridPathAIController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"GridPathAIController",
               &Z_Registration_Info_UClass_AGridPathAIController.InnerSingleton,
               StaticRegisterNativesAGridPathAIController,0x400,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AGridPathAIController>,
               InternalVTableHelperCtorCaller<AGridPathAIController>,local_res8,
               AAIController::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGridPathAIController.InnerSingleton;
}

// StaticRegisterNativesAGridPathAIController @ 146fd3410

void __cdecl AGridPathAIController::StaticRegisterNativesAGridPathAIController(void)

{
  return;
}

