// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_WorldUtils
// Functions: 26

// StaticClass @ 14a0249c0

UClass * __cdecl AWN_OcclusionVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_OcclusionVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_OcclusionVolume",
               &Z_Registration_Info_UClass_AWN_OcclusionVolume.InnerSingleton,
               StaticRegisterNativesAWN_OcclusionVolume,0x388,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_OcclusionVolume>,
               InternalVTableHelperCtorCaller<AWN_OcclusionVolume>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_OcclusionVolume.InnerSingleton;
}

// AWN_OcclusionVolume @ 14a02cca0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWN_OcclusionVolume * __thiscall
AWN_OcclusionVolume::AWN_OcclusionVolume(AWN_OcclusionVolume *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AWN_OcclusionVolume__6B_;
  *(undefined8 *)&(this->AlwaysVisibleActorClasses).Elements = 0;
  *(undefined8 *)&(this->AlwaysVisibleActorClasses).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AlwaysVisibleActorClasses).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AlwaysVisibleActorClasses).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AlwaysVisibleActorClasses).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AlwaysVisibleActorClasses).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AlwaysVisibleActorClasses).Elements.field_0x34 = 0;
  (this->AlwaysVisibleActorClasses).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AlwaysVisibleActorClasses).HashSize = 0;
  (this->WorldUtils_Subsystem).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->WorldUtils_Subsystem).WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&(this->AlwaysVisibleActorNames).Elements = 0;
  *(undefined8 *)&(this->AlwaysVisibleActorNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AlwaysVisibleActorNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AlwaysVisibleActorNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AlwaysVisibleActorNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AlwaysVisibleActorNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AlwaysVisibleActorNames).Elements.field_0x34 = 0;
  (this->AlwaysVisibleActorNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AlwaysVisibleActorNames).HashSize = 0;
  this->bAlreadyBound = false;
  (this->PostRegisterAllActorComponentsHandler).ID = 0;
  (this->ActorDestroyedHandler).ID = 0;
  (this->VolumeComponent).field0_0x0.DebugPtr = (UWN_OcclusionVolumeComponent *)0x0;
  return this;
}

// AWN_OcclusionVolume @ 14a02cd90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWN_OcclusionVolume * __thiscall
AWN_OcclusionVolume::AWN_OcclusionVolume(AWN_OcclusionVolume *this,FObjectInitializer *param_1)

{
  FName FVar1;
  code *pcVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UWN_OcclusionVolumeComponent *pUVar5;
  FName local_res8;
  TVector<double>_u_0 local_28;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AWN_OcclusionVolume__6B_;
  *(undefined8 *)&(this->AlwaysVisibleActorClasses).Elements = 0;
  *(undefined8 *)&(this->AlwaysVisibleActorClasses).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AlwaysVisibleActorClasses).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AlwaysVisibleActorClasses).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AlwaysVisibleActorClasses).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AlwaysVisibleActorClasses).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AlwaysVisibleActorClasses).Elements.field_0x34 = 0;
  (this->AlwaysVisibleActorClasses).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AlwaysVisibleActorClasses).HashSize = 0;
  (this->WorldUtils_Subsystem).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FWeakObjectPtr::operator=(&(this->WorldUtils_Subsystem).WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&(this->AlwaysVisibleActorNames).Elements = 0;
  *(undefined8 *)&(this->AlwaysVisibleActorNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AlwaysVisibleActorNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AlwaysVisibleActorNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AlwaysVisibleActorNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AlwaysVisibleActorNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AlwaysVisibleActorNames).Elements.field_0x34 = 0;
  (this->AlwaysVisibleActorNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AlwaysVisibleActorNames).HashSize = 0;
  this->bAlreadyBound = false;
  (this->PostRegisterAllActorComponentsHandler).ID = 0;
  (this->ActorDestroyedHandler).ID = 0;
  (this->VolumeComponent).field0_0x0.DebugPtr = (UWN_OcclusionVolumeComponent *)0x0;
  pFVar3 = ::FName::FName(&local_res8,L"VolumeComponent");
  FVar1 = *pFVar3;
  pUVar4 = UWN_OcclusionVolumeComponent::StaticClass();
  pUVar5 = (UWN_OcclusionVolumeComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar5 == (UWN_OcclusionVolumeComponent *)0x0)) {
    (this->VolumeComponent).field0_0x0.DebugPtr = pUVar5;
    if (pUVar5 == (UWN_OcclusionVolumeComponent *)0x0) {
      return this;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
    (this->VolumeComponent).field0_0x0.DebugPtr = pUVar5;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pUVar5 = (this->VolumeComponent).field0_0x0.DebugPtr;
  this->_padding_ = (longlong)pUVar5;
  pcVar2 = *(code **)(*(longlong *)pUVar5 + 0x788);
  pFVar3 = ::FName::FName(&local_res8,"NoCollision");
  (*pcVar2)(pUVar5,*pFVar3,1);
  pUVar5 = (this->VolumeComponent).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar5 + 0x5f8))(pUVar5,0);
  local_28._s_0.Z = __real_40c3880000000000;
  local_28._s_0.X = ___xmm_40c388000000000040c3880000000000;
  local_28._s_0.Y = _UNK_15201e8f8;
  ((this->VolumeComponent).field0_0x0.DebugPtr)->field_0x618 = 0;
  ((this->VolumeComponent).field0_0x0.DebugPtr)->field_0x549 = 0;
  UWN_VolumeComponent::SetVolumeExtent
            ((UWN_VolumeComponent *)(this->VolumeComponent).field0_0x0.DebugPtr,
             (TVector<double> *)&local_28._s_0);
  return this;
}

// ~AWN_OcclusionVolume @ 14a02e940

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_OcclusionVolume::~AWN_OcclusionVolume(AWN_OcclusionVolume *this)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&___7AWN_OcclusionVolume__6B_;
  (this->AlwaysVisibleActorNames).HashSize = 0;
  FVar1 = (this->AlwaysVisibleActorNames).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AlwaysVisibleActorNames).Elements);
  (this->AlwaysVisibleActorClasses).HashSize = 0;
  FVar1 = (this->AlwaysVisibleActorClasses).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TSubclassOf<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSubclassOf<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AlwaysVisibleActorClasses).Elements);
  AActor::~AActor((AActor *)this);
  return;
}

// AddAlwaysVisibleActorClass @ 14a0314a0

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
AWN_OcclusionVolume::AddAlwaysVisibleActorClass
          (AWN_OcclusionVolume *this,TSubclassOf<AActor> param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  AActor *this_00;
  UObject *pUVar6;
  UWN_WorldUtils_Subsystem *this_01;
  TSubclassOf<AActor> local_res10;
  UObject *local_res18 [2];
  FActorRange local_88;
  TActorIteratorBase<FActorIterator> local_78;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar5 = Z_Construct_UClass_AActor_NoRegister();
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
      if ((bVar4) && (*(longlong *)param_1.Class.field0_0x0 != 0)) {
        TSet<TSubclassOf<AActor>,DefaultKeyFuncs<TSubclassOf<AActor>,0>,FDefaultSetAllocator>::
        Emplace<TSubclassOf<AActor>_const_&>
                  (&this->AlwaysVisibleActorClasses,&local_res10,(bool *)param_1.Class.field0_0x0);
        local_88.World = AActor::GetWorld((AActor *)this);
        if ((local_88.World != (UWorld *)0x0) &&
           (*(int *)&(this->AlwaysVisibleActorClasses).Elements.field_0x8 !=
            *(int *)&(this->AlwaysVisibleActorClasses).Elements.field_0x34)) {
          local_88.Flags = OnlyActiveLevels|SkipPendingKill;
          ::begin((FActorIterator *)&local_78,&local_88);
          while( true ) {
            if (local_78.State.bIsSet == false) {
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
            if (local_78.State.TypedValue.ReachedEnd != false) break;
            if (local_78.State.bIsSet == false) {
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
            this_00 = FActorIteratorState::GetActorChecked(&local_78.State.TypedValue);
            if ((this_00 != (AActor *)0x0) && ((this_00->_padding_ & 0x10) == 0)) {
              local_res18[0] = *(UObject **)param_1.Class.field0_0x0;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (local_res18[0] != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(local_res18[0]);
              }
              bVar4 = UObjectBaseUtility::IsA<TSubclassOf<AActor>_>
                                ((UObjectBaseUtility *)this_00,(TSubclassOf<AActor>)local_res18);
              if (bVar4) {
                bVar4 = FWeakObjectPtr::IsValid(&(this->WorldUtils_Subsystem).WeakPtr);
                if (bVar4) {
                  pUVar6 = FWeakObjectPtr::Get(&(this->WorldUtils_Subsystem).WeakPtr);
                  if (*(AWN_OcclusionVolume **)&pUVar6[3].field_0x10 == this) {
                    this_01 = (UWN_WorldUtils_Subsystem *)
                              FWeakObjectPtr::Get(&(this->WorldUtils_Subsystem).WeakPtr);
                    UWN_WorldUtils_Subsystem::ShowActorVolumePrimitives(this_01,this_00);
                  }
                }
              }
            }
            TActorIteratorBase<FActorIterator>::operator++(&local_78);
          }
          if (local_78.State.bIsSet != false) {
            UWorld::RemoveOnActorSpawnedHandler
                      (local_78.State.TypedValue.CurrentWorld,
                       local_78.State.TypedValue.ActorSpawnedDelegateHandle);
            if (local_78.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
            }
            if (local_78.State.TypedValue.ActorArray.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.State.TypedValue.ActorArray.AllocatorInstance.Data);
            }
          }
        }
      }
    }
  }
  return;
}

// BeginDestroy @ 14a031ae0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_OcclusionVolume::BeginDestroy(AWN_OcclusionVolume *this)

{
  UWorld *this_00;
  
  UnregisterWorldUtilsSubsystem(this);
  this_00 = AActor::GetWorld((AActor *)this);
  if (this_00 != (UWorld *)0x0) {
    if ((this->PostRegisterAllActorComponentsHandler).ID != 0) {
      UWorld::RemoveOnPostRegisterAllActorComponentsHandler
                (this_00,(FDelegateHandle)(this->PostRegisterAllActorComponentsHandler).ID);
    }
    if ((this->ActorDestroyedHandler).ID != 0) {
      UWorld::RemoveOnActorDestroyedHandler
                (this_00,(FDelegateHandle)(this->ActorDestroyedHandler).ID);
    }
    this->bAlreadyBound = false;
  }
  AActor::BeginDestroy((AActor *)this);
  return;
}

// BeginPlay @ 14a031b80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_OcclusionVolume::BeginPlay(AWN_OcclusionVolume *this)

{
  UWorld *this_00;
  UWN_WorldUtils_Subsystem *local_res8 [4];
  
  AActor::BeginPlay((AActor *)this);
  if ((this->_padding_ & 0x50) == 0) {
    this_00 = AActor::GetWorld((AActor *)this);
    if (this_00 != (UWorld *)0x0) {
      local_res8[0] = UWorld::GetSubsystem<UWN_WorldUtils_Subsystem>(this_00);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res8[0] != (UWN_WorldUtils_Subsystem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8[0]);
      }
      FWeakObjectPtr::operator=(&(this->WorldUtils_Subsystem).WeakPtr,(FObjectPtr)local_res8);
    }
  }
  return;
}

// BindToActorEvents @ 14a031d30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_OcclusionVolume::BindToActorEvents(AWN_OcclusionVolume *this)

{
  UWorld *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  FDelegateHandle FVar3;
  AWN_OcclusionVolume *local_res8 [2];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  if (this->bAlreadyBound == false) {
    this->bAlreadyBound = true;
    this_00 = AActor::GetWorld((AActor *)this);
    if (this_00 != (UWorld *)0x0) {
      local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_60.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_68,(FWriteAccessScope *)&local_50);
      local_38 = &local_60;
      puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar2 = FDelegateHandle::GenerateNewID();
        puVar1[2] = uVar2;
        *puVar1 = &
                  ___7__TBaseUObjectMethodDelegateInstance__00__CBVAWN_OcclusionVolume____A6AXPEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar1[3] = 0;
        local_res8[0] = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)local_res8);
        puVar1[4] = UpdateNewActorVisibility;
      }
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
      FVar3 = UWorld::AddOnPostRegisterAllActorComponentsHandler
                        (this_00,(TDelegate<void___cdecl(AActor_*),FDefaultDelegateUserPolicy> *)
                                 (local_res8 + 1));
                    /* WARNING: Load size is inaccurate */
      (this->PostRegisterAllActorComponentsHandler).ID = *FVar3.ID;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_68,(FWriteAccessScope *)&local_50);
      if ((local_60.DelegateSize != 0) &&
         (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_60,0,0,0x10);
        local_60.DelegateSize = 0;
      }
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
      if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_60.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
      local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_60.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_68,(FWriteAccessScope *)&local_50);
      local_38 = &local_60;
      puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar2 = FDelegateHandle::GenerateNewID();
        puVar1[2] = uVar2;
        *puVar1 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VAWN_OcclusionVolume____A6AXPEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar1[3] = 0;
        local_res8[0] = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)local_res8);
        puVar1[4] = RemoveVisibleActor;
      }
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
      FVar3 = UWorld::AddOnActorDestroyedHandler
                        (this_00,(TDelegate<void___cdecl(AActor_*),FDefaultDelegateUserPolicy> *)
                                 (local_res8 + 1));
                    /* WARNING: Load size is inaccurate */
      (this->ActorDestroyedHandler).ID = *FVar3.ID;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_68,(FWriteAccessScope *)&local_50);
      if ((local_60.DelegateSize != 0) &&
         (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_60,0,0,0x10);
        local_60.DelegateSize = 0;
      }
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
      if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_60.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
    }
  }
  return;
}

// Destroyed @ 14a032f30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_OcclusionVolume::Destroyed(AWN_OcclusionVolume *this)

{
  UWorld *this_00;
  
  UnregisterWorldUtilsSubsystem(this);
  this_00 = AActor::GetWorld((AActor *)this);
  if (this_00 != (UWorld *)0x0) {
    if ((this->PostRegisterAllActorComponentsHandler).ID != 0) {
      UWorld::RemoveOnPostRegisterAllActorComponentsHandler
                (this_00,(FDelegateHandle)(this->PostRegisterAllActorComponentsHandler).ID);
    }
    if ((this->ActorDestroyedHandler).ID != 0) {
      UWorld::RemoveOnActorDestroyedHandler
                (this_00,(FDelegateHandle)(this->ActorDestroyedHandler).ID);
    }
    this->bAlreadyBound = false;
  }
  AActor::Destroyed((AActor *)this);
  return;
}

// EndPlay @ 14a033140

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_OcclusionVolume::EndPlay(AWN_OcclusionVolume *this,Type param_1)

{
  UWorld *this_00;
  
  UnregisterWorldUtilsSubsystem(this);
  this_00 = AActor::GetWorld((AActor *)this);
  if (this_00 != (UWorld *)0x0) {
    if ((this->PostRegisterAllActorComponentsHandler).ID != 0) {
      UWorld::RemoveOnPostRegisterAllActorComponentsHandler
                (this_00,(FDelegateHandle)(this->PostRegisterAllActorComponentsHandler).ID);
    }
    if ((this->ActorDestroyedHandler).ID != 0) {
      UWorld::RemoveOnActorDestroyedHandler
                (this_00,(FDelegateHandle)(this->ActorDestroyedHandler).ID);
    }
    this->bAlreadyBound = false;
  }
  AActor::EndPlay((AActor *)this,param_1);
  return;
}

// GetActorBounds @ 14a033880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
AWN_OcclusionVolume::GetActorBounds
          (AWN_OcclusionVolume *this,bool param_1,TVector<double> *param_2,TVector<double> *param_3,
          bool param_4)

{
  char cVar1;
  UWN_OcclusionVolumeComponent *pUVar2;
  UWorld *this_00;
  UWN_WorldUtils_Subsystem *pUVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [48];
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_a8;
  cVar1 = '\0';
  dVar8 = 0.0;
  dVar9 = 0.0;
  dVar10 = 0.0;
  dVar11 = 0.0;
  pUVar2 = (this->VolumeComponent).field0_0x0.DebugPtr;
  dVar5 = 0.0;
  dVar6 = 0.0;
  local_58 = 0;
  if ((pUVar2->field_0x698 == '\0') || (pUVar2->field_0x699 == '\0')) {
    pdVar4 = (double *)(**(code **)(this->_padding_ + 0x670))(this,local_88,!param_1,param_4);
    dVar8 = *pdVar4;
    dVar9 = pdVar4[1];
    dVar10 = pdVar4[2];
    dVar11 = pdVar4[3];
    dVar5 = pdVar4[4];
    dVar6 = pdVar4[5];
  }
  else {
    this_00 = AActor::GetWorld((AActor *)this);
    if (this_00 != (UWorld *)0x0) {
      pUVar3 = UWorld::GetSubsystem<UWN_WorldUtils_Subsystem>(this_00);
      if (pUVar3 != (UWN_WorldUtils_Subsystem *)0x0) {
        cVar1 = (pUVar3->CachedWorldBounds).IsValid;
        dVar8 = (pUVar3->CachedWorldBounds).Min.field0_0x0._s_0.X;
        dVar9 = (pUVar3->CachedWorldBounds).Min.field0_0x0._s_0.Y;
        dVar10 = (pUVar3->CachedWorldBounds).Min.field0_0x0._s_0.Z;
        dVar11 = (pUVar3->CachedWorldBounds).Max.field0_0x0._s_0.X;
        dVar5 = (pUVar3->CachedWorldBounds).Max.field0_0x0._s_0.Y;
        dVar6 = (pUVar3->CachedWorldBounds).Max.field0_0x0._s_0.Z;
      }
    }
    if (cVar1 == '\0') {
      dVar5 = ___xmm_42900000000000004290000000000000;
      dVar6 = _UNK_151444fc8;
      dVar8 = ___xmm_c290000000000000c290000000000000;
      dVar9 = _UNK_151a30ea8;
      dVar10 = ___xmm_4290000000000000c290000000000000;
      dVar11 = _UNK_151a30e98;
    }
  }
  dVar7 = (dVar6 - dVar10) * __real_3fe0000000000000;
  dVar6 = (dVar11 - dVar8) * __real_3fe0000000000000;
  dVar5 = (dVar5 - dVar9) * __real_3fe0000000000000;
  (param_3->field0_0x0)._s_0.X = dVar6;
  (param_3->field0_0x0)._s_0.Y = dVar5;
  (param_3->field0_0x0)._s_0.Z = dVar7;
  (param_2->field0_0x0)._s_0.X = dVar6 + dVar8;
  (param_2->field0_0x0)._s_0.Y = dVar5 + dVar9;
  (param_2->field0_0x0)._s_0.Z = dVar7 + dVar10;
  return;
}

// GetPrivateStaticClass @ 14a034570

UClass * __cdecl AWN_OcclusionVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_OcclusionVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_OcclusionVolume",
               &Z_Registration_Info_UClass_AWN_OcclusionVolume.InnerSingleton,
               StaticRegisterNativesAWN_OcclusionVolume,0x388,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_OcclusionVolume>,
               InternalVTableHelperCtorCaller<AWN_OcclusionVolume>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_OcclusionVolume.InnerSingleton;
}

// IsActorBoundInVolume @ 14a035de0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall AWN_OcclusionVolume::IsActorBoundInVolume(AWN_OcclusionVolume *this,AActor *param_1)

{
  bool bVar1;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  
  (**(code **)(this->_padding_ + 0x358))(this,0,&local_f8,&local_e0,0);
  (**(code **)(param_1->_padding_ + 0x358))(param_1,0,&local_c8,&local_b0,0);
  if ((((local_f8 + local_e0 < local_c8 - local_b0) || (local_c8 + local_b0 < local_f8 - local_e0))
      || (local_f0 + local_d8 < local_c0 - local_a8)) ||
     (((local_c0 + local_a8 < local_f0 - local_d8 || (local_e8 + local_d0 < local_b8 - local_a0)) ||
      (local_b8 + local_a0 < local_e8 - local_d0)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

// IsActorVisibleInVolume @ 14a035f70

/* WARNING: Type propagation algorithm not settling */
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
AWN_OcclusionVolume::IsActorVisibleInVolume(AWN_OcclusionVolume *this,AActor *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  UObject *pUVar3;
  longlong lVar4;
  code *pcVar5;
  TSet<TSubclassOf<AActor>,DefaultKeyFuncs<TSubclassOf<AActor>,0>,FDefaultSetAllocator> *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  UClass *pUVar13;
  undefined1 *puVar14;
  ForElementType<FSetElementId> FVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  bool local_res10;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_16c;
  UObject *local_168;
  TSet<TSubclassOf<AActor>,DefaultKeyFuncs<TSubclassOf<AActor>,0>,FDefaultSetAllocator> *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_158;
  undefined8 uStack_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  
  if (param_1 == (AActor *)0x0) {
    return false;
  }
  if ((param_1->_padding_ & 0x10) != 0) {
    return false;
  }
  if ((AWN_OcclusionVolume *)param_1 == this) {
    return true;
  }
  (**(code **)(this->_padding_ + 0x358))(this,0,&local_118,&local_130,0);
  (**(code **)(param_1->_padding_ + 0x358))(param_1,0,&local_100,&local_e8,0);
  if ((((local_118 + local_130 < local_100 - local_e8) ||
       (local_100 + local_e8 < local_118 - local_130)) ||
      (local_110 + local_128 < local_f8 - local_e0)) ||
     (((local_f8 + local_e0 < local_110 - local_128 || (local_120 + local_108 < local_f0 - local_d8)
       ) || (local_res10 = true, local_f0 + local_d8 < local_108 - local_120)))) {
    local_res10 = false;
  }
  puVar1 = &(this->AlwaysVisibleActorClasses).Elements.field_0x10;
  iVar11 = *(int *)&(this->AlwaysVisibleActorClasses).Elements.field_0x28;
  local_160 = &this->AlwaysVisibleActorClasses;
  iVar18 = 0;
  uVar9 = 1;
  iVar19 = 0;
  iVar10 = 0;
  if (iVar11 != 0) {
    puVar20 = *(uint **)&(this->AlwaysVisibleActorClasses).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar17 = *puVar20;
    while (uVar17 == 0) {
      lVar12 = (longlong)iVar18;
      iVar19 = iVar19 + 0x20;
      iVar18 = iVar18 + 1;
      iVar10 = iVar11;
      if ((int)((iVar11 + -1 >> 0x1f & 0x1fU) + iVar11 + -1) >> 5 < iVar18) goto LAB_14a0361f0;
      uVar17 = puVar20[lVar12 + 1];
    }
    uVar9 = -uVar17 & uVar17;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    iVar10 = iVar19 + -1 + local_res20;
    if (iVar11 < iVar10) {
      iVar10 = iVar11;
    }
  }
LAB_14a0361f0:
  uVar17 = *(uint *)&(this->AlwaysVisibleActorClasses).Elements.field_0x28;
  uVar16 = uVar17 & 0xffffffe0;
  TStack_158._padding_ = CONCAT44(uVar9,iVar18);
  TStack_158.CurrentBitIndex = iVar10;
  TStack_158.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar17 >> 5;
  TStack_158._28_4_ = iVar10;
  TStack_158.BaseBitIndex = iVar19;
  uStack_138 = CONCAT44(uStack_16c,
                        *(int *)&(this->AlwaysVisibleActorClasses).Elements.field_0x8 -
                        *(int *)&(this->AlwaysVisibleActorClasses).Elements.field_0x34);
  TStack_158.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar11 < (int)uVar17)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  uVar9 = *(uint *)&(this->AlwaysVisibleActorClasses).Elements.field_0x28;
  if (uVar17 != uVar9) {
    puVar14 = *(undefined1 **)&(this->AlwaysVisibleActorClasses).Elements.field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar18 * 4);
    while (uVar17 == 0) {
      lVar12 = (longlong)iVar18;
      uVar16 = uVar16 + 0x20;
      iVar18 = iVar18 + 1;
      uVar17 = uVar9;
      if ((int)(((int)(uVar9 - 1) >> 0x1f & 0x1fU) + (uVar9 - 1)) >> 5 < iVar18) goto LAB_14a0362f8;
      uVar17 = *(uint *)(puVar14 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar17 = (int)lVar12 + -1 + uVar16;
    if ((int)uVar9 < (int)uVar17) {
      uVar17 = uVar9;
    }
  }
LAB_14a0362f8:
  do {
    pTVar6 = local_160;
    if (*(int *)&(local_160->Elements).field_0x8 - *(int *)&(local_160->Elements).field_0x34 !=
        (int)uStack_138) {
      `TSparseArray<TSparseSetElement<TSubclassOf<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_158.CurrentBitIndex == uVar17) &&
        (TStack_158.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar6 == &this->AlwaysVisibleActorClasses)) goto LAB_14a0363e0;
    pUVar3 = *(UObject **)
              (*(longlong *)&pTVar6->Elements + (longlong)TStack_158.CurrentBitIndex * 0x10);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar3 != (UObject *)0x0) goto LAB_14a03636c;
    }
    else if (pUVar3 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar3);
LAB_14a03636c:
      pUVar13 = Z_Construct_UClass_AActor_NoRegister();
      if (pUVar13 != (UClass *)0x0) {
        iVar11 = (int)pUVar13->_padding_;
        if ((*(int *)&pUVar3[1].field_0x10 < iVar11) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar3[1].field_0x8 + (longlong)iVar11 * 8)
            != &pUVar13->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
          local_168 = pUVar3;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar3);
          }
          bVar7 = UObjectBaseUtility::IsA<TSubclassOf<AActor>_>
                            ((UObjectBaseUtility *)param_1,(TSubclassOf<AActor>)&local_168);
          if (bVar7) {
            local_res10 = true;
LAB_14a0363e0:
            lVar12 = param_1->_padding_;
            uVar9 = ::GetTypeHash((FNameEntryId)(uint)lVar12);
            if (*(int *)&(this->AlwaysVisibleActorNames).Elements.field_0x8 !=
                *(int *)&(this->AlwaysVisibleActorNames).Elements.field_0x34) {
              FVar15 = (this->AlwaysVisibleActorNames).Hash.SecondaryData;
              if (FVar15 == (ForElementType<FSetElementId>)0x0) {
                FVar15 = (ForElementType<FSetElementId>)&(this->AlwaysVisibleActorNames).Hash;
              }
              iVar11 = *(int *)((longlong)FVar15 +
                               (ulonglong)
                               ((this->AlwaysVisibleActorNames).HashSize - 1U &
                               uVar9 + (int)((ulonglong)lVar12 >> 0x20)) * 4);
              if (iVar11 != -1) {
                lVar4 = *(longlong *)&(this->AlwaysVisibleActorNames).Elements;
                do {
                  if (*(longlong *)(lVar4 + (longlong)iVar11 * 0x10) == lVar12) {
                    return true;
                  }
                  iVar11 = *(int *)(lVar4 + 8 + (longlong)iVar11 * 0x10);
                } while (iVar11 != -1);
              }
            }
            return local_res10;
          }
        }
      }
    }
    TStack_158.UnvisitedBitMask = TStack_158.UnvisitedBitMask & ~TStack_158._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_158);
  } while( true );
}

// OnConstruction @ 14a036e10

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
AWN_OcclusionVolume::OnConstruction(AWN_OcclusionVolume *this,TTransform<double> *param_1)

{
  UWorld *this_00;
  UWN_WorldUtils_Subsystem *local_res8 [4];
  
  if ((this->_padding_ & 0x50) == 0) {
    this_00 = AActor::GetWorld((AActor *)this);
    if (this_00 != (UWorld *)0x0) {
      local_res8[0] = UWorld::GetSubsystem<UWN_WorldUtils_Subsystem>(this_00);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res8[0] != (UWN_WorldUtils_Subsystem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8[0]);
      }
      FWeakObjectPtr::operator=(&(this->WorldUtils_Subsystem).WeakPtr,(FObjectPtr)local_res8);
    }
  }
  return;
}

// RegisterWorldUtilsSubsystem @ 14a0384e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_OcclusionVolume::RegisterWorldUtilsSubsystem(AWN_OcclusionVolume *this)

{
  UWorld *this_00;
  UWN_WorldUtils_Subsystem *local_res10 [3];
  
  this_00 = AActor::GetWorld((AActor *)this);
  if (this_00 != (UWorld *)0x0) {
    local_res10[0] = UWorld::GetSubsystem<UWN_WorldUtils_Subsystem>(this_00);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res10[0] != (UWN_WorldUtils_Subsystem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10[0]);
    }
    FWeakObjectPtr::operator=(&(this->WorldUtils_Subsystem).WeakPtr,(FObjectPtr)local_res10);
  }
  return;
}

// RemoveAlwaysVisibleActorClass @ 14a038e90

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
AWN_OcclusionVolume::RemoveAlwaysVisibleActorClass
          (AWN_OcclusionVolume *this,TSubclassOf<AActor> param_1)

{
  longlong lVar1;
  TObjectPtr<UClass>_u_0 TVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  AActor *this_00;
  UObject *pUVar7;
  UWN_WorldUtils_Subsystem *this_01;
  uint uVar8;
  TObjectPtr<UClass>_u_0 local_res10;
  UObject *local_res18;
  TObjectPtr<UClass>_u_0 local_res20;
  FActorRange local_98;
  TActorIteratorBase<FActorIterator> local_88;
  
  lVar1 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar1 != 0) && (pUVar6 = Z_Construct_UClass_AActor_NoRegister(), pUVar6 != (UClass *)0x0)) {
    iVar5 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar1 + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar5 * 8) !=
        &pUVar6->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) &&
       (TVar2 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0, TVar2.DebugPtr != (UClass *)0x0
       )) {
      local_res10 = TVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr),
         UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
      }
      uVar8 = ((uint)((ulonglong)TVar2.DebugPtr >> 0x14) & 0xffff ^
              (uint)((ulonglong)TVar2.DebugPtr >> 4)) * -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      iVar5 = TSet<TSubclassOf<AActor>,DefaultKeyFuncs<TSubclassOf<AActor>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TSubclassOf<AActor_const_>_>
                        (&this->AlwaysVisibleActorClasses,uVar8 >> 0x10 ^ uVar8,
                         (TSubclassOf<AActor_const_> *)&local_res10.ObjectPtr);
      if (((iVar5 != -1) &&
          (local_98.World = AActor::GetWorld((AActor *)this), local_98.World != (UWorld *)0x0)) &&
         (*(int *)&(this->AlwaysVisibleActorClasses).Elements.field_0x8 !=
          *(int *)&(this->AlwaysVisibleActorClasses).Elements.field_0x34)) {
        local_98.Flags = OnlyActiveLevels|SkipPendingKill;
        ::begin((FActorIterator *)&local_88,&local_98);
        while( true ) {
          if ((local_88.State.bIsSet == false) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (local_88.State.TypedValue.ReachedEnd != false) break;
          if ((local_88.State.bIsSet == false) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          this_00 = FActorIteratorState::GetActorChecked(&local_88.State.TypedValue);
          if ((this_00 != (AActor *)0x0) && ((this_00->_padding_ & 0x10) == 0)) {
            local_res18 = *(UObject **)param_1.Class.field0_0x0;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_res18 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(local_res18);
            }
            bVar4 = UObjectBaseUtility::IsA<TSubclassOf<AActor>_>
                              ((UObjectBaseUtility *)this_00,(TSubclassOf<AActor>)&local_res18);
            if (((bVar4) &&
                (bVar4 = FWeakObjectPtr::IsValid(&(this->WorldUtils_Subsystem).WeakPtr), bVar4)) &&
               (pUVar7 = FWeakObjectPtr::Get(&(this->WorldUtils_Subsystem).WeakPtr),
               *(AWN_OcclusionVolume **)&pUVar7[3].field_0x10 == this)) {
              this_01 = (UWN_WorldUtils_Subsystem *)
                        FWeakObjectPtr::Get(&(this->WorldUtils_Subsystem).WeakPtr);
              UWN_WorldUtils_Subsystem::HideActorVolumePrimitives(this_01,this_00);
            }
          }
          TActorIteratorBase<FActorIterator>::operator++(&local_88);
        }
        if (local_88.State.bIsSet != false) {
          UWorld::RemoveOnActorSpawnedHandler
                    (local_88.State.TypedValue.CurrentWorld,
                     local_88.State.TypedValue.ActorSpawnedDelegateHandle);
          if (local_88.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
          }
          if (local_88.State.TypedValue.ActorArray.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.State.TypedValue.ActorArray.AllocatorInstance.Data);
          }
        }
        TVar2 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
        local_res20 = TVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar2.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
        }
        if (*(int *)&(this->AlwaysVisibleActorClasses).Elements.field_0x8 !=
            *(int *)&(this->AlwaysVisibleActorClasses).Elements.field_0x34) {
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar2.DebugPtr != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
          }
          uVar8 = ((uint)((ulonglong)TVar2.DebugPtr >> 0x14) & 0xffff ^
                  (uint)((ulonglong)TVar2.DebugPtr >> 4)) * -0x7a143595;
          uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
          TSet<TSubclassOf<AActor>,DefaultKeyFuncs<TSubclassOf<AActor>,0>,FDefaultSetAllocator>::
          RemoveImpl<TSubclassOf<AActor_const_>_>
                    (&this->AlwaysVisibleActorClasses,uVar8 >> 0x10 ^ uVar8,
                     (TSubclassOf<AActor_const_> *)&local_res20.ObjectPtr);
        }
      }
    }
  }
  return;
}

// RemoveVisibleActor @ 14a039350

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_OcclusionVolume::RemoveVisibleActor(AWN_OcclusionVolume *this,AActor *param_1)

{
  FName FVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UObject *pUVar6;
  UWN_WorldUtils_Subsystem *this_00;
  ForElementType<FSetElementId> FVar7;
  
  if ((param_1 != (AActor *)0x0) && ((param_1->_padding_ & 0x10) == 0)) {
    bVar3 = FWeakObjectPtr::IsValid(&(this->WorldUtils_Subsystem).WeakPtr);
    if ((bVar3) &&
       (pUVar6 = FWeakObjectPtr::Get(&(this->WorldUtils_Subsystem).WeakPtr),
       *(AWN_OcclusionVolume **)&pUVar6[3].field_0x10 == this)) {
      this_00 = (UWN_WorldUtils_Subsystem *)
                FWeakObjectPtr::Get(&(this->WorldUtils_Subsystem).WeakPtr);
      UWN_WorldUtils_Subsystem::ShowActorVolumePrimitives(this_00,param_1);
    }
    FVar1 = (FName)param_1->_padding_;
    uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    if (*(int *)&(this->AlwaysVisibleActorNames).Elements.field_0x8 !=
        *(int *)&(this->AlwaysVisibleActorNames).Elements.field_0x34) {
      FVar7 = (this->AlwaysVisibleActorNames).Hash.SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&(this->AlwaysVisibleActorNames).Hash;
      }
      iVar5 = *(int *)((longlong)FVar7 +
                      (ulonglong)
                      ((this->AlwaysVisibleActorNames).HashSize - 1U & FVar1.Number + uVar4) * 4);
      if (iVar5 != -1) {
        lVar2 = *(longlong *)&(this->AlwaysVisibleActorNames).Elements;
        while (*(FName *)(lVar2 + (longlong)iVar5 * 0x10) != FVar1) {
          iVar5 = *(int *)(lVar2 + 8 + (longlong)iVar5 * 0x10);
          if (iVar5 == -1) {
            return;
          }
        }
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove
                  (&this->AlwaysVisibleActorNames,FVar1);
      }
    }
  }
  return;
}

// StaticRegisterNativesAWN_OcclusionVolume @ 14a03a710

void __cdecl AWN_OcclusionVolume::StaticRegisterNativesAWN_OcclusionVolume(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_AWN_OcclusionVolume_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UnbindToActorEvents @ 14a03a950

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_OcclusionVolume::UnbindToActorEvents(AWN_OcclusionVolume *this)

{
  UWorld *this_00;
  
  this_00 = AActor::GetWorld((AActor *)this);
  if (this_00 != (UWorld *)0x0) {
    if ((this->PostRegisterAllActorComponentsHandler).ID != 0) {
      UWorld::RemoveOnPostRegisterAllActorComponentsHandler
                (this_00,(FDelegateHandle)(this->PostRegisterAllActorComponentsHandler).ID);
    }
    if ((this->ActorDestroyedHandler).ID != 0) {
      UWorld::RemoveOnActorDestroyedHandler
                (this_00,(FDelegateHandle)(this->ActorDestroyedHandler).ID);
    }
    this->bAlreadyBound = false;
  }
  return;
}

// UnregisterWorldUtilsSubsystem @ 14a03ac50

void __thiscall AWN_OcclusionVolume::UnregisterWorldUtilsSubsystem(AWN_OcclusionVolume *this)

{
  bool bVar1;
  UObject *pUVar2;
  UWN_WorldUtils_Subsystem *this_00;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->WorldUtils_Subsystem).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->WorldUtils_Subsystem).WeakPtr);
    if (*(AWN_OcclusionVolume **)&pUVar2[3].field_0x10 == this) {
      this_00 = (UWN_WorldUtils_Subsystem *)
                FWeakObjectPtr::Get(&(this->WorldUtils_Subsystem).WeakPtr);
      UWN_WorldUtils_Subsystem::SetCurrentOcclusionVolume(this_00,(AWN_OcclusionVolume *)0x0);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    (this->WorldUtils_Subsystem).WeakPtr = local_res8;
  }
  return;
}

// UpdateNewActorVisibility @ 14a03af30

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
AWN_OcclusionVolume::UpdateNewActorVisibility(AWN_OcclusionVolume *this,AActor *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  UWN_WorldUtils_Subsystem *pUVar3;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->WorldUtils_Subsystem).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->WorldUtils_Subsystem).WeakPtr);
    if (*(AWN_OcclusionVolume **)&pUVar2[3].field_0x10 == this) {
      bVar1 = IsActorVisibleInVolume(this,param_1);
      if (bVar1) {
        pUVar3 = (UWN_WorldUtils_Subsystem *)
                 FWeakObjectPtr::Get(&(this->WorldUtils_Subsystem).WeakPtr);
        UWN_WorldUtils_Subsystem::ShowActorVolumePrimitives(pUVar3,param_1);
        return;
      }
      pUVar3 = (UWN_WorldUtils_Subsystem *)
               FWeakObjectPtr::Get(&(this->WorldUtils_Subsystem).WeakPtr);
      UWN_WorldUtils_Subsystem::HideActorVolumePrimitives(pUVar3,param_1);
    }
  }
  return;
}

// __DefaultConstructor @ 14a041a10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl AWN_OcclusionVolume::__DefaultConstructor(FObjectInitializer *param_1)

{
  AActor **this;
  AActor *this_00;
  code *pcVar1;
  FName *pFVar2;
  UClass *pUVar3;
  FName FVar4;
  FName local_res8;
  TVector<double>_u_0 local_28;
  
  this_00 = (AActor *)param_1->Obj;
  if (this_00 != (AActor *)0x0) {
    AActor::AActor(this_00,param_1);
    this_00->_padding_ = (longlong)&___7AWN_OcclusionVolume__6B_;
    this = &this_00[1].PrimaryActorTick.Target;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    *(undefined4 *)&this_00[1].PrimaryActorTick._padding_ = 0;
    *(undefined4 *)((longlong)&this_00[1].PrimaryActorTick._padding_ + 4) = 0x80;
    *(undefined4 *)&this_00[1].PrimaryActorTick._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this_00[1].PrimaryActorTick._padding_ + 4) = 0;
    this_00[1].PrimaryActorTick._padding_ = 0;
    *(undefined4 *)&this_00[1].PrimaryActorTick._padding_ = 0;
    *this = (AActor *)0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
    *(undefined8 *)&this_00[1].field_0x58 = 0;
    this_00[1].RemoteRole = '\0';
    this_00[1].ActorCategory = '\0';
    *(undefined2 *)&this_00[1].field_0x62 = 0;
    this_00[1].InitialLifeSpan = 0.0;
    *(undefined8 *)&this_00[1].AttachmentReplication.LocationOffset = 0;
    *(undefined4 *)&this_00[1].AttachmentReplication.LocationOffset.field_0x8 = 0;
    *(undefined4 *)&this_00[1].AttachmentReplication.LocationOffset.field_0xc = 0x80;
    *(undefined4 *)&this_00[1].AttachmentReplication.LocationOffset.field_0x10 = 0xffffffff;
    *(undefined4 *)&this_00[1].AttachmentReplication.LocationOffset.field_0x14 = 0;
    *(undefined8 *)&this_00[1].AttachmentReplication.RelativeScale3D.field_0x8 = 0;
    *(undefined4 *)&this_00[1].AttachmentReplication.RelativeScale3D.field_0x10 = 0;
    *(undefined1 *)&this_00[1].AttachmentReplication.RotationOffset.Pitch = 0;
    this_00[1].AttachmentReplication.RotationOffset.Yaw = 0.0;
    this_00[1].AttachmentReplication.RotationOffset.Roll = 0.0;
    this_00[1].AttachmentReplication.AttachSocket.ComparisonIndex = 0;
    this_00[1].AttachmentReplication.AttachSocket.Number = 0;
    pFVar2 = ::FName::FName(&local_res8,L"VolumeComponent");
    FVar4 = *pFVar2;
    pUVar3 = UWN_OcclusionVolumeComponent::StaticClass();
    FVar4 = (FName)UObject::CreateDefaultSubobject
                             ((UObject *)this_00,FVar4,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (FVar4 == (FName)0x0)) {
      this_00[1].AttachmentReplication.AttachSocket = FVar4;
      if (FVar4 == (FName)0x0) {
        return;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)FVar4);
      this_00[1].AttachmentReplication.AttachSocket = FVar4;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)FVar4);
    }
    FVar4 = this_00[1].AttachmentReplication.AttachSocket;
    (this_00->RootComponent).field0_0x0.DebugPtr = (USceneComponent *)FVar4;
    pcVar1 = *(code **)(*(longlong *)FVar4 + 0x788);
    pFVar2 = ::FName::FName(&local_res8,"NoCollision");
    (*pcVar1)(FVar4,*pFVar2,1);
    FVar4 = this_00[1].AttachmentReplication.AttachSocket;
    (**(code **)(*(longlong *)FVar4 + 0x5f8))(FVar4,0);
    local_28._s_0.Z = __real_40c3880000000000;
    local_28._s_0.X = ___xmm_40c388000000000040c3880000000000;
    local_28._s_0.Y = _UNK_15201e8f8;
    *(undefined1 *)((longlong)this_00[1].AttachmentReplication.AttachSocket + 0x618) = 0;
    *(undefined1 *)((longlong)this_00[1].AttachmentReplication.AttachSocket + 0x549) = 0;
    UWN_VolumeComponent::SetVolumeExtent
              ((UWN_VolumeComponent *)this_00[1].AttachmentReplication.AttachSocket,
               (TVector<double> *)&local_28._s_0);
  }
  return;
}

// execAddAlwaysVisibleActorClass @ 14a041f40

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
AWN_OcclusionVolume::execAddAlwaysVisibleActorClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  UObject *pUVar4;
  bool bVar5;
  UClass *pUVar6;
  AActor *this;
  UObject *pUVar7;
  UWN_WorldUtils_Subsystem *this_00;
  TSubclassOf<AActor> local_res10;
  UObject *local_res20;
  UObject *local_98;
  UObject *local_90;
  FActorRange local_88;
  TActorIteratorBase<FActorIterator> local_78;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar4 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_98 = local_res20;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (local_res20 == (UObject *)0x0) {
      return;
    }
  }
  else {
    if (local_res20 == (UObject *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable(local_res20);
  }
  pUVar6 = Z_Construct_UClass_AActor_NoRegister();
  if (pUVar6 != (UClass *)0x0) {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)&pUVar4[1].field_0x10 < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&pUVar4[1].field_0x8 + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      TSet<TSubclassOf<AActor>,DefaultKeyFuncs<TSubclassOf<AActor>,0>,FDefaultSetAllocator>::
      Emplace<TSubclassOf<AActor>_const_&>
                ((TSet<TSubclassOf<AActor>,DefaultKeyFuncs<TSubclassOf<AActor>,0>,FDefaultSetAllocator>
                  *)&param_1[0x11].field_0x18,&local_res10,(bool *)&local_98);
      local_88.World = AActor::GetWorld((AActor *)param_1);
      if ((local_88.World != (UWorld *)0x0) &&
         (*(int *)&param_1[0x11].field_0x20 != *(int *)&param_1[0x12].field_0x24)) {
        local_88.Flags = OnlyActiveLevels|SkipPendingKill;
        ::begin((FActorIterator *)&local_78,&local_88);
        while( true ) {
          if ((local_78.State.bIsSet == false) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (local_78.State.TypedValue.ReachedEnd != false) break;
          if ((local_78.State.bIsSet == false) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          this = FActorIteratorState::GetActorChecked(&local_78.State.TypedValue);
          if ((this != (AActor *)0x0) && ((this->_padding_ & 0x10) == 0)) {
            local_90 = pUVar4;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar4);
            }
            bVar5 = UObjectBaseUtility::IsA<TSubclassOf<AActor>_>
                              ((UObjectBaseUtility *)this,(TSubclassOf<AActor>)&local_90);
            if (((bVar5) &&
                (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[0x13].field_0x18), bVar5
                )) && (pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[0x13].field_0x18),
                      *(UObject **)&pUVar7[3].field_0x10 == param_1)) {
              this_00 = (UWN_WorldUtils_Subsystem *)
                        FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[0x13].field_0x18);
              UWN_WorldUtils_Subsystem::ShowActorVolumePrimitives(this_00,this);
            }
          }
          TActorIteratorBase<FActorIterator>::operator++(&local_78);
        }
        if (local_78.State.bIsSet != false) {
          UWorld::RemoveOnActorSpawnedHandler
                    (local_78.State.TypedValue.CurrentWorld,
                     local_78.State.TypedValue.ActorSpawnedDelegateHandle);
          if (local_78.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
          }
          if (local_78.State.TypedValue.ActorArray.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.State.TypedValue.ActorArray.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  return;
}

// execIsActorVisibleInVolume @ 14a0421c0

void __cdecl
AWN_OcclusionVolume::execIsActorVisibleInVolume(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FProperty *pFVar5;
  code *pcVar6;
  longlong *plVar7;
  bool bVar8;
  UClass *pUVar9;
  longlong lVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  UObject *pUVar16;
  UObject *pUVar17;
  undefined1 uVar18;
  undefined1 local_res10 [8];
  undefined1 *local_res18;
  int local_res20;
  UObject *local_1a8;
  undefined1 *local_1a0;
  int iStack_198;
  uint uStack_194;
  UObject *local_190;
  undefined4 uStack_188;
  int iStack_184;
  int local_180;
  int iStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  UObject *local_170;
  UObject *local_168;
  longlong *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_158;
  undefined8 uStack_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  undefined1 uVar19;
  
  iVar12 = 0;
  local_1a8 = (UObject *)0x0;
  local_res18 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a8,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a8);
  }
  pUVar1 = local_1a8;
  uVar19 = 0;
  uVar18 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_170 = local_1a8;
  if ((local_1a8 != (UObject *)0x0) && ((*(uint *)&local_1a8->field_0x8 & 0x10) == 0)) {
    if (local_1a8 == param_1) {
      *local_res18 = 1;
      return;
    }
    (**(code **)(*(longlong *)param_1 + 0x358))(param_1,0,&local_118,&local_130,0);
    (**(code **)(*(longlong *)pUVar1 + 0x358))(pUVar1,0,&local_100,&local_e8,0);
    if ((((local_100 - local_e8 <= local_118 + local_130) &&
         (local_118 - local_130 <= local_100 + local_e8)) &&
        (local_f8 - local_e0 <= local_110 + local_128)) &&
       (((local_110 - local_128 <= local_f8 + local_e0 &&
         (local_f0 - local_d8 <= local_120 + local_108)) &&
        (local_108 - local_120 <= local_f0 + local_d8)))) {
      uVar19 = 1;
    }
    pUVar1 = param_1 + 0x12;
    iVar3 = *(int *)&param_1[0x12].field_0x18;
    local_1a0 = &param_1[0x11].field_0x18;
    uStack_194 = 1;
    local_180 = 0;
    iStack_184 = iVar12;
    if (iVar3 != 0) {
      pUVar17 = *(UObject **)&param_1[0x12].field_0x10;
      if (*(UObject **)&param_1[0x12].field_0x10 == (UObject *)0x0) {
        pUVar17 = pUVar1;
      }
      uVar15 = *(uint *)pUVar17;
      local_180 = 0;
      iVar12 = 0;
      while (uVar15 == 0) {
        lVar10 = (longlong)iVar12;
        local_180 = local_180 + 0x20;
        iVar12 = iVar12 + 1;
        iStack_184 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14a042490;
        uVar15 = *(uint *)(&pUVar17->field_0x4 + lVar10 * 4);
      }
      uStack_194 = -uVar15 & uVar15;
      uVar2 = (ulonglong)uStack_194 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_res20 = (int)lVar10;
      iStack_184 = local_180 + -1 + local_res20;
      if (iVar3 < iStack_184) {
        iStack_184 = iVar3;
      }
    }
LAB_14a042490:
    uVar15 = *(uint *)&param_1[0x12].field_0x18;
    TStack_158._padding_ = CONCAT44(uStack_194,iVar12);
    uVar14 = uVar15 & 0xffffffe0;
    iStack_178 = *(int *)&param_1[0x11].field_0x20 - *(int *)&param_1[0x12].field_0x24;
    uStack_188 = 0xffffffff;
    TStack_158.CurrentBitIndex = iStack_184;
    TStack_158.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar15 >> 5;
    TStack_158._28_4_ = iStack_184;
    TStack_158.BaseBitIndex = local_180;
    uStack_138 = CONCAT44(uStack_174,iStack_178);
    iStack_198 = iVar12;
    local_190 = pUVar1;
    iStack_17c = iStack_184;
    local_160 = (longlong *)local_1a0;
    TStack_158.Array = (TBitArray<FDefaultBitArrayAllocator> *)pUVar1;
    if ((((int)uVar15 < 0) || (iVar3 < (int)uVar15)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pUVar17 = local_170;
    uVar4 = *(uint *)&param_1[0x12].field_0x18;
    if (uVar15 != uVar4) {
      pUVar16 = *(UObject **)&param_1[0x12].field_0x10;
      if (*(UObject **)&param_1[0x12].field_0x10 == (UObject *)0x0) {
        pUVar16 = pUVar1;
      }
      uVar15 = -1 << ((byte)uVar15 & 0x1f) &
               *(uint *)((longlong)&pUVar16->field_0x0 + (longlong)iVar13 * 4);
      while (uVar15 == 0) {
        lVar10 = (longlong)iVar13;
        uVar14 = uVar14 + 0x20;
        iVar13 = iVar13 + 1;
        uVar15 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_14a042599;
        uVar15 = *(uint *)(&pUVar16->field_0x4 + lVar10 * 4);
      }
      uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar15 = (int)lVar10 + -1 + uVar14;
      if ((int)uVar4 < (int)uVar15) {
        uVar15 = uVar4;
      }
    }
LAB_14a042599:
    do {
      plVar7 = local_160;
      if ((int)local_160[1] - *(int *)((longlong)local_160 + 0x34) != (int)uStack_138) {
        `TSparseArray<TSparseSetElement<TSubclassOf<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_158.CurrentBitIndex == uVar15) && ((UObject *)TStack_158.Array == pUVar1)) &&
         (uVar18 = uVar19, plVar7 == (longlong *)&param_1[0x11].field_0x18)) goto LAB_14a042679;
      pUVar16 = *(UObject **)(*plVar7 + (longlong)TStack_158.CurrentBitIndex * 0x10);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar16 != (UObject *)0x0) goto LAB_14a04260b;
      }
      else if (pUVar16 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar16);
LAB_14a04260b:
        pUVar9 = Z_Construct_UClass_AActor_NoRegister();
        if (pUVar9 != (UClass *)0x0) {
          iVar12 = (int)pUVar9->_padding_;
          if ((*(int *)&pUVar16[1].field_0x10 < iVar12) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)&pUVar16[1].field_0x8 + (longlong)iVar12 * 8) !=
              &pUVar9->_padding_)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (bVar8) {
            local_168 = pUVar16;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar16);
            }
            bVar8 = UObjectBaseUtility::IsA<TSubclassOf<AActor>_>
                              ((UObjectBaseUtility *)pUVar17,(TSubclassOf<AActor>)&local_168);
            if (bVar8) goto LAB_14a042676;
          }
        }
      }
      TStack_158.UnvisitedBitMask = TStack_158.UnvisitedBitMask & ~TStack_158._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_158);
    } while( true );
  }
  goto LAB_14a042709;
LAB_14a042676:
  uVar18 = 1;
LAB_14a042679:
  lVar10 = *(longlong *)&pUVar17->field_0x18;
  uVar15 = ::GetTypeHash((FNameEntryId)(uint)lVar10);
  if (*(int *)(param_1 + 0x14) != *(int *)&param_1[0x15].field_0x4) {
    puVar11 = *(undefined1 **)&param_1[0x15].field_0x10;
    if (*(undefined1 **)&param_1[0x15].field_0x10 == (undefined1 *)0x0) {
      puVar11 = &param_1[0x15].field_0x8;
    }
    iVar12 = *(int *)(puVar11 +
                     (ulonglong)
                     (*(int *)&param_1[0x15].field_0x18 - 1U &
                     (int)((ulonglong)lVar10 >> 0x20) + uVar15) * 4);
    if (iVar12 != -1) {
      do {
        if (*(longlong *)(*(longlong *)&param_1[0x13].field_0x20 + (longlong)iVar12 * 0x10) ==
            lVar10) {
          uVar18 = 1;
          break;
        }
        iVar12 = *(int *)(*(longlong *)&param_1[0x13].field_0x20 + 8 + (longlong)iVar12 * 0x10);
      } while (iVar12 != -1);
    }
  }
LAB_14a042709:
  *local_res18 = uVar18;
  return;
}

// execRemoveAlwaysVisibleActorClass @ 14a043170

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
AWN_OcclusionVolume::execRemoveAlwaysVisibleActorClass
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  UClass *pUVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  AActor *this;
  UObject *pUVar7;
  UWN_WorldUtils_Subsystem *this_00;
  uint uVar8;
  UClass *local_res10;
  TObjectPtr<UClass>_u_0 local_res20;
  UClass *local_a8;
  TObjectPtr<UClass>_u_0 local_a0;
  FActorRange local_98;
  TActorIteratorBase<FActorIterator> local_88;
  
  local_res10 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (local_res10 == (UClass *)0x0) {
      return;
    }
  }
  else {
    if (local_res10 == (UClass *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  pUVar6 = Z_Construct_UClass_AActor_NoRegister();
  if (pUVar6 != (UClass *)0x0) {
    iVar5 = (int)pUVar6->_padding_;
    if (((int)pUVar3->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar5 * 8) != &pUVar6->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      local_res20.DebugPtr = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (UE::GC::MarkAsReachable((UObject *)pUVar3),
         UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      uVar8 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
              -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      uVar8 = uVar8 >> 0x10 ^ uVar8;
      iVar5 = TSet<TSubclassOf<AActor>,DefaultKeyFuncs<TSubclassOf<AActor>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TSubclassOf<AActor_const_>_>
                        ((TSet<TSubclassOf<AActor>,DefaultKeyFuncs<TSubclassOf<AActor>,0>,FDefaultSetAllocator>
                          *)&param_1[0x11].field_0x18,uVar8,
                         (TSubclassOf<AActor_const_> *)&local_res20.ObjectPtr);
      if (((iVar5 != -1) &&
          (local_98.World = AActor::GetWorld((AActor *)param_1), local_98.World != (UWorld *)0x0))
         && (*(int *)&param_1[0x11].field_0x20 != *(int *)&param_1[0x12].field_0x24)) {
        local_98.Flags = OnlyActiveLevels|SkipPendingKill;
        ::begin((FActorIterator *)&local_88,&local_98);
        while( true ) {
          if ((local_88.State.bIsSet == false) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (local_88.State.TypedValue.ReachedEnd != false) break;
          if ((local_88.State.bIsSet == false) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          this = FActorIteratorState::GetActorChecked(&local_88.State.TypedValue);
          if ((this != (AActor *)0x0) && ((this->_padding_ & 0x10) == 0)) {
            local_a8 = pUVar3;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar3);
            }
            bVar4 = UObjectBaseUtility::IsA<TSubclassOf<AActor>_>
                              ((UObjectBaseUtility *)this,(TSubclassOf<AActor>)&local_a8);
            if (((bVar4) &&
                (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[0x13].field_0x18), bVar4
                )) && (pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[0x13].field_0x18),
                      *(UObject **)&pUVar7[3].field_0x10 == param_1)) {
              this_00 = (UWN_WorldUtils_Subsystem *)
                        FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[0x13].field_0x18);
              UWN_WorldUtils_Subsystem::HideActorVolumePrimitives(this_00,this);
            }
          }
          TActorIteratorBase<FActorIterator>::operator++(&local_88);
        }
        if (local_88.State.bIsSet != false) {
          UWorld::RemoveOnActorSpawnedHandler
                    (local_88.State.TypedValue.CurrentWorld,
                     local_88.State.TypedValue.ActorSpawnedDelegateHandle);
          if (local_88.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
          }
          if (local_88.State.TypedValue.ActorArray.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.State.TypedValue.ActorArray.AllocatorInstance.Data);
          }
        }
        local_a0.DebugPtr = pUVar3;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
        if (*(int *)&param_1[0x11].field_0x20 != *(int *)&param_1[0x12].field_0x24) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar3);
          }
          TSet<TSubclassOf<AActor>,DefaultKeyFuncs<TSubclassOf<AActor>,0>,FDefaultSetAllocator>::
          RemoveImpl<TSubclassOf<AActor_const_>_>
                    ((TSet<TSubclassOf<AActor>,DefaultKeyFuncs<TSubclassOf<AActor>,0>,FDefaultSetAllocator>
                      *)&param_1[0x11].field_0x18,uVar8,
                     (TSubclassOf<AActor_const_> *)&local_a0.ObjectPtr);
        }
      }
    }
  }
  return;
}

