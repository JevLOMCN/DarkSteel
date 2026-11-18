// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 14

// StaticClass @ 14eca8880

UClass * __cdecl ATestBeaconClient::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ATestBeaconClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"TestBeaconClient",
               &Z_Registration_Info_UClass_ATestBeaconClient.InnerSingleton,
               StaticRegisterNativesATestBeaconClient,0x358,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ATestBeaconClient>,
               InternalVTableHelperCtorCaller<ATestBeaconClient>,local_res8,
               AOnlineBeaconClient::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ATestBeaconClient.InnerSingleton;
}

// ATestBeaconClient @ 14ecace70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ATestBeaconClient * __thiscall
ATestBeaconClient::ATestBeaconClient(ATestBeaconClient *this,FVTableHelper *param_1)

{
  AOnlineBeaconClient::AOnlineBeaconClient((AOnlineBeaconClient *)this,param_1);
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__FNetworkNotify__;
  return this;
}

// ATestBeaconClient @ 14ecaceb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ATestBeaconClient * __thiscall
ATestBeaconClient::ATestBeaconClient(ATestBeaconClient *this,FObjectInitializer *param_1)

{
  AOnlineBeaconClient::AOnlineBeaconClient((AOnlineBeaconClient *)this,param_1);
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__FNetworkNotify__;
  return this;
}

// ~ATestBeaconClient @ 14ecada70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ATestBeaconClient::~ATestBeaconClient(ATestBeaconClient *this)

{
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__FNetworkNotify__;
  AOnlineBeaconClient::~AOnlineBeaconClient((AOnlineBeaconClient *)this);
  return;
}

// ClientPing @ 14ecb17a0

void __thiscall ATestBeaconClient::ClientPing(ATestBeaconClient *this)

{
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ATestBeaconClient_ClientPing);
                    /* WARNING: Could not recover jumptable at 0x00014ecb17cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,0,*(code **)(*(longlong *)this + 0x260));
  return;
}

// ClientPing_Implementation @ 14ecb17e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ATestBeaconClient::ClientPing_Implementation(ATestBeaconClient *this)

{
  if (4 < (byte)LogBeacon._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
  }
                    /* WARNING: Could not recover jumptable at 0x00014ecb1810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x7c0))(this);
  return;
}

// GetPrivateStaticClass @ 14ecbb370

UClass * __cdecl ATestBeaconClient::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ATestBeaconClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"TestBeaconClient",
               &Z_Registration_Info_UClass_ATestBeaconClient.InnerSingleton,
               StaticRegisterNativesATestBeaconClient,0x358,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ATestBeaconClient>,
               InternalVTableHelperCtorCaller<ATestBeaconClient>,local_res8,
               AOnlineBeaconClient::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ATestBeaconClient.InnerSingleton;
}

// OnFailure @ 14ecbf530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ATestBeaconClient::OnFailure(ATestBeaconClient *this)

{
  if (5 < (byte)LogBeacon._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
  }
  AOnlineBeaconClient::OnFailure((AOnlineBeaconClient *)this);
  return;
}

// ServerPong @ 14ecc8ba0

void __thiscall ATestBeaconClient::ServerPong(ATestBeaconClient *this)

{
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ATestBeaconClient_ServerPong);
                    /* WARNING: Could not recover jumptable at 0x00014ecc8bcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,0,*(code **)(*(longlong *)this + 0x260));
  return;
}

// ServerPong_Implementation @ 14ecc8be0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ATestBeaconClient::ServerPong_Implementation(ATestBeaconClient *this)

{
  if (4 < (byte)LogBeacon._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
  }
                    /* WARNING: Could not recover jumptable at 0x00014ecc8c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x7b8))(this);
  return;
}

// ServerPong_Validate @ 14ecc8c20

bool __thiscall ATestBeaconClient::ServerPong_Validate(ATestBeaconClient *this)

{
  return true;
}

// StaticRegisterNativesATestBeaconClient @ 14ecca3e0

void __cdecl ATestBeaconClient::StaticRegisterNativesATestBeaconClient(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_ATestBeaconClient_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execClientPing @ 14ecd3620

void __cdecl ATestBeaconClient::execClientPing(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014ecd3638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x7b0))();
  return;
}

// execServerPong @ 14ecd3bf0

void __cdecl ATestBeaconClient::execServerPong(UObject *param_1,FFrame *param_2,void *param_3)

{
  char cVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar1 = (**(code **)(*(longlong *)param_1 + 0x7a0))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerPong_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014ecd3c37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x7a8))(param_1);
  return;
}

