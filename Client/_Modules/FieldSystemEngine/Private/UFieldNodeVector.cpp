// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldSystemEngine
// Functions: 7

// StaticClass @ 1463266e0

UClass * __cdecl UFieldNodeVector::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFieldNodeVector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"FieldNodeVector",
               &Z_Registration_Info_UClass_UFieldNodeVector.InnerSingleton,
               StaticRegisterNativesUFieldNodeVector,0xc0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UFieldNodeVector>,
               InternalVTableHelperCtorCaller<UFieldNodeVector>,local_res8,
               UFieldNodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFieldNodeVector.InnerSingleton;
}

// UFieldNodeVector @ 14632ab70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UFieldNodeVector * __thiscall
UFieldNodeVector::UFieldNodeVector(UFieldNodeVector *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// UFieldNodeVector @ 14632abb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UFieldNodeVector * __thiscall
UFieldNodeVector::UFieldNodeVector(UFieldNodeVector *this,FObjectInitializer *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// ~UFieldNodeVector @ 14632b6f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UFieldNodeVector::~UFieldNodeVector(UFieldNodeVector *this)

{
  *(undefined ***)this = &UFieldNodeBase::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &UFieldNodeBase::_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &UFieldNodeBase::_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14632fc00

UClass * __cdecl UFieldNodeVector::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFieldNodeVector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"FieldNodeVector",
               &Z_Registration_Info_UClass_UFieldNodeVector.InnerSingleton,
               StaticRegisterNativesUFieldNodeVector,0xc0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UFieldNodeVector>,
               InternalVTableHelperCtorCaller<UFieldNodeVector>,local_res8,
               UFieldNodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFieldNodeVector.InnerSingleton;
}

// StaticRegisterNativesUFieldNodeVector @ 146334160

void __cdecl UFieldNodeVector::StaticRegisterNativesUFieldNodeVector(void)

{
  return;
}

// Type @ 146334680

EFieldType __thiscall UFieldNodeVector::Type(UFieldNodeVector *this)

{
  return EField_FVector;
}

