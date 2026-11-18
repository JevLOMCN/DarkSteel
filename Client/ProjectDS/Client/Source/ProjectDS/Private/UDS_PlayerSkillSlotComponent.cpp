// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b55f8a0

UClass * __cdecl UDS_PlayerSkillSlotComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PlayerSkillSlotComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerSkillSlotComponent",
               &Z_Registration_Info_UClass_UDS_PlayerSkillSlotComponent.InnerSingleton,
               StaticRegisterNativesUDS_PlayerSkillSlotComponent,0x750,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_PlayerSkillSlotComponent>,
               InternalVTableHelperCtorCaller<UDS_PlayerSkillSlotComponent>,local_res8,
               UWidgetComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PlayerSkillSlotComponent.InnerSingleton;
}

// UDS_PlayerSkillSlotComponent @ 14b564a80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_PlayerSkillSlotComponent * __thiscall
UDS_PlayerSkillSlotComponent::UDS_PlayerSkillSlotComponent
          (UDS_PlayerSkillSlotComponent *this,FVTableHelper *param_1)

{
  UWidgetComponent::UWidgetComponent((UWidgetComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  return this;
}

// UDS_PlayerSkillSlotComponent @ 14b564af0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_PlayerSkillSlotComponent * __thiscall
UDS_PlayerSkillSlotComponent::UDS_PlayerSkillSlotComponent
          (UDS_PlayerSkillSlotComponent *this,FObjectInitializer *param_1)

{
  UWidgetComponent::UWidgetComponent((UWidgetComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  return this;
}

// ~UDS_PlayerSkillSlotComponent @ 14b565400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_PlayerSkillSlotComponent::~UDS_PlayerSkillSlotComponent(UDS_PlayerSkillSlotComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  UWidgetComponent::~UWidgetComponent((UWidgetComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14b567da0

UClass * __cdecl UDS_PlayerSkillSlotComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PlayerSkillSlotComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerSkillSlotComponent",
               &Z_Registration_Info_UClass_UDS_PlayerSkillSlotComponent.InnerSingleton,
               StaticRegisterNativesUDS_PlayerSkillSlotComponent,0x750,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_PlayerSkillSlotComponent>,
               InternalVTableHelperCtorCaller<UDS_PlayerSkillSlotComponent>,local_res8,
               UWidgetComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PlayerSkillSlotComponent.InnerSingleton;
}

// StaticRegisterNativesUDS_PlayerSkillSlotComponent @ 14b568180

void __cdecl UDS_PlayerSkillSlotComponent::StaticRegisterNativesUDS_PlayerSkillSlotComponent(void)

{
  return;
}

