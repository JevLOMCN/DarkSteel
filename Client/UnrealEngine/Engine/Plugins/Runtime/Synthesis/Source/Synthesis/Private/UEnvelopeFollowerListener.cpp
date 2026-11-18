// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 4

// StaticClass @ 14f0a5e30

UClass * __cdecl UEnvelopeFollowerListener::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvelopeFollowerListener.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"EnvelopeFollowerListener",
               &Z_Registration_Info_UClass_UEnvelopeFollowerListener.InnerSingleton,
               StaticRegisterNativesUEnvelopeFollowerListener,0xe8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvelopeFollowerListener>,
               InternalVTableHelperCtorCaller<UEnvelopeFollowerListener>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvelopeFollowerListener.InnerSingleton;
}

// UEnvelopeFollowerListener @ 14f0b97f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UEnvelopeFollowerListener * __thiscall
UEnvelopeFollowerListener::UEnvelopeFollowerListener
          (UEnvelopeFollowerListener *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&this->OnEnvelopeFollowerUpdate = 0;
  *(undefined8 *)&(this->OnEnvelopeFollowerUpdate).field_0x8 = 0;
  *(undefined8 *)&(this->OnEnvelopeFollowerUpdate).field_0x10 = 0;
  return this;
}

// GetPrivateStaticClass @ 14f0dbde0

UClass * __cdecl UEnvelopeFollowerListener::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvelopeFollowerListener.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"EnvelopeFollowerListener",
               &Z_Registration_Info_UClass_UEnvelopeFollowerListener.InnerSingleton,
               StaticRegisterNativesUEnvelopeFollowerListener,0xe8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvelopeFollowerListener>,
               InternalVTableHelperCtorCaller<UEnvelopeFollowerListener>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvelopeFollowerListener.InnerSingleton;
}

// StaticRegisterNativesUEnvelopeFollowerListener @ 14f103510

void __cdecl UEnvelopeFollowerListener::StaticRegisterNativesUEnvelopeFollowerListener(void)

{
  return;
}

