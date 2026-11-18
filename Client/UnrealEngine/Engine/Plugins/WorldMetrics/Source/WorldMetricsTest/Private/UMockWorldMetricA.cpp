// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsTest
// Functions: 6

// StaticClass @ 14f13a790

UClass * __cdecl UMockWorldMetricA::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricA.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricA",
               &Z_Registration_Info_UClass_UMockWorldMetricA.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricA,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMockWorldMetricA>,
               InternalVTableHelperCtorCaller<UMockWorldMetricA>,local_res8,
               UMockWorldMetricFooBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricA.InnerSingleton;
}

// UMockWorldMetricA @ 14f1403d0

UMockWorldMetricA * __thiscall
UMockWorldMetricA::UMockWorldMetricA(UMockWorldMetricA *this,FVTableHelper *param_1)

{
  UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UMockWorldMetricA__6B_;
  return this;
}

// UMockWorldMetricA @ 14f140410

UMockWorldMetricA * __thiscall
UMockWorldMetricA::UMockWorldMetricA(UMockWorldMetricA *this,FObjectInitializer *param_1)

{
  UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UMockWorldMetricA__6B_;
  return this;
}

// ~UMockWorldMetricA @ 14f1423c0

void __thiscall UMockWorldMetricA::~UMockWorldMetricA(UMockWorldMetricA *this)

{
  *(undefined ***)this = &___7UMockWorldMetricBase__6B_;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UWorldMetricInterface::~UWorldMetricInterface((UWorldMetricInterface *)this);
  return;
}

// GetPrivateStaticClass @ 14f143f50

UClass * __cdecl UMockWorldMetricA::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricA.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricA",
               &Z_Registration_Info_UClass_UMockWorldMetricA.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricA,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMockWorldMetricA>,
               InternalVTableHelperCtorCaller<UMockWorldMetricA>,local_res8,
               UMockWorldMetricFooBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricA.InnerSingleton;
}

// StaticRegisterNativesUMockWorldMetricA @ 14f1457d0

void __cdecl UMockWorldMetricA::StaticRegisterNativesUMockWorldMetricA(void)

{
  return;
}

