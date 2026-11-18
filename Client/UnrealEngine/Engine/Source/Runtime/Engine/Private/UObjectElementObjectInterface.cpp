// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147b29dc0

UClass * __cdecl UObjectElementObjectInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectElementObjectInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ObjectElementObjectInterface",
               &Z_Registration_Info_UClass_UObjectElementObjectInterface.InnerSingleton,
               StaticRegisterNativesUObjectElementObjectInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UObjectElementObjectInterface>,
               InternalVTableHelperCtorCaller<UObjectElementObjectInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectElementObjectInterface.InnerSingleton;
}

// UObjectElementObjectInterface @ 147b3b600

UObjectElementObjectInterface * __thiscall
UObjectElementObjectInterface::UObjectElementObjectInterface
          (UObjectElementObjectInterface *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementObjectInterface__;
  return this;
}

// UObjectElementObjectInterface @ 147b3b640

UObjectElementObjectInterface * __thiscall
UObjectElementObjectInterface::UObjectElementObjectInterface
          (UObjectElementObjectInterface *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementObjectInterface__;
  return this;
}

// ~UObjectElementObjectInterface @ 147b3d9b0

void __thiscall
UObjectElementObjectInterface::~UObjectElementObjectInterface(UObjectElementObjectInterface *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7ITypedElementObjectInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetObject @ 147b69660

UObject * __thiscall
UObjectElementObjectInterface::GetObject
          (UObjectElementObjectInterface *this,FTypedElementHandle *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = ObjectElementDataUtil::GetObjectFromHandle(param_1,false);
  return pUVar1;
}

// GetPrivateStaticClass @ 147b6c3f0

UClass * __cdecl UObjectElementObjectInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectElementObjectInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ObjectElementObjectInterface",
               &Z_Registration_Info_UClass_UObjectElementObjectInterface.InnerSingleton,
               StaticRegisterNativesUObjectElementObjectInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UObjectElementObjectInterface>,
               InternalVTableHelperCtorCaller<UObjectElementObjectInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectElementObjectInterface.InnerSingleton;
}

// StaticRegisterNativesUObjectElementObjectInterface @ 147b8ecb0

void __cdecl UObjectElementObjectInterface::StaticRegisterNativesUObjectElementObjectInterface(void)

{
  return;
}

// _getUObject @ 147b92000

UObject * __thiscall UObjectElementObjectInterface::_getUObject(UObjectElementObjectInterface *this)

{
  return (UObject *)&this[-1].field_0x8;
}

