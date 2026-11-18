// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 48

// operator[] @ 1447315c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRasterResults * __thiscall
TArrayView<Nanite::FRasterResults_const_,int>::operator[]
          (TArrayView<Nanite::FRasterResults_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRasterResults *pFVar4;
  
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
      pFVar4 = (FRasterResults *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 144731640

FVisibleDecal ** __thiscall
TArrayView<FVisibleDecal_const_*_const,int>::operator[]
          (TArrayView<FVisibleDecal_const_*_const,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FVisibleDecal **ppFVar4;
  
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
      ppFVar4 = (FVisibleDecal **)(*pcVar1)();
      return ppFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 1447316c0

FPackedView * __thiscall
TArrayView<Nanite::FPackedView,int>::operator[]
          (TArrayView<Nanite::FPackedView,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPackedView *pFVar4;
  
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
      pFVar4 = (FPackedView *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 144731740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FViewInfo * __thiscall
TArrayView<FViewInfo,int>::operator[](TArrayView<FViewInfo,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FViewInfo *pFVar4;
  
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
      pFVar4 = (FViewInfo *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// TArrayView<FRDGTexture_*,int><TArray<FRDGTexture_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_&,TArray<FRDGTexture_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_> @ 1447e12d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TArrayView<FRDGTexture_*,int> * __thiscall
TArrayView<FRDGTexture_*,int>::
TArrayView<FRDGTexture_*,int><TArray<FRDGTexture_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_&,TArray<FRDGTexture_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>
          (TArrayView<FRDGTexture_*,int> *this,
          TArray<FRDGTexture_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *param_1)

{
  int iVar1;
  ForElementType<FRDGTexture_*> FVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FRDGTexture_*,int> *pTVar5;
  ForElementType<FRDGTexture_*> FVar6;
  
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  FVar6 = (ForElementType<FRDGTexture_*>)param_1;
  if (FVar2 != (ForElementType<FRDGTexture_*>)0x0) {
    FVar6 = FVar2;
  }
  this->DataPtr = (FRDGTexture **)FVar6;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FRDGTexture_*,int> *)(*pcVar3)();
      return pTVar5;
    }
    this->ArrayNum = iVar1;
    return this;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FViewInfo_*_const,int><TArray<FViewInfo_*,TSizedDefaultAllocator<32>_>_&,TArray<FViewInfo_*,TSizedDefaultAllocator<32>_>_> @ 1447e1350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

TArrayView<FViewInfo_*_const,int> * __thiscall
TArrayView<FViewInfo_*_const,int>::
TArrayView<FViewInfo_*_const,int><TArray<FViewInfo_*,TSizedDefaultAllocator<32>_>_&,TArray<FViewInfo_*,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FViewInfo_*_const,int> *this,
          TArray<FViewInfo_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FViewInfo_*_const,int> *pTVar4;
  
  this->DataPtr = (FViewInfo **)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<FViewInfo_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FConvexVolume_const_,int><TArray<FConvexVolume,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_&,TArray<FConvexVolume,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_> @ 1447e13c0

TArrayView<FConvexVolume_const_,int> * __thiscall
TArrayView<FConvexVolume_const_,int>::
TArrayView<FConvexVolume_const_,int><TArray<FConvexVolume,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_&,TArray<FConvexVolume,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>
          (TArrayView<FConvexVolume_const_,int> *this,
          TArray<FConvexVolume,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *param_1)

{
  int iVar1;
  ForElementType<FConvexVolume> FVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FConvexVolume_const_,int> *pTVar5;
  ForElementType<FConvexVolume> FVar6;
  
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  FVar6 = (ForElementType<FConvexVolume>)param_1;
  if (FVar2 != (ForElementType<FConvexVolume>)0x0) {
    FVar6 = FVar2;
  }
  this->DataPtr = (FConvexVolume *)FVar6;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FConvexVolume_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
    this->ArrayNum = iVar1;
    return this;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<Nanite::FPackedView_const_,int><TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_> @ 1447e1440

TArrayView<Nanite::FPackedView_const_,int> * __thiscall
TArrayView<Nanite::FPackedView_const_,int>::
TArrayView<Nanite::FPackedView_const_,int><TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
          (TArrayView<Nanite::FPackedView_const_,int> *this,
          TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<Nanite::FPackedView_const_,int> *pTVar4;
  
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
    pTVar4 = (TArrayView<Nanite::FPackedView_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<Nanite::FRasterResults_const_,int><TArray<Nanite::FRasterResults,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_&,TArray<Nanite::FRasterResults,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_> @ 1447e14b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TArrayView<Nanite::FRasterResults_const_,int> * __thiscall
TArrayView<Nanite::FRasterResults_const_,int>::
TArrayView<Nanite::FRasterResults_const_,int><TArray<Nanite::FRasterResults,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_&,TArray<Nanite::FRasterResults,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>
          (TArrayView<Nanite::FRasterResults_const_,int> *this,
          TArray<Nanite::FRasterResults,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int iVar1;
  ForElementType<Nanite::FRasterResults> FVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<Nanite::FRasterResults_const_,int> *pTVar5;
  ForElementType<Nanite::FRasterResults> FVar6;
  
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  FVar6 = (ForElementType<Nanite::FRasterResults>)param_1;
  if (FVar2 != (ForElementType<Nanite::FRasterResults>)0x0) {
    FVar6 = FVar2;
  }
  this->DataPtr = (FRasterResults *)FVar6;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<Nanite::FRasterResults_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
    this->ArrayNum = iVar1;
    return this;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<Nanite::FRasterResults,int><TArray<Nanite::FRasterResults,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_&,TArray<Nanite::FRasterResults,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_> @ 1447e1530

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TArrayView<Nanite::FRasterResults,int> * __thiscall
TArrayView<Nanite::FRasterResults,int>::
TArrayView<Nanite::FRasterResults,int><TArray<Nanite::FRasterResults,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_&,TArray<Nanite::FRasterResults,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>
          (TArrayView<Nanite::FRasterResults,int> *this,
          TArray<Nanite::FRasterResults,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int iVar1;
  ForElementType<Nanite::FRasterResults> FVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<Nanite::FRasterResults,int> *pTVar5;
  ForElementType<Nanite::FRasterResults> FVar6;
  
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  FVar6 = (ForElementType<Nanite::FRasterResults>)param_1;
  if (FVar2 != (ForElementType<Nanite::FRasterResults>)0x0) {
    FVar6 = FVar2;
  }
  this->DataPtr = (FRasterResults *)FVar6;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<Nanite::FRasterResults,int> *)(*pcVar3)();
      return pTVar5;
    }
    this->ArrayNum = iVar1;
    return this;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FViewInfo_const_,int><TArray<FViewInfo,TSizedDefaultAllocator<32>_>_&,TArray<FViewInfo,TSizedDefaultAllocator<32>_>_> @ 1447e15b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

TArrayView<FViewInfo_const_,int> * __thiscall
TArrayView<FViewInfo_const_,int>::
TArrayView<FViewInfo_const_,int><TArray<FViewInfo,TSizedDefaultAllocator<32>_>_&,TArray<FViewInfo,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FViewInfo_const_,int> *this,
          TArray<FViewInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FViewInfo_const_,int> *pTVar4;
  
  this->DataPtr = (FViewInfo *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<FViewInfo_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FViewInfo,int><TArray<FViewInfo,TSizedDefaultAllocator<32>_>_&,TArray<FViewInfo,TSizedDefaultAllocator<32>_>_> @ 1447e1620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

TArrayView<FViewInfo,int> * __thiscall
TArrayView<FViewInfo,int>::
TArrayView<FViewInfo,int><TArray<FViewInfo,TSizedDefaultAllocator<32>_>_&,TArray<FViewInfo,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FViewInfo,int> *this,TArray<FViewInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FViewInfo,int> *pTVar4;
  
  this->DataPtr = (FViewInfo *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<FViewInfo,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 1448eed90

TVector4<float> * __thiscall
TArrayView<UE::Math::TVector4<float>,int>::operator[]
          (TArrayView<UE::Math::TVector4<float>,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector4<float> *pTVar4;
  
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
      pTVar4 = (TVector4<float> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// TArrayView<FVisibleLightInfo,int><TArray<FVisibleLightInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,TArray<FVisibleLightInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_> @ 144b7be10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

TArrayView<FVisibleLightInfo,int> * __thiscall
TArrayView<FVisibleLightInfo,int>::
TArrayView<FVisibleLightInfo,int><TArray<FVisibleLightInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,TArray<FVisibleLightInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
          (TArrayView<FVisibleLightInfo,int> *this,
          TArray<FVisibleLightInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FVisibleLightInfo,int> *pTVar4;
  
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
    pTVar4 = (TArrayView<FVisibleLightInfo,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 144c1ef20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FVisibleLightInfo * __thiscall
TArrayView<FVisibleLightInfo_const_,int>::operator[]
          (TArrayView<FVisibleLightInfo_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FVisibleLightInfo *pFVar4;
  
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
      pFVar4 = (FVisibleLightInfo *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// TArrayView<int_const_,int><TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_const_&,TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_> @ 144d21090

TArrayView<int_const_,int> * __thiscall
TArrayView<int_const_,int>::
TArrayView<int_const_,int><TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_const_&,TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
          (TArrayView<int_const_,int> *this,
          TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *param_1)

{
  int iVar1;
  ForElementType<int> FVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<int_const_,int> *pTVar5;
  ForElementType<int> FVar6;
  
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  FVar6 = (ForElementType<int>)param_1;
  if (FVar2 != (ForElementType<int>)0x0) {
    FVar6 = FVar2;
  }
  this->DataPtr = (int *)FVar6;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<int_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
    this->ArrayNum = iVar1;
    return this;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FCardPageRenderData_const_,int><TArray<FCardPageRenderData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&,TArray<FCardPageRenderData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_> @ 144d21110

TArrayView<FCardPageRenderData_const_,int> * __thiscall
TArrayView<FCardPageRenderData_const_,int>::
TArrayView<FCardPageRenderData_const_,int><TArray<FCardPageRenderData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&,TArray<FCardPageRenderData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
          (TArrayView<FCardPageRenderData_const_,int> *this,
          TArray<FCardPageRenderData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FCardPageRenderData_const_,int> *pTVar4;
  
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
    pTVar4 = (TArrayView<FCardPageRenderData_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 144d44240

FInstanceRange * __thiscall
TArrayView<FInstanceRange_const_,int>::operator[]
          (TArrayView<FInstanceRange_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FInstanceRange *pFVar4;
  
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
      pFVar4 = (FInstanceRange *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 144ef2250

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGTexture ** __thiscall
TArrayView<FRDGTexture_*,int>::operator[](TArrayView<FRDGTexture_*,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRDGTexture **ppFVar4;
  
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
      ppFVar4 = (FRDGTexture **)(*pcVar1)();
      return ppFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// TArrayView<FVisibleLightInfo_const_,int><TArray<FVisibleLightInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,TArray<FVisibleLightInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_> @ 144f4b9b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

TArrayView<FVisibleLightInfo_const_,int> * __thiscall
TArrayView<FVisibleLightInfo_const_,int>::
TArrayView<FVisibleLightInfo_const_,int><TArray<FVisibleLightInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,TArray<FVisibleLightInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
          (TArrayView<FVisibleLightInfo_const_,int> *this,
          TArray<FVisibleLightInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FVisibleLightInfo_const_,int> *pTVar4;
  
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
    pTVar4 = (TArrayView<FVisibleLightInfo_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 1450394e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FViewInfo * __thiscall
TArrayView<FViewInfo_const_,int>::operator[](TArrayView<FViewInfo_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FViewInfo *pFVar4;
  
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
      pFVar4 = (FViewInfo *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 145039560

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGTexture ** __thiscall
TArrayView<FRDGTexture_*_const,int>::operator[]
          (TArrayView<FRDGTexture_*_const,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRDGTexture **ppFVar4;
  
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
      ppFVar4 = (FRDGTexture **)(*pcVar1)();
      return ppFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// TArrayView<FLinearColor_const_,int><TArray<FLinearColor,TSizedDefaultAllocator<32>_>_&,TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> @ 145189d10

TArrayView<FLinearColor_const_,int> * __thiscall
TArrayView<FLinearColor_const_,int>::
TArrayView<FLinearColor_const_,int><TArray<FLinearColor,TSizedDefaultAllocator<32>_>_&,TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FLinearColor_const_,int> *this,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FLinearColor_const_,int> *pTVar4;
  
  this->DataPtr = (FLinearColor *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<FLinearColor_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 145211860

FLinearColor * __thiscall
TArrayView<FLinearColor_const_,int>::operator[]
          (TArrayView<FLinearColor_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FLinearColor *pFVar4;
  
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
      pFVar4 = (FLinearColor *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// TArrayView<FVisualizeBufferTile_const_,int><TArray<FVisualizeBufferTile,TSizedDefaultAllocator<32>_>_&,TArray<FVisualizeBufferTile,TSizedDefaultAllocator<32>_>_> @ 145289170

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TArrayView<FVisualizeBufferTile_const_,int> * __thiscall
TArrayView<FVisualizeBufferTile_const_,int>::
TArrayView<FVisualizeBufferTile_const_,int><TArray<FVisualizeBufferTile,TSizedDefaultAllocator<32>_>_&,TArray<FVisualizeBufferTile,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FVisualizeBufferTile_const_,int> *this,
          TArray<FVisualizeBufferTile,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FVisualizeBufferTile_const_,int> *pTVar4;
  
  this->DataPtr = (FVisualizeBufferTile *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<FVisualizeBufferTile_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 145296b00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneInfo ** __thiscall
TArrayView<FPrimitiveSceneInfo_*,int>::operator[]
          (TArrayView<FPrimitiveSceneInfo_*,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPrimitiveSceneInfo **ppFVar4;
  
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
      ppFVar4 = (FPrimitiveSceneInfo **)(*pcVar1)();
      return ppFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// TArrayView<FShaderLooseParameterBufferInfo_const_,int><TArray<FShaderLooseParameterBufferInfo,TMemoryImageAllocator<0>_>_const_&,TArray<FShaderLooseParameterBufferInfo,TMemoryImageAllocator<0>_>_> @ 1452f0b20

TArrayView<FShaderLooseParameterBufferInfo_const_,int> * __thiscall
TArrayView<FShaderLooseParameterBufferInfo_const_,int>::
TArrayView<FShaderLooseParameterBufferInfo_const_,int><TArray<FShaderLooseParameterBufferInfo,TMemoryImageAllocator<0>_>_const_&,TArray<FShaderLooseParameterBufferInfo,TMemoryImageAllocator<0>_>_>
          (TArrayView<FShaderLooseParameterBufferInfo_const_,int> *this,
          TArray<FShaderLooseParameterBufferInfo,TMemoryImageAllocator<0>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  TArrayView<FShaderLooseParameterBufferInfo_const_,int> *pTVar5;
  
  FVar4 = param_1->AllocatorInstance;
  if (((ulonglong)FVar4 & 1) != 0) {
    FVar4 = (ForAnyElementType)
            ((longlong)&(param_1->AllocatorInstance).field_0x0 + ((longlong)FVar4 >> 0x18));
  }
  this->DataPtr = (FShaderLooseParameterBufferInfo *)FVar4;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<FShaderLooseParameterBufferInfo_const_,int> *)(*pcVar2)();
      return pTVar5;
    }
    this->ArrayNum = iVar1;
    return this;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 1453000c0

FRayTracingGeometryInstance * __thiscall
TArrayView<FRayTracingGeometryInstance_const_,int>::operator[]
          (TArrayView<FRayTracingGeometryInstance_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRayTracingGeometryInstance *pFVar4;
  
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
      pFVar4 = (FRayTracingGeometryInstance *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// TArrayView<FRayTracingLocalShaderBindingWriter_*_const,int><TArray<FRayTracingLocalShaderBindingWriter_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,TArray<FRayTracingLocalShaderBindingWriter_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_> @ 1453502e0

TArrayView<FRayTracingLocalShaderBindingWriter_*_const,int> * __thiscall
TArrayView<FRayTracingLocalShaderBindingWriter_*_const,int>::
TArrayView<FRayTracingLocalShaderBindingWriter_*_const,int><TArray<FRayTracingLocalShaderBindingWriter_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,TArray<FRayTracingLocalShaderBindingWriter_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
          (TArrayView<FRayTracingLocalShaderBindingWriter_*_const,int> *this,
          TArray<FRayTracingLocalShaderBindingWriter_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRayTracingLocalShaderBindingWriter_*_const,int> *pTVar4;
  
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
    pTVar4 = (TArrayView<FRayTracingLocalShaderBindingWriter_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FPrimitiveSceneInfo_*,int><TArray<FPrimitiveSceneInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,TArray<FPrimitiveSceneInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_> @ 1453c9740

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TArrayView<FPrimitiveSceneInfo_*,int> * __thiscall
TArrayView<FPrimitiveSceneInfo_*,int>::
TArrayView<FPrimitiveSceneInfo_*,int><TArray<FPrimitiveSceneInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,TArray<FPrimitiveSceneInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
          (TArrayView<FPrimitiveSceneInfo_*,int> *this,
          TArray<FPrimitiveSceneInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FPrimitiveSceneInfo_*,int> *pTVar4;
  
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
    pTVar4 = (TArrayView<FPrimitiveSceneInfo_*,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FPrimitiveSceneInfo_*_const,int><TArray<FPrimitiveSceneInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,TArray<FPrimitiveSceneInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_> @ 1453c97b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TArrayView<FPrimitiveSceneInfo_*_const,int> * __thiscall
TArrayView<FPrimitiveSceneInfo_*_const,int>::
TArrayView<FPrimitiveSceneInfo_*_const,int><TArray<FPrimitiveSceneInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,TArray<FPrimitiveSceneInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
          (TArrayView<FPrimitiveSceneInfo_*_const,int> *this,
          TArray<FPrimitiveSceneInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FPrimitiveSceneInfo_*_const,int> *pTVar4;
  
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
    pTVar4 = (TArrayView<FPrimitiveSceneInfo_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 1454080c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPrimitiveSceneDesc ** __thiscall
TArrayView<FPrimitiveSceneDesc_*,int>::operator[]
          (TArrayView<FPrimitiveSceneDesc_*,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPrimitiveSceneDesc **ppFVar4;
  
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
      ppFVar4 = (FPrimitiveSceneDesc **)(*pcVar1)();
      return ppFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 145408140

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPrimitiveComponent ** __thiscall
TArrayView<UPrimitiveComponent_*,int>::operator[]
          (TArrayView<UPrimitiveComponent_*,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UPrimitiveComponent **ppUVar4;
  
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
      ppUVar4 = (UPrimitiveComponent **)(*pcVar1)();
      return ppUVar4;
    }
  }
  return this->DataPtr + param_1;
}

// TArrayView<FRenderTransform_const_,int><TArray<FRenderTransform,TSizedDefaultAllocator<32>_>_const_&,TArray<FRenderTransform,TSizedDefaultAllocator<32>_>_> @ 14546b240

TArrayView<FRenderTransform_const_,int> * __thiscall
TArrayView<FRenderTransform_const_,int>::
TArrayView<FRenderTransform_const_,int><TArray<FRenderTransform,TSizedDefaultAllocator<32>_>_const_&,TArray<FRenderTransform,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FRenderTransform_const_,int> *this,
          TArray<FRenderTransform,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRenderTransform_const_,int> *pTVar4;
  
  this->DataPtr = (FRenderTransform *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<FRenderTransform_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FRenderTransform_const_,int><FRenderTransform> @ 14546b2f0

TArrayView<FRenderTransform_const_,int> * __thiscall
TArrayView<FRenderTransform_const_,int>::TArrayView<FRenderTransform_const_,int><FRenderTransform>
          (TArrayView<FRenderTransform_const_,int> *this,FRenderTransform *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FRenderTransform_const_,int> *pTVar3;
  
  this->DataPtr = param_1;
  this->ArrayNum = param_2;
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<FRenderTransform_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// operator[] @ 14547caa0

FRenderTransform * __thiscall
TArrayView<FRenderTransform_const_,int>::operator[]
          (TArrayView<FRenderTransform_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRenderTransform *pFVar4;
  
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
      pFVar4 = (FRenderTransform *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14547cb20

FSceneViewFamily ** __thiscall
TArrayView<FSceneViewFamily_*_const,int>::operator[]
          (TArrayView<FSceneViewFamily_*_const,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSceneViewFamily **ppFVar4;
  
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
      ppFVar4 = (FSceneViewFamily **)(*pcVar1)();
      return ppFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 1454d7f80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FSceneRenderer ** __thiscall
TArrayView<FSceneRenderer_*_const,int>::operator[]
          (TArrayView<FSceneRenderer_*_const,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSceneRenderer **ppFVar4;
  
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
      ppFVar4 = (FSceneRenderer **)(*pcVar1)();
      return ppFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 1454d8000

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FTextureRenderTargetBinding * __thiscall
TArrayView<FTextureRenderTargetBinding,int>::operator[]
          (TArrayView<FTextureRenderTargetBinding,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FTextureRenderTargetBinding *pFVar4;
  
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
      pFVar4 = (FTextureRenderTargetBinding *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 145521bd0

FSSDConstantPixelDensityViewSettings * __thiscall
TArrayView<FSSDConstantPixelDensityViewSettings,int>::operator[]
          (TArrayView<FSSDConstantPixelDensityViewSettings,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSSDConstantPixelDensityViewSettings *pFVar4;
  
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
      pFVar4 = (FSSDConstantPixelDensityViewSettings *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// RangeCheck @ 14554e840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TArrayView<FViewInfo_const_,int>::RangeCheck(TArrayView<FViewInfo_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
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
      (*pcVar1)();
      return;
    }
  }
  return;
}

// TArrayView<FProjectedShadowInfo_const_*_const,int><TArray<FProjectedShadowInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&,TArray<FProjectedShadowInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_> @ 14555f470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

TArrayView<FProjectedShadowInfo_const_*_const,int> * __thiscall
TArrayView<FProjectedShadowInfo_const_*_const,int>::
TArrayView<FProjectedShadowInfo_const_*_const,int><TArray<FProjectedShadowInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&,TArray<FProjectedShadowInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
          (TArrayView<FProjectedShadowInfo_const_*_const,int> *this,
          TArray<FProjectedShadowInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FProjectedShadowInfo_const_*_const,int> *pTVar4;
  
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
    pTVar4 = (TArrayView<FProjectedShadowInfo_const_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FProjectedShadowInfo_*_const,int><TArray<FProjectedShadowInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,TArray<FProjectedShadowInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_> @ 1455fa920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

TArrayView<FProjectedShadowInfo_*_const,int> * __thiscall
TArrayView<FProjectedShadowInfo_*_const,int>::
TArrayView<FProjectedShadowInfo_*_const,int><TArray<FProjectedShadowInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,TArray<FProjectedShadowInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
          (TArrayView<FProjectedShadowInfo_*_const,int> *this,
          TArray<FProjectedShadowInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FProjectedShadowInfo_*_const,int> *pTVar4;
  
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
    pTVar4 = (TArrayView<FProjectedShadowInfo_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 14560bbc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FProjectedShadowInfo ** __thiscall
TArrayView<FProjectedShadowInfo_*_const,int>::operator[]
          (TArrayView<FProjectedShadowInfo_*_const,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FProjectedShadowInfo **ppFVar4;
  
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
      ppFVar4 = (FProjectedShadowInfo **)(*pcVar1)();
      return ppFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// TArrayView<unsigned_int_const_,int><TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_> @ 1457a4700

TArrayView<unsigned_int_const_,int> * __thiscall
TArrayView<unsigned_int_const_,int>::
TArrayView<unsigned_int_const_,int><TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
          (TArrayView<unsigned_int_const_,int> *this,
          TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_int_const_,int> *pTVar4;
  
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
    pTVar4 = (TArrayView<unsigned_int_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FViewInfo_const_,int><TArray<FViewInfo,TSizedDefaultAllocator<32>_>_const_&,TArray<FViewInfo,TSizedDefaultAllocator<32>_>_> @ 1457a4770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

TArrayView<FViewInfo_const_,int> * __thiscall
TArrayView<FViewInfo_const_,int>::
TArrayView<FViewInfo_const_,int><TArray<FViewInfo,TSizedDefaultAllocator<32>_>_const_&,TArray<FViewInfo,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FViewInfo_const_,int> *this,
          TArray<FViewInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FViewInfo_const_,int> *pTVar4;
  
  this->DataPtr = (FViewInfo *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<FViewInfo_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 1457c4600

FContextBatchInfoPacked * __thiscall
TArrayView<FInstanceCullingMergedContext::FContextBatchInfoPacked_const_,int>::operator[]
          (TArrayView<FInstanceCullingMergedContext::FContextBatchInfoPacked_const_,int> *this,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FContextBatchInfoPacked *pFVar4;
  
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
      pFVar4 = (FContextBatchInfoPacked *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// RangeCheck @ 145807bc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall TArrayView<FViewInfo,int>::RangeCheck(TArrayView<FViewInfo,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
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
      (*pcVar1)();
      return;
    }
  }
  return;
}

