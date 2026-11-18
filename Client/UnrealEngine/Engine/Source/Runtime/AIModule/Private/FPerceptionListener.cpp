// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 10

// FPerceptionListener @ 146f93150

FPerceptionListener * __thiscall FPerceptionListener::FPerceptionListener(FPerceptionListener *this)

{
  undefined8 uVar1;
  
  (this->Listener).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Filter).AcceptedChannelsMask = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CachedLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->CachedLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->CachedLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  uVar1 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  (this->CachedDirection).field0_0x0._s_0.X = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  (this->CachedDirection).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  this->bHasStimulusToProcess = 0;
  (this->CachedDirection).field0_0x0._s_0.Z = (double)uVar1;
  (this->TeamIdentifier).TeamID = 0xff;
  FAIGenericID<FPerceptionListenerCounter>::InvalidID();
  return this;
}

// FPerceptionListener @ 146f931c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPerceptionListener * __thiscall
FPerceptionListener::FPerceptionListener(FPerceptionListener *this,UAIPerceptionComponent *param_1)

{
  undefined8 uVar1;
  UAIPerceptionComponent *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UAIPerceptionComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Listener).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UAIPerceptionComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  (this->Filter).AcceptedChannelsMask = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CachedLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->CachedLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->CachedLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  uVar1 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  (this->CachedDirection).field0_0x0._s_0.X = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  (this->CachedDirection).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  this->bHasStimulusToProcess = 0;
  (this->CachedDirection).field0_0x0._s_0.Z = (double)uVar1;
  (this->TeamIdentifier).TeamID = 0xff;
  FAIGenericID<FPerceptionListenerCounter>::InvalidID();
  UpdateListenerProperties(this,param_1);
  (this->ListenerID).Index = (param_1->PerceptionListenerId).Index;
  return this;
}

// CacheLocation @ 146f9bed0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FPerceptionListener::CacheLocation(FPerceptionListener *this)

{
  bool bVar1;
  UAIPerceptionComponent *this_00;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if (bVar1) {
    this_00 = (UAIPerceptionComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    UAIPerceptionComponent::GetLocationAndDirection
              (this_00,&this->CachedLocation,&this->CachedDirection);
    return;
  }
  return;
}

// GetBodyActor @ 146fac050

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall FPerceptionListener::GetBodyActor(FPerceptionListener *this)

{
  bool bVar1;
  UAIPerceptionComponent *this_00;
  AActor *pAVar2;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if (bVar1) {
    this_00 = (UAIPerceptionComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    pAVar2 = UAIPerceptionComponent::GetBodyActor(this_00);
    return pAVar2;
  }
  return (AActor *)0x0;
}

// GetBodyActorName @ 146fac140

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FName __thiscall FPerceptionListener::GetBodyActorName(FPerceptionListener *this)

{
  bool bVar1;
  UAIPerceptionComponent *this_00;
  AActor *pAVar2;
  FName in_RDX;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if (bVar1) {
    this_00 = (UAIPerceptionComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    pAVar2 = UAIPerceptionComponent::GetBodyActor(this_00);
    if (pAVar2 != (AActor *)0x0) {
      *(longlong *)in_RDX = pAVar2->_padding_;
      return in_RDX;
    }
  }
  *(longlong *)in_RDX = 0;
  return in_RDX;
}

// GetBodyActorUniqueID @ 146fac1a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall FPerceptionListener::GetBodyActorUniqueID(FPerceptionListener *this)

{
  bool bVar1;
  UAIPerceptionComponent *this_00;
  AActor *pAVar2;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if (bVar1) {
    this_00 = (UAIPerceptionComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    pAVar2 = UAIPerceptionComponent::GetBodyActor(this_00);
    if (pAVar2 != (AActor *)0x0) {
      return *(uint *)((longlong)&pAVar2->_padding_ + 4);
    }
  }
  return 0xffffffff;
}

// GetTeamAgent @ 146fb5a50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

IGenericTeamAgentInterface * __thiscall FPerceptionListener::GetTeamAgent(FPerceptionListener *this)

{
  UObjectBaseUtility *this_00;
  UAIPerceptionComponent *this_01;
  UClass *pUVar1;
  IGenericTeamAgentInterface *pIVar2;
  AActor *this_02;
  
  this_01 = (UAIPerceptionComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (this_01 == (UAIPerceptionComponent *)0x0) {
    return (IGenericTeamAgentInterface *)0x0;
  }
  this_00 = (UObjectBaseUtility *)this_01->_padding_;
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar1 = Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
    pIVar2 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar1);
    if (pIVar2 != (IGenericTeamAgentInterface *)0x0) {
      return pIVar2;
    }
  }
  this_02 = UAIPerceptionComponent::GetBodyActor(this_01);
  if (this_02 == (AActor *)0x0) {
    return (IGenericTeamAgentInterface *)0x0;
  }
  pUVar1 = Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
  pIVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_02,pUVar1);
  return pIVar2;
}

// ProcessStimuli @ 146fc3b20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FPerceptionListener::ProcessStimuli(FPerceptionListener *this)

{
  code *pcVar1;
  bool bVar2;
  UAIPerceptionComponent *this_00;
  
  if (this->bHasStimulusToProcess == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6098011600701095828>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AIPerceptionTypes.cpp"
                       ,0x6c,"bHasStimulusToProcess");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (UAIPerceptionComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  UAIPerceptionComponent::ProcessStimuli(this_00);
  this->bHasStimulusToProcess = 0;
  return;
}

// RegisterStimulus @ 146fc8bc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FPerceptionListener::RegisterStimulus
          (FPerceptionListener *this,AActor *param_1,FAIStimulus *param_2)

{
  UAIPerceptionComponent *this_00;
  
  this->bHasStimulusToProcess = 1;
  this_00 = (UAIPerceptionComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  UAIPerceptionComponent::RegisterStimulus(this_00,param_1,param_2);
  return;
}

// UpdateListenerProperties @ 146fe0660

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FPerceptionListener::UpdateListenerProperties
          (FPerceptionListener *this,UAIPerceptionComponent *param_1)

{
  code *pcVar1;
  bool bVar2;
  UAIPerceptionComponent *pUVar3;
  uchar local_res8;
  
  pUVar3 = (UAIPerceptionComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (param_1 != pUVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("&InListener == Listener.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AIPerceptionTypes.cpp"
                       ,0x5d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FGenericTeamId::GetTeamIdentifier((AActor *)&local_res8);
  (this->TeamIdentifier).TeamID = local_res8;
  (this->Filter).AcceptedChannelsMask = (param_1->PerceptionFilter).AcceptedChannelsMask;
  return;
}

