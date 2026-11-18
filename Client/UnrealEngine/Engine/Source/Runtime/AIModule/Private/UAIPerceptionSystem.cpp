// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 46

// StaticClass @ 146f84f20

UClass * __cdecl UAIPerceptionSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIPerceptionSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIPerceptionSystem",
               &Z_Registration_Info_UClass_UAIPerceptionSystem.InnerSingleton,
               StaticRegisterNativesUAIPerceptionSystem,0x140,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<UAIPerceptionSystem>,
               InternalVTableHelperCtorCaller<UAIPerceptionSystem>,local_res8,
               UAISubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIPerceptionSystem.InnerSingleton;
}

// OnEvent<FAINoiseEvent,UAISense_Hearing> @ 146f8da10

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
UAIPerceptionSystem::OnEvent<FAINoiseEvent,UAISense_Hearing>
          (UAIPerceptionSystem *this,FAINoiseEvent *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  UClass *this_00;
  
  this_00 = UAISense_Hearing::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  bVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x14;
  if ((int)(uint)bVar1 < (this->Senses).ArrayNum) {
    if (((this->Senses).ArrayNum <= (int)(uint)bVar1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(longlong *)((this->Senses).AllocatorInstance.Data + (ulonglong)bVar1 * 8) != 0) {
      if (((this->Senses).ArrayNum <= (int)(uint)bVar1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UAISense_Hearing::RegisterEvent
                (*(UAISense_Hearing **)
                  ((this->Senses).AllocatorInstance.Data + (ulonglong)bVar1 * 8),param_1);
    }
  }
  return;
}

// OnEvent<FAIPredictionEvent,UAISense_Prediction> @ 146f8db10

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
UAIPerceptionSystem::OnEvent<FAIPredictionEvent,UAISense_Prediction>
          (UAIPerceptionSystem *this,FAIPredictionEvent *param_1)

{
  ForAnyElementType *pFVar1;
  byte bVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  AActor *pAVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UClass *this_00;
  longlong lVar9;
  
  this_00 = UAISense_Prediction::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  bVar2 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x14;
  if ((int)(uint)bVar2 < (this->Senses).ArrayNum) {
    if (((this->Senses).ArrayNum <= (int)(uint)bVar2) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(longlong *)((this->Senses).AllocatorInstance.Data + (ulonglong)bVar2 * 8) != 0) {
      if (((this->Senses).ArrayNum <= (int)(uint)bVar2) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar3 = *(longlong *)((this->Senses).AllocatorInstance.Data + (ulonglong)bVar2 * 8);
      pFVar1 = (ForAnyElementType *)(lVar3 + 0x90);
      if ((((FAIPredictionEvent *)pFVar1->Data <= param_1) &&
          (param_1 < (FAIPredictionEvent *)pFVar1->Data + *(int *)(lVar3 + 0x9c))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar8 = *(int *)(lVar3 + 0x98);
      if (iVar8 == *(int *)(lVar3 + 0x9c)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,pFVar1,(int *)(lVar3 + 0x9c));
      }
      lVar9 = (longlong)iVar8;
      *(int *)(lVar3 + 0x98) = iVar8 + 1;
      pFVar4 = pFVar1->Data;
      pAVar5 = (param_1->Requestor).field0_0x0.DebugPtr;
      *(AActor **)(pFVar4 + lVar9 * 0x18) = pAVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar5 != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pAVar5);
      }
      pAVar5 = (param_1->PredictedActor).field0_0x0.DebugPtr;
      *(AActor **)(pFVar4 + lVar9 * 0x18 + 8) = pAVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar5 != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pAVar5);
      }
      *(float *)(pFVar4 + lVar9 * 0x18 + 0x10) = param_1->TimeToPredict;
      *(undefined4 *)(lVar3 + 0x38) = 0;
    }
  }
  return;
}

// UAIPerceptionSystem @ 146f93b20

UAIPerceptionSystem * __thiscall
UAIPerceptionSystem::UAIPerceptionSystem(UAIPerceptionSystem *this,FVTableHelper *param_1)

{
  UAISubsystem::UAISubsystem((UAISubsystem *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  *(undefined8 *)&this->ListenerContainer = 0;
  *(undefined8 *)&(this->ListenerContainer).field_0x8 = 0;
  *(undefined8 *)&(this->ListenerContainer).field_0x20 = 0;
  *(undefined4 *)&(this->ListenerContainer).field_0x28 = 0;
  *(undefined4 *)&(this->ListenerContainer).field_0x2c = 0x80;
  *(undefined4 *)&(this->ListenerContainer).field_0x34 = 0;
  *(undefined4 *)&(this->ListenerContainer).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ListenerContainer).field_0x40 = 0;
  *(undefined4 *)&(this->ListenerContainer).field_0x48 = 0;
  (this->Senses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Senses).ArrayNum = 0;
  (this->Senses).ArrayMax = 0;
  *(undefined8 *)&this->StimuliSourceEndPlayDelegate = 0;
  *(undefined8 *)&(this->StimuliSourceEndPlayDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->StimuliSourceEndPlayDelegate).field_0x10 = 0;
  *(undefined8 *)&this->RegisteredStimuliSources = 0;
  *(undefined8 *)&(this->RegisteredStimuliSources).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredStimuliSources).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredStimuliSources).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredStimuliSources).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredStimuliSources).field_0x34 = 0;
  *(undefined4 *)&(this->RegisteredStimuliSources).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RegisteredStimuliSources).field_0x40 = 0;
  *(undefined4 *)&(this->RegisteredStimuliSources).field_0x48 = 0;
  (this->DelayedStimuli).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DelayedStimuli).ArrayNum = 0;
  (this->DelayedStimuli).ArrayMax = 0;
  (this->SourcesToRegister).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourcesToRegister).ArrayNum = 0;
  (this->SourcesToRegister).ArrayMax = 0;
  return this;
}

// UAIPerceptionSystem @ 146f93c00

UAIPerceptionSystem * __thiscall
UAIPerceptionSystem::UAIPerceptionSystem(UAIPerceptionSystem *this,FObjectInitializer *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  char *pcVar4;
  UAIPerceptionSystem *pUVar5;
  UObject *this_00;
  UFunction *pUVar6;
  char *pcVar7;
  FName local_res8;
  FName local_res18;
  UAIPerceptionSystem *local_res20;
  FName *local_48;
  FReadAccessScope local_40;
  
  UAISubsystem::UAISubsystem((UAISubsystem *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  *(undefined8 *)&this->ListenerContainer = 0;
  *(undefined8 *)&(this->ListenerContainer).field_0x8 = 0;
  *(undefined8 *)&(this->ListenerContainer).field_0x20 = 0;
  *(undefined4 *)&(this->ListenerContainer).field_0x28 = 0;
  *(undefined4 *)&(this->ListenerContainer).field_0x2c = 0x80;
  *(undefined4 *)&(this->ListenerContainer).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ListenerContainer).field_0x34 = 0;
  *(undefined8 *)&(this->ListenerContainer).field_0x40 = 0;
  *(undefined4 *)&(this->ListenerContainer).field_0x48 = 0;
  (this->Senses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Senses).ArrayNum = 0;
  (this->Senses).ArrayMax = 0;
  *(undefined8 *)&this->StimuliSourceEndPlayDelegate = 0;
  this->PerceptionAgingRate = 0.3;
  *(undefined8 *)&(this->StimuliSourceEndPlayDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->StimuliSourceEndPlayDelegate).field_0x10 = 0;
  *(undefined8 *)&this->RegisteredStimuliSources = 0;
  *(undefined8 *)&(this->RegisteredStimuliSources).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredStimuliSources).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredStimuliSources).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredStimuliSources).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredStimuliSources).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredStimuliSources).field_0x34 = 0;
  *(undefined8 *)&(this->RegisteredStimuliSources).field_0x40 = 0;
  *(undefined4 *)&(this->RegisteredStimuliSources).field_0x48 = 0;
  this->bHandlePawnNotification = 0;
  (this->DelayedStimuli).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DelayedStimuli).ArrayNum = 0;
  (this->DelayedStimuli).ArrayMax = 0;
  (this->SourcesToRegister).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourcesToRegister).ArrayNum = 0;
  (this->SourcesToRegister).ArrayMax = 0;
  this->NextStimuliAgingTick = 0.0;
  this->CurrentTime = 0.0;
  pcVar4 = strstr("&UAIPerceptionSystem::OnPerceptionStimuliSourceEndPlay","::");
  if (pcVar4 == (char *)0x0) {
LAB_146f93d4b:
    pcVar7 = &DAT_00000002;
  }
  else {
    do {
      pcVar7 = pcVar4;
      pcVar4 = strstr(pcVar7 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar7 == (char *)0x0) goto LAB_146f93d4b;
    pcVar7 = pcVar7 + 2;
    if (*pcVar7 != '0') goto LAB_146f93d7e;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UAIPerceptionSystem *)(*pcVar2)();
    return pUVar5;
  }
LAB_146f93d7e:
  ::FName::FName(&local_res18,pcVar7);
  local_res8 = local_res18;
  local_res20 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UAIPerceptionSystem *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=
            ((FWeakObjectPtr *)&(this->StimuliSourceEndPlayDelegate).field_0x8,
             (FObjectPtr)&local_res20);
  *(uint *)&(this->StimuliSourceEndPlayDelegate).field_0x10 = local_res8.ComparisonIndex.Value;
  *(uint *)&(this->StimuliSourceEndPlayDelegate).field_0x14 = local_res8.Number;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->StimuliSourceEndPlayDelegate,&local_40);
  if ((*(longlong *)&(this->StimuliSourceEndPlayDelegate).field_0x10 == 0) ||
     (this_00 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    &(this->StimuliSourceEndPlayDelegate).field_0x8),
     this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_40);
  }
  else {
    FVar1.ComparisonIndex.Value = *(uint *)&(this->StimuliSourceEndPlayDelegate).field_0x10;
    FVar1.Number = *(uint *)&(this->StimuliSourceEndPlayDelegate).field_0x14;
    pUVar6 = UObject::FindFunction(this_00,FVar1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_40);
    if (pUVar6 != (UFunction *)0x0) {
      return this;
    }
  }
  local_48 = &local_res8;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,AActor_*,enum_EEndPlayReason::Type>::
  __Internal_BindDynamic<UAIPerceptionSystem>'::__l2::<lambda_1>::operator()(&local_48);
  return this;
}

// ~UAIPerceptionSystem @ 146f969b0

void __thiscall UAIPerceptionSystem::~UAIPerceptionSystem(UAIPerceptionSystem *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  pFVar1 = (this->SourcesToRegister).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DelayedStimuli).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->RegisteredStimuliSources).field_0x48 = 0;
  pvVar2 = *(void **)&(this->RegisteredStimuliSources).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<AActor_const_*,FPerceptionStimuliSource>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<AActor_const_*,FPerceptionStimuliSource>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<AActor_const_*,FPerceptionStimuliSource>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RegisteredStimuliSources);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->StimuliSourceEndPlayDelegate);
  pFVar1 = (this->Senses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ListenerContainer).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ListenerContainer).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ListenerContainer);
  UAISubsystem::~UAISubsystem((UAISubsystem *)this);
  return;
}

// AgeStimuli @ 146f9b5d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UAIPerceptionSystem::AgeStimuli(UAIPerceptionSystem *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  UAIPerceptionComponent *this_00;
  ulonglong uVar6;
  longlong lVar7;
  bool bVar8;
  uint uVar9;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
  *local_28;
  undefined2 local_20;
  
  if ((param_1 < 0.0) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4495401471105302773>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AIPerceptionSystem.cpp"
                         ,0xf5,"Amount >= 0.f"), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar2 = false;
  bVar8 = false;
  TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
              *)&this->ListenerContainer);
  local_20 = 0;
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar6 = local_88._24_8_ >> 0x20;
  local_28 = (TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
              *)&this->ListenerContainer;
  if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      lVar7 = (longlong)(int)uVar6 * 0x60 + *local_58;
      bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar7 + 8));
      bVar8 = bVar2;
      if (bVar4) {
        this_00 = (UAIPerceptionComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar7 + 8));
        bVar2 = UAIPerceptionComponent::AgeStimuli(this_00,param_1);
        if (bVar2) {
          *(uint *)(lVar7 + 0x4c) = *(uint *)(lVar7 + 0x4c) | 1;
          bVar8 = true;
        }
      }
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar6 = (ulonglong)uStack_3c;
      bVar2 = bVar8;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if (((char)local_20 != '\0') && (local_20._1_1_ != '\0')) {
      uVar9 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar9 < 4) {
        iVar5 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
        lVar7 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar7 & 0x1f);
      }
      if (((0 < (int)uVar9) && (local_28->HashSize < iVar5)) || (iVar5 < local_28->HashSize)) {
        local_28->HashSize = iVar5;
        TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  return bVar8;
}

// DeliverDelayedStimuli @ 146fa20b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UAIPerceptionSystem::DeliverDelayedStimuli
          (UAIPerceptionSystem *this,EDelayedStimulusSorting param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  FPerceptionListener *this_00;
  AActor *pAVar9;
  UAIPerceptionComponent *this_01;
  undefined1 *puVar10;
  uint uVar11;
  longlong lVar12;
  FIdentityFunctor local_res8 [8];
  
  iVar8 = (this->DelayedStimuli).ArrayNum;
  if (iVar8 < 1) {
    return false;
  }
  if (param_1 == RequiresSorting) {
    AlgoImpl::
    IntroSortInternal<UAIPerceptionSystem::FDelayedStimulus,int,FIdentityFunctor,TDereferenceWrapper<UAIPerceptionSystem::FDelayedStimulus,_UAIPerceptionSystem::DeliverDelayedStimuli_::__l2::FTimestampSort>_>
              ((FDelayedStimulus *)(this->DelayedStimuli).AllocatorInstance.Data,iVar8,local_res8[0]
               ,(FTimestampSort *)local_res8);
  }
  uVar11 = 0;
  if (0 < (this->DelayedStimuli).ArrayNum) {
    lVar12 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar11 < (this->DelayedStimuli).ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar2 = (this->DelayedStimuli).AllocatorInstance.Data + lVar12;
      if (this->CurrentTime < *(double *)pFVar2 || this->CurrentTime == *(double *)pFVar2) break;
      uVar7 = 0;
      if ((int)uVar11 < (this->DelayedStimuli).ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar2 = (this->DelayedStimuli).AllocatorInstance.Data;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_static_struct_FAIGenericID<struct_FPerceptionListenerCounter>___cdecl_FAIGenericID<FPerceptionListenerCounter>::InvalidID(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_struct_FAIGenericID<struct_FPerceptionListenerCounter>___cdecl_FAIGenericID<FPerceptionListenerCounter>::InvalidID(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_struct_FAIGenericID<struct_FPerceptionListenerCounter>___cdecl_FAIGenericID<FPerceptionListenerCounter>::InvalidID(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        _InvalidIDInstance = 0xffffffff;
        _Init_thread_footer(&`public:_static_struct_FAIGenericID<struct_FPerceptionListenerCounter>___cdecl_FAIGenericID<FPerceptionListenerCounter>::InvalidID(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      uVar7 = *(uint *)(pFVar2 + lVar12 + 8);
      if ((uVar7 != _InvalidIDInstance) &&
         (*(int *)&(this->ListenerContainer).field_0x8 !=
          *(int *)&(this->ListenerContainer).field_0x34)) {
        puVar3 = *(undefined1 **)&(this->ListenerContainer).field_0x40;
        puVar10 = &(this->ListenerContainer).field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar10 = puVar3;
        }
        iVar8 = *(int *)(puVar10 +
                        (ulonglong)(*(int *)&(this->ListenerContainer).field_0x48 - 1U & uVar7) * 4)
        ;
        if (iVar8 != -1) {
          do {
            if (*(uint *)((longlong)iVar8 * 0x60 + *(longlong *)&this->ListenerContainer) == uVar7)
            {
              this_00 = TMapBase<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>_>
                        ::FindChecked((TMapBase<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>_>
                                       *)&this->ListenerContainer,
                                      (FAIGenericID<FPerceptionListenerCounter> *)
                                      (pFVar2 + lVar12 + 8));
              bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
              if ((!bVar5) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ListenerEntry.Listener.IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AIPerceptionSystem.cpp"
                                     ,0x207,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              pAVar9 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar2 + lVar12 + 0xc));
              this_00->bHasStimulusToProcess = 1;
              this_01 = (UAIPerceptionComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
              UAIPerceptionComponent::RegisterStimulus
                        (this_01,pAVar9,(FAIStimulus *)(pFVar2 + lVar12 + 0x18));
              break;
            }
            iVar8 = *(int *)((longlong)iVar8 * 0x60 + 0x58 + *(longlong *)&this->ListenerContainer);
          } while (iVar8 != -1);
        }
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x70;
    } while ((int)uVar11 < (this->DelayedStimuli).ArrayNum);
  }
  uVar7 = 0;
  if ((int)uVar11 <= (this->DelayedStimuli).ArrayNum) {
    uVar7 = ~uVar11 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if (uVar11 != 0) {
    pFVar2 = (this->DelayedStimuli).AllocatorInstance.Data;
    iVar8 = (this->DelayedStimuli).ArrayNum - uVar11;
    if (iVar8 != 0) {
      memmove(pFVar2,pFVar2 + (longlong)(int)uVar11 * 0x70,(longlong)iVar8 * 0x70);
    }
    piVar1 = &(this->DelayedStimuli).ArrayNum;
    *piVar1 = *piVar1 - uVar11;
  }
  return 0 < (int)uVar11;
}

// DescribeSelfToGameplayDebugger @ 146fa2870

void __thiscall
UAIPerceptionSystem::DescribeSelfToGameplayDebugger
          (UAIPerceptionSystem *this,FGameplayDebuggerCategory *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  FString local_28;
  
  ::FString::PrintfImpl(&local_28,L"%d Listeners");
  FGameplayDebuggerCategory::AddTextLine(param_1,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar4 = (this->Senses).AllocatorInstance.Data;
  iVar2 = (this->Senses).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Senses).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UAISense>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    plVar3 = *(longlong **)pFVar4;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x2e8))(plVar3,this,param_1);
    }
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// GetCurrent @ 146fad1a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UAIPerceptionSystem * __cdecl UAIPerceptionSystem::GetCurrent(UWorld *param_1)

{
  int iVar1;
  UAISystemBase *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  UAIPerceptionSystem *pUVar7;
  
  pUVar2 = (param_1->AISystem).field0_0x0.DebugPtr;
  if (pUVar2 == (UAISystemBase *)0x0) {
    return (UAIPerceptionSystem *)0x0;
  }
  pUVar6 = Z_Construct_UClass_UAISystem_NoRegister();
  lVar3 = pUVar2->_padding_;
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)(lVar3 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar6->_padding_)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Cast<UAISystem>(World.GetAISystem())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AIPerceptionSystem.cpp"
                       ,0x11e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar7 = (UAIPerceptionSystem *)(*pcVar4)();
      return pUVar7;
    }
  }
  return *(UAIPerceptionSystem **)
          &(param_1->AISystem).field0_0x0.DebugPtr[2].bInstantiateAISystemOnClient;
}

// GetCurrent @ 146fad230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UAIPerceptionSystem * __cdecl UAIPerceptionSystem::GetCurrent(UObject *param_1)

{
  int iVar1;
  UAISystemBase *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if (param_1 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if (((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
         &pUVar3->_padding_)) &&
       (param_1 = (UObject *)UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull),
       (UWorld *)param_1 == (UWorld *)0x0)) {
      return (UAIPerceptionSystem *)0x0;
    }
    pUVar2 = (((UWorld *)param_1)->AISystem).field0_0x0.DebugPtr;
    if (pUVar2 != (UAISystemBase *)0x0) {
      pUVar3 = Z_Construct_UClass_UAISystem_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return *(UAIPerceptionSystem **)&pUVar2[2].bInstantiateAISystemOnClient;
      }
      pFVar4 = GetTypeName<UAISystem>(&local_28);
      pwVar6 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UAISystemBase>(&local_18,pUVar2);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar5);
    }
  }
  return (UAIPerceptionSystem *)0x0;
}

// GetPrivateStaticClass @ 146fb3850

UClass * __cdecl UAIPerceptionSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIPerceptionSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIPerceptionSystem",
               &Z_Registration_Info_UClass_UAIPerceptionSystem.InnerSingleton,
               StaticRegisterNativesUAIPerceptionSystem,0x140,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<UAIPerceptionSystem>,
               InternalVTableHelperCtorCaller<UAIPerceptionSystem>,local_res8,
               UAISubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIPerceptionSystem.InnerSingleton;
}

// GetSenseClassForStimulus @ 146fb4710

TSubclassOf<UAISense> __cdecl
UAIPerceptionSystem::GetSenseClassForStimulus(UObject *param_1,FAIStimulus *param_2)

{
  byte bVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  UAIPerceptionSystem *pUVar5;
  TSubclassOf<UAISense> TVar6;
  longlong in_R8;
  
  *(undefined8 *)param_1 = 0;
  pUVar5 = GetCurrent((UObject *)param_2);
  if (pUVar5 == (UAIPerceptionSystem *)0x0) {
    return (TSubclassOf<UAISense>)(TObjectPtr<UClass>)param_1;
  }
  bVar1 = *(byte *)(in_R8 + 0x48);
  if ((int)(uint)bVar1 < (pUVar5->Senses).ArrayNum) {
    if ((pUVar5->Senses).ArrayNum <= (int)(uint)bVar1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Class.field0_0x0 = (TObjectPtr<UClass>)(*pcVar3)();
        return (TSubclassOf<UAISense>)TVar6.Class.field0_0x0;
      }
    }
    if (*(longlong *)((pUVar5->Senses).AllocatorInstance.Data + (ulonglong)bVar1 * 8) != 0) {
      bVar1 = *(byte *)(in_R8 + 0x48);
      if ((pUVar5->Senses).ArrayNum <= (int)(uint)bVar1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar6.Class.field0_0x0 = (TObjectPtr<UClass>)(*pcVar3)();
          return (TSubclassOf<UAISense>)TVar6.Class.field0_0x0;
        }
      }
      pUVar2 = *(UObject **)
                (*(longlong *)((pUVar5->Senses).AllocatorInstance.Data + (ulonglong)bVar1 * 8) +
                0x10);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      *(UObject **)param_1 = pUVar2;
    }
  }
  return (TSubclassOf<UAISense>)(TObjectPtr<UClass>)param_1;
}

// GetStatId @ 146fb5810

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall UAIPerceptionSystem::GetStatId(UAIPerceptionSystem *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UAIPerceptionSystem::GetStatId(void)const_::_2_::FStat_UAIPerceptionSystem>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_UAIPerceptionSystem ==
          (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UAIPerceptionSystem::GetStatId(void)const_::_2_::FStat_UAIPerceptionSystem>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"UAIPerceptionSystem");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_UAIPerceptionSystem,*pFVar1,
                   L"UAIPerceptionSystem","STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true
                   ,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_UAIPerceptionSystem;
  if (StatPtr_UAIPerceptionSystem ==
      (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UAIPerceptionSystem::GetStatId(void)const_::_2_::FStat_UAIPerceptionSystem>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"UAIPerceptionSystem");
    FVar2 = (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UAIPerceptionSystem::GetStatId(void)const_::_2_::FStat_UAIPerceptionSystem>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_UAIPerceptionSystem,*pFVar1,
                         L"UAIPerceptionSystem","STATGROUP_Tickables","STATCAT_Advanced",
                         L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// IsSenseInstantiated @ 146fba0b0

bool __thiscall
UAIPerceptionSystem::IsSenseInstantiated
          (UAIPerceptionSystem *this,FAINamedID<FAISenseCounter> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  bVar3 = FAINamedID<FAISenseCounter>::IsValid(param_1);
  if (bVar3) {
    bVar1 = param_1->Index;
    if ((int)(uint)bVar1 < (this->Senses).ArrayNum) {
      if ((this->Senses).ArrayNum <= (int)(uint)bVar1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      if (*(longlong *)((this->Senses).AllocatorInstance.Data + (ulonglong)bVar1 * 8) != 0) {
        return true;
      }
    }
  }
  return false;
}

// MakeNoiseImpl @ 146fbb9c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UAIPerceptionSystem::MakeNoiseImpl
          (AActor *param_1,float param_2,APawn *param_3,TVector<double> *param_4,float param_5,
          FName param_6)

{
  UWorld *pUVar1;
  UAIPerceptionSystem *this;
  APawn *pAVar2;
  FAINoiseEvent local_58;
  
  pAVar2 = (APawn *)param_1;
  if ((byte)LogAIPerception._0_1_ < 3) {
    if ((param_1 == (AActor *)0x0) && (pAVar2 = param_3, param_3 == (APawn *)0x0)) {
      return;
    }
  }
  else if ((param_1 == (AActor *)0x0) && (pAVar2 = param_3, param_3 == (APawn *)0x0)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAIPerception);
    return;
  }
  pUVar1 = AActor::GetWorld((AActor *)pAVar2);
  if (pUVar1 != (UWorld *)0x0) {
    local_58.NoiseLocation.field0_0x0._s_0.X = (param_4->field0_0x0)._s_0.X;
    local_58.NoiseLocation.field0_0x0._s_0.Y = (param_4->field0_0x0)._s_0.Y;
    local_58.Age = 0.0;
    local_58.NoiseLocation.field0_0x0._s_0.Z = (param_4->field0_0x0)._s_0.Z;
    if (param_3 != (APawn *)0x0) {
      param_1 = (AActor *)param_3;
    }
    local_58.MaxRange = param_5;
    local_58.Loudness = param_2;
    local_58.Instigator.field0_0x0 = (TObjectPtr<AActor>_u_0)param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && ((APawn *)param_1 != (APawn *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_58.Tag = param_6;
    local_58.TeamIdentifier = (FGenericTeamId)FGenericTeamId::NoTeam.TeamID;
    FAINoiseEvent::Compile(&local_58);
    this = GetCurrent((UObject *)pUVar1);
    if (this != (UAIPerceptionSystem *)0x0) {
      OnEvent<FAINoiseEvent,UAISense_Hearing>(this,&local_58);
    }
  }
  return;
}

// OnListenerConfigUpdated @ 146fbce40

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
UAIPerceptionSystem::OnListenerConfigUpdated
          (UAIPerceptionSystem *this,FAINamedID<FAISenseCounter> *param_1,
          UAIPerceptionComponent *param_2)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FAIGenericID<FPerceptionListenerCounter> FVar11;
  uint uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_AI_PerceptionSys> FVar14;
  undefined4 extraout_var;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint *puVar15;
  UAIPerceptionComponent *pUVar16;
  FStaticBasicLogRecord *pFVar17;
  undefined1 *puVar18;
  FName FVar19;
  uint *puVar20;
  FWeakObjectPtr *this_02;
  uint uVar21;
  FColor_u_0 local_res20 [2];
  FName local_60;
  LARGE_INTEGER local_58;
  FName local_50;
  FName local_48;
  FStatMessage local_38;
  
  puVar20 = (uint *)0x0;
  FVar14 = StatPtr_STAT_AI_PerceptionSys;
  if (StatPtr_STAT_AI_PerceptionSys == (FThreadSafeStaticStat<FStat_STAT_AI_PerceptionSys>)0x0) {
    pFVar13 = ::FName::FName(&local_50,"STAT_AI_PerceptionSys");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_AI_PerceptionSys>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_PerceptionSys,*pFVar13,
                        L"Perception System","STATGROUP_AI","STATCAT_Advanced",L"AI",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar14;
  bVar7 = false;
  bVar9 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  if ((FVar19.ComparisonIndex.Value.Value == 0) && (FVar19.Number == 0)) {
LAB_146fbcf88:
    bVar8 = false;
    FVar19 = local_48;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_60.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_60.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_60,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AIPerceptionSystem.cpp"
                   ,0x146);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146fbcf88;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar8 = true;
  }
  bVar10 = IsSenseInstantiated(this,param_1);
  if (bVar10) {
    uVar3 = (param_2->PerceptionListenerId).Index;
    FVar11 = FAIGenericID<FPerceptionListenerCounter>::InvalidID();
    if ((uVar3 != *(uint *)CONCAT44(extraout_var,FVar11.Index)) &&
       (*(int *)&(this->ListenerContainer).field_0x8 !=
        *(int *)&(this->ListenerContainer).field_0x34)) {
      puVar18 = *(undefined1 **)&(this->ListenerContainer).field_0x40;
      if (puVar18 == (undefined1 *)0x0) {
        puVar18 = &(this->ListenerContainer).field_0x38;
      }
      uVar21 = *(uint *)(puVar18 +
                        (ulonglong)(*(int *)&(this->ListenerContainer).field_0x48 - 1U & uVar3) * 4)
      ;
      if (uVar21 != 0xffffffff) {
        lVar4 = *(longlong *)&this->ListenerContainer;
        uVar12 = uVar21;
        do {
          if (*(uint *)((longlong)(int)uVar12 * 0x60 + lVar4) == uVar3) goto LAB_146fbd110;
          uVar12 = *(uint *)((longlong)(int)uVar12 * 0x60 + 0x58 + lVar4);
        } while (uVar12 != 0xffffffff);
      }
    }
    if ((byte)LogAIPerception._0_1_ < 3) goto LAB_146fbd038;
    pFVar17 = &::LOG_Static;
  }
  else {
    if ((byte)LogAIPerception._0_1_ < 3) goto LAB_146fbd038;
    pFVar17 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar17,(FLogCategoryBase *)&LogAIPerception);
LAB_146fbd038:
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar8) && (FVar19 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar19.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_58);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_58.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_58.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_58.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_58.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
  while (uVar21 = puVar15[0x16], uVar21 != 0xffffffff) {
LAB_146fbd110:
    puVar15 = (uint *)((longlong)(int)uVar21 * 0x60 + lVar4);
    if (*puVar15 == uVar3) {
      puVar20 = puVar15;
      if (puVar15 != (uint *)0x0) goto LAB_146fbd15c;
      break;
    }
  }
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("Pair != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                      ,0x288,L"");
  puVar15 = puVar20;
  if (bVar10) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_146fbd15c:
  this_02 = (FWeakObjectPtr *)(puVar15 + 2);
  bVar10 = FWeakObjectPtr::IsValid(this_02);
  if (((!bVar10) ||
      (pUVar16 = (UAIPerceptionComponent *)FWeakObjectPtr::Get(this_02), pUVar16 != param_2)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ListenerEntry.Listener.IsValid() && ListenerEntry.Listener.Get() == &Listener"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AIPerceptionSystem.cpp"
                          ,0x156,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar2 = param_1->Index;
  if (((this->Senses).ArrayNum <= (int)(uint)bVar2) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  plVar5 = *(longlong **)((this->Senses).AllocatorInstance.Data + (ulonglong)bVar2 * 8);
  (**(code **)(*plVar5 + 0x2e0))(plVar5,this_02);
  goto LAB_146fbd038;
}

// OnListenerForgetsActor @ 146fbd490

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
UAIPerceptionSystem::OnListenerForgetsActor
          (UAIPerceptionSystem *this,UAIPerceptionComponent *param_1,AActor *param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  FAIGenericID<FPerceptionListenerCounter> FVar7;
  uint uVar8;
  undefined4 extraout_var;
  undefined1 *puVar9;
  FScriptContainerElement *pFVar10;
  uint *puVar11;
  undefined1 local_res10 [24];
  
  uVar2 = (param_1->PerceptionListenerId).Index;
  FVar7 = FAIGenericID<FPerceptionListenerCounter>::InvalidID();
  if (uVar2 != *(uint *)CONCAT44(extraout_var,FVar7.Index)) {
    if (*(int *)&(this->ListenerContainer).field_0x8 !=
        *(int *)&(this->ListenerContainer).field_0x34) {
      puVar9 = *(undefined1 **)&(this->ListenerContainer).field_0x40;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &(this->ListenerContainer).field_0x38;
      }
      uVar8 = *(uint *)(puVar9 + (ulonglong)
                                 (*(int *)&(this->ListenerContainer).field_0x48 - 1U & uVar2) * 4);
      if (uVar8 != 0xffffffff) {
        do {
          puVar11 = (uint *)((longlong)(int)uVar8 * 0x60 + *(longlong *)&this->ListenerContainer);
          if (*puVar11 == uVar2) {
            if (puVar11 == (uint *)0x0) goto LAB_146fbd51f;
            goto LAB_146fbd545;
          }
          uVar8 = puVar11[0x16];
        } while (uVar8 != 0xffffffff);
      }
    }
    puVar11 = (uint *)0x0;
LAB_146fbd51f:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
LAB_146fbd545:
    pFVar10 = (this->Senses).AllocatorInstance.Data;
    iVar3 = (this->Senses).ArrayNum;
    pFVar1 = pFVar10 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->Senses).ArrayNum != iVar3) {
        `TCheckedPointerIterator<TObjectPtr<UAISense>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar10 == pFVar1) break;
      plVar4 = *(longlong **)pFVar10;
      if (((plVar4 != (longlong *)0x0) && ((*(uint *)((longlong)plVar4 + 0x2c) >> 2 & 1) != 0)) &&
         ((puVar11[4] >> (*(byte *)((longlong)plVar4 + 0x3c) & 0x1f) & 1) != 0)) {
        (**(code **)(*plVar4 + 0x2d0))(plVar4,puVar11 + 2,param_2);
      }
      pFVar10 = pFVar10 + 8;
    }
  }
  return;
}

// OnListenerForgetsAll @ 146fbd700

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
UAIPerceptionSystem::OnListenerForgetsAll(UAIPerceptionSystem *this,UAIPerceptionComponent *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  FAIGenericID<FPerceptionListenerCounter> FVar7;
  uint uVar8;
  undefined4 extraout_var;
  undefined1 *puVar9;
  FScriptContainerElement *pFVar10;
  uint *puVar11;
  undefined1 local_res10 [16];
  
  uVar2 = (param_1->PerceptionListenerId).Index;
  FVar7 = FAIGenericID<FPerceptionListenerCounter>::InvalidID();
  if (uVar2 != *(uint *)CONCAT44(extraout_var,FVar7.Index)) {
    if (*(int *)&(this->ListenerContainer).field_0x8 !=
        *(int *)&(this->ListenerContainer).field_0x34) {
      puVar9 = *(undefined1 **)&(this->ListenerContainer).field_0x40;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &(this->ListenerContainer).field_0x38;
      }
      uVar8 = *(uint *)(puVar9 + (ulonglong)
                                 (*(int *)&(this->ListenerContainer).field_0x48 - 1U & uVar2) * 4);
      if (uVar8 != 0xffffffff) {
        do {
          puVar11 = (uint *)((longlong)(int)uVar8 * 0x60 + *(longlong *)&this->ListenerContainer);
          if (*puVar11 == uVar2) {
            if (puVar11 == (uint *)0x0) goto LAB_146fbd77f;
            goto LAB_146fbd7a5;
          }
          uVar8 = puVar11[0x16];
        } while (uVar8 != 0xffffffff);
      }
    }
    puVar11 = (uint *)0x0;
LAB_146fbd77f:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
LAB_146fbd7a5:
    pFVar10 = (this->Senses).AllocatorInstance.Data;
    iVar3 = (this->Senses).ArrayNum;
    pFVar1 = pFVar10 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->Senses).ArrayNum != iVar3) {
        `TCheckedPointerIterator<TObjectPtr<UAISense>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar10 == pFVar1) break;
      plVar4 = *(longlong **)pFVar10;
      if (((plVar4 != (longlong *)0x0) && ((*(uint *)((longlong)plVar4 + 0x2c) >> 2 & 1) != 0)) &&
         ((puVar11[4] >> (*(byte *)((longlong)plVar4 + 0x3c) & 0x1f) & 1) != 0)) {
        (**(code **)(*plVar4 + 0x2d8))(plVar4,puVar11 + 2);
      }
      pFVar10 = pFVar10 + 8;
    }
  }
  return;
}

// OnListenerRemoved @ 146fbda60

void __thiscall
UAIPerceptionSystem::OnListenerRemoved(UAIPerceptionSystem *this,FPerceptionListener *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  FReadAccessScope local_38;
  
  pFVar5 = (this->Senses).AllocatorInstance.Data;
  iVar2 = (this->Senses).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Senses).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UAISense>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    lVar3 = *(longlong *)pFVar5;
    if ((lVar3 != 0) &&
       (((uint)(param_1->Filter).AcceptedChannelsMask >> (*(byte *)(lVar3 + 0x3c) & 0x1f) & 1) != 0)
       ) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar3 + 0x78),&local_38)
      ;
      if ((*(int *)(lVar3 + 0x88) != 0) &&
         (plVar4 = *(longlong **)(lVar3 + 0x80), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x68))(plVar4,param_1);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
    }
    pFVar5 = pFVar5 + 8;
  }
  return;
}

// OnListenerUpdate @ 146fbdec0

void __thiscall
UAIPerceptionSystem::OnListenerUpdate(UAIPerceptionSystem *this,FPerceptionListener *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  FReadAccessScope local_38;
  
  pFVar5 = (this->Senses).AllocatorInstance.Data;
  iVar2 = (this->Senses).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Senses).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UAISense>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    lVar3 = *(longlong *)pFVar5;
    if (lVar3 != 0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar3 + 0x60),&local_38)
      ;
      if ((*(int *)(lVar3 + 0x70) != 0) &&
         (plVar4 = *(longlong **)(lVar3 + 0x68), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x68))(plVar4,param_1);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
    }
    pFVar5 = pFVar5 + 8;
  }
  return;
}

// OnNewListener @ 146fbf650

void __thiscall
UAIPerceptionSystem::OnNewListener(UAIPerceptionSystem *this,FPerceptionListener *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  FReadAccessScope local_38;
  
  pFVar5 = (this->Senses).AllocatorInstance.Data;
  iVar2 = (this->Senses).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Senses).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UAISense>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    lVar3 = *(longlong *)pFVar5;
    if ((lVar3 != 0) &&
       (((uint)(param_1->Filter).AcceptedChannelsMask >> (*(byte *)(lVar3 + 0x3c) & 0x1f) & 1) != 0)
       ) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar3 + 0x48),&local_38)
      ;
      if ((*(int *)(lVar3 + 0x58) != 0) &&
         (plVar4 = *(longlong **)(lVar3 + 0x50), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x68))(plVar4,param_1);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
    }
    pFVar5 = pFVar5 + 8;
  }
  return;
}

// OnNewPawn @ 146fbfba0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UAIPerceptionSystem::OnNewPawn(UAIPerceptionSystem *this,APawn *param_1)

{
  FScriptContainerElement *pFVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  APawn *local_res18 [2];
  FAINamedID<FAISenseCounter> local_68;
  FPerceptionSourceRegistration local_58;
  
  if (this->bHandlePawnNotification != 0) {
    iVar3 = (this->Senses).ArrayNum;
    pFVar8 = (this->Senses).AllocatorInstance.Data;
    pFVar1 = pFVar8 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->Senses).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UAISense>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar8 == pFVar1) break;
      plVar4 = *(longlong **)pFVar8;
      if (plVar4 != (longlong *)0x0) {
        if ((*(byte *)((longlong)plVar4 + 0x2c) & 1) != 0) {
          (**(code **)(*plVar4 + 0x2f0))(plVar4,param_1);
        }
        if ((*(uint *)((longlong)plVar4 + 0x2c) >> 1 & 1) != 0) {
          bVar2 = *(byte *)((longlong)plVar4 + 0x3c);
          FVar5 = *(FName *)(plVar4 + 8);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                                   ::__l2::_thread_safe_static_guard_0__),
             `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
            ::__l2::InvalidIDInstance = (FAINamedID<struct_FAISenseCounter>)0xff;
            ::FName::FName((FName *)&DAT_1551c48a4,L"Invalid");
            _Init_thread_footer(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          if (((uint)bVar2 ==
               (uint)(byte)`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                           ::__l2::InvalidIDInstance) ||
             ((this->Senses).ArrayNum <= (int)(uint)bVar2)) {
LAB_146fbfcd3:
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSenseInstantiated(SenseID)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AIPerceptionSystem.cpp"
                               ,0x23c,L"");
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          else {
            if (((this->Senses).ArrayNum <= (int)(uint)bVar2) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (*(longlong *)((this->Senses).AllocatorInstance.Data + (ulonglong)bVar2 * 8) == 0)
            goto LAB_146fbfcd3;
          }
          local_68.Index = bVar2;
          local_68.Name = FVar5;
          bVar7 = IsSenseInstantiated(this,&local_68);
          if ((!bVar7) &&
             (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<4495401471105302637>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AIPerceptionSystem.cpp"
                                 ,0x6d,"IsSenseInstantiated(SenseID)"), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_58.SenseID.Index = bVar2;
          local_58.SenseID.Name = FVar5;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (APawn *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          local_58.Source.WeakPtr.ObjectIndex = 0;
          local_58.Source.WeakPtr.ObjectSerialNumber = 0;
          local_res18[0] = param_1;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (APawn *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          FWeakObjectPtr::operator=(&local_58.Source.WeakPtr,(FObjectPtr)local_res18);
          TArray<UAIPerceptionSystem::FPerceptionSourceRegistration,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<UAIPerceptionSystem::FPerceptionSourceRegistration>
                    (&this->SourcesToRegister,&local_58);
        }
      }
      pFVar8 = pFVar8 + 8;
    }
  }
  return;
}

// OnPerceptionStimuliSourceEndPlay @ 146fc1830

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
UAIPerceptionSystem::OnPerceptionStimuliSourceEndPlay
          (UAIPerceptionSystem *this,AActor *param_1,Type param_2)

{
  undefined8 local_res20;
  
  local_res20 = 0;
  UnregisterSource(this,param_1,(TSubclassOf<UAISense>)&local_res20);
  return;
}

// PerformSourceRegistration @ 146fc26b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAIPerceptionSystem::PerformSourceRegistration(UAIPerceptionSystem *this)

{
  TMap<AActor_const_*,FPerceptionStimuliSource,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<AActor_const_*,FPerceptionStimuliSource,0>_>
  *this_00;
  FScriptContainerElement FVar1;
  int iVar2;
  FName FVar3;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  UObject *pUVar9;
  bool bVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_AI_PerceptionSys> FVar13;
  uint uVar14;
  undefined1 *puVar15;
  FNameEntryId FVar16;
  longlong *plVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  uint local_res8;
  uint uStackX_c;
  FColor_u_0 local_res10 [2];
  int local_res18 [2];
  UObject *local_res20;
  FName local_b8;
  FScriptContainerElement *local_b0;
  FName local_a8;
  FName local_a0;
  UObject **local_90;
  UObject *local_88;
  TScriptDelegate<FNotThreadSafeDelegateMode> local_80;
  FName local_68;
  FReadAccessScope local_60;
  
  FVar13 = StatPtr_STAT_AI_PerceptionSys;
  if (StatPtr_STAT_AI_PerceptionSys == (FThreadSafeStaticStat<FStat_STAT_AI_PerceptionSys>)0x0) {
    pFVar12 = ::FName::FName(&local_68,"STAT_AI_PerceptionSys");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_AI_PerceptionSys>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_PerceptionSys,*pFVar12,
                        L"Perception System","STATGROUP_AI","STATCAT_Advanced",L"AI",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar13;
  bVar6 = false;
  bVar8 = false;
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
  FVar16 = FVar3.ComparisonIndex.Value;
  uVar14 = FVar3.Number;
  if ((FVar16.Value != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8.ComparisonIndex.Value = FVar16.Value;
        local_b8.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b8,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AIPerceptionSystem.cpp"
                   ,0x73);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar16.Value;
      uStackX_c = uVar14;
      local_a8 = FVar3;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      bVar7 = true;
      goto LAB_146fc27eb;
    }
  }
  bVar7 = false;
  local_a8 = local_a0;
LAB_146fc27eb:
  iVar2 = (this->SourcesToRegister).ArrayNum;
  pFVar19 = (this->SourcesToRegister).AllocatorInstance.Data;
  pFVar18 = pFVar19 + (longlong)iVar2 * 0x14;
  local_b0 = pFVar18;
  do {
    if ((this->SourcesToRegister).ArrayNum != iVar2) {
      local_res8 = local_res8 & 0xffffff00;
      `TCheckedPointerIterator<UAIPerceptionSystem::FPerceptionSourceRegistration,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    FVar3 = local_a8;
    if (pFVar19 == pFVar18) {
      (this->SourcesToRegister).ArrayNum = 0;
      if ((this->SourcesToRegister).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x14,4,0,&(this->SourcesToRegister).AllocatorInstance,0,
                   &(this->SourcesToRegister).ArrayMax);
      }
      if (bVar8) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar6) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar7) {
        FThreadStats::AddMessage(FVar3,CycleScopeEnd);
      }
      return;
    }
    local_res20 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar19 + 0xc));
    if (((local_res20 != (UObject *)0x0) && ((local_res20[2].field_0xd & 2) == 0)) &&
       ((*(uint *)&local_res20->field_0x8 >> 0x1e & 1) == 0)) {
      FVar1 = *pFVar19;
      if (((this->Senses).ArrayNum <= (int)(uint)(byte)FVar1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar18 = local_b0;
      if (*(longlong *)((this->Senses).AllocatorInstance.Data + (ulonglong)(byte)FVar1 * 8) != 0) {
        FVar1 = *pFVar19;
        if (((this->Senses).ArrayNum <= (int)(uint)(byte)FVar1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar17 = *(longlong **)((this->Senses).AllocatorInstance.Data + (ulonglong)(byte)FVar1 * 8)
        ;
        (**(code **)(*plVar17 + 0x2b0))(plVar17,local_res20);
        pUVar9 = local_res20;
        local_80._padding_ = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->StimuliSourceEndPlayDelegate,&local_60);
        local_80.Object.ObjectIndex = *(int *)&(this->StimuliSourceEndPlayDelegate).field_0x8;
        local_80.Object.ObjectSerialNumber = *(int *)&(this->StimuliSourceEndPlayDelegate).field_0xc
        ;
        local_80.FunctionName.ComparisonIndex.Value =
             *(uint *)&(this->StimuliSourceEndPlayDelegate).field_0x10;
        local_80.FunctionName.Number = *(uint *)&(this->StimuliSourceEndPlayDelegate).field_0x14;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_60);
        TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
        ::AddUnique((TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
                     *)&pUVar9[0xd].field_0xf,&local_80);
        this_00 = &this->RegisteredStimuliSources;
        uVar14 = ((uint)((ulonglong)local_res20 >> 0x14) & 0xffff ^
                 (uint)((ulonglong)local_res20 >> 4)) * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        uVar14 = uVar14 >> 0x10 ^ uVar14;
        if (*(int *)&(this->RegisteredStimuliSources).field_0x8 !=
            *(int *)&(this->RegisteredStimuliSources).field_0x34) {
          puVar4 = *(undefined1 **)&(this->RegisteredStimuliSources).field_0x40;
          puVar15 = &(this->RegisteredStimuliSources).field_0x38;
          if (puVar4 != (undefined1 *)0x0) {
            puVar15 = puVar4;
          }
          iVar11 = *(int *)(puVar15 +
                           (ulonglong)
                           (*(int *)&(this->RegisteredStimuliSources).field_0x48 - 1U & uVar14) * 4)
          ;
          if (iVar11 != -1) {
            do {
              plVar17 = (longlong *)((longlong)iVar11 * 0x20 + *(longlong *)&this_00->field_0x0);
              if ((UObject *)*plVar17 == local_res20) {
                if (plVar17 != (longlong *)0x0) goto LAB_146fc2a01;
                break;
              }
              iVar11 = (int)plVar17[3];
            } while (iVar11 != -1);
          }
        }
        local_90 = &local_res20;
        TSet<TTuple<AActor_const_*,FPerceptionStimuliSource>,TDefaultMapHashableKeyFuncs<AActor_const_*,FPerceptionStimuliSource,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<AActor_const_*_const_&>_>
                  ((TSet<TTuple<AActor_const_*,FPerceptionStimuliSource>,TDefaultMapHashableKeyFuncs<AActor_const_*,FPerceptionStimuliSource,0>,FDefaultSetAllocator>
                    *)this_00,(uint)local_res18,
                   (TKeyInitializer<AActor_const_*_const_&> *)(ulonglong)uVar14,(bool *)&local_90);
        plVar17 = (longlong *)((longlong)local_res18[0] * 0x20 + *(longlong *)&this_00->field_0x0);
LAB_146fc2a01:
        local_88 = local_res20;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0))
        {
          UE::GC::MarkAsReachable(local_res20);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(plVar17 + 1),(FObjectPtr)&local_88);
        *(uint *)(plVar17 + 2) = *(uint *)(plVar17 + 2) | 1 << ((byte)*pFVar19 & 0x1f);
        pFVar18 = local_b0;
      }
    }
    pFVar19 = pFVar19 + 0x14;
  } while( true );
}

// RegisterAllPawnsAsSourcesForSense @ 146fc6c90

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
UAIPerceptionSystem::RegisterAllPawnsAsSourcesForSense
          (UAIPerceptionSystem *this,FAINamedID<FAISenseCounter> *param_1)

{
  uchar uVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  UWorld *pUVar5;
  UClass *pUVar6;
  AActor *pAVar7;
  APawn *pAVar8;
  UClass *local_res8;
  APawn *local_res18 [2];
  FAINamedID<FAISenseCounter> local_c8;
  FPerceptionSourceRegistration local_b8;
  TActorIteratorBase<TActorIterator<APawn>_> local_98;
  
  pUVar5 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  pUVar6 = Z_Construct_UClass_APawn_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar6 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
  }
  local_98.Flags = OnlyActiveLevels|SkipPendingKill;
  local_98.State.bIsSet = false;
  local_res8 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  FActorIteratorState::FActorIteratorState
            (&local_98.State.TypedValue,pUVar5,(TSubclassOf<AActor>)&local_res8);
  local_98.State.bIsSet = true;
  TActorIteratorBase<TActorIterator<APawn>_>::operator++(&local_98);
  while( true ) {
    if (local_98.State.bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (local_98.State.TypedValue.ReachedEnd != false) break;
    if (local_98.State.bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pAVar7 = FActorIteratorState::GetActorChecked(&local_98.State.TypedValue);
    pAVar8 = CastChecked<APawn,AActor>(pAVar7);
    uVar1 = param_1->Index;
    FVar2 = param_1->Name;
    local_c8.Index = uVar1;
    local_c8.Name = FVar2;
    bVar4 = IsSenseInstantiated(this,&local_c8);
    if (!bVar4) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4495401471105302637>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AIPerceptionSystem.cpp"
                         ,0x6d,"IsSenseInstantiated(SenseID)");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_b8.SenseID.Index = uVar1;
    local_b8.SenseID.Name = FVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar8 != (APawn *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar8);
    }
    local_b8.Source.WeakPtr.ObjectIndex = 0;
    local_b8.Source.WeakPtr.ObjectSerialNumber = 0;
    local_res18[0] = pAVar8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar8 != (APawn *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar8);
    }
    FWeakObjectPtr::operator=(&local_b8.Source.WeakPtr,(FObjectPtr)local_res18);
    TArray<UAIPerceptionSystem::FPerceptionSourceRegistration,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<UAIPerceptionSystem::FPerceptionSourceRegistration>
              (&this->SourcesToRegister,&local_b8);
    TActorIteratorBase<TActorIterator<APawn>_>::operator++(&local_98);
  }
  if (local_98.State.bIsSet != false) {
    UWorld::RemoveOnActorSpawnedHandler
              (local_98.State.TypedValue.CurrentWorld,
               local_98.State.TypedValue.ActorSpawnedDelegateHandle);
    if (local_98.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
    }
    if (local_98.State.TypedValue.ActorArray.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.State.TypedValue.ActorArray.AllocatorInstance.Data);
    }
  }
  return;
}

// RegisterDelayedStimulus @ 146fc7030

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
UAIPerceptionSystem::RegisterDelayedStimulus
          (UAIPerceptionSystem *this,FAIGenericID<FPerceptionListenerCounter> param_1,float param_2,
          AActor *param_3,FAIStimulus *param_4)

{
  int *piVar1;
  TArray<UAIPerceptionSystem::FDelayedStimulus,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_register_00000014;
  longlong lVar8;
  AActor *local_res8;
  double local_88;
  undefined4 local_80;
  FWeakObjectPtr local_7c;
  FAIStimulus local_70;
  
  local_80 = 0xffffffff;
  local_7c.ObjectIndex = 0;
  local_7c.ObjectSerialNumber = 0;
  FAIStimulus::FAIStimulus(&local_70);
  local_80 = *(undefined4 *)CONCAT44(in_register_00000014,param_1.Index);
  local_88 = (double)param_2 + this->CurrentTime;
  local_res8 = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  FWeakObjectPtr::operator=(&local_7c,(FObjectPtr)&local_res8);
  pTVar2 = &this->DelayedStimuli;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  local_70.Tag = param_4->Tag;
  local_70.Age = param_4->Age;
  local_70.ExpirationAge = param_4->ExpirationAge;
  local_70.Type.Index = (param_4->Type).Index;
  local_70.Type.Name = (param_4->Type).Name;
  local_70.Strength = param_4->Strength;
  local_70.StimulusLocation.field0_0x0._s_0.X = (param_4->StimulusLocation).field0_0x0._s_0.X;
  local_70.StimulusLocation.field0_0x0._s_0.Y = (param_4->StimulusLocation).field0_0x0._s_0.Y;
  local_70.StimulusLocation.field0_0x0._s_0.Z = (param_4->StimulusLocation).field0_0x0._s_0.Z;
  local_70.ReceiverLocation.field0_0x0._s_0.Z = (param_4->ReceiverLocation).field0_0x0._s_0.Z;
  local_70.ReceiverLocation.field0_0x0._s_0.X = (param_4->ReceiverLocation).field0_0x0._s_0.X;
  local_70.ReceiverLocation.field0_0x0._s_0.Y = (param_4->ReceiverLocation).field0_0x0._s_0.Y;
  local_70._84_4_ = *(uint *)&param_4->field_0x54 & 7 | local_70._84_4_ & 0xfffffff8;
  if ((pFVar3 <= (FScriptContainerElement *)&local_88) &&
     ((FScriptContainerElement *)&local_88 <
      pFVar3 + (longlong)(this->DelayedStimuli).ArrayMax * 0x70)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->DelayedStimuli).ArrayNum;
  piVar1 = &(this->DelayedStimuli).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x870,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  (this->DelayedStimuli).ArrayNum = iVar6 + 1;
  lVar8 = (longlong)iVar6 * 0x70;
  *(double *)(pFVar3 + lVar8) = local_88;
  *(undefined4 *)(pFVar3 + lVar8 + 8) = local_80;
  *(FWeakObjectPtr *)(pFVar3 + lVar8 + 0xc) = local_7c;
  *(float *)(pFVar3 + lVar8 + 0x18) = local_70.Age;
  *(float *)(pFVar3 + lVar8 + 0x1c) = local_70.ExpirationAge;
  *(float *)(pFVar3 + lVar8 + 0x20) = local_70.Strength;
  *(double *)(pFVar3 + lVar8 + 0x28) = local_70.StimulusLocation.field0_0x0._s_0.X;
  *(double *)(pFVar3 + lVar8 + 0x28 + 8) = local_70.StimulusLocation.field0_0x0._s_0.Y;
  *(double *)(pFVar3 + lVar8 + 0x38) = local_70.StimulusLocation.field0_0x0._s_0.Z;
  *(double *)(pFVar3 + lVar8 + 0x40) = local_70.ReceiverLocation.field0_0x0._s_0.X;
  *(double *)(pFVar3 + lVar8 + 0x40 + 8) = local_70.ReceiverLocation.field0_0x0._s_0.Y;
  *(double *)(pFVar3 + lVar8 + 0x50) = local_70.ReceiverLocation.field0_0x0._s_0.Z;
  *(FName *)(pFVar3 + lVar8 + 0x58) = local_70.Tag;
  pFVar3[lVar8 + 0x60] = (FScriptContainerElement)local_70.Type.Index;
  *(FName *)(pFVar3 + lVar8 + 100) = local_70.Type.Name;
  uVar7 = (*(uint *)(pFVar3 + lVar8 + 0x6c) ^ local_70._84_4_) & 1 ^
          *(uint *)(pFVar3 + lVar8 + 0x6c);
  *(uint *)(pFVar3 + lVar8 + 0x6c) = uVar7;
  uVar7 = (uVar7 ^ local_70._84_4_) & 2 ^ uVar7;
  *(uint *)(pFVar3 + lVar8 + 0x6c) = uVar7;
  *(uint *)(pFVar3 + lVar8 + 0x6c) = (uVar7 ^ local_70._84_4_) & 4 ^ uVar7;
  return;
}

// RegisterPerceptionStimuliSource @ 146fc7ae0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
UAIPerceptionSystem::RegisterPerceptionStimuliSource
          (UObject *param_1,TSubclassOf<UAISense> param_2,AActor *param_3)

{
  int iVar1;
  longlong lVar2;
  UAISystemBase *pUVar3;
  UAIPerceptionSystem *this;
  bool bVar4;
  UClass *pUVar5;
  UWorld *pUVar6;
  bool bVar7;
  UObject *local_res10;
  
  lVar2 = *(longlong *)param_2.Class.field0_0x0;
  bVar7 = false;
  if (lVar2 != 0) {
    pUVar5 = UAISense::StaticClass();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (((bVar4) && (*(longlong *)param_2.Class.field0_0x0 != 0)) && (param_3 != (AActor *)0x0)) {
        pUVar6 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
        if ((pUVar6 != (UWorld *)0x0) &&
           (pUVar3 = (pUVar6->AISystem).field0_0x0.DebugPtr, pUVar3 != (UAISystemBase *)0x0)) {
          pUVar5 = Z_Construct_UClass_UAISystem_NoRegister();
          iVar1 = (int)pUVar5->_padding_;
          if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
             (((longlong *)
               *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
               &pUVar5->_padding_ &&
              (this = *(UAIPerceptionSystem **)&pUVar3[2].bInstantiateAISystemOnClient,
              this != (UAIPerceptionSystem *)0x0)))) {
            local_res10 = *(UObject **)param_2.Class.field0_0x0;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_res10 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(local_res10);
            }
            RegisterSourceForSenseClass(this,(TSubclassOf<UAISense>)&local_res10,param_3);
            bVar7 = true;
          }
        }
      }
    }
  }
  return bVar7;
}

// RegisterSenseClass @ 146fc7c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FAINamedID<FAISenseCounter> * __thiscall
UAIPerceptionSystem::RegisterSenseClass
          (UAIPerceptionSystem *this,FAINamedID<FAISenseCounter> *__return_storage_ptr__,
          TSubclassOf<UAISense> param_1)

{
  FAINamedID<struct_FAISenseCounter> FVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  FAINamedID<FAISenseCounter> *pFVar8;
  UAISense *pUVar9;
  FAINamedID<struct_FAISenseCounter> *pFVar10;
  UClass *pUVar11;
  UObject *pUVar12;
  UWorld *this_00;
  FTimerManager *this_01;
  undefined8 *puVar13;
  ulong64 uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  int *piVar19;
  longlong *plVar20;
  undefined1 auStackY_1d8 [32];
  FAINamedID<FAISenseCounter> local_1a8;
  undefined1 local_198;
  FDelegateAllocation local_190;
  longlong local_180;
  UObject *local_178;
  UAIPerceptionSystem *local_170;
  FName local_168 [2];
  code *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  FString local_148;
  undefined1 local_138;
  undefined8 local_130;
  undefined1 local_128 [40];
  UAIPerceptionSystem *local_100;
  longlong local_f8;
  undefined4 local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong local_b8 [3];
  longlong *local_a0;
  FTimerUnifiedDelegate local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar2 == 0) || (pUVar7 = UAISense::StaticClass(), pUVar7 == (UClass *)0x0)) {
LAB_146fc7c70:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SenseClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AIPerceptionSystem.cpp"
                       ,0x36,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FAINamedID<FAISenseCounter> *)(*pcVar4)();
      return pFVar8;
    }
  }
  else {
    iVar6 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar6 * 8) !=
        &pUVar7->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((!bVar5) || (*(longlong *)param_1.Class.field0_0x0 == 0)) goto LAB_146fc7c70;
  }
  local_178 = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_178 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_178);
  }
  UAISense::GetSenseID(&local_1a8,(TSubclassOf<UAISense>)&local_178);
  FVar1 = (FAINamedID<struct_FAISenseCounter>)local_1a8.Index;
  piVar19 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar19 <
       `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
    ::__l2::InvalidIDInstance = (FAINamedID<struct_FAISenseCounter>)0xff;
    ::FName::FName((FName *)&DAT_1551c48a4,L"Invalid");
    _Init_thread_footer(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (FVar1 == `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
               ::__l2::InvalidIDInstance) {
    lVar2 = *(longlong *)param_1.Class.field0_0x0;
    if ((lVar2 == 0) || (pUVar7 = UAISense::StaticClass(), pUVar7 == (UClass *)0x0)) {
LAB_146fc7d38:
      pUVar7 = (UClass *)0x0;
    }
    else {
      iVar6 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar6) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar6 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_146fc7d38;
      pUVar7 = *(UClass **)param_1.Class.field0_0x0;
    }
    pUVar9 = GetMutableDefault<UAISense>(pUVar7);
    pFVar10 = (FAINamedID<struct_FAISenseCounter> *)
              (**(code **)(pUVar9->_padding_ + 0x2c8))(pUVar9,local_128 + 8);
    FVar1 = *pFVar10;
    local_1a8.Name = *(FName *)(pFVar10 + 4);
    local_1a8.Index = (uchar)FVar1;
    if ((*piVar19 <
         `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
      ::__l2::InvalidIDInstance = (FAINamedID<struct_FAISenseCounter>)0xff;
      ::FName::FName((FName *)&DAT_1551c48a4,L"Invalid");
      _Init_thread_footer(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    if (FVar1 == `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                 ::__l2::InvalidIDInstance) {
      FAINamedID<FAISenseCounter>::InvalidID(__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  uVar18 = (ulonglong)(byte)FVar1;
  piVar19 = &(this->Senses).ArrayNum;
  iVar6 = *piVar19;
  uVar17 = (uint)(byte)FVar1;
  if (iVar6 <= (int)uVar17) {
    iVar16 = (uVar17 - iVar6) + 1;
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar16,&(this->Senses).AllocatorInstance,piVar19,&(this->Senses).ArrayMax
                      );
    memset((this->Senses).AllocatorInstance.Data + (longlong)iVar6 * 8,0,(longlong)iVar16 << 3);
  }
  if (((this->Senses).ArrayNum <= (int)uVar17) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FAINamedID<FAISenseCounter> *)(*pcVar4)();
    return pFVar8;
  }
  if (*(longlong *)((this->Senses).AllocatorInstance.Data + uVar18 * 8) != 0) goto LAB_146fc83b2;
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  pUVar7 = (UClass *)0x0;
  local_180 = 0;
  if ((lVar2 != 0) && (pUVar11 = UAISense::StaticClass(), pUVar11 != (UClass *)0x0)) {
    iVar6 = (int)pUVar11->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar6 * 8) !=
        &pUVar11->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pUVar7 = *(UClass **)param_1.Class.field0_0x0;
    }
  }
  lVar2 = local_180;
  if (local_180 == 0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar11 = UAISense::StaticClass();
  CheckIsClassChildOf_Internal(pUVar11,pUVar7);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)(local_128 + 0x20),pUVar7);
  local_d8 = 0;
  uStack_d0 = 0;
  local_f8 = lVar2;
  local_f0 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_100 = this;
  pUVar12 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)(local_128 + 0x20));
  if (local_c8 != 0) {
    plVar20 = local_b8;
    if (local_a0 != (longlong *)0x0) {
      plVar20 = local_a0;
    }
    (**(code **)(*plVar20 + 0x10))(plVar20);
  }
  if (((this->Senses).ArrayNum <= (int)uVar17) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FAINamedID<FAISenseCounter> *)(*pcVar4)();
    return pFVar8;
  }
  pFVar3 = (this->Senses).AllocatorInstance.Data;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar12);
  }
  *(UObject **)(pFVar3 + uVar18 * 8) = pUVar12;
  uVar17 = (uint)(byte)FVar1;
  if (((this->Senses).ArrayNum <= (int)uVar17) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FAINamedID<FAISenseCounter> *)(*pcVar4)();
    return pFVar8;
  }
  if ((*(longlong *)((this->Senses).AllocatorInstance.Data + uVar18 * 8) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Senses[SenseID]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AIPerceptionSystem.cpp"
                         ,0x4d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FAINamedID<FAISenseCounter> *)(*pcVar4)();
    return pFVar8;
  }
  if (((this->Senses).ArrayNum <= (int)uVar17) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FAINamedID<FAISenseCounter> *)(*pcVar4)();
    return pFVar8;
  }
  if ((*(uint *)(*(longlong *)((this->Senses).AllocatorInstance.Data + uVar18 * 8) + 0x2c) >> 1 & 1)
      == 0) {
    if (((this->Senses).ArrayNum <= (int)uVar17) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FAINamedID<FAISenseCounter> *)(*pcVar4)();
      return pFVar8;
    }
    if ((*(byte *)(*(longlong *)((this->Senses).AllocatorInstance.Data + uVar18 * 8) + 0x2c) & 1) !=
        0) goto LAB_146fc80aa;
    uVar15 = 0;
  }
  else {
LAB_146fc80aa:
    uVar15 = 1;
  }
  *(uint *)&this->field_0x108 =
       (ZPULL(*(undefined4 *)&this->field_0x108,0,1) | uVar15) ^
       *(undefined4 *)&this->field_0x108 & 0xfffffffe;
  if (((this->Senses).ArrayNum <= (int)uVar17) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FAINamedID<FAISenseCounter> *)(*pcVar4)();
    return pFVar8;
  }
  if ((*(uint *)(*(longlong *)((this->Senses).AllocatorInstance.Data + uVar18 * 8) + 0x2c) >> 1 & 1)
      != 0) {
    this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    bVar5 = UWorld::HasBegunPlay(this_00);
    if (bVar5) {
      this_01 = UWorld::GetTimerManager(this_00);
      uStack_14c = local_130._4_4_;
      uStack_150 = 0;
      local_158 = _vcall__696__flat______;
      local_190.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_138 = 0;
      local_130 = &local_190;
      local_190.DelegateSize = 0;
      puVar13 = UE::Core::Private::DelegateAllocate(0x38,&local_190);
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = &
                   ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__U__FAINamedID_UFAISenseCounter______6B_
        ;
        *(FAINamedID<struct_FAISenseCounter> *)(puVar13 + 1) = FVar1;
        *(FName *)((longlong)puVar13 + 0xc) = local_1a8.Name;
        uVar14 = FDelegateHandle::GenerateNewID();
        puVar13[3] = uVar14;
        *puVar13 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUAIPerceptionSystem____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__U__FAINamedID_UFAISenseCounter______6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar13[4] = 0;
        local_170 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 4),(FObjectPtr)&local_170);
        puVar13[5] = local_158;
        puVar13[6] = CONCAT44(uStack_14c,uStack_150);
      }
      FTimerUnifiedDelegate::FTimerUnifiedDelegate
                (&local_88,
                 (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                 &local_190);
      FTimerManager::InternalSetTimerForNextTick(this_01,(FTimerUnifiedDelegate *)local_128);
      if ((3 < local_88.VariantDelegate.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FAINamedID<FAISenseCounter> *)(*pcVar4)();
        return pFVar8;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_88.VariantDelegate.TypeIndex])(&local_88);
      local_198 = 0;
      if (local_190.DelegateSize != 0) {
        if (local_190.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)
        goto LAB_146fc82aa;
        (*(code *)**(undefined8 **)local_190.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_190,0,0,0x10);
        local_190.DelegateSize = 0;
      }
      if (local_190.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_190.DelegateAllocator);
      }
    }
  }
LAB_146fc82aa:
  if (((this->Senses).ArrayNum <= (int)uVar17) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FAINamedID<FAISenseCounter> *)(*pcVar4)();
    return pFVar8;
  }
  FVisualLogger::Redirect
            (*(UObject **)((this->Senses).AllocatorInstance.Data + uVar18 * 8),(UObject *)this);
  if (FVisualLogger::bIsRecording != 0) {
    if (((this->Senses).ArrayNum <= (int)uVar17) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FAINamedID<FAISenseCounter> *)(*pcVar4)();
      return pFVar8;
    }
    local_168[0] = *(FName *)(*(longlong *)((this->Senses).AllocatorInstance.Data + uVar18 * 8) +
                             0x18);
    ::FName::ToString(local_168,&local_148);
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this,(FName *)&LogAIPerception.field_0x4,Log,L"Registering sense %s");
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
LAB_146fc83b2:
  __return_storage_ptr__->Name = local_1a8.Name;
  __return_storage_ptr__->Index = (uchar)FVar1;
  return __return_storage_ptr__;
}

// RegisterSource @ 146fc8620

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
UAIPerceptionSystem::RegisterSource
          (UAIPerceptionSystem *this,FAINamedID<FAISenseCounter> *param_1,AActor *param_2)

{
  code *pcVar1;
  bool bVar2;
  AActor *local_res8;
  FPerceptionSourceRegistration local_28;
  
  bVar2 = IsSenseInstantiated(this,param_1);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4495401471105302637>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AIPerceptionSystem.cpp"
                       ,0x6d,"IsSenseInstantiated(SenseID)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28.SenseID.Index = param_1->Index;
  local_28.SenseID.Name = param_1->Name;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  local_28.Source.WeakPtr.ObjectIndex = 0;
  local_28.Source.WeakPtr.ObjectSerialNumber = 0;
  local_res8 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&local_28.Source.WeakPtr,(FObjectPtr)&local_res8);
  TArray<UAIPerceptionSystem::FPerceptionSourceRegistration,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<UAIPerceptionSystem::FPerceptionSourceRegistration>
            (&this->SourcesToRegister,&local_28);
  return;
}

// RegisterSource @ 146fc86f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAIPerceptionSystem::RegisterSource(UAIPerceptionSystem *this,AActor *param_1)

{
  FScriptContainerElement *pFVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  AActor *local_res18 [2];
  FAINamedID<FAISenseCounter> local_68;
  FPerceptionSourceRegistration local_58;
  
  pFVar8 = (this->Senses).AllocatorInstance.Data;
  iVar3 = (this->Senses).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->Senses).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UAISense>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    lVar4 = *(longlong *)pFVar8;
    if (lVar4 != 0) {
      bVar2 = *(byte *)(lVar4 + 0x3c);
      FVar5 = *(FName *)(lVar4 + 0x40);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) <
          `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
          ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
          ::__l2::InvalidIDInstance = (FAINamedID<struct_FAISenseCounter>)0xff;
          ::FName::FName((FName *)&DAT_1551c48a4,L"Invalid");
          _Init_thread_footer(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      if (((uint)bVar2 !=
           (uint)(byte)`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                       ::__l2::InvalidIDInstance) && ((int)(uint)bVar2 < (this->Senses).ArrayNum)) {
        if ((this->Senses).ArrayNum <= (int)(uint)bVar2) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if (*(longlong *)((this->Senses).AllocatorInstance.Data + (ulonglong)bVar2 * 8) != 0) {
          local_68.Index = bVar2;
          local_68.Name = FVar5;
          bVar7 = IsSenseInstantiated(this,&local_68);
          if (!bVar7) {
            bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4495401471105302637>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AIPerceptionSystem.cpp"
                               ,0x6d,"IsSenseInstantiated(SenseID)");
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          local_58.SenseID.Index = bVar2;
          local_58.SenseID.Name = FVar5;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          local_58.Source.WeakPtr.ObjectIndex = 0;
          local_58.Source.WeakPtr.ObjectSerialNumber = 0;
          local_res18[0] = param_1;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          FWeakObjectPtr::operator=(&local_58.Source.WeakPtr,(FObjectPtr)local_res18);
          TArray<UAIPerceptionSystem::FPerceptionSourceRegistration,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<UAIPerceptionSystem::FPerceptionSourceRegistration>
                    (&this->SourcesToRegister,&local_58);
        }
      }
    }
    pFVar8 = pFVar8 + 8;
  }
  return;
}

// RegisterSourceForSenseClass @ 146fc89a0

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
UAIPerceptionSystem::RegisterSourceForSenseClass
          (UAIPerceptionSystem *this,TSubclassOf<UAISense> param_1,AActor *param_2)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  FAINamedID<FAISenseCounter> *pFVar4;
  byte bVar5;
  uint uVar6;
  UObject *local_res8;
  UObject *local_res10;
  AActor *local_res18;
  FAINamedID<FAISenseCounter> local_68;
  FAINamedID<FAISenseCounter> local_58;
  FAINamedID<FAISenseCounter> local_48;
  FPerceptionSourceRegistration local_3c;
  
  local_res8 = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  UAISense::GetSenseID(&local_68,(TSubclassOf<UAISense>)&local_res8);
  bVar5 = local_68.Index;
  uVar6 = (uint)local_68.Index;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
    ::__l2::InvalidIDInstance = (FAINamedID<struct_FAISenseCounter>)0xff;
    ::FName::FName((FName *)&DAT_1551c48a4,L"Invalid");
    _Init_thread_footer(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((uVar6 != (byte)`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                      ::__l2::InvalidIDInstance) && ((int)uVar6 < (this->Senses).ArrayNum)) {
    if (((this->Senses).ArrayNum <= (int)uVar6) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(longlong *)((this->Senses).AllocatorInstance.Data + (ulonglong)uVar6 * 8) != 0)
    goto LAB_146fc8ab2;
  }
  local_res10 = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  pFVar4 = RegisterSenseClass(this,&local_48,(TSubclassOf<UAISense>)&local_res10);
  bVar5 = pFVar4->Index;
  local_68.Name = pFVar4->Name;
  local_68.Index = bVar5;
LAB_146fc8ab2:
  FVar2 = local_68.Name;
  local_58.Index = bVar5;
  local_58.Name = local_68.Name;
  bVar3 = IsSenseInstantiated(this,&local_58);
  if ((!bVar3) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4495401471105302637>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AIPerceptionSystem.cpp"
                         ,0x6d,"IsSenseInstantiated(SenseID)"), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_3c.SenseID.Index = bVar5;
  local_3c.SenseID.Name = FVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  local_3c.Source.WeakPtr.ObjectIndex = 0;
  local_3c.Source.WeakPtr.ObjectSerialNumber = 0;
  local_res18 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&local_3c.Source.WeakPtr,(FObjectPtr)&local_res18);
  TArray<UAIPerceptionSystem::FPerceptionSourceRegistration,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<UAIPerceptionSystem::FPerceptionSourceRegistration>
            (&this->SourcesToRegister,&local_3c);
  return;
}

// ReportEvent @ 146fcc440

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAIPerceptionSystem::ReportEvent(UAIPerceptionSystem *this,UAISenseEvent *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  FAINamedID<struct_FAISenseCounter> FVar3;
  bool bVar4;
  ulonglong uVar5;
  FName local_res10;
  FAINamedID<struct_FAISenseCounter> local_28 [16];
  FString local_18;
  
  if (param_1 != (UAISenseEvent *)0x0) {
    (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
    FVar3 = local_28[0];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
      ::__l2::InvalidIDInstance = (FAINamedID<struct_FAISenseCounter>)0xff;
      ::FName::FName((FName *)&DAT_1551c48a4,L"Invalid");
      _Init_thread_footer(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    if ((FVar3 != `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                  ::__l2::InvalidIDInstance) &&
       (uVar5 = (ulonglong)(byte)local_28[0], (int)(uint)(byte)local_28[0] < (this->Senses).ArrayNum
       )) {
      if (((this->Senses).ArrayNum <= (int)(uint)(byte)local_28[0]) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(longlong *)((this->Senses).AllocatorInstance.Data + uVar5 * 8) != 0) {
        if (((this->Senses).ArrayNum <= (int)(uint)(byte)local_28[0]) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar1 = *(longlong **)
                  ((this->Senses).AllocatorInstance.Data + (ulonglong)(byte)local_28[0] * 8);
        (**(code **)(*plVar1 + 0x2c0))(plVar1,param_1);
        return;
      }
    }
    if (FVisualLogger::bIsRecording != 0) {
      local_res10.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_res10.Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(&local_res10,&local_18);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this,(FName *)&LogAIPerception.field_0x4,Log,
                 L"Skipping perception event %s since related sense class has not been registered (no listeners)"
                );
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,this);
  }
  return;
}

// ReportPerceptionEvent @ 146fcc710

void __cdecl UAIPerceptionSystem::ReportPerceptionEvent(UObject *param_1,UAISenseEvent *param_2)

{
  UAIPerceptionSystem *this;
  
  this = GetCurrent(param_1);
  if (this != (UAIPerceptionSystem *)0x0) {
    ReportEvent(this,param_2);
    return;
  }
  return;
}

// StartPlay @ 146fd3150

void __thiscall UAIPerceptionSystem::StartPlay(UAIPerceptionSystem *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  double dVar5;
  undefined1 local_res8 [8];
  undefined1 local_18 [4];
  undefined8 local_14;
  
  pFVar4 = (this->Senses).AllocatorInstance.Data;
  iVar2 = (this->Senses).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Senses).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UAISense>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    lVar3 = *(longlong *)pFVar4;
    if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x2c) >> 1 & 1) != 0)) {
      local_18[0] = *(undefined1 *)(lVar3 + 0x3c);
      local_14 = *(undefined8 *)(lVar3 + 0x40);
      (**(code **)(this->_padding_ + 0x2b8))(this,local_18);
    }
    pFVar4 = pFVar4 + 8;
  }
  lVar3 = (**(code **)(this->_padding_ + 0x180))(this);
  if (lVar3 == 0) {
    dVar5 = 0.0;
  }
  else {
    dVar5 = *(double *)(lVar3 + 0x8f8);
  }
  this->NextStimuliAgingTick = dVar5;
  return;
}

// StaticRegisterNativesUAIPerceptionSystem @ 146fd3500

void __cdecl UAIPerceptionSystem::StaticRegisterNativesUAIPerceptionSystem(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UAIPerceptionSystem_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Tick @ 146fd7930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAIPerceptionSystem::Tick(UAIPerceptionSystem *this,float param_1)

{
  longlong *plVar1;
  uint *puVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_AI_PerceptionSys> FVar20;
  FThreadSafeStaticStat<FStat_STAT_AI_Overall> FVar21;
  UWorld *pUVar22;
  UAIPerceptionComponent *pUVar23;
  FThreadSafeStaticStat<FStat_STAT_AI_Perception_ProcessStim> FVar24;
  ulonglong uVar25;
  longlong lVar26;
  FNameEntryId FVar27;
  longlong lVar28;
  longlong *plVar29;
  FPerceptionListener *this_00;
  FName FVar30;
  FName FVar31;
  FName FVar32;
  uint uVar33;
  undefined4 uVar34;
  double dVar35;
  float fVar36;
  undefined1 local_247;
  undefined1 local_246 [2];
  FColor_u_0 local_244;
  FColor_u_0 local_240;
  FColor_u_0 local_23c;
  FName local_238;
  FName local_230;
  FName local_228;
  uint local_220;
  uint uStack_21c;
  FName local_218;
  FName local_208;
  FName local_1f8;
  longlong *local_1e8;
  undefined1 auStack_1e0 [16];
  uint uStack_1d0;
  uint uStack_1cc;
  longlong local_1c8;
  TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
  *pTStack_1c0;
  TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
  *local_1b8;
  undefined2 local_1b0;
  longlong *local_1a8;
  undefined1 auStack_1a0 [16];
  uint uStack_190;
  uint uStack_18c;
  longlong local_188;
  TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
  *pTStack_180;
  TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
  *local_178;
  undefined2 local_170;
  undefined4 local_168;
  undefined4 local_164;
  longlong *local_158;
  undefined1 auStack_150 [16];
  uint uStack_140;
  uint uStack_13c;
  longlong local_138;
  TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
  *pTStack_130;
  TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
  *local_128;
  undefined2 local_120;
  FName local_118;
  FName local_110;
  FName local_108;
  undefined1 local_100 [32];
  longlong local_e0;
  TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
  *pTStack_d8;
  undefined1 local_d0 [32];
  longlong local_b0;
  TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
  *pTStack_a8;
  undefined1 local_a0 [32];
  longlong local_80;
  TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
  *pTStack_78;
  
  FVar20 = StatPtr_STAT_AI_PerceptionSys;
  if (StatPtr_STAT_AI_PerceptionSys == (FThreadSafeStaticStat<FStat_STAT_AI_PerceptionSys>)0x0) {
    pFVar19 = ::FName::FName(&local_118,"STAT_AI_PerceptionSys");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_AI_PerceptionSys>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_PerceptionSys,*pFVar19,
                        L"Perception System","STATGROUP_AI","STATCAT_Advanced",L"AI",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar31 = *(FName *)FVar20;
  bVar7 = false;
  bVar11 = false;
  local_218.ComparisonIndex.Value = 0;
  local_218.Number = 0;
  bVar12 = false;
  bVar9 = false;
  if ((FVar31.ComparisonIndex.Value.Value == 0) && (FVar31.Number == 0)) {
LAB_146fd7ab0:
    bVar11 = bVar9;
    bVar7 = bVar12;
    bVar12 = false;
    FVar31 = local_218;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_244.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_244._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar7 = false;
      bVar11 = true;
      bVar12 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_238.ComparisonIndex.Value = FVar31.ComparisonIndex.Value.Value;
        local_238.Number = FVar31.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_238,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AIPerceptionSystem.cpp"
                   ,0xa2);
        bVar7 = true;
        bVar11 = true;
        bVar12 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146fd7ab0;
    FThreadStats::AddMessage(FVar31,CycleScopeStart);
    bVar12 = true;
  }
  FVar21 = StatPtr_STAT_AI_Overall;
  if (StatPtr_STAT_AI_Overall == (FThreadSafeStaticStat<FStat_STAT_AI_Overall>)0x0) {
    pFVar19 = ::FName::FName(&local_110,"STAT_AI_Overall");
    FVar21 = (FThreadSafeStaticStat<FStat_STAT_AI_Overall>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Overall,*pFVar19,
                        L"Overall AI Time","STATGROUP_AI","STATCAT_Advanced",L"AI",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar32 = *(FName *)FVar21;
  bVar10 = false;
  bVar9 = false;
  local_208.ComparisonIndex.Value = 0;
  local_208.Number = 0;
  bVar14 = false;
  bVar13 = false;
  if ((FVar32.ComparisonIndex.Value.Value == 0) && (FVar32.Number == 0)) {
LAB_146fd7bee:
    bVar10 = bVar14;
    bVar9 = bVar13;
    bVar13 = false;
    FVar32 = local_208;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_240.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_240._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar10 = false;
      bVar9 = true;
      bVar14 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_230.ComparisonIndex.Value = FVar32.ComparisonIndex.Value.Value;
        local_230.Number = FVar32.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_230,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AIPerceptionSystem.cpp"
                   ,0xa3);
        bVar10 = true;
        bVar9 = true;
        bVar14 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146fd7bee;
    FThreadStats::AddMessage(FVar32,CycleScopeStart);
    bVar13 = true;
  }
  if (__CsvProfilerStat164 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("AIPerception");
    __CsvProfilerStat164 = true;
  }
  FCsvProfiler::BeginExclusiveStat("AIPerception","CSV_AIPerception");
  pUVar22 = UEngine::GetWorldFromContextObject(GEngine,(UObject *)this[-1].CurrentTime,Assert);
  if ((pUVar22 == (UWorld *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("World",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AIPerceptionSystem.cpp"
                          ,0xab,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (pUVar22->bPlayersOnly != '\0') goto LAB_146fd83bd;
  (this->DelayedStimuli).AllocatorInstance.Data = (FScriptContainerElement *)pUVar22->TimeSeconds;
  if (0 < *(int *)&(this->RegisteredStimuliSources).field_0x48) {
    PerformSourceRegistration((UAIPerceptionSystem *)&this[-1].DelayedStimuli.ArrayNum);
  }
  pFVar3 = (this->DelayedStimuli).AllocatorInstance.Data;
  bVar14 = false;
  if (*(double *)&this->field_0x108 <= (double)pFVar3) {
    dVar35 = (double)pFVar3 - *(double *)&this->field_0x108;
    fVar36 = (float)dVar35;
    dVar35 = (double)fVar36 - dVar35;
    if ((__real_3f90000000000000 <
         (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar35,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("FloatFitsIn<OutType>(In, Precision)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xc0,L"Loss of data caused by narrowing conversion"), bVar14)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar36 = fVar36 + *(float *)&(this->ListenerContainer).field_0x38;
    if ((fVar36 < 0.0) &&
       (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4495401471105302773>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AIPerceptionSystem.cpp"
                            ,0xf5,"Amount >= 0.f"), bVar14)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar1 = &this->_padding_;
    bVar14 = false;
    TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_100,
               (TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
                *)plVar1);
    local_120 = 0;
    stack0xfffffffffffffeb8 = local_100._16_16_;
    local_158 = (longlong *)local_100._0_8_;
    auStack_150._0_8_ = local_100._8_8_;
    local_138 = local_e0;
    pTStack_130 = pTStack_d8;
    uVar25 = local_100._24_8_ >> 0x20;
    local_128 = (TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
                 *)plVar1;
    if (local_100._28_4_ < *(int *)(local_100._16_8_ + 0x18)) {
      do {
        lVar28 = (longlong)(int)uVar25 * 0x60 + *local_158;
        bVar15 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar28 + 8));
        if (bVar15) {
          pUVar23 = (UAIPerceptionComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar28 + 8));
          bVar15 = UAIPerceptionComponent::AgeStimuli(pUVar23,fVar36);
          if (bVar15) {
            *(uint *)(lVar28 + 0x4c) = *(uint *)(lVar28 + 0x4c) | 1;
            bVar14 = true;
          }
        }
        uStack_140 = uStack_140 & ~auStack_150._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_150);
        uVar25 = (ulonglong)uStack_13c;
      } while ((int)uStack_13c < *(int *)(auStack_150._8_8_ + 0x18));
      if (((char)local_120 != '\0') && (local_120._1_1_ != '\0')) {
        uVar33 = *(int *)&(local_128->Elements).field_0x8 -
                 *(int *)&(local_128->Elements).field_0x34;
        if (uVar33 < 4) {
          iVar18 = 1;
        }
        else {
          uVar25 = (ulonglong)((uVar33 >> 1) + 7) * 2 + 1;
          lVar28 = 0x3f;
          if (uVar25 != 0) {
            for (; uVar25 >> lVar28 == 0; lVar28 = lVar28 + -1) {
            }
          }
          local_168 = (undefined4)lVar28;
          iVar18 = 1 << ((byte)lVar28 & 0x1f);
        }
        if (((0 < (int)uVar33) && (local_128->HashSize < iVar18)) || (iVar18 < local_128->HashSize))
        {
          local_128->HashSize = iVar18;
          TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
          ::Rehash(local_128);
        }
      }
    }
    *(double *)&this->field_0x108 =
         (double)*(float *)&(this->ListenerContainer).field_0x38 +
         (double)(this->DelayedStimuli).AllocatorInstance.Data;
  }
  plVar29 = *(longlong **)&(this->ListenerContainer).field_0x28;
  bVar15 = false;
  iVar18 = *(int *)&(this->ListenerContainer).field_0x30;
  plVar1 = plVar29 + iVar18;
  while( true ) {
    if (*(int *)&(this->ListenerContainer).field_0x30 != iVar18) {
      local_247 = 0;
      `TCheckedPointerIterator<TObjectPtr<UAISense>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_247);
    }
    if (plVar29 == plVar1) break;
    lVar28 = *plVar29;
    if ((lVar28 == 0) ||
       (fVar36 = *(float *)(lVar28 + 0x38) - param_1, *(float *)(lVar28 + 0x38) = fVar36,
       0.0 < fVar36)) {
      plVar29 = plVar29 + 1;
    }
    else {
      bVar15 = true;
      plVar29 = plVar29 + 1;
    }
  }
  if (bVar15) {
    plVar1 = &this->_padding_;
    TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_d0,
               (TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
                *)plVar1);
    local_1b0 = 0;
    stack0xfffffffffffffe28 = local_d0._16_16_;
    local_1e8 = (longlong *)local_d0._0_8_;
    auStack_1e0._0_8_ = local_d0._8_8_;
    local_1c8 = local_b0;
    pTStack_1c0 = pTStack_a8;
    uVar25 = local_d0._24_8_ >> 0x20;
    local_1b8 = (TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
                 *)plVar1;
    if (local_d0._28_4_ < *(int *)(local_d0._16_8_ + 0x18)) {
      do {
        plVar1 = local_1e8;
        lVar28 = (longlong)(int)uVar25 * 0x60;
        bVar16 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*local_1e8 + 8 + lVar28));
        this_00 = (FPerceptionListener *)(*plVar1 + 8 + lVar28);
        if (bVar16) {
          bVar16 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
          if (bVar16) {
            pUVar23 = (UAIPerceptionComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
            UAIPerceptionComponent::GetLocationAndDirection
                      (pUVar23,&this_00->CachedLocation,&this_00->CachedDirection);
          }
        }
        else {
          OnListenerRemoved((UAIPerceptionSystem *)&this[-1].DelayedStimuli.ArrayNum,this_00);
          TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_1c0,(int)uVar25);
          local_1b0 = CONCAT11(local_1b0._1_1_,1);
        }
        uStack_1d0 = uStack_1d0 & ~auStack_1e0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1e0);
        uVar25 = (ulonglong)uStack_1cc;
      } while ((int)uStack_1cc < *(int *)(auStack_1e0._8_8_ + 0x18));
      if (((char)local_1b0 != '\0') && (local_1b0._1_1_ != '\0')) {
        uVar33 = *(int *)&(local_1b8->Elements).field_0x8 -
                 *(int *)&(local_1b8->Elements).field_0x34;
        if (uVar33 < 4) {
          iVar18 = 1;
        }
        else {
          uVar25 = (ulonglong)((uVar33 >> 1) + 7) * 2 + 1;
          lVar28 = 0x3f;
          if (uVar25 != 0) {
            for (; uVar25 >> lVar28 == 0; lVar28 = lVar28 + -1) {
            }
          }
          local_164 = (undefined4)lVar28;
          iVar18 = 1 << ((byte)lVar28 & 0x1f);
        }
        if (((0 < (int)uVar33) && (local_1b8->HashSize < iVar18)) || (iVar18 < local_1b8->HashSize))
        {
          local_1b8->HashSize = iVar18;
          TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
          ::Rehash(local_1b8);
        }
      }
    }
    plVar29 = *(longlong **)&(this->ListenerContainer).field_0x28;
    iVar18 = *(int *)&(this->ListenerContainer).field_0x30;
    plVar1 = plVar29 + iVar18;
    while( true ) {
      if (*(int *)&(this->ListenerContainer).field_0x30 != iVar18) {
        local_246[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UAISense>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_246);
      }
      if (plVar29 == plVar1) break;
      plVar4 = (longlong *)*plVar29;
      if ((plVar4 != (longlong *)0x0) && (*(float *)(plVar4 + 7) <= 0.0)) {
        uVar34 = (**(code **)(*plVar4 + 0x2f8))(plVar4);
        *(undefined4 *)(plVar4 + 7) = uVar34;
      }
      plVar29 = plVar29 + 1;
    }
  }
  FVar24 = StatPtr_STAT_AI_Perception_ProcessStim;
  if (StatPtr_STAT_AI_Perception_ProcessStim ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Perception_ProcessStim>)0x0) {
    pFVar19 = ::FName::FName(&local_108,"STAT_AI_Perception_ProcessStim");
    FVar24 = (FThreadSafeStaticStat<FStat_STAT_AI_Perception_ProcessStim>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Perception_ProcessStim,
                        *pFVar19,L"Perception System - Process Stim","STATGROUP_AI",
                        "STATCAT_Advanced",L"AI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar30 = *(FName *)FVar24;
  bVar16 = false;
  bVar8 = false;
  local_1f8.ComparisonIndex.Value = 0;
  local_1f8.Number = 0;
  FVar27 = FVar30.ComparisonIndex.Value;
  uVar33 = FVar30.Number;
  if ((FVar27.Value == 0) && (uVar33 == 0)) {
LAB_146fd81d8:
    bVar6 = false;
    FVar30 = local_1f8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_23c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_23c._s_0,(char *)*(FName *)((longlong)FVar24 + 0x10));
      bVar16 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_228.ComparisonIndex.Value = FVar27.Value;
        local_228.Number = uVar33;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_228,(wchar_t *)*(FName *)((longlong)FVar24 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AIPerceptionSystem.cpp"
                   ,0xdf);
        bVar16 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146fd81d8;
    local_220 = FVar27.Value;
    uStack_21c = uVar33;
    FThreadStats::AddMessage(FVar30,CycleScopeStart);
    bVar6 = true;
  }
  bVar17 = DeliverDelayedStimuli
                     ((UAIPerceptionSystem *)&this[-1].DelayedStimuli.ArrayNum,(uint)!bVar15);
  if (((bVar15) || (bVar17)) || (bVar14)) {
    plVar1 = &this->_padding_;
    TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_a0,
               (TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
                *)plVar1);
    local_170 = 0;
    stack0xfffffffffffffe68 = local_a0._16_16_;
    local_1a8 = (longlong *)local_a0._0_8_;
    auStack_1a0._0_8_ = local_a0._8_8_;
    local_188 = local_80;
    pTStack_180 = pTStack_78;
    uVar25 = local_a0._24_8_ >> 0x20;
    local_178 = (TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
                 *)plVar1;
    if (local_a0._28_4_ < *(int *)(local_a0._16_8_ + 0x18)) {
      do {
        plVar1 = local_1a8;
        bVar14 = FWeakObjectPtr::IsValid
                           ((FWeakObjectPtr *)((longlong)(int)uVar25 * 0x60 + *local_1a8 + 8));
        if ((!bVar14) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("ListenerIt->Value.Listener.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AIPerceptionSystem.cpp"
                                ,0xe7,L""), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar28 = *plVar1;
        lVar26 = (longlong)(int)uStack_18c * 0x60;
        if ((*(byte *)(lVar26 + 0x4c + lVar28) & 1) != 0) {
          if (((*(byte *)(lVar26 + 0x4c + lVar28) & 1) == 0) &&
             (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_6098011600701095828>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AIPerceptionTypes.cpp"
                                  ,0x6c,"bHasStimulusToProcess"), bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pUVar23 = (UAIPerceptionComponent *)
                    FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar26 + lVar28 + 8));
          UAIPerceptionComponent::ProcessStimuli(pUVar23);
          puVar2 = (uint *)(lVar26 + lVar28 + 0x4c);
          *puVar2 = *puVar2 & 0xfffffffe;
        }
        uStack_190 = uStack_190 & ~auStack_1a0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1a0);
        uVar25 = (ulonglong)uStack_18c;
      } while ((int)uStack_18c < *(int *)(auStack_1a0._8_8_ + 0x18));
      if (((char)local_170 != '\0') && (local_170._1_1_ != '\0')) {
        uVar33 = *(int *)&(local_178->Elements).field_0x8 -
                 *(int *)&(local_178->Elements).field_0x34;
        if (uVar33 < 4) {
          iVar18 = 1;
        }
        else {
          uVar25 = (ulonglong)((uVar33 >> 1) + 7) * 2 + 1;
          lVar28 = 0x3f;
          if (uVar25 != 0) {
            for (; uVar25 >> lVar28 == 0; lVar28 = lVar28 + -1) {
            }
          }
          iVar18 = 1 << ((byte)lVar28 & 0x1f);
        }
        if (((0 < (int)uVar33) && (local_178->HashSize < iVar18)) || (iVar18 < local_178->HashSize))
        {
          local_178->HashSize = iVar18;
          TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
          ::Rehash(local_178);
        }
      }
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(FVar30,CycleScopeEnd);
  }
LAB_146fd83bd:
  FCsvProfiler::EndExclusiveStat("AIPerception");
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar32,CycleScopeEnd);
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage(FVar31,CycleScopeEnd);
  }
  return;
}

// UnregisterListener @ 146fdaaf0

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
UAIPerceptionSystem::UnregisterListener(UAIPerceptionSystem *this,UAIPerceptionComponent *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FAIGenericID<FPerceptionListenerCounter> FVar9;
  uint uVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_AI_PerceptionSys> FVar13;
  undefined4 extraout_var;
  UAIPerceptionComponent *pUVar14;
  undefined4 extraout_var_00;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  FNameEntryId FVar18;
  uint *puVar19;
  FName FVar20;
  FColor_u_0 local_res10 [2];
  uint local_res18;
  uint uStackX_1c;
  FName local_78;
  LARGE_INTEGER local_70;
  FName local_68;
  FName local_60;
  FStatMessage local_50;
  
  FVar13 = StatPtr_STAT_AI_PerceptionSys;
  if (StatPtr_STAT_AI_PerceptionSys == (FThreadSafeStaticStat<FStat_STAT_AI_PerceptionSys>)0x0) {
    pFVar12 = ::FName::FName(&local_68,"STAT_AI_PerceptionSys");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_AI_PerceptionSys>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_PerceptionSys,*pFVar12,
                        L"Perception System","STATGROUP_AI","STATCAT_Advanced",L"AI",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar13;
  bVar5 = false;
  bVar7 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar18 = FVar20.ComparisonIndex.Value;
  uVar15 = FVar20.Number;
  if ((FVar18.Value == 0) && (uVar15 == 0)) {
LAB_146fdac3d:
    bVar6 = false;
    FVar20 = local_60;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_78.ComparisonIndex.Value = FVar18.Value;
        local_78.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_78,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AIPerceptionSystem.cpp"
                   ,0x15d);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146fdac3d;
    local_res18 = FVar18.Value;
    uStackX_1c = uVar15;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar6 = true;
  }
  uVar15 = (param_1->PerceptionListenerId).Index;
  FVar9 = FAIGenericID<FPerceptionListenerCounter>::InvalidID();
  if ((uVar15 != *(uint *)CONCAT44(extraout_var,FVar9.Index)) &&
     (*(int *)&(this->ListenerContainer).field_0x8 != *(int *)&(this->ListenerContainer).field_0x34)
     ) {
    puVar17 = *(undefined1 **)&(this->ListenerContainer).field_0x40;
    puVar1 = &(this->ListenerContainer).field_0x38;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar11 = *(uint *)(puVar17 +
                      (ulonglong)(*(int *)&(this->ListenerContainer).field_0x48 - 1U & uVar15) * 4);
    if (uVar11 != 0xffffffff) {
      lVar3 = *(longlong *)&this->ListenerContainer;
      uVar10 = uVar11;
      do {
        if (*(uint *)((longlong)(int)uVar10 * 0x60 + lVar3) == uVar15) goto LAB_146fdacd0;
        uVar10 = *(uint *)((longlong)(int)uVar10 * 0x60 + 0x58 + lVar3);
      } while (uVar10 != 0xffffffff);
    }
  }
LAB_146fdaef4:
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar20 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50.NameAndInfo.Index = FVar20.ComparisonIndex.Value;
      local_50.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_70);
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_50.StatData.Pad[0] = local_70.s.LowPart._0_1_;
      local_50.StatData.Pad[1] = local_70.s.LowPart._1_1_;
      local_50.StatData.Pad[2] = local_70.s.LowPart._2_1_;
      local_50.StatData.Pad[3] = local_70.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_50);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
  while (uVar11 = puVar19[0x16], uVar11 != 0xffffffff) {
LAB_146fdacd0:
    puVar19 = (uint *)((longlong)(int)uVar11 * 0x60 + lVar3);
    if (*puVar19 == uVar15) {
      if (puVar19 != (uint *)0x0) goto LAB_146fdad1b;
      goto LAB_146fdacf5;
    }
  }
  puVar19 = (uint *)0x0;
LAB_146fdacf5:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar8) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_146fdad1b:
  bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(puVar19 + 2));
  if (bVar8) {
    if (*(int *)&(this->ListenerContainer).field_0x8 !=
        *(int *)&(this->ListenerContainer).field_0x34) {
      puVar17 = *(undefined1 **)&(this->ListenerContainer).field_0x40;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = puVar1;
      }
      uVar11 = *(uint *)(puVar17 +
                        (ulonglong)(*(int *)&(this->ListenerContainer).field_0x48 - 1U & uVar15) * 4
                        );
      if (uVar11 != 0xffffffff) {
        do {
          puVar19 = (uint *)((longlong)(int)uVar11 * 0x60 + *(longlong *)&this->ListenerContainer);
          if (*puVar19 == uVar15) {
            if (puVar19 == (uint *)0x0) goto LAB_146fdad7f;
            goto LAB_146fdada5;
          }
          uVar11 = puVar19[0x16];
        } while (uVar11 != 0xffffffff);
      }
    }
    puVar19 = (uint *)0x0;
LAB_146fdad7f:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
LAB_146fdada5:
    pUVar14 = (UAIPerceptionComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar19 + 2));
    if ((pUVar14 != param_1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ListenerContainer[ListenerId].Listener.IsValid() == false || ListenerContainer[ListenerId].Listener.Get() == &Listener"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AIPerceptionSystem.cpp"
                           ,0x166,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(int *)&(this->ListenerContainer).field_0x8 != *(int *)&(this->ListenerContainer).field_0x34)
  {
    puVar17 = *(undefined1 **)&(this->ListenerContainer).field_0x40;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar11 = *(uint *)(puVar17 +
                      (ulonglong)(*(int *)&(this->ListenerContainer).field_0x48 - 1U & uVar15) * 4);
    if (uVar11 != 0xffffffff) {
      do {
        puVar19 = (uint *)((longlong)(int)uVar11 * 0x60 + *(longlong *)&this->ListenerContainer);
        if (*puVar19 == uVar15) {
          if (puVar19 == (uint *)0x0) goto LAB_146fdae2f;
          goto LAB_146fdae55;
        }
        uVar11 = puVar19[0x16];
      } while (uVar11 != 0xffffffff);
    }
  }
  puVar19 = (uint *)0x0;
LAB_146fdae2f:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar8) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_146fdae55:
  OnListenerRemoved(this,(FPerceptionListener *)(puVar19 + 2));
  if (*(int *)&(this->ListenerContainer).field_0x8 != *(int *)&(this->ListenerContainer).field_0x34)
  {
    puVar17 = *(undefined1 **)&(this->ListenerContainer).field_0x40;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    iVar16 = *(int *)(puVar17 +
                     ((longlong)*(int *)&(this->ListenerContainer).field_0x48 - 1U &
                     (longlong)(int)uVar15) * 4);
    if (iVar16 != -1) {
      do {
        if (*(uint *)((longlong)iVar16 * 0x60 + *(longlong *)&this->ListenerContainer) == uVar15) {
          TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
                           *)&this->ListenerContainer,iVar16);
          break;
        }
        iVar16 = *(int *)((longlong)iVar16 * 0x60 + 0x58 + *(longlong *)&this->ListenerContainer);
      } while (iVar16 != -1);
    }
  }
  FVar9 = FAIGenericID<FPerceptionListenerCounter>::InvalidID();
  (param_1->PerceptionListenerId).Index = *(uint *)CONCAT44(extraout_var_00,FVar9.Index);
  goto LAB_146fdaef4;
}

// UnregisterSource @ 146fdb010

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
UAIPerceptionSystem::UnregisterSource
          (UAIPerceptionSystem *this,AActor *param_1,TSubclassOf<UAISense> param_2)

{
  uint *puVar1;
  int *piVar2;
  FAINamedID<struct_FAISenseCounter> FVar3;
  longlong lVar4;
  UObject *pUVar5;
  code *pcVar6;
  bool bVar7;
  FName FVar8;
  FActorEndPlaySignature FVar9;
  bool bVar10;
  uint uVar11;
  UClass *pUVar12;
  UClass *pUVar13;
  FAINamedID<struct_FAISenseCounter> FVar14;
  longlong *plVar15;
  FScriptContainerElement *pFVar16;
  undefined1 *puVar17;
  FScriptContainerElement *pFVar18;
  longlong *plVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  undefined1 local_res10 [8];
  UObject *local_res20;
  FName local_78;
  FAINamedID<FAISenseCounter> local_70;
  FAINamedID<struct_FAISenseCounter> local_60;
  undefined8 local_5c;
  FAINamedID<struct_FAISenseCounter> local_54;
  undefined8 local_50;
  FString local_48;
  
  bVar7 = false;
  uVar20 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
  if (*(int *)&(this->RegisteredStimuliSources).field_0x8 !=
      *(int *)&(this->RegisteredStimuliSources).field_0x34) {
    puVar17 = *(undefined1 **)&(this->RegisteredStimuliSources).field_0x40;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = &(this->RegisteredStimuliSources).field_0x38;
    }
    iVar21 = *(int *)(puVar17 +
                     (ulonglong)
                     (*(int *)&(this->RegisteredStimuliSources).field_0x48 - 1U &
                     (uVar20 >> 0x10 ^ uVar20)) * 4);
    if (iVar21 != -1) {
LAB_146fdb0c1:
      plVar15 = (longlong *)
                ((longlong)iVar21 * 0x20 + *(longlong *)&(this->RegisteredStimuliSources).field_0x0)
      ;
      if ((AActor *)*plVar15 != param_1) goto code_r0x000146fdb0d0;
      plVar19 = plVar15 + 1;
      if (plVar15 == (longlong *)0x0) {
        plVar19 = (longlong *)0x0;
      }
      if (plVar19 != (longlong *)0x0) {
        lVar22 = *(longlong *)param_2.Class.field0_0x0;
        bVar7 = true;
        if ((lVar22 != 0) && (pUVar12 = UAISense::StaticClass(), pUVar12 != (UClass *)0x0)) {
          iVar21 = (int)pUVar12->_padding_;
          if ((*(int *)(lVar22 + 0x38) < iVar21) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar22 + 0x30) + (longlong)iVar21 * 8) !=
              &pUVar12->_padding_)) {
            bVar10 = false;
          }
          else {
            bVar10 = true;
          }
          if ((bVar10) && (pUVar5 = *(UObject **)param_2.Class.field0_0x0, pUVar5 != (UObject *)0x0)
             ) {
            local_res20 = pUVar5;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar5);
            }
            UAISense::GetSenseID(&local_70,(TSubclassOf<UAISense>)&local_res20);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) <
                 `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
               (_Init_thread_header(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                                     ::__l2::_thread_safe_static_guard_0__),
               `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
               ::__l2::_thread_safe_static_guard_0__ == -1)) {
              `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
              ::__l2::InvalidIDInstance = (FAINamedID<struct_FAISenseCounter>)0xff;
              ::FName::FName((FName *)&DAT_1551c48a4,L"Invalid");
              _Init_thread_footer(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                                   ::__l2::_thread_safe_static_guard_0__);
            }
            uVar20 = (uint)local_70.Index;
            if ((uVar20 != (byte)`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                                 ::__l2::InvalidIDInstance) &&
               ((int)uVar20 < (this->Senses).ArrayNum)) {
              if (((this->Senses).ArrayNum <= (int)uVar20) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if (*(longlong *)
                   ((this->Senses).AllocatorInstance.Data + (ulonglong)local_70.Index * 8) != 0) {
                puVar1 = (uint *)(plVar19 + 1);
                if (((this->Senses).ArrayNum <= (int)(uint)local_70.Index) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                if ((*puVar1 >>
                     (*(byte *)(*(longlong *)
                                 ((this->Senses).AllocatorInstance.Data +
                                 (ulonglong)local_70.Index * 8) + 0x3c) & 0x1f) & 1) != 0) {
                  if (((this->Senses).ArrayNum <= (int)(uint)local_70.Index) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  (**(code **)(**(longlong **)
                                 ((this->Senses).AllocatorInstance.Data +
                                 (ulonglong)local_70.Index * 8) + 0x2b8))();
                  *puVar1 = *puVar1 & ~(1 << (local_70.Index & 0x1f));
                }
              }
            }
            goto LAB_146fdb388;
          }
        }
        pFVar18 = (this->Senses).AllocatorInstance.Data;
        iVar21 = (this->Senses).ArrayNum;
        pFVar16 = pFVar18 + (longlong)iVar21 * 8;
        while( true ) {
          if ((this->Senses).ArrayNum != iVar21) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<TObjectPtr<UAISense>,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res10);
          }
          if (pFVar18 == pFVar16) break;
          plVar15 = *(longlong **)pFVar18;
          if ((plVar15 != (longlong *)0x0) &&
             ((*(uint *)(plVar19 + 1) >> (*(byte *)((longlong)plVar15 + 0x3c) & 0x1f) & 1) != 0)) {
            (**(code **)(*plVar15 + 0x2b8))();
          }
          pFVar18 = pFVar18 + 8;
        }
        *(undefined4 *)(plVar19 + 1) = 0;
LAB_146fdb388:
        if ((int)plVar19[1] == 0) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                                   ::__l2::_thread_safe_static_guard_0__),
             `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                            ::__l2::DelegateFName,"OnEndPlay");
            _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          FVar8 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                  ::__l2::DelegateFName;
          bVar10 = UObjectBase::IsValidLowLevelFast((UObjectBase *)param_1,false);
          if ((!bVar10) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("DelegateOwner->IsValidLowLevelFast(false)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                                  ,0xd7,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (param_1->OnEndPlay != (FActorEndPlaySignature)0x0) {
            FVar9 = (FActorEndPlaySignature)
                    FSparseDelegateStorage::Remove
                              ((UObject *)param_1,FVar8,
                               (TScriptDelegate<FNotThreadSafeDelegateMode> *)
                               &this->StimuliSourceEndPlayDelegate);
            param_1->OnEndPlay = FVar9;
          }
          TSet<TTuple<AActor_const_*,FPerceptionStimuliSource>,TDefaultMapHashableKeyFuncs<AActor_const_*,FPerceptionStimuliSource,0>,FDefaultSetAllocator>
          ::Remove((TSet<TTuple<AActor_const_*,FPerceptionStimuliSource>,TDefaultMapHashableKeyFuncs<AActor_const_*,FPerceptionStimuliSource,0>,FDefaultSetAllocator>
                    *)&this->RegisteredStimuliSources,param_1);
        }
      }
    }
  }
LAB_146fdb459:
  uVar20 = (this->SourcesToRegister).ArrayNum - 1;
  if (-1 < (int)uVar20) {
    lVar22 = (longlong)(int)uVar20 * 0x14;
    do {
      uVar11 = 0;
      if ((int)uVar20 < (this->SourcesToRegister).ArrayNum) {
        uVar11 = ~uVar20 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar10 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals<AActor,bool>
                         ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)
                          ((this->SourcesToRegister).AllocatorInstance.Data + lVar22 + 0xc),param_1)
      ;
      if (bVar10) {
        lVar4 = *(longlong *)param_2.Class.field0_0x0;
        bVar7 = true;
        if ((lVar4 != 0) && (pUVar12 = UAISense::StaticClass(), pUVar12 != (UClass *)0x0)) {
          iVar21 = (int)pUVar12->_padding_;
          if ((*(int *)(lVar4 + 0x38) < iVar21) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar21 * 8) !=
              &pUVar12->_padding_)) {
            bVar10 = false;
          }
          else {
            bVar10 = true;
          }
          if ((bVar10) && (*(longlong *)param_2.Class.field0_0x0 != 0)) {
            uVar11 = 0;
            if ((int)uVar20 < (this->SourcesToRegister).ArrayNum) {
              uVar11 = ~uVar20 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pUVar12 = *(UClass **)param_2.Class.field0_0x0;
            FVar3 = *(FAINamedID<struct_FAISenseCounter> *)
                     ((this->SourcesToRegister).AllocatorInstance.Data + lVar22);
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
              if (pUVar12 != (UClass *)0x0) goto LAB_146fdb5b5;
LAB_146fdb643:
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x9d4c) <
                   `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                   ::__l2::_thread_safe_static_guard_0__) &&
                 (_Init_thread_header(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                                       ::__l2::_thread_safe_static_guard_0__),
                 `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                 ::__l2::_thread_safe_static_guard_0__ == -1)) {
                `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                ::__l2::InvalidIDInstance = (FAINamedID<struct_FAISenseCounter>)0xff;
                ::FName::FName((FName *)&DAT_1551c48a4,L"Invalid");
                _Init_thread_footer(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                                     ::__l2::_thread_safe_static_guard_0__);
              }
              local_54 = `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                         ::__l2::InvalidIDInstance;
              local_50 = DAT_1551c48a4;
              FVar14 = `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                       ::__l2::InvalidIDInstance;
            }
            else {
              if (pUVar12 == (UClass *)0x0) goto LAB_146fdb643;
              UE::GC::MarkAsReachable((UObject *)pUVar12);
LAB_146fdb5b5:
              pUVar13 = UAISense::StaticClass();
              if (pUVar13 == (UClass *)0x0) goto LAB_146fdb643;
              iVar21 = (int)pUVar13->_padding_;
              if (((int)pUVar12->_padding_ < iVar21) ||
                 ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar21 * 8) !=
                  &pUVar13->_padding_)) {
                bVar10 = false;
              }
              else {
                bVar10 = true;
              }
              if (!bVar10) goto LAB_146fdb643;
              pUVar13 = UAISense::StaticClass();
              if (pUVar13 == (UClass *)0x0) {
LAB_146fdb615:
                pUVar12 = (UClass *)0x0;
              }
              else {
                iVar21 = (int)pUVar13->_padding_;
                if (((int)pUVar12->_padding_ < iVar21) ||
                   ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar21 * 8) !=
                    &pUVar13->_padding_)) {
                  bVar10 = false;
                }
                else {
                  bVar10 = true;
                }
                if (!bVar10) goto LAB_146fdb615;
              }
              if ((pUVar12->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
                UClass::InternalCreateDefaultObjectWrapper(pUVar12);
              }
              pUVar5 = (pUVar12->ClassDefaultObject).field0_0x0.DebugPtr;
              local_60 = (FAINamedID<struct_FAISenseCounter>)pUVar5[1].field_0x14;
              local_5c = *(undefined8 *)&pUVar5[1].field_0x18;
              FVar14 = local_60;
            }
            if (FVar3 != FVar14) goto LAB_146fdb739;
          }
        }
        uVar11 = 0;
        if ((int)uVar20 < (this->SourcesToRegister).ArrayNum) {
          uVar11 = ~uVar20 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar16 = (this->SourcesToRegister).AllocatorInstance.Data + lVar22;
        iVar21 = ~uVar20 + (this->SourcesToRegister).ArrayNum;
        if (iVar21 != 0) {
          memmove(pFVar16,pFVar16 + 0x14,(longlong)iVar21 * 0x14);
        }
        piVar2 = &(this->SourcesToRegister).ArrayNum;
        *piVar2 = *piVar2 + -1;
      }
LAB_146fdb739:
      lVar22 = lVar22 + -0x14;
      uVar20 = uVar20 - 1;
    } while (-1 < (int)uVar20);
  }
  if ((!bVar7) && (FVisualLogger::bIsRecording != 0)) {
    local_78 = (FName)param_1->_padding_;
    ::FName::ToString(&local_78,&local_48);
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this,(FName *)&LogAIPerception.field_0x4,Log,
               L"UnregisterSource called for %s but it doesn\'t seem to be registered as a source");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
code_r0x000146fdb0d0:
  iVar21 = (int)plVar15[3];
  if (iVar21 == -1) goto LAB_146fdb459;
  goto LAB_146fdb0c1;
}

// UpdateListener @ 146fe0030

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
UAIPerceptionSystem::UpdateListener(UAIPerceptionSystem *this,UAIPerceptionComponent *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FAIGenericID<FPerceptionListenerCounter> FVar10;
  FPerceptionListenerCounter FVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_AI_PerceptionSys> FVar13;
  undefined4 extraout_var;
  UAIPerceptionComponent *pUVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FPerceptionListenerCounter FVar15;
  undefined1 *puVar16;
  FName FVar17;
  FPerceptionListenerCounter *pFVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  FPerceptionListenerCounter *pFVar21;
  undefined1 local_res18;
  undefined1 local_res20 [8];
  undefined1 local_128 [4];
  FPerceptionListenerCounter local_124;
  FColor_u_0 local_120;
  undefined1 local_11c [4];
  FName local_118;
  FName local_110;
  UAIPerceptionComponent *local_f8;
  LARGE_INTEGER local_f0;
  FStatMessage local_e8;
  FWeakObjectPtr local_d8;
  int local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  undefined1 local_98;
  uint local_94;
  uint local_90;
  FPerceptionListenerCounter *local_88;
  FWeakObjectPtr *local_80;
  FName local_78;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  
  pFVar21 = (FPerceptionListenerCounter *)0x0;
  FVar13 = StatPtr_STAT_AI_PerceptionSys;
  if (StatPtr_STAT_AI_PerceptionSys == (FThreadSafeStaticStat<FStat_STAT_AI_PerceptionSys>)0x0) {
    pFVar12 = ::FName::FName(&local_78,"STAT_AI_PerceptionSys");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_AI_PerceptionSys>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_PerceptionSys,*pFVar12,
                        L"Perception System","STATGROUP_AI","STATCAT_Advanced",L"AI",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar13;
  bVar7 = false;
  bVar6 = false;
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  bVar9 = false;
  bVar8 = false;
  if ((FVar17.ComparisonIndex.Value.Value != 0) || (FVar17.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_120.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_120._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar7 = false;
      bVar6 = true;
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_118.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_118.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_118,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AIPerceptionSystem.cpp"
                   ,0x129);
        bVar7 = true;
        bVar6 = true;
        bVar9 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar8 = true;
      goto LAB_146fe019f;
    }
  }
  bVar7 = bVar9;
  bVar6 = bVar8;
  bVar8 = false;
  FVar17 = local_110;
LAB_146fe019f:
  if ((param_1 == (UAIPerceptionComponent *)0x0) || (((uint)param_1->_padding_ >> 0x1e & 1) != 0)) {
    UnregisterListener(this,param_1);
  }
  else {
    FVar15 = (FPerceptionListenerCounter)(param_1->PerceptionListenerId).Index;
    FVar10 = FAIGenericID<FPerceptionListenerCounter>::InvalidID();
    if (FVar15 == *(FPerceptionListenerCounter *)CONCAT44(extraout_var,FVar10.Index)) {
      local_124 = FAIGenericID<FPerceptionListenerCounter>::Counter;
      FVar15 = (FPerceptionListenerCounter)
               ((int)FAIGenericID<FPerceptionListenerCounter>::Counter + 1);
      (param_1->PerceptionListenerId).Index =
           (uint)FAIGenericID<FPerceptionListenerCounter>::Counter;
      FAIGenericID<FPerceptionListenerCounter>::Counter = FVar15;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_d8.ObjectIndex = 0;
      local_d8.ObjectSerialNumber = 0;
      local_f8 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_d8,(FObjectPtr)&local_f8);
      local_94 = local_94 & 0xfffffffe;
      local_d0 = 0;
      local_c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_98 = 0xff;
      local_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_a0 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
      local_b0 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
      dStack_a8 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
      FAIGenericID<FPerceptionListenerCounter>::InvalidID();
      pUVar14 = (UAIPerceptionComponent *)FWeakObjectPtr::Get(&local_d8);
      if ((param_1 != pUVar14) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("&InListener == Listener.Get()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AIPerceptionTypes.cpp"
                             ,0x5d,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FGenericTeamId::GetTeamIdentifier((AActor *)&local_res18);
      local_98 = local_res18;
      local_d0 = (param_1->PerceptionFilter).AcceptedChannelsMask;
      local_90 = (param_1->PerceptionListenerId).Index;
      local_88 = &local_124;
      local_80 = &local_d8;
      TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FAIGenericID<FPerceptionListenerCounter>_const_&,FPerceptionListener_&&>_>
                ((TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
                  *)&this->ListenerContainer,
                 (TPairInitializer<FAIGenericID<FPerceptionListenerCounter>_const_&,FPerceptionListener_&&>
                  *)local_11c,(bool *)&local_88);
      lVar19 = (longlong)(int)local_11c * 0x60 + *(longlong *)&this->ListenerContainer;
      bVar9 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar19 + 8));
      if (bVar9) {
        pUVar14 = (UAIPerceptionComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar19 + 8));
        UAIPerceptionComponent::GetLocationAndDirection
                  (pUVar14,(TVector<double> *)(lVar19 + 0x18),(TVector<double> *)(lVar19 + 0x30));
      }
      pFVar18 = pFVar21;
      if (*(int *)&(this->ListenerContainer).field_0x8 !=
          *(int *)&(this->ListenerContainer).field_0x34) {
        puVar16 = *(undefined1 **)&(this->ListenerContainer).field_0x40;
        if (puVar16 == (undefined1 *)0x0) {
          puVar16 = &(this->ListenerContainer).field_0x38;
        }
        FVar15 = *(FPerceptionListenerCounter *)
                  (puVar16 +
                  (ulonglong)(*(int *)&(this->ListenerContainer).field_0x48 - 1U & (uint)local_124)
                  * 4);
        if (FVar15 != (FPerceptionListenerCounter)0xffffffff) {
          do {
            pFVar18 = (FPerceptionListenerCounter *)
                      ((longlong)(int)FVar15 * 0x60 + *(longlong *)&this->ListenerContainer);
            if (*pFVar18 == local_124) {
              if (pFVar18 != (FPerceptionListenerCounter *)0x0) goto LAB_146fe04b7;
              break;
            }
            FVar15 = pFVar18[0x16];
            pFVar18 = pFVar21;
          } while (FVar15 != (FPerceptionListenerCounter)0xffffffff);
        }
      }
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
LAB_146fe04b7:
      iVar3 = (this->Senses).ArrayNum;
      pFVar20 = (this->Senses).AllocatorInstance.Data;
      pFVar2 = pFVar20 + (longlong)iVar3 * 8;
      while( true ) {
        if ((this->Senses).ArrayNum != iVar3) {
          `TCheckedPointerIterator<TObjectPtr<UAISense>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_128);
        }
        if (pFVar20 == pFVar2) break;
        lVar19 = *(longlong *)pFVar20;
        if ((lVar19 != 0) && (((uint)pFVar18[4] >> (*(byte *)(lVar19 + 0x3c) & 0x1f) & 1) != 0)) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar19 + 0x48),
                     &local_58);
          if ((*(int *)(lVar19 + 0x58) != 0) &&
             (plVar4 = *(longlong **)(lVar19 + 0x50), plVar4 != (longlong *)0x0)) {
            (**(code **)(*plVar4 + 0x68))(plVar4,pFVar18 + 2);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_58);
        }
        pFVar20 = pFVar20 + 8;
      }
    }
    else {
      pFVar18 = pFVar21;
      if (*(int *)&(this->ListenerContainer).field_0x8 !=
          *(int *)&(this->ListenerContainer).field_0x34) {
        puVar16 = *(undefined1 **)&(this->ListenerContainer).field_0x40;
        if (puVar16 == (undefined1 *)0x0) {
          puVar16 = &(this->ListenerContainer).field_0x38;
        }
        FVar11 = *(FPerceptionListenerCounter *)
                  (puVar16 +
                  (ulonglong)(*(int *)&(this->ListenerContainer).field_0x48 - 1U & (uint)FVar15) * 4
                  );
        if (FVar11 != (FPerceptionListenerCounter)0xffffffff) {
          do {
            pFVar18 = (FPerceptionListenerCounter *)
                      ((longlong)(int)FVar11 * 0x60 + *(longlong *)&this->ListenerContainer);
            if (*pFVar18 == FVar15) {
              if (pFVar18 != (FPerceptionListenerCounter *)0x0) goto LAB_146fe0256;
              break;
            }
            FVar11 = pFVar18[0x16];
            pFVar18 = pFVar21;
          } while (FVar11 != (FPerceptionListenerCounter)0xffffffff);
        }
      }
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
LAB_146fe0256:
      FPerceptionListener::UpdateListenerProperties((FPerceptionListener *)(pFVar18 + 2),param_1);
      pFVar20 = (this->Senses).AllocatorInstance.Data;
      iVar3 = (this->Senses).ArrayNum;
      pFVar2 = pFVar20 + (longlong)iVar3 * 8;
      while( true ) {
        if ((this->Senses).ArrayNum != iVar3) {
          `TCheckedPointerIterator<TObjectPtr<UAISense>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
        }
        if (pFVar20 == pFVar2) break;
        lVar19 = *(longlong *)pFVar20;
        if (lVar19 != 0) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar19 + 0x60),
                     &local_70);
          if ((*(int *)(lVar19 + 0x70) != 0) &&
             (plVar4 = *(longlong **)(lVar19 + 0x68), plVar4 != (longlong *)0x0)) {
            (**(code **)(*plVar4 + 0x68))(plVar4,(FPerceptionListener *)(pFVar18 + 2));
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_70);
        }
        pFVar20 = pFVar20 + 8;
      }
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_e8.NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_e8.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_f0);
      local_e8.StatData.Pad[4] = '\0';
      local_e8.StatData.Pad[5] = '\0';
      local_e8.StatData.Pad[6] = '\0';
      local_e8.StatData.Pad[7] = '\0';
      local_e8.StatData.Pad[0] = local_f0.s.LowPart._0_1_;
      local_e8.StatData.Pad[1] = local_f0.s.LowPart._1_1_;
      local_e8.StatData.Pad[2] = local_f0.s.LowPart._2_1_;
      local_e8.StatData.Pad[3] = local_f0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_e8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// execGetSenseClassForStimulus @ 146fe58e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UAIPerceptionSystem::execGetSenseClassForStimulus(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  int iVar2;
  FProperty *pFVar3;
  UAISystemBase *pUVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  UClass *pUVar8;
  UWorld *pUVar9;
  FString *pFVar10;
  UObject *pUVar11;
  wchar_t *pwVar13;
  uchar *puVar14;
  wchar_t *pwVar15;
  UWorld *local_res10;
  FString local_98;
  FString local_88;
  uchar local_78 [16];
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  double dStack_48;
  double local_40;
  undefined8 local_38;
  FAINamedID<FAISenseCounter> local_30;
  uint local_24;
  UObject *pUVar12;
  
  pUVar12 = (UObject *)0x0;
  pUVar11 = (UObject *)0x0;
  local_res10 = (UWorld *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_78[0] = 0xff;
  local_78[1] = 0xff;
  local_78[2] = '\x7f';
  local_78[3] = '\x7f';
  local_68 = FAISystem::InvalidLocation.field0_0x0._s_0.X;
  dStack_60 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
  local_50 = FAISystem::InvalidLocation.field0_0x0._s_0.X;
  dStack_48 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
  local_78[4] = 0xff;
  local_78[5] = 0xff;
  local_78[6] = '\x7f';
  local_78[7] = '\x7f';
  local_78[8] = '\0';
  local_78[9] = '\0';
  local_78[10] = 0x80;
  local_78[0xb] = 0xbf;
  local_58 = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  local_40 = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  local_38 = 0;
  FAINamedID<FAISenseCounter>::InvalidID(&local_30);
  local_24 = local_24 & 0xfffffff8;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  pUVar9 = local_res10;
  puVar14 = local_78;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar14 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (UWorld *)0x0) {
    pUVar8 = Z_Construct_UClass_UWorld_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar8->_padding_)) {
      pUVar9 = UEngine::GetWorldFromContextObject(GEngine,(UObject *)pUVar9,LogAndReturnNull);
      if (pUVar9 == (UWorld *)0x0) goto LAB_146fe5b64;
    }
    pUVar4 = (pUVar9->AISystem).field0_0x0.DebugPtr;
    if (pUVar4 != (UAISystemBase *)0x0) {
      pUVar8 = Z_Construct_UClass_UAISystem_NoRegister();
      iVar2 = (int)pUVar8->_padding_;
      if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar8->_padding_)) {
        pFVar10 = GetTypeName<UAISystem>(&local_98);
        pwVar13 = L"";
        if ((pFVar10->Data).ArrayNum == 0) {
          pwVar15 = L"";
        }
        else {
          pwVar15 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
        }
        pFVar10 = GetFullNameForCastLogError<UAISystemBase>(&local_88,pUVar4);
        if ((pFVar10->Data).ArrayNum != 0) {
          pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar13,pwVar15);
      }
      lVar5 = *(longlong *)&pUVar4[2].bInstantiateAISystemOnClient;
      pUVar12 = pUVar11;
      if (lVar5 != 0) {
        bVar1 = puVar14[0x48];
        if ((int)(uint)bVar1 < *(int *)(lVar5 + 0x90)) {
          if (*(int *)(lVar5 + 0x90) <= (int)(uint)bVar1) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          if (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (ulonglong)bVar1 * 8) != 0) {
            bVar1 = puVar14[0x48];
            if (*(int *)(lVar5 + 0x90) <= (int)(uint)bVar1) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            pUVar12 = *(UObject **)
                       (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (ulonglong)bVar1 * 8) + 0x10);
            if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_146fe5b7a;
            if (pUVar12 != (UObject *)0x0) {
              UE::GC::MarkAsReachable(pUVar12);
            }
          }
        }
      }
    }
  }
LAB_146fe5b64:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar12);
  }
LAB_146fe5b7a:
  *(UObject **)param_3 = pUVar12;
  return;
}

// execOnPerceptionStimuliSourceEndPlay @ 146fe6340

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UAIPerceptionSystem::execOnPerceptionStimuliSourceEndPlay
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [16];
  AActor *local_res20;
  undefined8 local_18 [2];
  
  local_res20 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_18[0] = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UnregisterSource((UAIPerceptionSystem *)param_1,local_res20,(TSubclassOf<UAISense>)local_18);
  return;
}

// execRegisterPerceptionStimuliSource @ 146fe6670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UAIPerceptionSystem::execRegisterPerceptionStimuliSource
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  UAISystemBase *pUVar4;
  UAIPerceptionSystem *this;
  bool bVar5;
  UObject *pUVar6;
  AActor *pAVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  UWorld *pUVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  UObject *local_res10;
  AActor *local_res18;
  UObject *local_res20;
  UObject *local_38 [2];
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  pUVar8 = local_res20;
  pAVar7 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (local_res20 == (UObject *)0x0)) {
    uVar12 = 0;
    if (local_res20 == (UObject *)0x0) goto LAB_146fe683a;
  }
  else {
    UE::GC::MarkAsReachable(local_res20);
  }
  pUVar6 = local_res10;
  uVar11 = 0;
  pUVar9 = UAISense::StaticClass();
  uVar12 = 0;
  if (pUVar9 != (UClass *)0x0) {
    iVar2 = (int)pUVar9->_padding_;
    if ((*(int *)&pUVar8[1].field_0x10 < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&pUVar8[1].field_0x8 + (longlong)iVar2 * 8) !=
        &pUVar9->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    uVar12 = uVar11;
    if ((bVar5) && (pAVar7 != (AActor *)0x0)) {
      pUVar10 = UEngine::GetWorldFromContextObject(GEngine,pUVar6,LogAndReturnNull);
      if ((pUVar10 != (UWorld *)0x0) &&
         (pUVar4 = (pUVar10->AISystem).field0_0x0.DebugPtr, pUVar4 != (UAISystemBase *)0x0)) {
        pUVar9 = Z_Construct_UClass_UAISystem_NoRegister();
        iVar2 = (int)pUVar9->_padding_;
        if (((iVar2 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
            ((longlong *)
             *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
             &pUVar9->_padding_)) &&
           (this = *(UAIPerceptionSystem **)&pUVar4[2].bInstantiateAISystemOnClient,
           this != (UAIPerceptionSystem *)0x0)) {
          local_38[0] = pUVar8;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar8);
          }
          RegisterSourceForSenseClass(this,(TSubclassOf<UAISense>)local_38,pAVar7);
          uVar12 = 1;
        }
      }
    }
  }
LAB_146fe683a:
  *(undefined1 *)param_3 = uVar12;
  return;
}

// execReportEvent @ 146fe70d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UAIPerceptionSystem::execReportEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong *plVar4;
  FAINamedID<struct_FAISenseCounter> FVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong *local_res10;
  FName local_res20;
  FAINamedID<struct_FAISenseCounter> local_28 [16];
  FString local_18;
  
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  plVar4 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (longlong *)0x0) {
    (**(code **)(*local_res10 + 0x2b0))(local_res10,local_28);
    FVar5 = local_28[0];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
      ::__l2::InvalidIDInstance = (FAINamedID<struct_FAISenseCounter>)0xff;
      ::FName::FName((FName *)&DAT_1551c48a4,L"Invalid");
      _Init_thread_footer(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    if ((FVar5 != `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                  ::__l2::InvalidIDInstance) &&
       (uVar7 = (ulonglong)(byte)local_28[0],
       (int)(uint)(byte)local_28[0] < *(int *)&param_1[3].field_0x18)) {
      if ((*(int *)&param_1[3].field_0x18 <= (int)(uint)(byte)local_28[0]) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong *)(*(longlong *)&param_1[3].field_0x10 + uVar7 * 8) != 0) {
        if ((*(int *)&param_1[3].field_0x18 <= (int)(uint)(byte)local_28[0]) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar2 = *(longlong **)
                  (*(longlong *)&param_1[3].field_0x10 + (ulonglong)(byte)local_28[0] * 8);
        (**(code **)(*plVar2 + 0x2c0))(plVar2,plVar4);
        return;
      }
    }
    if (FVisualLogger::bIsRecording != 0) {
      local_res20 = *(FName *)(plVar4 + 3);
      ::FName::ToString(&local_res20,&local_18);
      FVisualLogger::CategorizedLogfImpl
                (param_1,(FName *)&LogAIPerception.field_0x4,Log,
                 L"Skipping perception event %s since related sense class has not been registered (no listeners)"
                );
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    (**(code **)(*plVar4 + 0x2b8))(plVar4,param_1);
  }
  return;
}

// execReportPerceptionEvent @ 146fe7640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UAIPerceptionSystem::execReportPerceptionEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UAISystemBase *pUVar3;
  UObject *pUVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong *plVar7;
  FAINamedID<struct_FAISenseCounter> FVar8;
  bool bVar9;
  UClass *pUVar10;
  UWorld *pUVar11;
  FString *pFVar12;
  wchar_t *pwVar13;
  ulonglong uVar14;
  wchar_t *pwVar15;
  longlong *local_res10 [2];
  UWorld *local_res20;
  FName local_68;
  FAINamedID<struct_FAISenseCounter> local_60 [16];
  FString local_50;
  FString local_40;
  FString local_30;
  
  local_res20 = (UWorld *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar11 = local_res20;
  plVar7 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (UWorld *)0x0) {
    pUVar10 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar10->_padding_;
    if ((((iVar1 <= *(int *)(pUVar11->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar10->_padding_)) ||
        (pUVar11 = UEngine::GetWorldFromContextObject(GEngine,(UObject *)pUVar11,LogAndReturnNull),
        pUVar11 != (UWorld *)0x0)) &&
       (pUVar3 = (pUVar11->AISystem).field0_0x0.DebugPtr, pUVar3 != (UAISystemBase *)0x0)) {
      pUVar10 = Z_Construct_UClass_UAISystem_NoRegister();
      iVar1 = (int)pUVar10->_padding_;
      if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar10->_padding_)) {
        pFVar12 = GetTypeName<UAISystem>(&local_40);
        pwVar15 = L"";
        if ((pFVar12->Data).ArrayNum == 0) {
          pwVar13 = L"";
        }
        else {
          pwVar13 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
        }
        pFVar12 = GetFullNameForCastLogError<UAISystemBase>(&local_30,pUVar3);
        if ((pFVar12->Data).ArrayNum != 0) {
          pwVar15 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar15,pwVar13);
      }
      pUVar4 = *(UObject **)&pUVar3[2].bInstantiateAISystemOnClient;
      if ((pUVar4 != (UObject *)0x0) && (plVar7 != (longlong *)0x0)) {
        (**(code **)(*plVar7 + 0x2b0))(plVar7,local_60);
        FVar8 = local_60[0];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) <
             `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
          ::__l2::InvalidIDInstance = (FAINamedID<struct_FAISenseCounter>)0xff;
          ::FName::FName((FName *)&DAT_1551c48a4,L"Invalid");
          _Init_thread_footer(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        if ((FVar8 != `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                      ::__l2::InvalidIDInstance) &&
           (uVar14 = (ulonglong)(byte)local_60[0],
           (int)(uint)(byte)local_60[0] < *(int *)&pUVar4[3].field_0x18)) {
          if ((*(int *)&pUVar4[3].field_0x18 <= (int)(uint)(byte)local_60[0]) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(longlong *)(*(longlong *)&pUVar4[3].field_0x10 + uVar14 * 8) != 0) {
            if ((*(int *)&pUVar4[3].field_0x18 <= (int)(uint)(byte)local_60[0]) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            plVar5 = *(longlong **)
                      (*(longlong *)&pUVar4[3].field_0x10 + (ulonglong)(byte)local_60[0] * 8);
            (**(code **)(*plVar5 + 0x2c0))(plVar5,plVar7);
            return;
          }
        }
        if (FVisualLogger::bIsRecording != 0) {
          local_68 = *(FName *)(plVar7 + 3);
          ::FName::ToString(&local_68,&local_50);
          FVisualLogger::CategorizedLogfImpl
                    (pUVar4,(FName *)&LogAIPerception.field_0x4,Log,
                     L"Skipping perception event %s since related sense class has not been registered (no listeners)"
                    );
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
        }
        (**(code **)(*plVar7 + 0x2b8))(plVar7,pUVar4);
      }
    }
  }
  return;
}

// OnEvent<FAITouchEvent,UAISense_Touch> @ 146feac80

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
UAIPerceptionSystem::OnEvent<FAITouchEvent,UAISense_Touch>
          (UAIPerceptionSystem *this,FAITouchEvent *param_1)

{
  ForAnyElementType *pFVar1;
  byte bVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *this_00;
  
  this_00 = UAISense_Touch::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  bVar2 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x14;
  if ((int)(uint)bVar2 < (this->Senses).ArrayNum) {
    if (((this->Senses).ArrayNum <= (int)(uint)bVar2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(longlong *)((this->Senses).AllocatorInstance.Data + (ulonglong)bVar2 * 8) != 0) {
      if (((this->Senses).ArrayNum <= (int)(uint)bVar2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *(longlong *)((this->Senses).AllocatorInstance.Data + (ulonglong)bVar2 * 8);
      pFVar1 = (ForAnyElementType *)(lVar3 + 0x90);
      if ((((FAITouchEvent *)pFVar1->Data <= param_1) &&
          (param_1 < (FAITouchEvent *)pFVar1->Data + *(int *)(lVar3 + 0x9c))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = *(int *)(lVar3 + 0x98);
      if (iVar6 == *(int *)(lVar3 + 0x9c)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,pFVar1,(int *)(lVar3 + 0x9c));
      }
      *(int *)(lVar3 + 0x98) = iVar6 + 1;
      FAITouchEvent::FAITouchEvent((FAITouchEvent *)(pFVar1->Data + (longlong)iVar6 * 0x30),param_1)
      ;
      *(undefined4 *)(lVar3 + 0x38) = 0;
    }
  }
  return;
}

