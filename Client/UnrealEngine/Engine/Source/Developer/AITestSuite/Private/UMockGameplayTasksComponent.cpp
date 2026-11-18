// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 6

// StaticClass @ 146ff69d0

UClass * __cdecl UMockGameplayTasksComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockGameplayTasksComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"MockGameplayTasksComponent",
               &Z_Registration_Info_UClass_UMockGameplayTasksComponent.InnerSingleton,
               StaticRegisterNativesUMockGameplayTasksComponent,0x150,8,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<UMockGameplayTasksComponent>,
               InternalVTableHelperCtorCaller<UMockGameplayTasksComponent>,local_res8,
               UGameplayTasksComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockGameplayTasksComponent.InnerSingleton;
}

// UMockGameplayTasksComponent @ 14704a430

UMockGameplayTasksComponent * __thiscall
UMockGameplayTasksComponent::UMockGameplayTasksComponent
          (UMockGameplayTasksComponent *this,FVTableHelper *param_1)

{
  UGameplayTasksComponent::UGameplayTasksComponent((UGameplayTasksComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__IGameplayTaskOwnerInterface__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IVisualLoggerDebugSnapshotInterface__;
  return this;
}

// UMockGameplayTasksComponent @ 14704a490

UMockGameplayTasksComponent * __thiscall
UMockGameplayTasksComponent::UMockGameplayTasksComponent
          (UMockGameplayTasksComponent *this,FObjectInitializer *param_1)

{
  UGameplayTasksComponent::UGameplayTasksComponent((UGameplayTasksComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__IGameplayTaskOwnerInterface__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IVisualLoggerDebugSnapshotInterface__;
  return this;
}

// ~UMockGameplayTasksComponent @ 14704b930

void __thiscall
UMockGameplayTasksComponent::~UMockGameplayTasksComponent(UMockGameplayTasksComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__IGameplayTaskOwnerInterface__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IVisualLoggerDebugSnapshotInterface__;
  UGameplayTasksComponent::~UGameplayTasksComponent((UGameplayTasksComponent *)this);
  return;
}

// GetPrivateStaticClass @ 147052570

UClass * __cdecl UMockGameplayTasksComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockGameplayTasksComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"MockGameplayTasksComponent",
               &Z_Registration_Info_UClass_UMockGameplayTasksComponent.InnerSingleton,
               StaticRegisterNativesUMockGameplayTasksComponent,0x150,8,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<UMockGameplayTasksComponent>,
               InternalVTableHelperCtorCaller<UMockGameplayTasksComponent>,local_res8,
               UGameplayTasksComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockGameplayTasksComponent.InnerSingleton;
}

// StaticRegisterNativesUMockGameplayTasksComponent @ 147059930

void __cdecl UMockGameplayTasksComponent::StaticRegisterNativesUMockGameplayTasksComponent(void)

{
  return;
}

