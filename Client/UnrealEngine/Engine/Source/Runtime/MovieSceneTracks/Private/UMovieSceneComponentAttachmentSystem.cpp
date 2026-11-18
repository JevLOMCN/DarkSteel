// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 14

// StaticClass @ 146723290

UClass * __cdecl UMovieSceneComponentAttachmentSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneComponentAttachmentSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneComponentAttachmentSystem",
               &Z_Registration_Info_UClass_UMovieSceneComponentAttachmentSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneComponentAttachmentSystem,0x1d8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneComponentAttachmentSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneComponentAttachmentSystem>,local_res8,
               UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneComponentAttachmentSystem.InnerSingleton;
}

// UMovieSceneComponentAttachmentSystem @ 146763090

UMovieSceneComponentAttachmentSystem * __thiscall
UMovieSceneComponentAttachmentSystem::UMovieSceneComponentAttachmentSystem
          (UMovieSceneComponentAttachmentSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneEntityInstantiatorSystem__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  UE::MovieScene::
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>::
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>
            (&this->AttachmentTracker);
  (this->PendingAttachmentsToRestore).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingAttachmentsToRestore).ArrayNum = 0;
  (this->PendingAttachmentsToRestore).ArrayMax = 0;
  return this;
}

// UMovieSceneComponentAttachmentSystem @ 1467630e0

UMovieSceneComponentAttachmentSystem * __thiscall
UMovieSceneComponentAttachmentSystem::UMovieSceneComponentAttachmentSystem
          (UMovieSceneComponentAttachmentSystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  EEntitySystemCategory EVar2;
  FMovieSceneTracksComponentTypes *pFVar3;
  FBuiltInComponentTypes *pFVar4;
  UClass *local_res8;
  UClass *local_res18;
  
  UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneEntityInstantiatorSystem__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  UE::MovieScene::
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>::
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>
            (&this->AttachmentTracker);
  (this->PendingAttachmentsToRestore).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingAttachmentsToRestore).ArrayNum = 0;
  (this->PendingAttachmentsToRestore).ArrayMax = 0;
  EVar2 = UE::MovieScene::FSystemInterrogator::GetExcludedFromInterrogationCategory();
  *(EEntitySystemCategory *)&this->_padding_ = (EEntitySystemCategory)this->_padding_ | EVar2;
  pFVar3 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  *(TComponentTypeID<FMovieSceneObjectBindingID> *)&this->_padding_ = pFVar3->AttachParentBinding;
  if ((this->_padding_ & 0x10) != 0) {
    local_res8 = (UClass *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    local_res18 = Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    local_res8 = (UClass *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    local_res18 = Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    local_res8 = (UClass *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    local_res18 = UMovieSceneComponentMobilitySystem::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    local_res8 = (UClass *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    local_res18 = UMovieSceneComponentAttachmentInvalidatorSystem::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    local_res8 = Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    local_res18 = (UClass *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    pFVar4 = UE::MovieScene::FBuiltInComponentTypes::Get();
    local_res8 = (UClass *)this->_padding_;
    FVar1.Value = *(ushort *)&pFVar4->BoundObject;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    pFVar4 = UE::MovieScene::FBuiltInComponentTypes::Get();
    local_res8 = (UClass *)this->_padding_;
    FVar1.Value = (pFVar4->SymbolicTags).CreatesEntities.Value;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
  }
  return this;
}

// ~UMovieSceneComponentAttachmentSystem @ 14676a110

void __thiscall
UMovieSceneComponentAttachmentSystem::~UMovieSceneComponentAttachmentSystem
          (UMovieSceneComponentAttachmentSystem *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneEntityInstantiatorSystem__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  pFVar1 = (this->PendingAttachmentsToRestore).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UE::MovieScene::
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>::
  ~TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>
            (&this->AttachmentTracker);
  this->_padding_ = (longlong)&___7IMovieScenePreAnimatedStateSystemInterface__6B_;
  UMovieSceneEntityInstantiatorSystem::~UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this);
  return;
}

// AddPendingDetach @ 1467762a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovieSceneComponentAttachmentSystem::AddPendingDetach
          (UMovieSceneComponentAttachmentSystem *this,USceneComponent *param_1,
          FPreAnimAttachment *param_2)

{
  int *piVar1;
  TArray<TTuple<USceneComponent_*,UE::MovieScene::FPreAnimAttachment>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FName *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  USceneComponent *local_28;
  FWeakObjectPtr FStack_20;
  FName FStack_18;
  FNameEntryId FStack_10;
  uint uStack_c;
  
  FStack_10.Value = *(uint *)&param_2->DetachParams;
  pTVar2 = &this->PendingAttachmentsToRestore;
  FStack_20 = (param_2->OldAttachParent).WeakPtr;
  FStack_18 = param_2->OldAttachSocket;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  local_28 = param_1;
  if ((pFVar4 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar4 + (longlong)(this->PendingAttachmentsToRestore).ArrayMax * 0x20)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar9 = (this->PendingAttachmentsToRestore).ArrayNum;
  piVar1 = &(this->PendingAttachmentsToRestore).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->PendingAttachmentsToRestore).ArrayNum = iVar9 + 1;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  pFVar4 = pFVar5 + (longlong)iVar9 * 0x20;
  *(USceneComponent **)pFVar4 = local_28;
  *(FWeakObjectPtr *)(pFVar4 + 8) = FStack_20;
  FVar7.Number = uStack_c;
  FVar7.ComparisonIndex.Value = FStack_10.Value;
  pFVar3 = (FName *)(pFVar5 + (longlong)iVar9 * 0x20 + 0x10);
  *pFVar3 = FStack_18;
  pFVar3[1] = FVar7;
  return;
}

// GetPrivateStaticClass @ 1467980e0

UClass * __cdecl UMovieSceneComponentAttachmentSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneComponentAttachmentSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneComponentAttachmentSystem",
               &Z_Registration_Info_UClass_UMovieSceneComponentAttachmentSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneComponentAttachmentSystem,0x1d8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneComponentAttachmentSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneComponentAttachmentSystem>,local_res8,
               UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneComponentAttachmentSystem.InnerSingleton;
}

// OnLink @ 1467a9af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneComponentAttachmentSystem::OnLink(UMovieSceneComponentAttachmentSystem *this)

{
  int iVar1;
  UMovieSceneEntitySystemLinker *pUVar2;
  UMovieSceneEntitySystem *pUVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  UClass *local_res8;
  FString local_28;
  FString local_18;
  
  pUVar2 = (UMovieSceneEntitySystemLinker *)this->_padding_;
  local_res8 = Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar3 = UMovieSceneEntitySystemLinker::LinkSystem
                     (pUVar2,(TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
  if (pUVar3 == (UMovieSceneEntitySystem *)0x0) {
    pFVar5 = GetTypeName<UMovieSceneRestorePreAnimatedStateSystem>(&local_28);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar6);
  }
  pUVar4 = Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar4->_padding_)) {
    pFVar5 = GetTypeName<UMovieSceneRestorePreAnimatedStateSystem>(&local_18);
    pwVar6 = L"";
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar5 = GetFullNameForCastLogError<UMovieSceneEntitySystem>(&local_28,pUVar3);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar6,pwVar7);
  }
  FMovieSceneEntitySystemGraph::AddReference
            ((FMovieSceneEntitySystemGraph *)(this->_padding_ + 0x2d8),
             (UMovieSceneEntitySystem *)this,pUVar3);
  pUVar2 = (UMovieSceneEntitySystemLinker *)this->_padding_;
  local_res8 = UMovieSceneComponentAttachmentInvalidatorSystem::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar3 = UMovieSceneEntitySystemLinker::LinkSystem
                     (pUVar2,(TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
  if (pUVar3 != (UMovieSceneEntitySystem *)0x0) {
    pUVar4 = UMovieSceneComponentAttachmentInvalidatorSystem::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      FMovieSceneEntitySystemGraph::AddReference
                ((FMovieSceneEntitySystemGraph *)(this->_padding_ + 0x2d8),
                 (UMovieSceneEntitySystem *)this,pUVar3);
      if ((char)(this->AttachmentTracker)._padding_ == '\0') {
        *(undefined1 *)&(this->AttachmentTracker)._padding_ = 1;
        local_res8 = (UClass *)this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=
                  (&(this->AttachmentTracker).WeakOwningSystem.WeakPtr,(FObjectPtr)&local_res8);
        TMulticastDelegateRegistration<void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
        ::
        AddRaw<UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>_>
                  ((TMulticastDelegateRegistration<void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
                    *)(this->_padding_ + 0x698),
                   (TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>
                    *)&local_res8,(pmf_d97fbea4)&this->AttachmentTracker);
        TMulticastDelegateRegistration<void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
        ::
        AddRaw<UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>_>
                  ((TMulticastDelegateRegistration<void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
                    *)(this->_padding_ + 0x6b8),
                   (TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>
                    *)&local_res8,(pmf_d97fbea4)&this->AttachmentTracker);
        TMulticastDelegateRegistration<void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
        ::
        AddRaw<UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>_>
                  ((TMulticastDelegateRegistration<void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
                    *)(this->_padding_ + 0x6d8),
                   (TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>
                    *)&local_res8,(pmf_8b72b718)&this->AttachmentTracker);
      }
      return;
    }
    pFVar5 = GetTypeName<UMovieSceneComponentAttachmentInvalidatorSystem>(&local_28);
    pwVar6 = L"";
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar5 = GetFullNameForCastLogError<UMovieSceneEntitySystem>(&local_18,pUVar3);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar6,pwVar7);
  }
  pFVar5 = GetTypeName<UMovieSceneComponentAttachmentInvalidatorSystem>(&local_28);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar6);
}

// OnRun @ 1467ae390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneComponentAttachmentSystem::OnRun
          (UMovieSceneComponentAttachmentSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  longlong lVar1;
  FInitializeAttachParentsTask FVar2;
  code *pcVar3;
  bool bVar4;
  FBuiltInComponentTypes *pFVar5;
  FMovieSceneTracksComponentTypes *pFVar6;
  undefined1 auStack_288 [32];
  undefined1 local_268 [4];
  FComponentTypeID local_264;
  FComponentTypeID local_262;
  FComponentTypeID local_260;
  FComponentTypeID local_25e [7];
  undefined8 local_250;
  TStatIdData *pTStack_248;
  byte local_240;
  undefined7 uStack_23f;
  undefined4 uStack_238;
  uint uStack_234;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> local_230;
  TComponentTypeID<FMovieSceneObjectBindingID> TStack_22e;
  TComponentTypeID<UE::MovieScene::FAttachmentComponent> TStack_22c;
  TComponentTypeID<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_> TStack_22a;
  undefined8 uStack_228;
  TStatIdData *pTStack_220;
  ulonglong uStack_218;
  undefined8 uStack_210;
  initializer_list<UE::MovieScene::FComponentTypeID> local_208;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1f8;
  FAttachmentHandler local_1e8;
  undefined1 local_1c8 [4];
  FComponentAccess FStack_1c4;
  FComponentAccess FStack_1c2;
  undefined8 uStack_1c0;
  TStatIdData *local_1b8;
  ulonglong uStack_1b0;
  undefined8 local_1a8;
  FEntityComponentFilter local_1a0;
  int local_f0;
  int local_ec;
  int local_b8;
  int local_b4;
  FEntityComponentFilter local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_288;
  if ((this->PendingAttachmentsToRestore).ArrayNum != 0) {
    local_268[0] = 0;
    `UMovieSceneComponentAttachmentSystem::OnRun'::__l2::<lambda_1>::operator()(local_268);
  }
  pFVar5 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar6 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  lVar1 = this->_padding_;
  if (*(longlong *)(lVar1 + 0x580) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceRegistry.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                       ,0x96,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar2.InstanceRegistry = *(FInstanceRegistry **)(lVar1 + 0x580);
  pTStack_248 = &TStatId::TStatId_NAME_None;
  local_230 = pFVar5->InstanceHandle;
  TStack_22e = pFVar6->AttachParentBinding;
  TStack_22c = pFVar6->AttachComponent;
  TStack_22a = pFVar6->AttachParent;
  local_264.Value = (pFVar5->Tags).NeedsLink.Value;
  local_250 = 0;
  uStack_238 = 0x6ff;
  uStack_234 = uStack_234 & 0xffffff00;
  uStack_218 = CONCAT71(uStack_23f,local_240) & 0xffffffffffffffe0;
  uStack_210._4_4_ = uStack_234;
  uStack_210._0_4_ = 0x6ff;
  uStack_228 = 0;
  pTStack_220 = &TStatId::TStatId_NAME_None;
  local_1a0.AllMask.Bits.NumBits = 0;
  local_1c8._2_2_ = TStack_22e;
  local_1c8._0_2_ = local_230;
  unique0x100002b2 = TStack_22c;
  unique0x100002b4 = TStack_22a;
  local_1a0.AllMask.Bits.MaxBits = 0x180;
  local_1a0.NoneMask.Bits.NumBits = 0;
  local_1a0.NoneMask.Bits.MaxBits = 0x180;
  uStack_1c0 = 0;
  local_1b8 = &TStatId::TStatId_NAME_None;
  local_1a0.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a0.ComplexMasks.ArrayNum = 0;
  local_1a0.ComplexMasks.ArrayMax = 0;
  local_f0 = 0;
  local_ec = 0x180;
  local_b8 = 0;
  local_b4 = 0x180;
  local_240 = local_240 & 0xe0;
  uStack_1b0 = uStack_218;
  local_1a8 = uStack_210;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_1c8,&local_1a0);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_1c8 + 2),&local_1a0);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_1c8 + 4),&local_1a0);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_1c8 + 6),&local_1a0);
  local_208._First = &local_264;
  local_208._Last = &local_262;
  UE::MovieScene::FComponentMask::SetAll(&local_1a0.AllMask,&local_208);
  UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneObjectBindingID>,UE::MovieScene::TReadAccess<UE::MovieScene::FAttachmentComponent>,UE::MovieScene::TWriteAccess<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_>_>
  ::RunInline_PerEntity<UE::MovieScene::FInitializeAttachParentsTask>
            ((TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneObjectBindingID>,UE::MovieScene::TReadAccess<UE::MovieScene::FAttachmentComponent>,UE::MovieScene::TWriteAccess<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_>_>
              *)local_1c8,(FEntityManager *)(this->_padding_ + 0x28),FVar2);
  if (local_1a0.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.ComplexMasks.AllocatorInstance.Data);
  }
  local_a8.AllMask.Bits.NumBits = 0;
  local_a8.AllMask.Bits.MaxBits = 0x180;
  local_a8.NoneMask.Bits.NumBits = 0;
  local_a8.NoneMask.Bits.MaxBits = 0x180;
  local_a8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ComplexMasks.ArrayNum = 0;
  local_a8.ComplexMasks.ArrayMax = 0;
  local_260.Value = *(ushort *)&pFVar6->AttachComponent;
  local_1f8._First = &local_260;
  local_1f8._Last = local_25e;
  UE::MovieScene::FComponentMask::SetAll(&local_a8.AllMask,&local_1f8);
  pFVar5 = UE::MovieScene::FBuiltInComponentTypes::Get();
  UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FPreAnimAttachment,FObjectKey>::
  UpdateFromComponents<UObject_*>
            ((TOverlappingEntityTrackerImpl<UE::MovieScene::FPreAnimAttachment,FObjectKey> *)
             &this->AttachmentTracker,(UMovieSceneEntitySystemLinker *)this->_padding_,&local_a8,
             pFVar5->BoundObject);
  local_1e8.EntityManager = (FEntityManager *)(this->_padding_ + 0x28);
  local_1e8.AttachmentSystem = this;
  local_1e8.TrackComponents = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FPreAnimAttachment,FObjectKey>::
  ProcessInvalidatedOutputs<UE::MovieScene::FAttachmentHandler>
            ((TOverlappingEntityTrackerImpl<UE::MovieScene::FPreAnimAttachment,FObjectKey> *)
             &this->AttachmentTracker,(UMovieSceneEntitySystemLinker *)this->_padding_,&local_1e8);
  if (local_a8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// OnUnlink @ 1467b0cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneComponentAttachmentSystem::OnUnlink(UMovieSceneComponentAttachmentSystem *this)

{
  FAttachmentHandler local_28;
  
  local_28.EntityManager = (FEntityManager *)(this->_padding_ + 0x28);
  local_28.AttachmentSystem = this;
  local_28.TrackComponents = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FPreAnimAttachment,FObjectKey>::
  Destroy<UE::MovieScene::FAttachmentHandler>
            ((TOverlappingEntityTrackerImpl<UE::MovieScene::FPreAnimAttachment,FObjectKey> *)
             &this->AttachmentTracker,&local_28);
  return;
}

// RestorePreAnimatedState @ 1467bac00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovieSceneComponentAttachmentSystem::RestorePreAnimatedState
          (UMovieSceneComponentAttachmentSystem *this,FPreAnimationParameters *param_1)

{
  int *piVar1;
  TComponentTypeID<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_> *pTVar2;
  longlong *plVar3;
  ushort uVar4;
  int iVar5;
  FMovieSceneEntityID *pFVar6;
  EEntityThreadingModel EVar7;
  bool bVar8;
  USceneComponent *pUVar9;
  TPreAnimatedCaptureSources<UE::MovieScene::FMovieSceneEntityID> *this_00;
  FEntityAllocation *pFVar10;
  FEntityAllocation *pFVar11;
  undefined8 *puVar12;
  FEntityManager *this_01;
  FEntityAllocation *pFVar13;
  undefined8 *puVar14;
  FEntityAllocation *pFVar15;
  undefined1 auStackY_228 [32];
  FMovieSceneEntityID local_1f8 [4];
  undefined1 local_1f0 [8];
  undefined1 local_1e8 [16];
  FName local_1d8;
  ulonglong uStack_1d0;
  undefined4 local_1c8;
  uint local_1c4;
  FEntityAllocationIteratorProxy local_1b8;
  FEntityAllocationWriteContext local_1a8;
  undefined1 local_1a0 [24];
  ulonglong local_188;
  undefined8 uStack_180;
  FEntityAllocationProxy local_178;
  ForElementType<unsigned_int> local_168;
  undefined8 uStack_160;
  TStatIdData *local_158;
  ulonglong uStack_150;
  undefined8 local_148;
  FEntityComponentFilter local_140;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1f0 = (undefined1  [8])UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  local_1a8.SystemSerial = (ulong64)UE::MovieScene::FBuiltInComponentTypes::Get();
  plVar3 = &(this->AttachmentTracker)._padding_;
  iVar5 = (int)(this->AttachmentTracker)._padding_;
  puVar12 = (undefined8 *)*plVar3;
  puVar14 = puVar12 + (longlong)iVar5 * 4;
  while( true ) {
    if ((int)(this->AttachmentTracker)._padding_ != iVar5) {
      `TCheckedPointerIterator<TTuple<USceneComponent_*,UE::MovieScene::FPreAnimAttachment>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_1f8);
    }
    if (puVar12 == puVar14) break;
    local_1e8._0_8_ = *puVar12;
    local_1e8._8_8_ = puVar12[1];
    local_1d8 = *(FName *)(puVar12 + 2);
    uStack_1d0 = puVar12[3];
    pUVar9 = (USceneComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_1e8 + 8));
    UE::MovieScene::FComponentDetachParams::ApplyDetach
              ((FComponentDetachParams *)&uStack_1d0,(USceneComponent *)local_1e8._0_8_,pUVar9,
               &local_1d8);
    puVar12 = puVar12 + 4;
  }
  piVar1 = (int *)((longlong)&(this->AttachmentTracker)._padding_ + 4);
  *(undefined4 *)&(this->AttachmentTracker)._padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)plVar3,0,piVar1);
  }
  this_00 = (TPreAnimatedCaptureSources<UE::MovieScene::FMovieSceneEntityID> *)
            UE::MovieScene::FPreAnimatedStateExtension::GetEntityMetaData(param_1->CacheExtension);
  if ((param_1->CacheExtension->NumRequestsForGlobalState != 0) &&
     (this_00 != (TPreAnimatedCaptureSources<UE::MovieScene::FMovieSceneEntityID> *)0x0)) {
    uStack_1d0 = uStack_1d0 & 0xffffffffffffffe0;
    local_1d8 = (FName)&TStatId::TStatId_NAME_None;
    local_1c8 = 0x6ff;
    local_1e8._8_8_ = (FEntityManager *)0x0;
    pTVar2 = (TComponentTypeID<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_> *)
             ((longlong)local_1f0 + 0x21e);
    local_1a0._8_8_ = (FEntityManager *)0x0;
    local_1a0._16_8_ = &TStatId::TStatId_NAME_None;
    local_1c4 = local_1c4 & 0xffffff00;
    uStack_180._4_4_ = local_1c4;
    uStack_180._0_4_ = 0x6ff;
    local_1f0._2_2_ = ((FComponentTypeID *)(local_1a8.SystemSerial + 0x134))->Value;
    local_1f0._0_2_ = *pTVar2;
    local_1b8.Manager = (FEntityManager *)local_1f0;
    local_188 = uStack_1d0;
    local_1b8.Filter = (FEntityComponentFilter *)(local_1f0 + 4);
    local_168 = (ForElementType<unsigned_int>)local_1a0._0_8_;
    uStack_160 = 0;
    local_158 = &TStatId::TStatId_NAME_None;
    uStack_150 = uStack_1d0;
    local_140.AllMask.Bits.NumBits = 0;
    local_140.AllMask.Bits.MaxBits = 0x180;
    local_140.NoneMask.Bits.NumBits = 0;
    local_140.NoneMask.Bits.MaxBits = 0x180;
    local_140.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.ComplexMasks.ArrayNum = 0;
    local_140.ComplexMasks.ArrayMax = 0;
    local_90 = 0;
    local_8c = 0x180;
    local_58 = 0;
    local_54 = 0x180;
    local_148 = uStack_180;
    UE::MovieScene::FComponentMask::SetAll
              (&local_140.AllMask,(initializer_list<UE::MovieScene::FComponentTypeID> *)&local_1b8);
    this_01 = (FEntityManager *)(this[-1].AttachmentTracker._padding_ + 0x28);
    UE::MovieScene::FEntityAllocationWriteContext::FEntityAllocationWriteContext(&local_1a8,this_01)
    ;
    EVar7 = UE::MovieScene::FEntityManager::GetThreadingModel(this_01);
    UE::MovieScene::FEntityManager::Iterate(this_01,&local_1b8,&local_140);
    UE::MovieScene::FEntityAllocationIterator::FEntityAllocationIterator
              ((FEntityAllocationIterator *)local_1a0,local_1b8.Manager,local_1b8.Filter);
    UE::MovieScene::FEntityAllocationIterator::FEntityAllocationIterator
              ((FEntityAllocationIterator *)local_1e8,local_1b8.Manager);
    bVar8 = UE::MovieScene::FEntityAllocationIterator::operator!=
                      ((FEntityAllocationIterator *)local_1a0,(FEntityAllocationIterator *)local_1e8
                      );
    if (bVar8) {
      do {
        pFVar15 = (FEntityAllocation *)0x0;
        UE::MovieScene::FEntityAllocationIterator::operator*
                  ((FEntityAllocationIterator *)local_1a0,&local_178);
        pFVar10 = UE::MovieScene::FEntityAllocationProxy::GetAllocation(&local_178);
        pFVar13 = pFVar15;
        if (EVar7 == NoThreading) {
          pFVar10->LockMode = LockFree;
          pFVar13 = pFVar10;
        }
        pFVar11 = UE::MovieScene::FEntityAllocationProxy::GetAllocation(&local_178);
        uVar4 = pFVar10->Size;
        pFVar6 = pFVar11->EntityIDs;
        if ((ulonglong)uVar4 != 0) {
          do {
            local_1f8[0].Value = pFVar6[(longlong)pFVar15].Value;
            UE::MovieScene::TPreAnimatedCaptureSources<UE::MovieScene::FMovieSceneEntityID>::
            StopTrackingCaptureSource
                      (this_00,local_1f8,
                       (FPreAnimatedStorageID)
                       UE::MovieScene::FPreAnimatedComponentAttachmentStorage::StorageID);
            pFVar15 = (FEntityAllocation *)((longlong)&pFVar15->SerialNumber + 1);
          } while ((longlong)pFVar15 < (longlong)(ulonglong)uVar4);
        }
        if (pFVar13 != (FEntityAllocation *)0x0) {
          pFVar13->LockMode = Mutex;
        }
        UE::MovieScene::FEntityAllocationIterator::operator++
                  ((FEntityAllocationIterator *)local_1a0);
        bVar8 = UE::MovieScene::FEntityAllocationIterator::operator!=
                          ((FEntityAllocationIterator *)local_1a0,
                           (FEntityAllocationIterator *)local_1e8);
      } while (bVar8);
    }
    UE::MovieScene::FEntityAllocationIterator::~FEntityAllocationIterator
              ((FEntityAllocationIterator *)local_1e8);
    UE::MovieScene::FEntityAllocationIterator::~FEntityAllocationIterator
              ((FEntityAllocationIterator *)local_1a0);
    if (local_140.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.ComplexMasks.AllocatorInstance.Data);
    }
  }
  return;
}

// SavePreAnimatedState @ 1467c04b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneComponentAttachmentSystem::SavePreAnimatedState
          (UMovieSceneComponentAttachmentSystem *this,FPreAnimationParameters *param_1)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  TComponentTypeID<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_> TVar2;
  ushort uVar3;
  code *pcVar4;
  bool bVar5;
  FMovieSceneTracksComponentTypes *pFVar6;
  FBuiltInComponentTypes *pFVar7;
  FPreAnimatedEntityCaptureSource *pFVar8;
  ushort *puVar9;
  int iVar10;
  undefined1 auStack_2a8 [32];
  <lambda_1> local_288;
  <lambda_1> local_287 [15];
  undefined8 local_278;
  TStatIdData *pTStack_270;
  byte local_268;
  undefined7 uStack_267;
  undefined4 uStack_260;
  uint uStack_25c;
  <lambda_1> local_258;
  TSharedPtr<UE::MovieScene::FPreAnimatedComponentTransformStorage,1> local_230;
  TSharedPtr<UE::MovieScene::FPreAnimatedComponentAttachmentStorage,1> local_220;
  undefined2 local_210;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> TStack_20e;
  TComponentTypeID<UObject_*> TStack_20c;
  TComponentTypeID<UE::MovieScene::FAttachmentComponent> TStack_20a;
  undefined8 uStack_208;
  TStatIdData *pTStack_200;
  ulonglong uStack_1f8;
  undefined8 uStack_1f0;
  ushort local_1e8 [3];
  ushort local_1e2;
  TBitArray<TFixedAllocator<12>_> local_1e0;
  TBitArray<TFixedAllocator<12>_> local_1a8;
  undefined1 local_168 [4];
  FComponentAccess FStack_164;
  FComponentAccess FStack_162;
  wchar_t *pwStack_160;
  TStatIdData *local_158;
  ulonglong uStack_150;
  undefined8 local_148;
  FEntityComponentFilter local_140;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  if (param_1->CacheExtension->NumRequestsForGlobalState != 0) {
    pFVar6 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
    pFVar7 = UE::MovieScene::FBuiltInComponentTypes::Get();
    TVar2 = pFVar6->AttachParent;
    local_1e0.NumBits = 0;
    local_1e0.MaxBits = 0x180;
    TBitArray<TFixedAllocator<12>_>::Add(&local_1e0,false,(ushort)TVar2 + 1);
    if ((local_1e0.NumBits <= (int)(uint)(ushort)TVar2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar1 = local_1e0.AllocatorInstance.InlineData + ((ushort)TVar2 >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << (TVar2._0_1_ & 0x1f);
    if (param_1->CacheExtension->bEntriesInvalidated == false) {
      uVar3 = (pFVar7->Tags).NeedsLink.Value;
      iVar10 = ((uint)uVar3 - local_1e0.NumBits) + 1;
      if (0 < iVar10) {
        TBitArray<TFixedAllocator<12>_>::Add(&local_1e0,false,iVar10);
      }
      if ((local_1e0.NumBits <= (int)(uint)uVar3) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar1 = local_1e0.AllocatorInstance.InlineData + (uVar3 >> 5);
      *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar3 & 0x1f);
    }
    puVar9 = local_1e8;
    local_1e8[0] = (pFVar7->Tags).NeedsUnlink.Value;
    local_1e8[1] = (pFVar7->Tags).Finished.Value;
    local_1e8[2] = (pFVar7->Tags).Ignored.Value;
    local_1a8.NumBits = 0;
    local_1a8.MaxBits = 0x180;
    do {
      uVar3 = *puVar9;
      iVar10 = ((uint)uVar3 - local_1a8.NumBits) + 1;
      if (0 < iVar10) {
        TBitArray<TFixedAllocator<12>_>::Add(&local_1a8,false,iVar10);
      }
      if ((local_1a8.NumBits <= (int)(uint)uVar3) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar1 = local_1a8.AllocatorInstance.InlineData + (uVar3 >> 5);
      puVar9 = puVar9 + 1;
      *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar3 & 0x1f);
    } while (puVar9 != &local_1e2);
    pFVar8 = UE::MovieScene::FPreAnimatedStateExtension::GetOrCreateEntityMetaData
                       (param_1->CacheExtension);
    UE::MovieScene::FPreAnimatedStateExtension::
    GetOrCreateStorage<UE::MovieScene::FPreAnimatedComponentTransformStorage>
              (param_1->CacheExtension,&local_230,
               (TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedComponentTransformStorage>)
               UE::MovieScene::FPreAnimatedComponentTransformStorage::StorageID);
    UE::MovieScene::FPreAnimatedStateExtension::
    GetOrCreateStorage<UE::MovieScene::FPreAnimatedComponentAttachmentStorage>
              (param_1->CacheExtension,&local_220,
               (TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedComponentAttachmentStorage>)
               UE::MovieScene::FPreAnimatedComponentAttachmentStorage::StorageID);
    pTStack_270 = &TStatId::TStatId_NAME_None;
    TStack_20e = pFVar7->RootInstanceHandle;
    TStack_20c = pFVar7->BoundObject;
    TStack_20a = pFVar6->AttachComponent;
    local_278 = 0;
    uStack_260 = 0x6ff;
    uStack_25c = uStack_25c & 0xffffff00;
    uStack_1f8 = CONCAT71(uStack_267,local_268) & 0xffffffffffffffe0;
    uStack_1f0._4_4_ = uStack_25c;
    uStack_1f0._0_4_ = AnyHiPriThreadHiPriTask;
    local_140.AllMask.Bits.NumBits = 0;
    uStack_208 = 0;
    pTStack_200 = &TStatId::TStatId_NAME_None;
    local_140.AllMask.Bits.MaxBits = 0x180;
    local_168._2_2_ = TStack_20e;
    local_168._0_2_ = local_210;
    unique0x1000035e = TStack_20c;
    unique0x10000360 = TStack_20a;
    local_140.NoneMask.Bits.NumBits = 0;
    local_140.NoneMask.Bits.MaxBits = 0x180;
    local_140.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pwStack_160 = (wchar_t *)0x0;
    local_158 = &TStatId::TStatId_NAME_None;
    local_140.ComplexMasks.ArrayNum = 0;
    local_140.ComplexMasks.ArrayMax = 0;
    local_90 = 0;
    local_8c = 0x180;
    local_58 = 0;
    local_54 = 0x180;
    local_268 = local_268 & 0xe0;
    uStack_150 = uStack_1f8;
    local_148 = uStack_1f0;
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_168 + 2),&local_140);
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_168 + 4),&local_140);
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_168 + 6),&local_140);
    UE::Core::Private::
    BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
              (&local_1e0,(TBitArray<TFixedAllocator<12>_> *)&local_140,MaxSize,&local_288);
    UE::Core::Private::
    BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
              (&local_1a8,&local_140.NoneMask.Bits,MaxSize,local_287);
    local_258.ComponentTransformStorage.Object = local_230.Object;
    local_258.ComponentTransformStorage.SharedReferenceCount.ReferenceController =
         local_230.SharedReferenceCount.ReferenceController;
    if (local_230.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_230.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_230.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_258.ComponentAttachmentStorage.Object = local_220.Object;
    local_258.ComponentAttachmentStorage.SharedReferenceCount.ReferenceController =
         local_220.SharedReferenceCount.ReferenceController;
    if (local_220.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_220.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_220.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_258.EntityMetaData = pFVar8;
    UE::MovieScene::
    TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FAttachmentComponent>_>
    ::
    Iterate_PerAllocationImpl<_UMovieSceneComponentAttachmentSystem::SavePreAnimatedState_::__l2::<lambda_1>_>
              ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FAttachmentComponent>_>
                *)local_168,(FEntityManager *)(this[-1].AttachmentTracker._padding_ + 0x28),
               &local_140,&local_258);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_258.ComponentAttachmentStorage.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_258.ComponentTransformStorage.SharedReferenceCount.ReferenceController);
    if (local_140.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.ComplexMasks.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_220.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_230.SharedReferenceCount.ReferenceController);
  }
  return;
}

// StaticRegisterNativesUMovieSceneComponentAttachmentSystem @ 1467c27d0

void __cdecl
UMovieSceneComponentAttachmentSystem::StaticRegisterNativesUMovieSceneComponentAttachmentSystem
          (void)

{
  return;
}

// _getUObject @ 1467ca720

UObject * __thiscall
UMovieSceneComponentAttachmentSystem::_getUObject(UMovieSceneComponentAttachmentSystem *this)

{
  return (UObject *)&this[-1].AttachmentTracker._padding_;
}

// operator() @ 1504f3410

bool __thiscall
`UMovieSceneComponentAttachmentSystem::OnRun'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6561795913218523352>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6561795913218523352>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

