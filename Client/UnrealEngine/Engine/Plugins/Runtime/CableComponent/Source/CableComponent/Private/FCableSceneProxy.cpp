// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CableComponent
// Functions: 14

// FCableSceneProxy @ 14f0135e0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FCableSceneProxy * __thiscall
FCableSceneProxy::FCableSceneProxy(FCableSceneProxy *this,UCableComponent *param_1)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  EShaderPlatform EVar4;
  UMaterialInterface *pUVar5;
  UMaterial *pUVar6;
  undefined ***pppuVar7;
  undefined1 auStackY_b8 [32];
  code *local_68 [2];
  undefined **local_58;
  FCableSceneProxy *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  FPrimitiveSceneProxy::FPrimitiveSceneProxy
            ((FPrimitiveSceneProxy *)this,(UPrimitiveComponent *)param_1,(FName)0x0);
  this->Material = (UMaterialInterface *)0x0;
  this->_padding_ = (longlong)&___7FCableSceneProxy__6B_;
  FStaticMeshVertexBuffer::FStaticMeshVertexBuffer(&(this->VertexBuffers).StaticMeshVertexBuffer);
  FPositionVertexBuffer::FPositionVertexBuffer(&(this->VertexBuffers).PositionVertexBuffer);
  FColorVertexBuffer::FColorVertexBuffer(&(this->VertexBuffers).ColorVertexBuffer);
  FIndexBuffer::FIndexBuffer((FIndexBuffer *)&this->IndexBuffer);
  (this->IndexBuffer)._padding_ = (longlong)&___7FCableIndexBuffer__6B_;
  FLocalVertexFactory::FLocalVertexFactory
            (&this->VertexFactory,*(Type *)(this->_padding_ + 8),"FCableSceneProxy");
  pcVar1 = *(code **)(param_1->_padding_ + 0xaa8);
  EVar4 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
  (*pcVar1)(param_1,&this->MaterialRelevance,EVar4);
  this->NumSegments = param_1->NumSegments;
  this->CableWidth = param_1->CableWidth;
  this->NumSides = param_1->NumSides;
  this->TileMaterial = param_1->TileMaterial;
  FRayTracingGeometry::FRayTracingGeometry(&this->StaticRayTracingGeometry);
  FRayTracingGeometry::FRayTracingGeometry(&this->DynamicRayTracingGeometry);
  (this->CachedRayTracingMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedRayTracingMaterials).ArrayNum = 0;
  (this->CachedRayTracingMaterials).ArrayMax = 0;
  FStaticMeshVertexBuffers::InitWithDummyData
            (&this->VertexBuffers,(FRHICommandListBase *)0x0,&UE::RenderCommandPipe::Cable,
             &this->VertexFactory,(this->NumSegments + 1) * (this->NumSides + 1),1,0);
  (this->IndexBuffer).NumIndices = this->NumSegments * this->NumSides * 6;
  pUVar5 = (UMaterialInterface *)(**(code **)(param_1->_padding_ + 0x690))(param_1,0);
  this->Material = pUVar5;
  if (pUVar5 == (UMaterialInterface *)0x0) {
    pUVar6 = UMaterial::GetDefaultMaterial(MD_Surface);
    this->Material = (UMaterialInterface *)pUVar6;
  }
  bVar2 = IsRayTracingEnabled();
  if ((bVar2) && ((*(byte *)((longlong)&(this->MaterialRelevance).field0_0x0 + 5) & 0x40) != 0)) {
    bVar3 = 2;
  }
  else {
    bVar3 = 0;
  }
  local_40 = (undefined ***)0x0;
  this->field_0x658 = this->field_0x658 & 0xfc | bVar2 | bVar3;
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1___0FCableSceneProxy__QEAA_PEAVUCableComponent___Z__00_0A__Function_Private_Core_UE__6B_
  ;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FCableSceneProxy::FCableSceneProxy'::__l2::<lambda_1>,void,FRHICommandList_&>
                ::Call;
  local_50 = this;
  FRenderCommandDispatcher::
  Enqueue<TRenderCommandTag<_FCableSceneProxy::FCableSceneProxy_::__l2::TSTR_InitCableResources119>_>
            (&UE::RenderCommandPipe::Cable,
             (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_68);
  if (local_68[0] != (code *)0x0) {
    pppuVar7 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar7 = local_40;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  return this;
}

// ~FCableSceneProxy @ 14f013df0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FCableSceneProxy::~FCableSceneProxy(FCableSceneProxy *this)

{
  FStaticMeshVertexBuffers *this_00;
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FCableSceneProxy__6B_;
  this_00 = &this->VertexBuffers;
  (**(code **)((this->VertexBuffers).PositionVertexBuffer._padding_ + 0x20))
            (&(this->VertexBuffers).PositionVertexBuffer);
  (**(code **)((this_00->StaticMeshVertexBuffer)._padding_ + 0x20))(this_00);
  (**(code **)((this->VertexBuffers).ColorVertexBuffer._padding_ + 0x20))
            (&(this->VertexBuffers).ColorVertexBuffer);
  (**(code **)((this->IndexBuffer)._padding_ + 0x20))(&this->IndexBuffer);
  (**(code **)((this->VertexFactory)._padding_ + 0x20))(&this->VertexFactory);
  (**(code **)((this->StaticRayTracingGeometry)._padding_ + 0x20))(&this->StaticRayTracingGeometry);
  (**(code **)((this->DynamicRayTracingGeometry)._padding_ + 0x20))
            (&this->DynamicRayTracingGeometry);
  DestructItems<FMeshBatch,int>
            ((FMeshBatch *)(this->CachedRayTracingMaterials).AllocatorInstance.Data,
             (this->CachedRayTracingMaterials).ArrayNum);
  pFVar1 = (this->CachedRayTracingMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRayTracingGeometry::~FRayTracingGeometry(&this->DynamicRayTracingGeometry);
  FRayTracingGeometry::~FRayTracingGeometry(&this->StaticRayTracingGeometry);
  FLocalVertexFactory::~FLocalVertexFactory(&this->VertexFactory);
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)&this->IndexBuffer);
  FColorVertexBuffer::~FColorVertexBuffer(&(this->VertexBuffers).ColorVertexBuffer);
  FPositionVertexBuffer::~FPositionVertexBuffer(&(this->VertexBuffers).PositionVertexBuffer);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(&this_00->StaticMeshVertexBuffer);
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  return;
}

// operator() @ 14f013fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
`FCableSceneProxy::FCableSceneProxy'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  FScriptContainerElement *pFVar1;
  FCableSceneProxy *this_00;
  longlong lVar2;
  FRHIResource *this_01;
  int iVar3;
  ForAnyElementType FVar4;
  undefined1 auStack_148 [32];
  undefined1 local_128 [8];
  FRayTracingGeometryInitializer local_120;
  FRayTracingGeometryInitializer local_a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  (**(code **)(*(longlong *)(*(longlong *)this + 0x3e0) + 0x18))();
  this_00 = *(FCableSceneProxy **)this;
  if (this_00->bSupportRayTracing) {
    FCableSceneProxy::CreateRayTracingGeometry_RenderingThread
              (this_00,&this_00->StaticRayTracingGeometry,(FRHICommandListBase *)param_1);
    *(byte *)(*(longlong *)this + 0x658) = *(byte *)(*(longlong *)this + 0x658) | 4;
    lVar2 = *(longlong *)this;
    if ((*(byte *)(lVar2 + 0x658) & 2) != 0) {
      FRayTracingGeometryInitializer::FRayTracingGeometryInitializer
                (&local_a8,(FRayTracingGeometryInitializer *)(lVar2 + 0x6d0));
      iVar3 = local_a8.Segments.ArrayNum;
      pFVar1 = local_a8.Segments.AllocatorInstance.Data +
               (longlong)local_a8.Segments.ArrayNum * 0x28;
      FVar4.Data = local_a8.Segments.AllocatorInstance.Data;
      while( true ) {
        if (local_a8.Segments.ArrayNum != iVar3) {
          `TCheckedPointerIterator<FRayTracingGeometrySegment,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_128);
        }
        if (FVar4.Data == pFVar1) break;
        this_01 = *(FRHIResource **)FVar4.Data;
        if (this_01 != (FRHIResource *)0x0) {
          *(undefined8 *)FVar4.Data = 0;
          FRHIResource::Release(this_01);
        }
        FVar4.Data = FVar4.Data + 0x28;
      }
      local_120.IndexBuffer.Reference = local_a8.IndexBuffer.Reference;
      local_120.IndexBufferOffset = local_a8.IndexBufferOffset;
      local_120.GeometryType = local_a8.GeometryType;
      local_120.TotalPrimitiveCount = local_a8.TotalPrimitiveCount;
      local_120.bAllowCompaction = local_a8.bAllowCompaction;
      local_120.bTemplate = local_a8.bTemplate;
      local_120.Segments.AllocatorInstance.Data = local_a8.Segments.AllocatorInstance.Data;
      local_120.Segments.ArrayNum = local_a8.Segments.ArrayNum;
      local_120.Segments.ArrayMax = local_a8.Segments.ArrayMax;
      local_120.OfflineData = local_a8.OfflineData;
      local_120.SourceGeometry = local_a8.SourceGeometry;
      local_120.DebugName.Number = local_a8.DebugName.Number;
      local_120.OfflineDataHeader.Reserved[0] = local_a8.OfflineDataHeader.Reserved[0];
      local_120.OfflineDataHeader.Reserved[1] = local_a8.OfflineDataHeader.Reserved[1];
      local_120.OfflineDataHeader.Reserved[2] = local_a8.OfflineDataHeader.Reserved[2];
      local_120.OfflineDataHeader.Reserved[3] = local_a8.OfflineDataHeader.Reserved[3];
      local_120.OwnerName = local_a8.OwnerName;
      local_a8.bFastBuild = true;
      local_a8.bAllowUpdate = true;
      local_a8.Type = Rendering;
      local_a8.IndexBuffer.Reference = (FRHIBuffer *)0x0;
      local_120.bFastBuild = true;
      local_120.bAllowUpdate = true;
      local_120.Type = Rendering;
      local_a8.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.Segments.ArrayNum = 0;
      local_a8.Segments.ArrayMax = 0;
      local_120.OfflineDataHeader.Reserved[4] = local_a8.OfflineDataHeader.Reserved[4];
      local_120.OfflineDataHeader.Reserved[5] = local_a8.OfflineDataHeader.Reserved[5];
      local_120.DebugName.Name = local_a8.DebugName.Name;
      FRayTracingGeometry::SetInitializer((FRayTracingGeometry *)(lVar2 + 0x760),&local_120);
      (**(code **)(*(longlong *)(lVar2 + 0x760) + 0x18))(lVar2 + 0x760,param_1);
      DestructItems<FRayTracingGeometrySegment,int>
                ((FRayTracingGeometrySegment *)local_a8.Segments.AllocatorInstance.Data,
                 local_a8.Segments.ArrayNum);
      if ((FRayTracingGeometrySegment *)local_a8.Segments.AllocatorInstance.Data !=
          (FRayTracingGeometrySegment *)0x0) {
        FMemory::Free(local_a8.Segments.AllocatorInstance.Data);
      }
      if (local_a8.IndexBuffer.Reference != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_a8.IndexBuffer.Reference);
      }
    }
  }
  return;
}

// BuildCableMesh @ 14f0147c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FCableSceneProxy::BuildCableMesh
          (FCableSceneProxy *this,FRHICommandListBase *param_1,FCableDynamicData *param_2)

{
  FStaticMeshVertexBuffers *this_00;
  uchar *puVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  uchar *puVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  FRHICommandListBase *this_01;
  bool bVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  void *pvVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  int *piVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  float extraout_XMM0_Da;
  double dVar29;
  float extraout_XMM0_Db;
  double dVar30;
  float fVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  float fVar42;
  undefined4 uVar43;
  float fVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  uint local_res8 [2];
  FRHICommandListBase *local_res10;
  ushort local_res18 [4];
  uint local_res20;
  int local_1b8;
  longlong local_1a0;
  longlong local_198;
  TVector<double>_u_0 local_190;
  float local_178;
  float fStack_174;
  TVector<float>_u_0 local_168;
  TVector<float>_u_0 local_158;
  TVector<float>_u_0 local_148;
  double local_138;
  longlong local_130;
  TQuat<double> local_128;
  double local_108;
  TVector<double>_u_0 local_100 [8];
  
  iVar19 = (param_2->CablePoints).ArrayNum;
  local_130 = (longlong)iVar19;
  uVar22 = 0;
  iVar25 = 0;
  iVar18 = this->NumSides + 1;
  local_res8[0] = 0xffffffff;
  uVar27 = iVar19 - 1;
  local_res10 = param_1;
  if (0 < local_130) {
    uVar43 = (undefined4)__real_3ff0000000000000;
    uVar45 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    uVar46 = (undefined4)__real_3e45798ee0000000;
    uVar47 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
    uVar28 = (uint)__xmm_80000000000000008000000000000000;
    uVar26 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    uVar48 = (undefined4)__real_bff0000000000000;
    uVar49 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    local_1a0 = 0;
    local_198 = 0;
    local_res20 = 1;
    fVar31 = __real_3f800000 / (float)(int)uVar27;
    do {
      iVar19 = local_res20 - 1;
      uVar24 = local_res20 - 2;
      if ((int)(local_res20 - 2) < 0) {
        uVar24 = 0;
      }
      uVar14 = uVar27;
      if ((int)local_res20 < (int)uVar27) {
        uVar14 = local_res20;
      }
      uVar12 = 0;
      if ((int)uVar14 < (param_2->CablePoints).ArrayNum) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = (param_2->CablePoints).AllocatorInstance.Data;
      lVar15 = (longlong)(int)uVar14;
      uVar14 = 0;
      if ((int)uVar24 < (param_2->CablePoints).ArrayNum) {
        uVar14 = ~uVar24 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar16 = (longlong)(int)uVar24;
      pFVar4 = (param_2->CablePoints).AllocatorInstance.Data;
      local_190._s_0.X = *(double *)(pFVar3 + lVar15 * 0x18) - *(double *)(pFVar4 + lVar16 * 0x18);
      local_190._s_0.Y =
           *(double *)(pFVar3 + lVar15 * 0x18 + 8) - *(double *)(pFVar4 + lVar16 * 0x18 + 8);
      local_190._s_0.Z =
           *(double *)(pFVar3 + lVar15 * 0x18 + 0x10) - *(double *)(pFVar4 + lVar16 * 0x18 + 0x10);
      dVar35 = local_190._s_0.Y * local_190._s_0.Y + local_190._s_0.X * local_190._s_0.X +
               local_190._s_0.Z * local_190._s_0.Z;
      if (dVar35 != (double)CONCAT44(uVar45,uVar43)) {
        if ((double)CONCAT44(uVar47,uVar46) <= dVar35) {
          local_108 = (double)CONCAT44(uVar45,uVar43) / SQRT(dVar35);
          local_190._s_0.X = local_108 * local_190._s_0.X;
          local_190._s_0.Y = local_108 * local_190._s_0.Y;
          local_190._s_0.Z = local_190._s_0.Z * local_108;
        }
        else {
          local_190._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_190._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_190._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
      }
      local_100[0]._16_8_ = CONCAT44(uVar49,uVar48);
      local_100[0]._s_0.X = 0.0;
      local_100[0]._s_0.Y = 0.0;
      UE::Math::TQuat<double>::FindBetweenVectors
                (&local_128,(TVector<double> *)&local_100[0]._s_0,(TVector<double> *)&local_190._s_0
                );
      dVar36 = (double)CONCAT44((uint)((ulonglong)local_128.Z >> 0x20) ^ uVar26,
                                SUB84(local_128.Z,0) ^ uVar28);
      dVar36 = dVar36 + dVar36;
      dVar32 = local_128.X + local_128.X;
      dVar29 = local_128.W * dVar36;
      local_1b8 = 0;
      dVar9 = local_128.Z * dVar36;
      dVar10 = local_128.Y * dVar32;
      dVar11 = local_128.W * dVar32;
      dVar32 = local_128.X * dVar32;
      dVar33 = local_128.Z + local_128.Z;
      dVar36 = local_128.Y * dVar36;
      dVar37 = (double)CONCAT44((uint)((ulonglong)local_128.Y >> 0x20) ^ uVar26,
                                SUB84(local_128.Y,0) ^ uVar28);
      dVar38 = local_128.Z * dVar33;
      dVar37 = dVar37 + dVar37;
      dVar40 = local_128.X * dVar33;
      dVar35 = local_128.Y * dVar37;
      dVar8 = local_128.W * dVar37;
      local_138 = local_128.W * dVar33 - local_128.X * dVar37;
      if (0 < iVar18) {
        uVar28 = local_res20 - 1;
        do {
          dVar33 = local_138;
          fVar44 = (float)local_1b8 / (float)this->NumSides;
          __libm_sse2_sincosf_();
          dVar37 = (double)extraout_XMM0_Da;
          uVar26 = 0;
          if (iVar19 < (param_2->CablePoints).ArrayNum) {
            uVar26 = ~uVar28 >> 0x1f;
          }
          dVar39 = (double)extraout_XMM0_Db;
          dVar7 = (dVar10 + dVar29) * dVar37 +
                  ((dVar35 - dVar38) + (double)CONCAT44(uVar45,uVar43)) * dVar39;
          dVar33 = ((dVar9 - dVar32) + (double)CONCAT44(uVar45,uVar43)) * dVar37 + dVar33 * dVar39;
          dVar37 = (dVar11 - dVar36) * dVar37 + (dVar8 + dVar40) * dVar39;
          if ((uVar26 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar3 = (param_2->CablePoints).AllocatorInstance.Data;
          uVar26 = (uint)uVar22;
          uVar21 = (ulonglong)(uVar26 * (this->VertexBuffers).PositionVertexBuffer.Stride);
          puVar5 = (this->VertexBuffers).PositionVertexBuffer.Data;
          dVar30 = dVar33 * __real_3fe0000000000000;
          dVar41 = (double)this->CableWidth;
          dVar34 = dVar37 * __real_3fe0000000000000;
          dVar39 = *(double *)(pFVar3 + local_198 + 8);
          dVar2 = *(double *)(pFVar3 + local_198 + 0x10);
          *(float *)(puVar5 + uVar21) =
               (float)(dVar7 * __real_3fe0000000000000 * dVar41 + *(double *)(pFVar3 + local_198));
          *(float *)(puVar5 + uVar21 + 4) = (float)(dVar30 * dVar41 + dVar39);
          *(float *)(puVar5 + uVar21 + 8) = (float)(dVar34 * dVar41 + dVar2);
          fVar42 = (float)iVar19 * fVar31 * this->TileMaterial;
          puVar5 = (this->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
          lVar15 = (this->VertexBuffers).StaticMeshVertexBuffer.NumTexCoords * uVar22;
          pcVar6 = *(code **)((longlong)*(this->VertexBuffers).StaticMeshVertexBuffer.TexcoordData +
                             0x50);
          local_178 = fVar42;
          fStack_174 = fVar44;
          if ((this->VertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false) {
            puVar1 = puVar5 + lVar15 * 4;
            lVar15 = (*pcVar6)();
            if ((puVar5 + lVar15 < puVar1 + 4) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x166,L""), bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if ((puVar1 < (this->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x167,L""), bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_res8[0] = local_res8[0] & 0xffff0000;
            FGenericPlatformMath::StoreHalf((ushort *)local_res8,fVar42);
            *(undefined2 *)puVar1 = (undefined2)local_res8[0];
            local_res18[0] = 0;
            FGenericPlatformMath::StoreHalf(local_res18,fVar44);
            *(ushort *)(puVar1 + 2) = local_res18[0];
          }
          else {
            puVar1 = puVar5 + lVar15 * 8;
            lVar15 = (*pcVar6)();
            if ((puVar5 + lVar15 < puVar1 + 8) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x15d,L""), bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if ((puVar1 < (this->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x15e,L""), bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            *(ulonglong *)puVar1 = CONCAT44(fStack_174,local_178);
          }
          local_168._s_0.X = (float)dVar7;
          local_168._s_0.Z = (float)dVar37;
          local_168._s_0.Y = (float)dVar33;
          puVar5 = (this->VertexBuffers).ColorVertexBuffer.Data +
                   uVar26 * (this->VertexBuffers).ColorVertexBuffer.Stride;
          puVar5[0] = 0xff;
          puVar5[1] = 0xff;
          puVar5[2] = 0xff;
          puVar5[3] = 0xff;
          local_158._s_0.X = (float)(local_190._s_0.Z * dVar33 - local_190._s_0.Y * dVar37);
          local_158._s_0.Y = (float)(local_190._s_0.X * dVar37 - local_190._s_0.Z * dVar7);
          local_148._s_0.X = (float)local_190._s_0.X;
          local_148._s_0.Z = (float)local_190._s_0.Z;
          local_158._s_0.Z = (float)(local_190._s_0.Y * dVar7 - local_190._s_0.X * dVar33);
          local_148._s_0.Y = (float)local_190._s_0.Y;
          FStaticMeshVertexBuffer::SetVertexTangents
                    (&(this->VertexBuffers).StaticMeshVertexBuffer,uVar26,
                     (TVector<float> *)&local_148._s_0,(TVector<float> *)&local_158._s_0,
                     (TVector<float> *)&local_168._s_0);
          uVar22 = (ulonglong)(uVar26 + 1);
          local_1b8 = local_1b8 + 1;
        } while (local_1b8 < iVar18);
        uVar43 = (undefined4)__real_3ff0000000000000;
        uVar45 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        uVar46 = (undefined4)__real_3e45798ee0000000;
        uVar47 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
        uVar28 = (uint)__xmm_80000000000000008000000000000000;
        uVar26 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      }
      iVar25 = (int)uVar22;
      local_res20 = local_res20 + 1;
      local_198 = local_198 + 0x18;
      local_1a0 = local_1a0 + 1;
      uVar48 = (undefined4)__real_bff0000000000000;
      uVar49 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    } while (local_1a0 < local_130);
  }
  piVar23 = &this->NumSides;
  if ((iVar25 != (this->NumSegments + 1) * (*piVar23 + 1)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("VertIdx == GetRequiredVertexCount()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CableComponent\\Source\\CableComponent\\Private\\CableComponent.cpp"
                          ,0xda,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_01 = local_res10;
  pvVar17 = FRHICommandListBase::LockBuffer
                      (local_res10,
                       (FRHIBuffer *)(this->VertexBuffers).PositionVertexBuffer._padding_,0,
                       (this->VertexBuffers).PositionVertexBuffer.NumVertices *
                       (this->VertexBuffers).PositionVertexBuffer.Stride,RLM_WriteOnly);
  memcpy(pvVar17,(this->VertexBuffers).PositionVertexBuffer.Data,
         (ulonglong)
         ((this->VertexBuffers).PositionVertexBuffer.NumVertices *
         (this->VertexBuffers).PositionVertexBuffer.Stride));
  FRHICommandListBase::UnlockBuffer
            (this_01,(FRHIBuffer *)(this->VertexBuffers).PositionVertexBuffer._padding_);
  pvVar17 = FRHICommandListBase::LockBuffer
                      (this_01,(FRHIBuffer *)(this->VertexBuffers).ColorVertexBuffer._padding_,0,
                       (this->VertexBuffers).ColorVertexBuffer.NumVertices *
                       (this->VertexBuffers).ColorVertexBuffer.Stride,RLM_WriteOnly);
  memcpy(pvVar17,(this->VertexBuffers).ColorVertexBuffer.Data,
         (ulonglong)
         ((this->VertexBuffers).ColorVertexBuffer.NumVertices *
         (this->VertexBuffers).ColorVertexBuffer.Stride));
  FRHICommandListBase::UnlockBuffer
            (this_01,(FRHIBuffer *)(this->VertexBuffers).ColorVertexBuffer._padding_);
  this_00 = &this->VertexBuffers;
  uVar28 = FStaticMeshVertexBuffer::GetTangentSize(&this_00->StaticMeshVertexBuffer);
  pvVar17 = FRHICommandListBase::LockBuffer
                      (this_01,*(FRHIBuffer **)
                                &(this->VertexBuffers).StaticMeshVertexBuffer.TangentsVertexBuffer.
                                 field_0x20,0,uVar28,RLM_WriteOnly);
  iVar19 = FStaticMeshVertexBuffer::GetTangentSize(&this_00->StaticMeshVertexBuffer);
  memcpy(pvVar17,(this->VertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr,(longlong)iVar19);
  FRHICommandListBase::UnlockBuffer
            (this_01,*(FRHIBuffer **)
                      &(this->VertexBuffers).StaticMeshVertexBuffer.TangentsVertexBuffer.field_0x20)
  ;
  uVar28 = FStaticMeshVertexBuffer::GetTexCoordSize(&this_00->StaticMeshVertexBuffer);
  pvVar17 = FRHICommandListBase::LockBuffer
                      (this_01,*(FRHIBuffer **)
                                &(this->VertexBuffers).StaticMeshVertexBuffer.TexCoordVertexBuffer.
                                 field_0x20,0,uVar28,RLM_WriteOnly);
  iVar19 = FStaticMeshVertexBuffer::GetTexCoordSize(&this_00->StaticMeshVertexBuffer);
  memcpy(pvVar17,(this->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr,(longlong)iVar19);
  FRHICommandListBase::UnlockBuffer
            (this_01,*(FRHIBuffer **)
                      &(this->VertexBuffers).StaticMeshVertexBuffer.TexCoordVertexBuffer.field_0x20)
  ;
  pvVar17 = FRHICommandListBase::LockBuffer
                      (this_01,(FRHIBuffer *)(this->IndexBuffer)._padding_,0,
                       *piVar23 * this->NumSegments * 0x18,RLM_WriteOnly);
  uVar28 = 0;
  iVar19 = 0;
  if (0 < (int)uVar27) {
    iVar18 = *piVar23;
    do {
      iVar25 = 0;
      if (0 < iVar18) {
        do {
          iVar20 = (iVar18 + 1) * iVar19 + iVar25;
          *(int *)((longlong)pvVar17 + (ulonglong)uVar28 * 4) = iVar20;
          iVar18 = (iVar18 + 1) * (iVar19 + 1) + iVar25;
          iVar25 = iVar25 + 1;
          iVar20 = iVar20 + 1;
          *(int *)((longlong)pvVar17 + (ulonglong)(uVar28 + 1) * 4) = iVar20;
          *(int *)((longlong)pvVar17 + (ulonglong)(uVar28 + 2) * 4) = iVar18;
          *(int *)((longlong)pvVar17 + (ulonglong)(uVar28 + 3) * 4) = iVar18;
          *(int *)((longlong)pvVar17 + (ulonglong)(uVar28 + 4) * 4) = iVar20;
          *(int *)((longlong)pvVar17 + (ulonglong)(uVar28 + 5) * 4) = iVar18 + 1;
          uVar28 = uVar28 + 6;
          iVar18 = *piVar23;
        } while (iVar25 < iVar18);
      }
      iVar19 = iVar19 + 1;
    } while (iVar19 < (int)uVar27);
  }
  FRHICommandListBase::UnlockBuffer(this_01,(FRHIBuffer *)(this->IndexBuffer)._padding_);
  if ((uVar28 != this->NumSides * this->NumSegments * 6) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IndexBufferIndex == GetRequiredIndexCount()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CableComponent\\Source\\CableComponent\\Private\\CableComponent.cpp"
                          ,0x111,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  return;
}

// CreateRayTracingGeometry_RenderingThread @ 14f015a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FCableSceneProxy::CreateRayTracingGeometry_RenderingThread
          (FCableSceneProxy *this,FRayTracingGeometry *param_1,FRHICommandListBase *param_2)

{
  FScriptContainerElement *pFVar1;
  FRHIBuffer *pFVar2;
  code *pcVar3;
  FRHIBuffer *this_00;
  ForAnyElementType FVar4;
  bool bVar5;
  int iVar6;
  FDebugName *pFVar7;
  undefined1 auStackY_1a8 [32];
  FRayTracingGeometrySegment local_158;
  FRayTracingGeometryInitializer local_130;
  FDebugName local_c0 [2];
  FRHIBuffer *local_a8;
  undefined8 local_a0;
  uint local_98;
  undefined4 local_94;
  ERayTracingGeometryInitializerType local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  FResourceArrayUploadInterface *local_78;
  uint local_70 [6];
  FRHIRayTracingGeometry *local_58;
  FDebugName local_50;
  FName local_44;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_94 = 0x10000;
  local_a8 = (FRHIBuffer *)0x0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = Rendering;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_78 = (FResourceArrayUploadInterface *)0x0;
  local_58 = (FRHIRayTracingGeometry *)0x0;
  local_70[0] = 0xffffffff;
  local_70[1] = 0xffffffff;
  local_70[2] = 0xffffffff;
  local_70[3] = 0xffffffff;
  local_70[4] = 0xffffffff;
  local_70[5] = 0xffffffff;
  FDebugName::FDebugName(&local_50);
  local_44.ComparisonIndex.Value = 0;
  local_44.Number = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_FCableSceneProxy::CreateRayTracingGeometry_RenderingThread(FRayTracingGeometry&___ptr64,FRHICommandListBase&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_FCableSceneProxy::CreateRayTracingGeometry_RenderingThread(FRayTracingGeometry&___ptr64,FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_FCableSceneProxy::CreateRayTracingGeometry_RenderingThread(FRayTracingGeometry&___ptr64,FRHICommandListBase&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_void___cdecl_FCableSceneProxy::CreateRayTracingGeometry_RenderingThread(FRayTracingGeometry&___ptr64,FRHICommandListBase&___ptr64)___ptr64'
                    ::__l2::DebugName,"FCableSceneProxy");
    _Init_thread_footer(&`public:_void___cdecl_FCableSceneProxy::CreateRayTracingGeometry_RenderingThread(FRayTracingGeometry&___ptr64,FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  iVar6 = `public:_void___cdecl_FCableSceneProxy::CreateRayTracingGeometry_RenderingThread(FRayTracingGeometry&___ptr64,FRHICommandListBase&___ptr64)___ptr64'
          ::__l2::DebugNumber;
  `public:_void___cdecl_FCableSceneProxy::CreateRayTracingGeometry_RenderingThread(FRayTracingGeometry&___ptr64,FRHICommandListBase&___ptr64)___ptr64'
  ::__l2::DebugNumber =
       `public:_void___cdecl_FCableSceneProxy::CreateRayTracingGeometry_RenderingThread(FRayTracingGeometry&___ptr64,FRHICommandListBase&___ptr64)___ptr64'
       ::__l2::DebugNumber + 1;
  pFVar7 = FDebugName::FDebugName
                     (local_c0,`public:_void___cdecl_FCableSceneProxy::CreateRayTracingGeometry_RenderingThread(FRayTracingGeometry&___ptr64,FRHICommandListBase&___ptr64)___ptr64'
                               ::__l2::DebugName,iVar6);
  this_00 = local_a8;
  pFVar2 = (FRHIBuffer *)(this->IndexBuffer)._padding_;
  local_50.Name = pFVar7->Name;
  local_50.Number = pFVar7->Number;
  if (local_a8 != pFVar2) {
    local_a8 = pFVar2;
    if (pFVar2 != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar2);
    }
    if (this_00 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  pFVar2 = (FRHIBuffer *)(this->VertexBuffers).PositionVertexBuffer._padding_;
  iVar6 = (this->IndexBuffer).NumIndices;
  local_a0 = local_a0 & 0xffffffff;
  local_94 = CONCAT22(local_94._2_2_,1);
  local_98 = iVar6 / 3 + (iVar6 >> 0x1f) +
             (int)(((longlong)iVar6 / 3 + ((longlong)iVar6 >> 0x3f) & 0xffffffffU) >> 0x1f);
  local_158.VertexBuffer.Reference = (FRHIBuffer *)0x0;
  local_158.VertexBufferElementType = VET_Float3;
  local_158.VertexBufferOffset = 0;
  local_158.VertexBufferStride = 0xc;
  local_158.FirstPrimitive = 0;
  local_158.bForceOpaque = false;
  local_158.bAllowDuplicateAnyHitShaderInvocation = true;
  local_158.bEnabled = true;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    local_158.VertexBuffer.Reference = pFVar2;
    FRHIResource::AddRef((FRHIResource *)pFVar2);
  }
  local_158.MaxVertices = (this->VertexBuffers).PositionVertexBuffer.NumVertices;
  local_158.NumPrimitives = local_98;
  if (((local_88.Data <= &local_158) &&
      (&local_158 < (FRayTracingGeometrySegment *)(local_88.Data + (longlong)local_80._4_4_ * 0x28))
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (int)local_80;
  if ((int)local_80 == local_80._4_4_) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&local_88,(int *)((longlong)&local_80 + 4));
  }
  local_80 = CONCAT44(local_80._4_4_,iVar6 + 1);
  pFVar1 = local_88.Data + (longlong)iVar6 * 0x28;
  *(undefined8 *)&pFVar1->field_0x0 = 0;
  *(FRHIBuffer **)&pFVar1->field_0x0 = local_158.VertexBuffer.Reference;
  if (local_158.VertexBuffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_158.VertexBuffer.Reference);
  }
  *(EVertexElementType *)(pFVar1 + 8) = local_158.VertexBufferElementType;
  *(uint *)(pFVar1 + 0xc) = local_158.VertexBufferOffset;
  *(uint *)(pFVar1 + 0x10) = local_158.VertexBufferStride;
  *(uint *)(pFVar1 + 0x14) = local_158.MaxVertices;
  *(uint *)(pFVar1 + 0x18) = local_158.FirstPrimitive;
  *(uint *)(pFVar1 + 0x1c) = local_158.NumPrimitives;
  pFVar1[0x20] = (FScriptContainerElement)local_158.bForceOpaque;
  pFVar1[0x21] = (FScriptContainerElement)local_158.bAllowDuplicateAnyHitShaderInvocation;
  pFVar1[0x22] = (FScriptContainerElement)local_158.bEnabled;
  local_130.IndexBuffer.Reference = local_a8;
  if (local_a8 != (FRHIBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_a8);
  }
  FVar4.Data = local_88.Data;
  iVar6 = (int)local_80;
  local_130.IndexBufferOffset = (uint)local_a0;
  local_130.GeometryType = local_a0._4_4_;
  local_130.TotalPrimitiveCount = local_98;
  local_130.bFastBuild = (bool)(undefined1)local_94;
  local_130.bAllowUpdate = (bool)local_94._1_1_;
  local_130.bAllowCompaction = (bool)local_94._2_1_;
  local_130.bTemplate = (bool)local_94._3_1_;
  local_130.Type = local_90;
  local_130.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.Segments.ArrayNum = (int)local_80;
  if ((int)local_80 == 0) {
    local_130.Segments.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,(int)local_80,0,&local_130.Segments.AllocatorInstance,(int)local_80,
               &local_130.Segments.ArrayMax);
    ConstructItems<FRayTracingGeometrySegment,FRayTracingGeometrySegment,int>
              (local_130.Segments.AllocatorInstance.Data,(FRayTracingGeometrySegment *)FVar4.Data,
               iVar6);
  }
  local_130.OfflineData = local_78;
  local_130.SourceGeometry = local_58;
  local_130.DebugName.Number = local_50.Number;
  local_130.OfflineDataHeader.Reserved[0] = local_70[0];
  local_130.OfflineDataHeader.Reserved[1] = local_70[1];
  local_130.OfflineDataHeader.Reserved[2] = local_70[2];
  local_130.OfflineDataHeader.Reserved[3] = local_70[3];
  local_130.OwnerName = local_44;
  local_130.OfflineDataHeader.Reserved[4] = local_70[4];
  local_130.OfflineDataHeader.Reserved[5] = local_70[5];
  local_130.DebugName.Name = local_50.Name;
  FRayTracingGeometry::SetInitializer(param_1,&local_130);
  (**(code **)(param_1->_padding_ + 0x18))(param_1,param_2);
  if (local_158.VertexBuffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_158.VertexBuffer.Reference);
  }
  DestructItems<FRayTracingGeometrySegment,int>
            ((FRayTracingGeometrySegment *)local_88.Data,(int)local_80);
  if ((FRayTracingGeometrySegment *)local_88.Data != (FRayTracingGeometrySegment *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (local_a8 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_a8);
  }
  return;
}

// DrawStaticElements @ 14f017050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FCableSceneProxy::DrawStaticElements(FCableSceneProxy *this,FStaticPrimitiveDrawInterface *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<FMeshBatchElement> FVar5;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong local_100;
  FMeshBatch local_f8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_128;
  if ((this->_padding_ & 0x2000) == 0) {
    FMeshBatch::FMeshBatch(&local_f8);
    local_f8.VertexFactory = (FVertexFactory *)&this->VertexFactory;
    local_f8.MaterialRenderProxy =
         (FMaterialRenderProxy *)(**(code **)(this->Material->_padding_ + 0x310))();
    local_f8.MeshIdInPrimitive = 0;
    local_f8._212_4_ = (byte)this->_padding_ & 1 | local_f8._212_4_ & 0xffffe07e;
    local_f8.LODIndex = '\0';
    local_f8.SegmentIndex = 0;
    if (local_f8.Elements.ArrayNum < 1) {
      local_108 = 0;
      local_100 = (longlong)local_f8.Elements.ArrayNum;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FVar5 = (ForElementType<FMeshBatchElement>)&local_f8;
    if (local_f8.Elements.AllocatorInstance.SecondaryData != (ForElementType<FMeshBatchElement>)0x0)
    {
      FVar5 = local_f8.Elements.AllocatorInstance.SecondaryData;
    }
    *(FCableIndexBuffer **)((longlong)FVar5 + 0x18) = &this->IndexBuffer;
    *(uint *)((longlong)FVar5 + 0x58) = 0;
    iVar1 = this->NumSegments;
    iVar2 = this->NumSides;
    *(uint *)((longlong)FVar5 + 0x68) = 0;
    *(int *)((longlong)FVar5 + 0x5c) = iVar1 * iVar2 * 2;
    *(int *)((longlong)FVar5 + 0x6c) = (this->NumSegments + 1) * (this->NumSides + 1);
    (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_f8,__real_7f7fffff);
    FVar5 = (ForElementType<FMeshBatchElement>)&local_f8;
    if (local_f8.Elements.AllocatorInstance.SecondaryData != (ForElementType<FMeshBatchElement>)0x0)
    {
      FVar5 = local_f8.Elements.AllocatorInstance.SecondaryData;
    }
    DestructItems<FMeshBatchElement,int>((FMeshBatchElement *)FVar5,local_f8.Elements.ArrayNum);
    if (local_f8.Elements.AllocatorInstance.SecondaryData != (ForElementType<FMeshBatchElement>)0x0)
    {
      FMemory::Free((void *)local_f8.Elements.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// GetDynamicMeshElements @ 14f017db0

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
FCableSceneProxy::GetDynamicMeshElements
          (FCableSceneProxy *this,TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,
          FSceneViewFamily *param_2,uint param_3,FMeshElementCollector *param_4)

{
  int iVar1;
  UMaterial *pUVar2;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  FNameEntryId FVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  FName *pFVar16;
  TStatIdData *pTVar17;
  FColoredMaterialRenderProxy *this_00;
  undefined4 extraout_var;
  FMaterialRenderProxy *pFVar18;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar19;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar20;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar21;
  float *pfVar22;
  FPrimitiveDrawInterface *pFVar23;
  longlong lVar24;
  FName FVar25;
  ForElementType<FMeshBatchElement> FVar26;
  uint uVar27;
  byte bVar28;
  ForElementType<FMeshBatchElement> FVar29;
  undefined1 auStackY_598 [32];
  FColoredMaterialRenderProxy *local_530;
  FColor_u_0 local_528;
  uint local_524;
  FName local_520;
  FNameEntryId local_518;
  uint uStack_514;
  FName local_510;
  FName local_508;
  undefined1 local_4f8 [8];
  FSceneViewFamily *local_4f0;
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *local_4e8;
  FName local_4e0;
  FName local_4d8;
  FLinearColor_u_0 local_4d0;
  undefined1 local_4b8 [664];
  float local_220 [114];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_598;
  local_524 = param_3;
  local_4f0 = param_2;
  local_4e8 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_FCableSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FCableSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FCableSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_CableSceneProxy_GetDynamicMeshElements = (TStatIdData *)0x0;
    pFVar16 = ::FName::FName(&local_4e0,"STAT_CableSceneProxy_GetDynamicMeshElements");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_void___cdecl_FCableSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                ::__l2::StatPtr_STAT_CableSceneProxy_GetDynamicMeshElements,*pFVar16,
               L"STAT_CableSceneProxy_GetDynamicMeshElements","STATGROUP_Quick","STATCAT_Advanced",
               L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_void___cdecl_FCableSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar17 = _StatPtr_STAT_CableSceneProxy_GetDynamicMeshElements;
  if (_StatPtr_STAT_CableSceneProxy_GetDynamicMeshElements == (TStatIdData *)0x0) {
    pFVar16 = ::FName::FName(&local_4d8,"STAT_CableSceneProxy_GetDynamicMeshElements");
    pTVar17 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_virtual_void___cdecl_FCableSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                          ::__l2::StatPtr_STAT_CableSceneProxy_GetDynamicMeshElements,*pFVar16,
                         L"STAT_CableSceneProxy_GetDynamicMeshElements","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  bVar6 = false;
  bVar7 = false;
  local_508.ComparisonIndex.Value = 0;
  local_508.Number = 0;
  FVar25 = *(FName *)&pTVar17->Name;
  bVar10 = false;
  bVar11 = false;
  if ((FVar25.ComparisonIndex.Value.Value != 0) || (FVar25.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_528.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_528._s_0,(pTVar17->StatDescriptionAnsi).Ptr);
      bVar6 = false;
      bVar7 = true;
      bVar10 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_520.ComparisonIndex.Value = FVar25.ComparisonIndex.Value.Value;
        local_520.Number = FVar25.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_520,(pTVar17->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CableComponent\\Source\\CableComponent\\Private\\CableComponent.cpp"
                   ,0x146);
        bVar6 = true;
        bVar7 = true;
        bVar10 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_510 = FVar25;
      FThreadStats::AddMessage(FVar25,CycleScopeStart);
      bVar10 = true;
      goto LAB_14f017f94;
    }
  }
  bVar7 = bVar11;
  bVar6 = bVar10;
  bVar10 = false;
  local_510 = local_508;
  FVar25 = local_508;
LAB_14f017f94:
  bVar11 = AllowDebugViewmodes();
  if ((bVar11) && ((param_2->EngineShowFlags).Wireframe != 0)) {
    bVar28 = 1;
  }
  else {
    bVar28 = 0;
  }
  this_00 = ::operator_new(0xe0);
  local_530 = (FColoredMaterialRenderProxy *)0x0;
  if (this_00 != (FColoredMaterialRenderProxy *)0x0) {
    FVar12 = FNameEntryId::FromValidEName((EName)local_4f8);
    uStack_514 = 0;
    local_518.Value = *(uint *)CONCAT44(extraout_var,FVar12.Value);
    local_4d0._0_8_ = ___xmm_3f8000003f8000003f00000000000000;
    local_4d0._8_8_ = _UNK_152242e48;
    pUVar2 = (GEngine->WireframeMaterial).field0_0x0.DebugPtr;
    if (pUVar2 == (UMaterial *)0x0) {
      pFVar18 = (FMaterialRenderProxy *)0x0;
    }
    else {
      pFVar18 = (FMaterialRenderProxy *)(**(code **)(pUVar2->_padding_ + 0x310))();
    }
    FVar5.Number = uStack_514;
    FVar5.ComparisonIndex.Value = local_518.Value;
    local_530 = FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                          (this_00,pFVar18,(FLinearColor *)&local_4d0._s_0,FVar5);
  }
  FMeshElementCollector::RegisterOneFrameMaterialProxy(param_4,(FMaterialRenderProxy *)local_530);
  if (bVar28 == 0) {
    local_530 = (FColoredMaterialRenderProxy *)(**(code **)(this->Material->_padding_ + 0x310))();
  }
  uVar9 = _UNK_150689648;
  uVar8 = ___xmm_3f800000000000000000000000000000;
  iVar14 = param_1->ArrayNum;
  uVar27 = 0;
  if (0 < iVar14) {
    do {
      if ((param_3 >> (uVar27 & 0x1f) & 1) != 0) {
        uVar13 = 0;
        if ((int)uVar27 < iVar14) {
          uVar13 = ~uVar27 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar14 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                 ::Add(&param_4->MeshBatchStorage,1);
        uVar13 = iVar14 / 0x49;
        uVar15 = 0;
        if ((int)uVar13 < (param_4->MeshBatchStorage).Chunks.Array.ArrayNum) {
          uVar15 = ~uVar13 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar26 = (ForElementType<FMeshBatchElement>)
                 ((ulonglong)(uint)(iVar14 % 0x49) * 0xe0 +
                 (longlong)
                 (param_4->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data[(int)uVar13]);
        if ((*(int *)((longlong)FVar26 + 0xa0) < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar29 = FVar26;
        if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar26 + 0x98) !=
            (ForElementType<FMeshBatchElement>)0x0) {
          FVar29 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar26 + 0x98);
        }
        *(FCableIndexBuffer **)((longlong)FVar29 + 0x18) = &this->IndexBuffer;
        *(uint *)((longlong)FVar26 + 0xd4) = *(uint *)((longlong)FVar26 + 0xd4) & 0xffffffbf;
        *(uint *)((longlong)FVar26 + 0xd4) = *(uint *)((longlong)FVar26 + 0xd4) | (uint)bVar28 << 6;
        *(FLocalVertexFactory **)((longlong)FVar26 + 0xa8) = &this->VertexFactory;
        *(FColoredMaterialRenderProxy **)((longlong)FVar26 + 0xb0) = local_530;
        paVar3 = &param_4->OneFrameResources->Next;
        aVar19 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                  )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x50,8);
        *(undefined8 *)((longlong)aVar19 + 8) = 0;
        *(undefined ***)aVar19 =
             &
             ___7__TObject_VFDynamicPrimitiveUniformBuffer_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
        ;
        TVar20.Next = *paVar3;
        do {
          *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
            *)((longlong)aVar19 + 8) = TVar20.Next;
          LOCK();
          aVar21 = *paVar3;
          bVar11 = TVar20.Next == aVar21;
          if (bVar11) {
            *paVar3 = aVar19;
            aVar21 = TVar20.Next;
          }
          UNLOCK();
          TVar20.Next = aVar21;
        } while (!bVar11);
        FDynamicPrimitiveUniformBuffer::FDynamicPrimitiveUniformBuffer
                  ((FDynamicPrimitiveUniformBuffer *)((longlong)aVar19 + 0x10));
        lVar24 = 9;
        local_4b8._368_8_ = uVar8;
        local_4b8._376_8_ = uVar9;
        pfVar22 = &(((FPrimitiveUniformShaderParametersBuilder *)local_4b8)->Parameters).
                   CustomPrimitiveData.Elements[0].field0_0x0._s_0.Z;
        local_4b8._448_8_ = uVar8;
        local_4b8._456_8_ = uVar9;
        do {
          ((TVector4<float>_u_0_s_0 *)(pfVar22 + -2))->X = 0.0;
          ((TVector4<float>_u_0_s_0 *)(pfVar22 + -2))->Y = 0.0;
          *pfVar22 = 0.0;
          pfVar22[1] = 1.0;
          pfVar22 = pfVar22 + 4;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        FPrimitiveSceneProxy::BuildUniformShaderParameters
                  ((FPrimitiveSceneProxy *)this,
                   (FPrimitiveUniformShaderParametersBuilder *)local_4b8);
        if ((param_4->RHICmdList == (FRHICommandList *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("RHICmdList",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                                ,0x46,L""), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FDynamicPrimitiveUniformBuffer::Set
                  ((FDynamicPrimitiveUniformBuffer *)((longlong)aVar19 + 0x10),
                   (FRHICommandListBase *)param_4->RHICmdList,
                   (FPrimitiveUniformShaderParametersBuilder *)local_4b8);
        *(undefined4 *)((longlong)FVar29 + 0x58) = 0;
        *(undefined8 **)((longlong)FVar29 + 8) = (undefined8 *)((longlong)aVar19 + 0x18);
        iVar14 = this->NumSegments;
        iVar1 = this->NumSides;
        *(undefined4 *)((longlong)FVar29 + 0x68) = 0;
        *(int *)((longlong)FVar29 + 0x5c) = iVar14 * iVar1 * 2;
        *(int *)((longlong)FVar29 + 0x6c) = (this->NumSegments + 1) * (this->NumSides + 1);
        *(uint *)((longlong)FVar26 + 0xd4) =
             ((byte)this->_padding_ & 1 ^ *(uint *)((longlong)FVar26 + 0xd4) & 0xfffffffe) &
             0xffffc07f;
        FMeshElementCollector::AddMesh(param_4,uVar27,(FMeshBatch *)FVar26);
        lVar24 = this->_padding_;
        pFVar23 = FMeshElementCollector::GetPDI(param_4,uVar27);
        FPrimitiveSceneProxy::RenderBounds
                  ((FPrimitiveSceneProxy *)this,pFVar23,&local_4f0->EngineShowFlags,
                   (TBoxSphereBounds<double,double> *)&this->_padding_,(lVar24 & 0x600) != 0);
        param_1 = local_4e8;
        param_3 = local_524;
      }
      iVar14 = param_1->ArrayNum;
      uVar27 = uVar27 + 1;
      FVar25 = local_510;
    } while ((int)uVar27 < iVar14);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar25,CycleScopeEnd);
  }
  return;
}

// GetDynamicRayTracingInstances @ 14f0184b0

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
FCableSceneProxy::GetDynamicRayTracingInstances
          (FCableSceneProxy *this,FRayTracingInstanceCollector *param_1)

{
  int *piVar1;
  TArray<FMeshBatch,TSizedDefaultAllocator<32>_> *pTVar2;
  float fVar3;
  double dVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  FSceneView *pFVar8;
  code *pcVar9;
  double dVar10;
  TConsoleVariableData<int> *pTVar11;
  TConsoleVariableData<int> *pTVar12;
  TConsoleVariableData<float> *pTVar13;
  ForAnyElementType FVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  bool bVar19;
  int iVar20;
  FRHICommandListBase *pFVar21;
  longlong lVar22;
  FRayTracingGeometry *pFVar23;
  undefined8 uVar24;
  FDynamicPrimitiveUniformBuffer *this_00;
  FMeshBatch *pFVar25;
  FRayTracingInstance *pFVar26;
  FScriptContainerElement *pFVar27;
  float *pfVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  FScriptContainerElement *pFVar32;
  double dVar33;
  undefined1 auStackY_7a8 [32];
  undefined4 local_750;
  undefined4 uStack_74c;
  int iStack_748;
  undefined4 uStack_744;
  FRayTracingInstance local_728;
  uint local_6b8;
  double local_6b0;
  double dStack_6a8;
  double local_6a0;
  undefined4 local_698;
  undefined4 uStack_694;
  int iStack_690;
  FRayTracingDynamicGeometryUpdateParams local_688;
  FRayTracingInstance local_5f8;
  ForAnyElementType local_588;
  undefined8 local_580;
  undefined1 local_578;
  uint local_574;
  uint local_570;
  uint local_56c;
  FRayTracingGeometry *local_568;
  undefined8 local_560;
  undefined1 local_558;
  undefined4 local_554;
  float local_548 [2];
  float afStack_540 [2];
  float local_538 [2];
  float afStack_530 [2];
  float local_528 [2];
  float afStack_520 [2];
  float local_518 [2];
  float afStack_510 [2];
  undefined1 local_508;
  FRHIResource *local_500;
  undefined1 local_4f8 [664];
  float local_260 [114];
  ulonglong local_98;
  
  pTVar11 = CVarRayTracingCableMeshes.Ref;
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_7a8;
  bVar18 = IsInParallelRenderingThread();
  if ((!bVar18) &&
     (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (pTVar11->ShadowedValue[1] == 0) {
    return;
  }
  pFVar27 = (param_1->Views).AllocatorInstance.Data;
  iVar5 = (param_1->Views).ArrayNum;
  if ((iVar5 < 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar18)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = param_1->VisibilityMap;
  local_6b8 = 0;
  if (uVar6 != 0) {
    for (; (uVar6 >> local_6b8 & 1) == 0; local_6b8 = local_6b8 + 1) {
    }
  }
  uVar29 = 0x20;
  if (uVar6 != 0) {
    uVar29 = local_6b8;
  }
  if ((((int)uVar29 < 0) || (iVar5 <= (int)uVar29)) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Views.IsValidIndex(FirstActiveViewIndex)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CableComponent\\Source\\CableComponent\\Private\\CableComponent.cpp"
                          ,0x1c8,
                          L"There should be at least one active view when calling GetDynamicRayTracingInstances(...)."
                         ), bVar18)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar31 = 0;
  uVar30 = 0;
  if ((int)uVar29 < iVar5) {
    uVar30 = ~uVar29 >> 0x1f;
  }
  if ((uVar30 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar18)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar11 = CVarRayTracingCableMeshesWPO.Ref;
  pFVar8 = *(FSceneView **)(pFVar27 + (longlong)(int)uVar29 * 8);
  if (this->bDynamicRayTracingGeometry) {
    bVar18 = IsInParallelRenderingThread();
    if ((!bVar18) &&
       (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pTVar12 = CVarRayTracingCableMeshesWPOCulling.Ref;
    if (pTVar11->ShadowedValue[1] != 1) goto LAB_14f01889a;
    bVar18 = true;
    bVar19 = IsInParallelRenderingThread();
    if ((!bVar19) &&
       (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar19)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pTVar13 = CVarRayTracingCableMeshesWPOCullingRadius.Ref;
    if (pTVar12->ShadowedValue[1] < 1) goto LAB_14f0188b6;
    local_6b0 = (double)this->_padding_;
    dStack_6a8 = (double)this->_padding_;
    local_6a0 = (double)this->_padding_;
    bVar18 = IsInParallelRenderingThread();
    if ((!bVar18) &&
       (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    dVar17 = local_6a0;
    dVar16 = dStack_6a8;
    dVar15 = local_6b0;
    dVar4 = (double)this->_padding_;
    bVar18 = false;
    fVar3 = pTVar13->ShadowedValue[1];
    if (0 < iVar5) {
      uVar30 = 1;
      do {
        if ((uVar6 & uVar30) != 0) {
          if ((iVar31 < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar19)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar22 = *(longlong *)pFVar27;
          local_6a0 = *(double *)(lVar22 + 0xbd8);
          dVar33 = *(double *)(lVar22 + 0xbc8) - dVar15;
          dVar10 = *(double *)(lVar22 + 0xbd0) - dVar16;
          if (SQRT(dVar10 * dVar10 + dVar33 * dVar33 + (local_6a0 - dVar17) * (local_6a0 - dVar17))
              <= (double)((float)dVar4 + fVar3)) {
            bVar18 = true;
          }
        }
        pFVar27 = pFVar27 + 8;
        uVar30 = uVar30 << 1 | (uint)((int)uVar30 < 0);
        iVar31 = iVar31 + 1;
      } while (iVar31 < iVar5);
      if (bVar18) goto LAB_14f0188b6;
    }
  }
  else {
LAB_14f01889a:
    bVar18 = false;
  }
  bVar19 = FRayTracingGeometry::IsValid(&this->StaticRayTracingGeometry);
  if (!bVar19) {
    return;
  }
  bVar19 = FRayTracingGeometry::IsEvicted(&this->StaticRayTracingGeometry);
  if (bVar19) {
    pFVar21 = (FRHICommandListBase *)
              FMeshElementCollector::GetRHICommandList((FMeshElementCollector *)param_1);
    FRayTracingGeometry::CreateRayTracingGeometry(&this->StaticRayTracingGeometry,pFVar21,Normal);
  }
  else {
    pFVar21 = (FRHICommandListBase *)
              FMeshElementCollector::GetRHICommandList((FMeshElementCollector *)param_1);
    FRayTracingGeometry::RequestBuildIfNeeded(&this->StaticRayTracingGeometry,pFVar21,Normal);
  }
LAB_14f0188b6:
  pFVar27 = (FScriptContainerElement *)0x0;
  lVar22 = 0x760;
  if (!bVar18) {
    lVar22 = 0x660;
  }
  pFVar23 = (FRayTracingGeometry *)((longlong)&this->_padding_ + lVar22);
  if ((pFVar23->Initializer).TotalPrimitiveCount != 0) {
    pTVar2 = &this->CachedRayTracingMaterials;
    pFVar25 = (FMeshBatch *)(pTVar2->AllocatorInstance).Data;
    iStack_748 = (this->CachedRayTracingMaterials).ArrayNum;
    local_728.Materials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_728.Materials.ArrayNum = 0;
    local_728.Materials.ArrayMax = 0;
    local_728.MaterialsView.DataPtr = (FMeshBatch *)0x0;
    local_728.MaterialsView.ArrayNum = 0;
    local_728.bApplyLocalBoundsTransform = false;
    local_728.bThinGeometry = false;
    local_728.InstanceLayer = NearField;
    local_728.bInstanceMaskAndFlagsDirty = true;
    local_728.NumTransforms = 0;
    local_728.PrimitiveInstanceIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_728.PrimitiveInstanceIndices.ArrayNum = 0;
    local_728.PrimitiveInstanceIndices.ArrayMax = 0;
    local_728.PrimitiveInstanceIndicesView.DataPtr = (uint *)0x0;
    local_728.PrimitiveInstanceIndicesView.ArrayNum = 0;
    local_728.InstanceTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_728.InstanceTransforms.ArrayNum = 0;
    local_728.InstanceTransforms.ArrayMax = 0;
    iVar31 = 0;
    if (this->bNeedsToUpdateRayTracingCache) {
      piVar1 = &(this->CachedRayTracingMaterials).ArrayMax;
      if ((this->CachedRayTracingMaterials).ArrayMax < 0) {
        DestructItems<FMeshBatch,int>(pFVar25,iStack_748);
        (this->CachedRayTracingMaterials).ArrayNum = 0;
        iVar20 = iVar31;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xe0,8,0,&pTVar2->AllocatorInstance,0,piVar1);
          iVar20 = (this->CachedRayTracingMaterials).ArrayNum;
        }
      }
      else {
        DestructItems<FMeshBatch,int>(pFVar25,iStack_748);
        (this->CachedRayTracingMaterials).ArrayNum = 0;
        iVar20 = 0;
      }
      if (*piVar1 < 1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xe0,8,1,&pTVar2->AllocatorInstance,iVar20,piVar1);
      }
      iVar20 = (this->CachedRayTracingMaterials).ArrayNum;
      if (iVar20 == *piVar1) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x8e0,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->CachedRayTracingMaterials).ArrayNum = iVar20 + 1;
      pFVar32 = (pTVar2->AllocatorInstance).Data + (longlong)iVar20 * 0xe0;
      DefaultConstructItems<FMeshBatch,int>(pFVar32,1);
      *(FLocalVertexFactory **)(pFVar32 + 0xa8) = &this->VertexFactory;
      uVar24 = (**(code **)(this->Material->_padding_ + 0x310))();
      *(undefined8 *)(pFVar32 + 0xb0) = uVar24;
      *(undefined4 *)(pFVar32 + 0xcc) = 0;
      *(uint *)(pFVar32 + 0xd4) =
           ((byte)this->_padding_ & 1 ^ *(uint *)(pFVar32 + 0xd4) & 0xfffffffe) & 0xffffc07f;
      bVar19 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,pFVar8);
      *(uint *)(pFVar32 + 0xd4) = *(uint *)(pFVar32 + 0xd4) & 0xff7fffff;
      *(uint *)(pFVar32 + 0xd4) = *(uint *)(pFVar32 + 0xd4) | (uint)bVar19 << 0x17;
      if (((this->_padding_ & 0x2000) != 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("!HasViewDependentDPG()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\PrimitiveSceneProxy.h"
                              ,0x29e,L""), bVar19)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      *(uint *)(pFVar32 + 0xd4) =
           ((uint)*(byte *)((longlong)&this->_padding_ + 2) << 10 ^ *(uint *)(pFVar32 + 0xd4)) &
           0x1c00 ^ *(uint *)(pFVar32 + 0xd4);
      if ((*(int *)(pFVar32 + 0xa0) < 1) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (*(FScriptContainerElement **)(pFVar32 + 0x98) != (FScriptContainerElement *)0x0) {
        pFVar32 = *(FScriptContainerElement **)(pFVar32 + 0x98);
      }
      *(FCableIndexBuffer **)(pFVar32 + 0x18) = &this->IndexBuffer;
      this_00 = FMeshElementCollector::AllocateOneFrameResource<FDynamicPrimitiveUniformBuffer>
                          ((FMeshElementCollector *)param_1);
      pfVar28 = &(((FPrimitiveUniformShaderParametersBuilder *)local_4f8)->Parameters).
                 CustomPrimitiveData.Elements[0].field0_0x0._s_0.Z;
      local_4f8._368_8_ = ___xmm_3f800000000000000000000000000000;
      local_4f8._376_8_ = _UNK_150689648;
      lVar22 = 9;
      local_4f8._448_8_ = ___xmm_3f800000000000000000000000000000;
      local_4f8._456_8_ = _UNK_150689648;
      do {
        ((TVector4<float>_u_0_s_0 *)(pfVar28 + -2))->X = 0.0;
        ((TVector4<float>_u_0_s_0 *)(pfVar28 + -2))->Y = 0.0;
        *pfVar28 = 0.0;
        pfVar28[1] = 1.0;
        pfVar28 = pfVar28 + 4;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      FPrimitiveSceneProxy::BuildUniformShaderParameters
                ((FPrimitiveSceneProxy *)this,(FPrimitiveUniformShaderParametersBuilder *)local_4f8)
      ;
      pFVar21 = (FRHICommandListBase *)
                FMeshElementCollector::GetRHICommandList((FMeshElementCollector *)param_1);
      FDynamicPrimitiveUniformBuffer::Set
                (this_00,pFVar21,(FPrimitiveUniformShaderParametersBuilder *)local_4f8);
      *(undefined4 *)(pFVar32 + 0x58) = 0;
      *(TUniformBuffer<FPrimitiveUniformShaderParameters> **)(pFVar32 + 8) = &this_00->UniformBuffer
      ;
      iVar20 = this->NumSides;
      iVar7 = this->NumSegments;
      *(undefined4 *)(pFVar32 + 0x68) = 0;
      *(int *)(pFVar32 + 0x5c) = iVar20 * iVar7 * 2;
      *(int *)(pFVar32 + 0x6c) = (this->NumSides + 1) * (this->NumSegments + 1);
      pFVar25 = (FMeshBatch *)(pTVar2->AllocatorInstance).Data;
      iStack_748 = (this->CachedRayTracingMaterials).ArrayNum;
      if ((iStack_748 < 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar19)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      this->bNeedsToUpdateRayTracingCache = false;
    }
    else {
      if ((iStack_748 < 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar19)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_728.bInstanceMaskAndFlagsDirty = false;
    }
    local_728.InstanceTransformsView.DataPtr = (TMatrix<double> *)&this->_padding_;
    local_750 = SUB84(pFVar25,0);
    uStack_74c = (undefined4)((ulonglong)pFVar25 >> 0x20);
    local_728.InstanceTransformsView._12_4_ = uStack_744;
    local_728.InstanceTransformsView.ArrayNum = 1;
    local_728.MaterialsView.ArrayNum = iStack_748;
    local_728.Geometry = pFVar23;
    local_728.MaterialsView.DataPtr = pFVar25;
    if ((bVar18) &&
       (lVar22 = (**(code **)((this->VertexFactory)._padding_ + 0x30))(),
       (*(uint *)(lVar22 + 0x38) & 0x400) != 0)) {
      iVar20 = (this->CachedRayTracingMaterials).ArrayNum;
      pFVar25 = (FMeshBatch *)(pTVar2->AllocatorInstance).Data;
      uVar30 = (this->VertexBuffers).PositionVertexBuffer.NumVertices + 1;
      local_588.Data = (FScriptContainerElement *)0x0;
      local_688.MeshBatches.AllocatorInstance.Data = pFVar27;
      if (iVar20 != 0) {
        local_580._0_4_ = iVar20;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xe0,8,iVar20,0,&local_588,iVar20,(int *)((longlong)&local_580 + 4));
        ConstructItems<FMeshBatch,FMeshBatch,int>(local_588.Data,pFVar25,iVar20);
        local_688.MeshBatches.AllocatorInstance.Data = local_588.Data;
        iVar20 = (int)local_580;
        iVar31 = local_580._4_4_;
      }
      local_688.NumTriangles = (pFVar23->Initializer).TotalPrimitiveCount;
      local_688.VertexBufferSize = uVar30 * 0xc;
      local_578 = 0;
      local_560 = 0;
      local_558 = 1;
      local_554 = 0;
      local_548[0] = UE::Math::TMatrix<float>::Identity.M[0][0];
      local_548[1] = UE::Math::TMatrix<float>::Identity.M[0][1];
      afStack_540[0] = UE::Math::TMatrix<float>::Identity.M[0][2];
      afStack_540[1] = UE::Math::TMatrix<float>::Identity.M[0][3];
      local_538[0] = UE::Math::TMatrix<float>::Identity.M[1][0];
      local_538[1] = UE::Math::TMatrix<float>::Identity.M[1][1];
      afStack_530[0] = UE::Math::TMatrix<float>::Identity.M[1][2];
      afStack_530[1] = UE::Math::TMatrix<float>::Identity.M[1][3];
      local_528[0] = UE::Math::TMatrix<float>::Identity.M[2][0];
      local_528[1] = UE::Math::TMatrix<float>::Identity.M[2][1];
      afStack_520[0] = UE::Math::TMatrix<float>::Identity.M[2][2];
      afStack_520[1] = UE::Math::TMatrix<float>::Identity.M[2][3];
      local_518[0] = UE::Math::TMatrix<float>::Identity.M[3][0];
      local_518[1] = UE::Math::TMatrix<float>::Identity.M[3][1];
      afStack_510[0] = UE::Math::TMatrix<float>::Identity.M[3][2];
      afStack_510[1] = UE::Math::TMatrix<float>::Identity.M[3][3];
      local_508 = 0;
      local_588.Data = (FScriptContainerElement *)0x0;
      local_580 = 0;
      local_688.bUsingIndirectDraw = false;
      local_688.Buffer = (FRWBuffer *)0x0;
      local_688.bApplyWorldPositionOffset = true;
      local_688.InstanceId = 0;
      local_688.WorldToInstance.M[0][0] = UE::Math::TMatrix<float>::Identity.M[0][0];
      local_688.WorldToInstance.M[0][1] = UE::Math::TMatrix<float>::Identity.M[0][1];
      local_688.WorldToInstance.M[0][2] = UE::Math::TMatrix<float>::Identity.M[0][2];
      local_688.WorldToInstance.M[0][3] = UE::Math::TMatrix<float>::Identity.M[0][3];
      local_688.WorldToInstance.M[1][0] = UE::Math::TMatrix<float>::Identity.M[1][0];
      local_688.WorldToInstance.M[1][1] = UE::Math::TMatrix<float>::Identity.M[1][1];
      local_688.WorldToInstance.M[1][2] = UE::Math::TMatrix<float>::Identity.M[1][2];
      local_688.WorldToInstance.M[1][3] = UE::Math::TMatrix<float>::Identity.M[1][3];
      local_688.WorldToInstance.M[2][0] = UE::Math::TMatrix<float>::Identity.M[2][0];
      local_688.WorldToInstance.M[2][1] = UE::Math::TMatrix<float>::Identity.M[2][1];
      local_688.WorldToInstance.M[2][2] = UE::Math::TMatrix<float>::Identity.M[2][2];
      local_688.WorldToInstance.M[2][3] = UE::Math::TMatrix<float>::Identity.M[2][3];
      local_688.WorldToInstance.M[3][0] = UE::Math::TMatrix<float>::Identity.M[3][0];
      local_688.WorldToInstance.M[3][1] = UE::Math::TMatrix<float>::Identity.M[3][1];
      local_688.WorldToInstance.M[3][2] = UE::Math::TMatrix<float>::Identity.M[3][2];
      local_688.WorldToInstance.M[3][3] = UE::Math::TMatrix<float>::Identity.M[3][3];
      local_688.bAlphaMasked = false;
      local_688.IndexBuffer.Reference = (FRHIBuffer *)0x0;
      local_500 = (FRHIResource *)0x0;
      local_688.MeshBatches.ArrayNum = iVar20;
      local_688.MeshBatches.ArrayMax = iVar31;
      local_688.NumVertices = uVar30;
      local_688.Geometry = pFVar23;
      local_574 = uVar30;
      local_570 = local_688.VertexBufferSize;
      local_56c = local_688.NumTriangles;
      local_568 = pFVar23;
      FRayTracingInstanceCollector::AddRayTracingGeometryUpdate(param_1,uVar29,&local_688);
      if (local_500 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_500);
      }
      DestructItems<FMeshBatch,int>((FMeshBatch *)local_588.Data,(int)local_580);
      if ((FMeshBatch *)local_588.Data != (FMeshBatch *)0x0) {
        FMemory::Free(local_588.Data);
      }
    }
    if (local_728.Materials.ArrayNum == 0) {
      local_698 = local_750;
      uStack_694 = uStack_74c;
    }
    else {
      if ((iStack_748 != 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("MaterialsView.Num() == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\RayTracingInstance.h"
                              ,0x27,L""), bVar18)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iStack_748 = local_728.Materials.ArrayNum;
      if ((local_728.Materials.ArrayNum < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar18)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    iStack_690 = iStack_748;
    if (((this->CachedRayTracingMaterials).ArrayNum != iStack_748) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("CachedRayTracingMaterials.Num() == RayTracingInstance.GetMaterials().Num()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CableComponent\\Source\\CableComponent\\Private\\CableComponent.cpp"
                            ,0x24b,L""), bVar18)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if ((((local_728.Geometry)->Initializer).Segments.ArrayNum !=
         (this->CachedRayTracingMaterials).ArrayNum) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("RayTracingInstance.Geometry->Initializer.Segments.Num() == CachedRayTracingMaterials.Num()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CableComponent\\Source\\CableComponent\\Private\\CableComponent.cpp"
                            ,0x24e,
                            L"Segments/Materials mismatch. Number of segments: %d. Number of Materials: %d."
                           ), bVar18)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (0 < iVar5) {
      do {
        uVar29 = (uint)pFVar27;
        if ((uVar6 >> (uVar29 & 0x1f) & 1) != 0) {
          pFVar26 = FRayTracingInstance::FRayTracingInstance(&local_5f8,&local_728);
          FRayTracingInstanceCollector::AddRayTracingInstance(param_1,uVar29,pFVar26);
        }
        pFVar27 = (FScriptContainerElement *)(ulonglong)(uVar29 + 1);
      } while ((int)(uVar29 + 1) < iVar5);
    }
    if (local_728.InstanceTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_728.InstanceTransforms.AllocatorInstance.Data);
    }
    if (local_728.PrimitiveInstanceIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_728.PrimitiveInstanceIndices.AllocatorInstance.Data);
    }
    FVar14.Data = local_728.Materials.AllocatorInstance.Data;
    DestructItems<FMeshBatch,int>
              ((FMeshBatch *)local_728.Materials.AllocatorInstance.Data,local_728.Materials.ArrayNum
              );
    if ((FMeshBatch *)FVar14.Data != (FMeshBatch *)0x0) {
      FMemory::Free(FVar14.Data);
    }
  }
  return;
}

// GetMemoryFootprint @ 14f019330

uint __thiscall FCableSceneProxy::GetMemoryFootprint(FCableSceneProxy *this)

{
  return *(int *)((longlong)&this->_padding_ + 4) * 4 + 0x870;
}

// GetTypeHash @ 14f019840

ulong64 __thiscall FCableSceneProxy::GetTypeHash(FCableSceneProxy *this)

{
  return 0x1553b1928;
}

// GetViewRelevance @ 14f019850

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FCableSceneProxy::GetViewRelevance
          (FCableSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  FSceneViewFamily *pFVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar5 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar5 << 2;
  bVar5 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bShadowRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar5 << 3;
  bVar5 = FPrimitiveSceneProxy::ShouldRenderCustomDepth((FPrimitiveSceneProxy *)this);
  __return_storage_ptr__->bRenderCustomDepth = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar5 << 5;
  uVar8 = ((uint)*(byte *)((longlong)&this->_padding_ + 3) << 4 ^
          *(uint *)&__return_storage_ptr__->field_0x8) & 0x80 ^
          *(uint *)&__return_storage_ptr__->field_0x8;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar8;
  uVar7 = 0;
  if (*(char *)((longlong)&this->_padding_ + 1) != '\x01') {
    uVar7 = 0x2000;
  }
  uVar7 = uVar7 | uVar8 & 0xffffdfff;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar7;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       ((uint)*(byte *)((longlong)&this->_padding_ + 7) << 0xe ^ uVar7) & 0x4000 ^ uVar7;
  bVar5 = FReadOnlyCVARCache::bAllowStaticLighting;
  bVar6 = IsRichView(param_1->Family);
  if (((((bVar6) || (pFVar4 = param_1->Family, (pFVar4->EngineShowFlags).Collision != 0)) ||
       ((pFVar4->EngineShowFlags).Bounds != 0)) ||
      ((pFVar4->EngineShowFlags).VisualizeInstanceUpdates != 0)) ||
     ((((bVar5 != false && ((this->_padding_ & 0x400000) != 0)) &&
       (-1 < *(char *)((longlong)&this->_padding_ + 4))) || ((this->_padding_ & 0x2000) != 0)))) {
    __return_storage_ptr__->bDynamicRelevance = 1;
  }
  else {
    __return_storage_ptr__->bStaticRelevance = 1;
  }
  FMaterialRelevance::SetPrimitiveViewRelevance(&this->MaterialRelevance,__return_storage_ptr__);
  cVar2 = (char)this->_padding_;
  if ((((cVar2 == '\x02') || (cVar2 == '\x01')) ||
      (((this->_padding_ & 0x1000000000000) != 0 ||
       ((bVar3 = *(byte *)((longlong)&this->_padding_ + 2), (char)bVar3 < '\0' ||
        (uVar7 = 0, (bVar3 & 0x72) != 0)))))) &&
     ((uVar7 = 0, (__return_storage_ptr__->_padding_ & 0x400000000) != 0 &&
      (__return_storage_ptr__->bRenderInMainPass != 0)))) {
    uVar7 = 0x10;
  }
  __return_storage_ptr__->bVelocityRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 = *(uint *)&__return_storage_ptr__->field_0x8 | uVar7;
  return __return_storage_ptr__;
}

// HasRayTracingRepresentation @ 14f019a00

bool __thiscall FCableSceneProxy::HasRayTracingRepresentation(FCableSceneProxy *this)

{
  return this->bSupportRayTracing;
}

// IsRayTracingRelevant @ 14f019b50

bool __thiscall FCableSceneProxy::IsRayTracingRelevant(FCableSceneProxy *this)

{
  return true;
}

// IsRayTracingStaticRelevant @ 14f019b60

bool __thiscall FCableSceneProxy::IsRayTracingStaticRelevant(FCableSceneProxy *this)

{
  return false;
}

