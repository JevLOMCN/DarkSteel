// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsTest
// Functions: 6

// StaticClass @ 14f13c0b0

UClass * __cdecl UMockWorldMetricsExtensionE::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionE.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricsExtensionE",
               &Z_Registration_Info_UClass_UMockWorldMetricsExtensionE.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricsExtensionE,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMockWorldMetricsExtensionE>,
               InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionE>,local_res8,
               UMockWorldMetricsExtensionBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionE.InnerSingleton;
}

// UMockWorldMetricsExtensionE @ 14f140cd0

UMockWorldMetricsExtensionE * __thiscall
UMockWorldMetricsExtensionE::UMockWorldMetricsExtensionE
          (UMockWorldMetricsExtensionE *this,FVTableHelper *param_1)

{
  UWorldMetricsExtension::UWorldMetricsExtension((UWorldMetricsExtension *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UMockWorldMetricsExtensionE__6B_;
  return this;
}

// UMockWorldMetricsExtensionE @ 14f140d10

UMockWorldMetricsExtensionE * __thiscall
UMockWorldMetricsExtensionE::UMockWorldMetricsExtensionE
          (UMockWorldMetricsExtensionE *this,FObjectInitializer *param_1)

{
  UWorldMetricsExtension::UWorldMetricsExtension((UWorldMetricsExtension *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UMockWorldMetricsExtensionE__6B_;
  return this;
}

// ~UMockWorldMetricsExtensionE @ 14f1427a0

void __thiscall
UMockWorldMetricsExtensionE::~UMockWorldMetricsExtensionE(UMockWorldMetricsExtensionE *this)

{
  *(undefined ***)this = &___7UMockWorldMetricsExtensionBase__6B_;
  UWorldMetricsExtension::~UWorldMetricsExtension((UWorldMetricsExtension *)this);
  return;
}

// GetPrivateStaticClass @ 14f144cd0

UClass * __cdecl UMockWorldMetricsExtensionE::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionE.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricsExtensionE",
               &Z_Registration_Info_UClass_UMockWorldMetricsExtensionE.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricsExtensionE,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMockWorldMetricsExtensionE>,
               InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionE>,local_res8,
               UMockWorldMetricsExtensionBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionE.InnerSingleton;
}

// StaticRegisterNativesUMockWorldMetricsExtensionE @ 14f1458f0

void __cdecl UMockWorldMetricsExtensionE::StaticRegisterNativesUMockWorldMetricsExtensionE(void)

{
  return;
}

