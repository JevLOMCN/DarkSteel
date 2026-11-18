// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsTest
// Functions: 6

// StaticClass @ 14f13bff0

UClass * __cdecl UMockWorldMetricsExtensionD::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionD.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricsExtensionD",
               &Z_Registration_Info_UClass_UMockWorldMetricsExtensionD.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricsExtensionD,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMockWorldMetricsExtensionD>,
               InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionD>,local_res8,
               UMockWorldMetricsExtensionBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionD.InnerSingleton;
}

// UMockWorldMetricsExtensionD @ 14f140c50

UMockWorldMetricsExtensionD * __thiscall
UMockWorldMetricsExtensionD::UMockWorldMetricsExtensionD
          (UMockWorldMetricsExtensionD *this,FVTableHelper *param_1)

{
  UWorldMetricsExtension::UWorldMetricsExtension((UWorldMetricsExtension *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UMockWorldMetricsExtensionD__6B_;
  return this;
}

// UMockWorldMetricsExtensionD @ 14f140c90

UMockWorldMetricsExtensionD * __thiscall
UMockWorldMetricsExtensionD::UMockWorldMetricsExtensionD
          (UMockWorldMetricsExtensionD *this,FObjectInitializer *param_1)

{
  UWorldMetricsExtension::UWorldMetricsExtension((UWorldMetricsExtension *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UMockWorldMetricsExtensionD__6B_;
  return this;
}

// ~UMockWorldMetricsExtensionD @ 14f142780

void __thiscall
UMockWorldMetricsExtensionD::~UMockWorldMetricsExtensionD(UMockWorldMetricsExtensionD *this)

{
  *(undefined ***)this = &___7UMockWorldMetricsExtensionBase__6B_;
  UWorldMetricsExtension::~UWorldMetricsExtension((UWorldMetricsExtension *)this);
  return;
}

// GetPrivateStaticClass @ 14f144c10

UClass * __cdecl UMockWorldMetricsExtensionD::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionD.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricsExtensionD",
               &Z_Registration_Info_UClass_UMockWorldMetricsExtensionD.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricsExtensionD,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMockWorldMetricsExtensionD>,
               InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionD>,local_res8,
               UMockWorldMetricsExtensionBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionD.InnerSingleton;
}

// StaticRegisterNativesUMockWorldMetricsExtensionD @ 14f1458e0

void __cdecl UMockWorldMetricsExtensionD::StaticRegisterNativesUMockWorldMetricsExtensionD(void)

{
  return;
}

