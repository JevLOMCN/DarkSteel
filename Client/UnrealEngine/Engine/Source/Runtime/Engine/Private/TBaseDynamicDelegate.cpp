// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// operator() @ 15050e6d0

bool __thiscall
`TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,AActor_*>::
__Internal_BindDynamic<UCameraModifier>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8910059622925073288>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8910059622925073288>,
                       &`public:___cdecl_`public:_void___cdecl_TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,AActor*___ptr64>::__Internal_BindDynamic<UCameraModifier>(UCameraModifier*___ptr64,void_(__cdecl_UCameraModifier::*)(AActor*___ptr64)___ptr64,FName)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15050e737;
    }
  }
  bVar2 = false;
LAB_15050e737:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15050f7d0

bool __thiscall
`TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,AActor_*,enum_EEndPlayReason::Type>::
__Internal_BindDynamic<UCheatManager>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8910059622925073288>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8910059622925073288>,
                       &`public:___cdecl_`public:_void___cdecl_TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,AActor*___ptr64,EEndPlayReason::Type>::__Internal_BindDynamic<UCheatManager>(UCheatManager*___ptr64,void_(__cdecl_UCheatManager::*)(AActor*___ptr64,EEndPlayReason::Type)___ptr64,FName)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15050f837;
    }
  }
  bVar2 = false;
LAB_15050f837:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150510230

bool __thiscall
`TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UPrimitiveComponent_*,AActor_*,UPrimitiveComponent_*,int,bool,FHitResult_const_&>
::__Internal_BindDynamic<UCharacterMovementComponent>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8910059622925073288>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8910059622925073288>,
                       &`public:___cdecl_`public:_void___cdecl_TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UPrimitiveComponent*___ptr64,AActor*___ptr64,UPrimitiveComponent*___ptr64,int,bool,FHitResult_const&___ptr64>::__Internal_BindDynamic<UCharacterMovementComponent>(UCharacterMovementComponent*___ptr64,void_(__cdecl_UCharacterMovementComponent::*)(UPrimitiveComponent*___ptr64,AActor*___ptr64,UPrimitiveComponent*___ptr64,int,bool,FHitResult_const&___ptr64)___ptr64,FName)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150510297;
    }
  }
  bVar2 = false;
LAB_150510297:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150512e00

bool __thiscall
`TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,AActor_*>::
__Internal_BindDynamic<UChildActorComponent>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8910059622925073288>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8910059622925073288>,
                       &`public:___cdecl_`public:_void___cdecl_TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,AActor*___ptr64>::__Internal_BindDynamic<UChildActorComponent>(UChildActorComponent*___ptr64,void_(__cdecl_UChildActorComponent::*)(AActor*___ptr64)___ptr64,FName)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150512e67;
    }
  }
  bVar2 = false;
LAB_150512e67:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150512ea0

bool __thiscall
`TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,AActor_*,enum_EEndPlayReason::Type>::
__Internal_BindDynamic<UInputComponent>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8910059622925073288>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8910059622925073288>,
                       &`public:___cdecl_`public:_void___cdecl_TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,AActor*___ptr64,EEndPlayReason::Type>::__Internal_BindDynamic<UInputComponent>(UInputComponent*___ptr64,void_(__cdecl_UInputComponent::*)(AActor*___ptr64,EEndPlayReason::Type)___ptr64,FName)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150512f07;
    }
  }
  bVar2 = false;
LAB_150512f07:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150512f40

bool __thiscall
`TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,APhysicsVolume_*>::
__Internal_BindDynamic<UMovementComponent>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8910059622925073288>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8910059622925073288>,
                       &`public:___cdecl_`public:_void___cdecl_TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,APhysicsVolume*___ptr64>::__Internal_BindDynamic<UMovementComponent>(UMovementComponent*___ptr64,void_(__cdecl_UMovementComponent::*)(APhysicsVolume*___ptr64)___ptr64,FName)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150512fa7;
    }
  }
  bVar2 = false;
LAB_150512fa7:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505199b0

bool __thiscall
`TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,AActor_*,enum_EEndPlayReason::Type>::
__Internal_BindDynamic<UAutoDestroySubsystem>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8910059622925073288>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8910059622925073288>,
                       &`public:___cdecl_`public:_void___cdecl_TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,AActor*___ptr64,EEndPlayReason::Type>::__Internal_BindDynamic<UAutoDestroySubsystem>(UAutoDestroySubsystem*___ptr64,void_(__cdecl_UAutoDestroySubsystem::*)(AActor*___ptr64,EEndPlayReason::Type)___ptr64,FName)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150519a17;
    }
  }
  bVar2 = false;
LAB_150519a17:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15051c3e0

bool __thiscall
`TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,AActor_*,enum_EEndPlayReason::Type>::
__Internal_BindDynamic<ALODActor>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8910059622925073288>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8910059622925073288>,
                       &`public:___cdecl_`public:_void___cdecl_TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,AActor*___ptr64,EEndPlayReason::Type>::__Internal_BindDynamic<ALODActor>(ALODActor*___ptr64,void_(__cdecl_ALODActor::*)(AActor*___ptr64,EEndPlayReason::Type)___ptr64,FName)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15051c447;
    }
  }
  bVar2 = false;
LAB_15051c447:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15051c480

bool __thiscall
`TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,AActor_*>::
__Internal_BindDynamic<ALightWeightInstanceManager>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8910059622925073288>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8910059622925073288>,
                       &`public:___cdecl_`public:_void___cdecl_TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,AActor*___ptr64>::__Internal_BindDynamic<ALightWeightInstanceManager>(ALightWeightInstanceManager*___ptr64,void_(__cdecl_ALightWeightInstanceManager::*)(AActor*___ptr64)___ptr64,FName)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15051c4e7;
    }
  }
  bVar2 = false;
LAB_15051c4e7:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150524590

bool __thiscall
`TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UParticleSystemComponent_*>::
__Internal_BindDynamic<AEmitter>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8910059622925073288>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8910059622925073288>,
                       &`public:___cdecl_`public:_void___cdecl_TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UParticleSystemComponent*___ptr64>::__Internal_BindDynamic<AEmitter>(AEmitter*___ptr64,void_(__cdecl_AEmitter::*)(UParticleSystemComponent*___ptr64)___ptr64,FName)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505245f7;
    }
  }
  bVar2 = false;
LAB_1505245f7:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150528430

bool __thiscall
`TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UPrimitiveComponent_*,enum_EComponentPhysicsStateChange>
::__Internal_BindDynamic<UClusterUnionComponent>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8910059622925073288>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8910059622925073288>,
                       &`public:___cdecl_`public:_void___cdecl_TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UPrimitiveComponent*___ptr64,EComponentPhysicsStateChange>::__Internal_BindDynamic<UClusterUnionComponent>(UClusterUnionComponent*___ptr64,void_(__cdecl_UClusterUnionComponent::*)(UPrimitiveComponent*___ptr64,EComponentPhysicsStateChange)___ptr64,FName)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150528497;
    }
  }
  bVar2 = false;
LAB_150528497:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150529310

bool __thiscall
`TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UPrimitiveComponent_*,enum_EComponentPhysicsStateChange>
::__Internal_BindDynamic<UNetworkPhysicsSettingsComponent>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8910059622925073288>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8910059622925073288>,
                       &`public:___cdecl_`public:_void___cdecl_TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UPrimitiveComponent*___ptr64,EComponentPhysicsStateChange>::__Internal_BindDynamic<UNetworkPhysicsSettingsComponent>(UNetworkPhysicsSettingsComponent*___ptr64,void_(__cdecl_UNetworkPhysicsSettingsComponent::*)(UPrimitiveComponent*___ptr64,EComponentPhysicsStateChange)___ptr64,FName)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150529377;
    }
  }
  bVar2 = false;
LAB_150529377:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150529c10

bool __thiscall
`TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,AActor_*>::
__Internal_BindDynamic<APlayerState>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8910059622925073288>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8910059622925073288>,
                       &`public:___cdecl_`public:_void___cdecl_TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,AActor*___ptr64>::__Internal_BindDynamic<APlayerState>(APlayerState*___ptr64,void_(__cdecl_APlayerState::*)(AActor*___ptr64)___ptr64,FName)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150529c77;
    }
  }
  bVar2 = false;
LAB_150529c77:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505312c0

bool __thiscall
`TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UPrimitiveComponent_*,enum_EComponentPhysicsStateChange>
::__Internal_BindDynamic<UAutoRTFMTestObject>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8910059622925073288>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8910059622925073288>,
                       &`public:___cdecl_`public:_void___cdecl_TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UPrimitiveComponent*___ptr64,EComponentPhysicsStateChange>::__Internal_BindDynamic<UAutoRTFMTestObject>(UAutoRTFMTestObject*___ptr64,void_(__cdecl_UAutoRTFMTestObject::*)(UPrimitiveComponent*___ptr64,EComponentPhysicsStateChange)___ptr64,FName)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150531327;
    }
  }
  bVar2 = false;
LAB_150531327:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505358d0

bool __thiscall
`TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void>::
__Internal_BindDynamic<UWorldPartitionRuntimeLevelStreamingCell_const_>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8910059622925073288>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8910059622925073288>,
                       &`public:___cdecl_`public:_void___cdecl_TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void>::__Internal_BindDynamic<UWorldPartitionRuntimeLevelStreamingCell_const_>(UWorldPartitionRuntimeLevelStreamingCell_const*___ptr64,void_(__cdecl_UWorldPartitionRuntimeLevelStreamingCell::*)(void)___ptr64,FName)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150535937;
    }
  }
  bVar2 = false;
LAB_150535937:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

