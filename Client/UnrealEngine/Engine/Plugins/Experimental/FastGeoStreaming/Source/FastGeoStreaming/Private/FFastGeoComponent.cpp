// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 17

// FFastGeoComponent @ 14da18360

FFastGeoComponent * __thiscall
FFastGeoComponent::FFastGeoComponent
          (FFastGeoComponent *this,int param_1,FFastGeoElementType *param_2)

{
  longlong lVar1;
  FFastGeoElementType *pFVar2;
  
  lVar1 = *(longlong *)param_2;
  pFVar2 = param_2->ParentType;
  this->ComponentIndex = param_1;
  this->_padding_ = (longlong)&___7FFastGeoComponent__6B_;
  this->Owner = (FFastGeoComponentCluster *)0x0;
  this->PhysicsStateCreation = NotCreated;
  this->_padding_ = lVar1;
  this->_padding_ = (longlong)pFVar2;
  return this;
}

// ~FFastGeoComponent @ 14da1b360

void __thiscall FFastGeoComponent::~FFastGeoComponent(FFastGeoComponent *this)

{
  this->_padding_ = (longlong)&___7IFastGeoElement__6B_;
  return;
}

// GetBodySetup @ 14da298d0

UBodySetup * __thiscall FFastGeoComponent::GetBodySetup(FFastGeoComponent *this)

{
  return (UBodySetup *)0x0;
}

// GetDebugColor @ 14da2a3c0

FLinearColor * __thiscall
FFastGeoComponent::GetDebugColor(FFastGeoComponent *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  FLinearColor *pFVar2;
  
  pFVar2 = &FLinearColor::White;
  if (UFastGeoWorldSubsystem::bEnableDebugView) {
    pFVar2 = &FLinearColor::Blue;
  }
  uVar1 = *(undefined8 *)((longlong)&pFVar2->field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&pFVar2->field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// GetOwnerComponentCluster @ 14da2afe0

FFastGeoComponentCluster * __thiscall
FFastGeoComponent::GetOwnerComponentCluster(FFastGeoComponent *this)

{
  return this->Owner;
}

// GetOwnerContainer @ 14da2aff0

UFastGeoContainer * __thiscall FFastGeoComponent::GetOwnerContainer(FFastGeoComponent *this)

{
  code *pcVar1;
  bool bVar2;
  UFastGeoContainer *pUVar3;
  
  if (this->Owner != (FFastGeoComponentCluster *)0x0) {
    return this->Owner->Owner;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("GetOwnerComponentCluster()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                     ,0x32,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UFastGeoContainer *)(*pcVar1)();
    return pUVar3;
  }
  return this->Owner->Owner;
}

// GetWorld @ 14da2bd60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall FFastGeoComponent::GetWorld(FFastGeoComponent *this)

{
  UFastGeoContainer *pUVar1;
  code *pcVar2;
  bool bVar3;
  UWorld *pUVar4;
  
  if (this->Owner == (FFastGeoComponentCluster *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetOwnerComponentCluster()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                       ,0x32,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UWorld *)(*pcVar2)();
      return pUVar4;
    }
  }
  if (this->Owner->Owner == (UFastGeoContainer *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetOwnerContainer()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                       ,0x38,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UWorld *)(*pcVar2)();
      return pUVar4;
    }
  }
  if (this->Owner == (FFastGeoComponentCluster *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetOwnerComponentCluster()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                       ,0x32,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UWorld *)(*pcVar2)();
      return pUVar4;
    }
  }
  pUVar1 = this->Owner->Owner;
  if ((pUVar1->_padding_ & 0x10) == 0) {
    if (pUVar1->_padding_ != 0) goto LAB_14da2be63;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_634665728192020378>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Internal\\FastGeoContainer.h"
                       ,0x66,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UWorld *)(*pcVar2)();
      return pUVar4;
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("GetOwnerContainer()->GetLevel()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                     ,0x39,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UWorld *)(*pcVar2)();
    return pUVar4;
  }
LAB_14da2be63:
  if (this->Owner == (FFastGeoComponentCluster *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetOwnerComponentCluster()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                       ,0x32,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UWorld *)(*pcVar2)();
      return pUVar4;
    }
  }
  pUVar1 = this->Owner->Owner;
  if ((pUVar1->_padding_ & 0x10) != 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_634665728192020378>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Internal\\FastGeoContainer.h"
                       ,0x66,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UWorld *)(*pcVar2)();
      return pUVar4;
    }
    return _DAT_000000c0;
  }
  return *(UWorld **)(pUVar1->_padding_ + 0xc0);
}

// InitializeDynamicProperties @ 14da2c4a0

void __thiscall FFastGeoComponent::InitializeDynamicProperties(FFastGeoComponent *this)

{
  return;
}

// IsCollisionEnabled @ 14da2d670

bool __thiscall FFastGeoComponent::IsCollisionEnabled(FFastGeoComponent *this)

{
  return false;
}

// IsRegistered @ 14da2dea0

bool __thiscall FFastGeoComponent::IsRegistered(FFastGeoComponent *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (this->Owner == (FFastGeoComponentCluster *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetOwnerComponentCluster()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                       ,0x32,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return this->Owner->Owner->bIsRegistered;
}

// OnAsyncCreatePhysicsState @ 14da2e8c0

void __thiscall FFastGeoComponent::OnAsyncCreatePhysicsState(FFastGeoComponent *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  
  cVar2 = (**(code **)(this->_padding_ + 0x10))();
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCollisionEnabled()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                       ,0x4f,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->PhysicsStateCreation != NotCreated) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PhysicsStateCreation == EPhysicsStateCreation::NotCreated",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                       ,0x50,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->PhysicsStateCreation = Creating;
  return;
}

// OnAsyncCreatePhysicsStateEnd_GameThread @ 14da2f0a0

void __thiscall FFastGeoComponent::OnAsyncCreatePhysicsStateEnd_GameThread(FFastGeoComponent *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->PhysicsStateCreation == Creating) {
    this->PhysicsStateCreation = Created;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("PhysicsStateCreation == EPhysicsStateCreation::Creating",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                     ,0x56,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->PhysicsStateCreation = Created;
  return;
}

// OnAsyncDestroyPhysicsState @ 14da2f290

void __thiscall FFastGeoComponent::OnAsyncDestroyPhysicsState(FFastGeoComponent *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  
  cVar2 = (**(code **)(this->_padding_ + 0x10))();
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCollisionEnabled()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                       ,0x62,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnAsyncDestroyPhysicsStateBegin_GameThread @ 14da2f940

void __thiscall
FFastGeoComponent::OnAsyncDestroyPhysicsStateBegin_GameThread(FFastGeoComponent *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->PhysicsStateCreation == Created) {
    this->PhysicsStateCreation = Destroying;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("PhysicsStateCreation == EPhysicsStateCreation::Created",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                     ,0x5c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->PhysicsStateCreation = Destroying;
  return;
}

// OnAsyncDestroyPhysicsStateEnd_GameThread @ 14da2fca0

void __thiscall FFastGeoComponent::OnAsyncDestroyPhysicsStateEnd_GameThread(FFastGeoComponent *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->PhysicsStateCreation == Destroying) {
    this->PhysicsStateCreation = NotCreated;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("PhysicsStateCreation == EPhysicsStateCreation::Destroying",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                     ,0x67,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->PhysicsStateCreation = NotCreated;
  return;
}

// Serialize @ 14da33c50

void __thiscall FFastGeoComponent::Serialize(FFastGeoComponent *this,FArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &this->ComponentIndex;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar2 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014da33c89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
  return;
}

// SetOwnerComponentCluster @ 14da37de0

void __thiscall
FFastGeoComponent::SetOwnerComponentCluster
          (FFastGeoComponent *this,FFastGeoComponentCluster *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != (FFastGeoComponentCluster *)0x0) {
    this->Owner = param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("InOwner",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                     ,0x27,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->Owner = (FFastGeoComponentCluster *)0x0;
  return;
}

