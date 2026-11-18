// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// GetValue @ 147464c70

EAnimInterpolationType * __thiscall TOptional<enum_EAnimInterpolationType>::GetValue(void *this)

{
  code *pcVar1;
  bool bVar2;
  EAnimInterpolationType *pEVar3;
  
  if (*(char *)((longlong)this + 1) == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pEVar3 = (EAnimInterpolationType *)(*pcVar1)();
      return pEVar3;
    }
  }
  return this;
}

// ~TOptional<FActorIteratorState> @ 147abe260

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
TOptional<FActorIteratorState>::~TOptional<FActorIteratorState>
          (TOptional<FActorIteratorState> *this)

{
  FScriptContainerElement *pFVar1;
  
  if (this->bIsSet != false) {
    UWorld::RemoveOnActorSpawnedHandler
              ((this->TypedValue).CurrentWorld,
               (FDelegateHandle)(this->TypedValue).ActorSpawnedDelegateHandle.ID);
    pFVar1 = (this->TypedValue).SpawnedActorArray.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this->TypedValue).ActorArray.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
      return;
    }
  }
  return;
}

// operator-> @ 147ac0c60

FGotoResult * __thiscall TOptional<FGotoResult>::operator->(TOptional<FGotoResult> *this)

{
  code *pcVar1;
  bool bVar2;
  FGotoResult *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FGotoResult *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

// operator-> @ 147ac0cb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FActorIteratorState * __thiscall
TOptional<FActorIteratorState>::operator->(TOptional<FActorIteratorState> *this)

{
  code *pcVar1;
  bool bVar2;
  FActorIteratorState *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FActorIteratorState *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

// GetValue @ 147aef0a0

FGotoResult * __thiscall TOptional<FGotoResult>::GetValue(TOptional<FGotoResult> *this)

{
  code *pcVar1;
  bool bVar2;
  FGotoResult *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FGotoResult *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

// operator-> @ 147bc13e0

FFontFacePlatformRasterizationOverrides * __thiscall
TOptional<FFontFacePlatformRasterizationOverrides>::operator->
          (TOptional<FFontFacePlatformRasterizationOverrides> *this)

{
  code *pcVar1;
  bool bVar2;
  FFontFacePlatformRasterizationOverrides *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FFontFacePlatformRasterizationOverrides *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

// Emplace<UWorld_const_*_&,TSubclassOf<AActor>_&> @ 147f95a80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FActorIteratorState * __thiscall
TOptional<FActorIteratorState>::Emplace<UWorld_const_*_&,TSubclassOf<AActor>_&>
          (TOptional<FActorIteratorState> *this,UWorld **param_1,TSubclassOf<AActor> *param_2)

{
  FScriptContainerElement *pFVar1;
  FActorIteratorState *pFVar2;
  UClass *local_res8;
  
  if (this->bIsSet != false) {
    UWorld::RemoveOnActorSpawnedHandler
              ((this->TypedValue).CurrentWorld,
               (FDelegateHandle)(this->TypedValue).ActorSpawnedDelegateHandle.ID);
    pFVar1 = (this->TypedValue).SpawnedActorArray.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this->TypedValue).ActorArray.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  local_res8 = (param_2->Class).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pFVar2 = FActorIteratorState::FActorIteratorState
                     (&this->TypedValue,*param_1,(TSubclassOf<AActor>)&local_res8);
  this->bIsSet = true;
  return pFVar2;
}

// operator-> @ 147fad210

TCircularBuffer<TUniquePtr<FBitReader,TDefaultDelete<FBitReader>_>_> * __thiscall
TOptional<TCircularBuffer<TUniquePtr<FBitReader,TDefaultDelete<FBitReader>_>_>_>::operator->
          (TOptional<TCircularBuffer<TUniquePtr<FBitReader,TDefaultDelete<FBitReader>_>_>_> *this)

{
  code *pcVar1;
  bool bVar2;
  TCircularBuffer<TUniquePtr<FBitReader,TDefaultDelete<FBitReader>_>_> *pTVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TCircularBuffer<TUniquePtr<FBitReader,TDefaultDelete<FBitReader>_>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &this->TypedValue;
}

// operator-> @ 148254500

FJob * __thiscall
TOptional<FPhysScene_AsyncPhysicsStateJobQueue::FJob>::operator->
          (TOptional<FPhysScene_AsyncPhysicsStateJobQueue::FJob> *this)

{
  code *pcVar1;
  bool bVar2;
  FJob *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FJob *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

// operator= @ 1482de390

TOptional<TUniquePtr<FNetworkPhysicsDataHelper,TDefaultDelete<FNetworkPhysicsDataHelper>_>_> *
__thiscall
TOptional<TUniquePtr<FNetworkPhysicsDataHelper,TDefaultDelete<FNetworkPhysicsDataHelper>_>_>::
operator=(TOptional<TUniquePtr<FNetworkPhysicsDataHelper,TDefaultDelete<FNetworkPhysicsDataHelper>_>_>
          *this,TUniquePtr<FNetworkPhysicsDataHelper,TDefaultDelete<FNetworkPhysicsDataHelper>_>
                *param_1)

{
  FNetworkPhysicsDataHelper *pFVar1;
  
  if ((TOptional<TUniquePtr<FNetworkPhysicsDataHelper,TDefaultDelete<FNetworkPhysicsDataHelper>_>_>
       *)param_1 != this) {
    if ((this->bIsSet != false) &&
       (pFVar1 = (this->TypedValue).Ptr, pFVar1 != (FNetworkPhysicsDataHelper *)0x0)) {
      (**(code **)*pFVar1)(pFVar1,1);
    }
    (this->TypedValue).Ptr = param_1->Ptr;
    param_1->Ptr = (FNetworkPhysicsDataHelper *)0x0;
    this->bIsSet = true;
  }
  return this;
}

// operator= @ 1482de3f0

TOptional<TWeakPtr<FNetworkPhysicsSettingsData_const_,1>_> * __thiscall
TOptional<TWeakPtr<FNetworkPhysicsSettingsData_const_,1>_>::operator=
          (TOptional<TWeakPtr<FNetworkPhysicsSettingsData_const_,1>_> *this,
          TWeakPtr<FNetworkPhysicsSettingsData_const_,1> *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TOptional<TWeakPtr<FNetworkPhysicsSettingsData_const_,1>_> *pTVar6;
  
  if (param_1 != (TWeakPtr<FNetworkPhysicsSettingsData_const_,1> *)this) {
    plVar3 = *(longlong **)((longlong)&this->field0_0x0 + 8);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
    (this->field0_0x0).TypedValue.Object = param_1->Object;
    (this->field0_0x0).TypedValue.WeakReferenceCount.ReferenceController =
         (param_1->WeakReferenceCount).ReferenceController;
    (param_1->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FNetworkPhysicsSettingsData *)0x0;
    if ((this->field0_0x0).TypedValue.Object == (FNetworkPhysicsSettingsData *)0xffffffffffffffff) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TOptional<TWeakPtr<FNetworkPhysicsSettingsData_const_,1>_> *)(*pcVar4)();
        return pTVar6;
      }
    }
  }
  return this;
}

// GetValue @ 14840b880

double * __thiscall TOptional<double>::GetValue(TOptional<double> *this)

{
  code *pcVar1;
  bool bVar2;
  double *pdVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pdVar3 = (double *)(*pcVar1)();
      return pdVar3;
    }
  }
  return &this->TypedValue;
}

// operator-> @ 148781760

FError * __thiscall
TOptional<UE::UnifiedError::FError>::operator->(TOptional<UE::UnifiedError::FError> *this)

{
  code *pcVar1;
  bool bVar2;
  FError *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FError *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

// GetValue @ 14895f220

FSlateFontInfo * __thiscall TOptional<FSlateFontInfo>::GetValue(TOptional<FSlateFontInfo> *this)

{
  code *pcVar1;
  bool bVar2;
  FSlateFontInfo *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSlateFontInfo *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

// GetValue @ 1489ef8b0

FTimeout * __thiscall TOptional<UE::FTimeout_const_>::GetValue(TOptional<UE::FTimeout_const_> *this)

{
  code *pcVar1;
  bool bVar2;
  FTimeout *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FTimeout *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

