// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsTest
// Functions: 6

// StaticClass @ 14f13ca30

UClass * __cdecl UMockWorldMetricsExtensionJ::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionJ.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricsExtensionJ",
               &Z_Registration_Info_UClass_UMockWorldMetricsExtensionJ.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricsExtensionJ,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMockWorldMetricsExtensionJ>,
               InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionJ>,local_res8,
               UMockWorldMetricsExtensionBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionJ.InnerSingleton;
}

// UMockWorldMetricsExtensionJ @ 14f140f50

UMockWorldMetricsExtensionJ * __thiscall
UMockWorldMetricsExtensionJ::UMockWorldMetricsExtensionJ
          (UMockWorldMetricsExtensionJ *this,FVTableHelper *param_1)

{
  UWorldMetricsExtension::UWorldMetricsExtension((UWorldMetricsExtension *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UMockWorldMetricsExtensionJ__6B_;
  return this;
}

// UMockWorldMetricsExtensionJ @ 14f140f90

UMockWorldMetricsExtensionJ * __thiscall
UMockWorldMetricsExtensionJ::UMockWorldMetricsExtensionJ
          (UMockWorldMetricsExtensionJ *this,FObjectInitializer *param_1)

{
  UWorldMetricsExtension::UWorldMetricsExtension((UWorldMetricsExtension *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UMockWorldMetricsExtensionJ__6B_;
  return this;
}

// ~UMockWorldMetricsExtensionJ @ 14f142840

void __thiscall
UMockWorldMetricsExtensionJ::~UMockWorldMetricsExtensionJ(UMockWorldMetricsExtensionJ *this)

{
  *(undefined ***)this = &___7UMockWorldMetricsExtensionBase__6B_;
  UWorldMetricsExtension::~UWorldMetricsExtension((UWorldMetricsExtension *)this);
  return;
}

// GetPrivateStaticClass @ 14f145090

UClass * __cdecl UMockWorldMetricsExtensionJ::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionJ.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricsExtensionJ",
               &Z_Registration_Info_UClass_UMockWorldMetricsExtensionJ.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricsExtensionJ,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMockWorldMetricsExtensionJ>,
               InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionJ>,local_res8,
               UMockWorldMetricsExtensionBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionJ.InnerSingleton;
}

// StaticRegisterNativesUMockWorldMetricsExtensionJ @ 14f145940

void __cdecl UMockWorldMetricsExtensionJ::StaticRegisterNativesUMockWorldMetricsExtensionJ(void)

{
  return;
}

