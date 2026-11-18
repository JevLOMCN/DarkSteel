// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 14

// GetWorld @ 145442d20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UWorld * __thiscall UActorComponent::GetWorld(UActorComponent *this)

{
  int iVar1;
  AActor *this_00;
  UWorld *pUVar2;
  UClass *pUVar3;
  
  if (this->WorldPrivate != (UWorld *)0x0) {
    return this->WorldPrivate;
  }
  this_00 = this->OwnerPrivate;
  if (((this_00 == (AActor *)0x0) || (((uint)this_00->_padding_ >> 4 & 1) != 0)) ||
     (pUVar2 = AActor::GetWorld(this_00), pUVar2 == (UWorld *)0x0)) {
    pUVar2 = (UWorld *)this->_padding_;
    if (pUVar2 != (UWorld *)0x0) {
      pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar2;
      }
    }
    pUVar2 = (UWorld *)0x0;
  }
  return pUVar2;
}

// AdditionalStatObject @ 145673290

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall UActorComponent::AdditionalStatObject(UActorComponent *this)

{
  return (UObject *)0x0;
}

// AllowsAsyncPhysicsStateCreation @ 1456733a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorComponent::AllowsAsyncPhysicsStateCreation(UActorComponent *this)

{
  return false;
}

// AllowsAsyncPhysicsStateDestruction @ 1456733b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorComponent::AllowsAsyncPhysicsStateDestruction(UActorComponent *this)

{
  return false;
}

// AsyncPhysicsTickComponent @ 1456734a0

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
UActorComponent::AsyncPhysicsTickComponent(UActorComponent *this,float param_1,float param_2)

{
  UFunction *pUVar1;
  float fStackX_8;
  float fStackX_c;
  
  fStackX_8 = param_1;
  fStackX_c = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UActorComponent_ReceiveAsyncPhysicsTick);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&fStackX_8);
  return;
}

// GetComponentChildElements @ 145682250

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
UActorComponent::GetComponentChildElements
          (UActorComponent *this,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  return;
}

// GetReplicationCondition @ 145683d20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ELifetimeCondition __thiscall UActorComponent::GetReplicationCondition(UActorComponent *this)

{
  return ((int)(char)this->field_0x98 >> 7 & 0xfffffff1U) + COND_Never;
}

// IsHLODRelevant @ 14568d0d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorComponent::IsHLODRelevant(UActorComponent *this)

{
  return false;
}

// IsReadyForOwnerToAutoDestroy @ 14568d220

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorComponent::IsReadyForOwnerToAutoDestroy(UActorComponent *this)

{
  return true;
}

// OnActorVisibilityChanged @ 14568d5b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::OnActorVisibilityChanged(UActorComponent *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  UWorld *pUVar6;
  FUObjectItem *pFVar7;
  longlong lVar8;
  uint uVar9;
  FDestructionSentinel FStack_28;
  
  if ((this->bRegistered == '\x01' && this->bRenderStateCreated == '\x01') &&
     ((this->bRenderStateDirty == 0 || (pUVar6 = GetWorld(this), pUVar6 == (UWorld *)0x0)))) {
    this->bRenderStateDirty = '\x01';
    if (this->bNeverNeedsRenderUpdate == 0) {
      pUVar6 = GetWorld(this);
      if (pUVar6 == (UWorld *)0x0) {
        pFVar7 = FUObjectArray::IndexToObject
                           (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
        if (((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) {
          DoDeferredRenderUpdates_Concurrent(this);
        }
      }
      else {
        bVar2 = (bool)(**(code **)(this->_padding_ + 0x458))(this);
        UWorld::MarkActorComponentForNeededEndOfFrameUpdate(pUVar6,this,bVar2);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&MarkRenderStateDirtyEvent,
               (FWriteAccessScope *)&FStack_28);
    bVar2 = false;
    MarkRenderStateDirtyEvent._28_4_ = MarkRenderStateDirtyEvent._28_4_ + 1;
    uVar9 = MarkRenderStateDirtyEvent._16_4_ - 1;
    if (-1 < (int)uVar9) {
      lVar8 = (longlong)(int)uVar9 << 4;
      bVar2 = false;
      do {
        uVar5 = 0;
        if ((int)uVar9 < (int)MarkRenderStateDirtyEvent._16_4_) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (((*(int *)(lVar8 + 8 + MarkRenderStateDirtyEvent._8_8_) == 0) ||
            (*(longlong **)(lVar8 + MarkRenderStateDirtyEvent._8_8_) == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(**(longlong **)(lVar8 + MarkRenderStateDirtyEvent._8_8_) + 0x68))()
           , cVar4 == '\0')) {
          bVar2 = true;
        }
        lVar8 = lVar8 + -0x10;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
    MarkRenderStateDirtyEvent._28_4_ = MarkRenderStateDirtyEvent._28_4_ + -1;
    if (bVar2) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&MarkRenderStateDirtyEvent,
                 false);
    }
    if (FStack_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_28.Accessor,&FStack_28);
    }
  }
  return;
}

// OnEndOfFrameUpdateDuringTick @ 14568d610

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::OnEndOfFrameUpdateDuringTick(UActorComponent *this)

{
  return;
}

// OnPreEndOfFrameSync @ 14568d650

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::OnPreEndOfFrameSync(UActorComponent *this)

{
  return;
}

// PreReplication @ 14568f950

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
UActorComponent::PreReplication(UActorComponent *this,IRepChangedPropertyTracker *param_1)

{
  return;
}

// Tick @ 1456a4610

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::Tick(UActorComponent *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\ActorComponent.h"
                     ,0x58f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

