// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsTest
// Functions: 6

// StaticClass @ 14f13acf0

UClass * __cdecl UMockWorldMetricD::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricD.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricD",
               &Z_Registration_Info_UClass_UMockWorldMetricD.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricD,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMockWorldMetricD>,
               InternalVTableHelperCtorCaller<UMockWorldMetricD>,local_res8,
               UMockWorldMetricFooBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricD.InnerSingleton;
}

// UMockWorldMetricD @ 14f140650

UMockWorldMetricD * __thiscall
UMockWorldMetricD::UMockWorldMetricD(UMockWorldMetricD *this,FVTableHelper *param_1)

{
  UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UMockWorldMetricD__6B_;
  return this;
}

// UMockWorldMetricD @ 14f140690

UMockWorldMetricD * __thiscall
UMockWorldMetricD::UMockWorldMetricD(UMockWorldMetricD *this,FObjectInitializer *param_1)

{
  UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UMockWorldMetricD__6B_;
  return this;
}

// ~UMockWorldMetricD @ 14f142500

void __thiscall UMockWorldMetricD::~UMockWorldMetricD(UMockWorldMetricD *this)

{
  *(undefined ***)this = &___7UMockWorldMetricBase__6B_;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UWorldMetricInterface::~UWorldMetricInterface((UWorldMetricInterface *)this);
  return;
}

// GetPrivateStaticClass @ 14f144310

UClass * __cdecl UMockWorldMetricD::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricD.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricD",
               &Z_Registration_Info_UClass_UMockWorldMetricD.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricD,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMockWorldMetricD>,
               InternalVTableHelperCtorCaller<UMockWorldMetricD>,local_res8,
               UMockWorldMetricFooBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricD.InnerSingleton;
}

// StaticRegisterNativesUMockWorldMetricD @ 14f145820

void __cdecl UMockWorldMetricD::StaticRegisterNativesUMockWorldMetricD(void)

{
  return;
}

