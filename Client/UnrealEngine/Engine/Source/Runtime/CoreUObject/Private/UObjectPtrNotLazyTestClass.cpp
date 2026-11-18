// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// StaticClass @ 141e4a570

UClass * __cdecl UObjectPtrNotLazyTestClass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectPtrNotLazyTestClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ObjectPtrNotLazyTestClass",
               &Z_Registration_Info_UClass_UObjectPtrNotLazyTestClass.InnerSingleton,
               StaticRegisterNativesUObjectPtrNotLazyTestClass,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UObjectPtrNotLazyTestClass>,
               InternalVTableHelperCtorCaller<UObjectPtrNotLazyTestClass>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectPtrNotLazyTestClass.InnerSingleton;
}

// UObjectPtrNotLazyTestClass @ 141e56f00

UObjectPtrNotLazyTestClass * __thiscall
UObjectPtrNotLazyTestClass::UObjectPtrNotLazyTestClass
          (UObjectPtrNotLazyTestClass *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UObjectPtrNotLazyTestClass__6B_;
  return this;
}

// UObjectPtrNotLazyTestClass @ 141e56f30

UObjectPtrNotLazyTestClass * __thiscall
UObjectPtrNotLazyTestClass::UObjectPtrNotLazyTestClass
          (UObjectPtrNotLazyTestClass *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UObjectPtrNotLazyTestClass__6B_;
  return this;
}

// ~UObjectPtrNotLazyTestClass @ 141e57af0

void __thiscall
UObjectPtrNotLazyTestClass::~UObjectPtrNotLazyTestClass(UObjectPtrNotLazyTestClass *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5ccf0

UClass * __cdecl UObjectPtrNotLazyTestClass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectPtrNotLazyTestClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ObjectPtrNotLazyTestClass",
               &Z_Registration_Info_UClass_UObjectPtrNotLazyTestClass.InnerSingleton,
               StaticRegisterNativesUObjectPtrNotLazyTestClass,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UObjectPtrNotLazyTestClass>,
               InternalVTableHelperCtorCaller<UObjectPtrNotLazyTestClass>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectPtrNotLazyTestClass.InnerSingleton;
}

// StaticRegisterNativesUObjectPtrNotLazyTestClass @ 141e607f0

void __cdecl UObjectPtrNotLazyTestClass::StaticRegisterNativesUObjectPtrNotLazyTestClass(void)

{
  return;
}

