// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// StaticClass @ 141e49040

UClass * __cdecl UObjectPtrTestClass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectPtrTestClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ObjectPtrTestClass",
               &Z_Registration_Info_UClass_UObjectPtrTestClass.InnerSingleton,
               StaticRegisterNativesUObjectPtrTestClass,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UObjectPtrTestClass>,
               InternalVTableHelperCtorCaller<UObjectPtrTestClass>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectPtrTestClass.InnerSingleton;
}

// UObjectPtrTestClass @ 141e56fc0

UObjectPtrTestClass * __thiscall
UObjectPtrTestClass::UObjectPtrTestClass(UObjectPtrTestClass *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UObjectPtrTestClass__6B_;
  return this;
}

// UObjectPtrTestClass @ 141e56ff0

UObjectPtrTestClass * __thiscall
UObjectPtrTestClass::UObjectPtrTestClass(UObjectPtrTestClass *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UObjectPtrTestClass__6B_;
  return this;
}

// ~UObjectPtrTestClass @ 141e57b30

void __thiscall UObjectPtrTestClass::~UObjectPtrTestClass(UObjectPtrTestClass *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5ce50

UClass * __cdecl UObjectPtrTestClass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectPtrTestClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ObjectPtrTestClass",
               &Z_Registration_Info_UClass_UObjectPtrTestClass.InnerSingleton,
               StaticRegisterNativesUObjectPtrTestClass,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UObjectPtrTestClass>,
               InternalVTableHelperCtorCaller<UObjectPtrTestClass>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectPtrTestClass.InnerSingleton;
}

// StaticRegisterNativesUObjectPtrTestClass @ 141e60810

void __cdecl UObjectPtrTestClass::StaticRegisterNativesUObjectPtrTestClass(void)

{
  return;
}

