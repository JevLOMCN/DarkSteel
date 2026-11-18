// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 148766e10

UClass * __cdecl UActorTextureStreamingBuildDataComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorTextureStreamingBuildDataComponent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorTextureStreamingBuildDataComponent",
               &Z_Registration_Info_UClass_UActorTextureStreamingBuildDataComponent.InnerSingleton,
               StaticRegisterNativesUActorTextureStreamingBuildDataComponent,0xc0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UActorTextureStreamingBuildDataComponent>,
               InternalVTableHelperCtorCaller<UActorTextureStreamingBuildDataComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorTextureStreamingBuildDataComponent.InnerSingleton;
}

// UActorTextureStreamingBuildDataComponent @ 14877d380

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UActorTextureStreamingBuildDataComponent * __thiscall
UActorTextureStreamingBuildDataComponent::UActorTextureStreamingBuildDataComponent
          (UActorTextureStreamingBuildDataComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// UActorTextureStreamingBuildDataComponent @ 14877d3c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UActorTextureStreamingBuildDataComponent * __thiscall
UActorTextureStreamingBuildDataComponent::UActorTextureStreamingBuildDataComponent
          (UActorTextureStreamingBuildDataComponent *this,FObjectInitializer *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// ~UActorTextureStreamingBuildDataComponent @ 148780730

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
UActorTextureStreamingBuildDataComponent::~UActorTextureStreamingBuildDataComponent
          (UActorTextureStreamingBuildDataComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 1487a2a60

UClass * __cdecl UActorTextureStreamingBuildDataComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorTextureStreamingBuildDataComponent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorTextureStreamingBuildDataComponent",
               &Z_Registration_Info_UClass_UActorTextureStreamingBuildDataComponent.InnerSingleton,
               StaticRegisterNativesUActorTextureStreamingBuildDataComponent,0xc0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UActorTextureStreamingBuildDataComponent>,
               InternalVTableHelperCtorCaller<UActorTextureStreamingBuildDataComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorTextureStreamingBuildDataComponent.InnerSingleton;
}

// IsEditorOnly @ 1487aee30

bool __thiscall
UActorTextureStreamingBuildDataComponent::IsEditorOnly
          (UActorTextureStreamingBuildDataComponent *this)

{
  return true;
}

// StaticRegisterNativesUActorTextureStreamingBuildDataComponent @ 1487c57d0

void __cdecl
UActorTextureStreamingBuildDataComponent::
StaticRegisterNativesUActorTextureStreamingBuildDataComponent(void)

{
  return;
}

