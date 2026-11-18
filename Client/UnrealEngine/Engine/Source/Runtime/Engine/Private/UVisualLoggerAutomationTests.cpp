// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148997f30

UClass * __cdecl UVisualLoggerAutomationTests::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVisualLoggerAutomationTests.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VisualLoggerAutomationTests",
               &Z_Registration_Info_UClass_UVisualLoggerAutomationTests.InnerSingleton,
               StaticRegisterNativesUVisualLoggerAutomationTests,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UVisualLoggerAutomationTests>,
               InternalVTableHelperCtorCaller<UVisualLoggerAutomationTests>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVisualLoggerAutomationTests.InnerSingleton;
}

// UVisualLoggerAutomationTests @ 1489b7330

UVisualLoggerAutomationTests * __thiscall
UVisualLoggerAutomationTests::UVisualLoggerAutomationTests
          (UVisualLoggerAutomationTests *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UVisualLoggerAutomationTests__6B_;
  return this;
}

// UVisualLoggerAutomationTests @ 1489b7360

UVisualLoggerAutomationTests * __thiscall
UVisualLoggerAutomationTests::UVisualLoggerAutomationTests
          (UVisualLoggerAutomationTests *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UVisualLoggerAutomationTests__6B_;
  return this;
}

// ~UVisualLoggerAutomationTests @ 1489baad0

void __thiscall
UVisualLoggerAutomationTests::~UVisualLoggerAutomationTests(UVisualLoggerAutomationTests *this)

{
  *(undefined ***)this = &___7UVisualLoggerAutomationTests__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1489ec230

UClass * __cdecl UVisualLoggerAutomationTests::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVisualLoggerAutomationTests.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VisualLoggerAutomationTests",
               &Z_Registration_Info_UClass_UVisualLoggerAutomationTests.InnerSingleton,
               StaticRegisterNativesUVisualLoggerAutomationTests,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UVisualLoggerAutomationTests>,
               InternalVTableHelperCtorCaller<UVisualLoggerAutomationTests>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVisualLoggerAutomationTests.InnerSingleton;
}

// StaticRegisterNativesUVisualLoggerAutomationTests @ 148a188d0

void __cdecl UVisualLoggerAutomationTests::StaticRegisterNativesUVisualLoggerAutomationTests(void)

{
  return;
}

