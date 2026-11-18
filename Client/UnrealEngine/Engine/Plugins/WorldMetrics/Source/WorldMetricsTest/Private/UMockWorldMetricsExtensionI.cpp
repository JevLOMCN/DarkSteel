// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsTest
// Functions: 6

// StaticClass @ 14f13c970

UClass * __cdecl UMockWorldMetricsExtensionI::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionI.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricsExtensionI",
               &Z_Registration_Info_UClass_UMockWorldMetricsExtensionI.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricsExtensionI,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMockWorldMetricsExtensionI>,
               InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionI>,local_res8,
               UMockWorldMetricsExtensionBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionI.InnerSingleton;
}

// UMockWorldMetricsExtensionI @ 14f140ed0

UMockWorldMetricsExtensionI * __thiscall
UMockWorldMetricsExtensionI::UMockWorldMetricsExtensionI
          (UMockWorldMetricsExtensionI *this,FVTableHelper *param_1)

{
  UWorldMetricsExtension::UWorldMetricsExtension((UWorldMetricsExtension *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UMockWorldMetricsExtensionI__6B_;
  return this;
}

// UMockWorldMetricsExtensionI @ 14f140f10

UMockWorldMetricsExtensionI * __thiscall
UMockWorldMetricsExtensionI::UMockWorldMetricsExtensionI
          (UMockWorldMetricsExtensionI *this,FObjectInitializer *param_1)

{
  UWorldMetricsExtension::UWorldMetricsExtension((UWorldMetricsExtension *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UMockWorldMetricsExtensionI__6B_;
  return this;
}

// ~UMockWorldMetricsExtensionI @ 14f142820

void __thiscall
UMockWorldMetricsExtensionI::~UMockWorldMetricsExtensionI(UMockWorldMetricsExtensionI *this)

{
  *(undefined ***)this = &___7UMockWorldMetricsExtensionBase__6B_;
  UWorldMetricsExtension::~UWorldMetricsExtension((UWorldMetricsExtension *)this);
  return;
}

// GetPrivateStaticClass @ 14f144fd0

UClass * __cdecl UMockWorldMetricsExtensionI::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionI.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricsExtensionI",
               &Z_Registration_Info_UClass_UMockWorldMetricsExtensionI.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricsExtensionI,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMockWorldMetricsExtensionI>,
               InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionI>,local_res8,
               UMockWorldMetricsExtensionBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionI.InnerSingleton;
}

// StaticRegisterNativesUMockWorldMetricsExtensionI @ 14f145930

void __cdecl UMockWorldMetricsExtensionI::StaticRegisterNativesUMockWorldMetricsExtensionI(void)

{
  return;
}

