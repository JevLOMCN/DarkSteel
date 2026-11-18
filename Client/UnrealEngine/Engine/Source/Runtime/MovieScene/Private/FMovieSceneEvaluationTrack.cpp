// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 18

// ~FMovieSceneEvaluationTrack @ 146097bf0

void __thiscall
FMovieSceneEvaluationTrack::~FMovieSceneEvaluationTrack(FMovieSceneEvaluationTrack *this)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  FMovieSceneTrackImplementationPtr *pFVar3;
  
  bVar1 = (this->TrackTemplate).field_0x30;
  if ((bVar1 & 1) != 0) {
    if ((bVar1 & 2) == 0) {
      pFVar3 = *(FMovieSceneTrackImplementationPtr **)&this->TrackTemplate;
    }
    else {
      pFVar3 = &this->TrackTemplate;
    }
    (this->TrackTemplate).field_0x30 = bVar1 & 0xfe;
    (*(code *)**(undefined8 **)pFVar3)(pFVar3,0);
    if (((this->TrackTemplate).field_0x30 & 2) == 0) {
      FMemory::Free(*(void **)&this->TrackTemplate);
    }
  }
  DestructItems<FMovieSceneEvalTemplatePtr,int>
            ((FMovieSceneEvalTemplatePtr *)(this->ChildTemplates).AllocatorInstance.Data,
             (this->ChildTemplates).ArrayNum);
  pFVar2 = (this->ChildTemplates).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// StaticStruct @ 146165180

UScriptStruct * __cdecl FMovieSceneEvaluationTrack::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationTrack.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationTrack.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack,(UObject *)pUVar1,
                         L"MovieSceneEvaluationTrack");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationTrack.OuterSingleton;
}

// FMovieSceneEvaluationTrack @ 14617f0f0

FMovieSceneEvaluationTrack * __thiscall
FMovieSceneEvaluationTrack::FMovieSceneEvaluationTrack
          (FMovieSceneEvaluationTrack *this,FMovieSceneEvaluationTrack *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  
  uVar6 = (param_1->ObjectBindingID).B;
  uVar3 = (param_1->ObjectBindingID).C;
  uVar4 = (param_1->ObjectBindingID).D;
  (this->ObjectBindingID).A = (param_1->ObjectBindingID).A;
  (this->ObjectBindingID).B = uVar6;
  (this->ObjectBindingID).C = uVar3;
  (this->ObjectBindingID).D = uVar4;
  this->EvaluationPriority = param_1->EvaluationPriority;
  this->EvaluationMethod = param_1->EvaluationMethod;
  (this->SourceTrack).WeakPtr = (param_1->SourceTrack).WeakPtr;
  (this->ChildTemplates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildTemplates).AllocatorInstance.Data = (param_1->ChildTemplates).AllocatorInstance.Data;
  (param_1->ChildTemplates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildTemplates).ArrayNum = (param_1->ChildTemplates).ArrayNum;
  (this->ChildTemplates).ArrayMax = (param_1->ChildTemplates).ArrayMax;
  (param_1->ChildTemplates).ArrayNum = 0;
  (param_1->ChildTemplates).ArrayMax = 0;
  bVar5 = (this->TrackTemplate).field_0x30 & 0xfe;
  (this->TrackTemplate).field_0x30 = bVar5 | 2;
  if (((param_1->TrackTemplate).field_0x30 & 1) != 0) {
    (this->TrackTemplate).field_0x30 = bVar5 | 3;
    puVar1 = &(param_1->TrackTemplate).field_0x30;
    *puVar1 = *puVar1 & 0xfe;
    puVar1 = &(this->TrackTemplate).field_0x30;
    *puVar1 = *puVar1 ^ ((param_1->TrackTemplate).field_0x30 ^ (this->TrackTemplate).field_0x30) & 2
    ;
    uVar2 = *(undefined8 *)&(param_1->TrackTemplate).field_0x8;
    *(undefined8 *)&this->TrackTemplate = *(undefined8 *)&param_1->TrackTemplate;
    *(undefined8 *)&(this->TrackTemplate).field_0x8 = uVar2;
    uVar2 = *(undefined8 *)&(param_1->TrackTemplate).field_0x18;
    *(undefined8 *)&(this->TrackTemplate).field_0x10 =
         *(undefined8 *)&(param_1->TrackTemplate).field_0x10;
    *(undefined8 *)&(this->TrackTemplate).field_0x18 = uVar2;
    uVar2 = *(undefined8 *)&(param_1->TrackTemplate).field_0x28;
    *(undefined8 *)&(this->TrackTemplate).field_0x20 =
         *(undefined8 *)&(param_1->TrackTemplate).field_0x20;
    *(undefined8 *)&(this->TrackTemplate).field_0x28 = uVar2;
  }
  this->EvaluationGroup = param_1->EvaluationGroup;
  uVar6 = (this->bEvaluateInPreroll ^ param_1->bEvaluateInPreroll) & 1 ^ *(uint *)&this->field_0x70;
  *(uint *)&this->field_0x70 = uVar6;
  uVar6 = (uVar6 ^ *(uint *)&param_1->field_0x70) & 2 ^ uVar6;
  *(uint *)&this->field_0x70 = uVar6;
  *(uint *)&this->field_0x70 = (uVar6 ^ *(uint *)&param_1->field_0x70) & 4 ^ uVar6;
  return this;
}

// FMovieSceneEvaluationTrack @ 14617f1c0

FMovieSceneEvaluationTrack * __thiscall
FMovieSceneEvaluationTrack::FMovieSceneEvaluationTrack
          (FMovieSceneEvaluationTrack *this,FGuid *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 local_res8;
  
  uVar3 = param_1->A;
  uVar4 = param_1->B;
  uVar5 = param_1->C;
  uVar6 = param_1->D;
  this->EvaluationPriority = 1000;
  this->EvaluationMethod = Static;
  (this->ObjectBindingID).A = uVar3;
  (this->ObjectBindingID).B = uVar4;
  (this->ObjectBindingID).C = uVar5;
  (this->ObjectBindingID).D = uVar6;
  local_res8 = 0;
  (this->SourceTrack).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->SourceTrack).WeakPtr,(FObjectPtr)&local_res8);
  puVar2 = &(this->TrackTemplate).field_0x30;
  *puVar2 = *puVar2 & 0xfe;
  puVar2 = &(this->TrackTemplate).field_0x30;
  *puVar2 = *puVar2 | 2;
  (this->ChildTemplates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  puVar2 = &this->field_0x70;
  this->bEvaluateInPreroll = 1;
  this->bTearDownPriority = 0;
  this->bEvaluateInPostroll = 1;
  (this->ChildTemplates).ArrayNum = 0;
  (this->ChildTemplates).ArrayMax = 0;
  (this->EvaluationGroup).ComparisonIndex = 0;
  (this->EvaluationGroup).Number = 0;
  return this;
}

// FMovieSceneEvaluationTrack @ 14617f230

FMovieSceneEvaluationTrack * __thiscall
FMovieSceneEvaluationTrack::FMovieSceneEvaluationTrack(FMovieSceneEvaluationTrack *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined8 local_res8;
  
  this->EvaluationPriority = 1000;
  (this->ObjectBindingID).A = 0;
  (this->ObjectBindingID).B = 0;
  (this->ObjectBindingID).C = 0;
  (this->ObjectBindingID).D = 0;
  this->EvaluationMethod = Static;
  local_res8 = 0;
  (this->SourceTrack).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->SourceTrack).WeakPtr,(FObjectPtr)&local_res8);
  puVar2 = &(this->TrackTemplate).field_0x30;
  *puVar2 = *puVar2 & 0xfe;
  puVar2 = &(this->TrackTemplate).field_0x30;
  *puVar2 = *puVar2 | 2;
  (this->ChildTemplates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  puVar2 = &this->field_0x70;
  this->bEvaluateInPreroll = 1;
  this->bTearDownPriority = 0;
  this->bEvaluateInPostroll = 1;
  (this->ChildTemplates).ArrayNum = 0;
  (this->ChildTemplates).ArrayMax = 0;
  (this->EvaluationGroup).ComparisonIndex = 0;
  (this->EvaluationGroup).Number = 0;
  return this;
}

// AddChildTemplate @ 14618d390

int __thiscall
FMovieSceneEvaluationTrack::AddChildTemplate
          (FMovieSceneEvaluationTrack *this,FMovieSceneEvalTemplatePtr *param_1)

{
  TArray<FMovieSceneEvalTemplatePtr,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FMovieSceneEvalTemplatePtr *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar1 = &this->ChildTemplates;
  pFVar3 = (FMovieSceneEvalTemplatePtr *)(pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->ChildTemplates).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  iVar6 = (this->ChildTemplates).ArrayNum;
  piVar2 = &(this->ChildTemplates).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x888,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->ChildTemplates).ArrayNum = iVar6 + 1;
  FMovieSceneEvalTemplatePtr::FMovieSceneEvalTemplatePtr
            ((FMovieSceneEvalTemplatePtr *)
             ((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x88),param_1);
  return iVar6;
}

// DefaultEvaluate @ 14619c800

void __thiscall
FMovieSceneEvaluationTrack::DefaultEvaluate
          (FMovieSceneEvaluationTrack *this,
          TArrayView<FMovieSceneFieldEntry_ChildTemplate_const_,int> *param_1,
          FMovieSceneEvaluationOperand *param_2,FMovieSceneContext *param_3,
          FPersistentEvaluationData *param_4,FMovieSceneExecutionTokens *param_5)

{
  FMovieSceneContext *pFVar1;
  TArrayView<FMovieSceneFieldEntry_ChildTemplate_const_,int> local_98;
  FMovieSceneContext local_88;
  
  if (this->EvaluationMethod == Static) {
    pFVar1 = FMovieSceneContext::FMovieSceneContext(&local_88,param_3);
    local_98.DataPtr = param_1->DataPtr;
    local_98.ArrayNum = param_1->ArrayNum;
    local_98._12_4_ = *(undefined4 *)&param_1->field_0xc;
    EvaluateStatic(this,&local_98,param_2,pFVar1,param_4,param_5);
  }
  else if (this->EvaluationMethod == Swept) {
    local_98.DataPtr = param_1->DataPtr;
    local_98.ArrayNum = param_1->ArrayNum;
    local_98._12_4_ = *(undefined4 *)&param_1->field_0xc;
    EvaluateSwept(this,&local_98,param_2,param_3,param_4,param_5);
  }
  return;
}

// DefaultInitialize @ 14619c8c0

void __thiscall
FMovieSceneEvaluationTrack::DefaultInitialize
          (FMovieSceneEvaluationTrack *this,
          TArrayView<FMovieSceneFieldEntry_ChildTemplate_const_,int> *param_1,
          FMovieSceneEvaluationOperand *param_2,FMovieSceneContext *param_3,
          FPersistentEvaluationData *param_4,IMovieScenePlayer *param_5)

{
  FMovieSceneFieldEntry_ChildTemplate *pFVar1;
  FMovieSceneFieldEntry_ChildTemplate FVar2;
  void *pvVar3;
  code *pcVar4;
  FMovieSceneTrackIdentifier FVar5;
  bool bVar6;
  uint uVar7;
  byte bVar8;
  FScriptContainerElement *pFVar9;
  FMovieSceneFieldEntry_ChildTemplate *pFVar10;
  ESectionEvaluationFlags EStackX_12;
  FFrameNumber FStackX_14;
  
  pFVar10 = param_1->DataPtr;
  pFVar1 = pFVar10 + param_1->ArrayNum;
  do {
    if (pFVar10 == pFVar1) {
      pFVar9 = (param_3->RootToSequenceWarpCounter).WarpCounts.AllocatorInstance.Data;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      pvVar3 = (void *)(param_3->RootToSequenceWarpCounter)._padding_;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      pFVar9 = (param_3->RootToSequenceTransform).NestedTransforms.AllocatorInstance.Data;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
        return;
      }
      return;
    }
    FVar2 = *pFVar10;
    uVar7 = FVar2._0_4_ & 0xffff;
    if ((int)uVar7 < (this->ChildTemplates).ArrayNum) {
      if (((this->ChildTemplates).ArrayNum <= (int)uVar7) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((byte)(this->ChildTemplates).AllocatorInstance.Data
                 [((ulonglong)FVar2 & 0xffff) * 0x88 + 0x80] & 1) != 0) {
        uVar7 = (uint)((ulonglong)FVar2 & 0xffff);
        if (((this->ChildTemplates).ArrayNum <= (int)uVar7) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar9 = (this->ChildTemplates).AllocatorInstance.Data + ((ulonglong)FVar2 & 0xffff) * 0x88;
        if ((((byte)pFVar9[0x80] & 1) == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("bIsValid",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                               ,0x97,
                               L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((byte)pFVar9[0x80] & 2) == 0) {
          pFVar9 = *(FScriptContainerElement **)pFVar9;
        }
        if ((pFVar9 != (FScriptContainerElement *)0x0) && (((byte)pFVar9[8] & 4) != 0)) {
          FVar5.Value = (param_4->TrackKey).TrackIdentifier.Value;
          EStackX_12 = FVar2.Flags;
          (param_4->SectionKey).SequenceID =
               (FMovieSceneSequenceID)(param_4->TrackKey).SequenceID.Value;
          (param_4->SectionKey).TrackIdentifier = (FMovieSceneTrackIdentifier)FVar5.Value;
          FStackX_14 = FVar2.ForcedTime.Value;
          (param_4->SectionKey).SectionIndex = uVar7;
          bVar8 = param_3->field_0x7c;
          *(int *)((longlong)&param_3->_padding_ + 4) = FStackX_14.Value;
          bVar8 = bVar8 & 0xf7;
          if ((int)param_3->_padding_ == 0) {
            bVar8 = bVar8 | (EStackX_12 & PreRoll) << 3;
            bVar8 = ((EStackX_12 >> 1) << 4 ^ bVar8) & 0x10 ^ bVar8;
          }
          else {
            bVar8 = ((EStackX_12 >> 1 & 1) << 3 ^ bVar8) & 0xef | (EStackX_12 & PreRoll) << 4;
          }
          param_3->field_0x7c = bVar8;
          (**(code **)(*(longlong *)pFVar9 + 0x28))(pFVar9,param_2,param_3,param_4,param_5);
        }
      }
    }
    pFVar10 = pFVar10 + 1;
  } while( true );
}

// DefineAsSingleTemplate @ 14619cb00

void __thiscall
FMovieSceneEvaluationTrack::DefineAsSingleTemplate
          (FMovieSceneEvaluationTrack *this,FMovieSceneEvalTemplatePtr *param_1)

{
  TArray<FMovieSceneEvalTemplatePtr,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FMovieSceneEvalTemplatePtr *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar1 = &this->ChildTemplates;
  piVar2 = &(this->ChildTemplates).ArrayMax;
  pFVar3 = (FMovieSceneEvalTemplatePtr *)(pTVar1->AllocatorInstance).Data;
  iVar6 = (this->ChildTemplates).ArrayNum;
  if ((this->ChildTemplates).ArrayMax < 1) {
    DestructItems<FMovieSceneEvalTemplatePtr,int>(pFVar3,iVar6);
    (this->ChildTemplates).ArrayNum = 0;
    if (*piVar2 != 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x88,8,1,&pTVar1->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<FMovieSceneEvalTemplatePtr,int>(pFVar3,iVar6);
    (this->ChildTemplates).ArrayNum = 0;
  }
  pFVar3 = (FMovieSceneEvalTemplatePtr *)(pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + *piVar2)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->ChildTemplates).ArrayNum;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x888,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->ChildTemplates).ArrayNum = iVar6 + 1;
  FMovieSceneEvalTemplatePtr::FMovieSceneEvalTemplatePtr
            ((FMovieSceneEvalTemplatePtr *)
             ((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x88),param_1);
  return;
}

// Evaluate @ 1461a19d0

void __thiscall
FMovieSceneEvaluationTrack::Evaluate
          (FMovieSceneEvaluationTrack *this,
          TArrayView<FMovieSceneFieldEntry_ChildTemplate_const_,int> *param_1,
          FMovieSceneEvaluationOperand *param_2,FMovieSceneContext *param_3,
          FPersistentEvaluationData *param_4,FMovieSceneExecutionTokens *param_5)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FMovieSceneTrackImplementationPtr *pFVar4;
  FMovieSceneContext *pFVar5;
  FMovieSceneTrackImplementationPtr *pFVar6;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  TArrayView<FMovieSceneFieldEntry_ChildTemplate_const_,int> local_a8;
  TArrayView<FMovieSceneFieldEntry_ChildTemplate_const_,int> local_98;
  FMovieSceneContext local_88;
  
  if (((this->TrackTemplate).field_0x30 & 1) != 0) {
    pFVar6 = &this->TrackTemplate;
    bVar1 = (this->TrackTemplate).field_0x30;
    pFVar4 = pFVar6;
    if ((bVar1 & 2) == 0) {
      pFVar4 = *(FMovieSceneTrackImplementationPtr **)pFVar6;
    }
    if ((pFVar4->field_0x8 & 8) != 0) {
      if (((bVar1 & 1) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsValid",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                             ,0x97,
                             L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((this->TrackTemplate).field_0x30 & 2) == 0) {
        pFVar6 = *(FMovieSceneTrackImplementationPtr **)pFVar6;
      }
      local_b8 = *(undefined4 *)&param_1->DataPtr;
      uStack_b4 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
      iStack_b0 = param_1->ArrayNum;
      uStack_ac = *(undefined4 *)&param_1->field_0xc;
      (**(code **)(*(longlong *)pFVar6 + 0x30))
                (pFVar6,this,&local_b8,param_2,param_3,param_4,param_5);
      return;
    }
  }
  if (this->EvaluationMethod == Static) {
    pFVar5 = FMovieSceneContext::FMovieSceneContext(&local_88,param_3);
    local_98.DataPtr = param_1->DataPtr;
    local_98.ArrayNum = param_1->ArrayNum;
    local_98._12_4_ = *(undefined4 *)&param_1->field_0xc;
    EvaluateStatic(this,&local_98,param_2,pFVar5,param_4,param_5);
  }
  else if (this->EvaluationMethod == Swept) {
    local_a8.DataPtr = param_1->DataPtr;
    local_a8.ArrayNum = param_1->ArrayNum;
    local_a8._12_4_ = *(undefined4 *)&param_1->field_0xc;
    EvaluateSwept(this,&local_a8,param_2,param_3,param_4,param_5);
  }
  return;
}

// EvaluateStatic @ 1461a3be0

void __thiscall
FMovieSceneEvaluationTrack::EvaluateStatic
          (FMovieSceneEvaluationTrack *this,
          TArrayView<FMovieSceneFieldEntry_ChildTemplate_const_,int> *param_1,
          FMovieSceneEvaluationOperand *param_2,FMovieSceneContext *param_3,
          FPersistentEvaluationData *param_4,FMovieSceneExecutionTokens *param_5)

{
  FMovieSceneFieldEntry_ChildTemplate *pFVar1;
  FMovieSceneFieldEntry_ChildTemplate FVar2;
  void *pvVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  FScriptContainerElement FVar10;
  FScriptContainerElement *pFVar11;
  FMovieSceneFieldEntry_ChildTemplate *pFVar12;
  ESectionEvaluationFlags EStackX_12;
  FFrameNumber FStackX_14;
  undefined4 uStack_40;
  
  pFVar12 = param_1->DataPtr;
  pFVar1 = pFVar12 + param_1->ArrayNum;
  do {
    if (pFVar12 == pFVar1) {
      pFVar11 = (param_3->RootToSequenceWarpCounter).WarpCounts.AllocatorInstance.Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      pvVar3 = (void *)(param_3->RootToSequenceWarpCounter)._padding_;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      pFVar11 = (param_3->RootToSequenceTransform).NestedTransforms.AllocatorInstance.Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      return;
    }
    FVar2 = *pFVar12;
    uVar7 = FVar2._0_4_ & 0xffff;
    if ((int)uVar7 < (this->ChildTemplates).ArrayNum) {
      if (((this->ChildTemplates).ArrayNum <= (int)uVar7) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((byte)(this->ChildTemplates).AllocatorInstance.Data
                 [((ulonglong)FVar2 & 0xffff) * 0x88 + 0x80] & 1) != 0) {
        if (((this->ChildTemplates).ArrayNum <= (int)((ulonglong)FVar2 & 0xffff)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar11 = (this->ChildTemplates).AllocatorInstance.Data + ((ulonglong)FVar2 & 0xffff) * 0x88
        ;
        if ((((byte)pFVar11[0x80] & 1) == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("bIsValid",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                               ,0x97,
                               L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((byte)pFVar11[0x80] & 2) == 0) {
          pFVar11 = *(FScriptContainerElement **)pFVar11;
        }
        if (pFVar11 != (FScriptContainerElement *)0x0) {
          FStackX_14 = FVar2.ForcedTime.Value;
          EStackX_12 = FVar2.Flags;
          bVar9 = param_3->field_0x7c;
          *(int *)((longlong)&param_3->_padding_ + 4) = FStackX_14.Value;
          bVar9 = bVar9 & 0xf7;
          if ((int)param_3->_padding_ == 0) {
            bVar9 = bVar9 | (EStackX_12 & PreRoll) << 3;
            bVar9 = ((EStackX_12 >> 1) << 4 ^ bVar9) & 0x10 ^ bVar9;
          }
          else {
            bVar9 = ((EStackX_12 >> 1 & 1) << 3 ^ bVar9) & 0xef | (EStackX_12 & PreRoll) << 4;
          }
          param_3->field_0x7c = bVar9;
          if (((ulonglong)FVar2 & 0x80000) == 0) {
            if (((ulonglong)FVar2 & 0x40000) == 0) {
              FVar10 = pFVar11[0x10];
            }
            else {
              FVar10 = (FScriptContainerElement)0x0;
            }
          }
          else {
            FVar10 = (FScriptContainerElement)0x1;
          }
          uVar7 = (param_4->TrackKey).SequenceID.Value;
          uVar5 = (param_4->TrackKey).TrackIdentifier.Value;
          uVar8 = (uint)uStack_40 >> 8;
          uStack_40 = CONCAT31((int3)uVar8,FVar10);
          (param_4->SectionKey).SequenceID.Value = uVar7;
          (param_4->SectionKey).TrackIdentifier.Value = uVar5;
          uVar8 = FVar2._0_4_ & 0xffff;
          (param_4->SectionKey).SectionIndex = uVar8;
          (param_5->Scope).Key.SequenceID.Value = uVar7;
          (param_5->Scope).Key.TrackIdentifier.Value = uVar5;
          (param_5->Scope).Key.SectionIndex = uVar8;
          *(undefined4 *)&(param_5->Scope).CompletionMode = uStack_40;
          FMovieSceneContext::operator=(&param_5->Context,param_3);
          (**(code **)(*(longlong *)pFVar11 + 0x30))(pFVar11,param_2,param_3,param_4,param_5);
        }
      }
    }
    pFVar12 = pFVar12 + 1;
  } while( true );
}

// EvaluateSwept @ 1461a3ea0

void __thiscall
FMovieSceneEvaluationTrack::EvaluateSwept
          (FMovieSceneEvaluationTrack *this,
          TArrayView<FMovieSceneFieldEntry_ChildTemplate_const_,int> *param_1,
          FMovieSceneEvaluationOperand *param_2,FMovieSceneContext *param_3,
          FPersistentEvaluationData *param_4,FMovieSceneExecutionTokens *param_5)

{
  TRange<FFrameNumber> *this_00;
  uchar uVar1;
  int iVar2;
  UObject *pUVar3;
  code *pcVar4;
  uint uVar5;
  FFrameNumber FVar6;
  bool bVar7;
  uint uVar8;
  UMovieSceneTrack *this_01;
  UObject *pUVar9;
  FFrameNumber *pFVar10;
  FScriptContainerElement FVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  TEnumAsByte<ERangeBoundTypes::Type> TVar15;
  TRange<FFrameNumber> *pTVar16;
  int iVar17;
  FMovieSceneContext *pFVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  undefined1 local_res8 [8];
  TRange<FFrameNumber> local_c8;
  FScriptContainerElement *local_b8;
  uint local_b0;
  TRangeBound<FFrameNumber> local_ac;
  ulonglong local_a4;
  FScriptContainerElement local_9c [4];
  int local_98;
  FScriptContainerElement local_94 [4];
  int local_90;
  uint local_8c;
  undefined4 uStack_88;
  uint local_84;
  undefined4 uStack_80;
  uint local_7c;
  undefined4 uStack_78;
  uint local_74;
  undefined4 uStack_70;
  FMovieSceneTrackEvaluationField *local_68;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint local_48;
  
  iVar17 = *(int *)((longlong)&param_3->_padding_ + 4);
  if (iVar17 == -0x80000000) {
    if ((int)param_3->_padding_ == 0) {
      pFVar18 = (FMovieSceneContext *)((longlong)&param_3->_padding_ + 4);
      if ((*(char *)((longlong)&param_3->_padding_ + 4) == '\x02') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      pFVar18 = param_3;
      if (((char)param_3->_padding_ == '\x02') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar17 = *(int *)((longlong)&pFVar18->_padding_ + 4);
  }
  this_01 = (UMovieSceneTrack *)FWeakObjectPtr::Get(&(this->SourceTrack).WeakPtr);
  local_68 = UMovieSceneTrack::GetEvaluationField(this_01);
  local_b0 = (local_68->Entries).ArrayNum;
  uVar12 = (ulonglong)(int)local_b0;
  pFVar19 = (local_68->Entries).AllocatorInstance.Data;
  local_b8 = pFVar19 + uVar12 * 0x20;
  pFVar20 = pFVar19 + uVar12 * 0x20;
  do {
    while( true ) {
      if ((local_68->Entries).ArrayNum != (int)uVar12) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FMovieSceneTrackEvaluationFieldEntry_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar19 == pFVar20) {
        return;
      }
      pFVar13 = pFVar19 + 8;
      local_9c[0] = (FScriptContainerElement)0x1;
      local_98 = iVar17;
      if (pFVar19[8] == (FScriptContainerElement)0x2) break;
      if (*(int *)(pFVar19 + 0xc) < iVar17) {
LAB_1461a3fb7:
        if (*(int *)(pFVar13 + 4) == *(int *)(pFVar19 + 0xc)) break;
      }
      else {
        if (iVar17 < *(int *)(pFVar19 + 0xc)) {
          pFVar13 = local_9c;
        }
        if (pFVar19[8] == (FScriptContainerElement)0x1) goto LAB_1461a3fb7;
      }
LAB_1461a433e:
      pFVar19 = pFVar19 + 0x20;
      uVar12 = (ulonglong)local_b0;
    }
    pFVar13 = pFVar19 + 0x10;
    local_94[0] = (FScriptContainerElement)0x1;
    local_90 = iVar17;
    if (pFVar19[0x10] != (FScriptContainerElement)0x2) {
      if (*(int *)(pFVar19 + 0x14) <= iVar17) {
        if (*(int *)(pFVar19 + 0x14) < iVar17) {
          pFVar13 = local_94;
        }
        if (pFVar19[0x10] != (FScriptContainerElement)0x1) goto LAB_1461a433e;
      }
      if (*(int *)(pFVar13 + 4) != *(int *)(pFVar19 + 0x14)) goto LAB_1461a433e;
    }
    if (pFVar19[0x1c] != (FScriptContainerElement)0x0) goto LAB_1461a433e;
    pUVar3 = *(UObject **)pFVar19;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar3 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
    }
    pFVar13 = (this->ChildTemplates).AllocatorInstance.Data;
    iVar2 = (this->ChildTemplates).ArrayNum;
    pFVar20 = local_b8;
    pFVar14 = pFVar13;
    if (pFVar13 == pFVar13 + (longlong)iVar2 * 0x88) goto LAB_1461a433e;
    do {
      if (((byte)pFVar14[0x80] & 1) != 0) {
        pFVar20 = pFVar14;
        if (((byte)pFVar14[0x80] & 2) == 0) {
          pFVar20 = *(FScriptContainerElement **)pFVar14;
        }
        pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar20 + 0x14));
        if (pUVar3 == (UObject *)0x0) {
          bVar7 = pUVar9 == (UObject *)0x0;
        }
        else {
          bVar7 = pUVar3 == pUVar9;
        }
        if (bVar7) {
          uVar5 = (uint)(((longlong)pFVar14 - (longlong)pFVar13) / 0x88);
          pFVar20 = local_b8;
          if (uVar5 != 0xffffffff) {
            uVar8 = 0;
            if ((int)uVar5 < (this->ChildTemplates).ArrayNum) {
              uVar8 = ~uVar5 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar20 = (this->ChildTemplates).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x88;
            if ((((byte)pFVar20[0x80] & 1) == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("bIsValid",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                   ,0x97,
                                   L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                                  ), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (((byte)pFVar20[0x80] & 2) == 0) {
              pFVar20 = *(FScriptContainerElement **)pFVar20;
            }
            if (((byte)pFVar19[0x1c] & 8) == 0) {
              if (((byte)pFVar19[0x1c] & 4) == 0) {
                FVar11 = pFVar20[0x10];
              }
              else {
                FVar11 = (FScriptContainerElement)0x0;
              }
            }
            else {
              FVar11 = (FScriptContainerElement)0x1;
            }
            uStack_54 = CONCAT31(uStack_54._1_3_,FVar11);
            local_48 = (param_4->TrackKey).SectionIndex;
            local_60 = (param_4->TrackKey).SequenceID.Value;
            uStack_5c = (param_4->TrackKey).TrackIdentifier.Value;
            (param_4->SectionKey).SequenceID.Value = local_60;
            (param_4->SectionKey).TrackIdentifier.Value = uStack_5c;
            (param_4->SectionKey).SectionIndex = uVar5;
            (param_5->Scope).Key.SequenceID.Value = local_60;
            (param_5->Scope).Key.TrackIdentifier.Value = uStack_5c;
            (param_5->Scope).Key.SectionIndex = uVar5;
            *(undefined4 *)&(param_5->Scope).CompletionMode = uStack_54;
            uStack_58 = uVar5;
            FMovieSceneContext::operator=(&param_5->Context,param_3);
            pcVar4 = *(code **)(*(longlong *)pFVar20 + 0x38);
            FMovieSceneEvaluationRange::TimeRangeToNumberRange
                      (&local_c8,(TRange<FFrameTime> *)param_3);
            this_00 = (TRange<FFrameNumber> *)(pFVar19 + 8);
            bVar7 = TRange<FFrameNumber>::IsEmpty(this_00);
            FVar6.Value = local_c8.UpperBound.Value.Value;
            if (bVar7) {
              local_84 = local_84 & 0xffffff00;
              local_8c = local_8c & 0xffffff00;
              uStack_88 = 0;
              local_ac.Value.Value = 0;
              local_ac._0_4_ = local_8c;
              uStack_80 = 0;
              local_a4 = (ulonglong)local_84;
            }
            else {
              TVar15.Value = local_c8.LowerBound.Type.Value;
              if ((TVar15.Value == '\x02') || (local_c8.UpperBound.Type.Value == '\x02')) {
LAB_1461a429b:
                pFVar13 = pFVar19 + 0x10;
                if (pFVar19[0x10] == (FScriptContainerElement)0x2) {
                  pFVar14 = (FScriptContainerElement *)&local_c8.UpperBound;
                }
                else {
                  pFVar14 = pFVar13;
                  if ((local_c8.UpperBound.Type.Value != '\x02') &&
                     (local_c8.UpperBound.Value.Value <= *(int *)(pFVar19 + 0x14))) {
                    if (local_c8.UpperBound.Value.Value < *(int *)(pFVar19 + 0x14)) {
                      pFVar14 = (FScriptContainerElement *)&local_c8.UpperBound;
                    }
                    else {
                      pFVar14 = (FScriptContainerElement *)&local_c8.UpperBound;
                      if (pFVar19[0x10] == (FScriptContainerElement)0x0) {
                        pFVar14 = pFVar13;
                      }
                    }
                  }
                }
                uVar1 = (this_00->LowerBound).Type.Value;
                if (uVar1 == '\x02') {
                  pTVar16 = &local_c8;
                }
                else {
                  pTVar16 = this_00;
                  if ((TVar15.Value != '\x02') &&
                     (*(int *)(pFVar19 + 0xc) <= local_c8.LowerBound.Value.Value)) {
                    if (*(int *)(pFVar19 + 0xc) < local_c8.LowerBound.Value.Value) {
                      pTVar16 = &local_c8;
                    }
                    else {
                      pTVar16 = &local_c8;
                      if (uVar1 == '\0') {
                        pTVar16 = this_00;
                      }
                    }
                  }
                }
                local_ac = pTVar16->LowerBound;
                local_a4 = *(ulonglong *)pFVar14;
              }
              else {
                if ((TVar15.Value == '\x02') &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Type != ERangeBoundTypes::Open",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                       ,99,L""), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if (local_c8.LowerBound.Value.Value <= FVar6.Value) {
                  pFVar10 = TRangeBound<FFrameNumber>::GetValue(&local_c8.UpperBound);
                  iVar2 = pFVar10->Value;
                  pFVar10 = TRangeBound<FFrameNumber>::GetValue(&local_c8.LowerBound);
                  TVar15.Value = local_c8.LowerBound.Type.Value;
                  if ((pFVar10->Value != iVar2) ||
                     ((TVar15.Value != '\0' && (local_c8.UpperBound.Type.Value != '\0'))))
                  goto LAB_1461a429b;
                }
                local_74 = local_74 & 0xffffff00;
                local_7c = local_7c & 0xffffff00;
                uStack_78 = 0;
                local_ac.Value.Value = 0;
                local_ac._0_4_ = local_7c;
                uStack_70 = 0;
                local_a4 = (ulonglong)local_74;
              }
            }
            (*pcVar4)(pFVar20,param_2,param_3,&local_ac,param_4,param_5);
            pFVar20 = local_b8;
          }
          goto LAB_1461a433e;
        }
      }
      pFVar14 = pFVar14 + 0x88;
    } while (pFVar14 != pFVar13 + (longlong)iVar2 * 0x88);
    pFVar19 = pFVar19 + 0x20;
    uVar12 = (ulonglong)local_b0;
    pFVar20 = local_b8;
  } while( true );
}

// GetChildTemplate @ 1461b0680

FMovieSceneEvalTemplate * __thiscall
FMovieSceneEvaluationTrack::GetChildTemplate(FMovieSceneEvaluationTrack *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMovieSceneEvalTemplate *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->ChildTemplates).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMovieSceneEvalTemplate *)(*pcVar1)();
      return pFVar4;
    }
  }
  pFVar4 = (FMovieSceneEvalTemplate *)
           ((this->ChildTemplates).AllocatorInstance.Data + (longlong)param_1 * 0x88);
  if ((pFVar4[4]._padding_ & 1) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMovieSceneEvalTemplate *)(*pcVar1)();
      return pFVar4;
    }
  }
  if ((pFVar4[4]._padding_ & 2) == 0) {
    pFVar4 = (FMovieSceneEvalTemplate *)pFVar4->_padding_;
  }
  return pFVar4;
}

// HasChildTemplate @ 1461b54e0

bool __thiscall
FMovieSceneEvaluationTrack::HasChildTemplate(FMovieSceneEvaluationTrack *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->ChildTemplates).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->ChildTemplates).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (((byte)(this->ChildTemplates).AllocatorInstance.Data[(longlong)param_1 * 0x88 + 0x80] & 1)
        != 0) {
      return true;
    }
  }
  return false;
}

// Initialize @ 1461b5a40

void __thiscall
FMovieSceneEvaluationTrack::Initialize
          (FMovieSceneEvaluationTrack *this,
          TArrayView<FMovieSceneFieldEntry_ChildTemplate_const_,int> *param_1,
          FMovieSceneEvaluationOperand *param_2,FMovieSceneContext *param_3,
          FPersistentEvaluationData *param_4,IMovieScenePlayer *param_5)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FMovieSceneTrackImplementationPtr *pFVar4;
  FMovieSceneContext *pFVar5;
  FMovieSceneTrackImplementationPtr *pFVar6;
  undefined4 local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  TArrayView<FMovieSceneFieldEntry_ChildTemplate_const_,int> local_98;
  FMovieSceneContext local_88;
  
  if (((this->TrackTemplate).field_0x30 & 1) != 0) {
    pFVar6 = &this->TrackTemplate;
    bVar1 = (this->TrackTemplate).field_0x30;
    pFVar4 = pFVar6;
    if ((bVar1 & 2) == 0) {
      pFVar4 = *(FMovieSceneTrackImplementationPtr **)pFVar6;
    }
    if ((pFVar4->field_0x8 & 4) != 0) {
      if (((bVar1 & 1) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsValid",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                             ,0x97,
                             L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((this->TrackTemplate).field_0x30 & 2) == 0) {
        pFVar6 = *(FMovieSceneTrackImplementationPtr **)pFVar6;
      }
      local_a8 = *(undefined4 *)&param_1->DataPtr;
      uStack_a4 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
      iStack_a0 = param_1->ArrayNum;
      uStack_9c = *(undefined4 *)&param_1->field_0xc;
      (**(code **)(*(longlong *)pFVar6 + 0x28))
                (pFVar6,this,&local_a8,param_2,param_3,param_4,param_5);
      return;
    }
  }
  pFVar5 = FMovieSceneContext::FMovieSceneContext(&local_88,param_3);
  local_98.DataPtr = param_1->DataPtr;
  local_98.ArrayNum = param_1->ArrayNum;
  local_98._12_4_ = *(undefined4 *)&param_1->field_0xc;
  DefaultInitialize(this,&local_98,param_2,pFVar5,param_4,param_5);
  return;
}

// Interrogate @ 1461b9760

void __thiscall
FMovieSceneEvaluationTrack::Interrogate
          (FMovieSceneEvaluationTrack *this,FMovieSceneContext *param_1,
          FMovieSceneInterrogationData *param_2,UObject *param_3)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  UMovieSceneTrack *this_00;
  UObject *pUVar8;
  FMovieSceneTrackImplementationPtr *pFVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  FMovieSceneContext *pFVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_68 [4];
  uint local_64;
  FScriptContainerElement *local_60;
  FScriptContainerElement local_58 [4];
  int local_54;
  FScriptContainerElement local_50 [4];
  int local_4c;
  FMovieSceneTrackEvaluationField *local_48;
  
  if (((this->TrackTemplate).field_0x30 & 1) != 0) {
    pFVar9 = &this->TrackTemplate;
    if (((this->TrackTemplate).field_0x30 & 2) == 0) {
      pFVar9 = *(FMovieSceneTrackImplementationPtr **)pFVar9;
    }
    cVar5 = (**(code **)(*(longlong *)pFVar9 + 0x38))();
    if (cVar5 != '\0') {
      return;
    }
  }
  iVar14 = *(int *)((longlong)&param_1->_padding_ + 4);
  if (iVar14 == -0x80000000) {
    if ((int)param_1->_padding_ == 0) {
      pFVar15 = (FMovieSceneContext *)((longlong)&param_1->_padding_ + 4);
      if ((*(char *)((longlong)&param_1->_padding_ + 4) == '\x02') &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      pFVar15 = param_1;
      if (((char)param_1->_padding_ == '\x02') &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar14 = *(int *)((longlong)&pFVar15->_padding_ + 4);
  }
  this_00 = (UMovieSceneTrack *)FWeakObjectPtr::Get(&(this->SourceTrack).WeakPtr);
  local_48 = UMovieSceneTrack::GetEvaluationField(this_00);
  local_64 = (local_48->Entries).ArrayNum;
  uVar10 = (ulonglong)(int)local_64;
  pFVar16 = (local_48->Entries).AllocatorInstance.Data;
  pFVar12 = pFVar16 + uVar10 * 0x20;
  pFVar17 = pFVar16 + 8;
  local_60 = pFVar12;
  do {
    if ((local_48->Entries).ArrayNum != (int)uVar10) {
      local_68[0] = 0;
      `TCheckedPointerIterator<FMovieSceneTrackEvaluationFieldEntry_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_68);
    }
    if (pFVar16 == pFVar12) {
      FMovieSceneInterrogationData::Finalize(param_2,param_1,param_3);
      return;
    }
    local_58[0] = (FScriptContainerElement)0x1;
    local_54 = iVar14;
    if (*pFVar17 == (FScriptContainerElement)0x2) {
LAB_1461b98c7:
      pFVar11 = pFVar17 + 8;
      local_50[0] = (FScriptContainerElement)0x1;
      local_4c = iVar14;
      if (pFVar17[8] != (FScriptContainerElement)0x2) {
        iVar1 = *(int *)(pFVar17 + 0xc);
        if (iVar1 <= iVar14) {
          if (iVar1 < iVar14) {
            pFVar11 = local_50;
          }
          if (pFVar17[8] != (FScriptContainerElement)0x1) goto LAB_1461b99b3;
        }
        if (*(int *)(pFVar11 + 4) != iVar1) goto LAB_1461b99b3;
      }
      if (pFVar17[0x14] == (FScriptContainerElement)0x0) {
        pUVar2 = *(UObject **)pFVar16;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar2 != (UObject *)0x0) {
            UE::GC::MarkAsReachable(pUVar2);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar2);
          }
        }
        pFVar11 = (this->ChildTemplates).AllocatorInstance.Data;
        iVar1 = (this->ChildTemplates).ArrayNum;
        pFVar12 = local_60;
        for (pFVar13 = pFVar11; local_60 = pFVar12, pFVar13 != pFVar11 + (longlong)iVar1 * 0x88;
            pFVar13 = pFVar13 + 0x88) {
          if (((byte)pFVar13[0x80] & 1) != 0) {
            pFVar12 = pFVar13;
            if (((byte)pFVar13[0x80] & 2) == 0) {
              pFVar12 = *(FScriptContainerElement **)pFVar13;
            }
            pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar12 + 0x14));
            if (pUVar2 == (UObject *)0x0) {
              bVar6 = pUVar8 == (UObject *)0x0;
            }
            else {
              bVar6 = pUVar2 == pUVar8;
            }
            if (bVar6) {
              uVar4 = (uint)(((longlong)pFVar13 - (longlong)pFVar11) / 0x88);
              pFVar12 = local_60;
              if (uVar4 != 0xffffffff) {
                uVar7 = 0;
                if ((int)uVar4 < (this->ChildTemplates).ArrayNum) {
                  uVar7 = ~uVar4 >> 0x1f;
                }
                if ((uVar7 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar12 = (this->ChildTemplates).AllocatorInstance.Data +
                          (longlong)(int)uVar4 * 0x88;
                if ((((byte)pFVar12[0x80] & 1) == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("bIsValid",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                       ,0x97,
                                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                                      ), bVar6)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                if (((byte)pFVar12[0x80] & 2) == 0) {
                  pFVar12 = *(FScriptContainerElement **)pFVar12;
                }
                (**(code **)(*(longlong *)pFVar12 + 0x48))(pFVar12,param_1,param_2,param_3);
                pFVar12 = local_60;
              }
              break;
            }
          }
          pFVar12 = local_60;
        }
      }
    }
    else {
      pFVar11 = pFVar17;
      if (*(int *)(pFVar17 + 4) < iVar14) {
LAB_1461b98ba:
        if (*(int *)(pFVar11 + 4) == *(int *)(pFVar17 + 4)) goto LAB_1461b98c7;
      }
      else {
        if (iVar14 < *(int *)(pFVar17 + 4)) {
          pFVar11 = local_58;
        }
        if (*pFVar17 == (FScriptContainerElement)0x1) goto LAB_1461b98ba;
      }
    }
LAB_1461b99b3:
    pFVar16 = pFVar16 + 0x20;
    uVar10 = (ulonglong)local_64;
    pFVar17 = pFVar17 + 0x20;
  } while( true );
}

// PostSerialize @ 1461c3870

void __thiscall
FMovieSceneEvaluationTrack::PostSerialize(FMovieSceneEvaluationTrack *this,FArchive *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FMovieSceneTrackImplementationPtr *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 auStackX_8 [8];
  
  if (((param_1->field_0x28 & 1) != 0) && ((param_1->field_0x2b & 1) == 0)) {
    iVar1 = (this->ChildTemplates).ArrayNum;
    pFVar4 = (this->ChildTemplates).AllocatorInstance.Data;
    pFVar5 = pFVar4 + (longlong)iVar1 * 0x88;
    while( true ) {
      if ((this->ChildTemplates).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FMovieSceneEvalTemplatePtr,int,0>::operator!='::__l2::<lambda_1>::
        operator()(auStackX_8);
      }
      if (pFVar4 == pFVar5) break;
      if (((byte)pFVar4[0x80] & 1) != 0) {
        pFVar2 = pFVar4;
        if (((byte)pFVar4[0x80] & 2) == 0) {
          pFVar2 = *(FScriptContainerElement **)pFVar4;
        }
        (**(code **)(*(longlong *)pFVar2 + 8))();
      }
      pFVar4 = pFVar4 + 0x88;
    }
    if (((this->TrackTemplate).field_0x30 & 1) != 0) {
      pFVar3 = &this->TrackTemplate;
      if (((this->TrackTemplate).field_0x30 & 2) == 0) {
        pFVar3 = *(FMovieSceneTrackImplementationPtr **)pFVar3;
      }
      (**(code **)(*(longlong *)pFVar3 + 8))();
    }
    return;
  }
  return;
}

// SetupOverrides @ 1461d3c70

void __thiscall FMovieSceneEvaluationTrack::SetupOverrides(FMovieSceneEvaluationTrack *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FMovieSceneTrackImplementationPtr *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ChildTemplates).ArrayNum;
  pFVar4 = (this->ChildTemplates).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x88;
  while( true ) {
    if ((this->ChildTemplates).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMovieSceneEvalTemplatePtr,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if (((byte)pFVar4[0x80] & 1) != 0) {
      pFVar2 = pFVar4;
      if (((byte)pFVar4[0x80] & 2) == 0) {
        pFVar2 = *(FScriptContainerElement **)pFVar4;
      }
      (**(code **)(*(longlong *)pFVar2 + 8))();
    }
    pFVar4 = pFVar4 + 0x88;
  }
  if (((this->TrackTemplate).field_0x30 & 1) != 0) {
    pFVar3 = &this->TrackTemplate;
    if (((this->TrackTemplate).field_0x30 & 2) == 0) {
      pFVar3 = *(FMovieSceneTrackImplementationPtr **)pFVar3;
    }
    (**(code **)(*(longlong *)pFVar3 + 8))();
  }
  return;
}

