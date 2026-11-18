// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 15

// FSearchIndexBase @ 14a8e1090

FSearchIndexBase * __thiscall
UE::PoseSearch::FSearchIndexBase::FSearchIndexBase(FSearchIndexBase *this,FSearchIndexBase *param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  (this->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Values).AllocatorInstance.Data = (param_1->Values).AllocatorInstance.Data;
  (param_1->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Values).ArrayNum = (param_1->Values).ArrayNum;
  (this->Values).ArrayMax = (param_1->Values).ArrayMax;
  (param_1->Values).ArrayNum = 0;
  (param_1->Values).ArrayMax = 0;
  (this->ValuesVectorToPoseIndexes).MaxKey = (param_1->ValuesVectorToPoseIndexes).MaxKey;
  (this->ValuesVectorToPoseIndexes).MaxValue = (param_1->ValuesVectorToPoseIndexes).MaxValue;
  (this->ValuesVectorToPoseIndexes).DeltaKeyValue =
       (param_1->ValuesVectorToPoseIndexes).DeltaKeyValue;
  (this->ValuesVectorToPoseIndexes).DataValues.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ValuesVectorToPoseIndexes).DataValues.AllocatorInstance.Data =
       (param_1->ValuesVectorToPoseIndexes).DataValues.AllocatorInstance.Data;
  (param_1->ValuesVectorToPoseIndexes).DataValues.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ValuesVectorToPoseIndexes).DataValues.ArrayNum =
       (param_1->ValuesVectorToPoseIndexes).DataValues.ArrayNum;
  (this->ValuesVectorToPoseIndexes).DataValues.ArrayMax =
       (param_1->ValuesVectorToPoseIndexes).DataValues.ArrayMax;
  (param_1->ValuesVectorToPoseIndexes).DataValues.ArrayNum = 0;
  (param_1->ValuesVectorToPoseIndexes).DataValues.ArrayMax = 0;
  (this->PoseMetadata).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoseMetadata).AllocatorInstance.Data = (param_1->PoseMetadata).AllocatorInstance.Data;
  (param_1->PoseMetadata).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoseMetadata).ArrayNum = (param_1->PoseMetadata).ArrayNum;
  (this->PoseMetadata).ArrayMax = (param_1->PoseMetadata).ArrayMax;
  (param_1->PoseMetadata).ArrayNum = 0;
  (param_1->PoseMetadata).ArrayMax = 0;
  bVar1 = param_1->bAnyBlockTransition;
  (this->Assets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->bAnyBlockTransition = bVar1;
  (this->Assets).AllocatorInstance.Data = (param_1->Assets).AllocatorInstance.Data;
  (param_1->Assets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Assets).ArrayNum = (param_1->Assets).ArrayNum;
  (this->Assets).ArrayMax = (param_1->Assets).ArrayMax;
  (param_1->Assets).ArrayNum = 0;
  (param_1->Assets).ArrayMax = 0;
  (this->EventData).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventData).Data.AllocatorInstance.Data = (param_1->EventData).Data.AllocatorInstance.Data;
  (param_1->EventData).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventData).Data.ArrayNum = (param_1->EventData).Data.ArrayNum;
  (this->EventData).Data.ArrayMax = (param_1->EventData).Data.ArrayMax;
  (param_1->EventData).Data.ArrayNum = 0;
  (param_1->EventData).Data.ArrayMax = 0;
  this->MinCostAddend = param_1->MinCostAddend;
  fVar2 = (param_1->Stats).MaxSpeed;
  fVar3 = (param_1->Stats).AverageAcceleration;
  fVar4 = (param_1->Stats).MaxAcceleration;
  (this->Stats).AverageSpeed = (param_1->Stats).AverageSpeed;
  (this->Stats).MaxSpeed = fVar2;
  (this->Stats).AverageAcceleration = fVar3;
  (this->Stats).MaxAcceleration = fVar4;
  return this;
}

// FSearchIndexBase @ 14a8e1160

FSearchIndexBase * __thiscall
UE::PoseSearch::FSearchIndexBase::FSearchIndexBase(FSearchIndexBase *this,FSearchIndexBase *param_1)

{
  int *piVar1;
  TArray<UE::PoseSearch::FPoseMetadata,TAlignedHeapAllocator<16>_> *pTVar2;
  TArray<UE::PoseSearch::FSearchIndexAsset,TAlignedHeapAllocator<16>_> *pTVar3;
  FEventData *pFVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  piVar1 = &(this->Values).ArrayMax;
  (this->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->Values).ArrayNum;
  pFVar6 = (param_1->Values).AllocatorInstance.Data;
  (this->Values).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,iVar5,0,(ForAnyElementType *)this,iVar5,piVar1);
    memcpy((this->Values).AllocatorInstance.Data,pFVar6,(longlong)iVar5 << 2);
  }
  FSparsePoseMultiMap<int>::FSparsePoseMultiMap<int>
            (&this->ValuesVectorToPoseIndexes,&param_1->ValuesVectorToPoseIndexes);
  pTVar2 = &this->PoseMetadata;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->PoseMetadata).ArrayMax;
  iVar5 = (param_1->PoseMetadata).ArrayNum;
  pFVar6 = (param_1->PoseMetadata).AllocatorInstance.Data;
  (this->PoseMetadata).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (0xc,4,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0xc);
  }
  pTVar3 = &this->Assets;
  this->bAnyBlockTransition = param_1->bAnyBlockTransition;
  piVar1 = &(this->Assets).ArrayMax;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->Assets).ArrayNum;
  pFVar6 = (param_1->Assets).AllocatorInstance.Data;
  (this->Assets).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (0x24,4,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0x24);
  }
  pFVar4 = &this->EventData;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->EventData).Data.ArrayMax;
  iVar5 = (param_1->EventData).Data.ArrayNum;
  pTVar7 = (TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_> *)
           (param_1->EventData).Data.AllocatorInstance.Data;
  (this->EventData).Data.ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar5,0,(ForAnyElementType *)pFVar4,iVar5,piVar1);
    ConstructItems<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
              ((pFVar4->Data).AllocatorInstance.Data,pTVar7,iVar5);
  }
  this->MinCostAddend = param_1->MinCostAddend;
  fVar8 = (param_1->Stats).MaxSpeed;
  fVar9 = (param_1->Stats).AverageAcceleration;
  fVar10 = (param_1->Stats).MaxAcceleration;
  (this->Stats).AverageSpeed = (param_1->Stats).AverageSpeed;
  (this->Stats).MaxSpeed = fVar8;
  (this->Stats).AverageAcceleration = fVar9;
  (this->Stats).MaxAcceleration = fVar10;
  return this;
}

// FSearchIndexBase @ 14a8e1320

FSearchIndexBase * __thiscall
UE::PoseSearch::FSearchIndexBase::FSearchIndexBase(FSearchIndexBase *this)

{
  (this->Values).ArrayNum = 0;
  (this->Values).ArrayMax = 0;
  (this->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->ValuesVectorToPoseIndexes).DeltaKeyValue = 0;
  (this->ValuesVectorToPoseIndexes).MaxKey = 0;
  (this->ValuesVectorToPoseIndexes).MaxValue = 0;
  (this->ValuesVectorToPoseIndexes).DataValues.ArrayNum = 0;
  (this->ValuesVectorToPoseIndexes).DataValues.ArrayMax = 0;
  (this->PoseMetadata).ArrayNum = 0;
  (this->PoseMetadata).ArrayMax = 0;
  (this->Assets).ArrayNum = 0;
  (this->Assets).ArrayMax = 0;
  this->bAnyBlockTransition = false;
  (this->ValuesVectorToPoseIndexes).DataValues.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PoseMetadata).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Assets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventData).Data.ArrayNum = 0;
  (this->EventData).Data.ArrayMax = 0;
  this->MinCostAddend = -3.4028235e+38;
  (this->Stats).AverageSpeed = 0.0;
  (this->Stats).MaxSpeed = 0.0;
  (this->Stats).AverageAcceleration = 0.0;
  (this->Stats).MaxAcceleration = 0.0;
  (this->EventData).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  return this;
}

// ~FSearchIndexBase @ 14a8e2c50

void __thiscall UE::PoseSearch::FSearchIndexBase::~FSearchIndexBase(FSearchIndexBase *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
            ((TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_> *)
             (this->EventData).Data.AllocatorInstance.Data,(this->EventData).Data.ArrayNum);
  pFVar1 = (this->EventData).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Assets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PoseMetadata).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ValuesVectorToPoseIndexes).DataValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14a8e3b40

FSearchIndexBase * __thiscall
UE::PoseSearch::FSearchIndexBase::operator=(FSearchIndexBase *this,FSearchIndexBase *param_1)

{
  if (this != param_1) {
    ~FSearchIndexBase(this);
    FSearchIndexBase(this,param_1);
  }
  return this;
}

// operator= @ 14a8e3b80

FSearchIndexBase * __thiscall
UE::PoseSearch::FSearchIndexBase::operator=(FSearchIndexBase *this,FSearchIndexBase *param_1)

{
  if (this != param_1) {
    ~FSearchIndexBase(this);
    FSearchIndexBase(this,param_1);
  }
  return this;
}

// operator== @ 14a8e4c50

bool __thiscall
UE::PoseSearch::FSearchIndexBase::operator==(FSearchIndexBase *this,FSearchIndexBase *param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = (this->Values).ArrayNum;
  if (iVar2 == (param_1->Values).ArrayNum) {
    if ((iVar2 != 0) &&
       (iVar2 = memcmp((this->Values).AllocatorInstance.Data,
                       (param_1->Values).AllocatorInstance.Data,(longlong)iVar2 << 2), iVar2 != 0))
    {
      return false;
    }
    if ((((this->ValuesVectorToPoseIndexes).MaxKey == (param_1->ValuesVectorToPoseIndexes).MaxKey)
        && ((this->ValuesVectorToPoseIndexes).MaxValue ==
            (param_1->ValuesVectorToPoseIndexes).MaxValue)) &&
       ((this->ValuesVectorToPoseIndexes).DeltaKeyValue ==
        (param_1->ValuesVectorToPoseIndexes).DeltaKeyValue)) {
      iVar2 = (this->ValuesVectorToPoseIndexes).DataValues.ArrayNum;
      if (iVar2 == (param_1->ValuesVectorToPoseIndexes).DataValues.ArrayNum) {
        if ((iVar2 != 0) &&
           (iVar2 = memcmp((this->ValuesVectorToPoseIndexes).DataValues.AllocatorInstance.Data,
                           (param_1->ValuesVectorToPoseIndexes).DataValues.AllocatorInstance.Data,
                           (longlong)iVar2 << 2), iVar2 != 0)) {
          return false;
        }
        iVar2 = (this->PoseMetadata).ArrayNum;
        if (((((iVar2 == (param_1->PoseMetadata).ArrayNum) &&
              (bVar1 = CompareItems<UE::PoseSearch::FPoseMetadata,int>
                                 ((FPoseMetadata *)(this->PoseMetadata).AllocatorInstance.Data,
                                  (FPoseMetadata *)(param_1->PoseMetadata).AllocatorInstance.Data,
                                  iVar2), bVar1)) &&
             ((this->bAnyBlockTransition == param_1->bAnyBlockTransition &&
              ((((iVar2 = (this->Assets).ArrayNum, iVar2 == (param_1->Assets).ArrayNum &&
                 (bVar1 = CompareItems<UE::PoseSearch::FSearchIndexAsset,int>
                                    ((FSearchIndexAsset *)(this->Assets).AllocatorInstance.Data,
                                     (FSearchIndexAsset *)(param_1->Assets).AllocatorInstance.Data,
                                     iVar2), bVar1)) &&
                (iVar2 = (this->EventData).Data.ArrayNum,
                iVar2 == (param_1->EventData).Data.ArrayNum)) &&
               ((bVar1 = CompareItems<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
                                   ((TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_> *
                                    )(this->EventData).Data.AllocatorInstance.Data,
                                    (TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_> *
                                    )(param_1->EventData).Data.AllocatorInstance.Data,iVar2), bVar1
                && (param_1->MinCostAddend == this->MinCostAddend)))))))) &&
            ((param_1->Stats).AverageSpeed == (this->Stats).AverageSpeed)) &&
           ((((param_1->Stats).MaxSpeed == (this->Stats).MaxSpeed &&
             ((param_1->Stats).AverageAcceleration == (this->Stats).AverageAcceleration)) &&
            ((param_1->Stats).MaxAcceleration == (this->Stats).MaxAcceleration)))) {
          return true;
        }
      }
    }
  }
  return false;
}

// operator() @ 14a8e5460

void __thiscall
`UE::PoseSearch::FSearchIndexBase::PruneDuplicateValues'::__l8::<lambda_3>::operator()
          (void *this,int param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if (param_1 < *(int *)(lVar2 + 0x38)) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar1 = (uint *)(*(longlong *)(lVar2 + 0x30) + (longlong)param_1 * 0xc);
  if (0x7ffffff < param_2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value < (1 << ValueOffsetNumBits)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchIndex.h"
                       ,0x42,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *puVar1 = *puVar1 ^ (*puVar1 ^ param_2) & 0x7ffffff;
  return;
}

// AllocateData @ 14a8e75a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::PoseSearch::FSearchIndexBase::AllocateData(FSearchIndexBase *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  piVar1 = &(this->Values).ArrayMax;
  piVar2 = &(this->Values).ArrayNum;
  *piVar2 = 0;
  if ((this->Values).ArrayMax < 0) {
    Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,piVar1);
  }
  (this->PoseMetadata).ArrayNum = 0;
  if ((this->PoseMetadata).ArrayMax < 0) {
    Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (0xc,4,0,&(this->PoseMetadata).AllocatorInstance,0,&(this->PoseMetadata).ArrayMax);
  }
  iVar6 = *piVar2;
  uVar7 = param_1 * param_2;
  if (iVar6 < (int)uVar7) {
    iVar5 = Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,uVar7 - iVar6,(ForAnyElementType *)this,piVar2,piVar1);
    memset((this->Values).AllocatorInstance.Data + (longlong)iVar5 * 4,0,
           (longlong)(int)(uVar7 - iVar6) << 2);
  }
  else {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if ((int)uVar7 < iVar6) {
      uVar8 = iVar6 - uVar7;
      if ((int)(uVar8 | uVar7) < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (uVar8 != 0) {
        _Dst = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 4;
        iVar6 = (*piVar2 - uVar8) - uVar7;
        if (iVar6 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar8 * 4,(longlong)iVar6 << 2);
        }
        *piVar2 = *piVar2 - uVar8;
        Core::Private::ReallocShrink<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)this,*piVar2,piVar1);
      }
    }
  }
  TArray<UE::PoseSearch::FPoseMetadata,TAlignedHeapAllocator<16>_>::SetNumZeroed
            (&this->PoseMetadata,param_2,Default);
  FEventData::Reset(&this->EventData);
  return;
}

// GetAssetForPose @ 14a8f93c0

FSearchIndexAsset * __thiscall
UE::PoseSearch::FSearchIndexBase::GetAssetForPose(FSearchIndexBase *this,int param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FSearchIndexAsset *pFVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (param_1 < (this->PoseMetadata).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FSearchIndexAsset *)(*pcVar3)();
      return pFVar5;
    }
  }
  uVar6 = *(uint *)((this->PoseMetadata).AllocatorInstance.Data + (longlong)param_1 * 0xc + 4) &
          0xfffff;
  if ((this->Assets).ArrayNum <= (int)uVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FSearchIndexAsset *)(*pcVar3)();
      return pFVar5;
    }
  }
  pFVar2 = (this->Assets).AllocatorInstance.Data;
  lVar1 = (ulonglong)uVar6 * 0x24;
  if ((param_1 < *(int *)(pFVar2 + lVar1 + 0x14)) ||
     ((*(int *)(pFVar2 + lVar1 + 0x1c) - *(int *)(pFVar2 + lVar1 + 0x18)) + 1 +
      *(int *)(pFVar2 + lVar1 + 0x14) <= param_1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Assets[AssetIndex].IsPoseInRange(PoseIdx)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.cpp"
                       ,0x1c9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FSearchIndexAsset *)(*pcVar3)();
      return pFVar5;
    }
  }
  if ((this->Assets).ArrayNum <= (int)uVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FSearchIndexAsset *)(*pcVar3)();
      return pFVar5;
    }
  }
  return (FSearchIndexAsset *)((this->Assets).AllocatorInstance.Data + lVar1);
}

// GetAssetForPoseSafe @ 14a8f9530

FSearchIndexAsset * __thiscall
UE::PoseSearch::FSearchIndexBase::GetAssetForPoseSafe(FSearchIndexBase *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FSearchIndexAsset *pFVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->PoseMetadata).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->PoseMetadata).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FSearchIndexAsset *)(*pcVar1)();
        return pFVar3;
      }
    }
    uVar4 = *(uint *)((this->PoseMetadata).AllocatorInstance.Data + (longlong)param_1 * 0xc + 4) &
            0xfffff;
    if ((int)uVar4 < (this->Assets).ArrayNum) {
      if ((this->Assets).ArrayNum <= (int)uVar4) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FSearchIndexAsset *)(*pcVar1)();
          return pFVar3;
        }
      }
      return (FSearchIndexAsset *)((this->Assets).AllocatorInstance.Data + (ulonglong)uVar4 * 0x24);
    }
  }
  return (FSearchIndexAsset *)0x0;
}

// GetPoseValuesBase @ 14a8fbc00

TArrayView<float_const_,int> * __thiscall
UE::PoseSearch::FSearchIndexBase::GetPoseValuesBase
          (FSearchIndexBase *this,TArrayView<float_const_,int> *__return_storage_ptr__,int param_1,
          int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  uint uVar5;
  
  if ((((this->Values).ArrayNum == 0) || (param_1 < 0)) ||
     ((this->PoseMetadata).ArrayNum <= param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsValuesEmpty() && PoseIdx >= 0 && PoseIdx < GetNumPoses()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchIndex.h"
                       ,0x227,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if ((this->Values).ArrayNum % param_2 != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Values.Num() % DataCardinality == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchIndex.h"
                       ,0x228,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  uVar5 = 0;
  if (param_1 < (this->PoseMetadata).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  uVar5 = *(uint *)((this->PoseMetadata).AllocatorInstance.Data + (longlong)param_1 * 0xc) &
          0x7ffffff;
  if ((this->Values).ArrayNum <= (int)uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = param_2;
  __return_storage_ptr__->DataPtr = (float *)(pFVar1 + (ulonglong)uVar5 * 4);
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// IsEmpty @ 14a901ab0

bool __thiscall UE::PoseSearch::FSearchIndexBase::IsEmpty(FSearchIndexBase *this)

{
  if (((this->Assets).ArrayNum != 0) && ((this->PoseMetadata).ArrayNum != 0)) {
    return false;
  }
  return true;
}

// PruneDuplicateValues @ 14a904e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::PoseSearch::FSearchIndexBase::PruneDuplicateValues
          (FSearchIndexBase *this,float param_1,int param_2,bool param_3)

{
  TKeyInitializer<int_const_&> *pTVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  byte bVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  ForElementType<unsigned_int> FVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  undefined1 auStackY_2a8 [32];
  undefined1 local_258;
  undefined1 local_257;
  FIdentityFunctor local_256 [2];
  uint local_254;
  ForAnyElementType local_250;
  undefined8 local_248;
  int local_240;
  int local_23c;
  uint local_238;
  uint uStack_234;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_230;
  undefined4 local_228;
  uint uStack_224;
  uint uStack_220;
  undefined4 uStack_21c;
  FSparsePoseMultiMap<int> local_218;
  FSearchIndexBase *local_1f8;
  TArray<UE::PoseSearch::FPosePairSimilarity,TSizedDefaultAllocator<32>_> local_1f0;
  undefined4 local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  FSearchIndexBase *local_1d0;
  FSearchIndexBase *local_1c8;
  FSearchIndexBase *local_1c0;
  int *local_1b8;
  longlong *local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1a8;
  longlong *local_188;
  uint uStack_180;
  uint uStack_17c;
  TBitArray<FDefaultBitArrayAllocator> *local_178;
  undefined4 uStack_170;
  uint uStack_16c;
  uint local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  longlong *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  code *local_128;
  FSearchIndexBase **local_120;
  code *local_118;
  FSearchIndexBase **local_110;
  code *local_108;
  FSearchIndexBase **local_100;
  int *local_f8;
  uint uStack_f0;
  undefined4 uStack_ec;
  TArrayView<int_const_,int> local_e8;
  TArrayView<int_const_,int> local_d8 [2];
  undefined4 local_ac;
  undefined1 local_a8 [32];
  ForElementType<unsigned_int> local_88;
  uint local_80;
  int local_7c;
  int local_78;
  int local_74;
  FScriptContainerElement local_70 [8];
  ForAnyElementType local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  uVar11 = 0;
  (this->ValuesVectorToPoseIndexes).MaxKey = 0;
  (this->ValuesVectorToPoseIndexes).MaxValue = 0;
  (this->ValuesVectorToPoseIndexes).DeltaKeyValue = 0;
  iVar5 = (this->ValuesVectorToPoseIndexes).DataValues.ArrayMax;
  (this->ValuesVectorToPoseIndexes).DataValues.ArrayNum = 0;
  local_1f8 = this;
  if (iVar5 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ValuesVectorToPoseIndexes).DataValues.AllocatorInstance,0,
               &(this->ValuesVectorToPoseIndexes).DataValues.ArrayMax);
  }
  uVar18 = (this->PoseMetadata).ArrayNum;
  if (param_1 <= 0.0) {
    return;
  }
  if ((int)uVar18 < 2) {
    return;
  }
  local_120 = &local_1d0;
  local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f0.ArrayNum = 0;
  local_1f0.ArrayMax = 0;
  local_128 = Core::Private::Function::
              TFunctionRefCaller<`UE::PoseSearch::FSearchIndexBase::PruneDuplicateValues'::__l6::<lambda_1>,TArrayView<float_const_,int>,int,int>
              ::Call;
  local_1d0 = this;
  bVar4 = CalculateSimilarities
                    (&local_1f0,param_1,param_2,uVar18,&this->Values,
                     (TFunctionRef<TArrayView<float_const_,int>___cdecl(int,int)> *)&local_128);
  if (bVar4) {
    local_110 = &local_1c8;
    local_118 = Core::Private::Function::
                TFunctionRefCaller<`UE::PoseSearch::FSearchIndexBase::PruneDuplicateValues'::__l8::<lambda_3>,void,int,unsigned_int>
                ::Call;
    local_100 = &local_1c0;
    local_108 = Core::Private::Function::
                TFunctionRefCaller<`UE::PoseSearch::FSearchIndexBase::PruneDuplicateValues'::__l8::<lambda_2>,unsigned_int,int>
                ::Call;
    local_1c8 = this;
    local_1c0 = this;
    PruneValues(param_2,uVar18,&local_1f0,&this->Values,
                (TFunctionRef<unsigned_int___cdecl(int)> *)&local_108,
                (TFunctionRef<void___cdecl(int,unsigned_int)> *)&local_118);
  }
  if (param_3) goto LAB_14a905994;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (ForElementType<unsigned_int>)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = -1;
  local_74 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_a8,uVar18);
  uVar6 = 1;
  uVar14 = 1;
  if (3 < uVar18) {
    uVar12 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_1e0 = (undefined4)lVar10;
    uVar14 = 1 << ((byte)lVar10 & 0x1f);
  }
  if ((local_60 == 0) || ((int)local_60 < (int)uVar14)) {
    local_60 = uVar14;
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
    }
    if (uVar14 != 0) {
      uVar19 = uVar14;
      if (uVar14 < 2) {
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          uVar19 = 0;
          goto LAB_14a90502e;
        }
      }
      else {
LAB_14a90502e:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar19,4);
      }
      if (0 < (int)uVar14) {
        uVar20 = (ulonglong)uVar14;
        uVar12 = uVar11;
        do {
          FVar16.Data = local_70;
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            FVar16.Data = local_68.Data;
          }
          uVar7 = uVar12 & (longlong)(int)uVar14 - 1U;
          uVar12 = uVar12 + 1;
          *(undefined4 *)(FVar16.Data + uVar7 * 4) = 0xffffffff;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
    }
    if (local_60 != 0) {
      pTStack_230 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
      local_238 = 0;
      uStack_234 = 1;
      uStack_224 = 0;
      uStack_220 = 0;
      uVar12 = uVar11;
      if (local_80 != 0) {
        FVar21 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
        if (local_88 != (ForElementType<unsigned_int>)0x0) {
          FVar21 = local_88;
        }
        uVar14 = *(uint *)FVar21;
        uVar20 = uVar11;
        while (uVar14 == 0) {
          uStack_220 = (int)uVar20 + 0x20;
          uVar20 = (ulonglong)uStack_220;
          iVar5 = (int)uVar12;
          local_238 = iVar5 + 1;
          uVar12 = (ulonglong)local_238;
          if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_238)
          goto LAB_14a90512e;
          uVar14 = ((uint *)((longlong)FVar21 + 4))[iVar5];
        }
        uStack_234 = -uVar14 & uVar14;
        uVar12 = (ulonglong)uStack_234 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_1dc = (int)lVar10;
        uStack_224 = local_1dc + -1 + uStack_220;
        uVar12 = (ulonglong)uStack_224;
        if ((int)local_80 < (int)uStack_224) {
LAB_14a90512e:
          uVar12 = (ulonglong)local_80;
          uStack_224 = local_80;
        }
      }
      local_228 = 0xffffffff;
      local_1b0 = (longlong *)local_a8;
      local_1a8._padding_ = CONCAT44(uStack_234,local_238);
      local_1a8.CurrentBitIndex = uStack_224;
      local_1a8.UnvisitedBitMask = 0xffffffff;
      local_1a8._28_4_ = uStack_21c;
      local_1a8.BaseBitIndex = uStack_220;
      local_1a8.Array = pTStack_230;
      if ((int)uVar12 < (int)local_80) {
        do {
          lVar10 = *local_1b0;
          lVar22 = (longlong)(int)uVar12 * 0x20;
          uVar14 = local_60 - 1 & *(uint *)(lVar22 + lVar10);
          *(uint *)(lVar22 + 0x1c + lVar10) = uVar14;
          FVar16.Data = local_70;
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            FVar16.Data = local_68.Data;
          }
          uVar20 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar14;
          *(undefined4 *)(lVar22 + 0x18 + lVar10) = *(undefined4 *)(FVar16.Data + uVar20 * 4);
          *(int *)(FVar16.Data + uVar20 * 4) = (int)uVar12;
          local_1a8.UnvisitedBitMask = local_1a8.UnvisitedBitMask & ~local_1a8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1a8);
          uVar12 = (ulonglong)(uint)local_1a8.CurrentBitIndex;
        } while (local_1a8.CurrentBitIndex < (local_1a8.Array)->NumBits);
      }
    }
  }
  local_254 = 0;
  uVar12 = uVar11;
  do {
    uVar17 = (uint)uVar12;
    uVar14 = 0;
    uVar19 = uVar14;
    if ((int)uVar17 < (this->PoseMetadata).ArrayNum) {
      uVar19 = ~uVar17 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar9 = (this->PoseMetadata).AllocatorInstance.Data;
    if (((*(uint *)(pFVar9 + (longlong)(int)uVar17 * 0xc) & 0x7ffffff) % (uint)param_2 != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Metadata.GetValueOffset() % DataCardinality == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.cpp"
                           ,0x204,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar1 = (TKeyInitializer<int_const_&> *)
             ((ulonglong)(*(uint *)(pFVar9 + (longlong)(int)uVar17 * 0xc) & 0x7ffffff) /
             (ulonglong)(uint)param_2);
    local_240 = (int)pTVar1;
    if (local_a8._8_4_ != local_74) {
      FVar16.Data = local_70;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FVar16.Data = local_68.Data;
      }
      iVar5 = *(int *)(FVar16.Data + ((ulonglong)(local_60 - 1) & (ulonglong)pTVar1) * 4);
      while (iVar5 != -1) {
        pFVar9 = (FScriptContainerElement *)(local_a8._0_8_ + (longlong)iVar5 * 0x20);
        if (*(int *)pFVar9 == local_240) {
          if (pFVar9 != (FScriptContainerElement *)0x0) goto LAB_14a905311;
          break;
        }
        iVar5 = *(int *)(pFVar9 + 0x18);
      }
    }
    local_1b8 = &local_240;
    TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<int_const_&>_>
              ((TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)local_a8,(uint)&local_23c,pTVar1,(bool *)&local_1b8);
    pFVar9 = (FScriptContainerElement *)(local_a8._0_8_ + (longlong)local_23c * 0x20);
LAB_14a905311:
    if (((*(uint **)(pFVar9 + 8) <= &local_254) &&
        (&local_254 < *(uint **)(pFVar9 + 8) + *(int *)(pFVar9 + 0x14))) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = *(int *)(pFVar9 + 0x10);
    if (iVar5 == *(int *)(pFVar9 + 0x14)) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)(pFVar9 + 8),(int *)(pFVar9 + 0x14));
    }
    *(int *)(pFVar9 + 0x10) = iVar5 + 1;
                    /* WARNING: Load size is inaccurate */
    *(uint *)(pFVar9[8] + (longlong)iVar5 * 4) = local_254;
    local_254 = local_254 + 1;
    uVar12 = (ulonglong)local_254;
  } while ((int)local_254 < (int)uVar18);
  uVar19 = local_a8._8_4_ - local_74;
  local_250.Data = (FScriptContainerElement *)0x0;
  local_248 = 0;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
  }
  if (0 < (int)uVar19) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar19,&local_250,0,(int *)((longlong)&local_248 + 4));
  }
  uVar19 = local_80;
  uStack_16c = uVar14;
  local_168 = uVar14;
  if (local_80 != 0) {
    FVar21 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
    if (local_88 != (ForElementType<unsigned_int>)0x0) {
      FVar21 = local_88;
    }
    uVar17 = *(uint *)FVar21;
    uVar12 = uVar11;
    local_168 = 0;
    uVar14 = 0;
    while (uVar17 == 0) {
      iVar5 = (int)uVar11;
      local_168 = (int)uVar12 + 0x20;
      uVar12 = (ulonglong)local_168;
      uVar14 = iVar5 + 1;
      uVar11 = (ulonglong)uVar14;
      uStack_16c = local_80;
      if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
      goto LAB_14a9054a1;
      uVar17 = ((uint *)((longlong)FVar21 + 4))[iVar5];
    }
    uVar6 = -uVar17 & uVar17;
    uVar11 = (ulonglong)uVar6 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_1d8 = (int)lVar10;
    uStack_16c = (local_168 - 1) + local_1d8;
    if ((int)local_80 < (int)uStack_16c) {
      uStack_16c = local_80;
    }
  }
LAB_14a9054a1:
  iStack_160 = local_a8._8_4_ - local_74;
  local_188 = (longlong *)local_a8;
  local_178 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
  uStack_170 = 0xffffffff;
  TStack_150.CurrentBitIndex = uStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  uVar17 = local_80 & 0xffffffe0;
  TStack_150._padding_ = CONCAT44(uVar6,uVar14);
  uStack_164 = local_ac;
  iVar5 = (int)local_80 >> 5;
  TStack_150._28_4_ = local_ac;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  bVar8 = (byte)local_80;
  uStack_180 = uVar14;
  uStack_17c = uVar6;
  local_158 = local_188;
  TStack_150.Array = local_178;
  if (((int)local_80 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar19 != local_80) {
    FVar21 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
    if (local_88 != (ForElementType<unsigned_int>)0x0) {
      FVar21 = local_88;
    }
    uVar6 = -1 << (bVar8 & 0x1f) & *(uint *)((longlong)FVar21 + (longlong)iVar5 * 4);
    while (uVar6 == 0) {
      lVar10 = (longlong)iVar5;
      uVar17 = uVar17 + 0x20;
      iVar5 = iVar5 + 1;
      uVar19 = local_80;
      if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar5)
      goto LAB_14a9055b1;
      uVar6 = ((uint *)((longlong)FVar21 + 4))[lVar10];
    }
    uVar11 = (ulonglong)(-uVar6 & uVar6) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_1d4 = (int)lVar10;
    uVar19 = (uVar17 - 1) + local_1d4;
    if ((int)local_80 < (int)uVar19) {
      uVar19 = local_80;
    }
  }
LAB_14a9055b1:
  while( true ) {
    plVar3 = local_158;
    if ((int)local_158[1] - *(int *)((longlong)local_158 + 0x34) != (int)uStack_130) {
      local_258 = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_258);
    }
    if (((TStack_150.CurrentBitIndex == uVar19) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10))) &&
       (plVar3 == (longlong *)local_a8)) break;
    pFVar9 = (FScriptContainerElement *)(*plVar3 + (longlong)TStack_150.CurrentBitIndex * 0x20);
    if (((local_250.Data <= pFVar9) && (pFVar9 < local_250.Data + (longlong)local_248._4_4_ * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((int)local_248 == local_248._4_4_) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_250,(int *)((longlong)&local_248 + 4));
      local_248 = CONCAT44(local_248._4_4_,iVar5);
    }
    lVar10 = (longlong)(int)local_248;
    local_248 = CONCAT44(local_248._4_4_,(int)local_248 + 1);
    *(uint *)(local_250.Data + lVar10 * 4) = *(uint *)pFVar9;
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  }
  AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
            ((int *)local_250.Data,(int)local_248,local_256[0],(TLess<void> *)local_256);
  pFVar23 = (FScriptContainerElement *)0x0;
  local_218.MaxKey = 0;
  local_218.MaxValue = 0;
  local_218.DeltaKeyValue = 0;
  local_218.DataValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.DataValues.ArrayNum = 0;
  local_218.DataValues.ArrayMax = 0;
  FSparsePoseMultiMap<int>::Init(&local_218,local_a8._8_4_ - local_74,uVar18 - 1);
  iVar5 = (int)local_248;
  uVar11 = (ulonglong)(int)local_248;
  pFVar9 = local_250.Data + uVar11 * 4;
  FVar16.Data = local_250.Data;
  while( true ) {
    if ((int)uVar11 != iVar5) {
      local_257 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_257);
    }
    if (FVar16.Data == pFVar9) break;
    uVar18 = *(uint *)FVar16.Data;
    pFVar15 = pFVar23;
    if (local_a8._8_4_ != local_74) {
      FVar13.Data = local_70;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FVar13.Data = local_68.Data;
      }
      uVar6 = *(uint *)(FVar13.Data + (ulonglong)(local_60 - 1 & uVar18) * 4);
      while (pFVar15 = pFVar23, uVar6 != 0xffffffff) {
        pFVar15 = (FScriptContainerElement *)(local_a8._0_8_ + (longlong)(int)uVar6 * 0x20);
        if (*(uint *)pFVar15 == uVar18) {
          if (pFVar15 != (FScriptContainerElement *)0x0) goto LAB_14a9057b3;
          break;
        }
        uVar6 = *(uint *)(pFVar15 + 0x18);
      }
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
LAB_14a9057b3:
    local_f8 = *(int **)(pFVar15 + 8);
    uVar6 = *(uint *)(pFVar15 + 0x10);
    if (((int)uVar6 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_d8[0]._12_4_ = uStack_ec;
    local_d8[0].ArrayNum = uVar6;
    local_d8[0].DataPtr = local_f8;
    uStack_f0 = uVar6;
    FSparsePoseMultiMap<int>::Insert(&local_218,uVar18,local_d8);
    uVar11 = local_248 & 0xffffffff;
    FVar16.Data = FVar16.Data + 4;
  }
  pFVar9 = pFVar23;
  if (0 < local_218.MaxKey) {
    do {
      uVar18 = (uint)pFVar9;
      FSparsePoseMultiMap<int>::operator[](&local_218,&local_e8,uVar18);
      pFVar15 = pFVar23;
      if (local_a8._8_4_ != local_74) {
        FVar16.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar16.Data = local_68.Data;
        }
        uVar6 = *(uint *)(FVar16.Data + ((ulonglong)(local_60 - 1) & (ulonglong)pFVar9) * 4);
        while (pFVar15 = pFVar23, uVar6 != 0xffffffff) {
          pFVar15 = (FScriptContainerElement *)(local_a8._0_8_ + (longlong)(int)uVar6 * 0x20);
          if (*(uint *)pFVar15 == uVar18) {
            if (pFVar15 != (FScriptContainerElement *)0x0) goto LAB_14a9058d5;
            break;
          }
          uVar6 = *(uint *)(pFVar15 + 0x18);
        }
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
LAB_14a9058d5:
      uVar6 = *(uint *)(pFVar15 + 0x10);
      if (((uVar6 != local_e8.ArrayNum) ||
          ((uVar6 != 0 &&
           (iVar5 = memcmp(local_e8.DataPtr,*(void **)(pFVar15 + 8),(longlong)(int)uVar6 << 2),
           iVar5 != 0)))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PoseIndexes == TestPoseIndexes",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.cpp"
                             ,0x221,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar9 = (FScriptContainerElement *)(ulonglong)(uVar18 + 1);
    } while ((int)(uVar18 + 1) < local_218.MaxKey);
  }
  (local_1f8->ValuesVectorToPoseIndexes).MaxKey = local_218.MaxKey;
  (local_1f8->ValuesVectorToPoseIndexes).MaxValue = local_218.MaxValue;
  (local_1f8->ValuesVectorToPoseIndexes).DeltaKeyValue = local_218.DeltaKeyValue;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&(local_1f8->ValuesVectorToPoseIndexes).DataValues,&local_218.DataValues);
  if (local_218.DataValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.DataValues.AllocatorInstance.Data);
  }
  if (local_250.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.Data);
  }
  local_60 = 0;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a8);
LAB_14a905994:
  if (local_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.AllocatorInstance.Data);
  }
  return;
}

// Reset @ 14a907510

void __thiscall UE::PoseSearch::FSearchIndexBase::Reset(FSearchIndexBase *this)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  undefined8 local_18 [2];
  
  (this->Values).ArrayNum = 0;
  if ((this->Values).ArrayMax < 0) {
    Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,&(this->Values).ArrayMax);
  }
  pTVar1 = &(this->ValuesVectorToPoseIndexes).DataValues;
  (this->ValuesVectorToPoseIndexes).MaxKey = 0;
  (this->ValuesVectorToPoseIndexes).MaxValue = 0;
  (this->ValuesVectorToPoseIndexes).DeltaKeyValue = 0;
  if (pTVar1 != (TArray<int,TSizedDefaultAllocator<32>_> *)local_18) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ValuesVectorToPoseIndexes).DataValues.ArrayNum = 0;
    (this->ValuesVectorToPoseIndexes).DataValues.ArrayMax = 0;
  }
  (this->PoseMetadata).ArrayNum = 0;
  if ((this->PoseMetadata).ArrayMax < 0) {
    Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (0xc,4,0,&(this->PoseMetadata).AllocatorInstance,0,&(this->PoseMetadata).ArrayMax);
  }
  this->bAnyBlockTransition = false;
  (this->Assets).ArrayNum = 0;
  if ((this->Assets).ArrayMax < 0) {
    Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (0x24,4,0,&(this->Assets).AllocatorInstance,0,&(this->Assets).ArrayMax);
  }
  FEventData::Reset(&this->EventData);
  (this->Stats).AverageSpeed = 0.0;
  (this->Stats).MaxSpeed = 0.0;
  (this->Stats).AverageAcceleration = 0.0;
  (this->Stats).MaxAcceleration = 0.0;
  this->MinCostAddend = -3.4028235e+38;
  return;
}

