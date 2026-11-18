// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticStruct @ 148ee3240

UScriptStruct * __cdecl FMovieSceneNiagaraSystemTrackImplementation::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation,
                         (UObject *)pUVar1,L"MovieSceneNiagaraSystemTrackImplementation");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation.
         OuterSingleton;
}

// FMovieSceneNiagaraSystemTrackImplementation @ 148f7fd80

FMovieSceneNiagaraSystemTrackImplementation * __thiscall
FMovieSceneNiagaraSystemTrackImplementation::FMovieSceneNiagaraSystemTrackImplementation
          (FMovieSceneNiagaraSystemTrackImplementation *this,FFrameNumber param_1,
          FFrameNumber param_2,ENiagaraSystemSpawnSectionStartBehavior param_3,
          ENiagaraSystemSpawnSectionEvaluateBehavior param_4,
          ENiagaraSystemSpawnSectionEndBehavior param_5,ENiagaraAgeUpdateMode param_6,bool param_7)

{
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieSceneNiagaraSystemTrackImplementation__6B_;
  this->SpawnSectionEvaluateBehavior = param_4;
  this->SpawnSectionEndBehavior = param_5;
  this->AgeUpdateMode = param_6;
  this->bAllowScalability = param_7;
  (this->SpawnSectionStartFrame).Value = param_1.Value;
  (this->SpawnSectionEndFrame).Value = param_2.Value;
  this->SpawnSectionStartBehavior = param_3;
  return this;
}

// FMovieSceneNiagaraSystemTrackImplementation @ 148f7fdd0

FMovieSceneNiagaraSystemTrackImplementation * __thiscall
FMovieSceneNiagaraSystemTrackImplementation::FMovieSceneNiagaraSystemTrackImplementation
          (FMovieSceneNiagaraSystemTrackImplementation *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieSceneNiagaraSystemTrackImplementation__6B_;
  this->SpawnSectionStartFrame = 0;
  this->SpawnSectionEndFrame = 0;
  this->bAllowScalability = false;
  this->SpawnSectionStartBehavior = Activate;
  this->SpawnSectionEvaluateBehavior = None;
  this->SpawnSectionEndBehavior = SetSystemInactive;
  this->AgeUpdateMode = TickDeltaTime;
  return this;
}

// Evaluate @ 148fa9d70

void __thiscall
FMovieSceneNiagaraSystemTrackImplementation::Evaluate
          (FMovieSceneNiagaraSystemTrackImplementation *this,FMovieSceneEvaluationTrack *param_1,
          TArrayView<FMovieSceneFieldEntry_ChildTemplate_const_,int> *param_2,
          FMovieSceneEvaluationOperand *param_3,FMovieSceneContext *param_4,
          FPersistentEvaluationData *param_5,FMovieSceneExecutionTokens *param_6)

{
  TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined1 uVar4;
  int iVar5;
  FMovieSceneNestedSequenceTransform *pFVar6;
  longlong lVar7;
  FFrameNumber FVar8;
  int iVar9;
  ulong64 uVar10;
  byte bVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  undefined1 *puVar16;
  FNiagaraSystemUpdateDesiredAgeExecutionToken local_48;
  
  puVar15 = (uint *)0x0;
  pTVar3 = &(param_6->Context).RootToSequenceTransform.NestedTransforms;
  lVar7 = param_4->_padding_;
  pTVar1 = &(param_4->RootToSequenceTransform).NestedTransforms;
  (param_6->Context)._padding_ = param_4->_padding_;
  (param_6->Context)._padding_ = lVar7;
  lVar7 = param_4->_padding_;
  (param_6->Context)._padding_ = param_4->_padding_;
  (param_6->Context)._padding_ = lVar7;
  (param_6->Context)._padding_ = param_4->_padding_;
  FVar8.Value = (param_4->RootToSequenceTransform).LinearTransform.Offset.FrameNumber.Value;
  (param_6->Context).RootToSequenceTransform.LinearTransform.TimeScale =
       (param_4->RootToSequenceTransform).LinearTransform.TimeScale;
  (param_6->Context).RootToSequenceTransform.LinearTransform.Offset.FrameNumber =
       (FFrameNumber)FVar8.Value;
  (param_6->Context).RootToSequenceTransform.LinearTransform.Offset.SubFrame =
       (param_4->RootToSequenceTransform).LinearTransform.Offset.SubFrame;
  if (pTVar3 != pTVar1) {
    DestructItems<FMovieSceneNestedSequenceTransform,int>
              ((FMovieSceneNestedSequenceTransform *)(pTVar3->AllocatorInstance).Data,
               (param_6->Context).RootToSequenceTransform.NestedTransforms.ArrayNum);
    iVar9 = (param_4->RootToSequenceTransform).NestedTransforms.ArrayNum;
    piVar2 = &(param_6->Context).RootToSequenceTransform.NestedTransforms.ArrayMax;
    pFVar6 = (FMovieSceneNestedSequenceTransform *)(pTVar1->AllocatorInstance).Data;
    iVar5 = *piVar2;
    (param_6->Context).RootToSequenceTransform.NestedTransforms.ArrayNum = iVar9;
    if ((iVar9 == 0) && (iVar5 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar9,iVar5,&pTVar3->AllocatorInstance,iVar9,piVar2);
      ConstructItems<FMovieSceneNestedSequenceTransform,FMovieSceneNestedSequenceTransform,int>
                ((pTVar3->AllocatorInstance).Data,pFVar6,iVar9);
    }
  }
  FMovieSceneWarpCounter::operator=
            (&(param_6->Context).RootToSequenceWarpCounter,&param_4->RootToSequenceWarpCounter);
  (param_6->Context).Status = param_4->Status;
  (param_6->Context).PrePostRollStartEndTime.Value = (param_4->PrePostRollStartEndTime).Value;
  (param_6->Context).HierarchicalBias = param_4->HierarchicalBias;
  uVar4 = (param_6->Context).field_0x7c;
  bVar11 = ((param_6->Context).bHasJumped ^ param_4->bHasJumped) & 1U ^ uVar4;
  (param_6->Context).field_0x7c = bVar11;
  bVar11 = (bVar11 ^ param_4->field_0x7c) & 2 ^ bVar11;
  (param_6->Context).field_0x7c = bVar11;
  bVar11 = (bVar11 ^ param_4->field_0x7c) & 4 ^ bVar11;
  (param_6->Context).field_0x7c = bVar11;
  bVar11 = (bVar11 ^ param_4->field_0x7c) & 8 ^ bVar11;
  (param_6->Context).field_0x7c = bVar11;
  bVar11 = (bVar11 ^ param_4->field_0x7c) & 0x10 ^ bVar11;
  (param_6->Context).field_0x7c = bVar11;
  bVar11 = (bVar11 ^ param_4->field_0x7c) & 0x20 ^ bVar11;
  (param_6->Context).field_0x7c = bVar11;
  (param_6->Context).field_0x7c = (bVar11 ^ param_4->field_0x7c) & 0x40 ^ bVar11;
  if (*(int *)&(param_6->SharedTokens).field_0x8 != *(int *)&(param_6->SharedTokens).field_0x34) {
    puVar16 = *(undefined1 **)&(param_6->SharedTokens).field_0x40;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = &(param_6->SharedTokens).field_0x38;
    }
    uVar12 = *(uint *)(puVar16 +
                      (ulonglong)
                      (*(int *)&(param_6->SharedTokens).field_0x48 - 1U &
                      UMovieSceneNiagaraSystemTrack::SharedDataId.UniqueId) * 4);
    if (uVar12 != 0xffffffff) {
      do {
        puVar13 = (uint *)((longlong)(int)uVar12 * 0x38 + *(longlong *)&param_6->SharedTokens);
        if (*puVar13 == UMovieSceneNiagaraSystemTrack::SharedDataId.UniqueId) {
          puVar14 = puVar13 + 2;
          if (puVar13 == (uint *)0x0) {
            puVar14 = puVar15;
          }
          if (puVar14 != (uint *)0x0) {
            if (((puVar14[8] & 1) != 0) && (puVar15 = puVar14, (puVar14[8] & 2) == 0)) {
              puVar15 = *(uint **)puVar14;
            }
            if (puVar15 != (uint *)0x0) {
              uVar10 = CityHash64((char *)param_3,0x10);
              iVar9 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::
                      FindIndexByHash<FGuid>
                                ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)
                                 (puVar15 + 4),(uint)uVar10,&param_3->ObjectBindingID);
              if (iVar9 != -1) {
                return;
              }
            }
          }
          break;
        }
        uVar12 = puVar13[0xc];
      } while (uVar12 != 0xffffffff);
    }
  }
  local_48._padding_ = (longlong)&___7FNiagaraSystemUpdateDesiredAgeExecutionToken__6B_;
  local_48.SpawnSectionStartFrame.Value = (this->SpawnSectionStartFrame).Value;
  local_48.SpawnSectionEndFrame.Value = (this->SpawnSectionEndFrame).Value;
  local_48.SpawnSectionStartBehavior = this->SpawnSectionStartBehavior;
  local_48.SpawnSectionEvaluateBehavior = this->SpawnSectionEvaluateBehavior;
  local_48.SpawnSectionEndBehavior = this->SpawnSectionEndBehavior;
  local_48.AgeUpdateMode = this->AgeUpdateMode;
  local_48.bAllowScalability = this->bAllowScalability;
  FMovieSceneExecutionTokens::Add<FNiagaraSystemUpdateDesiredAgeExecutionToken>(param_6,&local_48);
  return;
}

// GetScriptStructImpl @ 148fb70e0

UScriptStruct * __thiscall
FMovieSceneNiagaraSystemTrackImplementation::GetScriptStructImpl
          (FMovieSceneNiagaraSystemTrackImplementation *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation,
                         (UObject *)pUVar1,L"MovieSceneNiagaraSystemTrackImplementation");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation.
         OuterSingleton;
}

// SetupOverrides @ 148fcdc30

void __thiscall
FMovieSceneNiagaraSystemTrackImplementation::SetupOverrides
          (FMovieSceneNiagaraSystemTrackImplementation *this)

{
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 8;
  return;
}

