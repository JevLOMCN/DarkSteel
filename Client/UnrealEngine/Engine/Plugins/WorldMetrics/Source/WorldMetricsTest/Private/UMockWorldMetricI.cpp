// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsTest
// Functions: 6

// StaticClass @ 14f13b670

UClass * __cdecl UMockWorldMetricI::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricI.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricI",
               &Z_Registration_Info_UClass_UMockWorldMetricI.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricI,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMockWorldMetricI>,
               InternalVTableHelperCtorCaller<UMockWorldMetricI>,local_res8,
               UMockWorldMetricBarBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricI.InnerSingleton;
}

// UMockWorldMetricI @ 14f140950

UMockWorldMetricI * __thiscall
UMockWorldMetricI::UMockWorldMetricI(UMockWorldMetricI *this,FVTableHelper *param_1)

{
  UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UMockWorldMetricI__6B_;
  return this;
}

// UMockWorldMetricI @ 14f140990

UMockWorldMetricI * __thiscall
UMockWorldMetricI::UMockWorldMetricI(UMockWorldMetricI *this,FObjectInitializer *param_1)

{
  UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UMockWorldMetricI__6B_;
  return this;
}

// ~UMockWorldMetricI @ 14f142680

void __thiscall UMockWorldMetricI::~UMockWorldMetricI(UMockWorldMetricI *this)

{
  *(undefined ***)this = &___7UMockWorldMetricBase__6B_;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UWorldMetricInterface::~UWorldMetricInterface((UWorldMetricInterface *)this);
  return;
}

// GetPrivateStaticClass @ 14f144790

UClass * __cdecl UMockWorldMetricI::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricI.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricI",
               &Z_Registration_Info_UClass_UMockWorldMetricI.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricI,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMockWorldMetricI>,
               InternalVTableHelperCtorCaller<UMockWorldMetricI>,local_res8,
               UMockWorldMetricBarBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricI.InnerSingleton;
}

// StaticRegisterNativesUMockWorldMetricI @ 14f145880

void __cdecl UMockWorldMetricI::StaticRegisterNativesUMockWorldMetricI(void)

{
  return;
}

