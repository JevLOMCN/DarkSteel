// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b4fe340

UClass * __cdecl UDS_MultiHitCapsuleComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MultiHitCapsuleComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MultiHitCapsuleComponent",
               &Z_Registration_Info_UClass_UDS_MultiHitCapsuleComponent.InnerSingleton,
               StaticRegisterNativesUDS_MultiHitCapsuleComponent,0x570,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MultiHitCapsuleComponent>,
               InternalVTableHelperCtorCaller<UDS_MultiHitCapsuleComponent>,local_res8,
               UCapsuleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MultiHitCapsuleComponent.InnerSingleton;
}

// UDS_MultiHitCapsuleComponent @ 14b501920

UDS_MultiHitCapsuleComponent * __thiscall
UDS_MultiHitCapsuleComponent::UDS_MultiHitCapsuleComponent
          (UDS_MultiHitCapsuleComponent *this,FVTableHelper *param_1)

{
  UCapsuleComponent::UCapsuleComponent((UCapsuleComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  return this;
}

// UDS_MultiHitCapsuleComponent @ 14b501990

UDS_MultiHitCapsuleComponent * __thiscall
UDS_MultiHitCapsuleComponent::UDS_MultiHitCapsuleComponent
          (UDS_MultiHitCapsuleComponent *this,FObjectInitializer *param_1)

{
  UCapsuleComponent::UCapsuleComponent((UCapsuleComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  return this;
}

// ~UDS_MultiHitCapsuleComponent @ 14b5028a0

void __thiscall
UDS_MultiHitCapsuleComponent::~UDS_MultiHitCapsuleComponent(UDS_MultiHitCapsuleComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  UCapsuleComponent::~UCapsuleComponent((UCapsuleComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14b504dd0

UClass * __cdecl UDS_MultiHitCapsuleComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MultiHitCapsuleComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MultiHitCapsuleComponent",
               &Z_Registration_Info_UClass_UDS_MultiHitCapsuleComponent.InnerSingleton,
               StaticRegisterNativesUDS_MultiHitCapsuleComponent,0x570,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MultiHitCapsuleComponent>,
               InternalVTableHelperCtorCaller<UDS_MultiHitCapsuleComponent>,local_res8,
               UCapsuleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MultiHitCapsuleComponent.InnerSingleton;
}

// StaticRegisterNativesUDS_MultiHitCapsuleComponent @ 14b505bc0

void __cdecl UDS_MultiHitCapsuleComponent::StaticRegisterNativesUDS_MultiHitCapsuleComponent(void)

{
  return;
}

