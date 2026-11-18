// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147b2af20

UClass * __cdecl UActorElementHierarchyInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorElementHierarchyInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorElementHierarchyInterface",
               &Z_Registration_Info_UClass_UActorElementHierarchyInterface.InnerSingleton,
               StaticRegisterNativesUActorElementHierarchyInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UActorElementHierarchyInterface>,
               InternalVTableHelperCtorCaller<UActorElementHierarchyInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorElementHierarchyInterface.InnerSingleton;
}

// UActorElementHierarchyInterface @ 147b3a480

UActorElementHierarchyInterface * __thiscall
UActorElementHierarchyInterface::UActorElementHierarchyInterface
          (UActorElementHierarchyInterface *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementHierarchyInterface__;
  return this;
}

// UActorElementHierarchyInterface @ 147b3a4c0

UActorElementHierarchyInterface * __thiscall
UActorElementHierarchyInterface::UActorElementHierarchyInterface
          (UActorElementHierarchyInterface *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementHierarchyInterface__;
  return this;
}

// ~UActorElementHierarchyInterface @ 147b3d460

void __thiscall
UActorElementHierarchyInterface::~UActorElementHierarchyInterface
          (UActorElementHierarchyInterface *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7ITypedElementHierarchyInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetChildElements @ 147b643f0

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
UActorElementHierarchyInterface::GetChildElements
          (UActorElementHierarchyInterface *this,FTypedElementHandle *param_1,
          TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  ActorElementDataUtil::GetActorFromHandle(param_1,false);
  return;
}

// GetPrivateStaticClass @ 147b6b3f0

UClass * __cdecl UActorElementHierarchyInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorElementHierarchyInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorElementHierarchyInterface",
               &Z_Registration_Info_UClass_UActorElementHierarchyInterface.InnerSingleton,
               StaticRegisterNativesUActorElementHierarchyInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UActorElementHierarchyInterface>,
               InternalVTableHelperCtorCaller<UActorElementHierarchyInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorElementHierarchyInterface.InnerSingleton;
}

// StaticRegisterNativesUActorElementHierarchyInterface @ 147b8eae0

void __cdecl
UActorElementHierarchyInterface::StaticRegisterNativesUActorElementHierarchyInterface(void)

{
  return;
}

// _getUObject @ 147b91f40

UObject * __thiscall
UActorElementHierarchyInterface::_getUObject(UActorElementHierarchyInterface *this)

{
  return (UObject *)&this[-1].field_0x8;
}

