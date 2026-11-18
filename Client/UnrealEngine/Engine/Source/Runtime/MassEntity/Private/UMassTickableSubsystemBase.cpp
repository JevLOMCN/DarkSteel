// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 15

// StaticClass @ 1471b4860

UClass * __cdecl UMassTickableSubsystemBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTickableSubsystemBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntity",L"MassTickableSubsystemBase",
               &Z_Registration_Info_UClass_UMassTickableSubsystemBase.InnerSingleton,
               StaticRegisterNativesUMassTickableSubsystemBase,0x50,8,
               CLASS_Intrinsic|CLASS_DefaultConfig|CLASS_Abstract,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassTickableSubsystemBase>,
               InternalVTableHelperCtorCaller<UMassTickableSubsystemBase>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTickableSubsystemBase.InnerSingleton;
}

// UMassTickableSubsystemBase @ 1471de310

UMassTickableSubsystemBase * __thiscall
UMassTickableSubsystemBase::UMassTickableSubsystemBase
          (UMassTickableSubsystemBase *this,FVTableHelper *param_1)

{
  FInitializationState *pFVar1;
  
  UTickableWorldSubsystem::UTickableWorldSubsystem((UTickableWorldSubsystem *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  pFVar1->bInitializeCalled = '\0';
  pFVar1->bOnWorldBeginPlayCalled = '\0';
  pFVar1->bPostInitializeCalled = '\0';
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  return this;
}

// UMassTickableSubsystemBase @ 1471de350

UMassTickableSubsystemBase * __thiscall
UMassTickableSubsystemBase::UMassTickableSubsystemBase(UMassTickableSubsystemBase *this)

{
  FInitializationState *pFVar1;
  
  UTickableWorldSubsystem::UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  pFVar1->bInitializeCalled = '\0';
  pFVar1->bOnWorldBeginPlayCalled = '\0';
  pFVar1->bPostInitializeCalled = '\0';
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  return this;
}

// ~UMassTickableSubsystemBase @ 1471e13a0

void __thiscall
UMassTickableSubsystemBase::~UMassTickableSubsystemBase(UMassTickableSubsystemBase *this)

{
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  UTickableWorldSubsystem::~UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  return;
}

// Deinitialize @ 147210de0

void __thiscall UMassTickableSubsystemBase::Deinitialize(UMassTickableSubsystemBase *this)

{
  this->InitializationState = (FInitializationState)0x0;
  UTickableWorldSubsystem::Deinitialize((UTickableWorldSubsystem *)this);
  return;
}

// GetPrivateStaticClass @ 147225120

UClass * __cdecl UMassTickableSubsystemBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTickableSubsystemBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntity",L"MassTickableSubsystemBase",
               &Z_Registration_Info_UClass_UMassTickableSubsystemBase.InnerSingleton,
               StaticRegisterNativesUMassTickableSubsystemBase,0x50,8,
               CLASS_Intrinsic|CLASS_DefaultConfig|CLASS_Abstract,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassTickableSubsystemBase>,
               InternalVTableHelperCtorCaller<UMassTickableSubsystemBase>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTickableSubsystemBase.InnerSingleton;
}

// HandleLateCreation @ 147229990

void __thiscall UMassTickableSubsystemBase::HandleLateCreation(UMassTickableSubsystemBase *this)

{
  UE::Mass::Private::HandleLateCreation((UWorldSubsystem *)this,this->InitializationState);
  return;
}

// Initialize @ 14722f690

void __thiscall
UMassTickableSubsystemBase::Initialize
          (UMassTickableSubsystemBase *this,FSubsystemCollectionBase *param_1)

{
  FSubsystemTypeTraits local_res8 [4];
  UObject *local_res18 [2];
  
  UTickableWorldSubsystem::Initialize((UTickableWorldSubsystem *)this,param_1);
  if ((this->InitializationState).bInitializeCalled != 0) {
    `UMassTickableSubsystemBase::Initialize'::__l2::<lambda_1>::operator()(local_res8);
  }
  (this->InitializationState).bInitializeCalled = '\x01';
  local_res18[0] = (UObject *)this->_padding_;
  local_res8[0].bGameThreadOnly = true;
  local_res8[0].bThreadSafeWrite = false;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18[0]);
  }
  UE::Mass::Subsystems::RegisterSubsystemType
            (param_1,(TSubclassOf<USubsystem>)local_res18,local_res8);
  return;
}

// OnWorldBeginPlay @ 14723a190

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
UMassTickableSubsystemBase::OnWorldBeginPlay(UMassTickableSubsystemBase *this,UWorld *param_1)

{
  undefined1 local_res8 [32];
  
  UWorldSubsystem::OnWorldBeginPlay((UWorldSubsystem *)this,param_1);
  if ((this->InitializationState).bOnWorldBeginPlayCalled != '\0') {
    `UMassTickableSubsystemBase::OnWorldBeginPlay'::__l2::<lambda_1>::operator()(local_res8);
  }
  (this->InitializationState).bOnWorldBeginPlayCalled = '\x01';
  return;
}

// PostInitialize @ 14723d2e0

void __thiscall UMassTickableSubsystemBase::PostInitialize(UMassTickableSubsystemBase *this)

{
  undefined1 local_res8 [32];
  
  UWorldSubsystem::PostInitialize((UWorldSubsystem *)this);
  if ((this->InitializationState).bPostInitializeCalled != '\0') {
    `UMassTickableSubsystemBase::PostInitialize'::__l2::<lambda_1>::operator()(local_res8);
  }
  (this->InitializationState).bPostInitializeCalled = '\x01';
  return;
}

// ShouldCreateSubsystem @ 14724dce0

bool __thiscall
UMassTickableSubsystemBase::ShouldCreateSubsystem(UMassTickableSubsystemBase *this,UObject *param_1)

{
  bool bVar1;
  
  if (UE::Mass::Private::bRuntimeSubsystemsEnabled) {
    bVar1 = UWorldSubsystem::ShouldCreateSubsystem((UWorldSubsystem *)this,param_1);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// StaticRegisterNativesUMassTickableSubsystemBase @ 1472507d0

void __cdecl UMassTickableSubsystemBase::StaticRegisterNativesUMassTickableSubsystemBase(void)

{
  return;
}

// operator() @ 150503070

bool __thiscall `UMassTickableSubsystemBase::Initialize'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_762219857381949299>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_762219857381949299>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150503240

bool __thiscall
`UMassTickableSubsystemBase::OnWorldBeginPlay'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_762219857381949271>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_762219857381949271>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150503320

bool __thiscall
`UMassTickableSubsystemBase::PostInitialize'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_762219857381949287>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_762219857381949287>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

