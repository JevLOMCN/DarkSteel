// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsTest
// Functions: 6

// StaticClass @ 14f13bee0

UClass * __cdecl UMockWorldMetricsExtensionC::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricsExtensionC",
               &Z_Registration_Info_UClass_UMockWorldMetricsExtensionC.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricsExtensionC,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMockWorldMetricsExtensionC>,
               InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionC>,local_res8,
               UMockWorldMetricsExtensionBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionC.InnerSingleton;
}

// UMockWorldMetricsExtensionC @ 14f140bd0

UMockWorldMetricsExtensionC * __thiscall
UMockWorldMetricsExtensionC::UMockWorldMetricsExtensionC
          (UMockWorldMetricsExtensionC *this,FVTableHelper *param_1)

{
  UWorldMetricsExtension::UWorldMetricsExtension((UWorldMetricsExtension *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UMockWorldMetricsExtensionC__6B_;
  return this;
}

// UMockWorldMetricsExtensionC @ 14f140c10

UMockWorldMetricsExtensionC * __thiscall
UMockWorldMetricsExtensionC::UMockWorldMetricsExtensionC
          (UMockWorldMetricsExtensionC *this,FObjectInitializer *param_1)

{
  UWorldMetricsExtension::UWorldMetricsExtension((UWorldMetricsExtension *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UMockWorldMetricsExtensionC__6B_;
  return this;
}

// ~UMockWorldMetricsExtensionC @ 14f142760

void __thiscall
UMockWorldMetricsExtensionC::~UMockWorldMetricsExtensionC(UMockWorldMetricsExtensionC *this)

{
  *(undefined ***)this = &___7UMockWorldMetricsExtensionBase__6B_;
  UWorldMetricsExtension::~UWorldMetricsExtension((UWorldMetricsExtension *)this);
  return;
}

// GetPrivateStaticClass @ 14f144b50

UClass * __cdecl UMockWorldMetricsExtensionC::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricsExtensionC",
               &Z_Registration_Info_UClass_UMockWorldMetricsExtensionC.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricsExtensionC,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMockWorldMetricsExtensionC>,
               InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionC>,local_res8,
               UMockWorldMetricsExtensionBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionC.InnerSingleton;
}

// StaticRegisterNativesUMockWorldMetricsExtensionC @ 14f1458d0

void __cdecl UMockWorldMetricsExtensionC::StaticRegisterNativesUMockWorldMetricsExtensionC(void)

{
  return;
}

