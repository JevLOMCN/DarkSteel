// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// StaticClass @ 141e4a670

UClass * __cdecl UObjectPtrStressTestClass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectPtrStressTestClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ObjectPtrStressTestClass",
               &Z_Registration_Info_UClass_UObjectPtrStressTestClass.InnerSingleton,
               StaticRegisterNativesUObjectPtrStressTestClass,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UObjectPtrStressTestClass>,
               InternalVTableHelperCtorCaller<UObjectPtrStressTestClass>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectPtrStressTestClass.InnerSingleton;
}

// UObjectPtrStressTestClass @ 141e56f60

UObjectPtrStressTestClass * __thiscall
UObjectPtrStressTestClass::UObjectPtrStressTestClass
          (UObjectPtrStressTestClass *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UObjectPtrStressTestClass__6B_;
  return this;
}

// UObjectPtrStressTestClass @ 141e56f90

UObjectPtrStressTestClass * __thiscall
UObjectPtrStressTestClass::UObjectPtrStressTestClass
          (UObjectPtrStressTestClass *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UObjectPtrStressTestClass__6B_;
  return this;
}

// ~UObjectPtrStressTestClass @ 141e57b10

void __thiscall
UObjectPtrStressTestClass::~UObjectPtrStressTestClass(UObjectPtrStressTestClass *this)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5cda0

UClass * __cdecl UObjectPtrStressTestClass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectPtrStressTestClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ObjectPtrStressTestClass",
               &Z_Registration_Info_UClass_UObjectPtrStressTestClass.InnerSingleton,
               StaticRegisterNativesUObjectPtrStressTestClass,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UObjectPtrStressTestClass>,
               InternalVTableHelperCtorCaller<UObjectPtrStressTestClass>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectPtrStressTestClass.InnerSingleton;
}

// StaticRegisterNativesUObjectPtrStressTestClass @ 141e60800

void __cdecl UObjectPtrStressTestClass::StaticRegisterNativesUObjectPtrStressTestClass(void)

{
  return;
}

