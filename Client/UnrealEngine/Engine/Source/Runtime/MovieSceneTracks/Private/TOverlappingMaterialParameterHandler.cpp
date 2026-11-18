// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 4

// DestroyOutput @ 146825930

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TOverlappingMaterialParameterHandler<UE::MovieScene::FScalarMixin>::DestroyOutput
          (TOverlappingMaterialParameterHandler<UE::MovieScene::FScalarMixin> *this,
          FObjectComponent *param_1,FMaterialParameterInfo *param_2,
          FAnimatedMaterialParameterInfo *param_3,FEntityOutputAggregate param_4)

{
  UMovieScenePiecewiseDoubleBlenderSystem *this_00;
  FBuiltInComponentTypes *pFVar1;
  FMovieSceneBlendChannelID local_res20;
  
  if ((param_3->OutputEntityID).Value != 0xffff) {
    pFVar1 = FBuiltInComponentTypes::Get();
    FEntityManager::AddComponent
              (&this->Linker->EntityManager,(FMovieSceneEntityID)(param_3->OutputEntityID).Value,
               (FComponentTypeID)(pFVar1->Tags).NeedsUnlink.Value);
    (param_3->OutputEntityID).Value = 0xffff;
    this_00 = (this->System->DoubleBlenderSystem).field0_0x0.DebugPtr;
    if (this_00 != (UMovieScenePiecewiseDoubleBlenderSystem *)0x0) {
      UMovieSceneBlenderSystem::ReleaseBlendChannel
                ((UMovieSceneBlenderSystem *)this_00,param_3->BlendChannelID);
    }
    local_res20.SystemID.Value = 0xff;
    local_res20.ChannelID = 0xffff;
    param_3->BlendChannelID = local_res20;
  }
  return;
}

// DestroyOutput @ 1468259c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TOverlappingMaterialParameterHandler<UE::MovieScene::FVectorMixin>::DestroyOutput
          (TOverlappingMaterialParameterHandler<UE::MovieScene::FVectorMixin> *this,
          FObjectComponent *param_1,FMaterialParameterInfo *param_2,
          FAnimatedMaterialParameterInfo *param_3,FEntityOutputAggregate param_4)

{
  UMovieScenePiecewiseDoubleBlenderSystem *this_00;
  FBuiltInComponentTypes *pFVar1;
  FMovieSceneBlendChannelID local_res20;
  
  if ((param_3->OutputEntityID).Value != 0xffff) {
    pFVar1 = FBuiltInComponentTypes::Get();
    FEntityManager::AddComponent
              (&this->Linker->EntityManager,(FMovieSceneEntityID)(param_3->OutputEntityID).Value,
               (FComponentTypeID)(pFVar1->Tags).NeedsUnlink.Value);
    (param_3->OutputEntityID).Value = 0xffff;
    this_00 = (this->System->DoubleBlenderSystem).field0_0x0.DebugPtr;
    if (this_00 != (UMovieScenePiecewiseDoubleBlenderSystem *)0x0) {
      UMovieSceneBlenderSystem::ReleaseBlendChannel
                ((UMovieSceneBlenderSystem *)this_00,param_3->BlendChannelID);
    }
    local_res20.SystemID.Value = 0xff;
    local_res20.ChannelID = 0xffff;
    param_3->BlendChannelID = local_res20;
  }
  return;
}

// UpdateOutput @ 146870ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TOverlappingMaterialParameterHandler<UE::MovieScene::FScalarMixin>::UpdateOutput
          (TOverlappingMaterialParameterHandler<UE::MovieScene::FScalarMixin> *this,
          FObjectComponent *param_1,FMaterialParameterInfo *param_2,
          TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> *param_3,
          FAnimatedMaterialParameterInfo *param_4,FEntityOutputAggregate param_5)

{
  FComponentTypeID FVar1;
  FMovieSceneEntityID FVar2;
  int iVar3;
  UMovieSceneEntitySystemLinker *pUVar4;
  UMovieSceneMaterialParameterInstantiatorSystem *pUVar5;
  code *pcVar6;
  bool bVar7;
  FMovieSceneBlendChannelID FVar8;
  FBuiltInComponentTypes *pFVar9;
  FMovieSceneEntityID *pFVar10;
  UMovieScenePiecewiseDoubleBlenderSystem *pUVar11;
  undefined4 extraout_var;
  FEntityManager *this_00;
  FMovieSceneEntityID *pFVar12;
  FWeakObjectPtr local_64;
  UMovieSceneEntitySystemLinker *local_58;
  UMovieScenePiecewiseDoubleBlenderSystem *local_50;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_48;
  
  pFVar9 = FBuiltInComponentTypes::Get();
  FMovieSceneTracksComponentTypes::Get();
  iVar3 = param_3->ArrayNum;
  if (iVar3 == 0) {
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8875111272174059156>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneMaterialParameterSystem.cpp"
                       ,0x16c,"NumContributors != 0");
    if (!bVar7) {
      return;
    }
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_1->ObjectPtr).field0_0x0.DebugPtr == (UObject *)0x0) {
    DestroyOutput(this,param_1,param_2,param_4,param_5);
    pFVar12 = param_3->DataPtr;
    pFVar10 = pFVar12 + iVar3;
    for (; pFVar12 != pFVar10; pFVar12 = pFVar12 + 1) {
      FEntityManager::RemoveComponent
                (&this->Linker->EntityManager,(FMovieSceneEntityID)pFVar12->Value,
                 (FComponentTypeID)*(ushort *)&pFVar9->BlendChannelInput);
    }
    return;
  }
  if (iVar3 < 2) {
    pUVar4 = this->Linker;
    FVar1.Value = (pFVar9->Tags).AbsoluteBlend.Value;
    if ((iVar3 < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    bVar7 = FEntityManager::HasComponent
                      (&pUVar4->EntityManager,(FMovieSceneEntityID)param_3->DataPtr->Value,FVar1);
    if (bVar7) {
      pUVar4 = this->Linker;
      FVar1.Value = *(ushort *)&pFVar9->WeightAndEasingResult;
      pFVar10 = TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::operator[](param_3,0);
      bVar7 = FEntityManager::HasComponent
                        (&pUVar4->EntityManager,(FMovieSceneEntityID)pFVar10->Value,FVar1);
      if (!bVar7) {
        if (((param_4->OutputEntityID).Value == 0xffff) && (param_3->ArrayNum == 1)) {
          pUVar4 = this->Linker;
          FVar1.Value = *(ushort *)&pFVar9->BlendChannelInput;
          pFVar10 = TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::operator[]
                              (param_3,0);
          FEntityManager::RemoveComponent
                    (&pUVar4->EntityManager,(FMovieSceneEntityID)pFVar10->Value,FVar1);
          pFVar10 = TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::operator[]
                              (param_3,0);
          FScalarMixin::InitializeSoleInput
                    ((FScalarMixin *)this,this->Linker,param_1,param_2,
                     (FMovieSceneEntityID)pFVar10->Value,param_4);
        }
        goto LAB_146871076;
      }
    }
  }
  if ((param_4->OutputEntityID).Value == 0xffff) {
    if ((this->System->DoubleBlenderSystem).field0_0x0.DebugPtr ==
        (UMovieScenePiecewiseDoubleBlenderSystem *)0x0) {
      pUVar11 = UMovieSceneEntitySystemLinker::LinkSystem<UMovieScenePiecewiseDoubleBlenderSystem>
                          (this->Linker);
      pUVar5 = this->System;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar11 != (UMovieScenePiecewiseDoubleBlenderSystem *)0x0)) {
        GC::MarkAsReachable((UObject *)pUVar11);
      }
      (pUVar5->DoubleBlenderSystem).field0_0x0.DebugPtr = pUVar11;
      FMovieSceneEntitySystemGraph::AddReference
                (&this->Linker->SystemGraph,(UMovieSceneEntitySystem *)this->System,
                 (UMovieSceneEntitySystem *)(this->System->DoubleBlenderSystem).field0_0x0.DebugPtr)
      ;
    }
    local_58 = this->Linker;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (local_58 != (UMovieSceneEntitySystemLinker *)0x0)) {
      GC::MarkAsReachable((UObject *)local_58);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_4,(FObjectPtr)&local_58);
    pUVar11 = (this->System->DoubleBlenderSystem).field0_0x0.DebugPtr;
    if (GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar11 != (UMovieScenePiecewiseDoubleBlenderSystem *)0x0) {
        GC::MarkAsReachable((UObject *)pUVar11);
      }
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar11 != (UMovieScenePiecewiseDoubleBlenderSystem *)0x0)) {
        GC::MarkAsReachable((UObject *)pUVar11);
      }
    }
    local_64.ObjectIndex = 0;
    local_64.ObjectSerialNumber = 0;
    local_50 = pUVar11;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar11 != (UMovieScenePiecewiseDoubleBlenderSystem *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar11);
    }
    FWeakObjectPtr::operator=(&local_64,(FObjectPtr)&local_50);
    (param_4->WeakBlenderSystem).WeakPtr = local_64;
    FVar8 = UMovieSceneBlenderSystem::AllocateBlendChannel
                      ((UMovieSceneBlenderSystem *)
                       (this->System->DoubleBlenderSystem).field0_0x0.DebugPtr);
    local_48.DataPtr = param_3->DataPtr;
    local_48.ArrayNum = param_3->ArrayNum;
    local_48._12_4_ = *(undefined4 *)&param_3->field_0xc;
    param_4->BlendChannelID = *(FMovieSceneBlendChannelID *)CONCAT44(extraout_var,FVar8);
    FScalarMixin::CreateEntity
              ((FScalarMixin *)this,this->Linker,param_1,param_2,
               (FComponentTypeID)
               *(ushort *)
                ((longlong)&((this->System->DoubleBlenderSystem).field0_0x0.DebugPtr)->_padding_ + 6
                ),&local_48,param_4);
  }
  pFVar12 = param_3->DataPtr;
  FVar1.Value = *(ushort *)
                 ((longlong)&((this->System->DoubleBlenderSystem).field0_0x0.DebugPtr)->_padding_ +
                 6);
  pFVar10 = pFVar12 + param_3->ArrayNum;
  for (; pFVar12 != pFVar10; pFVar12 = pFVar12 + 1) {
    FVar2.Value = pFVar12->Value;
    bVar7 = FEntityManager::HasComponent
                      (&this->Linker->EntityManager,FVar2,
                       (FComponentTypeID)*(ushort *)&pFVar9->BlendChannelInput);
    this_00 = &this->Linker->EntityManager;
    if (bVar7) {
      FEntityManager::WriteComponentChecked<FMovieSceneBlendChannelID,FMovieSceneBlendChannelID_&>
                (this_00,FVar2,pFVar9->BlendChannelInput,&param_4->BlendChannelID);
    }
    else {
      FEntityManager::AddComponent<FMovieSceneBlendChannelID,FMovieSceneBlendChannelID_&>
                (this_00,FVar2,pFVar9->BlendChannelInput,&param_4->BlendChannelID);
    }
    FEntityManager::AddComponent(&this->Linker->EntityManager,FVar2,FVar1);
  }
LAB_146871076:
  param_4->NumContributors = iVar3;
  return;
}

// UpdateOutput @ 1468710b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TOverlappingMaterialParameterHandler<UE::MovieScene::FVectorMixin>::UpdateOutput
          (TOverlappingMaterialParameterHandler<UE::MovieScene::FVectorMixin> *this,
          FObjectComponent *param_1,FMaterialParameterInfo *param_2,
          TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> *param_3,
          FAnimatedMaterialParameterInfo *param_4,FEntityOutputAggregate param_5)

{
  FComponentTypeID FVar1;
  FMovieSceneEntityID FVar2;
  int iVar3;
  UMovieSceneEntitySystemLinker *pUVar4;
  UMovieSceneMaterialParameterInstantiatorSystem *pUVar5;
  code *pcVar6;
  bool bVar7;
  FMovieSceneBlendChannelID FVar8;
  FBuiltInComponentTypes *pFVar9;
  FMovieSceneEntityID *pFVar10;
  UMovieScenePiecewiseDoubleBlenderSystem *pUVar11;
  undefined4 extraout_var;
  FEntityManager *this_00;
  FMovieSceneEntityID *pFVar12;
  FWeakObjectPtr local_64;
  UMovieSceneEntitySystemLinker *local_58;
  UMovieScenePiecewiseDoubleBlenderSystem *local_50;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_48;
  
  pFVar9 = FBuiltInComponentTypes::Get();
  FMovieSceneTracksComponentTypes::Get();
  iVar3 = param_3->ArrayNum;
  if (iVar3 == 0) {
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8875111272174059156>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneMaterialParameterSystem.cpp"
                       ,0x16c,"NumContributors != 0");
    if (!bVar7) {
      return;
    }
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_1->ObjectPtr).field0_0x0.DebugPtr == (UObject *)0x0) {
    DestroyOutput(this,param_1,param_2,param_4,param_5);
    pFVar12 = param_3->DataPtr;
    pFVar10 = pFVar12 + iVar3;
    for (; pFVar12 != pFVar10; pFVar12 = pFVar12 + 1) {
      FEntityManager::RemoveComponent
                (&this->Linker->EntityManager,(FMovieSceneEntityID)pFVar12->Value,
                 (FComponentTypeID)*(ushort *)&pFVar9->BlendChannelInput);
    }
    return;
  }
  if (iVar3 < 2) {
    pUVar4 = this->Linker;
    FVar1.Value = (pFVar9->Tags).AbsoluteBlend.Value;
    if ((iVar3 < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    bVar7 = FEntityManager::HasComponent
                      (&pUVar4->EntityManager,(FMovieSceneEntityID)param_3->DataPtr->Value,FVar1);
    if (bVar7) {
      pUVar4 = this->Linker;
      FVar1.Value = *(ushort *)&pFVar9->WeightAndEasingResult;
      pFVar10 = TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::operator[](param_3,0);
      bVar7 = FEntityManager::HasComponent
                        (&pUVar4->EntityManager,(FMovieSceneEntityID)pFVar10->Value,FVar1);
      if (!bVar7) {
        if (((param_4->OutputEntityID).Value == 0xffff) && (param_3->ArrayNum == 1)) {
          pUVar4 = this->Linker;
          FVar1.Value = *(ushort *)&pFVar9->BlendChannelInput;
          pFVar10 = TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::operator[]
                              (param_3,0);
          FEntityManager::RemoveComponent
                    (&pUVar4->EntityManager,(FMovieSceneEntityID)pFVar10->Value,FVar1);
          pFVar10 = TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::operator[]
                              (param_3,0);
          FVectorMixin::InitializeSoleInput
                    ((FVectorMixin *)this,this->Linker,param_1,param_2,
                     (FMovieSceneEntityID)pFVar10->Value,param_4);
        }
        goto LAB_146871486;
      }
    }
  }
  if ((param_4->OutputEntityID).Value == 0xffff) {
    if ((this->System->DoubleBlenderSystem).field0_0x0.DebugPtr ==
        (UMovieScenePiecewiseDoubleBlenderSystem *)0x0) {
      pUVar11 = UMovieSceneEntitySystemLinker::LinkSystem<UMovieScenePiecewiseDoubleBlenderSystem>
                          (this->Linker);
      pUVar5 = this->System;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar11 != (UMovieScenePiecewiseDoubleBlenderSystem *)0x0)) {
        GC::MarkAsReachable((UObject *)pUVar11);
      }
      (pUVar5->DoubleBlenderSystem).field0_0x0.DebugPtr = pUVar11;
      FMovieSceneEntitySystemGraph::AddReference
                (&this->Linker->SystemGraph,(UMovieSceneEntitySystem *)this->System,
                 (UMovieSceneEntitySystem *)(this->System->DoubleBlenderSystem).field0_0x0.DebugPtr)
      ;
    }
    local_58 = this->Linker;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (local_58 != (UMovieSceneEntitySystemLinker *)0x0)) {
      GC::MarkAsReachable((UObject *)local_58);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_4,(FObjectPtr)&local_58);
    pUVar11 = (this->System->DoubleBlenderSystem).field0_0x0.DebugPtr;
    if (GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar11 != (UMovieScenePiecewiseDoubleBlenderSystem *)0x0) {
        GC::MarkAsReachable((UObject *)pUVar11);
      }
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar11 != (UMovieScenePiecewiseDoubleBlenderSystem *)0x0)) {
        GC::MarkAsReachable((UObject *)pUVar11);
      }
    }
    local_64.ObjectIndex = 0;
    local_64.ObjectSerialNumber = 0;
    local_50 = pUVar11;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar11 != (UMovieScenePiecewiseDoubleBlenderSystem *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar11);
    }
    FWeakObjectPtr::operator=(&local_64,(FObjectPtr)&local_50);
    (param_4->WeakBlenderSystem).WeakPtr = local_64;
    FVar8 = UMovieSceneBlenderSystem::AllocateBlendChannel
                      ((UMovieSceneBlenderSystem *)
                       (this->System->DoubleBlenderSystem).field0_0x0.DebugPtr);
    local_48.DataPtr = param_3->DataPtr;
    local_48.ArrayNum = param_3->ArrayNum;
    local_48._12_4_ = *(undefined4 *)&param_3->field_0xc;
    param_4->BlendChannelID = *(FMovieSceneBlendChannelID *)CONCAT44(extraout_var,FVar8);
    FVectorMixin::CreateEntity
              ((FVectorMixin *)this,this->Linker,param_1,param_2,
               (FComponentTypeID)
               *(ushort *)
                ((longlong)&((this->System->DoubleBlenderSystem).field0_0x0.DebugPtr)->_padding_ + 6
                ),&local_48,param_4);
  }
  pFVar12 = param_3->DataPtr;
  FVar1.Value = *(ushort *)
                 ((longlong)&((this->System->DoubleBlenderSystem).field0_0x0.DebugPtr)->_padding_ +
                 6);
  pFVar10 = pFVar12 + param_3->ArrayNum;
  for (; pFVar12 != pFVar10; pFVar12 = pFVar12 + 1) {
    FVar2.Value = pFVar12->Value;
    bVar7 = FEntityManager::HasComponent
                      (&this->Linker->EntityManager,FVar2,
                       (FComponentTypeID)*(ushort *)&pFVar9->BlendChannelInput);
    this_00 = &this->Linker->EntityManager;
    if (bVar7) {
      FEntityManager::WriteComponentChecked<FMovieSceneBlendChannelID,FMovieSceneBlendChannelID_&>
                (this_00,FVar2,pFVar9->BlendChannelInput,&param_4->BlendChannelID);
    }
    else {
      FEntityManager::AddComponent<FMovieSceneBlendChannelID,FMovieSceneBlendChannelID_&>
                (this_00,FVar2,pFVar9->BlendChannelInput,&param_4->BlendChannelID);
    }
    FEntityManager::AddComponent(&this->Linker->EntityManager,FVar2,FVar1);
  }
LAB_146871486:
  param_4->NumContributors = iVar3;
  return;
}

