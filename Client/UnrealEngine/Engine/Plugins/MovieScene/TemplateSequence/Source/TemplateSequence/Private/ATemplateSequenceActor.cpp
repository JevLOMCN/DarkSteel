// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 28

// StaticClass @ 14ac63770

UClass * __cdecl ATemplateSequenceActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ATemplateSequenceActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"TemplateSequenceActor",
               &Z_Registration_Info_UClass_ATemplateSequenceActor.InnerSingleton,
               StaticRegisterNativesATemplateSequenceActor,0x328,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ATemplateSequenceActor>,
               InternalVTableHelperCtorCaller<ATemplateSequenceActor>,local_res8,AActor::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ATemplateSequenceActor.InnerSingleton;
}

// ATemplateSequenceActor @ 14ac6f930

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ATemplateSequenceActor * __thiscall
ATemplateSequenceActor::ATemplateSequenceActor(ATemplateSequenceActor *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  AActor::AActor((AActor *)this,param_1);
  (this->PlaybackSettings).bAutoPlay = 0;
  (this->PlaybackSettings).bRandomStartTime = 0;
  (this->PlaybackSettings).bDisableCameraCuts = 0;
  (this->PlaybackSettings).bHideHud = 0;
  (this->PlaybackSettings).bHidePlayer = 0;
  (this->PlaybackSettings).bDisableLookAtInput = 0;
  (this->PlaybackSettings).bDisableMovementInput = 0;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePlaybackClient__;
  (this->PlaybackSettings).LoopCount = 0;
  (this->PlaybackSettings).TickInterval.TickIntervalSeconds = 0.0;
  (this->PlaybackSettings).TickInterval.EvaluationBudgetMicroseconds = 0.0;
  puVar2 = &(this->PlaybackSettings).field_0x24;
  (this->PlaybackSettings).bPauseAtEnd = 0;
  (this->PlaybackSettings).bDynamicWeighting = 0;
  (this->PlaybackSettings).bInheritTickIntervalFromOwner = 1;
  (this->PlaybackSettings).TickInterval.bTickWhenPaused = false;
  (this->PlaybackSettings).TickInterval.bAllowRounding = true;
  (this->PlaybackSettings).PlayRate = 1.0;
  (this->PlaybackSettings).StartTime = 0.0;
  (this->PlaybackSettings).FinishCompletionStateOverride = None;
  (this->SequencePlayer).field0_0x0.DebugPtr = (UTemplateSequencePlayer *)0x0;
  (this->TemplateSequence).AssetPath.PackageName.ComparisonIndex = 0;
  (this->TemplateSequence).AssetPath.PackageName.Number = 0;
  (this->TemplateSequence).AssetPath.AssetName.ComparisonIndex = 0;
  (this->TemplateSequence).AssetPath.AssetName.Number = 0;
  (this->TemplateSequence).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TemplateSequence).SubPathString.Data.ArrayNum = 0;
  (this->TemplateSequence).SubPathString.Data.ArrayMax = 0;
  (this->BindingOverride).Object.WeakPtr = (FWeakObjectPtr)0x0;
  (this->BindingOverride).bOverridesDefault = true;
  return this;
}

// ATemplateSequenceActor @ 14ac6f9e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ATemplateSequenceActor * __thiscall
ATemplateSequenceActor::ATemplateSequenceActor
          (ATemplateSequenceActor *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  FName FVar4;
  FName *pFVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  UTemplateSequencePlayer *pUVar8;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  (this->PlaybackSettings).bAutoPlay = 0;
  (this->PlaybackSettings).bRandomStartTime = 0;
  (this->PlaybackSettings).bDisableCameraCuts = 0;
  (this->PlaybackSettings).bHideHud = 0;
  (this->PlaybackSettings).bHidePlayer = 0;
  (this->PlaybackSettings).bDisableLookAtInput = 0;
  (this->PlaybackSettings).bDisableMovementInput = 0;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  (this->PlaybackSettings).LoopCount = 0;
  (this->PlaybackSettings).TickInterval.TickIntervalSeconds = 0.0;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePlaybackClient__;
  (this->PlaybackSettings).TickInterval.EvaluationBudgetMicroseconds = 0.0;
  (this->PlaybackSettings).FinishCompletionStateOverride = None;
  (this->SequencePlayer).field0_0x0.DebugPtr = (UTemplateSequencePlayer *)0x0;
  (this->TemplateSequence).AssetPath.PackageName.ComparisonIndex = 0;
  (this->TemplateSequence).AssetPath.PackageName.Number = 0;
  (this->TemplateSequence).AssetPath.AssetName.ComparisonIndex = 0;
  (this->TemplateSequence).AssetPath.AssetName.Number = 0;
  (this->TemplateSequence).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TemplateSequence).SubPathString.Data.ArrayNum = 0;
  (this->TemplateSequence).SubPathString.Data.ArrayMax = 0;
  (this->BindingOverride).Object.WeakPtr = (FWeakObjectPtr)0x0;
  puVar2 = &(this->PlaybackSettings).field_0x24;
  (this->PlaybackSettings).bPauseAtEnd = 0;
  (this->PlaybackSettings).bDynamicWeighting = 0;
  (this->PlaybackSettings).bInheritTickIntervalFromOwner = 1;
  (this->PlaybackSettings).TickInterval.bTickWhenPaused = false;
  (this->PlaybackSettings).TickInterval.bAllowRounding = true;
  (this->PlaybackSettings).PlayRate = 1.0;
  (this->PlaybackSettings).StartTime = 0.0;
  (this->BindingOverride).bOverridesDefault = true;
  pFVar5 = ::FName::FName(&local_res8,L"SceneComp");
  FVar4 = *pFVar5;
  pUVar6 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar7 = UObject::CreateDefaultSubobject((UObject *)this,FVar4,pUVar6,pUVar6,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  this->_padding_ = (longlong)pUVar7;
  pFVar5 = ::FName::FName(&local_res8,"AnimationPlayer");
  FVar4 = *pFVar5;
  pUVar6 = UTemplateSequencePlayer::StaticClass();
  pUVar8 = (UTemplateSequencePlayer *)
           FObjectInitializer::CreateDefaultSubobject
                     (param_1,(UObject *)this,FVar4,pUVar6,pUVar6,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar8 != (UTemplateSequencePlayer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  (this->SequencePlayer).field0_0x0.DebugPtr = pUVar8;
  return this;
}

// ~ATemplateSequenceActor @ 14ac71480

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ATemplateSequenceActor::~ATemplateSequenceActor(ATemplateSequenceActor *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePlaybackClient__;
  pFVar1 = (this->TemplateSequence).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieScenePlaybackClient__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// BeginPlay @ 14ac738c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall ATemplateSequenceActor::BeginPlay(ATemplateSequenceActor *this)

{
  AActor::BeginPlay((AActor *)this);
  if ((this->PlaybackSettings).bAutoPlay != 0) {
    UMovieSceneSequencePlayer::Play
              ((UMovieSceneSequencePlayer *)(this->SequencePlayer).field0_0x0.DebugPtr);
    return;
  }
  return;
}

// EndPlay @ 14ac74c10

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ATemplateSequenceActor::EndPlay(ATemplateSequenceActor *this,Type param_1)

{
  UTemplateSequencePlayer *this_00;
  
  this_00 = (this->SequencePlayer).field0_0x0.DebugPtr;
  if (this_00 != (UTemplateSequencePlayer *)0x0) {
    UMovieSceneSequencePlayer::Stop((UMovieSceneSequencePlayer *)this_00);
    UMovieSceneSequencePlayer::TearDown
              ((UMovieSceneSequencePlayer *)(this->SequencePlayer).field0_0x0.DebugPtr);
  }
  AActor::EndPlay((AActor *)this,param_1);
  return;
}

// GetInstanceData @ 14ac772e0

UObject * __thiscall ATemplateSequenceActor::GetInstanceData(ATemplateSequenceActor *this)

{
  return (UObject *)0x0;
}

// GetLifetimeReplicatedProps @ 14ac77330

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
ATemplateSequenceActor::GetLifetimeReplicatedProps
          (ATemplateSequenceActor *this,
          TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  FProperty *this_00;
  FName local_res18 [2];
  FDoRepLifetimeParams local_28;
  
  AActor::GetLifetimeReplicatedProps((AActor *)this,param_1);
  pFVar2 = ::FName::FName(local_res18,0xe,L"SequencePlayer",FNAME_Add);
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

// GetPrivateStaticClass @ 14ac776d0

UClass * __cdecl ATemplateSequenceActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ATemplateSequenceActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"TemplateSequenceActor",
               &Z_Registration_Info_UClass_ATemplateSequenceActor.InnerSingleton,
               StaticRegisterNativesATemplateSequenceActor,0x328,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ATemplateSequenceActor>,
               InternalVTableHelperCtorCaller<ATemplateSequenceActor>,local_res8,AActor::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ATemplateSequenceActor.InnerSingleton;
}

// GetSequence @ 14ac78460

UTemplateSequence * __thiscall ATemplateSequenceActor::GetSequence(ATemplateSequenceActor *this)

{
  int iVar1;
  UTemplateSequence *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UTemplateSequence *)FSoftObjectPath::ResolveObject(&this->TemplateSequence);
  if (pUVar2 != (UTemplateSequence *)0x0) {
    pUVar3 = UTemplateSequence::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UTemplateSequence *)0x0;
}

// GetSequencePlayer @ 14ac784c0

UTemplateSequencePlayer * __thiscall
ATemplateSequenceActor::GetSequencePlayer(ATemplateSequenceActor *this)

{
  UTemplateSequencePlayer *pUVar1;
  
  pUVar1 = (this->SequencePlayer).field0_0x0.DebugPtr;
  if ((pUVar1 != (UTemplateSequencePlayer *)0x0) && (pUVar1->_padding_ != 0)) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    return pUVar1;
  }
  return (UTemplateSequencePlayer *)0x0;
}

// InitializePlayer @ 14ac7a380

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
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall ATemplateSequenceActor::InitializePlayer(ATemplateSequenceActor *this)

{
  bool bVar1;
  UWorld *pUVar2;
  UTemplateSequence *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FString *pFVar6;
  UTemplateSequencePlayer *this_00;
  FName local_res8;
  FString local_78;
  FString local_68;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  undefined1 local_38 [8];
  FDelegateAllocation local_30;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if ((this->TemplateSequence).AssetPath.PackageName != (FName)0x0) {
    pUVar2 = AActor::GetWorld((AActor *)this);
    bVar1 = UWorld::IsGameWorld(pUVar2);
    if (bVar1) {
      pUVar3 = GetSequence(this);
      if (pUVar3 == (UTemplateSequence *)0x0) {
        bVar1 = (*IsAsyncLoading)();
        if (bVar1) {
          local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)OnSequenceLoaded;
          local_78.Data._8_8_ = (ulonglong)local_58.Accessor._4_4_ << 0x20;
          local_38 = (undefined1  [8])0x0;
          local_30.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_30.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
                     (FWriteAccessScope *)&local_58);
          local_40 = &local_30;
          puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_30);
          if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = &
                      ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar5 = FDelegateHandle::GenerateNewID();
            puVar4[2] = uVar5;
            *puVar4 = &
                      ___7__TBaseUObjectMethodDelegateInstance__0A_VATemplateSequenceActor____A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar4[3] = 0;
            local_res8 = (FName)this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
            puVar4[4] = local_78.Data.AllocatorInstance.Data;
            puVar4[5] = local_78.Data._8_8_;
          }
          if (local_58.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                      ((FMRSWRecursiveAccessDetector *)
                       CONCAT44(local_58.Accessor._4_4_,(int)local_58.Accessor),&local_58);
          }
          local_res8 = (this->TemplateSequence).AssetPath.PackageName;
          bVar1 = local_res8 != (FName)0x0;
          if (bVar1) {
            pFVar6 = ::FName::ToString(&local_res8,(FString *)&local_58);
          }
          else {
            local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            pFVar6 = &local_78;
            local_78.Data.ArrayNum = 0;
            local_78.Data.ArrayMax = 0;
          }
          local_68.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
          (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_68.Data.ArrayNum = (pFVar6->Data).ArrayNum;
          local_68.Data.ArrayMax = (pFVar6->Data).ArrayMax;
          (pFVar6->Data).ArrayNum = 0;
          (pFVar6->Data).ArrayMax = 0;
          if ((bVar1) &&
             ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0)) {
            FMemory::Free((void *)local_58._0_8_);
          }
          if ((!bVar1) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
          {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          LoadPackageAsync(&local_68,
                           (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                            *)local_38,0,PKG_None,-1);
          if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
          return;
        }
        pUVar3 = LoadSequence(this);
        this_00 = (this->SequencePlayer).field0_0x0.DebugPtr;
        bVar1 = pUVar3 == (UTemplateSequence *)this_00->_padding_;
      }
      else {
        this_00 = (this->SequencePlayer).field0_0x0.DebugPtr;
        bVar1 = pUVar3 == (UTemplateSequence *)this_00->_padding_;
      }
      if (!bVar1) {
        pUVar2 = AActor::GetWorld((AActor *)this);
        UTemplateSequencePlayer::Initialize
                  (this_00,(UMovieSceneSequence *)pUVar3,pUVar2,&this->PlaybackSettings);
      }
    }
  }
  return;
}

// LoadSequence @ 14ac7a710

UTemplateSequence * __thiscall ATemplateSequenceActor::LoadSequence(ATemplateSequenceActor *this)

{
  int iVar1;
  UTemplateSequence *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UTemplateSequence *)
           FSoftObjectPath::TryLoad(&this->TemplateSequence,(FUObjectSerializeContext *)0x0);
  if (pUVar2 != (UTemplateSequence *)0x0) {
    pUVar3 = UTemplateSequence::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UTemplateSequence *)0x0;
}

// OnSequenceLoaded @ 14ac7c620

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
ATemplateSequenceActor::OnSequenceLoaded
          (ATemplateSequenceActor *this,FName *param_1,UPackage *param_2,Type param_3)

{
  int iVar1;
  UTemplateSequencePlayer *this_00;
  UMovieSceneSequence *pUVar2;
  UClass *pUVar3;
  UWorld *pUVar4;
  
  if (param_3 != Succeeded) {
    return;
  }
  pUVar2 = (UMovieSceneSequence *)FSoftObjectPath::ResolveObject(&this->TemplateSequence);
  if (pUVar2 != (UMovieSceneSequence *)0x0) {
    pUVar3 = UTemplateSequence::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14ac7c675;
  }
  pUVar2 = (UMovieSceneSequence *)0x0;
LAB_14ac7c675:
  this_00 = (this->SequencePlayer).field0_0x0.DebugPtr;
  if ((this_00 != (UTemplateSequencePlayer *)0x0) &&
     ((UMovieSceneSequence *)this_00->_padding_ != pUVar2)) {
    pUVar4 = AActor::GetWorld((AActor *)this);
    UTemplateSequencePlayer::Initialize(this_00,pUVar2,pUVar4,&this->PlaybackSettings);
  }
  return;
}

// PostInitProperties @ 14ac7cc10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall ATemplateSequenceActor::PostInitProperties(ATemplateSequenceActor *this)

{
  UTemplateSequencePlayer *this_00;
  ATemplateSequenceActor *local_18;
  longlong *local_10;
  
  AActor::PostInitProperties((AActor *)this);
  this_00 = (this->SequencePlayer).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_10 = &this->_padding_;
  if (this == (ATemplateSequenceActor *)0x0) {
    local_10 = (longlong *)0x0;
  }
  local_18 = this;
  UMovieSceneSequencePlayer::SetPlaybackClient
            ((UMovieSceneSequencePlayer *)this_00,
             (TScriptInterface<IMovieScenePlaybackClient> *)&local_18);
  return;
}

// PostInitializeComponents @ 14ac7cc80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall ATemplateSequenceActor::PostInitializeComponents(ATemplateSequenceActor *this)

{
  AActor::PostInitializeComponents((AActor *)this);
  UMovieSceneSequencePlayer::InitializeForTick
            ((UMovieSceneSequencePlayer *)(this->SequencePlayer).field0_0x0.DebugPtr,(UObject *)this
            );
  InitializePlayer(this);
  return;
}

// PostLoad @ 14ac7ccb0

void __thiscall ATemplateSequenceActor::PostLoad(ATemplateSequenceActor *this)

{
  byte *pbVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPackageFileVersion FVar6;
  ForAnyElementType *pFVar7;
  ATemplateSequenceActor *apAStack_18 [2];
  
  UObject::PostLoad((UObject *)this);
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pFVar7 = (ForAnyElementType *)(lVar2 + 0x1a8);
    apAStack_18[0] = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    if ((pFVar7->Data <= (FScriptContainerElement *)apAStack_18) &&
       ((FScriptContainerElement *)apAStack_18 <
        pFVar7->Data + (longlong)*(int *)(lVar2 + 0x1b4) * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = *(int *)(lVar2 + 0x1b0);
    if (iVar5 == *(int *)(lVar2 + 0x1b4)) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar7,(int *)(lVar2 + 0x1b4));
    }
    *(int *)(lVar2 + 0x1b0) = iVar5 + 1;
    *(ATemplateSequenceActor **)(pFVar7->Data + (longlong)iVar5 * 8) = apAStack_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (apAStack_18[0] != (ATemplateSequenceActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)apAStack_18[0]);
    }
  }
  FVar6 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  if (*(int *)FVar6 < 0x156) {
    *(byte *)((longlong)&this->_padding_ + 3) =
         -((char)this->_padding_ != '\0') & 8U | *(byte *)((longlong)&this->_padding_ + 3) & 0xf7;
  }
  if ((this->_padding_ & 0x10) != 0) {
    pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
    *pbVar1 = *pbVar1 & 0xfb;
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 | 1;
  return;
}

// RetrieveBindingOverrides @ 14ac7ee10

bool __thiscall
ATemplateSequenceActor::RetrieveBindingOverrides
          (ATemplateSequenceActor *this,FGuid *param_1,FMovieSceneSequenceID param_2,
          TArray<UObject_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_3)

{
  ForElementType<UObject_*> FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  FMovieSceneSpawnable *pFVar8;
  ForElementType<UObject_*> FVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  UObject *local_18 [2];
  
  pUVar6 = FSoftObjectPath::ResolveObject((FSoftObjectPath *)&this->_padding_);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = UTemplateSequence::StaticClass();
    iVar5 = (int)pUVar7->_padding_;
    if ((iVar5 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
        &pUVar7->_padding_)) {
      if ((*(UMovieScene **)&pUVar6[2].field_0x20 == (UMovieScene *)0x0) ||
         (iVar5 = UMovieScene::GetSpawnableCount(*(UMovieScene **)&pUVar6[2].field_0x20), iVar5 < 1)
         ) {
        uVar10 = 0;
        uVar13 = 0;
        uVar12 = 0;
        uVar11 = 0;
      }
      else {
        pFVar8 = UMovieScene::GetSpawnable(*(UMovieScene **)&pUVar6[2].field_0x20,0);
        uVar13 = (pFVar8->Guid).A;
        uVar12 = (pFVar8->Guid).B;
        uVar10 = (pFVar8->Guid).D;
        uVar11 = (pFVar8->Guid).C;
      }
      if ((((uVar10 != 0 || uVar11 != 0) || uVar13 != 0) || uVar12 != 0) &&
         (((uVar10 == param_1->D && uVar11 == param_1->C) && uVar12 == param_1->B) &&
          uVar13 == param_1->A)) {
        local_18[0] = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        if (local_18[0] != (UObject *)0x0) {
          FVar1 = (param_3->AllocatorInstance).SecondaryData;
          FVar9 = (ForElementType<UObject_*>)param_3;
          if (FVar1 != (ForElementType<UObject_*>)0x0) {
            FVar9 = FVar1;
          }
          if ((ulonglong)FVar9 <= local_18) {
            FVar9 = (ForElementType<UObject_*>)param_3;
            if (FVar1 != (ForElementType<UObject_*>)0x0) {
              FVar9 = FVar1;
            }
            if ((local_18 < (UObject **)((longlong)FVar9 + (longlong)param_3->ArrayMax * 8)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
          }
          iVar5 = param_3->ArrayNum;
          if (iVar5 == param_3->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                              (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          param_3->ArrayNum = iVar5 + 1;
          FVar1 = (param_3->AllocatorInstance).SecondaryData;
          if (FVar1 != (ForElementType<UObject_*>)0x0) {
            param_3 = (TArray<UObject_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                      FVar1;
          }
          *(UObject **)((longlong)param_3 + (longlong)iVar5 * 8) = local_18[0];
        }
        return (char)this->_padding_ == '\0';
      }
    }
  }
  return true;
}

// SetBinding @ 14ac7fe50

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
ATemplateSequenceActor::SetBinding(ATemplateSequenceActor *this,AActor *param_1,bool param_2)

{
  FGuid *pFVar1;
  int iVar2;
  uint uVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  FMovieSceneSpawnable *pFVar6;
  FMovieSceneEvaluationState *this_00;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  AActor *local_res8;
  FGuid local_18;
  
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->BindingOverride,(FObjectPtr)&local_res8);
  (this->BindingOverride).bOverridesDefault = param_2;
  pUVar4 = FSoftObjectPath::ResolveObject(&this->TemplateSequence);
  uVar8 = 0;
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = UTemplateSequence::StaticClass();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar5->_padding_)) goto LAB_14ac7fed4;
  }
  pUVar4 = (UObject *)0x0;
LAB_14ac7fed4:
  if ((this->SequencePlayer).field0_0x0.DebugPtr == (UTemplateSequencePlayer *)0x0) {
    return;
  }
  if (pUVar4 != (UObject *)0x0) {
    if ((*(UMovieScene **)&pUVar4[2].field_0x20 == (UMovieScene *)0x0) ||
       (iVar2 = UMovieScene::GetSpawnableCount(*(UMovieScene **)&pUVar4[2].field_0x20), iVar2 < 1))
    {
      uVar9 = 0;
      local_18.A = 0;
      local_18.B = 0;
      local_18.C = 0;
      local_18.D = 0;
      uVar7 = uVar9;
      uVar3 = uVar9;
    }
    else {
      pFVar6 = UMovieScene::GetSpawnable(*(UMovieScene **)&pUVar4[2].field_0x20,0);
      pFVar1 = &pFVar6->Guid;
      uVar9 = pFVar1->A;
      local_18.A = pFVar1->A;
      local_18.B = pFVar1->B;
      uVar8 = (pFVar6->Guid).D;
      local_18.C = (pFVar6->Guid).C;
      local_18.D = (pFVar6->Guid).D;
      uVar7 = (pFVar6->Guid).B;
      uVar3 = (pFVar6->Guid).C;
    }
    if (((uVar8 != 0 || uVar3 != 0) || uVar7 != 0) || uVar9 != 0) {
      this_00 = IMovieScenePlayer::GetEvaluationState
                          ((IMovieScenePlayer *)
                           &((this->SequencePlayer).field0_0x0.DebugPtr)->_padding_);
      FMovieSceneEvaluationState::Invalidate(this_00,&local_18,&MovieSceneSequenceID::Root);
    }
    return;
  }
  return;
}

// SetSequence @ 14ac801d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
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
ATemplateSequenceActor::SetSequence(ATemplateSequenceActor *this,UTemplateSequence *param_1)

{
  FUtf8String *pFVar1;
  FScriptContainerElement *pFVar2;
  UTemplateSequencePlayer *this_00;
  bool bVar3;
  UWorld *pUVar4;
  FSoftObjectPath local_28;
  
  bVar3 = UMovieSceneSequencePlayer::IsPlaying
                    ((UMovieSceneSequencePlayer *)(this->SequencePlayer).field0_0x0.DebugPtr);
  if (!bVar3) {
    local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_28.AssetPath.PackageName.Number = 0;
    local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_28.AssetPath.AssetName.Number = 0;
    local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.SubPathString.Data.ArrayNum = 0;
    local_28.SubPathString.Data.ArrayMax = 0;
    FSoftObjectPath::SetPath(&local_28,(UObject *)param_1);
    pFVar1 = &(this->TemplateSequence).SubPathString;
    (this->TemplateSequence).AssetPath.PackageName = local_28.AssetPath.PackageName;
    (this->TemplateSequence).AssetPath.AssetName = local_28.AssetPath.AssetName;
    if (pFVar1 != &local_28.SubPathString) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_28.SubPathString.Data.AllocatorInstance.Data;
      (this->TemplateSequence).SubPathString.Data.ArrayNum = local_28.SubPathString.Data.ArrayNum;
      (this->TemplateSequence).SubPathString.Data.ArrayMax = local_28.SubPathString.Data.ArrayMax;
      local_28.SubPathString.Data.ArrayNum = 0;
      local_28.SubPathString.Data.ArrayMax = 0;
      local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
    }
    if (param_1 != (UTemplateSequence *)0x0) {
      this_00 = (this->SequencePlayer).field0_0x0.DebugPtr;
      pUVar4 = AActor::GetWorld((AActor *)this);
      UTemplateSequencePlayer::Initialize
                (this_00,(UMovieSceneSequence *)param_1,pUVar4,&this->PlaybackSettings);
    }
  }
  return;
}

// StaticRegisterNativesATemplateSequenceActor @ 14ac80440

void __cdecl ATemplateSequenceActor::StaticRegisterNativesATemplateSequenceActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_ATemplateSequenceActor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// ValidateGeneratedRepEnums @ 14ac81cb0

void __thiscall
ATemplateSequenceActor::ValidateGeneratedRepEnums
          (ATemplateSequenceActor *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&Name_SequencePlayer,L"SequencePlayer");
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
  if (Name_SequencePlayer != FVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\TemplateSequence\\UHT\\TemplateSequenceActor.gen.cpp"
                       ,0x220,
                       L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATemplateSequenceActor"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// _getUObject @ 14ac82600

UObject * __thiscall ATemplateSequenceActor::_getUObject(ATemplateSequenceActor *this)

{
  return (UObject *)&this[-1]._padding_;
}

// execGetSequence @ 14ac82e80

void __cdecl ATemplateSequenceActor::execGetSequence(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = FSoftObjectPath::ResolveObject((FSoftObjectPath *)(param_1 + 0x13));
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = UTemplateSequence::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      *(UObject **)param_3 = pUVar2;
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetSequencePlayer @ 14ac82f00

void __cdecl
ATemplateSequenceActor::execGetSequencePlayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = *(UObject **)&param_1[0x12].field_0x20;
  if ((pUVar1 != (UObject *)0x0) && (*(longlong *)(pUVar1 + 0x12) != 0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    *(UObject **)param_3 = pUVar1;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execLoadSequence @ 14ac82f70

void __cdecl
ATemplateSequenceActor::execLoadSequence(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = FSoftObjectPath::TryLoad
                     ((FSoftObjectPath *)(param_1 + 0x13),(FUObjectSerializeContext *)0x0);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = UTemplateSequence::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      *(UObject **)param_3 = pUVar2;
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execSetBinding @ 14ac82ff0

void __cdecl ATemplateSequenceActor::execSetBinding(UObject *param_1,FFrame *param_2,void *param_3)

{
  FGuid *pFVar1;
  FProperty *pFVar2;
  int iVar3;
  uint uVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  FMovieSceneSpawnable *pFVar7;
  FMovieSceneEvaluationState *this;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  int local_res8 [2];
  UObject *local_res10 [2];
  UObject *local_res20;
  FGuid local_38;
  
  uVar9 = 0;
  local_res10[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar10 = 0;
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar11 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res20 = local_res10[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10[0]);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&param_1[0x13].field_0x20,(FObjectPtr)&local_res20);
  *(bool *)(param_1 + 0x14) = bVar11;
  pUVar5 = FSoftObjectPath::ResolveObject((FSoftObjectPath *)(param_1 + 0x13));
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = UTemplateSequence::StaticClass();
    iVar3 = (int)pUVar6->_padding_;
    if ((iVar3 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
        &pUVar6->_padding_)) goto LAB_14ac8310a;
  }
  pUVar5 = (UObject *)0x0;
LAB_14ac8310a:
  if (*(longlong *)&param_1[0x12].field_0x20 == 0) {
    return;
  }
  if (pUVar5 != (UObject *)0x0) {
    if ((*(UMovieScene **)&pUVar5[2].field_0x20 == (UMovieScene *)0x0) ||
       (iVar3 = UMovieScene::GetSpawnableCount(*(UMovieScene **)&pUVar5[2].field_0x20), iVar3 < 1))
    {
      local_38.A = 0;
      local_38.B = 0;
      local_38.C = 0;
      local_38.D = 0;
      uVar8 = uVar10;
      uVar4 = uVar10;
    }
    else {
      pFVar7 = UMovieScene::GetSpawnable(*(UMovieScene **)&pUVar5[2].field_0x20,0);
      pFVar1 = &pFVar7->Guid;
      uVar10 = pFVar1->A;
      local_38.A = pFVar1->A;
      local_38.B = pFVar1->B;
      uVar9 = (pFVar7->Guid).D;
      local_38.C = (pFVar7->Guid).C;
      local_38.D = (pFVar7->Guid).D;
      uVar8 = (pFVar7->Guid).B;
      uVar4 = (pFVar7->Guid).C;
    }
    if (((uVar9 != 0 || uVar4 != 0) || uVar10 != 0) || uVar8 != 0) {
      this = IMovieScenePlayer::GetEvaluationState
                       ((IMovieScenePlayer *)(*(longlong *)&param_1[0x12].field_0x20 + 0x28));
      FMovieSceneEvaluationState::Invalidate(this,&local_38,&MovieSceneSequenceID::Root);
    }
    return;
  }
  return;
}

// execSetSequence @ 14ac831d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ATemplateSequenceActor::execSetSequence(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  UTemplateSequencePlayer *this;
  UMovieSceneSequence *pUVar3;
  bool bVar4;
  UWorld *pUVar5;
  UMovieSceneSequence *local_res8;
  FSoftObjectPath local_28;
  
  local_res8 = (UMovieSceneSequence *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar3 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar4 = UMovieSceneSequencePlayer::IsPlaying
                    (*(UMovieSceneSequencePlayer **)&param_1[0x12].field_0x20);
  if (!bVar4) {
    local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_28.AssetPath.PackageName.Number = 0;
    local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_28.AssetPath.AssetName.Number = 0;
    local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.SubPathString.Data.ArrayNum = 0;
    local_28.SubPathString.Data.ArrayMax = 0;
    FSoftObjectPath::SetPath(&local_28,(UObject *)pUVar3);
    puVar1 = &param_1[0x13].field_0x10;
    *(uint *)&param_1[0x13].field_0x0 = local_28.AssetPath.PackageName.ComparisonIndex.Value;
    *(uint *)&param_1[0x13].field_0x4 = local_28.AssetPath.PackageName.Number;
    *(uint *)&param_1[0x13].field_0x8 = local_28.AssetPath.AssetName.ComparisonIndex.Value;
    *(uint *)&param_1[0x13].field_0xc = local_28.AssetPath.AssetName.Number;
    if ((FUtf8String *)puVar1 != &local_28.SubPathString) {
      if (*(void **)puVar1 != (void *)0x0) {
        FMemory::Free(*(void **)puVar1);
      }
      *(FScriptContainerElement **)puVar1 = local_28.SubPathString.Data.AllocatorInstance.Data;
      *(int *)&param_1[0x13].field_0x18 = local_28.SubPathString.Data.ArrayNum;
      *(int *)&param_1[0x13].field_0x1c = local_28.SubPathString.Data.ArrayMax;
      local_28.SubPathString.Data.ArrayNum = 0;
      local_28.SubPathString.Data.ArrayMax = 0;
      local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
    }
    if (pUVar3 != (UMovieSceneSequence *)0x0) {
      this = *(UTemplateSequencePlayer **)&param_1[0x12].field_0x20;
      pUVar5 = AActor::GetWorld((AActor *)param_1);
      UTemplateSequencePlayer::Initialize
                (this,pUVar3,pUVar5,(FMovieSceneSequencePlaybackSettings *)&param_1[0x11].field_0x20
                );
    }
  }
  return;
}

