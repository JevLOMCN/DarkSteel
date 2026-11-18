// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsTest
// Functions: 6

// StaticClass @ 14f13b560

UClass * __cdecl UMockWorldMetricH::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricH.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricH",
               &Z_Registration_Info_UClass_UMockWorldMetricH.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricH,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMockWorldMetricH>,
               InternalVTableHelperCtorCaller<UMockWorldMetricH>,local_res8,
               UMockWorldMetricBarBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricH.InnerSingleton;
}

// UMockWorldMetricH @ 14f1408d0

UMockWorldMetricH * __thiscall
UMockWorldMetricH::UMockWorldMetricH(UMockWorldMetricH *this,FVTableHelper *param_1)

{
  UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UMockWorldMetricH__6B_;
  return this;
}

// UMockWorldMetricH @ 14f140910

UMockWorldMetricH * __thiscall
UMockWorldMetricH::UMockWorldMetricH(UMockWorldMetricH *this,FObjectInitializer *param_1)

{
  UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UMockWorldMetricH__6B_;
  return this;
}

// ~UMockWorldMetricH @ 14f142640

void __thiscall UMockWorldMetricH::~UMockWorldMetricH(UMockWorldMetricH *this)

{
  *(undefined ***)this = &___7UMockWorldMetricBase__6B_;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UWorldMetricInterface::~UWorldMetricInterface((UWorldMetricInterface *)this);
  return;
}

// GetPrivateStaticClass @ 14f1446d0

UClass * __cdecl UMockWorldMetricH::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricH.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricH",
               &Z_Registration_Info_UClass_UMockWorldMetricH.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricH,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMockWorldMetricH>,
               InternalVTableHelperCtorCaller<UMockWorldMetricH>,local_res8,
               UMockWorldMetricBarBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricH.InnerSingleton;
}

// StaticRegisterNativesUMockWorldMetricH @ 14f145870

void __cdecl UMockWorldMetricH::StaticRegisterNativesUMockWorldMetricH(void)

{
  return;
}

