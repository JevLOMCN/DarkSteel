// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// FMeshBatch @ 1448ed500

/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FMeshBatch * __thiscall FMeshBatch::FMeshBatch(FMeshBatch *this,FMeshBatch *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<FMeshBatchElement> FVar3;
  uint uVar4;
  ForElementType<FMeshBatchElement> FVar5;
  ForElementType<FMeshBatchElement> FVar6;
  
  (this->Elements).AllocatorInstance.SecondaryData = (ForElementType<FMeshBatchElement>)0x0;
  FVar3 = (param_1->Elements).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->Elements).ArrayNum;
  (this->Elements).ArrayNum = iVar2;
  FVar6 = (ForElementType<FMeshBatchElement>)param_1;
  if (FVar3 != (ForElementType<FMeshBatchElement>)0x0) {
    FVar6 = FVar3;
  }
  piVar1 = &(this->Elements).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 1;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>_>
              (0x98,8,iVar2,0,(ForElementType<FMeshBatchElement> *)this,iVar2,piVar1);
    FVar3 = (this->Elements).AllocatorInstance.SecondaryData;
    FVar5 = (ForElementType<FMeshBatchElement>)this;
    if (FVar3 != (ForElementType<FMeshBatchElement>)0x0) {
      FVar5 = FVar3;
    }
    ConstructItems<FMeshBatchElement,FMeshBatchElement,int>
              ((void *)FVar5,(FMeshBatchElement *)FVar6,iVar2);
  }
  this->VertexFactory = param_1->VertexFactory;
  this->MaterialRenderProxy = param_1->MaterialRenderProxy;
  this->LCI = param_1->LCI;
  (this->BatchHitProxyId).Index = (param_1->BatchHitProxyId).Index;
  this->DynamicMeshBoundsIndex = param_1->DynamicMeshBoundsIndex;
  this->TessellationDisablingShadowMapMeshSize = param_1->TessellationDisablingShadowMapMeshSize;
  this->SegmentIndex = param_1->SegmentIndex;
  this->MeshIdInPrimitive = param_1->MeshIdInPrimitive;
  this->LODIndex = param_1->LODIndex;
  uVar4 = (ZPULL(*(undefined4 *)&this->field_0xd4,0,1) ^ param_1->ReverseCulling) & 1 ^
          *(undefined4 *)&this->field_0xd4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 2 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 4 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 8 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x10 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x20 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x40 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x380 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x1c00 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x2000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x4000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x8000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x10000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x20000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x40000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x380000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x400000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x800000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x1000000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x2000000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x4000000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  *(uint *)&this->field_0xd4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x8000000 ^ uVar4;
  this->VisualizeHLODIndex = param_1->VisualizeHLODIndex;
  this->VisualizeLODIndex = param_1->VisualizeLODIndex;
  return this;
}

// ~FMeshBatch @ 14499ebf0

/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall FMeshBatch::~FMeshBatch(FMeshBatch *this)

{
  ForElementType<FMeshBatchElement> *pFVar1;
  ForElementType<FMeshBatchElement> FVar2;
  ForElementType<FMeshBatchElement> FVar3;
  
  pFVar1 = &(this->Elements).AllocatorInstance.SecondaryData;
  FVar2 = *pFVar1;
  FVar3 = (ForElementType<FMeshBatchElement>)this;
  if (FVar2 != (ForElementType<FMeshBatchElement>)0x0) {
    FVar3 = FVar2;
  }
  DestructItems<FMeshBatchElement,int>((FMeshBatchElement *)FVar3,(this->Elements).ArrayNum);
  FVar2 = *pFVar1;
  if (FVar2 != (ForElementType<FMeshBatchElement>)0x0) {
    FMemory::Free((void *)FVar2);
    return;
  }
  return;
}

// FMeshBatch @ 144eee900

FMeshBatch * __thiscall FMeshBatch::FMeshBatch(FMeshBatch *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ForElementType<FMeshBatchElement> FVar3;
  ForElementType<FMeshBatchElement> FVar4;
  
  (this->Elements).AllocatorInstance.SecondaryData = (ForElementType<FMeshBatchElement>)0x0;
  (this->Elements).ArrayNum = 0;
  (this->Elements).ArrayMax = 1;
  this->VertexFactory = (FVertexFactory *)0x0;
  this->MaterialRenderProxy = (FMaterialRenderProxy *)0x0;
  this->LCI = (FLightCacheInterface *)0x0;
  this->TessellationDisablingShadowMapMeshSize = 0.0;
  this->MeshIdInPrimitive = 0;
  this->BatchHitProxyId = -1;
  this->DynamicMeshBoundsIndex = -1;
  this->SegmentIndex = -1;
  puVar2 = &this->field_0xd4;
  this->ReverseCulling = 0;
  this->bUseForLumenSurfaceCacheCapture = 0;
  this->bUseForWaterInfoTextureDepth = 0;
  this->bViewDependentArguments = 0;
  this->bForceTwoSidedInRayTracing = 0;
  this->CastRayTracedShadow = 1;
  this->bOverlayMaterial = 0;
  this->RuntimeVirtualTextureMaterialType = 0;
  this->bRenderToVirtualTexture = 0;
  this->bDitheredLODTransition = 0;
  this->bSelectable = 1;
  this->bUseSelectionOutline = 1;
  this->bUseWireframeSelectionColoring = 0;
  this->bCanApplyViewModeOverrides = 0;
  this->DepthPriorityGroup = 0;
  this->Type = 0;
  this->bWireframe = 0;
  this->bUseAsOccluder = 1;
  this->bUseForDepthPass = 1;
  this->bUseForMaterial = 1;
  this->CastShadow = 1;
  this->bDisableBackfaceCulling = 0;
  this->LODIndex = -1;
  this->VisualizeHLODIndex = -1;
  this->VisualizeLODIndex = -1;
  (this->Elements).ArrayNum = 1;
  FVar3 = (this->Elements).AllocatorInstance.SecondaryData;
  FVar4 = (ForElementType<FMeshBatchElement>)this;
  if (FVar3 != (ForElementType<FMeshBatchElement>)0x0) {
    FVar4 = FVar3;
  }
  DefaultConstructItems<FMeshBatchElement,int>((void *)FVar4,1);
  return this;
}

// operator= @ 144ef1de0

/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FMeshBatch * __thiscall FMeshBatch::operator=(FMeshBatch *this,FMeshBatch *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<FMeshBatchElement> FVar3;
  uint uVar4;
  ForElementType<FMeshBatchElement> FVar5;
  ForElementType<FMeshBatchElement> FVar6;
  
  if (this != param_1) {
    FVar3 = (this->Elements).AllocatorInstance.SecondaryData;
    FVar5 = (ForElementType<FMeshBatchElement>)this;
    if (FVar3 != (ForElementType<FMeshBatchElement>)0x0) {
      FVar5 = FVar3;
    }
    DestructItems<FMeshBatchElement,int>((FMeshBatchElement *)FVar5,(this->Elements).ArrayNum);
    FVar3 = (param_1->Elements).AllocatorInstance.SecondaryData;
    piVar1 = &(this->Elements).ArrayMax;
    iVar2 = (param_1->Elements).ArrayNum;
    FVar5 = (ForElementType<FMeshBatchElement>)param_1;
    if (FVar3 != (ForElementType<FMeshBatchElement>)0x0) {
      FVar5 = FVar3;
    }
    (this->Elements).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 1;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>_>
                (0x98,8,iVar2,*piVar1,(ForElementType<FMeshBatchElement> *)this,iVar2,piVar1);
      FVar3 = (this->Elements).AllocatorInstance.SecondaryData;
      FVar6 = (ForElementType<FMeshBatchElement>)this;
      if (FVar3 != (ForElementType<FMeshBatchElement>)0x0) {
        FVar6 = FVar3;
      }
      ConstructItems<FMeshBatchElement,FMeshBatchElement,int>
                ((void *)FVar6,(FMeshBatchElement *)FVar5,iVar2);
    }
  }
  this->VertexFactory = param_1->VertexFactory;
  this->MaterialRenderProxy = param_1->MaterialRenderProxy;
  this->LCI = param_1->LCI;
  (this->BatchHitProxyId).Index = (param_1->BatchHitProxyId).Index;
  this->DynamicMeshBoundsIndex = param_1->DynamicMeshBoundsIndex;
  this->TessellationDisablingShadowMapMeshSize = param_1->TessellationDisablingShadowMapMeshSize;
  this->SegmentIndex = param_1->SegmentIndex;
  this->MeshIdInPrimitive = param_1->MeshIdInPrimitive;
  this->LODIndex = param_1->LODIndex;
  uVar4 = (ZPULL(*(undefined4 *)&this->field_0xd4,0,1) ^ param_1->ReverseCulling) & 1 ^
          *(undefined4 *)&this->field_0xd4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 2 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 4 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 8 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x10 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x20 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x40 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x380 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x1c00 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x2000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x4000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x8000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x10000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x20000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x40000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x380000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x400000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x800000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x1000000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x2000000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x4000000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  *(uint *)&this->field_0xd4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x8000000 ^ uVar4;
  this->VisualizeHLODIndex = param_1->VisualizeHLODIndex;
  this->VisualizeLODIndex = param_1->VisualizeLODIndex;
  return this;
}

// HasAnyDrawCalls @ 1452cd8d0

bool __thiscall FMeshBatch::HasAnyDrawCalls(FMeshBatch *this)

{
  ForElementType<FMeshBatchElement> FVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  ForElementType<FMeshBatchElement> FVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  
  uVar10 = 0;
  iVar13 = (this->Elements).ArrayNum;
  if (0 < iVar13) {
    lVar15 = 0;
    do {
      uVar9 = ~uVar10 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar10 < iVar13) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      FVar1 = (this->Elements).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<FMeshBatchElement>)this;
      if (FVar1 != (ForElementType<FMeshBatchElement>)0x0) {
        FVar8 = FVar1;
      }
      if (((*(uint *)(lVar15 + 0x7c + (longlong)FVar8) & 0x400) == 0) ||
         (lVar2 = *(longlong *)(lVar15 + 0x30 + (longlong)FVar8), lVar2 == 0)) {
        iVar13 = *(int *)(lVar15 + 0x60 + (longlong)FVar8) *
                 *(int *)(lVar15 + 0x5c + (longlong)FVar8);
      }
      else {
        uVar7 = *(uint *)(lVar15 + 0x60 + (longlong)FVar8);
        iVar13 = 0;
        iVar14 = 0;
        iVar11 = 0;
        uVar12 = 0;
        if (uVar7 < 2) {
          if (uVar7 != 0) {
            iVar11 = *(int *)(lVar15 + 0x5c + (longlong)FVar8);
            goto LAB_1452cda10;
          }
        }
        else {
          iVar11 = *(int *)(lVar15 + 0x5c + (longlong)FVar8);
          do {
            uVar4 = uVar12 * 2;
            uVar12 = uVar12 + 2;
            iVar13 = iVar13 + ((*(int *)(lVar2 + (ulonglong)(uVar4 + 1) * 4) -
                               *(int *)(lVar2 + (ulonglong)uVar4 * 4)) + 1) * iVar11;
            iVar14 = iVar14 + ((*(int *)(lVar2 + (ulonglong)(uVar4 + 3) * 4) -
                               *(int *)(lVar2 + (ulonglong)(uVar4 + 2) * 4)) + 1) * iVar11;
          } while (uVar12 < uVar7 - 1);
          if (uVar7 <= uVar12) {
            iVar13 = iVar13 + iVar14;
            goto LAB_1452cda3f;
          }
LAB_1452cda10:
          iVar11 = ((*(int *)(lVar2 + (ulonglong)(uVar12 * 2 + 1) * 4) -
                    *(int *)(lVar2 + (ulonglong)(uVar12 * 2) * 4)) + 1) * iVar11;
        }
        iVar13 = iVar13 + iVar14 + iVar11;
      }
LAB_1452cda3f:
      if (0 < iVar13) {
        return true;
      }
      uVar7 = 0;
      if ((int)uVar10 < (this->Elements).ArrayNum) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      FVar1 = (this->Elements).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<FMeshBatchElement>)this;
      if (FVar1 != (ForElementType<FMeshBatchElement>)0x0) {
        FVar8 = FVar1;
      }
      if (*(longlong *)(lVar15 + 0x48 + (longlong)FVar8) != 0) {
        return true;
      }
      uVar7 = 0;
      if ((int)uVar10 < (this->Elements).ArrayNum) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      FVar1 = (this->Elements).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<FMeshBatchElement>)this;
      if (FVar1 != (ForElementType<FMeshBatchElement>)0x0) {
        FVar8 = FVar1;
      }
      if ((*(uint *)(lVar15 + 0x7c + (longlong)FVar8) & 0x2000) != 0) {
        return true;
      }
      iVar13 = (this->Elements).ArrayNum;
      uVar10 = uVar10 + 1;
      lVar15 = lVar15 + 0x98;
    } while ((int)uVar10 < iVar13);
  }
  return false;
}

// GetNumPrimitives @ 145543ed0

int __thiscall FMeshBatch::GetNumPrimitives(FMeshBatch *this)

{
  ForElementType<FMeshBatchElement> FVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ForElementType<FMeshBatchElement> FVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  int local_res8;
  
  iVar7 = (this->Elements).ArrayNum;
  iVar13 = 0;
  uVar9 = 0;
  local_res8 = 0;
  if (0 < iVar7) {
    lVar12 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < iVar7) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
      FVar1 = (this->Elements).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<FMeshBatchElement>)this;
      if (FVar1 != (ForElementType<FMeshBatchElement>)0x0) {
        FVar8 = FVar1;
      }
      if (((*(uint *)(lVar12 + 0x7c + (longlong)FVar8) & 0x400) == 0) ||
         (lVar2 = *(longlong *)(lVar12 + 0x30 + (longlong)FVar8), lVar2 == 0)) {
        iVar13 = *(int *)(lVar12 + 0x60 + (longlong)FVar8) *
                 *(int *)(lVar12 + 0x5c + (longlong)FVar8);
      }
      else {
        uVar6 = *(uint *)(lVar12 + 0x60 + (longlong)FVar8);
        iVar10 = 0;
        iVar13 = 0;
        iVar7 = 0;
        uVar11 = 0;
        if (uVar6 < 2) {
          if (uVar6 != 0) {
            iVar7 = *(int *)(lVar12 + 0x5c + (longlong)FVar8);
            goto LAB_145544010;
          }
        }
        else {
          iVar7 = *(int *)(lVar12 + 0x5c + (longlong)FVar8);
          do {
            uVar4 = uVar11 * 2;
            uVar11 = uVar11 + 2;
            iVar10 = iVar10 + ((*(int *)(lVar2 + (ulonglong)(uVar4 + 1) * 4) -
                               *(int *)(lVar2 + (ulonglong)uVar4 * 4)) + 1) * iVar7;
            iVar13 = iVar13 + ((*(int *)(lVar2 + (ulonglong)(uVar4 + 3) * 4) -
                               *(int *)(lVar2 + (ulonglong)(uVar4 + 2) * 4)) + 1) * iVar7;
          } while (uVar11 < uVar6 - 1);
          if (uVar6 <= uVar11) {
            iVar13 = iVar13 + iVar10;
            goto LAB_14554403e;
          }
LAB_145544010:
          iVar7 = ((*(int *)(lVar2 + (ulonglong)(uVar11 * 2 + 1) * 4) -
                   *(int *)(lVar2 + (ulonglong)(uVar11 * 2) * 4)) + 1) * iVar7;
        }
        iVar13 = iVar13 + iVar10 + iVar7;
      }
LAB_14554403e:
      iVar7 = (this->Elements).ArrayNum;
      iVar13 = local_res8 + iVar13;
      uVar9 = uVar9 + 1;
      lVar12 = lVar12 + 0x98;
      local_res8 = iVar13;
    } while ((int)uVar9 < iVar7);
  }
  return iVar13;
}

