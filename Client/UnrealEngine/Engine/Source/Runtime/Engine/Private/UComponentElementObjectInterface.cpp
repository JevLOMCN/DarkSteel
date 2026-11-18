// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147b28e20

UClass * __cdecl UComponentElementObjectInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComponentElementObjectInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ComponentElementObjectInterface",
               &Z_Registration_Info_UClass_UComponentElementObjectInterface.InnerSingleton,
               StaticRegisterNativesUComponentElementObjectInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UComponentElementObjectInterface>,
               InternalVTableHelperCtorCaller<UComponentElementObjectInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComponentElementObjectInterface.InnerSingleton;
}

// UComponentElementObjectInterface @ 147b3a860

UComponentElementObjectInterface * __thiscall
UComponentElementObjectInterface::UComponentElementObjectInterface
          (UComponentElementObjectInterface *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementObjectInterface__;
  return this;
}

// UComponentElementObjectInterface @ 147b3a8a0

UComponentElementObjectInterface * __thiscall
UComponentElementObjectInterface::UComponentElementObjectInterface
          (UComponentElementObjectInterface *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementObjectInterface__;
  return this;
}

// ~UComponentElementObjectInterface @ 147b3d560

void __thiscall
UComponentElementObjectInterface::~UComponentElementObjectInterface
          (UComponentElementObjectInterface *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7ITypedElementObjectInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetObject @ 147b69650

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
UComponentElementObjectInterface::GetObject
          (UComponentElementObjectInterface *this,FTypedElementHandle *param_1)

{
  UActorComponent *pUVar1;
  
  pUVar1 = ComponentElementDataUtil::GetComponentFromHandle(param_1,false);
  return (UObject *)pUVar1;
}

// GetPrivateStaticClass @ 147b6b970

UClass * __cdecl UComponentElementObjectInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComponentElementObjectInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ComponentElementObjectInterface",
               &Z_Registration_Info_UClass_UComponentElementObjectInterface.InnerSingleton,
               StaticRegisterNativesUComponentElementObjectInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UComponentElementObjectInterface>,
               InternalVTableHelperCtorCaller<UComponentElementObjectInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComponentElementObjectInterface.InnerSingleton;
}

// StaticRegisterNativesUComponentElementObjectInterface @ 147b8eb90

void __cdecl
UComponentElementObjectInterface::StaticRegisterNativesUComponentElementObjectInterface(void)

{
  return;
}

// _getUObject @ 147b91fb0

UObject * __thiscall
UComponentElementObjectInterface::_getUObject(UComponentElementObjectInterface *this)

{
  return (UObject *)&this[-1].field_0x8;
}

