// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b460f10

UClass * __cdecl UDS_CommonGameViewportClient::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonGameViewportClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonGameViewportClient",
               &Z_Registration_Info_UClass_UDS_CommonGameViewportClient.InnerSingleton,
               StaticRegisterNativesUDS_CommonGameViewportClient,0x4e0,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_CommonGameViewportClient>,
               InternalVTableHelperCtorCaller<UDS_CommonGameViewportClient>,local_res8,
               UCommonGameViewportClient::StaticClass,UEngine::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonGameViewportClient.InnerSingleton;
}

// UDS_CommonGameViewportClient @ 14b465740

UDS_CommonGameViewportClient * __thiscall
UDS_CommonGameViewportClient::UDS_CommonGameViewportClient
          (UDS_CommonGameViewportClient *this,FVTableHelper *param_1)

{
  UCommonGameViewportClient::UCommonGameViewportClient((UCommonGameViewportClient *)this,param_1);
  this->OverrideMouseCursor = None;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCommonViewportClient__;
  this->_padding_ = (longlong)&___7UDS_CommonGameViewportClient__6B_;
  return this;
}

// UDS_CommonGameViewportClient @ 14b465790

UDS_CommonGameViewportClient * __thiscall
UDS_CommonGameViewportClient::UDS_CommonGameViewportClient
          (UDS_CommonGameViewportClient *this,FObjectInitializer *param_1)

{
  UCommonGameViewportClient::UCommonGameViewportClient((UCommonGameViewportClient *)this,param_1);
  this->OverrideMouseCursor = None;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCommonViewportClient__;
  this->_padding_ = (longlong)&___7UDS_CommonGameViewportClient__6B_;
  return this;
}

// ~UDS_CommonGameViewportClient @ 14b4664e0

void __thiscall
UDS_CommonGameViewportClient::~UDS_CommonGameViewportClient(UDS_CommonGameViewportClient *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCommonViewportClient__;
  this->_padding_ = (longlong)&___7UDS_CommonGameViewportClient__6B_;
  UCommonGameViewportClient::~UCommonGameViewportClient((UCommonGameViewportClient *)this);
  return;
}

// GetPrivateStaticClass @ 14b467f60

UClass * __cdecl UDS_CommonGameViewportClient::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonGameViewportClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonGameViewportClient",
               &Z_Registration_Info_UClass_UDS_CommonGameViewportClient.InnerSingleton,
               StaticRegisterNativesUDS_CommonGameViewportClient,0x4e0,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_CommonGameViewportClient>,
               InternalVTableHelperCtorCaller<UDS_CommonGameViewportClient>,local_res8,
               UCommonGameViewportClient::StaticClass,UEngine::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonGameViewportClient.InnerSingleton;
}

// StaticRegisterNativesUDS_CommonGameViewportClient @ 14b468c40

void __cdecl UDS_CommonGameViewportClient::StaticRegisterNativesUDS_CommonGameViewportClient(void)

{
  return;
}

// GetCursor @ 14bc9f470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

Type __thiscall
UDS_CommonGameViewportClient::GetCursor
          (UDS_CommonGameViewportClient *this,FViewport *param_1,int param_2,int param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  Type TVar2;
  FSlateApplication *pFVar3;
  APlayerController *pAVar4;
  
  TVar2 = (Type)this->_padding_;
  if (TVar2 != None) {
    return TVar2;
  }
  pFVar3 = FSlateApplication::Get();
  cVar1 = (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(param_1->_padding_ + 0x98))(param_1);
    if ((cVar1 == '\0') &&
       (cVar1 = (**(code **)(param_1->_padding_ + 0xa0))(param_1), cVar1 == '\0')) {
      return Default;
    }
    if (((longlong *)this->_padding_ != (longlong *)0x0) &&
       (cVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x3a0))(), cVar1 != '\0')) {
      return Default;
    }
    if (((UGameInstance *)this->_padding_ != (UGameInstance *)0x0) &&
       (pAVar4 = UGameInstance::GetFirstLocalPlayerController
                           ((UGameInstance *)this->_padding_,(UWorld *)0x0),
       pAVar4 != (APlayerController *)0x0)) {
      pAVar4 = UGameInstance::GetFirstLocalPlayerController
                         ((UGameInstance *)this->_padding_,(UWorld *)0x0);
      UNRECOVERED_JUMPTABLE = *(code **)(pAVar4->_padding_ + 0xf10);
                    /* WARNING: Could not recover jumptable at 0x000147c55f16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      TVar2 = (*UNRECOVERED_JUMPTABLE)(pAVar4,UNRECOVERED_JUMPTABLE);
      return TVar2;
    }
  }
  return Default;
}

// LostFocus @ 14bcaa650

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
UDS_CommonGameViewportClient::LostFocus(UDS_CommonGameViewportClient *this,FViewport *param_1)

{
  int iVar1;
  UWorld *this_00;
  ADS_PlayerController *this_01;
  UClass *pUVar2;
  
  UGameViewportClient::LostFocus((UGameViewportClient *)this,param_1);
  this_00 = UDS_GameInstance::GetGameInstanceWorld();
  if ((this_00 != (UWorld *)0x0) &&
     (this_01 = (ADS_PlayerController *)UWorld::GetFirstPlayerController(this_00),
     this_01 != (ADS_PlayerController *)0x0)) {
    pUVar2 = Z_Construct_UClass_ADS_PlayerController_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      ADS_PlayerController::OnViewportLostFocus(this_01,param_1);
    }
  }
  return;
}

// ReceivedFocus @ 14bcc1c80

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
UDS_CommonGameViewportClient::ReceivedFocus(UDS_CommonGameViewportClient *this,FViewport *param_1)

{
  int iVar1;
  UWorld *this_00;
  ADS_PlayerController *this_01;
  UClass *pUVar2;
  
  UGameViewportClient::ReceivedFocus((UGameViewportClient *)this,param_1);
  this_00 = UDS_GameInstance::GetGameInstanceWorld();
  if ((this_00 != (UWorld *)0x0) &&
     (this_01 = (ADS_PlayerController *)UWorld::GetFirstPlayerController(this_00),
     this_01 != (ADS_PlayerController *)0x0)) {
    pUVar2 = Z_Construct_UClass_ADS_PlayerController_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      ADS_PlayerController::OnViewportReceivedFocus(this_01,param_1);
    }
  }
  return;
}

// SetOverrideMouseCursor @ 14bcc7f10

void __thiscall
UDS_CommonGameViewportClient::SetOverrideMouseCursor
          (UDS_CommonGameViewportClient *this,Type param_1)

{
  this->OverrideMouseCursor = param_1;
  return;
}

