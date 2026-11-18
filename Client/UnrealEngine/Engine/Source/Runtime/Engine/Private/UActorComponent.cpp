// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 181

// UActorComponent @ 1477ee800

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UActorComponent * __thiscall
UActorComponent::UActorComponent(UActorComponent *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  FTickFunction::FTickFunction((FTickFunction *)&this->PrimaryComponentTick);
  (this->PrimaryComponentTick)._padding_ = (longlong)&___7FActorComponentTickFunction__6B_;
  (this->ComponentTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentTags).ArrayNum = 0;
  (this->ComponentTags).ArrayMax = 0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  this->OnComponentActivated = (FActorComponentActivatedSignature)0x0;
  this->OnComponentDeactivated = (FActorComponentDeactivateSignature)0x0;
  return this;
}

// UActorComponent @ 1477ee880

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UActorComponent * __thiscall
UActorComponent::UActorComponent(UActorComponent *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  UClass *pUVar4;
  AActor *pAVar5;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  FTickFunction::FTickFunction((FTickFunction *)&this->PrimaryComponentTick);
  (this->PrimaryComponentTick)._padding_ = (longlong)&___7FActorComponentTickFunction__6B_;
  (this->ComponentTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentTags).ArrayNum = 0;
  (this->ComponentTags).ArrayMax = 0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  this->PhysicsStateAsyncCreationState = None;
  this->OnComponentActivated = (FActorComponentActivatedSignature)0x0;
  this->OnComponentDeactivated = (FActorComponentDeactivateSignature)0x0;
  this->RegistrationState = None;
  this->PhysicsStateAsyncCreationScene = (FPhysScene_Chaos *)0x0;
  pUVar4 = Z_Construct_UClass_AActor_NoRegister();
  pAVar5 = (AActor *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
  this->OwnerPrivate = pAVar5;
  bVar3 = *(byte *)((longlong)&(this->PrimaryComponentTick)._padding_ + 2);
  *(undefined1 *)&(this->PrimaryComponentTick)._padding_ = 2;
  *(byte *)((longlong)&(this->PrimaryComponentTick)._padding_ + 2) = bVar3 & 0xfd | 0x94;
  FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->PrimaryComponentTick,false);
  this->bCallAsyncPhysicsStateCreatedDelegate = '\0';
  this->bNetAddressable = '\0';
  this->MarkedForEndOfFrameUpdateArrayIndex = -1;
  this->bAutoRegister = '\x01';
  this->bAllowReregistration = '\x01';
  this->MarkedForEndOfFrameUpdateState = '\0';
  this->bRenderStateUpdating = '\0';
  this->bReadyForEarlyEndOfFrameUpdate = '\0';
  this->bMarkedForPreEndOfFrameSync = '\0';
  this->bAsyncPhysicsTickEnabled = '\0';
  puVar2 = &this->field_0x9a;
  this->bEditableWhenInherited = '\x01';
  this->bCanEverAffectNavigation = '\0';
  this->bNavigationRelevant = '\0';
  this->UCSSerializationIndex = -1;
  this->CreationMethod = Native;
  this->field_0x98 = GDefaultUseSubObjectReplicationList << 6 | this->field_0x98 & 0xbf;
  return this;
}

// ~UActorComponent @ 1477f3eb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::~UActorComponent(UActorComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->AssetUserData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ComponentTags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FTickFunction::~FTickFunction((FTickFunction *)&this->PrimaryComponentTick);
  this->_padding_ = (longlong)&___7IInterface_AssetUserData__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Activate @ 147804030

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::Activate(UActorComponent *this,bool param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined7 in_register_00000011;
  TSharedPtr<FActorComponentActivatedSignature_MCSignature,1> local_28;
  UActorComponent *local_18;
  undefined1 local_10;
  
  if ((!param_1) && (cVar2 = (**(code **)(this->_padding_ + 0x330))(), cVar2 != '\x01')) {
    return;
  }
  (**(code **)(this->_padding_ + 0x420))(this,CONCAT71(in_register_00000011,1));
  this->bIsActive = '\x01';
  TSparseDynamicDelegate<FActorComponentActivatedSignature_MCSignature,UActorComponent,FActorComponentActivatedSignatureInfoGetter>
  ::GetShared((TSparseDynamicDelegate<FActorComponentActivatedSignature_MCSignature,UActorComponent,FActorComponentActivatedSignatureInfoGetter>
               *)&this->OnComponentActivated,&local_28);
  if ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)local_28.Object !=
      (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    if (((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)local_28.Object ==
         (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_18 = this;
    local_10 = param_1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)local_28.Object,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// AddAssetUserData @ 1478041d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::AddAssetUserData(UActorComponent *this,UAssetUserData *param_1)

{
  int *piVar1;
  code *pcVar2;
  UAssetUserData **ppUVar3;
  bool bVar4;
  int iVar5;
  UObject *local_res10;
  UAssetUserData *local_18 [2];
  
  if (param_1 != (UAssetUserData *)0x0) {
    local_res10 = *(UObject **)&param_1->field_0x10;
    pcVar2 = *(code **)(this->_padding_ + 0x38);
    if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res10 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res10);
    }
    (*pcVar2)(this,&local_res10);
    local_18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    ppUVar3 = (UAssetUserData **)(this->PrimaryComponentTick)._padding_;
    if (((ppUVar3 <= local_18) &&
        (local_18 < ppUVar3 + *(int *)((longlong)&(this->PrimaryComponentTick)._padding_ + 4))) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (int)(this->PrimaryComponentTick)._padding_;
    piVar1 = (int *)((longlong)&(this->PrimaryComponentTick)._padding_ + 4);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&(this->PrimaryComponentTick)._padding_,piVar1);
    }
    *(int *)&(this->PrimaryComponentTick)._padding_ = iVar5 + 1;
    *(UAssetUserData **)((this->PrimaryComponentTick)._padding_ + (longlong)iVar5 * 8) = local_18[0]
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_18[0] != (UAssetUserData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_18[0]);
    }
  }
  return;
}

// AddReferencedObjects @ 147805060

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UActorComponent::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  UClass *pUVar2;
  TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_> *pTVar3;
  FString *pFVar4;
  FScriptContainerElement *pFVar5;
  wchar_t *pwVar6;
  FScriptContainerElement *pFVar7;
  wchar_t *pwVar8;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  UObject::AddReferencedObjects(param_1,param_2);
  AcquireSRWLockShared((PSRWLOCK)&AllUCSModifiedPropertiesLock);
  if (param_1 == (UObject *)0x0) {
    pFVar4 = GetTypeName<UActorComponent>(&local_38);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar6);
  }
  pUVar2 = GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    pTVar3 = TMapBase<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,0>_>
             ::Find((TMapBase<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,0>_>
                     *)&AllUCSModifiedProperties,(UActorComponent *)param_1);
    if (pTVar3 != (TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_> *)0x0) {
      pFVar5 = (pTVar3->AllocatorInstance).Data;
      iVar1 = pTVar3->ArrayNum;
      pFVar7 = pFVar5 + (longlong)iVar1 * 0x20;
      while( true ) {
        if (pTVar3->ArrayNum != iVar1) {
          `TCheckedPointerIterator<FSimpleMemberReference,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar5 == pFVar7) break;
        (**(code **)(param_2->_padding_ + 0x88))(param_2,pFVar5,0,0);
        pFVar5 = pFVar5 + 0x20;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014780512f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockShared((PSRWLOCK)&AllUCSModifiedPropertiesLock);
    return;
  }
  pFVar4 = GetTypeName<UActorComponent>(&local_38);
  pwVar6 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject>(&local_28,param_1);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar6,pwVar8);
}

// AddReplicatedSubObject @ 1478052e0

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
UActorComponent::AddReplicatedSubObject
          (UActorComponent *this,UObject *param_1,ELifetimeCondition param_2)

{
  if (this->OwnerPrivate != (AActor *)0x0) {
    AActor::AddActorComponentReplicatedSubObject(this->OwnerPrivate,this,param_1,param_2);
    return;
  }
  return;
}

// AddTickPrerequisiteActor @ 147805520

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::AddTickPrerequisiteActor(UActorComponent *this,AActor *param_1)

{
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  AActor *pAStackX_8;
  FTickPrerequisite FStack_18;
  
  if (((((this->PrimaryComponentTick)._padding_ & 0x20000) != 0) && (param_1 != (AActor *)0x0)) &&
     (((param_1->PrimaryActorTick)._padding_ & 0x20000) != 0)) {
    if ((((this->PrimaryComponentTick)._padding_ & 0x20000) == 0) &&
       ((pbVar1 = (byte *)(this->PrimaryComponentTick)._padding_, pbVar1 == (byte *)0x0 ||
        ((*pbVar1 & 1) == 0)))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((((param_1->PrimaryActorTick)._padding_ & 0x20000) == 0) &&
       ((pbVar1 = (byte *)(param_1->PrimaryActorTick)._padding_, pbVar1 == (byte *)0x0 ||
        ((*pbVar1 & 1) == 0)))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar2) && (bVar3)) {
      if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FStack_18.PrerequisiteObject.WeakPtr.ObjectIndex = 0;
      FStack_18.PrerequisiteObject.WeakPtr.ObjectSerialNumber = 0;
      pAStackX_8 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&FStack_18,(FObjectPtr)&pAStackX_8);
      FStack_18.PrerequisiteTickFunction = (FTickFunction *)&param_1->PrimaryActorTick;
      TArray<FTickPrerequisite,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FTickPrerequisite>
                ((TArray<FTickPrerequisite,TSizedDefaultAllocator<32>_> *)
                 &(this->PrimaryComponentTick)._padding_,&FStack_18);
    }
    return;
  }
  return;
}

// AddTickPrerequisiteComponent @ 147805550

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
UActorComponent::AddTickPrerequisiteComponent(UActorComponent *this,UActorComponent *param_1)

{
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  UActorComponent *pUStackX_8;
  FTickPrerequisite FStack_18;
  
  if (((((this->PrimaryComponentTick)._padding_ & 0x20000) != 0) &&
      (param_1 != (UActorComponent *)0x0)) &&
     (((param_1->PrimaryComponentTick)._padding_ & 0x20000) != 0)) {
    if ((((this->PrimaryComponentTick)._padding_ & 0x20000) == 0) &&
       ((pbVar1 = (byte *)(this->PrimaryComponentTick)._padding_, pbVar1 == (byte *)0x0 ||
        ((*pbVar1 & 1) == 0)))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((((param_1->PrimaryComponentTick)._padding_ & 0x20000) == 0) &&
       ((pbVar1 = (byte *)(param_1->PrimaryComponentTick)._padding_, pbVar1 == (byte *)0x0 ||
        ((*pbVar1 & 1) == 0)))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar2) && (bVar3)) {
      if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UActorComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FStack_18.PrerequisiteObject.WeakPtr.ObjectIndex = 0;
      FStack_18.PrerequisiteObject.WeakPtr.ObjectSerialNumber = 0;
      pUStackX_8 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_1 != (UActorComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&FStack_18,(FObjectPtr)&pUStackX_8);
      FStack_18.PrerequisiteTickFunction = (FTickFunction *)&param_1->PrimaryComponentTick;
      TArray<FTickPrerequisite,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FTickPrerequisite>
                ((TArray<FTickPrerequisite,TSizedDefaultAllocator<32>_> *)
                 &(this->PrimaryComponentTick)._padding_,&FStack_18);
    }
    return;
  }
  return;
}

// BeginDestroy @ 14780c3e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::BeginDestroy(UActorComponent *this)

{
  if (this->bHasBegunPlay != '\0') {
    (**(code **)(this->_padding_ + 0x400))(this,0);
  }
  if (this->bHasBeenInitialized != '\0') {
    (**(code **)(this->_padding_ + 0x408))(this);
  }
  this->bIsReadyForReplication = '\0';
  ExecuteUnregisterEvents(this);
  if (this->bHasBeenCreated != '\0') {
    (**(code **)(this->_padding_ + 0x4b0))(this,GExitPurge);
  }
  this->WorldPrivate = (UWorld *)0x0;
  if (this->OwnerPrivate != (AActor *)0x0) {
    AActor::RemoveOwnedComponent(this->OwnerPrivate,this);
  }
  ClearUCSModifiedProperties(this);
  UObject::BeginDestroy((UObject *)this);
  return;
}

// BeginPlay @ 14780c660

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::BeginPlay(UActorComponent *this)

{
  uint uVar1;
  AActor *this_00;
  code *pcVar2;
  bool bVar3;
  UWorld *pUVar4;
  UFunction *pUVar5;
  
  bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
  if (!bVar3) {
    if (this == (UActorComponent *)0x0) goto LAB_14780c6b0;
    this_00 = this->OwnerPrivate;
    bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)this_00);
    if ((!bVar3) || (this_00 == (AActor *)0x0)) goto LAB_14780c6b0;
    pUVar4 = AActor::GetWorld(this_00);
    bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar4);
    if (!bVar3) goto LAB_14780c6b0;
  }
  FObjectTrace::OutputObjectLifetimeBegin((UObject *)this);
LAB_14780c6b0:
  if (this->bRegistered == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bRegistered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x64d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->bHasBegunPlay != '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bHasBegunPlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x64e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = *(uint *)(this->_padding_ + 0xd4);
  if (((uVar1 >> 0x12 & 1) != 0) || (-1 < (char)uVar1)) {
    pUVar5 = UObject::FindFunctionChecked((UObject *)this,NAME_UActorComponent_ReceiveBeginPlay);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar5,0);
  }
  this->bHasBegunPlay = '\x01';
  return;
}

// BeginReplication @ 14780c890

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::BeginReplication(UActorComponent *this)

{
  return;
}

// CallRemoteFunction @ 14780f5d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UActorComponent::CallRemoteFunction
          (UActorComponent *this,UFunction *param_1,void *param_2,FOutParmRec *param_3,
          FFrame *param_4)

{
  int iVar1;
  AActor *pAVar2;
  longlong *plVar3;
  char cVar4;
  UWorld *pUVar5;
  FWorldContext *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  
  pAVar2 = this->OwnerPrivate;
  bVar9 = false;
  if (pAVar2 == (AActor *)0x0) {
    return false;
  }
  pUVar5 = GetWorld(this);
  pFVar6 = UEngine::GetWorldContextFromWorld(GEngine,pUVar5);
  if (pFVar6 != (FWorldContext *)0x0) {
    pFVar7 = (pFVar6->ActiveNetDrivers).AllocatorInstance.Data;
    iVar1 = (pFVar6->ActiveNetDrivers).ArrayNum;
    pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((pFVar6->ActiveNetDrivers).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FNamedNetDriver,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar7 == pFVar8) break;
      plVar3 = *(longlong **)pFVar7;
      if (plVar3 != (longlong *)0x0) {
        cVar4 = (**(code **)(*plVar3 + 0x478))(plVar3,pAVar2,param_1);
        if (cVar4 != '\0') {
          (**(code **)(**(longlong **)pFVar7 + 0x350))
                    (*(longlong **)pFVar7,pAVar2,param_1,param_2,param_3,param_4,this);
          bVar9 = true;
        }
      }
      pFVar7 = pFVar7 + 0x10;
    }
    return bVar9;
  }
  return false;
}

// CanBeHLODRelevant @ 14780ff70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl UActorComponent::CanBeHLODRelevant(UActorComponent *param_1)

{
  if ((param_1 != (UActorComponent *)0x0) && (((uint)param_1->_padding_ >> 0x1e & 1) == 0)) {
    return (bool)(~(byte)((uint)param_1->_padding_ >> 6) & 1);
  }
  return false;
}

// ClearNeedEndOfFrameUpdate_Internal @ 1478124c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::ClearNeedEndOfFrameUpdate_Internal(UActorComponent *this)

{
  UWorld *this_00;
  
  this_00 = GetWorld(this);
  if (this_00 != (UWorld *)0x0) {
    UWorld::ClearActorComponentEndOfFrameUpdate(this_00,this);
    return;
  }
  return;
}

// ClearUCSModifiedProperties @ 1478124f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::ClearUCSModifiedProperties(UActorComponent *this)

{
  uint uVar1;
  UActorComponent *local_res8 [4];
  
  AcquireSRWLockExclusive((PSRWLOCK)&AllUCSModifiedPropertiesLock);
  local_res8[0] = this;
  if (AllUCSModifiedProperties._8_4_ != AllUCSModifiedProperties._52_4_) {
    uVar1 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    TSet<TTuple<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RemoveImpl<UActorComponent_const_*>
              ((TSet<TTuple<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)&AllUCSModifiedProperties,uVar1 >> 0x10 ^ uVar1,local_res8);
  }
                    /* WARNING: Could not recover jumptable at 0x00014781255e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&AllUCSModifiedPropertiesLock);
  return;
}

// ComponentHasTag @ 147815610

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorComponent::ComponentHasTag(UActorComponent *this,FName param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  
  if (param_1 != (FName)0x0) {
    pFVar2 = (FName *)(this->ComponentTags).AllocatorInstance.Data;
    pFVar1 = pFVar2 + (this->ComponentTags).ArrayNum;
    for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 1) {
      if (*pFVar2 == param_1) {
        return true;
      }
    }
  }
  return false;
}

// ComponentIsInLevel @ 147815640

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorComponent::ComponentIsInLevel(UActorComponent *this,ULevel *param_1)

{
  ULevel *pUVar1;
  UClass *pUVar2;
  
  if (this->OwnerPrivate != (AActor *)0x0) {
    pUVar1 = AActor::GetLevel(this->OwnerPrivate);
    return pUVar1 == param_1;
  }
  pUVar2 = Z_Construct_UClass_ULevel_NoRegister();
  pUVar1 = (ULevel *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
  return pUVar1 == param_1;
}

// ComponentIsInPersistentLevel @ 1478156a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorComponent::ComponentIsInPersistentLevel(UActorComponent *this,bool param_1)

{
  int iVar1;
  ULevel *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  ULevel *pUVar7;
  UWorld *pUVar8;
  UClass *pUVar9;
  
  if (this->OwnerPrivate == (AActor *)0x0) {
    pUVar9 = Z_Construct_UClass_ULevel_NoRegister();
    pUVar7 = (ULevel *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar9);
  }
  else {
    pUVar7 = AActor::GetLevel(this->OwnerPrivate);
  }
  pUVar8 = GetWorld(this);
  if ((pUVar7 != (ULevel *)0x0) && (pUVar8 != (UWorld *)0x0)) {
    pUVar2 = (pUVar8->PersistentLevel).field0_0x0.DebugPtr;
    if ((pUVar2 != (ULevel *)0x0) && (pUVar2 == pUVar7)) {
      return true;
    }
    if ((param_1) && (0 < (pUVar8->StreamingLevels).ArrayNum)) {
      if (((pUVar8->StreamingLevels).ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      lVar3 = *(longlong *)(pUVar8->StreamingLevels).AllocatorInstance.Data;
      if (lVar3 != 0) {
        pUVar9 = Z_Construct_UClass_ULevelStreamingPersistent_NoRegister();
        lVar3 = *(longlong *)(lVar3 + 0x10);
        iVar1 = (int)pUVar9->_padding_;
        if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar9->_padding_)) {
          if (((pUVar8->StreamingLevels).ArrayNum < 1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if (*(ULevel **)(*(longlong *)(pUVar8->StreamingLevels).AllocatorInstance.Data + 0x1b0) ==
              pUVar7) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

// CreatePhysicsState @ 14781a310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::CreatePhysicsState(UActorComponent *this,bool param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FName FVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  bool bVar13;
  TEventRef<unsigned_int> TVar14;
  UPackage *pUVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_ComponentCreatePhysicsState> FVar17;
  UClass *pUVar18;
  UWorld *this_00;
  longlong lVar19;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FWriteBuffer *pFVar20;
  uint uVar21;
  FNameEntryId FVar22;
  UPrimitiveComponent *pUVar23;
  bool bVar24;
  undefined1 auStackY_148 [32];
  FName local_e8;
  FColor_u_0 local_d4;
  FLLMScope local_d0 [2];
  LARGE_INTEGER local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  FName local_98;
  longlong local_90;
  FMemScope local_88;
  FStatMessage local_80;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FString local_50;
  undefined4 *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_148;
  FLLMScope::FLLMScope(local_d0,Chaos,false,None,Default,true);
  FMemScope::FMemScope(&local_88,Chaos,true);
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    TVar14 = (TEventRef<unsigned_int>)&local_b8;
    local_b8 = 0;
  }
  else {
    local_c0 = 0;
    TVar14 = FStringTrace::GetNameRef(&local_70);
  }
  uVar3 = *(undefined8 *)TVar14;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_a8 = 0;
    TVar14 = (TEventRef<unsigned_int>)&local_a8;
  }
  else {
    local_b0 = 0;
    TVar14 = FStringTrace::GetNameRef(&local_68);
  }
  uVar4 = *(undefined8 *)TVar14;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_a0 = 0;
    TVar14 = (TEventRef<unsigned_int>)&local_a0;
  }
  else {
    pUVar15 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
    local_90 = pUVar15->_padding_;
    TVar14 = FStringTrace::GetNameRef(&local_60);
  }
  uVar5 = *(undefined8 *)TVar14;
  bVar8 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_40);
    bVar8 = true;
    *local_40 = (int)uVar3;
    local_40[1] = (int)uVar4;
    local_40[2] = (int)uVar5;
    *(undefined8 *)(local_38 + 0x28) = *(undefined8 *)(local_38 + 0x20);
  }
  FVar17 = StatPtr_STAT_ComponentCreatePhysicsState;
  if (StatPtr_STAT_ComponentCreatePhysicsState ==
      (FThreadSafeStaticStat<FStat_STAT_ComponentCreatePhysicsState>)0x0) {
    pFVar16 = ::FName::FName(&local_58,"STAT_ComponentCreatePhysicsState");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_ComponentCreatePhysicsState>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ComponentCreatePhysicsState,
                        *pFVar16,L"Component CreatePhysicsState","STATGROUP_Component",
                        "STATCAT_Advanced",L"Component",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  FVar6 = *(FName *)FVar17;
  FVar22 = FVar6.ComparisonIndex.Value;
  uVar21 = FVar6.Number;
  if ((FVar22.Value != 0) || (uVar21 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_d4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_d4._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar10 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.ComparisonIndex.Value = FVar22.Value;
        local_98.Number = uVar21;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_98,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                   ,0x930);
        bVar10 = true;
        bVar9 = true;
      }
    }
    bVar11 = false;
    if (FThreadStats::bPrimaryEnable != false) {
      local_c8.s.LowPart = FVar22.Value;
      local_c8.s.HighPart = uVar21;
      FThreadStats::AddMessage(FVar6,CycleScopeStart);
      bVar11 = true;
      local_e8 = FVar6;
    }
  }
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2353,"UActorComponent::CreatePhysicsState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
               ,0x931);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2353);
  }
  if (((this->bPhysicsStateCreated == '\0') &&
      (this->WorldPrivate->PhysicsScene != (FPhysScene_Chaos *)0x0)) &&
     (cVar12 = (**(code **)(this->_padding_ + 0x3c0))(this), cVar12 != '\0')) {
    pUVar18 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar2 = (int)pUVar18->_padding_;
    pUVar23 = (UPrimitiveComponent *)0x0;
    if ((iVar2 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar18->_padding_)) {
      pUVar23 = (UPrimitiveComponent *)this;
    }
    this_00 = GetWorld(this);
    if ((((this_00 != (UWorld *)0x0) &&
         (bVar13 = UWorld::GetAllowDeferredPhysicsStateCreation(this_00), bVar13)) &&
        (GEnableDeferredPhysicsCreation != 0)) &&
       (((param_1 && (pUVar23 != (UPrimitiveComponent *)0x0)) &&
        ((pUVar23->bGenerateOverlapEvents == '\0' &&
         ((lVar19 = (**(code **)(*(longlong *)pUVar23 + 0x800))(pUVar23), lVar19 != 0 &&
          ((*(byte *)(lVar19 + 0xd9) & 1) == 0)))))))) {
      FPhysScene_Chaos::DeferPhysicsStateCreation(this->WorldPrivate->PhysicsScene,pUVar23);
      goto LAB_14781a737;
    }
    (**(code **)(this->_padding_ + 0x3b0))(this);
    if (this->bPhysicsStateCreated == '\0') {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_50,(UObject *)0x0,None);
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("bPhysicsStateCreated",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                          ,0x953,L"Failed to route OnCreatePhysicsState (%s)");
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (bVar13) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
  }
  else {
    if (this->bCallAsyncPhysicsStateCreatedDelegate == '\0') goto LAB_14781a737;
    if ((this->bPhysicsStateCreated == '\0') &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("bPhysicsStateCreated",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                            ,0x95c,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this->bCallAsyncPhysicsStateCreatedDelegate = '\0';
    if (this->WorldPrivate->PhysicsScene == (FPhysScene_Chaos *)0x0) {
      bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<2595971593406515550>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                          ,0x95e,"WorldPrivate->GetPhysicsScene()");
      if (bVar13) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      goto LAB_14781a737;
    }
  }
  TMulticastDelegate<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy>::Broadcast
            (&GlobalCreatePhysicsDelegate,this);
LAB_14781a737:
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar11) && (local_e8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_80.NameAndInfo.Index = local_e8.ComparisonIndex.Value;
      local_80.NameAndInfo.Number = local_e8.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_c8);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_c8.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_c8.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_c8.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_c8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_80);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  if (bVar8) {
    lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar19 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar20 = *(FWriteBuffer **)(lVar19 + 0x20);
    if ((int)pFVar20 - *(int *)&pFVar20->Cursor < 1) {
      pFVar20 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar20->Cursor = '\n';
    pFVar20->Cursor = pFVar20->Cursor + 1;
    pFVar20->Committed = pFVar20->Cursor;
  }
  FMemScope::~FMemScope(&local_88);
  FLLMScope::~FLLMScope(local_d0);
  return;
}

// CreateRenderState_Concurrent @ 14781a960

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
UActorComponent::CreateRenderState_Concurrent
          (UActorComponent *this,FRegisterComponentContext *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->bRegistered == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsRegistered()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x891,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->WorldPrivate->Scene == (FSceneInterface *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("WorldPrivate->Scene",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x892,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->bRenderStateCreated != '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bRenderStateCreated",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x893,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->bRenderStateCreated = '\x01';
  this->bRenderStateDirty = '\0';
  this->bRenderInstancesDirty = '\0';
  this->bRenderDynamicDataDirty = '\0';
  this->bRenderTransformDirty = '\0';
  return;
}

// Deactivate @ 14781b690

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::Deactivate(UActorComponent *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  UActorComponent *local_res8;
  TSharedPtr<FActorComponentDeactivateSignature_MCSignature,1> local_18;
  
  cVar2 = (**(code **)(this->_padding_ + 0x330))();
  if (cVar2 == '\0') {
    (**(code **)(this->_padding_ + 0x420))(this,0);
    this->bIsActive = '\0';
    TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>
    ::GetShared((TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>
                 *)&this->OnComponentDeactivated,&local_18);
    if ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)local_18.Object !=
        (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
      if ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)local_18.Object ==
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      local_res8 = this;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)local_18.Object,&local_res8
                );
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// DeferRemoveAsyncPhysicsTick @ 14781b910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::DeferRemoveAsyncPhysicsTick(UActorComponent *this)

{
  FPhysScene_Chaos *this_00;
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  code *local_48 [2];
  undefined **local_38;
  UActorComponent *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  this_00 = this->WorldPrivate->PhysicsScene;
  if (this_00 != (FPhysScene_Chaos *)0x0) {
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UActorComponent::DeferRemoveAsyncPhysicsTick'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_20 = (undefined ***)0x0;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UActorComponent::DeferRemoveAsyncPhysicsTick'::__l5::<lambda_1>,void>
                  ::Call;
    local_30 = this;
    FPhysScene_Chaos::EnqueueAsyncPhysicsCommand
              (this_00,0,(UObject *)this,(TFunction<void___cdecl(void)> *)local_48,false);
    if (local_48[0] != (code *)0x0) {
      pppuVar1 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar1 = local_20;
      }
      (*(code *)(*pppuVar1)[2])();
    }
  }
  return;
}

// DestroyComponent @ 14781bcc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::DestroyComponent(UActorComponent *this,bool param_1)

{
  undefined1 uVar1;
  int iVar2;
  AActor *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 uVar5;
  bool bVar6;
  UActorComponent *pUVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  UActorComponent *local_38 [2];
  
  uVar1 = this->field_0x9b;
  if (this->bIsBeingDestroyed == '\0') {
    this->field_0x9b = uVar1 | 0x40;
    if (this->bHasBegunPlay != '\0') {
      (**(code **)(this->_padding_ + 0x400))(this,0);
    }
    if (this->bHasBeenInitialized != '\0') {
      (**(code **)(this->_padding_ + 0x408))(this);
    }
    this->bIsReadyForReplication = '\0';
    if (this->bRegistered != 0) {
      UnregisterComponent(this);
    }
    this_00 = this->OwnerPrivate;
    if (this_00 != (AActor *)0x0) {
      if ((this->CreationMethod == SimpleConstructionScript) ||
         (this->CreationMethod == UserConstructionScript)) {
        local_38[0] = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        pFVar3 = (this_00->BlueprintCreatedComponents).AllocatorInstance.Data;
        if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 <
             pFVar3 + (longlong)(this_00->BlueprintCreatedComponents).ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar2 = (this_00->BlueprintCreatedComponents).ArrayNum;
        if (iVar2 != 0) {
          iVar9 = 0;
          pFVar3 = (this_00->BlueprintCreatedComponents).AllocatorInstance.Data;
          bVar6 = *(UActorComponent **)pFVar3 != local_38[0];
          lVar8 = 0;
          pUVar7 = local_38[0];
          iVar10 = 0;
          do {
            iVar11 = iVar10;
            do {
              lVar8 = lVar8 + 1;
              iVar11 = iVar11 + 1;
              if (iVar2 <= lVar8) break;
            } while (bVar6 == (*(UActorComponent **)(pFVar3 + lVar8 * 8) != pUVar7));
            if (bVar6 != false) {
              if (iVar9 != iVar10) {
                memmove(pFVar3 + (longlong)iVar9 * 8,pFVar3 + (longlong)iVar10 * 8,
                        (longlong)(iVar11 - iVar10) << 3);
                pUVar7 = local_38[0];
              }
              iVar9 = iVar9 + (iVar11 - iVar10);
            }
            bVar6 = (bool)(bVar6 ^ 1);
            iVar10 = iVar11;
          } while (lVar8 < iVar2);
          (this_00->BlueprintCreatedComponents).ArrayNum = iVar9;
        }
      }
      else {
        AActor::RemoveInstanceComponent(this_00,this);
      }
      AActor::RemoveOwnedComponent(this_00,this);
      if ((this_00->RootComponent).field0_0x0.DebugPtr == (USceneComponent *)this) {
        AActor::SetRootComponent(this_00,(USceneComponent *)0x0);
      }
    }
    (**(code **)(this->_padding_ + 0x4b0))(this,0);
    UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)this);
  }
  return;
}

// DestroyPhysicsState @ 14781c080

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::DestroyPhysicsState(UActorComponent *this)

{
  int *piVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_ComponentDestroyPhysicsState> FVar8;
  UClass *pUVar9;
  UActorComponent *pUVar10;
  ULevel *pUVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  bool bVar12;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_88;
  FName local_80;
  byte local_78;
  FStatMessage local_70;
  FString local_60;
  FString local_50;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2407,"UActorComponent::DestroyPhysicsState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
               ,0x967);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2407);
  }
  FVar8 = StatPtr_STAT_ComponentDestroyPhysicsState;
  if (StatPtr_STAT_ComponentDestroyPhysicsState ==
      (FThreadSafeStaticStat<FStat_STAT_ComponentDestroyPhysicsState>)0x0) {
    pFVar7 = ::FName::FName(&local_88,"STAT_ComponentDestroyPhysicsState");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_ComponentDestroyPhysicsState>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ComponentDestroyPhysicsState,
                       *pFVar7,L"Component DestroyPhysicsState","STATGROUP_Component",
                       "STATCAT_Advanced",L"Component",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  local_78 = 0;
  FVar2 = *(FName *)FVar8;
  if ((FVar2.ComparisonIndex.Value.Value != 0) || (FVar2.Number != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      local_78 = local_78 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar2.ComparisonIndex.Value.Value;
        local_res10.Number = FVar2.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                   ,0x968);
        local_78 = local_78 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18 = FVar2;
      local_80 = FVar2;
      FThreadStats::AddMessage(FVar2,CycleScopeStart);
      local_78 = local_78 | 4;
    }
  }
  if ((this->PhysicsStateAsyncCreationScene != (FPhysScene_Chaos *)0x0) &&
     (this->PhysicsStateAsyncCreationState == Creating)) {
    pUVar9 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar6 = (int)pUVar9->_padding_;
    if ((iVar6 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar6 * 8) ==
        &pUVar9->_padding_)) {
      pUVar9 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
      iVar6 = (int)pUVar9->_padding_;
      if ((*(int *)(this->_padding_ + 0x38) < iVar6) ||
         (pUVar10 = this,
         (longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar6 * 8)
         != &pUVar9->_padding_)) {
        pUVar10 = (UActorComponent *)0x0;
      }
      if ((*(longlong *)&pUVar10[3].field_0xb8 != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsA<UPrimitiveComponent>() || !Cast<UPrimitiveComponent>(this)->DeferredCreatePhysicsStateScene"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                             ,0x96d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FPhysScene_Chaos::RemoveAsyncPhysicsStateJobs
              (this->PhysicsStateAsyncCreationScene,(IAsyncPhysicsStateProcessor *)&this->_padding_)
    ;
    this->bCallAsyncPhysicsStateCreatedDelegate = '\0';
    this->PhysicsStateAsyncCreationState = None;
    this->PhysicsStateAsyncCreationScene = (FPhysScene_Chaos *)0x0;
    if ((this->OwnerPrivate != (AActor *)0x0) &&
       (pUVar11 = AActor::GetLevel(this->OwnerPrivate), pUVar11 != (ULevel *)0x0)) {
      if ((((uint)this->_padding_ >> 0x1e & 1) != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid(Component)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\Level.h"
                             ,0x341,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>::
              Remove(&pUVar11->PreRegisteringActorComponents,this);
      if ((iVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PreRegisteringActorComponents.Remove(Component)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\Level.h"
                             ,0x342,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  if (this->bPhysicsStateCreated == '\0') {
    if (GEnableDeferredPhysicsCreation != 0) {
      pUVar9 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
      iVar6 = (int)pUVar9->_padding_;
      if ((((iVar6 <= *(int *)(this->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar6 * 8) ==
            &pUVar9->_padding_)) && (this != (UActorComponent *)0x0)) &&
         (*(FPhysScene_Chaos **)&this[3].field_0xb8 != (FPhysScene_Chaos *)0x0)) {
        FPhysScene_Chaos::RemoveDeferredPhysicsStateCreation
                  (*(FPhysScene_Chaos **)&this[3].field_0xb8,(UPrimitiveComponent *)this);
      }
    }
  }
  else {
    if (((this->PhysicsStateAsyncCreationScene != (FPhysScene_Chaos *)0x0) &&
        (this->PhysicsStateAsyncCreationState == Destroying)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsAsyncDestroyPhysicsStateRunning()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                           ,0x97e,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TMulticastDelegate<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy>::Broadcast
              (&GlobalDestroyPhysicsDelegate,this);
    if ((this->bRegistered == 0) && (this->RegistrationState != PreRegistered)) {
      local_res18 = (FName)this;
      `UActorComponent::DestroyPhysicsState'::__l25::<lambda_1>::operator()(&local_res18);
    }
    (**(code **)(this->_padding_ + 0x3b8))(this);
    if (this->bPhysicsStateCreated != '\0') {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_60,(UObject *)0x0,None);
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bPhysicsStateCreated",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x987,L"Failed to route OnDestroyPhysicsState (%s)");
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    cVar5 = (**(code **)(this->_padding_ + 0x3c8))(this);
    if (cVar5 != '\0') {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_50,(UObject *)0x0,None);
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HasValidPhysicsState()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x988,L"Failed to destroy physics state (%s)");
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  if ((local_78 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_78 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FVar2 = local_80;
  if (((((local_78 & 4) != 0) && (local_80 != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_70.NameAndInfo.Index = FVar2.ComparisonIndex.Value;
      local_70.NameAndInfo.Number = FVar2.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_70.StatData.Pad[4] = '\0';
      local_70.StatData.Pad[5] = '\0';
      local_70.StatData.Pad[6] = '\0';
      local_70.StatData.Pad[7] = '\0';
      local_70.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_70.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_70.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_70.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_70);
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
  local_78 = 0;
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// DestroyRenderState_Concurrent @ 14781c5d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::DestroyRenderState_Concurrent(UActorComponent *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->bRenderStateCreated == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bRenderStateCreated",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x8c4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->bRenderStateCreated = '\0';
  this->bRenderStateDirty = '\0';
  this->bRenderInstancesDirty = '\0';
  this->bRenderDynamicDataDirty = '\0';
  this->bRenderTransformDirty = '\0';
  return;
}

// DestroyReplicatedSubObjectOnRemotePeers @ 14781c630

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
UActorComponent::DestroyReplicatedSubObjectOnRemotePeers(UActorComponent *this,UObject *param_1)

{
  if (this->OwnerPrivate != (AActor *)0x0) {
    AActor::DestroyReplicatedSubObjectOnRemotePeers(this->OwnerPrivate,this,param_1);
    return;
  }
  return;
}

// DetermineUCSModifiedProperties @ 14781c660

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::DetermineUCSModifiedProperties(UActorComponent *this)

{
  int iVar1;
  int iVar2;
  UStruct *pUVar3;
  code *pcVar4;
  FProperty *this_00;
  TObjectPtr<UObject>_u_0 TVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  UObject *pUVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  FScriptContainerElement *pFVar13;
  TObjectPtr<UObject>_u_0 *pTVar14;
  FProperty *pFVar15;
  undefined1 *puVar16;
  TPairInitializer<UActorComponent_*_&&,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>_&&>
  local_res8;
  UActorComponent *local_res18;
  ForAnyElementType local_178;
  undefined8 local_170;
  TFieldIterator<FProperty> local_168;
  UObject *local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  TObjectPtr<UObject>_u_0 local_130;
  void *pvStack_128;
  undefined8 local_120;
  UObject *local_118;
  UObject *local_110;
  UObject *pUStack_108;
  undefined2 local_100;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_> **local_d8;
  ForAnyElementType *local_d0;
  FArchiveState local_c8;
  
  if (this->CreationMethod == SimpleConstructionScript) {
    puVar16 = (undefined1 *)0x0;
    local_178.Data = (FScriptContainerElement *)0x0;
    local_170 = 0;
    local_c8._padding_ = 0;
    local_c8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_c8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_c8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_c8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_c8._40_8_ = 0;
    local_c8.ArSerializingDefaults = 0;
    local_c8.ArPortFlags = 0;
    local_c8.ArMaxSerializeSize = 0;
    local_c8.ArUEVer.FileVersionUE4 = 0;
    local_c8.ArUEVer.FileVersionUE5 = 0;
    local_c8.ArLicenseeUEVer = 0;
    local_c8.ArEngineVer.Major = 0;
    local_c8.ArEngineVer.Minor = 0;
    local_c8.ArEngineVer.Patch = 0;
    local_c8.ArEngineVer._6_2_ = 0;
    local_c8.ArEngineVer.Changelist = 0;
    local_c8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_c8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_c8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_c8.SerializedProperty = (FProperty *)0x0;
    local_c8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_c8.bCustomVersionsAreReset = false;
    local_c8._129_7_ = 0;
    local_c8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_c8);
    local_c8._padding_ =
         (longlong)
         &`UActorComponent::DetermineUCSModifiedProperties'::`5'::FComponentPropertySkipper::
          _vftable_;
    FArchiveState::SetIsSaving(&local_c8,true);
    local_c8._48_8_ = local_c8._48_8_ | 0x2000000000000000;
    pUVar3 = (UStruct *)this->_padding_;
    pUVar9 = UObject::GetArchetype((UObject *)this);
    if (pUVar3 == (UStruct *)0x0) {
      local_168.Field = (FField *)0x0;
    }
    else {
      local_168.Field = pUVar3->ChildProperties;
    }
    local_168.InterfaceIndex = -1;
    local_168.bIncludeSuper = true;
    local_168.bIncludeDeprecated = true;
    local_168.bIncludeInterface = false;
    local_168.Struct = pUVar3;
    TFieldIterator<FProperty>::IterateToNext(&local_168);
    this_00 = (FProperty *)local_168.Field;
    while (local_168.Field = (FField *)this_00, this_00 != (FProperty *)0x0) {
      bVar6 = FProperty::ShouldSerializeValue(this_00,(FArchive *)&local_c8);
      pFVar15 = this_00;
      if ((bVar6) && (puVar12 = puVar16, 0 < this_00->ArrayDim)) {
        do {
          iVar8 = (int)puVar12;
          if (((iVar8 < 0) || (this_00->ArrayDim <= iVar8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar1 = this_00->ElementSize;
          iVar2 = this_00->Offset_Internal;
          puVar12 = puVar16;
          if (pUVar9 != (UObject *)0x0) {
            if (pUVar3 == (UStruct *)0x0) {
              iVar10 = 0x7fffffff;
            }
            else {
              iVar10 = pUVar3->PropertiesSize;
            }
            if (iVar1 * this_00->ArrayDim + iVar2 <= iVar10) {
              if (((iVar8 < 0) || (this_00->ArrayDim <= iVar8)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              puVar12 = &pUVar9->field_0x0 +
                        (longlong)this_00->Offset_Internal +
                        (longlong)this_00->ElementSize * (longlong)iVar8;
            }
          }
          cVar7 = (**(code **)(this_00->_padding_ + 0xb8))
                            (this_00,(longlong)&this->_padding_ +
                                     (longlong)iVar2 + (longlong)iVar8 * (longlong)iVar1,puVar12);
          if (cVar7 == '\0') {
            local_150 = (UObject *)0x0;
            local_148 = 0;
            local_140 = 0;
            uStack_138 = 0;
            if (((local_178.Data <= (FScriptContainerElement *)&local_150) &&
                ((FScriptContainerElement *)&local_150 <
                 local_178.Data + (longlong)local_170._4_4_ * 0x20)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar8 = (int)local_170;
            if ((int)local_170 == local_170._4_4_) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x820,&local_178,(int *)((longlong)&local_170 + 4));
            }
            pFVar13 = local_178.Data + (longlong)iVar8 * 0x20;
            local_170 = CONCAT44(local_170._4_4_,iVar8 + 1);
            *(UObject **)pFVar13 = local_150;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_150 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(local_150);
            }
            *(undefined8 *)(pFVar13 + 8) = local_148;
            *(undefined8 *)(pFVar13 + 0x10) = local_140;
            *(undefined8 *)(pFVar13 + 0x18) = uStack_138;
            uVar11 = 0;
            if ((int)((int)local_170 - 1U) < (int)local_170) {
              uVar11 = ~((int)local_170 - 1U) >> 0x1f;
            }
            if (uVar11 == 0) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            local_e8 = 0;
            pTVar14 = (TObjectPtr<UObject>_u_0 *)
                      (local_178.Data + (longlong)((int)local_170 + -1) * 0x20);
            uStack_e0 = 0;
            local_f0 = 0;
            pTVar14->DebugPtr = (UObject *)0x0;
            pTVar14[1].DebugPtr = (UObject *)0x0;
            pTVar14[2].DebugPtr = (UObject *)0x0;
            pTVar14[3].DebugPtr = (UObject *)0x0;
            local_120 = 0;
            local_130.DebugPtr = (UObject *)0x0;
            pvStack_128 = (void *)0x0;
            local_118 = (UObject *)0x0;
            local_110 = (UObject *)0x0;
            pUStack_108 = (UObject *)0x0;
            local_100 = 0;
            FMemberReference::SetFromField<FProperty>
                      ((FMemberReference *)&local_130.ObjectPtr,(FField *)this_00,false,
                       (UClass *)0x0);
            TVar5 = local_130;
            pTVar14[1].DebugPtr = local_118;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_130.DebugPtr != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(local_130.DebugPtr);
            }
            pTVar14->DebugPtr = (UObject *)TVar5;
            pTVar14[2].DebugPtr = local_110;
            pTVar14[3].DebugPtr = pUStack_108;
            pFVar15 = (FProperty *)local_168.Field;
            if (pvStack_128 != (void *)0x0) {
              FMemory::Free(pvStack_128);
              pFVar15 = (FProperty *)local_168.Field;
            }
            break;
          }
          puVar12 = (undefined1 *)(ulonglong)(iVar8 + 1U);
          pFVar15 = (FProperty *)local_168.Field;
        } while ((int)(iVar8 + 1U) < this_00->ArrayDim);
      }
      local_168.Field = (FField *)pFVar15->_padding_;
      TFieldIterator<FProperty>::IterateToNext(&local_168);
      this_00 = (FProperty *)local_168.Field;
    }
    AcquireSRWLockExclusive((PSRWLOCK)&AllUCSModifiedPropertiesLock);
    if ((int)local_170 < 1) {
      local_res18 = this;
      if (AllUCSModifiedProperties._8_4_ != AllUCSModifiedProperties._52_4_) {
        uVar11 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) *
                 -0x7a143595;
        uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
        TSet<TTuple<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<UActorComponent_const_*>
                  ((TSet<TTuple<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)&AllUCSModifiedProperties,uVar11 >> 0x10 ^ uVar11,&local_res18);
      }
    }
    else {
      local_d8 = &local_res8.Value;
      local_d0 = &local_178;
      local_res8.Value = (TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_> *)this;
      TSet<TTuple<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<UActorComponent_*_&&,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>_&&>_>
                ((TSet<TTuple<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)&AllUCSModifiedProperties,&local_res8,(bool *)&local_d8);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&AllUCSModifiedPropertiesLock);
    FArchive::~FArchive((FArchive *)&local_c8);
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data);
    }
  }
  return;
}

// DoDeferredRenderUpdates_Concurrent @ 14781d4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::DoDeferredRenderUpdates_Concurrent(UActorComponent *this)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  TEventRef<unsigned_int> TVar12;
  UPackage *pUVar13;
  FUObjectItem *pFVar14;
  UObjectBaseUtility *pUVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_PostTickComponentRecreate> FVar17;
  FThreadStats *this_00;
  FThreadStatsPool *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_PostTickComponentLW> FVar19;
  FWriteBuffer *pFVar20;
  uint uVar21;
  FStatMessage *pFVar22;
  FNameEntryId FVar23;
  FNameEntryId FVar24;
  FName FVar25;
  undefined1 auStackY_1e8 [32];
  FColor_u_0 local_184;
  FName local_180;
  FLLMScope local_178;
  FColor_u_0 local_174;
  FName local_170;
  byte local_168;
  FName local_160;
  byte local_158;
  FName local_150;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  FName local_118;
  uint local_110;
  uint uStack_10c;
  FName local_108;
  longlong local_f8;
  LARGE_INTEGER local_f0;
  LARGE_INTEGER local_e8;
  FMemScope local_e0;
  FStatMessage local_d8;
  FStatMessage local_c8;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  undefined4 *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  FLLMScope::FLLMScope(&local_178,SceneRender,false,None,Default,true);
  FMemScope::FMemScope(&local_e0,SceneRender,true);
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    TVar12 = (TEventRef<unsigned_int>)&local_138;
    local_138 = 0;
  }
  else {
    local_140 = 0;
    TVar12 = FStringTrace::GetNameRef(&local_98);
  }
  FVar23.Value = 0;
  uVar2 = *(undefined8 *)TVar12;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_128 = 0;
    TVar12 = (TEventRef<unsigned_int>)&local_128;
  }
  else {
    local_130 = 0;
    TVar12 = FStringTrace::GetNameRef(&local_b8);
  }
  uVar3 = *(undefined8 *)TVar12;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_120 = 0;
    TVar12 = (TEventRef<unsigned_int>)&local_120;
  }
  else {
    pUVar13 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
    local_f8 = pUVar13->_padding_;
    TVar12 = FStringTrace::GetNameRef(&local_b0);
  }
  uVar4 = *(undefined8 *)TVar12;
  bVar8 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_40);
    bVar8 = true;
    *local_40 = (int)uVar2;
    local_40[1] = (int)uVar3;
    local_40[2] = (int)uVar4;
    *(undefined8 *)(local_38 + 0x28) = *(undefined8 *)(local_38 + 0x20);
  }
  pFVar14 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
  if (((uint)((ulonglong)(pFVar14->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_90,(UObject *)0x0,None);
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsUnreachable()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                        ,0xa21,L"%s");
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  bVar10 = UObjectBaseUtility::IsTemplate
                     ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar10) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_80,(UObject *)0x0,None);
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsTemplate()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                        ,0xa22,L"%s");
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (((uint)this->_padding_ >> 0x1e & 1) != 0) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_70,(UObject *)0x0,None);
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValidChecked(this)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                        ,0xa23,L"%s");
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_160,(UObjectBaseUtility *)this);
  pUVar15 = (UObjectBaseUtility *)(**(code **)(this->_padding_ + 0x480))(this);
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_170,pUVar15);
  if (this->bRegistered == 0) {
    if (4 < (byte)LogActorComponent._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_60,(UObject *)0x0);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogActorComponent);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_14781dcb0;
  }
  if (this->bRenderStateDirty == 0) {
    FVar19 = StatPtr_STAT_PostTickComponentLW;
    if (StatPtr_STAT_PostTickComponentLW ==
        (FThreadSafeStaticStat<FStat_STAT_PostTickComponentLW>)0x0) {
      pFVar16 = ::FName::FName(&local_a0,"STAT_PostTickComponentLW");
      FVar19 = (FThreadSafeStaticStat<FStat_STAT_PostTickComponentLW>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PostTickComponentLW,*pFVar16,
                          L"Transform or RenderData","STATGROUP_Game","STATCAT_Advanced",L"Game",
                          true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar25 = *(FName *)FVar19;
    bVar10 = false;
    bVar9 = false;
    local_150.ComparisonIndex.Value = 0;
    local_150.Number = 0;
    FVar24 = FVar25.ComparisonIndex.Value;
    uVar21 = FVar25.Number;
    if ((FVar24.Value == 0) && (uVar21 == 0)) {
LAB_14781dba0:
      bVar7 = false;
      FVar25 = local_150;
    }
    else {
      if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
        local_184.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_184._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
        bVar10 = false;
        bVar9 = true;
        if (-1 < CpuChannel->Enabled) {
          local_180.ComparisonIndex.Value = FVar24.Value;
          local_180.Number = uVar21;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_180,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                     ,0xa36);
          bVar10 = true;
          bVar9 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14781dba0;
      local_180.ComparisonIndex.Value = FVar24.Value;
      local_180.Number = uVar21;
      local_150 = FVar25;
      FThreadStats::AddMessage(FVar25,CycleScopeStart);
      bVar7 = true;
      FVar23.Value = local_150.ComparisonIndex.Value;
    }
    if (this->bRenderTransformDirty != '\0') {
      (**(code **)(this->_padding_ + 0x390))(this);
    }
    if (this->bRenderDynamicDataDirty != '\0') {
      (**(code **)(this->_padding_ + 0x398))(this);
    }
    if (this->bRenderInstancesDirty != '\0') {
      (**(code **)(this->_padding_ + 0x3a0))(this);
    }
    if (bVar9) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar7) || (FVar25 == (FName)0x0)) || (FThreadStats::bPrimaryDisableForever != false)) ||
       (FThreadStats::TlsSlot == 0xffffffff)) goto LAB_14781dcb0;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      pFVar18 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar18);
    }
    if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) goto LAB_14781dcb0;
    local_c8.NameAndInfo.Number = FVar25.Number & 0xffff6fff | 0x6000;
    local_c8.NameAndInfo.Index.Value = FVar23.Value;
    QueryPerformanceCounter(&local_e8);
    local_c8.StatData.Pad[4] = '\0';
    local_c8.StatData.Pad[5] = '\0';
    local_c8.StatData.Pad[6] = '\0';
    local_c8.StatData.Pad[7] = '\0';
    local_c8.StatData.Pad[0] = local_e8.s.LowPart._0_1_;
    local_c8.StatData.Pad[1] = local_e8.s.LowPart._1_1_;
    local_c8.StatData.Pad[2] = local_e8.s.LowPart._2_1_;
    local_c8.StatData.Pad[3] = local_e8.s.LowPart._3_1_;
    pFVar22 = &local_c8;
  }
  else {
    FVar17 = StatPtr_STAT_PostTickComponentRecreate;
    if (StatPtr_STAT_PostTickComponentRecreate ==
        (FThreadSafeStaticStat<FStat_STAT_PostTickComponentRecreate>)0x0) {
      pFVar16 = ::FName::FName(&local_a8,"STAT_PostTickComponentRecreate");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_PostTickComponentRecreate>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PostTickComponentRecreate,
                          *pFVar16,L"Recreate","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true
                          ,ST_int64,true,false,MCR_Invalid);
    }
    FVar25 = *(FName *)FVar17;
    bVar10 = false;
    bVar9 = false;
    local_108.ComparisonIndex.Value = 0;
    local_108.Number = 0;
    FVar23 = FVar25.ComparisonIndex.Value;
    uVar21 = FVar25.Number;
    if ((FVar23.Value == 0) && (uVar21 == 0)) {
LAB_14781d954:
      bVar7 = false;
      FVar25 = local_108;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_174.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_174._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
        bVar10 = false;
        bVar9 = true;
        if (-1 < CpuChannel->Enabled) {
          local_118.ComparisonIndex.Value = FVar23.Value;
          local_118.Number = uVar21;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_118,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                     ,0xa30);
          bVar10 = true;
          bVar9 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14781d954;
      local_110 = FVar23.Value;
      uStack_10c = uVar21;
      FThreadStats::AddMessage(FVar25,CycleScopeStart);
      bVar7 = true;
    }
    RecreateRenderState_Concurrent(this);
    if (this->bRenderStateDirty != 0) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_50,(UObject *)0x0,None);
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bRenderStateDirty",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                          ,0xa32,L"Failed to route CreateRenderState_Concurrent (%s)");
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (bVar9) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((!bVar7) || (FVar25 == (FName)0x0)) ||
       ((FThreadStats::bPrimaryDisableForever != false || (FThreadStats::TlsSlot == 0xffffffff))))
    goto LAB_14781dcb0;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      pFVar18 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar18);
    }
    if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) goto LAB_14781dcb0;
    local_d8.NameAndInfo.Index = FVar25.ComparisonIndex.Value;
    local_d8.NameAndInfo.Number = FVar25.Number & 0xffff6fff | 0x6000;
    QueryPerformanceCounter(&local_f0);
    local_d8.StatData.Pad[4] = '\0';
    local_d8.StatData.Pad[5] = '\0';
    local_d8.StatData.Pad[6] = '\0';
    local_d8.StatData.Pad[7] = '\0';
    local_d8.StatData.Pad[0] = local_f0.s.LowPart._0_1_;
    local_d8.StatData.Pad[1] = local_f0.s.LowPart._1_1_;
    local_d8.StatData.Pad[2] = local_f0.s.LowPart._2_1_;
    local_d8.StatData.Pad[3] = local_f0.s.LowPart._3_1_;
    pFVar22 = &local_d8;
  }
  FThreadStats::AddStatMessage(this_00,pFVar22);
  piVar1 = &this_00->ScopeCount;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FThreadStats::Flush(this_00,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(this_00,false,false);
  }
LAB_14781dcb0:
  if ((local_168 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_168 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_168 & 4) != 0) {
    FThreadStats::AddMessage(local_170,CycleScopeEnd);
  }
  local_168 = 0;
  if ((local_158 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_158 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_158 & 4) != 0) {
    FThreadStats::AddMessage(local_160,CycleScopeEnd);
  }
  local_158 = 0;
  if (bVar8) {
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar5 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar20 = *(FWriteBuffer **)(lVar5 + 0x20);
    if ((int)pFVar20 - *(int *)&pFVar20->Cursor < 1) {
      pFVar20 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar20->Cursor = '\n';
    pFVar20->Cursor = pFVar20->Cursor + 1;
    pFVar20->Committed = pFVar20->Cursor;
  }
  FMemScope::~FMemScope(&local_e0);
  FLLMScope::~FLLMScope(&local_178);
  return;
}

// EndPlay @ 14781e790

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::EndPlay(UActorComponent *this,Type param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  AActor *this_00;
  code *pcVar3;
  bool bVar4;
  UWorld *pUVar5;
  FUObjectItem *pFVar6;
  UFunction *pUVar7;
  undefined1 local_res10 [8];
  
  bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
  if (!bVar4) {
    if (this == (UActorComponent *)0x0) goto LAB_14781e7e6;
    this_00 = this->OwnerPrivate;
    bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)this_00);
    if ((!bVar4) || (this_00 == (AActor *)0x0)) goto LAB_14781e7e6;
    pUVar5 = AActor::GetWorld(this_00);
    bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar5);
    if (!bVar4) goto LAB_14781e7e6;
  }
  FObjectTrace::OutputObjectLifetimeEnd((UObject *)this);
LAB_14781e7e6:
  if (this->bHasBegunPlay == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bHasBegunPlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x65d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((param_1 - EndPlayInEditor & 0xfffffffd) != 0) {
    UE::Net::FReplicationSystemUtil::StopReplicatingActorComponent(this);
  }
  if (((uint)this->_padding_ >> 0xf & 1) == 0) {
    pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
    if ((((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) &&
       ((uVar2 = *(uint *)(this->_padding_ + 0xd4), (uVar2 >> 0x12 & 1) != 0 || (-1 < (char)uVar2)))
       ) {
      local_res10[0] = (undefined1)param_1;
      pUVar7 = UObject::FindFunctionChecked((UObject *)this,NAME_UActorComponent_ReceiveEndPlay);
      (**(code **)(this->_padding_ + 0x260))(this,pUVar7,local_res10);
    }
  }
  this->bIsReadyForReplication = '\0';
  this->bHasBegunPlay = '\0';
  return;
}

// EndReplication @ 14781e8e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::EndReplication(UActorComponent *this)

{
  return;
}

// ExecuteRegisterEvents @ 14781efc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UActorComponent::ExecuteRegisterEvents(UActorComponent *this,FRegisterComponentContext *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  bool bVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_ComponentOnRegister> FVar14;
  FThreadStats *pFVar15;
  FThreadStatsPool *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_ComponentCreateRenderState> FVar17;
  TEventRef<unsigned_int> TVar18;
  UPackage *pUVar19;
  FWriteBuffer *pFVar20;
  wchar_t *pwVar21;
  FName FVar22;
  undefined1 auStackY_1b8 [32];
  FLLMScope local_148;
  FColor_u_0 local_144;
  FColor_u_0 local_140 [2];
  FName local_138;
  FName local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  FName local_100;
  FName local_f0;
  LARGE_INTEGER local_e0;
  longlong local_d8;
  FRegisterComponentContext *local_d0;
  FMemScope local_c8;
  LARGE_INTEGER local_c0;
  FStatMessage local_b8;
  FStatMessage local_a8;
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FString local_70;
  FString local_60;
  undefined4 *local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_d0 = param_1;
  if (this->bRegistered == 0) {
    FVar14 = StatPtr_STAT_ComponentOnRegister;
    if (StatPtr_STAT_ComponentOnRegister ==
        (FThreadSafeStaticStat<FStat_STAT_ComponentOnRegister>)0x0) {
      pFVar13 = ::FName::FName(&local_98,"STAT_ComponentOnRegister");
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_ComponentOnRegister>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ComponentOnRegister,*pFVar13,
                          L"Component OnRegister","STATGROUP_Component","STATCAT_Advanced",
                          L"Component",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar22 = *(FName *)FVar14;
    bVar7 = false;
    bVar9 = false;
    local_100.ComparisonIndex.Value = 0;
    local_100.Number = 0;
    if ((FVar22.ComparisonIndex.Value.Value == 0) && (FVar22.Number == 0)) {
LAB_14781f11a:
      bVar8 = false;
      FVar22 = local_100;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_144.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_144._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
        bVar7 = false;
        bVar9 = true;
        if (-1 < CpuChannel->Enabled) {
          local_138.ComparisonIndex.Value = FVar22.ComparisonIndex.Value.Value;
          local_138.Number = FVar22.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_138,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                     ,0x999);
          bVar7 = true;
          bVar9 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14781f11a;
      FThreadStats::AddMessage(FVar22,CycleScopeStart);
      bVar8 = true;
    }
    (**(code **)(this->_padding_ + 0x368))(this);
    if (this->bRegistered == 0) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_70,(UObject *)0x0,None);
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("bRegistered",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                          ,0x99b,L"Failed to route OnRegister (%s)");
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (bVar9) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar8) && (FVar22 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar15 == (FThreadStats *)0x0) {
        pFVar16 = FThreadStatsPool::Get();
        pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
      }
      if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
        local_b8.NameAndInfo.Index = FVar22.ComparisonIndex.Value;
        local_b8.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_e0);
        local_b8.StatData.Pad[4] = '\0';
        local_b8.StatData.Pad[5] = '\0';
        local_b8.StatData.Pad[6] = '\0';
        local_b8.StatData.Pad[7] = '\0';
        local_b8.StatData.Pad[0] = local_e0.s.LowPart._0_1_;
        local_b8.StatData.Pad[1] = local_e0.s.LowPart._1_1_;
        local_b8.StatData.Pad[2] = local_e0.s.LowPart._2_1_;
        local_b8.StatData.Pad[3] = local_e0.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar15,&local_b8);
        piVar1 = &pFVar15->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar15,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar15,false,false);
        }
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar21 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar21,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet != false) && (PRIVATE_GAllowCommandletRendering == false)) ||
     ((`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline !=
       false || (((this->bRenderStateCreated != '\0' ||
                  (this->WorldPrivate->Scene == (FSceneInterface *)0x0)) ||
                 (cVar11 = (**(code **)(this->_padding_ + 0x380))(this), cVar11 == '\0'))))))
  goto LAB_14781f6ee;
  FVar17 = StatPtr_STAT_ComponentCreateRenderState;
  if (StatPtr_STAT_ComponentCreateRenderState ==
      (FThreadSafeStaticStat<FStat_STAT_ComponentCreateRenderState>)0x0) {
    pFVar13 = ::FName::FName(&local_90,"STAT_ComponentCreateRenderState");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_ComponentCreateRenderState>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ComponentCreateRenderState,
                        *pFVar13,L"Component CreateRenderState","STATGROUP_Component",
                        "STATCAT_Advanced",L"Component",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar17;
  bVar7 = false;
  bVar9 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  if ((FVar22.ComparisonIndex.Value.Value == 0) && (FVar22.Number == 0)) {
LAB_14781f3f4:
    bVar8 = false;
    FVar22 = local_f0;
  }
  else {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_140[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_140[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_130.ComparisonIndex.Value = FVar22.ComparisonIndex.Value.Value;
        local_130.Number = FVar22.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_130,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                   ,0x9a0);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14781f3f4;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar8 = true;
  }
  FLLMScope::FLLMScope(&local_148,SceneRender,false,None,Default,true);
  FMemScope::FMemScope(&local_c8,SceneRender,true);
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_120 = 0;
    TVar18 = (TEventRef<unsigned_int>)&local_120;
  }
  else {
    local_128 = 0;
    TVar18 = FStringTrace::GetNameRef(&local_88);
  }
  uVar2 = *(undefined8 *)TVar18;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_110 = 0;
    TVar18 = (TEventRef<unsigned_int>)&local_110;
  }
  else {
    local_118 = 0;
    TVar18 = FStringTrace::GetNameRef(&local_80);
  }
  uVar3 = *(undefined8 *)TVar18;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_108 = 0;
    TVar18 = (TEventRef<unsigned_int>)&local_108;
  }
  else {
    pUVar19 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
    local_d8 = pUVar19->_padding_;
    TVar18 = FStringTrace::GetNameRef(&local_78);
  }
  uVar4 = *(undefined8 *)TVar18;
  bVar10 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_50);
    bVar10 = true;
    *local_50 = (int)uVar2;
    local_50[1] = (int)uVar3;
    local_50[2] = (int)uVar4;
    *(undefined8 *)(local_48 + 0x28) = *(undefined8 *)(local_48 + 0x20);
  }
  (**(code **)(this->_padding_ + 0x388))(this,local_d0);
  if (this->bRenderStateCreated == '\0') {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_60,(UObject *)0x0,None);
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("bRenderStateCreated",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                        ,0x9a5,L"Failed to route CreateRenderState_Concurrent (%s)");
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (bVar12) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (bVar10) {
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar5 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar20 = *(FWriteBuffer **)(lVar5 + 0x20);
    if ((int)pFVar20 - *(int *)&pFVar20->Cursor < 1) {
      pFVar20 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar20->Cursor = '\n';
    pFVar20->Cursor = pFVar20->Cursor + 1;
    pFVar20->Committed = pFVar20->Cursor;
  }
  FMemScope::~FMemScope(&local_c8);
  FLLMScope::~FLLMScope(&local_148);
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar22 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_a8.NameAndInfo.Index = FVar22.ComparisonIndex.Value;
      local_a8.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_c0);
      local_a8.StatData.Pad[4] = '\0';
      local_a8.StatData.Pad[5] = '\0';
      local_a8.StatData.Pad[6] = '\0';
      local_a8.StatData.Pad[7] = '\0';
      local_a8.StatData.Pad[0] = local_c0.s.LowPart._0_1_;
      local_a8.StatData.Pad[1] = local_c0.s.LowPart._1_1_;
      local_a8.StatData.Pad[2] = local_c0.s.LowPart._2_1_;
      local_a8.StatData.Pad[3] = local_c0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar15,&local_a8);
      piVar1 = &pFVar15->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
LAB_14781f6ee:
  CreatePhysicsState(this,true);
  return;
}

// ExecuteUnregisterEvents @ 14781ffb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::ExecuteUnregisterEvents(UActorComponent *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_ComponentDestroyRenderState> FVar8;
  FThreadStats *pFVar9;
  FThreadStatsPool *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_ComponentOnUnregister> FVar11;
  uint uVar12;
  FColor_u_0 FVar13;
  FNameEntryId FVar14;
  FName FVar15;
  FColor_u_0 local_res8 [2];
  FColor_u_0 local_res10;
  uint uStackX_14;
  uint local_res18;
  uint uStackX_1c;
  FColor_u_0 local_res20;
  uint local_res24;
  FName local_e8;
  FName local_e0;
  FName local_d0;
  LARGE_INTEGER local_c0;
  LARGE_INTEGER local_b8;
  FStatMessage local_b0;
  FStatMessage local_a0;
  FName local_90;
  FName local_88;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  DestroyPhysicsState(this);
  if (this->bRenderStateCreated != '\0') {
    FVar8 = StatPtr_STAT_ComponentDestroyRenderState;
    if (StatPtr_STAT_ComponentDestroyRenderState ==
        (FThreadSafeStaticStat<FStat_STAT_ComponentDestroyRenderState>)0x0) {
      pFVar7 = ::FName::FName(&local_90,"STAT_ComponentDestroyRenderState");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_ComponentDestroyRenderState>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ComponentDestroyRenderState,
                         *pFVar7,L"Component DestroyRenderState","STATGROUP_Component",
                         "STATCAT_Advanced",L"Component",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar15 = *(FName *)FVar8;
    bVar3 = false;
    bVar5 = false;
    local_e0.ComparisonIndex.Value = 0;
    local_e0.Number = 0;
    FVar13.Bits = (uint)FVar15.ComparisonIndex.Value;
    uVar12 = FVar15.Number;
    if ((FVar13.Bits == 0) && (uVar12 == 0)) {
LAB_147820106:
      bVar4 = false;
      FVar15 = local_e0;
    }
    else {
      if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
        local_res8[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
        bVar3 = false;
        bVar5 = true;
        if (-1 < CpuChannel->Enabled) {
          local_res20.Bits = FVar13.Bits;
          local_res24 = uVar12;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    ((FName *)&local_res20._s_0,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                     ,0x9b2);
          bVar3 = true;
          bVar5 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_147820106;
      local_res10.Bits = FVar13.Bits;
      uStackX_14 = uVar12;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar4 = true;
    }
    if (this->bRegistered == 0) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_80,(UObject *)0x0,None);
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bRegistered",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x9b3,L"Component has render state when not registered (%s)");
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)(this->_padding_ + 0x3a8))(this);
    if (this->bRenderStateCreated != '\0') {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_70,(UObject *)0x0,None);
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bRenderStateCreated",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x9b5,L"Failed to route DestroyRenderState_Concurrent (%s)");
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar4) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar9 == (FThreadStats *)0x0) {
        pFVar10 = FThreadStatsPool::Get();
        pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
      }
      if (pFVar9->bWaitForExplicitFlush < pFVar9->ScopeCount) {
        local_b0.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
        local_b0.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_c0);
        local_b0.StatData.Pad[4] = '\0';
        local_b0.StatData.Pad[5] = '\0';
        local_b0.StatData.Pad[6] = '\0';
        local_b0.StatData.Pad[7] = '\0';
        local_b0.StatData.Pad[0] = local_c0.s.LowPart._0_1_;
        local_b0.StatData.Pad[1] = local_c0.s.LowPart._1_1_;
        local_b0.StatData.Pad[2] = local_c0.s.LowPart._2_1_;
        local_b0.StatData.Pad[3] = local_c0.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar9,&local_b0);
        piVar1 = &pFVar9->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar9,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar9,false,false);
        }
      }
    }
  }
  if (this->bRegistered == 0) {
    return;
  }
  FVar11 = StatPtr_STAT_ComponentOnUnregister;
  if (StatPtr_STAT_ComponentOnUnregister ==
      (FThreadSafeStaticStat<FStat_STAT_ComponentOnUnregister>)0x0) {
    pFVar7 = ::FName::FName(&local_88,"STAT_ComponentOnUnregister");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_ComponentOnUnregister>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ComponentOnUnregister,*pFVar7,
                        L"Component OnUnregister","STATGROUP_Component","STATCAT_Advanced",
                        L"Component",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar11;
  bVar3 = false;
  bVar5 = false;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar12 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e8.ComparisonIndex.Value = FVar14.Value;
        local_e8.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e8,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                   ,0x9ba);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18 = FVar14.Value;
      uStackX_1c = uVar12;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar4 = true;
      goto LAB_1478203cf;
    }
  }
  bVar4 = false;
  FVar15 = local_d0;
LAB_1478203cf:
  (**(code **)(this->_padding_ + 0x370))(this);
  if (this->bRegistered != 0) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,local_60,(UObject *)0x0,None);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bRegistered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x9bc,L"Failed to route OnUnregister (%s)");
    if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar15 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar9 == (FThreadStats *)0x0) {
      pFVar10 = FThreadStatsPool::Get();
      pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
    }
    if (pFVar9->bWaitForExplicitFlush < pFVar9->ScopeCount) {
      local_a0.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_a0.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_b8);
      local_a0.StatData.Pad[4] = '\0';
      local_a0.StatData.Pad[5] = '\0';
      local_a0.StatData.Pad[6] = '\0';
      local_a0.StatData.Pad[7] = '\0';
      local_a0.StatData.Pad[0] = local_b8.s.LowPart._0_1_;
      local_a0.StatData.Pad[1] = local_b8.s.LowPart._1_1_;
      local_a0.StatData.Pad[2] = local_b8.s.LowPart._2_1_;
      local_a0.StatData.Pad[3] = local_b8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar9,&local_a0);
      piVar1 = &pFVar9->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar9,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar9,false,false);
      }
    }
  }
  return;
}

// GetActorOwnerNoninline @ 147834940

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall UActorComponent::GetActorOwnerNoninline(UActorComponent *this)

{
  UClass *pUVar1;
  AActor *pAVar2;
  
  pUVar1 = Z_Construct_UClass_AActor_NoRegister();
  pAVar2 = (AActor *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  return pAVar2;
}

// GetAssetUserDataArray @ 147834ba0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> * __thiscall
UActorComponent::GetAssetUserDataArray(UActorComponent *this)

{
  return (TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> *)
         &(this->PrimaryComponentTick)._padding_;
}

// GetAssetUserDataOfClass @ 147834bb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAssetUserData * __thiscall
UActorComponent::GetAssetUserDataOfClass(UActorComponent *this,TSubclassOf<UAssetUserData> param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong *plVar4;
  UAssetUserData *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  
  plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x30))();
  uVar8 = 0;
  iVar9 = (int)plVar4[1];
  if (0 < iVar9) {
    lVar10 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar8 < iVar9) {
        uVar3 = ~uVar8 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pUVar5 = (UAssetUserData *)(*pcVar1)();
        return pUVar5;
      }
      pUVar5 = *(UAssetUserData **)(lVar10 + *plVar4);
      if (pUVar5 != (UAssetUserData *)0x0) {
        pUVar7 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UObject *)0x0) goto LAB_147834c66;
LAB_147834c94:
          pUVar7 = (UObject *)0x0;
        }
        else {
          if (pUVar7 == (UObject *)0x0) goto LAB_147834c94;
          UE::GC::MarkAsReachable(pUVar7);
LAB_147834c66:
          pUVar6 = Z_Construct_UClass_UAssetUserData_NoRegister();
          if (pUVar6 == (UClass *)0x0) goto LAB_147834c94;
          iVar9 = (int)pUVar6->_padding_;
          if ((*(int *)&pUVar7[1].field_0x10 < iVar9) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar9 * 8)
              != &pUVar6->_padding_)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_147834c94;
        }
        if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) +
             (longlong)*(int *)&pUVar7[1].field_0x10 * 8) == &pUVar7[1].field_0x8)) {
          return pUVar5;
        }
      }
      iVar9 = (int)plVar4[1];
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 8;
    } while ((int)uVar8 < iVar9);
  }
  return (UAssetUserData *)0x0;
}

// GetAsyncPhysicsStateObject @ 147834d00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall UActorComponent::GetAsyncPhysicsStateObject(UActorComponent *this)

{
  return (UObject *)&this[-1].UCSSerializationIndex;
}

// GetComponentClassCanReplicate @ 147835390

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorComponent::GetComponentClassCanReplicate(UActorComponent *this)

{
  return true;
}

// GetComponentInstanceData @ 147835820

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TStructOnScope<FActorComponentInstanceData> * __thiscall
UActorComponent::GetComponentInstanceData
          (UActorComponent *this,TStructOnScope<FActorComponentInstanceData> *__return_storage_ptr__
          )

{
  UScriptStruct *pUVar1;
  uint uVar2;
  UPackage *pUVar3;
  FActorComponentInstanceData *this_00;
  int iVar4;
  uint uVar5;
  UScriptStruct *local_res8;
  
  FStructOnScope::FStructOnScope((FStructOnScope *)__return_storage_ptr__);
  *(undefined ***)__return_storage_ptr__ = &___7__TStructOnScope_UFActorComponentInstanceData____6B_
  ;
  FStructOnScope::Destroy((FStructOnScope *)__return_storage_ptr__);
  if (Z_Registration_Info_UScriptStruct_FActorComponentInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FActorComponentInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FActorComponentInstanceData,(UObject *)pUVar3,
                         L"ActorComponentInstanceData");
    if (Z_Registration_Info_UScriptStruct_FActorComponentInstanceData.OuterSingleton ==
        (UScriptStruct *)0x0) {
      return __return_storage_ptr__;
    }
  }
  pUVar1 = Z_Registration_Info_UScriptStruct_FActorComponentInstanceData.OuterSingleton;
  local_res8 = Z_Registration_Info_UScriptStruct_FActorComponentInstanceData.OuterSingleton;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable
              ((UObject *)
               Z_Registration_Info_UScriptStruct_FActorComponentInstanceData.OuterSingleton);
  }
  FWeakObjectPtr::operator=
            ((FWeakObjectPtr *)&__return_storage_ptr__->field_0x8,(FObjectPtr)&local_res8);
  iVar4 = (int)*(short *)((longlong)&pUVar1->_padding_ + 4);
  uVar5 = (int)pUVar1->_padding_ + -1 + iVar4 & ~(iVar4 - 1U);
  uVar2 = 1;
  if (uVar5 != 0) {
    uVar2 = uVar5;
  }
  this_00 = FMemory::Malloc((longlong)(int)uVar2,0);
  *(FActorComponentInstanceData **)&__return_storage_ptr__->field_0x10 = this_00;
  FActorComponentInstanceData::FActorComponentInstanceData(this_00,this);
  __return_storage_ptr__->field_0x20 = 1;
  return __return_storage_ptr__;
}

// GetComponentLevel @ 147835900

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevel * __thiscall UActorComponent::GetComponentLevel(UActorComponent *this)

{
  ULevel *pUVar1;
  UClass *pUVar2;
  
  if (this->OwnerPrivate != (AActor *)0x0) {
    pUVar1 = AActor::GetLevel(this->OwnerPrivate);
    return pUVar1;
  }
  pUVar2 = Z_Construct_UClass_ULevel_NoRegister();
  pUVar1 = (ULevel *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
  return pUVar1;
}

// GetComponentTickInterval @ 147835940

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall UActorComponent::GetComponentTickInterval(UActorComponent *this)

{
  return *(float *)((longlong)&(this->PrimaryComponentTick)._padding_ + 4);
}

// GetFunctionCallspace @ 147839b90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
UActorComponent::GetFunctionCallspace(UActorComponent *this,UFunction *param_1,FFrame *param_2)

{
  int iVar1;
  
  if ((param_1->FunctionFlags & FUNC_Static) != FUNC_None) {
    iVar1 = UEngine::GetGlobalFunctionCallspace(GEngine,param_1,(UObject *)this,param_2);
    return iVar1;
  }
  if (this->OwnerPrivate != (AActor *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147839bbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(this->OwnerPrivate->_padding_ + 0x268))();
    return iVar1;
  }
  return 2;
}

// GetLifetimeReplicatedProps @ 14783a400

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
UActorComponent::GetLifetimeReplicatedProps
          (UActorComponent *this,TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  longlong *plVar2;
  UClass *pUVar3;
  FRepPropertyDescriptor local_38;
  FDoRepLifetimeParams local_28;
  
  plVar2 = (longlong *)this->_padding_;
  if (plVar2 != (longlong *)0x0) {
    pUVar3 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(plVar2[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      (**(code **)(*plVar2 + 0x408))(plVar2,param_1);
    }
  }
  local_28.bIsPushBased = true;
  local_28.Condition = COND_None;
  local_28.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_28.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38.PropertyName = L"bIsActive";
  local_38.RepIndex = 1;
  local_38.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_38,param_1,&local_28);
  local_38.RepIndex = 0;
  local_38.PropertyName = L"bReplicates";
  local_38.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_38,param_1,&local_28);
  return;
}

// GetOwnerRole @ 14783b630

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ENetRole __thiscall UActorComponent::GetOwnerRole(UActorComponent *this)

{
  if (this->OwnerPrivate != (AActor *)0x0) {
    return (ENetRole)(this->OwnerPrivate->Role).Value;
  }
  return ROLE_None;
}

// GetPrivateStaticClass @ 14783bdf0

UClass * __cdecl UActorComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorComponent",
               &Z_Registration_Info_UClass_UActorComponent.InnerSingleton,
               StaticRegisterNativesUActorComponent,0xc0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UActorComponent>,InternalVTableHelperCtorCaller<UActorComponent>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorComponent.InnerSingleton;
}

// GetReadableName @ 14783d040

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
UActorComponent::GetReadableName(UActorComponent *this,FString *__return_storage_ptr__)

{
  int iVar1;
  AActor *pAVar2;
  FScriptContainerElement *_Src;
  bool bVar3;
  bool bVar4;
  FString *pFVar5;
  longlong lVar6;
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_res8 = (FName)this->_padding_;
  pAVar2 = this->OwnerPrivate;
  ::FName::ToString(&local_res8,&local_38);
  if (pAVar2 == (AActor *)0x0) {
    pFVar5 = ::FString::FString(&local_28,L"None");
    bVar4 = false;
    bVar3 = true;
  }
  else {
    iVar1 = (pAVar2->ActorLabel).Data.ArrayNum;
    if (iVar1 < 2) {
      local_res8 = (FName)pAVar2->_padding_;
      ::FName::ToString(&local_res8,&local_58);
    }
    else {
      _Src = (pAVar2->ActorLabel).Data.AllocatorInstance.Data;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = iVar1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,(ForAnyElementType *)&local_58,iVar1,&local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
    }
    pFVar5 = &local_58;
    bVar4 = true;
    bVar3 = false;
  }
  ::FString::ConcatFC(&local_48,pFVar5,L".");
  ::FString::ConcatFF(__return_storage_ptr__,&local_48,&local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar4) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  lVar6 = (**(code **)(this->_padding_ + 0x480))(this);
  if (lVar6 != 0) {
    ::FString::AppendChars(__return_storage_ptr__,L" ",1);
    local_res8 = *(FName *)(lVar6 + 0x18);
    ::FName::AppendString(&local_res8,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetScene @ 14783d5d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSceneInterface * __thiscall UActorComponent::GetScene(UActorComponent *this)

{
  if (this->WorldPrivate != (UWorld *)0x0) {
    return this->WorldPrivate->Scene;
  }
  return (FSceneInterface *)0x0;
}

// GetUCSModifiedProperties @ 14783e000

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
UActorComponent::GetUCSModifiedProperties
          (UActorComponent *this,
          TSet<FProperty_const_*,DefaultKeyFuncs<FProperty_const_*,0>,FDefaultSetAllocator> *param_1
          )

{
  int iVar1;
  TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_> *pTVar2;
  FFieldClass *pFVar3;
  FProperty *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  FProperty *local_res18;
  FProperty *local_res20;
  TObjectPtr<UObject>_u_0 local_78;
  void *pvStack_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  
  AcquireSRWLockShared((PSRWLOCK)&AllUCSModifiedPropertiesLock);
  pTVar2 = TMapBase<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,0>_>
                   *)&AllUCSModifiedProperties,this);
  if (pTVar2 != (TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    iVar1 = pTVar2->ArrayNum;
    pFVar6 = pFVar5 + (longlong)iVar1 * 0x20;
    while( true ) {
      if (pTVar2->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FSimpleMemberReference,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      if (pFVar5 == pFVar6) break;
      local_78.DebugPtr = (UObject *)0x0;
      pvStack_70 = (void *)0x0;
      local_68 = 0;
      local_48 = 0;
      lVar7 = 0;
      if (((*(int *)(pFVar5 + 0x1c) == 0 && *(int *)(pFVar5 + 0x18) == 0) &&
          *(int *)(pFVar5 + 0x14) == 0) && *(int *)(pFVar5 + 0x10) == 0) {
        lVar7 = *(longlong *)(pFVar5 + 8);
      }
      local_58 = *(undefined8 *)(pFVar5 + 0x10);
      uStack_50 = *(undefined8 *)(pFVar5 + 0x18);
      local_60 = lVar7;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)pFVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(*(UObject **)pFVar5);
      }
      local_78.DebugPtr = *(UObject **)pFVar5;
      pFVar3 = FProperty::StaticClass();
      pFVar4 = FMemberReference::ResolveMemberProperty
                         ((FMemberReference *)&local_78.ObjectPtr,(UClass *)0x0,false,pFVar3);
      if ((pFVar4 == (FProperty *)0x0) && (lVar7 != *(longlong *)(pFVar5 + 8))) {
        local_60 = *(longlong *)(pFVar5 + 8);
        pFVar3 = FProperty::StaticClass();
        pFVar4 = FMemberReference::ResolveMemberProperty
                           ((FMemberReference *)&local_78.ObjectPtr,(UClass *)0x0,false,pFVar3);
      }
      if (pvStack_70 != (void *)0x0) {
        FMemory::Free(pvStack_70);
      }
      local_res18 = pFVar4;
      TSet<FProperty_const_*,DefaultKeyFuncs<FProperty_const_*,0>,FDefaultSetAllocator>::
      Emplace<FProperty_const_*>(param_1,&local_res20,(bool *)&local_res18);
      pFVar5 = pFVar5 + 0x20;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014783e192. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&AllUCSModifiedPropertiesLock);
  return;
}

// GetWorld_Uncached @ 14783ea10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UWorld * __thiscall UActorComponent::GetWorld_Uncached(UActorComponent *this)

{
  int iVar1;
  AActor *this_00;
  UWorld *pUVar2;
  UClass *pUVar3;
  
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

// HandleCanEverAffectNavigationChange @ 14783ea80

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
UActorComponent::HandleCanEverAffectNavigationChange(UActorComponent *this,bool param_1)

{
  char cVar1;
  
  if ((this->bRegistered == 0) && (!param_1)) {
    return;
  }
  if ((bool)this->bCanEverAffectNavigation) {
    cVar1 = (**(code **)(this->_padding_ + 0x4e0))();
    this->field_0x9a = (cVar1 << 6 ^ this->field_0x9a) & 0x40U ^ this->field_0x9a;
    FNavigationSystem::OnComponentRegistered(this);
    return;
  }
  this->field_0x9a = this->field_0x9a & 0xbf;
  FNavigationSystem::OnComponentUnregistered(this);
  return;
}

// InitializeComponent @ 14783ff40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::InitializeComponent(UActorComponent *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bRegistered == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bRegistered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x637,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->bHasBeenInitialized != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bHasBeenInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x638,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bHasBeenInitialized = '\x01';
  return;
}

// InternalGetNetMode @ 1478400f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ENetMode __thiscall UActorComponent::InternalGetNetMode(UActorComponent *this)

{
  FName FVar1;
  AActor *this_00;
  FNameEntryId FVar2;
  ENetMode EVar3;
  UWorld *this_01;
  undefined4 extraout_var;
  UNetDriver *this_02;
  FName FVar4;
  undefined1 auStackX_8 [8];
  
  this_00 = this->OwnerPrivate;
  if (this_00 == (AActor *)0x0) {
    return NM_Standalone;
  }
  this_01 = AActor::GetWorld(this_00);
  FVar1 = this_00->NetDriverName;
  FVar2 = FNameEntryId::FromValidEName((EName)auStackX_8);
  FVar4.Number = 0;
  FVar4.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar2.Value);
  if (FVar1 == FVar4) {
    if (this_01 == (UWorld *)0x0) {
      return NM_Standalone;
    }
    this_02 = (this_01->NetDriver).field0_0x0.DebugPtr;
  }
  else {
    this_02 = UEngine::FindNamedNetDriver(GEngine,this_01,FVar1);
  }
  if (this_02 == (UNetDriver *)0x0) {
    if (this_01 == (UWorld *)0x0) {
      return NM_Standalone;
    }
    EVar3 = UWorld::InternalGetNetMode(this_01);
    return EVar3;
  }
  EVar3 = UNetDriver::GetNetMode(this_02);
  return EVar3;
}

// IsAsyncPhysicsStateCreated @ 147840140

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorComponent::IsAsyncPhysicsStateCreated(UActorComponent *this)

{
  return (bool)(*(byte *)&(this->ComponentTags).AllocatorInstance.Data >> 3 & 1);
}

// IsComponentTickEnabled @ 147840340

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorComponent::IsComponentTickEnabled(UActorComponent *this)

{
  return ((this->PrimaryComponentTick)._padding_ & 0xc000000) != 0;
}

// IsCreatedByConstructionScript @ 147840350

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorComponent::IsCreatedByConstructionScript(UActorComponent *this)

{
  if ((this->CreationMethod != SimpleConstructionScript) &&
     (this->CreationMethod != UserConstructionScript)) {
    return false;
  }
  return true;
}

// IsEditableWhenInherited @ 1478403a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorComponent::IsEditableWhenInherited(UActorComponent *this)

{
  bool bVar1;
  
  bVar1 = this->bEditableWhenInherited;
  if ((bVar1 != false) && (this->CreationMethod == UserConstructionScript)) {
    bVar1 = false;
  }
  return bVar1;
}

// IsNameStableForNetworking @ 1478408a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorComponent::IsNameStableForNetworking(UActorComponent *this)

{
  bool bVar1;
  
  if (this->bNetAddressable == '\0') {
    bVar1 = UObject::IsNameStableForNetworking((UObject *)this);
    if ((!bVar1) || (this->CreationMethod == UserConstructionScript)) {
      return false;
    }
  }
  return true;
}

// IsOwnerRunningUserConstructionScript @ 1478408f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorComponent::IsOwnerRunningUserConstructionScript(UActorComponent *this)

{
  if ((this->OwnerPrivate != (AActor *)0x0) &&
     (this->OwnerPrivate->bRunningUserConstructionScript != '\0')) {
    return true;
  }
  return false;
}

// IsOwnerSelected @ 147840910

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorComponent::IsOwnerSelected(UActorComponent *this)

{
  bool bVar1;
  
  if (this->OwnerPrivate != (AActor *)0x0) {
    bVar1 = UObject::IsSelected((UObject *)this->OwnerPrivate);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// IsReplicatedSubObjectRegistered @ 1478409d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UActorComponent::IsReplicatedSubObjectRegistered(UActorComponent *this,UObject *param_1)

{
  bool bVar1;
  
  if (this->OwnerPrivate != (AActor *)0x0) {
    bVar1 = AActor::IsActorComponentReplicatedSubObjectRegistered(this->OwnerPrivate,this,param_1);
    return bVar1;
  }
  return false;
}

// IsSupportedForNetworking @ 147840b50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorComponent::IsSupportedForNetworking(UActorComponent *this)

{
  char cVar1;
  
  if (!(bool)this->bReplicates) {
    cVar1 = (**(code **)(this->_padding_ + 0x200))();
    if (cVar1 == '\0') {
      return false;
    }
  }
  return true;
}

// K2_DestroyComponent @ 147841640

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::K2_DestroyComponent(UActorComponent *this,UObject *param_1)

{
  AActor *this_00;
  FString local_28;
  FString local_18;
  
  if ((((this->bAllowAnyoneToDestroyMe != '\0') || ((UActorComponent *)param_1 == this)) ||
      (this_00 = this->OwnerPrivate, this_00 == (AActor *)0x0)) || (this_00 == (AActor *)param_1)) {
                    /* WARNING: Could not recover jumptable at 0x000147841724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x4a0))(this,0);
    return;
  }
  if (1 < (byte)LogActorComponent._0_1_) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0,None);
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogActorComponent);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// MarkForNeededEndOfFrameRecreate @ 1478427b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::MarkForNeededEndOfFrameRecreate(UActorComponent *this)

{
  bool bVar1;
  UWorld *this_00;
  FUObjectItem *pFVar2;
  
  if (this->bNeverNeedsRenderUpdate == 0) {
    this_00 = GetWorld(this);
    if (this_00 != (UWorld *)0x0) {
      bVar1 = (bool)(**(code **)(this->_padding_ + 0x458))(this);
      UWorld::MarkActorComponentForNeededEndOfFrameUpdate(this_00,this,bVar1);
      return;
    }
    pFVar2 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
    if (((uint)((ulonglong)(pFVar2->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) {
      DoDeferredRenderUpdates_Concurrent(this);
    }
  }
  return;
}

// MarkForNeededEndOfFrameUpdate @ 147842830

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::MarkForNeededEndOfFrameUpdate(UActorComponent *this,bool param_1)

{
  bool bVar1;
  UWorld *this_00;
  FUObjectItem *pFVar2;
  
  if (this->bNeverNeedsRenderUpdate == 0) {
    this_00 = GetWorld(this);
    if (this_00 != (UWorld *)0x0) {
      if (param_1) {
        if ((this->bReadyForEarlyEndOfFrameUpdate == '\0') &&
           (this->MarkedForEndOfFrameUpdateArrayIndex != -1)) {
          UWorld::ClearActorComponentEndOfFrameUpdate(this_00,this);
        }
        this->bReadyForEarlyEndOfFrameUpdate = '\x01';
      }
      bVar1 = (bool)(**(code **)(this->_padding_ + 0x450))(this);
      UWorld::MarkActorComponentForNeededEndOfFrameUpdate(this_00,this,bVar1);
      return;
    }
    pFVar2 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
    if (((uint)((ulonglong)(pFVar2->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) {
      DoDeferredRenderUpdates_Concurrent(this);
    }
  }
  return;
}

// MarkRenderDynamicDataDirty @ 147842900

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::MarkRenderDynamicDataDirty(UActorComponent *this)

{
  bool bVar1;
  UWorld *this_00;
  FUObjectItem *pFVar2;
  
  if ((this->bRegistered == '\x01' && this->bRenderStateCreated == '\x01') &&
     (this->bRenderDynamicDataDirty = '\x01', this->bNeverNeedsRenderUpdate == 0)) {
    this_00 = GetWorld(this);
    if (this_00 != (UWorld *)0x0) {
      bVar1 = (bool)(**(code **)(this->_padding_ + 0x450))(this);
      UWorld::MarkActorComponentForNeededEndOfFrameUpdate(this_00,this,bVar1);
      return;
    }
    pFVar2 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
    if (((uint)((ulonglong)(pFVar2->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) {
      DoDeferredRenderUpdates_Concurrent(this);
    }
  }
  return;
}

// MarkRenderInstancesDirty @ 1478429a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::MarkRenderInstancesDirty(UActorComponent *this)

{
  bool bVar1;
  UWorld *this_00;
  FUObjectItem *pFVar2;
  
  if ((this->bRegistered == '\x01' && this->bRenderStateCreated == '\x01') &&
     (this->bRenderInstancesDirty = '\x01', this->bNeverNeedsRenderUpdate == 0)) {
    this_00 = GetWorld(this);
    if (this_00 != (UWorld *)0x0) {
      bVar1 = (bool)(**(code **)(this->_padding_ + 0x450))(this);
      UWorld::MarkActorComponentForNeededEndOfFrameUpdate(this_00,this,bVar1);
      return;
    }
    pFVar2 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
    if (((uint)((ulonglong)(pFVar2->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) {
      DoDeferredRenderUpdates_Concurrent(this);
    }
  }
  return;
}

// MarkRenderStateDirty @ 147842a40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::MarkRenderStateDirty(UActorComponent *this)

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
  FDestructionSentinel local_28;
  
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
               (FWriteAccessScope *)&local_28);
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
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
  }
  return;
}

// MarkRenderTransformDirty @ 147842c10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::MarkRenderTransformDirty(UActorComponent *this)

{
  bool bVar1;
  UWorld *this_00;
  FUObjectItem *pFVar2;
  
  if ((this->bRegistered == '\x01' && this->bRenderStateCreated == '\x01') &&
     (this->bRenderTransformDirty = '\x01', this->bNeverNeedsRenderUpdate == 0)) {
    this_00 = GetWorld(this);
    if (this_00 != (UWorld *)0x0) {
      bVar1 = (bool)(**(code **)(this->_padding_ + 0x450))(this);
      UWorld::MarkActorComponentForNeededEndOfFrameUpdate(this_00,this,bVar1);
      return;
    }
    pFVar2 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
    if (((uint)((ulonglong)(pFVar2->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) {
      DoDeferredRenderUpdates_Concurrent(this);
    }
  }
  return;
}

// NeedsInitialization @ 1478441f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorComponent::NeedsInitialization(UActorComponent *this)

{
  return (bool)((byte)((uint)this->_padding_ >> 9) & 1);
}

// NeedsLoadForClient @ 147844200

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorComponent::NeedsLoadForClient(UActorComponent *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetOuter()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x4a7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((this->_padding_ & 0x10) == 0) {
    cVar4 = (**(code **)(*(longlong *)this->_padding_ + 0x100))();
    if (cVar4 == '\0') {
      bVar2 = false;
      goto LAB_14784425b;
    }
  }
  bVar2 = true;
LAB_14784425b:
  cVar4 = (**(code **)(this->_padding_ + 0x120))(this);
  if ((cVar4 == '\0') && (bVar2)) {
    bVar2 = UObject::NeedsLoadForClient((UObject *)this);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// NeedsLoadForEditorGame @ 1478442a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorComponent::NeedsLoadForEditorGame(UActorComponent *this)

{
  (**(code **)(this->_padding_ + 0x120))();
  return false;
}

// NeedsLoadForServer @ 1478442c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorComponent::NeedsLoadForServer(UActorComponent *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetOuter()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x4af,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((this->_padding_ & 0x10) == 0) {
    cVar4 = (**(code **)(*(longlong *)this->_padding_ + 0x108))();
    if (cVar4 == '\0') {
      bVar2 = false;
      goto LAB_14784431b;
    }
  }
  bVar2 = true;
LAB_14784431b:
  cVar4 = (**(code **)(this->_padding_ + 0x120))(this);
  if ((cVar4 == '\0') && (bVar2)) {
    bVar2 = UObject::NeedsLoadForServer((UObject *)this);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// OnAsyncCreatePhysicsState @ 147844920

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorComponent::OnAsyncCreatePhysicsState(UActorComponent *this,FTimeout *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2286,"UActorComponent::OnAsyncCreatePhysicsState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
               ,0x8ee);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2286);
  }
  cVar2 = (**(code **)this->_padding_)(this);
  if ((cVar2 == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllowsAsyncPhysicsStateCreation()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x8ef,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  (**(code **)(*(longlong *)&this[-1].UCSSerializationIndex + 0x3b0))
            (&this[-1].UCSSerializationIndex);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// OnAsyncCreatePhysicsStateEnd_GameThread @ 1478449f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::OnAsyncCreatePhysicsStateEnd_GameThread(UActorComponent *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  int *piVar7;
  
  if ((((ulonglong)(this->ComponentTags).AllocatorInstance.Data & 8) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsPhysicsStateCreated()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x8f6,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(int *)((longlong)&(this->PrimaryComponentTick).Target + 4) != 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsPreRegistering()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x8f7,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3._0_4_ = (this->ComponentTags).ArrayNum;
  lVar3._4_4_ = (this->ComponentTags).ArrayMax;
  piVar1 = &this[-1].UCSSerializationIndex;
  if (((lVar3 == 0) || ((this->field_0x88 & 0x18) != 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsAsyncCreatePhysicsStateRunning()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x8f8,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar6 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  iVar2 = (int)pUVar6->_padding_;
  if (((int)(this[-1].PhysicsStateAsyncCreationScene)->_padding_ < iVar2) ||
     ((longlong *)
      *(undefined1 **)((this[-1].PhysicsStateAsyncCreationScene)->_padding_ + (longlong)iVar2 * 8)
      != &pUVar6->_padding_)) goto LAB_147844b15;
  if (piVar1 == (int *)0x0) {
LAB_147844ae3:
    piVar7 = (int *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if (((int)(this[-1].PhysicsStateAsyncCreationScene)->_padding_ < iVar2) ||
       (piVar7 = piVar1,
       (longlong *)
       *(undefined1 **)((this[-1].PhysicsStateAsyncCreationScene)->_padding_ + (longlong)iVar2 * 8)
       != &pUVar6->_padding_)) goto LAB_147844ae3;
  }
  if ((*(longlong *)(piVar7 + 0xbe) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsA<UPrimitiveComponent>() || !Cast<UPrimitiveComponent>(this)->DeferredCreatePhysicsStateScene"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x8f9,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_147844b15:
  lVar3 = *(longlong *)piVar1;
  this->field_0x88 = this->field_0x88 & 0xe7;
  *(byte *)&(this->ComponentTags).AllocatorInstance.Data =
       *(byte *)&(this->ComponentTags).AllocatorInstance.Data | 0x10;
  (this->ComponentTags).ArrayNum = 0;
  (this->ComponentTags).ArrayMax = 0;
  (**(code **)(lVar3 + 0x350))(piVar1);
  if ((*(int *)((longlong)&(this->PrimaryComponentTick).Target + 4) != 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsPreRegistered()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x901,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}

// OnAsyncDestroyPhysicsStateBegin_GameThread @ 147844ba0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::OnAsyncDestroyPhysicsStateBegin_GameThread(UActorComponent *this)

{
  UActorComponent *local_res8;
  
  TMulticastDelegate<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy>::Broadcast
            (&GlobalDestroyPhysicsDelegate,(UActorComponent *)&this[-1].UCSSerializationIndex);
  if (((ulonglong)(this->ComponentTags).AllocatorInstance.Data & 1) == 0) {
    local_res8 = (UActorComponent *)&this[-1].UCSSerializationIndex;
    `UActorComponent::OnAsyncDestroyPhysicsStateBegin_GameThread'::__l2::<lambda_1>::operator()
              (&local_res8);
  }
  return;
}

// OnAsyncDestroyPhysicsStateEnd_GameThread @ 147844c00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::OnAsyncDestroyPhysicsStateEnd_GameThread(UActorComponent *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FString local_18;
  
  lVar1._0_4_ = (this->ComponentTags).ArrayNum;
  lVar1._4_4_ = (this->ComponentTags).ArrayMax;
  if (((lVar1 == 0) || ((this->field_0x88 & 0x18) != 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsAsyncDestroyPhysicsStateRunning()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x90c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar1 = *(longlong *)&this[-1].UCSSerializationIndex;
  this->field_0x88 = this->field_0x88 & 0xe7;
  (this->ComponentTags).ArrayNum = 0;
  (this->ComponentTags).ArrayMax = 0;
  cVar4 = (**(code **)(lVar1 + 0x3c8))(&this[-1].UCSSerializationIndex);
  if (cVar4 != '\0') {
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)&this[-1].UCSSerializationIndex,&local_18,(UObject *)0x0,None);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasValidPhysicsState()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x910,L"Failed to destroy physics state (%s)");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((((ulonglong)(this->ComponentTags).AllocatorInstance.Data & 8) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bPhysicsStateCreated",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x911,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar1 = *(longlong *)&this[-1].UCSSerializationIndex;
  *(byte *)&(this->ComponentTags).AllocatorInstance.Data =
       *(byte *)&(this->ComponentTags).AllocatorInstance.Data & 0xf7;
  (**(code **)(lVar1 + 0x360))(&this[-1].UCSSerializationIndex);
  if ((*(int *)((longlong)&(this->PrimaryComponentTick).Target + 4) != 4) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsPreUnregistered()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x915,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// OnComponentCreated @ 1478459d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::OnComponentCreated(UActorComponent *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bHasBeenCreated == '\0') {
    this->bHasBeenCreated = '\x01';
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<2595971593406515309>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                     ,0x86d,"!bHasBeenCreated");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->bHasBeenCreated = '\x01';
  return;
}

// OnComponentDestroyed @ 147845a30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::OnComponentDestroyed(UActorComponent *this,bool param_1)

{
  this->bHasBeenCreated = '\0';
  return;
}

// OnCreatePhysicsState @ 147845a40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::OnCreatePhysicsState(UActorComponent *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2266,"UActorComponent::OnCreatePhysicsState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
               ,0x8da);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2266);
  }
  if (((this->bRegistered == 0) && (this->RegistrationState != PreRegistering)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsRegistered() || IsPreRegistering()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x8db,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  cVar3 = (**(code **)(this->_padding_ + 0x3c0))(this);
  if ((cVar3 == '\0') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShouldCreatePhysicsState()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x8dc,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this->WorldPrivate->PhysicsScene == (FPhysScene_Chaos *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("WorldPrivate->GetPhysicsScene()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x8dd,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this->bPhysicsStateCreated != '\0') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bPhysicsStateCreated",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x8de,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->bPhysicsStateCreated = '\x01';
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnCreatedFromReplication @ 147845b90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::OnCreatedFromReplication(UActorComponent *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  
  if (this->OwnerPrivate != (AActor *)0x0) {
    pUVar3 = AActor::GetWorld(this->OwnerPrivate);
    if (pUVar3 != (UWorld *)0x0) {
      RegisterComponentWithWorld(this,pUVar3,(FRegisterComponentContext *)0x0);
      SetIsReplicated(this,true);
      return;
    }
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<2595971593406515191>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                     ,0x7f7,"MyOwnerWorld");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  SetIsReplicated(this,true);
  return;
}

// OnDestroyPhysicsState @ 147845c10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::OnDestroyPhysicsState(UActorComponent *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bPhysicsStateCreated != '\0') {
    this->bPhysicsStateCreated = '\0';
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<2595971593406515494>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                     ,0x926,"bPhysicsStateCreated");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->bPhysicsStateCreated = '\0';
  return;
}

// OnDestroyedFromReplication @ 147845c70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::OnDestroyedFromReplication(UActorComponent *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147845c75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x4a0))(this,0);
  return;
}

// OnPreRegister @ 1478461e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::OnPreRegister(UActorComponent *this)

{
  undefined1 *puVar1;
  AActor *pAVar2;
  FPhysScene_Chaos *this_00;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  ULevel *pUVar6;
  IAsyncPhysicsStateProcessor *pIVar7;
  bool bVar8;
  UActorComponent *local_res8;
  UActorComponent *local_res10;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1498,"UActorComponent::OnPreRegister",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
               ,0x5da);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1498);
  }
  if (this->WorldPrivate == (UWorld *)0x0) {
    pAVar2 = this->OwnerPrivate;
    if ((pAVar2 == (AActor *)0x0) || (pAVar2->_padding_ == 0)) {
      ::FString::FString(&local_78,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pAVar2,&local_78,(UObject *)0x0,None);
    }
    UObject::GetDetailedInfo((UObject *)this,&local_48);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("WorldPrivate",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x5db,L"OnPreRegister: %s to %s");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->RegistrationState != None) {
    pAVar2 = this->OwnerPrivate;
    if ((pAVar2 == (AActor *)0x0) || (pAVar2->_padding_ == 0)) {
      ::FString::FString(&local_68,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pAVar2,&local_68,(UObject *)0x0,None);
    }
    UObject::GetDetailedInfo((UObject *)this,&local_38);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegistrationState == EComponentRegistrationState::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x5dc,L"OnPreRegister: %s to %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->bRegistered != 0) {
    pAVar2 = this->OwnerPrivate;
    if ((pAVar2 == (AActor *)0x0) || (pAVar2->_padding_ == 0)) {
      ::FString::FString(&local_58,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pAVar2,&local_58,(UObject *)0x0,None);
    }
    UObject::GetDetailedInfo((UObject *)this,&local_28);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bRegistered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x5dd,L"OnPreRegister: %s to %s");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->RegistrationState = PreRegistering;
  if ((this->OwnerPrivate != (AActor *)0x0) &&
     (pUVar6 = AActor::GetLevel(this->OwnerPrivate), pUVar6 != (ULevel *)0x0)) {
    local_res10 = this;
    if ((((uint)this->_padding_ >> 0x1e & 1) != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Component)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\Level.h"
                           ,0x33b,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>::
    Emplace<UActorComponent_*_const_&>
              (&pUVar6->PreRegisteringActorComponents,&local_res8,(bool *)&local_res10);
  }
  (**(code **)(this->_padding_ + 0x448))(this,0,0);
  cVar5 = (**(code **)(this->_padding_ + 0x338))(this,this->WorldPrivate);
  if (cVar5 == '\0') {
    (**(code **)(this->_padding_ + 0x350))(this);
  }
  else {
    this_00 = this->WorldPrivate->PhysicsScene;
    if ((this_00 == (FPhysScene_Chaos *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("PhysScene",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                           ,0x5ec,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar1 = &this->field_0xb8;
    if (this->PhysicsStateAsyncCreationScene != (FPhysScene_Chaos *)0x0) {
      if ((this->PhysicsStateAsyncCreationState == Creating) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsAsyncCreatePhysicsStateRunning()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                             ,0x5ed,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((this->PhysicsStateAsyncCreationScene != (FPhysScene_Chaos *)0x0) &&
          (this->PhysicsStateAsyncCreationState == Destroying)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsAsyncDestroyPhysicsStateRunning()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                             ,0x5ee,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pIVar7 = (IAsyncPhysicsStateProcessor *)&this->_padding_;
    if (this == (UActorComponent *)0x0) {
      pIVar7 = (IAsyncPhysicsStateProcessor *)0x0;
    }
    bVar4 = FPhysScene_Chaos::PushAsyncCreatePhysicsStateJob(this_00,pIVar7);
    if ((!bVar4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("PhysScene->PushAsyncCreatePhysicsStateJob(this)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                           ,0x5ef,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *puVar1 = *puVar1 & 0xef;
    *puVar1 = *puVar1 | 8;
    this->PhysicsStateAsyncCreationScene = this_00;
    if ((this_00 == (FPhysScene_Chaos *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsAsyncCreatePhysicsStateRunning()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                           ,0x5f2,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnPreRegistered @ 1478466a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::OnPreRegistered(UActorComponent *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ULevel *pUVar4;
  
  if ((this->RegistrationState != PreRegistering) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsPreRegistering()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x5fc,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->RegistrationState = PreRegistered;
  if ((this->OwnerPrivate != (AActor *)0x0) &&
     (pUVar4 = AActor::GetLevel(this->OwnerPrivate), pUVar4 != (ULevel *)0x0)) {
    if ((((uint)this->_padding_ >> 0x1e & 1) != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Component)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\Level.h"
                           ,0x341,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar3 = TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>::
            Remove(&pUVar4->PreRegisteringActorComponents,this);
    if ((iVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("PreRegisteringActorComponents.Remove(Component)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\Level.h"
                           ,0x342,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnPreUnregister @ 147846780

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::OnPreUnregister(UActorComponent *this)

{
  undefined1 *puVar1;
  AActor *pAVar2;
  FPhysScene_Chaos *this_00;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  ULevel *pUVar6;
  IAsyncPhysicsStateProcessor *pIVar7;
  UActorComponent *local_res8;
  UActorComponent *local_res10;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (this->WorldPrivate == (UWorld *)0x0) {
    pAVar2 = this->OwnerPrivate;
    if ((pAVar2 == (AActor *)0x0) || (pAVar2->_padding_ == 0)) {
      ::FString::FString(&local_78,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pAVar2,&local_78,(UObject *)0x0,None);
    }
    UObject::GetDetailedInfo((UObject *)this,&local_48);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("WorldPrivate",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x809,L"OnPreUnregister: %s to %s");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->RegistrationState != None) {
    pAVar2 = this->OwnerPrivate;
    if ((pAVar2 == (AActor *)0x0) || (pAVar2->_padding_ == 0)) {
      ::FString::FString(&local_68,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pAVar2,&local_68,(UObject *)0x0,None);
    }
    UObject::GetDetailedInfo((UObject *)this,&local_38);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegistrationState == EComponentRegistrationState::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x80a,L"OnPreUnregister: %s to %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->bRegistered == 0) {
    pAVar2 = this->OwnerPrivate;
    if ((pAVar2 == (AActor *)0x0) || (pAVar2->_padding_ == 0)) {
      ::FString::FString(&local_58,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pAVar2,&local_58,(UObject *)0x0,None);
    }
    UObject::GetDetailedInfo((UObject *)this,&local_28);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bRegistered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x80b,L"OnPreUnregister: %s to %s");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->RegistrationState = PreUnregistering;
  if ((this->OwnerPrivate != (AActor *)0x0) &&
     (pUVar6 = AActor::GetLevel(this->OwnerPrivate), pUVar6 != (ULevel *)0x0)) {
    local_res10 = this;
    if ((((uint)this->_padding_ >> 0x1e & 1) != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Component)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\Level.h"
                           ,0x351,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>::
    Emplace<UActorComponent_*_const_&>
              (&pUVar6->PreUnregisteringActorComponents,&local_res8,(bool *)&local_res10);
  }
  cVar5 = (**(code **)(this->_padding_ + 0x340))(this);
  if ((cVar5 == '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShouldAsyncDestroyPhysicsState()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x815,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = this->WorldPrivate->PhysicsScene;
  if ((this_00 == (FPhysScene_Chaos *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PhysScene",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x817,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar1 = &this->field_0xb8;
  if (this->PhysicsStateAsyncCreationScene != (FPhysScene_Chaos *)0x0) {
    if ((this->PhysicsStateAsyncCreationState == Creating) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsAsyncCreatePhysicsStateRunning()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                           ,0x818,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((this->PhysicsStateAsyncCreationScene != (FPhysScene_Chaos *)0x0) &&
        (this->PhysicsStateAsyncCreationState == Destroying)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsAsyncDestroyPhysicsStateRunning()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                           ,0x819,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pIVar7 = (IAsyncPhysicsStateProcessor *)&this->_padding_;
  if (this == (UActorComponent *)0x0) {
    pIVar7 = (IAsyncPhysicsStateProcessor *)0x0;
  }
  bVar4 = FPhysScene_Chaos::PushAsyncDestroyPhysicsStateJob(this_00,pIVar7);
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PhysScene->PushAsyncDestroyPhysicsStateJob(this)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x81a,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *puVar1 = *puVar1 & 0xf7;
  *puVar1 = *puVar1 | 0x10;
  this->PhysicsStateAsyncCreationScene = this_00;
  if ((this_00 == (FPhysScene_Chaos *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsAsyncDestroyPhysicsStateRunning()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x81d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// OnPreUnregistered @ 147846bd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::OnPreUnregistered(UActorComponent *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ULevel *pUVar4;
  
  if ((this->RegistrationState != PreUnregistering) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsPreUnregistering()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x91a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->RegistrationState = PreUnregistered;
  if ((this->OwnerPrivate != (AActor *)0x0) &&
     (pUVar4 = AActor::GetLevel(this->OwnerPrivate), pUVar4 != (ULevel *)0x0)) {
    if ((((uint)this->_padding_ >> 0x1e & 1) != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Component)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\Level.h"
                           ,0x357,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar3 = TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>::
            Remove(&pUVar4->PreUnregisteringActorComponents,this);
    if ((iVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("PreUnregisteringActorComponents.Remove(Component)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\Level.h"
                           ,0x358,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnRegister @ 147846cb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::OnRegister(UActorComponent *this)

{
  EComponentRegistrationState EVar1;
  AActor *pAVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FUObjectItem *pFVar6;
  FString *pFVar7;
  bool bVar8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar5 = false;
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1544,"UActorComponent::OnRegister",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
               ,0x608);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1544);
  }
  pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
  if (((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0) {
    UObject::GetDetailedInfo((UObject *)this,&local_c8);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsUnreachable()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x60b,L"%s");
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bVar4 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this->_padding_,RF_ArchetypeObject|RF_ClassDefaultObject)
  ;
  if (bVar4) {
    UObject::GetDetailedInfo((UObject *)this,&local_a8);
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)this->_padding_,&local_b8,(UObject *)0x0,None);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GetOuter()->IsTemplate()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x60c,L"\'%s\' (%s)");
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bVar4 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar4) {
    UObject::GetDetailedInfo((UObject *)this,&local_88);
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)this->_padding_,&local_98,(UObject *)0x0,None);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsTemplate()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x60d,L"\'%s\' (%s)");
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((uint)this->_padding_ >> 0x1e & 1) != 0) {
    if (this->OwnerPrivate != (AActor *)0x0) {
      pFVar7 = UObjectBaseUtility::GetFullName
                         ((UObjectBaseUtility *)this->OwnerPrivate,&local_68,(UObject *)0x0,None);
      if ((pFVar7->Data).ArrayNum == 0) {
        bVar5 = true;
      }
      else {
        bVar5 = true;
      }
    }
    UObject::GetDetailedInfo((UObject *)this,&local_78);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidChecked(this)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x60e,L"OnRegister: %s to %s");
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if ((bVar5) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->WorldPrivate == (UWorld *)0x0) {
    pAVar2 = this->OwnerPrivate;
    if (pAVar2 != (AActor *)0x0) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pAVar2,&local_48,(UObject *)0x0,None);
    }
    UObject::GetDetailedInfo((UObject *)this,&local_58);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("WorldPrivate",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x610,L"OnRegister: %s to %s");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if ((pAVar2 != (AActor *)0x0) &&
       (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->bRegistered != 0) {
    pAVar2 = this->OwnerPrivate;
    if (pAVar2 != (AActor *)0x0) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pAVar2,&local_28,(UObject *)0x0,None);
    }
    UObject::GetDetailedInfo((UObject *)this,&local_38);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bRegistered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x611,L"OnRegister: %s to %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if ((pAVar2 != (AActor *)0x0) &&
       (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EVar1 = this->RegistrationState;
  this->bRegistered = '\x01';
  this->RegistrationState = None;
  if (EVar1 != PreRegistered) {
    (**(code **)(this->_padding_ + 0x448))(this,0,0);
  }
  if (this->bAutoActivate != '\0') {
    pAVar2 = this->OwnerPrivate;
    bVar5 = UWorld::IsGameWorld(this->WorldPrivate);
    if (((!bVar5) || (pAVar2 == (AActor *)0x0)) || (pAVar2->bActorInitialized != '\0')) {
      (**(code **)(this->_padding_ + 0x2b8))(this,1);
    }
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnRep_IsActive @ 147847640

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::OnRep_IsActive(UActorComponent *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147847650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x420))(this,this->bIsActive);
  return;
}

// OnReplicationStartedForIris @ 147847660

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
UActorComponent::OnReplicationStartedForIris
          (UActorComponent *this,FOnReplicationStartedParams *param_1)

{
  return;
}

// OnStopReplicationForIris @ 147847680

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
UActorComponent::OnStopReplicationForIris(UActorComponent *this,FOnStopReplicationParams *param_1)

{
  return;
}

// OnUnregister @ 147847a40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::OnUnregister(UActorComponent *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *this_00;
  
  if (this->bRegistered == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bRegistered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x62b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bRegistered = '\0';
  if (this->RegistrationState == PreRegistering) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsPreRegistering()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x62e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->RegistrationState == PreUnregistering) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsPreUnregistering()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x62f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->RegistrationState = None;
  if (this->MarkedForEndOfFrameUpdateState != 0) {
    this_00 = GetWorld(this);
    if (this_00 != (UWorld *)0x0) {
      UWorld::ClearActorComponentEndOfFrameUpdate(this_00,this);
      return;
    }
  }
  return;
}

// OwnerNeedsInitialization @ 147848b30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorComponent::OwnerNeedsInitialization(UActorComponent *this)

{
  if ((this->OwnerPrivate != (AActor *)0x0) && (((uint)this->OwnerPrivate->_padding_ >> 9 & 1) != 0)
     ) {
    return true;
  }
  return false;
}

// PostApplyToComponent @ 147854a40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::PostApplyToComponent(UActorComponent *this)

{
  FComponentReregisterContext local_28;
  
  if ((this->bRegistered != 0) && (this->bAllowReregistration != '\0')) {
    FComponentReregisterContext::FComponentReregisterContext
              (&local_28,this,
               (TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> *)
               0x0);
    FComponentReregisterContext::~FComponentReregisterContext(&local_28);
  }
  return;
}

// PostInitProperties @ 147854b40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::PostInitProperties(UActorComponent *this)

{
  UObject::PostInitProperties((UObject *)this);
  if ((this->OwnerPrivate != (AActor *)0x0) && (this->CreationMethod != Instance)) {
    AActor::AddOwnedComponent(this->OwnerPrivate,this);
    return;
  }
  return;
}

// PostLoad @ 147854b80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::PostLoad(UActorComponent *this)

{
  FPackageFileVersion FVar1;
  
  UObject::PostLoad((UObject *)this);
  if (this->CreationMethod == SimpleConstructionScript) {
    FVar1 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
    if ((*(int *)FVar1 < 0x1bd) && ((this->_padding_ & 0x10) == 0)) {
      DetermineUCSModifiedProperties(this);
      return;
    }
  }
  return;
}

// PostRename @ 147854e50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UActorComponent::PostRename(UActorComponent *this,UObject *param_1,FName param_2)

{
  int iVar1;
  UActorComponent *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UClass *pUVar6;
  AActor *pAVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_28;
  
  UObject::PostRename((UObject *)this,param_1,param_2);
  if (param_1 != (UObject *)this->_padding_) {
    pUVar6 = Z_Construct_UClass_AActor_NoRegister();
    pAVar7 = (AActor *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar6);
    this->OwnerPrivate = pAVar7;
    pUVar6 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      pUVar6 = Z_Construct_UClass_AActor_NoRegister();
      param_1 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar6);
    }
    if (this->OwnerPrivate != (AActor *)param_1) {
      if ((AActor *)param_1 != (AActor *)0x0) {
        AActor::RemoveOwnedComponent((AActor *)param_1,this);
      }
      if (this->OwnerPrivate != (AActor *)0x0) {
        AActor::AddOwnedComponent(this->OwnerPrivate,this);
      }
      uVar9 = 0;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      GetObjectsWithOuter((UObjectBase *)this,&local_28,false,RF_NoFlags,Borrowed);
      uVar10 = uVar9;
      if (0 < local_28.ArrayNum) {
        do {
          uVar8 = (uint)uVar9;
          uVar5 = 0;
          if ((int)uVar8 < local_28.ArrayNum) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pUVar2 = *(UActorComponent **)(local_28.AllocatorInstance.Data + uVar10);
          pUVar6 = Z_Construct_UClass_AActor_NoRegister();
          iVar1 = (int)pUVar6->_padding_;
          if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar6->_padding_)) {
            pUVar6 = GetPrivateStaticClass();
            iVar1 = (int)pUVar6->_padding_;
            if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
               (((longlong *)
                 *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
                 &pUVar6->_padding_ && (pUVar2 != (UActorComponent *)0x0)))) {
              pUVar2->OwnerPrivate = this->OwnerPrivate;
              if ((AActor *)param_1 != (AActor *)0x0) {
                AActor::RemoveOwnedComponent((AActor *)param_1,pUVar2);
              }
              if (this->OwnerPrivate != (AActor *)0x0) {
                AActor::AddOwnedComponent(this->OwnerPrivate,pUVar2);
              }
            }
            GetObjectsWithOuter((UObjectBase *)pUVar2,&local_28,false,RF_NoFlags,Borrowed);
          }
          uVar9 = (ulonglong)(uVar8 + 1);
          uVar10 = uVar10 + 8;
        } while ((int)(uVar8 + 1) < local_28.ArrayNum);
      }
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
    }
  }
  this->bRoutedPostRename = '\x01';
  return;
}

// PreRegisterComponentWithWorld @ 1478556a0

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
UActorComponent::PreRegisterComponentWithWorld(UActorComponent *this,UWorld *param_1)

{
  AActor *this_00;
  code *pcVar1;
  bool bVar2;
  FUObjectItem *pFVar3;
  UWorld *pUVar4;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
  if (((uint)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_38,(UObject *)0x0,None);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsUnreachable()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x747,L"%s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((uint)this->_padding_ >> 0x1e & 1) == 0) {
    if (this->RegistrationState == PreRegistering) {
      if (4 < (byte)LogActorComponent._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogActorComponent);
      }
    }
    else if (this->RegistrationState == PreRegistered) {
      if (4 < (byte)LogActorComponent._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogActorComponent);
      }
    }
    else if (param_1 != (UWorld *)0x0) {
      if (this->WorldPrivate != (UWorld *)0x0) {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0,None);
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("WorldPrivate == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                           ,0x762,L"%s");
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      this_00 = this->OwnerPrivate;
      if (this_00 != (AActor *)0x0) {
        if (*(int *)(this_00->_padding_ + 0xd4) < 0) {
          if ((byte)LogActorComponent._0_1_ < 5) {
            return;
          }
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogActorComponent);
          return;
        }
        pFVar3 = FUObjectArray::IndexToObject
                           (&GUObjectArray,*(int *)((longlong)&this_00->_padding_ + 4));
        if (((uint)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0) {
          UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0,None);
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("!MyOwner->IsUnreachable()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                             ,0x773,L"%s");
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        if ((4 < (byte)LogActorComponent._0_1_) &&
           (pUVar4 = AActor::GetWorld(this_00), param_1 != pUVar4)) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogActorComponent);
        }
      }
      if (this->bHasBeenCreated == '\0') {
        (**(code **)(this->_padding_ + 0x4a8))(this);
      }
      this->WorldPrivate = param_1;
      (**(code **)(this->_padding_ + 0x348))(this);
    }
  }
  else if (4 < (byte)LogActorComponent._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogActorComponent);
  }
  return;
}

// PreUnregisterComponentFromWorld @ 147855970

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::PreUnregisterComponentFromWorld(UActorComponent *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->RegistrationState != None) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegistrationState == EComponentRegistrationState::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x802,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)(this->_padding_ + 0x358))(this);
  if (this->RegistrationState != PreUnregistering) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsPreUnregistering()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x804,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ReadyForReplication @ 14785c390

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::ReadyForReplication(UActorComponent *this)

{
  this->bIsReadyForReplication = '\x01';
  return;
}

// ReceiveAsyncPhysicsTick @ 14785c3a0

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
UActorComponent::ReceiveAsyncPhysicsTick(UActorComponent *this,float param_1,float param_2)

{
  UFunction *pUVar1;
  float local_res8;
  float local_resc;
  
  local_res8 = param_1;
  local_resc = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UActorComponent_ReceiveAsyncPhysicsTick);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_res8);
  return;
}

// ReceiveBeginPlay @ 14785c3f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::ReceiveBeginPlay(UActorComponent *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UActorComponent_ReceiveBeginPlay);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014785c41d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// ReceiveEndPlay @ 14785c430

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::ReceiveEndPlay(UActorComponent *this,Type param_1)

{
  UFunction *pUVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = (undefined1)param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UActorComponent_ReceiveEndPlay);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// ReceiveTick @ 14785c470

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::ReceiveTick(UActorComponent *this,float param_1)

{
  UFunction *pUVar1;
  float local_res10 [6];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UActorComponent_ReceiveTick);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// RecreatePhysicsState @ 14785c4b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::RecreatePhysicsState(UActorComponent *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2538,"UActorComponent::RecreatePhysicsState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
               ,0x9ea);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2538);
  }
  if (((this->PhysicsStateAsyncCreationScene != (FPhysScene_Chaos *)0x0) &&
      (this->PhysicsStateAsyncCreationState == Creating)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsAsyncCreatePhysicsStateRunning()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x9eb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  DestroyPhysicsState(this);
  if (this->bRegistered != 0) {
    CreatePhysicsState(this,false);
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RecreateRenderState_Concurrent @ 14785c580

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::RecreateRenderState_Concurrent(UActorComponent *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  FString local_28;
  FString local_18;
  
  puVar1 = &this->field_0x98;
  bVar5 = *puVar1;
  if ((this->bRegistered == 0) || (this->WorldPrivate->Scene == (FSceneInterface *)0x0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (this->bRenderStateCreated != '\0') {
    if (bVar4) {
      if ((this->bRenderStateRecreating != '\0') &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("bRenderStateRecreating == false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                             ,0x9d8,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this->bRenderStateRecreating = '\x01';
      bVar5 = this->field_0x98;
    }
    if (((bVar5 & 1) == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsRegistered()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                           ,0x9db,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(this->_padding_ + 0x3a8))(this);
    if (this->bRenderStateCreated != '\0') {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0,None);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bRenderStateCreated",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x9dd,L"Failed to route DestroyRenderState_Concurrent (%s)");
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  if (bVar4) {
    (**(code **)(this->_padding_ + 0x388))(this,0);
    this->bRenderStateRecreating = '\0';
    if (this->bRenderStateCreated == '\0') {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0,None);
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bRenderStateCreated",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x9e4,L"Failed to route CreateRenderState_Concurrent (%s)");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// RegisterAllComponentTickFunctions @ 14785c740

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
UActorComponent::RegisterAllComponentTickFunctions(UActorComponent *this,bool param_1)

{
  FPhysScene_Chaos *this_00;
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if ((GTestRegisterComponentTickFunctions != (UActorComponent *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GTestRegisterComponentTickFunctions == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x6f2,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (this->bRegistered != 0) {
    if (this->bTickFunctionsRegistered != param_1) {
      (**(code **)(this->_padding_ + 0x3d0))(this,param_1);
      bVar2 = GTestRegisterComponentTickFunctions != this;
      this->bTickFunctionsRegistered = param_1;
      if (bVar2) {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0,None);
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("GTestRegisterComponentTickFunctions == this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                           ,0x6fb,L"Failed to route component RegisterTickFunctions (%s)");
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      GTestRegisterComponentTickFunctions = (UActorComponent *)0x0;
    }
    if ((this->bAsyncPhysicsTickEnabled != '\0') &&
       (this_00 = this->WorldPrivate->PhysicsScene, this_00 != (FPhysScene_Chaos *)0x0)) {
      if (param_1) {
        FPhysScene_Chaos::RegisterAsyncPhysicsTickComponent(this_00,this);
        return;
      }
      FPhysScene_Chaos::UnregisterAsyncPhysicsTickComponent(this_00,this);
    }
  }
  return;
}

// RegisterAsyncPhysicsTickEnabled @ 14785c8f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::RegisterAsyncPhysicsTickEnabled(UActorComponent *this,bool param_1)

{
  FPhysScene_Chaos *this_00;
  FAsyncPhysicsTickCallback *pFVar1;
  UActorComponent *pUStackX_8;
  UActorComponent *apUStackX_10 [3];
  
  this_00 = this->WorldPrivate->PhysicsScene;
  if (this_00 == (FPhysScene_Chaos *)0x0) {
    return;
  }
  if (!param_1) {
    FPhysScene_Chaos::UnregisterAsyncPhysicsTickComponent(this_00,this);
    return;
  }
  pFVar1 = this_00->AsyncPhysicsTickCallback;
  apUStackX_10[0] = this;
  if (pFVar1 == (FAsyncPhysicsTickCallback *)0x0) {
    pFVar1 = Chaos::FPhysicsSolverBase::
             CreateAndRegisterSimCallbackObject_External<FAsyncPhysicsTickCallback>
                       ((FPhysicsSolverBase *)this_00->_padding_);
    this_00->AsyncPhysicsTickCallback = pFVar1;
  }
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>::
  Emplace<UActorComponent_*_const_&>
            (&pFVar1->AsyncPhysicsTickComponents,&pUStackX_8,(bool *)apUStackX_10);
  return;
}

// RegisterComponent @ 14785c920

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::RegisterComponent(UActorComponent *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  
  if (this->OwnerPrivate != (AActor *)0x0) {
    pUVar3 = AActor::GetWorld(this->OwnerPrivate);
    if (pUVar3 != (UWorld *)0x0) {
      RegisterComponentWithWorld(this,pUVar3,(FRegisterComponentContext *)0x0);
      return;
    }
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<2595971593406515191>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                     ,0x7f7,"MyOwnerWorld");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RegisterComponentTickFunctions @ 14785c990

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::RegisterComponentTickFunctions(UActorComponent *this,bool param_1)

{
  byte *pbVar1;
  bool bVar2;
  
  if (param_1) {
    bVar2 = SetupActorComponentTickFunction(this,(FTickFunction *)&this->PrimaryComponentTick);
    if (bVar2) {
      GTestRegisterComponentTickFunctions = this;
      (this->PrimaryComponentTick).Target = this;
      return;
    }
  }
  else {
    pbVar1 = (byte *)(this->PrimaryComponentTick)._padding_;
    if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 1) != 0)) {
      FTickFunction::UnRegisterTickFunction((FTickFunction *)&this->PrimaryComponentTick);
    }
  }
  GTestRegisterComponentTickFunctions = this;
  return;
}

// RegisterComponentWithWorld @ 14785cac0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UActorComponent::RegisterComponentWithWorld
          (UActorComponent *this,UWorld *param_1,FRegisterComponentContext *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName FVar3;
  AActor *this_00;
  UObjectBaseUtility *this_01;
  UActorComponent *this_02;
  UInputComponent *pUVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  bool bVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_RegisterComponent> FVar12;
  FUObjectItem *pFVar13;
  UWorld *pUVar14;
  UClass *pUVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  FNameEntryId FVar18;
  uint local_res8;
  uint uStackX_c;
  FColor_u_0 local_res20 [2];
  FName local_f8;
  FName local_e8;
  byte local_e0;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_d8;
  FName local_c8;
  FString local_c0;
  FName local_b0;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  FVar12 = StatPtr_STAT_RegisterComponent;
  if (StatPtr_STAT_RegisterComponent == (FThreadSafeStaticStat<FStat_STAT_RegisterComponent>)0x0) {
    pFVar11 = ::FName::FName(&local_b0,"STAT_RegisterComponent");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_RegisterComponent>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RegisterComponent,*pFVar11,
                        L"RegisterComponent","STATGROUP_Component","STATCAT_Advanced",L"Component",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  FVar3 = *(FName *)FVar12;
  FVar18 = FVar3.ComparisonIndex.Value;
  uVar16 = FVar3.Number;
  if ((FVar18.Value != 0) || (uVar16 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar7 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c8.ComparisonIndex.Value = FVar18.Value;
        local_c8.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c8,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                   ,0x785);
        bVar7 = true;
        bVar6 = true;
      }
    }
    bVar8 = false;
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar18.Value;
      uStackX_c = uVar16;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      bVar8 = true;
      local_f8 = FVar3;
    }
  }
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_e8,(UObjectBaseUtility *)this);
  pFVar13 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
  if (((ulonglong)((pFVar13->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1c & 1) != 0) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_a8,(UObject *)0x0,None);
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsUnreachable()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                        ,0x788,L"%s");
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (((uint)this->_padding_ >> 0x1e & 1) == 0) {
    if (this->bRegistered == 0) {
      if (param_1 == (UWorld *)0x0) goto LAB_14785d088;
      if ((((uint)param_1->_padding_ >> 0x1e & 1) != 0) || (param_1->CleanupWorldTag != 0)) {
        if ((byte)LogActorComponent._0_1_ < 2) goto LAB_14785d088;
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_48,(UObject *)0x0);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogActorComponent);
        local_98.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
        goto LAB_14785d07e;
      }
      if ((this->WorldPrivate != (UWorld *)0x0) && (this->RegistrationState != PreRegistered)) {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_78,(UObject *)0x0,None);
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("WorldPrivate == nullptr || (IsPreRegistered())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                            ,0x7a4,L"%s");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      this_00 = this->OwnerPrivate;
      if (this_00 != (AActor *)0x0) {
        this_01 = (UObjectBaseUtility *)this_00->_padding_;
        if (*(int *)&this_01[5].field_0xc < 0) {
          if ((byte)LogActorComponent._0_1_ < 5) goto LAB_14785d088;
          if (this_01 == (UObjectBaseUtility *)0x0) {
            ::FString::FString(&local_c0,L"None");
          }
          else {
            UObjectBaseUtility::GetPathName(this_01,&local_c0,(UObject *)0x0);
          }
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogActorComponent);
          local_98.Data.AllocatorInstance.Data = local_c0.Data.AllocatorInstance.Data;
          goto LAB_14785d07e;
        }
        pFVar13 = FUObjectArray::IndexToObject
                            (&GUObjectArray,*(int *)((longlong)&this_00->_padding_ + 4));
        if (((ulonglong)((pFVar13->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1c & 1) != 0) {
          UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_68,(UObject *)0x0,None);
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!MyOwner->IsUnreachable()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                              ,0x7b5,L"%s");
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (bVar10) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pUVar14 = AActor::GetWorld(this_00);
        if ((param_1 != pUVar14) && (4 < (byte)LogActorComponent._0_1_)) {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_58,(UObject *)0x0);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogActorComponent);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
      }
      if (this->bHasBeenCreated == '\0') {
        (**(code **)(this->_padding_ + 0x4a8))(this);
      }
      this->WorldPrivate = param_1;
      ExecuteRegisterEvents(this,param_2);
      bVar10 = UWorld::IsGameWorld(param_1);
      if (bVar10) {
        if (this_00 == (AActor *)0x0) {
          if ((this->bHasBeenInitialized == '\0') && (this->bWantsInitializeComponent != 0)) {
            (**(code **)(this->_padding_ + 1000))(this);
          }
          goto LAB_14785cf4d;
        }
        AActor::HandleRegisterComponentWithWorld(this_00,this);
      }
      else {
LAB_14785cf4d:
        RegisterAllComponentTickFunctions(this,true);
      }
      if ((this->CreationMethod == SimpleConstructionScript) ||
         (this->CreationMethod == UserConstructionScript)) {
        local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.ArrayNum = 0;
        local_d8.ArrayMax = 0;
        GetObjectsWithOuter((UObjectBase *)this,&local_d8,true,RF_NoFlags,Garbage);
        iVar9 = local_d8.ArrayNum;
        pFVar1 = local_d8.AllocatorInstance.Data + (longlong)local_d8.ArrayNum * 8;
        FVar17.Data = local_d8.AllocatorInstance.Data;
        while( true ) {
          if (local_d8.ArrayNum != iVar9) {
            `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_res8);
          }
          if (FVar17.Data == pFVar1) break;
          this_02 = *(UActorComponent **)FVar17.Data;
          if (this_02 != (UActorComponent *)0x0) {
            pUVar15 = GetPrivateStaticClass();
            iVar2 = (int)pUVar15->_padding_;
            if ((((iVar2 <= *(int *)(this_02->_padding_ + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar2 * 8)
                  == &pUVar15->_padding_)) && (this_02->bAutoRegister != '\0')) &&
               ((this_02->bRegistered == 0 && (this_02->OwnerPrivate == this_00)))) {
              RegisterComponentWithWorld(this_02,param_1,(FRegisterComponentContext *)0x0);
            }
          }
          FVar17.Data = FVar17.Data + 8;
        }
        if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.AllocatorInstance.Data);
        }
      }
      if ((this_00 != (AActor *)0x0) &&
         (pUVar4 = (this_00->InputComponent).field0_0x0.DebugPtr, pUVar4 != (UInputComponent *)0x0))
      {
        UInputDelegateBinding::BindInputDelegates((UClass *)this->_padding_,pUVar4,(UObject *)this);
      }
      goto LAB_14785d088;
    }
    if ((byte)LogActorComponent._0_1_ < 5) goto LAB_14785d088;
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_88,(UObject *)0x0);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogActorComponent);
    local_98.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
  }
  else {
    if ((byte)LogActorComponent._0_1_ < 5) goto LAB_14785d088;
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_98,(UObject *)0x0);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogActorComponent);
  }
LAB_14785d07e:
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
LAB_14785d088:
  if ((local_e0 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_e0 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_e0 & 4) != 0) {
    FThreadStats::AddMessage(local_e8,CycleScopeEnd);
  }
  local_e0 = 0;
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(local_f8,CycleScopeEnd);
  }
  return;
}

// RegisterReplicationFragments @ 14785d120

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
UActorComponent::RegisterReplicationFragments
          (UActorComponent *this,FFragmentRegistrationContext *param_1,
          EFragmentRegistrationFlags param_2)

{
  UClass *this_00;
  UObject *pUVar1;
  char cVar2;
  UObject *pUVar3;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  if ((this->CreationMethod == UserConstructionScript) &&
     (cVar2 = (**(code **)(this->_padding_ + 0x200))(), cVar2 == '\0')) {
    this_00 = (UClass *)this->_padding_;
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
    pUVar3 = UObject::GetArchetype((UObject *)this);
    if ((pUVar3 != pUVar1) &&
       (param_2 = param_2 | InitializeDefaultStateFromClassDefaults, 2 < (byte)LogIris._0_1_)) {
      local_res8 = (FName)this->_padding_;
      ::FName::ToString(&local_res8,&local_28);
      if (this->OwnerPrivate == (AActor *)0x0) {
        ::FString::FString(&local_38,L"None");
      }
      else {
        local_res8 = (FName)this->OwnerPrivate->_padding_;
        ::FName::ToString(&local_res8,&local_38);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  UE::Net::FReplicationFragmentUtil::CreateAndRegisterFragmentsForObject
            ((UObject *)this,param_1,param_2,
             (TArray<UE::Net::FReplicationFragment_*,TSizedDefaultAllocator<32>_> *)0x0);
  return;
}

// RemoveReplicatedSubObject @ 14785e570

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::RemoveReplicatedSubObject(UActorComponent *this,UObject *param_1)

{
  if (this->OwnerPrivate != (AActor *)0x0) {
    AActor::RemoveActorComponentReplicatedSubObject(this->OwnerPrivate,this,param_1);
    return;
  }
  return;
}

// RemoveTickPrerequisiteActor @ 14785e5e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::RemoveTickPrerequisiteActor(UActorComponent *this,AActor *param_1)

{
  if (param_1 != (AActor *)0x0) {
    FTickFunction::RemovePrerequisite
              ((FTickFunction *)&this->PrimaryComponentTick,(UObject *)param_1,
               (FTickFunction *)&param_1->PrimaryActorTick);
    return;
  }
  return;
}

// RemoveTickPrerequisiteComponent @ 14785e600

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
UActorComponent::RemoveTickPrerequisiteComponent(UActorComponent *this,UActorComponent *param_1)

{
  if (param_1 != (UActorComponent *)0x0) {
    FTickFunction::RemovePrerequisite
              ((FTickFunction *)&this->PrimaryComponentTick,(UObject *)param_1,
               (FTickFunction *)&param_1->PrimaryComponentTick);
    return;
  }
  return;
}

// RemoveUCSModifiedProperties @ 14785e620

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
UActorComponent::RemoveUCSModifiedProperties
          (UActorComponent *this,TArray<FProperty_*,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  TObjectPtr<UObject>_u_0 *pTVar2;
  code *pcVar3;
  TObjectPtr<UObject>_u_0 TVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_> *pTVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  undefined1 local_res20 [8];
  TObjectPtr<UObject>_u_0 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  FScriptContainerElement *local_a0;
  FScriptContainerElement *local_98;
  TObjectPtr<UObject>_u_0 local_90;
  void *pvStack_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined2 local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  AcquireSRWLockExclusive((PSRWLOCK)&AllUCSModifiedPropertiesLock);
  pTVar9 = TMapBase<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,0>_>
                   *)&AllUCSModifiedProperties,this);
  if (pTVar9 != (TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_> *)0x0) {
    uVar1 = param_1->ArrayNum;
    uVar10 = (ulonglong)(int)uVar1;
    pFVar14 = (param_1->AllocatorInstance).Data;
    pFVar11 = pFVar14 + uVar10 * 8;
    local_a0 = pFVar11;
    while( true ) {
      local_98 = pFVar14;
      if (param_1->ArrayNum != (int)uVar10) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FProperty_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar14 == pFVar11) break;
      local_48 = 0;
      uStack_40 = 0;
      local_50 = 0;
      local_c0.DebugPtr = (UObject *)0x0;
      local_b8 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      if (*(FField **)pFVar14 != (FField *)0x0) {
        local_80 = 0;
        local_78 = 0;
        local_70 = 0;
        uStack_68 = 0;
        local_90.DebugPtr = (UObject *)0x0;
        pvStack_88 = (void *)0x0;
        local_60 = 0;
        FMemberReference::SetFromField<FProperty>
                  ((FMemberReference *)&local_90.ObjectPtr,*(FField **)pFVar14,false,(UClass *)0x0);
        TVar4 = local_90;
        local_b8 = local_78;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_90.DebugPtr != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_90.DebugPtr);
        }
        local_c0.DebugPtr = TVar4.DebugPtr;
        local_b0 = local_70;
        uStack_a8 = uStack_68;
        if (pvStack_88 != (void *)0x0) {
          FMemory::Free(pvStack_88);
        }
      }
      pTVar2 = (TObjectPtr<UObject>_u_0 *)(pTVar9->AllocatorInstance).Data;
      if (((pTVar2 <= &local_c0) && (&local_c0 < pTVar2 + (longlong)pTVar9->ArrayMax * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar8 = pTVar9->ArrayNum;
      uVar13 = 0;
      bVar5 = false;
      if (0 < iVar8) {
        lVar15 = 0;
        do {
          uVar12 = 0;
          if ((int)uVar13 < iVar8) {
            uVar12 = ~uVar13 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar11 = (pTVar9->AllocatorInstance).Data + lVar15;
          uVar12 = uVar13;
          if ((*(UObject **)pFVar11 == local_c0.DebugPtr) &&
             (*(longlong *)(pFVar11 + 8) == local_b8)) {
            if (((uStack_a8._4_4_ == *(int *)(pFVar11 + 0x1c) &&
                 (int)uStack_a8 == *(int *)(pFVar11 + 0x18)) &&
                local_b0._4_4_ == *(int *)(pFVar11 + 0x14)) &&
                (int)local_b0 == *(int *)(pFVar11 + 0x10)) {
              uVar12 = uVar13 - 1;
              bVar5 = true;
              lVar15 = lVar15 + -0x20;
              uVar7 = 0;
              if ((int)uVar13 < pTVar9->ArrayNum) {
                uVar7 = ~uVar13 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar11 = (pTVar9->AllocatorInstance).Data;
              iVar8 = pTVar9->ArrayNum + ~uVar13;
              if (1 < iVar8) {
                iVar8 = 1;
              }
              if (iVar8 != 0) {
                memmove(pFVar11 + (longlong)(int)uVar13 * 0x20,
                        pFVar11 + (longlong)(pTVar9->ArrayNum - iVar8) * 0x20,(longlong)iVar8 << 5);
              }
              pTVar9->ArrayNum = pTVar9->ArrayNum + -1;
            }
          }
          iVar8 = pTVar9->ArrayNum;
          uVar13 = uVar12 + 1;
          lVar15 = lVar15 + 0x20;
        } while ((int)uVar13 < iVar8);
        pFVar11 = local_a0;
        if (bVar5) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,&pTVar9->AllocatorInstance,iVar8,&pTVar9->ArrayMax);
          pFVar11 = local_a0;
        }
      }
      uVar10 = (ulonglong)uVar1;
      pFVar14 = local_98 + 8;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014785e997. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&AllUCSModifiedPropertiesLock);
  return;
}

// RemoveUserDataOfClass @ 14785e9b0

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
UActorComponent::RemoveUserDataOfClass(UActorComponent *this,TSubclassOf<UAssetUserData> param_1)

{
  void *_Dst;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  UObject *pUVar9;
  UObject *pUVar10;
  
  pUVar10 = (UObject *)0x0;
  pUVar7 = pUVar10;
  pUVar9 = pUVar10;
  if (0 < (int)(this->PrimaryComponentTick)._padding_) {
    do {
      uVar8 = (uint)pUVar7;
      uVar4 = 0;
      if ((int)uVar8 < (int)(this->PrimaryComponentTick)._padding_) {
        uVar4 = ~uVar8 >> 0x1f;
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
      lVar1 = *(longlong *)(&pUVar9->field_0x0 + (this->PrimaryComponentTick)._padding_);
      if (lVar1 != 0) {
        pUVar7 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UObject *)0x0) goto LAB_14785ea68;
LAB_14785ea96:
          pUVar7 = pUVar10;
        }
        else {
          if (pUVar7 == (UObject *)0x0) goto LAB_14785ea96;
          UE::GC::MarkAsReachable(pUVar7);
LAB_14785ea68:
          pUVar6 = Z_Construct_UClass_UAssetUserData_NoRegister();
          if (pUVar6 == (UClass *)0x0) goto LAB_14785ea96;
          iVar5 = (int)pUVar6->_padding_;
          if ((*(int *)&pUVar7[1].field_0x10 < iVar5) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar5 * 8)
              != &pUVar6->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_14785ea96;
        }
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(lVar1 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)&pUVar7[1].field_0x10 * 8) ==
            &pUVar7[1].field_0x8)) {
          uVar4 = 0;
          if ((int)uVar8 < (int)(this->PrimaryComponentTick)._padding_) {
            uVar4 = ~uVar8 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          _Dst = (void *)((this->PrimaryComponentTick)._padding_ + (longlong)(int)uVar8 * 8);
          iVar5 = ((int)(this->PrimaryComponentTick)._padding_ - uVar8) + -1;
          if (iVar5 != 0) {
            memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar5 << 3);
          }
          iVar5 = (int)(this->PrimaryComponentTick)._padding_ + -1;
          *(int *)&(this->PrimaryComponentTick)._padding_ = iVar5;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(ForAnyElementType *)&(this->PrimaryComponentTick)._padding_,iVar5,
                     (int *)((longlong)&(this->PrimaryComponentTick)._padding_ + 4));
          return;
        }
      }
      pUVar7 = (UObject *)(ulonglong)(uVar8 + 1);
      pUVar9 = (UObject *)&pUVar9->field_0x8;
    } while ((int)(uVar8 + 1) < (int)(this->PrimaryComponentTick)._padding_);
  }
  return;
}

// Rename @ 14785eb90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UActorComponent::Rename(UActorComponent *this,wchar_t *param_1,UObject *param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  FString local_18;
  
  this->bRoutedPostRename = '\0';
  lVar1 = this->_padding_;
  lVar2 = this->_padding_;
  bVar4 = UObject::Rename((UObject *)this,param_1,param_2,param_3);
  if ((lVar1 == this->_padding_) && (lVar2 == this->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (((this->bRoutedPostRename == '\0') && ((param_3 & 2) == 0)) && (bVar3)) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0,None);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogActorComponent);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return bVar4;
}

// ReplicateSubobjects @ 14785fd40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UActorComponent::ReplicateSubobjects
          (UActorComponent *this,UActorChannel *param_1,FOutBunch *param_2,
          FReplicationFlags *param_3)

{
  UActorChannel::SetCurrentSubObjectOwner(this);
  return false;
}

// RequiresGameThreadEndOfFrameRecreate @ 1478600c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorComponent::RequiresGameThreadEndOfFrameRecreate(UActorComponent *this)

{
  return true;
}

// RequiresGameThreadEndOfFrameUpdates @ 1478600d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorComponent::RequiresGameThreadEndOfFrameUpdates(UActorComponent *this)

{
  return false;
}

// RequiresPreEndOfFrameSync @ 1478600e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorComponent::RequiresPreEndOfFrameSync(UActorComponent *this)

{
  return false;
}

// ReregisterComponent @ 1478600f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::ReregisterComponent(UActorComponent *this)

{
  FComponentReregisterContext local_28;
  
  if (this->bAllowReregistration != '\0') {
    if (this->bRegistered == 0) {
      if (4 < (byte)LogActorComponent._0_1_) {
        UObjectBaseUtility::GetPathName
                  ((UObjectBaseUtility *)this,(FString *)&local_28,(UObject *)0x0);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogActorComponent);
        if ((void *)local_28._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_28._padding_);
          return;
        }
      }
    }
    else {
      FComponentReregisterContext::FComponentReregisterContext
                (&local_28,this,
                 (TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator>
                  *)0x0);
      FComponentReregisterContext::~FComponentReregisterContext(&local_28);
    }
  }
  return;
}

// SendRenderDynamicData_Concurrent @ 147863020

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::SendRenderDynamicData_Concurrent(UActorComponent *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bRenderStateCreated != '\0') {
    this->bRenderDynamicDataDirty = '\0';
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("bRenderStateCreated",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                     ,0x8b0,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->bRenderDynamicDataDirty = '\0';
  return;
}

// SendRenderInstanceData_Concurrent @ 147863080

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::SendRenderInstanceData_Concurrent(UActorComponent *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bRenderStateCreated != '\0') {
    this->bRenderInstancesDirty = '\0';
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("bRenderStateCreated",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                     ,0x8ba,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->bRenderInstancesDirty = '\0';
  return;
}

// SendRenderTransform_Concurrent @ 1478630e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::SendRenderTransform_Concurrent(UActorComponent *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bRenderStateCreated != '\0') {
    this->bRenderTransformDirty = '\0';
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("bRenderStateCreated",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                     ,0x8a6,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->bRenderTransformDirty = '\0';
  return;
}

// Serialize @ 147864510

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::Serialize(UActorComponent *this,FArchive *param_1)

{
  bool bVar1;
  int iVar2;
  TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_> *pTVar3;
  uint uVar4;
  TPairInitializer<UActorComponent_*_&&,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>_&&>
  local_res10;
  undefined1 local_28 [8];
  undefined8 local_20;
  TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_> **local_18;
  undefined1 *local_10;
  
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFrameworkObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))
            (param_1,&FFortniteReleaseBranchCustomObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (((*(uint *)&param_1->field_0x34 >> 0x16 & 1) != 0 ||
      ((*(uint *)&param_1->field_0x34 >> 0xc & 1) == 0)))) {
    bVar1 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (!bVar1) {
      this->bHasBeenCreated = '\x01';
    }
  }
  iVar2 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FFortniteReleaseBranchCustomObjectVersion::GUID);
  if (3 < iVar2) {
    if ((param_1->field_0x28 & 1) == 0) {
      AcquireSRWLockShared((PSRWLOCK)&AllUCSModifiedPropertiesLock);
      pTVar3 = TMapBase<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,0>_>
               ::Find((TMapBase<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,0>_>
                       *)&AllUCSModifiedProperties,this);
      if (pTVar3 == (TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_> *)0x0) {
        local_28 = (undefined1  [8])pTVar3;
        local_20 = pTVar3;
        TArrayPrivateFriend::Serialize<FSimpleMemberReference,TSizedDefaultAllocator<32>_>
                  (param_1,(TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_> *)local_28);
        if (local_28 != (undefined1  [8])0x0) {
          FMemory::Free((void *)local_28);
        }
      }
      else {
        TArrayPrivateFriend::Serialize<FSimpleMemberReference,TSizedDefaultAllocator<32>_>
                  (param_1,pTVar3);
      }
      ReleaseSRWLockShared((PSRWLOCK)&AllUCSModifiedPropertiesLock);
    }
    else {
      local_28 = (undefined1  [8])0x0;
      local_20._0_4_ = 0;
      local_20._4_4_ = 0;
      TArrayPrivateFriend::Serialize<FSimpleMemberReference,TSizedDefaultAllocator<32>_>
                (param_1,(TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_> *)local_28);
      AcquireSRWLockExclusive((PSRWLOCK)&AllUCSModifiedPropertiesLock);
      if ((int)local_20 < 1) {
        local_res10.Key = (UActorComponent **)this;
        if (AllUCSModifiedProperties._8_4_ != AllUCSModifiedProperties._52_4_) {
          uVar4 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) *
                  -0x7a143595;
          uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
          TSet<TTuple<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::RemoveImpl<UActorComponent_const_*>
                    ((TSet<TTuple<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&AllUCSModifiedProperties,uVar4 >> 0x10 ^ uVar4,
                     (UActorComponent **)&local_res10);
        }
      }
      else {
        local_18 = &local_res10.Value;
        local_10 = local_28;
        local_res10.Value = (TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_> *)this;
        TSet<TTuple<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<UActorComponent_*_&&,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>_&&>_>
                  ((TSet<TTuple<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)&AllUCSModifiedProperties,&local_res10,(bool *)&local_18);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&AllUCSModifiedPropertiesLock);
      if (local_28 != (undefined1  [8])0x0) {
        FMemory::Free((void *)local_28);
        return;
      }
    }
  }
  return;
}

// Serialize @ 1478646e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::Serialize(UActorComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetActive @ 147869110

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::SetActive(UActorComponent *this,bool param_1,bool param_2)

{
  if (param_1) {
                    /* WARNING: Could not recover jumptable at 0x00014786911b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x2b8))(this,param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147869122. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c0))();
  return;
}

// SetActiveFlag @ 147869130

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::SetActiveFlag(UActorComponent *this,bool param_1)

{
  this->bIsActive = '\0';
  this->field_0x9a = this->field_0x9a | param_1 << 4;
  return;
}

// SetAsyncPhysicsTickEnabled @ 1478691f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::SetAsyncPhysicsTickEnabled(UActorComponent *this,bool param_1)

{
  FPhysScene_Chaos *this_00;
  
  if ((this->bRegistered != 0) &&
     (this_00 = this->WorldPrivate->PhysicsScene, this_00 != (FPhysScene_Chaos *)0x0)) {
    if (param_1) {
      FPhysScene_Chaos::RegisterAsyncPhysicsTickComponent(this_00,this);
    }
    else {
      FPhysScene_Chaos::UnregisterAsyncPhysicsTickComponent(this_00,this);
    }
  }
  this->bAsyncPhysicsTickEnabled = '\0';
  this->field_0xb8 = this->field_0xb8 | param_1 << 2;
  return;
}

// SetAutoActivate @ 147869480

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::SetAutoActivate(UActorComponent *this,bool param_1)

{
  FString local_18;
  
  if ((this->bRegistered == 0) ||
     ((this->OwnerPrivate != (AActor *)0x0 &&
      (this->OwnerPrivate->bRunningUserConstructionScript != '\0')))) {
    this->bAutoActivate = '\0';
    this->field_0x9a = this->field_0x9a | param_1 << 3;
  }
  else if (2 < (byte)LogActorComponent._0_1_) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogActorComponent);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// SetCanEverAffectNavigation @ 14786a000

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::SetCanEverAffectNavigation(UActorComponent *this,bool param_1)

{
  undefined1 uVar1;
  char cVar2;
  
  uVar1 = this->field_0x9a;
  if (this->bCanEverAffectNavigation != param_1) {
    this->field_0x9a = uVar1 & 0x7f | param_1 << 7;
    if (this->bRegistered != 0) {
      if (param_1) {
        cVar2 = (**(code **)(this->_padding_ + 0x4e0))();
        this->field_0x9a = (cVar2 << 6 ^ this->field_0x9a) & 0x40U ^ this->field_0x9a;
        FNavigationSystem::OnComponentRegistered(this);
        return;
      }
      this->field_0x9a = uVar1 & 0x3f;
      FNavigationSystem::OnComponentUnregistered(this);
      return;
    }
  }
  return;
}

// SetComponentTickEnabled @ 14786a160

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::SetComponentTickEnabled(UActorComponent *this,bool param_1)

{
  bool bVar1;
  
  if (((this->PrimaryComponentTick)._padding_ & 0x20000) != 0) {
    bVar1 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (!bVar1) {
      FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->PrimaryComponentTick,param_1);
    }
  }
  return;
}

// SetComponentTickEnabledAsync @ 14786a1b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UActorComponent::SetComponentTickEnabledAsync(UActorComponent *this,bool param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_UActorComponent::SetComponentTickEnabledAsync(bool)_::_5_::FStat_STAT_FSimpleDelegateGraphTask_SetComponentTickEnabledAsync>
  FVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FTaskBase *this_00;
  FTaskBase *this_01;
  FName local_res8;
  ETaskPriority local_res18 [8];
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  bool local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  if ((((this->PrimaryComponentTick)._padding_ & 0x20000) != 0) &&
     (bVar3 = UObjectBaseUtility::IsTemplate
                        ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject),
     !bVar3)) {
    this_01 = (FTaskBase *)0x0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_FSimpleDelegateGraphTask_SetComponentTickEnabledAsync ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UActorComponent::SetComponentTickEnabledAsync(bool)_::_5_::FStat_STAT_FSimpleDelegateGraphTask_SetComponentTickEnabledAsync>
           )0x0) {
        pFVar4 = ::FName::FName(&local_res8,
                                "STAT_FSimpleDelegateGraphTask_SetComponentTickEnabledAsync");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_FSimpleDelegateGraphTask_SetComponentTickEnabledAsync,*pFVar4,
                   L"FSimpleDelegateGraphTask.SetComponentTickEnabledAsync",
                   "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,true,
                   ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
    FVar5 = StatPtr_STAT_FSimpleDelegateGraphTask_SetComponentTickEnabledAsync;
    if (StatPtr_STAT_FSimpleDelegateGraphTask_SetComponentTickEnabledAsync ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UActorComponent::SetComponentTickEnabledAsync(bool)_::_5_::FStat_STAT_FSimpleDelegateGraphTask_SetComponentTickEnabledAsync>
         )0x0) {
      pFVar4 = ::FName::FName(&local_res8,
                              "STAT_FSimpleDelegateGraphTask_SetComponentTickEnabledAsync");
      FVar5 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UActorComponent::SetComponentTickEnabledAsync(bool)_::_5_::FStat_STAT_FSimpleDelegateGraphTask_SetComponentTickEnabledAsync>
               )FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)
                           &StatPtr_STAT_FSimpleDelegateGraphTask_SetComponentTickEnabledAsync,
                           *pFVar4,L"FSimpleDelegateGraphTask.SetComponentTickEnabledAsync",
                           "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,
                           true,ST_int64,true,false,MCR_Invalid);
    }
    local_88 = _vcall__1056__flat______;
    uStack_80 = 0;
    local_68 = (undefined1  [8])0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy___N__6B_;
      *(bool *)(puVar6 + 1) = param_1;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUActorComponent____A6AXXZUFDefaultDelegateUserPolicy___N__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_res8 = (FName)this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res8);
      puVar6[4] = local_88;
      puVar6[5] = CONCAT44(uStack_7c,uStack_80);
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x100,8);
    if (this_00 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)this_00,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      this_00->_padding_ = (longlong)&___7__TGraphTask_VFSimpleDelegateGraphTask____6B_;
      this_01 = this_00;
    }
    this_01[1]._padding_ = (longlong)FVar5;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this_01[1]._padding_,
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_68);
    *(undefined4 *)&this_01[1]._padding_ = 1;
    UE::Tasks::Private::TranslatePriority
              (GameThread,local_res18,(EExtendedTaskPriority *)&local_res8);
    UE::Tasks::Private::FTaskBase::Init
              (this_01,L"GraphTask",local_res18[0],
               (EExtendedTaskPriority)local_res8.ComparisonIndex.Value,None);
    if (this_01 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
    }
    else {
      LOCK();
      this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0x100);
      LOCK();
      paVar1 = &this_01->RefCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
        (**(code **)this_01->_padding_)(this_01,1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_88);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_78 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7c,uStack_80),
                 (FDestructionSentinel *)&local_88);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_68);
  }
  return;
}

// SetComponentTickInterval @ 14786a550

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::SetComponentTickInterval(UActorComponent *this,float param_1)

{
  *(float *)((longlong)&(this->PrimaryComponentTick)._padding_ + 4) = param_1;
  return;
}

// SetComponentTickIntervalAndCooldown @ 14786a560

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
UActorComponent::SetComponentTickIntervalAndCooldown(UActorComponent *this,float param_1)

{
  FTickFunction::UpdateTickIntervalAndCoolDown((FTickFunction *)&this->PrimaryComponentTick,param_1)
  ;
  return;
}

// SetIsReplicated @ 14786b6e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::SetIsReplicated(UActorComponent *this,bool param_1)

{
  char cVar1;
  FName local_res8;
  undefined1 local_res10 [8];
  FString local_18;
  
  if (this->bReplicates != param_1) {
    if (((uint)this->_padding_ >> 9 & 1) != 0) {
      `UActorComponent::SetIsReplicated'::__l5::<lambda_1>::operator()(local_res10);
    }
    cVar1 = (**(code **)(this->_padding_ + 0x2f8))(this);
    if (cVar1 == '\0') {
      if (1 < (byte)LogActorComponent._0_1_) {
        local_res8 = *(FName *)(this->_padding_ + 0x18);
        ::FName::ToString(&local_res8,&local_18);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogActorComponent);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      this->bReplicates = '\0';
      this->field_0x98 = this->field_0x98 | param_1 << 7;
      if (this->OwnerPrivate != (AActor *)0x0) {
        AActor::UpdateReplicatedComponent(this->OwnerPrivate,this);
        return;
      }
    }
  }
  return;
}

// SetIsReplicatedByDefault @ 14786b7c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::SetIsReplicatedByDefault(UActorComponent *this,bool param_1)

{
  UActorComponent *local_res8;
  
  if (((uint)this->_padding_ >> 9 & 1) != 0) {
    this->bReplicates = '\0';
    this->field_0x98 = this->field_0x98 | param_1 << 7;
    return;
  }
  local_res8 = this;
  `UActorComponent::SetIsReplicatedByDefault'::__l7::<lambda_1>::operator()(&local_res8);
  SetIsReplicated(this,param_1);
  return;
}

// SetNetAddressable @ 14786c970

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::SetNetAddressable(UActorComponent *this)

{
  this->bNetAddressable = '\x01';
  return;
}

// SetTickGroup @ 14786e0e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::SetTickGroup(UActorComponent *this,ETickingGroup param_1)

{
  *(char *)&(this->PrimaryComponentTick)._padding_ = (char)param_1;
  return;
}

// SetTickableWhenPaused @ 14786e0f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::SetTickableWhenPaused(UActorComponent *this,bool param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)((longlong)&(this->PrimaryComponentTick)._padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfe;
  pbVar1 = (byte *)((longlong)&(this->PrimaryComponentTick)._padding_ + 2);
  *pbVar1 = *pbVar1 | param_1;
  return;
}

// SetupActorComponentTickFunction @ 14786ee50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UActorComponent::SetupActorComponentTickFunction(UActorComponent *this,FTickFunction *param_1)

{
  AActor *this_00;
  bool bVar1;
  ULevel *pUVar2;
  UWorld *pUVar3;
  
  if ((param_1->bCanEverTick != '\0') &&
     (bVar1 = UObjectBaseUtility::IsTemplate
                        ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject),
     !bVar1)) {
    this_00 = this->OwnerPrivate;
    if (this_00 == (AActor *)0x0) {
      pUVar3 = GetWorld(this);
      pUVar2 = (pUVar3->PersistentLevel).field0_0x0.DebugPtr;
    }
    else {
      bVar1 = UObjectBaseUtility::IsTemplate
                        ((UObjectBaseUtility *)this_00,RF_ArchetypeObject|RF_ClassDefaultObject);
      if (bVar1) {
        return false;
      }
      pUVar2 = AActor::GetLevel(this_00);
    }
    if ((param_1->bStartWithTickEnabled == '\0') && (param_1->TickState == Disabled)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    FTickFunction::SetTickFunctionEnable(param_1,bVar1);
    FTickFunction::RegisterTickFunction(param_1,pUVar2);
    return true;
  }
  return false;
}

// ShouldActivate @ 14786ef00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorComponent::ShouldActivate(UActorComponent *this)

{
  return (bool)((byte)~this->field_0x9a >> 4 & 1);
}

// ShouldAsyncCreatePhysicsState @ 14786ef20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UActorComponent::ShouldAsyncCreatePhysicsState(UActorComponent *this,UWorld *param_1)

{
  EComponentRegistrationState EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  
  if (param_1 == (UWorld *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("WorldContext",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x5c1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  bVar3 = FPhysScene_Chaos::SupportsAsyncPhysicsStateCreation();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FPhysScene::SupportsAsyncPhysicsStateCreation()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x5c2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  EVar1 = this->RegistrationState;
  this->RegistrationState = PreRegistering;
  if ((this->bPhysicsStateCreated == '\0') && (param_1->PhysicsScene != (FPhysScene_Chaos *)0x0)) {
    cVar5 = (**(code **)this->_padding_)(&this->_padding_);
    if (cVar5 != '\0') {
      cVar5 = (**(code **)(this->_padding_ + 0x3c0))(this);
      if (cVar5 != '\0') {
        bVar3 = true;
        goto LAB_14786efd6;
      }
    }
  }
  bVar3 = false;
LAB_14786efd6:
  this->RegistrationState = EVar1;
  return bVar3;
}

// ShouldAsyncDestroyPhysicsState @ 14786f000

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorComponent::ShouldAsyncDestroyPhysicsState(UActorComponent *this)

{
  char cVar1;
  
  if (((this->bPhysicsStateCreated != '\0') && (this->WorldPrivate != (UWorld *)0x0)) &&
     (this->WorldPrivate->PhysicsScene != (FPhysScene_Chaos *)0x0)) {
    cVar1 = (**(code **)(this->_padding_ + 8))(&this->_padding_);
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

// ShouldIncrementalPreRegister @ 14786f460

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorComponent::ShouldIncrementalPreRegister(UActorComponent *this,UWorld *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014786f463. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x338))();
  return (bool)uVar1;
}

// ShouldIncrementalPreUnregister @ 14786f470

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorComponent::ShouldIncrementalPreUnregister(UActorComponent *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014786f473. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x340))();
  return (bool)uVar1;
}

// StaticRegisterNativesUActorComponent @ 147875890

void __cdecl UActorComponent::StaticRegisterNativesUActorComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x17;
  local_18.DataPtr = Z_Construct_UClass_UActorComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TearOffReplicatedSubObjectOnRemotePeers @ 147878550

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
UActorComponent::TearOffReplicatedSubObjectOnRemotePeers(UActorComponent *this,UObject *param_1)

{
  if (this->OwnerPrivate != (AActor *)0x0) {
    AActor::TearOffReplicatedSubObjectOnRemotePeers(this->OwnerPrivate,this,param_1);
    return;
  }
  return;
}

// TickComponent @ 147878930

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
UActorComponent::TickComponent
          (UActorComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  UFunction *pUVar4;
  UWorld *this_00;
  FLatentActionManager *this_01;
  float local_res8 [2];
  
  if ((this->bRegistered == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bRegistered",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x730,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar1 = *(uint *)(this->_padding_ + 0xd4);
  if (((uVar1 >> 0x12 & 1) != 0) || (-1 < (char)uVar1)) {
    local_res8[0] = param_1;
    pUVar4 = UObject::FindFunctionChecked((UObject *)this,NAME_UActorComponent_ReceiveTick);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar4,local_res8);
    if ((GTickComponentLatentActionsWithTheComponent != 0) &&
       (this_00 = GetWorld(this), this_00 != (UWorld *)0x0)) {
      this_01 = UWorld::GetLatentActionManager(this_00);
      FLatentActionManager::ProcessLatentActions(this_01,(UObject *)this,this_00->DeltaTimeSeconds);
    }
  }
  return;
}

// ToggleActive @ 14787a0b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::ToggleActive(UActorComponent *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014787a0c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c8))(this,~this->bIsActive & 1,0);
  return;
}

// UninitializeComponent @ 14787bf80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::UninitializeComponent(UActorComponent *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bHasBeenInitialized != '\0') {
    this->bHasBeenInitialized = '\0';
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("bHasBeenInitialized",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                     ,0x63f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->bHasBeenInitialized = '\0';
  return;
}

// UnregisterComponent @ 14787c040

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorComponent::UnregisterComponent(UActorComponent *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_UnregisterComponent> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_88;
  byte local_80;
  FName local_78;
  FStatMessage local_68;
  FString local_58;
  FString local_48;
  
  FVar8 = StatPtr_STAT_UnregisterComponent;
  if (StatPtr_STAT_UnregisterComponent == (FThreadSafeStaticStat<FStat_STAT_UnregisterComponent>)0x0
     ) {
    pFVar7 = ::FName::FName(&local_res20,"STAT_UnregisterComponent");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_UnregisterComponent>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UnregisterComponent,*pFVar7,
                       L"UnregisterComponent","STATGROUP_Component","STATCAT_Advanced",L"Component",
                       true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar10.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                   ,0x822);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar10.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_14787c198;
    }
  }
  bVar4 = false;
  FVar11 = local_78;
LAB_14787c198:
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_88,(UObjectBaseUtility *)this);
  if (this->bRegistered == 0) {
    if (4 < (byte)LogActorComponent._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_58,(UObject *)0x0);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogActorComponent);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    if (this->WorldPrivate == (UWorld *)0x0) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_48,(UObject *)0x0,None);
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("WorldPrivate != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x82d,L"%s");
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    RegisterAllComponentTickFunctions(this,false);
    ExecuteUnregisterEvents(this);
    this->WorldPrivate = (UWorld *)0x0;
  }
  if ((local_80 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_80 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_80 & 4) != 0) {
    FThreadStats::AddMessage(local_88,CycleScopeEnd);
  }
  local_80 = 0;
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_68.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_68.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_68.StatData.Pad[4] = '\0';
      local_68.StatData.Pad[5] = '\0';
      local_68.StatData.Pad[6] = '\0';
      local_68.StatData.Pad[7] = '\0';
      local_68.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_68.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_68.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_68.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_68);
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

// ValidateGeneratedRepEnums @ 14787ea00

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
UActorComponent::ValidateGeneratedRepEnums
          (UActorComponent *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  int *piVar5;
  FName FVar6;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar5 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&Name_bReplicates,L"bReplicates");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar5 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&Name_bIsActive,L"bIsActive");
    _Init_thread_footer(&::_TSS1);
  }
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  if ((param_1->ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar1 = *(void **)(param_1->AllocatorInstance).Data;
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  FVar4 = FVar6;
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  if (Name_bReplicates == FVar4) {
    if ((param_1->ArrayNum < 2) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x10);
    bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
    if (bVar3) {
      FVar6 = *(FName *)((longlong)pvVar1 + 0x20);
    }
    if (Name_bIsActive == FVar6) {
      return;
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsValid",
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\ActorComponent.gen.cpp"
                     ,0x836,
                     L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UActorComponent"
                    );
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// execActivate @ 147880e80

void __cdecl UActorComponent::execActivate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,local_res8[0] != 0);
  return;
}

// execAddTickPrerequisiteActor @ 147881270

void __cdecl
UActorComponent::execAddTickPrerequisiteActor(UObject *param_1,FFrame *param_2,void *param_3)

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
  (**(code **)(*(longlong *)param_1 + 0x4b8))(param_1,local_res8);
  return;
}

// execAddTickPrerequisiteComponent @ 147881300

void __cdecl
UActorComponent::execAddTickPrerequisiteComponent(UObject *param_1,FFrame *param_2,void *param_3)

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
  (**(code **)(*(longlong *)param_1 + 0x4c0))(param_1,local_res8);
  return;
}

// execComponentHasTag @ 147881ce0

void __cdecl UActorComponent::execComponentHasTag(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  FProperty *pFVar2;
  longlong *plVar3;
  longlong local_res10;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != 0) {
    plVar3 = *(longlong **)&param_1[2].field_0x18;
    plVar1 = plVar3 + *(int *)&param_1[2].field_0x20;
    for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
      if (*plVar3 == local_res10) {
        *(undefined1 *)param_3 = 1;
        return;
      }
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execDeactivate @ 147881db0

void __cdecl UActorComponent::execDeactivate(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147881dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2c0))();
  return;
}

// execGetComponentTickInterval @ 147882100

void __cdecl
UActorComponent::execGetComponentTickInterval(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[1].field_0x1c;
  return;
}

// execGetOwner @ 147882910

void __cdecl UActorComponent::execGetOwner(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[4].field_0x8;
  return;
}

// execIsActive @ 1478832a0

void __cdecl UActorComponent::execIsActive(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = (byte)param_1[3].field_0x22 >> 4 & 1;
  return;
}

// execIsBeingDestroyed @ 1478832d0

void __cdecl UActorComponent::execIsBeingDestroyed(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = (byte)param_1[3].field_0x23 >> 6 & 1;
  return;
}

// execIsComponentTickEnabled @ 147883300

void __cdecl
UActorComponent::execIsComponentTickEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x430))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execK2_DestroyComponent @ 147883770

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UActorComponent::execK2_DestroyComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObjectBaseUtility *this;
  UObjectBaseUtility *local_res8;
  FString local_28;
  FString local_18;
  
  local_res8 = (UObjectBaseUtility *)0x0;
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
  if (((((param_1[3].field_0x22 & 4) == 0) && (local_res8 != (UObjectBaseUtility *)param_1)) &&
      (this = *(UObjectBaseUtility **)&param_1[4].field_0x8, this != (UObjectBaseUtility *)0x0)) &&
     (this != local_res8)) {
    if (1 < (byte)LogActorComponent._0_1_) {
      UObjectBaseUtility::GetFullName(this,&local_18,(UObject *)0x0,None);
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogActorComponent);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x4a0))(param_1,0);
  }
  return;
}

// execOnRep_IsActive @ 147883ab0

void __cdecl UActorComponent::execOnRep_IsActive(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147883ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2b0))();
  return;
}

// execRemoveTickPrerequisiteActor @ 1478840b0

void __cdecl
UActorComponent::execRemoveTickPrerequisiteActor(UObject *param_1,FFrame *param_2,void *param_3)

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
  (**(code **)(*(longlong *)param_1 + 0x4c8))(param_1,local_res8);
  return;
}

// execRemoveTickPrerequisiteComponent @ 147884140

void __cdecl
UActorComponent::execRemoveTickPrerequisiteComponent(UObject *param_1,FFrame *param_2,void *param_3)

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
  (**(code **)(*(longlong *)param_1 + 0x4d0))(param_1,local_res8);
  return;
}

// execSetActive @ 1478841d0

void __cdecl UActorComponent::execSetActive(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res8 [2];
  int local_res10 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar2 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2c8))(param_1,bVar2,local_res10[0] != 0);
  return;
}

// execSetAutoActivate @ 147884940

void __cdecl UActorComponent::execSetAutoActivate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,local_res8[0] != 0);
  return;
}

// execSetComponentTickEnabled @ 1478851a0

void __cdecl
UActorComponent::execSetComponentTickEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x420))(param_1,local_res8[0] != 0);
  return;
}

// execSetComponentTickInterval @ 147885240

void __cdecl
UActorComponent::execSetComponentTickInterval(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
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
  *(undefined4 *)&param_1[1].field_0x1c = local_res8[0];
  return;
}

// execSetComponentTickIntervalAndCooldown @ 1478852d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UActorComponent::execSetComponentTickIntervalAndCooldown
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
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
  FTickFunction::UpdateTickIntervalAndCoolDown
            ((FTickFunction *)&param_1[1].field_0x10,local_res8[0]);
  return;
}

// execSetIsReplicated @ 147885d50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UActorComponent::execSetIsReplicated(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetIsReplicated((UActorComponent *)param_1,local_res10[0] != 0);
  return;
}

// execSetTickGroup @ 1478872c0

void __cdecl UActorComponent::execSetTickGroup(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[1].field_0x18 = local_res8[0];
  return;
}

// execSetTickableWhenPaused @ 147887340

void __cdecl
UActorComponent::execSetTickableWhenPaused(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[1].field_0x1a = param_1[1].field_0x1a & 0xfe;
  param_1[1].field_0x1a = param_1[1].field_0x1a | local_res8[0] != 0;
  return;
}

// execToggleActive @ 147888080

void __cdecl UActorComponent::execToggleActive(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147888098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2d0))();
  return;
}

// operator() @ 1505108a0

bool __thiscall
`UActorComponent::OnAsyncDestroyPhysicsStateBegin_GameThread'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2595971593406515463>);
  if (bVar2) {
    UObjectBaseUtility::GetFullName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0,None);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2595971593406515463>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15051090d;
    }
  }
  bVar2 = false;
LAB_15051090d:
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

// operator() @ 1505109f0

bool __thiscall `UActorComponent::SetIsReplicated'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2595971593406516083>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2595971593406516083>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150510a30

bool __thiscall
`UActorComponent::SetIsReplicatedByDefault'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2595971593406516501>);
  if (bVar2) {
    if (*(UObjectBaseUtility **)(*(longlong *)this + 0x10) == (UObjectBaseUtility *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName
                (*(UObjectBaseUtility **)(*(longlong *)this + 0x10),&local_18,(UObject *)0x0);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2595971593406516501>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150510ab6;
    }
  }
  bVar2 = false;
LAB_150510ab6:
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

// operator() @ 150512350

bool __thiscall `UActorComponent::DestroyPhysicsState'::__l25::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2595971593406515586>);
  if (bVar2) {
    UObjectBaseUtility::GetFullName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0,None);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2595971593406515586>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505123bd;
    }
  }
  bVar2 = false;
LAB_1505123bd:
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

