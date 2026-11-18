// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 42

// operator[] @ 147342cf0

FSkeletalMeshLODRenderData ** __thiscall
TArrayView<FSkeletalMeshLODRenderData_*,int>::operator[]
          (TArrayView<FSkeletalMeshLODRenderData_*,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSkeletalMeshLODRenderData **ppFVar4;
  
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
      ppFVar4 = (FSkeletalMeshLODRenderData **)(*pcVar1)();
      return ppFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 1473dc830

FBlendSampleData * __thiscall
TArrayView<FBlendSampleData_const_,int>::operator[]
          (TArrayView<FBlendSampleData_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FBlendSampleData *pFVar4;
  
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
      pFVar4 = (FBlendSampleData *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 1473dc8b0

FCompactPose * __thiscall
TArrayView<FCompactPose_const_,int>::operator[]
          (TArrayView<FCompactPose_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FCompactPose *pFVar4;
  
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
      pFVar4 = (FCompactPose *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 1473dc930

FBlendedCurve ** __thiscall
TArrayView<FBlendedCurve_const_*_const,int>::operator[]
          (TArrayView<FBlendedCurve_const_*_const,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FBlendedCurve **ppFVar4;
  
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
      ppFVar4 = (FBlendedCurve **)(*pcVar1)();
      return ppFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// TArrayView<float_const_,int><TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_> @ 147424a50

TArrayView<float_const_,int> * __thiscall
TArrayView<float_const_,int>::
TArrayView<float_const_,int><TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
          (TArrayView<float_const_,int> *this,
          TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *param_1)

{
  int iVar1;
  ForElementType<float> FVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<float_const_,int> *pTVar5;
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
      pTVar5 = (TArrayView<float_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
    this->ArrayNum = iVar1;
    return this;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FBlendedCurve_const_*_const,int><TArray<FBlendedCurve_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,TArray<FBlendedCurve_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_> @ 147424ad0

TArrayView<FBlendedCurve_const_*_const,int> * __thiscall
TArrayView<FBlendedCurve_const_*_const,int>::
TArrayView<FBlendedCurve_const_*_const,int><TArray<FBlendedCurve_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,TArray<FBlendedCurve_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
          (TArrayView<FBlendedCurve_const_*_const,int> *this,
          TArray<FBlendedCurve_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int iVar1;
  ForElementType<FBlendedCurve_const_*> FVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FBlendedCurve_const_*_const,int> *pTVar5;
  ForElementType<FBlendedCurve_const_*> FVar6;
  
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  FVar6 = (ForElementType<FBlendedCurve_const_*>)param_1;
  if (FVar2 != (ForElementType<FBlendedCurve_const_*>)0x0) {
    FVar6 = FVar2;
  }
  this->DataPtr = (FBlendedCurve **)FVar6;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FBlendedCurve_const_*_const,int> *)(*pcVar3)();
      return pTVar5;
    }
    this->ArrayNum = iVar1;
    return this;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<UE::Anim::FStackAttributeContainer_const_*_const,int><TArray<UE::Anim::FStackAttributeContainer_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,TArray<UE::Anim::FStackAttributeContainer_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_> @ 147424b50

TArrayView<UE::Anim::FStackAttributeContainer_const_*_const,int> * __thiscall
TArrayView<UE::Anim::FStackAttributeContainer_const_*_const,int>::
TArrayView<UE::Anim::FStackAttributeContainer_const_*_const,int><TArray<UE::Anim::FStackAttributeContainer_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,TArray<UE::Anim::FStackAttributeContainer_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
          (TArrayView<UE::Anim::FStackAttributeContainer_const_*_const,int> *this,
          TArray<UE::Anim::FStackAttributeContainer_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int iVar1;
  ForElementType<UE::Anim::FStackAttributeContainer_const_*> FVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<UE::Anim::FStackAttributeContainer_const_*_const,int> *pTVar5;
  ForElementType<UE::Anim::FStackAttributeContainer_const_*> FVar6;
  
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  FVar6 = (ForElementType<UE::Anim::FStackAttributeContainer_const_*>)param_1;
  if (FVar2 != (ForElementType<UE::Anim::FStackAttributeContainer_const_*>)0x0) {
    FVar6 = FVar2;
  }
  this->DataPtr = (FStackAttributeContainer **)FVar6;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<UE::Anim::FStackAttributeContainer_const_*_const,int> *)(*pcVar3)();
      return pTVar5;
    }
    this->ArrayNum = iVar1;
    return this;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FName_const_,int><TArray<FName,TSizedDefaultAllocator<32>_>_&,TArray<FName,TSizedDefaultAllocator<32>_>_> @ 1474a2440

TArrayView<FName_const_,int> * __thiscall
TArrayView<FName_const_,int>::
TArrayView<FName_const_,int><TArray<FName,TSizedDefaultAllocator<32>_>_&,TArray<FName,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FName_const_,int> *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FName_const_,int> *pTVar4;
  
  this->DataPtr = (FName *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<FName_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 147534150

FPerBoneBlendWeight * __thiscall
TArrayView<FPerBoneBlendWeight_const_,int>::operator[]
          (TArrayView<FPerBoneBlendWeight_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPerBoneBlendWeight *pFVar4;
  
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
      pFVar4 = (FPerBoneBlendWeight *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 1475341d0

FUniqueAttribute * __thiscall
TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
          (TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FUniqueAttribute *pFVar4;
  
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
      pFVar4 = (FUniqueAttribute *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// TArrayView<unsigned_char,int><unsigned_char> @ 1476777d0

TArrayView<unsigned_char,int> * __thiscall
TArrayView<unsigned_char,int>::TArrayView<unsigned_char,int><unsigned_char>
          (TArrayView<unsigned_char,int> *this,uchar *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_char,int> *pTVar3;
  
  this->DataPtr = param_1;
  this->ArrayNum = param_2;
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_char,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// operator[] @ 1478acff0

FOverlapInfo * __thiscall
TArrayView<FOverlapInfo_const_,int>::operator[]
          (TArrayView<FOverlapInfo_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FOverlapInfo *pFVar4;
  
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
      pFVar4 = (FOverlapInfo *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// TArrayView<FOverlapInfo_const_,int><TArray<FOverlapInfo,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_&,TArray<FOverlapInfo,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_> @ 14791c4f0

TArrayView<FOverlapInfo_const_,int> * __thiscall
TArrayView<FOverlapInfo_const_,int>::
TArrayView<FOverlapInfo_const_,int><TArray<FOverlapInfo,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_&,TArray<FOverlapInfo,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_>
          (TArrayView<FOverlapInfo_const_,int> *this,
          TArray<FOverlapInfo,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_> *param_1)

{
  int iVar1;
  ForElementType<FOverlapInfo> FVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FOverlapInfo_const_,int> *pTVar5;
  ForElementType<FOverlapInfo> FVar6;
  
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  FVar6 = (ForElementType<FOverlapInfo>)param_1;
  if (FVar2 != (ForElementType<FOverlapInfo>)0x0) {
    FVar6 = FVar2;
  }
  this->DataPtr = (FOverlapInfo *)FVar6;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FOverlapInfo_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
    this->ArrayNum = iVar1;
    return this;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FOverlapInfo_const_,int><TArray<FOverlapInfo,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_const_&,TArray<FOverlapInfo,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_> @ 14791c570

TArrayView<FOverlapInfo_const_,int> * __thiscall
TArrayView<FOverlapInfo_const_,int>::
TArrayView<FOverlapInfo_const_,int><TArray<FOverlapInfo,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_const_&,TArray<FOverlapInfo,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_>
          (TArrayView<FOverlapInfo_const_,int> *this,
          TArray<FOverlapInfo,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_> *param_1)

{
  int iVar1;
  ForElementType<FOverlapInfo> FVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FOverlapInfo_const_,int> *pTVar5;
  ForElementType<FOverlapInfo> FVar6;
  
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  FVar6 = (ForElementType<FOverlapInfo>)param_1;
  if (FVar2 != (ForElementType<FOverlapInfo>)0x0) {
    FVar6 = FVar2;
  }
  this->DataPtr = (FOverlapInfo *)FVar6;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FOverlapInfo_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
    this->ArrayNum = iVar1;
    return this;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 147a2cbd0

TQuat<double> ** __thiscall
TArrayView<UE::Math::TQuat<double>_const_*_const,int>::operator[]
          (TArrayView<UE::Math::TQuat<double>_const_*_const,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TQuat<double> **ppTVar4;
  
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
      ppTVar4 = (TQuat<double> **)(*pcVar1)();
      return ppTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// TArrayView<FPlaybackPacket,int><TArray<FPlaybackPacket,TSizedDefaultAllocator<32>_>_&,TArray<FPlaybackPacket,TSizedDefaultAllocator<32>_>_> @ 147aa9e70

TArrayView<FPlaybackPacket,int> * __thiscall
TArrayView<FPlaybackPacket,int>::
TArrayView<FPlaybackPacket,int><TArray<FPlaybackPacket,TSizedDefaultAllocator<32>_>_&,TArray<FPlaybackPacket,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FPlaybackPacket,int> *this,
          TArray<FPlaybackPacket,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FPlaybackPacket,int> *pTVar4;
  
  this->DataPtr = (FPlaybackPacket *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<FPlaybackPacket,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 147b3e390

FColor * __thiscall
TArrayView<FColor_const_,int>::operator[](TArrayView<FColor_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FColor *pFVar4;
  
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
      pFVar4 = (FColor *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// TArrayView<FRHIUnorderedAccessView_*_const,int><TArray<FRHIUnorderedAccessView_*,TSizedDefaultAllocator<32>_>_&,TArray<FRHIUnorderedAccessView_*,TSizedDefaultAllocator<32>_>_> @ 147c1c800

TArrayView<FRHIUnorderedAccessView_*_const,int> * __thiscall
TArrayView<FRHIUnorderedAccessView_*_const,int>::
TArrayView<FRHIUnorderedAccessView_*_const,int><TArray<FRHIUnorderedAccessView_*,TSizedDefaultAllocator<32>_>_&,TArray<FRHIUnorderedAccessView_*,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FRHIUnorderedAccessView_*_const,int> *this,
          TArray<FRHIUnorderedAccessView_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRHIUnorderedAccessView_*_const,int> *pTVar4;
  
  this->DataPtr = (FRHIUnorderedAccessView **)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<FRHIUnorderedAccessView_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 147ccac50

TMatrix<float> * __thiscall
TArrayView<UE::Math::TMatrix<float>_const_,int>::operator[]
          (TArrayView<UE::Math::TMatrix<float>_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TMatrix<float> *pTVar4;
  
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
      pTVar4 = (TMatrix<float> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 147d7dca0

TMatrix<double> * __thiscall
TArrayView<UE::Math::TMatrix<double>,int>::operator[]
          (TArrayView<UE::Math::TMatrix<double>,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TMatrix<double> *pTVar4;
  
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
      pTVar4 = (TMatrix<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// TArrayView<FMaterialTextureParameterInfo_const_,int> @ 147eef850

TArrayView<FMaterialTextureParameterInfo_const_,int> * __thiscall
TArrayView<FMaterialTextureParameterInfo_const_,int>::
TArrayView<FMaterialTextureParameterInfo_const_,int>
          (TArrayView<FMaterialTextureParameterInfo_const_,int> *this)

{
  this->DataPtr = (FMaterialTextureParameterInfo *)0x0;
  this->ArrayNum = 0;
  return this;
}

// TArrayView<int,int> @ 148012d00

TArrayView<int,int> * __thiscall TArrayView<int,int>::TArrayView<int,int>(TArrayView<int,int> *this)

{
  this->DataPtr = (int *)0x0;
  this->ArrayNum = 0;
  return this;
}

// TArrayView<FRHIShaderParameterUnbind_const_,int><TArray<FRHIShaderParameterUnbind,TSizedDefaultAllocator<32>_>_&,TArray<FRHIShaderParameterUnbind,TSizedDefaultAllocator<32>_>_> @ 1480e71d0

TArrayView<FRHIShaderParameterUnbind_const_,int> * __thiscall
TArrayView<FRHIShaderParameterUnbind_const_,int>::
TArrayView<FRHIShaderParameterUnbind_const_,int><TArray<FRHIShaderParameterUnbind,TSizedDefaultAllocator<32>_>_&,TArray<FRHIShaderParameterUnbind,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FRHIShaderParameterUnbind_const_,int> *this,
          TArray<FRHIShaderParameterUnbind,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRHIShaderParameterUnbind_const_,int> *pTVar4;
  
  this->DataPtr = (FRHIShaderParameterUnbind *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<FRHIShaderParameterUnbind_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<Chaos::FPhysicsObject_const_*_const,int><TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_>_&,TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_>_> @ 14822f4b0

TArrayView<Chaos::FPhysicsObject_const_*_const,int> * __thiscall
TArrayView<Chaos::FPhysicsObject_const_*_const,int>::
TArrayView<Chaos::FPhysicsObject_const_*_const,int><TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_>_&,TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_>_>
          (TArrayView<Chaos::FPhysicsObject_const_*_const,int> *this,
          TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> *pTVar4;
  
  this->DataPtr = (FPhysicsObject **)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<Chaos::FPhysicsObject_const_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 1483ea710

FStaticMeshComponentLODInfo * __thiscall
TArrayView<FStaticMeshComponentLODInfo,int>::operator[]
          (TArrayView<FStaticMeshComponentLODInfo,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FStaticMeshComponentLODInfo *pFVar4;
  
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
      pFVar4 = (FStaticMeshComponentLODInfo *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// TArrayView<FCompositeBuffer,int><TArray<FCompositeBuffer,TSizedDefaultAllocator<32>_>_&,TArray<FCompositeBuffer,TSizedDefaultAllocator<32>_>_> @ 148505740

TArrayView<FCompositeBuffer,int> * __thiscall
TArrayView<FCompositeBuffer,int>::
TArrayView<FCompositeBuffer,int><TArray<FCompositeBuffer,TSizedDefaultAllocator<32>_>_&,TArray<FCompositeBuffer,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FCompositeBuffer,int> *this,
          TArray<FCompositeBuffer,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FCompositeBuffer,int> *pTVar4;
  
  this->DataPtr = (FCompositeBuffer *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<FCompositeBuffer,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FCompressedBuffer,int><TArray<FCompressedBuffer,TSizedDefaultAllocator<32>_>_&,TArray<FCompressedBuffer,TSizedDefaultAllocator<32>_>_> @ 1485057b0

TArrayView<FCompressedBuffer,int> * __thiscall
TArrayView<FCompressedBuffer,int>::
TArrayView<FCompressedBuffer,int><TArray<FCompressedBuffer,TSizedDefaultAllocator<32>_>_&,TArray<FCompressedBuffer,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FCompressedBuffer,int> *this,
          TArray<FCompressedBuffer,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FCompressedBuffer,int> *pTVar4;
  
  this->DataPtr = (FCompressedBuffer *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<FCompressedBuffer,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 1485a7100

EValueComponentType * __thiscall
TArrayView<enum_UE::Shader::EValueComponentType_const_,int>::operator[](void *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  EValueComponentType *pEVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)((longlong)this + 8)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pEVar4 = (EValueComponentType *)(*pcVar1)();
      return pEVar4;
    }
  }
  return (EValueComponentType *)((longlong)param_1 + *(longlong *)this);
}

// operator[] @ 1485a7180

FValueComponent * __thiscall
TArrayView<UE::Shader::FValueComponent,int>::operator[]
          (TArrayView<UE::Shader::FValueComponent,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FValueComponent *pFVar4;
  
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
      pFVar4 = (FValueComponent *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// TArrayView<UE::Math::TMatrix<float>_const_,int><TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_> @ 1485e57a0

TArrayView<UE::Math::TMatrix<float>_const_,int> * __thiscall
TArrayView<UE::Math::TMatrix<float>_const_,int>::
TArrayView<UE::Math::TMatrix<float>_const_,int><TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_>
          (TArrayView<UE::Math::TMatrix<float>_const_,int> *this,
          TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Math::TMatrix<float>_const_,int> *pTVar4;
  
  this->DataPtr = (TMatrix<float> *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<UE::Math::TMatrix<float>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 148627530

FSkelMeshComponentLODInfo * __thiscall
TArrayView<FSkelMeshComponentLODInfo_const_,int>::operator[]
          (TArrayView<FSkelMeshComponentLODInfo_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSkelMeshComponentLODInfo *pFVar4;
  
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
      pFVar4 = (FSkelMeshComponentLODInfo *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// TArrayView<unsigned_char_const_,int><unsigned_char_const_> @ 14867d210

TArrayView<unsigned_char_const_,int> * __thiscall
TArrayView<unsigned_char_const_,int>::TArrayView<unsigned_char_const_,int><unsigned_char_const_>
          (TArrayView<unsigned_char_const_,int> *this,uchar *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_char_const_,int> *pTVar3;
  
  this->DataPtr = param_1;
  this->ArrayNum = param_2;
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_char_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// operator[] @ 14869d7a0

TObjectPtr<UMaterialInterface> * __thiscall
TArrayView<TObjectPtr<UMaterialInterface>_const_,int>::operator[]
          (TArrayView<TObjectPtr<UMaterialInterface>_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TObjectPtr<UMaterialInterface> *pTVar4;
  
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
      pTVar4 = (TObjectPtr<UMaterialInterface> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14869d820

ESkinCacheUsage * __thiscall
TArrayView<enum_ESkinCacheUsage_const_,int>::operator[](void *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ESkinCacheUsage *pEVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)((longlong)this + 8)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pEVar4 = (ESkinCacheUsage *)(*pcVar1)();
      return pEVar4;
    }
  }
  return (ESkinCacheUsage *)((longlong)param_1 + *(longlong *)this);
}

// TArrayView<UPrimitiveComponent_*,int><TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_>_&,TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_>_> @ 148767a10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TArrayView<UPrimitiveComponent_*,int> * __thiscall
TArrayView<UPrimitiveComponent_*,int>::
TArrayView<UPrimitiveComponent_*,int><TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_>_&,TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_>_>
          (TArrayView<UPrimitiveComponent_*,int> *this,
          TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UPrimitiveComponent_*,int> *pTVar4;
  
  this->DataPtr = (UPrimitiveComponent **)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<UPrimitiveComponent_*,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 148781530

FStaticMeshLODResources ** __thiscall
TArrayView<FStaticMeshLODResources_*,int>::operator[]
          (TArrayView<FStaticMeshLODResources_*,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FStaticMeshLODResources **ppFVar4;
  
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
      ppFVar4 = (FStaticMeshLODResources **)(*pcVar1)();
      return ppFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 1487815b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UActorComponent ** __thiscall
TArrayView<UActorComponent_*,int>::operator[](TArrayView<UActorComponent_*,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UActorComponent **ppUVar4;
  
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
      ppUVar4 = (UActorComponent **)(*pcVar1)();
      return ppUVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 148781630

TObjectPtr<UMaterialInterface> * __thiscall
TArrayView<TObjectPtr<UMaterialInterface>,int>::operator[]
          (TArrayView<TObjectPtr<UMaterialInterface>,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TObjectPtr<UMaterialInterface> *pTVar4;
  
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
      pTVar4 = (TObjectPtr<UMaterialInterface> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14880e2c0

FTexture2DMipMap ** __thiscall
TArrayView<FTexture2DMipMap_const_*,int>::operator[]
          (TArrayView<FTexture2DMipMap_const_*,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FTexture2DMipMap **ppFVar4;
  
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
      ppFVar4 = (FTexture2DMipMap **)(*pcVar1)();
      return ppFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14890f920

TSharedPtr<FRTInfo,1> * __thiscall
TArrayView<TSharedPtr<FRTInfo,1>_const_,int>::operator[]
          (TArrayView<TSharedPtr<FRTInfo,1>_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedPtr<FRTInfo,1> *pTVar4;
  
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
      pTVar4 = (TSharedPtr<FRTInfo,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// Last @ 148969030

TSharedPtr<FRTInfo,1> * __thiscall
TArrayView<TSharedPtr<FRTInfo,1>_const_,int>::Last
          (TArrayView<TSharedPtr<FRTInfo,1>_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedPtr<FRTInfo,1> *pTVar4;
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
      pTVar4 = (TSharedPtr<FRTInfo,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + ((this->ArrayNum - param_1) + -1);
}

// TArrayView<ULevelStreaming_*_const,int><TArray<TObjectPtr<ULevelStreaming>,TSizedDefaultAllocator<32>_>_&,TArray<TObjectPtr<ULevelStreaming>,TSizedDefaultAllocator<32>_>_> @ 148a2bfd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArrayView<ULevelStreaming_*_const,int> * __thiscall
TArrayView<ULevelStreaming_*_const,int>::
TArrayView<ULevelStreaming_*_const,int><TArray<TObjectPtr<ULevelStreaming>,TSizedDefaultAllocator<32>_>_&,TArray<TObjectPtr<ULevelStreaming>,TSizedDefaultAllocator<32>_>_>
          (TArrayView<ULevelStreaming_*_const,int> *this,
          TArray<TObjectPtr<ULevelStreaming>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<ULevelStreaming_*_const,int> *pTVar4;
  
  this->DataPtr = (ULevelStreaming **)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<ULevelStreaming_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

