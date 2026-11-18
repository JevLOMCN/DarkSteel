// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 6

// StaticClass @ 148b86f40

UClass * __cdecl UObjectTest::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectTest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Serialization",L"ObjectTest",
               &Z_Registration_Info_UClass_UObjectTest.InnerSingleton,
               StaticRegisterNativesUObjectTest,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UObjectTest>,InternalVTableHelperCtorCaller<UObjectTest>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectTest.InnerSingleton;
}

// UObjectTest @ 148ba0080

UObjectTest * __thiscall UObjectTest::UObjectTest(UObjectTest *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UObjectTest__6B_;
  return this;
}

// UObjectTest @ 148ba00b0

UObjectTest * __thiscall UObjectTest::UObjectTest(UObjectTest *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UObjectTest__6B_;
  return this;
}

// ~UObjectTest @ 148ba0a20

void __thiscall UObjectTest::~UObjectTest(UObjectTest *this)

{
  *(undefined ***)this = &___7UObjectTest__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148ba8b50

UClass * __cdecl UObjectTest::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectTest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Serialization",L"ObjectTest",
               &Z_Registration_Info_UClass_UObjectTest.InnerSingleton,
               StaticRegisterNativesUObjectTest,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UObjectTest>,InternalVTableHelperCtorCaller<UObjectTest>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectTest.InnerSingleton;
}

// StaticRegisterNativesUObjectTest @ 148bae020

void __cdecl UObjectTest::StaticRegisterNativesUObjectTest(void)

{
  return;
}

