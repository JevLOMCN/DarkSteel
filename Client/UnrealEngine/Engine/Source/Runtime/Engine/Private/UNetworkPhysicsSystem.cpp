// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 1482c7cf0

UClass * __cdecl UNetworkPhysicsSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkPhysicsSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkPhysicsSystem",
               &Z_Registration_Info_UClass_UNetworkPhysicsSystem.InnerSingleton,
               StaticRegisterNativesUNetworkPhysicsSystem,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNetworkPhysicsSystem>,
               InternalVTableHelperCtorCaller<UNetworkPhysicsSystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkPhysicsSystem.InnerSingleton;
}

// UNetworkPhysicsSystem @ 1482db560

UNetworkPhysicsSystem * __thiscall
UNetworkPhysicsSystem::UNetworkPhysicsSystem(UNetworkPhysicsSystem *this,FVTableHelper *param_1)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this,param_1);
  *(undefined ***)this = &___7UNetworkPhysicsSystem__6B_;
  return this;
}

// UNetworkPhysicsSystem @ 1482db590

UNetworkPhysicsSystem * __thiscall
UNetworkPhysicsSystem::UNetworkPhysicsSystem(UNetworkPhysicsSystem *this)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this);
  *(undefined ***)this = &___7UNetworkPhysicsSystem__6B_;
  return this;
}

// ~UNetworkPhysicsSystem @ 1482ddf60

void __thiscall UNetworkPhysicsSystem::~UNetworkPhysicsSystem(UNetworkPhysicsSystem *this)

{
  *(undefined ***)this = &___7UNetworkPhysicsSystem__6B_;
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  return;
}

// Deinitialize @ 1482f4240

void __thiscall UNetworkPhysicsSystem::Deinitialize(UNetworkPhysicsSystem *this)

{
  return;
}

// GetPrivateStaticClass @ 14830c140

UClass * __cdecl UNetworkPhysicsSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkPhysicsSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkPhysicsSystem",
               &Z_Registration_Info_UClass_UNetworkPhysicsSystem.InnerSingleton,
               StaticRegisterNativesUNetworkPhysicsSystem,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNetworkPhysicsSystem>,
               InternalVTableHelperCtorCaller<UNetworkPhysicsSystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkPhysicsSystem.InnerSingleton;
}

// Initialize @ 14830f6f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UNetworkPhysicsSystem::Initialize(UNetworkPhysicsSystem *this,FSubsystemCollectionBase *param_1)

{
  uchar uVar1;
  code *pcVar2;
  bool bVar3;
  UWorld *pUVar4;
  
  pUVar4 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if (pUVar4 == (UWorld *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("World",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                       ,0x188,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = (pUVar4->WorldType).Value;
  if ((uVar1 == '\x03') || (uVar1 == '\x01')) {
    TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
    ::AddUObject<UNetworkPhysicsSystem>
              ((TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
                *)&FWorldDelegates::OnPostWorldInitialization,
               (UNetworkPhysicsSystem *)&stack0x00000018,(pmf_05bb2914)this);
  }
  return;
}

// OnWorldPostInit @ 148316150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UNetworkPhysicsSystem::OnWorldPostInit
          (UNetworkPhysicsSystem *this,UWorld *param_1,FWorldInitializationValues *param_2)

{
  FPBDRigidsSolver *this_00;
  UWorld *pUVar1;
  UPhysicsSettings *pUVar2;
  IRewindCallback *pIVar3;
  TUniquePtr<Chaos::IRewindCallback,TDefaultDelete<Chaos::IRewindCallback>_> local_res10 [3];
  
  pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if (((param_1 == pUVar1) &&
      (((pUVar2 = UPhysicsSettings::Get(),
        (pUVar2->PhysicsPrediction).bEnablePhysicsPrediction != false ||
        (pUVar2 = UPhysicsSettings::Get(),
        (pUVar2->PhysicsPrediction).bEnablePhysicsHistoryCapture != false)) &&
       (param_1->PhysicsScene != (FPhysScene_Chaos *)0x0)))) &&
     (this_00 = (FPBDRigidsSolver *)param_1->PhysicsScene->_padding_,
     this_00 != (FPBDRigidsSolver *)0x0)) {
    if (this_00->_padding_ == 0) {
      pIVar3 = ::operator_new(0x88);
      local_res10[0].Ptr = (IRewindCallback *)0x0;
      if (pIVar3 != (IRewindCallback *)0x0) {
        pIVar3->RewindData = (FRewindData *)0x0;
        pIVar3->_padding_ = (longlong)&___7FNetworkPhysicsCallback__6B_;
        pIVar3[1]._padding_ = 0;
        pIVar3[1].RewindData = (FRewindData *)0x0;
        pIVar3[2]._padding_ = 0;
        pIVar3[2].RewindData = (FRewindData *)&DAT_00000002;
        pIVar3[3]._padding_ = 0;
        pIVar3[3].RewindData = (FRewindData *)0x0;
        pIVar3[4]._padding_ = 0;
        pIVar3[4].RewindData = (FRewindData *)&DAT_00000002;
        pIVar3[5]._padding_ = 0;
        pIVar3[5].RewindData = (FRewindData *)0x0;
        pIVar3[6]._padding_ = 0;
        pIVar3[6].RewindData = (FRewindData *)&DAT_00000002;
        pIVar3[7]._padding_ = (longlong)param_1;
        pIVar3[7].RewindData = (FRewindData *)0x0;
        pIVar3[8]._padding_ = 0;
        local_res10[0].Ptr = pIVar3;
      }
      Chaos::FPhysicsSolverBase::SetRewindCallback((FPhysicsSolverBase *)this_00,local_res10);
      if (local_res10[0].Ptr != (IRewindCallback *)0x0) {
        (**(code **)(local_res10[0].Ptr)->_padding_)(local_res10[0].Ptr,1);
      }
    }
    pUVar2 = UPhysicsSettings::Get();
    if (((pUVar2->PhysicsPrediction).bEnablePhysicsHistoryCapture != false) &&
       (this_00->_padding_ == 0)) {
      Chaos::FPBDRigidsSolver::EnableRewindCapture(this_00);
    }
  }
  return;
}

// StaticRegisterNativesUNetworkPhysicsSystem @ 148323a90

void __cdecl UNetworkPhysicsSystem::StaticRegisterNativesUNetworkPhysicsSystem(void)

{
  return;
}

