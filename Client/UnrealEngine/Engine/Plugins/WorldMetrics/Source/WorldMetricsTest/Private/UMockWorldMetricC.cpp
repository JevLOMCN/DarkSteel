// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsTest
// Functions: 6

// StaticClass @ 14f13abf0

UClass * __cdecl UMockWorldMetricC::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricC",
               &Z_Registration_Info_UClass_UMockWorldMetricC.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricC,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMockWorldMetricC>,
               InternalVTableHelperCtorCaller<UMockWorldMetricC>,local_res8,
               UMockWorldMetricFooBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricC.InnerSingleton;
}

// UMockWorldMetricC @ 14f1405d0

UMockWorldMetricC * __thiscall
UMockWorldMetricC::UMockWorldMetricC(UMockWorldMetricC *this,FVTableHelper *param_1)

{
  UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UMockWorldMetricC__6B_;
  return this;
}

// UMockWorldMetricC @ 14f140610

UMockWorldMetricC * __thiscall
UMockWorldMetricC::UMockWorldMetricC(UMockWorldMetricC *this,FObjectInitializer *param_1)

{
  UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UMockWorldMetricC__6B_;
  return this;
}

// ~UMockWorldMetricC @ 14f1424c0

void __thiscall UMockWorldMetricC::~UMockWorldMetricC(UMockWorldMetricC *this)

{
  *(undefined ***)this = &___7UMockWorldMetricBase__6B_;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UWorldMetricInterface::~UWorldMetricInterface((UWorldMetricInterface *)this);
  return;
}

// GetPrivateStaticClass @ 14f144250

UClass * __cdecl UMockWorldMetricC::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricC",
               &Z_Registration_Info_UClass_UMockWorldMetricC.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricC,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMockWorldMetricC>,
               InternalVTableHelperCtorCaller<UMockWorldMetricC>,local_res8,
               UMockWorldMetricFooBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricC.InnerSingleton;
}

// StaticRegisterNativesUMockWorldMetricC @ 14f145810

void __cdecl UMockWorldMetricC::StaticRegisterNativesUMockWorldMetricC(void)

{
  return;
}

