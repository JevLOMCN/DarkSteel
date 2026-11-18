// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldSystemEngine
// Functions: 7

// StaticClass @ 146326520

UClass * __cdecl UFieldNodeInt::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFieldNodeInt.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"FieldNodeInt",
               &Z_Registration_Info_UClass_UFieldNodeInt.InnerSingleton,
               StaticRegisterNativesUFieldNodeInt,0xc0,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Engine",InternalConstructor<UFieldNodeInt>,
               InternalVTableHelperCtorCaller<UFieldNodeInt>,local_res8,UFieldNodeBase::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFieldNodeInt.InnerSingleton;
}

// UFieldNodeInt @ 14632aaf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UFieldNodeInt * __thiscall UFieldNodeInt::UFieldNodeInt(UFieldNodeInt *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// UFieldNodeInt @ 14632ab30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UFieldNodeInt * __thiscall
UFieldNodeInt::UFieldNodeInt(UFieldNodeInt *this,FObjectInitializer *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// ~UFieldNodeInt @ 14632b6c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UFieldNodeInt::~UFieldNodeInt(UFieldNodeInt *this)

{
  *(undefined ***)this = &UFieldNodeBase::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &UFieldNodeBase::_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &UFieldNodeBase::_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14632fb40

UClass * __cdecl UFieldNodeInt::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFieldNodeInt.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"FieldNodeInt",
               &Z_Registration_Info_UClass_UFieldNodeInt.InnerSingleton,
               StaticRegisterNativesUFieldNodeInt,0xc0,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Engine",InternalConstructor<UFieldNodeInt>,
               InternalVTableHelperCtorCaller<UFieldNodeInt>,local_res8,UFieldNodeBase::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFieldNodeInt.InnerSingleton;
}

// StaticRegisterNativesUFieldNodeInt @ 146334150

void __cdecl UFieldNodeInt::StaticRegisterNativesUFieldNodeInt(void)

{
  return;
}

// Type @ 146334670

EFieldType __thiscall UFieldNodeInt::Type(UFieldNodeInt *this)

{
  return EField_Int32;
}

