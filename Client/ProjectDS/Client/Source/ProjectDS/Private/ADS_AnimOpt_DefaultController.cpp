// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b421830

UClass * __cdecl ADS_AnimOpt_DefaultController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_AnimOpt_DefaultController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimOpt_DefaultController",
               &Z_Registration_Info_UClass_ADS_AnimOpt_DefaultController.InnerSingleton,
               StaticRegisterNativesADS_AnimOpt_DefaultController,0x788,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<ADS_AnimOpt_DefaultController>,
               InternalVTableHelperCtorCaller<ADS_AnimOpt_DefaultController>,local_res8,
               APlayerController::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_AnimOpt_DefaultController.InnerSingleton;
}

// ADS_AnimOpt_DefaultController @ 14b423740

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ADS_AnimOpt_DefaultController * __thiscall
ADS_AnimOpt_DefaultController::ADS_AnimOpt_DefaultController
          (ADS_AnimOpt_DefaultController *this,FVTableHelper *param_1)

{
  APlayerController::APlayerController((APlayerController *)this,param_1);
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavAgentInterface__;
  *(undefined ***)&this->field_0x370 = &___7ADS_AnimOpt_DefaultController__6B_;
  return this;
}

// ADS_AnimOpt_DefaultController @ 14b423790

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ADS_AnimOpt_DefaultController * __thiscall
ADS_AnimOpt_DefaultController::ADS_AnimOpt_DefaultController
          (ADS_AnimOpt_DefaultController *this,FObjectInitializer *param_1)

{
  APlayerController::APlayerController((APlayerController *)this,param_1);
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavAgentInterface__;
  *(undefined ***)&this->field_0x370 = &___7ADS_AnimOpt_DefaultController__6B_;
  return this;
}

// ~ADS_AnimOpt_DefaultController @ 14b423e50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADS_AnimOpt_DefaultController::~ADS_AnimOpt_DefaultController(ADS_AnimOpt_DefaultController *this)

{
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavAgentInterface__;
  *(undefined ***)&this->field_0x370 = &___7ADS_AnimOpt_DefaultController__6B_;
  APlayerController::~APlayerController((APlayerController *)this);
  return;
}

// GetPrivateStaticClass @ 14b4249f0

UClass * __cdecl ADS_AnimOpt_DefaultController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_AnimOpt_DefaultController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimOpt_DefaultController",
               &Z_Registration_Info_UClass_ADS_AnimOpt_DefaultController.InnerSingleton,
               StaticRegisterNativesADS_AnimOpt_DefaultController,0x788,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<ADS_AnimOpt_DefaultController>,
               InternalVTableHelperCtorCaller<ADS_AnimOpt_DefaultController>,local_res8,
               APlayerController::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_AnimOpt_DefaultController.InnerSingleton;
}

// StaticRegisterNativesADS_AnimOpt_DefaultController @ 14b425460

void __cdecl ADS_AnimOpt_DefaultController::StaticRegisterNativesADS_AnimOpt_DefaultController(void)

{
  return;
}

// BeginPlay @ 14bbabc00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADS_AnimOpt_DefaultController::BeginPlay(ADS_AnimOpt_DefaultController *this)

{
  FInputModeGameAndUI local_28;
  
  APlayerController::BeginPlay((APlayerController *)this);
  FInputModeGameAndUI::FInputModeGameAndUI(&local_28);
  local_28.MouseLockMode = DoNotLock;
  local_28.bHideCursorDuringCapture = false;
  (**(code **)(*(longlong *)this + 0xd68))(this,&local_28);
  *(uint *)&this->field_0x58c = *(uint *)&this->field_0x58c | 1;
  FInputModeGameAndUI::~FInputModeGameAndUI(&local_28);
  return;
}

// EndPlay @ 14bbb3790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADS_AnimOpt_DefaultController::EndPlay(ADS_AnimOpt_DefaultController *this,Type param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  longlong *plVar5;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  if (*(longlong *)&this->field_0x378 != 0) {
    pUVar4 = Z_Construct_UClass_ULocalPlayer_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->field_0x378,pUVar4);
    if ((bVar3) && (lVar1 = *(longlong *)&this->field_0x378, lVar1 != 0)) {
      if (*(longlong *)&this->field_0x660 != 0) {
        (**(code **)(*(longlong *)this + 0xd58))(this,0);
      }
      if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
        FSlateApplication::Get();
        if (FSlateApplicationBase::PlatformApplication.Object == (GenericApplication *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        plVar5 = (longlong *)
                 (**(code **)((FSlateApplicationBase::PlatformApplication.Object)->_padding_ + 0xe0)
                 )();
        if (plVar5 != (longlong *)0x0) {
          uStack_18 = 0;
          uStack_10 = 0;
          (**(code **)(*plVar5 + 0x10))(plVar5,*(undefined4 *)(lVar1 + 0xf0),&uStack_18);
        }
      }
    }
  }
  if (*(UCheatManager **)&this->field_0x440 != (UCheatManager *)0x0) {
    UCheatManager::ReceiveEndPlay(*(UCheatManager **)&this->field_0x440);
  }
  AActor::EndPlay((AActor *)this,param_1);
  return;
}

