// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 6

// StaticClass @ 146347380

UClass * __cdecl UGeometryCollectionDebugDrawComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCollectionDebugDrawComponent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCollectionEngine",L"GeometryCollectionDebugDrawComponent",
               &Z_Registration_Info_UClass_UGeometryCollectionDebugDrawComponent.InnerSingleton,
               StaticRegisterNativesUGeometryCollectionDebugDrawComponent,0xd8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryCollectionDebugDrawComponent>,
               InternalVTableHelperCtorCaller<UGeometryCollectionDebugDrawComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCollectionDebugDrawComponent.InnerSingleton;
}

// UGeometryCollectionDebugDrawComponent @ 14635e4e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UGeometryCollectionDebugDrawComponent * __thiscall
UGeometryCollectionDebugDrawComponent::UGeometryCollectionDebugDrawComponent
          (UGeometryCollectionDebugDrawComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->GeometryCollectionDebugDrawActor_DEPRECATED).field0_0x0.DebugPtr =
       (AGeometryCollectionDebugDrawActor *)0x0;
  (this->GeometryCollectionRenderLevelSetActor).field0_0x0.DebugPtr =
       (AGeometryCollectionRenderLevelSetActor *)0x0;
  return this;
}

// UGeometryCollectionDebugDrawComponent @ 14635e530

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UGeometryCollectionDebugDrawComponent * __thiscall
UGeometryCollectionDebugDrawComponent::UGeometryCollectionDebugDrawComponent
          (UGeometryCollectionDebugDrawComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xbf;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0x7f;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfd;
  (this->GeometryCollectionDebugDrawActor_DEPRECATED).field0_0x0.DebugPtr =
       (AGeometryCollectionDebugDrawActor *)0x0;
  (this->GeometryCollectionRenderLevelSetActor).field0_0x0.DebugPtr =
       (AGeometryCollectionRenderLevelSetActor *)0x0;
  this->GeometryCollectionComponent = (UGeometryCollectionComponent *)0x0;
  return this;
}

// ~UGeometryCollectionDebugDrawComponent @ 14635f330

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UGeometryCollectionDebugDrawComponent::~UGeometryCollectionDebugDrawComponent
          (UGeometryCollectionDebugDrawComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 146379d30

UClass * __cdecl UGeometryCollectionDebugDrawComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCollectionDebugDrawComponent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCollectionEngine",L"GeometryCollectionDebugDrawComponent",
               &Z_Registration_Info_UClass_UGeometryCollectionDebugDrawComponent.InnerSingleton,
               StaticRegisterNativesUGeometryCollectionDebugDrawComponent,0xd8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryCollectionDebugDrawComponent>,
               InternalVTableHelperCtorCaller<UGeometryCollectionDebugDrawComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCollectionDebugDrawComponent.InnerSingleton;
}

// StaticRegisterNativesUGeometryCollectionDebugDrawComponent @ 14638f5b0

void __cdecl
UGeometryCollectionDebugDrawComponent::StaticRegisterNativesUGeometryCollectionDebugDrawComponent
          (void)

{
  return;
}

