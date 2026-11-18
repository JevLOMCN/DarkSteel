// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147b2a550

UClass * __cdecl USMInstanceElementHierarchyInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USMInstanceElementHierarchyInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SMInstanceElementHierarchyInterface",
               &Z_Registration_Info_UClass_USMInstanceElementHierarchyInterface.InnerSingleton,
               StaticRegisterNativesUSMInstanceElementHierarchyInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USMInstanceElementHierarchyInterface>,
               InternalVTableHelperCtorCaller<USMInstanceElementHierarchyInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USMInstanceElementHierarchyInterface.InnerSingleton;
}

// USMInstanceElementHierarchyInterface @ 147b3b780

USMInstanceElementHierarchyInterface * __thiscall
USMInstanceElementHierarchyInterface::USMInstanceElementHierarchyInterface
          (USMInstanceElementHierarchyInterface *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementHierarchyInterface__;
  return this;
}

// USMInstanceElementHierarchyInterface @ 147b3b7c0

USMInstanceElementHierarchyInterface * __thiscall
USMInstanceElementHierarchyInterface::USMInstanceElementHierarchyInterface
          (USMInstanceElementHierarchyInterface *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementHierarchyInterface__;
  return this;
}

// ~USMInstanceElementHierarchyInterface @ 147b3da10

void __thiscall
USMInstanceElementHierarchyInterface::~USMInstanceElementHierarchyInterface
          (USMInstanceElementHierarchyInterface *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7ITypedElementHierarchyInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetParentElement @ 147b6a7a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FTypedElementHandle * __thiscall
USMInstanceElementHierarchyInterface::GetParentElement
          (USMInstanceElementHierarchyInterface *this,FTypedElementHandle *__return_storage_ptr__,
          FTypedElementHandle *param_1,bool param_2)

{
  FSMInstanceManager local_28;
  
  SMInstanceElementDataUtil::GetSMInstanceFromHandle(&local_28,param_1,false);
  *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
  __return_storage_ptr__->DataPtr = (FTypedElementInternalData *)0x0;
  __return_storage_ptr__->ReferenceId = -1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 147b6c600

UClass * __cdecl USMInstanceElementHierarchyInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USMInstanceElementHierarchyInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SMInstanceElementHierarchyInterface",
               &Z_Registration_Info_UClass_USMInstanceElementHierarchyInterface.InnerSingleton,
               StaticRegisterNativesUSMInstanceElementHierarchyInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USMInstanceElementHierarchyInterface>,
               InternalVTableHelperCtorCaller<USMInstanceElementHierarchyInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USMInstanceElementHierarchyInterface.InnerSingleton;
}

// StaticRegisterNativesUSMInstanceElementHierarchyInterface @ 147b8ece0

void __cdecl
USMInstanceElementHierarchyInterface::StaticRegisterNativesUSMInstanceElementHierarchyInterface
          (void)

{
  return;
}

// _getUObject @ 147b92030

UObject * __thiscall
USMInstanceElementHierarchyInterface::_getUObject(USMInstanceElementHierarchyInterface *this)

{
  return (UObject *)&this[-1].field_0x8;
}

