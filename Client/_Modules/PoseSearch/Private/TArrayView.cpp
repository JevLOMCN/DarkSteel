// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 17

// TArrayView<float,int><TArray<float,TMemStackAllocator<16>_>_&,TArray<float,TMemStackAllocator<16>_>_> @ 14a89f910

TArrayView<float,int> * __thiscall
TArrayView<float,int>::
TArrayView<float,int><TArray<float,TMemStackAllocator<16>_>_&,TArray<float,TMemStackAllocator<16>_>_>
          (TArrayView<float,int> *this,TArray<float,TMemStackAllocator<16>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float,int> *pTVar4;
  
  this->DataPtr = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    this->ArrayNum = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<float,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FPoseSearchInteractionAvailability_const_,int><TArray<FPoseSearchInteractionAvailability,TSizedDefaultAllocator<32>_>_&,TArray<FPoseSearchInteractionAvailability,TSizedDefaultAllocator<32>_>_> @ 14a89f980

TArrayView<FPoseSearchInteractionAvailability_const_,int> * __thiscall
TArrayView<FPoseSearchInteractionAvailability_const_,int>::
TArrayView<FPoseSearchInteractionAvailability_const_,int><TArray<FPoseSearchInteractionAvailability,TSizedDefaultAllocator<32>_>_&,TArray<FPoseSearchInteractionAvailability,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FPoseSearchInteractionAvailability_const_,int> *this,
          TArray<FPoseSearchInteractionAvailability,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FPoseSearchInteractionAvailability_const_,int> *pTVar4;
  
  this->DataPtr = (FPoseSearchInteractionAvailability *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    this->ArrayNum = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FPoseSearchInteractionAvailability_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<UObject_const_*_const,int><TArray<UObject_const_*,TSizedDefaultAllocator<32>_>_const_&,TArray<UObject_const_*,TSizedDefaultAllocator<32>_>_> @ 14a89f9f0

TArrayView<UObject_const_*_const,int> * __thiscall
TArrayView<UObject_const_*_const,int>::
TArrayView<UObject_const_*_const,int><TArray<UObject_const_*,TSizedDefaultAllocator<32>_>_const_&,TArray<UObject_const_*,TSizedDefaultAllocator<32>_>_>
          (TArrayView<UObject_const_*_const,int> *this,
          TArray<UObject_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UObject_const_*_const,int> *pTVar4;
  
  this->DataPtr = (UObject **)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    this->ArrayNum = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UObject_const_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 14a8af770

FBoneReference * __thiscall
TArrayView<FBoneReference_const_,int>::operator[]
          (TArrayView<FBoneReference_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FBoneReference *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBoneReference *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14a8af7f0

FChooserEvaluationContext ** __thiscall
TArrayView<FChooserEvaluationContext_*_const,int>::operator[]
          (TArrayView<FChooserEvaluationContext_*_const,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FChooserEvaluationContext **ppFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      ppFVar4 = (FChooserEvaluationContext **)(*pcVar1)();
      return ppFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14a8af870

IPoseHistory ** __thiscall
TArrayView<UE::PoseSearch::IPoseHistory_const_*_const,int>::operator[]
          (TArrayView<UE::PoseSearch::IPoseHistory_const_*_const,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  IPoseHistory **ppIVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      ppIVar4 = (IPoseHistory **)(*pcVar1)();
      return ppIVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14a8af8f0

FResult * __thiscall
TArrayView<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult,int>::operator[]
          (TArrayView<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FResult *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FResult *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// Slice @ 14a8ce100

TArrayView<int_const_,int> * __thiscall
TArrayView<int_const_,int>::Slice
          (TArrayView<int_const_,int> *this,TArrayView<int_const_,int> *__return_storage_ptr__,
          int param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<int_const_,int> *pTVar4;
  
  if (param_1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15b,L"Invalid index (%lld)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<int_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15c,L"Invalid count (%lld)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<int_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (this->ArrayNum < param_1 + param_2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index + InNum <= ArrayNum",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15d,
                       L"Range (index: %lld, count: %lld) lies outside the view of %lld elements");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<int_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  piVar1 = this->DataPtr;
  __return_storage_ptr__->ArrayNum = param_2;
  __return_storage_ptr__->DataPtr = piVar1 + param_1;
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<int_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// TArrayView<float,int><TArray<float,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_&,TArray<float,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_> @ 14a8d7ac0

TArrayView<float,int> * __thiscall
TArrayView<float,int>::
TArrayView<float,int><TArray<float,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_&,TArray<float,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
          (TArrayView<float,int> *this,
          TArray<float,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *param_1)

{
  int iVar1;
  ForElementType<float> FVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<float,int> *pTVar5;
  ForElementType<float> FVar6;
  
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  FVar6 = (ForElementType<float>)param_1;
  if (FVar2 != (ForElementType<float>)0x0) {
    FVar6 = FVar2;
  }
  this->DataPtr = (float *)FVar6;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<float,int> *)(*pcVar3)();
      return pTVar5;
    }
    this->ArrayNum = iVar1;
    return this;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<UE::Math::TTransform<double>_const_,int><TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_&,TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_> @ 14a8d7b40

TArrayView<UE::Math::TTransform<double>_const_,int> * __thiscall
TArrayView<UE::Math::TTransform<double>_const_,int>::
TArrayView<UE::Math::TTransform<double>_const_,int><TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_&,TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
          (TArrayView<UE::Math::TTransform<double>_const_,int> *this,
          TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int iVar1;
  ForElementType<UE::Math::TTransform<double>_> FVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<UE::Math::TTransform<double>_const_,int> *pTVar5;
  ForElementType<UE::Math::TTransform<double>_> FVar6;
  
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  FVar6 = (ForElementType<UE::Math::TTransform<double>_>)param_1;
  if (FVar2 != (ForElementType<UE::Math::TTransform<double>_>)0x0) {
    FVar6 = FVar2;
  }
  this->DataPtr = (TTransform<double> *)FVar6;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<UE::Math::TTransform<double>_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
    this->ArrayNum = iVar1;
    return this;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>_const_,int><TArray<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_&,TArray<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_> @ 14a8d7bc0

TArrayView<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>_const_,int> * __thiscall
TArrayView<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>_const_,int>::
TArrayView<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>_const_,int><TArray<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_&,TArray<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>
          (TArrayView<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>_const_,int> *this,
          TArray<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>_const_,int> *pTVar4;
  
  this->DataPtr =
       (TWeakObjectPtr<UActorComponent,FWeakObjectPtr> *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    this->ArrayNum = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 14a8e4de0

TObjectPtr<UPoseSearchFeatureChannel> * __thiscall
TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int>::operator[]
          (TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TObjectPtr<UPoseSearchFeatureChannel> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TObjectPtr<UPoseSearchFeatureChannel> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14a8e4e60

FInteractionSearchContext * __thiscall
TArrayView<UE::PoseSearch::FInteractionSearchContext_const_,int>::operator[]
          (TArrayView<UE::PoseSearch::FInteractionSearchContext_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FInteractionSearchContext *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FInteractionSearchContext *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14a8e4ee0

FSearchResult * __thiscall
TArrayView<UE::PoseSearch::FSearchResult_const_,int>::operator[]
          (TArrayView<UE::PoseSearch::FSearchResult_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSearchResult *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSearchResult *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// Slice @ 14a908bf0

TArrayView<float,int> * __thiscall
TArrayView<float,int>::Slice
          (TArrayView<float,int> *this,TArrayView<float,int> *__return_storage_ptr__,int param_1,
          int param_2)

{
  float *pfVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float,int> *pTVar4;
  
  if (param_1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15b,L"Invalid index (%lld)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15c,L"Invalid count (%lld)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (this->ArrayNum < param_1 + param_2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index + InNum <= ArrayNum",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15d,
                       L"Range (index: %lld, count: %lld) lies outside the view of %lld elements");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pfVar1 = this->DataPtr;
  __return_storage_ptr__->ArrayNum = param_2;
  __return_storage_ptr__->DataPtr = pfVar1 + param_1;
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// operator[] @ 14a91bfc0

TObjectPtr<UPoseSearchDatabase_const_> * __thiscall
TArrayView<TObjectPtr<UPoseSearchDatabase_const_>_const_,int>::operator[]
          (TArrayView<TObjectPtr<UPoseSearchDatabase_const_>_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TObjectPtr<UPoseSearchDatabase_const_> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TObjectPtr<UPoseSearchDatabase_const_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14a91c040

FChooserEvaluationContext ** __thiscall
TArrayView<FChooserEvaluationContext_*,int>::operator[]
          (TArrayView<FChooserEvaluationContext_*,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FChooserEvaluationContext **ppFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      ppFVar4 = (FChooserEvaluationContext **)(*pcVar1)();
      return ppFVar4;
    }
  }
  return this->DataPtr + param_1;
}

