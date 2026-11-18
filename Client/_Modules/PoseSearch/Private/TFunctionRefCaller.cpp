// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 44

// Call @ 14a8b1a40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Anim::FMessageStack::TopMessage<UE::PoseSearch::FPoseHistoryProvider>'::__l2::<lambda_1>,void,UE::Anim::IGraphMessage_&>
::Call(void *param_1,IGraphMessage *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014a8b1a4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)param_1)((*(undefined8 **)param_1)[1]);
  return;
}

// Call @ 14a8b1a60

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PoseSearch::FAnimationAssetSampler::ExtractPoseSearchNotifyStates'::__l2::<lambda_1>,bool,UAnimNotifyState_*>
::Call(void *param_1,UAnimNotifyState **param_2)

{
  int iVar1;
  UAnimNotifyState *pUVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined1 uVar5;
  UClass *pUVar6;
  undefined8 uVar7;
  longlong *plVar8;
  UAnimNotifyState *local_res10 [3];
  
  pUVar2 = *param_2;
  if (pUVar2 != (UAnimNotifyState *)0x0) {
    pUVar6 = UAnimNotifyState_PoseSearchBase::StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      puVar3 = *(undefined8 **)param_1;
      local_res10[0] = pUVar2;
      CheckCallable((void *)*puVar3);
      pcVar4 = (code *)*puVar3;
      plVar8 = puVar3 + 2;
      if ((longlong *)puVar3[5] != (longlong *)0x0) {
        plVar8 = (longlong *)puVar3[5];
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      uVar5 = (*pcVar4)(uVar7,local_res10);
      return (bool)uVar5;
    }
  }
  return true;
}

// Call @ 14a8b1af0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAnimationBaseContext::GetMessage<UE::PoseSearch::FPoseHistoryProvider>'::__l5::<lambda_1>,void,UE::PoseSearch::FPoseHistoryProvider_&>
::Call(void *param_1,FPoseHistoryProvider *param_2)

{
  **(undefined8 **)param_1 = param_2;
  return;
}

// Call @ 14a8b1b00

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UPoseSearchDatabase::SearchContinuingPose'::__l21::<lambda_1>,bool,UAnimNotifyState_*>
::Call(void *param_1,UAnimNotifyState **param_2)

{
  int iVar1;
  UAnimNotifyState *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = *param_2;
  if (pUVar2 != (UAnimNotifyState *)0x0) {
    pUVar3 = UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      **(undefined4 **)param_1 = (int)pUVar2[1]._padding_;
      **(undefined1 **)((longlong)param_1 + 8) = 1;
      return false;
    }
  }
  return true;
}

// Call @ 14a8b1b70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UPoseSearchDatabase::SearchEvent'::__l49::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `UPoseSearchDatabase::SearchEvent'::__l49::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14a8ed7f0

TArrayView<float_const_,int> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PoseSearch::FSearchIndexBase::PruneDuplicateValues'::__l6::<lambda_1>,TArrayView<float_const_,int>,int,int>
::Call(TArrayView<float_const_,int> *__return_storage_ptr__,void *param_1,int *param_2,int *param_3)

{
  PoseSearch::FSearchIndexBase::GetPoseValuesBase
            (*(FSearchIndexBase **)param_1,__return_storage_ptr__,*param_2,*param_3);
  return __return_storage_ptr__;
}

// Call @ 14a8ed820

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PoseSearch::FInteractionIsland::LogTickDependencies'::__l7::<lambda_1>,void>
::Call(void *param_1)

{
  int iVar1;
  int iVar2;
  TWeakObjectPtr<UActorComponent,FWeakObjectPtr> *pTVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 uStack_1c;
  TArrayView<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>_const_,int> local_18;
  
  pTVar3 = *(TWeakObjectPtr<UActorComponent,FWeakObjectPtr> **)param_1;
  iVar1 = *(int *)((longlong)param_1 + 8);
  iVar2 = *(int *)((longlong)param_1 + 0x10);
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = pTVar3;
  PoseSearch::FInteractionIsland::LogTickDependencies(&local_18,iVar2);
  return;
}

// Call @ 14a8ed890

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UPoseSearchInteractionAsset::HasRootMotion'::__l16::<lambda_1>,void,FBlendSample_const_&>
::Call(void *param_1,FBlendSample *param_2)

{
  byte bVar1;
  UAnimSequence *pUVar2;
  byte bVar3;
  
  pUVar2 = (param_2->Animation).field0_0x0.DebugPtr;
  if (pUVar2 != (UAnimSequence *)0x0) {
    bVar1 = **(byte **)param_1;
    bVar3 = (**(code **)(pUVar2->_padding_ + 0x340))();
    **(byte **)param_1 = bVar3 & bVar1;
  }
  return;
}

// Call @ 14a8ed8d0

TArrayView<float_const_,int> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PoseSearch::FSearchIndex::PruneDuplicatePCAValues'::__l22::<lambda_1>,TArrayView<float_const_,int>,int,int>
::Call(TArrayView<float_const_,int> *__return_storage_ptr__,void *param_1,int *param_2,int *param_3)

{
  TArrayView<float,int> local_18;
  
  `UE::PoseSearch::FSearchIndex::PruneDuplicatePCAValues'::__l22::<lambda_1>::operator()
            (param_1,&local_18,*param_2,*param_3);
  __return_storage_ptr__->DataPtr = local_18.DataPtr;
  __return_storage_ptr__->ArrayNum = local_18.ArrayNum;
  return __return_storage_ptr__;
}

// Call @ 14a8ed910

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PoseSearch::LogTickFunction'::__l25::<lambda_1>,void,FTickFunction_&>::Call
          (void *param_1,FTickFunction *param_2)

{
  PoseSearch::LogTickFunction
            (param_2,*(Type *)param_1,*(bool *)((longlong)param_1 + 4),
             *(int *)((longlong)param_1 + 8) + 1,*(int *)((longlong)param_1 + 0xc));
  return;
}

// Call @ 14a8ed940

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PoseSearch::ValidateTickDependenciesCycles'::__l38::<lambda_1>,void,FTickFunction_&>
::Call(void *param_1,FTickFunction *param_2)

{
  bool bVar1;
  
  if (**(char **)((longlong)param_1 + 8) != '\0') {
    bVar1 = PoseSearch::ValidateTickDependenciesCycles
                      (param_2,*(TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>
                                 **)param_1);
    if (!bVar1) {
      **(undefined1 **)((longlong)param_1 + 8) = 0;
    }
  }
  return;
}

// Call @ 14a8ed980

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PoseSearch::FSearchIndexBase::PruneDuplicateValues'::__l8::<lambda_2>,unsigned_int,int>
::Call(void *param_1,int *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  lVar1 = *(longlong *)param_1;
  uVar5 = *param_2;
  uVar4 = 0;
  if ((int)uVar5 < *(int *)(lVar1 + 0x38)) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
  }
  return *(uint *)(*(longlong *)(lVar1 + 0x30) + (longlong)(int)uVar5 * 0xc) & 0x7ffffff;
}

// Call @ 14a8eda00

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PoseSearch::FSearchIndex::PruneDuplicatePCAValues'::__l25::<lambda_2>,unsigned_int,int>
::Call(void *param_1,int *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  plVar1 = *(longlong **)param_1;
  uVar5 = *param_2;
  uVar4 = 0;
  if ((int)uVar5 < (int)plVar1[1]) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
  }
  return *(uint *)(*plVar1 + (longlong)(int)uVar5 * 4);
}

// Call @ 14a8eda70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PoseSearch::FSearchIndexBase::PruneDuplicateValues'::__l8::<lambda_3>,void,int,unsigned_int>
::Call(void *param_1,int *param_2,uint *param_3)

{
  `UE::PoseSearch::FSearchIndexBase::PruneDuplicateValues'::__l8::<lambda_3>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 14a8eda80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PoseSearch::FSearchIndex::PruneDuplicatePCAValues'::__l25::<lambda_3>,void,int,unsigned_int>
::Call(void *param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  plVar3 = *(longlong **)param_1;
  uVar1 = *param_2;
  uVar2 = *param_3;
  uVar6 = 0;
  if ((int)uVar1 < (int)plVar3[1]) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(uint *)(*plVar3 + (longlong)(int)uVar1 * 4) = uVar2;
  return;
}

// Call @ 14a924d10

FSearchResult * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<UE::PoseSearch::FSearchResult_(__cdecl*)(void),UE::PoseSearch::FSearchResult>::
Call(FSearchResult *__return_storage_ptr__,void *param_1)

{
  (**(code **)param_1)();
  return __return_storage_ptr__;
}

// Call @ 14a924d30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(UE::PoseSearch::FSearchResult_const_&),void,UE::PoseSearch::FSearchResult_const_&>
::Call(void *param_1,FSearchResult *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014a924d36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2);
  return;
}

// Call @ 14a924d40

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(TFunctionRef<bool___cdecl(UE::PoseSearch::FSearchResult_const_&)>),bool,TFunctionRef<bool___cdecl(UE::PoseSearch::FSearchResult_const_&)>_>
::Call(void *param_1,TFunctionRef<bool___cdecl(UE::PoseSearch::FSearchResult_const_&)> *param_2)

{
  undefined1 uVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *(undefined8 *)param_2;
  local_10 = *(undefined8 *)&param_2->field_0x8;
  uVar1 = (**(code **)param_1)(&local_18);
  return (bool)uVar1;
}

// Call @ 14a924d70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FPoseHistoryAnimationAttribute>::Accumulate_Internal<FPoseHistoryAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FPoseHistoryAnimationAttribute>_&>
::Call(void *param_1,TSingleIterator<FPoseHistoryAnimationAttribute> *param_2)

{
  int *piVar1;
  uchar *puVar2;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *pTVar3;
  FAttributeId *pFVar4;
  FScriptContainerElement *pFVar5;
  FAttributeBlendData *this;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FUniqueAttribute *pFVar11;
  UScriptStruct *pUVar12;
  uchar *puVar13;
  uint uVar14;
  int *piVar15;
  longlong lVar16;
  float fVar17;
  
  iVar9 = param_2->CurrentIndex + 1;
  param_2->CurrentIndex = iVar9;
  fVar7 = __real_3f000000;
  if (iVar9 < (param_2->AttributesView).ArrayNum) {
    do {
      if ((iVar9 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x19b,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar11 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_2->AttributesView,param_2->CurrentIndex);
      puVar2 = pFVar11->DataPtr;
      if ((((param_2->AttributesView).ArrayNum <= param_2->CurrentIndex) ||
          (param_2->CurrentIndex < 0)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1be,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar11 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_2->AttributesView,param_2->CurrentIndex);
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)param_1;
      pFVar4 = pFVar11->Identifier;
      pUVar12 = FPoseHistoryAnimationAttribute::StaticStruct();
      uVar10 = Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
               FindTypeIndex(pTVar3,pUVar12);
      if (uVar10 != 0xffffffff) {
        uVar14 = 0;
        if ((int)uVar10 < (pTVar3->UniqueTypedBoneIndices).ArrayNum) {
          uVar14 = ~uVar10 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (pTVar3->UniqueTypedBoneIndices).AllocatorInstance.Data;
        lVar16 = (longlong)(int)uVar10 * 0x10;
        piVar15 = *(int **)(pFVar5 + lVar16);
        piVar1 = piVar15 + *(int *)(pFVar5 + lVar16 + 8);
        for (; piVar15 != piVar1; piVar15 = piVar15 + 1) {
          if (*piVar15 == pFVar4->Index) {
            uVar14 = 0;
            if ((int)uVar10 < (pTVar3->AttributeIdentifiers).ArrayNum) {
              uVar14 = ~uVar10 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar9 = TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>::
                    IndexOfByKey<UE::Anim::FAttributeId>
                              ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
                               ((pTVar3->AttributeIdentifiers).AllocatorInstance.Data + lVar16),
                               pFVar4);
            goto LAB_14a91c3ae;
          }
        }
      }
      iVar9 = -1;
LAB_14a91c3ae:
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)param_1;
      pUVar12 = FPoseHistoryAnimationAttribute::StaticStruct();
      puVar13 = Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::FindOrAdd
                          (pTVar3,pUVar12,pFVar4);
      bVar8 = Anim::FAttributeBlendData::HasContainerWeights(param_2->Data);
      if ((!bVar8) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data.HasContainerWeights()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1a2,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((((param_2->AttributesView).ArrayNum <= param_2->CurrentIndex) ||
          (param_2->CurrentIndex < 0)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1a3,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this = param_2->Data;
      pFVar11 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_2->AttributesView,param_2->CurrentIndex);
      fVar17 = Anim::FAttributeBlendData::GetContainerWeight(this,pFVar11->WeightIndex);
      if ((iVar9 == -1) || (fVar7 < fVar17)) {
        pUVar12 = FPoseHistoryAnimationAttribute::StaticStruct();
        UScriptStruct::CopyScriptStruct(pUVar12,puVar13,puVar2,1);
      }
      param_2->CurrentIndex = param_2->CurrentIndex + 1;
      iVar9 = param_2->CurrentIndex;
    } while (iVar9 < (param_2->AttributesView).ArrayNum);
  }
  return;
}

// Call @ 14a924d80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FPoseHistoryAnimationAttribute>::BlendPerBone_Internal<FPoseHistoryAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TAttributeSetIterator<FPoseHistoryAnimationAttribute>_&>
::Call(void *param_1,TAttributeSetIterator<FPoseHistoryAnimationAttribute> *param_2)

{
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this;
  FAttributeId *pFVar1;
  UScriptStruct *pUVar2;
  uchar *puVar3;
  FPoseHistoryAnimationAttribute *pFVar4;
  
  this = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)param_1;
  pFVar1 = param_2->Collection->Identifier;
  pUVar2 = FPoseHistoryAnimationAttribute::StaticStruct();
  puVar3 = Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::FindOrAdd
                     (this,pUVar2,pFVar1);
  pUVar2 = FPoseHistoryAnimationAttribute::StaticStruct();
  pFVar4 = Anim::FAttributeBlendData::TAttributeSetIterator<FPoseHistoryAnimationAttribute>::
           GetHighestBoneWeightedValue(param_2);
  UScriptStruct::CopyScriptStruct(pUVar2,puVar3,pFVar4,1);
  return;
}

// Call @ 14a924df0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FPoseHistoryAnimationAttribute>::Blend_Internal<FPoseHistoryAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TAttributeSetIterator<FPoseHistoryAnimationAttribute>_&>
::Call(void *param_1,TAttributeSetIterator<FPoseHistoryAnimationAttribute> *param_2)

{
  int iVar1;
  uint uVar2;
  FAttributeId *pFVar3;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this;
  FAttributeSet *pFVar4;
  uchar *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  UScriptStruct *pUVar9;
  uchar *puVar10;
  
  pFVar3 = param_2->Collection->Identifier;
  Anim::Attributes::GetAttributeBlendType(pFVar3);
  this = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)param_1;
  bVar7 = Anim::FAttributeBlendData::HasContainerWeights(param_2->Data);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data.HasContainerWeights()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                       ,200,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar1 = param_2->Collection->HighestWeightedIndex;
  if (((param_2->Collection->DataPtrs).ArrayNum <= iVar1) || (iVar1 < 0)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Collection.HighestWeightedIndex < Collection.DataPtrs.Num() && Collection.DataPtrs.IsValidIndex(Collection.HighestWeightedIndex)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                       ,0xc9,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar4 = param_2->Collection;
  uVar2 = pFVar4->HighestWeightedIndex;
  uVar8 = 0;
  if ((int)uVar2 < (pFVar4->DataPtrs).ArrayNum) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  puVar5 = (pFVar4->DataPtrs).AllocatorInstance.Data[(int)uVar2];
  pUVar9 = FPoseHistoryAnimationAttribute::StaticStruct();
  puVar10 = Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::Add
                      (this,pUVar9,pFVar3);
  if (puVar10 != (uchar *)0x0) {
    pUVar9 = FPoseHistoryAnimationAttribute::StaticStruct();
    UScriptStruct::CopyScriptStruct(pUVar9,puVar10,puVar5,1);
  }
  return;
}

// Call @ 14a924e00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FPoseHistoryAnimationAttribute>::ConvertToAdditive_Internal<FPoseHistoryAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FPoseHistoryAnimationAttribute>_&>
::Call(void *param_1,TSingleIterator<FPoseHistoryAnimationAttribute> *param_2)

{
  int *piVar1;
  uchar *puVar2;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *pTVar3;
  FAttributeId *pFVar4;
  FScriptContainerElement *pFVar5;
  FAttributeBlendData *this;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FUniqueAttribute *pFVar10;
  UScriptStruct *pUVar11;
  uchar *puVar12;
  uint uVar13;
  int *piVar14;
  longlong lVar15;
  
  iVar8 = param_2->CurrentIndex + 1;
  param_2->CurrentIndex = iVar8;
  if (iVar8 < (param_2->AttributesView).ArrayNum) {
    do {
      if ((iVar8 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x19b,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar10 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_2->AttributesView,param_2->CurrentIndex);
      puVar2 = pFVar10->DataPtr;
      if ((((param_2->AttributesView).ArrayNum <= param_2->CurrentIndex) ||
          (param_2->CurrentIndex < 0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1be,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar10 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_2->AttributesView,param_2->CurrentIndex);
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)param_1;
      pFVar4 = pFVar10->Identifier;
      pUVar11 = FPoseHistoryAnimationAttribute::StaticStruct();
      uVar9 = Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::FindTypeIndex
                        (pTVar3,pUVar11);
      if (uVar9 != 0xffffffff) {
        uVar13 = 0;
        if ((int)uVar9 < (pTVar3->UniqueTypedBoneIndices).ArrayNum) {
          uVar13 = ~uVar9 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (pTVar3->UniqueTypedBoneIndices).AllocatorInstance.Data;
        lVar15 = (longlong)(int)uVar9 * 0x10;
        piVar14 = *(int **)(pFVar5 + lVar15);
        piVar1 = piVar14 + *(int *)(pFVar5 + lVar15 + 8);
        for (; piVar14 != piVar1; piVar14 = piVar14 + 1) {
          if (*piVar14 == pFVar4->Index) {
            uVar13 = 0;
            if ((int)uVar9 < (pTVar3->AttributeIdentifiers).ArrayNum) {
              uVar13 = ~uVar9 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar8 = TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>::
                    IndexOfByKey<UE::Anim::FAttributeId>
                              ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
                               ((pTVar3->AttributeIdentifiers).AllocatorInstance.Data + lVar15),
                               pFVar4);
            goto LAB_14a91c7a7;
          }
        }
      }
      iVar8 = -1;
LAB_14a91c7a7:
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)param_1;
      pUVar11 = FPoseHistoryAnimationAttribute::StaticStruct();
      puVar12 = Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::FindOrAdd
                          (pTVar3,pUVar11,pFVar4);
      bVar7 = Anim::FAttributeBlendData::HasContainerWeights(param_2->Data);
      if ((!bVar7) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data.HasContainerWeights()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1a2,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((((param_2->AttributesView).ArrayNum <= param_2->CurrentIndex) ||
          (param_2->CurrentIndex < 0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1a3,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this = param_2->Data;
      pFVar10 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_2->AttributesView,param_2->CurrentIndex);
      Anim::FAttributeBlendData::GetContainerWeight(this,pFVar10->WeightIndex);
      if (iVar8 == -1) {
        pUVar11 = FPoseHistoryAnimationAttribute::StaticStruct();
        UScriptStruct::CopyScriptStruct(pUVar11,puVar12,puVar2,1);
      }
      param_2->CurrentIndex = param_2->CurrentIndex + 1;
      iVar8 = param_2->CurrentIndex;
    } while (iVar8 < (param_2->AttributesView).ArrayNum);
  }
  return;
}

// Call @ 14a924e10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FPoseHistoryAnimationAttribute>::Override_Internal<FPoseHistoryAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FPoseHistoryAnimationAttribute>_&>
::Call(void *param_1,TSingleIterator<FPoseHistoryAnimationAttribute> *param_2)

{
  uchar *puVar1;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this;
  FAttributeId *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FUniqueAttribute *pFVar6;
  UScriptStruct *pUVar7;
  uchar *puVar8;
  
  iVar5 = param_2->CurrentIndex + 1;
  param_2->CurrentIndex = iVar5;
  if (iVar5 < (param_2->AttributesView).ArrayNum) {
    do {
      if ((iVar5 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x19b,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                         (&param_2->AttributesView,param_2->CurrentIndex);
      puVar1 = pFVar6->DataPtr;
      if ((((param_2->AttributesView).ArrayNum <= param_2->CurrentIndex) ||
          (param_2->CurrentIndex < 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1be,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                         (&param_2->AttributesView,param_2->CurrentIndex);
      this = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)param_1;
      pFVar2 = pFVar6->Identifier;
      pUVar7 = FPoseHistoryAnimationAttribute::StaticStruct();
      puVar8 = Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::FindOrAdd
                         (this,pUVar7,pFVar2);
      pUVar7 = FPoseHistoryAnimationAttribute::StaticStruct();
      UScriptStruct::CopyScriptStruct(pUVar7,puVar8,puVar1,1);
      param_2->CurrentIndex = param_2->CurrentIndex + 1;
      iVar5 = param_2->CurrentIndex;
    } while (iVar5 < (param_2->AttributesView).ArrayNum);
  }
  return;
}

// Call @ 14a924e20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_1>,void,UE::PoseSearch::FSearchResult_const_&>
::Call(void *param_1,FSearchResult *param_2)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  FPoseSearchCost FVar5;
  undefined3 uVar6;
  bool bVar7;
  uint uVar8;
  UPoseSearchDatabase *this;
  FSearchIndex *this_00;
  FSearchIndexAsset *pFVar9;
  TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>
  *this_01;
  FSearchResult *pFVar10;
  uint auStackX_10 [2];
  UPoseSearchDatabase *apUStackX_18 [2];
  
  if (((*(int *)param_2 == -1) ||
      (bVar7 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                         ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                          &param_2->field_0x4,(void *)0x0), bVar7)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SearchResult.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchResult.cpp"
                         ,0x160,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*(int *)param_2 != -1) &&
     (bVar7 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                         &param_2->field_0x4,(void *)0x0), !bVar7)) {
    this = (UPoseSearchDatabase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&param_2->field_0x4);
    this_00 = UPoseSearchDatabase::GetSearchIndex(this);
    pFVar9 = PoseSearch::FSearchIndexBase::GetAssetForPose
                       ((FSearchIndexBase *)this_00,*(int *)param_2);
    if (pFVar9 != (FSearchIndexAsset *)0x0) {
      lVar2 = *(longlong *)param_1;
      apUStackX_18[0] =
           (UPoseSearchDatabase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&param_2->field_0x4);
      uVar8 = ((uint)((ulonglong)apUStackX_18[0] >> 0x14) & 0xffff ^
              (uint)((ulonglong)apUStackX_18[0] >> 4)) * -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      this_01 = TMapBase<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>_>
                ::FindOrAddImpl<UPoseSearchDatabase_const_*>
                          ((TMapBase<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>_>
                            *)(lVar2 + 0x100),uVar8 >> 0x10 ^ uVar8,apUStackX_18);
      auStackX_10[0] = pFVar9->SourceAssetIdx;
      pFVar10 = TMapBase<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>
                ::FindOrAddImpl<int>
                          ((TMapBase<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>
                            *)this_01,auStackX_10[0],(int *)auStackX_10);
      fVar1 = (pFVar10->PoseCost).TotalCost;
      if ((param_2->PoseCost).TotalCost <= fVar1 && fVar1 != (param_2->PoseCost).TotalCost) {
        uVar4 = *(undefined4 *)&param_2->field_0x8;
        FVar5.TotalCost = (param_2->PoseCost).TotalCost;
        *(undefined8 *)pFVar10 = *(undefined8 *)param_2;
        *(undefined4 *)&pFVar10->field_0x8 = uVar4;
        pFVar10->PoseCost = (FPoseSearchCost)FVar5.TotalCost;
        fVar1 = param_2->AssetTime;
        pFVar10->EventPoseIdx = param_2->EventPoseIdx;
        pFVar10->AssetTime = fVar1;
        uVar6 = *(undefined3 *)&param_2->field_0x19;
        pFVar10->bIsContinuingPoseSearch = param_2->bIsContinuingPoseSearch;
        *(undefined3 *)&pFVar10->field_0x19 = uVar6;
      }
    }
  }
  return;
}

// Call @ 14a924e30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_1>,void,UE::PoseSearch::FSearchResult_const_&>
::Call(void *param_1,FSearchResult *param_2)

{
  ForElementType<UE::PoseSearch::FSearchResult> *pFVar1;
  uchar *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  ForElementType<UE::PoseSearch::FSearchResult> *pFVar16;
  FSearchResult *pFVar17;
  uint uVar18;
  FIdentityFunctor aFStackX_8 [8];
  undefined1 auStackX_10 [8];
  
  if (*(int *)param_2 != -1) {
    bVar12 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                        &param_2->field_0x4,(void *)0x0);
    if (!bVar12) goto LAB_14a91cb8f;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("SearchResult.IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchResult.cpp"
                      ,0x112,L"");
  if (bVar12) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14a91cb8f:
  lVar15 = *(longlong *)param_1;
  pFVar1 = (ForElementType<UE::PoseSearch::FSearchResult> *)(lVar15 + 0x100);
  if (*(int *)(lVar15 + 0x180) <= *(int *)(lVar15 + 0x178)) {
    uVar18 = *(int *)(lVar15 + 0x178) - 1;
    uVar14 = 0;
    if ((int)uVar18 < *(int *)(lVar15 + 0x178)) {
      uVar14 = ~uVar18 >> 0x1f;
    }
    if (uVar14 == 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar16 = *(ForElementType<UE::PoseSearch::FSearchResult> **)(lVar15 + 0x170);
    if (*(ForElementType<UE::PoseSearch::FSearchResult> **)(lVar15 + 0x170) ==
        (ForElementType<UE::PoseSearch::FSearchResult> *)0x0) {
      pFVar16 = pFVar1;
    }
    lVar15 = (longlong)*(int *)(lVar15 + 0x178) * 0x1c;
    if ((param_2->PoseCost).TotalCost <= *(float *)(pFVar16->InlineData + lVar15 + -0x10) &&
        *(float *)(pFVar16->InlineData + lVar15 + -0x10) != (param_2->PoseCost).TotalCost) {
      uVar5 = param_2->field_0x1;
      uVar6 = param_2->field_0x2;
      uVar7 = param_2->field_0x3;
      uVar8 = param_2->field_0x4;
      uVar9 = param_2->field_0x5;
      uVar10 = param_2->field_0x6;
      uVar11 = param_2->field_0x7;
      uVar4 = *(undefined8 *)&param_2->field_0x8;
      puVar2 = pFVar16->InlineData + lVar15 + -0x1c;
      puVar2[0] = param_2->field_0x0;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      puVar2[4] = uVar8;
      puVar2[5] = uVar9;
      puVar2[6] = uVar10;
      puVar2[7] = uVar11;
      *(undefined8 *)(puVar2 + 8) = uVar4;
      *(undefined8 *)(pFVar16->InlineData + lVar15 + -0xc) = *(undefined8 *)&param_2->EventPoseIdx;
      uVar5 = param_2->field_0x19;
      uVar6 = param_2->field_0x1a;
      uVar7 = param_2->field_0x1b;
      puVar2 = pFVar16->InlineData + lVar15 + -4;
      puVar2[0] = param_2->bIsContinuingPoseSearch;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      lVar15 = *(longlong *)param_1;
      pFVar17 = *(FSearchResult **)(lVar15 + 0x170);
      if (*(FSearchResult **)(lVar15 + 0x170) == (FSearchResult *)0x0) {
        pFVar17 = (FSearchResult *)(lVar15 + 0x100);
      }
      AlgoImpl::
      IntroSortInternal<UE::PoseSearch::FSearchResult,int,FIdentityFunctor,TDereferenceWrapper<UE::PoseSearch::FSearchResult,__UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi_::__l2::<lambda_1>::operator()_::__l17::<lambda_2>_>_>
                (pFVar17,*(int *)(lVar15 + 0x178),aFStackX_8[0],(<lambda_2> *)auStackX_10);
    }
    return;
  }
  pFVar16 = *(ForElementType<UE::PoseSearch::FSearchResult> **)(lVar15 + 0x170);
  if (*(ForElementType<UE::PoseSearch::FSearchResult> **)(lVar15 + 0x170) ==
      (ForElementType<UE::PoseSearch::FSearchResult> *)0x0) {
    pFVar16 = pFVar1;
  }
  if ((pFVar16 <= param_2) &&
     (param_2 < (FSearchResult *)(pFVar16->InlineData + (longlong)*(int *)(lVar15 + 0x17c) * 0x1c)))
  {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar13 = *(int *)(lVar15 + 0x178);
  if (iVar13 == *(int *)(lVar15 + 0x17c)) {
    iVar13 = ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FSearchResult>_>
                       (0x41c,pFVar1,(int *)(lVar15 + 0x17c));
  }
  *(int *)(lVar15 + 0x178) = iVar13 + 1;
  uVar5 = param_2->field_0x1;
  uVar6 = param_2->field_0x2;
  uVar7 = param_2->field_0x3;
  uVar8 = param_2->field_0x4;
  uVar9 = param_2->field_0x5;
  uVar10 = param_2->field_0x6;
  uVar11 = param_2->field_0x7;
  uVar4 = *(undefined8 *)&param_2->field_0x8;
  pFVar16 = *(ForElementType<UE::PoseSearch::FSearchResult> **)(lVar15 + 0x170);
  if (*(ForElementType<UE::PoseSearch::FSearchResult> **)(lVar15 + 0x170) ==
      (ForElementType<UE::PoseSearch::FSearchResult> *)0x0) {
    pFVar16 = pFVar1;
  }
  lVar15 = (longlong)iVar13 * 0x1c;
  puVar2 = pFVar16->InlineData + lVar15;
  puVar2[0] = param_2->field_0x0;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  puVar2[4] = uVar8;
  puVar2[5] = uVar9;
  puVar2[6] = uVar10;
  puVar2[7] = uVar11;
  *(undefined8 *)(puVar2 + 8) = uVar4;
  *(undefined8 *)(pFVar16->InlineData + lVar15 + 0x10) = *(undefined8 *)&param_2->EventPoseIdx;
  uVar5 = param_2->field_0x19;
  uVar6 = param_2->field_0x1a;
  uVar7 = param_2->field_0x1b;
  puVar2 = pFVar16->InlineData + lVar15 + 0x18;
  puVar2[0] = param_2->bIsContinuingPoseSearch;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  lVar15 = *(longlong *)param_1;
  pFVar17 = *(FSearchResult **)(lVar15 + 0x170);
  if (*(FSearchResult **)(lVar15 + 0x170) == (FSearchResult *)0x0) {
    pFVar17 = (FSearchResult *)(lVar15 + 0x100);
  }
  AlgoImpl::
  IntroSortInternal<UE::PoseSearch::FSearchResult,int,FIdentityFunctor,TDereferenceWrapper<UE::PoseSearch::FSearchResult,__UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi_::__l2::<lambda_1>::operator()_::__l12::<lambda_1>_>_>
            (pFVar17,*(int *)(lVar15 + 0x178),aFStackX_8[0],(<lambda_1> *)aFStackX_8);
  return;
}

// Call @ 14a924e40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_1>,void,UE::PoseSearch::FSearchResult_const_&>
::Call(void *param_1,FSearchResult *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  
  if (*(int *)param_2 != -1) {
    bVar4 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                       &param_2->field_0x4,(void *)0x0);
    if (!bVar4) goto LAB_14a91cdba;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("SearchResult.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchResult.cpp"
                     ,0xe8,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14a91cdba:
  lVar1 = *(longlong *)param_1;
  if ((param_2->PoseCost).TotalCost <= *(float *)(lVar1 + 0x10c) &&
      *(float *)(lVar1 + 0x10c) != (param_2->PoseCost).TotalCost) {
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    *(undefined8 *)(lVar1 + 0x100) = *(undefined8 *)param_2;
    *(undefined8 *)(lVar1 + 0x108) = uVar3;
    *(undefined8 *)(lVar1 + 0x110) = *(undefined8 *)&param_2->EventPoseIdx;
    *(undefined4 *)(lVar1 + 0x118) = *(undefined4 *)&param_2->bIsContinuingPoseSearch;
  }
  return;
}

// Call @ 14a924e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::<lambda_1>,void,UE::PoseSearch::FAnimContextInfo_const_&>
::Call(void *param_1,FAnimContextInfo *param_2)

{
  FScriptContainerElement *pFVar1;
  UAnimInstance *pUVar2;
  void *pvVar3;
  FName FVar4;
  TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar5;
  ulonglong *puVar6;
  UPoseSearchSchema *pUVar7;
  code *pcVar8;
  UPoseSearchDatabase *pUVar9;
  FName *pFVar10;
  FPoseSearchInteractionAvailabilityEx *pFVar11;
  int *piVar12;
  bool bVar13;
  int iVar14;
  UClass *pUVar15;
  FAnimNode_PoseSearchHistoryCollector_Base *this;
  FPoseHistory *pFVar16;
  uint uVar17;
  ulonglong uVar18;
  void *pvVar19;
  undefined1 *puVar20;
  longlong lVar21;
  FPoseSearchInteractionAvailabilityEx *pFVar22;
  ulonglong *puVar23;
  void *pvVar24;
  FScriptContainerElement *pFVar25;
  TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *this_00;
  int *piVar26;
  int iVar27;
  FName *this_01;
  undefined1 auStackX_18 [8];
  undefined1 auStackX_20 [8];
  undefined1 uStack_148;
  undefined1 uStack_147;
  undefined1 auStack_146 [2];
  int iStack_144;
  FPoseSearchInteractionAvailabilityEx *pFStack_140;
  int *piStack_138;
  UPoseSearchDatabase *pUStack_130;
  UPoseSearchDatabase *pUStack_128;
  int iStack_120;
  int iStack_11c;
  uint uStack_118;
  uint uStack_114;
  ulonglong *puStack_110;
  ulonglong *puStack_108;
  UPoseSearchDatabase **ppUStack_100;
  FName FStack_f8;
  UPoseSearchDatabase **ppUStack_f0;
  void *pvStack_e8;
  FName FStack_e0;
  FName *pFStack_d8;
  FPoseSearchInteractionAvailabilityEx *pFStack_d0;
  FPoseSearchInteractionAnimContextAvailabilities *pFStack_c8;
  FString FStack_c0;
  FRoledAnimContextInfo FStack_b0;
  FRoledAnimContextInfo FStack_88;
  FString aFStack_60 [2];
  
  if ((param_2->AnimContextAvailabilities == (FPoseSearchInteractionAnimContextAvailabilities *)0x0)
     && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                            ("AnimContextInfo.AnimContextAvailabilities",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                             ,0x2e1,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFStack_c8 = param_2->AnimContextAvailabilities;
  uStack_114 = (pFStack_c8->Availabilities).ArrayNum;
  uVar18 = (ulonglong)(int)uStack_114;
  pFVar22 = (FPoseSearchInteractionAvailabilityEx *)
            (pFStack_c8->Availabilities).AllocatorInstance.Data;
  pFStack_d0 = pFVar22 + uVar18;
LAB_14a91ce75:
  do {
    pFVar11 = pFStack_d0;
    pFStack_140 = pFVar22;
    if ((pFStack_c8->Availabilities).ArrayNum != (int)uVar18) {
      auStackX_18[0] = 0;
      `TCheckedPointerIterator<FPoseSearchInteractionAvailabilityEx_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(auStackX_18);
    }
    if (pFVar22 == pFVar11) {
      return;
    }
    pFVar16 = (FPoseHistory *)pFVar22->PoseHistory;
    pUVar2 = (UAnimInstance *)(param_2->AnimContextAvailabilities->AnimContext).field0_0x0.DebugPtr;
    if (pFVar16 == (FPoseHistory *)0x0) {
      if (pUVar2 == (UAnimInstance *)0x0) {
LAB_14a91cef9:
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Unimplemented function called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                            ,0x6b,L"");
        if (bVar13) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar16 = (FPoseHistory *)0x0;
      }
      else {
        pUVar15 = Z_Construct_UClass_UAnimInstance_NoRegister();
        iVar14 = (int)pUVar15->_padding_;
        if (((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar14) ||
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar14 * 8) !=
             &pUVar15->_padding_)) ||
           (this = UPoseSearchLibrary::FindPoseHistoryNode(pFVar22->PoseHistoryName,pUVar2),
           this == (FAnimNode_PoseSearchHistoryCollector_Base *)0x0)) goto LAB_14a91cef9;
        pFVar16 = FAnimNode_PoseSearchHistoryCollector_Base::GetPoseHistory(this);
        if (pFVar16 != (FPoseHistory *)0x0) goto LAB_14a91cf48;
      }
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("PoseHistory",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                          ,0x2e5,L"");
      if (bVar13) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
LAB_14a91cf48:
    pUStack_130 = (UPoseSearchDatabase *)pFVar22->_padding_;
    if (pUStack_130 != (UPoseSearchDatabase *)0x0) {
      if (((pUStack_130->Schema).field0_0x0.DebugPtr == (UPoseSearchSchema *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Database->Schema",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                              ,0x2e9,L""), bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pvVar24 = *(void **)((longlong)param_1 + 8);
      uVar17 = ((uint)((ulonglong)pUStack_130 >> 0x14) & 0xffff ^
               (uint)((ulonglong)pUStack_130 >> 4)) * -0x7a143595;
      uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
      uVar17 = uVar17 >> 0x10 ^ uVar17;
      if (*(int *)((longlong)pvVar24 + 0x308) != *(int *)((longlong)pvVar24 + 0x32c)) {
        lVar21 = (longlong)pvVar24 + 0x330;
        if (*(longlong *)((longlong)pvVar24 + 0x338) != 0) {
          lVar21 = *(longlong *)((longlong)pvVar24 + 0x338);
        }
        iVar14 = *(int *)(lVar21 + (ulonglong)(*(int *)((longlong)pvVar24 + 0x340) - 1U & uVar17) *
                                   4);
        if (iVar14 != -1) {
          pvVar3 = *(void **)((longlong)pvVar24 + 0x300);
          do {
            pvVar19 = pvVar24;
            if (pvVar3 != (void *)0x0) {
              pvVar19 = pvVar3;
            }
            if (*(UPoseSearchDatabase **)((longlong)iVar14 * 0xc0 + (longlong)pvVar19) ==
                pUStack_130) {
              if (iVar14 != -1) {
                pvVar19 = pvVar24;
                if (pvVar3 != (void *)0x0) {
                  pvVar19 = pvVar3;
                }
                pvVar19 = (void *)((longlong)iVar14 * 0xc0 + (longlong)pvVar19);
                if (pvVar19 != (void *)0x0) goto LAB_14a91d0a0;
              }
              break;
            }
            pvVar19 = pvVar24;
            if (pvVar3 != (void *)0x0) {
              pvVar19 = pvVar3;
            }
            iVar14 = *(int *)((longlong)pvVar19 + (longlong)iVar14 * 0xc0 + 0xb8);
          } while (iVar14 != -1);
        }
      }
      ppUStack_100 = &pUStack_130;
      TSet<TTuple<UPoseSearchDatabase_const_*,`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfos>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfos,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
      ::EmplaceByHash<TKeyInitializer<UPoseSearchDatabase_const_*_const_&>_>
                (pvVar24,(uint)&iStack_120,
                 (TKeyInitializer<UPoseSearchDatabase_const_*_const_&> *)(ulonglong)uVar17,
                 (bool *)&ppUStack_100);
      if (*(void **)((longlong)pvVar24 + 0x300) != (void *)0x0) {
        pvVar24 = *(void **)((longlong)pvVar24 + 0x300);
      }
      pvVar19 = (void *)((longlong)iStack_120 * 0xc0 + (longlong)pvVar24);
LAB_14a91d0a0:
      `UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfos::
      AddRoledAnimContextInfos
                ((void *)((longlong)pvVar19 + 8),pFVar22,param_2,(IPoseHistory *)pFVar16,pUStack_130
                );
LAB_14a91d5a4:
      pFVar22 = pFVar22 + 1;
      uVar18 = (ulonglong)uStack_114;
      goto LAB_14a91ce75;
    }
    FVar4 = (FName)pFVar22->_padding_;
    if (FVar4 != (FName)0x0) {
      this_00 = *(TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                  **)param_1;
      FStack_f8 = FVar4;
      uVar17 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
      iVar14 = TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
               ::FindIndexByHash<FName>(this_00,FVar4.Number + uVar17,&FStack_f8);
      if (iVar14 != -1) {
        pTVar5 = *(TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                   **)&(this_00->Elements).field_0x900;
        if (pTVar5 != (TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          this_00 = pTVar5;
        }
        puVar20 = &(this_00->Elements).field_0x0 + (longlong)iVar14 * 0x120;
        if ((puVar20 != (undefined1 *)0x0) &&
           (puVar23 = (ulonglong *)(puVar20 + 8), puStack_110 = puVar23, puVar23 != (ulonglong *)0x0
           )) {
          piVar26 = (int *)(puVar20 + 0x110);
          piStack_138 = piVar26;
          if ((*piVar26 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!DatabasesPerTag->IsEmpty()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                                  ,0x2f2,L""), bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iStack_144 = *piVar26;
          puVar6 = *(ulonglong **)(puVar20 + 0x108);
          piVar12 = piVar26;
          if (puVar6 != (ulonglong *)0x0) {
            puVar23 = puVar6;
            piVar12 = piStack_138;
            puStack_110 = puVar6;
          }
          piStack_138 = piVar12;
          puStack_108 = puVar23 + iStack_144;
          while( true ) {
            puVar6 = puStack_108;
            iVar14 = iStack_144;
            if (*piVar26 != iStack_144) {
              auStackX_20[0] = 0;
              `TCheckedPointerIterator<UPoseSearchDatabase_const_*_const,int,0>::operator!='::__l2::
              <lambda_1>::operator()(auStackX_20);
            }
            if (puVar23 == puVar6) break;
            pUStack_128 = (UPoseSearchDatabase *)*puVar23;
            if (((pUStack_128 == (UPoseSearchDatabase *)0x0) ||
                ((pUStack_128->Schema).field0_0x0.DebugPtr == (UPoseSearchSchema *)0x0)) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("DatabaseFromTag && DatabaseFromTag->Schema",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                                    ,0x2f5,L""), bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pvVar24 = *(void **)((longlong)param_1 + 8);
            uVar17 = ((uint)((ulonglong)pUStack_128 >> 0x14) & 0xffff ^
                     (uint)((ulonglong)pUStack_128 >> 4)) * -0x7a143595;
            uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
            uVar17 = uVar17 >> 0x10 ^ uVar17;
            if (*(int *)((longlong)pvVar24 + 0x308) != *(int *)((longlong)pvVar24 + 0x32c)) {
              lVar21 = (longlong)pvVar24 + 0x330;
              if (*(longlong *)((longlong)pvVar24 + 0x338) != 0) {
                lVar21 = *(longlong *)((longlong)pvVar24 + 0x338);
              }
              iVar27 = *(int *)(lVar21 + (ulonglong)
                                         (*(int *)((longlong)pvVar24 + 0x340) - 1U & uVar17) * 4);
              if (iVar27 != -1) {
                pvVar3 = *(void **)((longlong)pvVar24 + 0x300);
                do {
                  pvVar19 = pvVar24;
                  if (pvVar3 != (void *)0x0) {
                    pvVar19 = pvVar3;
                  }
                  iStack_144 = iVar14;
                  piStack_138 = piVar26;
                  if (*(UPoseSearchDatabase **)((longlong)iVar27 * 0xc0 + (longlong)pvVar19) ==
                      pUStack_128) {
                    if (iVar27 != -1) {
                      pvVar19 = pvVar24;
                      if (pvVar3 != (void *)0x0) {
                        pvVar19 = pvVar3;
                      }
                      pvVar19 = (void *)((longlong)iVar27 * 0xc0 + (longlong)pvVar19);
                      if (pvVar19 != (void *)0x0) goto LAB_14a91d300;
                    }
                    break;
                  }
                  pvVar19 = pvVar24;
                  if (pvVar3 != (void *)0x0) {
                    pvVar19 = pvVar3;
                  }
                  iVar27 = *(int *)((longlong)iVar27 * 0xc0 + 0xb8 + (longlong)pvVar19);
                } while (iVar27 != -1);
              }
            }
            ppUStack_f0 = &pUStack_128;
            TSet<TTuple<UPoseSearchDatabase_const_*,`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfos>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfos,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
            ::EmplaceByHash<TKeyInitializer<UPoseSearchDatabase_const_*_const_&>_>
                      (pvVar24,(uint)&iStack_11c,
                       (TKeyInitializer<UPoseSearchDatabase_const_*_const_&> *)(ulonglong)uVar17,
                       (bool *)&ppUStack_f0);
            if (*(void **)((longlong)pvVar24 + 0x300) != (void *)0x0) {
              pvVar24 = *(void **)((longlong)pvVar24 + 0x300);
            }
            pvVar19 = (void *)((longlong)iStack_11c * 0xc0 + (longlong)pvVar24);
LAB_14a91d300:
            pUVar9 = pUStack_128;
            pUVar7 = (pUStack_128->Schema).field0_0x0.DebugPtr;
            pvVar19 = (void *)((longlong)pvVar19 + 8);
            pvStack_e8 = pvVar19;
            if ((pUVar7 == (UPoseSearchSchema *)0x0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Schema",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                                    ,0x280,L""), bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if ((int)pFStack_140->_padding_ == 0) {
              iVar14 = (pUVar7->Skeletons).ArrayNum;
              pFVar25 = (pUVar7->Skeletons).AllocatorInstance.Data;
              pFVar1 = pFVar25 + (longlong)iVar14 * 0x48;
              while( true ) {
                if ((pUVar7->Skeletons).ArrayNum != iVar14) {
                  uStack_148 = 0;
                  `TCheckedPointerIterator<FPoseSearchRoledSkeleton_const_,int,0>::operator!='::__l2
                  ::<lambda_1>::operator()(&uStack_148);
                }
                if (pFVar25 == pFVar1) break;
                FStack_b0.Role = *(FName *)(pFVar25 + 0x10);
                FStack_b0.Availability = pFStack_140;
                FStack_b0.AnimContextInfo = param_2;
                FStack_b0.PoseHistory = (IPoseHistory *)pFVar16;
                FStack_b0.Database = pUVar9;
                TArray<`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfo,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
                ::
                AddUniqueImpl<_UPoseSearchInteractionSubsystem::GenerateSearchContexts_::__l2::FRoledAnimContextInfo>
                          (pvVar19,&FStack_b0);
                pFVar25 = pFVar25 + 0x48;
              }
            }
            else {
              uStack_118 = (uint)pFStack_140->_padding_;
              uVar18 = (ulonglong)(int)uStack_118;
              this_01 = (FName *)pFStack_140->_padding_;
              pFStack_d8 = this_01 + uVar18;
              pFVar22 = pFStack_140;
LAB_14a91d411:
              pFVar10 = pFStack_d8;
              if ((int)pFVar22->_padding_ != (int)uVar18) {
                uStack_147 = 0;
                `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&uStack_147);
              }
              if (this_01 != pFVar10) {
                iVar14 = (pUVar7->Skeletons).ArrayNum;
                pFVar25 = (pUVar7->Skeletons).AllocatorInstance.Data;
                pFVar1 = pFVar25 + (longlong)iVar14 * 0x48;
                while( true ) {
                  if ((pUVar7->Skeletons).ArrayNum != iVar14) {
                    auStack_146[0] = 0;
                    `TCheckedPointerIterator<FPoseSearchRoledSkeleton_const_,int,0>::operator!='::
                    __l2::<lambda_1>::operator()(auStack_146);
                  }
                  pFVar22 = pFStack_140;
                  if (pFVar25 == pFVar1) {
                    if (2 < (byte)LogPoseSearch._0_1_) {
                      FStack_e0 = (FName)pUVar9->_padding_;
                      ::FName::ToString(&FStack_e0,&FStack_c0);
                      ::FName::ToString(this_01,aFStack_60);
                      Logging::Private::BasicLog<3>
                                (&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
                      if (aFStack_60[0].Data.AllocatorInstance.Data !=
                          (FScriptContainerElement *)0x0) {
                        FMemory::Free(aFStack_60[0].Data.AllocatorInstance.Data);
                      }
                      if (FStack_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(FStack_c0.Data.AllocatorInstance.Data);
                      }
                    }
                    uVar18 = (ulonglong)uStack_118;
                    this_01 = this_01 + 1;
                    pFVar22 = pFStack_140;
                    goto LAB_14a91d411;
                  }
                  if (*(FName *)(pFVar25 + 0x10) == *this_01) break;
                  pFVar25 = pFVar25 + 0x48;
                }
                FStack_88.Availability = pFStack_140;
                FStack_88.AnimContextInfo = param_2;
                FStack_88.Role = *this_01;
                FStack_88.PoseHistory = (IPoseHistory *)pFVar16;
                FStack_88.Database = pUVar9;
                TArray<`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfo,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
                ::
                AddUniqueImpl<_UPoseSearchInteractionSubsystem::GenerateSearchContexts_::__l2::FRoledAnimContextInfo>
                          (pvStack_e8,&FStack_88);
                uVar18 = (ulonglong)uStack_118;
                this_01 = this_01 + 1;
                goto LAB_14a91d411;
              }
            }
            puVar23 = puStack_110 + 1;
            pFVar22 = pFStack_140;
            piVar26 = piStack_138;
            puStack_110 = puVar23;
          }
        }
      }
      goto LAB_14a91d5a4;
    }
    if ((byte)LogPoseSearch._0_1_ < 5) goto LAB_14a91d5a4;
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    pFVar22 = pFVar22 + 1;
    uVar18 = (ulonglong)uStack_114;
  } while( true );
}

// Call @ 14a924e60

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UPoseSearchLibrary::TraceMotionMatching'::__l2::<lambda_1>,bool,UE::PoseSearch::FSearchResult_const_&>
::Call(void *param_1,FSearchResult *param_2)

{
  int iVar1;
  FSearchContext *this;
  bool bVar2;
  UPoseSearchDatabase *pUVar3;
  
  if (*(int *)param_2 != -1) {
    bVar2 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                       &param_2->field_0x4,(void *)0x0);
    if (!bVar2) {
      this = *(FSearchContext **)param_1;
      iVar1 = *(int *)param_2;
      pUVar3 = (UPoseSearchDatabase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&param_2->field_0x4);
      PoseSearch::FSearchContext::Track(this,pUVar3,iVar1,Valid_CurrentPose,&param_2->PoseCost);
    }
  }
  return false;
}

// Call @ 14a924ee0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FPoseHistoryAnimationAttribute>::BlendPerBone_Internal<FPoseHistoryAnimationAttribute>'::__l2::<lambda_2>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FPoseHistoryAnimationAttribute>_&>
::Call(void *param_1,TSingleIterator<FPoseHistoryAnimationAttribute> *param_2)

{
  int *piVar1;
  int iVar2;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *pTVar3;
  FAttributeId *pFVar4;
  FScriptContainerElement *pFVar5;
  FAttributeBlendData *pFVar6;
  uchar *puVar7;
  code *pcVar8;
  float fVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FUniqueAttribute *pFVar13;
  UScriptStruct *pUVar14;
  uchar *puVar15;
  uint uVar16;
  int *piVar17;
  longlong lVar18;
  float fVar19;
  
  iVar11 = param_2->CurrentIndex + 1;
  param_2->CurrentIndex = iVar11;
  fVar9 = __real_3727c5ac;
  if (iVar11 < (param_2->AttributesView).ArrayNum) {
    do {
      if ((iVar11 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1be,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar13 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_2->AttributesView,param_2->CurrentIndex);
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)param_1;
      pFVar4 = pFVar13->Identifier;
      pUVar14 = FPoseHistoryAnimationAttribute::StaticStruct();
      uVar12 = Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
               FindTypeIndex(pTVar3,pUVar14);
      if (uVar12 != 0xffffffff) {
        uVar16 = 0;
        if ((int)uVar12 < (pTVar3->UniqueTypedBoneIndices).ArrayNum) {
          uVar16 = ~uVar12 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar5 = (pTVar3->UniqueTypedBoneIndices).AllocatorInstance.Data;
        lVar18 = (longlong)(int)uVar12 * 0x10;
        piVar17 = *(int **)(pFVar5 + lVar18);
        piVar1 = piVar17 + *(int *)(pFVar5 + lVar18 + 8);
        for (; piVar17 != piVar1; piVar17 = piVar17 + 1) {
          if (*piVar17 == pFVar4->Index) {
            uVar16 = 0;
            if ((int)uVar12 < (pTVar3->AttributeIdentifiers).ArrayNum) {
              uVar16 = ~uVar12 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar11 = TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>::
                     IndexOfByKey<UE::Anim::FAttributeId>
                               ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
                                ((pTVar3->AttributeIdentifiers).AllocatorInstance.Data + lVar18),
                                pFVar4);
            goto LAB_14a91d6fc;
          }
        }
      }
      iVar11 = -1;
LAB_14a91d6fc:
      bVar10 = Anim::FAttributeBlendData::HasBoneWeights(param_2->Data);
      if ((!bVar10) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Data.HasBoneWeights()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1ab,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((((param_2->AttributesView).ArrayNum <= param_2->CurrentIndex) ||
          (param_2->CurrentIndex < 0)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1ac,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6 = param_2->Data;
      pFVar13 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_2->AttributesView,param_2->CurrentIndex);
      iVar2 = pFVar13->Identifier->Index;
      pFVar13 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_2->AttributesView,param_2->CurrentIndex);
      fVar19 = Anim::FAttributeBlendData::GetBoneWeight(pFVar6,pFVar13->WeightIndex,iVar2);
      if ((fVar9 < fVar19) || (iVar11 == -1)) {
        pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)param_1;
        pUVar14 = FPoseHistoryAnimationAttribute::StaticStruct();
        puVar15 = Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::FindOrAdd
                            (pTVar3,pUVar14,pFVar4);
        if ((((param_2->AttributesView).ArrayNum <= param_2->CurrentIndex) ||
            (param_2->CurrentIndex < 0)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                                ,0x19b,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar13 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                            (&param_2->AttributesView,param_2->CurrentIndex);
        puVar7 = pFVar13->DataPtr;
        bVar10 = Anim::FAttributeBlendData::HasBoneWeights(param_2->Data);
        if ((!bVar10) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Data.HasBoneWeights()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                                ,0x1b4,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((((param_2->AttributesView).ArrayNum <= param_2->CurrentIndex) ||
            (param_2->CurrentIndex < 0)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                                ,0x1b5,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = param_2->Data;
        pFVar13 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                            (&param_2->AttributesView,param_2->CurrentIndex);
        iVar2 = pFVar13->Identifier->Index;
        if (((iVar2 < 0) || ((pFVar6->HighestBoneWeightedIndices).ArrayNum <= iVar2)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Data.HighestBoneWeightedIndices.IsValidIndex(AttributesView[CurrentIndex].Identifier->GetIndex())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                                ,0x1b6,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = param_2->Data;
        pFVar13 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                            (&param_2->AttributesView,param_2->CurrentIndex);
        uVar12 = pFVar13->Identifier->Index;
        uVar16 = 0;
        if ((int)uVar12 < (pFVar6->HighestBoneWeightedIndices).ArrayNum) {
          uVar16 = ~uVar12 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar2 = (pFVar6->HighestBoneWeightedIndices).AllocatorInstance.Data[(int)uVar12];
        pFVar13 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                            (&param_2->AttributesView,param_2->CurrentIndex);
        if ((iVar2 == pFVar13->WeightIndex) || (iVar11 == -1)) {
          pUVar14 = FPoseHistoryAnimationAttribute::StaticStruct();
          UScriptStruct::CopyScriptStruct(pUVar14,puVar15,puVar7,1);
        }
      }
      param_2->CurrentIndex = param_2->CurrentIndex + 1;
      iVar11 = param_2->CurrentIndex;
    } while (iVar11 < (param_2->AttributesView).ArrayNum);
  }
  return;
}

// Call @ 14a924ef0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FPoseHistoryAnimationAttribute>::Blend_Internal<FPoseHistoryAnimationAttribute>'::__l2::<lambda_2>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FPoseHistoryAnimationAttribute>_&>
::Call(void *param_1,TSingleIterator<FPoseHistoryAnimationAttribute> *param_2)

{
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this;
  FAttributeId *pFVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FUniqueAttribute *pFVar6;
  UScriptStruct *pUVar7;
  uchar *puVar8;
  
  iVar5 = param_2->CurrentIndex + 1;
  param_2->CurrentIndex = iVar5;
  if (iVar5 < (param_2->AttributesView).ArrayNum) {
    do {
      if ((iVar5 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1be,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                         (&param_2->AttributesView,param_2->CurrentIndex);
      this = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)param_1;
      pFVar1 = pFVar6->Identifier;
      if ((((param_2->AttributesView).ArrayNum <= param_2->CurrentIndex) ||
          (param_2->CurrentIndex < 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x19b,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                         (&param_2->AttributesView,param_2->CurrentIndex);
      puVar2 = pFVar6->DataPtr;
      pUVar7 = FPoseHistoryAnimationAttribute::StaticStruct();
      puVar8 = Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::Add
                         (this,pUVar7,pFVar1);
      if (puVar8 != (uchar *)0x0) {
        pUVar7 = FPoseHistoryAnimationAttribute::StaticStruct();
        UScriptStruct::CopyScriptStruct(pUVar7,puVar8,puVar2,1);
      }
      param_2->CurrentIndex = param_2->CurrentIndex + 1;
      iVar5 = param_2->CurrentIndex;
    } while (iVar5 < (param_2->AttributesView).ArrayNum);
  }
  return;
}

// Call @ 14a924f00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_2>,void>
::Call(void *param_1)

{
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  UPoseSearchDatabase *this;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  FWeakObjectPtr *this_00;
  uint uVar17;
  int iVar18;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar19;
  int iVar20;
  longlong lVar21;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar22;
  float fVar23;
  undefined1 auStackX_8 [8];
  undefined1 auStackX_10 [8];
  int iStackX_18;
  int iStackX_20;
  undefined4 uStack_13c;
  undefined4 uStack_f4;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> TStack_e8;
  undefined8 uStack_c8;
  longlong lStack_c0;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> TStack_b8;
  undefined8 uStack_98;
  undefined4 uStack_74;
  
  lVar13 = *(longlong *)param_1;
  iVar18 = 0;
  iVar20 = 0;
  uVar9 = 1;
  pTVar1 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)(lVar13 + 0xcd0);
  iVar4 = *(int *)(lVar13 + 0xce0);
  lVar2 = lVar13 + 0x100;
  iVar10 = 0;
  if (iVar4 != 0) {
    pTVar22 = *(TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> **)(lVar13 + 0xcd8);
    if (*(TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> **)(lVar13 + 0xcd8) ==
        (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
      pTVar22 = pTVar1;
    }
    uVar17 = *(uint *)(pTVar22->AllocatorInstance).InlineData;
    while (uVar17 == 0) {
      lVar12 = (longlong)iVar18;
      iVar20 = iVar20 + 0x20;
      iVar18 = iVar18 + 1;
      iVar10 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14a91dbc1;
      uVar17 = *(uint *)((pTVar22->AllocatorInstance).InlineData + lVar12 * 4 + 4);
    }
    uVar9 = -uVar17 & uVar17;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iStackX_18 = (int)lVar12;
    iVar10 = iVar20 + -1 + iStackX_18;
    if (iVar4 < iVar10) {
      iVar10 = iVar4;
    }
  }
LAB_14a91dbc1:
  uVar17 = *(uint *)(lVar13 + 0xce0);
  uVar15 = uVar17 & 0xffffffe0;
  TStack_b8._padding_ = CONCAT44(uVar9,iVar18);
  TStack_b8.CurrentBitIndex = iVar10;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar17 >> 5;
  TStack_b8._28_4_ = uStack_74;
  TStack_b8.BaseBitIndex = iVar20;
  uStack_98 = CONCAT44(uStack_13c,*(int *)(lVar13 + 0xcc8) - *(int *)(lVar13 + 0xcec));
  lStack_c0 = lVar2;
  TStack_b8.Array = pTVar1;
  if ((((int)uVar17 < 0) || (iVar4 < (int)uVar17)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  fVar7 = __real_7f7fffff;
  uVar9 = *(uint *)(lVar13 + 0xce0);
  if (uVar17 != uVar9) {
    pTVar22 = pTVar1;
    if (*(TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> **)(lVar13 + 0xcd8) !=
        (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
      pTVar22 = *(TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> **)(lVar13 + 0xcd8)
      ;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) &
             *(uint *)((pTVar22->AllocatorInstance).InlineData + (longlong)iVar18 * 4);
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar18;
      uVar15 = uVar15 + 0x20;
      iVar18 = iVar18 + 1;
      uVar17 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14a91dcf0;
      uVar17 = *(uint *)((pTVar22->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStackX_20 = (int)lVar13;
    uVar17 = iStackX_20 + -1 + uVar15;
    if ((int)uVar9 < (int)uVar17) {
      uVar17 = uVar9;
    }
  }
LAB_14a91dcf0:
  lVar13 = lStack_c0;
  if (*(int *)(lStack_c0 + 0xbc8) - *(int *)(lStack_c0 + 0xbec) != (int)uStack_98) {
    auStackX_8[0] = 0;
    `TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
  }
  if (((TStack_b8.CurrentBitIndex == uVar17) && (TStack_b8.Array == pTVar1)) && (lVar13 == lVar2)) {
    return;
  }
  uVar9 = 1;
  if (*(longlong *)(lVar13 + 0xbc0) != 0) {
    lVar13 = *(longlong *)(lVar13 + 0xbc0);
  }
  iVar18 = 0;
  lVar21 = (longlong)TStack_b8.CurrentBitIndex * 0x2f0;
  iVar20 = 0;
  pTVar22 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
            (lVar21 + 0x298 + lVar13);
  lVar12 = lVar21 + 8 + lVar13;
  iVar4 = pTVar22->NumBits;
  iVar11 = 0;
  if (iVar4 != 0) {
    pTVar5 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
             (pTVar22->AllocatorInstance).SecondaryData.Data;
    pTVar19 = pTVar22;
    if (pTVar5 != (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
      pTVar19 = pTVar5;
    }
    uVar15 = *(uint *)(pTVar19->AllocatorInstance).InlineData;
    while (uVar15 == 0) {
      lVar14 = (longlong)iVar18;
      iVar20 = iVar20 + 0x20;
      iVar18 = iVar18 + 1;
      iVar11 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14a91ddd0;
      uVar15 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar14 * 4 + 4);
    }
    uVar9 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar11 = iVar20 + -1 + (int)lVar14;
    if (iVar4 < iVar11) {
      iVar11 = iVar4;
    }
  }
LAB_14a91ddd0:
  uVar15 = *(uint *)(lVar21 + 0x2a8 + lVar13);
  uVar16 = uVar15 & 0xffffffe0;
  TStack_e8._padding_ = CONCAT44(uVar9,iVar18);
  TStack_e8.CurrentBitIndex = iVar11;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar15 >> 5;
  TStack_e8._28_4_ = iVar10;
  TStack_e8.BaseBitIndex = iVar20;
  uStack_c8 = CONCAT44(uStack_f4,
                       *(int *)(lVar21 + 0x290 + lVar13) - *(int *)(lVar21 + 0x2b4 + lVar13));
  TStack_e8.Array = pTVar22;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar9 = pTVar22->NumBits;
  if (uVar15 != uVar9) {
    pTVar5 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
             (pTVar22->AllocatorInstance).SecondaryData.Data;
    pTVar19 = pTVar22;
    if (pTVar5 != (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
      pTVar19 = pTVar5;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) &
             *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar18 * 4);
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar18;
      uVar16 = uVar16 + 0x20;
      iVar18 = iVar18 + 1;
      uVar15 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14a91def0;
      uVar15 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar15 = (int)lVar13 + -1 + uVar16;
    if ((int)uVar9 < (int)uVar15) {
      uVar15 = uVar9;
    }
  }
LAB_14a91def0:
  do {
    if (*(int *)(lVar12 + 0x288) - *(int *)(lVar12 + 0x2ac) != (int)uStack_c8) {
      auStackX_10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,UE::PoseSearch::FSearchResult>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_10);
    }
    lVar13 = (longlong)TStack_e8.CurrentBitIndex;
    if ((TStack_e8.CurrentBitIndex == uVar15) && (TStack_e8.Array == pTVar22)) break;
    lVar21 = lVar12;
    if (*(longlong *)(lVar12 + 0x280) != 0) {
      lVar21 = *(longlong *)(lVar12 + 0x280);
    }
    if (*(int *)(lVar21 + 4 + lVar13 * 0x28) == -1) {
LAB_14a91df5f:
      this_00 = (FWeakObjectPtr *)(lVar21 + (lVar13 * 5 + 1) * 8);
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("BestSearchResultForSourceAssetIdx.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchResult.cpp"
                         ,0x173,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      this_00 = (FWeakObjectPtr *)(lVar21 + (lVar13 * 5 + 1) * 8);
      bVar8 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)this_00,
                         (void *)0x0);
      if (bVar8) goto LAB_14a91df5f;
    }
    if (fVar7 == *(float *)(lVar21 + 0x18 + lVar13 * 0x28)) {
      this = (UPoseSearchDatabase *)FWeakObjectPtr::Get(this_00);
      fVar23 = UPoseSearchDatabase::GetNormalizedAssetTime
                         (this,*(int *)(lVar21 + 4 + lVar13 * 0x28));
      if ((fVar23 == fVar7) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsAssetTimeValid(InAssetTime)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchResult.h"
                             ,0x4b,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(float *)(lVar21 + 0x18 + lVar13 * 0x28) = fVar23;
    }
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::FindFirstSetBit
              (&TStack_e8);
  } while( true );
  TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::FindFirstSetBit
            (&TStack_b8);
  goto LAB_14a91dcf0;
}

// Call @ 14a924f10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_2>,void>
::Call(void *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  UPoseSearchDatabase *this;
  longlong lVar6;
  float *pfVar7;
  float fVar8;
  undefined1 auStackX_8 [8];
  
  fVar4 = __real_7f7fffff;
  lVar2 = *(longlong *)param_1;
  iVar1 = *(int *)(lVar2 + 0x178);
  lVar6 = *(longlong *)(lVar2 + 0x170);
  if (*(longlong *)(lVar2 + 0x170) == 0) {
    lVar6 = lVar2 + 0x100;
  }
  pfVar7 = (float *)(lVar6 + 0x14);
  do {
    if (*(int *)(lVar2 + 0x178) != iVar1) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<UE::PoseSearch::FSearchResult,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_8);
    }
    if (pfVar7 + -5 == (float *)((longlong)iVar1 * 0x1c + lVar6)) {
      return;
    }
    if (pfVar7[-5] == -NAN) {
LAB_14a91e0c5:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SearchResult.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchResult.cpp"
                         ,0x131,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      bVar5 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)(pfVar7 + -4),
                         (void *)0x0);
      if (bVar5) goto LAB_14a91e0c5;
    }
    if (fVar4 == *pfVar7) {
      this = (UPoseSearchDatabase *)FWeakObjectPtr::Get((FWeakObjectPtr *)(pfVar7 + -4));
      fVar8 = UPoseSearchDatabase::GetNormalizedAssetTime(this,(int)pfVar7[-5]);
      if (fVar8 == fVar4) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsAssetTimeValid(InAssetTime)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchResult.h"
                           ,0x4b,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *pfVar7 = fVar8;
    }
    pfVar7 = pfVar7 + 7;
  } while( true );
}

// Call @ 14a924f20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_2>,void>
::Call(void *param_1)

{
  longlong lVar1;
  bool bVar2;
  UPoseSearchDatabase *this;
  float fVar3;
  
  if (((*(int *)(*(longlong *)param_1 + 0x100) != -1) &&
      (bVar2 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                         ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                          (*(longlong *)param_1 + 0x104),(void *)0x0), !bVar2)) &&
     (lVar1 = *(longlong *)param_1, __real_7f7fffff == *(float *)(lVar1 + 0x114))) {
    this = (UPoseSearchDatabase *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar1 + 0x104));
    fVar3 = UPoseSearchDatabase::GetNormalizedAssetTime(this,*(int *)(*(longlong *)param_1 + 0x100))
    ;
    PoseSearch::FSearchResult::SetAssetTime((FSearchResult *)(lVar1 + 0x100),fVar3);
  }
  return;
}

// Call @ 14a924f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::<lambda_2>,void>
::Call(void *param_1)

{
  FSparsePoseMultiMap<int> *pFVar1;
  ulonglong uVar2;
  int iVar3;
  UPoseSearchSchema *pUVar4;
  code *pcVar5;
  FIdentityFunctor FVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  FRoledAnimContextInfos *pFVar11;
  uint uVar12;
  uint uVar13;
  UPoseSearchDatabase *pUVar14;
  int iVar15;
  FSparsePoseMultiMap<int> *pFVar16;
  int iVar17;
  UPoseSearchDatabase *pUVar18;
  longlong *plVar19;
  undefined1 auStackY_158 [32];
  FIdentityFunctor FStack_128;
  undefined1 auStack_127 [3];
  int iStack_124;
  undefined8 *puStack_120;
  <lambda_2> <Stack_118;
  int iStack_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  int iStack_e4;
  TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
  *pTStack_e0;
  TArrayView<UE::PoseSearch::FValidInteractionSearch_const_,int> *pTStack_d8;
  UPoseSearchDatabase *pUStack_d0;
  UPoseSearchDatabase *pUStack_c8;
  undefined1 auStack_c0 [20];
  uint uStack_ac;
  TArrayView<UE::PoseSearch::FValidInteractionSearch_const_,int> *pTStack_a8;
  undefined8 uStack_a0;
  ForElementType<int> FStack_98;
  int iStack_90;
  undefined4 uStack_8c;
  TArrayView<int,int> aTStack_88 [2];
  undefined4 uStack_5c;
  undefined1 auStack_58 [16];
  ForElementType<int> FStack_48;
  int iStack_40;
  int iStack_3c;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  pUVar18 = *(UPoseSearchDatabase **)param_1;
  iVar15 = 0;
  iVar17 = 0;
  uVar8 = 1;
  pFVar1 = &pUVar18[1].SearchIndexPrivate.PCAValuesVectorToPoseIndexes;
  iVar3 = *(int *)&pUVar18[1].SearchIndexPrivate.PCAValuesVectorToPoseIndexes.DataValues.
                   AllocatorInstance.Data;
  iVar9 = 0;
  if (iVar3 != 0) {
    pFVar16 = *(FSparsePoseMultiMap<int> **)
               &pUVar18[1].SearchIndexPrivate.PCAValuesVectorToPoseIndexes.DeltaKeyValue;
    if (pFVar16 == (FSparsePoseMultiMap<int> *)0x0) {
      pFVar16 = pFVar1;
    }
    uVar13 = pFVar16->MaxKey;
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar15;
      iVar17 = iVar17 + 0x20;
      iVar15 = iVar15 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14a91e2ae;
      uVar13 = (&pFVar16->MaxValue)[lVar10];
    }
    uVar8 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_e8 = (int)lVar10;
    iVar9 = iVar17 + -1 + iStack_e8;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_14a91e2ae:
  uVar13 = *(uint *)&pUVar18[1].SearchIndexPrivate.PCAValuesVectorToPoseIndexes.DataValues.
                     AllocatorInstance.Data;
  uVar12 = uVar13 & 0xffffffe0;
  iStack_f0 = pUVar18[1].SearchIndexPrivate.PCAValues.ArrayNum -
              pUVar18[1].SearchIndexPrivate.PCAValuesVectorToPoseIndexes.DataValues.ArrayMax;
  <Stack_118.SearchContexts =
       (TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
        *)CONCAT44(iVar9,0xffffffff);
  <Stack_118.RoledSkeletons =
       (TArray<FPoseSearchRoledSkeleton,TSizedDefaultAllocator<32>_> *)CONCAT44(uVar8,iVar15);
  <Stack_118.PreviousValidInteractionSearches =
       (TArrayView<UE::PoseSearch::FValidInteractionSearch_const_,int> *)CONCAT44(uStack_5c,iVar17);
  auStack_c0._0_8_ = <Stack_118.RoledSkeletons;
  iVar15 = (int)uVar13 >> 5;
  uStack_a0 = CONCAT44(uStack_ec,iStack_f0);
  stack0xffffffffffffff50 = <Stack_118.SearchContexts;
  pTStack_a8 = <Stack_118.PreviousValidInteractionSearches;
  puStack_120 = param_1;
  <Stack_118.Database = pUVar18;
  <Stack_118.RoledAnimContextInfos = (FRoledAnimContextInfos *)pFVar1;
  pUStack_d0 = pUVar18;
  pUStack_c8 = pUVar18;
  auStack_c0._8_8_ = pFVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = FStack_128;
  uVar8 = *(uint *)&pUVar18[1].SearchIndexPrivate.PCAValuesVectorToPoseIndexes.DataValues.
                    AllocatorInstance.Data;
  if (uVar13 != uVar8) {
    pFVar16 = *(FSparsePoseMultiMap<int> **)
               &pUVar18[1].SearchIndexPrivate.PCAValuesVectorToPoseIndexes.DeltaKeyValue;
    if (pFVar16 == (FSparsePoseMultiMap<int> *)0x0) {
      pFVar16 = pFVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & (&pFVar16->MaxKey)[iVar15];
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar15;
      uVar12 = uVar12 + 0x20;
      iVar15 = iVar15 + 1;
      uVar13 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14a91e3d0;
      uVar13 = (&pFVar16->MaxValue)[lVar10];
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_e4 = (int)lVar10;
    uVar13 = iStack_e4 + -1 + uVar12;
    if ((int)uVar8 < (int)uVar13) {
      uVar13 = uVar8;
    }
  }
LAB_14a91e3d0:
  while( true ) {
    pUVar14 = pUStack_c8;
    if (pUStack_c8[1].SearchIndexPrivate.PCAValues.ArrayNum -
        pUStack_c8[1].SearchIndexPrivate.PCAValuesVectorToPoseIndexes.DataValues.ArrayMax !=
        (int)uStack_a0) {
      FStack_128 = (FIdentityFunctor)0x0;
      `TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfos>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&FStack_128);
    }
    if (((uStack_ac == uVar13) && ((FSparsePoseMultiMap<int> *)auStack_c0._8_8_ == pFVar1)) &&
       (pUVar14 == pUVar18)) {
      TSet<TTuple<UPoseSearchDatabase_const_*,`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfos>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfos,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
      ::Reset((void *)*puStack_120);
      return;
    }
    pUVar18 = (UPoseSearchDatabase *)pUVar14[1].SearchIndexPrivate.PCAValues.AllocatorInstance.Data;
    if (pUVar18 != (UPoseSearchDatabase *)0x0) {
      pUVar14 = pUVar18;
    }
    plVar19 = &pUVar14->_padding_ + (longlong)(int)uStack_ac * 0x18;
    pUVar18 = (UPoseSearchDatabase *)*plVar19;
    if (((pUVar18->Schema).field0_0x0.DebugPtr == (UPoseSearchSchema *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Database->Schema",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                           ,0x321,L""), bVar7)) break;
    pUVar4 = (pUVar18->Schema).field0_0x0.DebugPtr;
    pFVar11 = (FRoledAnimContextInfos *)(plVar19 + 1);
    if ((FRoledAnimContextInfos *)plVar19[0x15] != (FRoledAnimContextInfos *)0x0) {
      pFVar11 = (FRoledAnimContextInfos *)plVar19[0x15];
    }
    iVar3 = (pUVar4->Skeletons).ArrayNum;
    AlgoImpl::
    IntroSortInternal<_UPoseSearchInteractionSubsystem::GenerateSearchContexts_::__l2::FRoledAnimContextInfo,int,FIdentityFunctor,TDereferenceWrapper<_UPoseSearchInteractionSubsystem::GenerateSearchContexts_::__l2::FRoledAnimContextInfo,__UPoseSearchInteractionSubsystem::GenerateSearchContexts_::__l2::<lambda_2>::operator()_::__l6::<lambda_1>_>_>
              ((FRoledAnimContextInfo *)pFVar11,(int)plVar19[0x16],FVar6,(<lambda_1> *)auStack_127);
    iStack_3c = 4;
    pTStack_e0 = (TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
                  *)puStack_120[1];
    pTStack_d8 = (TArrayView<UE::PoseSearch::FValidInteractionSearch_const_,int> *)puStack_120[2];
    iStack_124 = (int)plVar19[0x16];
    FStack_48 = (ForElementType<int>)0x0;
    iStack_40 = 0;
    TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::SetNum
              ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)auStack_58,
               iVar3,Default);
    iVar3 = iStack_40;
    FStack_98 = (ForElementType<int>)auStack_58;
    if (FStack_48 != (ForElementType<int>)0x0) {
      FStack_98 = FStack_48;
    }
    if ((iStack_40 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    <Stack_118.SearchContexts = pTStack_e0;
    <Stack_118.PreviousValidInteractionSearches = pTStack_d8;
    iStack_90 = iVar3;
    aTStack_88[0]._12_4_ = uStack_8c;
    aTStack_88[0].ArrayNum = iVar3;
    aTStack_88[0].DataPtr = (int *)FStack_98;
    <Stack_118.Database = pUVar18;
    <Stack_118.RoledSkeletons = &pUVar4->Skeletons;
    <Stack_118.RoledAnimContextInfos = (FRoledAnimContextInfos *)(plVar19 + 1);
    PoseSearch::
    GenerateCombinationsRecursive<__UPoseSearchInteractionSubsystem::GenerateSearchContexts_::__l2::<lambda_2>::operator()_::__l6::<lambda_2>_>
              (iStack_124,0,aTStack_88,0,&<Stack_118);
    if (FStack_48 != (ForElementType<int>)0x0) {
      FMemory::Free((void *)FStack_48);
    }
    stack0xffffffffffffff50 =
         (TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
          *)CONCAT44(uStack_ac,auStack_c0._16_4_ & ~auStack_c0._4_4_);
    TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::FindFirstSetBit
              ((TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
               auStack_c0);
    pUVar18 = pUStack_d0;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// Call @ 14a924f40

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UPoseSearchLibrary::TraceMotionMatching'::__l48::<lambda_2>,bool,UE::PoseSearch::FSearchContext::FPoseCandidate_const_&>
::Call(void *param_1,FPoseCandidate *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iStack_18;
  EPoseCandidateFlags EStack_14;
  float fStack_10;
  
  iStack_18 = param_2->PoseIdx;
  lVar1 = *(longlong *)param_1;
  fStack_10 = (param_2->Cost).TotalCost;
  EStack_14 = param_2->PoseCandidateFlags;
  if ((*(int **)(lVar1 + 0x18) <= &iStack_18) &&
     (&iStack_18 < *(int **)(lVar1 + 0x18) + (longlong)*(int *)(lVar1 + 0x24) * 3)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = *(int *)(lVar1 + 0x20);
  if (iVar5 == *(int *)(lVar1 + 0x24)) {
    iVar5 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)(lVar1 + 0x18),(int *)(lVar1 + 0x24));
  }
  *(int *)(lVar1 + 0x20) = iVar5 + 1;
  lVar1 = *(longlong *)(lVar1 + 0x18);
  *(ulonglong *)(lVar1 + (longlong)iVar5 * 0xc) = CONCAT44(EStack_14,iStack_18);
  *(float *)(lVar1 + 8 + (longlong)iVar5 * 0xc) = fStack_10;
  return false;
}

// Call @ 14a924f50

FSearchResult * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_3>,UE::PoseSearch::FSearchResult>
::Call(FSearchResult *__return_storage_ptr__,void *param_1)

{
  `UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_3>::
  operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14a924f80

FSearchResult * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_3>,UE::PoseSearch::FSearchResult>
::Call(FSearchResult *__return_storage_ptr__,void *param_1)

{
  `UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_3>::operator()
            (param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14a924fb0

FSearchResult * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_3>,UE::PoseSearch::FSearchResult>
::Call(FSearchResult *__return_storage_ptr__,void *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = *(longlong *)param_1;
  uVar4 = *(undefined8 *)(lVar3 + 0x108);
  uVar1 = *(undefined8 *)(lVar3 + 0x110);
  uVar2 = *(undefined4 *)(lVar3 + 0x118);
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)(lVar3 + 0x100);
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar4;
  __return_storage_ptr__->EventPoseIdx = (int)uVar1;
  __return_storage_ptr__->AssetTime = (float)(int)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)&__return_storage_ptr__->bIsContinuingPoseSearch = uVar2;
  return __return_storage_ptr__;
}

// Call @ 14a924fe0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_4>,bool,float>
::Call(void *param_1,float *param_2)

{
  return true;
}

// Call @ 14a924ff0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_4>,bool,float>
::Call(void *param_1,float *param_2)

{
  bool bVar1;
  
  bVar1 = `UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_4>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 14a925000

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_4>,bool,float>
::Call(void *param_1,float *param_2)

{
  return *param_2 < *(float *)(*(longlong *)param_1 + 0x10c);
}

// Call @ 14a925020

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_5>,bool,TFunctionRef<bool___cdecl(UE::PoseSearch::FSearchResult_const_&)>_>
::Call(void *param_1,TFunctionRef<bool___cdecl(UE::PoseSearch::FSearchResult_const_&)> *param_2)

{
  bool bVar1;
  TFunctionRef<bool___cdecl(UE::PoseSearch::FSearchResult_const_&)> local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  bVar1 = `UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_5>::
          operator()(param_1,&local_18);
  return bVar1;
}

// Call @ 14a925050

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_5>,bool,TFunctionRef<bool___cdecl(UE::PoseSearch::FSearchResult_const_&)>_>
::Call(void *param_1,TFunctionRef<bool___cdecl(UE::PoseSearch::FSearchResult_const_&)> *param_2)

{
  bool bVar1;
  TFunctionRef<bool___cdecl(UE::PoseSearch::FSearchResult_const_&)> local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  bVar1 = `UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_5>::operator()
                    (param_1,&local_18);
  return bVar1;
}

// Call @ 14a925080

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_5>,bool,TFunctionRef<bool___cdecl(UE::PoseSearch::FSearchResult_const_&)>_>
::Call(void *param_1,TFunctionRef<bool___cdecl(UE::PoseSearch::FSearchResult_const_&)> *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a925094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,*(longlong *)param_1 + 0x100);
  return (bool)uVar1;
}

