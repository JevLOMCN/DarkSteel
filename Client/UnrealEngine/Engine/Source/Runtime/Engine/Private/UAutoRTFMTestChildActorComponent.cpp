// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472571e0

UClass * __cdecl UAutoRTFMTestChildActorComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutoRTFMTestChildActorComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UChildActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AutoRTFMTestChildActorComponent",
               &Z_Registration_Info_UClass_UAutoRTFMTestChildActorComponent.InnerSingleton,
               StaticRegisterNativesUAutoRTFMTestChildActorComponent,0x2b0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UAutoRTFMTestChildActorComponent>,
               InternalVTableHelperCtorCaller<UAutoRTFMTestChildActorComponent>,local_res8,
               UChildActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutoRTFMTestChildActorComponent.InnerSingleton;
}

// UAutoRTFMTestChildActorComponent @ 14725d0f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAutoRTFMTestChildActorComponent * __thiscall
UAutoRTFMTestChildActorComponent::UAutoRTFMTestChildActorComponent
          (UAutoRTFMTestChildActorComponent *this,FVTableHelper *param_1)

{
  UChildActorComponent::UChildActorComponent((UChildActorComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// UAutoRTFMTestChildActorComponent @ 14725d130

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAutoRTFMTestChildActorComponent * __thiscall
UAutoRTFMTestChildActorComponent::UAutoRTFMTestChildActorComponent
          (UAutoRTFMTestChildActorComponent *this,FObjectInitializer *param_1)

{
  UChildActorComponent::UChildActorComponent((UChildActorComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// ~UAutoRTFMTestChildActorComponent @ 14725ddc0

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
UAutoRTFMTestChildActorComponent::~UAutoRTFMTestChildActorComponent
          (UAutoRTFMTestChildActorComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  UChildActorComponent::~UChildActorComponent((UChildActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 147260610

UClass * __cdecl UAutoRTFMTestChildActorComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutoRTFMTestChildActorComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UChildActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AutoRTFMTestChildActorComponent",
               &Z_Registration_Info_UClass_UAutoRTFMTestChildActorComponent.InnerSingleton,
               StaticRegisterNativesUAutoRTFMTestChildActorComponent,0x2b0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UAutoRTFMTestChildActorComponent>,
               InternalVTableHelperCtorCaller<UAutoRTFMTestChildActorComponent>,local_res8,
               UChildActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutoRTFMTestChildActorComponent.InnerSingleton;
}

// StaticRegisterNativesUAutoRTFMTestChildActorComponent @ 147260f20

void __cdecl
UAutoRTFMTestChildActorComponent::StaticRegisterNativesUAutoRTFMTestChildActorComponent(void)

{
  return;
}

