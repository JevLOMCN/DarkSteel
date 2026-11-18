// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 13

// FMovieSceneEntityComponentFieldBuilder @ 14617ed20

FMovieSceneEntityComponentFieldBuilder * __thiscall
FMovieSceneEntityComponentFieldBuilder::FMovieSceneEntityComponentFieldBuilder
          (FMovieSceneEntityComponentFieldBuilder *this,FMovieSceneEntityComponentField *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  (this->KeyToFieldIndex).AllocatorInstance.SecondaryData =
       (ForElementType<FMovieSceneEntityComponentFieldBuilder::FKeyToIndex>)0x0;
  piVar1 = &(param_1->SharedMetaData).ArrayMax;
  (this->KeyToFieldIndex).ArrayNum = 0;
  (this->KeyToFieldIndex).ArrayMax = 4;
  (this->MetaDataToFieldIndex).AllocatorInstance.SecondaryData =
       (ForElementType<FMovieSceneEntityComponentFieldBuilder::FMetaDataToIndex>)0x0;
  (this->MetaDataToFieldIndex).ArrayNum = 0;
  (this->MetaDataToFieldIndex).ArrayMax = 2;
  this->Field = param_1;
  iVar3 = (param_1->SharedMetaData).ArrayNum;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(param_1->SharedMetaData).AllocatorInstance,piVar1);
  }
  (param_1->SharedMetaData).ArrayNum = iVar3 + 1;
  pFVar2 = (param_1->SharedMetaData).AllocatorInstance.Data;
  *(undefined8 *)(pFVar2 + (longlong)iVar3 * 0x10) = 0;
  *(undefined8 *)(pFVar2 + (longlong)iVar3 * 0x10 + 8) = 0;
  this->SharedMetaDataIndex = iVar3;
  return this;
}

// ~FMovieSceneEntityComponentFieldBuilder @ 146185100

void __thiscall
FMovieSceneEntityComponentFieldBuilder::~FMovieSceneEntityComponentFieldBuilder
          (FMovieSceneEntityComponentFieldBuilder *this)

{
  int *piVar1;
  uint uVar2;
  FMovieSceneEntityComponentField *pFVar3;
  ForElementType<FMovieSceneEntityComponentFieldBuilder::FKeyToIndex> FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FScriptContainerElement *_Dst;
  ForElementType<FMovieSceneEntityComponentFieldBuilder::FMetaDataToIndex> FVar8;
  int iVar9;
  <lambda_1> local_res8 [8];
  
  bVar6 = Algo::
          NoneOf<TArray<FMovieSceneEntityComponentFieldBuilder::FKeyToIndex,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,_FMovieSceneEntityComponentFieldBuilder::~FMovieSceneEntityComponentFieldBuilder_::__l2::<lambda_1>_>
                    (&this->KeyToFieldIndex,local_res8[0]);
  if (bVar6) {
    if ((this->Field->SharedMetaData).ArrayNum != this->SharedMetaDataIndex + 1) {
      local_res8[0] = (<lambda_1>)0x0;
      bVar6 = `FMovieSceneEntityComponentFieldBuilder::~FMovieSceneEntityComponentFieldBuilder'::
              __l6::<lambda_2>::operator()(local_res8);
      if (!bVar6) goto LAB_1461851f0;
    }
    pFVar3 = this->Field;
    uVar2 = this->SharedMetaDataIndex;
    uVar7 = 0;
    if ((int)uVar2 < (pFVar3->SharedMetaData).ArrayNum) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    _Dst = (pFVar3->SharedMetaData).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x10;
    iVar9 = (pFVar3->SharedMetaData).ArrayNum + ~uVar2;
    if (iVar9 != 0) {
      memmove(_Dst,_Dst + 0x10,(longlong)iVar9 << 4);
    }
    piVar1 = &(pFVar3->SharedMetaData).ArrayNum;
    *piVar1 = *piVar1 + -1;
  }
LAB_1461851f0:
  FVar8 = (this->MetaDataToFieldIndex).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<FMovieSceneEntityComponentFieldBuilder::FMetaDataToIndex>)0x0) {
    FVar8 = (ForElementType<FMovieSceneEntityComponentFieldBuilder::FMetaDataToIndex>)
            &this->MetaDataToFieldIndex;
  }
  DestructItems<FMovieSceneEntityComponentFieldBuilder::FMetaDataToIndex,int>
            ((FMetaDataToIndex *)FVar8,(this->MetaDataToFieldIndex).ArrayNum);
  FVar8 = (this->MetaDataToFieldIndex).AllocatorInstance.SecondaryData;
  if (FVar8 != (ForElementType<FMovieSceneEntityComponentFieldBuilder::FMetaDataToIndex>)0x0) {
    FMemory::Free((void *)FVar8);
  }
  FVar4 = (this->KeyToFieldIndex).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<FMovieSceneEntityComponentFieldBuilder::FKeyToIndex>)0x0) {
    FMemory::Free((void *)FVar4);
    return;
  }
  return;
}

// AddMetaData @ 14618e150

/* WARNING: Removing unreachable block (ram,0x00014618e3b7) */
/* WARNING: Removing unreachable block (ram,0x00014618e3c5) */

int __thiscall
FMovieSceneEntityComponentFieldBuilder::AddMetaData
          (FMovieSceneEntityComponentFieldBuilder *this,
          FMovieSceneEvaluationFieldEntityMetaData *param_1)

{
  TArray<FMovieSceneEntityComponentFieldBuilder::FMetaDataToIndex,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  byte bVar6;
  ForElementType<FMovieSceneEntityComponentFieldBuilder::FMetaDataToIndex> FVar7;
  undefined8 *puVar8;
  undefined8 local_a8;
  FSoftObjectPath local_a0;
  FString local_80;
  FName local_70;
  int local_68;
  ESectionEvaluationFlags local_64;
  byte local_63;
  int local_60;
  undefined1 local_58 [24];
  FUtf8String local_40;
  ForAnyElementType local_30;
  undefined8 local_28;
  FName local_20;
  FFrameNumber local_18;
  ESectionEvaluationFlags local_14;
  byte local_13;
  
  local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.Data.ArrayNum = 0;
  local_40.Data.ArrayMax = 0;
  local_58._0_8_ = 0;
  local_58._16_8_ = 0;
  local_58._8_8_ = 0;
  FUtf8String::Reset(&local_40,0);
  local_13 = local_13 & 0xfc;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28._0_4_ = 0;
  local_28._4_4_ = 0;
  local_20.ComparisonIndex.Value = 0;
  local_20.Number = 0;
  local_18.Value = -0x80000000;
  local_14 = None;
  bVar4 = ::operator==(param_1,(FMovieSceneEvaluationFieldEntityMetaData *)local_58);
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    iVar5 = -1;
  }
  else {
    pTVar1 = &this->MetaDataToFieldIndex;
    iVar5 = AlgoImpl::
            IndexOfBy<TArray<FMovieSceneEntityComponentFieldBuilder::FMetaDataToIndex,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,FMovieSceneEvaluationFieldEntityMetaData,FMovieSceneEvaluationFieldEntityMetaData_FMovieSceneEntityComponentFieldBuilder::FMetaDataToIndex::*>
                      (pTVar1,param_1,(pdm_a382eb2c)0x0);
    if (iVar5 == -1) {
      local_a8 = *(undefined8 *)&(param_1->Condition).SoftObjectPtr;
      FSoftObjectPath::FSoftObjectPath
                (&local_a0,(FSoftObjectPath *)&(param_1->Condition).SoftObjectPtr.field_0x8);
      ::FString::FString(&local_80,&param_1->OverrideBoundPropertyPath);
      local_70 = param_1->NotifyFunctionName;
      local_68 = (param_1->ForcedTime).Value;
      local_64 = param_1->Flags;
      local_63 = param_1->field_0x45 & 3 | local_63 & 0xfc;
      FVar7 = (this->MetaDataToFieldIndex).AllocatorInstance.SecondaryData;
      if (FVar7 == (ForElementType<FMovieSceneEntityComponentFieldBuilder::FMetaDataToIndex>)0x0) {
        FVar7 = (ForElementType<FMovieSceneEntityComponentFieldBuilder::FMetaDataToIndex>)pTVar1;
      }
      local_60 = iVar5;
      if ((((ulonglong)FVar7 <= &local_a8) &&
          (&local_a8 <
           (undefined8 *)((longlong)(this->MetaDataToFieldIndex).ArrayMax * 0x50 + (longlong)FVar7))
          ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
      iVar5 = (this->MetaDataToFieldIndex).ArrayNum;
      piVar2 = &(this->MetaDataToFieldIndex).ArrayMax;
      if (iVar5 == *piVar2) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneEntityComponentFieldBuilder::FMetaDataToIndex>_>
                          (0x850,&pTVar1->AllocatorInstance,piVar2);
      }
      (this->MetaDataToFieldIndex).ArrayNum = iVar5 + 1;
      FVar7 = (this->MetaDataToFieldIndex).AllocatorInstance.SecondaryData;
      if (FVar7 == (ForElementType<FMovieSceneEntityComponentFieldBuilder::FMetaDataToIndex>)0x0) {
        FVar7 = (ForElementType<FMovieSceneEntityComponentFieldBuilder::FMetaDataToIndex>)pTVar1;
      }
      puVar8 = (undefined8 *)((longlong)iVar5 * 0x50 + (longlong)FVar7);
      *puVar8 = local_a8;
      *(FName *)(puVar8 + 1) = local_a0.AssetPath.PackageName;
      *(FName *)(puVar8 + 2) = local_a0.AssetPath.AssetName;
      puVar8[3] = 0;
      puVar8[3] = local_a0.SubPathString.Data.AllocatorInstance.Data;
      *(int *)(puVar8 + 4) = local_a0.SubPathString.Data.ArrayNum;
      *(int *)((longlong)puVar8 + 0x24) = local_a0.SubPathString.Data.ArrayMax;
      puVar8[5] = 0;
      puVar8[5] = local_80.Data.AllocatorInstance.Data;
      *(int *)(puVar8 + 6) = local_80.Data.ArrayNum;
      *(int *)((longlong)puVar8 + 0x34) = local_80.Data.ArrayMax;
      *(FName *)(puVar8 + 7) = local_70;
      *(int *)(puVar8 + 8) = local_68;
      *(ESectionEvaluationFlags *)((longlong)puVar8 + 0x44) = local_64;
      bVar6 = (*(byte *)((longlong)puVar8 + 0x45) ^ local_63) & 1 ^
              *(byte *)((longlong)puVar8 + 0x45);
      *(byte *)((longlong)puVar8 + 0x45) = bVar6;
      *(byte *)((longlong)puVar8 + 0x45) = (bVar6 ^ local_63) & 2 ^ bVar6;
      *(int *)(puVar8 + 9) = local_60;
    }
  }
  return iVar5;
}

// AddOneShotEntity @ 14618e4c0

void __thiscall
FMovieSceneEntityComponentFieldBuilder::AddOneShotEntity
          (FMovieSceneEntityComponentFieldBuilder *this,TRange<FFrameNumber> *param_1,int param_2,
          int param_3)

{
  int iVar1;
  TRange<FFrameNumber> local_38;
  IMovieSceneEvaluationTreeNodeOperator local_28;
  FMovieSceneEvaluationFieldEntityTree *local_20;
  int local_18;
  int local_14;
  
  iVar1 = LocalEntityIndexToFieldIndex(this,param_2);
  local_14 = LocalMetaDataIndexToFieldIndex(this,param_3);
  local_38.LowerBound = param_1->LowerBound;
  local_38.UpperBound = param_1->UpperBound;
  local_20 = &this->Field->OneShotEntityTree;
  local_28 = (IMovieSceneEvaluationTreeNodeOperator)
             &
             ___7FAddUniqueOperator___TMovieSceneEvaluationTree_UFEntityAndMetaDataIndex_FMovieSceneEvaluationFieldEntityTree____6B_
  ;
  local_18 = iVar1;
  FMovieSceneEvaluationTree::AddTimeRange
            ((FMovieSceneEvaluationTree *)local_20,&local_38,&local_28,
             (FMovieSceneEvaluationTreeNodeHandle)0xffffffff,
             (TFunctionRef<bool___cdecl(FMovieSceneEvaluationTreeNodeHandle)> *)0x0);
  return;
}

// AddOneShotEntity @ 14618e560

void __thiscall
FMovieSceneEntityComponentFieldBuilder::AddOneShotEntity
          (FMovieSceneEntityComponentFieldBuilder *this,TRange<FFrameNumber> *param_1,
          UObject *param_2,uint param_3,int param_4)

{
  int iVar1;
  TRange<FFrameNumber> local_38;
  IMovieSceneEvaluationTreeNodeOperator local_28;
  FMovieSceneEvaluationFieldEntityTree *local_20;
  int local_18;
  int local_14;
  
  iVar1 = FindOrAddEntity(this,param_2,param_3);
  iVar1 = LocalEntityIndexToFieldIndex(this,iVar1);
  local_14 = LocalMetaDataIndexToFieldIndex(this,param_4);
  local_38.LowerBound = param_1->LowerBound;
  local_38.UpperBound = param_1->UpperBound;
  local_20 = &this->Field->OneShotEntityTree;
  local_28 = (IMovieSceneEvaluationTreeNodeOperator)
             &
             ___7FAddUniqueOperator___TMovieSceneEvaluationTree_UFEntityAndMetaDataIndex_FMovieSceneEvaluationFieldEntityTree____6B_
  ;
  local_18 = iVar1;
  FMovieSceneEvaluationTree::AddTimeRange
            ((FMovieSceneEvaluationTree *)local_20,&local_38,&local_28,
             (FMovieSceneEvaluationTreeNodeHandle)0xffffffff,
             (TFunctionRef<bool___cdecl(FMovieSceneEvaluationTreeNodeHandle)> *)0x0);
  return;
}

// AddPersistentEntity @ 14618e600

void __thiscall
FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity
          (FMovieSceneEntityComponentFieldBuilder *this,TRange<FFrameNumber> *param_1,int param_2,
          int param_3)

{
  int iVar1;
  TRange<FFrameNumber> local_38;
  IMovieSceneEvaluationTreeNodeOperator local_28;
  FMovieSceneEntityComponentField *local_20;
  int local_18;
  int local_14;
  
  iVar1 = LocalEntityIndexToFieldIndex(this,param_2);
  local_14 = LocalMetaDataIndexToFieldIndex(this,param_3);
  local_38.LowerBound = param_1->LowerBound;
  local_38.UpperBound = param_1->UpperBound;
  local_20 = this->Field;
  local_28 = (IMovieSceneEvaluationTreeNodeOperator)
             &
             ___7FAddUniqueOperator___TMovieSceneEvaluationTree_UFEntityAndMetaDataIndex_FMovieSceneEvaluationFieldEntityTree____6B_
  ;
  local_18 = iVar1;
  FMovieSceneEvaluationTree::AddTimeRange
            ((FMovieSceneEvaluationTree *)local_20,&local_38,&local_28,
             (FMovieSceneEvaluationTreeNodeHandle)0xffffffff,
             (TFunctionRef<bool___cdecl(FMovieSceneEvaluationTreeNodeHandle)> *)0x0);
  return;
}

// AddPersistentEntity @ 14618e6a0

void __thiscall
FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity
          (FMovieSceneEntityComponentFieldBuilder *this,TRange<FFrameNumber> *param_1,
          UObject *param_2,uint param_3,int param_4)

{
  int iVar1;
  TRange<FFrameNumber> local_38;
  IMovieSceneEvaluationTreeNodeOperator local_28;
  FMovieSceneEntityComponentField *local_20;
  int local_18;
  int local_14;
  
  iVar1 = FindOrAddEntity(this,param_2,param_3);
  iVar1 = LocalEntityIndexToFieldIndex(this,iVar1);
  local_14 = LocalMetaDataIndexToFieldIndex(this,param_4);
  local_38.LowerBound = param_1->LowerBound;
  local_38.UpperBound = param_1->UpperBound;
  local_20 = this->Field;
  local_28 = (IMovieSceneEvaluationTreeNodeOperator)
             &
             ___7FAddUniqueOperator___TMovieSceneEvaluationTree_UFEntityAndMetaDataIndex_FMovieSceneEvaluationFieldEntityTree____6B_
  ;
  local_18 = iVar1;
  FMovieSceneEvaluationTree::AddTimeRange
            ((FMovieSceneEvaluationTree *)local_20,&local_38,&local_28,
             (FMovieSceneEvaluationTreeNodeHandle)0xffffffff,
             (TFunctionRef<bool___cdecl(FMovieSceneEvaluationTreeNodeHandle)> *)0x0);
  return;
}

// FindOrAddEntity @ 1461a9390

int __thiscall
FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
          (FMovieSceneEntityComponentFieldBuilder *this,UObject *param_1,uint param_2)

{
  int *piVar1;
  FWeakObjectPtr *pFVar2;
  ForElementType<FMovieSceneEntityComponentFieldBuilder::FKeyToIndex> FVar3;
  code *pcVar4;
  FWeakObjectPtr FVar5;
  bool bVar6;
  int iVar7;
  ForElementType<FMovieSceneEntityComponentFieldBuilder::FKeyToIndex> FVar8;
  UObject *local_res8;
  FMovieSceneEvaluationFieldEntityKey local_28;
  FWeakObjectPtr local_18;
  uint uStack_10;
  int iStack_c;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_28.EntityOwner.WeakPtr.ObjectIndex = 0;
  local_28.EntityOwner.WeakPtr.ObjectSerialNumber = 0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_28,(FObjectPtr)&local_res8);
  local_28.EntityID = param_2;
  iVar7 = AlgoImpl::
          IndexOfBy<TArray<FMovieSceneEntityComponentFieldBuilder::FKeyToIndex,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,FMovieSceneEvaluationFieldEntityKey,FMovieSceneEvaluationFieldEntityKey_FMovieSceneEntityComponentFieldBuilder::FKeyToIndex::*>
                    (&this->KeyToFieldIndex,&local_28,(pdm_685685be)0x0);
  if (iVar7 == -1) {
    FVar3 = (this->KeyToFieldIndex).AllocatorInstance.SecondaryData;
    uStack_10 = local_28.EntityID;
    FVar8 = (ForElementType<FMovieSceneEntityComponentFieldBuilder::FKeyToIndex>)this;
    if (FVar3 != (ForElementType<FMovieSceneEntityComponentFieldBuilder::FKeyToIndex>)0x0) {
      FVar8 = FVar3;
    }
    local_18 = local_28.EntityOwner.WeakPtr;
    iStack_c = -1;
    if ((ulonglong)FVar8 <= &local_18) {
      FVar8 = (ForElementType<FMovieSceneEntityComponentFieldBuilder::FKeyToIndex>)this;
      if (FVar3 != (ForElementType<FMovieSceneEntityComponentFieldBuilder::FKeyToIndex>)0x0) {
        FVar8 = FVar3;
      }
      if ((&local_18 <
           (FWeakObjectPtr *)((longlong)(this->KeyToFieldIndex).ArrayMax * 0x10 + (longlong)FVar8))
         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
    }
    iVar7 = (this->KeyToFieldIndex).ArrayNum;
    piVar1 = &(this->KeyToFieldIndex).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneEntityComponentFieldBuilder::FKeyToIndex>_>
                        (0x410,(ForElementType<FMovieSceneEntityComponentFieldBuilder::FKeyToIndex>
                                *)this,piVar1);
    }
    FVar5.ObjectSerialNumber = iStack_c;
    FVar5.ObjectIndex = uStack_10;
    (this->KeyToFieldIndex).ArrayNum = iVar7 + 1;
    FVar3 = (this->KeyToFieldIndex).AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<FMovieSceneEntityComponentFieldBuilder::FKeyToIndex>)0x0) {
      this = (FMovieSceneEntityComponentFieldBuilder *)FVar3;
    }
    pFVar2 = (FWeakObjectPtr *)((longlong)this + (longlong)iVar7 * 0x10);
    *pFVar2 = local_18;
    pFVar2[1] = FVar5;
  }
  return iVar7;
}

// GetSharedMetaData @ 1461b4040

FMovieSceneEvaluationFieldSharedEntityMetaData * __thiscall
FMovieSceneEntityComponentFieldBuilder::GetSharedMetaData
          (FMovieSceneEntityComponentFieldBuilder *this)

{
  uint uVar1;
  FMovieSceneEntityComponentField *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FMovieSceneEvaluationFieldSharedEntityMetaData *pFVar6;
  
  uVar1 = this->SharedMetaDataIndex;
  pFVar2 = this->Field;
  uVar5 = 0;
  if ((int)uVar1 < (pFVar2->SharedMetaData).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FMovieSceneEvaluationFieldSharedEntityMetaData *)(*pcVar3)();
      return pFVar6;
    }
  }
  return (FMovieSceneEvaluationFieldSharedEntityMetaData *)
         ((pFVar2->SharedMetaData).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10);
}

// GetSharedMetaDataIndex @ 1461b40c0

int __thiscall
FMovieSceneEntityComponentFieldBuilder::GetSharedMetaDataIndex
          (FMovieSceneEntityComponentFieldBuilder *this)

{
  return this->SharedMetaDataIndex;
}

// LocalEntityIndexToFieldIndex @ 1461bcb60

int __thiscall
FMovieSceneEntityComponentFieldBuilder::LocalEntityIndexToFieldIndex
          (FMovieSceneEntityComponentFieldBuilder *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  ForElementType<FMovieSceneEntityComponentFieldBuilder::FKeyToIndex> FVar6;
  FMovieSceneEntityComponentField *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  ForElementType<FMovieSceneEntityComponentFieldBuilder::FKeyToIndex> FVar12;
  undefined8 *puVar13;
  
  piVar1 = &(this->KeyToFieldIndex).ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("KeyToFieldIndex.IsValidIndex(LocalIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneEvaluationField.cpp"
                         ,0x6c,L"Invalid local entity index specified"), bVar9)) {
    pcVar8 = (code *)swi(3);
    iVar10 = (*pcVar8)();
    return iVar10;
  }
  uVar11 = 0;
  if (param_1 < *piVar1) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    iVar10 = (*pcVar8)();
    return iVar10;
  }
  FVar6 = (this->KeyToFieldIndex).AllocatorInstance.SecondaryData;
  FVar12 = (ForElementType<FMovieSceneEntityComponentFieldBuilder::FKeyToIndex>)this;
  if (FVar6 != (ForElementType<FMovieSceneEntityComponentFieldBuilder::FKeyToIndex>)0x0) {
    FVar12 = FVar6;
  }
  puVar13 = (undefined8 *)((longlong)param_1 * 0x10 + (longlong)FVar12);
  iVar10 = *(int *)((longlong)puVar13 + 0xc);
  if (iVar10 == -1) {
    pFVar7 = this->Field;
    uVar4 = *(undefined4 *)(puVar13 + 1);
    uVar3 = *puVar13;
    iVar5 = this->SharedMetaDataIndex;
    piVar1 = &(pFVar7->Entities).ArrayMax;
    iVar10 = (pFVar7->Entities).ArrayNum;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,&(pFVar7->Entities).AllocatorInstance,piVar1);
    }
    (pFVar7->Entities).ArrayNum = iVar10 + 1;
    pFVar2 = (pFVar7->Entities).AllocatorInstance.Data + (longlong)iVar10 * 0x10;
    *(undefined8 *)pFVar2 = uVar3;
    *(ulonglong *)(pFVar2 + 8) = CONCAT44(iVar5,uVar4);
    *(int *)((longlong)puVar13 + 0xc) = iVar10;
  }
  return iVar10;
}

// LocalMetaDataIndexToFieldIndex @ 1461bcc90

int __thiscall
FMovieSceneEntityComponentFieldBuilder::LocalMetaDataIndexToFieldIndex
          (FMovieSceneEntityComponentFieldBuilder *this,int param_1)

{
  int *piVar1;
  FMovieSceneEntityComponentField *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ForElementType<FMovieSceneEntityComponentFieldBuilder::FMetaDataToIndex> FVar7;
  FMovieSceneEvaluationFieldEntityMetaData *pFVar8;
  
  if (param_1 == -1) {
    return -1;
  }
  piVar1 = &(this->MetaDataToFieldIndex).ArrayNum;
  if ((param_1 < 0) || (*piVar1 <= param_1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MetaDataToFieldIndex.IsValidIndex(LocalIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneEvaluationField.cpp"
                       ,0x7e,L"Invalid local meta-data index specified");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  uVar6 = 0;
  if (param_1 < *piVar1) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  FVar7 = (this->MetaDataToFieldIndex).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<FMovieSceneEntityComponentFieldBuilder::FMetaDataToIndex>)0x0) {
    FVar7 = (ForElementType<FMovieSceneEntityComponentFieldBuilder::FMetaDataToIndex>)
            &this->MetaDataToFieldIndex;
  }
  pFVar8 = (FMovieSceneEvaluationFieldEntityMetaData *)((longlong)param_1 * 0x50 + (longlong)FVar7);
  iVar5 = *(int *)&pFVar8[1].Condition.SoftObjectPtr;
  if (iVar5 == -1) {
    pFVar2 = this->Field;
    iVar5 = (pFVar2->EntityMetaData).ArrayNum;
    piVar1 = &(pFVar2->EntityMetaData).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&(pFVar2->EntityMetaData).AllocatorInstance,piVar1);
    }
    (pFVar2->EntityMetaData).ArrayNum = iVar5 + 1;
    FMovieSceneEvaluationFieldEntityMetaData::FMovieSceneEvaluationFieldEntityMetaData
              ((FMovieSceneEvaluationFieldEntityMetaData *)
               ((pFVar2->EntityMetaData).AllocatorInstance.Data + (longlong)iVar5 * 0x48),pFVar8);
    *(int *)&pFVar8[1].Condition.SoftObjectPtr = iVar5;
  }
  return iVar5;
}

// operator() @ 1504e6430

bool __thiscall
`FMovieSceneEntityComponentFieldBuilder::~FMovieSceneEntityComponentFieldBuilder'::__l6::<lambda_2>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5842188715597758433>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5842188715597758433>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

