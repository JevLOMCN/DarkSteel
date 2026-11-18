// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 6

// StaticClass @ 14cff52a0

UClass * __cdecl UDEPRECATED_LiveLinkDrivenComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_LiveLinkDrivenComponent.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkDrivenComponent",
               &Z_Registration_Info_UClass_UDEPRECATED_LiveLinkDrivenComponent.InnerSingleton,
               StaticRegisterNativesUDEPRECATED_LiveLinkDrivenComponent,0xd8,8,
               CLASS_Intrinsic|CLASS_Deprecated|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_LiveLinkDrivenComponent>,
               InternalVTableHelperCtorCaller<UDEPRECATED_LiveLinkDrivenComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_LiveLinkDrivenComponent.InnerSingleton;
}

// UDEPRECATED_LiveLinkDrivenComponent @ 14d012f10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDEPRECATED_LiveLinkDrivenComponent * __thiscall
UDEPRECATED_LiveLinkDrivenComponent::UDEPRECATED_LiveLinkDrivenComponent
          (UDEPRECATED_LiveLinkDrivenComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->SubjectName).Name = (FName)0x0;
  (this->ActorTransformBone).ComparisonIndex = 0;
  (this->ActorTransformBone).Number = 0;
  return this;
}

// UDEPRECATED_LiveLinkDrivenComponent @ 14d012f60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDEPRECATED_LiveLinkDrivenComponent * __thiscall
UDEPRECATED_LiveLinkDrivenComponent::UDEPRECATED_LiveLinkDrivenComponent
          (UDEPRECATED_LiveLinkDrivenComponent *this,FObjectInitializer *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->SubjectName).Name = (FName)0x0;
  (this->ActorTransformBone).ComparisonIndex = 0;
  (this->ActorTransformBone).Number = 0;
  return this;
}

// ~UDEPRECATED_LiveLinkDrivenComponent @ 14d016cf0

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
UDEPRECATED_LiveLinkDrivenComponent::~UDEPRECATED_LiveLinkDrivenComponent
          (UDEPRECATED_LiveLinkDrivenComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14d051b30

UClass * __cdecl UDEPRECATED_LiveLinkDrivenComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_LiveLinkDrivenComponent.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkDrivenComponent",
               &Z_Registration_Info_UClass_UDEPRECATED_LiveLinkDrivenComponent.InnerSingleton,
               StaticRegisterNativesUDEPRECATED_LiveLinkDrivenComponent,0xd8,8,
               CLASS_Intrinsic|CLASS_Deprecated|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_LiveLinkDrivenComponent>,
               InternalVTableHelperCtorCaller<UDEPRECATED_LiveLinkDrivenComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_LiveLinkDrivenComponent.InnerSingleton;
}

// StaticRegisterNativesUDEPRECATED_LiveLinkDrivenComponent @ 14d080620

void __cdecl
UDEPRECATED_LiveLinkDrivenComponent::StaticRegisterNativesUDEPRECATED_LiveLinkDrivenComponent(void)

{
  return;
}

