// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 14

// GetResourcesSize @ 14dfc94a0

uint __thiscall FHairStrandsRestRootResource::GetResourcesSize(FHairStrandsRestRootResource *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 local_res8 [8];
  
  pFVar8 = (this->LODs).AllocatorInstance.Data;
  iVar2 = (this->LODs).ArrayNum;
  uVar7 = 0;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->LODs).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FHairStrandsLODRestRootResource_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    lVar3 = *(longlong *)pFVar8;
    lVar4 = *(longlong *)(lVar3 + 0x68);
    if (lVar4 == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = *(int *)(lVar4 + 0x14) * *(int *)(lVar4 + 0x10);
    }
    lVar4 = *(longlong *)(lVar3 + 0x88);
    if (lVar4 == 0) {
      iVar12 = 0;
    }
    else {
      iVar12 = *(int *)(lVar4 + 0x14) * *(int *)(lVar4 + 0x10);
    }
    lVar4 = *(longlong *)(lVar3 + 0xa8);
    if (lVar4 == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)(lVar4 + 0x14) * *(int *)(lVar4 + 0x10);
    }
    lVar4 = *(longlong *)(lVar3 + 200);
    if (lVar4 == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(lVar4 + 0x14) * *(int *)(lVar4 + 0x10);
    }
    lVar4 = *(longlong *)(lVar3 + 0xf0);
    if (lVar4 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(lVar4 + 0x14) * *(int *)(lVar4 + 0x10);
    }
    lVar4 = *(longlong *)(lVar3 + 0x110);
    if (lVar4 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(lVar4 + 0x14) * *(int *)(lVar4 + 0x10);
    }
    lVar3 = *(longlong *)(lVar3 + 0x130);
    iVar10 = iVar5 + iVar6 + iVar9 + iVar11 + iVar12 + iVar10;
    if (lVar3 == 0) {
      uVar7 = uVar7 + iVar10;
      pFVar8 = pFVar8 + 8;
    }
    else {
      uVar7 = uVar7 + *(int *)(lVar3 + 0x14) * *(int *)(lVar3 + 0x10) + iVar10;
      pFVar8 = pFVar8 + 8;
    }
  }
  return uVar7;
}

// FHairStrandsRestRootResource @ 14e03d630

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHairStrandsRestRootResource * __thiscall
FHairStrandsRestRootResource::FHairStrandsRestRootResource
          (FHairStrandsRestRootResource *this,
          TArray<FHairStrandsRootBulkData,TSizedDefaultAllocator<32>_> *param_1,
          EHairStrandsResourcesType param_2,FHairResourceName *param_3,FName *param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FHairStrandsLODRestRootResource *this_00;
  FHairStrandsRootBulkData *pFVar6;
  FHairStrandsRestRootResource *pFVar7;
  ulonglong uVar8;
  FHairStrandsLODRestRootResource *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  undefined1 local_res8 [8];
  uint local_res10;
  EHairStrandsResourcesType local_res18;
  FHairStrandsLODRestRootResource *local_48 [2];
  
  iVar12 = 0;
  this->CurveType = param_2;
  (this->LODs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODs).ArrayNum = 0;
  (this->LODs).ArrayMax = 0;
  local_res10 = param_1->ArrayNum;
  uVar8 = (ulonglong)(int)local_res10;
  pFVar10 = (param_1->AllocatorInstance).Data;
  pFVar11 = pFVar10 + uVar8 * 0x1d8;
  local_res18 = param_2;
  while( true ) {
    pFVar9 = (FHairStrandsLODRestRootResource *)0x0;
    if (param_1->ArrayNum != (int)uVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FHairStrandsRootBulkData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar11) {
      return this;
    }
    this_00 = ::operator_new(0x168);
    if (this_00 != (FHairStrandsLODRestRootResource *)0x0) {
      uVar1 = *(uint *)(pFVar10 + 8);
      FRenderResource::FRenderResource((FRenderResource *)this_00);
      *(undefined2 *)&this_00->_padding_ = 1;
      *(undefined1 *)((longlong)&this_00->_padding_ + 2) = 1;
      this_00->_padding_ = (longlong)&___7FHairCommonResource__6B_;
      *(FName *)((longlong)&this_00->_padding_ + 4) = *param_4;
      this_00->_padding_ = 0;
      this_00->_padding_ = 0;
      this_00->_padding_ = 0;
      this_00->_padding_ = 0;
      *(undefined4 *)&this_00->_padding_ = 0;
      *(undefined1 *)((longlong)&this_00->_padding_ + 4) = 1;
      this_00->Status = Invalid;
      this_00->AvailableCurveCount = 0;
      this_00->_padding_ = (longlong)&___7FHairStrandsLODRestRootResource__6B_;
      *(undefined4 *)&this_00->_padding_ = 0x3fffff;
      (this_00->UniqueTriangleIndexBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
      (this_00->UniqueTriangleIndexBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
      (this_00->UniqueTriangleIndexBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
      (this_00->UniqueTriangleIndexBuffer).Format = PF_Unknown;
      (this_00->RootToUniqueTriangleIndexBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
      (this_00->RootToUniqueTriangleIndexBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
      (this_00->RootToUniqueTriangleIndexBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
      (this_00->RootToUniqueTriangleIndexBuffer).Format = PF_Unknown;
      (this_00->RootBarycentricBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
      (this_00->RootBarycentricBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
      (this_00->RootBarycentricBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
      (this_00->RootBarycentricBuffer).Format = PF_Unknown;
      (this_00->RestUniqueTrianglePositionBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
      (this_00->RestUniqueTrianglePositionBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
      (this_00->RestUniqueTrianglePositionBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
      (this_00->RestUniqueTrianglePositionBuffer).Format = PF_Unknown;
      this_00->SampleCount = 0;
      (this_00->MeshInterpolationWeightsBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
      (this_00->MeshInterpolationWeightsBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
      (this_00->MeshInterpolationWeightsBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
      (this_00->MeshInterpolationWeightsBuffer).Format = PF_Unknown;
      (this_00->MeshSampleIndicesAndSectionsBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
      (this_00->MeshSampleIndicesAndSectionsBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
      (this_00->MeshSampleIndicesAndSectionsBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
      (this_00->MeshSampleIndicesAndSectionsBuffer).Format = PF_Unknown;
      (this_00->RestSamplePositionsBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
      (this_00->RestSamplePositionsBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
      (this_00->RestSamplePositionsBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
      (this_00->RestSamplePositionsBuffer).Format = PF_Unknown;
      this_00->CurveType = local_res18;
      this_00->BulkDataArray = param_1;
      this_00->BulkDataIndex = iVar12;
      this_00->MeshLODIndex = uVar1;
      pFVar6 = FHairStrandsLODRestRootResource::GetBulkData(this_00);
      if ((this_00->MeshLODIndex != (pFVar6->Header).LODIndex) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("MeshLODIndex == GetBulkData().Header.LODIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomResources.cpp"
                             ,0x659,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FHairStrandsRestRootResource *)(*pcVar3)();
        return pFVar7;
      }
      this_00->Status = Invalid;
      pFVar6 = FHairStrandsLODRestRootResource::GetBulkData(this_00);
      this_00->SampleCount = (pFVar6->Header).SampleCount;
      pFVar9 = this_00;
    }
    pFVar2 = (this->LODs).AllocatorInstance.Data;
    local_48[0] = pFVar9;
    if (((pFVar2 <= (FScriptContainerElement *)local_48) &&
        ((FScriptContainerElement *)local_48 < pFVar2 + (longlong)(this->LODs).ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) break;
    iVar5 = (this->LODs).ArrayNum;
    if (iVar5 == (this->LODs).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this,&(this->LODs).ArrayMax);
    }
    iVar12 = iVar12 + 1;
    (this->LODs).ArrayNum = iVar5 + 1;
    pFVar10 = pFVar10 + 0x1d8;
    *(FHairStrandsLODRestRootResource **)((this->LODs).AllocatorInstance.Data + (longlong)iVar5 * 8)
         = local_48[0];
    uVar8 = (ulonglong)local_res10;
  }
  pcVar3 = (code *)swi(3);
  pFVar7 = (FHairStrandsRestRootResource *)(*pcVar3)();
  return pFVar7;
}

// Allocate @ 14e0488d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FHairStrandsRestRootResource::Allocate
          (FHairStrandsRestRootResource *this,FRDGBuilder *param_1,EHairResourceLoadingType param_2,
          EHairResourceStatus *param_3,int param_4)

{
  bool bVar1;
  FHairStrandsLODRestRootResource *this_00;
  
  bVar1 = IsDataValid(this,param_4);
  if (bVar1) {
    this_00 = GetLOD(this,param_4);
    FHairCommonResource::Allocate
              ((FHairCommonResource *)this_00,param_1,param_2,param_3,0x3fffff,0xffffff,true);
  }
  return;
}

// Allocate @ 14e048950

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FHairStrandsRestRootResource::Allocate
          (FHairStrandsRestRootResource *this,FRDGBuilder *param_1,EHairResourceLoadingType param_2,
          EHairResourceStatus *param_3,uint param_4,uint param_5,bool param_6,int param_7)

{
  bool bVar1;
  FHairStrandsLODRestRootResource *this_00;
  
  bVar1 = IsDataValid(this,param_7);
  if (bVar1) {
    this_00 = GetLOD(this,param_7);
    FHairCommonResource::Allocate
              ((FHairCommonResource *)this_00,param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}

// BeginInitResource @ 14e0489e0

void __thiscall FHairStrandsRestRootResource::BeginInitResource(FHairStrandsRestRootResource *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->LODs).AllocatorInstance.Data;
  iVar2 = (this->LODs).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->LODs).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FHairStrandsLODRestRootResource_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::BeginInitResource(*(FRenderResource **)pFVar3,(FRenderCommandPipe *)0x0);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// BeginUpdateResourceRHI @ 14e048a50

void __thiscall
FHairStrandsRestRootResource::BeginUpdateResourceRHI(FHairStrandsRestRootResource *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->LODs).AllocatorInstance.Data;
  iVar2 = (this->LODs).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->LODs).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FHairStrandsLODRestRootResource_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ::BeginUpdateResourceRHI(*(FRenderResource **)pFVar3,(FRenderCommandPipe *)0x0);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// GetLOD @ 14e050830

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHairStrandsLODRestRootResource * __thiscall
FHairStrandsRestRootResource::GetLOD(FHairStrandsRestRootResource *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FHairStrandsLODRestRootResource *pFVar5;
  
  piVar1 = &(this->LODs).ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODs.IsValidIndex(InMeshLODIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Public\\GroomResources.h"
                         ,0x1fb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FHairStrandsLODRestRootResource *)(*pcVar2)();
    return pFVar5;
  }
  uVar4 = 0;
  if (param_1 < *piVar1) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FHairStrandsLODRestRootResource *)(*pcVar2)();
    return pFVar5;
  }
  return *(FHairStrandsLODRestRootResource **)
          ((this->LODs).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetLOD @ 14e0508f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHairStrandsLODRestRootResource * __thiscall
FHairStrandsRestRootResource::GetLOD(FHairStrandsRestRootResource *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FHairStrandsLODRestRootResource *pFVar5;
  
  piVar1 = &(this->LODs).ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODs.IsValidIndex(InMeshLODIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Public\\GroomResources.h"
                         ,0x1fc,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FHairStrandsLODRestRootResource *)(*pcVar2)();
    return pFVar5;
  }
  uVar4 = 0;
  if (param_1 < *piVar1) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FHairStrandsLODRestRootResource *)(*pcVar2)();
    return pFVar5;
  }
  return *(FHairStrandsLODRestRootResource **)
          ((this->LODs).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetRootCount @ 14e0524e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall FHairStrandsRestRootResource::GetRootCount(FHairStrandsRestRootResource *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  FHairStrandsRootBulkData *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->LODs).AllocatorInstance.Data;
  iVar2 = (this->LODs).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->LODs).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FHairStrandsLODRestRootResource_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    if (*(FHairStrandsLODRestRootResource **)pFVar5 != (FHairStrandsLODRestRootResource *)0x0) {
      pFVar4 = FHairStrandsLODRestRootResource::GetBulkData
                         (*(FHairStrandsLODRestRootResource **)pFVar5);
      uVar3 = (pFVar4->Header).RootCount;
      if (uVar3 != 0) {
        return uVar3;
      }
    }
    pFVar5 = pFVar5 + 8;
  }
  return 0;
}

// InternalResetLoadedSize @ 14e058d70

void __thiscall
FHairStrandsRestRootResource::InternalResetLoadedSize(FHairStrandsRestRootResource *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->LODs).AllocatorInstance.Data;
  iVar2 = (this->LODs).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->LODs).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FHairStrandsLODRestRootResource_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0x58))();
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// IsDataValid @ 14e058e60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FHairStrandsRestRootResource::IsDataValid(FHairStrandsRestRootResource *this,int param_1)

{
  FHairStrandsLODRestRootResource *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FHairStrandsRootBulkData *pFVar4;
  
  if ((-1 < param_1) && (param_1 < (this->LODs).ArrayNum)) {
    if (param_1 < 0) {
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
    this_00 = *(FHairStrandsLODRestRootResource **)
               ((this->LODs).AllocatorInstance.Data + (longlong)param_1 * 8);
    pFVar4 = FHairStrandsLODRestRootResource::GetBulkData(this_00);
    if ((pFVar4->Header).RootCount != 0) {
      pFVar4 = FHairStrandsLODRestRootResource::GetBulkData(this_00);
      if (-1 < (pFVar4->Header).LODIndex) {
        return true;
      }
    }
  }
  return false;
}

// IsValid @ 14e059050

bool __thiscall
FHairStrandsRestRootResource::IsValid(FHairStrandsRestRootResource *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((-1 < param_1) && (param_1 < (this->LODs).ArrayNum)) {
    if (param_1 < 0) {
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
    if (*(int *)(*(longlong *)((this->LODs).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x60)
        == 2) {
      return true;
    }
  }
  return false;
}

// ReleaseResource @ 14e059bc0

void __thiscall FHairStrandsRestRootResource::ReleaseResource(FHairStrandsRestRootResource *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar3 = (this->LODs).ArrayNum;
  pFVar5 = (this->LODs).AllocatorInstance.Data;
  pFVar2 = pFVar5 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->LODs).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FHairStrandsLODRestRootResource_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar2) break;
    plVar4 = *(longlong **)pFVar5;
    (**(code **)(*plVar4 + 0x20))(plVar4);
    (**(code **)*plVar4)(plVar4,1);
    pFVar5 = pFVar5 + 8;
  }
  piVar1 = &(this->LODs).ArrayMax;
  (this->LODs).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

// StreamInData @ 14e064cf0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FHairStrandsRestRootResource::StreamInData(FHairStrandsRestRootResource *this,int param_1)

{
  bool bVar1;
  
  bVar1 = IsDataValid(this,param_1);
  if (bVar1) {
    GetLOD(this,param_1);
  }
  return;
}

