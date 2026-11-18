// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// StaticClass @ 141e491b0

UClass * __cdecl UObjectPtrAbstractTestClass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectPtrAbstractTestClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ObjectPtrAbstractTestClass",
               &Z_Registration_Info_UClass_UObjectPtrAbstractTestClass.InnerSingleton,
               StaticRegisterNativesUObjectPtrAbstractTestClass,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UObjectPtrAbstractTestClass>,
               InternalVTableHelperCtorCaller<UObjectPtrAbstractTestClass>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectPtrAbstractTestClass.InnerSingleton;
}

// UObjectPtrAbstractTestClass @ 141e56e40

UObjectPtrAbstractTestClass * __thiscall
UObjectPtrAbstractTestClass::UObjectPtrAbstractTestClass
          (UObjectPtrAbstractTestClass *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UObjectPtrAbstractTestClass__6B_;
  return this;
}

// UObjectPtrAbstractTestClass @ 141e56e70

UObjectPtrAbstractTestClass * __thiscall
UObjectPtrAbstractTestClass::UObjectPtrAbstractTestClass
          (UObjectPtrAbstractTestClass *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UObjectPtrAbstractTestClass__6B_;
  return this;
}

// ~UObjectPtrAbstractTestClass @ 141e57ab0

void __thiscall
UObjectPtrAbstractTestClass::~UObjectPtrAbstractTestClass(UObjectPtrAbstractTestClass *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5cb80

UClass * __cdecl UObjectPtrAbstractTestClass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectPtrAbstractTestClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ObjectPtrAbstractTestClass",
               &Z_Registration_Info_UClass_UObjectPtrAbstractTestClass.InnerSingleton,
               StaticRegisterNativesUObjectPtrAbstractTestClass,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UObjectPtrAbstractTestClass>,
               InternalVTableHelperCtorCaller<UObjectPtrAbstractTestClass>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectPtrAbstractTestClass.InnerSingleton;
}

// StaticRegisterNativesUObjectPtrAbstractTestClass @ 141e607d0

void __cdecl UObjectPtrAbstractTestClass::StaticRegisterNativesUObjectPtrAbstractTestClass(void)

{
  return;
}

