// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsTest
// Functions: 6

// StaticClass @ 14f13b150

UClass * __cdecl UMockWorldMetricF::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricF.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricF",
               &Z_Registration_Info_UClass_UMockWorldMetricF.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricF,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMockWorldMetricF>,
               InternalVTableHelperCtorCaller<UMockWorldMetricF>,local_res8,
               UMockWorldMetricBarBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricF.InnerSingleton;
}

// UMockWorldMetricF @ 14f140750

UMockWorldMetricF * __thiscall
UMockWorldMetricF::UMockWorldMetricF(UMockWorldMetricF *this,FVTableHelper *param_1)

{
  UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UMockWorldMetricF__6B_;
  return this;
}

// UMockWorldMetricF @ 14f140790

UMockWorldMetricF * __thiscall
UMockWorldMetricF::UMockWorldMetricF(UMockWorldMetricF *this,FObjectInitializer *param_1)

{
  UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UMockWorldMetricF__6B_;
  return this;
}

// ~UMockWorldMetricF @ 14f142580

void __thiscall UMockWorldMetricF::~UMockWorldMetricF(UMockWorldMetricF *this)

{
  *(undefined ***)this = &___7UMockWorldMetricBase__6B_;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UWorldMetricInterface::~UWorldMetricInterface((UWorldMetricInterface *)this);
  return;
}

// GetPrivateStaticClass @ 14f144490

UClass * __cdecl UMockWorldMetricF::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricF.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricF",
               &Z_Registration_Info_UClass_UMockWorldMetricF.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricF,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMockWorldMetricF>,
               InternalVTableHelperCtorCaller<UMockWorldMetricF>,local_res8,
               UMockWorldMetricBarBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricF.InnerSingleton;
}

// StaticRegisterNativesUMockWorldMetricF @ 14f145840

void __cdecl UMockWorldMetricF::StaticRegisterNativesUMockWorldMetricF(void)

{
  return;
}

