// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsTest
// Functions: 6

// StaticClass @ 14f13bad0

UClass * __cdecl UMockWorldMetricsExtensionA::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionA.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricsExtensionA",
               &Z_Registration_Info_UClass_UMockWorldMetricsExtensionA.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricsExtensionA,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMockWorldMetricsExtensionA>,
               InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionA>,local_res8,
               UMockWorldMetricsExtensionBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionA.InnerSingleton;
}

// UMockWorldMetricsExtensionA @ 14f140a50

UMockWorldMetricsExtensionA * __thiscall
UMockWorldMetricsExtensionA::UMockWorldMetricsExtensionA
          (UMockWorldMetricsExtensionA *this,FVTableHelper *param_1)

{
  UWorldMetricsExtension::UWorldMetricsExtension((UWorldMetricsExtension *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UMockWorldMetricsExtensionA__6B_;
  return this;
}

// UMockWorldMetricsExtensionA @ 14f140a90

UMockWorldMetricsExtensionA * __thiscall
UMockWorldMetricsExtensionA::UMockWorldMetricsExtensionA
          (UMockWorldMetricsExtensionA *this,FObjectInitializer *param_1)

{
  UWorldMetricsExtension::UWorldMetricsExtension((UWorldMetricsExtension *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UMockWorldMetricsExtensionA__6B_;
  return this;
}

// ~UMockWorldMetricsExtensionA @ 14f142700

void __thiscall
UMockWorldMetricsExtensionA::~UMockWorldMetricsExtensionA(UMockWorldMetricsExtensionA *this)

{
  *(undefined ***)this = &___7UMockWorldMetricsExtensionBase__6B_;
  UWorldMetricsExtension::~UWorldMetricsExtension((UWorldMetricsExtension *)this);
  return;
}

// GetPrivateStaticClass @ 14f144910

UClass * __cdecl UMockWorldMetricsExtensionA::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionA.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricsExtensionA",
               &Z_Registration_Info_UClass_UMockWorldMetricsExtensionA.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricsExtensionA,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMockWorldMetricsExtensionA>,
               InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionA>,local_res8,
               UMockWorldMetricsExtensionBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionA.InnerSingleton;
}

// StaticRegisterNativesUMockWorldMetricsExtensionA @ 14f1458a0

void __cdecl UMockWorldMetricsExtensionA::StaticRegisterNativesUMockWorldMetricsExtensionA(void)

{
  return;
}

