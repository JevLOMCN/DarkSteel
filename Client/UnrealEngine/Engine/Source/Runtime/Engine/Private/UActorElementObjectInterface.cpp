// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147b2bdd0

UClass * __cdecl UActorElementObjectInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorElementObjectInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorElementObjectInterface",
               &Z_Registration_Info_UClass_UActorElementObjectInterface.InnerSingleton,
               StaticRegisterNativesUActorElementObjectInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UActorElementObjectInterface>,
               InternalVTableHelperCtorCaller<UActorElementObjectInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorElementObjectInterface.InnerSingleton;
}

// UActorElementObjectInterface @ 147b3a500

UActorElementObjectInterface * __thiscall
UActorElementObjectInterface::UActorElementObjectInterface
          (UActorElementObjectInterface *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementObjectInterface__;
  return this;
}

// UActorElementObjectInterface @ 147b3a540

UActorElementObjectInterface * __thiscall
UActorElementObjectInterface::UActorElementObjectInterface
          (UActorElementObjectInterface *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementObjectInterface__;
  return this;
}

// ~UActorElementObjectInterface @ 147b3d480

void __thiscall
UActorElementObjectInterface::~UActorElementObjectInterface(UActorElementObjectInterface *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7ITypedElementObjectInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetObject @ 147b69640

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall
UActorElementObjectInterface::GetObject
          (UActorElementObjectInterface *this,FTypedElementHandle *param_1)

{
  AActor *pAVar1;
  
  pAVar1 = ActorElementDataUtil::GetActorFromHandle(param_1,false);
  return (UObject *)pAVar1;
}

// GetPrivateStaticClass @ 147b6b4a0

UClass * __cdecl UActorElementObjectInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorElementObjectInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorElementObjectInterface",
               &Z_Registration_Info_UClass_UActorElementObjectInterface.InnerSingleton,
               StaticRegisterNativesUActorElementObjectInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UActorElementObjectInterface>,
               InternalVTableHelperCtorCaller<UActorElementObjectInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorElementObjectInterface.InnerSingleton;
}

// StaticRegisterNativesUActorElementObjectInterface @ 147b8eaf0

void __cdecl UActorElementObjectInterface::StaticRegisterNativesUActorElementObjectInterface(void)

{
  return;
}

// _getUObject @ 147b91f50

UObject * __thiscall UActorElementObjectInterface::_getUObject(UActorElementObjectInterface *this)

{
  return (UObject *)&this[-1].field_0x8;
}

