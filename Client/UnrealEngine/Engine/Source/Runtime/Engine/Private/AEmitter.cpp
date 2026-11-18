// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 36

// StaticClass @ 147279620

UClass * __cdecl AEmitter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_AEmitter.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Emitter",&Z_Registration_Info_UClass_AEmitter.InnerSingleton,
               StaticRegisterNativesAEmitter,0x330,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<AEmitter>,InternalVTableHelperCtorCaller<AEmitter>,
               aFStackX_8,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AEmitter.InnerSingleton;
}

// AEmitter @ 1480f2af0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AEmitter * __thiscall AEmitter::AEmitter(AEmitter *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AEmitter__6B_;
  (this->ParticleSystemComponent).field0_0x0.DebugPtr = (UParticleSystemComponent *)0x0;
  *(undefined8 *)&this->OnParticleSpawn = 0;
  *(undefined8 *)&(this->OnParticleSpawn).field_0x8 = 0;
  *(undefined8 *)&(this->OnParticleSpawn).field_0x10 = 0;
  *(undefined8 *)&this->OnParticleBurst = 0;
  *(undefined8 *)&(this->OnParticleBurst).field_0x8 = 0;
  *(undefined8 *)&(this->OnParticleBurst).field_0x10 = 0;
  *(undefined8 *)&this->OnParticleDeath = 0;
  *(undefined8 *)&(this->OnParticleDeath).field_0x8 = 0;
  *(undefined8 *)&(this->OnParticleDeath).field_0x10 = 0;
  *(undefined8 *)&this->OnParticleCollide = 0;
  *(undefined8 *)&(this->OnParticleCollide).field_0x8 = 0;
  *(undefined8 *)&(this->OnParticleCollide).field_0x10 = 0;
  return this;
}

// AEmitter @ 1480f2b80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AEmitter * __thiscall AEmitter::AEmitter(AEmitter *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UParticleSystemComponent *pUVar4;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AEmitter__6B_;
  (this->ParticleSystemComponent).field0_0x0.DebugPtr = (UParticleSystemComponent *)0x0;
  *(undefined8 *)&this->OnParticleSpawn = 0;
  *(undefined8 *)&(this->OnParticleSpawn).field_0x8 = 0;
  *(undefined8 *)&(this->OnParticleSpawn).field_0x10 = 0;
  *(undefined8 *)&this->OnParticleBurst = 0;
  *(undefined8 *)&(this->OnParticleBurst).field_0x8 = 0;
  *(undefined8 *)&(this->OnParticleBurst).field_0x10 = 0;
  *(undefined8 *)&this->OnParticleDeath = 0;
  *(undefined8 *)&(this->OnParticleDeath).field_0x8 = 0;
  *(undefined8 *)&(this->OnParticleDeath).field_0x10 = 0;
  *(undefined8 *)&this->OnParticleCollide = 0;
  *(undefined8 *)&(this->OnParticleCollide).field_0x8 = 0;
  *(undefined8 *)&(this->OnParticleCollide).field_0x10 = 0;
  pFVar2 = ::FName::FName(&local_res8,L"ParticleSystemComponent0");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_UParticleSystemComponent_NoRegister();
  pUVar4 = (UParticleSystemComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UParticleSystemComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->ParticleSystemComponent).field0_0x0.DebugPtr = pUVar4;
  pUVar4->SecondsBeforeInactive = 1.0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (this->ParticleSystemComponent).field0_0x0.DebugPtr,
     pUVar4 != (UParticleSystemComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  this->_padding_ = (longlong)(this->ParticleSystemComponent).field0_0x0;
  return this;
}

// ~AEmitter @ 1480f6420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AEmitter::~AEmitter(AEmitter *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7AEmitter__6B_;
  pvVar1 = *(void **)&(this->OnParticleCollide).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnParticleCollide);
  pvVar1 = *(void **)&(this->OnParticleDeath).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnParticleDeath);
  pvVar1 = *(void **)&(this->OnParticleBurst).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnParticleBurst);
  pvVar1 = *(void **)&(this->OnParticleSpawn).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnParticleSpawn);
  AActor::~AActor((AActor *)this);
  return;
}

// Activate @ 1480fc2a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall AEmitter::Activate(AEmitter *this)

{
  UParticleSystemComponent *pUVar1;
  
  pUVar1 = (this->ParticleSystemComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UParticleSystemComponent *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0xaf0))(pUVar1,0);
  }
  this->bCurrentlyActive = 1;
  return;
}

// AutoPopulateInstanceProperties @ 1480fe0e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall AEmitter::AutoPopulateInstanceProperties(AEmitter *this)

{
  UParticleSystemComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  UParticleSystem *pUVar7;
  
  pUVar1 = (this->ParticleSystemComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (UParticleSystemComponent *)0x0) {
    return;
  }
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                         ,0x12ae,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar7 = (pUVar1->Template).field0_0x0.DebugPtr;
  if ((pUVar7 != (UParticleSystem *)0x0) && (uVar5 = 0, 0 < (pUVar7->Emitters).ArrayNum)) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (pUVar7->Emitters).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UParticleEmitter::AutoPopulateInstanceProperties
                (*(UParticleEmitter **)((pUVar7->Emitters).AllocatorInstance.Data + lVar6),pUVar1);
      pUVar7 = (pUVar1->Template).field0_0x0.DebugPtr;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (pUVar7->Emitters).ArrayNum);
  }
  return;
}

// Deactivate @ 1481069c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall AEmitter::Deactivate(AEmitter *this)

{
  UParticleSystemComponent *this_00;
  
  this_00 = (this->ParticleSystemComponent).field0_0x0.DebugPtr;
  if (this_00 != (UParticleSystemComponent *)0x0) {
    UParticleSystemComponent::DeactivateSystem(this_00);
  }
  this->bCurrentlyActive = 0;
  return;
}

// GetDetailedInfoInternal @ 148111560

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
AEmitter::GetDetailedInfoInternal(AEmitter *this,FString *__return_storage_ptr__)

{
  UParticleSystemComponent *pUVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  void *local_18 [2];
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pUVar1 = (this->ParticleSystemComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (UParticleSystemComponent *)0x0) {
    ::FString::operator=(__return_storage_ptr__,L"No_ParticleSystemComponent");
  }
  else {
    pFVar3 = (FString *)(**(code **)(*(longlong *)pUVar1 + 0x48))(pUVar1,local_18);
    if (__return_storage_ptr__ != pFVar3) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar3->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetLifetimeReplicatedProps @ 1481161d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AEmitter::GetLifetimeReplicatedProps
          (AEmitter *this,TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  FProperty *this_00;
  FName local_res18 [2];
  FDoRepLifetimeParams local_28;
  
  AActor::GetLifetimeReplicatedProps((AActor *)this,param_1);
  pFVar2 = ::FName::FName(local_res18,0x10,L"bCurrentlyActive",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  this_00 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((this_00->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)this_00,(FString *)&local_28);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_28._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
  }
  local_28.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_28.Condition = COND_None;
  local_28.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_28.bIsPushBased = false;
  local_28._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(this_00,param_1,&local_28);
  return;
}

// GetPrivateStaticClass @ 148118870

UClass * __cdecl AEmitter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AEmitter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Emitter",&Z_Registration_Info_UClass_AEmitter.InnerSingleton,
               StaticRegisterNativesAEmitter,0x330,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<AEmitter>,InternalVTableHelperCtorCaller<AEmitter>,
               local_res8,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AEmitter.InnerSingleton;
}

// IsActive @ 1481232c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall AEmitter::IsActive(AEmitter *this)

{
  UParticleSystemComponent *pUVar1;
  
  pUVar1 = (this->ParticleSystemComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UParticleSystemComponent *)0x0) {
    return (bool)((byte)pUVar1->field_0x9a >> 4 & 1);
  }
  return false;
}

// OnParticleSystemFinished @ 148124950

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall AEmitter::OnParticleSystemFinished(AEmitter *this,UParticleSystemComponent *param_1)

{
  if (this->bDestroyOnSystemFinish != 0) {
    (**(code **)(this->_padding_ + 0x400))(this,__real_38d1b717);
    this->bCurrentlyActive = 0;
    return;
  }
  this->bCurrentlyActive = 0;
  return;
}

// OnRep_bCurrentlyActive @ 1481249d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall AEmitter::OnRep_bCurrentlyActive(AEmitter *this)

{
  UParticleSystemComponent *pUVar1;
  
  pUVar1 = (this->ParticleSystemComponent).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x0001481249ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pUVar1 + 0x2c8))(pUVar1,*(uint *)&this->field_0x2c8 >> 2 & 0xffffff01,0)
  ;
  return;
}

// PostActorCreated @ 148125850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AEmitter::PostActorCreated(AEmitter *this)

{
  UParticleSystemComponent *this_00;
  
  AActor::PostActorCreated((AActor *)this);
  this_00 = (this->ParticleSystemComponent).field0_0x0.DebugPtr;
  if ((this_00 != (UParticleSystemComponent *)0x0) && (this->bPostUpdateTickGroup != 0)) {
    UActorComponent::SetTickGroup((UActorComponent *)this_00,TG_PostUpdateWork);
    return;
  }
  return;
}

// PostInitializeComponents @ 148126120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall AEmitter::PostInitializeComponents(AEmitter *this)

{
  UParticleSystemComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  char *pcVar4;
  UObject *this_00;
  UFunction *pUVar5;
  uint uVar6;
  char *pcVar7;
  <lambda_1> local_res8 [8];
  FName local_res10;
  FName local_res18;
  AEmitter *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FWeakObjectPtr local_b0;
  FName local_a8;
  FName *local_a0;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_98;
  FDestructionSentinel local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  
  AActor::PostInitializeComponents((AActor *)this);
  pUVar1 = (this->ParticleSystemComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (UParticleSystemComponent *)0x0) {
    return;
  }
  pcVar4 = strstr("&AEmitter::OnParticleSystemFinished","::");
  if (pcVar4 == (char *)0x0) {
LAB_1481261bb:
    pcVar7 = &DAT_00000002;
LAB_1481261c0:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    do {
      pcVar7 = pcVar4;
      pcVar4 = strstr(pcVar7 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar7 == (char *)0x0) goto LAB_1481261bb;
    pcVar7 = pcVar7 + 2;
    if (*pcVar7 == '0') goto LAB_1481261c0;
  }
  ::FName::FName(&local_res18,pcVar7);
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.ObjectIndex = 0;
  local_b0.ObjectSerialNumber = 0;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  local_res10 = local_res18;
  local_res20 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (AEmitter *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_res20);
  local_a8 = local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_70);
  if ((local_a8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_b0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
  }
  else {
    pUVar5 = UObject::FindFunction(this_00,local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
    if (pUVar5 != (UFunction *)0x0) goto LAB_1481262a9;
  }
  local_a0 = &local_res10;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UParticleSystemComponent_*>::
  __Internal_BindDynamic<AEmitter>'::__l2::<lambda_1>::operator()(&local_a0);
LAB_1481262a9:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_58);
  local_98.Object = local_b0;
  local_98.FunctionName = local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar1->OnSystemFinished,
             (FWriteAccessScope *)&local_88);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pUVar1->OnSystemFinished).field_0x8,&local_98);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pUVar1->OnSystemFinished).field_0x8,local_res8,Default);
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  pUVar1 = (this->ParticleSystemComponent).field0_0x0.DebugPtr;
  uVar6 = ((uint)((byte)pUVar1->field_0x9a >> 1) ^ *(uint *)&this->field_0x2c8) & 4 ^
          *(uint *)&this->field_0x2c8;
  *(uint *)&this->field_0x2c8 = uVar6;
  if ((pUVar1 != (UParticleSystemComponent *)0x0) && ((uVar6 & 2) != 0)) {
    UActorComponent::SetTickGroup((UActorComponent *)pUVar1,TG_PostUpdateWork);
  }
  return;
}

// SetActorParameter @ 14812edb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AEmitter::SetActorParameter(AEmitter *this,FName param_1,AActor *param_2)

{
  UParticleSystemComponent *pUVar1;
  
  pUVar1 = (this->ParticleSystemComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UParticleSystemComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014812edbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar1 + 0xab8))();
    return;
  }
  return;
}

// SetColorParameter @ 14812f670

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall AEmitter::SetColorParameter(AEmitter *this,FName param_1,FLinearColor *param_2)

{
  UParticleSystemComponent *pUVar1;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  pUVar1 = (this->ParticleSystemComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UParticleSystemComponent *)0x0) {
    local_18 = (param_2->field0_0x0)._s_0.R;
    fStack_14 = (param_2->field0_0x0)._s_0.G;
    fStack_10 = (param_2->field0_0x0)._s_0.B;
    fStack_c = (param_2->field0_0x0)._s_0.A;
    (**(code **)(*(longlong *)pUVar1 + 0xab0))(pUVar1,param_1,&local_18);
  }
  return;
}

// SetFloatParameter @ 14812fe30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall AEmitter::SetFloatParameter(AEmitter *this,FName param_1,float param_2)

{
  UParticleSystemComponent *pUVar1;
  
  pUVar1 = (this->ParticleSystemComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UParticleSystemComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014812fe3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar1 + 0xaa0))();
    return;
  }
  return;
}

// SetMaterialParameter @ 148130710

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AEmitter::SetMaterialParameter(AEmitter *this,FName param_1,UMaterialInterface *param_2)

{
  int *piVar1;
  TArray<FParticleSysParam,TSizedDefaultAllocator<32>_> *pTVar2;
  UParticleSystemComponent *pUVar3;
  UMaterialInterface *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  FName *pFVar11;
  uint uVar12;
  longlong lVar13;
  FLLMScope aFStackX_10 [5];
  FMemScope FStackX_20;
  
  pUVar3 = (this->ParticleSystemComponent).field0_0x0.DebugPtr;
  if (pUVar3 == (UParticleSystemComponent *)0x0) {
    return;
  }
  FLLMScope::FLLMScope(aFStackX_10,Particles,false,None,Default,true);
  FMemScope::FMemScope(&FStackX_20,Particles,true);
  if (param_1 == (FName)0x0) goto LAB_148196cf3;
  bVar7 = IsInGameThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                         ,0x11cc,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar12 = 0;
  if (0 < (pUVar3->InstanceParameters).ArrayNum) {
    lVar13 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar12 < (pUVar3->InstanceParameters).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar11 = (FName *)((pUVar3->InstanceParameters).AllocatorInstance.Data + lVar13);
      if ((*pFVar11 == param_1) && ((char)pFVar11[1].ComparisonIndex.Value == '\a')) {
        if ((bool)pUVar3->bIsViewRelevanceDirty) {
LAB_148196c23:
          bVar9 = 0x80;
        }
        else {
          if (pFVar11[0xb] == (FName)0x0) {
            bVar7 = param_2 == (UMaterialInterface *)0x0;
          }
          else {
            bVar7 = pFVar11[0xb] == (FName)param_2;
          }
          if (!bVar7) goto LAB_148196c23;
          bVar9 = 0;
        }
        pUVar3->field_0x57a = pUVar3->field_0x57a & 0x7f | bVar9;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (param_2 != (UMaterialInterface *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_2);
        }
        pFVar11[0xb] = (FName)param_2;
        goto LAB_148196cf3;
      }
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 0xe0;
    } while ((int)uVar12 < (pUVar3->InstanceParameters).ArrayNum);
  }
  pTVar2 = &pUVar3->InstanceParameters;
  uVar12 = (pUVar3->InstanceParameters).ArrayNum;
  piVar1 = &(pUVar3->InstanceParameters).ArrayMax;
  if (uVar12 == *piVar1) {
    uVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10e0,&pTVar2->AllocatorInstance,piVar1);
  }
  (pUVar3->InstanceParameters).ArrayNum = uVar12 + 1;
  lVar13 = (longlong)(int)uVar12 * 0xe0;
  memset((pTVar2->AllocatorInstance).Data + lVar13,0,0xe0);
  uVar10 = ~uVar12 >> 0x1f;
  uVar8 = 0;
  if ((int)uVar12 < (pUVar3->InstanceParameters).ArrayNum) {
    uVar8 = uVar10;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  *(FName *)((pTVar2->AllocatorInstance).Data + lVar13) = param_1;
  uVar8 = 0;
  if ((int)uVar12 < (pUVar3->InstanceParameters).ArrayNum) {
    uVar8 = uVar10;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  (pTVar2->AllocatorInstance).Data[lVar13 + 8] = (FScriptContainerElement)0x7;
  if ((bool)pUVar3->bIsViewRelevanceDirty) {
LAB_148196c5c:
    bVar9 = 0x80;
  }
  else {
    uVar8 = 0;
    if ((int)uVar12 < (pUVar3->InstanceParameters).ArrayNum) {
      uVar8 = uVar10;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pUVar4 = *(UMaterialInterface **)
              ((pUVar3->InstanceParameters).AllocatorInstance.Data +
              (longlong)(int)uVar12 * 0xe0 + 0x58);
    if (pUVar4 == (UMaterialInterface *)0x0) {
      bVar7 = param_2 == (UMaterialInterface *)0x0;
    }
    else {
      bVar7 = pUVar4 == param_2;
    }
    if (!bVar7) goto LAB_148196c5c;
    bVar9 = 0;
  }
  pUVar3->bIsViewRelevanceDirty = bVar9 >> 7;
  uVar8 = 0;
  if ((int)uVar12 < (pUVar3->InstanceParameters).ArrayNum) {
    uVar8 = uVar10;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar5 = (pUVar3->InstanceParameters).AllocatorInstance.Data;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UMaterialInterface *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  *(UMaterialInterface **)(pFVar5 + (longlong)(int)uVar12 * 0xe0 + 0x58) = param_2;
LAB_148196cf3:
  FMemScope::~FMemScope(&FStackX_20);
  FLLMScope::~FLLMScope(aFStackX_10);
  return;
}

// SetTemplate @ 148131110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AEmitter::SetTemplate(AEmitter *this,UParticleSystem *param_1)

{
  UParticleSystemComponent *this_00;
  
  this_00 = (this->ParticleSystemComponent).field0_0x0.DebugPtr;
  if (this_00 != (UParticleSystemComponent *)0x0) {
    UParticleSystemComponent::SetTemplate(this_00,param_1);
    if (this->bPostUpdateTickGroup != 0) {
      UActorComponent::SetTickGroup
                ((UActorComponent *)(this->ParticleSystemComponent).field0_0x0.DebugPtr,
                 TG_PostUpdateWork);
      return;
    }
  }
  return;
}

// SetVectorParameter @ 148131a00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall AEmitter::SetVectorParameter(AEmitter *this,FName param_1,TVector<double> *param_2)

{
  UParticleSystemComponent *pUVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  
  pUVar1 = (this->ParticleSystemComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UParticleSystemComponent *)0x0) {
    local_28 = *(undefined4 *)&param_2->field0_0x0;
    uStack_24 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
    uStack_20 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
    uStack_1c = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
    local_18 = (param_2->field0_0x0)._s_0.Z;
    (**(code **)(*(longlong *)pUVar1 + 0xaa8))(pUVar1,local_18,&local_28);
  }
  return;
}

// StaticRegisterNativesAEmitter @ 148137d30

void __cdecl AEmitter::StaticRegisterNativesAEmitter(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = Z_Construct_UClass_AEmitter_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// ToggleActive @ 14813c290

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall AEmitter::ToggleActive(AEmitter *this)

{
  UParticleSystemComponent *pUVar1;
  
  pUVar1 = (this->ParticleSystemComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UParticleSystemComponent *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0x2d0))();
    *(uint *)&this->field_0x2c8 =
         ((uint)((byte)((this->ParticleSystemComponent).field0_0x0.DebugPtr)->field_0x9a >> 2) ^
         *(uint *)&this->field_0x2c8) & 4 ^ *(uint *)&this->field_0x2c8;
  }
  return;
}

// ValidateGeneratedRepEnums @ 148143640

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AEmitter::ValidateGeneratedRepEnums
          (AEmitter *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&Name_bCurrentlyActive,L"bCurrentlyActive");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (param_1->ArrayNum < 0xb) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xa0);
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  else {
    FVar4.ComparisonIndex.Value = 0;
    FVar4.Number = 0;
  }
  if (Name_bCurrentlyActive != FVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\Emitter.gen.cpp"
                       ,0x49e,
                       L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AEmitter"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// execActivate @ 1481445f0

void __cdecl AEmitter::execActivate(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar1 = *(longlong **)&param_1[0x11].field_0x18;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xaf0))(plVar1,0);
  }
  *(uint *)&param_1[0x11].field_0x20 = *(uint *)&param_1[0x11].field_0x20 | 4;
  return;
}

// execDeactivate @ 148144640

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl AEmitter::execDeactivate(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UParticleSystemComponent **)&param_1[0x11].field_0x18 != (UParticleSystemComponent *)0x0) {
    UParticleSystemComponent::DeactivateSystem
              (*(UParticleSystemComponent **)&param_1[0x11].field_0x18);
  }
  *(uint *)&param_1[0x11].field_0x20 = *(uint *)&param_1[0x11].field_0x20 & 0xfffffffb;
  return;
}

// execIsActive @ 148144690

void __cdecl AEmitter::execIsActive(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x11].field_0x18 != 0) {
    *(byte *)param_3 = *(byte *)(*(longlong *)&param_1[0x11].field_0x18 + 0x9a) >> 4 & 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execOnParticleSystemFinished @ 1481446d0

void __cdecl AEmitter::execOnParticleSystemFinished(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x760))(param_1,local_res8);
  return;
}

// execOnRep_bCurrentlyActive @ 148144760

void __cdecl AEmitter::execOnRep_bCurrentlyActive(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000148144778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x768))();
  return;
}

// execSetActorParameter @ 148144790

void __cdecl AEmitter::execSetActorParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar2 = *(longlong **)&param_1[0x11].field_0x18;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0xab8))(plVar2,local_res8,local_res10);
  }
  return;
}

// execSetColorParameter @ 148144870

void __cdecl AEmitter::execSetColorParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  undefined8 local_res8;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar2 = *(longlong **)&param_1[0x11].field_0x18;
  if (plVar2 != (longlong *)0x0) {
    local_18 = local_28;
    uStack_14 = uStack_24;
    uStack_10 = uStack_20;
    uStack_c = uStack_1c;
    (**(code **)(*plVar2 + 0xab0))(plVar2,local_res8,&local_18);
  }
  return;
}

// execSetFloatParameter @ 148144960

void __cdecl AEmitter::execSetFloatParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar2 = *(longlong **)&param_1[0x11].field_0x18;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0xaa0))(plVar2,local_res10,local_res8[0]);
  }
  return;
}

// execSetMaterialParameter @ 148144a40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl AEmitter::execSetMaterialParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res8;
  UMaterialInterface *local_res10;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = (UMaterialInterface *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UParticleSystemComponent **)&param_1[0x11].field_0x18 != (UParticleSystemComponent *)0x0) {
    UParticleSystemComponent::SetMaterialParameter
              (*(UParticleSystemComponent **)&param_1[0x11].field_0x18,local_res8,local_res10);
  }
  return;
}

// execSetTemplate @ 148144b20

void __cdecl AEmitter::execSetTemplate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x770))(param_1,local_res8);
  return;
}

// execSetVectorParameter @ 148144bb0

void __cdecl AEmitter::execSetVectorParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  undefined8 local_res8;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar2 = *(longlong **)&param_1[0x11].field_0x18;
  if (plVar2 != (longlong *)0x0) {
    local_28 = local_48;
    uStack_24 = uStack_44;
    uStack_20 = uStack_40;
    uStack_1c = uStack_3c;
    local_18 = local_38;
    (**(code **)(*plVar2 + 0xaa8))(plVar2,local_res8,&local_28);
  }
  return;
}

// execToggleActive @ 148144ca0

void __cdecl AEmitter::execToggleActive(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong **)&param_1[0x11].field_0x18 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&param_1[0x11].field_0x18 + 0x2d0))();
    *(uint *)&param_1[0x11].field_0x20 =
         ((uint)(*(byte *)(*(longlong *)&param_1[0x11].field_0x18 + 0x9a) >> 2) ^
         *(uint *)&param_1[0x11].field_0x20) & 4 ^ *(uint *)&param_1[0x11].field_0x20;
  }
  return;
}

