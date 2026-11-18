// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b4171e0

UClass * __cdecl ADS_AI_GYM_DefaultController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_AI_GYM_DefaultController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AI_GYM_DefaultController",
               &Z_Registration_Info_UClass_ADS_AI_GYM_DefaultController.InnerSingleton,
               StaticRegisterNativesADS_AI_GYM_DefaultController,0x788,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<ADS_AI_GYM_DefaultController>,
               InternalVTableHelperCtorCaller<ADS_AI_GYM_DefaultController>,local_res8,
               APlayerController::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_AI_GYM_DefaultController.InnerSingleton;
}

// ADS_AI_GYM_DefaultController @ 14b41a5f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ADS_AI_GYM_DefaultController * __thiscall
ADS_AI_GYM_DefaultController::ADS_AI_GYM_DefaultController
          (ADS_AI_GYM_DefaultController *this,FVTableHelper *param_1)

{
  APlayerController::APlayerController((APlayerController *)this,param_1);
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavAgentInterface__;
  *(undefined ***)&this->field_0x370 = &___7ADS_AI_GYM_DefaultController__6B_;
  return this;
}

// ADS_AI_GYM_DefaultController @ 14b41a640

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ADS_AI_GYM_DefaultController * __thiscall
ADS_AI_GYM_DefaultController::ADS_AI_GYM_DefaultController
          (ADS_AI_GYM_DefaultController *this,FObjectInitializer *param_1)

{
  APlayerController::APlayerController((APlayerController *)this,param_1);
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavAgentInterface__;
  *(undefined ***)&this->field_0x370 = &___7ADS_AI_GYM_DefaultController__6B_;
  return this;
}

// ~ADS_AI_GYM_DefaultController @ 14b41b840

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
ADS_AI_GYM_DefaultController::~ADS_AI_GYM_DefaultController(ADS_AI_GYM_DefaultController *this)

{
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavAgentInterface__;
  *(undefined ***)&this->field_0x370 = &___7ADS_AI_GYM_DefaultController__6B_;
  APlayerController::~APlayerController((APlayerController *)this);
  return;
}

// GetPrivateStaticClass @ 14b41cad0

UClass * __cdecl ADS_AI_GYM_DefaultController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_AI_GYM_DefaultController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AI_GYM_DefaultController",
               &Z_Registration_Info_UClass_ADS_AI_GYM_DefaultController.InnerSingleton,
               StaticRegisterNativesADS_AI_GYM_DefaultController,0x788,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<ADS_AI_GYM_DefaultController>,
               InternalVTableHelperCtorCaller<ADS_AI_GYM_DefaultController>,local_res8,
               APlayerController::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_AI_GYM_DefaultController.InnerSingleton;
}

// StaticRegisterNativesADS_AI_GYM_DefaultController @ 14b41e0c0

void __cdecl ADS_AI_GYM_DefaultController::StaticRegisterNativesADS_AI_GYM_DefaultController(void)

{
  return;
}

// BeginPlay @ 14b869910

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_AI_GYM_DefaultController::BeginPlay(ADS_AI_GYM_DefaultController *this)

{
  longlong lVar1;
  longlong lVar2;
  SViewport *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  UClass *pUVar8;
  TSharedPtr<SViewport,1> *pTVar9;
  FSlateApplication *this_00;
  TSharedRef<SWidget,1> TStack_28;
  TSharedPtr<SViewport,1> TStack_18;
  
  AActor::BeginPlay((AActor *)this);
  if (*(longlong *)&this->field_0x378 != 0) {
    pUVar8 = Z_Construct_UClass_ULocalPlayer_NoRegister();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&this->field_0x378,pUVar8);
    if (((bVar6) && (lVar1 = *(longlong *)&this->field_0x378, lVar1 != 0)) &&
       (lVar2 = *(longlong *)(lVar1 + 0x78), lVar2 != 0)) {
      cVar7 = (**(code **)(*(longlong *)(lVar2 + 0x30) + 0x1b0))(lVar2 + 0x30);
      if (cVar7 != '\0') {
        pTVar9 = UGameViewportClient::GetGameViewportWidget
                           (*(UGameViewportClient **)(lVar1 + 0x78),&TStack_18);
        if (pTVar9->Object == (SViewport *)0x0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x416,L"");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pSVar3 = pTVar9->Object;
        pTVar4 = (pTVar9->SharedReferenceCount).ReferenceController;
        (pTVar9->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pTVar9->Object = (SViewport *)0x0;
        if (pSVar3 == (SViewport *)0x0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x26c,L"");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        TStack_28.Object = (SWidget *)pSVar3;
        TStack_28.SharedReferenceCount.ReferenceController = pTVar4;
        FReply::LockMouseToWidget((FReply *)(lVar1 + 0x228),&TStack_28);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (TStack_18.SharedReferenceCount.ReferenceController);
      }
    }
  }
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    this_00 = FSlateApplication::Get();
    bVar6 = FSlateApplication::IsFakingTouchEvents(this_00);
    if (bVar6) {
      APlayerController::SetShowMouseCursor((APlayerController *)this,true);
      return;
    }
  }
  return;
}

// EndPlay @ 14b86f100

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
ADS_AI_GYM_DefaultController::EndPlay(ADS_AI_GYM_DefaultController *this,Type param_1)

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

