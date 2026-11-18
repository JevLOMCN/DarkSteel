// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsTest
// Functions: 6

// StaticClass @ 14f13c510

UClass * __cdecl UMockWorldMetricsExtensionG::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionG.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricsExtensionG",
               &Z_Registration_Info_UClass_UMockWorldMetricsExtensionG.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricsExtensionG,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMockWorldMetricsExtensionG>,
               InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionG>,local_res8,
               UMockWorldMetricsExtensionBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionG.InnerSingleton;
}

// UMockWorldMetricsExtensionG @ 14f140dd0

UMockWorldMetricsExtensionG * __thiscall
UMockWorldMetricsExtensionG::UMockWorldMetricsExtensionG
          (UMockWorldMetricsExtensionG *this,FVTableHelper *param_1)

{
  UWorldMetricsExtension::UWorldMetricsExtension((UWorldMetricsExtension *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UMockWorldMetricsExtensionG__6B_;
  return this;
}

// UMockWorldMetricsExtensionG @ 14f140e10

UMockWorldMetricsExtensionG * __thiscall
UMockWorldMetricsExtensionG::UMockWorldMetricsExtensionG
          (UMockWorldMetricsExtensionG *this,FObjectInitializer *param_1)

{
  UWorldMetricsExtension::UWorldMetricsExtension((UWorldMetricsExtension *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UMockWorldMetricsExtensionG__6B_;
  return this;
}

// ~UMockWorldMetricsExtensionG @ 14f1427e0

void __thiscall
UMockWorldMetricsExtensionG::~UMockWorldMetricsExtensionG(UMockWorldMetricsExtensionG *this)

{
  *(undefined ***)this = &___7UMockWorldMetricsExtensionBase__6B_;
  UWorldMetricsExtension::~UWorldMetricsExtension((UWorldMetricsExtension *)this);
  return;
}

// GetPrivateStaticClass @ 14f144e50

UClass * __cdecl UMockWorldMetricsExtensionG::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionG.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricsExtensionG",
               &Z_Registration_Info_UClass_UMockWorldMetricsExtensionG.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricsExtensionG,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMockWorldMetricsExtensionG>,
               InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionG>,local_res8,
               UMockWorldMetricsExtensionBase::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionG.InnerSingleton;
}

// StaticRegisterNativesUMockWorldMetricsExtensionG @ 14f145910

void __cdecl UMockWorldMetricsExtensionG::StaticRegisterNativesUMockWorldMetricsExtensionG(void)

{
  return;
}

