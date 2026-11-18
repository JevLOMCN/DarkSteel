// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147b29ae0

UClass * __cdecl UObjectElementAssetDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectElementAssetDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ObjectElementAssetDataInterface",
               &Z_Registration_Info_UClass_UObjectElementAssetDataInterface.InnerSingleton,
               StaticRegisterNativesUObjectElementAssetDataInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UObjectElementAssetDataInterface>,
               InternalVTableHelperCtorCaller<UObjectElementAssetDataInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectElementAssetDataInterface.InnerSingleton;
}

// UObjectElementAssetDataInterface @ 147b3b500

UObjectElementAssetDataInterface * __thiscall
UObjectElementAssetDataInterface::UObjectElementAssetDataInterface
          (UObjectElementAssetDataInterface *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementAssetDataInterface__;
  return this;
}

// UObjectElementAssetDataInterface @ 147b3b540

UObjectElementAssetDataInterface * __thiscall
UObjectElementAssetDataInterface::UObjectElementAssetDataInterface
          (UObjectElementAssetDataInterface *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementAssetDataInterface__;
  return this;
}

// ~UObjectElementAssetDataInterface @ 147b3d970

void __thiscall
UObjectElementAssetDataInterface::~UObjectElementAssetDataInterface
          (UObjectElementAssetDataInterface *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7ITypedElementAssetDataInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetAssetData @ 147b63ad0

FAssetData * __thiscall
UObjectElementAssetDataInterface::GetAssetData
          (UObjectElementAssetDataInterface *this,FAssetData *__return_storage_ptr__,
          FTypedElementHandle *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = ObjectElementDataUtil::GetObjectFromHandle(param_1,false);
  FAssetData::FAssetData(__return_storage_ptr__,pUVar1,None);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 147b6c290

UClass * __cdecl UObjectElementAssetDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectElementAssetDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ObjectElementAssetDataInterface",
               &Z_Registration_Info_UClass_UObjectElementAssetDataInterface.InnerSingleton,
               StaticRegisterNativesUObjectElementAssetDataInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UObjectElementAssetDataInterface>,
               InternalVTableHelperCtorCaller<UObjectElementAssetDataInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectElementAssetDataInterface.InnerSingleton;
}

// StaticRegisterNativesUObjectElementAssetDataInterface @ 147b8ec90

void __cdecl
UObjectElementAssetDataInterface::StaticRegisterNativesUObjectElementAssetDataInterface(void)

{
  return;
}

// _getUObject @ 147b91fe0

UObject * __thiscall
UObjectElementAssetDataInterface::_getUObject(UObjectElementAssetDataInterface *this)

{
  return (UObject *)&this[-1].field_0x8;
}

