// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// StaticClass @ 141e49260

UClass * __cdecl UObjectPtrAbstractDerivedTestClass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectPtrAbstractDerivedTestClass.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ObjectPtrAbstractDerivedTestClass",
               &Z_Registration_Info_UClass_UObjectPtrAbstractDerivedTestClass.InnerSingleton,
               StaticRegisterNativesUObjectPtrAbstractDerivedTestClass,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UObjectPtrAbstractDerivedTestClass>,
               InternalVTableHelperCtorCaller<UObjectPtrAbstractDerivedTestClass>,local_res8,
               UObjectPtrAbstractTestClass::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectPtrAbstractDerivedTestClass.InnerSingleton;
}

// UObjectPtrAbstractDerivedTestClass @ 141e56de0

UObjectPtrAbstractDerivedTestClass * __thiscall
UObjectPtrAbstractDerivedTestClass::UObjectPtrAbstractDerivedTestClass
          (UObjectPtrAbstractDerivedTestClass *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UObjectPtrAbstractDerivedTestClass__6B_;
  return this;
}

// UObjectPtrAbstractDerivedTestClass @ 141e56e10

UObjectPtrAbstractDerivedTestClass * __thiscall
UObjectPtrAbstractDerivedTestClass::UObjectPtrAbstractDerivedTestClass
          (UObjectPtrAbstractDerivedTestClass *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UObjectPtrAbstractDerivedTestClass__6B_;
  return this;
}

// ~UObjectPtrAbstractDerivedTestClass @ 141e57a90

void __thiscall
UObjectPtrAbstractDerivedTestClass::~UObjectPtrAbstractDerivedTestClass
          (UObjectPtrAbstractDerivedTestClass *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5cac0

UClass * __cdecl UObjectPtrAbstractDerivedTestClass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectPtrAbstractDerivedTestClass.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ObjectPtrAbstractDerivedTestClass",
               &Z_Registration_Info_UClass_UObjectPtrAbstractDerivedTestClass.InnerSingleton,
               StaticRegisterNativesUObjectPtrAbstractDerivedTestClass,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UObjectPtrAbstractDerivedTestClass>,
               InternalVTableHelperCtorCaller<UObjectPtrAbstractDerivedTestClass>,local_res8,
               UObjectPtrAbstractTestClass::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectPtrAbstractDerivedTestClass.InnerSingleton;
}

// StaticRegisterNativesUObjectPtrAbstractDerivedTestClass @ 141e607c0

void __cdecl
UObjectPtrAbstractDerivedTestClass::StaticRegisterNativesUObjectPtrAbstractDerivedTestClass(void)

{
  return;
}

