// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 21

// StaticClass @ 146055e50

UClass * __cdecl UMovieSceneSpawnableBindingBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSpawnableBindingBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSpawnableBindingBase",
               &Z_Registration_Info_UClass_UMovieSceneSpawnableBindingBase.InnerSingleton,
               StaticRegisterNativesUMovieSceneSpawnableBindingBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneSpawnableBindingBase>,
               InternalVTableHelperCtorCaller<UMovieSceneSpawnableBindingBase>,local_res8,
               UMovieSceneCustomBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSpawnableBindingBase.InnerSingleton;
}

// UMovieSceneSpawnableBindingBase @ 146059450

UMovieSceneSpawnableBindingBase * __thiscall
UMovieSceneSpawnableBindingBase::UMovieSceneSpawnableBindingBase
          (UMovieSceneSpawnableBindingBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->SpawnOwnership = InnerSequence;
  this->bContinuouslyRespawn = false;
  this->_padding_ = (longlong)&___7UMovieSceneSpawnableBindingBase__6B_;
  return this;
}

// UMovieSceneSpawnableBindingBase @ 146059480

UMovieSceneSpawnableBindingBase * __thiscall
UMovieSceneSpawnableBindingBase::UMovieSceneSpawnableBindingBase
          (UMovieSceneSpawnableBindingBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->SpawnOwnership = InnerSequence;
  this->bContinuouslyRespawn = false;
  this->_padding_ = (longlong)&___7UMovieSceneSpawnableBindingBase__6B_;
  return this;
}

// ~UMovieSceneSpawnableBindingBase @ 146059710

void __thiscall
UMovieSceneSpawnableBindingBase::~UMovieSceneSpawnableBindingBase
          (UMovieSceneSpawnableBindingBase *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneCustomBinding__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AsSpawnable @ 14605a1e0

UMovieSceneSpawnableBindingBase * __thiscall
UMovieSceneSpawnableBindingBase::AsSpawnable
          (UMovieSceneSpawnableBindingBase *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// CopyObjectTemplate @ 14605a250

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneSpawnableBindingBase::CopyObjectTemplate
          (UMovieSceneSpawnableBindingBase *this,UObject *param_1,UMovieSceneSequence *param_2)

{
  return;
}

// DestroySpawnedObject @ 14605a5f0

void __thiscall
UMovieSceneSpawnableBindingBase::DestroySpawnedObject
          (UMovieSceneSpawnableBindingBase *this,UObject *param_1)

{
  if (param_1 != (UObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014605a5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x330))();
    return;
  }
  return;
}

// DestroySpawnedObjectInternal @ 14605a610

void __thiscall
UMovieSceneSpawnableBindingBase::DestroySpawnedObjectInternal
          (UMovieSceneSpawnableBindingBase *this,UObject *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Bindings\\MovieSceneSpawnableBinding.h"
             ,0x5e,L"Pure virtual not implemented (%s)");
  return;
}

// GetObjectTemplate @ 14605ae80

UObject * __thiscall
UMovieSceneSpawnableBindingBase::GetObjectTemplate(UMovieSceneSpawnableBindingBase *this)

{
  return (UObject *)0x0;
}

// GetPrivateStaticClass @ 14605bf00

UClass * __cdecl UMovieSceneSpawnableBindingBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSpawnableBindingBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSpawnableBindingBase",
               &Z_Registration_Info_UClass_UMovieSceneSpawnableBindingBase.InnerSingleton,
               StaticRegisterNativesUMovieSceneSpawnableBindingBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneSpawnableBindingBase>,
               InternalVTableHelperCtorCaller<UMovieSceneSpawnableBindingBase>,local_res8,
               UMovieSceneCustomBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSpawnableBindingBase.InnerSingleton;
}

// GetSpawnName @ 14605c080

FName __thiscall
UMovieSceneSpawnableBindingBase::GetSpawnName
          (UMovieSceneSpawnableBindingBase *this,FGuid *param_1,UMovieScene *param_2,
          FMovieSceneSequenceID *param_3,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_4)

{
  longlong in_stack_00000030;
  
  param_1->A = 0;
  param_1->B = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(in_stack_00000030 + 8));
  return (FName)param_1;
}

// GetWorldContext @ 14605c1c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall
UMovieSceneSpawnableBindingBase::GetWorldContext
          (UMovieSceneSpawnableBindingBase *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1)

{
  UObject *pUVar1;
  UWorld *pUVar2;
  
  pUVar1 = FWeakObjectPtr::Get(&(param_1->Object->WeakPlaybackContext).WeakPtr);
  if (pUVar1 == (UObject *)0x0) {
    pUVar2 = (UWorld *)0x0;
  }
  else {
    pUVar2 = (UWorld *)(**(code **)(*(longlong *)pUVar1 + 0x180))(pUVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return pUVar2;
}

// PostSpawnObject @ 14605c3a0

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
UMovieSceneSpawnableBindingBase::PostSpawnObject
          (UMovieSceneSpawnableBindingBase *this,UObject *param_1,UWorld *param_2,FGuid *param_3,
          int param_4,UMovieScene *param_5,FMovieSceneSequenceID *param_6,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_7)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_7->SharedReferenceCount).ReferenceController);
  return;
}

// PreDestroyObject @ 14605c3c0

void __thiscall
UMovieSceneSpawnableBindingBase::PreDestroyObject
          (UMovieSceneSpawnableBindingBase *this,UObject *param_1,FGuid *param_2,int param_3,
          FMovieSceneSequenceID *param_4)

{
  return;
}

// ResolveBinding @ 14605c520

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneBindingResolveResult * __thiscall
UMovieSceneSpawnableBindingBase::ResolveBinding
          (UMovieSceneSpawnableBindingBase *this,
          FMovieSceneBindingResolveResult *__return_storage_ptr__,
          FMovieSceneBindingResolveParams *param_1,int param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3)

{
  TObjectPtr<UObject>_u_0 *pTVar1;
  code *pcVar2;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *pTVar3;
  bool bVar4;
  int iVar5;
  FMovieSceneSpawnRegister *this_00;
  TWeakObjectPtr<UObject,FWeakObjectPtr> this_01;
  TObjectPtr<UObject>_u_0 TVar6;
  FMovieSceneBindingResolveResult *pFVar7;
  TObjectPtr<UObject>_u_0 local_18 [2];
  
  pTVar3 = param_3;
  (__return_storage_ptr__->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Objects).ArrayNum = 0;
  (__return_storage_ptr__->Objects).ArrayMax = 0;
  (__return_storage_ptr__->Object).field0_0x0.DebugPtr = (UObject *)0x0;
  this_00 = UE::MovieScene::FSharedPlaybackState::FindCapability<FMovieSceneSpawnRegister>
                      (param_3->Object);
  if (this_00 != (FMovieSceneSpawnRegister *)0x0) {
    this_01 = FMovieSceneSpawnRegister::FindSpawnedObject
                        (this_00,(FGuid *)&param_3,
                         (FMovieSceneSequenceID *)&param_1->ObjectBindingID,(int)param_1 + 0x18);
    TVar6.DebugPtr = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
    if (TVar6.DebugPtr != (UObject *)0x0) {
      local_18[0].DebugPtr = TVar6.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(TVar6.DebugPtr);
      }
      pTVar1 = (TObjectPtr<UObject>_u_0 *)(__return_storage_ptr__->Objects).AllocatorInstance.Data;
      if ((pTVar1 <= local_18) && (local_18 < pTVar1 + (__return_storage_ptr__->Objects).ArrayMax))
      {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FMovieSceneBindingResolveResult *)(*pcVar2)();
          return pFVar7;
        }
      }
      iVar5 = (__return_storage_ptr__->Objects).ArrayNum;
      if (iVar5 == (__return_storage_ptr__->Objects).ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)__return_storage_ptr__,
                           &(__return_storage_ptr__->Objects).ArrayMax);
      }
      (__return_storage_ptr__->Objects).ArrayNum = iVar5 + 1;
      ((TObjectPtr<UObject>_u_0 *)
      ((__return_storage_ptr__->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8))->DebugPtr =
           (UObject *)local_18[0];
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (local_18[0].DebugPtr != (UObject *)0x0) {
          UE::GC::MarkAsReachable(local_18[0].DebugPtr);
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(TVar6.DebugPtr);
        }
      }
      (__return_storage_ptr__->Object).field0_0x0.DebugPtr = (UObject *)TVar6;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar3->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// SetObjectTemplate @ 14605cb80

void __thiscall
UMovieSceneSpawnableBindingBase::SetObjectTemplate
          (UMovieSceneSpawnableBindingBase *this,UObject *param_1)

{
  return;
}

// SpawnObject @ 14605cb90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __thiscall
UMovieSceneSpawnableBindingBase::SpawnObject
          (UMovieSceneSpawnableBindingBase *this,FGuid *param_1,int param_2,UMovieScene *param_3,
          FMovieSceneSequenceID *param_4,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_5)

{
  int iVar1;
  code *pcVar2;
  FName FVar3;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *pTVar4;
  UWorldProxy UVar5;
  UObject *pUVar6;
  FString *pFVar7;
  UClass *pUVar8;
  wchar_t *pwVar9;
  FName local_res8;
  FGuid *local_res10;
  int local_res18;
  FMovieSceneSequenceID *pFVar10;
  ulonglong uVar11;
  undefined1 local_68 [16];
  FSharedPlaybackState *local_58;
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [16];
  
  pTVar4 = param_5;
  pcVar2 = *(code **)(this->_padding_ + 0x338);
  local_58 = param_5->Object;
  local_50 = (param_5->SharedReferenceCount).ReferenceController;
  if (local_50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res10 = param_1;
  local_res18 = param_2;
  UVar5.World = (UWorld *)(*pcVar2)(this,&local_58);
  pwVar9 = L"";
  if ((UVar5.World == (UWorld *)0x0) && (UVar5 = GWorld, 2 < (byte)LogMovieScene._0_1_)) {
    param_5 = (TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)param_3->_padding_;
    ::FName::ToString((FName *)&param_5,(FString *)local_68);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
    UVar5 = GWorld;
    if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_68._0_8_);
      UVar5 = GWorld;
    }
  }
  pcVar2 = *(code **)(this->_padding_ + 0x340);
  local_68._0_8_ = pTVar4->Object;
  local_68._8_8_ = (pTVar4->SharedReferenceCount).ReferenceController;
  if ((TReferenceControllerBase<1> *)local_68._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_68._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_68._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar10 = param_4;
  (*pcVar2)(this,&local_res8,param_1,param_3,param_4,local_68);
  if (local_res8 != (FName)0x0) {
    uVar11 = (ulonglong)pFVar10 & 0xffffffff00000000;
    pUVar6 = StaticFindObjectFast
                       ((UClass *)0x0,
                        (UObject *)((UVar5.World)->PersistentLevel).field0_0x0.DebugPtr,local_res8,
                        None,RF_NoFlags,Borrowed);
    param_1 = local_res10;
    if (pUVar6 != (UObject *)0x0) {
      FVar3.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x10;
      FVar3.Number = *(uint *)&pUVar6->field_0x14;
      param_5 = (TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)0x0;
      uVar11 = uVar11 & 0xffffffff00000000;
      MakeUniqueObjectName
                ((UObject *)&param_5,(UClass *)((UVar5.World)->PersistentLevel).field0_0x0.DebugPtr,
                 FVar3,None);
      local_68._0_8_ = *(undefined8 *)(*(longlong *)pUVar6 + 0x170);
      pFVar7 = ::FName::ToString((FName *)&param_5,(FString *)local_48);
      if ((pFVar7->Data).ArrayNum != 0) {
        pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
      (*(code *)local_68._0_8_)(pUVar6,pwVar9,0,0,uVar11);
      param_1 = local_res10;
      if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_48._0_8_);
        param_1 = local_res10;
      }
    }
  }
  pcVar2 = *(code **)(this->_padding_ + 0x328);
  local_68._0_8_ = pTVar4->Object;
  local_68._8_8_ = (pTVar4->SharedReferenceCount).ReferenceController;
  if ((TReferenceControllerBase<1> *)local_68._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_68._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_68._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pUVar6 = (UObject *)
           (*pcVar2)(this,UVar5.World,local_res8,param_1,local_res18,param_3,param_4,local_68);
  if (pUVar6 == (UObject *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar4->SharedReferenceCount).ReferenceController);
    pUVar6 = (UObject *)0x0;
  }
  else {
    pUVar8 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar8->_padding_)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FName::FName(&SequencerActorTag,L"SequencerActor");
        _Init_thread_footer(&::_TSS0);
      }
      TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)&pUVar6[0xc].field_0x18,
                 &SequencerActorTag);
    }
    pcVar2 = *(code **)(this->_padding_ + 0x348);
    local_48._0_8_ = pTVar4->Object;
    local_48._8_8_ = (pTVar4->SharedReferenceCount).ReferenceController;
    if ((TReferenceControllerBase<1> *)local_48._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_48._8_8_)->SharedReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_48._8_8_)->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar2)(this,pUVar6,UVar5.World,param_1,local_res18,param_3,param_4,local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar4->SharedReferenceCount).ReferenceController);
  }
  return pUVar6;
}

// SpawnObjectInternal @ 14605ce90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __thiscall
UMovieSceneSpawnableBindingBase::SpawnObjectInternal
          (UMovieSceneSpawnableBindingBase *this,UWorld *param_1,FName param_2,FGuid *param_3,
          int param_4,UMovieScene *param_5,FMovieSceneSequenceID *param_6,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_7)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Bindings\\MovieSceneSpawnableBinding.h"
             ,0x5b,L"Pure virtual not implemented (%s)");
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_7->SharedReferenceCount).ReferenceController);
  return (UObject *)0x0;
}

// StaticRegisterNativesUMovieSceneSpawnableBindingBase @ 14605d0a0

void __cdecl
UMovieSceneSpawnableBindingBase::StaticRegisterNativesUMovieSceneSpawnableBindingBase(void)

{
  return;
}

// SupportsObjectTemplates @ 14605d1d0

bool __thiscall
UMovieSceneSpawnableBindingBase::SupportsObjectTemplates(UMovieSceneSpawnableBindingBase *this)

{
  return false;
}

// WillSpawnObject @ 14605d220

bool __thiscall
UMovieSceneSpawnableBindingBase::WillSpawnObject
          (UMovieSceneSpawnableBindingBase *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

