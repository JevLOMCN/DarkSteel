// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsTest
// Functions: 6

// StaticClass @ 14f13b210

UClass * __cdecl UMockWorldMetricG::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricG.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricG",
               &Z_Registration_Info_UClass_UMockWorldMetricG.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricG,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMockWorldMetricG>,
               InternalVTableHelperCtorCaller<UMockWorldMetricG>,local_res8,
               UMockWorldMetricBarBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricG.InnerSingleton;
}

// UMockWorldMetricG @ 14f140850

UMockWorldMetricG * __thiscall
UMockWorldMetricG::UMockWorldMetricG(UMockWorldMetricG *this,FVTableHelper *param_1)

{
  UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UMockWorldMetricG__6B_;
  return this;
}

// UMockWorldMetricG @ 14f140890

UMockWorldMetricG * __thiscall
UMockWorldMetricG::UMockWorldMetricG(UMockWorldMetricG *this,FObjectInitializer *param_1)

{
  UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UMockWorldMetricG__6B_;
  return this;
}

// ~UMockWorldMetricG @ 14f142600

void __thiscall UMockWorldMetricG::~UMockWorldMetricG(UMockWorldMetricG *this)

{
  *(undefined ***)this = &___7UMockWorldMetricBase__6B_;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UWorldMetricInterface::~UWorldMetricInterface((UWorldMetricInterface *)this);
  return;
}

// GetPrivateStaticClass @ 14f144610

UClass * __cdecl UMockWorldMetricG::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricG.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricG",
               &Z_Registration_Info_UClass_UMockWorldMetricG.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricG,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMockWorldMetricG>,
               InternalVTableHelperCtorCaller<UMockWorldMetricG>,local_res8,
               UMockWorldMetricBarBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricG.InnerSingleton;
}

// StaticRegisterNativesUMockWorldMetricG @ 14f145860

void __cdecl UMockWorldMetricG::StaticRegisterNativesUMockWorldMetricG(void)

{
  return;
}

