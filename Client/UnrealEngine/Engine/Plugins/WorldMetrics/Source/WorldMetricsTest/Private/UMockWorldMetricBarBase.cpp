// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsTest
// Functions: 6

// StaticClass @ 14f13a6d0

UClass * __cdecl UMockWorldMetricBarBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricBarBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricBarBase",
               &Z_Registration_Info_UClass_UMockWorldMetricBarBase.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricBarBase,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMockWorldMetricBarBase>,
               InternalVTableHelperCtorCaller<UMockWorldMetricBarBase>,local_res8,
               UMockWorldMetricBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricBarBase.InnerSingleton;
}

// UMockWorldMetricBarBase @ 14f1404d0

UMockWorldMetricBarBase * __thiscall
UMockWorldMetricBarBase::UMockWorldMetricBarBase
          (UMockWorldMetricBarBase *this,FVTableHelper *param_1)

{
  UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UMockWorldMetricBarBase__6B_;
  return this;
}

// UMockWorldMetricBarBase @ 14f140510

UMockWorldMetricBarBase * __thiscall
UMockWorldMetricBarBase::UMockWorldMetricBarBase
          (UMockWorldMetricBarBase *this,FObjectInitializer *param_1)

{
  UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UMockWorldMetricBarBase__6B_;
  return this;
}

// ~UMockWorldMetricBarBase @ 14f142440

void __thiscall UMockWorldMetricBarBase::~UMockWorldMetricBarBase(UMockWorldMetricBarBase *this)

{
  *(undefined ***)this = &___7UMockWorldMetricBase__6B_;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UWorldMetricInterface::~UWorldMetricInterface((UWorldMetricInterface *)this);
  return;
}

// GetPrivateStaticClass @ 14f1440d0

UClass * __cdecl UMockWorldMetricBarBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricBarBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricBarBase",
               &Z_Registration_Info_UClass_UMockWorldMetricBarBase.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricBarBase,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMockWorldMetricBarBase>,
               InternalVTableHelperCtorCaller<UMockWorldMetricBarBase>,local_res8,
               UMockWorldMetricBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricBarBase.InnerSingleton;
}

// StaticRegisterNativesUMockWorldMetricBarBase @ 14f1457f0

void __cdecl UMockWorldMetricBarBase::StaticRegisterNativesUMockWorldMetricBarBase(void)

{
  return;
}

