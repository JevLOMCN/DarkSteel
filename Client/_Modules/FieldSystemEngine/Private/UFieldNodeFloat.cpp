// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldSystemEngine
// Functions: 7

// StaticClass @ 146326620

UClass * __cdecl UFieldNodeFloat::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFieldNodeFloat.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"FieldNodeFloat",
               &Z_Registration_Info_UClass_UFieldNodeFloat.InnerSingleton,
               StaticRegisterNativesUFieldNodeFloat,0xc0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UFieldNodeFloat>,
               InternalVTableHelperCtorCaller<UFieldNodeFloat>,local_res8,
               UFieldNodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFieldNodeFloat.InnerSingleton;
}

// UFieldNodeFloat @ 14632aa70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UFieldNodeFloat * __thiscall
UFieldNodeFloat::UFieldNodeFloat(UFieldNodeFloat *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// UFieldNodeFloat @ 14632aab0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UFieldNodeFloat * __thiscall
UFieldNodeFloat::UFieldNodeFloat(UFieldNodeFloat *this,FObjectInitializer *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// ~UFieldNodeFloat @ 14632b690

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UFieldNodeFloat::~UFieldNodeFloat(UFieldNodeFloat *this)

{
  *(undefined ***)this = &UFieldNodeBase::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &UFieldNodeBase::_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &UFieldNodeBase::_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14632fa80

UClass * __cdecl UFieldNodeFloat::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFieldNodeFloat.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"FieldNodeFloat",
               &Z_Registration_Info_UClass_UFieldNodeFloat.InnerSingleton,
               StaticRegisterNativesUFieldNodeFloat,0xc0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UFieldNodeFloat>,
               InternalVTableHelperCtorCaller<UFieldNodeFloat>,local_res8,
               UFieldNodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFieldNodeFloat.InnerSingleton;
}

// StaticRegisterNativesUFieldNodeFloat @ 146334140

void __cdecl UFieldNodeFloat::StaticRegisterNativesUFieldNodeFloat(void)

{
  return;
}

// Type @ 146334660

EFieldType __thiscall UFieldNodeFloat::Type(UFieldNodeFloat *this)

{
  return EField_Float;
}

