// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsTest
// Functions: 6

// StaticClass @ 14f13a610

UClass * __cdecl UMockWorldMetricFooBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricFooBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricFooBase",
               &Z_Registration_Info_UClass_UMockWorldMetricFooBase.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricFooBase,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMockWorldMetricFooBase>,
               InternalVTableHelperCtorCaller<UMockWorldMetricFooBase>,local_res8,
               UMockWorldMetricBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricFooBase.InnerSingleton;
}

// UMockWorldMetricFooBase @ 14f1407d0

UMockWorldMetricFooBase * __thiscall
UMockWorldMetricFooBase::UMockWorldMetricFooBase
          (UMockWorldMetricFooBase *this,FVTableHelper *param_1)

{
  UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UMockWorldMetricFooBase__6B_;
  return this;
}

// UMockWorldMetricFooBase @ 14f140810

UMockWorldMetricFooBase * __thiscall
UMockWorldMetricFooBase::UMockWorldMetricFooBase
          (UMockWorldMetricFooBase *this,FObjectInitializer *param_1)

{
  UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UMockWorldMetricFooBase__6B_;
  return this;
}

// ~UMockWorldMetricFooBase @ 14f1425c0

void __thiscall UMockWorldMetricFooBase::~UMockWorldMetricFooBase(UMockWorldMetricFooBase *this)

{
  *(undefined ***)this = &___7UMockWorldMetricBase__6B_;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UWorldMetricInterface::~UWorldMetricInterface((UWorldMetricInterface *)this);
  return;
}

// GetPrivateStaticClass @ 14f144550

UClass * __cdecl UMockWorldMetricFooBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricFooBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricFooBase",
               &Z_Registration_Info_UClass_UMockWorldMetricFooBase.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricFooBase,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMockWorldMetricFooBase>,
               InternalVTableHelperCtorCaller<UMockWorldMetricFooBase>,local_res8,
               UMockWorldMetricBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricFooBase.InnerSingleton;
}

// StaticRegisterNativesUMockWorldMetricFooBase @ 14f145850

void __cdecl UMockWorldMetricFooBase::StaticRegisterNativesUMockWorldMetricFooBase(void)

{
  return;
}

