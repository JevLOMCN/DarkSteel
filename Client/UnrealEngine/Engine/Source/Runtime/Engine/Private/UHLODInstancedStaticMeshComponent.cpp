// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148a74490

UClass * __cdecl UHLODInstancedStaticMeshComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHLODInstancedStaticMeshComponent.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HLODInstancedStaticMeshComponent",
               &Z_Registration_Info_UClass_UHLODInstancedStaticMeshComponent.InnerSingleton,
               StaticRegisterNativesUHLODInstancedStaticMeshComponent,0xa00,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UHLODInstancedStaticMeshComponent>,
               InternalVTableHelperCtorCaller<UHLODInstancedStaticMeshComponent>,local_res8,
               UInstancedStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHLODInstancedStaticMeshComponent.InnerSingleton;
}

// UHLODInstancedStaticMeshComponent @ 148a7fa90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UHLODInstancedStaticMeshComponent * __thiscall
UHLODInstancedStaticMeshComponent::UHLODInstancedStaticMeshComponent
          (UHLODInstancedStaticMeshComponent *this,FVTableHelper *param_1)

{
  UInstancedStaticMeshComponent::UInstancedStaticMeshComponent
            ((UInstancedStaticMeshComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x650 = &___7UHLODInstancedStaticMeshComponent__6B_;
  return this;
}

// UHLODInstancedStaticMeshComponent @ 148a7fb10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UHLODInstancedStaticMeshComponent * __thiscall
UHLODInstancedStaticMeshComponent::UHLODInstancedStaticMeshComponent
          (UHLODInstancedStaticMeshComponent *this,FObjectInitializer *param_1)

{
  UInstancedStaticMeshComponent::UInstancedStaticMeshComponent
            ((UInstancedStaticMeshComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x650 = &___7UHLODInstancedStaticMeshComponent__6B_;
  return this;
}

// ~UHLODInstancedStaticMeshComponent @ 148a818b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UHLODInstancedStaticMeshComponent::~UHLODInstancedStaticMeshComponent
          (UHLODInstancedStaticMeshComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x650 = &___7UHLODInstancedStaticMeshComponent__6B_;
  UInstancedStaticMeshComponent::~UInstancedStaticMeshComponent
            ((UInstancedStaticMeshComponent *)this);
  return;
}

// GetPrivateStaticClass @ 148a95d20

UClass * __cdecl UHLODInstancedStaticMeshComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHLODInstancedStaticMeshComponent.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HLODInstancedStaticMeshComponent",
               &Z_Registration_Info_UClass_UHLODInstancedStaticMeshComponent.InnerSingleton,
               StaticRegisterNativesUHLODInstancedStaticMeshComponent,0xa00,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UHLODInstancedStaticMeshComponent>,
               InternalVTableHelperCtorCaller<UHLODInstancedStaticMeshComponent>,local_res8,
               UInstancedStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHLODInstancedStaticMeshComponent.InnerSingleton;
}

// StaticRegisterNativesUHLODInstancedStaticMeshComponent @ 148aa2900

void __cdecl
UHLODInstancedStaticMeshComponent::StaticRegisterNativesUHLODInstancedStaticMeshComponent(void)

{
  return;
}

