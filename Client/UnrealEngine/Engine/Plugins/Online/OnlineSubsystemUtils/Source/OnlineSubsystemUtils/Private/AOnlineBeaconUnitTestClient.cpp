// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 7

// StaticClass @ 14eca8e40

UClass * __cdecl AOnlineBeaconUnitTestClient::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AOnlineBeaconUnitTestClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineBeaconUnitTestClient",
               &Z_Registration_Info_UClass_AOnlineBeaconUnitTestClient.InnerSingleton,
               StaticRegisterNativesAOnlineBeaconUnitTestClient,0x358,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AOnlineBeaconUnitTestClient>,
               InternalVTableHelperCtorCaller<AOnlineBeaconUnitTestClient>,local_res8,
               AOnlineBeaconClient::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AOnlineBeaconUnitTestClient.InnerSingleton;
}

// AOnlineBeaconUnitTestClient @ 14ecac510

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AOnlineBeaconUnitTestClient * __thiscall
AOnlineBeaconUnitTestClient::AOnlineBeaconUnitTestClient
          (AOnlineBeaconUnitTestClient *this,FVTableHelper *param_1)

{
  AOnlineBeaconClient::AOnlineBeaconClient((AOnlineBeaconClient *)this,param_1);
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__FNetworkNotify__;
  return this;
}

// AOnlineBeaconUnitTestClient @ 14ecac550

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AOnlineBeaconUnitTestClient * __thiscall
AOnlineBeaconUnitTestClient::AOnlineBeaconUnitTestClient
          (AOnlineBeaconUnitTestClient *this,FObjectInitializer *param_1)

{
  AOnlineBeaconClient::AOnlineBeaconClient((AOnlineBeaconClient *)this,param_1);
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__FNetworkNotify__;
  return this;
}

// ~AOnlineBeaconUnitTestClient @ 14ecad850

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AOnlineBeaconUnitTestClient::~AOnlineBeaconUnitTestClient(AOnlineBeaconUnitTestClient *this)

{
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__FNetworkNotify__;
  AOnlineBeaconClient::~AOnlineBeaconClient((AOnlineBeaconClient *)this);
  return;
}

// GetPrivateStaticClass @ 14ecbaef0

UClass * __cdecl AOnlineBeaconUnitTestClient::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AOnlineBeaconUnitTestClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineBeaconUnitTestClient",
               &Z_Registration_Info_UClass_AOnlineBeaconUnitTestClient.InnerSingleton,
               StaticRegisterNativesAOnlineBeaconUnitTestClient,0x358,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AOnlineBeaconUnitTestClient>,
               InternalVTableHelperCtorCaller<AOnlineBeaconUnitTestClient>,local_res8,
               AOnlineBeaconClient::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AOnlineBeaconUnitTestClient.InnerSingleton;
}

// IsEditorOnly @ 14ecbd630

bool __thiscall AOnlineBeaconUnitTestClient::IsEditorOnly(AOnlineBeaconUnitTestClient *this)

{
  return true;
}

// StaticRegisterNativesAOnlineBeaconUnitTestClient @ 14ecca350

void __cdecl AOnlineBeaconUnitTestClient::StaticRegisterNativesAOnlineBeaconUnitTestClient(void)

{
  return;
}

