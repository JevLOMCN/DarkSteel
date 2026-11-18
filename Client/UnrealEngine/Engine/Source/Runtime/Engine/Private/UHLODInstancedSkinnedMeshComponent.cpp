// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148a73550

UClass * __cdecl UHLODInstancedSkinnedMeshComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHLODInstancedSkinnedMeshComponent.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HLODInstancedSkinnedMeshComponent",
               &Z_Registration_Info_UClass_UHLODInstancedSkinnedMeshComponent.InnerSingleton,
               StaticRegisterNativesUHLODInstancedSkinnedMeshComponent,0xad0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UHLODInstancedSkinnedMeshComponent>,
               InternalVTableHelperCtorCaller<UHLODInstancedSkinnedMeshComponent>,local_res8,
               UInstancedSkinnedMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHLODInstancedSkinnedMeshComponent.InnerSingleton;
}

// UHLODInstancedSkinnedMeshComponent @ 148a7f970

UHLODInstancedSkinnedMeshComponent * __thiscall
UHLODInstancedSkinnedMeshComponent::UHLODInstancedSkinnedMeshComponent
          (UHLODInstancedSkinnedMeshComponent *this,FVTableHelper *param_1)

{
  UInstancedSkinnedMeshComponent::UInstancedSkinnedMeshComponent
            ((UInstancedSkinnedMeshComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x590 = &_vftable__for__ILODSyncInterface__;
  *(undefined ***)&this->field_0x598 = &_vftable__for__IClothSimulationDataProvider__;
  return this;
}

// UHLODInstancedSkinnedMeshComponent @ 148a7fa00

UHLODInstancedSkinnedMeshComponent * __thiscall
UHLODInstancedSkinnedMeshComponent::UHLODInstancedSkinnedMeshComponent
          (UHLODInstancedSkinnedMeshComponent *this,FObjectInitializer *param_1)

{
  UInstancedSkinnedMeshComponent::UInstancedSkinnedMeshComponent
            ((UInstancedSkinnedMeshComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x590 = &_vftable__for__ILODSyncInterface__;
  *(undefined ***)&this->field_0x598 = &_vftable__for__IClothSimulationDataProvider__;
  return this;
}

// ~UHLODInstancedSkinnedMeshComponent @ 148a81830

void __thiscall
UHLODInstancedSkinnedMeshComponent::~UHLODInstancedSkinnedMeshComponent
          (UHLODInstancedSkinnedMeshComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x590 = &_vftable__for__ILODSyncInterface__;
  *(undefined ***)&this->field_0x598 = &_vftable__for__IClothSimulationDataProvider__;
  UInstancedSkinnedMeshComponent::~UInstancedSkinnedMeshComponent
            ((UInstancedSkinnedMeshComponent *)this);
  return;
}

// GetPrivateStaticClass @ 148a95c60

UClass * __cdecl UHLODInstancedSkinnedMeshComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHLODInstancedSkinnedMeshComponent.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HLODInstancedSkinnedMeshComponent",
               &Z_Registration_Info_UClass_UHLODInstancedSkinnedMeshComponent.InnerSingleton,
               StaticRegisterNativesUHLODInstancedSkinnedMeshComponent,0xad0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UHLODInstancedSkinnedMeshComponent>,
               InternalVTableHelperCtorCaller<UHLODInstancedSkinnedMeshComponent>,local_res8,
               UInstancedSkinnedMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHLODInstancedSkinnedMeshComponent.InnerSingleton;
}

// StaticRegisterNativesUHLODInstancedSkinnedMeshComponent @ 148aa28f0

void __cdecl
UHLODInstancedSkinnedMeshComponent::StaticRegisterNativesUHLODInstancedSkinnedMeshComponent(void)

{
  return;
}

