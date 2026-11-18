// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsTest
// Functions: 6

// StaticClass @ 14f13b730

UClass * __cdecl UMockWorldMetricJ::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricJ.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricJ",
               &Z_Registration_Info_UClass_UMockWorldMetricJ.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricJ,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMockWorldMetricJ>,
               InternalVTableHelperCtorCaller<UMockWorldMetricJ>,local_res8,
               UMockWorldMetricBarBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricJ.InnerSingleton;
}

// UMockWorldMetricJ @ 14f1409d0

UMockWorldMetricJ * __thiscall
UMockWorldMetricJ::UMockWorldMetricJ(UMockWorldMetricJ *this,FVTableHelper *param_1)

{
  UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UMockWorldMetricJ__6B_;
  return this;
}

// UMockWorldMetricJ @ 14f140a10

UMockWorldMetricJ * __thiscall
UMockWorldMetricJ::UMockWorldMetricJ(UMockWorldMetricJ *this,FObjectInitializer *param_1)

{
  UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UMockWorldMetricJ__6B_;
  return this;
}

// ~UMockWorldMetricJ @ 14f1426c0

void __thiscall UMockWorldMetricJ::~UMockWorldMetricJ(UMockWorldMetricJ *this)

{
  *(undefined ***)this = &___7UMockWorldMetricBase__6B_;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UWorldMetricInterface::~UWorldMetricInterface((UWorldMetricInterface *)this);
  return;
}

// GetPrivateStaticClass @ 14f144850

UClass * __cdecl UMockWorldMetricJ::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricJ.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricJ",
               &Z_Registration_Info_UClass_UMockWorldMetricJ.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricJ,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMockWorldMetricJ>,
               InternalVTableHelperCtorCaller<UMockWorldMetricJ>,local_res8,
               UMockWorldMetricBarBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricJ.InnerSingleton;
}

// StaticRegisterNativesUMockWorldMetricJ @ 14f145890

void __cdecl UMockWorldMetricJ::StaticRegisterNativesUMockWorldMetricJ(void)

{
  return;
}

