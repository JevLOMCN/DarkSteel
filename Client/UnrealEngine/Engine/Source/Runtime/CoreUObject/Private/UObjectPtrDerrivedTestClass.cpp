// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// StaticClass @ 141e4a450

UClass * __cdecl UObjectPtrDerrivedTestClass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectPtrDerrivedTestClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ObjectPtrDerrivedTestClass",
               &Z_Registration_Info_UClass_UObjectPtrDerrivedTestClass.InnerSingleton,
               StaticRegisterNativesUObjectPtrDerrivedTestClass,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UObjectPtrDerrivedTestClass>,
               InternalVTableHelperCtorCaller<UObjectPtrDerrivedTestClass>,local_res8,
               UObjectPtrTestClass::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectPtrDerrivedTestClass.InnerSingleton;
}

// UObjectPtrDerrivedTestClass @ 141e56ea0

UObjectPtrDerrivedTestClass * __thiscall
UObjectPtrDerrivedTestClass::UObjectPtrDerrivedTestClass
          (UObjectPtrDerrivedTestClass *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UObjectPtrDerrivedTestClass__6B_;
  return this;
}

// UObjectPtrDerrivedTestClass @ 141e56ed0

UObjectPtrDerrivedTestClass * __thiscall
UObjectPtrDerrivedTestClass::UObjectPtrDerrivedTestClass
          (UObjectPtrDerrivedTestClass *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UObjectPtrDerrivedTestClass__6B_;
  return this;
}

// ~UObjectPtrDerrivedTestClass @ 141e57ad0

void __thiscall
UObjectPtrDerrivedTestClass::~UObjectPtrDerrivedTestClass(UObjectPtrDerrivedTestClass *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5cc30

UClass * __cdecl UObjectPtrDerrivedTestClass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectPtrDerrivedTestClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ObjectPtrDerrivedTestClass",
               &Z_Registration_Info_UClass_UObjectPtrDerrivedTestClass.InnerSingleton,
               StaticRegisterNativesUObjectPtrDerrivedTestClass,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UObjectPtrDerrivedTestClass>,
               InternalVTableHelperCtorCaller<UObjectPtrDerrivedTestClass>,local_res8,
               UObjectPtrTestClass::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectPtrDerrivedTestClass.InnerSingleton;
}

// StaticRegisterNativesUObjectPtrDerrivedTestClass @ 141e607e0

void __cdecl UObjectPtrDerrivedTestClass::StaticRegisterNativesUObjectPtrDerrivedTestClass(void)

{
  return;
}

