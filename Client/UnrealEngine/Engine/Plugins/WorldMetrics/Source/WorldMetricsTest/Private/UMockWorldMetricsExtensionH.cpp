// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsTest
// Functions: 6

// StaticClass @ 14f13c860

UClass * __cdecl UMockWorldMetricsExtensionH::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionH.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricsExtensionH",
               &Z_Registration_Info_UClass_UMockWorldMetricsExtensionH.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricsExtensionH,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMockWorldMetricsExtensionH>,
               InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionH>,local_res8,
               UMockWorldMetricsExtensionBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionH.InnerSingleton;
}

// UMockWorldMetricsExtensionH @ 14f140e50

UMockWorldMetricsExtensionH * __thiscall
UMockWorldMetricsExtensionH::UMockWorldMetricsExtensionH
          (UMockWorldMetricsExtensionH *this,FVTableHelper *param_1)

{
  UWorldMetricsExtension::UWorldMetricsExtension((UWorldMetricsExtension *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UMockWorldMetricsExtensionH__6B_;
  return this;
}

// UMockWorldMetricsExtensionH @ 14f140e90

UMockWorldMetricsExtensionH * __thiscall
UMockWorldMetricsExtensionH::UMockWorldMetricsExtensionH
          (UMockWorldMetricsExtensionH *this,FObjectInitializer *param_1)

{
  UWorldMetricsExtension::UWorldMetricsExtension((UWorldMetricsExtension *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UMockWorldMetricsExtensionH__6B_;
  return this;
}

// ~UMockWorldMetricsExtensionH @ 14f142800

void __thiscall
UMockWorldMetricsExtensionH::~UMockWorldMetricsExtensionH(UMockWorldMetricsExtensionH *this)

{
  *(undefined ***)this = &___7UMockWorldMetricsExtensionBase__6B_;
  UWorldMetricsExtension::~UWorldMetricsExtension((UWorldMetricsExtension *)this);
  return;
}

// GetPrivateStaticClass @ 14f144f10

UClass * __cdecl UMockWorldMetricsExtensionH::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionH.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricsExtensionH",
               &Z_Registration_Info_UClass_UMockWorldMetricsExtensionH.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricsExtensionH,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMockWorldMetricsExtensionH>,
               InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionH>,local_res8,
               UMockWorldMetricsExtensionBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionH.InnerSingleton;
}

// StaticRegisterNativesUMockWorldMetricsExtensionH @ 14f145920

void __cdecl UMockWorldMetricsExtensionH::StaticRegisterNativesUMockWorldMetricsExtensionH(void)

{
  return;
}

