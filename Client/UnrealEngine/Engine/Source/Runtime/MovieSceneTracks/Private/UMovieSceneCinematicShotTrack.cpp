// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 17

// StaticClass @ 146881120

UClass * __cdecl UMovieSceneCinematicShotTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCinematicShotTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCinematicShotTrack",
               &Z_Registration_Info_UClass_UMovieSceneCinematicShotTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneCinematicShotTrack,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCinematicShotTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneCinematicShotTrack>,local_res8,
               UMovieSceneSubTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCinematicShotTrack.InnerSingleton;
}

// UMovieSceneCinematicShotTrack @ 14689d380

UMovieSceneCinematicShotTrack * __thiscall
UMovieSceneCinematicShotTrack::UMovieSceneCinematicShotTrack
          (UMovieSceneCinematicShotTrack *this,FVTableHelper *param_1)

{
  UMovieSceneSubTrack::UMovieSceneSubTrack((UMovieSceneSubTrack *)this,param_1);
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  return this;
}

// UMovieSceneCinematicShotTrack @ 14689d3c0

UMovieSceneCinematicShotTrack * __thiscall
UMovieSceneCinematicShotTrack::UMovieSceneCinematicShotTrack
          (UMovieSceneCinematicShotTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneSubTrack::UMovieSceneSubTrack((UMovieSceneSubTrack *)this,param_1);
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  return this;
}

// ~UMovieSceneCinematicShotTrack @ 1468a0660

void __thiscall
UMovieSceneCinematicShotTrack::~UMovieSceneCinematicShotTrack(UMovieSceneCinematicShotTrack *this)

{
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  UMovieSceneSubTrack::~UMovieSceneSubTrack((UMovieSceneSubTrack *)this);
  return;
}

// AddSection @ 1468a8b30

void __thiscall
UMovieSceneCinematicShotTrack::AddSection
          (UMovieSceneCinematicShotTrack *this,UMovieSceneSection *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  undefined1 *puVar5;
  UMovieSceneSection *local_18 [2];
  
  pUVar4 = Z_Construct_UClass_UMovieSceneCinematicShotSection_NoRegister();
  iVar3 = (int)pUVar4->_padding_;
  if ((iVar3 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
      == &pUVar4->_padding_)) {
    puVar5 = &this->field_0xa8;
    local_18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if ((*(UMovieSceneSection ***)puVar5 <= local_18) &&
       (local_18 < *(UMovieSceneSection ***)puVar5 + *(int *)&this->field_0xb4)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar3 = *(int *)&this->field_0xb0;
    if (iVar3 == *(int *)&this->field_0xb4) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)puVar5,(int *)&this->field_0xb4);
    }
    *(int *)&this->field_0xb0 = iVar3 + 1;
    *(UMovieSceneSection **)(*(longlong *)puVar5 + (longlong)iVar3 * 8) = local_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_18[0] != (UMovieSceneSection *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_18[0]);
    }
  }
  return;
}

// AddSequence @ 1468a9830

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieSceneSubSection * __thiscall
UMovieSceneCinematicShotTrack::AddSequence
          (UMovieSceneCinematicShotTrack *this,UMovieSceneSequence *param_1,FFrameNumber param_2,
          int param_3)

{
  UMovieSceneSubSection *pUVar1;
  
  pUVar1 = (UMovieSceneSubSection *)(**(code **)(*(longlong *)this + 0x388))();
  return pUVar1;
}

// AddSequenceOnRow @ 1468a9850

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieSceneSubSection * __thiscall
UMovieSceneCinematicShotTrack::AddSequenceOnRow
          (UMovieSceneCinematicShotTrack *this,UMovieSceneSequence *param_1,FFrameNumber param_2,
          int param_3,int param_4)

{
  longlong lVar1;
  UMovieSceneSubSection *pUVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  
  pUVar2 = UMovieSceneSubTrack::AddSequenceOnRow
                     ((UMovieSceneSubTrack *)this,param_1,param_2,param_3,param_4);
  if (pUVar2 != (UMovieSceneSubSection *)0x0) {
    Z_Construct_UClass_UMovieSceneCinematicShotSection_NoRegister();
  }
  puVar5 = &this->field_0x118;
  lVar4 = *(longlong *)puVar5;
  iVar3 = *(int *)&this->field_0x120;
  lVar1 = lVar4 + (longlong)iVar3 * 8;
  while( true ) {
    if (*(int *)&this->field_0x120 != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (lVar4 == lVar1) break;
    lVar4 = lVar4 + 8;
  }
  MovieSceneHelpers::SortConsecutiveSections
            ((TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)puVar5);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    puVar6 = *(undefined8 **)puVar5;
    iVar3 = 0;
    if (0 < *(int *)&this->field_0x120) {
      do {
        if ((UObject *)*puVar6 != (UObject *)0x0) {
          UE::GC::MarkAsReachable((UObject *)*puVar6);
        }
        iVar3 = iVar3 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar3 < *(int *)&this->field_0x120);
    }
  }
  return pUVar2;
}

// CreateNewSection @ 1468ae010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneCinematicShotTrack::CreateNewSection(UMovieSceneCinematicShotTrack *this)

{
  UClass *pUVar1;
  UMovieSceneSection *pUVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UMovieSceneCinematicShotSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_Transactional;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = this;
  pUVar2 = (UMovieSceneSection *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// GetEvaluationFieldVersion @ 1468b5ab0

schar __thiscall
UMovieSceneCinematicShotTrack::GetEvaluationFieldVersion(UMovieSceneCinematicShotTrack *this)

{
  return '\x02';
}

// GetPrivateStaticClass @ 1468b6c10

UClass * __cdecl UMovieSceneCinematicShotTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCinematicShotTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCinematicShotTrack",
               &Z_Registration_Info_UClass_UMovieSceneCinematicShotTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneCinematicShotTrack,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCinematicShotTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneCinematicShotTrack>,local_res8,
               UMovieSceneSubTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCinematicShotTrack.InnerSingleton;
}

// PopulateEvaluationTree @ 1468c54e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UMovieSceneCinematicShotTrack::PopulateEvaluationTree
          (UMovieSceneCinematicShotTrack *this,
          TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *param_1)

{
  ForElementType<UE::MovieScene::FCinematicShotSectionSortData> FVar1;
  int iVar2;
  int iVar3;
  UMovieSceneSection *pUVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  FFrameNumber *pFVar10;
  longlong lVar11;
  FMovieSceneTrackEvaluationData *pFVar12;
  uint uVar13;
  ForElementType<UE::MovieScene::FCinematicShotSectionSortData> FVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a8;
  FIdentityFunctor local_1a7 [7];
  TRangeBound<FFrameNumber> local_1a0;
  TRangeBound<FFrameNumber> TStack_198;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *local_190;
  code *local_188;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> **local_180;
  IMovieSceneEvaluationTreeNodeOperator local_178;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *local_170;
  FWeakObjectPtr local_168;
  FWeakObjectPtr FStack_160;
  undefined8 local_158;
  TRange<FFrameNumber> local_148;
  FMovieSceneTrackEvaluationData local_138;
  ForElementType<UE::MovieScene::FCinematicShotSectionSortData> local_118;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  uVar13 = 0;
  local_118.SecondaryData = (ForElementType<UE::MovieScene::FCinematicShotSectionSortData>)0x0;
  local_50 = 0;
  local_4c = 0x10;
  if (0 < *(int *)&this->field_0x120) {
    lVar16 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar13 < *(int *)&this->field_0x120) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      lVar11 = *(longlong *)(lVar16 + *(longlong *)&this->field_0x118);
      if (((lVar11 != 0) && ((*(byte *)(lVar11 + 0xd8) & 1) != 0)) &&
         (bVar6 = UMovieSceneTrack::IsRowEvalDisabled
                            ((UMovieSceneTrack *)this,*(int *)(lVar11 + 0xd0),true), !bVar6)) {
        local_1a0._0_4_ = *(undefined4 *)(lVar11 + 0xb0);
        local_1a0.Value.Value = *(int *)(lVar11 + 0xb4);
        TStack_198._0_4_ = *(undefined4 *)(lVar11 + 0xb8);
        iVar2 = *(int *)(lVar11 + 0xbc);
        TStack_198.Value.Value = iVar2;
        if ((local_1a0.Type.Value == '\x02') || (TStack_198.Type.Value == '\x02')) {
LAB_1468c5673:
          iVar2 = *(int *)(lVar11 + 0xd0);
          iVar3 = *(int *)(lVar11 + 0xd4);
          if (local_50 == local_4c) {
            local_50 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FCinematicShotSectionSortData>_>
                                 (0x40c,&local_118,(int *)&local_4c);
          }
          lVar11 = (longlong)(int)local_50;
          FVar14 = (ForElementType<UE::MovieScene::FCinematicShotSectionSortData>)&local_118;
          if (local_118.SecondaryData !=
              (ForElementType<UE::MovieScene::FCinematicShotSectionSortData>)0x0) {
            FVar14 = local_118.SecondaryData;
          }
          local_50 = local_50 + 1;
          ((FCinematicShotSectionSortData *)((longlong)FVar14 + lVar11 * 0xc))->Row = iVar2;
          ((int *)((longlong)FVar14 + 4))[lVar11 * 3] = iVar3;
          ((int *)((longlong)FVar14 + 8))[lVar11 * 3] = uVar13;
        }
        else {
          if ((local_1a0.Type.Value == '\x02') &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          if (local_1a0.Value.Value <= iVar2) {
            pFVar10 = TRangeBound<FFrameNumber>::GetValue(&TStack_198);
            iVar2 = pFVar10->Value;
            pFVar10 = TRangeBound<FFrameNumber>::GetValue(&local_1a0);
            if ((pFVar10->Value != iVar2) ||
               ((local_1a0.Type.Value != '\0' && (TStack_198.Type.Value != '\0'))))
            goto LAB_1468c5673;
          }
        }
      }
      uVar13 = uVar13 + 1;
      lVar16 = lVar16 + 8;
    } while ((int)uVar13 < *(int *)&this->field_0x120);
  }
  FVar14 = (ForElementType<UE::MovieScene::FCinematicShotSectionSortData>)&local_118;
  if (local_118.SecondaryData != (ForElementType<UE::MovieScene::FCinematicShotSectionSortData>)0x0)
  {
    FVar14 = local_118.SecondaryData;
  }
  AlgoImpl::
  IntroSortInternal<UE::MovieScene::FCinematicShotSectionSortData,int,FIdentityFunctor,TDereferenceWrapper<UE::MovieScene::FCinematicShotSectionSortData,TLess<void>_>_>
            ((FCinematicShotSectionSortData *)FVar14,local_50,local_1a7[0],(TLess<void> *)local_1a7)
  ;
  uVar13 = local_50;
  uVar15 = (ulonglong)(int)local_50;
  FVar14 = (ForElementType<UE::MovieScene::FCinematicShotSectionSortData>)&local_118;
  if (local_118.SecondaryData != (ForElementType<UE::MovieScene::FCinematicShotSectionSortData>)0x0)
  {
    FVar14 = local_118.SecondaryData;
  }
  FVar1 = (ForElementType<UE::MovieScene::FCinematicShotSectionSortData>)
          ((longlong)FVar14 + uVar15 * 0xc);
  while( true ) {
    if ((uint)uVar15 != uVar13) {
      local_1a8 = 0;
      `TCheckedPointerIterator<UE::MovieScene::FCinematicShotSectionSortData,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_1a8);
    }
    if (FVar14 == FVar1) {
      if (local_118.SecondaryData !=
          (ForElementType<UE::MovieScene::FCinematicShotSectionSortData>)0x0) {
        FMemory::Free((void *)local_118.SecondaryData);
      }
      return true;
    }
    uVar8 = *(int *)((longlong)FVar14 + 8);
    uVar9 = 0;
    if ((int)uVar8 < *(int *)&this->field_0x120) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    pUVar4 = *(UMovieSceneSection **)(*(longlong *)&this->field_0x118 + (longlong)(int)uVar8 * 8);
    pFVar12 = FMovieSceneTrackEvaluationData::FromSection(&local_138,pUVar4);
    local_180 = &local_190;
    local_188 = UE::Core::Private::Function::
                TFunctionRefCaller<`TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData>::AddIfEmpty'::__l2::<lambda_1>,bool,FMovieSceneEvaluationTreeNodeHandle>
                ::Call;
    local_168 = (pFVar12->Track).WeakPtr;
    FStack_160 = (pFVar12->Section).WeakPtr;
    local_178 = (IMovieSceneEvaluationTreeNodeOperator)
                &___7FAddOperator___TMovieSceneEvaluationTree_UFMovieSceneTrackEvaluationData____6B_
    ;
    local_158._0_4_ = pFVar12->ForcedTime;
    local_158._4_2_ = pFVar12->SortOrder;
    local_158._6_1_ = pFVar12->Flags;
    local_158._7_1_ = pFVar12->field_0x17;
    local_148.LowerBound = (pUVar4->SectionRange).Value.LowerBound;
    local_148.UpperBound = (pUVar4->SectionRange).Value.UpperBound;
    local_190 = param_1;
    local_170 = param_1;
    FMovieSceneEvaluationTree::AddTimeRange
              ((FMovieSceneEvaluationTree *)param_1,&local_148,&local_178,
               (FMovieSceneEvaluationTreeNodeHandle)0xffffffff,
               (TFunctionRef<bool___cdecl(FMovieSceneEvaluationTreeNodeHandle)> *)&local_188);
    uVar15 = (ulonglong)local_50;
    local_178 = (IMovieSceneEvaluationTreeNodeOperator)
                &___7IMovieSceneEvaluationTreeNodeOperator__6B_;
    FVar14 = (ForElementType<UE::MovieScene::FCinematicShotSectionSortData>)((longlong)FVar14 + 0xc)
    ;
  }
  pcVar5 = (code *)swi(3);
  uVar7 = (*pcVar5)();
  return (bool)uVar7;
}

// RemoveSection @ 1468c9b70

void __thiscall
UMovieSceneCinematicShotTrack::RemoveSection
          (UMovieSceneCinematicShotTrack *this,UMovieSceneSection *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *this_00;
  undefined8 *puVar4;
  TObjectPtr<UMovieSceneSection>_u_0 local_res8;
  
  local_res8.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  this_00 = &this->field_0xa8;
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>::Remove
            ((TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *)this_00,
             (TObjectPtr<UMovieSceneSection> *)&local_res8.ObjectPtr);
  lVar3 = *(longlong *)this_00;
  iVar2 = *(int *)&this->field_0xb0;
  lVar1 = lVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (*(int *)&this->field_0xb0 != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (lVar3 == lVar1) break;
    lVar3 = lVar3 + 8;
  }
  MovieSceneHelpers::SortConsecutiveSections
            ((TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)this_00);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    puVar4 = *(undefined8 **)this_00;
    iVar2 = 0;
    if (0 < *(int *)&this->field_0xb0) {
      do {
        if ((UObject *)*puVar4 != (UObject *)0x0) {
          UE::GC::MarkAsReachable((UObject *)*puVar4);
        }
        iVar2 = iVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar2 < *(int *)&this->field_0xb0);
    }
  }
  return;
}

// RemoveSectionAt @ 1468ca4b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMovieSceneCinematicShotTrack::RemoveSectionAt(UMovieSceneCinematicShotTrack *this,int param_1)

{
  undefined1 *this_00;
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  
  this_00 = &this->field_0xa8;
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>::RemoveAt
            ((TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *)this_00,param_1,
             Default);
  lVar3 = *(longlong *)this_00;
  iVar2 = *(int *)&this->field_0xb0;
  lVar1 = lVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (*(int *)&this->field_0xb0 != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (lVar3 == lVar1) break;
    lVar3 = lVar3 + 8;
  }
  MovieSceneHelpers::SortConsecutiveSections
            ((TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)this_00);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    puVar4 = *(undefined8 **)this_00;
    iVar2 = 0;
    if (0 < *(int *)&this->field_0xb0) {
      do {
        if ((UObject *)*puVar4 != (UObject *)0x0) {
          UE::GC::MarkAsReachable((UObject *)*puVar4);
        }
        iVar2 = iVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar2 < *(int *)&this->field_0xb0);
    }
  }
  return;
}

// SortSections @ 1468cfe20

void __thiscall UMovieSceneCinematicShotTrack::SortSections(UMovieSceneCinematicShotTrack *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  
  puVar1 = &this->field_0x118;
  lVar4 = *(longlong *)puVar1;
  iVar3 = *(int *)&this->field_0x120;
  lVar2 = lVar4 + (longlong)iVar3 * 8;
  while( true ) {
    if (*(int *)&this->field_0x120 != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (lVar4 == lVar2) break;
    lVar4 = lVar4 + 8;
  }
  MovieSceneHelpers::SortConsecutiveSections
            ((TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)puVar1);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    puVar5 = *(undefined8 **)puVar1;
    iVar3 = 0;
    if (0 < *(int *)&this->field_0x120) {
      do {
        if ((UObject *)*puVar5 != (UObject *)0x0) {
          UE::GC::MarkAsReachable((UObject *)*puVar5);
        }
        iVar3 = iVar3 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar3 < *(int *)&this->field_0x120);
    }
  }
  return;
}

// StaticRegisterNativesUMovieSceneCinematicShotTrack @ 1468cffe0

void __cdecl UMovieSceneCinematicShotTrack::StaticRegisterNativesUMovieSceneCinematicShotTrack(void)

{
  return;
}

// SupportsMultipleRows @ 1468d0c10

bool __thiscall
UMovieSceneCinematicShotTrack::SupportsMultipleRows(UMovieSceneCinematicShotTrack *this)

{
  return true;
}

// SupportsType @ 1468d1230

bool __thiscall
UMovieSceneCinematicShotTrack::SupportsType
          (UMovieSceneCinematicShotTrack *this,TSubclassOf<UMovieSceneSection> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar4 = Z_Construct_UClass_UMovieSceneSection_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar4 = *(UClass **)param_1.Class.field0_0x0;
        goto LAB_1468d127a;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_1468d127a:
  pUVar5 = Z_Construct_UClass_UMovieSceneCinematicShotSection_NoRegister();
  return pUVar4 == pUVar5;
}

