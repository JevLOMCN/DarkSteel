// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 23

// FSearchIndex @ 14a8ac980

FSearchIndex * __thiscall UE::PoseSearch::FSearchIndex::FSearchIndex(FSearchIndex *this)

{
  FSearchIndexBase::FSearchIndexBase((FSearchIndexBase *)this);
  (this->WeightsSqrt).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeightsSqrt).ArrayNum = 0;
  (this->WeightsSqrt).ArrayMax = 0;
  (this->PCAValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PCAValues).ArrayNum = 0;
  (this->PCAValues).ArrayMax = 0;
  (this->PCAValuesVectorToPoseIndexes).MaxKey = 0;
  (this->PCAValuesVectorToPoseIndexes).MaxValue = 0;
  (this->PCAValuesVectorToPoseIndexes).DeltaKeyValue = 0;
  (this->PCAValuesVectorToPoseIndexes).DataValues.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PCAValuesVectorToPoseIndexes).DataValues.ArrayNum = 0;
  (this->PCAValuesVectorToPoseIndexes).DataValues.ArrayMax = 0;
  (this->PCAProjectionMatrix).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PCAProjectionMatrix).ArrayNum = 0;
  (this->PCAProjectionMatrix).ArrayMax = 0;
  (this->Mean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Mean).ArrayNum = 0;
  (this->Mean).ArrayMax = 0;
  (this->KDTree).DataSource.PointCount = 0;
  (this->KDTree).DataSource.PointDim = 0;
  (this->KDTree).DataSource.Data = (float *)0x0;
  (this->KDTree).KDTreeImplementation = (FKDTreeImplementation *)0x0;
  (this->VPTree).Nodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VPTree).Nodes.ArrayNum = 0;
  (this->VPTree).Nodes.ArrayMax = 0;
  this->PCAExplainedVariance = 0.0;
  return this;
}

// ~FSearchIndex @ 14a8add00

void __thiscall UE::PoseSearch::FSearchIndex::~FSearchIndex(FSearchIndex *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->VPTree).Nodes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FKDTree::Reset(&this->KDTree);
  (this->KDTree).DataSource.PointCount = 0;
  (this->KDTree).DataSource.PointDim = 0;
  (this->KDTree).DataSource.Data = (float *)0x0;
  pFVar1 = (this->Mean).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PCAProjectionMatrix).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PCAValuesVectorToPoseIndexes).DataValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PCAValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WeightsSqrt).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSearchIndexBase::~FSearchIndexBase((FSearchIndexBase *)this);
  return;
}

// FSearchIndex @ 14a8e0ba0

FSearchIndex * __thiscall
UE::PoseSearch::FSearchIndex::FSearchIndex(FSearchIndex *this,FSearchIndex *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FSearchIndex *pFVar4;
  
  FSearchIndexBase::FSearchIndexBase((FSearchIndexBase *)this,(FSearchIndexBase *)param_1);
  (this->WeightsSqrt).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeightsSqrt).AllocatorInstance.Data = (param_1->WeightsSqrt).AllocatorInstance.Data;
  (param_1->WeightsSqrt).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeightsSqrt).ArrayNum = (param_1->WeightsSqrt).ArrayNum;
  (this->WeightsSqrt).ArrayMax = (param_1->WeightsSqrt).ArrayMax;
  (param_1->WeightsSqrt).ArrayNum = 0;
  (param_1->WeightsSqrt).ArrayMax = 0;
  (this->PCAValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PCAValues).AllocatorInstance.Data = (param_1->PCAValues).AllocatorInstance.Data;
  (param_1->PCAValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PCAValues).ArrayNum = (param_1->PCAValues).ArrayNum;
  (this->PCAValues).ArrayMax = (param_1->PCAValues).ArrayMax;
  (param_1->PCAValues).ArrayNum = 0;
  (param_1->PCAValues).ArrayMax = 0;
  (this->PCAValuesVectorToPoseIndexes).MaxKey = (param_1->PCAValuesVectorToPoseIndexes).MaxKey;
  (this->PCAValuesVectorToPoseIndexes).MaxValue = (param_1->PCAValuesVectorToPoseIndexes).MaxValue;
  iVar1 = (param_1->PCAValuesVectorToPoseIndexes).DeltaKeyValue;
  (this->PCAValuesVectorToPoseIndexes).DataValues.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PCAValuesVectorToPoseIndexes).DeltaKeyValue = iVar1;
  (this->PCAValuesVectorToPoseIndexes).DataValues.AllocatorInstance.Data =
       (param_1->PCAValuesVectorToPoseIndexes).DataValues.AllocatorInstance.Data;
  (param_1->PCAValuesVectorToPoseIndexes).DataValues.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PCAValuesVectorToPoseIndexes).DataValues.ArrayNum =
       (param_1->PCAValuesVectorToPoseIndexes).DataValues.ArrayNum;
  (this->PCAValuesVectorToPoseIndexes).DataValues.ArrayMax =
       (param_1->PCAValuesVectorToPoseIndexes).DataValues.ArrayMax;
  (param_1->PCAValuesVectorToPoseIndexes).DataValues.ArrayNum = 0;
  (param_1->PCAValuesVectorToPoseIndexes).DataValues.ArrayMax = 0;
  (this->PCAProjectionMatrix).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PCAProjectionMatrix).AllocatorInstance.Data =
       (param_1->PCAProjectionMatrix).AllocatorInstance.Data;
  (param_1->PCAProjectionMatrix).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PCAProjectionMatrix).ArrayNum = (param_1->PCAProjectionMatrix).ArrayNum;
  (this->PCAProjectionMatrix).ArrayMax = (param_1->PCAProjectionMatrix).ArrayMax;
  (param_1->PCAProjectionMatrix).ArrayNum = 0;
  (param_1->PCAProjectionMatrix).ArrayMax = 0;
  (this->Mean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Mean).AllocatorInstance.Data = (param_1->Mean).AllocatorInstance.Data;
  (param_1->Mean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Mean).ArrayNum = (param_1->Mean).ArrayNum;
  (this->Mean).ArrayMax = (param_1->Mean).ArrayMax;
  (param_1->Mean).ArrayNum = 0;
  (param_1->Mean).ArrayMax = 0;
  FKDTree::FKDTree(&this->KDTree,&param_1->KDTree);
  (this->VPTree).Nodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VPTree).Nodes.AllocatorInstance.Data = (param_1->VPTree).Nodes.AllocatorInstance.Data;
  (param_1->VPTree).Nodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VPTree).Nodes.ArrayNum = (param_1->VPTree).Nodes.ArrayNum;
  (this->VPTree).Nodes.ArrayMax = (param_1->VPTree).Nodes.ArrayMax;
  (param_1->VPTree).Nodes.ArrayNum = 0;
  (param_1->VPTree).Nodes.ArrayMax = 0;
  this->PCAExplainedVariance = param_1->PCAExplainedVariance;
  if ((this->PCAValues).ArrayNum == 0) {
    if (((this->KDTree).DataSource.PointCount != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!PCAValues.IsEmpty() || KDTree.DataSource.PointCount == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.cpp"
                           ,0x27a,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FSearchIndex *)(*pcVar2)();
      return pFVar4;
    }
    if ((this->PCAValues).ArrayNum == 0) {
      (this->KDTree).DataSource.Data = (float *)0x0;
      return this;
    }
  }
  (this->KDTree).DataSource.Data = (float *)(this->PCAValues).AllocatorInstance.Data;
  return this;
}

// FSearchIndex @ 14a8e0de0

FSearchIndex * __thiscall
UE::PoseSearch::FSearchIndex::FSearchIndex(FSearchIndex *this,FSearchIndex *param_1)

{
  int *piVar1;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar2;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar3;
  FVPTree *pFVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  FSearchIndex *pFVar9;
  
  FSearchIndexBase::FSearchIndexBase((FSearchIndexBase *)this,(FSearchIndexBase *)param_1);
  pTVar2 = &this->WeightsSqrt;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->WeightsSqrt).ArrayMax;
  iVar5 = (param_1->WeightsSqrt).ArrayNum;
  pFVar6 = (param_1->WeightsSqrt).AllocatorInstance.Data;
  (this->WeightsSqrt).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  pTVar2 = &this->PCAValues;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->PCAValues).ArrayMax;
  iVar5 = (param_1->PCAValues).ArrayNum;
  pFVar6 = (param_1->PCAValues).AllocatorInstance.Data;
  (this->PCAValues).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  FSparsePoseMultiMap<int>::FSparsePoseMultiMap<int>
            (&this->PCAValuesVectorToPoseIndexes,&param_1->PCAValuesVectorToPoseIndexes);
  pTVar3 = &this->PCAProjectionMatrix;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->PCAProjectionMatrix).ArrayMax;
  iVar5 = (param_1->PCAProjectionMatrix).ArrayNum;
  pFVar6 = (param_1->PCAProjectionMatrix).AllocatorInstance.Data;
  (this->PCAProjectionMatrix).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  pTVar3 = &this->Mean;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Mean).ArrayMax;
  iVar5 = (param_1->Mean).ArrayNum;
  pFVar6 = (param_1->Mean).AllocatorInstance.Data;
  (this->Mean).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  FKDTree::FKDTree(&this->KDTree,&param_1->KDTree);
  pFVar4 = &this->VPTree;
  (pFVar4->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->VPTree).Nodes.ArrayMax;
  iVar5 = (param_1->VPTree).Nodes.ArrayNum;
  pFVar6 = (param_1->VPTree).Nodes.AllocatorInstance.Data;
  (this->VPTree).Nodes.ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar5,0,(ForAnyElementType *)pFVar4,iVar5,piVar1);
    memcpy((pFVar4->Nodes).AllocatorInstance.Data,pFVar6,(longlong)iVar5 << 4);
  }
  this->PCAExplainedVariance = param_1->PCAExplainedVariance;
  if ((this->PCAValues).ArrayNum == 0) {
    if (((this->KDTree).DataSource.PointCount != 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!PCAValues.IsEmpty() || KDTree.DataSource.PointCount == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.cpp"
                           ,0x265,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar9 = (FSearchIndex *)(*pcVar7)();
      return pFVar9;
    }
    if ((this->PCAValues).ArrayNum == 0) {
      (this->KDTree).DataSource.Data = (float *)0x0;
      return this;
    }
  }
  (this->KDTree).DataSource.Data = (float *)(pTVar2->AllocatorInstance).Data;
  return this;
}

// operator= @ 14a8e3ac0

FSearchIndex * __thiscall
UE::PoseSearch::FSearchIndex::operator=(FSearchIndex *this,FSearchIndex *param_1)

{
  if (this != param_1) {
    ~FSearchIndex(this);
    FSearchIndex(this,param_1);
  }
  return this;
}

// operator= @ 14a8e3b00

FSearchIndex * __thiscall
UE::PoseSearch::FSearchIndex::operator=(FSearchIndex *this,FSearchIndex *param_1)

{
  if (this != param_1) {
    ~FSearchIndex(this);
    FSearchIndex(this,param_1);
  }
  return this;
}

// operator== @ 14a8e4a60

bool __thiscall UE::PoseSearch::FSearchIndex::operator==(FSearchIndex *this,FSearchIndex *param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = FSearchIndexBase::operator==((FSearchIndexBase *)this,(FSearchIndexBase *)param_1);
  if (bVar1) {
    iVar2 = (this->WeightsSqrt).ArrayNum;
    if (iVar2 == (param_1->WeightsSqrt).ArrayNum) {
      if ((iVar2 != 0) &&
         (iVar2 = memcmp((this->WeightsSqrt).AllocatorInstance.Data,
                         (param_1->WeightsSqrt).AllocatorInstance.Data,(longlong)iVar2 << 2),
         iVar2 != 0)) {
        return false;
      }
      iVar2 = (this->PCAValues).ArrayNum;
      if (iVar2 == (param_1->PCAValues).ArrayNum) {
        if ((iVar2 != 0) &&
           (iVar2 = memcmp((this->PCAValues).AllocatorInstance.Data,
                           (param_1->PCAValues).AllocatorInstance.Data,(longlong)iVar2 << 2),
           iVar2 != 0)) {
          return false;
        }
        bVar1 = FSparsePoseMultiMap<int>::operator==
                          (&this->PCAValuesVectorToPoseIndexes,
                           &param_1->PCAValuesVectorToPoseIndexes);
        if (bVar1) {
          iVar2 = (this->PCAProjectionMatrix).ArrayNum;
          if (iVar2 == (param_1->PCAProjectionMatrix).ArrayNum) {
            if ((iVar2 != 0) &&
               (iVar2 = memcmp((this->PCAProjectionMatrix).AllocatorInstance.Data,
                               (param_1->PCAProjectionMatrix).AllocatorInstance.Data,
                               (longlong)iVar2 << 2), iVar2 != 0)) {
              return false;
            }
            iVar2 = (this->Mean).ArrayNum;
            if (iVar2 == (param_1->Mean).ArrayNum) {
              if ((iVar2 != 0) &&
                 (iVar2 = memcmp((this->Mean).AllocatorInstance.Data,
                                 (param_1->Mean).AllocatorInstance.Data,(longlong)iVar2 << 2),
                 iVar2 != 0)) {
                return false;
              }
              bVar1 = FKDTree::operator==(&this->KDTree,&param_1->KDTree);
              if (((bVar1) && (bVar1 = FVPTree::operator==(&this->VPTree,&param_1->VPTree), bVar1))
                 && (param_1->PCAExplainedVariance == this->PCAExplainedVariance)) {
                return true;
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// operator() @ 14a8e5140

TArrayView<float,int> * __thiscall
`UE::PoseSearch::FSearchIndex::PruneDuplicatePCAValues'::__l22::<lambda_1>::operator()
          (void *this,TArrayView<float,int> *__return_storage_ptr__,int param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<float,int> *pTVar5;
  uint uVar6;
  uint uVar7;
  
  plVar1 = *(longlong **)((longlong)this + 8);
  lVar2 = *(longlong *)this;
  uVar6 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<float,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  uVar6 = *(uint *)(*plVar1 + (longlong)param_1 * 4);
  uVar7 = 0;
  if ((int)uVar6 < *(int *)(lVar2 + 0x98)) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<float,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0x90);
  __return_storage_ptr__->ArrayNum = param_2;
  __return_storage_ptr__->DataPtr = (float *)(lVar2 + (longlong)(int)uVar6 * 4);
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<float,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// CompareAlignedPoses @ 14a8ee0d0

FPoseSearchCost __thiscall
UE::PoseSearch::FSearchIndex::CompareAlignedPoses
          (FSearchIndex *this,int param_1,float param_2,TArrayView<float_const_,int> *param_3,
          TArrayView<float_const_,int> *param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  float fVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 in_register_00000014;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  uint in_R8D;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float in_XMM3_Da;
  uint *in_stack_00000030;
  
  uVar7 = 0;
  if ((int)in_R8D < (int)this->_padding_) {
    uVar7 = ~in_R8D >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      fVar6 = (float)(*pcVar3)();
      return (FPoseSearchCost)fVar6;
    }
  }
  fVar6 = FGenericPlatformMath::LoadHalf
                    ((ushort *)((longlong)(int)in_R8D * 0xc + 10 + this->_padding_));
  pFVar12 = (this->WeightsSqrt).AllocatorInstance.Data;
  uVar7 = (this->WeightsSqrt).ArrayNum;
  if ((int)uVar7 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      fVar6 = (float)(*pcVar3)();
      return (FPoseSearchCost)fVar6;
    }
  }
  uVar4 = *in_stack_00000030;
  lVar11 = *(longlong *)in_stack_00000030;
  pFVar2 = *(FScriptContainerElement **)in_stack_00000030;
  pFVar1 = (FScriptContainerElement *)param_4->DataPtr;
  uVar9 = (uint)*(undefined8 *)&param_4->ArrayNum;
  if ((uVar9 != in_stack_00000030[2]) || (uVar9 != uVar7)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("A.Num() == B.Num() && A.Num() == WeightsSqrt.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                       ,0x10,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      fVar6 = (float)(*pcVar3)();
      return (FPoseSearchCost)fVar6;
    }
  }
  uVar7 = uVar9 & 0x80000003;
  if ((int)uVar7 < 0) {
    uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
  }
  if (uVar7 != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("A.Num() % 4 == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                       ,0x11,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      fVar6 = (float)(*pcVar3)();
      return (FPoseSearchCost)fVar6;
    }
  }
  if (((ulonglong)pFVar1 & 0xf) != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsAligned(A.GetData(), alignof(VectorRegister4Float))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                       ,0x12,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      fVar6 = (float)(*pcVar3)();
      return (FPoseSearchCost)fVar6;
    }
  }
  if ((uVar4 & 0xf) != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsAligned(B.GetData(), alignof(VectorRegister4Float))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                       ,0x13,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      fVar6 = (float)(*pcVar3)();
      return (FPoseSearchCost)fVar6;
    }
  }
  if (((ulonglong)pFVar12 & 0xf) != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsAligned(WeightsSqrt.GetData(), alignof(VectorRegister4Float))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                       ,0x14,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      fVar6 = (float)(*pcVar3)();
      return (FPoseSearchCost)fVar6;
    }
  }
  if ((pFVar1 == pFVar2) || (pFVar1 == pFVar12)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("A.GetData() != B.GetData() && A.GetData() != WeightsSqrt.GetData()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                       ,0x16,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      fVar6 = (float)(*pcVar3)();
      return (FPoseSearchCost)fVar6;
    }
  }
  fVar17 = 0.0;
  fVar18 = 0.0;
  fVar19 = 0.0;
  fVar20 = 0.0;
  uVar7 = (int)(uVar9 + ((int)uVar9 >> 0x1f & 3U)) >> 2;
  uVar8 = (ulonglong)uVar7;
  if (0 < (int)uVar7) {
    lVar10 = (longlong)pFVar1 - (longlong)pFVar12;
    lVar11 = lVar11 - (longlong)pFVar12;
    do {
      pFVar1 = pFVar12 + lVar10;
      pFVar2 = pFVar12 + lVar11;
      fVar13 = (*(float *)pFVar1 - *(float *)pFVar2) * *(float *)pFVar12;
      fVar14 = (*(float *)(pFVar1 + 4) - *(float *)(pFVar2 + 4)) * *(float *)(pFVar12 + 4);
      fVar15 = (*(float *)(pFVar1 + 8) - *(float *)(pFVar2 + 8)) * *(float *)(pFVar12 + 8);
      fVar16 = (*(float *)(pFVar1 + 0xc) - *(float *)(pFVar2 + 0xc)) * *(float *)(pFVar12 + 0xc);
      pFVar12 = pFVar12 + 0x10;
      fVar17 = fVar17 + fVar13 * fVar13;
      fVar18 = fVar18 + fVar14 * fVar14;
      fVar19 = fVar19 + fVar15 * fVar15;
      fVar20 = fVar20 + fVar16 * fVar16;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  *(float *)CONCAT44(in_register_00000014,param_1) =
       fVar20 + fVar19 + fVar18 + fVar17 + fVar6 + in_XMM3_Da;
  return (FPoseSearchCost)(float)param_1;
}

// ComparePoses @ 14a8ee5a0

FPoseSearchCost __thiscall
UE::PoseSearch::FSearchIndex::ComparePoses
          (FSearchIndex *this,int param_1,float param_2,TArrayView<float_const_,int> *param_3,
          TArrayView<float_const_,int> *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  float *pfVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  float fVar9;
  undefined4 in_register_00000014;
  int iVar10;
  uint in_R8D;
  float fVar11;
  float in_XMM3_Da;
  undefined8 *in_stack_00000030;
  DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
  local_c8 [24];
  float *local_b0;
  longlong lStack_a8;
  undefined8 local_90;
  longlong lStack_88;
  FScriptContainerElement *local_68;
  longlong lStack_60;
  
  uVar8 = 0;
  if ((int)in_R8D < (int)this->_padding_) {
    uVar8 = ~in_R8D >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      fVar9 = (float)(*pcVar3)();
      return (FPoseSearchCost)fVar9;
    }
  }
  fVar9 = FGenericPlatformMath::LoadHalf
                    ((ushort *)((longlong)(int)in_R8D * 0xc + 10 + this->_padding_));
  iVar1 = (this->WeightsSqrt).ArrayNum;
  pFVar2 = (this->WeightsSqrt).AllocatorInstance.Data;
  if (iVar1 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      fVar9 = (float)(*pcVar3)();
      return (FPoseSearchCost)fVar9;
    }
  }
  uVar6 = *in_stack_00000030;
  iVar4 = *(int *)(in_stack_00000030 + 1);
  pfVar5 = param_4->DataPtr;
  iVar10 = (int)*(undefined8 *)&param_4->ArrayNum;
  if ((iVar10 != iVar4) || (iVar10 != iVar1)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("A.Num() == B.Num() && A.Num() == WeightsSqrt.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                       ,0x3d,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      fVar9 = (float)(*pcVar3)();
      return (FPoseSearchCost)fVar9;
    }
  }
  lStack_a8 = (longlong)iVar10;
  lStack_88 = (longlong)iVar4;
  local_b0 = pfVar5;
  local_90 = uVar6;
  local_68 = pFVar2;
  lStack_60 = (longlong)iVar1;
  fVar11 = Eigen::
           DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
           ::sum(local_c8);
  *(float *)CONCAT44(in_register_00000014,param_1) = fVar11 + fVar9 + in_XMM3_Da;
  return (FPoseSearchCost)(float)param_1;
}

// GetNumDimensions @ 14a8faa40

int __thiscall UE::PoseSearch::FSearchIndex::GetNumDimensions(FSearchIndex *this)

{
  return (this->WeightsSqrt).ArrayNum;
}

// GetNumberOfPrincipalComponents @ 14a8fab80

int __thiscall UE::PoseSearch::FSearchIndex::GetNumberOfPrincipalComponents(FSearchIndex *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = (this->WeightsSqrt).ArrayNum;
  if (((iVar4 < 1) || (iVar1 = (this->PCAProjectionMatrix).ArrayNum, iVar1 < 1)) ||
     (iVar1 % iVar4 != 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumDimensions > 0 && PCAProjectionMatrix.Num() > 0 && PCAProjectionMatrix.Num() % NumDimensions == 0"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.cpp"
                       ,0x2cb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  return (this->PCAProjectionMatrix).ArrayNum / iVar4;
}

// GetPCAPoseValues @ 14a8face0

TArrayView<float_const_,int> * __thiscall
UE::PoseSearch::FSearchIndex::GetPCAPoseValues
          (FSearchIndex *this,TArrayView<float_const_,int> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<float_const_,int> *pTVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  if ((this->PCAValues).ArrayNum == 0) {
    __return_storage_ptr__->DataPtr = (float *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    return __return_storage_ptr__;
  }
  iVar7 = (this->WeightsSqrt).ArrayNum;
  if (((iVar7 < 1) || (iVar1 = (this->PCAProjectionMatrix).ArrayNum, iVar1 < 1)) ||
     (iVar1 % iVar7 != 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumDimensions > 0 && PCAProjectionMatrix.Num() > 0 && PCAProjectionMatrix.Num() % NumDimensions == 0"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.cpp"
                       ,0x2cb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<float_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  iVar7 = (this->PCAProjectionMatrix).ArrayNum / iVar7;
  if ((this->PCAValues).ArrayNum % iVar7 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PCAValues.Num() % NumberOfPrincipalComponents == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.cpp"
                       ,0x397,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<float_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  if ((param_1 < 0) || ((this->PCAValues).ArrayNum / iVar7 <= param_1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PCAValuesVectorIdx >= 0 && PCAValuesVectorIdx < NumPCAValuesVectors",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.cpp"
                       ,0x399,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<float_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  uVar8 = iVar7 * param_1;
  uVar6 = 0;
  if ((int)uVar8 < (this->PCAValues).ArrayNum) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<float_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (this->PCAValues).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar7;
  __return_storage_ptr__->DataPtr = (float *)(pFVar2 + (longlong)(int)uVar8 * 4);
  if (iVar7 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<float_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// GetPCAValueIndex @ 14a8faea0

int __thiscall UE::PoseSearch::FSearchIndex::GetPCAValueIndex(FSearchIndex *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  TArrayView<int_const_,int> local_38;
  TArrayView<int_const_,int> local_28;
  
  iVar4 = (this->PCAValuesVectorToPoseIndexes).MaxKey;
  if (iVar4 < 1) {
    return param_1;
  }
  lVar9 = 0;
  uVar8 = 0;
  do {
    if (((uVar8 == 0xffffffff) || (iVar4 <= (int)uVar8)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Key != Type(INDEX_NONE) && Key < MaxKey",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchIndex.h"
                           ,0x18e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    uVar5 = 0;
    if ((int)uVar8 < (this->PCAValuesVectorToPoseIndexes).DataValues.ArrayNum) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    pFVar6 = (this->PCAValuesVectorToPoseIndexes).DataValues.AllocatorInstance.Data;
    iVar4 = *(int *)(pFVar6 + lVar9);
    if ((this->PCAValuesVectorToPoseIndexes).MaxValue < iVar4) {
      if ((iVar4 < (this->PCAValuesVectorToPoseIndexes).DeltaKeyValue) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value >= DeltaKeyValue",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchIndex.h"
                             ,0x195,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      uVar7 = iVar4 - (this->PCAValuesVectorToPoseIndexes).DeltaKeyValue;
      uVar5 = 0;
      if ((int)uVar7 < (this->PCAValuesVectorToPoseIndexes).DataValues.ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      iVar4 = *(int *)((this->PCAValuesVectorToPoseIndexes).DataValues.AllocatorInstance.Data +
                      (longlong)(int)uVar7 * 4);
      if (((this->PCAValuesVectorToPoseIndexes).DataValues.ArrayNum < (int)(iVar4 + uVar7 + 1)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("int32(DataOffset + Size) <= DataValues.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchIndex.h"
                             ,0x19c,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      local_28.DataPtr =
           (int *)(this->PCAValuesVectorToPoseIndexes).DataValues.AllocatorInstance.Data;
      iVar1 = (this->PCAValuesVectorToPoseIndexes).DataValues.ArrayNum;
      if ((iVar1 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      local_28.ArrayNum = iVar1;
      TArrayView<int_const_,int>::Slice(&local_28,&local_38,uVar7 + 1,iVar4);
    }
    else {
      iVar4 = (this->PCAValuesVectorToPoseIndexes).DataValues.ArrayNum;
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      if (((int)uVar8 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x15b,L"Invalid index (%lld)"), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      if ((iVar4 < (int)(uVar8 + 1)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index + InNum <= ArrayNum",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x15d,
                             L"Range (index: %lld, count: %lld) lies outside the view of %lld elements"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      local_38.ArrayNum = 1;
      local_38.DataPtr = (int *)(pFVar6 + (longlong)(int)uVar8 * 4);
    }
    uVar5 = uVar8 + 1;
    for (pFVar6 = (FScriptContainerElement *)local_38.DataPtr;
        pFVar6 != (FScriptContainerElement *)
                  ((longlong)local_38.DataPtr + (longlong)local_38.ArrayNum * 4);
        pFVar6 = pFVar6 + 4) {
      if (*(int *)pFVar6 == param_1) {
        return uVar8;
      }
    }
    iVar4 = (this->PCAValuesVectorToPoseIndexes).MaxKey;
    lVar9 = lVar9 + 4;
    uVar8 = uVar5;
    if (iVar4 <= (int)uVar5) {
      return -1;
    }
  } while( true );
}

// GetPoseToPCAValuesVectorIndexes @ 14a8fb9a0

void __thiscall
UE::PoseSearch::FSearchIndex::GetPoseToPCAValuesVectorIndexes
          (FSearchIndex *this,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FSparsePoseMultiMap<int> *this_00;
  uint *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint *puVar10;
  undefined4 local_38 [2];
  TArrayView<int_const_,int> local_30;
  
  this_00 = &this->PCAValuesVectorToPoseIndexes;
  if (this_00->MaxKey < 1) {
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
      return;
    }
  }
  else {
    uVar8 = (this->PCAValuesVectorToPoseIndexes).MaxValue + 1;
    uVar9 = (ulonglong)uVar8;
    local_38[0] = 0xffffffff;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    piVar1 = &param_1->ArrayMax;
    param_1->ArrayNum = 0;
    if (*piVar1 != uVar8) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar8,&param_1->AllocatorInstance,0,piVar1);
    }
    if (0 < (int)uVar8) {
      do {
        pFVar3 = (param_1->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)*piVar1 * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = param_1->ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar6 + 1;
        *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_38[0];
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    iVar6 = 0;
    if (0 < this_00->MaxKey) {
      do {
        FSparsePoseMultiMap<int>::operator[](this_00,&local_30,iVar6);
        puVar2 = (uint *)(local_30.DataPtr + local_30.ArrayNum);
        for (puVar10 = (uint *)local_30.DataPtr; puVar10 != puVar2; puVar10 = puVar10 + 1) {
          uVar8 = *puVar10;
          uVar7 = 0;
          if ((int)uVar8 < param_1->ArrayNum) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar8 * 4) = iVar6;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < this_00->MaxKey);
    }
  }
  return;
}

// GetPoseValues @ 14a8fbbd0

TArrayView<float_const_,int> * __thiscall
UE::PoseSearch::FSearchIndex::GetPoseValues
          (FSearchIndex *this,TArrayView<float_const_,int> *__return_storage_ptr__,int param_1)

{
  FSearchIndexBase::GetPoseValuesBase
            ((FSearchIndexBase *)this,__return_storage_ptr__,param_1,(this->WeightsSqrt).ArrayNum);
  return __return_storage_ptr__;
}

// GetPoseValuesSafe @ 14a8fbd70

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
UE::PoseSearch::FSearchIndex::GetPoseValuesSafe
          (FSearchIndex *this,TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined4 uStack_4c;
  TArrayView<float_const_,int> local_48;
  TArrayView<float,int> local_38;
  TArrayView<float_const_,int> local_28;
  
  piVar1 = &__return_storage_ptr__->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &__return_storage_ptr__->ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  if ((-1 < param_1) && (param_1 < (int)this->_padding_)) {
    uVar3 = (this->WeightsSqrt).ArrayNum;
    if ((int)this->_padding_ == 0) {
      if ((int)uVar3 < 1) {
        if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
        }
      }
      else {
        Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar3,&__return_storage_ptr__->AllocatorInstance,piVar1,piVar2);
      }
      pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
      iVar4 = *piVar1;
      if ((iVar4 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar8 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar8;
      }
      local_38._12_4_ = uStack_4c;
      local_38.ArrayNum = iVar4;
      local_38.DataPtr = (float *)pFVar5;
      GetReconstructedPoseValues(this,&local_28,param_1,&local_38);
    }
    else {
      FSearchIndexBase::GetPoseValuesBase((FSearchIndexBase *)this,&local_48,param_1,uVar3);
      *piVar1 = local_48.ArrayNum;
      if ((local_48.ArrayNum == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_48.ArrayNum,*piVar2,&__return_storage_ptr__->AllocatorInstance,
                   local_48.ArrayNum,piVar2);
        if (local_48.ArrayNum != 0) {
          memcpy((__return_storage_ptr__->AllocatorInstance).Data,local_48.DataPtr,
                 (longlong)local_48.ArrayNum << 2);
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// GetPoseValuesSafe @ 14a8fbed0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArrayView<float_const_,int> * __thiscall
UE::PoseSearch::FSearchIndex::GetPoseValuesSafe
          (FSearchIndex *this,TArrayView<float_const_,int> *__return_storage_ptr__,int param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  TArrayView<float,int> *pTVar2;
  TArrayView<float,int> local_28;
  TArrayView<float,int> local_18;
  
  if ((param_1 < 0) || ((int)this->_padding_ <= param_1)) {
    __return_storage_ptr__->DataPtr = (float *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar1 = (this->WeightsSqrt).ArrayNum;
    if ((int)this->_padding_ == 0) {
      TArray<float,TSizedDefaultAllocator<32>_>::SetNum(param_2,iVar1,No);
      pTVar2 = TArrayView<float,int>::
               TArrayView<float,int><TArray<float,TSizedDefaultAllocator<32>_>_&,TArray<float,TSizedDefaultAllocator<32>_>_>
                         (&local_18,param_2);
      local_28.DataPtr = pTVar2->DataPtr;
      local_28.ArrayNum = pTVar2->ArrayNum;
      local_28._12_4_ = *(undefined4 *)&pTVar2->field_0xc;
      GetReconstructedPoseValues(this,__return_storage_ptr__,param_1,&local_28);
    }
    else {
      FSearchIndexBase::GetPoseValuesBase
                ((FSearchIndexBase *)this,__return_storage_ptr__,param_1,iVar1);
    }
  }
  return __return_storage_ptr__;
}

// GetReconstructedPoseValues @ 14a8fce70

/* WARNING: Enum "Type": Some values do not have unique names */

TArrayView<float_const_,int> * __thiscall
UE::PoseSearch::FSearchIndex::GetReconstructedPoseValues
          (FSearchIndex *this,TArrayView<float_const_,int> *__return_storage_ptr__,int param_1,
          TArrayView<float,int> *param_2)

{
  int *piVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  TArrayView<float,int> *pTVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_public:_class_TArrayView<float_const_,int>___cdecl_UE::PoseSearch::FSearchIndex::GetReconstructedPoseValues(int,TArrayView<float,int>)const_::_2_::FStat_STAT_PoseSearch_PCAReconstruct>
  FVar16;
  TArrayView<float_const_,int> *pTVar17;
  void *pvVar18;
  FThreadStats *pFVar19;
  FThreadStatsPool *pFVar20;
  uint uVar21;
  FNameEntryId FVar22;
  FName FVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  uint local_res8;
  uint uStackX_c;
  TArrayView<float_const_,int> *local_res10;
  int local_res18;
  TArrayView<float,int> *local_res20;
  assign_op<float,float> local_2e8;
  assign_op<float,float> local_2e7 [7];
  void *local_2e0;
  ulonglong uStack_2d8;
  FColor_u_0 local_2d0;
  int local_2cc;
  void *local_2c8;
  ulonglong uStack_2c0;
  FName local_2b8;
  FName local_2b0;
  FScriptContainerElement *local_2a0;
  LARGE_INTEGER local_298;
  LARGE_INTEGER local_290;
  FStatMessage local_288;
  FStatMessage local_278;
  FScriptContainerElement *local_268;
  longlong lStack_260;
  ulonglong local_258;
  FScriptContainerElement *local_248;
  longlong lStack_240;
  longlong local_238;
  FScriptContainerElement *local_228;
  ulonglong uStack_220;
  longlong local_218;
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::ArrayWrapper<Eigen::Matrix<float,1,_1,1,1,_1>_const_>_const_,Eigen::ArrayWrapper<Eigen::Matrix<float,1,_1,1,1,_1>_const_>_const_>_>,Eigen::internal::assign_op<float,float>,0>
  local_208;
  FName local_1e8;
  FName local_1e0;
  float *local_1d8 [2];
  ulonglong local_1c8;
  undefined1 local_1c0 [16];
  void *local_1b0;
  FScriptContainerElement *local_1a8;
  longlong lStack_1a0;
  ulonglong local_198;
  Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_> local_188;
  undefined1 local_168 [24];
  longlong local_150;
  FScriptContainerElement *local_148;
  longlong lStack_140;
  longlong local_138;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  FScriptContainerElement *local_110;
  ulonglong uStack_108;
  longlong local_100;
  FScriptContainerElement *local_f0;
  longlong lStack_e8;
  ulonglong local_e0;
  CwiseUnaryOp<Eigen::internal::scalar_inverse_op<float>,Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>
  local_c8;
  FScriptContainerElement *local_98;
  undefined8 uStack_90;
  longlong local_88;
  
  local_res10 = __return_storage_ptr__;
  local_res18 = param_1;
  local_res20 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_PoseSearch_PCAReconstruct ==
        (FThreadSafeStaticStat<_public:_class_TArrayView<float_const_,int>___cdecl_UE::PoseSearch::FSearchIndex::GetReconstructedPoseValues(int,TArrayView<float,int>)const_::_2_::FStat_STAT_PoseSearch_PCAReconstruct>
         )0x0) {
      pFVar15 = ::FName::FName(&local_1e8,"STAT_PoseSearch_PCAReconstruct");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PoseSearch_PCAReconstruct,*pFVar15,
                 L"STAT_PoseSearch_PCAReconstruct","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar16 = StatPtr_STAT_PoseSearch_PCAReconstruct;
  if (StatPtr_STAT_PoseSearch_PCAReconstruct ==
      (FThreadSafeStaticStat<_public:_class_TArrayView<float_const_,int>___cdecl_UE::PoseSearch::FSearchIndex::GetReconstructedPoseValues(int,TArrayView<float,int>)const_::_2_::FStat_STAT_PoseSearch_PCAReconstruct>
       )0x0) {
    pFVar15 = ::FName::FName(&local_1e0,"STAT_PoseSearch_PCAReconstruct");
    FVar16 = (FThreadSafeStaticStat<_public:_class_TArrayView<float_const_,int>___cdecl_UE::PoseSearch::FSearchIndex::GetReconstructedPoseValues(int,TArrayView<float,int>)const_::_2_::FStat_STAT_PoseSearch_PCAReconstruct>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PoseSearch_PCAReconstruct,
                          *pFVar15,L"STAT_PoseSearch_PCAReconstruct","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar16;
  bVar8 = false;
  bVar10 = false;
  local_2b0.ComparisonIndex.Value = 0;
  local_2b0.Number = 0;
  FVar22 = FVar23.ComparisonIndex.Value;
  uVar21 = FVar23.Number;
  if ((FVar22.Value != 0) || (uVar21 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2d0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2d0._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2b8.ComparisonIndex.Value = FVar22.Value;
        local_2b8.Number = uVar21;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2b8,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.cpp"
                   ,0x29f);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar22.Value;
      uStackX_c = uVar21;
      FThreadStats::AddMessage(FVar23,CycleScopeStart);
      bVar9 = true;
      goto LAB_14a8fcfee;
    }
  }
  bVar9 = false;
  FVar23 = local_2b0;
LAB_14a8fcfee:
  iVar14 = (this->WeightsSqrt).ArrayNum;
  uVar24 = (ulonglong)iVar14;
  lVar26 = this->_padding_;
  iVar13 = GetNumberOfPrincipalComponents(this);
  lVar25 = (longlong)iVar13;
  local_2cc = iVar13;
  if ((((param_1 < 0) || ((int)lVar26 <= param_1)) || (iVar14 < 1)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("PoseIdx >= 0 && PoseIdx < NumPoses && NumDimensions > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.cpp"
                          ,0x2a7,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    pTVar17 = (TArrayView<float_const_,int> *)(*pcVar7)();
    return pTVar17;
  }
  if ((local_res20->ArrayNum != iVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("BufferUsedForReconstruction.Num() == NumDimensions",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.cpp"
                          ,0x2a8,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    pTVar17 = (TArrayView<float_const_,int> *)(*pcVar7)();
    return pTVar17;
  }
  local_228 = (this->PCAProjectionMatrix).AllocatorInstance.Data;
  local_268 = (this->Mean).AllocatorInstance.Data;
  local_258 = uVar24;
  uStack_220 = uVar24;
  local_218 = lVar25;
  if (((this->PCAValues).ArrayNum % iVar13 != 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("PCAValues.Num() % NumberOfPrincipalComponents == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.cpp"
                          ,0x2ad,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    pTVar17 = (TArrayView<float_const_,int> *)(*pcVar7)();
    return pTVar17;
  }
  iVar13 = (this->PCAValues).ArrayNum / iVar13;
  lStack_240 = (longlong)iVar13;
  local_2a0 = (this->PCAValues).AllocatorInstance.Data;
  local_248 = local_2a0;
  local_238 = lVar25;
  iVar14 = GetPCAValueIndex(this,local_res18);
  lVar26 = (longlong)iVar14;
  if (iVar14 == -1) {
    local_res10->DataPtr = (float *)0x0;
    local_res10->ArrayNum = 0;
    if (bVar10) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    pTVar17 = local_res10;
    if ((((bVar9) && (FVar23 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar19 == (FThreadStats *)0x0) {
        pFVar20 = FThreadStatsPool::Get();
        pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
      }
      pTVar17 = local_res10;
      if (pFVar19->bWaitForExplicitFlush < pFVar19->ScopeCount) {
        local_278.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
        local_278.NameAndInfo.Index.Value = FVar23.ComparisonIndex.Value.Value;
        QueryPerformanceCounter(&local_290);
        local_278.StatData.Pad[4] = '\0';
        local_278.StatData.Pad[5] = '\0';
        local_278.StatData.Pad[6] = '\0';
        local_278.StatData.Pad[7] = '\0';
        local_278.StatData.Pad[0] = local_290.s.LowPart._0_1_;
        local_278.StatData.Pad[1] = local_290.s.LowPart._1_1_;
        local_278.StatData.Pad[2] = local_290.s.LowPart._2_1_;
        local_278.StatData.Pad[3] = local_290.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar19,&local_278);
        piVar1 = &pFVar19->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar19,false,false);
          pTVar17 = local_res10;
        }
        else {
          pTVar17 = local_res10;
          if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar19,false,false);
            pTVar17 = local_res10;
          }
        }
      }
    }
  }
  else {
    if (((iVar14 < 0) || (iVar13 <= iVar14)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("PCAValueIdx >= 0 && PCAValueIdx < NumPCAValuesVectors",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.cpp"
                            ,0x2b4,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      pTVar17 = (TArrayView<float_const_,int> *)(*pcVar7)();
      return pTVar17;
    }
    local_150 = (longlong)local_2cc;
    local_168._8_8_ = local_2a0 + lVar26 * local_150 * 4;
    local_138 = local_238;
    local_100 = local_218;
    local_120 = 0;
    local_e0 = local_258;
    local_168._16_8_ = uStack_90;
    local_148 = local_248;
    lStack_140 = lStack_240;
    local_110 = local_228;
    uStack_108 = uStack_220;
    local_f0 = local_268;
    lStack_e8 = lStack_260;
    local_2c8 = (void *)0x0;
    uStack_2c0 = 0;
    local_128 = lVar26;
    local_118 = local_150;
    local_98 = (FScriptContainerElement *)local_168._8_8_;
    local_88 = local_150;
    if (uVar24 != 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = SUB168(SEXT816(0x7fffffffffffffff),8);
      if (SUB168((auVar3 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816((longlong)uVar24),0) < 1)
      {
        ::operator_new(0xffffffffffffffff);
      }
      if ((uVar24 != 0) &&
         (auVar4._8_8_ = 0, auVar4._0_8_ = SUB168(SEXT816(0x7fffffffffffffff),8),
         SUB168((auVar4 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816((longlong)uVar24),0) < 1))
      {
        ::operator_new(0xffffffffffffffff);
      }
    }
    pvVar18 = local_2c8;
    if ((uVar24 != uStack_2c0) &&
       (FMemory_Free(local_2c8), pvVar18 = local_2c8, 0 < (longlong)uVar24)) {
      if (0x3fffffffffffffff < uVar24) {
        ::operator_new(0xffffffffffffffff);
      }
      pvVar18 = FMemory_Malloc(uVar24 * 4,0x10);
      if ((pvVar18 == (void *)0x0) && (uVar24 * 4 != 0)) {
        ::operator_new(0xffffffffffffffff);
      }
    }
    local_2c8 = pvVar18;
    uStack_2c0 = uVar24;
    Eigen::internal::
    call_assignment_no_alias<Eigen::Matrix<float,1,_1,1,1,_1>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float,float>,Eigen::Product<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,1,Eigen::Stride<0,0>_>_const_,1,_1,1>,Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_>,0>_const_,Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>,Eigen::internal::assign_op<float,float>_>
              ((Matrix<float,1,_1,1,1,_1> *)&local_2c8,
               (CwiseBinaryOp<Eigen::internal::scalar_sum_op<float,float>,Eigen::Product<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,1,Eigen::Stride<0,0>_>_const_,1,_1,1>,Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_>,0>_const_,Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>
                *)local_168,(assign_op<float,float> *)&local_res8);
    local_1a8 = (this->WeightsSqrt).AllocatorInstance.Data;
    local_c8.m_xpr._padding_ = lStack_1a0;
    local_2e0 = (void *)0x0;
    uStack_2d8 = 0;
    local_198 = uVar24;
    local_c8.m_xpr._padding_ = (longlong)local_1a8;
    local_c8.m_xpr._padding_ = uVar24;
    if (uVar24 != 0) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = SUB168(SEXT816(0x7fffffffffffffff),8);
      if (SUB168((auVar5 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816((longlong)uVar24),0) < 1)
      {
        ::operator_new(0xffffffffffffffff);
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = SUB168(SEXT816(0x7fffffffffffffff),8);
      if (SUB168((auVar6 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816((longlong)uVar24),0) < 1)
      {
        ::operator_new(0xffffffffffffffff);
      }
    }
    pvVar18 = local_2e0;
    if (uVar24 != uStack_2d8) {
      FMemory_Free(local_2e0);
      if ((longlong)uVar24 < 1) {
        local_2e0 = (void *)0x0;
        pvVar18 = local_2e0;
      }
      else {
        if (0x3fffffffffffffff < uVar24) {
          ::operator_new(0xffffffffffffffff);
        }
        pvVar18 = FMemory_Malloc(uVar24 * 4,0x10);
        if ((pvVar18 == (void *)0x0) && (uVar24 * 4 != 0)) {
          ::operator_new(0xffffffffffffffff);
        }
      }
    }
    local_2e0 = pvVar18;
    uStack_2d8 = uVar24;
    Eigen::internal::
    call_assignment_no_alias<Eigen::Matrix<float,1,_1,1,1,_1>,Eigen::CwiseUnaryOp<Eigen::internal::scalar_inverse_op<float>,Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>,Eigen::internal::assign_op<float,float>_>
              ((Matrix<float,1,_1,1,1,_1> *)&local_2e0,&local_c8,&local_2e8);
    pTVar11 = local_res20;
    local_1c0._8_8_ = local_2c8;
    local_1b0 = local_2e0;
    local_208.m_dst =
         (evaluator<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_> *)local_1d8
    ;
    pfVar2 = local_res20->DataPtr;
    local_208.m_src =
         (evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::ArrayWrapper<Eigen::Matrix<float,1,_1,1,1,_1>_const_>_const_,Eigen::ArrayWrapper<Eigen::Matrix<float,1,_1,1,1,_1>_const_>_const_>_>
          *)local_1c0;
    local_208.m_functor = local_2e7;
    local_208.m_dstExpr = &local_188;
    local_1d8[0] = pfVar2;
    local_1c8 = uVar24;
    local_188._padding_ = (longlong)pfVar2;
    local_188._padding_ = uVar24;
    Eigen::internal::
    dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::ArrayWrapper<Eigen::Matrix<float,1,-1,1,1,-1>_const_>_const_,Eigen::ArrayWrapper<Eigen::Matrix<float,1,-1,1,1,-1>_const_>_const_>_>,Eigen::internal::assign_op<float,float>,0>,3,0>
    ::run(&local_208);
    pTVar17 = local_res10;
    iVar14 = pTVar11->ArrayNum;
    local_res10->DataPtr = pfVar2;
    local_res10->ArrayNum = iVar14;
    FMemory_Free(local_2e0);
    FMemory_Free(local_2c8);
    if (bVar10) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar9) && (FVar23 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar19 == (FThreadStats *)0x0) {
        pFVar20 = FThreadStatsPool::Get();
        pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
      }
      if (pFVar19->bWaitForExplicitFlush < pFVar19->ScopeCount) {
        local_288.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
        local_288.NameAndInfo.Index.Value = FVar23.ComparisonIndex.Value.Value;
        QueryPerformanceCounter(&local_298);
        local_288.StatData.Pad[4] = '\0';
        local_288.StatData.Pad[5] = '\0';
        local_288.StatData.Pad[6] = '\0';
        local_288.StatData.Pad[7] = '\0';
        local_288.StatData.Pad[0] = local_298.s.LowPart._0_1_;
        local_288.StatData.Pad[1] = local_298.s.LowPart._1_1_;
        local_288.StatData.Pad[2] = local_298.s.LowPart._2_1_;
        local_288.StatData.Pad[3] = local_298.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar19,&local_288);
        piVar1 = &pFVar19->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar19,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar19,false,false);
        }
      }
    }
  }
  return pTVar17;
}

// PCAProject @ 14a9039c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TArrayView<float_const_,int> * __thiscall
UE::PoseSearch::FSearchIndex::PCAProject
          (FSearchIndex *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          TArrayView<float_const_,int> *param_1,TArrayView<float,int> *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_public:_class_TArrayView<float_const_,int>___cdecl_UE::PoseSearch::FSearchIndex::PCAProject(TArrayView<float_const_,int>,TArrayView<float,int>)const_::_2_::FStat_STAT_PoseSearch_PCAProject>
  FVar12;
  TArrayView<float_const_,int> *pTVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar16;
  FNameEntryId FVar17;
  FName FVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  ulonglong uVar21;
  undefined1 auStackY_2a8 [32];
  assign_op<float,float> local_248;
  assign_op<float,float> local_247;
  assign_op<float,float> local_246 [6];
  uint local_240;
  uint uStack_23c;
  FColor_u_0 local_238 [2];
  TArrayView<float,int> *local_230;
  FSearchIndex *local_228;
  FName local_220;
  FName local_218;
  TArrayView<float_const_,int> *local_208;
  LARGE_INTEGER local_200;
  FStatMessage local_1f8;
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::ArrayWrapper<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>_const_,Eigen::ArrayWrapper<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>_const_>_>,Eigen::internal::assign_op<float,float>,0>
  local_1e8;
  Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_> local_1c8;
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>_>,Eigen::internal::assign_op<float,float>,0>
  local_1a8;
  Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_> local_188;
  FScriptContainerElement *local_168;
  ulonglong uStack_160;
  longlong local_158;
  FName local_148;
  FName local_140;
  evaluator<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_> local_138;
  evaluator<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_> local_120;
  Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_> local_108;
  undefined1 local_e8 [24];
  ulonglong local_d0;
  FScriptContainerElement *local_c8;
  ulonglong local_b8;
  undefined1 local_b0 [48];
  ulonglong local_80;
  Product<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>,Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>,0>
  local_78;
  ulonglong local_38;
  
  puVar19 = auStackY_2a8;
  local_38 = __security_cookie.value ^ (ulonglong)&local_248;
  uVar15 = 0;
  local_230 = param_2;
  local_228 = this;
  local_208 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_PoseSearch_PCAProject ==
        (FThreadSafeStaticStat<_public:_class_TArrayView<float_const_,int>___cdecl_UE::PoseSearch::FSearchIndex::PCAProject(TArrayView<float_const_,int>,TArrayView<float,int>)const_::_2_::FStat_STAT_PoseSearch_PCAProject>
         )0x0) {
      pFVar11 = ::FName::FName(&local_148,"STAT_PoseSearch_PCAProject");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PoseSearch_PCAProject,*pFVar11,
                 L"STAT_PoseSearch_PCAProject","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar12 = StatPtr_STAT_PoseSearch_PCAProject;
  if (StatPtr_STAT_PoseSearch_PCAProject ==
      (FThreadSafeStaticStat<_public:_class_TArrayView<float_const_,int>___cdecl_UE::PoseSearch::FSearchIndex::PCAProject(TArrayView<float_const_,int>,TArrayView<float,int>)const_::_2_::FStat_STAT_PoseSearch_PCAProject>
       )0x0) {
    pFVar11 = ::FName::FName(&local_140,"STAT_PoseSearch_PCAProject");
    FVar12 = (FThreadSafeStaticStat<_public:_class_TArrayView<float_const_,int>___cdecl_UE::PoseSearch::FSearchIndex::PCAProject(TArrayView<float_const_,int>,TArrayView<float,int>)const_::_2_::FStat_STAT_PoseSearch_PCAProject>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PoseSearch_PCAProject,*pFVar11,
                          L"STAT_PoseSearch_PCAProject","STATGROUP_Quick","STATCAT_Advanced",
                          L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar12;
  bVar7 = false;
  bVar9 = false;
  local_218.ComparisonIndex.Value = 0;
  local_218.Number = 0;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar16 = FVar18.Number;
  if ((FVar17.Value != 0) || (uVar16 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_238[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_238[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_220.ComparisonIndex.Value = FVar17.Value;
        local_220.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_220,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.cpp"
                   ,0x2d3);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_240 = FVar17.Value;
      uStack_23c = uVar16;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar8 = true;
      goto LAB_14a903b53;
    }
  }
  bVar8 = false;
  FVar18 = local_218;
LAB_14a903b53:
  iVar3 = (this->WeightsSqrt).ArrayNum;
  uVar21 = (ulonglong)iVar3;
  if ((((iVar3 < 1) || (iVar4 = (this->PCAProjectionMatrix).ArrayNum, iVar4 < 1)) ||
      (iVar4 % iVar3 != 0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumDimensions > 0 && PCAProjectionMatrix.Num() > 0 && PCAProjectionMatrix.Num() % NumDimensions == 0"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.cpp"
                          ,0x2cb,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TArrayView<float_const_,int> *)(*pcVar6)();
    return pTVar13;
  }
  local_240 = (this->PCAProjectionMatrix).ArrayNum / iVar3;
  if ((param_1->ArrayNum != iVar3) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("PoseValues.Num() == NumDimensions",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.cpp"
                          ,0x2d7,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TArrayView<float_const_,int> *)(*pcVar6)();
    return pTVar13;
  }
  uVar16 = local_230->ArrayNum;
  if ((uVar16 != local_240) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("BufferUsedForProjection.Num() == NumberOfPrincipalComponents",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.cpp"
                          ,0x2d8,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TArrayView<float_const_,int> *)(*pcVar6)();
    return pTVar13;
  }
  local_c8 = (this->WeightsSqrt).AllocatorInstance.Data;
  local_168 = (local_228->PCAProjectionMatrix).AllocatorInstance.Data;
  local_158 = (longlong)(int)local_240;
  lVar2 = uVar21 * 4;
  local_e8._8_8_ = local_208->DataPtr;
  local_1c8._padding_ = uVar15;
  if (lVar2 != 0) {
    uVar14 = lVar2 + 0x1e;
    if (uVar14 <= lVar2 + 0xfU) {
      uVar14 = 0xffffffffffffff0;
    }
    puVar19 = auStackY_2a8 + -(uVar14 & 0xfffffffffffffff0);
    local_1c8._padding_ = (longlong)&local_240 + -(uVar14 & 0xfffffffffffffff0);
  }
  local_1e8.m_dst = &local_138;
  local_1e8.m_src =
       (evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::ArrayWrapper<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>_const_,Eigen::ArrayWrapper<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>_const_>_>
        *)local_e8;
  local_1e8.m_dstExpr = &local_1c8;
  local_228 = (FSearchIndex *)(local_228->Mean).AllocatorInstance.Data;
  local_1e8.m_functor = &local_248;
  local_1c8._padding_ = uVar21;
  uStack_160 = uVar21;
  local_138._0_8_ = local_1c8._padding_;
  local_138._16_8_ = uVar21;
  local_d0 = uVar21;
  local_b8 = uVar21;
  *(undefined8 *)(puVar19 + -8) = 0x14a903cff;
  Eigen::internal::
  dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::ArrayWrapper<Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>_const_,1,Eigen::Stride<0,0>_>_const_>_const_,Eigen::ArrayWrapper<Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>_const_,1,Eigen::Stride<0,0>_>_const_>_const_>_>,Eigen::internal::assign_op<float,float>,0>,3,0>
  ::run(&local_1e8);
  puVar20 = puVar19;
  if ((uVar21 & 0x3fffffffffffffff) != 0) {
    uVar15 = lVar2 + 0x1e;
    if (uVar15 <= lVar2 + 0xfU) {
      uVar15 = 0xffffffffffffff0;
    }
    *(undefined8 *)(puVar19 + -8) = 0x14a903d28;
    puVar20 = puVar19 + -(uVar15 & 0xfffffffffffffff0);
    uVar15 = (ulonglong)(puVar19 + -(uVar15 & 0xfffffffffffffff0) + 0x6f) & 0xfffffffffffffff0;
  }
  local_b0._8_8_ = local_1c8._padding_;
  local_b0._24_8_ = local_1c8._padding_;
  local_b0._32_8_ = local_228;
  local_1a8.m_dst = &local_120;
  local_1a8.m_src =
       (evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>_>
        *)local_b0;
  local_1a8.m_functor = &local_247;
  local_1a8.m_dstExpr = &local_188;
  local_188._padding_ = uVar15;
  local_188._padding_ = uVar21;
  local_120._0_8_ = uVar15;
  local_120._16_8_ = uVar21;
  local_80 = uVar21;
  *(undefined8 *)(puVar20 + -8) = 0x14a903dc3;
  Eigen::internal::
  dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>,1,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>_const_,1,Eigen::Stride<0,0>_>_const_>_>,Eigen::internal::assign_op<float,float>,0>,3,0>
  ::run(&local_1a8);
  local_78.m_lhs._padding_ = local_188._padding_;
  local_78.m_lhs._padding_ = local_188._padding_;
  pfVar5 = local_230->DataPtr;
  local_108._padding_ = (longlong)(int)local_240;
  local_78.m_lhs._padding_ = local_188._padding_;
  local_78.m_rhs._padding_ = (longlong)local_168;
  local_78.m_rhs._padding_ = uStack_160;
  local_78.m_rhs._padding_ = local_158;
  local_108._padding_ = (longlong)pfVar5;
  *(undefined8 *)(puVar20 + -8) = 0x14a903e2f;
  Eigen::internal::
  call_assignment_no_alias<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>,Eigen::Product<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>,Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>,0>,Eigen::internal::assign_op<float,float>_>
            (&local_108,&local_78,local_246);
  __return_storage_ptr__->DataPtr = pfVar5;
  __return_storage_ptr__->ArrayNum = uVar16;
  if (bVar9) {
    *(undefined8 *)(puVar20 + -8) = 0x14a903e41;
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    *(undefined8 *)(puVar20 + -8) = 0x14a903e4c;
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    *(undefined8 *)(puVar20 + -8) = 0x14a903e81;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      *(undefined8 *)(puVar20 + -8) = 0x14a903e8e;
      this_01 = FThreadStatsPool::Get();
      *(undefined8 *)(puVar20 + -8) = 0x14a903e96;
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_1f8.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_1f8.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      *(undefined8 *)(puVar20 + -8) = 0x14a903ec1;
      QueryPerformanceCounter(&local_200);
      local_1f8.StatData.Pad[4] = '\0';
      local_1f8.StatData.Pad[5] = '\0';
      local_1f8.StatData.Pad[6] = '\0';
      local_1f8.StatData.Pad[7] = '\0';
      local_1f8.StatData.Pad[0] = local_200.s.LowPart._0_1_;
      local_1f8.StatData.Pad[1] = local_200.s.LowPart._1_1_;
      local_1f8.StatData.Pad[2] = local_200.s.LowPart._2_1_;
      local_1f8.StatData.Pad[3] = local_200.s.LowPart._3_1_;
      *(undefined8 *)(puVar20 + -8) = 0x14a903ed4;
      FThreadStats::AddStatMessage(this_00,&local_1f8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined8 *)(puVar20 + -8) = 0x14a903ee7;
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        *(undefined8 *)(puVar20 + -8) = 0x14a903eff;
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  *(undefined8 *)(puVar20 + -8) = 0x14a903f11;
  return __return_storage_ptr__;
}

// PruneDuplicatePCAValues @ 14a903fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::PoseSearch::FSearchIndex::PruneDuplicatePCAValues(FSearchIndex *this,float param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  byte bVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  ulonglong uVar19;
  TKeyInitializer<int_const_&> *pTVar20;
  ForElementType<unsigned_int> FVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  undefined1 auStackY_2d8 [32];
  undefined1 local_288;
  undefined1 local_287;
  FIdentityFunctor local_286 [6];
  ForAnyElementType local_280;
  undefined8 local_278;
  uint local_270 [2];
  ForAnyElementType local_268;
  int local_260 [3];
  int local_254;
  int local_250;
  uint uStack_24c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_248;
  undefined4 local_240;
  uint uStack_23c;
  int iStack_238;
  undefined4 uStack_234;
  FSparsePoseMultiMap<int> local_230;
  TArray<UE::PoseSearch::FPosePairSimilarity,TSizedDefaultAllocator<32>_> local_210;
  undefined4 local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  ForAnyElementType *local_1f0;
  ForAnyElementType *local_1e8;
  int *local_1e0;
  FSearchIndex *local_1d8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_1d0;
  longlong *local_1c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1c0;
  longlong *local_1a0;
  int iStack_198;
  uint uStack_194;
  TBitArray<FDefaultBitArrayAllocator> *local_190;
  undefined4 uStack_188;
  uint uStack_184;
  int local_180;
  undefined4 uStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  longlong *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  FSearchIndex *local_140;
  ForAnyElementType *local_138;
  code *local_130;
  FSearchIndex **local_128;
  code *local_120;
  ForAnyElementType **local_118;
  code *local_110;
  ForAnyElementType **local_108;
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
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  uVar15 = 0;
  local_1d0 = &(this->PCAValuesVectorToPoseIndexes).DataValues;
  (this->PCAValuesVectorToPoseIndexes).MaxKey = 0;
  (this->PCAValuesVectorToPoseIndexes).MaxValue = 0;
  (this->PCAValuesVectorToPoseIndexes).DeltaKeyValue = 0;
  iVar6 = (this->PCAValuesVectorToPoseIndexes).DataValues.ArrayMax;
  (this->PCAValuesVectorToPoseIndexes).DataValues.ArrayNum = 0;
  local_1d8 = this;
  if (iVar6 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_1d0->AllocatorInstance,0,
               &(this->PCAValuesVectorToPoseIndexes).DataValues.ArrayMax);
  }
  uVar2 = (uint)this->_padding_;
  if (param_1 <= 0.0) {
    return;
  }
  if (uVar2 < 2) {
    return;
  }
  if (param_2 < 1) {
    return;
  }
  iVar6 = (this->PCAValues).ArrayNum;
  if (iVar6 == 0) {
    return;
  }
  if ((iVar6 % param_2 != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PCAValues.Num() % NumberOfPrincipalComponents == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.cpp"
                         ,0x329,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((this->PCAValues).ArrayNum / param_2 != uVar2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumPCAValuesVectors == NumPoses",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.cpp"
                         ,0x32c,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_268.Data = (FScriptContainerElement *)0x0;
  local_260[0] = 0;
  local_260[1] = 0;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,uVar2,&local_268,local_260,local_260 + 1);
  uVar18 = uVar15;
  do {
    uVar11 = 0;
    if ((int)uVar15 < local_260[0]) {
      uVar11 = ~uVar15 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar9 = (longlong)(int)uVar15;
    uVar15 = uVar15 + 1;
    *(uint *)(local_268.Data + lVar9 * 4) = uVar18;
    uVar18 = uVar18 + param_2;
  } while (uVar15 < uVar2);
  local_138 = &local_268;
  local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128 = &local_140;
  local_210.ArrayNum = 0;
  local_210.ArrayMax = 0;
  local_130 = Core::Private::Function::
              TFunctionRefCaller<`UE::PoseSearch::FSearchIndex::PruneDuplicatePCAValues'::__l22::<lambda_1>,TArrayView<float_const_,int>,int,int>
              ::Call;
  local_140 = this;
  bVar5 = CalculateSimilarities
                    (&local_210,param_1,param_2,uVar2,&this->PCAValues,
                     (TFunctionRef<TArrayView<float_const_,int>___cdecl(int,int)> *)&local_130);
  if (!bVar5) goto LAB_14a904d7d;
  local_1f0 = &local_268;
  local_118 = &local_1f0;
  local_120 = Core::Private::Function::
              TFunctionRefCaller<`UE::PoseSearch::FSearchIndex::PruneDuplicatePCAValues'::__l25::<lambda_3>,void,int,unsigned_int>
              ::Call;
  local_1e8 = &local_268;
  local_108 = &local_1e8;
  local_110 = Core::Private::Function::
              TFunctionRefCaller<`UE::PoseSearch::FSearchIndex::PruneDuplicatePCAValues'::__l25::<lambda_2>,unsigned_int,int>
              ::Call;
  bVar5 = PruneValues(param_2,uVar2,&local_210,&this->PCAValues,
                      (TFunctionRef<unsigned_int___cdecl(int)> *)&local_110,
                      (TFunctionRef<void___cdecl(int,unsigned_int)> *)&local_120);
  if (!bVar5) goto LAB_14a904d7d;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (ForElementType<unsigned_int>)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = -1;
  local_74 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar2);
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_a8,uVar2);
  uVar15 = 1;
  uVar18 = 1;
  if (3 < uVar2) {
    uVar12 = (ulonglong)((uVar2 >> 1) + 7) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_200 = (undefined4)lVar9;
    uVar18 = 1 << ((byte)lVar9 & 0x1f);
  }
  if ((local_60 == 0) || ((int)local_60 < (int)uVar18)) {
    local_60 = uVar18;
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
    }
    if (uVar18 != 0) {
      uVar11 = uVar18;
      if (uVar18 < 2) {
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          uVar11 = 0;
          goto LAB_14a904367;
        }
      }
      else {
LAB_14a904367:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar11,4);
      }
      if (0 < (int)uVar18) {
        uVar12 = 0;
        uVar19 = (ulonglong)uVar18;
        do {
          FVar17.Data = local_70;
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            FVar17.Data = local_68.Data;
          }
          uVar7 = (longlong)(int)uVar18 - 1U & uVar12;
          uVar12 = uVar12 + 1;
          *(undefined4 *)(FVar17.Data + uVar7 * 4) = 0xffffffff;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
    }
    if (local_60 != 0) {
      pTStack_248 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
      uStack_24c = 1;
      local_250 = 0;
      uStack_23c = 0;
      iStack_238 = 0;
      if (local_80 != 0) {
        FVar21 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
        if (local_88 != (ForElementType<unsigned_int>)0x0) {
          FVar21 = local_88;
        }
        uVar18 = *(uint *)FVar21;
        iStack_238 = 0;
        local_250 = 0;
        while (uVar18 == 0) {
          iStack_238 = iStack_238 + 0x20;
          lVar9 = (longlong)local_250;
          local_250 = local_250 + 1;
          if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < local_250)
          goto LAB_14a90446b;
          uVar18 = ((uint *)((longlong)FVar21 + 4))[lVar9];
        }
        uStack_24c = -uVar18 & uVar18;
        uVar12 = (ulonglong)uStack_24c * 2 + 1;
        lVar9 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_1fc = (int)lVar9;
        uStack_23c = local_1fc + -1 + iStack_238;
        if ((int)local_80 < (int)uStack_23c) {
LAB_14a90446b:
          uStack_23c = local_80;
        }
      }
      local_240 = 0xffffffff;
      local_1c8 = (longlong *)local_a8;
      local_1c0._padding_ = CONCAT44(uStack_24c,local_250);
      local_1c0.CurrentBitIndex = uStack_23c;
      local_1c0.UnvisitedBitMask = 0xffffffff;
      local_1c0._28_4_ = uStack_234;
      local_1c0.BaseBitIndex = iStack_238;
      uVar18 = uStack_23c;
      local_1c0.Array = pTStack_248;
      if ((int)uStack_23c < (int)local_80) {
        do {
          lVar9 = *local_1c8;
          lVar22 = (longlong)(int)uVar18 * 0x20;
          uVar11 = local_60 - 1 & *(uint *)(lVar22 + lVar9);
          *(uint *)(lVar22 + 0x1c + lVar9) = uVar11;
          FVar17.Data = local_70;
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            FVar17.Data = local_68.Data;
          }
          uVar12 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar11;
          *(undefined4 *)(lVar22 + 0x18 + lVar9) = *(undefined4 *)(FVar17.Data + uVar12 * 4);
          *(uint *)(FVar17.Data + uVar12 * 4) = uVar18;
          local_1c0.UnvisitedBitMask = local_1c0.UnvisitedBitMask & ~local_1c0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1c0);
          uVar18 = local_1c0.CurrentBitIndex;
        } while (local_1c0.CurrentBitIndex < (local_1c0.Array)->NumBits);
      }
    }
  }
  uVar18 = 0;
  do {
    uVar11 = 0;
    if ((int)uVar18 < local_260[0]) {
      uVar11 = ~uVar18 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(int *)(local_268.Data + (longlong)(int)uVar18 * 4) % param_2 != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PoseToPCAValueOffset[PoseIdx] % NumberOfPrincipalComponents == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.cpp"
                           ,0x342,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar11 = 0;
    if ((int)uVar18 < local_260[0]) {
      uVar11 = ~uVar18 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar20 = (TKeyInitializer<int_const_&> *)
              ((longlong)*(int *)(local_268.Data + (longlong)(int)uVar18 * 4) / (longlong)param_2 &
              0xffffffff);
    local_260[2] = (int)((longlong)*(int *)(local_268.Data + (longlong)(int)uVar18 * 4) /
                        (longlong)param_2);
    if (local_a8._8_4_ != local_74) {
      FVar17.Data = local_70;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FVar17.Data = local_68.Data;
      }
      iVar6 = *(int *)(FVar17.Data + ((ulonglong)(local_60 - 1) & (ulonglong)pTVar20) * 4);
      while (iVar6 != -1) {
        pFVar13 = (FScriptContainerElement *)(local_a8._0_8_ + (longlong)iVar6 * 0x20);
        if (*(int *)pFVar13 == local_260[2]) {
          if (pFVar13 != (FScriptContainerElement *)0x0) goto LAB_14a904692;
          break;
        }
        iVar6 = *(int *)(pFVar13 + 0x18);
      }
    }
    local_1e0 = local_260 + 2;
    TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<int_const_&>_>
              ((TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)local_a8,(uint)&local_254,pTVar20,(bool *)&local_1e0);
    pFVar13 = (FScriptContainerElement *)(local_a8._0_8_ + (longlong)local_254 * 0x20);
LAB_14a904692:
    puVar10 = *(uint **)(pFVar13 + 8);
    pFVar23 = pFVar13 + 8;
    puVar1 = puVar10 + *(int *)(pFVar13 + 0x10);
    for (; puVar10 != puVar1; puVar10 = puVar10 + 1) {
      if (*puVar10 == uVar18) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!PoseIndexes.Contains(PoseIdx)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.cpp"
                           ,0x345,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        break;
      }
    }
                    /* WARNING: Load size is inaccurate */
    local_270[0] = uVar18;
    if (((*pFVar23 <= (FScriptContainerElement *)local_270) &&
        ((FScriptContainerElement *)local_270 < *pFVar23 + (longlong)*(int *)(pFVar13 + 0x14) * 4))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = *(int *)(pFVar13 + 0x10);
    if (iVar6 == *(int *)(pFVar13 + 0x14)) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)pFVar23,(int *)(pFVar13 + 0x14));
    }
    uVar18 = uVar18 + 1;
    *(int *)(pFVar13 + 0x10) = iVar6 + 1;
                    /* WARNING: Load size is inaccurate */
    *(uint *)(*pFVar23 + (longlong)iVar6 * 4) = local_270[0];
  } while (uVar18 < uVar2);
  uVar18 = local_a8._8_4_ - local_74;
  local_280.Data = (FScriptContainerElement *)0x0;
  local_278 = 0;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (0 < (int)uVar18) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar18,&local_280,0,(int *)((longlong)&local_278 + 4));
  }
  uVar18 = local_80;
  iStack_198 = 0;
  local_180 = 0;
  uStack_184 = 0;
  if (local_80 != 0) {
    FVar21 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
    if (local_88 != (ForElementType<unsigned_int>)0x0) {
      FVar21 = local_88;
    }
    uVar11 = *(uint *)FVar21;
    while (uVar11 == 0) {
      lVar9 = (longlong)iStack_198;
      local_180 = local_180 + 0x20;
      iStack_198 = iStack_198 + 1;
      uStack_184 = local_80;
      if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_198)
      goto LAB_14a904861;
      uVar11 = ((uint *)((longlong)FVar21 + 4))[lVar9];
    }
    uVar15 = -uVar11 & uVar11;
    uVar12 = (ulonglong)uVar15 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_1f8 = (int)lVar9;
    uStack_184 = local_180 + -1 + local_1f8;
    if ((int)local_80 < (int)uStack_184) {
      uStack_184 = local_80;
    }
  }
LAB_14a904861:
  iStack_178 = local_a8._8_4_ - local_74;
  local_1a0 = (longlong *)local_a8;
  local_190 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
  uStack_188 = 0xffffffff;
  TStack_168.CurrentBitIndex = uStack_184;
  TStack_168.UnvisitedBitMask = 0xffffffff;
  uVar11 = local_80 & 0xffffffe0;
  TStack_168._padding_ = CONCAT44(uVar15,iStack_198);
  uStack_17c = local_ac;
  iVar6 = (int)local_80 >> 5;
  TStack_168._28_4_ = local_ac;
  TStack_168.BaseBitIndex = local_180;
  uStack_148 = CONCAT44(uStack_174,iStack_178);
  bVar8 = (byte)local_80;
  uStack_194 = uVar15;
  local_170 = local_1a0;
  TStack_168.Array = local_190;
  if (((int)local_80 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (uVar18 != local_80) {
    FVar21 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
    if (local_88 != (ForElementType<unsigned_int>)0x0) {
      FVar21 = local_88;
    }
    uVar15 = -1 << (bVar8 & 0x1f) & *(uint *)((longlong)FVar21 + (longlong)iVar6 * 4);
    while (uVar15 == 0) {
      lVar9 = (longlong)iVar6;
      uVar11 = uVar11 + 0x20;
      iVar6 = iVar6 + 1;
      uVar18 = local_80;
      if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar6)
      goto LAB_14a904980;
      uVar15 = ((uint *)((longlong)FVar21 + 4))[lVar9];
    }
    uVar12 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_1f4 = (int)lVar9;
    uVar18 = (uVar11 - 1) + local_1f4;
    if ((int)local_80 < (int)uVar18) {
      uVar18 = local_80;
    }
  }
LAB_14a904980:
  while( true ) {
    plVar4 = local_170;
    if ((int)local_170[1] - *(int *)((longlong)local_170 + 0x34) != (int)uStack_148) {
      local_288 = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_288);
    }
    if (((TStack_168.CurrentBitIndex == uVar18) &&
        (TStack_168.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10))) &&
       (plVar4 == (longlong *)local_a8)) break;
    pFVar13 = (FScriptContainerElement *)(*plVar4 + (longlong)TStack_168.CurrentBitIndex * 0x20);
    if (((local_280.Data <= pFVar13) && (pFVar13 < local_280.Data + (longlong)local_278._4_4_ * 4))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((int)local_278 == local_278._4_4_) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_280,(int *)((longlong)&local_278 + 4));
      local_278 = CONCAT44(local_278._4_4_,iVar6);
    }
    lVar9 = (longlong)(int)local_278;
    local_278 = CONCAT44(local_278._4_4_,(int)local_278 + 1);
    *(uint *)(local_280.Data + lVar9 * 4) = *(uint *)pFVar13;
    TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
  }
  AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
            ((int *)local_280.Data,(int)local_278,local_286[0],(TLess<void> *)local_286);
  pFVar23 = (FScriptContainerElement *)0x0;
  local_230.MaxKey = 0;
  local_230.MaxValue = 0;
  local_230.DeltaKeyValue = 0;
  local_230.DataValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_230.DataValues.ArrayNum = 0;
  local_230.DataValues.ArrayMax = 0;
  FSparsePoseMultiMap<int>::Init(&local_230,local_a8._8_4_ - local_74,uVar2 - 1);
  iVar6 = (int)local_278;
  uVar12 = (ulonglong)(int)local_278;
  pFVar13 = local_280.Data + uVar12 * 4;
  FVar17.Data = local_280.Data;
  while( true ) {
    if ((int)uVar12 != iVar6) {
      local_287 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_287);
    }
    if (FVar17.Data == pFVar13) break;
    uVar15 = *(uint *)FVar17.Data;
    pFVar16 = pFVar23;
    if (local_a8._8_4_ != local_74) {
      FVar14.Data = local_70;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FVar14.Data = local_68.Data;
      }
      uVar2 = *(uint *)(FVar14.Data + (ulonglong)(local_60 - 1 & uVar15) * 4);
      while (pFVar16 = pFVar23, uVar2 != 0xffffffff) {
        pFVar16 = (FScriptContainerElement *)(local_a8._0_8_ + (longlong)(int)uVar2 * 0x20);
        if (*(uint *)pFVar16 == uVar15) {
          if (pFVar16 != (FScriptContainerElement *)0x0) goto LAB_14a904b93;
          break;
        }
        uVar2 = *(uint *)(pFVar16 + 0x18);
      }
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_14a904b93:
    local_f8 = *(int **)(pFVar16 + 8);
    uVar2 = *(uint *)(pFVar16 + 0x10);
    if (((int)uVar2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_d8[0]._12_4_ = uStack_ec;
    local_d8[0].ArrayNum = uVar2;
    local_d8[0].DataPtr = local_f8;
    uStack_f0 = uVar2;
    FSparsePoseMultiMap<int>::Insert(&local_230,uVar15,local_d8);
    uVar12 = local_278 & 0xffffffff;
    FVar17.Data = FVar17.Data + 4;
  }
  pFVar13 = pFVar23;
  if (0 < local_230.MaxKey) {
    do {
      uVar15 = (uint)pFVar13;
      FSparsePoseMultiMap<int>::operator[](&local_230,&local_e8,uVar15);
      pFVar16 = pFVar23;
      if (local_a8._8_4_ != local_74) {
        FVar17.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar17.Data = local_68.Data;
        }
        uVar2 = *(uint *)(FVar17.Data + ((ulonglong)(local_60 - 1) & (ulonglong)pFVar13) * 4);
        while (pFVar16 = pFVar23, uVar2 != 0xffffffff) {
          pFVar16 = (FScriptContainerElement *)(local_a8._0_8_ + (longlong)(int)uVar2 * 0x20);
          if (*(uint *)pFVar16 == uVar15) {
            if (pFVar16 != (FScriptContainerElement *)0x0) goto LAB_14a904cb5;
            break;
          }
          uVar2 = *(uint *)(pFVar16 + 0x18);
        }
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
LAB_14a904cb5:
      uVar2 = *(uint *)(pFVar16 + 0x10);
      if (((uVar2 != local_e8.ArrayNum) ||
          ((uVar2 != 0 &&
           (iVar6 = memcmp(local_e8.DataPtr,*(void **)(pFVar16 + 8),(longlong)(int)uVar2 << 2),
           iVar6 != 0)))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("PoseIndexes == TestPoseIndexes",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.cpp"
                             ,0x35f,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar13 = (FScriptContainerElement *)(ulonglong)(uVar15 + 1);
    } while ((int)(uVar15 + 1) < local_230.MaxKey);
  }
  (local_1d8->PCAValuesVectorToPoseIndexes).MaxKey = local_230.MaxKey;
  (local_1d8->PCAValuesVectorToPoseIndexes).MaxValue = local_230.MaxValue;
  (local_1d8->PCAValuesVectorToPoseIndexes).DeltaKeyValue = local_230.DeltaKeyValue;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(local_1d0,&local_230.DataValues);
  if (local_230.DataValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.DataValues.AllocatorInstance.Data);
  }
  if (local_280.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.Data);
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
LAB_14a904d7d:
  if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.AllocatorInstance.Data);
  }
  if (local_268.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data);
  }
  return;
}

// PrunePCAValuesFromBlockTransitionPoses @ 14a905a00

void __thiscall
UE::PoseSearch::FSearchIndex::PrunePCAValuesFromBlockTransitionPoses(FSearchIndex *this,int param_1)

{
  int *piVar1;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar2;
  uint *puVar3;
  FScriptContainerElement *pFVar4;
  TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar5;
  int iVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  TArrayView<float_const_,int> *pTVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  ulonglong uVar17;
  uint uVar18;
  uint *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  ForAnyElementType local_b8;
  uint local_b0;
  uint local_ac;
  uint local_a8 [2];
  ForAnyElementType local_a0;
  undefined8 local_98;
  ForAnyElementType local_90;
  int local_88;
  int local_84;
  TArrayView<int_const_,int> local_80;
  int *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<int_const_,int> local_58;
  TArrayView<float_const_,int> local_48;
  TArrayView<float_const_,int> local_38;
  
  if ((char)this->_padding_ != '\0') {
    if (((this->PCAValues).ArrayNum % param_1 != 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("PCAValues.Num() % NumberOfPrincipalComponents == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.cpp"
                           ,0x2f2,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar11 = (this->PCAValues).ArrayNum;
    local_a0.Data = (FScriptContainerElement *)0x0;
    local_98 = 0;
    iVar10 = (int)uVar11 / param_1;
    local_90.Data = (FScriptContainerElement *)0x0;
    lVar21 = (longlong)iVar10;
    local_88 = 0;
    local_84 = 0;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    if (0 < (int)uVar11) {
      Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar11,&local_90,0,&local_84);
    }
    uVar17 = 0;
    if ((this->PCAValuesVectorToPoseIndexes).MaxKey < 1) {
      uVar20 = uVar17;
      iVar13 = local_88;
      if (0 < iVar10) {
        do {
          uVar18 = (uint)uVar20;
          uVar11 = 0;
          if ((int)uVar18 < (int)this->_padding_) {
            uVar11 = ~uVar18 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((*(byte *)(uVar17 + 8 + this->_padding_) & 1) == 0) {
            iVar10 = (int)local_98;
            iVar13 = (int)local_98;
            if ((int)local_98 == local_98._4_4_) {
              iVar13 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&local_a0,(int *)((longlong)&local_98 + 4));
            }
            local_98 = CONCAT44(local_98._4_4_,iVar13 + 1);
            lVar15 = (longlong)iVar13;
            *(int *)(local_a0.Data + lVar15 * 0x18) = iVar10;
            pFVar4 = local_a0.Data + lVar15 * 0x18 + 8;
            *(FScriptContainerElement **)pFVar4 = (FScriptContainerElement *)0x0;
            *(undefined4 *)(pFVar4 + 8) = 1;
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,1,0,(ForAnyElementType *)pFVar4,1,
                       (int *)(local_a0.Data + lVar15 * 0x18 + 0x14));
                    /* WARNING: Load size is inaccurate */
            *(uint *)*pFVar4 = uVar18;
            pTVar14 = GetPCAPoseValues(this,&local_38,uVar18);
            iVar10 = pTVar14->ArrayNum;
            if (iVar10 < 0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x9a9,L"Invalid range size: %lld");
              if (bVar9) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            else if (iVar10 == 0) goto LAB_14a905f2d;
            iVar13 = Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                               (4,4,iVar10,&local_90,&local_88,&local_84);
            memcpy(local_90.Data + (longlong)iVar13 * 4,pTVar14->DataPtr,(longlong)iVar10 << 2);
          }
LAB_14a905f2d:
          uVar20 = (ulonglong)(uVar18 + 1);
          uVar17 = uVar17 + 0xc;
          lVar21 = lVar21 + -1;
          iVar13 = local_88;
        } while (lVar21 != 0);
      }
    }
    else {
      local_b0 = 0;
      local_b8.Data = (FScriptContainerElement *)0x0;
      local_ac = 0;
      uVar20 = uVar17;
      if (0 < iVar10) {
        do {
          local_b0 = 0;
          if (((int)uVar17 < 0) && ((int)uVar17 != 0)) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,&local_b8,0,(int *)&local_ac);
          }
          iVar13 = (int)uVar20;
          FSparsePoseMultiMap<int>::operator[](&this->PCAValuesVectorToPoseIndexes,&local_80,iVar13)
          ;
          puVar3 = (uint *)(local_80.DataPtr + local_80.ArrayNum);
          uVar8 = local_98;
          for (puVar19 = (uint *)local_80.DataPtr; local_98 = uVar8, puVar19 != puVar3;
              puVar19 = puVar19 + 1) {
            local_a8[0] = *puVar19;
            lVar21 = (longlong)(int)local_a8[0];
            uVar11 = 0;
            if ((int)local_a8[0] < (int)this->_padding_) {
              uVar11 = ~local_a8[0] >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if ((*(byte *)(this->_padding_ + 8 + lVar21 * 0xc) & 1) == 0) {
              if (((local_b8.Data <= (FScriptContainerElement *)local_a8) &&
                  ((FScriptContainerElement *)local_a8 < local_b8.Data + (longlong)(int)local_ac * 4
                  )) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar9)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if (local_b0 == local_ac) {
                local_b0 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_b8,(int *)&local_ac);
              }
              *(uint *)(local_b8.Data + (longlong)(int)local_b0 * 4) = local_a8[0];
              local_b0 = local_b0 + 1;
            }
            uVar8 = local_98;
          }
          if (local_b0 != 0) {
            local_98._0_4_ = (int)uVar8;
            iVar6 = (int)local_98;
            local_98._4_4_ = (int)((ulonglong)uVar8 >> 0x20);
            bVar9 = (int)local_98 == local_98._4_4_;
            iVar12 = (int)local_98;
            if (bVar9) {
              iVar12 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&local_a0,(int *)((longlong)&local_98 + 4));
            }
            FVar16.Data = local_b8.Data;
            local_98 = CONCAT44(local_98._4_4_,iVar12 + 1);
            lVar21 = (longlong)iVar12;
            *(int *)(local_a0.Data + lVar21 * 0x18) = iVar6;
            *(undefined8 *)(local_a0.Data + lVar21 * 0x18 + 8) = 0;
            pFVar4 = local_a0.Data + lVar21 * 0x18 + 8;
            lVar15 = (longlong)(int)local_b0;
            *(uint *)(pFVar4 + 8) = local_b0;
            if (local_b0 == 0) {
              *(int *)(local_a0.Data + lVar21 * 0x18 + 0x14) = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,local_b0,0,(ForAnyElementType *)pFVar4,local_b0,
                         (int *)(local_a0.Data + lVar21 * 0x18 + 0x14));
                    /* WARNING: Load size is inaccurate */
              memcpy(*pFVar4,FVar16.Data,lVar15 << 2);
            }
            pTVar14 = GetPCAPoseValues(this,&local_48,iVar13);
            iVar6 = pTVar14->ArrayNum;
            if (iVar6 < 0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x9a9,L"Invalid range size: %lld");
              if (bVar9) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            else if (iVar6 == 0) goto LAB_14a905d84;
            iVar12 = Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                               (4,4,iVar6,&local_90,&local_88,&local_84);
            memcpy(local_90.Data + (longlong)iVar12 * 4,pTVar14->DataPtr,(longlong)iVar6 << 2);
          }
LAB_14a905d84:
          uVar20 = (ulonglong)(iVar13 + 1U);
          if (iVar10 <= (int)(iVar13 + 1U)) break;
          uVar17 = (ulonglong)local_ac;
        } while( true );
      }
      iVar13 = local_88;
      if (local_b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data);
      }
    }
    pTVar2 = &this->PCAValues;
    if (pTVar2 != (TArray<float,TAlignedHeapAllocator<16>_> *)&local_90) {
      iVar10 = (this->PCAValues).ArrayMax;
      piVar1 = &(this->PCAValues).ArrayMax;
      (this->PCAValues).ArrayNum = iVar13;
      if ((iVar13 == 0) && (iVar10 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,iVar13,iVar10,&pTVar2->AllocatorInstance,iVar13,piVar1);
        if (iVar13 != 0) {
          memcpy((pTVar2->AllocatorInstance).Data,local_90.Data,(longlong)iVar13 << 2);
        }
      }
    }
    FVar16.Data = local_a0.Data;
    iVar10 = (int)local_98;
    lVar15 = (longlong)(int)local_98;
    lVar21 = this->_padding_;
    if (((int)local_98 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FSparsePoseMultiMap<int>::Init(&this->PCAValuesVectorToPoseIndexes,iVar10,(int)lVar21 + -1);
    pTVar5 = (TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_> *)(FVar16.Data + lVar15 * 0x18);
    for (; (TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_> *)FVar16.Data != pTVar5;
        FVar16.Data = FVar16.Data + 0x18) {
      local_68 = *(int **)&((TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_> *)FVar16.Data)->
                           field_0x8;
      iVar10 = *(int *)&((TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_> *)FVar16.Data)->
                        field_0x10;
      if ((iVar10 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_58._12_4_ = uStack_5c;
      local_58.ArrayNum = iVar10;
      local_58.DataPtr = local_68;
      iStack_60 = iVar10;
      FSparsePoseMultiMap<int>::Insert
                (&this->PCAValuesVectorToPoseIndexes,*(int *)FVar16.Data,&local_58);
    }
    if (local_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data);
    }
    DestructItems<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
              ((TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_> *)local_a0.Data,(int)local_98);
    if ((TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_> *)local_a0.Data !=
        (TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      FMemory::Free(local_a0.Data);
    }
  }
  return;
}

// Reset @ 14a907350

void __thiscall UE::PoseSearch::FSearchIndex::Reset(FSearchIndex *this)

{
  FSearchIndex local_118;
  
  local_118._padding_._0_4_ = 0xff7fffff;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._108_8_ = 0;
  local_118._116_8_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_._0_1_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118.WeightsSqrt.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.WeightsSqrt.ArrayNum = 0;
  local_118.WeightsSqrt.ArrayMax = 0;
  local_118.PCAValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.PCAValues.ArrayNum = 0;
  local_118.PCAValues.ArrayMax = 0;
  local_118.PCAValuesVectorToPoseIndexes.MaxKey = 0;
  local_118.PCAValuesVectorToPoseIndexes.MaxValue = 0;
  local_118.PCAValuesVectorToPoseIndexes.DeltaKeyValue = 0;
  local_118.PCAValuesVectorToPoseIndexes.DataValues.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_118.PCAValuesVectorToPoseIndexes.DataValues.ArrayNum = 0;
  local_118.PCAValuesVectorToPoseIndexes.DataValues.ArrayMax = 0;
  local_118.PCAProjectionMatrix.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.PCAProjectionMatrix.ArrayNum = 0;
  local_118.PCAProjectionMatrix.ArrayMax = 0;
  local_118.Mean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Mean.ArrayNum = 0;
  local_118.Mean.ArrayMax = 0;
  FKDTree::FKDTree(&local_118.KDTree);
  local_118.VPTree.Nodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.VPTree.Nodes.ArrayNum = 0;
  local_118.VPTree.Nodes.ArrayMax = 0;
  local_118.PCAExplainedVariance = 0.0;
  if (this != &local_118) {
    ~FSearchIndex(this);
    FSearchIndex(this,&local_118);
  }
  if (local_118.VPTree.Nodes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.VPTree.Nodes.AllocatorInstance.Data);
  }
  FKDTree::~FKDTree(&local_118.KDTree);
  if (local_118.Mean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Mean.AllocatorInstance.Data);
  }
  if (local_118.PCAProjectionMatrix.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.PCAProjectionMatrix.AllocatorInstance.Data);
  }
  if (local_118.PCAValuesVectorToPoseIndexes.DataValues.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.PCAValuesVectorToPoseIndexes.DataValues.AllocatorInstance.Data);
  }
  if (local_118.PCAValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.PCAValues.AllocatorInstance.Data);
  }
  if (local_118.WeightsSqrt.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.WeightsSqrt.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
            ((TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_> *)local_118._padding_,
             (int)local_118._padding_);
  if ((TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_> *)local_118._padding_ !=
      (TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  return;
}

