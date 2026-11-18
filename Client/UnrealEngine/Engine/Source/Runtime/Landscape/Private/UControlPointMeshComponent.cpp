// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 7

// StaticClass @ 145ef04b0

UClass * __cdecl UControlPointMeshComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlPointMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"ControlPointMeshComponent",
               &Z_Registration_Info_UClass_UControlPointMeshComponent.InnerSingleton,
               StaticRegisterNativesUControlPointMeshComponent,0x660,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UControlPointMeshComponent>,
               InternalVTableHelperCtorCaller<UControlPointMeshComponent>,local_res8,
               UStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlPointMeshComponent.InnerSingleton;
}

// UControlPointMeshComponent @ 145ef39c0

UControlPointMeshComponent * __thiscall
UControlPointMeshComponent::UControlPointMeshComponent
          (UControlPointMeshComponent *this,FVTableHelper *param_1)

{
  UStaticMeshComponent::UStaticMeshComponent((UStaticMeshComponent *)this,param_1);
  this->VirtualTextureMainPassMaxDrawDistance = 0.0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  return this;
}

// ~UControlPointMeshComponent @ 145ef4200

void __thiscall
UControlPointMeshComponent::~UControlPointMeshComponent(UControlPointMeshComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  UStaticMeshComponent::~UStaticMeshComponent((UStaticMeshComponent *)this);
  return;
}

// GetPrivateStaticClass @ 145ef54e0

UClass * __cdecl UControlPointMeshComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlPointMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"ControlPointMeshComponent",
               &Z_Registration_Info_UClass_UControlPointMeshComponent.InnerSingleton,
               StaticRegisterNativesUControlPointMeshComponent,0x660,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UControlPointMeshComponent>,
               InternalVTableHelperCtorCaller<UControlPointMeshComponent>,local_res8,
               UStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlPointMeshComponent.InnerSingleton;
}

// GetVirtualTextureMainPassMaxDrawDistance @ 145ef5ea0

float __thiscall
UControlPointMeshComponent::GetVirtualTextureMainPassMaxDrawDistance
          (UControlPointMeshComponent *this)

{
  return this->VirtualTextureMainPassMaxDrawDistance;
}

// StaticRegisterNativesUControlPointMeshComponent @ 145ef5ff0

void __cdecl UControlPointMeshComponent::StaticRegisterNativesUControlPointMeshComponent(void)

{
  return;
}

// UControlPointMeshComponent @ 145fb51f0

UControlPointMeshComponent * __thiscall
UControlPointMeshComponent::UControlPointMeshComponent
          (UControlPointMeshComponent *this,FObjectInitializer *param_1)

{
  UStaticMeshComponent::UStaticMeshComponent((UStaticMeshComponent *)this,param_1);
  this->VirtualTextureMainPassMaxDrawDistance = 0.0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  UStaticMeshComponent::SetCollisionProfileName
            ((UStaticMeshComponent *)this,UCollisionProfile::BlockAll_ProfileName,true);
  this->field_0x1ab = 0;
  return this;
}

