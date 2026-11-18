// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// StaticClass @ 141e4bb20

UClass * __cdecl UMiddleClass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMiddleClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"MiddleClass",
               &Z_Registration_Info_UClass_UMiddleClass.InnerSingleton,
               StaticRegisterNativesUMiddleClass,0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMiddleClass>,InternalVTableHelperCtorCaller<UMiddleClass>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMiddleClass.InnerSingleton;
}

// UMiddleClass @ 141e56b60

UMiddleClass * __thiscall UMiddleClass::UMiddleClass(UMiddleClass *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FTestBaseClass__;
  return this;
}

// UMiddleClass @ 141e56ba0

UMiddleClass * __thiscall UMiddleClass::UMiddleClass(UMiddleClass *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FTestBaseClass__;
  return this;
}

// ~UMiddleClass @ 141e57930

void __thiscall UMiddleClass::~UMiddleClass(UMiddleClass *this)

{
  *(undefined ***)&this->field_0x28 = &_vftable__for__FTestBaseClass__;
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5c2a0

UClass * __cdecl UMiddleClass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMiddleClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"MiddleClass",
               &Z_Registration_Info_UClass_UMiddleClass.InnerSingleton,
               StaticRegisterNativesUMiddleClass,0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMiddleClass>,InternalVTableHelperCtorCaller<UMiddleClass>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMiddleClass.InnerSingleton;
}

// StaticRegisterNativesUMiddleClass @ 141e60710

void __cdecl UMiddleClass::StaticRegisterNativesUMiddleClass(void)

{
  return;
}

// VirtFunc @ 141e61ef0

void __thiscall UMiddleClass::VirtFunc(UMiddleClass *this)

{
  return;
}

