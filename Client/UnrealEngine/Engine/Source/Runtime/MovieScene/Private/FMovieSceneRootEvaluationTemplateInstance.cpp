// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 34

// StaticStruct @ 146162af0

UScriptStruct * __cdecl FMovieSceneRootEvaluationTemplateInstance::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance,
                         (UObject *)pUVar1,L"MovieSceneRootEvaluationTemplateInstance");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance.OuterSingleton;
}

// FMovieSceneRootEvaluationTemplateInstance @ 146180330

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneRootEvaluationTemplateInstance * __thiscall
FMovieSceneRootEvaluationTemplateInstance::FMovieSceneRootEvaluationTemplateInstance
          (FMovieSceneRootEvaluationTemplateInstance *this)

{
  (this->EntitySystemLinker).field0_0x0.DebugPtr = (UMovieSceneEntitySystemLinker *)0x0;
  (this->SharedPlaybackState).Object = (FSharedPlaybackState *)0x0;
  (this->SharedPlaybackState).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bOwnsSharedPlaybackState = false;
  return this;
}

// ~FMovieSceneRootEvaluationTemplateInstance @ 146185510

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneRootEvaluationTemplateInstance::~FMovieSceneRootEvaluationTemplateInstance
          (FMovieSceneRootEvaluationTemplateInstance *this)

{
  FSharedPlaybackState *pFVar1;
  UMovieSceneEntitySystemLinker *pUVar2;
  FUObjectItem *pFVar3;
  FRootInstanceHandle FVar4;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pFVar1 = (this->SharedPlaybackState).Object;
  if (pFVar1 == (FSharedPlaybackState *)0x0) {
    FVar4 = (FRootInstanceHandle)0xffff;
  }
  else {
    FVar4 = pFVar1->RootInstanceHandle;
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->SharedPlaybackState != (TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *)&local_18)
  {
    (this->SharedPlaybackState).Object = (FSharedPlaybackState *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SharedPlaybackState).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  if ((((this->bOwnsSharedPlaybackState != false) && (FVar4._0_2_ != -1)) &&
      (pUVar2 = (this->EntitySystemLinker).field0_0x0.DebugPtr,
      pUVar2 != (UMovieSceneEntitySystemLinker *)0x0)) &&
     (((uint)pUVar2->_padding_ >> 0x1e & 1) == 0)) {
    pFVar3 = FUObjectArray::IndexToObject
                       (&GUObjectArray,
                        *(int *)((longlong)
                                 &((this->EntitySystemLinker).field0_0x0.DebugPtr)->_padding_ + 4));
    if ((((uint)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) &&
       (((uint)((this->EntitySystemLinker).field0_0x0.DebugPtr)->_padding_ >> 0xf & 1) == 0)) {
      UMovieSceneEntitySystemLinker::DestroyInstanceImmediately
                ((this->EntitySystemLinker).field0_0x0.DebugPtr,FVar4);
    }
  }
  (this->EntitySystemLinker).field0_0x0.DebugPtr = (UMovieSceneEntitySystemLinker *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedPlaybackState).SharedReferenceCount.ReferenceController);
  return;
}

// ConstructEntityLinker @ 146198b80

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneEntitySystemLinker * __cdecl
FMovieSceneRootEvaluationTemplateInstance::ConstructEntityLinker(IMovieScenePlayer *param_1)

{
  UMovieSceneEntitySystemLinker *pUVar1;
  UObject *pUVar2;
  
  pUVar1 = (UMovieSceneEntitySystemLinker *)(**(code **)(param_1->_padding_ + 0x20))();
  if (pUVar1 == (UMovieSceneEntitySystemLinker *)0x0) {
    pUVar2 = (UObject *)(**(code **)(param_1->_padding_ + 0x80))(param_1);
    pUVar1 = UMovieSceneEntitySystemLinker::FindOrCreateLinker
                       (pUVar2,Standalone,L"DefaultEntitySystemLinker");
    return pUVar1;
  }
  return pUVar1;
}

// CopyActuators @ 14619a240

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneRootEvaluationTemplateInstance::CopyActuators
          (FMovieSceneRootEvaluationTemplateInstance *this,FMovieSceneBlendingAccumulator *param_1)

{
  ushort uVar1;
  UMovieSceneEntitySystemLinker *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  
  if ((this->SharedPlaybackState).Object == (FSharedPlaybackState *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pUVar2 = (this->EntitySystemLinker).field0_0x0.DebugPtr;
  uVar1 = *(ushort *)&((this->SharedPlaybackState).Object)->RootInstanceHandle;
  if ((pUVar2->InstanceRegistry).Ptr == (FInstanceRegistry *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceRegistry.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                       ,0x96,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar3 = *(longlong *)
           ((ulonglong)uVar1 * 0x140 + 0xf8 +
           *(longlong *)&((pUVar2->InstanceRegistry).Ptr)->Instances);
  if ((lVar3 != 0) && (param_1 != (FMovieSceneBlendingAccumulator *)(lVar3 + 0x228))) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(param_1->Actuators).field_0x38,
               (int *)&(param_1->Actuators).field_0x48,
               (ForElementType<FSetElementId> *)(lVar3 + 0x260),*(int *)(lVar3 + 0x270));
    TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)param_1,
                (TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)(lVar3 + 0x228));
  }
  return;
}

// EnableGlobalPreAnimatedStateCapture @ 1461a13b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneRootEvaluationTemplateInstance::EnableGlobalPreAnimatedStateCapture
          (FMovieSceneRootEvaluationTemplateInstance *this)

{
  FSharedPlaybackState *pFVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  
  pFVar1 = (this->SharedPlaybackState).Object;
  if (pFVar1 == (FSharedPlaybackState *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5611781857814249752>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneEvaluationTemplateInstance.cpp"
                       ,0x118,"SharedPlaybackState");
    if (!bVar3) {
      return;
    }
code_r0x0001461a1431:
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pFVar1->PreAnimatedState).bCapturingGlobalPreAnimatedState == false) {
    (pFVar1->PreAnimatedState).bCapturingGlobalPreAnimatedState = true;
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pFVar1->PreAnimatedState);
    if (pUVar4 == (UObject *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5420070606668300233>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieScenePreAnimatedState.cpp"
                         ,0x37,"Linker");
      if (bVar3) goto code_r0x0001461a1431;
    }
    else {
      *(int *)&pUVar4[0x1c].field_0x8 = *(int *)&pUVar4[0x1c].field_0x8 + 1;
    }
  }
  return;
}

// EvaluateSynchronousBlocking @ 1461a4370

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneRootEvaluationTemplateInstance::EvaluateSynchronousBlocking
          (FMovieSceneRootEvaluationTemplateInstance *this,FMovieSceneContext *param_1)

{
  FSharedPlaybackState *pFVar1;
  FMovieSceneEntitySystemRunner *this_00;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  TSharedPtr<FMovieSceneEntitySystemRunner,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FInstanceHandle FVar6;
  TSharedPtr<FMovieSceneEntitySystemRunner,1> local_18;
  
  pFVar1 = (this->SharedPlaybackState).Object;
  if (pFVar1 == (FSharedPlaybackState *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar4 = UE::MovieScene::FSharedPlaybackState::GetRunner(pFVar1,&local_18);
    this_00 = pTVar4->Object;
    pTVar5 = (pTVar4->SharedReferenceCount).ReferenceController;
    (pTVar4->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar4->Object = (FMovieSceneEntitySystemRunner *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if (this_00 != (FMovieSceneEntitySystemRunner *)0x0) {
      pFVar1 = (this->SharedPlaybackState).Object;
      if (pFVar1 == (FSharedPlaybackState *)0x0) {
        FVar6.InstanceID = 0xffff;
        FVar6.InstanceSerial = 0;
      }
      else {
        FVar6 = *(FInstanceHandle *)&pFVar1->RootInstanceHandle;
      }
      FMovieSceneEntitySystemRunner::QueueUpdate(this_00,param_1,FVar6,None);
      FMovieSceneEntitySystemRunner::Flush(this_00,0.0,None);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pFVar2 = (param_1->RootToSequenceWarpCounter).WarpCounts.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar3 = (void *)(param_1->RootToSequenceWarpCounter)._padding_;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pFVar2 = (param_1->RootToSequenceTransform).NestedTransforms.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// EvaluateSynchronousBlocking @ 1461a4460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneRootEvaluationTemplateInstance::EvaluateSynchronousBlocking
          (FMovieSceneRootEvaluationTemplateInstance *this,FMovieSceneContext *param_1,
          IMovieScenePlayer *param_2)

{
  FSharedPlaybackState *pFVar1;
  FMovieSceneEntitySystemRunner *this_00;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  FMovieSceneContext *pFVar4;
  TSharedPtr<FMovieSceneEntitySystemRunner,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  FInstanceHandle FVar7;
  TSharedPtr<FMovieSceneEntitySystemRunner,1> local_a8;
  FMovieSceneContext local_98;
  
  pFVar4 = FMovieSceneContext::FMovieSceneContext(&local_98,param_1);
  pFVar1 = (this->SharedPlaybackState).Object;
  if (pFVar1 == (FSharedPlaybackState *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar5 = UE::MovieScene::FSharedPlaybackState::GetRunner(pFVar1,&local_a8);
    this_00 = pTVar5->Object;
    pTVar6 = (pTVar5->SharedReferenceCount).ReferenceController;
    (pTVar5->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar5->Object = (FMovieSceneEntitySystemRunner *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    if (this_00 != (FMovieSceneEntitySystemRunner *)0x0) {
      pFVar1 = (this->SharedPlaybackState).Object;
      if (pFVar1 == (FSharedPlaybackState *)0x0) {
        FVar7.InstanceID = 0xffff;
        FVar7.InstanceSerial = 0;
      }
      else {
        FVar7 = *(FInstanceHandle *)&pFVar1->RootInstanceHandle;
      }
      FMovieSceneEntitySystemRunner::QueueUpdate(this_00,pFVar4,FVar7,None);
      FMovieSceneEntitySystemRunner::Flush(this_00,0.0,None);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  pFVar2 = (pFVar4->RootToSequenceWarpCounter).WarpCounts.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar3 = (void *)(pFVar4->RootToSequenceWarpCounter)._padding_;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pFVar2 = (pFVar4->RootToSequenceTransform).NestedTransforms.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_1->RootToSequenceWarpCounter).WarpCounts.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar3 = (void *)(param_1->RootToSequenceWarpCounter)._padding_;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pFVar2 = (param_1->RootToSequenceTransform).NestedTransforms.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// FindEntitiesFromOwner @ 1461a8200

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneRootEvaluationTemplateInstance::FindEntitiesFromOwner
          (FMovieSceneRootEvaluationTemplateInstance *this,UObject *param_1,
          FMovieSceneSequenceID param_2,
          TArray<UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>_> *param_3)

{
  FSequenceInstance *this_00;
  
  this_00 = FindInstance(this,param_2);
  if (this_00 != (FSequenceInstance *)0x0) {
    UE::MovieScene::FSequenceInstance::FindEntities(this_00,param_1,param_3);
  }
  return;
}

// FindEntityFromOwner @ 1461a8240

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
FMovieSceneRootEvaluationTemplateInstance::FindEntityFromOwner
          (FMovieSceneRootEvaluationTemplateInstance *this,UObject *param_1,uint param_2,
          FMovieSceneSequenceID param_3)

{
  FSequenceInstance *this_00;
  FMovieSceneSequenceID in_stack_00000028;
  
  this_00 = FindInstance(this,in_stack_00000028);
  if (this_00 != (FSequenceInstance *)0x0) {
    UE::MovieScene::FSequenceInstance::FindEntity(this_00,param_1,param_2);
    return (FMovieSceneEntityID)(ushort)param_1;
  }
  *(undefined2 *)param_1 = 0xffff;
  return (FMovieSceneEntityID)(ushort)param_1;
}

// FindInstance @ 1461a8750

/* WARNING: Enum "Type": Some values do not have unique names */

FSequenceInstance * __thiscall
FMovieSceneRootEvaluationTemplateInstance::FindInstance
          (FMovieSceneRootEvaluationTemplateInstance *this,FMovieSceneSequenceID param_1)

{
  FSharedPlaybackState *pFVar1;
  UMovieSceneEntitySystemLinker *pUVar2;
  code *pcVar3;
  bool bVar4;
  FSequenceInstance *pFVar5;
  FInstanceRegistry *pFVar6;
  FRootInstanceHandle FVar7;
  ushort local_res8 [4];
  
  pFVar1 = (this->SharedPlaybackState).Object;
  if (pFVar1 == (FSharedPlaybackState *)0x0) {
    FVar7 = (FRootInstanceHandle)0xffff;
  }
  else {
    FVar7 = pFVar1->RootInstanceHandle;
  }
  pUVar2 = (this->EntitySystemLinker).field0_0x0.DebugPtr;
  if ((pUVar2 == (UMovieSceneEntitySystemLinker *)0x0) || (FVar7._0_2_ == -1)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5611781857814249843>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneEvaluationTemplateInstance.cpp"
                       ,0x173,"EntitySystemLinker && RootInstanceHandle.IsValid()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FSequenceInstance *)(*pcVar3)();
      return pFVar5;
    }
  }
  else {
    if (((pUVar2->InstanceRegistry).Ptr == (FInstanceRegistry *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InstanceRegistry.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                           ,0x96,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FSequenceInstance *)(*pcVar3)();
      return pFVar5;
    }
    pFVar5 = (FSequenceInstance *)
             ((ulonglong)((uint)FVar7 & 0xffff) * 0x140 +
             *(longlong *)&((pUVar2->InstanceRegistry).Ptr)->Instances);
    if (param_1.Value == 0) {
      return pFVar5;
    }
    UE::MovieScene::FSequenceInstance::FindSubInstance
              (pFVar5,(FMovieSceneSequenceID)(uint)local_res8);
    if (local_res8[0] != 0xffff) {
      pFVar6 = UMovieSceneEntitySystemLinker::GetInstanceRegistry
                         ((this->EntitySystemLinker).field0_0x0.DebugPtr);
      return (FSequenceInstance *)
             ((ulonglong)local_res8[0] * 0x140 + *(longlong *)&pFVar6->Instances);
    }
  }
  return (FSequenceInstance *)0x0;
}

// FindInstance @ 1461a8860

/* WARNING: Enum "Type": Some values do not have unique names */

FSequenceInstance * __thiscall
FMovieSceneRootEvaluationTemplateInstance::FindInstance
          (FMovieSceneRootEvaluationTemplateInstance *this,FMovieSceneSequenceID param_1)

{
  FSharedPlaybackState *pFVar1;
  UMovieSceneEntitySystemLinker *pUVar2;
  code *pcVar3;
  bool bVar4;
  FSequenceInstance *pFVar5;
  FInstanceRegistry *pFVar6;
  FRootInstanceHandle FVar7;
  ushort local_res8 [4];
  
  pFVar1 = (this->SharedPlaybackState).Object;
  if (pFVar1 == (FSharedPlaybackState *)0x0) {
    FVar7 = (FRootInstanceHandle)0xffff;
  }
  else {
    FVar7 = pFVar1->RootInstanceHandle;
  }
  pUVar2 = (this->EntitySystemLinker).field0_0x0.DebugPtr;
  if ((pUVar2 == (UMovieSceneEntitySystemLinker *)0x0) || (FVar7._0_2_ == -1)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5611781857814249867>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneEvaluationTemplateInstance.cpp"
                       ,0x18b,"EntitySystemLinker && RootInstanceHandle.IsValid()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FSequenceInstance *)(*pcVar3)();
      return pFVar5;
    }
  }
  else {
    if (((pUVar2->InstanceRegistry).Ptr == (FInstanceRegistry *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InstanceRegistry.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                           ,0x96,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FSequenceInstance *)(*pcVar3)();
      return pFVar5;
    }
    pFVar5 = (FSequenceInstance *)
             ((ulonglong)((uint)FVar7 & 0xffff) * 0x140 +
             *(longlong *)&((pUVar2->InstanceRegistry).Ptr)->Instances);
    if (param_1.Value == 0) {
      return pFVar5;
    }
    UE::MovieScene::FSequenceInstance::FindSubInstance
              (pFVar5,(FMovieSceneSequenceID)(uint)local_res8);
    if (local_res8[0] != 0xffff) {
      pFVar6 = UMovieSceneEntitySystemLinker::GetInstanceRegistry
                         ((this->EntitySystemLinker).field0_0x0.DebugPtr);
      return (FSequenceInstance *)
             ((ulonglong)local_res8[0] * 0x140 + *(longlong *)&pFVar6->Instances);
    }
  }
  return (FSequenceInstance *)0x0;
}

// FindSubData @ 1461a9a30

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneSubSequenceData * __thiscall
FMovieSceneRootEvaluationTemplateInstance::FindSubData
          (FMovieSceneRootEvaluationTemplateInstance *this,FMovieSceneSequenceID *param_1)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneSubSequenceData *pFVar3;
  FMovieSceneSequenceHierarchy *this_00;
  
  if ((this->SharedPlaybackState).Object == (FSharedPlaybackState *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMovieSceneSubSequenceData *)(*pcVar1)();
      return pFVar3;
    }
  }
  this_00 = UE::MovieScene::FSharedPlaybackState::GetHierarchy((this->SharedPlaybackState).Object);
  if (this_00 != (FMovieSceneSequenceHierarchy *)0x0) {
    pFVar3 = FMovieSceneSequenceHierarchy::FindSubData(this_00,param_1);
    return pFVar3;
  }
  return (FMovieSceneSubSequenceData *)0x0;
}

// GetCompiledDataID @ 1461b0890

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneCompiledDataID __thiscall
FMovieSceneRootEvaluationTemplateInstance::GetCompiledDataID
          (FMovieSceneRootEvaluationTemplateInstance *this)

{
  FSharedPlaybackState *pFVar1;
  int *in_RDX;
  
  pFVar1 = (this->SharedPlaybackState).Object;
  if (pFVar1 != (FSharedPlaybackState *)0x0) {
    *in_RDX = (pFVar1->RootCompiledDataID).Value;
    return (FMovieSceneCompiledDataID)(int)in_RDX;
  }
  *in_RDX = -1;
  return (FMovieSceneCompiledDataID)(int)in_RDX;
}

// GetCompiledDataManager @ 1461b08c0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneCompiledDataManager * __thiscall
FMovieSceneRootEvaluationTemplateInstance::GetCompiledDataManager
          (FMovieSceneRootEvaluationTemplateInstance *this)

{
  FSharedPlaybackState *pFVar1;
  UMovieSceneCompiledDataManager *pUVar2;
  
  pFVar1 = (this->SharedPlaybackState).Object;
  if (pFVar1 != (FSharedPlaybackState *)0x0) {
    pUVar2 = (pFVar1->CompiledDataManager).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending) &&
       (pUVar2 != (UMovieSceneCompiledDataManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    return pUVar2;
  }
  return (UMovieSceneCompiledDataManager *)0x0;
}

// GetEntitySystemLinker @ 1461b0cd0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneEntitySystemLinker * __thiscall
FMovieSceneRootEvaluationTemplateInstance::GetEntitySystemLinker
          (FMovieSceneRootEvaluationTemplateInstance *this)

{
  return (this->EntitySystemLinker).field0_0x0.DebugPtr;
}

// GetHierarchy @ 1461b10a0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneSequenceHierarchy * __thiscall
FMovieSceneRootEvaluationTemplateInstance::GetHierarchy
          (FMovieSceneRootEvaluationTemplateInstance *this)

{
  FMovieSceneCompiledDataID FVar1;
  UMovieSceneCompiledDataManager *this_00;
  FSharedPlaybackState *pFVar2;
  FMovieSceneSequenceHierarchy *pFVar3;
  
  pFVar2 = (this->SharedPlaybackState).Object;
  if (pFVar2 == (FSharedPlaybackState *)0x0) {
    return (FMovieSceneSequenceHierarchy *)0x0;
  }
  this_00 = (pFVar2->CompiledDataManager).field0_0x0.DebugPtr;
  if ((this_00 != (UMovieSceneCompiledDataManager *)0x0) &&
     (FVar1.Value = (pFVar2->RootCompiledDataID).Value, FVar1.Value != -1)) {
    pFVar3 = UMovieSceneCompiledDataManager::FindHierarchy(this_00,FVar1);
    return pFVar3;
  }
  return (FMovieSceneSequenceHierarchy *)0x0;
}

// GetOrCreateDirectorInstance @ 1461b1bb0

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
FMovieSceneRootEvaluationTemplateInstance::GetOrCreateDirectorInstance
          (FMovieSceneRootEvaluationTemplateInstance *this,FMovieSceneSequenceID *param_1,
          IMovieScenePlayer *param_2)

{
  FSharedPlaybackState *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FSequenceDirectorPlaybackCapability *this_00;
  UObject *pUVar5;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_18;
  
  pFVar1 = (this->SharedPlaybackState).Object;
  if (pFVar1 != (FSharedPlaybackState *)0x0) {
    this_00 = UE::MovieScene::FSharedPlaybackState::
              FindCapability<UE::MovieScene::FSequenceDirectorPlaybackCapability>(pFVar1);
    if (this_00 != (FSequenceDirectorPlaybackCapability *)0x0) {
      if ((this->SharedPlaybackState).Object == (FSharedPlaybackState *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pUVar5 = (UObject *)(*pcVar3)();
          return pUVar5;
        }
      }
      pFVar1 = (this->SharedPlaybackState).Object;
      pTVar2 = (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar1 == (FSharedPlaybackState *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pUVar5 = (UObject *)(*pcVar3)();
          return pUVar5;
        }
      }
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_18.Object = pFVar1;
      local_18.SharedReferenceCount.ReferenceController = pTVar2;
      pUVar5 = UE::MovieScene::FSequenceDirectorPlaybackCapability::GetOrCreateDirectorInstance
                         (this_00,&local_18,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return pUVar5;
    }
  }
  return (UObject *)0x0;
}

// GetRootInstance @ 1461b3450

/* WARNING: Enum "Type": Some values do not have unique names */

FSequenceInstance * __thiscall
FMovieSceneRootEvaluationTemplateInstance::GetRootInstance
          (FMovieSceneRootEvaluationTemplateInstance *this)

{
  FSharedPlaybackState *pFVar1;
  UMovieSceneEntitySystemLinker *pUVar2;
  code *pcVar3;
  bool bVar4;
  FSequenceInstance *pFVar5;
  FRootInstanceHandle FVar6;
  
  pFVar1 = (this->SharedPlaybackState).Object;
  FVar6 = (FRootInstanceHandle)0xffff;
  if (pFVar1 != (FSharedPlaybackState *)0x0) {
    FVar6 = pFVar1->RootInstanceHandle;
  }
  if (FVar6._0_2_ == -1) {
    return (FSequenceInstance *)0x0;
  }
  pUVar2 = (this->EntitySystemLinker).field0_0x0.DebugPtr;
  if (((pUVar2->InstanceRegistry).Ptr == (FInstanceRegistry *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceRegistry.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                         ,0x96,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FSequenceInstance *)(*pcVar3)();
    return pFVar5;
  }
  return (FSequenceInstance *)
         ((ulonglong)((uint)FVar6 & 0xffff) * 0x140 +
         *(longlong *)&((pUVar2->InstanceRegistry).Ptr)->Instances);
}

// GetRootInstanceHandle @ 1461b34e0

/* WARNING: Enum "Type": Some values do not have unique names */

FRootInstanceHandle __thiscall
FMovieSceneRootEvaluationTemplateInstance::GetRootInstanceHandle
          (FMovieSceneRootEvaluationTemplateInstance *this)

{
  FSharedPlaybackState *pFVar1;
  FRootInstanceHandle *in_RDX;
  
  pFVar1 = (this->SharedPlaybackState).Object;
  if (pFVar1 != (FSharedPlaybackState *)0x0) {
    *in_RDX = pFVar1->RootInstanceHandle;
    return SUB84(in_RDX,0);
  }
  *in_RDX = (FRootInstanceHandle)0xffff;
  return SUB84(in_RDX,0);
}

// GetRootSequence @ 1461b35a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieSceneSequence * __thiscall
FMovieSceneRootEvaluationTemplateInstance::GetRootSequence
          (FMovieSceneRootEvaluationTemplateInstance *this)

{
  FSharedPlaybackState *pFVar1;
  UMovieSceneSequence *pUVar2;
  
  pFVar1 = (this->SharedPlaybackState).Object;
  if (pFVar1 != (FSharedPlaybackState *)0x0) {
    pUVar2 = (UMovieSceneSequence *)FWeakObjectPtr::Get(&(pFVar1->WeakRootSequence).WeakPtr);
    return pUVar2;
  }
  return (UMovieSceneSequence *)0x0;
}

// GetRunner @ 1461b35c0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FMovieSceneEntitySystemRunner,1> * __thiscall
FMovieSceneRootEvaluationTemplateInstance::GetRunner
          (FMovieSceneRootEvaluationTemplateInstance *this,
          TSharedPtr<FMovieSceneEntitySystemRunner,1> *__return_storage_ptr__)

{
  FSharedPlaybackState *this_00;
  TSharedPtr<FMovieSceneEntitySystemRunner,1> *pTVar1;
  TSharedPtr<FMovieSceneEntitySystemRunner,1> local_18;
  
  this_00 = (this->SharedPlaybackState).Object;
  if (this_00 != (FSharedPlaybackState *)0x0) {
    pTVar1 = UE::MovieScene::FSharedPlaybackState::GetRunner(this_00,&local_18);
    __return_storage_ptr__->Object = pTVar1->Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (pTVar1->SharedReferenceCount).ReferenceController;
    (pTVar1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar1->Object = (FMovieSceneEntitySystemRunner *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FMovieSceneEntitySystemRunner *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetSequence @ 1461b37e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieSceneSequence * __thiscall
FMovieSceneRootEvaluationTemplateInstance::GetSequence
          (FMovieSceneRootEvaluationTemplateInstance *this,FMovieSceneSequenceID *param_1)

{
  FMovieSceneCompiledDataID FVar1;
  UMovieSceneCompiledDataManager *this_00;
  FSharedPlaybackState *pFVar2;
  UMovieSceneSequence *pUVar3;
  FMovieSceneSequenceHierarchy *this_01;
  FMovieSceneSubSequenceData *this_02;
  
  pFVar2 = (this->SharedPlaybackState).Object;
  if (pFVar2 == (FSharedPlaybackState *)0x0) {
    return (UMovieSceneSequence *)0x0;
  }
  if (param_1->Value == 0) {
    pUVar3 = (UMovieSceneSequence *)FWeakObjectPtr::Get(&(pFVar2->WeakRootSequence).WeakPtr);
    return pUVar3;
  }
  this_00 = (pFVar2->CompiledDataManager).field0_0x0.DebugPtr;
  if ((this_00 != (UMovieSceneCompiledDataManager *)0x0) &&
     (FVar1.Value = (pFVar2->RootCompiledDataID).Value, FVar1.Value != -1)) {
    this_01 = UMovieSceneCompiledDataManager::FindHierarchy(this_00,FVar1);
    if (this_01 != (FMovieSceneSequenceHierarchy *)0x0) {
      this_02 = FMovieSceneSequenceHierarchy::FindSubData(this_01,param_1);
      if (this_02 != (FMovieSceneSubSequenceData *)0x0) {
        pUVar3 = FMovieSceneSubSequenceData::GetSequence(this_02);
        return pUVar3;
      }
    }
  }
  return (UMovieSceneSequence *)0x0;
}

// GetSequenceParentage @ 1461b3960

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneRootEvaluationTemplateInstance::GetSequenceParentage
          (FMovieSceneRootEvaluationTemplateInstance *this,FInstanceHandle param_1,
          TArray<UE::MovieScene::FInstanceHandle,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  UMovieSceneEntitySystemLinker *pUVar3;
  FInstanceRegistry *pFVar4;
  FSharedPlaybackState *pFVar5;
  longlong lVar6;
  FRootInstanceHandle *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  ulonglong uVar11;
  FMovieSceneSequenceHierarchy *pFVar12;
  FMovieSceneSequenceHierarchy *pFVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  FMovieSceneSequenceHierarchy *pFVar16;
  longlong lVar17;
  FMovieSceneSequenceHierarchy *pFVar18;
  FRootInstanceHandle FVar19;
  FRootInstanceHandle local_28;
  FRootInstanceHandle local_24 [3];
  
  pUVar3 = (this->EntitySystemLinker).field0_0x0.DebugPtr;
  if (pUVar3 == (UMovieSceneEntitySystemLinker *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5611781857814249789>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneEvaluationTemplateInstance.cpp"
                       ,0x13d,"EntitySystemLinker");
    if (bVar9) {
code_r0x0001461b3d3d:
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    if (((pUVar3->InstanceRegistry).Ptr == (FInstanceRegistry *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InstanceRegistry.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                           ,0x96,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar4 = (pUVar3->InstanceRegistry).Ptr;
    FVar19 = (FRootInstanceHandle)0xffff;
    if ((param_1.InstanceID == 0xffff) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InstanceHandle.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneEvaluationTemplateInstance.cpp"
                           ,0x145,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar5 = (this->SharedPlaybackState).Object;
    lVar17 = (ulonglong)((uint)param_1 & 0xffff) * 0x140 + *(longlong *)&pFVar4->Instances;
    if (pFVar5 != (FSharedPlaybackState *)0x0) {
      FVar19 = pFVar5->RootInstanceHandle;
    }
    uVar1 = *(undefined4 *)(lVar17 + 0x13a);
    local_28 = FVar19;
    if ((((short)uVar1 != FVar19._0_2_) || ((short)((uint)uVar1 >> 0x10) != FVar19._2_2_)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Instance.GetRootInstanceHandle() == RootInstanceHandle",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneEvaluationTemplateInstance.cpp"
                           ,0x149,
                           L"The provided instance handle relates to a different root sequence."),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar11 = (ulonglong)(ushort)local_28._0_2_;
    pFVar5 = (this->SharedPlaybackState).Object;
    lVar6 = *(longlong *)&pFVar4->Instances;
    if ((pFVar5 == (FSharedPlaybackState *)0x0) ||
       (pFVar12 = UE::MovieScene::FSharedPlaybackState::GetHierarchy(pFVar5),
       pFVar12 == (FMovieSceneSequenceHierarchy *)0x0)) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5611781857814249806>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneEvaluationTemplateInstance.cpp"
                         ,0x14e,"Hierarchy");
      if (bVar9) goto code_r0x0001461b3d3d;
    }
    else {
      uVar2 = *(uint *)(lVar17 + 0x128);
      pFVar18 = (FMovieSceneSequenceHierarchy *)0x0;
      pFVar16 = pFVar12;
      if (uVar2 != 0) {
        pFVar13 = pFVar18;
        if (*(int *)&(pFVar12->Hierarchy).field_0x8 != *(int *)&(pFVar12->Hierarchy).field_0x34) {
          puVar14 = *(undefined1 **)&(pFVar12->Hierarchy).field_0x40;
          if (puVar14 == (undefined1 *)0x0) {
            puVar14 = &(pFVar12->Hierarchy).field_0x38;
          }
          iVar10 = *(int *)(puVar14 +
                           (ulonglong)(*(int *)&(pFVar12->Hierarchy).field_0x48 - 1U & uVar2) * 4);
          if (iVar10 != -1) {
            do {
              pFVar13 = (FMovieSceneSequenceHierarchy *)
                        (*(longlong *)&pFVar12->Hierarchy + (longlong)iVar10 * 0x28);
              if (*(uint *)(*(longlong *)&pFVar12->Hierarchy + (longlong)iVar10 * 0x28) == uVar2)
              break;
              iVar10 = (int)(pFVar13->Tree).Data._padding_;
              pFVar13 = pFVar18;
            } while (iVar10 != -1);
          }
        }
        pFVar16 = (FMovieSceneSequenceHierarchy *)&(pFVar13->RootNode).Children;
        if (pFVar13 == (FMovieSceneSequenceHierarchy *)0x0) {
          pFVar16 = pFVar18;
        }
        if (pFVar16 == (FMovieSceneSequenceHierarchy *)0x0) {
          return;
        }
      }
      do {
        do {
          uVar2 = (pFVar16->RootNode).ParentID.Value;
          if (uVar2 == 0xffffffff) {
            return;
          }
          if (uVar2 == 0) {
            pFVar7 = (FRootInstanceHandle *)(param_2->AllocatorInstance).Data;
            if (((pFVar7 <= &local_28) && (&local_28 < pFVar7 + param_2->ArrayMax)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar10 = param_2->ArrayNum;
            FVar19 = local_28;
            if (iVar10 == param_2->ArrayMax) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x204,&param_2->AllocatorInstance,&param_2->ArrayMax);
              FVar19 = local_28;
            }
          }
          else {
            UE::MovieScene::FSequenceInstance::FindSubInstance
                      ((FSequenceInstance *)(uVar11 * 0x140 + lVar6),
                       (FMovieSceneSequenceID)(uint)local_24);
            pFVar7 = (FRootInstanceHandle *)(param_2->AllocatorInstance).Data;
            if (((pFVar7 <= local_24) && (local_24 < pFVar7 + param_2->ArrayMax)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar10 = param_2->ArrayNum;
            FVar19 = local_24[0];
            if (iVar10 == param_2->ArrayMax) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x204,&param_2->AllocatorInstance,&param_2->ArrayMax);
              FVar19 = local_24[0];
            }
          }
          param_2->ArrayNum = iVar10 + 1;
          *(FRootInstanceHandle *)((param_2->AllocatorInstance).Data + (longlong)iVar10 * 4) =
               FVar19;
          uVar2 = (pFVar16->RootNode).ParentID.Value;
          pFVar16 = pFVar12;
        } while (uVar2 == 0);
        pFVar13 = pFVar18;
        if (*(int *)&(pFVar12->Hierarchy).field_0x8 != *(int *)&(pFVar12->Hierarchy).field_0x34) {
          puVar14 = *(undefined1 **)&(pFVar12->Hierarchy).field_0x40;
          puVar15 = &(pFVar12->Hierarchy).field_0x38;
          if (puVar14 != (undefined1 *)0x0) {
            puVar15 = puVar14;
          }
          iVar10 = *(int *)(puVar15 +
                           (ulonglong)(*(int *)&(pFVar12->Hierarchy).field_0x48 - 1U & uVar2) * 4);
          if (iVar10 != -1) {
            do {
              pFVar13 = (FMovieSceneSequenceHierarchy *)
                        (*(longlong *)&pFVar12->Hierarchy + (longlong)iVar10 * 0x28);
              if (*(uint *)(*(longlong *)&pFVar12->Hierarchy + (longlong)iVar10 * 0x28) == uVar2)
              break;
              iVar10 = (int)(pFVar13->Tree).Data._padding_;
              pFVar13 = pFVar18;
            } while (iVar10 != -1);
          }
        }
        pFVar16 = (FMovieSceneSequenceHierarchy *)&(pFVar13->RootNode).Children;
        if (pFVar13 == (FMovieSceneSequenceHierarchy *)0x0) {
          pFVar16 = pFVar18;
        }
      } while (pFVar16 != (FMovieSceneSequenceHierarchy *)0x0);
    }
  }
  return;
}

// GetSharedPlaybackState @ 1461b40d0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> * __thiscall
FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState
          (FMovieSceneRootEvaluationTemplateInstance *this,
          TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->SharedPlaybackState).Object;
  pTVar1 = (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetSharedPlaybackState @ 1461b4100

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FSharedPlaybackState_const_,1> * __thiscall
FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState
          (FMovieSceneRootEvaluationTemplateInstance *this,
          TSharedPtr<UE::MovieScene::FSharedPlaybackState_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->SharedPlaybackState).Object;
  pTVar1 = (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// HasEverUpdated @ 1461b5580

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMovieSceneRootEvaluationTemplateInstance::HasEverUpdated
          (FMovieSceneRootEvaluationTemplateInstance *this)

{
  FSharedPlaybackState *pFVar1;
  UMovieSceneEntitySystemLinker *this_00;
  FInstanceRegistry *pFVar2;
  FRootInstanceHandle FVar3;
  
  pFVar1 = (this->SharedPlaybackState).Object;
  if (pFVar1 == (FSharedPlaybackState *)0x0) {
    FVar3 = (FRootInstanceHandle)0xffff;
  }
  else {
    FVar3 = pFVar1->RootInstanceHandle;
  }
  this_00 = (this->EntitySystemLinker).field0_0x0.DebugPtr;
  if ((this_00 != (UMovieSceneEntitySystemLinker *)0x0) && (FVar3._0_2_ != -1)) {
    pFVar2 = UMovieSceneEntitySystemLinker::GetInstanceRegistry(this_00);
    return (bool)(*(byte *)((ulonglong)((uint)FVar3 & 0xffff) * 0x140 + 0x13e +
                           *(longlong *)&pFVar2->Instances) >> 2 & 1);
  }
  return false;
}

// Initialize @ 1461b5e50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
FMovieSceneRootEvaluationTemplateInstance::Initialize
          (FMovieSceneRootEvaluationTemplateInstance *this,UMovieSceneSequence *param_1,
          IMovieScenePlayer *param_2,UMovieSceneCompiledDataManager *param_3)

{
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *this_00;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FRootInstanceHandle FVar4;
  UObject *pUVar5;
  TSharedPtr<FMovieSceneEntitySystemRunner,1> *pTVar6;
  UMovieSceneSequence *pUVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  UMovieSceneEntitySystemLinker *pUVar10;
  FInstanceRegistry *pFVar11;
  UMovieSceneCompiledDataManager *pUVar12;
  undefined4 extraout_var;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *pTVar13;
  ForElementType<TAlignedBytes<16,16>_> FVar14;
  uint uVar15;
  FMovieSceneEntitySystemRunner *this_01;
  short sVar16;
  FInstanceHandle FVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  UMovieSceneSequence *local_res10;
  UMovieSceneEntitySystemLinker *local_res20;
  TReferenceControllerBase<1> *local_88;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_80;
  undefined1 local_70 [8];
  FDelegateAllocation local_68;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  
  this_00 = &this->SharedPlaybackState;
  local_res10 = param_1;
  local_res20 = (UMovieSceneEntitySystemLinker *)param_3;
  if (((this_00->Object == (FSharedPlaybackState *)0x0) ||
      (pUVar5 = FWeakObjectPtr::Get(&(this_00->Object->WeakRootSequence).WeakPtr),
      pUVar5 == (UObject *)0x0)) ||
     ((this->EntitySystemLinker).field0_0x0.DebugPtr == (UMovieSceneEntitySystemLinker *)0x0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  pUVar10 = (UMovieSceneEntitySystemLinker *)0x0;
  if (((this_00->Object != (FSharedPlaybackState *)0x0) &&
      (pUVar10 = (UMovieSceneEntitySystemLinker *)
                 (this_00->Object->CompiledDataManager).field0_0x0.DebugPtr,
      UE::GC::GIsIncrementalReachabilityPending != false)) &&
     (pUVar10 != (UMovieSceneEntitySystemLinker *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  if (param_3 == (UMovieSceneCompiledDataManager *)0x0) {
    param_3 = UMovieSceneCompiledDataManager::GetPrecompiledData();
    local_res20 = (UMovieSceneEntitySystemLinker *)param_3;
  }
  if (pUVar10 != (UMovieSceneEntitySystemLinker *)param_3) {
    bVar3 = true;
  }
  if (this_00->Object == (FSharedPlaybackState *)0x0) {
    FVar14 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_88 = (TReferenceControllerBase<1> *)0x0;
    this_01 = (FMovieSceneEntitySystemRunner *)0x0;
  }
  else {
    pTVar6 = UE::MovieScene::FSharedPlaybackState::GetRunner
                       (this_00->Object,(TSharedPtr<FMovieSceneEntitySystemRunner,1> *)local_70);
    local_88 = (pTVar6->SharedReferenceCount).ReferenceController;
    this_01 = pTVar6->Object;
    (pTVar6->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar6->Object = (FMovieSceneEntitySystemRunner *)0x0;
    FVar14 = local_68.DelegateAllocator;
  }
  pUVar7 = (UMovieSceneSequence *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar14);
  if (this_00->Object != (FSharedPlaybackState *)0x0) {
    pUVar7 = (UMovieSceneSequence *)
             FWeakObjectPtr::Get(&(this_00->Object->WeakRootSequence).WeakPtr);
  }
  if (pUVar7 == param_1 && !bVar3) goto LAB_1461b6238;
  uVar18 = 0xffff;
  FVar17.InstanceID = 0xffff;
  FVar17.InstanceSerial = 0;
  if (this_00->Object != (FSharedPlaybackState *)0x0) {
    FVar17 = *(FInstanceHandle *)&this_00->Object->RootInstanceHandle;
  }
  if ((FVar17.InstanceID != 0xffff) && (this->bOwnsSharedPlaybackState != false)) {
    if (this_01 == (FMovieSceneEntitySystemRunner *)0x0) {
      pUVar10 = (this->EntitySystemLinker).field0_0x0.DebugPtr;
      if (pUVar10 == (UMovieSceneEntitySystemLinker *)0x0) {
        `FMovieSceneRootEvaluationTemplateInstance::Initialize'::__l20::<lambda_2>::operator()
                  (local_res8);
      }
      else {
        pFVar11 = UMovieSceneEntitySystemLinker::GetInstanceRegistry(pUVar10);
        UE::MovieScene::FInstanceRegistry::DestroyInstance(pFVar11,FVar17);
      }
    }
    else {
      local_70 = (undefined1  [8])0x0;
      local_68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_68.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_70,
                 (FWriteAccessScope *)&local_58);
      local_40 = &local_68;
      puVar8 = UE::Core::Private::DelegateAllocate(0x20,&local_68);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[2] = uVar9;
        *puVar8 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FMovieSceneRootEvaluationTemplateInstance::Initialize'::`14'::<lambda_1>_>
                   ::_vftable_;
        puVar8[3] = this;
      }
      if (local_58.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
      }
      FMovieSceneEntitySystemRunner::AbandonAndDestroyInstance
                (this_01,FVar17,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_70
                );
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_70,
                 (FWriteAccessScope *)&local_58);
      if ((local_68.DelegateSize != 0) &&
         (local_68.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (**(code **)*(longlong *)local_68.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_68,0,0,0x10);
        local_68.DelegateSize = 0;
      }
      if (local_58.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
      }
      if (local_68.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_68.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_70);
    }
  }
  TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
           *)&(param_2->State).PersistentEntityData);
  TSet<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
           *)&(param_2->State).PersistentSharedData);
  pUVar10 = (UMovieSceneEntitySystemLinker *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (pUVar10 == (UMovieSceneEntitySystemLinker *)0x0) {
    pUVar5 = (UObject *)(**(code **)(param_2->_padding_ + 0x80))(param_2);
    pUVar10 = UMovieSceneEntitySystemLinker::FindOrCreateLinker
                        (pUVar5,Standalone,L"DefaultEntitySystemLinker");
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar10 == (UMovieSceneEntitySystemLinker *)0x0)) {
    uVar15 = 0;
    (this->EntitySystemLinker).field0_0x0.DebugPtr = pUVar10;
    sVar16 = -1;
    if (pUVar10 != (UMovieSceneEntitySystemLinker *)0x0) goto LAB_1461b60ff;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
    (this->EntitySystemLinker).field0_0x0.DebugPtr = pUVar10;
LAB_1461b60ff:
    uVar15 = 0;
    pFVar11 = UMovieSceneEntitySystemLinker::GetInstanceRegistry(pUVar10);
    sVar16 = -1;
    if (pFVar11 != (FInstanceRegistry *)0x0) {
      pUVar12 = (UMovieSceneCompiledDataManager *)(**(code **)(param_2->_padding_ + 0x80))(param_2);
      pFVar11 = UMovieSceneEntitySystemLinker::GetInstanceRegistry
                          ((this->EntitySystemLinker).field0_0x0.DebugPtr);
      FVar4 = UE::MovieScene::FInstanceRegistry::AllocateRootInstance
                        (pFVar11,(UMovieSceneSequence *)&local_res10,(UObject *)local_res10,pUVar12)
      ;
      uVar15 = *(uint *)CONCAT44(extraout_var,FVar4);
      uVar18 = uVar15 & 0xffff;
      local_res20 = (UMovieSceneEntitySystemLinker *)CONCAT44(local_res20._4_4_,uVar15);
      uVar15 = uVar15 >> 0x10;
      pTVar1 = *(TReferenceControllerBase<1> **)
                ((ulonglong)uVar18 * 0x140 + 0x120 + *(longlong *)&pFVar11->Instances);
      local_80.Object =
           *(FSharedPlaybackState **)
            ((ulonglong)uVar18 * 0x140 + 0x118 + *(longlong *)&pFVar11->Instances);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_80.SharedReferenceCount.ReferenceController = pTVar1;
      if (this_00 != &local_80) {
        this_00->Object = local_80.Object;
        local_80.Object = (FSharedPlaybackState *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->SharedPlaybackState).SharedReferenceCount,&local_80.SharedReferenceCount)
        ;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_80.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      pcVar2 = *(code **)(param_2->_padding_ + 200);
      pTVar13 = TSharedPtr<UE::MovieScene::FSharedPlaybackState,1>::ToSharedRef
                          (this_00,(TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *)local_70);
      (*pcVar2)(param_2,pTVar13);
      sVar16 = (short)local_res20;
    }
  }
  if (sVar16 != -1) {
    local_res20 = (this->EntitySystemLinker).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res20 != (UMovieSceneEntitySystemLinker *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&param_2->PreAnimatedState,(FObjectPtr)&local_res20)
    ;
    (param_2->PreAnimatedState).InstanceHandle = (FRootInstanceHandle)(uVar15 << 0x10 | uVar18);
  }
  this->bOwnsSharedPlaybackState = true;
LAB_1461b6238:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_88);
  return;
}

// Initialize @ 1461b6270

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneRootEvaluationTemplateInstance::Initialize
          (FMovieSceneRootEvaluationTemplateInstance *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_1)

{
  UMovieSceneEntitySystemLinker *pUVar1;
  FSharedPlaybackState *local_18;
  FSharedReferencer<1> local_10;
  
  pUVar1 = (UMovieSceneEntitySystemLinker *)
           FWeakObjectPtr::Get(&(param_1->Object->WeakLinker).WeakPtr);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UMovieSceneEntitySystemLinker *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->EntitySystemLinker).field0_0x0.DebugPtr = pUVar1;
  local_10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  local_18 = param_1->Object;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->SharedPlaybackState != (TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *)&local_18)
  {
    (this->SharedPlaybackState).Object = local_18;
    local_18 = (FSharedPlaybackState *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SharedPlaybackState).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  this->bOwnsSharedPlaybackState = false;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// IsValid @ 1461bbe90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMovieSceneRootEvaluationTemplateInstance::IsValid(FMovieSceneRootEvaluationTemplateInstance *this)

{
  if (((this->EntitySystemLinker).field0_0x0.DebugPtr != (UMovieSceneEntitySystemLinker *)0x0) &&
     ((this->SharedPlaybackState).Object != (FSharedPlaybackState *)0x0)) {
    return true;
  }
  return false;
}

// PlaybackContextChanged @ 1461c2c20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
FMovieSceneRootEvaluationTemplateInstance::PlaybackContextChanged
          (FMovieSceneRootEvaluationTemplateInstance *this,IMovieScenePlayer *param_1)

{
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *this_00;
  char cVar1;
  ushort uVar2;
  FInstanceHandle FVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FUObjectItem *pFVar10;
  FSharedPlaybackState *pFVar11;
  ulonglong uVar12;
  FMovieSceneInstancePreAnimatedState *this_01;
  UMovieSceneEntitySystemLinker *pUVar13;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *pTVar14;
  FInstanceRegistry *pFVar15;
  UObject *pUVar16;
  UMovieSceneCompiledDataManager *pUVar17;
  longlong lVar18;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FRootInstanceHandle local_d8;
  uint local_d4;
  byte local_d0;
  byte local_cc;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_c8;
  TSharedPtr<FMovieSceneEntitySystemRunner,1> local_b8;
  IMovieScenePlaybackClient *local_a8;
  UObject *local_a0;
  UMovieSceneEntitySystemLinker *local_98;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_90;
  undefined1 local_80 [16];
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_70;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_60;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_50;
  
  if (this->bOwnsSharedPlaybackState == false) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5611781857814249926>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneEvaluationTemplateInstance.cpp"
                       ,0x1c6,"bOwnsSharedPlaybackState");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    this_00 = &this->SharedPlaybackState;
    if (((this->SharedPlaybackState).Object == (FSharedPlaybackState *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_a0 = FWeakObjectPtr::Get(&(this_00->Object->WeakRootSequence).WeakPtr);
    if ((this_00->Object == (FSharedPlaybackState *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pUVar17 = (this_00->Object->CompiledDataManager).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar17 != (UMovieSceneCompiledDataManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar17);
    }
    if ((this_00->Object == (FSharedPlaybackState *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    bVar7 = (this_00->Object->PreAnimatedState).bCapturingGlobalPreAnimatedState;
    if ((this_00->Object == (FSharedPlaybackState *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar3 = *(FInstanceHandle *)&this_00->Object->RootInstanceHandle;
    if ((((FVar3.InstanceID != 0xffff) &&
         (pUVar13 = (this->EntitySystemLinker).field0_0x0.DebugPtr,
         pUVar13 != (UMovieSceneEntitySystemLinker *)0x0)) &&
        (((uint)pUVar13->_padding_ >> 0x1e & 1) == 0)) &&
       ((pFVar10 = FUObjectArray::IndexToObject
                             (&GUObjectArray,
                              *(int *)((longlong)
                                       &((this->EntitySystemLinker).field0_0x0.DebugPtr)->_padding_
                                      + 4)),
        ((uint)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0 &&
        (((uint)((this->EntitySystemLinker).field0_0x0.DebugPtr)->_padding_ >> 0xf & 1) == 0)))) {
      UMovieSceneEntitySystemLinker::CleanupInvalidBoundObjects
                ((this->EntitySystemLinker).field0_0x0.DebugPtr);
      pFVar11 = TSharedPtr<UE::MovieScene::FSharedPlaybackState,1>::operator->(this_00);
      bVar8 = IsInGameThread();
      if (!bVar8) {
        local_res18[0] = bVar8;
        `UE::MovieScene::FSharedPlaybackState::HasCapability<IMovieScenePlaybackClient>'::__l2::
        <lambda_1>::operator()(local_res18);
      }
      IMovieScenePlaybackClient::GetPlaybackCapabilityID();
      if ((*(uint *)&(pFVar11->Capabilities).field_0x10 >> (local_d4 & 0x1f) & 1) != 0) {
        if ((this_00->Object == (FSharedPlaybackState *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar11 = this_00->Object;
        bVar8 = IsInGameThread();
        if (!bVar8) {
          local_res20[0] = bVar8;
          `UE::MovieScene::FSharedPlaybackState::GetCapabilities'::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        local_a8 = (IMovieScenePlaybackClient *)(**(code **)(param_1->_padding_ + 0x60))(param_1);
        IMovieScenePlaybackClient::GetPlaybackCapabilityID();
        UE::MovieScene::FPlaybackCapabilitiesImpl::
        OverwriteCapability<IMovieScenePlaybackClient_*,IMovieScenePlaybackClient,IMovieScenePlaybackClient_*>
                  ((FPlaybackCapabilitiesImpl *)&pFVar11->Capabilities,1 << (local_d0 & 0x1f),
                   &local_a8);
        IMovieScenePlaybackClient::GetPlaybackCapabilityID();
        uVar9 = UE::MovieScene::FPlaybackCapabilitiesImpl::GetCapabilityIndex
                          ((FPlaybackCapabilitiesImpl *)&pFVar11->Capabilities,
                           1 << (local_cc & 0x1f));
        if ((0xfe < uVar9) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < 255",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                               ,0x107,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (((byte)(pFVar11->Capabilities).field_0xc <= (byte)uVar9) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < Num",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                               ,0x21b,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar4 = *(longlong *)&pFVar11->Capabilities;
        uVar12 = (ulonglong)(uVar9 & 0xff);
        uVar2 = *(ushort *)(lVar4 + 8 + uVar12 * 0x10);
        if (uVar2 == 0xffff) {
          lVar18 = 0;
        }
        else {
          lVar18 = (ulonglong)uVar2 + lVar4;
        }
        cVar1 = *(char *)(lVar4 + 0xe + uVar12 * 0x10);
        if (((ulonglong)*(byte *)(lVar4 + 0xd + uVar12 * 0x10) + lVar18 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                               ,0x3a,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((((cVar1 != '\0') && (cVar1 != '\x01')) && (cVar1 != '\x02')) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                               ,0x44,L"Unexpected playback capability storage mode"), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pFVar11 = TSharedPtr<UE::MovieScene::FSharedPlaybackState,1>::operator->(this_00);
      UE::MovieScene::FSharedPlaybackState::GetRunner(pFVar11,&local_b8);
      if (local_b8.Object != (FMovieSceneEntitySystemRunner *)0x0) {
        if ((local_b8.Object == (FMovieSceneEntitySystemRunner *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        bVar8 = FMovieSceneEntitySystemRunner::QueueFinalUpdate(local_b8.Object,FVar3);
        if (bVar8) {
          if ((local_b8.Object == (FMovieSceneEntitySystemRunner *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FMovieSceneEntitySystemRunner::Flush(local_b8.Object,0.0,None);
        }
      }
      if (bVar7 != false) {
        this_01 = FMovieScenePreAnimatedState::GetState(&param_1->PreAnimatedState);
        if ((this_01 != (FMovieSceneInstancePreAnimatedState *)0x0) &&
           (pUVar13 = (UMovieSceneEntitySystemLinker *)
                      FWeakObjectPtr::Get((FWeakObjectPtr *)this_01),
           pUVar13 != (UMovieSceneEntitySystemLinker *)0x0)) {
          local_80._8_4_ = this_01->InstanceHandle;
          local_80._0_8_ = pUVar13;
          UE::MovieScene::FPreAnimatedStateExtension::RestoreGlobalState
                    (&pUVar13->PreAnimatedState,(FRestoreStateParams *)local_80);
        }
        pTVar14 = IMovieScenePlayer::GetSharedPlaybackState(param_1,&local_60);
        local_70.Object = pTVar14->Object;
        local_70.SharedReferenceCount.ReferenceController =
             (pTVar14->SharedReferenceCount).ReferenceController;
        if (local_70.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FMovieSceneEvaluationState::ClearObjectCaches(&param_1->State,&local_70);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_60.SharedReferenceCount.ReferenceController);
      }
      local_90.Object = (FSharedPlaybackState *)0x0;
      local_90.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (this_00 != &local_90) {
        this_00->Object = (FSharedPlaybackState *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->SharedPlaybackState).SharedReferenceCount,&local_90.SharedReferenceCount)
        ;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_90.SharedReferenceCount.ReferenceController);
      pFVar15 = UMovieSceneEntitySystemLinker::GetInstanceRegistry
                          ((this->EntitySystemLinker).field0_0x0.DebugPtr);
      UE::MovieScene::FInstanceRegistry::DestroyInstance(pFVar15,FVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b8.SharedReferenceCount.ReferenceController);
    }
    pUVar13 = (UMovieSceneEntitySystemLinker *)(**(code **)(param_1->_padding_ + 0x20))(param_1);
    if (pUVar13 == (UMovieSceneEntitySystemLinker *)0x0) {
      pUVar16 = (UObject *)(**(code **)(param_1->_padding_ + 0x80))(param_1);
      pUVar13 = UMovieSceneEntitySystemLinker::FindOrCreateLinker
                          (pUVar16,Standalone,L"DefaultEntitySystemLinker");
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar13 != (UMovieSceneEntitySystemLinker *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar13);
    }
    (this->EntitySystemLinker).field0_0x0.DebugPtr = pUVar13;
    pUVar17 = (UMovieSceneCompiledDataManager *)(**(code **)(param_1->_padding_ + 0x80))(param_1);
    pUVar13 = (this->EntitySystemLinker).field0_0x0.DebugPtr;
    if (((pUVar13->InstanceRegistry).Ptr == (FInstanceRegistry *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InstanceRegistry.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                           ,0x96,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar15 = (pUVar13->InstanceRegistry).Ptr;
    UE::MovieScene::FInstanceRegistry::AllocateRootInstance
              (pFVar15,(UMovieSceneSequence *)&local_d8,local_a0,pUVar17);
    lVar4 = *(longlong *)&pFVar15->Instances;
    pTVar5 = *(TReferenceControllerBase<1> **)
              ((ulonglong)(ushort)local_d8._0_2_ * 0x140 + 0x120 + lVar4);
    local_c8.Object =
         *(FSharedPlaybackState **)((ulonglong)(ushort)local_d8._0_2_ * 0x140 + 0x118 + lVar4);
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_c8.SharedReferenceCount.ReferenceController = pTVar5;
    if (this_00 != &local_c8) {
      this_00->Object = local_c8.Object;
      local_c8.Object = (FSharedPlaybackState *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SharedPlaybackState).SharedReferenceCount,&local_c8.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    pcVar6 = *(code **)(param_1->_padding_ + 200);
    pTVar14 = TSharedPtr<UE::MovieScene::FSharedPlaybackState,1>::ToSharedRef(this_00,&local_50);
    (*pcVar6)(param_1,pTVar14);
    local_98 = (this->EntitySystemLinker).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_98 != (UMovieSceneEntitySystemLinker *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_98);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&param_1->PreAnimatedState,(FObjectPtr)&local_98);
    (param_1->PreAnimatedState).InstanceHandle = local_d8;
    if (bVar7 != false) {
      if ((this_00->Object == (FSharedPlaybackState *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FMovieSceneInstancePreAnimatedState::EnableGlobalPreAnimatedStateCapture
                (&this_00->Object->PreAnimatedState);
    }
  }
  return;
}

// ResetDirectorInstances @ 1461cd7d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneRootEvaluationTemplateInstance::ResetDirectorInstances
          (FMovieSceneRootEvaluationTemplateInstance *this)

{
  FSharedPlaybackState *this_00;
  FSequenceDirectorPlaybackCapability *this_01;
  
  this_00 = (this->SharedPlaybackState).Object;
  if (this_00 != (FSharedPlaybackState *)0x0) {
    this_01 = UE::MovieScene::FSharedPlaybackState::
              FindCapability<UE::MovieScene::FSequenceDirectorPlaybackCapability>(this_00);
    if (this_01 != (FSequenceDirectorPlaybackCapability *)0x0) {
      UE::MovieScene::FSequenceDirectorPlaybackCapability::ResetDirectorInstances(this_01);
      return;
    }
  }
  return;
}

// TearDown @ 1461d5cb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneRootEvaluationTemplateInstance::TearDown(FMovieSceneRootEvaluationTemplateInstance *this)

{
  FSharedPlaybackState *pFVar1;
  UMovieSceneEntitySystemLinker *pUVar2;
  FUObjectItem *pFVar3;
  FRootInstanceHandle FVar4;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pFVar1 = (this->SharedPlaybackState).Object;
  if (pFVar1 == (FSharedPlaybackState *)0x0) {
    FVar4 = (FRootInstanceHandle)0xffff;
  }
  else {
    FVar4 = pFVar1->RootInstanceHandle;
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->SharedPlaybackState != (TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *)&local_18)
  {
    (this->SharedPlaybackState).Object = (FSharedPlaybackState *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SharedPlaybackState).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  if ((((this->bOwnsSharedPlaybackState != false) && (FVar4._0_2_ != -1)) &&
      (pUVar2 = (this->EntitySystemLinker).field0_0x0.DebugPtr,
      pUVar2 != (UMovieSceneEntitySystemLinker *)0x0)) &&
     (((uint)pUVar2->_padding_ >> 0x1e & 1) == 0)) {
    pFVar3 = FUObjectArray::IndexToObject
                       (&GUObjectArray,
                        *(int *)((longlong)
                                 &((this->EntitySystemLinker).field0_0x0.DebugPtr)->_padding_ + 4));
    if ((((uint)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) &&
       (((uint)((this->EntitySystemLinker).field0_0x0.DebugPtr)->_padding_ >> 0xf & 1) == 0)) {
      UMovieSceneEntitySystemLinker::DestroyInstanceImmediately
                ((this->EntitySystemLinker).field0_0x0.DebugPtr,FVar4);
    }
  }
  (this->EntitySystemLinker).field0_0x0.DebugPtr = (UMovieSceneEntitySystemLinker *)0x0;
  return;
}

// operator() @ 1504e6470

bool __thiscall
`FMovieSceneRootEvaluationTemplateInstance::Initialize'::__l20::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5611781857814249635>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5611781857814249635>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

