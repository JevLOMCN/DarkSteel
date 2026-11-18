// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 15

// UMassSubsystemBase @ 1471de2b0

UMassSubsystemBase * __thiscall
UMassSubsystemBase::UMassSubsystemBase(UMassSubsystemBase *this,FVTableHelper *param_1)

{
  FInitializationState *pFVar1;
  
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMassSubsystemBase__6B_;
  pFVar1->bInitializeCalled = '\0';
  pFVar1->bOnWorldBeginPlayCalled = '\0';
  pFVar1->bPostInitializeCalled = '\0';
  return this;
}

// UMassSubsystemBase @ 1471de2e0

UMassSubsystemBase * __thiscall UMassSubsystemBase::UMassSubsystemBase(UMassSubsystemBase *this)

{
  FInitializationState *pFVar1;
  
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this);
  this->_padding_ = (longlong)&___7UMassSubsystemBase__6B_;
  pFVar1->bInitializeCalled = '\0';
  pFVar1->bOnWorldBeginPlayCalled = '\0';
  pFVar1->bPostInitializeCalled = '\0';
  return this;
}

// ~UMassSubsystemBase @ 1471e1380

void __thiscall UMassSubsystemBase::~UMassSubsystemBase(UMassSubsystemBase *this)

{
  this->_padding_ = (longlong)&___7UMassSubsystemBase__6B_;
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  return;
}

// AreRuntimeMassSubsystemsAllowed @ 1471f4020

bool __cdecl UMassSubsystemBase::AreRuntimeMassSubsystemsAllowed(UObject *param_1)

{
  return UE::Mass::Private::bRuntimeSubsystemsEnabled;
}

// Deinitialize @ 147210dd0

void __thiscall UMassSubsystemBase::Deinitialize(UMassSubsystemBase *this)

{
  this->InitializationState = (FInitializationState)0x0;
  return;
}

// GetPrivateStaticClass @ 147225060

UClass * __cdecl UMassSubsystemBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassSubsystemBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntity",L"MassSubsystemBase",
               &Z_Registration_Info_UClass_UMassSubsystemBase.InnerSingleton,
               StaticRegisterNativesUMassSubsystemBase,0x40,8,
               CLASS_Intrinsic|CLASS_DefaultConfig|CLASS_Abstract,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassSubsystemBase>,
               InternalVTableHelperCtorCaller<UMassSubsystemBase>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassSubsystemBase.InnerSingleton;
}

// HandleLateCreation @ 147229980

void __thiscall UMassSubsystemBase::HandleLateCreation(UMassSubsystemBase *this)

{
  UE::Mass::Private::HandleLateCreation((UWorldSubsystem *)this,this->InitializationState);
  return;
}

// Initialize @ 14722f5e0

void __thiscall
UMassSubsystemBase::Initialize(UMassSubsystemBase *this,FSubsystemCollectionBase *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  FSubsystemTypeTraits local_res8 [4];
  UObject *local_res18;
  
  UWorldSubsystem::Initialize((UWorldSubsystem *)this,param_1);
  if ((this->InitializationState).bInitializeCalled != 0) {
    `UMassSubsystemBase::Initialize'::__l2::<lambda_1>::operator()(local_res8);
  }
  (this->InitializationState).bInitializeCalled = '\x01';
  lVar2 = this->_padding_;
  pUVar4 = UMassEntitySubsystem::StaticClass();
  if (pUVar4 != (UClass *)0x0) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      return;
    }
  }
  local_res18 = (UObject *)this->_padding_;
  local_res8[0].bGameThreadOnly = true;
  local_res8[0].bThreadSafeWrite = false;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18);
  }
  UE::Mass::Subsystems::RegisterSubsystemType
            (param_1,(TSubclassOf<USubsystem>)&local_res18,local_res8);
  return;
}

// OnWorldBeginPlay @ 14723a160

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMassSubsystemBase::OnWorldBeginPlay(UMassSubsystemBase *this,UWorld *param_1)

{
  undefined1 local_res8 [32];
  
  UWorldSubsystem::OnWorldBeginPlay((UWorldSubsystem *)this,param_1);
  if ((this->InitializationState).bOnWorldBeginPlayCalled != '\0') {
    `UMassSubsystemBase::OnWorldBeginPlay'::__l2::<lambda_1>::operator()(local_res8);
  }
  (this->InitializationState).bOnWorldBeginPlayCalled = '\x01';
  return;
}

// PostInitialize @ 14723d2b0

void __thiscall UMassSubsystemBase::PostInitialize(UMassSubsystemBase *this)

{
  undefined1 local_res8 [32];
  
  UWorldSubsystem::PostInitialize((UWorldSubsystem *)this);
  if ((this->InitializationState).bPostInitializeCalled != '\0') {
    `UMassSubsystemBase::PostInitialize'::__l2::<lambda_1>::operator()(local_res8);
  }
  (this->InitializationState).bPostInitializeCalled = '\x01';
  return;
}

// ShouldCreateSubsystem @ 14724dcb0

bool __thiscall UMassSubsystemBase::ShouldCreateSubsystem(UMassSubsystemBase *this,UObject *param_1)

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

// StaticRegisterNativesUMassSubsystemBase @ 1472507c0

void __cdecl UMassSubsystemBase::StaticRegisterNativesUMassSubsystemBase(void)

{
  return;
}

// operator() @ 150503020

bool __thiscall `UMassSubsystemBase::Initialize'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_762219857381949355>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_762219857381949355>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505031f0

bool __thiscall `UMassSubsystemBase::OnWorldBeginPlay'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_762219857381949321>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_762219857381949321>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505032d0

bool __thiscall `UMassSubsystemBase::PostInitialize'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_762219857381949337>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_762219857381949337>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

