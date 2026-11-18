// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// ~FStaticLightingMesh @ 1479a91a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FStaticLightingMesh::~FStaticLightingMesh(FStaticLightingMesh *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)&this[-1].NumTriangles = &_vftable__for__FStaticLightingMesh__;
  *(undefined ***)
   ((longlong)*(int *)(*(longlong *)&this[-1].NumVertices + 4) + -0xe8 + (longlong)this) =
       &_vftable__for__FRefCountedObject__;
  DestructItems<TRefCountPtr<FStaticLightingMesh>,int>
            (*(TRefCountPtr<FStaticLightingMesh> **)&this[-1].HLODTreeIndex,
             this[-1].HLODChildEndIndex);
  if (*(void **)&this[-1].HLODTreeIndex != (void *)0x0) {
    FMemory::Free(*(void **)&this[-1].HLODTreeIndex);
  }
  if (this[-1].Component != (UPrimitiveComponent *)0x0) {
    FMemory::Free(this[-1].Component);
  }
  pFVar1 = this[-1].RelevantLightsGuid.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(void **)&this[-1].field_0x38 != (void *)0x0) {
    FMemory::Free(*(void **)&this[-1].field_0x38);
    return;
  }
  return;
}

// GetLightingGuid @ 1479ca9a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FGuid * __thiscall FStaticLightingMesh::GetLightingGuid(FStaticLightingMesh *this)

{
  return &this->Guid;
}

// GetShadingTriangle @ 1479d09b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FStaticLightingMesh::GetShadingTriangle
          (FStaticLightingMesh *this,int param_1,FStaticLightingVertex *param_2,
          FStaticLightingVertex *param_3,FStaticLightingVertex *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001479d09b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 8))();
  return;
}

// GetShadingTriangleIndices @ 1479d09c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FStaticLightingMesh::GetShadingTriangleIndices
          (FStaticLightingMesh *this,int param_1,int *param_2,int *param_3,int *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001479d09c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))();
  return;
}

// IsControllingShadowPerElement @ 1479da480

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FStaticLightingMesh::IsControllingShadowPerElement(FStaticLightingMesh *this)

{
  return false;
}

// IsTriangleCastingShadow @ 1479da8f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FStaticLightingMesh::IsTriangleCastingShadow(FStaticLightingMesh *this,uint param_1)

{
  return true;
}

// IsUniformShadowCaster @ 1479da900

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FStaticLightingMesh::IsUniformShadowCaster(FStaticLightingMesh *this)

{
  return this->bCastShadow;
}

// ShouldCastShadow @ 1479eda90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FStaticLightingMesh::ShouldCastShadow
          (FStaticLightingMesh *this,ULightComponent *param_1,FStaticLightingMapping *param_2)

{
  return this->bCastShadow;
}

// FStaticLightingMesh @ 147ea6610

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FStaticLightingMesh * __thiscall
FStaticLightingMesh::FStaticLightingMesh
          (FStaticLightingMesh *this,int param_1,int param_2,int param_3,int param_4,int param_5,
          bool param_6,bool param_7,TArray<ULightComponent_*,TSizedDefaultAllocator<32>_> *param_8,
          UPrimitiveComponent *param_9,TBox<double> *param_10,FGuid *param_11,FGuid *param_12)

{
  TArray<ULightComponent_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  undefined8 uVar10;
  uint uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar uVar18;
  uint uVar19;
  TArray<ULightComponent_*,TSizedDefaultAllocator<32>_> *pTVar20;
  UPrimitiveComponent *pUVar21;
  bool bVar22;
  int iVar23;
  FStaticLightingMesh *pFVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  FScriptContainerElement *pFVar27;
  
  pUVar21 = param_9;
  pTVar20 = param_8;
  *(undefined ***)this = &_vftable__for__FStaticLightingMesh__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 4)) =
       &_vftable__for__FRefCountedObject__;
  this->NumShadingVertices = param_4;
  this->TextureCoordinateIndex = param_5;
  this->NumTriangles = param_1;
  this->NumShadingTriangles = param_2;
  this->NumVertices = param_3;
  (this->VisibilityIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VisibilityIds).ArrayNum = 0;
  (this->VisibilityIds).ArrayMax = 0;
  if ((!param_6) || (uVar25 = 1, param_9->bCastStaticShadow == '\0')) {
    uVar25 = 0;
  }
  this->bCastShadow = 0;
  pTVar1 = &this->RelevantLights;
  uVar3 = *(uint *)&this->field_0x38;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *(uint *)&this->field_0x38 = uVar25 | uVar3 & 0xfffffffd | (uint)param_7 * 2;
  piVar2 = &(this->RelevantLights).ArrayMax;
  iVar4 = param_8->ArrayNum;
  pFVar5 = (param_8->AllocatorInstance).Data;
  (this->RelevantLights).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 3);
  }
  (this->RelevantLightsGuid).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RelevantLightsGuid).ArrayNum = 0;
  (this->RelevantLightsGuid).ArrayMax = 0;
  this->Component = pUVar21;
  uVar25 = param_12->B;
  uVar3 = param_12->C;
  uVar11 = param_12->D;
  (this->ComponentGuid).A = param_12->A;
  (this->ComponentGuid).B = uVar25;
  (this->ComponentGuid).C = uVar3;
  (this->ComponentGuid).D = uVar11;
  dVar9 = (param_10->Min).field0_0x0._s_0.Y;
  (this->BoundingBox).Min.field0_0x0._s_0.X = (param_10->Min).field0_0x0._s_0.X;
  (this->BoundingBox).Min.field0_0x0._s_0.Y = dVar9;
  dVar9 = (param_10->Max).field0_0x0._s_0.X;
  (this->BoundingBox).Min.field0_0x0._s_0.Z = (param_10->Min).field0_0x0._s_0.Z;
  (this->BoundingBox).Max.field0_0x0._s_0.X = dVar9;
  dVar9 = (param_10->Max).field0_0x0._s_0.Z;
  (this->BoundingBox).Max.field0_0x0._s_0.Y = (param_10->Max).field0_0x0._s_0.Y;
  (this->BoundingBox).Max.field0_0x0._s_0.Z = dVar9;
  uVar12 = param_10->Pad[0];
  uVar13 = param_10->Pad[1];
  uVar14 = param_10->Pad[2];
  uVar15 = param_10->Pad[3];
  uVar16 = param_10->Pad[4];
  uVar17 = param_10->Pad[5];
  uVar18 = param_10->Pad[6];
  (this->BoundingBox).IsValid = param_10->IsValid;
  (this->BoundingBox).Pad[0] = uVar12;
  (this->BoundingBox).Pad[1] = uVar13;
  (this->BoundingBox).Pad[2] = uVar14;
  (this->BoundingBox).Pad[3] = uVar15;
  (this->BoundingBox).Pad[4] = uVar16;
  (this->BoundingBox).Pad[5] = uVar17;
  (this->BoundingBox).Pad[6] = uVar18;
  FGuid::NewGuid(&this->Guid);
  uVar25 = param_11->A;
  uVar3 = param_11->B;
  uVar11 = param_11->C;
  uVar19 = param_11->D;
  this->HLODTreeIndex = 0;
  this->HLODChildStartIndex = 0;
  this->HLODChildEndIndex = 0;
  (this->SourceMeshGuid).A = uVar25;
  (this->SourceMeshGuid).B = uVar3;
  (this->SourceMeshGuid).C = uVar11;
  (this->SourceMeshGuid).D = uVar19;
  (this->OtherMeshLODs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OtherMeshLODs).ArrayNum = 0;
  (this->OtherMeshLODs).ArrayMax = 0;
  pFVar27 = (pTVar20->AllocatorInstance).Data;
  iVar4 = pTVar20->ArrayNum;
  pFVar5 = pFVar27 + (longlong)iVar4 * 8;
  while( true ) {
    if (pTVar20->ArrayNum != iVar4) {
      param_6 = false;
      `TCheckedPointerIterator<ULightComponent_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&param_6);
    }
    if (pFVar27 == pFVar5) break;
    lVar6 = *(longlong *)pFVar27;
    pFVar7 = (this->RelevantLightsGuid).AllocatorInstance.Data;
    pFVar26 = (FScriptContainerElement *)(lVar6 + 0x260);
    if ((pFVar7 <= pFVar26) &&
       (pFVar26 < pFVar7 + (longlong)(this->RelevantLightsGuid).ArrayMax * 0x10)) {
      bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar22) {
        pcVar8 = (code *)swi(3);
        pFVar24 = (FStaticLightingMesh *)(*pcVar8)();
        return pFVar24;
      }
    }
    iVar23 = (this->RelevantLightsGuid).ArrayNum;
    if (iVar23 == (this->RelevantLightsGuid).ArrayMax) {
      iVar23 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,&(this->RelevantLightsGuid).AllocatorInstance,
                          &(this->RelevantLightsGuid).ArrayMax);
    }
    (this->RelevantLightsGuid).ArrayNum = iVar23 + 1;
    uVar10 = *(undefined8 *)(lVar6 + 0x268);
    pFVar27 = pFVar27 + 8;
    pFVar7 = (this->RelevantLightsGuid).AllocatorInstance.Data + (longlong)iVar23 * 0x10;
    *(undefined8 *)pFVar7 = *(undefined8 *)pFVar26;
    *(undefined8 *)(pFVar7 + 8) = uVar10;
  }
  return this;
}

// FStaticLightingMesh @ 147ea68a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FStaticLightingMesh * __thiscall FStaticLightingMesh::FStaticLightingMesh(FStaticLightingMesh *this)

{
  undefined1 *puVar1;
  
  *(undefined ***)this = &_vftable__for__FStaticLightingMesh__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 4)) =
       &_vftable__for__FRefCountedObject__;
  this->bCastShadow = 0;
  this->bTwoSidedMaterial = 0;
  this->NumTriangles = 0;
  this->NumShadingTriangles = 0;
  this->NumVertices = 0;
  this->NumShadingVertices = 0;
  this->TextureCoordinateIndex = 0;
  (this->VisibilityIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VisibilityIds).ArrayNum = 0;
  (this->VisibilityIds).ArrayMax = 0;
  (this->RelevantLights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RelevantLights).ArrayNum = 0;
  (this->RelevantLights).ArrayMax = 0;
  (this->RelevantLightsGuid).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RelevantLightsGuid).ArrayNum = 0;
  (this->RelevantLightsGuid).ArrayMax = 0;
  this->Component = (UPrimitiveComponent *)0x0;
  (this->ComponentGuid).A = 0;
  (this->ComponentGuid).B = 0;
  (this->ComponentGuid).C = 0;
  (this->ComponentGuid).D = 0;
  (this->BoundingBox).IsValid = '\0';
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  (this->SourceMeshGuid).A = 0;
  (this->SourceMeshGuid).B = 0;
  (this->SourceMeshGuid).C = 0;
  (this->SourceMeshGuid).D = 0;
  (this->OtherMeshLODs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OtherMeshLODs).ArrayNum = 0;
  (this->OtherMeshLODs).ArrayMax = 0;
  return this;
}

// Serialize @ 147edb9b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FStaticLightingMesh::Serialize(FStaticLightingMesh *this,FArchive *param_1)

{
  UE::Math::operator<<(param_1,&this->BoundingBox);
  ::operator<<(param_1,&this->Guid);
  ::operator<<(param_1,&this->ComponentGuid);
  TArrayPrivateFriend::Serialize<FGuid,TSizedDefaultAllocator<32>_>
            (param_1,&this->RelevantLightsGuid);
  ::operator<<(param_1,&this->SourceMeshGuid);
  return;
}

