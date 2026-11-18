// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 147b28bb0

UClass * __cdecl UComponentElementHierarchyInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComponentElementHierarchyInterface.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ComponentElementHierarchyInterface",
               &Z_Registration_Info_UClass_UComponentElementHierarchyInterface.InnerSingleton,
               StaticRegisterNativesUComponentElementHierarchyInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UComponentElementHierarchyInterface>,
               InternalVTableHelperCtorCaller<UComponentElementHierarchyInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComponentElementHierarchyInterface.InnerSingleton;
}

// UComponentElementHierarchyInterface @ 147b3a7e0

UComponentElementHierarchyInterface * __thiscall
UComponentElementHierarchyInterface::UComponentElementHierarchyInterface
          (UComponentElementHierarchyInterface *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementHierarchyInterface__;
  return this;
}

// UComponentElementHierarchyInterface @ 147b3a820

UComponentElementHierarchyInterface * __thiscall
UComponentElementHierarchyInterface::UComponentElementHierarchyInterface
          (UComponentElementHierarchyInterface *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementHierarchyInterface__;
  return this;
}

// ~UComponentElementHierarchyInterface @ 147b3d540

void __thiscall
UComponentElementHierarchyInterface::~UComponentElementHierarchyInterface
          (UComponentElementHierarchyInterface *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7ITypedElementHierarchyInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetChildElements @ 147b64400

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
UComponentElementHierarchyInterface::GetChildElements
          (UComponentElementHierarchyInterface *this,FTypedElementHandle *param_1,
          TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  UActorComponent *pUVar1;
  
  pUVar1 = ComponentElementDataUtil::GetComponentFromHandle(param_1,false);
  if (pUVar1 != (UActorComponent *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x498))(pUVar1,param_2,param_3);
  }
  return;
}

// GetParentElement @ 147b6a760

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FTypedElementHandle * __thiscall
UComponentElementHierarchyInterface::GetParentElement
          (UComponentElementHierarchyInterface *this,FTypedElementHandle *__return_storage_ptr__,
          FTypedElementHandle *param_1,bool param_2)

{
  ComponentElementDataUtil::GetComponentFromHandle(param_1,false);
  *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
  __return_storage_ptr__->DataPtr = (FTypedElementInternalData *)0x0;
  __return_storage_ptr__->ReferenceId = -1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 147b6b8c0

UClass * __cdecl UComponentElementHierarchyInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComponentElementHierarchyInterface.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ComponentElementHierarchyInterface",
               &Z_Registration_Info_UClass_UComponentElementHierarchyInterface.InnerSingleton,
               StaticRegisterNativesUComponentElementHierarchyInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UComponentElementHierarchyInterface>,
               InternalVTableHelperCtorCaller<UComponentElementHierarchyInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComponentElementHierarchyInterface.InnerSingleton;
}

// StaticRegisterNativesUComponentElementHierarchyInterface @ 147b8eb80

void __cdecl
UComponentElementHierarchyInterface::StaticRegisterNativesUComponentElementHierarchyInterface(void)

{
  return;
}

// _getUObject @ 147b91fa0

UObject * __thiscall
UComponentElementHierarchyInterface::_getUObject(UComponentElementHierarchyInterface *this)

{
  return (UObject *)&this[-1].field_0x8;
}

