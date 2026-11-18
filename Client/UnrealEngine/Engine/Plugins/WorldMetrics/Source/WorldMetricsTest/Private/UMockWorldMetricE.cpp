// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsTest
// Functions: 6

// StaticClass @ 14f13adb0

UClass * __cdecl UMockWorldMetricE::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricE.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricE",
               &Z_Registration_Info_UClass_UMockWorldMetricE.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricE,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMockWorldMetricE>,
               InternalVTableHelperCtorCaller<UMockWorldMetricE>,local_res8,
               UMockWorldMetricFooBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricE.InnerSingleton;
}

// UMockWorldMetricE @ 14f1406d0

UMockWorldMetricE * __thiscall
UMockWorldMetricE::UMockWorldMetricE(UMockWorldMetricE *this,FVTableHelper *param_1)

{
  UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UMockWorldMetricE__6B_;
  return this;
}

// UMockWorldMetricE @ 14f140710

UMockWorldMetricE * __thiscall
UMockWorldMetricE::UMockWorldMetricE(UMockWorldMetricE *this,FObjectInitializer *param_1)

{
  UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UMockWorldMetricE__6B_;
  return this;
}

// ~UMockWorldMetricE @ 14f142540

void __thiscall UMockWorldMetricE::~UMockWorldMetricE(UMockWorldMetricE *this)

{
  *(undefined ***)this = &___7UMockWorldMetricBase__6B_;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UWorldMetricInterface::~UWorldMetricInterface((UWorldMetricInterface *)this);
  return;
}

// GetPrivateStaticClass @ 14f1443d0

UClass * __cdecl UMockWorldMetricE::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricE.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricE",
               &Z_Registration_Info_UClass_UMockWorldMetricE.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricE,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMockWorldMetricE>,
               InternalVTableHelperCtorCaller<UMockWorldMetricE>,local_res8,
               UMockWorldMetricFooBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricE.InnerSingleton;
}

// StaticRegisterNativesUMockWorldMetricE @ 14f145830

void __cdecl UMockWorldMetricE::StaticRegisterNativesUMockWorldMetricE(void)

{
  return;
}

