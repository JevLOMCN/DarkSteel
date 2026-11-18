// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// StaticClass @ 141e4bbd0

UClass * __cdecl UDerrivedClass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDerrivedClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"DerrivedClass",
               &Z_Registration_Info_UClass_UDerrivedClass.InnerSingleton,
               StaticRegisterNativesUDerrivedClass,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDerrivedClass>,InternalVTableHelperCtorCaller<UDerrivedClass>,
               local_res8,UMiddleClass::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDerrivedClass.InnerSingleton;
}

// UDerrivedClass @ 141e56860

UDerrivedClass * __thiscall
UDerrivedClass::UDerrivedClass(UDerrivedClass *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FTestBaseClass__;
  *(undefined ***)&this->field_0x30 = &___7UDerrivedClass__6B_;
  return this;
}

// UDerrivedClass @ 141e568a0

UDerrivedClass * __thiscall
UDerrivedClass::UDerrivedClass(UDerrivedClass *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FTestBaseClass__;
  *(undefined ***)&this->field_0x30 = &___7UDerrivedClass__6B_;
  return this;
}

// ~UDerrivedClass @ 141e577a0

void __thiscall UDerrivedClass::~UDerrivedClass(UDerrivedClass *this)

{
  *(undefined ***)&this->field_0x30 = &___7UDerrivedClass__6B_;
  *(undefined ***)&this->field_0x28 = &UMiddleClass::_vftable__for__FTestBaseClass__;
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// AnotherVirtFunc @ 141e59d50

void __thiscall UDerrivedClass::AnotherVirtFunc(UDerrivedClass *this)

{
  return;
}

// GetPrivateStaticClass @ 141e5b900

UClass * __cdecl UDerrivedClass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDerrivedClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"DerrivedClass",
               &Z_Registration_Info_UClass_UDerrivedClass.InnerSingleton,
               StaticRegisterNativesUDerrivedClass,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDerrivedClass>,InternalVTableHelperCtorCaller<UDerrivedClass>,
               local_res8,UMiddleClass::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDerrivedClass.InnerSingleton;
}

// StaticRegisterNativesUDerrivedClass @ 141e60640

void __cdecl UDerrivedClass::StaticRegisterNativesUDerrivedClass(void)

{
  return;
}

