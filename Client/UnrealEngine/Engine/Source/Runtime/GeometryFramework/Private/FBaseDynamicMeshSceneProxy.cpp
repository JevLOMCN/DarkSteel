// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 25

// UpdateVertexBuffersFromOverlays<TArray<int,TSizedDefaultAllocator<32>_>_> @ 1496f5fe0

void __thiscall
FBaseDynamicMeshSceneProxy::
UpdateVertexBuffersFromOverlays<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FBaseDynamicMeshSceneProxy *this,FMeshRenderBufferSet *param_1,FDynamicMesh3 *param_2,
          int param_3,TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_5,
          TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *param_6,
          TFunctionRef<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>
          *param_7,bool param_8,bool param_9,bool param_10)

{
  TFunctionRef<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>
  local_18;
  
  local_18._0_8_ = *(undefined8 *)param_7;
  local_18._8_8_ = *(undefined8 *)&param_7->field_0x8;
  FMeshRenderBufferSetConversionUtil::
  UpdateVertexBuffersFromOverlays<TArray<int,TSizedDefaultAllocator<32>_>_>
            (&this->MeshRenderBufferSetConverter,param_1,param_2,param_3,param_4,param_5,param_6,
             &local_18,param_8,param_9,param_10);
  return;
}

// FBaseDynamicMeshSceneProxy @ 1496f8530

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FBaseDynamicMeshSceneProxy * __thiscall
FBaseDynamicMeshSceneProxy::FBaseDynamicMeshSceneProxy
          (FBaseDynamicMeshSceneProxy *this,UBaseDynamicMeshComponent *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  EDynamicMeshVertexColorTransformMode EVar5;
  EShaderPlatform EVar6;
  FColor_u_0 *pFVar7;
  undefined8 local_res8;
  undefined1 local_res10 [4];
  byte local_res14;
  
  local_res8 = 0;
  FPrimitiveSceneProxy::FPrimitiveSceneProxy
            ((FPrimitiveSceneProxy *)this,(UPrimitiveComponent *)param_1,(FName)0x0);
  this->ParentBaseComponent = param_1;
  this->_padding_ = (longlong)&___7FBaseDynamicMeshSceneProxy__6B_;
  (this->MeshRenderBufferSetConverter).ConstantVertexColor.field0_0x0._s_0 =
       (FColor_u_0_s_0)FColor::White.field0_0x0;
  *(undefined8 *)&(this->MeshRenderBufferSetConverter).PerTriangleColorFunc = 0;
  *(undefined8 *)&(this->MeshRenderBufferSetConverter).PerTriangleColorFunc.field_0x28 = 0;
  *(undefined8 *)&(this->MeshRenderBufferSetConverter).VertexColorRemappingFunc = 0;
  *(undefined8 *)&(this->MeshRenderBufferSetConverter).VertexColorRemappingFunc.field_0x28 = 0;
  *(undefined8 *)&(this->MeshRenderBufferSetConverter).SecondaryTriFilterFunc = 0;
  *(undefined8 *)&(this->MeshRenderBufferSetConverter).SecondaryTriFilterFunc.field_0x28 = 0;
  (this->MeshRenderBufferSetConverter).bIgnoreVertexColors = false;
  (this->MeshRenderBufferSetConverter).bUsePerTriangleColor = false;
  (this->MeshRenderBufferSetConverter).bApplyVertexColorRemapping = false;
  (this->MeshRenderBufferSetConverter).ColorSpaceTransformMode = NoTransform;
  (this->MeshRenderBufferSetConverter).bUsePerTriangleNormals = false;
  (this->MeshRenderBufferSetConverter).bUseSecondaryTriBuffers = false;
  *(undefined8 *)&(this->AllocatedBufferSets).Elements = 0;
  *(undefined8 *)&(this->AllocatedBufferSets).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AllocatedBufferSets).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AllocatedBufferSets).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AllocatedBufferSets).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AllocatedBufferSets).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllocatedBufferSets).Elements.field_0x34 = 0;
  (this->AllocatedBufferSets).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AllocatedBufferSets).HashSize = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->AllocatedSetsLock,4000);
  bVar3 = (bool)(**(code **)(param_1->_padding_ + 3000))(param_1);
  this->bTwoSided = bVar3;
  bVar3 = (bool)(**(code **)(param_1->_padding_ + 0xc88))(param_1);
  this->bEnableRaytracing = bVar3;
  bVar3 = (bool)(**(code **)(param_1->_padding_ + 0xbe8))(param_1);
  this->bEnableViewModeOverrides = bVar3;
  cVar4 = (**(code **)(param_1->_padding_ + 0xca8))(param_1);
  (this->MeshCards).Ptr = (FCardRepresentationData *)0x0;
  this->bMeshCardsValid = false;
  (this->DistanceField).Object = (FDistanceFieldVolumeData *)0x0;
  (this->DistanceField).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bPreferStaticDrawPath = cVar4 == '\x01';
  this->bDistanceFieldValid = false;
  this->bOwnerIsNull = true;
  this->bHasCollisionData = false;
  this->bHasComplexMeshData = false;
  FCollisionResponseContainer::FCollisionResponseContainer(&this->CollisionResponse);
  (this->CachedAggGeom).SphereElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedAggGeom).SphereElems.ArrayNum = 0;
  (this->CachedAggGeom).SphereElems.ArrayMax = 0;
  (this->CachedAggGeom).BoxElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedAggGeom).BoxElems.ArrayNum = 0;
  (this->CachedAggGeom).BoxElems.ArrayMax = 0;
  (this->CachedAggGeom).SphylElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedAggGeom).SphylElems.ArrayNum = 0;
  (this->CachedAggGeom).SphylElems.ArrayMax = 0;
  (this->CachedAggGeom).ConvexElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedAggGeom).ConvexElems.ArrayNum = 0;
  (this->CachedAggGeom).ConvexElems.ArrayMax = 0;
  (this->CachedAggGeom).TaperedCapsuleElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedAggGeom).TaperedCapsuleElems.ArrayNum = 0;
  (this->CachedAggGeom).TaperedCapsuleElems.ArrayMax = 0;
  (this->CachedAggGeom).LevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedAggGeom).LevelSetElems.ArrayNum = 0;
  (this->CachedAggGeom).LevelSetElems.ArrayMax = 0;
  (this->CachedAggGeom).SkinnedLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->CachedAggGeom).SkinnedLevelSetElems.ArrayNum = 0;
  (this->CachedAggGeom).SkinnedLevelSetElems.ArrayMax = 0;
  (this->CachedAggGeom).MLLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedAggGeom).MLLevelSetElems.ArrayNum = 0;
  (this->CachedAggGeom).MLLevelSetElems.ArrayMax = 0;
  (this->CachedAggGeom).SkinnedTriangleMeshElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedAggGeom).SkinnedTriangleMeshElems.ArrayNum = 0;
  (this->CachedAggGeom).SkinnedTriangleMeshElems.ArrayMax = 0;
  (this->CachedAggGeom).RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  (this->CachedAggGeom).RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CachedCollisionLock,4000);
  EVar5 = (**(code **)(param_1->_padding_ + 0xba8))(param_1);
  (this->MeshRenderBufferSetConverter).ColorSpaceTransformMode = EVar5;
  cVar4 = (**(code **)(param_1->_padding_ + 0xb88))(param_1);
  if (cVar4 == '\x03') {
    pFVar7 = (FColor_u_0 *)(**(code **)(param_1->_padding_ + 0xb98))(param_1,&local_res8);
    (this->MeshRenderBufferSetConverter).ConstantVertexColor.field0_0x0 = *pFVar7;
    (this->MeshRenderBufferSetConverter).bIgnoreVertexColors = true;
  }
  bVar3 = (bool)(**(code **)(param_1->_padding_ + 0xbc8))(param_1);
  (this->MeshRenderBufferSetConverter).bUsePerTriangleNormals = bVar3;
  SetCollisionData(this);
  pcVar2 = *(code **)(param_1->_padding_ + 0xaa8);
  EVar6 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
  (*pcVar2)(param_1,local_res10,EVar6);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 & 0xf7;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 & 0xfe;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 | (local_res14 & 4) * '\x02';
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xdf;
  FPrimitiveSceneProxy::UpdateVisibleInLumenScene((FPrimitiveSceneProxy *)this);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 | 4;
  return this;
}

// ~FBaseDynamicMeshSceneProxy @ 1496fab60

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
FBaseDynamicMeshSceneProxy::~FBaseDynamicMeshSceneProxy(FBaseDynamicMeshSceneProxy *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 *puVar4;
  FCardRepresentationData *pFVar5;
  ForElementType<FSetElementId> FVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar14 = 0;
  puVar1 = &(this->AllocatedBufferSets).Elements.field_0x10;
  this->_padding_ = (longlong)&___7FBaseDynamicMeshSceneProxy__6B_;
  iVar3 = *(int *)&(this->AllocatedBufferSets).Elements.field_0x28;
  iVar16 = 0;
  uVar9 = 1;
  iVar10 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->AllocatedBufferSets).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar10 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1496fac0d;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar9 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iVar10 = local_res10 + -1 + iVar16;
    if (iVar3 < iVar10) {
      iVar10 = iVar3;
    }
  }
LAB_1496fac0d:
  uVar13 = *(uint *)&(this->AllocatedBufferSets).Elements.field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar9,iVar14);
  TStack_60.CurrentBitIndex = iVar10;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iVar10;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->AllocatedBufferSets).Elements.field_0x8 -
                       *(int *)&(this->AllocatedBufferSets).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar9 = *(uint *)&(this->AllocatedBufferSets).Elements.field_0x28;
  if (uVar13 != uVar9) {
    puVar15 = *(undefined1 **)&(this->AllocatedBufferSets).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1496fad10;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar9 < (int)uVar13) {
      uVar13 = uVar9;
    }
  }
LAB_1496fad10:
  while( true ) {
    if (*(int *)&(this->AllocatedBufferSets).Elements.field_0x8 -
        *(int *)&(this->AllocatedBufferSets).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<FMeshRenderBufferSet_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    puVar4 = *(undefined8 **)
              (*(longlong *)&(this->AllocatedBufferSets).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (*(int *)(puVar4 + 1) != 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CachedCollisionLock);
  FKAggregateGeom::~FKAggregateGeom(&this->CachedAggGeom);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DistanceField).SharedReferenceCount.ReferenceController);
  pFVar5 = (this->MeshCards).Ptr;
  if (pFVar5 != (FCardRepresentationData *)0x0) {
    (**(code **)&pFVar5[-1].MeshCardsBuildData.DebugData.NumSurfels)
              (&pFVar5[-1].MeshCardsBuildData.DebugData.NumSurfels);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->AllocatedSetsLock);
  (this->AllocatedBufferSets).HashSize = 0;
  FVar6 = (this->AllocatedBufferSets).Hash.SecondaryData;
  if (FVar6 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  TSparseArray<TSparseSetElement<FMeshRenderBufferSet_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FMeshRenderBufferSet_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AllocatedBufferSets).Elements);
  FMeshRenderBufferSetConversionUtil::~FMeshRenderBufferSetConversionUtil
            (&this->MeshRenderBufferSetConverter);
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  return;
}

// AllocateNewRenderBufferSet @ 149702790

FMeshRenderBufferSet * __thiscall
FBaseDynamicMeshSceneProxy::AllocateNewRenderBufferSet(FBaseDynamicMeshSceneProxy *this)

{
  EBufferUsageFlags *pEVar1;
  Type TVar2;
  bool bVar3;
  FMeshRenderBufferSet *pFVar4;
  UMaterial *pUVar5;
  FMeshRenderBufferSet *local_res8;
  FMeshRenderBufferSet *local_res10;
  
  pFVar4 = ::operator_new(0x670);
  if (pFVar4 == (FMeshRenderBufferSet *)0x0) {
    pFVar4 = (FMeshRenderBufferSet *)0x0;
  }
  else {
    TVar2 = *(Type *)(this->_padding_ + 8);
    pFVar4->_padding_ = (longlong)&___7FMeshRenderBufferSet__6B_;
    pFVar4->TriangleCount = 0;
    FStaticMeshVertexBuffer::FStaticMeshVertexBuffer(&pFVar4->StaticMeshVertexBuffer);
    FPositionVertexBuffer::FPositionVertexBuffer(&pFVar4->PositionVertexBuffer);
    FColorVertexBuffer::FColorVertexBuffer(&pFVar4->ColorVertexBuffer);
    FDynamicMeshIndexBuffer32::FDynamicMeshIndexBuffer32(&pFVar4->IndexBuffer);
    FLocalVertexFactory::FLocalVertexFactory(&pFVar4->VertexFactory,TVar2,"FMeshRenderBufferSet");
    pFVar4->Material = (UMaterialInterface *)0x0;
    (pFVar4->Triangles).field0_0x0.TypedValue.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (pFVar4->Triangles).field0_0x0.TypedValue.ArrayNum = 0;
    (pFVar4->Triangles).field0_0x0.TypedValue.ArrayMax = -1;
    pFVar4->bEnableSecondaryIndexBuffer = false;
    FDynamicMeshIndexBuffer32::FDynamicMeshIndexBuffer32(&pFVar4->SecondaryIndexBuffer);
    pFVar4->bEnableRaytracing = false;
    FRayTracingGeometry::FRayTracingGeometry(&pFVar4->PrimaryRayTracingGeometry);
    FRayTracingGeometry::FRayTracingGeometry(&pFVar4->SecondaryRayTracingGeometry);
    pFVar4->bIsRayTracingDataValid = false;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar4->BuffersLock,4000);
    pEVar1 = &(pFVar4->IndexBuffer).UsageFlags;
    *pEVar1 = *pEVar1 | ShaderResource;
    pEVar1 = &(pFVar4->SecondaryIndexBuffer).UsageFlags;
    *pEVar1 = *pEVar1 | ShaderResource;
    (pFVar4->StaticMeshVertexBuffer).bUseFullPrecisionUVs = true;
    (pFVar4->StaticMeshVertexBuffer).bUseHighPrecisionTangentBasis = true;
  }
  local_res10 = pFVar4;
  pUVar5 = UMaterial::GetDefaultMaterial(MD_Surface);
  pFVar4->Material = (UMaterialInterface *)pUVar5;
  if ((this->bEnableRaytracing == false) || ((this->_padding_ & 0x2000000) == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  pFVar4->bEnableRaytracing = bVar3;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->AllocatedSetsLock);
  TSet<FMeshRenderBufferSet_*,DefaultKeyFuncs<FMeshRenderBufferSet_*,0>,FDefaultSetAllocator>::
  Emplace<FMeshRenderBufferSet_*_const_&>
            (&this->AllocatedBufferSets,&local_res8,(bool *)&local_res10);
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->AllocatedSetsLock);
  return pFVar4;
}

// AllowStaticDrawPath @ 149702950

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FBaseDynamicMeshSceneProxy::AllowStaticDrawPath
          (FBaseDynamicMeshSceneProxy *this,FSceneView *param_1)

{
  FSceneViewFamily *pFVar1;
  bool bVar2;
  bool local_res18 [8];
  bool local_res20 [8];
  
  bVar2 = AllowDebugViewmodes();
  if (!bVar2) {
    return true;
  }
  pFVar1 = param_1->Family;
  local_res18[0] = (bool)(**(code **)(this->ParentBaseComponent->_padding_ + 0xb78))();
  if (((((((pFVar1->EngineShowFlags).Wireframe == 0) && (local_res18[0] == false)) &&
        ((bVar2 = IsCollisionView(this,&pFVar1->EngineShowFlags,local_res18,local_res20),
         (pFVar1->EngineShowFlags).Collision == 0 || ((this->_padding_ & 0x20000000) == 0)))) &&
       ((local_res18[0] == false && (!bVar2)))) &&
      (((this->_padding_ & 0x600) == 0 || ((pFVar1->EngineShowFlags).VertexColors == 0)))) &&
     (this->ParentBaseComponent->ColorMode == None)) {
    return true;
  }
  return false;
}

// ComputeDistanceFieldForMesh @ 149706320

TUniquePtr<FDistanceFieldVolumeData,TDefaultDelete<FDistanceFieldVolumeData>_> __cdecl
FBaseDynamicMeshSceneProxy::ComputeDistanceFieldForMesh
          (FDynamicMesh3 *param_1,FProgressCancel *param_2,float param_3,bool param_4)

{
  param_1->_padding_ = 0;
  return (TUniquePtr<FDistanceFieldVolumeData,TDefaultDelete<FDistanceFieldVolumeData>_>)
         (FDistanceFieldVolumeData *)param_1;
}

// DrawBatch @ 149707c60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FBaseDynamicMeshSceneProxy::DrawBatch
          (FBaseDynamicMeshSceneProxy *this,FMeshElementCollector *param_1,
          FMeshRenderBufferSet *param_2,FDynamicMeshIndexBuffer32 *param_3,
          FMaterialRenderProxy *param_4,bool param_5,ESceneDepthPriorityGroup param_6,int param_7,
          FDynamicPrimitiveUniformBuffer *param_8)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ForElementType<FMeshBatchElement> FVar8;
  uint uVar9;
  FMeshBatch *this_00;
  byte *pbVar10;
  ForElementType<FMeshBatchElement> FVar11;
  undefined1 local_res8 [8];
  
  FVar8 = (ForElementType<FMeshBatchElement>)FMeshElementCollector::AllocateMesh(param_1);
  if (*(int *)((longlong)FVar8 + 0xa0) < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar11 = FVar8;
  if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar8 + 0x98) !=
      (ForElementType<FMeshBatchElement>)0x0) {
    FVar11 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar8 + 0x98);
  }
  *(FDynamicMeshIndexBuffer32 **)((longlong)FVar11 + 0x18) = param_3;
  *(uint *)((longlong)FVar8 + 0xd4) = *(uint *)((longlong)FVar8 + 0xd4) & 0xffffffbf;
  *(uint *)((longlong)FVar8 + 0xd4) = *(uint *)((longlong)FVar8 + 0xd4) | (uint)param_5 << 6;
  bVar5 = this->bTwoSided;
  *(FLocalVertexFactory **)((longlong)FVar8 + 0xa8) = &param_2->VertexFactory;
  *(FMaterialRenderProxy **)((longlong)FVar8 + 0xb0) = param_4;
  *(uint *)((longlong)FVar8 + 0xd4) =
       ((uint)bVar5 * 2 ^ *(uint *)((longlong)FVar8 + 0xd4)) & 2 ^ *(uint *)((longlong)FVar8 + 0xd4)
  ;
  *(TUniformBuffer<FPrimitiveUniformShaderParameters> **)((longlong)FVar11 + 8) =
       &param_8->UniformBuffer;
  *(undefined4 *)((longlong)FVar11 + 0x58) = 0;
  iVar3 = (param_3->Indices).ArrayNum;
  *(undefined4 *)((longlong)FVar11 + 0x68) = 0;
  *(int *)((longlong)FVar11 + 0x5c) =
       iVar3 / 3 + (iVar3 >> 0x1f) +
       (int)(((longlong)iVar3 / 3 + ((longlong)iVar3 >> 0x3f) & 0xffffffffU) >> 0x1f);
  *(uint *)((longlong)FVar11 + 0x6c) = (param_2->PositionVertexBuffer).NumVertices - 1;
  uVar9 = ((byte)this->_padding_ & 1 ^ *(uint *)((longlong)FVar8 + 0xd4) & 0xfffffffe) & 0xfffffc7f;
  uVar9 = (param_6 << 10 ^ uVar9) & 0x1c00 ^ uVar9;
  *(uint *)((longlong)FVar8 + 0xd4) = uVar9;
  if (param_5) {
    uVar6 = 0;
  }
  else {
    uVar6 = (uint)this->bEnableViewModeOverrides;
  }
  *(uint *)((longlong)FVar8 + 0xd4) = (uVar6 << 0xd ^ uVar9) & 0x2000 ^ uVar9;
  pbVar10 = (byte *)this->_padding_;
  iVar3 = (int)this->_padding_;
  pbVar1 = pbVar10 + iVar3;
  while( true ) {
    if ((int)this->_padding_ != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<enum_ERuntimeVirtualTextureMaterialType_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pbVar10 == pbVar1) break;
    bVar2 = *pbVar10;
    iVar7 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
            ::Add(&param_1->MeshBatchStorage,1);
    uVar9 = iVar7 / 0x49;
    uVar6 = 0;
    if ((int)uVar9 < (param_1->MeshBatchStorage).Chunks.Array.ArrayNum) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    this_00 = (FMeshBatch *)
              ((longlong)(param_1->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data[(int)uVar9]
              + (ulonglong)(uint)(iVar7 % 0x49) * 0xe0);
    FMeshBatch::operator=(this_00,(FMeshBatch *)FVar8);
    uVar9 = *(uint *)&this_00->field_0xd4 & 0xfffdffc3 | 0x40000;
    *(uint *)&this_00->field_0xd4 = ((uint)bVar2 << 0x13 ^ uVar9) & 0x380000 ^ uVar9;
    FMeshElementCollector::AddMesh(param_1,param_7,this_00);
    pbVar10 = pbVar10 + 1;
  }
  FMeshElementCollector::AddMesh(param_1,param_7,(FMeshBatch *)FVar8);
  return;
}

// DrawRayTracingBatch @ 149707f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FBaseDynamicMeshSceneProxy::DrawRayTracingBatch
          (FBaseDynamicMeshSceneProxy *this,FRayTracingInstanceCollector *param_1,
          FMeshRenderBufferSet *param_2,FDynamicMeshIndexBuffer32 *param_3,
          FRayTracingGeometry *param_4,FMaterialRenderProxy *param_5,
          ESceneDepthPriorityGroup param_6,FDynamicPrimitiveUniformBuffer *param_7)

{
  int iVar1;
  uint uVar2;
  FSceneView *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  void *_Src;
  FMeshRenderBufferSet *pFVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ForElementType<FMeshBatchElement> FVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auStackY_278 [32];
  ForAnyElementType local_220;
  undefined8 local_218;
  FMeshBatch *local_210;
  int iStack_208;
  undefined4 uStack_204;
  undefined8 local_200;
  void *local_1f8;
  undefined8 local_1f0;
  uint *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  ForAnyElementType local_1d8;
  undefined8 local_1d0;
  TMatrix<double> *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  uint local_1b8;
  FScriptContainerElement *local_1b0;
  FMeshRenderBufferSet *local_1a8;
  FMaterialRenderProxy *local_1a0;
  FRayTracingInstance local_198;
  FMeshBatch local_128;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_1a0 = param_5;
  local_1a8 = param_2;
  if (((param_4->Initializer).IndexBuffer.Reference == (FRHIBuffer *)0x0) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9194726726704300802>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\BaseDynamicMeshSceneProxy.cpp"
                         ,0x302,"RayTracingGeometry.Initializer.IndexBuffer.IsValid()"), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = (param_1->Views).ArrayNum;
  local_1b0 = (param_1->Views).AllocatorInstance.Data;
  if ((iVar1 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = param_1->VisibilityMap;
  local_1b8 = 0;
  if (uVar2 != 0) {
    for (; (uVar2 >> local_1b8 & 1) == 0; local_1b8 = local_1b8 + 1) {
    }
  }
  uVar13 = 0x20;
  if (uVar2 != 0) {
    uVar13 = local_1b8;
  }
  if ((((int)uVar13 < 0) || (iVar1 <= (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Views.IsValidIndex(FirstActiveViewIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\BaseDynamicMeshSceneProxy.cpp"
                         ,0x30a,
                         L"There should be at least one active view when calling GetDynamicRayTracingInstances(...)."
                        ), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = 0;
  if ((int)uVar13 < iVar1) {
    uVar8 = ~uVar13 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = *(FSceneView **)(local_1b0 + (longlong)(int)uVar13 * 8);
  local_220.Data = (FScriptContainerElement *)0x0;
  local_210 = (FMeshBatch *)0x0;
  iStack_208 = 0;
  local_1f8 = (void *)0x0;
  local_1e8 = (uint *)0x0;
  iStack_1e0 = 0;
  local_1d8.Data = (FScriptContainerElement *)0x0;
  local_1c8 = (TMatrix<double> *)0x0;
  iStack_1c0 = 0;
  local_218 = 0;
  local_200 = 0x1000000;
  local_1f0 = 0;
  local_1d0 = 0;
  iVar9 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1080,&local_1d8,(int *)((longlong)&local_1d0 + 4));
  lVar12 = this->_padding_;
  local_1d0 = CONCAT44(local_1d0._4_4_,iVar9 + 1);
  lVar10 = (longlong)iVar9 * 0x80;
  *(longlong *)(local_1d8.Data + lVar10) = this->_padding_;
  *(longlong *)(local_1d8.Data + lVar10 + 8) = lVar12;
  lVar12 = this->_padding_;
  *(longlong *)(local_1d8.Data + lVar10 + 0x10) = this->_padding_;
  *(longlong *)(local_1d8.Data + lVar10 + 0x10 + 8) = lVar12;
  lVar12 = this->_padding_;
  *(longlong *)(local_1d8.Data + lVar10 + 0x20) = this->_padding_;
  *(longlong *)(local_1d8.Data + lVar10 + 0x20 + 8) = lVar12;
  lVar12 = this->_padding_;
  *(longlong *)(local_1d8.Data + lVar10 + 0x30) = this->_padding_;
  *(longlong *)(local_1d8.Data + lVar10 + 0x30 + 8) = lVar12;
  lVar12 = this->_padding_;
  *(longlong *)(local_1d8.Data + lVar10 + 0x40) = this->_padding_;
  *(longlong *)(local_1d8.Data + lVar10 + 0x40 + 8) = lVar12;
  lVar12 = this->_padding_;
  *(longlong *)(local_1d8.Data + lVar10 + 0x50) = this->_padding_;
  *(longlong *)(local_1d8.Data + lVar10 + 0x50 + 8) = lVar12;
  lVar12 = this->_padding_;
  *(longlong *)(local_1d8.Data + lVar10 + 0x60) = this->_padding_;
  *(longlong *)(local_1d8.Data + lVar10 + 0x60 + 8) = lVar12;
  lVar12 = this->_padding_;
  *(longlong *)(local_1d8.Data + lVar10 + 0x70) = this->_padding_;
  *(longlong *)(local_1d8.Data + lVar10 + 0x70 + 8) = lVar12;
  FMeshBatch::FMeshBatch(&local_128);
  pFVar6 = local_1a8;
  local_128.SegmentIndex = 0;
  local_128.VertexFactory = (FVertexFactory *)&local_1a8->VertexFactory;
  local_128.MaterialRenderProxy = local_1a0;
  local_128.bCanApplyViewModeOverrides = (uint)this->bEnableViewModeOverrides;
  local_128.DepthPriorityGroup = param_6;
  local_128.Type = 0;
  bVar7 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,pFVar3);
  uVar13 = 0;
  local_128._212_4_ = (uint)bVar7 << 0x17 | local_128._212_4_ & 0xff7fffff;
  if ((local_128.Elements.ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar11 = (ForElementType<FMeshBatchElement>)&local_128;
  if (local_128.Elements.AllocatorInstance.SecondaryData != (ForElementType<FMeshBatchElement>)0x0)
  {
    FVar11 = local_128.Elements.AllocatorInstance.SecondaryData;
  }
  *(TUniformBuffer<FPrimitiveUniformShaderParameters> **)((longlong)FVar11 + 8) =
       &param_7->UniformBuffer;
  *(FDynamicMeshIndexBuffer32 **)((longlong)FVar11 + 0x18) = param_3;
  *(uint *)((longlong)FVar11 + 0x58) = 0;
  iVar9 = (param_3->Indices).ArrayNum;
  *(uint *)((longlong)FVar11 + 0x68) = 0;
  *(int *)((longlong)FVar11 + 0x5c) =
       iVar9 / 3 + (iVar9 >> 0x1f) +
       (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >> 0x1f);
  *(uint *)((longlong)FVar11 + 0x6c) = (pFVar6->PositionVertexBuffer).NumVertices - 1;
  if (((local_220.Data <= &local_128) &&
      (&local_128 < (FMeshBatch *)(local_220.Data + (longlong)local_218._4_4_ * 0xe0))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar9 = (int)local_218;
  if ((int)local_218 == local_218._4_4_) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8e0,&local_220,(int *)((longlong)&local_218 + 4));
  }
  local_218 = CONCAT44(local_218._4_4_,iVar9 + 1);
  FMeshBatch::FMeshBatch((FMeshBatch *)(local_220.Data + (longlong)iVar9 * 0xe0),&local_128);
  if (0 < iVar1) {
    do {
      FVar5.Data = local_220.Data;
      if ((uVar2 >> (uVar13 & 0x1f) & 1) != 0) {
        iVar9 = (int)local_218;
        local_198.Geometry = param_4;
        local_198.Materials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_198.Materials.ArrayNum = (int)local_218;
        if ((int)local_218 == 0) {
          local_198.Materials.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xe0,8,(int)local_218,0,&local_198.Materials.AllocatorInstance,(int)local_218,
                     &local_198.Materials.ArrayMax);
          ConstructItems<FMeshBatch,FMeshBatch,int>
                    (local_198.Materials.AllocatorInstance.Data,(FMeshBatch *)FVar5.Data,iVar9);
        }
        _Src = local_1f8;
        lVar12 = (longlong)(int)local_1f0;
        local_198.bApplyLocalBoundsTransform = (bool)(undefined1)local_200;
        local_198.bThinGeometry = (bool)local_200._1_1_;
        local_198.InstanceLayer = local_200._2_1_;
        local_198.bInstanceMaskAndFlagsDirty = (bool)local_200._3_1_;
        local_198.NumTransforms = local_200._4_4_;
        local_198.PrimitiveInstanceIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_198.PrimitiveInstanceIndices.ArrayNum = (int)local_1f0;
        local_198.MaterialsView._12_4_ = uStack_204;
        local_198.MaterialsView.ArrayNum = iStack_208;
        local_198.MaterialsView.DataPtr = local_210;
        if ((int)local_1f0 == 0) {
          local_198.PrimitiveInstanceIndices.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,(int)local_1f0,0,&local_198.PrimitiveInstanceIndices.AllocatorInstance,
                     (int)local_1f0,&local_198.PrimitiveInstanceIndices.ArrayMax);
          memcpy(local_198.PrimitiveInstanceIndices.AllocatorInstance.Data,_Src,lVar12 << 2);
        }
        FVar5.Data = local_1d8.Data;
        lVar12 = (longlong)(int)local_1d0;
        local_198.PrimitiveInstanceIndicesView._12_4_ = uStack_1dc;
        local_198.PrimitiveInstanceIndicesView.ArrayNum = iStack_1e0;
        local_198.InstanceTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_198.InstanceTransforms.ArrayNum = (int)local_1d0;
        local_198.PrimitiveInstanceIndicesView.DataPtr = local_1e8;
        if ((int)local_1d0 == 0) {
          local_198.InstanceTransforms.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x80,0x10,(int)local_1d0,0,&local_198.InstanceTransforms.AllocatorInstance,
                     (int)local_1d0,&local_198.InstanceTransforms.ArrayMax);
          memcpy(local_198.InstanceTransforms.AllocatorInstance.Data,FVar5.Data,lVar12 << 7);
        }
        local_198.InstanceTransformsView._12_4_ = uStack_1bc;
        local_198.InstanceTransformsView.ArrayNum = iStack_1c0;
        local_198.InstanceTransformsView.DataPtr = local_1c8;
        FRayTracingInstanceCollector::AddRayTracingInstance(param_1,uVar13,&local_198);
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < iVar1);
  }
  FVar11 = (ForElementType<FMeshBatchElement>)&local_128;
  if (local_128.Elements.AllocatorInstance.SecondaryData != (ForElementType<FMeshBatchElement>)0x0)
  {
    FVar11 = local_128.Elements.AllocatorInstance.SecondaryData;
  }
  DestructItems<FMeshBatchElement,int>((FMeshBatchElement *)FVar11,local_128.Elements.ArrayNum);
  if (local_128.Elements.AllocatorInstance.SecondaryData != (ForElementType<FMeshBatchElement>)0x0)
  {
    FMemory::Free((void *)local_128.Elements.AllocatorInstance.SecondaryData);
  }
  if (local_1d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data);
  }
  if (local_1f8 != (void *)0x0) {
    FMemory::Free(local_1f8);
  }
  DestructItems<FMeshBatch,int>((FMeshBatch *)local_220.Data,(int)local_218);
  if ((FMeshBatch *)local_220.Data != (FMeshBatch *)0x0) {
    FMemory::Free(local_220.Data);
  }
  return;
}

// DrawStaticElements @ 149708530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FBaseDynamicMeshSceneProxy::DrawStaticElements
          (FBaseDynamicMeshSceneProxy *this,FStaticPrimitiveDrawInterface *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  bool bVar10;
  char cVar11;
  bool bVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FBaseDynamicMeshSceneProxy::DrawStaticElements(FStaticPrimitiveDrawInterface_*)_::_2_::FStat_STAT_BaseDynamicMeshSceneProxy_DrawStaticElements>
  FVar14;
  longlong *plVar15;
  FMaterialRenderProxy *pFVar16;
  ulonglong uVar17;
  ForElementType<FMeshBatchElement> FVar18;
  FName FVar19;
  byte *pbVar20;
  FName FVar21;
  FName FVar22;
  undefined1 auStackY_2d8 [32];
  undefined1 local_277;
  undefined1 local_276 [6];
  FName local_270;
  int local_268;
  FName local_260;
  undefined8 local_258;
  FColor_u_0 local_250;
  int local_24c;
  uint local_248;
  FName local_240;
  FName local_238;
  FName local_228;
  FName local_220;
  FName local_218;
  FMeshBatch local_210;
  FMeshBatch local_130;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_BaseDynamicMeshSceneProxy_DrawStaticElements ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FBaseDynamicMeshSceneProxy::DrawStaticElements(FStaticPrimitiveDrawInterface_*)_::_2_::FStat_STAT_BaseDynamicMeshSceneProxy_DrawStaticElements>
         )0x0) {
      pFVar13 = ::FName::FName(&local_220,"STAT_BaseDynamicMeshSceneProxy_DrawStaticElements");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_BaseDynamicMeshSceneProxy_DrawStaticElements,*pFVar13,
                 L"STAT_BaseDynamicMeshSceneProxy_DrawStaticElements","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar14 = StatPtr_STAT_BaseDynamicMeshSceneProxy_DrawStaticElements;
  if (StatPtr_STAT_BaseDynamicMeshSceneProxy_DrawStaticElements ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FBaseDynamicMeshSceneProxy::DrawStaticElements(FStaticPrimitiveDrawInterface_*)_::_2_::FStat_STAT_BaseDynamicMeshSceneProxy_DrawStaticElements>
       )0x0) {
    pFVar13 = ::FName::FName(&local_218,"STAT_BaseDynamicMeshSceneProxy_DrawStaticElements");
    FVar14 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FBaseDynamicMeshSceneProxy::DrawStaticElements(FStaticPrimitiveDrawInterface_*)_::_2_::FStat_STAT_BaseDynamicMeshSceneProxy_DrawStaticElements>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_BaseDynamicMeshSceneProxy_DrawStaticElements,*pFVar13,
                          L"STAT_BaseDynamicMeshSceneProxy_DrawStaticElements","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar14;
  bVar6 = false;
  bVar8 = false;
  local_238.ComparisonIndex.Value = 0;
  local_238.Number = 0;
  bVar10 = false;
  bVar12 = false;
  if ((FVar21.ComparisonIndex.Value.Value != 0) ||
     (bVar5 = bVar6, bVar7 = bVar8, FVar21.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_250.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_250._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar6 = false;
      bVar8 = true;
      bVar10 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_240.ComparisonIndex.Value = FVar21.ComparisonIndex.Value.Value;
        local_240.Number = FVar21.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_240,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\BaseDynamicMeshSceneProxy.cpp"
                   ,0x22f);
        bVar6 = true;
        bVar8 = true;
        bVar10 = true;
        bVar12 = true;
      }
    }
    bVar5 = bVar6;
    bVar7 = bVar8;
    if (FThreadStats::bPrimaryEnable != false) {
      local_270 = FVar21;
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar10 = true;
      goto LAB_1497086bb;
    }
  }
  bVar8 = bVar12;
  bVar6 = bVar10;
  bVar10 = false;
  FVar21 = local_238;
LAB_1497086bb:
  if (this->bPreferStaticDrawPath != false) {
    cVar11 = (**(code **)(this->ParentBaseComponent->_padding_ + 0xc20))();
    if (cVar11 != '\0') {
      (**(code **)(this->ParentBaseComponent->_padding_ + 0xc28))();
    }
    (**(code **)(this->ParentBaseComponent->_padding_ + 0xc38))();
    iVar2 = (int)this->_padding_;
    local_260.ComparisonIndex.Value = 0;
    local_260.Number = 0;
    local_258 = 0;
    local_24c = iVar2;
    (**(code **)(this->_padding_ + 600))(this,&local_260);
    (**(code **)((longlong)*param_1 + 0x10))(param_1,(iVar2 + 1) * (uint)local_258);
    uVar9 = __real_7f7fffff;
    uVar17 = (ulonglong)(int)(uint)local_258;
    local_268 = 0;
    local_248 = (uint)local_258;
    FVar19 = (FName)((longlong)local_260 + uVar17 * 8);
    FVar22 = local_260;
    local_228 = FVar19;
    while( true ) {
      local_270 = FVar22;
      if ((uint)local_258 != (int)uVar17) {
        local_277 = 0;
        `TCheckedPointerIterator<FMeshRenderBufferSet_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_277);
      }
      if (FVar22 == FVar19) break;
      lVar3 = *(longlong *)FVar22;
      if (*(int *)(lVar3 + 8) != 0) {
        plVar15 = *(longlong **)(lVar3 + 0x3d8);
        cVar11 = (**(code **)(this->ParentBaseComponent->_padding_ + 0xc00))
                           (this->ParentBaseComponent,0);
        if (cVar11 != '\0') {
          plVar15 = (longlong *)
                    (**(code **)(this->ParentBaseComponent->_padding_ + 0xc08))
                              (this->ParentBaseComponent,0);
        }
        pFVar16 = (FMaterialRenderProxy *)(**(code **)(*plVar15 + 0x310))(plVar15);
        lpCriticalSection = (LPCRITICAL_SECTION)(lVar3 + 0x648);
        if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection(lpCriticalSection);
        local_210.Elements.ArrayMax = 1;
        local_210.Elements.AllocatorInstance.SecondaryData = (ForElementType<FMeshBatchElement>)0x0;
        local_210.LCI = (FLightCacheInterface *)0x0;
        local_210.TessellationDisablingShadowMapMeshSize = 0.0;
        local_210.MeshIdInPrimitive = 0;
        local_210.BatchHitProxyId.Index = -1;
        local_210.DynamicMeshBoundsIndex = -1;
        local_210.bUseForLumenSurfaceCacheCapture = 0;
        local_210.bUseForWaterInfoTextureDepth = 0;
        local_210.bViewDependentArguments = 0;
        local_210.bForceTwoSidedInRayTracing = 0;
        local_210.CastRayTracedShadow = 1;
        local_210.bOverlayMaterial = 0;
        local_210.RuntimeVirtualTextureMaterialType = 0;
        local_210.bRenderToVirtualTexture = 0;
        local_210.bDitheredLODTransition = 0;
        local_210.bSelectable = 1;
        local_210.bUseSelectionOutline = 1;
        local_210.bUseWireframeSelectionColoring = 0;
        local_210.bCanApplyViewModeOverrides = 0;
        local_210.DepthPriorityGroup = 0;
        local_210.Type = 0;
        local_210.bWireframe = 0;
        local_210.bUseAsOccluder = 1;
        local_210.bUseForDepthPass = 1;
        local_210.bUseForMaterial = 1;
        local_210.CastShadow = 1;
        local_210.bDisableBackfaceCulling = 0;
        local_210.ReverseCulling = 0;
        local_210.SegmentIndex = -1;
        local_210.VertexFactory = (FVertexFactory *)0x0;
        local_210.MaterialRenderProxy = (FMaterialRenderProxy *)0x0;
        local_210.LODIndex = -1;
        local_210.VisualizeHLODIndex = -1;
        local_210.VisualizeLODIndex = -1;
        local_210.Elements.ArrayNum = 1;
        DefaultConstructItems<FMeshBatchElement,int>(&local_210,1);
        if ((local_210.Elements.ArrayNum < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar18 = (ForElementType<FMeshBatchElement>)&local_210;
        if (local_210.Elements.AllocatorInstance.SecondaryData !=
            (ForElementType<FMeshBatchElement>)0x0) {
          FVar18 = local_210.Elements.AllocatorInstance.SecondaryData;
        }
        *(FIndexBuffer **)((longlong)FVar18 + 0x18) = (FIndexBuffer *)(lVar3 + 0x168);
        local_210.VertexFactory = (FVertexFactory *)(lVar3 + 0x1a8);
        local_210.MaterialRenderProxy = pFVar16;
        *(longlong *)FVar18 = this->_padding_;
        iVar2 = *(int *)(lVar3 + 0x198);
        *(int *)((longlong)FVar18 + 0x5c) =
             iVar2 / 3 + (iVar2 >> 0x1f) +
             (int)(((longlong)iVar2 / 3 + ((longlong)iVar2 >> 0x3f) & 0xffffffffU) >> 0x1f);
        *(uint *)((longlong)FVar18 + 0x58) = 0;
        *(uint *)((longlong)FVar18 + 0x68) = 0;
        *(uint *)((longlong)FVar18 + 0x6c) = *(int *)(lVar3 + 0x10c) - 1;
        local_210.SegmentIndex = local_268;
        local_210.MeshIdInPrimitive = (ushort)local_268;
        local_210.LODIndex = '\0';
        local_268 = local_268 + 1;
        local_210.LCI = (FLightCacheInterface *)0x0;
        local_210._212_4_ =
             ((this->bEnableViewModeOverrides & 1) << 0xc |
             *(byte *)((longlong)&this->_padding_ + 5) & 0x10) * 2 | (byte)this->_padding_ & 1 |
             local_210._212_4_ & 0xfffdc05e | 0x1c;
        if (0 < local_24c) {
          FMeshBatch::FMeshBatch(&local_130,&local_210);
          pbVar20 = (byte *)this->_padding_;
          iVar2 = (int)this->_padding_;
          local_130._212_4_ = local_130._212_4_ & 0xfffdffc3 | 0x40000;
          pbVar1 = pbVar20 + iVar2;
          while( true ) {
            if ((int)this->_padding_ != iVar2) {
              local_276[0] = 0;
              `TCheckedPointerIterator<enum_ERuntimeVirtualTextureMaterialType,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_276);
            }
            if (pbVar20 == pbVar1) break;
            local_130.RuntimeVirtualTextureMaterialType = (uint)*pbVar20;
            (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_130,uVar9);
            pbVar20 = pbVar20 + 1;
          }
          FVar18 = (ForElementType<FMeshBatchElement>)&local_130;
          if (local_130.Elements.AllocatorInstance.SecondaryData !=
              (ForElementType<FMeshBatchElement>)0x0) {
            FVar18 = local_130.Elements.AllocatorInstance.SecondaryData;
          }
          DestructItems<FMeshBatchElement,int>
                    ((FMeshBatchElement *)FVar18,local_130.Elements.ArrayNum);
          FVar22 = local_270;
          if (local_130.Elements.AllocatorInstance.SecondaryData !=
              (ForElementType<FMeshBatchElement>)0x0) {
            FMemory::Free((void *)local_130.Elements.AllocatorInstance.SecondaryData);
            FVar22 = local_270;
          }
        }
        (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_210,uVar9);
        FVar18 = (ForElementType<FMeshBatchElement>)&local_210;
        if (local_210.Elements.AllocatorInstance.SecondaryData !=
            (ForElementType<FMeshBatchElement>)0x0) {
          FVar18 = local_210.Elements.AllocatorInstance.SecondaryData;
        }
        DestructItems<FMeshBatchElement,int>
                  ((FMeshBatchElement *)FVar18,local_210.Elements.ArrayNum);
        if (local_210.Elements.AllocatorInstance.SecondaryData !=
            (ForElementType<FMeshBatchElement>)0x0) {
          FMemory::Free((void *)local_210.Elements.AllocatorInstance.SecondaryData);
        }
        LeaveCriticalSection(lpCriticalSection);
        FVar19 = local_228;
      }
      uVar17 = (ulonglong)local_248;
      FVar22 = (FName)((longlong)FVar22 + 8);
    }
    bVar5 = bVar6;
    bVar7 = bVar8;
    if (local_260 != (FName)0x0) {
      FMemory::Free((void *)local_260);
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar21,CycleScopeEnd);
  }
  return;
}

// GetCollisionDynamicMeshElements @ 14970eaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FBaseDynamicMeshSceneProxy::GetCollisionDynamicMeshElements
          (FBaseDynamicMeshSceneProxy *this,
          TArray<FMeshRenderBufferSet_*,TSizedDefaultAllocator<32>_> *param_1,
          FEngineShowFlags *param_2,bool param_3,bool param_4,bool param_5,bool param_6,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_7,uint param_8,
          FMeshElementCollector *param_9)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  byte bVar1;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar2;
  code *pcVar3;
  double dVar4;
  FName FVar5;
  FName FVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  bool bVar14;
  FNameEntryId FVar15;
  FColoredMaterialRenderProxy *this_00;
  undefined4 extraout_var;
  FMaterialRenderProxy *pFVar16;
  FColoredMaterialRenderProxy *pFVar17;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar18;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar19;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar20;
  float *pfVar21;
  longlong lVar22;
  undefined4 extraout_var_00;
  FLinearColor *this_01;
  byte *pbVar23;
  ulonglong uVar24;
  longlong lVar25;
  int iVar26;
  TTransform<double> *pTVar27;
  FScriptContainerElement *pFVar28;
  UMaterial *pUVar29;
  FMeshElementCollector *pFVar30;
  FColor_u_0 FVar31;
  uint uVar32;
  FScriptContainerElement *pFVar33;
  uint uVar34;
  uint uVar35;
  undefined1 auStackY_6b8 [32];
  bool bVar36;
  undefined4 local_664;
  undefined1 local_660;
  undefined1 local_65f;
  bool local_65e;
  byte local_65c [4];
  uint local_658;
  FEngineShowFlags *local_650;
  uint local_648;
  FColor_u_0 local_644;
  FColor_u_0 local_640;
  FMeshElementCollector *local_638;
  TArray<FMeshRenderBufferSet_*,TSizedDefaultAllocator<32>_> *local_630;
  FNameEntryId local_628;
  uint uStack_624;
  FColoredMaterialRenderProxy *local_620;
  FNameEntryId local_618;
  uint uStack_614;
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *local_610;
  float local_608;
  float fStack_604;
  float fStack_600;
  float fStack_5fc;
  FLinearColor_u_0 local_5f8;
  undefined1 local_5e8 [4];
  undefined1 local_5e4 [4];
  FScriptContainerElement *local_5e0;
  FLinearColor_u_0 local_5d8;
  FLinearColor_u_0 local_5c8;
  FLinearColor local_5b8;
  TTransform<double> local_5a8;
  TTransform<double> local_548;
  undefined1 local_4e8 [664];
  float local_250 [114];
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_6b8;
  lpCriticalSection = &this->CachedCollisionLock;
  local_65e = param_6;
  local_610 = param_7;
  local_638 = param_9;
  local_650 = param_2;
  local_630 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar12 = _UNK_150689648;
  uVar11 = ___xmm_3f800000000000000000000000000000;
  fVar10 = __real_3b808081;
  uVar9 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar8 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar7 = __real_3e45798ee0000000;
  if (this->bHasCollisionData != false) {
    local_664 = 0xff9d95df;
    local_65c[0] = 0xff;
    local_65c[1] = 0xff;
    local_65c[2] = 0;
    local_65c[3] = 0xff;
    local_658 = 0;
    iVar26 = local_610->ArrayNum;
    if (0 < iVar26) {
      do {
        uVar32 = local_658;
        if ((param_8 >> (local_658 & 0x1f) & 1) != 0) {
          uVar34 = 0;
          if ((int)local_658 < iVar26) {
            uVar34 = ~local_658 >> 0x1f;
          }
          if ((uVar34 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          bVar13 = AllowDebugViewmodes();
          if (bVar13) {
            if (((param_2->Collision == 0) || ((this->_padding_ & 0x20000000) == 0)) ||
               (this->CollisionTraceFlag != CTF_UseComplexAsSimple)) {
              bVar13 = false;
            }
            else {
              bVar13 = true;
            }
            if ((this->bHasComplexMeshData != false) && ((bVar13 || ((param_3 && (param_5)))))) {
              local_65f = !param_3;
              UMaterial::GetDefaultMaterial(MD_Surface);
              _local_608 = this->_padding_;
              _fStack_600 = this->_padding_;
              if (param_3) {
                pUVar29 = (GEngine->ShadedLevelColorationUnlitMaterial).field0_0x0.DebugPtr;
              }
              else {
                pUVar29 = (GEngine->WireframeMaterial).field0_0x0.DebugPtr;
                pbVar23 = (byte *)&local_664;
                if (this->CollisionTraceFlag != CTF_UseComplexAsSimple) {
                  pbVar23 = local_65c;
                }
                fStack_604 = FLinearColor::sRGBToLinearTable[pbVar23[1]];
                local_608 = FLinearColor::sRGBToLinearTable[pbVar23[2]];
                fStack_5fc = (float)pbVar23[3] * fVar10;
                fStack_600 = FLinearColor::sRGBToLinearTable[*pbVar23];
              }
              this_00 = ::operator_new(0xe0);
              pFVar17 = (FColoredMaterialRenderProxy *)0x0;
              if (this_00 != (FColoredMaterialRenderProxy *)0x0) {
                FVar15 = FNameEntryId::FromValidEName((EName)local_5e8);
                uStack_624 = 0;
                local_628.Value = *(uint *)CONCAT44(extraout_var,FVar15.Value);
                pFVar16 = (FMaterialRenderProxy *)(**(code **)(pUVar29->_padding_ + 0x310))(pUVar29)
                ;
                FVar5.Number = uStack_624;
                FVar5.ComparisonIndex.Value = local_628.Value;
                pFVar17 = FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                                    (this_00,pFVar16,(FLinearColor *)&local_608,FVar5);
              }
              pFVar30 = local_638;
              local_620 = pFVar17;
              FMeshElementCollector::RegisterOneFrameMaterialProxy
                        (local_638,(FMaterialRenderProxy *)pFVar17);
              local_648 = param_1->ArrayNum;
              uVar24 = (ulonglong)(int)local_648;
              pFVar33 = (param_1->AllocatorInstance).Data;
              pFVar28 = pFVar33 + uVar24 * 8;
              local_5e0 = pFVar28;
              while( true ) {
                if (param_1->ArrayNum != (int)uVar24) {
                  local_660 = 0;
                  `TCheckedPointerIterator<FMeshRenderBufferSet_*,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(&local_660);
                }
                param_2 = local_650;
                param_9 = local_638;
                if (pFVar33 == pFVar28) break;
                lVar22 = *(longlong *)pFVar33;
                if (*(int *)(lVar22 + 8) != 0) {
                  lpCriticalSection_00 = (LPCRITICAL_SECTION)(lVar22 + 0x648);
                  if (lpCriticalSection_00 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::ReportNotNullPtr();
                  }
                  EnterCriticalSection(lpCriticalSection_00);
                  paVar2 = &pFVar30->OneFrameResources->Next;
                  aVar18 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                            )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc
                                       (0x50,8);
                  *(undefined8 *)((longlong)aVar18 + 8) = 0;
                  *(undefined ***)aVar18 =
                       &
                       ___7__TObject_VFDynamicPrimitiveUniformBuffer_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
                  ;
                  TVar19.Next = *paVar2;
                  do {
                    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                      *)((longlong)aVar18 + 8) = TVar19.Next;
                    LOCK();
                    aVar20 = *paVar2;
                    bVar13 = TVar19.Next == aVar20;
                    if (bVar13) {
                      *paVar2 = aVar18;
                      aVar20 = TVar19.Next;
                    }
                    UNLOCK();
                    TVar19.Next = aVar20;
                  } while (!bVar13);
                  FDynamicPrimitiveUniformBuffer::FDynamicPrimitiveUniformBuffer
                            ((FDynamicPrimitiveUniformBuffer *)((longlong)aVar18 + 0x10));
                  lVar25 = 9;
                  local_4e8._368_8_ = uVar11;
                  local_4e8._376_8_ = uVar12;
                  pfVar21 = &(((FPrimitiveUniformShaderParametersBuilder *)local_4e8)->Parameters).
                             CustomPrimitiveData.Elements[0].field0_0x0._s_0.Z;
                  local_4e8._448_8_ = uVar11;
                  local_4e8._456_8_ = uVar12;
                  do {
                    ((TVector4<float>_u_0_s_0 *)(pfVar21 + -2))->X = 0.0;
                    ((TVector4<float>_u_0_s_0 *)(pfVar21 + -2))->Y = 0.0;
                    *pfVar21 = 0.0;
                    pfVar21[1] = 1.0;
                    pfVar21 = pfVar21 + 4;
                    lVar25 = lVar25 + -1;
                  } while (lVar25 != 0);
                  FPrimitiveSceneProxy::BuildUniformShaderParameters
                            ((FPrimitiveSceneProxy *)this,
                             (FPrimitiveUniformShaderParametersBuilder *)local_4e8);
                  pFVar30 = local_638;
                  if ((local_638->RHICmdList == (FRHICommandList *)0x0) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("RHICmdList",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                                          ,0x46,L""), bVar13)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  FDynamicPrimitiveUniformBuffer::Set
                            ((FDynamicPrimitiveUniformBuffer *)((longlong)aVar18 + 0x10),
                             (FRHICommandListBase *)pFVar30->RHICmdList,
                             (FPrimitiveUniformShaderParametersBuilder *)local_4e8);
                  uVar32 = local_658;
                  if (0 < *(int *)(lVar22 + 0x198)) {
                    (**(code **)(this->_padding_ + 0x298))(this,pFVar30,lVar22);
                  }
                  LeaveCriticalSection(lpCriticalSection_00);
                  pFVar28 = local_5e0;
                }
                uVar24 = (ulonglong)local_648;
                pFVar33 = pFVar33 + 8;
                param_1 = local_630;
              }
            }
          }
          if (((param_2->Collision == 0) || ((this->_padding_ & 0x20000000) == 0)) ||
             (this->CollisionTraceFlag == CTF_UseComplexAsSimple)) {
            bVar13 = false;
          }
          else {
            bVar13 = true;
          }
          if (((param_4) || (bVar13)) &&
             ((lVar22 = (**(code **)(this->ParentBaseComponent->_padding_ + 0x800))(), lVar22 != 0
              && (dVar4 = UE::Math::TMatrix<double>::Determinant
                                    ((TMatrix<double> *)&this->_padding_),
                 uVar34 = SUB84(dVar4,0) & uVar8, uVar35 = (uint)((ulonglong)dVar4 >> 0x20) & uVar9,
                 param_2 = local_650,
                 dVar7 <= (double)CONCAT44(uVar35,uVar34) &&
                 (double)CONCAT44(uVar35,uVar34) != dVar7)))) {
            bVar14 = AllowDebugViewmodes();
            if ((!bVar14) || (bVar13)) {
              UE::Math::TTransform<double>::SetFromMatrix
                        (&local_548,(TMatrix<double> *)&this->_padding_);
              bVar1 = *(byte *)((longlong)&this->_padding_ + 2);
              if (((char)bVar1 < '\0') ||
                 ((((bVar1 & 0x10) != 0 || ((bVar1 & 3) == 3)) || ((bVar1 & 0x60) != 0)))) {
                bVar13 = true;
              }
              else {
                bVar13 = false;
              }
              bVar14 = this->bOwnerIsNull;
              local_5f8._s_0.R = FLinearColor::sRGBToLinearTable[local_664._2_1_];
              local_5f8._s_0.G = FLinearColor::sRGBToLinearTable[local_664._1_1_];
              local_5f8._s_0.B = FLinearColor::sRGBToLinearTable[(byte)local_664];
              local_5f8._s_0.A = (float)(local_664 >> 0x18) * fVar10;
              this_01 = GetSelectionColor(&local_5b8,(FLinearColor *)&local_5f8._s_0,local_65e,
                                          (bool)(*(byte *)((longlong)&this->_padding_ + 1) >> 4 & 1)
                                          ,true);
              FLinearColor::ToFColorSRGB(this_01);
              pTVar27 = &local_548;
              pFVar17 = (FColoredMaterialRenderProxy *)0x0;
              bVar36 = false;
              FVar31 = local_640;
            }
            else {
              pFVar17 = ::operator_new(0xe0);
              if (pFVar17 == (FColoredMaterialRenderProxy *)0x0) {
                pFVar17 = (FColoredMaterialRenderProxy *)0x0;
              }
              else {
                FVar15 = FNameEntryId::FromValidEName((EName)local_5e4);
                local_5d8._s_0.R = (float)*(undefined4 *)&this->_padding_;
                local_5d8._s_0.G = *(float *)((longlong)&this->_padding_ + 4);
                local_5d8._s_0.B = (float)*(undefined4 *)&this->_padding_;
                local_5d8._s_0.A = *(float *)((longlong)&this->_padding_ + 4);
                uStack_614 = 0;
                local_618.Value = *(uint *)CONCAT44(extraout_var_00,FVar15.Value);
                pFVar16 = (FMaterialRenderProxy *)
                          (**(code **)(((GEngine->ShadedLevelColorationUnlitMaterial).field0_0x0.
                                       DebugPtr)->_padding_ + 0x310))();
                FVar6.Number = uStack_614;
                FVar6.ComparisonIndex.Value = local_618.Value;
                pFVar17 = FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                                    (pFVar17,pFVar16,(FLinearColor *)&local_5d8._s_0,FVar6);
              }
              FMeshElementCollector::RegisterOneFrameMaterialProxy
                        (param_9,(FMaterialRenderProxy *)pFVar17);
              UE::Math::TTransform<double>::SetFromMatrix
                        (&local_5a8,(TMatrix<double> *)&this->_padding_);
              bVar1 = *(byte *)((longlong)&this->_padding_ + 2);
              if ((((char)bVar1 < '\0') || ((bVar1 & 0x10) != 0)) ||
                 (((bVar1 & 3) == 3 || ((bVar1 & 0x60) != 0)))) {
                bVar13 = true;
              }
              else {
                bVar13 = false;
              }
              local_5c8._0_8_ = this->_padding_;
              local_5c8._8_8_ = this->_padding_;
              FLinearColor::ToFColorSRGB((FLinearColor *)&local_5c8._s_0);
              pTVar27 = &local_5a8;
              bVar36 = true;
              bVar14 = false;
              FVar31 = local_644;
            }
            FKAggregateGeom::GetAggGeom
                      (&this->CachedAggGeom,pTVar27,(FColor)FVar31,(FMaterialRenderProxy *)pFVar17,
                       bVar14,bVar36,bVar13,uVar32,param_9);
            param_2 = local_650;
            param_1 = local_630;
          }
        }
        local_658 = uVar32 + 1;
        iVar26 = local_610->ArrayNum;
      } while ((int)local_658 < iVar26);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// GetDynamicMeshElements @ 14970f380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FBaseDynamicMeshSceneProxy::GetDynamicMeshElements
          (FBaseDynamicMeshSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  FDynamicPrimitiveUniformBuffer *this_00;
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  int iVar2;
  longlong lVar3;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  UMaterialInterface *pUVar9;
  FMeshElementCollector *pFVar10;
  longlong *plVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  FNameEntryId FVar16;
  uint uVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FBaseDynamicMeshSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_BaseDynamicMeshSceneProxy_GetDynamicMeshElements>
  FVar19;
  longlong *plVar20;
  FLinearColor *pFVar21;
  FColoredMaterialRenderProxy *this_01;
  undefined4 extraout_var;
  FMaterialRenderProxy *pFVar22;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar23;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar24;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar25;
  float *pfVar26;
  ulonglong uVar27;
  longlong lVar28;
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *pTVar29;
  byte bVar30;
  UBaseDynamicMeshComponent **ppUVar31;
  FName FVar32;
  FName FVar33;
  undefined8 uVar34;
  code *pcVar35;
  undefined1 auStackY_5f8 [32];
  char local_598;
  bool local_593;
  bool local_592 [2];
  uint local_590;
  undefined1 local_58c;
  char local_58b;
  uint local_588;
  FMeshElementCollector *local_580;
  UBaseDynamicMeshComponent **local_578;
  FDynamicPrimitiveUniformBuffer *local_570;
  FName local_568;
  FColoredMaterialRenderProxy *local_560;
  FMaterialRenderProxy *local_558;
  longlong *local_550;
  undefined8 local_548;
  FColor_u_0 local_540;
  uint local_53c;
  longlong *local_538;
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *local_530;
  FName local_528;
  FNameEntryId local_520;
  uint uStack_51c;
  FMaterialRenderProxy *local_518;
  FName local_510;
  undefined1 local_500 [8];
  longlong *local_4f8;
  FName local_4f0;
  FName local_4e8;
  FLinearColor_u_0 local_4e0;
  undefined1 local_4c8 [664];
  float local_230 [114];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_5f8;
  bVar6 = false;
  local_580 = param_4;
  local_588 = param_3;
  local_530 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_BaseDynamicMeshSceneProxy_GetDynamicMeshElements ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FBaseDynamicMeshSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_BaseDynamicMeshSceneProxy_GetDynamicMeshElements>
         )0x0) {
      pFVar18 = ::FName::FName(&local_4f0,"STAT_BaseDynamicMeshSceneProxy_GetDynamicMeshElements");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_BaseDynamicMeshSceneProxy_GetDynamicMeshElements,*pFVar18,
                 L"STAT_BaseDynamicMeshSceneProxy_GetDynamicMeshElements","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar19 = StatPtr_STAT_BaseDynamicMeshSceneProxy_GetDynamicMeshElements;
  if (StatPtr_STAT_BaseDynamicMeshSceneProxy_GetDynamicMeshElements ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FBaseDynamicMeshSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_BaseDynamicMeshSceneProxy_GetDynamicMeshElements>
       )0x0) {
    pFVar18 = ::FName::FName(&local_4e8,"STAT_BaseDynamicMeshSceneProxy_GetDynamicMeshElements");
    FVar19 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FBaseDynamicMeshSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_BaseDynamicMeshSceneProxy_GetDynamicMeshElements>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_BaseDynamicMeshSceneProxy_GetDynamicMeshElements,*pFVar18,
                          L"STAT_BaseDynamicMeshSceneProxy_GetDynamicMeshElements","STATGROUP_Quick"
                          ,"STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar32 = *(FName *)FVar19;
  bVar5 = false;
  bVar7 = false;
  local_510.ComparisonIndex.Value = 0;
  local_510.Number = 0;
  bVar12 = false;
  bVar13 = false;
  if ((FVar32.ComparisonIndex.Value.Value == 0) && (FVar32.Number == 0)) {
LAB_14970f51a:
    bVar7 = bVar13;
    bVar5 = bVar12;
    bVar12 = false;
    FVar32 = local_510;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_540.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_540._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar5 = false;
      bVar7 = true;
      bVar12 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_528.ComparisonIndex.Value = FVar32.ComparisonIndex.Value.Value;
        local_528.Number = FVar32.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_528,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\BaseDynamicMeshSceneProxy.cpp"
                   ,0xc1);
        bVar5 = true;
        bVar7 = true;
        bVar12 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14970f51a;
    local_568 = FVar32;
    FThreadStats::AddMessage(FVar32,CycleScopeStart);
    bVar12 = true;
  }
  local_568 = (FName)&param_2->EngineShowFlags;
  bVar13 = AllowDebugViewmodes();
  if ((bVar13) && ((param_2->EngineShowFlags).Wireframe != 0)) {
    local_578 = &this->ParentBaseComponent;
    bVar13 = true;
    local_598 = (**(code **)((*local_578)->_padding_ + 0xb78))();
  }
  else {
    ppUVar31 = &this->ParentBaseComponent;
    bVar13 = false;
    local_578 = ppUVar31;
    local_598 = (**(code **)((*ppUVar31)->_padding_ + 0xb78))();
    if (local_598 == '\0') {
      bVar13 = false;
      local_578 = ppUVar31;
      goto LAB_14970f560;
    }
  }
  bVar6 = true;
LAB_14970f560:
  ppUVar31 = &this->ParentBaseComponent;
  bVar30 = *(byte *)((longlong)&this->_padding_ + 1) & 6;
  local_550 = (longlong *)0x0;
  local_548 = 0;
  (**(code **)(this->_padding_ + 600))(this,&local_550);
  FVar33 = local_568;
  local_592[0] = false;
  local_593 = false;
  bVar14 = IsCollisionView(this,(FEngineShowFlags *)local_568,local_592,&local_593);
  if (bVar14) {
    uVar34 = 1;
    pcVar35 = *(code **)(this->_padding_ + 0x288);
  }
  else {
    local_560 = (FColoredMaterialRenderProxy *)0x0;
    if (bVar6) {
      cVar15 = (**(code **)((*ppUVar31)->_padding_ + 0xc50))();
      pUVar9 = UBaseDynamicMeshComponent::DefaultWireframeMaterial;
      if (cVar15 == '\0') {
        if (UBaseDynamicMeshComponent::DefaultWireframeMaterial == (UMaterialInterface *)0x0) {
          bVar6 = false;
        }
        else {
          if ((bVar30 == 0) || ((local_598 != '\0' && (!bVar13)))) {
            pFVar21 = &(*ppUVar31)->WireframeColor;
          }
          else if (GEngine->bIsOverridingSelectedColor == false) {
            pFVar21 = &GEngine->SelectedMaterialColor;
          }
          else {
            pFVar21 = &GEngine->SelectedMaterialColorOverride;
          }
          local_4e0._0_8_ = *(undefined8 *)&pFVar21->field0_0x0;
          local_4e0._8_8_ = *(undefined8 *)((longlong)&pFVar21->field0_0x0 + 8);
          this_01 = ::operator_new(0xe0);
          if (this_01 == (FColoredMaterialRenderProxy *)0x0) {
            local_560 = (FColoredMaterialRenderProxy *)0x0;
          }
          else {
            FVar16 = FNameEntryId::FromValidEName((EName)local_500);
            uStack_51c = 0;
            local_520.Value = *(uint *)CONCAT44(extraout_var,FVar16.Value);
            pFVar22 = (FMaterialRenderProxy *)(**(code **)(pUVar9->_padding_ + 0x310))(pUVar9);
            FVar33.Number = uStack_51c;
            FVar33.ComparisonIndex.Value = local_520.Value;
            local_560 = FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                                  (this_01,pFVar22,(FLinearColor *)&local_4e0._s_0,FVar33);
          }
          param_4 = local_580;
          FMeshElementCollector::RegisterOneFrameMaterialProxy
                    (local_580,(FMaterialRenderProxy *)local_560);
        }
      }
      else {
        plVar20 = (longlong *)(**(code **)((*ppUVar31)->_padding_ + 0xc58))();
        local_560 = (FColoredMaterialRenderProxy *)(**(code **)(*plVar20 + 0x310))(plVar20);
      }
    }
    bVar1 = *(byte *)((longlong)&this->_padding_ + 1);
    if ((((bVar30 == 0) || (local_568->VertexColors == 0)) ||
        (bVar14 = AllowDebugViewmodes(), !bVar14)) ||
       (pFVar22 = MeshPaintVisualize::GetMaterialRenderProxy(bVar30 != 0,(bool)(bVar1 >> 4 & 1)),
       pFVar22 == (FMaterialRenderProxy *)0x0)) {
      ppUVar31 = local_578;
      pFVar22 = (FMaterialRenderProxy *)0x0;
      local_558 = (FMaterialRenderProxy *)0x0;
      if (((*local_578)->ColorMode == VertexColors) ||
         ((byte)((*local_578)->ColorMode - Polygroups) < 2)) {
        pFVar22 = (FMaterialRenderProxy *)
                  (**(code **)(UBaseDynamicMeshComponent::DefaultVertexColorMaterial->_padding_ +
                              0x310))();
        local_558 = pFVar22;
      }
    }
    else {
      local_558 = pFVar22;
      FMeshElementCollector::RegisterOneFrameMaterialProxy(param_4,pFVar22);
      ppUVar31 = local_578;
    }
    local_518 = pFVar22;
    cVar15 = (**(code **)((*ppUVar31)->_padding_ + 0xc20))();
    if ((cVar15 != '\0') && (pFVar22 == (FMaterialRenderProxy *)0x0)) {
      plVar20 = (longlong *)(**(code **)((*ppUVar31)->_padding_ + 0xc28))();
      local_518 = (FMaterialRenderProxy *)(**(code **)(*plVar20 + 0x310))(plVar20);
    }
    local_58b = (**(code **)((*ppUVar31)->_padding_ + 0xc38))();
    uVar8 = _UNK_150689648;
    uVar34 = ___xmm_3f800000000000000000000000000000;
    local_590 = 0;
    iVar2 = local_530->ArrayNum;
    pTVar29 = local_530;
    uVar17 = local_588;
    if (0 < iVar2) {
      do {
        if ((uVar17 >> (local_590 & 0x1f) & 1) != 0) {
          uVar17 = 0;
          if ((int)local_590 < iVar2) {
            uVar17 = ~local_590 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar35 = (code *)swi(3);
            (*pcVar35)();
            return;
          }
          uVar27 = (ulonglong)(int)(uint)local_548;
          local_53c = (uint)local_548;
          local_4f8 = local_550 + uVar27;
          plVar20 = local_550;
          while( true ) {
            plVar11 = local_4f8;
            local_538 = plVar20;
            if ((uint)local_548 != (int)uVar27) {
              local_58c = 0;
              `TCheckedPointerIterator<FMeshRenderBufferSet_*,int,0>::operator!='::__l2::<lambda_1>
              ::operator()(&local_58c);
            }
            pTVar29 = local_530;
            uVar17 = local_588;
            if (plVar20 == plVar11) break;
            lVar3 = *plVar20;
            if (local_558 == (FMaterialRenderProxy *)0x0) {
              plVar20 = *(longlong **)(lVar3 + 0x3d8);
              cVar15 = (**(code **)((*ppUVar31)->_padding_ + 0xc00))(*ppUVar31,0);
              if (cVar15 != '\0') {
                plVar20 = (longlong *)(**(code **)((*ppUVar31)->_padding_ + 0xc08))(*ppUVar31,0);
              }
              pFVar22 = (FMaterialRenderProxy *)(**(code **)(*plVar20 + 0x310))(plVar20);
              plVar20 = local_538;
            }
            if (*(int *)(lVar3 + 8) != 0) {
              lpCriticalSection = (LPCRITICAL_SECTION)(lVar3 + 0x648);
              if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::ReportNotNullPtr();
              }
              EnterCriticalSection(lpCriticalSection);
              paVar4 = &param_4->OneFrameResources->Next;
              aVar23 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                        )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x50,8);
              *(undefined8 *)((longlong)aVar23 + 8) = 0;
              this_00 = (FDynamicPrimitiveUniformBuffer *)((longlong)aVar23 + 0x10);
              *(undefined ***)aVar23 =
                   &
                   ___7__TObject_VFDynamicPrimitiveUniformBuffer_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
              ;
              TVar24.Next = *paVar4;
              do {
                *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                  *)((longlong)aVar23 + 8) = TVar24.Next;
                LOCK();
                aVar25 = *paVar4;
                bVar14 = TVar24.Next == aVar25;
                if (bVar14) {
                  *paVar4 = aVar23;
                  aVar25 = TVar24.Next;
                }
                UNLOCK();
                TVar24.Next = aVar25;
              } while (!bVar14);
              local_570 = this_00;
              FDynamicPrimitiveUniformBuffer::FDynamicPrimitiveUniformBuffer(this_00);
              lVar28 = 9;
              local_4c8._368_8_ = uVar34;
              local_4c8._376_8_ = uVar8;
              pfVar26 = &(((FPrimitiveUniformShaderParametersBuilder *)local_4c8)->Parameters).
                         CustomPrimitiveData.Elements[0].field0_0x0._s_0.Z;
              local_4c8._448_8_ = uVar34;
              local_4c8._456_8_ = uVar8;
              do {
                ((TVector4<float>_u_0_s_0 *)(pfVar26 + -2))->X = 0.0;
                ((TVector4<float>_u_0_s_0 *)(pfVar26 + -2))->Y = 0.0;
                *pfVar26 = 0.0;
                pfVar26[1] = 1.0;
                pfVar26 = pfVar26 + 4;
                lVar28 = lVar28 + -1;
              } while (lVar28 != 0);
              FPrimitiveSceneProxy::BuildUniformShaderParameters
                        ((FPrimitiveSceneProxy *)this,
                         (FPrimitiveUniformShaderParametersBuilder *)local_4c8);
              pFVar10 = local_580;
              if ((local_580->RHICmdList == (FRHICommandList *)0x0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("RHICmdList",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                                      ,0x46,L""), bVar14)) {
                pcVar35 = (code *)swi(3);
                (*pcVar35)();
                return;
              }
              FDynamicPrimitiveUniformBuffer::Set
                        (this_00,(FRHICommandListBase *)pFVar10->RHICmdList,
                         (FPrimitiveUniformShaderParametersBuilder *)local_4c8);
              if ((local_598 == '\0') || ((bVar13 && (this->bEnableViewModeOverrides != false)))) {
                bVar14 = false;
              }
              else {
                bVar14 = true;
              }
              if (0 < *(int *)(lVar3 + 0x198)) {
                if ((bVar6) && (bVar14)) {
                  (**(code **)(this->_padding_ + 0x298))(this,pFVar10,lVar3,lVar3 + 0x168);
                }
                (**(code **)(this->_padding_ + 0x298))(this,pFVar10,lVar3,lVar3 + 0x168);
              }
              if (local_518 != (FMaterialRenderProxy *)0x0) {
                pFVar22 = local_518;
              }
              if (((local_58b != '\0') && (0 < *(int *)(lVar3 + 0x428))) &&
                 (pFVar22 != (FMaterialRenderProxy *)0x0)) {
                if (bVar6) {
                  if (bVar14) {
                    (**(code **)(this->_padding_ + 0x298))(this,pFVar10,lVar3,lVar3 + 0x3f8);
                  }
                  cVar15 = (**(code **)((*local_578)->_padding_ + 0xc70))();
                  if (cVar15 != '\0') {
                    plVar20 = (longlong *)(**(code **)((*local_578)->_padding_ + 0xc78))();
                    (**(code **)(*plVar20 + 0x310))(plVar20);
                  }
                }
                (**(code **)(this->_padding_ + 0x298))(this,pFVar10,lVar3,lVar3 + 0x3f8);
              }
              LeaveCriticalSection(lpCriticalSection);
              plVar20 = local_538;
              ppUVar31 = local_578;
            }
            plVar20 = plVar20 + 1;
            uVar27 = (ulonglong)local_53c;
            pFVar22 = local_558;
            param_4 = local_580;
          }
        }
        iVar2 = pTVar29->ArrayNum;
        local_590 = local_590 + 1;
      } while ((int)local_590 < iVar2);
    }
    uVar34 = 0;
    pcVar35 = *(code **)(this->_padding_ + 0x288);
    FVar33 = local_568;
  }
  (*pcVar35)(this,&local_550,FVar33,uVar34);
  if (local_550 != (longlong *)0x0) {
    FMemory::Free(local_550);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage(FVar32,CycleScopeEnd);
  }
  return;
}

// GetDynamicRayTracingInstances @ 14970fd90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FBaseDynamicMeshSceneProxy::GetDynamicRayTracingInstances
          (FBaseDynamicMeshSceneProxy *this,FRayTracingInstanceCollector *param_1)

{
  FDynamicPrimitiveUniformBuffer *this_00;
  LPCRITICAL_SECTION lpCriticalSection;
  EDynamicMeshComponentColorOverrideMode EVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FBaseDynamicMeshSceneProxy::GetDynamicRayTracingInstances(FRayTracingInstanceCollector_&)_::_2_::FStat_STAT_BaseDynamicMeshSceneProxy_GetDynamicRayTracingInstances>
  FVar9;
  undefined8 *puVar10;
  float *pfVar11;
  UMaterialInterface *pUVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  UMaterialInterface *pUVar17;
  ulonglong uVar18;
  FNameEntryId FVar19;
  FName FVar20;
  UMaterialInterface *pUVar21;
  longlong *plVar22;
  bool bVar23;
  undefined1 auStackY_588 [32];
  undefined1 local_527;
  char local_526;
  uint local_520;
  uint uStack_51c;
  FColor_u_0 local_518 [2];
  longlong *local_510;
  ulonglong local_508;
  FName local_500;
  UMaterialInterface *local_4f8;
  FDynamicPrimitiveUniformBuffer *local_4f0;
  FRayTracingInstanceCollector *local_4e8;
  UMaterialInterface *local_4e0;
  FName local_4d8;
  longlong *local_4c8;
  FName local_4c0;
  FName local_4b8 [2];
  undefined1 local_4a8 [664];
  float local_210 [114];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_588;
  local_4e8 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_BaseDynamicMeshSceneProxy_GetDynamicRayTracingInstances ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FBaseDynamicMeshSceneProxy::GetDynamicRayTracingInstances(FRayTracingInstanceCollector_&)_::_2_::FStat_STAT_BaseDynamicMeshSceneProxy_GetDynamicRayTracingInstances>
         )0x0) {
      pFVar8 = ::FName::FName(&local_4c0,
                              "STAT_BaseDynamicMeshSceneProxy_GetDynamicRayTracingInstances");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_BaseDynamicMeshSceneProxy_GetDynamicRayTracingInstances,*pFVar8,
                 L"STAT_BaseDynamicMeshSceneProxy_GetDynamicRayTracingInstances","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar9 = StatPtr_STAT_BaseDynamicMeshSceneProxy_GetDynamicRayTracingInstances;
  if (StatPtr_STAT_BaseDynamicMeshSceneProxy_GetDynamicRayTracingInstances ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FBaseDynamicMeshSceneProxy::GetDynamicRayTracingInstances(FRayTracingInstanceCollector_&)_::_2_::FStat_STAT_BaseDynamicMeshSceneProxy_GetDynamicRayTracingInstances>
       )0x0) {
    pFVar8 = ::FName::FName(local_4b8,"STAT_BaseDynamicMeshSceneProxy_GetDynamicRayTracingInstances"
                           );
    FVar9 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FBaseDynamicMeshSceneProxy::GetDynamicRayTracingInstances(FRayTracingInstanceCollector_&)_::_2_::FStat_STAT_BaseDynamicMeshSceneProxy_GetDynamicRayTracingInstances>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_BaseDynamicMeshSceneProxy_GetDynamicRayTracingInstances,
                         *pFVar8,L"STAT_BaseDynamicMeshSceneProxy_GetDynamicRayTracingInstances",
                         "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false
                         ,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar9;
  bVar3 = false;
  bVar4 = false;
  local_4d8.ComparisonIndex.Value = 0;
  local_4d8.Number = 0;
  bVar6 = false;
  bVar23 = false;
  FVar19 = FVar20.ComparisonIndex.Value;
  uVar14 = FVar20.Number;
  if ((FVar19.Value != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_518[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_518[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar4 = true;
      bVar6 = false;
      bVar23 = true;
      if (-1 < CpuChannel->Enabled) {
        local_500.ComparisonIndex.Value = FVar19.Value;
        local_500.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_500,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\BaseDynamicMeshSceneProxy.cpp"
                   ,0x2b3);
        bVar3 = true;
        bVar4 = true;
        bVar6 = true;
        bVar23 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_520 = FVar19.Value;
      uStack_51c = uVar14;
      FThreadStats::AddMessage(FVar20,CycleScopeStart);
      bVar6 = true;
      goto LAB_14970ff3b;
    }
  }
  bVar4 = bVar23;
  bVar3 = bVar6;
  bVar6 = false;
  FVar20 = local_4d8;
LAB_14970ff3b:
  local_510 = (longlong *)0x0;
  local_508 = 0;
  (**(code **)(this->_padding_ + 600))(this,&local_510);
  local_4e0 = (UMaterialInterface *)0x0;
  EVar1 = this->ParentBaseComponent->ColorMode;
  if ((EVar1 == VertexColors) || ((byte)(EVar1 - Polygroups) < 2)) {
    local_4e0 = UBaseDynamicMeshComponent::DefaultVertexColorMaterial;
  }
  pUVar21 = local_4e0;
  local_4f8 = local_4e0;
  cVar7 = (**(code **)(this->ParentBaseComponent->_padding_ + 0xc20))();
  if ((cVar7 != '\0') && (pUVar21 == (UMaterialInterface *)0x0)) {
    local_4f8 = (UMaterialInterface *)(**(code **)(this->ParentBaseComponent->_padding_ + 0xc28))();
  }
  local_526 = (**(code **)(this->ParentBaseComponent->_padding_ + 0xc38))();
  plVar22 = (longlong *)param_1->_padding_;
  puVar10 = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x50,8);
  puVar10[1] = 0;
  this_00 = (FDynamicPrimitiveUniformBuffer *)(puVar10 + 2);
  *puVar10 = &
             ___7__TObject_VFDynamicPrimitiveUniformBuffer_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  lVar15 = *plVar22;
  do {
    puVar10[1] = lVar15;
    LOCK();
    lVar13 = *plVar22;
    bVar23 = lVar15 == lVar13;
    if (bVar23) {
      *plVar22 = (longlong)puVar10;
      lVar13 = lVar15;
    }
    UNLOCK();
    lVar15 = lVar13;
  } while (!bVar23);
  local_4f0 = this_00;
  FDynamicPrimitiveUniformBuffer::FDynamicPrimitiveUniformBuffer(this_00);
  pfVar11 = &(((FPrimitiveUniformShaderParametersBuilder *)local_4a8)->Parameters).
             CustomPrimitiveData.Elements[0].field0_0x0._s_0.Z;
  local_4a8._368_8_ = ___xmm_3f800000000000000000000000000000;
  local_4a8._376_8_ = _UNK_150689648;
  lVar15 = 9;
  local_4a8._448_8_ = ___xmm_3f800000000000000000000000000000;
  local_4a8._456_8_ = _UNK_150689648;
  do {
    ((TVector4<float>_u_0_s_0 *)(pfVar11 + -2))->X = 0.0;
    ((TVector4<float>_u_0_s_0 *)(pfVar11 + -2))->Y = 0.0;
    *pfVar11 = 0.0;
    pfVar11[1] = 1.0;
    pfVar11 = pfVar11 + 4;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  FPrimitiveSceneProxy::BuildUniformShaderParameters
            ((FPrimitiveSceneProxy *)this,(FPrimitiveUniformShaderParametersBuilder *)local_4a8);
  if ((param_1->_padding_ == 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("RHICmdList",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                          ,0x46,L""), bVar23)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FDynamicPrimitiveUniformBuffer::Set
            (this_00,(FRHICommandListBase *)param_1->_padding_,
             (FPrimitiveUniformShaderParametersBuilder *)local_4a8);
  uVar16 = (ulonglong)(int)(uint)local_508;
  local_520 = (uint)local_508;
  local_4c8 = local_510 + uVar16;
  uVar18 = uVar16;
  plVar22 = local_510;
  while( true ) {
    plVar5 = local_4c8;
    if ((int)uVar16 != (int)uVar18) {
      local_527 = 0;
      `TCheckedPointerIterator<FMeshRenderBufferSet_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_527);
    }
    if (plVar22 == plVar5) break;
    lVar15 = *plVar22;
    pUVar12 = *(UMaterialInterface **)(lVar15 + 0x3d8);
    cVar7 = (**(code **)(this->ParentBaseComponent->_padding_ + 0xc00))();
    if (cVar7 != '\0') {
      pUVar12 = (UMaterialInterface *)(**(code **)(this->ParentBaseComponent->_padding_ + 0xc08))();
    }
    pUVar17 = pUVar21;
    if (pUVar21 == (UMaterialInterface *)0x0) {
      pUVar17 = pUVar12;
    }
    lVar13 = (**(code **)(pUVar17->_padding_ + 0x310))();
    if ((*(int *)(lVar15 + 8) != 0) && (*(char *)(lVar15 + 0x640) != '\0')) {
      lpCriticalSection = (LPCRITICAL_SECTION)(lVar15 + 0x648);
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection(lpCriticalSection);
      if ((0 < *(int *)(lVar15 + 0x198)) &&
         (bVar23 = FRayTracingGeometry::IsValid((FRayTracingGeometry *)(lVar15 + 0x440)), bVar23)) {
        if ((*(longlong *)(lVar15 + 0x4b0) == 0) &&
           (bVar23 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<9194726726704300783>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\BaseDynamicMeshSceneProxy.cpp"
                                ,0x2ef,
                                "BufferSet->PrimaryRayTracingGeometry.Initializer.IndexBuffer.IsValid()"
                               ), bVar23)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (**(code **)(this->_padding_ + 0x2a0))(this,local_4e8,lVar15,lVar15 + 0x168);
      }
      if (local_4f8 != (UMaterialInterface *)0x0) {
        lVar13 = (**(code **)(local_4f8->_padding_ + 0x310))();
      }
      if ((((local_526 != '\0') && (0 < *(int *)(lVar15 + 0x428))) && (lVar13 != 0)) &&
         (bVar23 = FRayTracingGeometry::IsValid((FRayTracingGeometry *)(lVar15 + 0x540)), bVar23)) {
        if ((*(longlong *)(lVar15 + 0x5b0) == 0) &&
           (bVar23 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<9194726726704300794>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\BaseDynamicMeshSceneProxy.cpp"
                                ,0x2fa,
                                "BufferSet->SecondaryRayTracingGeometry.Initializer.IndexBuffer.IsValid()"
                               ), bVar23)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (**(code **)(this->_padding_ + 0x2a0))(this,local_4e8,lVar15,lVar15 + 0x3f8);
      }
      LeaveCriticalSection(lpCriticalSection);
      pUVar21 = local_4e0;
    }
    uVar16 = local_508 & 0xffffffff;
    plVar22 = plVar22 + 1;
    uVar18 = (ulonglong)local_520;
  }
  if (local_510 != (longlong *)0x0) {
    FMemory::Free(local_510);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(FVar20,CycleScopeEnd);
  }
  return;
}

// GetEngineVertexColorMaterialProxy @ 149710420

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FMaterialRenderProxy * __cdecl
FBaseDynamicMeshSceneProxy::GetEngineVertexColorMaterialProxy
          (FMeshElementCollector *param_1,FEngineShowFlags *param_2,bool param_3,bool param_4)

{
  bool bVar1;
  FMaterialRenderProxy *pFVar2;
  
  if ((param_3) && (param_2->VertexColors != 0)) {
    bVar1 = AllowDebugViewmodes();
    if (bVar1) {
      pFVar2 = MeshPaintVisualize::GetMaterialRenderProxy(true,param_4);
      if (pFVar2 != (FMaterialRenderProxy *)0x0) {
        FMeshElementCollector::RegisterOneFrameMaterialProxy(param_1,pFVar2);
        return pFVar2;
      }
    }
  }
  return (FMaterialRenderProxy *)0x0;
}

// GetMaterial @ 149710690

UMaterialInterface * __thiscall
FBaseDynamicMeshSceneProxy::GetMaterial(FBaseDynamicMeshSceneProxy *this,int param_1)

{
  UMaterialInterface *pUVar1;
  UMaterial *pUVar2;
  
  pUVar1 = (UMaterialInterface *)(**(code **)(this->ParentBaseComponent->_padding_ + 0x690))();
  if (pUVar1 == (UMaterialInterface *)0x0) {
    pUVar2 = UMaterial::GetDefaultMaterial(MD_Surface);
    return (UMaterialInterface *)pUVar2;
  }
  return pUVar1;
}

// GetMeshCardRepresentation @ 149710d10

FCardRepresentationData * __thiscall
FBaseDynamicMeshSceneProxy::GetMeshCardRepresentation(FBaseDynamicMeshSceneProxy *this)

{
  return (this->MeshCards).Ptr;
}

// GetNumMaterials @ 149710d30

int __thiscall FBaseDynamicMeshSceneProxy::GetNumMaterials(FBaseDynamicMeshSceneProxy *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000149710d3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(this->ParentBaseComponent->_padding_ + 0x810))();
  return iVar1;
}

// HasRayTracingRepresentation @ 149711e90

bool __thiscall
FBaseDynamicMeshSceneProxy::HasRayTracingRepresentation(FBaseDynamicMeshSceneProxy *this)

{
  return true;
}

// IsCollisionView @ 149713de0

bool __thiscall
FBaseDynamicMeshSceneProxy::IsCollisionView
          (FBaseDynamicMeshSceneProxy *this,FEngineShowFlags *param_1,bool *param_2,bool *param_3)

{
  undefined1 *puVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  ECollisionTraceFlag *pEVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  
  *param_3 = false;
  lpCriticalSection = &this->CachedCollisionLock;
  *param_2 = false;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (((this->bHasCollisionData != false) &&
        (param_1->CollisionVisibility != 0 || param_1->CollisionPawn != 0)) &&
       ((this->_padding_ & 0x20000000) != 0)) {
      if ((param_1->CollisionPawn == 0) || ((this->CollisionResponse).field0_0x0._s_0.Pawn == '\0'))
      {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if ((param_1->CollisionVisibility == 0) ||
         ((this->CollisionResponse).field0_0x0._s_0.Visibility == '\0')) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4 || bVar8) {
        pEVar2 = &this->CollisionTraceFlag;
        if (((param_1->CollisionVisibility == 0) || (*pEVar2 == CTF_UseSimpleAsComplex)) &&
           ((param_1->CollisionPawn == 0 || (*pEVar2 != CTF_UseComplexAsSimple)))) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        *param_3 = bVar8;
        if (((param_1->CollisionPawn == 0) || (*pEVar2 == CTF_UseComplexAsSimple)) &&
           ((param_1->CollisionVisibility == 0 || (*pEVar2 != CTF_UseSimpleAsComplex)))) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        *param_2 = bVar8;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return param_1->CollisionVisibility != 0 || param_1->CollisionPawn != 0;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsRayTracingRelevant @ 1497140d0

bool __thiscall FBaseDynamicMeshSceneProxy::IsRayTracingRelevant(FBaseDynamicMeshSceneProxy *this)

{
  return true;
}

// ReleaseRenderBufferSet @ 149716170

void __thiscall
FBaseDynamicMeshSceneProxy::ReleaseRenderBufferSet
          (FBaseDynamicMeshSceneProxy *this,FMeshRenderBufferSet *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ForElementType<FSetElementId> FVar6;
  
  lpCriticalSection = &this->AllocatedSetsLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->AllocatedBufferSets).Elements.field_0x8 !=
      *(int *)&(this->AllocatedBufferSets).Elements.field_0x34) {
    FVar6 = (this->AllocatedBufferSets).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->AllocatedBufferSets).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->AllocatedBufferSets).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5))
                    * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&(this->AllocatedBufferSets).Elements;
      do {
        if (*(FMeshRenderBufferSet **)(lVar1 + (longlong)iVar4 * 0x10) == param_1) {
          TSet<FMeshRenderBufferSet_*,DefaultKeyFuncs<FMeshRenderBufferSet_*,0>,FDefaultSetAllocator>
          ::Remove(&this->AllocatedBufferSets,param_1);
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          if (param_1->TriangleCount == 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x00014971628e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)param_1->_padding_)(param_1,1);
          return;
        }
        iVar4 = *(int *)(lVar1 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<9194726726704300138>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\BaseDynamicMeshSceneProxy.cpp"
                     ,0x6a,"AllocatedBufferSets.Contains(BufferSet)");
  if (!bVar3) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// SetCollisionData @ 149718d90

void __thiscall FBaseDynamicMeshSceneProxy::SetCollisionData(FBaseDynamicMeshSceneProxy *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  UBaseDynamicMeshComponent *this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ForAnyElementType FVar6;
  TEnumAsByte<ECollisionTraceFlag> TVar7;
  bool bVar8;
  atomic<FKConvexGeomRenderInfo_*> this_01;
  undefined7 extraout_var;
  UClass *pUVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  undefined1 local_b8 [16];
  ForAnyElementType local_a8;
  atomic<FKConvexGeomRenderInfo_*> local_a0;
  ForAnyElementType local_98;
  atomic<FKConvexGeomRenderInfo_*> local_90;
  ForAnyElementType local_88;
  atomic<FKConvexGeomRenderInfo_*> local_80;
  ForAnyElementType local_78;
  atomic<FKConvexGeomRenderInfo_*> local_70;
  ForAnyElementType local_68;
  atomic<FKConvexGeomRenderInfo_*> local_60;
  ForAnyElementType local_58;
  atomic<FKConvexGeomRenderInfo_*> local_50;
  ForAnyElementType local_48;
  atomic<FKConvexGeomRenderInfo_*> local_40;
  ForAnyElementType local_38;
  atomic<FKConvexGeomRenderInfo_*> local_30;
  atomic<FKConvexGeomRenderInfo_*> local_28;
  FMutex local_20;
  
  lpCriticalSection = &this->CachedCollisionLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->bHasCollisionData = true;
    lVar1 = this->ParentBaseComponent->_padding_;
    this->bHasComplexMeshData = false;
    this->bOwnerIsNull = lVar1 == 0;
    this_01 = (atomic<FKConvexGeomRenderInfo_*>)
              (**(code **)(this->ParentBaseComponent->_padding_ + 0x800))();
    if (this_01 == (atomic<FKConvexGeomRenderInfo_*>)0x0) {
      local_20.State = (atomic<unsigned_char>)0x0;
      local_b8._0_8_ = this_01;
      local_b8._8_8_ = this_01;
      local_a8.Data = (FScriptContainerElement *)this_01;
      local_a0 = this_01;
      local_98.Data = (FScriptContainerElement *)this_01;
      local_90 = this_01;
      local_88.Data = (FScriptContainerElement *)this_01;
      local_80 = this_01;
      local_78.Data = (FScriptContainerElement *)this_01;
      local_70 = this_01;
      local_68.Data = (FScriptContainerElement *)this_01;
      local_60 = this_01;
      local_58.Data = (FScriptContainerElement *)this_01;
      local_50 = this_01;
      local_48.Data = (FScriptContainerElement *)this_01;
      local_40 = this_01;
      local_38.Data = (FScriptContainerElement *)this_01;
      local_30 = this_01;
      local_28 = this_01;
      FKAggregateGeom::FreeRenderInfo(&this->CachedAggGeom);
      FKAggregateGeom::CloneAgg(&this->CachedAggGeom,(FKAggregateGeom *)local_b8);
      FVar6.Data = local_38.Data;
      DestructItems<FKSkinnedTriangleMeshElem,int>
                ((FKSkinnedTriangleMeshElem *)local_38.Data,local_30._0_4_);
      if ((FKConvexElem *)FVar6.Data != (FKConvexElem *)0x0) {
        FMemory::Free(FVar6.Data);
      }
      FVar6.Data = local_48.Data;
      DestructItems<FKMLLevelSetElem,int>((FKMLLevelSetElem *)local_48.Data,local_40._0_4_);
      if ((FKConvexElem *)FVar6.Data != (FKConvexElem *)0x0) {
        FMemory::Free(FVar6.Data);
      }
      FVar6.Data = local_58.Data;
      DestructItems<FKSkinnedLevelSetElem,int>
                ((FKSkinnedLevelSetElem *)local_58.Data,local_50._0_4_);
      if ((FKConvexElem *)FVar6.Data != (FKConvexElem *)0x0) {
        FMemory::Free(FVar6.Data);
      }
      FVar6.Data = local_68.Data;
      DestructItems<FKLevelSetElem,int>((FKLevelSetElem *)local_68.Data,local_60._0_4_);
      if ((FKConvexElem *)FVar6.Data != (FKConvexElem *)0x0) {
        FMemory::Free(FVar6.Data);
      }
      FVar6.Data = local_78.Data;
      DestructItems<FKTaperedCapsuleElem,int>((FKTaperedCapsuleElem *)local_78.Data,local_70._0_4_);
      if ((FKConvexElem *)FVar6.Data != (FKConvexElem *)0x0) {
        FMemory::Free(FVar6.Data);
      }
      FVar6.Data = local_88.Data;
      DestructItems<FKConvexElem,int>((FKConvexElem *)local_88.Data,local_80._0_4_);
      if ((FKConvexElem *)FVar6.Data != (FKConvexElem *)0x0) {
        FMemory::Free(FVar6.Data);
      }
      FVar6.Data = local_98.Data;
      DestructItems<FKSphylElem,int>((FKSphylElem *)local_98.Data,local_90._0_4_);
      if ((FKConvexElem *)FVar6.Data != (FKConvexElem *)0x0) {
        FMemory::Free(FVar6.Data);
      }
      FVar6.Data = local_a8.Data;
      DestructItems<FKBoxElem,int>((FKBoxElem *)local_a8.Data,local_a0._0_4_);
      if ((FKConvexElem *)FVar6.Data != (FKConvexElem *)0x0) {
        FMemory::Free(FVar6.Data);
      }
      uVar5 = local_b8._0_8_;
      DestructItems<FKSphereElem,int>((FKSphereElem *)local_b8._0_8_,local_b8._8_4_);
      if ((FKConvexElem *)uVar5 != (FKConvexElem *)0x0) {
        FMemory::Free((void *)uVar5);
      }
    }
    else {
      TVar7 = UBodySetupCore::GetCollisionTraceFlag((UBodySetupCore *)this_01);
      this->CollisionTraceFlag = (uint)*(byte *)CONCAT71(extraout_var,TVar7.Value);
      FKAggregateGeom::FreeRenderInfo(&this->CachedAggGeom);
      FKAggregateGeom::CloneAgg(&this->CachedAggGeom,(FKAggregateGeom *)((longlong)this_01 + 0x38));
      this_00 = this->ParentBaseComponent;
      if (this_00 != (UBaseDynamicMeshComponent *)0x0) {
        pUVar9 = Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
        plVar10 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar9);
        if (plVar10 != (longlong *)0x0) {
          bVar8 = (bool)(**(code **)(*plVar10 + 0x20))
                                  (plVar10,((TEnumAsByte<EPhysicsType> *)((longlong)this_01 + 0xd8))
                                           ->Value >> 2 & 1);
          this->bHasComplexMeshData = bVar8;
        }
      }
    }
    puVar11 = (undefined4 *)(**(code **)(this->ParentBaseComponent->_padding_ + 0x5c8))();
    uVar2 = puVar11[1];
    uVar3 = puVar11[2];
    uVar4 = puVar11[3];
    *(undefined4 *)&(this->CollisionResponse).field0_0x0 = *puVar11;
    *(undefined4 *)((longlong)&(this->CollisionResponse).field0_0x0 + 4) = uVar2;
    *(undefined4 *)((longlong)&(this->CollisionResponse).field0_0x0 + 8) = uVar3;
    *(undefined4 *)((longlong)&(this->CollisionResponse).field0_0x0 + 0xc) = uVar4;
    uVar2 = puVar11[5];
    uVar3 = puVar11[6];
    uVar4 = puVar11[7];
    *(undefined4 *)((longlong)&(this->CollisionResponse).field0_0x0 + 0x10) = puVar11[4];
    *(undefined4 *)((longlong)&(this->CollisionResponse).field0_0x0 + 0x14) = uVar2;
    *(undefined4 *)((longlong)&(this->CollisionResponse).field0_0x0 + 0x18) = uVar3;
    *(undefined4 *)((longlong)&(this->CollisionResponse).field0_0x0 + 0x1c) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000149719029. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetNewDistanceField @ 149719d50

void __thiscall
FBaseDynamicMeshSceneProxy::SetNewDistanceField
          (FBaseDynamicMeshSceneProxy *this,TSharedPtr<FDistanceFieldVolumeData,1> *param_1,
          bool param_2)

{
  undefined1 local_res10 [24];
  
  `FBaseDynamicMeshSceneProxy::SetNewDistanceField'::__l2::<lambda_1>::operator()(local_res10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateLumenCardsFromBounds @ 14971b020

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FBaseDynamicMeshSceneProxy::UpdateLumenCardsFromBounds(FBaseDynamicMeshSceneProxy *this)

{
  TArray<FLumenCardBuildData,TSizedDefaultAllocator<32>_> *pTVar1;
  FLumenCardBuildDebugData *pFVar2;
  TArray<FLumenCardBuildDebugData::FRay,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FLumenCardBuildDebugData::FSurfelCluster,TSizedDefaultAllocator<32>_> *pTVar4;
  TPimplPtr<FCardRepresentationData,0> *pTVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  FCardRepresentationData *pFVar12;
  FScriptContainerElement *pFVar13;
  code *pcVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  TConsoleVariableData<bool> *pTVar21;
  atomic<unsigned_int> aVar22;
  bool bVar23;
  EShaderPlatform EVar24;
  TBoxSphereBounds<double,double> *pTVar25;
  int *piVar26;
  int *piVar27;
  longlong local_168 [4];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_120;
  undefined4 uStack_11f;
  undefined2 uStack_11b;
  undefined1 uStack_119;
  undefined8 local_110 [2];
  undefined8 local_100 [2];
  undefined8 local_f0 [2];
  undefined8 local_e0 [5];
  TBoxSphereBounds<double,double> local_b8 [2];
  
  pTVar21 = CVarDynamicMeshComponent_AllowMeshCardGeneration.Ref;
  piVar27 = (int *)0x0;
  if ((this->_padding_ & 0x400000000) == 0) goto LAB_14971b3df;
  bVar23 = IsInParallelGameThread();
  if (bVar23) {
LAB_14971b066:
    piVar26 = piVar27;
  }
  else {
    bVar23 = IsInGameThread();
    piVar26 = (int *)&DAT_00000001;
    if (bVar23) goto LAB_14971b066;
  }
  if (*(char *)((longlong)piVar26 + (longlong)pTVar21) != '\0') {
    if (GMaxRHIFeatureLevel == Num) {
      EVar24 = SP_NumPlatforms;
    }
    else {
      EVar24 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel];
    }
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar24].bContainsValidPlatformInfo == 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid(Platform)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                            ,0x20e,L""), bVar23)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar24].bSupportsLumenGI != 0) {
      pTVar25 = USceneComponent::GetLocalBounds
                          ((USceneComponent *)this->ParentBaseComponent,local_b8);
      pTVar5 = &this->MeshCards;
      dVar6 = (pTVar25->BoxExtent).field0_0x0._s_0.X;
      dVar7 = (pTVar25->BoxExtent).field0_0x0._s_0.Y;
      dVar8 = (pTVar25->BoxExtent).field0_0x0._s_0.Z;
      dVar9 = (pTVar25->Origin).field0_0x0._s_0.X;
      dVar19 = (pTVar25->Origin).field0_0x0._s_0.Y - dVar7;
      dVar10 = (pTVar25->Origin).field0_0x0._s_0.Z;
      dVar15 = dVar6 + (pTVar25->Origin).field0_0x0._s_0.X;
      dVar11 = (pTVar25->Origin).field0_0x0._s_0.Y;
      dVar17 = dVar8 + (pTVar25->Origin).field0_0x0._s_0.Z;
      local_b8[0].SphereRadius._0_1_ = 1;
      if (pTVar5->Ptr == (FCardRepresentationData *)0x0) {
        piVar26 = ::operator_new(0xb0);
        if (piVar26 != (int *)0x0) {
          *(undefined8 *)(piVar26 + 2) = 0;
          *(code **)piVar26 = UE::Core::Private::PimplPtr::DeleterFunc<FCardRepresentationData>;
          *(undefined ***)(piVar26 + 4) = &___7FCardRepresentationData__6B_;
          *(undefined8 *)(piVar26 + 6) = 0;
          *(undefined8 *)(piVar26 + 8) = 0;
          *(undefined8 *)(piVar26 + 10) = 0;
          *(undefined8 *)(piVar26 + 0xc) = 0;
          *(undefined8 *)(piVar26 + 0xe) = 0;
          *(undefined8 *)(piVar26 + 0x10) = 0;
          *(undefined1 *)(piVar26 + 0x12) = 0;
          *(undefined8 *)((longlong)piVar26 + 0x49) = 0;
          *(undefined8 *)(piVar26 + 0x16) = 0;
          *(undefined8 *)(piVar26 + 0x18) = 0;
          *(undefined8 *)(piVar26 + 0x1a) = 0;
          *(undefined8 *)(piVar26 + 0x1c) = 0;
          *(undefined8 *)(piVar26 + 0x1e) = 0;
          *(undefined8 *)(piVar26 + 0x20) = 0;
          *(undefined8 *)(piVar26 + 0x22) = 0;
          *(undefined8 *)(piVar26 + 0x24) = 0;
          piVar26[0x26] = 0;
          piVar26[0x28] = 0;
          LOCK();
          UNLOCK();
          aVar22 = (atomic<unsigned_int>)
                   ((int)`public:___cdecl_FCardRepresentationData::FCardRepresentationData(void)___ptr64'
                         ::__l2::NextCardRepresentationId + 1);
          *(atomic<unsigned_int> *)(piVar26 + 0x28) =
               `public:___cdecl_FCardRepresentationData::FCardRepresentationData(void)___ptr64'::
               __l2::NextCardRepresentationId;
          `public:___cdecl_FCardRepresentationData::FCardRepresentationData(void)___ptr64'::__l2::
          NextCardRepresentationId = aVar22;
          piVar27 = piVar26;
        }
        if ((TPimplPtr<FCardRepresentationData,0> *)local_168 == pTVar5) {
          if ((FCardRepresentationData *)(piVar27 + 4) == (FCardRepresentationData *)0x0)
          goto LAB_14971b24e;
        }
        else {
          pFVar12 = pTVar5->Ptr;
          pTVar5->Ptr = (FCardRepresentationData *)(piVar27 + 4);
          if (pFVar12 == (FCardRepresentationData *)0x0) goto LAB_14971b24e;
          piVar27 = &pFVar12[-1].MeshCardsBuildData.DebugData.NumSurfels;
        }
        (**(code **)piVar27)();
      }
LAB_14971b24e:
      aVar22 = `public:___cdecl_FCardRepresentationData::FCardRepresentationData(void)___ptr64'::
               __l2::NextCardRepresentationId;
      local_120 = 0;
      uStack_11f = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      uStack_130 = 0;
      uStack_11b = 0;
      uStack_119 = 0;
      LOCK();
      `public:___cdecl_FCardRepresentationData::FCardRepresentationData(void)___ptr64'::__l2::
      NextCardRepresentationId =
           (atomic<unsigned_int>)
           ((int)`public:___cdecl_FCardRepresentationData::FCardRepresentationData(void)___ptr64'::
                 __l2::NextCardRepresentationId + 1);
      UNLOCK();
      pFVar12 = pTVar5->Ptr;
      (pFVar12->MeshCardsBuildData).Bounds.Min.field0_0x0._s_0.X = 0.0;
      (pFVar12->MeshCardsBuildData).Bounds.Min.field0_0x0._s_0.Y = 0.0;
      (pFVar12->MeshCardsBuildData).bMostlyTwoSided = false;
      pTVar1 = &(pFVar12->MeshCardsBuildData).CardBuildData;
      (pFVar12->MeshCardsBuildData).Bounds.Min.field0_0x0._s_0.Z = 0.0;
      (pFVar12->MeshCardsBuildData).Bounds.Max.field0_0x0._s_0.X = 0.0;
      (pFVar12->MeshCardsBuildData).Bounds.Max.field0_0x0._s_0.Y = 0.0;
      (pFVar12->MeshCardsBuildData).Bounds.Max.field0_0x0._s_0.Z = 0.0;
      (pFVar12->MeshCardsBuildData).Bounds.IsValid = '\0';
      (pFVar12->MeshCardsBuildData).Bounds.Pad[0] = '\0';
      (pFVar12->MeshCardsBuildData).Bounds.Pad[1] = '\0';
      (pFVar12->MeshCardsBuildData).Bounds.Pad[2] = '\0';
      (pFVar12->MeshCardsBuildData).Bounds.Pad[3] = '\0';
      (pFVar12->MeshCardsBuildData).Bounds.Pad[4] = '\0';
      (pFVar12->MeshCardsBuildData).Bounds.Pad[5] = '\0';
      (pFVar12->MeshCardsBuildData).Bounds.Pad[6] = '\0';
      if (pTVar1 != (TArray<FLumenCardBuildData,TSizedDefaultAllocator<32>_> *)local_110) {
        pFVar13 = (pTVar1->AllocatorInstance).Data;
        if (pFVar13 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar13);
        }
        (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (pFVar12->MeshCardsBuildData).CardBuildData.ArrayNum = 0;
        (pFVar12->MeshCardsBuildData).CardBuildData.ArrayMax = 0;
      }
      pFVar2 = &(pFVar12->MeshCardsBuildData).DebugData;
      if (pFVar2 != (FLumenCardBuildDebugData *)local_100) {
        pFVar13 = (pFVar2->Surfels).AllocatorInstance.Data;
        if (pFVar13 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar13);
        }
        (pFVar2->Surfels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar12->MeshCardsBuildData).DebugData.Surfels.ArrayNum = 0;
        (pFVar12->MeshCardsBuildData).DebugData.Surfels.ArrayMax = 0;
      }
      pTVar3 = &(pFVar12->MeshCardsBuildData).DebugData.SurfelRays;
      if (pTVar3 != (TArray<FLumenCardBuildDebugData::FRay,TSizedDefaultAllocator<32>_> *)local_f0)
      {
        pFVar13 = (pTVar3->AllocatorInstance).Data;
        if (pFVar13 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar13);
        }
        (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (pFVar12->MeshCardsBuildData).DebugData.SurfelRays.ArrayNum = 0;
        (pFVar12->MeshCardsBuildData).DebugData.SurfelRays.ArrayMax = 0;
      }
      pTVar4 = &(pFVar12->MeshCardsBuildData).DebugData.Clusters;
      if (pTVar4 != (TArray<FLumenCardBuildDebugData::FSurfelCluster,TSizedDefaultAllocator<32>_> *)
                    local_e0) {
        DestructItems<FLumenCardBuildDebugData::FSurfelCluster,int>
                  ((FSurfelCluster *)(pTVar4->AllocatorInstance).Data,
                   (pFVar12->MeshCardsBuildData).DebugData.Clusters.ArrayNum);
        pFVar13 = (pTVar4->AllocatorInstance).Data;
        if (pFVar13 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar13);
        }
        (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (pFVar12->MeshCardsBuildData).DebugData.Clusters.ArrayNum = 0;
        (pFVar12->MeshCardsBuildData).DebugData.Clusters.ArrayMax = 0;
      }
      (pFVar12->MeshCardsBuildData).DebugData.NumSurfels = 0;
      (pFVar12->CardRepresentationDataId).Value = (uint)aVar22;
      DestructItems<FLumenCardBuildDebugData::FSurfelCluster,int>((FSurfelCluster *)0x0,0);
      pFVar12 = pTVar5->Ptr;
      auVar18._8_4_ = SUB84(dVar19,0);
      auVar18._0_8_ = dVar9 - dVar6;
      auVar18._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
      *(undefined1 (*) [16])&(pFVar12->MeshCardsBuildData).Bounds.Min.field0_0x0 = auVar18;
      (pFVar12->MeshCardsBuildData).bMostlyTwoSided = true;
      auVar20._8_4_ = SUB84(dVar15,0);
      auVar20._0_8_ = dVar10 - dVar8;
      auVar20._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
      *(undefined1 (*) [16])((longlong)&(pFVar12->MeshCardsBuildData).Bounds.Min.field0_0x0 + 0x10)
           = auVar20;
      auVar16._8_4_ = SUB84(dVar17,0);
      auVar16._0_8_ = dVar7 + dVar11;
      auVar16._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
      *(undefined1 (*) [16])((longlong)&(pFVar12->MeshCardsBuildData).Bounds.Max.field0_0x0 + 8) =
           auVar16;
      (pFVar12->MeshCardsBuildData).Bounds.IsValid = local_b8[0].SphereRadius._0_1_;
      (pFVar12->MeshCardsBuildData).Bounds.Pad[0] = (char)local_b8[0].SphereRadius._1_7_;
      (pFVar12->MeshCardsBuildData).Bounds.Pad[1] =
           (char)((uint7)local_b8[0].SphereRadius._1_7_ >> 8);
      (pFVar12->MeshCardsBuildData).Bounds.Pad[2] =
           (char)((uint7)local_b8[0].SphereRadius._1_7_ >> 0x10);
      (pFVar12->MeshCardsBuildData).Bounds.Pad[3] =
           (char)((uint7)local_b8[0].SphereRadius._1_7_ >> 0x18);
      (pFVar12->MeshCardsBuildData).Bounds.Pad[4] =
           (char)((uint7)local_b8[0].SphereRadius._1_7_ >> 0x20);
      (pFVar12->MeshCardsBuildData).Bounds.Pad[5] =
           (char)((uint7)local_b8[0].SphereRadius._1_7_ >> 0x28);
      (pFVar12->MeshCardsBuildData).Bounds.Pad[6] =
           (char)((uint7)local_b8[0].SphereRadius._1_7_ >> 0x30);
      MeshCardRepresentation::SetCardsFromBounds(&pFVar12->MeshCardsBuildData,Disabled,false);
      return;
    }
  }
LAB_14971b3df:
  pFVar12 = (this->MeshCards).Ptr;
  if (pFVar12 != (FCardRepresentationData *)0x0) {
    (this->MeshCards).Ptr = (FCardRepresentationData *)0x0;
    (**(code **)&pFVar12[-1].MeshCardsBuildData.DebugData.NumSurfels)();
  }
  return;
}

// UpdatedReferencedMaterials @ 14971d010

void __thiscall
FBaseDynamicMeshSceneProxy::UpdatedReferencedMaterials(FBaseDynamicMeshSceneProxy *this)

{
  return;
}

// operator() @ 150544550

bool __thiscall
`FBaseDynamicMeshSceneProxy::SetNewDistanceField'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<9194726726704300901>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<9194726726704300901>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

