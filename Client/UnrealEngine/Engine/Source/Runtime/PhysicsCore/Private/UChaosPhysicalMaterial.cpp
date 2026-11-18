// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 7

// StaticClass @ 144135120

UClass * __cdecl UChaosPhysicalMaterial::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosPhysicalMaterial.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PhysicsCore",L"ChaosPhysicalMaterial",
               &Z_Registration_Info_UClass_UChaosPhysicalMaterial.InnerSingleton,
               StaticRegisterNativesUChaosPhysicalMaterial,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UChaosPhysicalMaterial>,
               InternalVTableHelperCtorCaller<UChaosPhysicalMaterial>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosPhysicalMaterial.InnerSingleton;
}

// UChaosPhysicalMaterial @ 1441a0aa0

UChaosPhysicalMaterial * __thiscall
UChaosPhysicalMaterial::UChaosPhysicalMaterial(UChaosPhysicalMaterial *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UChaosPhysicalMaterial__6B_;
  return this;
}

// UChaosPhysicalMaterial @ 1441a0ad0

UChaosPhysicalMaterial * __thiscall
UChaosPhysicalMaterial::UChaosPhysicalMaterial
          (UChaosPhysicalMaterial *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->Friction = 0.5;
  this->StaticFriction = 0.0;
  this->_padding_ = (longlong)&___7UChaosPhysicalMaterial__6B_;
  this->AngularEtherDrag = 0.0;
  this->Restitution = 0.1;
  this->LinearEtherDrag = 0.0;
  this->SleepingAngularVelocityThreshold = 1.0;
  this->SleepingLinearVelocityThreshold = 1.0;
  return this;
}

// ~UChaosPhysicalMaterial @ 1441a1c30

void __thiscall UChaosPhysicalMaterial::~UChaosPhysicalMaterial(UChaosPhysicalMaterial *this)

{
  this->_padding_ = (longlong)&___7UChaosPhysicalMaterial__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CopyTo @ 1441a75e0

void __thiscall
UChaosPhysicalMaterial::CopyTo(UChaosPhysicalMaterial *this,FChaosPhysicsMaterial *param_1)

{
  param_1->Friction = (double)this->Friction;
  param_1->StaticFriction = (double)this->StaticFriction;
  param_1->Restitution = (double)this->Restitution;
  param_1->LinearEtherDrag = (double)this->LinearEtherDrag;
  param_1->AngularEtherDrag = (double)this->AngularEtherDrag;
  param_1->SleepingLinearThreshold = (double)this->SleepingLinearVelocityThreshold;
  param_1->SleepingAngularThreshold = (double)this->SleepingAngularVelocityThreshold;
  return;
}

// GetPrivateStaticClass @ 1441af2d0

UClass * __cdecl UChaosPhysicalMaterial::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosPhysicalMaterial.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PhysicsCore",L"ChaosPhysicalMaterial",
               &Z_Registration_Info_UClass_UChaosPhysicalMaterial.InnerSingleton,
               StaticRegisterNativesUChaosPhysicalMaterial,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UChaosPhysicalMaterial>,
               InternalVTableHelperCtorCaller<UChaosPhysicalMaterial>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosPhysicalMaterial.InnerSingleton;
}

// StaticRegisterNativesUChaosPhysicalMaterial @ 1441ba9d0

void __cdecl UChaosPhysicalMaterial::StaticRegisterNativesUChaosPhysicalMaterial(void)

{
  return;
}

