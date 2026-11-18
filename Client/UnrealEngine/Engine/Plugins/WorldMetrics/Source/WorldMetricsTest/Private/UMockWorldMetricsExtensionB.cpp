// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsTest
// Functions: 6

// StaticClass @ 14f13bb90

UClass * __cdecl UMockWorldMetricsExtensionB::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionB.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricsExtensionB",
               &Z_Registration_Info_UClass_UMockWorldMetricsExtensionB.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricsExtensionB,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMockWorldMetricsExtensionB>,
               InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionB>,local_res8,
               UMockWorldMetricsExtensionBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionB.InnerSingleton;
}

// UMockWorldMetricsExtensionB @ 14f140ad0

UMockWorldMetricsExtensionB * __thiscall
UMockWorldMetricsExtensionB::UMockWorldMetricsExtensionB
          (UMockWorldMetricsExtensionB *this,FVTableHelper *param_1)

{
  UWorldMetricsExtension::UWorldMetricsExtension((UWorldMetricsExtension *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UMockWorldMetricsExtensionB__6B_;
  return this;
}

// UMockWorldMetricsExtensionB @ 14f140b10

UMockWorldMetricsExtensionB * __thiscall
UMockWorldMetricsExtensionB::UMockWorldMetricsExtensionB
          (UMockWorldMetricsExtensionB *this,FObjectInitializer *param_1)

{
  UWorldMetricsExtension::UWorldMetricsExtension((UWorldMetricsExtension *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UMockWorldMetricsExtensionB__6B_;
  return this;
}

// ~UMockWorldMetricsExtensionB @ 14f142720

void __thiscall
UMockWorldMetricsExtensionB::~UMockWorldMetricsExtensionB(UMockWorldMetricsExtensionB *this)

{
  *(undefined ***)this = &___7UMockWorldMetricsExtensionBase__6B_;
  UWorldMetricsExtension::~UWorldMetricsExtension((UWorldMetricsExtension *)this);
  return;
}

// GetPrivateStaticClass @ 14f1449d0

UClass * __cdecl UMockWorldMetricsExtensionB::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionB.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricsExtensionB",
               &Z_Registration_Info_UClass_UMockWorldMetricsExtensionB.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricsExtensionB,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMockWorldMetricsExtensionB>,
               InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionB>,local_res8,
               UMockWorldMetricsExtensionBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionB.InnerSingleton;
}

// StaticRegisterNativesUMockWorldMetricsExtensionB @ 14f1458b0

void __cdecl UMockWorldMetricsExtensionB::StaticRegisterNativesUMockWorldMetricsExtensionB(void)

{
  return;
}

