// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsTest
// Functions: 6

// StaticClass @ 14f13c450

UClass * __cdecl UMockWorldMetricsExtensionF::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionF.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricsExtensionF",
               &Z_Registration_Info_UClass_UMockWorldMetricsExtensionF.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricsExtensionF,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMockWorldMetricsExtensionF>,
               InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionF>,local_res8,
               UMockWorldMetricsExtensionBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionF.InnerSingleton;
}

// UMockWorldMetricsExtensionF @ 14f140d50

UMockWorldMetricsExtensionF * __thiscall
UMockWorldMetricsExtensionF::UMockWorldMetricsExtensionF
          (UMockWorldMetricsExtensionF *this,FVTableHelper *param_1)

{
  UWorldMetricsExtension::UWorldMetricsExtension((UWorldMetricsExtension *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UMockWorldMetricsExtensionF__6B_;
  return this;
}

// UMockWorldMetricsExtensionF @ 14f140d90

UMockWorldMetricsExtensionF * __thiscall
UMockWorldMetricsExtensionF::UMockWorldMetricsExtensionF
          (UMockWorldMetricsExtensionF *this,FObjectInitializer *param_1)

{
  UWorldMetricsExtension::UWorldMetricsExtension((UWorldMetricsExtension *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UMockWorldMetricsExtensionF__6B_;
  return this;
}

// ~UMockWorldMetricsExtensionF @ 14f1427c0

void __thiscall
UMockWorldMetricsExtensionF::~UMockWorldMetricsExtensionF(UMockWorldMetricsExtensionF *this)

{
  *(undefined ***)this = &___7UMockWorldMetricsExtensionBase__6B_;
  UWorldMetricsExtension::~UWorldMetricsExtension((UWorldMetricsExtension *)this);
  return;
}

// GetPrivateStaticClass @ 14f144d90

UClass * __cdecl UMockWorldMetricsExtensionF::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionF.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricsExtensionF",
               &Z_Registration_Info_UClass_UMockWorldMetricsExtensionF.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricsExtensionF,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMockWorldMetricsExtensionF>,
               InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionF>,local_res8,
               UMockWorldMetricsExtensionBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionF.InnerSingleton;
}

// StaticRegisterNativesUMockWorldMetricsExtensionF @ 14f145900

void __cdecl UMockWorldMetricsExtensionF::StaticRegisterNativesUMockWorldMetricsExtensionF(void)

{
  return;
}

