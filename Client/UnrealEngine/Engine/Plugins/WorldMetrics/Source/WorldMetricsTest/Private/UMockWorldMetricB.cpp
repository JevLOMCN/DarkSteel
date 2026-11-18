// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsTest
// Functions: 6

// StaticClass @ 14f13a850

UClass * __cdecl UMockWorldMetricB::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricB.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricB",
               &Z_Registration_Info_UClass_UMockWorldMetricB.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricB,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMockWorldMetricB>,
               InternalVTableHelperCtorCaller<UMockWorldMetricB>,local_res8,
               UMockWorldMetricFooBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricB.InnerSingleton;
}

// UMockWorldMetricB @ 14f140450

UMockWorldMetricB * __thiscall
UMockWorldMetricB::UMockWorldMetricB(UMockWorldMetricB *this,FVTableHelper *param_1)

{
  UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UMockWorldMetricB__6B_;
  return this;
}

// UMockWorldMetricB @ 14f140490

UMockWorldMetricB * __thiscall
UMockWorldMetricB::UMockWorldMetricB(UMockWorldMetricB *this,FObjectInitializer *param_1)

{
  UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UMockWorldMetricB__6B_;
  return this;
}

// ~UMockWorldMetricB @ 14f142400

void __thiscall UMockWorldMetricB::~UMockWorldMetricB(UMockWorldMetricB *this)

{
  *(undefined ***)this = &___7UMockWorldMetricBase__6B_;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UWorldMetricInterface::~UWorldMetricInterface((UWorldMetricInterface *)this);
  return;
}

// GetPrivateStaticClass @ 14f144010

UClass * __cdecl UMockWorldMetricB::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricB.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricB",
               &Z_Registration_Info_UClass_UMockWorldMetricB.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricB,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMockWorldMetricB>,
               InternalVTableHelperCtorCaller<UMockWorldMetricB>,local_res8,
               UMockWorldMetricFooBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricB.InnerSingleton;
}

// StaticRegisterNativesUMockWorldMetricB @ 14f1457e0

void __cdecl UMockWorldMetricB::StaticRegisterNativesUMockWorldMetricB(void)

{
  return;
}

