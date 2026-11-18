// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 15

// TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int><TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_> @ 146593640

TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> * __thiscall
TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::
TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int><TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
          (TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> *this,
          TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int iVar1;
  ForElementType<UE::MovieScene::FMovieSceneEntityID> FVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> *pTVar5;
  ForElementType<UE::MovieScene::FMovieSceneEntityID> FVar6;
  
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  FVar6 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)param_1;
  if (FVar2 != (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
    FVar6 = FVar2;
  }
  this->DataPtr = (FMovieSceneEntityID *)FVar6;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
    this->ArrayNum = iVar1;
    return this;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 146623d10

FInterrogationParams * __thiscall
TArrayView<UE::MovieScene::FInterrogationParams_const_,int>::operator[]
          (TArrayView<UE::MovieScene::FInterrogationParams_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FInterrogationParams *pFVar4;
  
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
      pFVar4 = (FInterrogationParams *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 146623d90

FPropertyCompositeDefinition * __thiscall
TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>::operator[]
          (TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPropertyCompositeDefinition *pFVar4;
  
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
      pFVar4 = (FPropertyCompositeDefinition *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 146623e10

FFrameNumber * __thiscall
TArrayView<FFrameNumber,int>::operator[](TArrayView<FFrameNumber,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FFrameNumber *pFVar4;
  
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
      pFVar4 = (FFrameNumber *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 146623e90

FText * __thiscall TArrayView<FText,int>::operator[](TArrayView<FText,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FText *pFVar4;
  
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
      pFVar4 = (FText *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 146623f10

bool * __thiscall TArrayView<bool,int>::operator[](TArrayView<bool,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  bool *pbVar4;
  
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
      pbVar4 = (bool *)(*pcVar1)();
      return pbVar4;
    }
  }
  return this->DataPtr + param_1;
}

// Last @ 1466a5ea0

FPropertyDefinition * __thiscall
TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last
          (TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPropertyDefinition *pFVar4;
  uint uVar5;
  
  uVar5 = ~param_1 + this->ArrayNum;
  uVar3 = 0;
  if ((int)uVar5 < this->ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPropertyDefinition *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + ((this->ArrayNum - param_1) + -1);
}

// operator[] @ 14676c070

FMovieSceneEvent * __thiscall
TArrayView<FMovieSceneEvent_const_,int>::operator[]
          (TArrayView<FMovieSceneEvent_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMovieSceneEvent *pFVar4;
  
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
      pFVar4 = (FMovieSceneEvent *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14676c0f0

FMovieSceneObjectPathChannelKeyValue * __thiscall
TArrayView<FMovieSceneObjectPathChannelKeyValue,int>::operator[]
          (TArrayView<FMovieSceneObjectPathChannelKeyValue,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMovieSceneObjectPathChannelKeyValue *pFVar4;
  
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
      pFVar4 = (FMovieSceneObjectPathChannelKeyValue *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// TArrayView<UE::MovieScene::FActiveSkeletalAnimation_const_,int><TArray<UE::MovieScene::FActiveSkeletalAnimation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_const_&,TArray<UE::MovieScene::FActiveSkeletalAnimation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_> @ 1467cfa20

TArrayView<UE::MovieScene::FActiveSkeletalAnimation_const_,int> * __thiscall
TArrayView<UE::MovieScene::FActiveSkeletalAnimation_const_,int>::
TArrayView<UE::MovieScene::FActiveSkeletalAnimation_const_,int><TArray<UE::MovieScene::FActiveSkeletalAnimation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_const_&,TArray<UE::MovieScene::FActiveSkeletalAnimation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>
          (TArrayView<UE::MovieScene::FActiveSkeletalAnimation_const_,int> *this,
          TArray<UE::MovieScene::FActiveSkeletalAnimation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int iVar1;
  ForElementType<UE::MovieScene::FActiveSkeletalAnimation> FVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<UE::MovieScene::FActiveSkeletalAnimation_const_,int> *pTVar5;
  ForElementType<UE::MovieScene::FActiveSkeletalAnimation> FVar6;
  
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  FVar6 = (ForElementType<UE::MovieScene::FActiveSkeletalAnimation>)param_1;
  if (FVar2 != (ForElementType<UE::MovieScene::FActiveSkeletalAnimation>)0x0) {
    FVar6 = FVar2;
  }
  this->DataPtr = (FActiveSkeletalAnimation *)FVar6;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<UE::MovieScene::FActiveSkeletalAnimation_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
    this->ArrayNum = iVar1;
    return this;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 1468102d0

FHBiasMetaData * __thiscall
TArrayView<UE::MovieScene::FHBiasMetaData_const_,int>::operator[]
          (TArrayView<UE::MovieScene::FHBiasMetaData_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FHBiasMetaData *pFVar4;
  
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
      pFVar4 = (FHBiasMetaData *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 146810350

FPropertyDefinition * __thiscall
TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::operator[]
          (TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPropertyDefinition *pFVar4;
  
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
      pFVar4 = (FPropertyDefinition *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// TArrayView<UE::MovieScene::FHierarchicalEasingChannelData_const_,int><TArray<UE::MovieScene::FHierarchicalEasingChannelData,TSizedDefaultAllocator<32>_>_&,TArray<UE::MovieScene::FHierarchicalEasingChannelData,TSizedDefaultAllocator<32>_>_> @ 1468835f0

TArrayView<UE::MovieScene::FHierarchicalEasingChannelData_const_,int> * __thiscall
TArrayView<UE::MovieScene::FHierarchicalEasingChannelData_const_,int>::
TArrayView<UE::MovieScene::FHierarchicalEasingChannelData_const_,int><TArray<UE::MovieScene::FHierarchicalEasingChannelData,TSizedDefaultAllocator<32>_>_&,TArray<UE::MovieScene::FHierarchicalEasingChannelData,TSizedDefaultAllocator<32>_>_>
          (TArrayView<UE::MovieScene::FHierarchicalEasingChannelData_const_,int> *this,
          TArray<UE::MovieScene::FHierarchicalEasingChannelData,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::MovieScene::FHierarchicalEasingChannelData_const_,int> *pTVar4;
  
  this->DataPtr = (FHierarchicalEasingChannelData *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<UE::MovieScene::FHierarchicalEasingChannelData_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<UMovieSceneSection_*_const,int><TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>_const_&,TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>_> @ 146883660

TArrayView<UMovieSceneSection_*_const,int> * __thiscall
TArrayView<UMovieSceneSection_*_const,int>::
TArrayView<UMovieSceneSection_*_const,int><TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>_const_&,TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>_>
          (TArrayView<UMovieSceneSection_*_const,int> *this,
          TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UMovieSceneSection_*_const,int> *pTVar4;
  
  this->DataPtr = (UMovieSceneSection **)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<UMovieSceneSection_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 1468a1410

FHierarchicalEasingChannelData * __thiscall
TArrayView<UE::MovieScene::FHierarchicalEasingChannelData,int>::operator[]
          (TArrayView<UE::MovieScene::FHierarchicalEasingChannelData,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FHierarchicalEasingChannelData *pFVar4;
  
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
      pFVar4 = (FHierarchicalEasingChannelData *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

