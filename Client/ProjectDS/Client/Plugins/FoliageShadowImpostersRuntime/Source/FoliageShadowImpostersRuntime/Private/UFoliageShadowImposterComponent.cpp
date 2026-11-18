// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FoliageShadowImpostersRuntime
// Functions: 6

// StaticClass @ 14de39360

UClass * __cdecl UFoliageShadowImposterComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFoliageShadowImposterComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FoliageShadowImpostersRuntime",L"FoliageShadowImposterComponent",
               &Z_Registration_Info_UClass_UFoliageShadowImposterComponent.InnerSingleton,
               StaticRegisterNativesUFoliageShadowImposterComponent,0xbe0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UFoliageShadowImposterComponent>,
               InternalVTableHelperCtorCaller<UFoliageShadowImposterComponent>,local_res8,
               UFoliageInstancedStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFoliageShadowImposterComponent.InnerSingleton;
}

// UFoliageShadowImposterComponent @ 14de396a0

UFoliageShadowImposterComponent * __thiscall
UFoliageShadowImposterComponent::UFoliageShadowImposterComponent
          (UFoliageShadowImposterComponent *this,FVTableHelper *param_1)

{
  UFoliageInstancedStaticMeshComponent::UFoliageInstancedStaticMeshComponent
            ((UFoliageInstancedStaticMeshComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x650 = &___7UFoliageShadowImposterComponent__6B_;
  return this;
}

// UFoliageShadowImposterComponent @ 14de39720

UFoliageShadowImposterComponent * __thiscall
UFoliageShadowImposterComponent::UFoliageShadowImposterComponent
          (UFoliageShadowImposterComponent *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UFoliageInstancedStaticMeshComponent::UFoliageInstancedStaticMeshComponent
            ((UFoliageInstancedStaticMeshComponent *)this,pFVar1);
  this->field_0x27e = this->field_0x27e | 1;
  this->field_0x1a9 = this->field_0x1a9 | 8;
  this->field_0x27f = this->field_0x27f | 0x20;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x650 = &___7UFoliageShadowImposterComponent__6B_;
  return this;
}

// ~UFoliageShadowImposterComponent @ 14de397c0

void __thiscall
UFoliageShadowImposterComponent::~UFoliageShadowImposterComponent
          (UFoliageShadowImposterComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x650 = &___7UFoliageShadowImposterComponent__6B_;
  UFoliageInstancedStaticMeshComponent::~UFoliageInstancedStaticMeshComponent
            ((UFoliageInstancedStaticMeshComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14de39960

UClass * __cdecl UFoliageShadowImposterComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFoliageShadowImposterComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FoliageShadowImpostersRuntime",L"FoliageShadowImposterComponent",
               &Z_Registration_Info_UClass_UFoliageShadowImposterComponent.InnerSingleton,
               StaticRegisterNativesUFoliageShadowImposterComponent,0xbe0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UFoliageShadowImposterComponent>,
               InternalVTableHelperCtorCaller<UFoliageShadowImposterComponent>,local_res8,
               UFoliageInstancedStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFoliageShadowImposterComponent.InnerSingleton;
}

// StaticRegisterNativesUFoliageShadowImposterComponent @ 14de39a50

void __cdecl
UFoliageShadowImposterComponent::StaticRegisterNativesUFoliageShadowImposterComponent(void)

{
  return;
}

