// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 147285e50

UClass * __cdecl ULightmassPortalComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULightmassPortalComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightmassPortalComponent",
               &Z_Registration_Info_UClass_ULightmassPortalComponent.InnerSingleton,
               StaticRegisterNativesULightmassPortalComponent,0x260,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULightmassPortalComponent>,
               InternalVTableHelperCtorCaller<ULightmassPortalComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULightmassPortalComponent.InnerSingleton;
}

// ULightmassPortalComponent @ 14728bab0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULightmassPortalComponent * __thiscall
ULightmassPortalComponent::ULightmassPortalComponent
          (ULightmassPortalComponent *this,FVTableHelper *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->PreviewBox).field0_0x0.DebugPtr = (UBoxComponent *)0x0;
  return this;
}

// ~ULightmassPortalComponent @ 14728d360

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULightmassPortalComponent::~ULightmassPortalComponent(ULightmassPortalComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14728fbc0

UClass * __cdecl ULightmassPortalComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULightmassPortalComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightmassPortalComponent",
               &Z_Registration_Info_UClass_ULightmassPortalComponent.InnerSingleton,
               StaticRegisterNativesULightmassPortalComponent,0x260,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULightmassPortalComponent>,
               InternalVTableHelperCtorCaller<ULightmassPortalComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULightmassPortalComponent.InnerSingleton;
}

// StaticRegisterNativesULightmassPortalComponent @ 147291330

void __cdecl ULightmassPortalComponent::StaticRegisterNativesULightmassPortalComponent(void)

{
  return;
}

// ULightmassPortalComponent @ 1478a9c30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULightmassPortalComponent * __thiscall
ULightmassPortalComponent::ULightmassPortalComponent
          (ULightmassPortalComponent *this,FObjectInitializer *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->PreviewBox).field0_0x0.DebugPtr = (UBoxComponent *)0x0;
  this->field_0x1ab = 0;
  return this;
}

// CreateRenderState_Concurrent @ 1478c1af0

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
ULightmassPortalComponent::CreateRenderState_Concurrent
          (ULightmassPortalComponent *this,FRegisterComponentContext *param_1)

{
  UBoxComponent *pUVar1;
  
  UActorComponent::CreateRenderState_Concurrent((UActorComponent *)this,param_1);
  pUVar1 = (this->PreviewBox).field0_0x0.DebugPtr;
  if (pUVar1 != (UBoxComponent *)0x0) {
    (pUVar1->BoxExtent).field0_0x0._s_0.X = 1.0;
    (pUVar1->BoxExtent).field0_0x0._s_0.Y = 1.0;
    (pUVar1->BoxExtent).field0_0x0._s_0.Z = 1.0;
  }
  return;
}

// SendRenderTransform_Concurrent @ 1478ed970

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
ULightmassPortalComponent::SendRenderTransform_Concurrent(ULightmassPortalComponent *this)

{
  UBoxComponent *pUVar1;
  
  pUVar1 = (this->PreviewBox).field0_0x0.DebugPtr;
  if (pUVar1 != (UBoxComponent *)0x0) {
    (pUVar1->BoxExtent).field0_0x0._s_0.X = 1.0;
    (pUVar1->BoxExtent).field0_0x0._s_0.Y = 1.0;
    (pUVar1->BoxExtent).field0_0x0._s_0.Z = 1.0;
  }
  UActorComponent::SendRenderTransform_Concurrent((UActorComponent *)this);
  return;
}

// UpdatePreviewShape @ 1478fe1b0

void __thiscall ULightmassPortalComponent::UpdatePreviewShape(ULightmassPortalComponent *this)

{
  UBoxComponent *pUVar1;
  
  pUVar1 = (this->PreviewBox).field0_0x0.DebugPtr;
  if (pUVar1 != (UBoxComponent *)0x0) {
    (pUVar1->BoxExtent).field0_0x0._s_0.X = 1.0;
    (pUVar1->BoxExtent).field0_0x0._s_0.Y = 1.0;
    (pUVar1->BoxExtent).field0_0x0._s_0.Z = 1.0;
  }
  return;
}

