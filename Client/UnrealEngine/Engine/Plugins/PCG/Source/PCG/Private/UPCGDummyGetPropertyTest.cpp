// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// StaticClass @ 149fc56b0

UClass * __cdecl UPCGDummyGetPropertyTest::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDummyGetPropertyTest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDummyGetPropertyTest",
               &Z_Registration_Info_UClass_UPCGDummyGetPropertyTest.InnerSingleton,
               StaticRegisterNativesUPCGDummyGetPropertyTest,0x38,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGDummyGetPropertyTest>,
               InternalVTableHelperCtorCaller<UPCGDummyGetPropertyTest>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDummyGetPropertyTest.InnerSingleton;
}

// UPCGDummyGetPropertyTest @ 149ff0f40

UPCGDummyGetPropertyTest * __thiscall
UPCGDummyGetPropertyTest::UPCGDummyGetPropertyTest
          (UPCGDummyGetPropertyTest *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGDummyGetPropertyTest__6B_;
  this->Int64Property = 0;
  this->DoubleProperty = 0.0;
  return this;
}

// UPCGDummyGetPropertyTest @ 149ff0f80

UPCGDummyGetPropertyTest * __thiscall
UPCGDummyGetPropertyTest::UPCGDummyGetPropertyTest
          (UPCGDummyGetPropertyTest *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGDummyGetPropertyTest__6B_;
  this->Int64Property = 0;
  this->DoubleProperty = 0.0;
  return this;
}

// ~UPCGDummyGetPropertyTest @ 149ff11d0

void __thiscall UPCGDummyGetPropertyTest::~UPCGDummyGetPropertyTest(UPCGDummyGetPropertyTest *this)

{
  this->_padding_ = (longlong)&___7UPCGDummyGetPropertyTest__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 149ff7300

UClass * __cdecl UPCGDummyGetPropertyTest::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDummyGetPropertyTest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDummyGetPropertyTest",
               &Z_Registration_Info_UClass_UPCGDummyGetPropertyTest.InnerSingleton,
               StaticRegisterNativesUPCGDummyGetPropertyTest,0x38,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGDummyGetPropertyTest>,
               InternalVTableHelperCtorCaller<UPCGDummyGetPropertyTest>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDummyGetPropertyTest.InnerSingleton;
}

// StaticRegisterNativesUPCGDummyGetPropertyTest @ 149ffa480

void __cdecl UPCGDummyGetPropertyTest::StaticRegisterNativesUPCGDummyGetPropertyTest(void)

{
  return;
}

