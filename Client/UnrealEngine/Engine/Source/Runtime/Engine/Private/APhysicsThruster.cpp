// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1482cab00

UClass * __cdecl APhysicsThruster::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APhysicsThruster.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsThruster",
               &Z_Registration_Info_UClass_APhysicsThruster.InnerSingleton,
               StaticRegisterNativesAPhysicsThruster,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<APhysicsThruster>,
               InternalVTableHelperCtorCaller<APhysicsThruster>,local_res8,
               ARigidBodyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APhysicsThruster.InnerSingleton;
}

// APhysicsThruster @ 1482d82e0

APhysicsThruster * __thiscall
APhysicsThruster::APhysicsThruster(APhysicsThruster *this,FVTableHelper *param_1)

{
  ARigidBodyBase::ARigidBodyBase((ARigidBodyBase *)this,param_1);
  this->_padding_ = (longlong)&___7APhysicsThruster__6B_;
  (this->ThrusterComponent).field0_0x0.DebugPtr = (UPhysicsThrusterComponent *)0x0;
  return this;
}

// APhysicsThruster @ 1482d8320

APhysicsThruster * __thiscall
APhysicsThruster::APhysicsThruster(APhysicsThruster *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UPhysicsThrusterComponent *pUVar4;
  FName local_res8;
  
  ARigidBodyBase::ARigidBodyBase((ARigidBodyBase *)this,param_1);
  this->_padding_ = (longlong)&___7APhysicsThruster__6B_;
  (this->ThrusterComponent).field0_0x0.DebugPtr = (UPhysicsThrusterComponent *)0x0;
  pFVar2 = ::FName::FName(&local_res8,L"Thruster0");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_UPhysicsThrusterComponent_NoRegister();
  pUVar4 = (UPhysicsThrusterComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UPhysicsThrusterComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->ThrusterComponent).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UPhysicsThrusterComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  this->_padding_ = (longlong)(this->ThrusterComponent).field0_0x0;
  return this;
}

// ~APhysicsThruster @ 1482dd8e0

void __thiscall APhysicsThruster::~APhysicsThruster(APhysicsThruster *this)

{
  this->_padding_ = (longlong)&___7APhysicsThruster__6B_;
  ARigidBodyBase::~ARigidBodyBase((ARigidBodyBase *)this);
  return;
}

// GetPrivateStaticClass @ 14830be40

UClass * __cdecl APhysicsThruster::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APhysicsThruster.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsThruster",
               &Z_Registration_Info_UClass_APhysicsThruster.InnerSingleton,
               StaticRegisterNativesAPhysicsThruster,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<APhysicsThruster>,
               InternalVTableHelperCtorCaller<APhysicsThruster>,local_res8,
               ARigidBodyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APhysicsThruster.InnerSingleton;
}

// StaticRegisterNativesAPhysicsThruster @ 1483239f0

void __cdecl APhysicsThruster::StaticRegisterNativesAPhysicsThruster(void)

{
  return;
}

