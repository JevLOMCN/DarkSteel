// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 10

// GetResourcesSize @ 14e019250

uint __thiscall
FHairStrandsDeformedRootResource::GetResourcesSize(FHairStrandsDeformedRootResource *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  
  pFVar10 = (this->LODs).AllocatorInstance.Data;
  iVar2 = (this->LODs).ArrayNum;
  uVar9 = 0;
  pFVar1 = pFVar10 + (longlong)iVar2 * 8;
  do {
    while( true ) {
      if ((this->LODs).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FHairStrandsLODDeformedRootResource_*_const,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar10 == pFVar1) {
        return uVar9;
      }
      lVar3 = *(longlong *)pFVar10;
      lVar4 = *(longlong *)(lVar3 + 0x68);
      if (lVar4 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(lVar4 + 0x14) * *(int *)(lVar4 + 0x10);
      }
      lVar4 = *(longlong *)(lVar3 + 0xb0);
      if (lVar4 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(lVar4 + 0x14) * *(int *)(lVar4 + 0x10);
      }
      lVar4 = *(longlong *)(lVar3 + 0xf0);
      if (lVar4 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(lVar4 + 0x14) * *(int *)(lVar4 + 0x10);
      }
      iVar7 = iVar6 + iVar8 + iVar7;
      bVar5 = IsHairStrandContinuousDecimationReorderingEnabled();
      if (bVar5) break;
LAB_14e01933b:
      uVar9 = uVar9 + iVar7;
      pFVar10 = pFVar10 + 8;
    }
    lVar4 = *(longlong *)(lVar3 + 0x88);
    if (lVar4 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(lVar4 + 0x14) * *(int *)(lVar4 + 0x10);
    }
    lVar4 = *(longlong *)(lVar3 + 0xd0);
    if (lVar4 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(lVar4 + 0x14) * *(int *)(lVar4 + 0x10);
    }
    lVar3 = *(longlong *)(lVar3 + 0x110);
    iVar7 = iVar7 + iVar8 + iVar6;
    if (lVar3 == 0) goto LAB_14e01933b;
    uVar9 = uVar9 + iVar7 + *(int *)(lVar3 + 0x14) * *(int *)(lVar3 + 0x10);
    pFVar10 = pFVar10 + 8;
  } while( true );
}

// FHairStrandsDeformedRootResource @ 14e03c9f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHairStrandsDeformedRootResource * __thiscall
FHairStrandsDeformedRootResource::FHairStrandsDeformedRootResource
          (FHairStrandsDeformedRootResource *this,FHairStrandsRestRootResource *param_1,
          EHairStrandsResourcesType param_2,FHairResourceName *param_3,FName *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FHairStrandsDeformedRootResource *pFVar9;
  FRenderResource *this_00;
  FName *pFVar10;
  FHairStrandsLODRestRootResource *this_01;
  FHairStrandsRootBulkData *pFVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res18 [16];
  FRenderResource *local_48 [2];
  
  this->CurveType = param_2;
  (this->LODs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->LODs).ArrayMax;
  (this->LODs).ArrayNum = 0;
  *piVar1 = 0;
  if (param_1 == (FHairStrandsRestRootResource *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRestResources",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomResources.cpp"
                       ,0x749,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FHairStrandsDeformedRootResource *)(*pcVar6)();
      return pFVar9;
    }
  }
  uVar3 = (param_1->LODs).ArrayNum;
  if (-1 < (int)uVar3) {
    if (*piVar1 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar3,(ForAnyElementType *)this,(this->LODs).ArrayNum,piVar1);
    }
    pFVar13 = (param_1->LODs).AllocatorInstance.Data;
    iVar4 = (param_1->LODs).ArrayNum;
    pFVar2 = pFVar13 + (longlong)iVar4 * 8;
    while( true ) {
      if ((param_1->LODs).ArrayNum != iVar4) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FHairStrandsLODRestRootResource_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar13 == pFVar2) break;
      lVar12 = *(longlong *)pFVar13;
      if (lVar12 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InLOD",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomResources.cpp"
                           ,0x74d,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pFVar9 = (FHairStrandsDeformedRootResource *)(*pcVar6)();
          return pFVar9;
        }
      }
      this_00 = ::operator_new(0x140);
      if (this_00 == (FRenderResource *)0x0) {
        this_00 = (FRenderResource *)0x0;
      }
      else {
        iVar8 = *(int *)(lVar12 + 0x160);
        FRenderResource::FRenderResource(this_00);
        *(undefined2 *)&this_00[1]._padding_ = 1;
        *(undefined1 *)((longlong)&this_00[1]._padding_ + 2) = 1;
        this_00->_padding_ = (longlong)&___7FHairCommonResource__6B_;
        *(FName *)((longlong)&this_00[1]._padding_ + 4) = *param_4;
        lVar12 = 2;
        this_00[1].ResourceName.ComparisonIndex = 0;
        this_00[1].ResourceName.Number = 0;
        this_00[1].ListIndex = 0;
        this_00[1].FeatureLevel = '\0';
        this_00[1].InitPhase = Pre;
        this_00[1].ResourceState = Default;
        this_00[1].field_0x1f = 0;
        this_00[2]._padding_ = 0;
        this_00[2].OwnerName.ComparisonIndex = 0;
        this_00[2].OwnerName.Number = 0;
        this_00[2].ResourceName.ComparisonIndex.Value = 0;
        *(undefined1 *)&this_00[2].ResourceName.Number = 1;
        this_00->_padding_ = (longlong)&___7FHairStrandsLODDeformedRootResource__6B_;
        pFVar10 = &this_00[3].OwnerName;
        this_00[3]._padding_ = 0;
        this_00[2].ListIndex = 0x3fffff;
        do {
          pFVar10->ComparisonIndex = 0;
          pFVar10->Number = 0;
          pFVar10[1].ComparisonIndex = 0;
          pFVar10[1].Number = 0;
          pFVar10[2].ComparisonIndex = 0;
          pFVar10[2].Number = 0;
          *(undefined1 *)&pFVar10[3].ComparisonIndex.Value = 0;
          pFVar10 = pFVar10 + 4;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        this_00[5].OwnerName.ComparisonIndex.Value = 0;
        pFVar10 = &this_00[5].ResourceName;
        lVar12 = 2;
        do {
          pFVar10->ComparisonIndex = 0;
          pFVar10->Number = 0;
          pFVar10[1].ComparisonIndex = 0;
          pFVar10[1].Number = 0;
          pFVar10[2].ComparisonIndex = 0;
          pFVar10[2].Number = 0;
          *(undefined1 *)&pFVar10[3].ComparisonIndex.Value = 0;
          pFVar10 = pFVar10 + 4;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        lVar12 = 2;
        pFVar10 = &this_00[7].ResourceName;
        do {
          pFVar10->ComparisonIndex = 0;
          pFVar10->Number = 0;
          pFVar10[1].ComparisonIndex = 0;
          pFVar10[1].Number = 0;
          pFVar10[2].ComparisonIndex = 0;
          pFVar10[2].Number = 0;
          *(undefined1 *)&pFVar10[3].ComparisonIndex.Value = 0;
          pFVar10 = pFVar10 + 4;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        this_00[9].ResourceName.ComparisonIndex = 0;
        this_00[9].ResourceName.Number = 0;
        this_00[9].ListIndex = iVar8;
        this_00[9].FeatureLevel.Value = param_2;
        bVar7 = FHairStrandsRestRootResource::IsDataValid(param_1,iVar8);
        if (bVar7) {
          this_01 = FHairStrandsRestRootResource::GetLOD(param_1,iVar8);
          pFVar11 = FHairStrandsLODRestRootResource::GetBulkData(this_01);
          this_00[9].ResourceName.Number = (pFVar11->Header).RootCount;
          pFVar11 = FHairStrandsLODRestRootResource::GetBulkData(this_01);
          this_00[5].OwnerName.ComparisonIndex.Value = (pFVar11->Header).SampleCount;
        }
        *(undefined4 *)&this_00[3]._padding_ = 0;
      }
      pFVar5 = (this->LODs).AllocatorInstance.Data;
      local_48[0] = this_00;
      if ((pFVar5 <= (FScriptContainerElement *)local_48) &&
         ((FScriptContainerElement *)local_48 < pFVar5 + (longlong)*piVar1 * 8)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pFVar9 = (FHairStrandsDeformedRootResource *)(*pcVar6)();
          return pFVar9;
        }
      }
      iVar8 = (this->LODs).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,piVar1);
      }
      (this->LODs).ArrayNum = iVar8 + 1;
      pFVar13 = pFVar13 + 8;
      *(FRenderResource **)((this->LODs).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_48[0]
      ;
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// Allocate @ 14e0487c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FHairStrandsDeformedRootResource::Allocate
          (FHairStrandsDeformedRootResource *this,FRDGBuilder *param_1,
          EHairResourceLoadingType param_2,EHairResourceStatus *param_3,int param_4)

{
  bool bVar1;
  FHairStrandsLODDeformedRootResource *this_00;
  
  bVar1 = IsDataValid(this,param_4);
  if (bVar1) {
    this_00 = GetLOD(this,param_4);
    FHairCommonResource::Allocate
              ((FHairCommonResource *)this_00,param_1,param_2,param_3,0x3fffff,0xffffff,true);
  }
  return;
}

// Allocate @ 14e048840

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FHairStrandsDeformedRootResource::Allocate
          (FHairStrandsDeformedRootResource *this,FRDGBuilder *param_1,
          EHairResourceLoadingType param_2,EHairResourceStatus *param_3,uint param_4,uint param_5,
          bool param_6,int param_7)

{
  bool bVar1;
  FHairStrandsLODDeformedRootResource *this_00;
  
  bVar1 = IsDataValid(this,param_7);
  if (bVar1) {
    this_00 = GetLOD(this,param_7);
    FHairCommonResource::Allocate
              ((FHairCommonResource *)this_00,param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}

// GetLOD @ 14e050770

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHairStrandsLODDeformedRootResource * __thiscall
FHairStrandsDeformedRootResource::GetLOD(FHairStrandsDeformedRootResource *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FHairStrandsLODDeformedRootResource *pFVar5;
  
  piVar1 = &(this->LODs).ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODs.IsValidIndex(InMeshLODIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Public\\GroomResources.h"
                         ,0x280,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FHairStrandsLODDeformedRootResource *)(*pcVar2)();
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
    pFVar5 = (FHairStrandsLODDeformedRootResource *)(*pcVar2)();
    return pFVar5;
  }
  return *(FHairStrandsLODDeformedRootResource **)
          ((this->LODs).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// IsDataValid @ 14e058dd0

bool __thiscall
FHairStrandsDeformedRootResource::IsDataValid(FHairStrandsDeformedRootResource *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->LODs).ArrayNum)) {
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    lVar1 = *(longlong *)((this->LODs).AllocatorInstance.Data + (longlong)param_1 * 8);
    if ((*(int *)(lVar1 + 0x134) != 0) && (-1 < *(int *)(lVar1 + 0x138))) {
      return true;
    }
  }
  return false;
}

// IsValid @ 14e058fc0

bool __thiscall
FHairStrandsDeformedRootResource::IsValid(FHairStrandsDeformedRootResource *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->LODs).ArrayNum)) {
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar1 = *(int *)(*(longlong *)((this->LODs).AllocatorInstance.Data + (longlong)param_1 * 8) +
                    0x60);
    if ((iVar1 == 1) || (iVar1 == 2)) {
      return true;
    }
  }
  return false;
}

// ReleaseResource @ 14e059b10

void __thiscall
FHairStrandsDeformedRootResource::ReleaseResource(FHairStrandsDeformedRootResource *this)

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
      `TCheckedPointerIterator<FHairStrandsLODDeformedRootResource_*,int,0>::operator!='::__l2::
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

// SwapBuffer @ 14e064d30

void __thiscall FHairStrandsDeformedRootResource::SwapBuffer(FHairStrandsDeformedRootResource *this)

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
      `TCheckedPointerIterator<FHairStrandsLODDeformedRootResource_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    *(int *)(*(longlong *)pFVar3 + 0x130) = 1 - *(int *)(*(longlong *)pFVar3 + 0x130);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// GetLOD @ 14e09c2a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHairStrandsLODDeformedRootResource * __thiscall
FHairStrandsDeformedRootResource::GetLOD(FHairStrandsDeformedRootResource *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FHairStrandsLODDeformedRootResource *pFVar5;
  
  piVar1 = &(this->LODs).ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODs.IsValidIndex(InMeshLODIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Public\\GroomResources.h"
                         ,0x281,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FHairStrandsLODDeformedRootResource *)(*pcVar2)();
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
    pFVar5 = (FHairStrandsLODDeformedRootResource *)(*pcVar2)();
    return pFVar5;
  }
  return *(FHairStrandsLODDeformedRootResource **)
          ((this->LODs).AllocatorInstance.Data + (longlong)param_1 * 8);
}

