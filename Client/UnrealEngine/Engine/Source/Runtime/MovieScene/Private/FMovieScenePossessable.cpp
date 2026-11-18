// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// FMovieScenePossessable @ 146180070

FMovieScenePossessable * __thiscall
FMovieScenePossessable::FMovieScenePossessable
          (FMovieScenePossessable *this,FMovieScenePossessable *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  (this->Tags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Tags).ArrayMax;
  iVar2 = (param_1->Tags).ArrayNum;
  _Src = (param_1->Tags).AllocatorInstance.Data;
  (this->Tags).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->Tags).AllocatorInstance.Data,_Src,(longlong)iVar2 << 3);
  }
  FMovieSceneDynamicBinding::FMovieSceneDynamicBinding
            (&this->DynamicBinding_DEPRECATED,&param_1->DynamicBinding_DEPRECATED);
  uVar3 = (param_1->Guid).B;
  uVar4 = (param_1->Guid).C;
  uVar5 = (param_1->Guid).D;
  (this->Guid).A = (param_1->Guid).A;
  (this->Guid).B = uVar3;
  (this->Guid).C = uVar4;
  (this->Guid).D = uVar5;
  ::FString::FString(&this->Name,&param_1->Name);
  uVar3 = (param_1->ParentGuid).B;
  uVar4 = (param_1->ParentGuid).C;
  uVar5 = (param_1->ParentGuid).D;
  (this->ParentGuid).A = (param_1->ParentGuid).A;
  (this->ParentGuid).B = uVar3;
  (this->ParentGuid).C = uVar4;
  (this->ParentGuid).D = uVar5;
  uVar3 = (param_1->SpawnableObjectBindingID).Guid.B;
  uVar4 = (param_1->SpawnableObjectBindingID).Guid.C;
  uVar5 = (param_1->SpawnableObjectBindingID).Guid.D;
  (this->SpawnableObjectBindingID).Guid.A = (param_1->SpawnableObjectBindingID).Guid.A;
  (this->SpawnableObjectBindingID).Guid.B = uVar3;
  (this->SpawnableObjectBindingID).Guid.C = uVar4;
  (this->SpawnableObjectBindingID).Guid.D = uVar5;
  iVar2 = (param_1->SpawnableObjectBindingID).ResolveParentIndex;
  (this->SpawnableObjectBindingID).SequenceID = (param_1->SpawnableObjectBindingID).SequenceID;
  (this->SpawnableObjectBindingID).ResolveParentIndex = iVar2;
  return this;
}

// StaticStruct @ 1461e9060

UScriptStruct * __cdecl FMovieScenePossessable::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieScenePossessable.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieScenePossessable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieScenePossessable,(UObject *)pUVar1,
                         L"MovieScenePossessable");
  }
  return Z_Registration_Info_UScriptStruct_FMovieScenePossessable.OuterSingleton;
}

// BindSpawnableObject @ 1462085e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMovieScenePossessable::BindSpawnableObject
          (FMovieScenePossessable *this,FMovieSceneSequenceID param_1,UObject *param_2,
          IMovieScenePlayer *param_3)

{
  FSharedPlaybackState *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FMovieSceneRootEvaluationTemplateInstance *this_00;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *pTVar6;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_38;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_28;
  
  this_00 = (FMovieSceneRootEvaluationTemplateInstance *)
            (**(code **)(param_3->_padding_ + 0x18))(param_3);
  pTVar6 = FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(this_00,&local_28);
  if (pTVar6->Object == (FSharedPlaybackState *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pFVar1 = pTVar6->Object;
  pTVar2 = (pTVar6->SharedReferenceCount).ReferenceController;
  (pTVar6->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6->Object = (FSharedPlaybackState *)0x0;
  if (pFVar1 == (FSharedPlaybackState *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = pFVar1;
  local_38.SharedReferenceCount.ReferenceController = pTVar2;
  bVar4 = BindSpawnableObject(this,param_1,param_2,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return bVar4;
}

// BindSpawnableObject @ 1462086e0

bool __thiscall
FMovieScenePossessable::BindSpawnableObject
          (FMovieScenePossessable *this,FMovieSceneSequenceID param_1,UObject *param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FSharedPlaybackState *this_00;
  code *pcVar2;
  FGuid FVar3;
  FWeakObjectPtr FVar4;
  bool bVar5;
  undefined1 uVar6;
  FMovieSceneSpawnableAnnotation *pFVar7;
  FMovieSceneSequenceHierarchy *pFVar8;
  FPlatformRWLock *SRWLock;
  FMovieSceneSequenceID FVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  FRelativeObjectBindingID local_d8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  FMovieSceneSpawnableAnnotation local_a4;
  FGuid local_88;
  FWeakObjectPtr local_78;
  FMovieSceneSequenceID local_70;
  undefined1 local_6c;
  FGuid local_68;
  FWeakObjectPtr local_58;
  uint local_50;
  FMovieSceneSpawnableAnnotation local_48;
  
  if (param_2 == (UObject *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                       ,0x11d,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)&SpawnedObjectAnnotation.AnnotationCacheCritical);
  SRWLock = &SpawnedObjectAnnotation.AnnotationCacheCritical;
  if ((UObjectBase *)param_2 == SpawnedObjectAnnotation.AnnotationCacheKey) {
    local_68 = SpawnedObjectAnnotation.AnnotationCacheValue.ObjectBindingID;
    local_58 = SpawnedObjectAnnotation.AnnotationCacheValue.OriginatingSequence.WeakPtr;
    FVar9 = SpawnedObjectAnnotation.AnnotationCacheValue.SequenceID;
  }
  else {
    ReleaseSRWLockShared((PSRWLOCK)&SpawnedObjectAnnotation.AnnotationCacheCritical);
    AcquireSRWLockShared((PSRWLOCK)&SpawnedObjectAnnotation.AnnotationMapCritical);
    pFVar7 = TMapBase<UObjectBase_const_*,FMovieSceneSpawnableAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMovieSceneSpawnableAnnotation,0>_>
             ::Find((TMapBase<UObjectBase_const_*,FMovieSceneSpawnableAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMovieSceneSpawnableAnnotation,0>_>
                     *)&SpawnedObjectAnnotation.AnnotationMap,(UObjectBase *)param_2);
    if (pFVar7 == (FMovieSceneSpawnableAnnotation *)0x0) {
      local_a4.ObjectBindingID.A = 0;
      local_a4.ObjectBindingID.B = 0;
      local_a4.ObjectBindingID.C = 0;
      local_a4.ObjectBindingID.D = 0;
      local_a4.OriginatingSequence.WeakPtr.ObjectIndex = 0;
      local_a4.OriginatingSequence.WeakPtr.ObjectSerialNumber = 0;
      local_a4.SequenceID.Value = 0xffffffff;
      FUObjectAnnotationSparse<FMovieSceneSpawnableAnnotation,1>::SetAnnotationCacheKeyAndValue
                (&SpawnedObjectAnnotation,(UObjectBase *)param_2,&local_a4);
      FVar9.Value = 0xffffffff;
      local_c0 = 0;
      uStack_b8 = 0;
      uVar10 = 0;
      uVar11 = 0;
      local_b0 = 0;
      local_58.ObjectIndex = 0;
      local_58.ObjectSerialNumber = 0;
      local_a8 = 0xffffffff;
    }
    else {
      local_48.SequenceID.Value = (pFVar7->SequenceID).Value;
      local_48.ObjectBindingID.A = (pFVar7->ObjectBindingID).A;
      local_48.ObjectBindingID.B = (pFVar7->ObjectBindingID).B;
      local_48.ObjectBindingID.C = (pFVar7->ObjectBindingID).C;
      local_48.ObjectBindingID.D = (pFVar7->ObjectBindingID).D;
      local_48.OriginatingSequence.WeakPtr = (pFVar7->OriginatingSequence).WeakPtr;
      FUObjectAnnotationSparse<FMovieSceneSpawnableAnnotation,1>::SetAnnotationCacheKeyAndValue
                (&SpawnedObjectAnnotation,(UObjectBase *)param_2,&local_48);
      uVar10._0_4_ = (pFVar7->ObjectBindingID).A;
      uVar10._4_4_ = (pFVar7->ObjectBindingID).B;
      uVar11._0_4_ = (pFVar7->ObjectBindingID).C;
      uVar11._4_4_ = (pFVar7->ObjectBindingID).D;
      FVar9.Value = (pFVar7->SequenceID).Value;
      local_58 = (pFVar7->OriginatingSequence).WeakPtr;
    }
    SRWLock = &SpawnedObjectAnnotation.AnnotationMapCritical;
    local_68.C = (int)uVar11;
    local_68.D = (int)((ulonglong)uVar11 >> 0x20);
    local_68.A = (int)uVar10;
    local_68.B = (int)((ulonglong)uVar10 >> 0x20);
  }
  FVar4 = local_58;
  local_d8.Guid = local_68;
  local_50 = FVar9.Value;
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  local_6c = ((local_d8.Guid.D != 0 || local_d8.Guid.C != 0) || local_d8.Guid.B != 0) ||
             local_d8.Guid.A != 0;
  if ((bool)local_6c) {
    local_78 = FVar4;
    local_88.A = local_d8.Guid.A;
    local_88.B = local_d8.Guid.B;
    local_88.C = local_d8.Guid.C;
    local_88.D = local_d8.Guid.D;
    local_70.Value = FVar9.Value;
  }
  if (((local_d8.Guid.D == 0 && local_d8.Guid.C == 0) && local_d8.Guid.B == 0) &&
      local_d8.Guid.A == 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->SharedReferenceCount).ReferenceController);
    bVar5 = false;
  }
  else {
    pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
    this_00 = param_3->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((local_d8.Guid.D == 0 && local_d8.Guid.C == 0) && local_d8.Guid.B == 0) &&
        local_d8.Guid.A == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    local_d8.Guid = (FGuid)ZEXT816(0);
    local_d8.SequenceID.Value = 0xffffffff;
    pFVar8 = UE::MovieScene::FSharedPlaybackState::GetHierarchy(this_00);
    UE::MovieScene::FRelativeObjectBindingID::ConstructInternal
              (&local_d8,param_1,local_70,&local_88,pFVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    FVar3 = local_d8.Guid;
    (this->SpawnableObjectBindingID).Guid.A = local_d8.Guid.A;
    (this->SpawnableObjectBindingID).Guid.B = local_d8.Guid.B;
    (this->SpawnableObjectBindingID).Guid.C = local_d8.Guid.C;
    (this->SpawnableObjectBindingID).Guid.D = local_d8.Guid.D;
    local_b0 = CONCAT44(local_d8.ResolveParentIndex,local_d8.SequenceID.Value);
    (this->SpawnableObjectBindingID).SequenceID = local_d8.SequenceID.Value;
    (this->SpawnableObjectBindingID).ResolveParentIndex = local_d8.ResolveParentIndex;
    local_d8.Guid = FVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->SharedReferenceCount).ReferenceController);
    bVar5 = true;
  }
  return bVar5;
}

// SetParent @ 1462350f0

void __thiscall FMovieScenePossessable::SetParent(FMovieScenePossessable *this,FGuid *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1->B;
  uVar2 = param_1->C;
  uVar3 = param_1->D;
  (this->ParentGuid).A = param_1->A;
  (this->ParentGuid).B = uVar1;
  (this->ParentGuid).C = uVar2;
  (this->ParentGuid).D = uVar3;
  return;
}

// SetParent @ 146235100

void __thiscall
FMovieScenePossessable::SetParent(FMovieScenePossessable *this,FGuid *param_1,UMovieScene *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((((this->ParentGuid).D != param_1->D || (this->ParentGuid).C != param_1->C) ||
      (this->ParentGuid).B != param_1->B) || param_1->A != (this->ParentGuid).A) {
    uVar1 = param_1->B;
    uVar2 = param_1->C;
    uVar3 = param_1->D;
    (this->ParentGuid).A = param_1->A;
    (this->ParentGuid).B = uVar1;
    (this->ParentGuid).C = uVar2;
    (this->ParentGuid).D = uVar3;
  }
  return;
}

